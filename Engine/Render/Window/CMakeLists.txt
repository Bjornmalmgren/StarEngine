#--------------------------------------------------------------------------
# render
#--------------------------------------------------------------------------

SET(files_Window
Window.h
Window.cpp)

SOURCE_GROUP("Window" FILES ${files_Window})


add_library(Window ${files_Window})
ADD_DEPENDENCIES(Window glfw)   
TARGET_LINK_LIBRARIES(Window PUBLIC Render glfw ${OPENGL_LIBS})