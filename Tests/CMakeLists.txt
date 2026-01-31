add_executable(AxiomTests
)

target_link_libaries(AxiomTests PRIVATE
  AxiomCore
  GTest::gtest_main
)

gtest_discover_tests(AxiomTests)
