@echo off
rmdir /s /q %TEMP%/~build
cmake -H. -B%TEMP%/~build -DCMAKE_INSTALL_PREFIX=bin -G Ninja %CMAKE_FLAGS%
cmake --build %TEMP%/~build --target install
