#include "raylib.h"

void quadrati(int w, int h){
    int x = 20, y = 20, contatore = w/2;
    while (x < contatore) {
        w -= 50;
        h -= 50;
        DrawRectangle(x, y, w, h, BLACK);
        x += 25;
        y += 25;
        w -= 50;
        h -= 50;
        DrawRectangle(x, y, w, h, WHITE);
        x += 25;
        y += 25;
    }
}

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Multiple Squares");

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

        quadrati(screenWidth, screenHeight);

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

