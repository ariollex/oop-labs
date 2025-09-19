cmake_minimum_required(VERSION 3.10)

# Project name
project(oop_labs)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Установка Google Test
include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG v1.17.0
  TLS_VERIFY false
)
FetchContent_MakeAvailable(googletest)

if(TARGET_HOMEWORK)
message(STATUS "Target homework: ${TARGET_HOMEWORK}")
add_subdirectory(homeworks/${TARGET_HOMEWORK})
else()
# Building all homeworks
add_subdirectory(homeworks/LW_OOP_1)
# add_subdirectory(homeworks/LW_OOP_2)
# add_subdirectory(homeworks/LW_OOP_3)
# add_subdirectory(homeworks/LW_OOP_4)
# add_subdirectory(homeworks/LW_OOP_5)
# add_subdirectory(homeworks/LW_OOP_6)
# add_subdirectory(homeworks/LW_OOP_7)
endif()
