#pragma once
#include "Creature.h"

class Player : public Creature
{
public:
    Player(int hp, int atk) : Creature(hp, atk) {} // ������ �߰�
};
