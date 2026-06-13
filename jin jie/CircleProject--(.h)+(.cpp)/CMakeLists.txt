cmake_minimum_required(VERSION 3.10)

# 项目名字
project(CircleProject)

# 手动把你的 3 个源文件列出来，不给那些临时测试文件可乘之机
set(SOURCES 
    main.cpp 
    circle.cpp 
    point.cpp
)

# 生成可执行文件
add_executable(main ${SOURCES})