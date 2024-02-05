#if(BUILD_TESTING)
add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE GTest::gtest_main moteur3D)

include(GoogleTest)
gtest_discover_tests(tests)

add_executable(testongoing testongoing.cpp)
target_link_libraries(testongoing PRIVATE moteur3D SDL2::SDL2)
#endif()