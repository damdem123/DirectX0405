#pragma once
#include "Creature.h"

class Monster : public Creature
{
public:
    Monster(int hp, int atk) : Creature(hp, atk) {} // 생성자 추가
};
