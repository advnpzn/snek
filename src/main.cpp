#include <iostream>

#include <raylib.h>

int main() {

    constexpr int screenWidth = 400;
    constexpr int screenHeight = 250;

    InitWindow(screenWidth, screenHeight, "snek");
    SetTargetFPS(60);



    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("snek", 175, 100, 20, DARKGREEN);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}