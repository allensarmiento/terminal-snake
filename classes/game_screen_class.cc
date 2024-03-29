#include "game_screen_class.h"

GameScreen::GameScreen() {}

// Get width and height values, then allocate memory
// for board space.
void GameScreen::SetGameDimensions(int width, int height) {
  game_width = width;
  game_height = height;
  game_screen = new char*[game_height];
  for (int i = 0; i < game_height; i++) {
    game_screen[i] = new char[game_width];
  }
}

// Return the game screen.
char** GameScreen::GetGameScreen() {
  return game_screen;
}

// Initialize the game screen to an empty game board.
void GameScreen::InitGameScreen() {
  for (int i = 0; i < game_height; i++) {
    for (int j = 0; j < game_width; j++) {
      if (i == 0 || i == game_height-1 || j == 0 || j == game_width-1) {
        game_screen[i][j] = '*';
      } else {
        game_screen[i][j] = ' ';
      }
    }
  }
}

// Deallocate pointer data.
GameScreen::~GameScreen() {
  for (int i = 0; i < game_height; i++) {
    delete[] game_screen[i];
  }
  delete[] game_screen;
}
