#ifndef GAME_H
#define GAME_H

#include <allegro.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

#define GAME_W 800
#define GAME_H 600

void load_menu_assets();
void draw_menu(BITMAP *buffer);

#endif
