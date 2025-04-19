#include "framework.h"
#include "Knight.h"
#include "Goblin.h"

void Knight::Attack(Goblin* goblin)
{
    cout << "플레이어가 고블린에게 " << _atk << "만큼의 피해를 입혔습니다." << endl;
    goblin->TakeDamage(_atk, "고블린의 ");  // Goblin에게 피해를 입히고, "Goblin"을 이름으로 전달
}


// Sound Manager로 이전