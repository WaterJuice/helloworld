#!/bin/bash -ex

rm -rf /tmp/~build
cmake -H. -B/tmp/~build -DCMAKE_INSTALL_PREFIX=bin -G Ninja
cmake --build /tmp/~build --target install
