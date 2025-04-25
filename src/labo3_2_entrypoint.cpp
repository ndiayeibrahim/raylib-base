#include "entrypoint.h";
#include "raylib.h";


//Creer votre class Engin ici et appeler une fonction start que vous définisser à la classe dans la fonction raylib_start plus bas.
void raylib_start(void){
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "contoler un carrée");
    Vector2 squareposit = {screenWidth/2, screenHeight/2};
    const float taillecarre = 50.0f;
    const float vitessedeplacement = 5.0f;

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
       if(IsKeyDown(KEY_RIGHT)) squareposit.x += vitessedeplacement;
       if(IsKeyDown(KEY_LEFT)) squareposit.x -= vitessedeplacement;
       if(IsKeyDown(KEY_UP)) squareposit.y -= vitessedeplacement;
       if(IsKeyDown(KEY_DOWN)) squareposit.y += vitessedeplacement;

       
       if(squareposit.x > screenWidth ){
        squareposit.x = -taillecarre;
       }
       if (squareposit.x < -taillecarre){
        squareposit.x = screenWidth;
       }

       if(squareposit.y > screenHeight ){
        squareposit.y = -taillecarre;
       }
       if (squareposit.y < -taillecarre){
        squareposit.y = screenHeight;
       }
        BeginDrawing();

            ClearBackground(RAYWHITE);
            //DrawTriangle()
           
           
            DrawRectangle(squareposit.x, squareposit.y, taillecarre, taillecarre, BLUE);



        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
   
}