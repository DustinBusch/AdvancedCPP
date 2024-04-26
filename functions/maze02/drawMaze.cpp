/* Drawing functions implemented */
#include "drawMaze.h"  // functions to draw colored text in terminal
#include <random>

// initialize all the functions to start drawing in ncurses
void initNCurses() {
  initscr(); curs_set(0);  // ncurses: initialize window, then hide cursor
  noecho();  // don't show keys pressed in terminal
  start_color();  // use color
  init_pair(1, COLOR_BLUE, COLOR_GREEN);
  init_pair(2, COLOR_RED, COLOR_YELLOW);
}

void clearScreen() {
  attron(COLOR_PAIR(1));  // set color pair to 1
  std::random_device rd;
  std::mt19937 gen(rd());
  int min = 0;
  int max = 99;
  
  std::uniform_int_distribution<> dis(min, max);

  for ( auto line = 0; line < LINES; line++) {
    for ( auto col = 0; col < COLS; col++) {
      int randInt = dis(gen);
      if (randInt < 50) {
        mvaddch(line, col, '1');
      }
      else{
        mvaddch(line, col, '0');
      }
    }
  }
  attroff(COLOR_PAIR(1));
}

// draw a symbol at (x,y) with color colorpair
void draw(int x, int y, char symbol, int colorpair) {
  attron(COLOR_PAIR(colorpair));  // set color pair to 1
  mvaddch(y, x, symbol);  // ncurses function: draw '.' at (x,y)
  attroff(COLOR_PAIR(colorpair));
}
