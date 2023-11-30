#ifndef CHIP8_H
#define CHIP8_H
#include <cstdint>
#include <chrono>
#include <random>
class Chip8
{
    public:
        uint8_t registers[16]{};
        uint8_t memory[4096]{};
        uint16_t index{};
        uint16_t pc{};
        uint16_t stack[16]{};
        uint8_t sp{};
        uint8_t delayTimer{};
        uint8_t soundTimer{};
        uint8_t Keys{};
        uint32_t video[64 * 32]{};
        std::default_random_engine randGen;
        std::uniform_int_distribution<uint8_t> randByte;
        Chip8();
        void LoadROM(char const* filename);
};
#endif // CHIP8_H
