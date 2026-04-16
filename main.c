#include "game.h"

int main() {
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, GAME_W, GAME_H, 0, 0);

    BITMAP *buffer = create_bitmap(GAME_W, GAME_H);

    load_menu_assets();

    int choix = menu_choix(buffer);
    switch (choix) {

        case 1:
            allegro_message("Nouvelle partie !");
            // TODO : lancer ton jeu ici
            break;

        case 2:
            allegro_message("Charger une partie !");
            // TODO : charger une sauvegarde
            break;

        case 3:
            load_regles_assets();
            afficher_regles(buffer);
            break;
        
        case 4:
            allegro_message("Quitter !");
            return 0;

        default:
            break;
    }

    destroy_bitmap(buffer);
    return 0;
}
END_OF_MAIN();
