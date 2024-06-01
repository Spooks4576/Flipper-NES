#pragma once

#include <SDL.h>
#include <SDL_ttf.h>

typedef struct GraphicsContext{
    SDL_Window* window;
    SDL_Renderer* renderer;
    SDL_Texture* texture;
    SDL_AudioDeviceID audio_device;
    TTF_Font* font;
    SDL_Rect dest;
    int width;
    int height;
    int screen_width;
    int screen_height;
    float scale;

} GraphicsContext;

void free_graphics(GraphicsContext* ctx);

void get_graphics_context(GraphicsContext* ctx);

void render_graphics(GraphicsContext* g_ctx, const uint32_t* buffer);