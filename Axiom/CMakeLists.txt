set(ENGINE_SOURCES
  Core/Application.cpp
  Core/Window.cpp
)

add_library(AxiomCore STATIC ${ENGINE_SOURCES})

target_include_directories(AxiomCore PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}"
  "${CMAKE_SOURCE_DIR}/ThirdParty/glfw/include"
)

target_link_libraries(AxiomCore PUBLIC 
  glfw opengl32
  stdc++exp
)

target_compile_options(AxiomCore PRIVATE -O3 -march=native)
