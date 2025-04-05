#pragma once
#include "Monster.h"

class Goblin : public Monster
{
public:
    Goblin() : Monster(50, 10) {} // HP 50, ATK 10으로 설정
};
