cmake_minimum_required(VERSION 3.10)

project(MolecularRandomWalk VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(OpenGL REQUIRED)
find_package(glfw3 REQUIRED)
find_package(GLEW REQUIRED)

include_directories(include)

add_executable(MolecularVis
    src/main.cpp
    src/engine/Particle.cpp
    src/render/Renderer.cpp
)

target_link_libraries(MolecularVis
    PRIVATE
    OpenGL::GL
    glfw
    GLEW::GLEW
)