set(TASK_EMPLOYEE_RESOURCES
	 getFunction.cpp)
	 

add_compile_options(-Wall)

add_library(getFunctionObj OBJECT
	${TASK_EMPLOYEE_RESOURCES})