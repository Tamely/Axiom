set(ENGINE_SOURCES
)

add_library(AxiomCore STATIC ${ENGINE_SOURCES})

target_include_directories(AxiomCore PUBLIC
  "${CMAKE_CURRENT_SOURCE_DIR}"
)

target_compile_options(AxiomCore PRIVATE -O3 -march=native)
