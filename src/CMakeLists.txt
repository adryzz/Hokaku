project(Hokaku)

set(Hokaku_SOURCES hokaku.c)

add_library(Hokaku MODULE ${Hokaku_SOURCES})

target_link_libraries(Hokaku /usr/lib/libobs.so)
