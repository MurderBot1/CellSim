#include <vector>
#include "Sim.h"

struct Prey 
{
    float posX = 0;
    float posY = 0;
};

struct Predator 
{
    float posX = 0;
    float posY = 0;
};

struct Plant 
{
    float posX = 0;
    float posY = 0;
};

std::vector<Prey> PredatorPopulation(100);
std::vector<Prey> PreyPopulation(100);
std::vector<Prey> PlantPopulation(100);

Sim::Sim()
{
    Log::LogInfo("Starting Sim");


}

Sim::~Sim()
{
    Log::LogInfo("Ending Sim");
}
