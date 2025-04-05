#pragma once
#include "framework.h"
#include "Goblin.h"

class Knight : public Player
{
public:
	// 전방선언 : 헤더를 읽기전에 클래스라는 표시
	Knight() : Player(100, 20) {} // HP 100, ATK 20으로 설정

	void Attack(Goblin* goblin);
};

