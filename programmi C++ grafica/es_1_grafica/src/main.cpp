

/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   This example has been created using raylib 1.0 (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2013-2016 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "es_1_grafica");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Mattia", 340, 380, 40, BLACK);
        int x,y;
        for (int i = 0; i <10000 ; ++i) {
            x=GetRandomValue(0,400);
            y=GetRandomValue(0,400);
            DrawPixel(x,y,RED,9);
        }
        for (int i = 0; i < 10000; ++i) {
            x=GetRandomValue(400, 800);
            y=GetRandomValue(0, 400);
            DrawPixel(x,y,BLUE,9);
        }
        for (int i = 0; i < 10000; ++i) {
            x=GetRandomValue(0, 400);
            y=GetRandomValue(400, 800);
            DrawPixel(x,y,YELLOW,9);
        }
        for (int i = 0; i < 10000; ++i) {
            x=GetRandomValue(400, 800);
            y=GetRandomValue(400, 800);
            DrawPixel(x,y,GREEN,9);
        }
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

