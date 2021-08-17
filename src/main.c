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
            // Camera
        Camera camera = { 0 };
    camera.position = (Vector3){ 4.0f, 2.0f, 4.0f };
    camera.target = (Vector3){ 0.0f, 1.8f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 60.0f;
    camera.projection = CAMERA_PERSPECTIVE;
        EndDrawing();
    }

    CloseWindow();

    /* Goodbye */
    return 0;
}
