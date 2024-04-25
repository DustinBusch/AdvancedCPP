/* Copyright 2024, Author: Dustin Busch*/

#include <ncurses.h>
#include <iostream>

int main() {
  initscr();
  mvaddstr(LINES/2, COLS/3, "The chance that 2 out of 23 have");
  mvaddstr(LINES/2+1, COLS/3, "the same birthdaz is about 0.5. wow.");
  getch();
  endwin();
  return 0;
}
