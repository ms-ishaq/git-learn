
set(TASK_EMPLOYEE_RESOURCES
	 setFunction.cpp)
	 
include_directories(/home/malik/AdaptiveAutosarTraining/Employee)
add_compile_options(-Wall)

add_library(setFunctionObj OBJECT
	${TASK_EMPLOYEE_RESOURCES})