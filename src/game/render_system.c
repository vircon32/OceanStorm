#include "render_system.h"
#include "../utils/definitions.h"
#include "video.h"
#include "island.h"
#include "string.h"

// Variables externas de island.h
extern float[MaxIslands] island_x;
extern float[MaxIslands] island_y;
extern int[MaxIslands][MaxTilesX][MaxTilesY] island_tiles;
extern int num_islands;

void initialize_carrier() {
    select_texture(TextureCarrier);
    select_region(RegionCarrier);
    define_region(0, 0, CarrierWidth, CarrierHeight, CarrierWidth/2, CarrierHeight/2);
}
void initialize_dialog() {
    select_texture(TextureDialog);
    select_region(0);
    define_region(0, 0, UIDialogFrameWidth, UIDialogFrameHeight, UIDialogFrameWidth/2, UIDialogFrameHeight/2);
}
void initialize_portraits() {
    select_texture(TexturePortraitPlayer);
    select_region(0);
    define_region(0, 0, UIDialogPortraitSize, UIDialogPortraitSize, UIDialogPortraitSize/2, UIDialogPortraitSize/2);

    select_texture(TexturePortraitCommander);
    select_region(0);
    define_region(0, 0, UIDialogPortraitSize, UIDialogPortraitSize, UIDialogPortraitSize/2, UIDialogPortraitSize/2);

    select_texture(TexturePortraitSoldier);
    select_region(0);
    define_region(0, 0, UIDialogPortraitSize, UIDialogPortraitSize, UIDialogPortraitSize/2, UIDialogPortraitSize/2);

    select_texture(TexturePortraitBoss);
    select_region(0);
    define_region(0, 0, UIDialogPortraitSize, UIDialogPortraitSize, UIDialogPortraitSize/2, UIDialogPortraitSize/2);
}

void render_world(float camera_x, float camera_y) {
    // 1. Limpiar pantalla con el mar
    clear_screen(SeaColor);
    set_multiply_color(color_white);
    
    // 2. Dibujar el portaaviones
    select_texture(TextureCarrier);
    select_region(RegionCarrier);
    draw_region_at(StartingX - camera_x, StartingY - camera_y);
    
    // 3. Dibujar las islas
    render_islands(camera_x, camera_y);
}