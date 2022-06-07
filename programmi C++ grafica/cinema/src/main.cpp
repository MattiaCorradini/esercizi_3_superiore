/*************************************************
 * Cinema Management                            *
 * by Scarsato Andrea e Corradini Mattia        *
 * with raylib graphic library                  *
 *************************************************/

#include <iostream>
#include <fstream>
#include <cmath>
#include "raylib.h"
using namespace std;

const int N=6; //file (righe)
const int M=15; //colonne

int pagina = 0;
int state = 0;

struct prenotazione{
    string nome;
    string cognome;
    int riga, colonna;
};

void inizializza_posti(int posti[][M]){
    int segnaposto;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            segnaposto=0; // 1 -> occupato
            posti[i][j] = segnaposto;
        }
    }
}

void mostra_prenotazione(int posti[][M]){
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cout<<posti[i][j];
        }
        cout<<endl;
    }
}

bool posto_occupato(int posti[][M], int & riga, int & colonna){
    int posto;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (posti[riga][colonna]==1)
                return false;
        }
    }
    return true;
}

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1600;
    const int screenHeight = 900;

    InitWindow(screenWidth, screenHeight, "Prenotiazioni Cinema NEGRamarO");

    Rectangle spettacolo1 = {533, 160, 533, 100};
    Rectangle spettacolo2 = {533, 410, 533, 100};
    Rectangle spettacolo3 = {533, 660, 533, 100};

    Rectangle posti [N][M];
    Vector2 pos = {81, 289};
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            posti[i][j] = {pos.x, pos.y, 20, 20};
            pos.x += 101;
        }
    }

    Rectangle back = {200, 80, 60, 60};

    Vector2 Mpoint = {0.0f, 0.0f};

    int m[N][M];
    inizializza_posti(m);
    mostra_prenotazione(m);
    int scelta=0;
    /*while(scelta==0){

    }*/

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        Mpoint = GetMousePosition();

        if (pagina == 0){
            if (CheckCollisionPointRec(Mpoint, spettacolo1)){
                if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                    pagina = 1;
            }
            if (CheckCollisionPointRec(Mpoint, spettacolo2)){
                if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                    pagina = 2;
            }
            if (CheckCollisionPointRec(Mpoint, spettacolo3)){
                if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                    pagina = 3;
            }

        }


        if (pagina == 1 || pagina == 2 || pagina == 3){
            if (CheckCollisionPointRec(Mpoint, back)){
                state = 1;
                if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                    pagina = 0;
            }
            else state = 0;
        }

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(RAYWHITE);

        if (pagina == 0){
            DrawText("Che spettaccolo vuoi vedere?", 425, 60, 55, GREEN);
            int y = 160;
            for (int i = 0; i < 3; ++i) {
                DrawRectangle(533, y, 533, 100, GREEN);
                y += 250;
            }
        }

        if (pagina == 1 || pagina == 2 || pagina == 3){
            DrawRectangle(200, 80, 60, 60, GRAY);
            if (state == 1)
                DrawRectangle(200, 80, 60, 60, RED);
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

