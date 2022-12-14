
GNU Radio out-of-tree module for the CS-330 lesson.

Website: http://www.csd.uoc.gr/~hy330/

Examples and blocks can be found at https://gitlab.com/surligas/gr-tutorial

## Installation

1. `git clone https://github.com/Evridiki-Zoe/gr-cs330project22.git`
2. `cd gr-cs330project22`
3. `mkdir build`
4. `cd build`
5. `cmake ..`
6. `make`
7. `sudo make install`

#### Advanced
By default, the **gr-cs330project22** module will use the default installation prefix.
This highly depends on the Linux distribution. You can use the `CMAKE_INSTALL_PREFIX`
variable to alter the default installation path.
E.g:

`cmake -DCMAKE_INSTALL_PREFIX=/usr ..`

Another common control option is the library sugffix of the Linux distribution.
There are distributions like Fedora, openSUSE, e.t.c that the their 64-bit version
use the `lib64` folder to store the 64-bit versions of their dynamic libraries.
On the other hand, distributions like Ubuntu do the exact opposite. They use
`lib` directory for the libraries of the native architecture and place the 32-bit versions
on the `lib32` directory. In any case the correct library directory suffix
can be specified with the `LIB_SUFFIX` variable. For example:

`cmake -DLIB_SUFFIX=64 -DCMAKE_INSTALL_PREFIX=/usr ..`

will install the libraries at the `/usr/lib64` directory.
