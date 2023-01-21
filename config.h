/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define ${prefix} in .pc files at runtime */
#define ENABLE_DEFINE_PREFIX 1

/* Link library to all dependent libraries, not only directly needed ones */
#define ENABLE_INDIRECT_DEPS 1

/* Define to 1 if you have the <dirent.h> header file. */
#ifndef _MSC_VER
#define HAVE_DIRENT_H 1
#endif

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Define to 1 if you have the <inttypes.h> header file. */
#if !defined (_MSC_VER) || (_MSC_VER >= 1800)
#define HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#if (!defined(_MSC_VER) || (_MSC_VER >= 1600))
#define HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#ifndef _MSC_VER
#define HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef _MSC_VER
#define HAVE_UNISTD_H 1
#endif

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */
