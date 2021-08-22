/********************************************************************************
 * Code for Monkecraft!! A lot of code is also from Raylib examples so that's a *
 * big help and a big thank you.                                                *
 * (c) 2021 gnuoveryou and (c) 2013-2021 raysan5                                *
 ********************************************************************************/

#include <raylib.h>

int main(void)
{
    /* Init */
    InitWindow(800, 450, "Monkecraft");
    SetTargetFPS(60);
    // Camera
    Camera camera = { 0 };
    camera.position = (Vector3){ 4.0f, 2.0f, 4.0f };
    camera.target = (Vector3){ 0.0f, 1.8f, 0.0f };
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };
    camera.fovy = 60.0f;
    camera.projection = CAMERA_PERSPECTIVE;
    
    // 1st person
    
    SetCameraMode(camera, CAMERA_FIRST_PERSON);
    
    // Set exit key to a nonexistant key
    SetExitKey(KEY_NULL);

    /* While esc hasn't been pressed or the close window button hasn't been pressed */
    while (!WindowShouldClose())
    {
        UpdateCamera(&camera); // updates camera
        BeginDrawing();
            BeginMode3D(camera);
            ClearBackground(SKYBLUE);
            /* hello world */
            DrawText("Welcome to Monkecraft!", 20, 20, 10, GREEN);
        EndDrawing();
    }

    CloseWindow();

    /* Goodbye world */
    return 0;
}
