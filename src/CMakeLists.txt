cmake_minimum_required(VERSION 3.13)
project(MyStaticAnalyzer)

find_package(LLVM REQUIRED CONFIG)
find_package(Clang REQUIRED CONFIG)

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Include dirs: ${LLVM_INCLUDE_DIRS}")
message(STATUS "Clang include: ${CLANG_INCLUDE_DIRS}")

include_directories(SYSTEM
  ${LLVM_INCLUDE_DIRS}
  ${CLANG_INCLUDE_DIRS}
)

add_executable(analyze-tool
  /home/benedek-kaibas/Documents/static-analysis/src/computer-science/detect_unused_var.cpp
)

llvm_map_components_to_libnames(
  LLVM_LIBS
  support
  )

target_link_libraries(analyze-tool
  PRIVATE
  ${LLVM_LIBS}
  clangAST
  clangTooling
  clangBasic
  clangFrontend
)

