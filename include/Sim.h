#ifndef SIM_H
#define SIM_H

#include "Util.h"
#include "Types.h"
#include "stdint.h"

#include <vector>

class Cell
{
    int16_t posX = 0;
    int16_t posY = 0;

    int Power = 1;
    int Speed = 1;
    int Health = 10;
};

struct Virus
{
    float posX = 0;
    float posY = 0;

    Cell Target;
};

class Sim
{
public:
    Sim();
    ~Sim();
private:
    int Nutrients;

    std::vector<Cell> Cells = std::vector<Cell>(1);
};

#endif