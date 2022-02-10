cmake_minimum_required(VERSION 3.5)
project(TaskEmployee LANGUAGES CXX)

set(TASK_EMPLOYEE_RESOURCES 
	EmployeeMain.cpp)

include_directories(Employee)

add_compile_options(-Wall)

add_subdirectory(Employee)
add_subdirectory(HelloWorld)

add_executable(RunEmployee ${TASK_EMPLOYEE_RESOURCES})

target_link_libraries(RunEmployee
	getFunctionObj
	setFunctionObj)