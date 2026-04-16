#include "game.h"

BITMAP *background = NULL;

void load_menu_assets() {
    background = load_bitmap("image/jojo.bmp", NULL);

    if (!background) {
        allegro_message("Impossible de charger jojo.bmp !");
    }
}

void draw_menu(BITMAP *b) {

    if (background) {
        blit(background, b, 0, 0, 0, 0, GAME_W, GAME_H);
    } else {
        clear_to_color(b, makecol(0,0,0));
    }

    textout_centre_ex(b, font, "SUPER BULLES",
                      GAME_W/2, 200, makecol(255,255,255), -1);

    textout_centre_ex(b, font, "1 - Nouvelle partie",
                      GAME_W/2, 260, makecol(200,200,200), -1);

    blit(b, screen, 0, 0, 0, 0, GAME_W, GAME_H);
}
