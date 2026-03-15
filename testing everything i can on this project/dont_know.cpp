#include <iostream>
#include "raylib.h"
#define MAX_FRAME_DELAY 20
#define MIN_FRAME_DELAY 1

int main() {
  const int screenWidth = 640;
  const int screenHeight = 480;
  InitWindow(screenWidth, screenHeight, "my random project lol");
  SetTargetFPS(30);
  bool fullscreen_mode = false;
  SetExitKey(KEY_NULL); // completely removes the power from escape key to close app
  FLAG_WINDOW_UNDECORATED; // keeps window being windowed and prevents borderless windows
  FLAG_VSYNC_HINT; // activates vysnc
  FLAG_WINDOW_MINIMIZED;
  FLAG_WINDOW_RESIZABLE;
  SetConfigFlags(FLAG_WINDOW_RESIZABLE);
  MaximizeWindow();
  int UpdateText = 0;
  int LastText = 6;
const float FontSize = 50.0f;
const float xPos = GetScreenWidth() / 4.0f - FontSize*2;
const float yPos = GetScreenHeight() / 2.0f - FontSize;
// Define codepoints: Basic Latin + Russian alphabet

int codepoints[256] = { 0 };

int count = 0;



// Basic ASCII (English)

for (int i = 0; i < 95; i++) codepoints[count++] = 32 + i;  // ' ' to '~'



// Russian alphabet (Unicode range)

int russian[] = { 

    0x0410, 0x0411, 0x0412, 0x0413, 0x0414, 0x0415, 0x0401, 0x0416, 0x0417, 0x0418, 0x0419, 0x041A, 0x041B, 0x041C,

    0x041D, 0x041E, 0x041F, 0x0420, 0x0421, 0x0422, 0x0423, 0x0424, 0x0425, 0x0426, 0x0427, 0x0428, 0x0429,

    0x042A, 0x042B, 0x042C, 0x042D, 0x042E, 0x042F,  // Uppercase

    0x0430, 0x0431, 0x0432, 0x0433, 0x0434, 0x0435, 0x0451, 0x0436, 0x0437, 0x0438, 0x0439, 0x043A, 0x043B, 0x043C,

    0x043D, 0x043E, 0x043F, 0x0440, 0x0441, 0x0442, 0x0443, 0x0444, 0x0445, 0x0446, 0x0447, 0x0448, 0x0449,

    0x044A, 0x044B, 0x044C, 0x044D, 0x044E, 0x044F   // Lowercase

};

for (int i = 0; i < 66; i++) codepoints[count++] = russian[i];



Font custom_font_one = LoadFontEx("/home/amd/Documents/my cpp programs/testing everything i can on this project/NotoSans-ExtraCondensedExtraBoldItalic.ttf", 32, codepoints, count);
Vector2 v1 = {(float)GetRandomValue(10,350),(float)GetRandomValue(10,350)};
Vector2 v2 = {(float)GetRandomValue(10,350), (float)GetRandomValue(10,350)};
Vector2 v3 = {(float)GetRandomValue(10,350),(float)GetRandomValue(10,350)};

/*Color RandomColour = {
  (unsigned char)GetRandomValue(30,255),
  (unsigned char)GetRandomValue(30,255),
  (unsigned char)GetRandomValue(30,255),
};
*/

  while (!WindowShouldClose()) { // if window keeps running aka wont close
if (IsKeyDown(KEY_LEFT_CONTROL) && IsKeyPressed(KEY_B))
        {
if (IsWindowState(FLAG_WINDOW_UNDECORATED)) ClearWindowState(FLAG_WINDOW_UNDECORATED);
          else SetWindowState(FLAG_WINDOW_UNDECORATED);
        }


if (!IsWindowFullscreen() && fullscreen_mode==false && IsKeyPressed(KEY_ESCAPE)){
        std::cout << ".ERROR::1945. nothing happens when you press escape, bozo .ERROR::1945." << std::endl;
        } else if (IsWindowFullscreen() && fullscreen_mode==true && IsKeyPressed(KEY_ESCAPE)){
            ToggleFullscreen();
        }

 if (!IsWindowFullscreen() && fullscreen_mode==false && IsKeyPressed(KEY_F)){ // if window isnt on fullscreen, fullscreen mode is false and f key is pressed:
        fullscreen_mode = true;
        if (fullscreen_mode==true){
            ToggleFullscreen(); // if fullscreen mode is activated then activate fullscreen
        }
    }


    BeginDrawing();

      if (IsKeyPressed(KEY_ENTER) || (IsGestureDetected(GESTURE_TAP))){
      ClearBackground(BLACK);
      UpdateText++;
      if (UpdateText++){
      // draw first random triangle
      DrawTriangle(
      (Vector2){(float)GetRandomValue(10,350), (float)GetRandomValue(10,350)},
      (Vector2){(float)GetRandomValue(10,350), (float)GetRandomValue(10,350)},
      (Vector2){(float)GetRandomValue(10,350), (float)GetRandomValue(10,350)}, YELLOW);

      }
      // draw first random triangle

      DrawTriangle(
      (Vector2){(float)GetRandomValue(10,350), (float)GetRandomValue(10,350)},
      (Vector2){(float)GetRandomValue(10,350), (float)GetRandomValue(10,350)},
      (Vector2){(float)GetRandomValue(10,350), (float)GetRandomValue(10,350)}, RED);
      }


    }

    ClearBackground(BLACK);
    DrawFPS(20,460);


   if (UpdateText==LastText){
      UpdateText=0;
    }
    
    if (UpdateText==0){
        ClearBackground(BLACK);
        DrawTextEx(custom_font_one, "welcome to learn dynamic russian!", {xPos, yPos}, FontSize, 2, PINK);
    }

      else if (UpdateText==1){
        ClearBackground(BLACK);
        
        DrawTextEx(custom_font_one, "обeд = lunch", {xPos, yPos}, FontSize, 2, PINK);    
      }
    else if (UpdateText==2){
        ClearBackground(BLACK);
        DrawTextEx(custom_font_one, "Сегодня я изучаю русский язык \n Today I'm studying russian ", {xPos, yPos}, FontSize, 2, PINK);
      }
    else if (UpdateText==3){

        ClearBackground(BLACK);

        DrawTextEx(custom_font_one, "я учу русский язык \n i'm learning russian", {xPos, yPos}, FontSize, 2, PINK);
      }
    else if (UpdateText==4){

        ClearBackground(BLACK);

        DrawTextEx(custom_font_one, "я учу русский язык \n i'm learning russian", {xPos, yPos}, FontSize, 2, PINK);
      }
    else if (UpdateText==5){

        ClearBackground(BLACK);

        DrawTextEx(custom_font_one, "Я люблю кошек \n I love cats", {xPos, yPos}, FontSize, 2, PINK);
      }



    EndDrawing();    
    ClearBackground(BLACK);
    DrawFPS(20,460);


   if (UpdateText==LastText){
      UpdateText=0;
    }
    
    if (UpdateText==0){
        ClearBackground(BLACK);
        DrawTextEx(custom_font_one, "welcome to learn dynamic russian!", {xPos, yPos}, FontSize, 2, PINK);
    }

      else if (UpdateText==1){
        ClearBackground(BLACK);
        
        DrawTextEx(custom_font_one, "обeд = lunch", {xPos, yPos}, FontSize, 2, PINK);    
      }
    else if (UpdateText==2){
        ClearBackground(BLACK);
        DrawTextEx(custom_font_one, "Сегодня я изучаю русский язык \n Today I'm studying russian ", {xPos, yPos}, FontSize, 2, PINK);
      }
    else if (UpdateText==3){

        ClearBackground(BLACK);

        DrawTextEx(custom_font_one, "я учу русский язык \n i'm learning russian", {xPos, yPos}, FontSize, 2, PINK);
      }
    else if (UpdateText==4){

        ClearBackground(BLACK);

        DrawTextEx(custom_font_one, "я учу русский язык \n i'm learning russian", {xPos, yPos}, FontSize, 2, PINK);
      }
    else if (UpdateText==5){

        ClearBackground(BLACK);

        DrawTextEx(custom_font_one, "Я люблю кошек \n I love cats", {xPos, yPos}, FontSize, 2, PINK);
      }

  // end while loop

  CloseWindow();
  return 0;
}
