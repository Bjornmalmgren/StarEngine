#--------------------------------------------------------------------------
# engine
#--------------------------------------------------------------------------
ADD_LIBRARY(Engine INTERFACE)
TARGET_INCLUDE_DIRECTORIES(Engine INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
TARGET_LINK_LIBRARIES(Engine INTERFACE ${OPENGL_LIBS})
ADD_SUBDIRECTORY(Core)
ADD_SUBDIRECTORY(Render)
TARGET_LINK_LIBRARIES(Engine INTERFACE Core Render)

SET_TARGET_PROPERTIES(Core PROPERTIES FOLDER "Engine")
SET_TARGET_PROPERTIES(Render PROPERTIES FOLDER "Engine")
