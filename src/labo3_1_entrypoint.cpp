#include "entrypoint.h";
#include "raylib.h";


//Creer votre class Engin ici et appeler une fonction start que vous définisser à la classe dans la fonction raylib_start plus bas.
void raylib_start(void){
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1200;
    const int screenHeight = 1000;
    float x = 0;
    int direction = 1;


    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------

    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------
        if(x > 100){
            direction = -1;
        }
        if(x < -100){
            direction = 1;
        }
        x+=direction * 100 * GetFrameTime();
        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);
            //DrawTriangle()
           
            
            
            DrawTriangle(
                { x+1050,200},
                { x+1050, 380 },
                { x+1200, 200 }, GRAY);
            DrawTriangle(
                { x+500,150},
                { x+350, 300 },
                { x+600, 300 }, ORANGE);
            DrawTriangle(
                { x+880,230},
                { x+710, 400 },
                { x+1140, 400 }, ORANGE);
            DrawRectangle(x+660,200,250,150,GRAY);
            DrawRectangle(x+900,200,170,150,GRAY);
            DrawRectangle(x+800,200,10,150,BLACK);
            DrawRectangle(x+900,200,10,150,BLACK);
            DrawRectangle(x+1000,200,10,150,BLACK);
            DrawRectangle(x+350,300,150,150,BLUE);
            DrawRectangle(x+500,150,150,150,ORANGE);
            DrawRectangle(x+500,150,10,150,BLACK);
            DrawRectangle(x+500,300,150,150,BLUE);
            DrawRectangle(x+550, 400, 600, 100, RED);
            DrawCircle   (x+500,500,80,BLACK);
            DrawCircle   (x+505,500,25,YELLOW);
            DrawCircle   (x+800,500,80,BLACK);
            DrawCircle   (x+805,500,25,YELLOW);
            DrawCircle   (x+1000,500,80,BLACK);
            DrawCircle   (x+1005,500,25,YELLOW);
            DrawCircle   (x+340,400,25,YELLOW);
            
          
            DrawRectangle(1,(screenHeight/2+80),screenWidth,(screenHeight/2),DARKGRAY);



        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------
   
}