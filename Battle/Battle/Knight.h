#pragma once
#include "framework.h"
#include "Goblin.h"

class Knight : public Player
{
public:
	// ���漱�� : ����� �б����� Ŭ������� ǥ��
	Knight() : Player(100, 20) {} // HP 100, ATK 20���� ����

	void Attack(Goblin* goblin);
};

