#include <stddef.h>

#include "entity.h"
#include "map_data.h"

int entity_count = 0;
entity* entities = NULL;
entity_geometry* entity_geo = NULL;

int texture_count = 0;
texture_data* textures = NULL;

int worldspawn_layer_count = 0;
worldspawn_layer* worldspawn_layers = NULL;
