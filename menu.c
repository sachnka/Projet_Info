#include "game.h"

BITMAP *background = NULL;

void load_menu_assets() {
    background = load_bitmap("jojo.bmp", NULL);

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
    textout_centre_ex(b, font, "2 - Charger une partie",
                       GAME_W/2, 300, makecol(200,200,200), -1);
    textout_centre_ex(b, font, "3 - Les règles",
                   GAME_W/2, 340, makecol(200,200,200), -1);
    textout_centre_ex(b, font, "4 - Quitter",
               GAME_W/2, 380, makecol(200,200,200), -1);

    blit(b, screen, 0, 0, 0, 0, GAME_W, GAME_H);
}

int menu_choix(BITMAP *buffer) {
    int choix = 0;

    while (!key[KEY_ESC]) {

        draw_menu(buffer);

        if (key[KEY_1]) { choix = 1; break; }
        if (key[KEY_2]) { choix = 2; break; }
        if (key[KEY_3]) { choix = 3; break; }
        if (key[KEY_4]) { choix = 4; break; }

        rest(10);
    }

    return choix;
}

