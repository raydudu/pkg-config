cmake_minimum_required(VERSION 3.13)
project(pkg-config VERSION 0.29.2.9)

find_path(GLIB_INCDIR glib.h
        HINTS ${CMAKE_INSTALL_PREFIX}
        PATH_SUFFIXES include/glib-2.0 include
        )
find_path(GLIB_CFGDIR glibconfig.h
        HINTS ${CMAKE_INSTALL_PREFIX}
        PATH_SUFFIXES lib/glib-2.0/include lib/x64/glib-2.0/include
        )

find_library(GLIB_LIBRARIES
        NAMES glib-2.0 glib-2 glib-2.0.0
        HINTS ${CMAKE_INSTALL_PREFIX}
        PATH_SUFFIXES lib lib/x64)

if (NOT GLIB_INCDIR OR NOT GLIB_CFGDIR OR NOT GLIB_LIBRARIES)
    message(FATAL_ERROR "The GLIB library to be precompiled and installed into: "
            "${CMAKE_INSTALL_PREFIX} before building ${PROJECT_NAME}"
            "GLIB can be built without ${PROJECT_NAME}")
endif()

add_executable(${PROJECT_NAME}
        main.c
        parse.c parse.h
        pkg.c pkg.h
        rpmvercmp.c rpmvercmp.h config.h)

target_include_directories(${PROJECT_NAME} PRIVATE ${GLIB_INCDIR} ${GLIB_CFGDIR})
target_link_libraries(${PROJECT_NAME} PRIVATE ${GLIB_LIBRARIES})
target_compile_definitions(${PROJECT_NAME} PRIVATE HAVE_CONFIG_H VERSION="${CMAKE_PROJECT_VERSION}"
        PKG_CONFIG_PC_PATH="${CMAKE_INSTALL_PREFIX}/lib/pkgconfig"
        PKG_CONFIG_SYSTEM_INCLUDE_PATH="${CMAKE_INSTALL_PREFIX}/inlude"
        PKG_CONFIG_SYSTEM_LIBRARY_PATH="${CMAKE_INSTALL_PREFIX}/lib"
        )

install(TARGETS ${PROJECT_NAME})