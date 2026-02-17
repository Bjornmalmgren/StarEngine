#--------------------------------------------------------------------------
# render
#--------------------------------------------------------------------------

SET(files_Input
	Input.h
	Input.cpp
)

SOURCE_GROUP("Input" FILES ${files_Input})


add_library(Input ${files_Input})

ADD_DEPENDENCIES(Input glfw)   
TARGET_LINK_LIBRARIES(Input PUBLIC Core glfw ${OPENGL_LIBS})