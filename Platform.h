#include <SDL2/SDL.h>
class Platform
{
public:
    Platform(/* args */);
    ~Platform();
private:
    SDL_Window* window{};
    SDL_Renderer* renderer{};
    SDL_Texture* texture{};
};

Platform::Platform(/* args */)
{
}

Platform::~Platform()
{
}
