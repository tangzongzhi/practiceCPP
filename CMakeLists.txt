
# INCLUDE_DIRECTORIES(
#   ${CMAKE_CURRENT_BINARY_DIR}
#   ${CMAKE_CURRENT_SOURCE_DIR}
# )


# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 项目信息
project (PracticeCPP)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(. DIR_SRCS)

# 添加 src 子目录
add_subdirectory(src)
# 指定生成目标
add_executable(PracticeCPP ${DIR_SRCS})
# 添加链接库
target_link_libraries(PracticeCPP SourceFiles)