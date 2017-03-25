# SDL application

Simple DirectMedia Layer is a cross-platform development library designed to provide low level access to audio, keyboard, mouse, joystick, and graphics hardware via OpenGL and Direct3D. [http://www.libsdl.org]

## requirements

```libsql2-dev```

## compiling and running

To compile this app, first create a directory where your build files are stored (most folks call it `build`)

```
mkdir build
cd build
cmake ..
cd ..
```

this step is needed only once, if you already have your build dir then you can compile and run your app

```
make -C build && ./build/sdl
```

