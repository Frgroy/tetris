#pragma once

void gotoxy(int, int);
void clrscr();

enum class Direction { LEFT, RIGHT, DOWN };
enum class Range { MIN_X = 1, MAX_X = 11, MID_X = 6, MIN_Y = 4, MAX_Y = 18 };
enum class Shape { BOMB, JOKER, STICK, SQUARE };
enum class KEYS { ROTATE = (int)'i', DOWN = (int)'k', LEFT = (int)'l', RIGHT = (int)'j', JOKER_STOP = (int)'s', HARD_DOWN = (int) ' ', ESC = 27, START = (int)'1', STOP = (int)'2', ACCELERATE = (int)'3', DECELERATE = (int)'4'  };


