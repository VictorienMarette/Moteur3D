add_library(moteur3D Object3D.cpp ObjectMesh.cpp Matrix.cpp PositionQuaternion.cpp Camera.cpp Moteur3D.cpp ObjFileConvert.cpp)
target_link_libraries(moteur3D SDL2::SDL2)