#include "framework.h"
#include "Knight.h"
#include "Goblin.h"

void Knight::Attack(Goblin* goblin)
{
    cout << "�÷��̾ ������� " << _atk << "��ŭ�� ���ظ� �������ϴ�." << endl;
    goblin->TakeDamage(_atk, "����� ");  // Goblin���� ���ظ� ������, "Goblin"�� �̸����� ����
}


// Sound Manager�� ����