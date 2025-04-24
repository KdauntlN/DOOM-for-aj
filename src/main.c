#include <raylib.h>

int scene = 0;

Vector2 trianglePoints[] = {{380, 205}, {380, 245}, {420, 225}};

int main() {
    InitWindow(800, 600, "Game");
    SetExitKey(0);

    while (!WindowShouldClose()) {
        ClearBackground(RAYWHITE);
        BeginDrawing();
        switch (scene) {
            default:
                CloseWindow();
            case 0:
                DrawText("SKYBOUND", 400 - (MeasureText("SKYBOUND", 60) / 2), 100, 60, BLACK);
                DrawTriangle(trianglePoints[0], trianglePoints[1], trianglePoints[2], RED);
        }
            EndDrawing();
    }
    CloseWindow();
    return 0;
}