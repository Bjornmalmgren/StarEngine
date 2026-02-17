#--------------------------------------------------------------------------
# render
#--------------------------------------------------------------------------

SET(files_Main
	main.cpp
	StarEngine.h
	StarEngine.cpp
)

SOURCE_GROUP("Main" FILES ${files_Main})
add_executable(Main ${files_Main})

target_link_libraries(Main 
    PRIVATE        # Use PRIVATE for internal linking
    Core
    Render
    Engine
    glfw
    ${OPENGL_LIBS}
)


