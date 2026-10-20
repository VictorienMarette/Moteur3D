# Moteur3D

A simple 3D rendering engine written in C++ using SDL.

The engine allows you to create 3D scenes, import models from Blender, position objects in 3D space, and move the camera using keyboard input.

## 1. Creating a 3D scene

To create a scene, you need a camera, one or more 3D models, and a `Moteur3D` instance.

### Example

```cpp
#include <cmath>
#include <vector>
#include <SDL.h>

#include "Moteur3D.hpp"
#include "ObjFileConvert.hpp"

using namespace std;

int main(int argc, char* argv[]) {
    // Create the camera
    Camera camera(atan(1), atan(1), 1., 16., 600, 600);

    // Load a 3D model
    Mesh mesh = obj_file_convert("path/to/model.obj");

    // Place the model in the scene
    ObjectMesh object(Position(10., 0., 0.), mesh);

    // Register the objects
    vector<ObjectMesh*> meshes = {&object};
    vector<Object3D*> objects = {&object, &camera};

    // Run the engine
    Moteur3D engine(&camera, &objects, &meshes, 600, 600);
    engine.run();
}
```

### How it works

1. Create a camera to define the viewpoint.
2. Load a model using `obj_file_convert()`.
3. Create an `ObjectMesh` to position the model in the scene.
4. Register the objects and camera.
5. Initialize `Moteur3D` and call `engine.run()`.

To add more models, load additional `.obj` files, create more `ObjectMesh` objects, and add their pointers to the `meshes` and `objects` vectors.

## 2. Moving the camera

You can control the camera by creating a class that inherits from `Camera` and implements the `event_handeler()` method.

### Camera controller

```cpp
class Player : public Camera {
public:
    Player(double alpha, double beta, double near_plane,
           double far_plane, double screen_width,
           double screen_height)
        : Camera(alpha, beta, near_plane, far_plane,
                 screen_width, screen_height) {}

    void event_handeler(SDL_Event event) {
        if (event.type == SDL_KEYDOWN) {
            const char* keyName = SDL_GetKeyName(event.key.keysym.sym);

            if (*keyName == 'Z') {
                set_position(get_position() + Position(0.1, 0., 0.));
            }
            if (*keyName == 'S') {
                set_position(get_position() + Position(-0.1, 0., 0.));
            }
            if (*keyName == 'D') {
                set_position(get_position() + Position(0., 0.1, 0.));
            }
            if (*keyName == 'Q') {
                set_position(get_position() + Position(0., -0.1, 0.));
            }
        }
    }
};
```

Use `Player` instead of `Camera` when creating the scene:

```cpp
Player camera(atan(1), atan(1), 1., 16., 600, 600);
```

The rest of the scene setup stays the same.

### Controls

| Key | Movement |
|---|---|
| `Z` | Move along the positive first axis |
| `S` | Move along the negative first axis |
| `D` | Move along the positive second axis |
| `Q` | Move along the negative second axis |

Change the `0.1` increments to adjust the movement speed.

## 3. Importing 3D models

You can import 3D models created in Blender by exporting them as `.obj` files.

```cpp
Mesh mesh = obj_file_convert("path/to/model.obj");
ObjectMesh object(Position(10., 0., 0.), mesh);
```

The importer supports:
- **Vertices:** `v x y z`
- **Faces:** `f i j k l` (exactly four vertex indices per face)

Each quadrilateral face is split into two triangles. Texture coordinates, normals, materials and textures are ignored.

For compatibility, export your model from Blender as an `.obj` file with **quads only**.


## Notes

- Make sure SDL is installed and configured in your build environment.
