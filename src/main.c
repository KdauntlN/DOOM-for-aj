#include <raylib.h>
#include <rcamera.h>

int main() {
    InitWindow(800, 600, "Almost DOOM");

    Vector3 position = {0, 1, 0};

    Camera camera;
    camera.position = position;
    camera.target = (Vector3) {0, 1, 1};
    camera.up = (Vector3) {0, 1, 0};
    camera.projection = CAMERA_PERSPECTIVE;
    camera.fovy = 45;
    int cameraMode = CAMERA_FIRST_PERSON;
    DisableCursor();

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        BeginMode3D(camera);
        UpdateCamera(&camera, cameraMode);
        DrawGrid(10, 1);
        EndMode3D();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}