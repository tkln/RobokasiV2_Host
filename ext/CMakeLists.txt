add_subdirectory(gl3w)

add_library(imgui
    STATIC
    imgui/imgui.cpp
    imgui/imgui_draw.cpp
    imgui/imgui_widgets.cpp
    imgui/examples/imgui_impl_opengl3.cpp
    imgui/examples/imgui_impl_sdl.cpp
)

target_include_directories(imgui
    PUBLIC
    imgui
    imgui/examples
)

include_directories(${SDL2_INCLUDE_DIR})

target_link_libraries(imgui
    PRIVATE
    ${OPENGL_LIBRARIES}
    gl3w
    ${SDL2_LIBRARY}
)

