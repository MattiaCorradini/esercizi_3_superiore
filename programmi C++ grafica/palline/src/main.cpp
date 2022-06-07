#include "raylib.h"

const int screenWidth = 1024;
const int screenHeight = 512;

float uniforme(float v, float t)
{
    float s;
    s = v * t;
    return s;
}

float accelerato(float v, float t)
{
    const float G = 9.81;
    float s;
    s = - 0.5 * G * t * t + v * t;
    return s;
}

int main(void)
{
    float x, y, x2;
    x2 = screenWidth;
    x = 0;
    y = 0;
    float vx, vy, vx2;
    vx = 65;
    vy = 65;
    vx2 = 80;
    float t = 0;
    // Initialization
    //--------------------------------------------------------------------------------------

    InitWindow(screenWidth, screenHeight, "Scacchiera");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        t += 0.1;
        x = uniforme(vx, t);
        y = accelerato(vy, t);
        x2 = uniforme (vx2, t);
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        //DrawText("Congrats! You created your first window!", 190, 200, 40, RED);

        DrawCircle(x, 512 - y, 20, GREEN);
        DrawCircle(screenWidth - x2, screenHeight - y, 20,BLUE);

        EndDrawing();

        if (y < 0)
            break;
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

