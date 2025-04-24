#include <raylib.h>

int main() {
    InitWindow(800, 600, "Game");
    SetExitKey(0);

    while (!WindowShouldClose()) {
        ClearBackground(RAYWHITE);
        BeginDrawing();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}