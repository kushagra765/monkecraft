#include <raylib.h>

int main(void)
{
    /* Init */
    InitWindow(800, 450, "Monkecraft");
    SetTargetFPS(60);

    /* While esc hasn't been pressed or the close window button hasn't been pressed */
    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BROWN);
            DrawText("Welcome to Monkecraft!", 190, 200, 20, GREEN);
            //drawCube()
        EndDrawing();
    }

    CloseWindow();

    /* Goodbye */
    return 0;
}
