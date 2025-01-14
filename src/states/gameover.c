#include "gameover.h"
#include "../utils/definitions.h"
#include "../game/airplane.h"
#include "video.h"
#include "input.h"
#include "time.h"

extern int game_state;

void update_gameover() {
    // Volver al menú si se presiona START
    if(gamepad_button_start() == 1) {
        reset_airplane();  // Reiniciar el estado del avión
        game_state = StateMenu;
    }
}

void render_gameover() {
    // Limpiar la pantalla con negro opaco
    clear_screen(BackgroundColor);
    
    // Seleccionar la fuente de la BIOS y color rojo
    select_texture(-1);
    set_multiply_color(RedColor);
    
    // Mostrar mensaje de game over
    print_at(ScreenCenterX - 45, ScreenCenterY - 20, "GAME OVER");
    
    // Hacer parpadear el texto usando el contador de frames
    if((get_frame_counter() / BlinkRate) % 2 == 0) {
        set_multiply_color(TextColor);
        print_at(ScreenCenterX - 90, ScreenCenterY + 20, "PRESS START TO CONTINUE");
    }
}