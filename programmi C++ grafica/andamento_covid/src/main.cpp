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

using namespace std;

void disegna(int v[], int n, int max, int width, int height){
    int x0, y0, x1, y1;
    for (int i = 1; i < n; ++i) {
        x0=(i-1)*width/n;
        x1=i*width/n;
        y0= height-(v[i-1]*height/max);
        y1= height-(v[i]*height/max);
        DrawLine(x0, y0, x1, y1, RED);
    }
}

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1200;
    const int screenHeight = 700;

    InitWindow(screenWidth, screenHeight, "grafici covid");
    const int MAX_DATI=2000;

    int dati_originali[MAX_DATI];
    int dati_filtrati[MAX_DATI];

    char titolo[100];

    int n, max_valore;

    carica(dati_originali, n, max_valore, titolo, "deceduti_giornalieri.csv");

    media_mobile(dati_originali, dati_filtrati, int n);

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

        disegna(dati_originali, n, max_valore, screenWidth, screenHeight);
        disegna(dati_filtrati, n, max_valore, screenWidth, screenHeight);


        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}

