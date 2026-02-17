#--------------------------------------------------------------------------
# render
#--------------------------------------------------------------------------

SET(files_Graphics
Graphics.h
Graphics.cpp)

SOURCE_GROUP("Graphics" FILES ${files_Graphics})


add_library(Graphics ${files_Graphics})

ADD_DEPENDENCIES(Graphics glfw)   
TARGET_LINK_LIBRARIES(Graphics PUBLIC Render glfw ${OPENGL_LIBS})