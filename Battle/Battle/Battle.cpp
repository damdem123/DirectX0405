#include "framework.h"
#include "Knight.h"
#include "Goblin.h"

// Creature
//  - Player
//    -- Knight
//    -- Archer
//    -- Mage
//  - Monster
//    -- Goblin

// Knight를 만들고
// extra)Player는 3가지 직업 중 하나를 선택
// Knight와 고블린이 서로 죽을 때까지 싸움

class Battle
{
public:
    Battle(Knight* knight, Goblin* goblin)
        : _knight(knight), _goblin(goblin) {
    }

    void StartFight()
    {
        while (_knight->IsAlive() && _goblin->IsAlive()) {
            _knight->Attack(_goblin);
            if (_goblin->IsAlive()) {
                cout << "고블린이 플레이어에게 " << _goblin->GetATK() << "의 만큼의 피해를 입혔습니다." << endl;
                _knight->TakeDamage(_goblin->GetATK(), "플레이어의 ");
            }
        }

        if (_knight->IsAlive()) {
            cout << "고블린이 쓰러졌습니다." << endl;
            cout << "플레이어가 승리했습니다." << endl;
        }
        else {
            cout << "플레이어가 쓰러졌습니다." << endl;
            cout << "플레이어가 패배했습니다." << endl;
        }
    }

private:
    Knight* _knight;
    Goblin* _goblin;
};

int main()
{
    Knight* k = new Knight();
    Goblin* g = new Goblin();

    Battle* battle = new Battle(k, g);
    battle->StartFight();

    delete battle;
    delete g;
    delete k;

    return 0;
}