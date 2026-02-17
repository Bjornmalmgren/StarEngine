#--------------------------------------------------------------------------
# render
#--------------------------------------------------------------------------

SET(files_Physics
Physics.h
Physics.cpp)

SOURCE_GROUP("Physics" FILES ${files_Physics})


add_library(Physics ${files_Physics})


ADD_DEPENDENCIES(Physics glfw)   
TARGET_LINK_LIBRARIES(Physics PUBLIC Core glfw ${OPENGL_LIBS})