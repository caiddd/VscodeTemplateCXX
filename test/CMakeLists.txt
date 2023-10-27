add_executable(test_hello test_hello.cc ../src/hello.cc)
target_link_libraries(test_hello GTest::gtest_main)
include(GoogleTest)
gtest_discover_tests(test_hello)