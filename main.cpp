#include <iostream>
#include <vector>
#include "Monster.h"
#include "Goblin.h"
#include "Slime.h"
#include "Player.h"
#include "Boar.h"
#include "World.h"

using namespace std;

int main()
{
    UWorld* MyWorld = new UWorld();

    MyWorld->SpawnActor(new AGoblin());
    MyWorld->SpawnActor(new ASlime());
    MyWorld->SpawnActor(new APlayer());
    MyWorld->SpawnActor(new ABoar());

    MyWorld->Run();

    delete MyWorld;
    MyWorld = nullptr;

 	return 0;
}