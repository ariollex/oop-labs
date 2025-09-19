project(LW_OOP_1)

# Build
add_library(${PROJECT_NAME}_lib src/split_chocolate.cpp)
add_executable(${PROJECT_NAME}_exe main.cpp)
target_link_libraries(${PROJECT_NAME}_exe PRIVATE ${PROJECT_NAME}_lib)

# Build Tests
enable_testing()
add_executable(${PROJECT_NAME}_tests test/tests.cpp)
target_link_libraries(${PROJECT_NAME}_tests ${PROJECT_NAME}_lib gtest_main)
