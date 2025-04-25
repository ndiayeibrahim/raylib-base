#include "entrypoint.h"
#include "raylib.h"


//Creer votre class Engin ici et appeler une fonction start que vous définisser à la classe dans la fonction raylib_start plus bas.
void raylib_start(void){
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "contoler un carrée");
    // Vector2 squareposit = {screenWidth/2, screenHeight/2};
    Rectangle taillecarre = { 10, GetScreenHeight()/2.0f - 50, 100, 100 };
    int vitessedeplacementX = 5;
    int vitessedeplacementY = 4;
    

    int screenUpperLimit = 40;      // Top menu limits

    bool pause = false;             // Movement pause

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {

       if (!pause) taillecarre.x += vitessedeplacementX;
       if (!pause) taillecarre.y += vitessedeplacementY;

       // Bounce box on x screen limits
       if (((taillecarre.x + taillecarre.width) >= GetScreenWidth()) || (taillecarre.x <= 0)) vitessedeplacementX *= -1;
       if (((taillecarre.y + taillecarre.height) >= GetScreenHeight()) || (taillecarre.y <= 0)) vitessedeplacementY *= -1;

       if (IsKeyPressed(KEY_SPACE)) pause = !pause;


        BeginDrawing();

            ClearBackground(RAYWHITE);
            
            DrawRectangleRec(taillecarre, BLACK);
            
            DrawFPS(10, 10);
        

         

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
   
}