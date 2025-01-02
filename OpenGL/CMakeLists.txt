# 최소 CMake 버전 요구 사항 설정
cmake_minimum_required(VERSION 3.10)

# 프로젝트 이름과 버전 설정
project(GameEngine VERSION 1.0 LANGUAGES CXX)

# C++ 표준 설정 (C++17 사용)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# OpenGL 패키지 찾기
find_package(OpenGL REQUIRED)

# 헤더파일 디렉토리 포함
include_directories(
    ${CMAKE_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/include
)

# 소스 파일 설정
file(GLOB SOURCES 
    "src/*.cpp"
    "src/*.h"
)

# 실행 파일 출력 디렉토리 설정
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG ${CMAKE_BINARY_DIR}/Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE ${CMAKE_BINARY_DIR}/Release)

# 실행 파일 생성
add_executable(${PROJECT_NAME} ${SOURCES})

# GLFW 라이브러리 경로 설정
if(WIN32)
    target_link_libraries(${PROJECT_NAME} 
        PRIVATE 
        opengl32
        "${CMAKE_SOURCE_DIR}/include/lib/x64/libglfw3.a"
        -lgdi32
    )
endif()
