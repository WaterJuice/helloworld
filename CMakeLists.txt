cmake_minimum_required(VERSION 3.5.0)

project( HelloWorld )

set( FILES
    Source/HelloWorld.c )

add_executable( HelloWorld ${FILES} )

install(TARGETS HelloWorld DESTINATION .)
