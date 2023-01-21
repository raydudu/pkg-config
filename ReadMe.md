# CMake based build system for pkg-config

pkg-config repository cloned from: https://gitlab.freedesktop.org/pkg-config/pkg-config.git  
All unnecessary files are removed.  
Static configuration added.  
Need in autotools removed.  
Requires CMake and Glib to be able to build.


## Building GLib

Download the latest release of Glib library from https://gitlab.gnome.org/GNOME/glib/-/releases

To build, unpack and go to source directory. Then:
```shell
rm -rf meson-build
mkdir meson-build
cd meson-build
meson setup ..
meson configure --pkgconfig.relocatable --prefix=~/.local
ninja -j8
meson install
```