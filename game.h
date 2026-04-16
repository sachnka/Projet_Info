#ifndef GAME_H
#define GAME_H

#include <allegro.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

#define GAME_W 1200
#define GAME_H 599

void load_menu_assets();
void draw_menu(BITMAP *buffer);
int menu_choix(BITMAP *buffer);
void load_regles_assets();
void afficher_regles(BITMAP *buffer);


#endif
