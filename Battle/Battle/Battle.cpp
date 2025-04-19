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

// SoundManager) 4/19 추가
// 플레이어 공격 및 피격 시 메세지 출력.


class SoundManager
{
private:
    SoundManager() {}
    ~SoundManager() {}

    static SoundManager* instance;

public:
    static SoundManager* GetInstance()
    {
        if (instance == nullptr) {
            instance = new SoundManager();
        }
        return instance;

    }

    void PlayerAttack() {
        cout << "플레이어가 공격 했습니다." << endl;
    }

    void PlayerHit() {
        cout << "고블린이 공격 했습니다." << endl;
    }

};

class Battle
{
public:
    Battle(Knight* knight, Goblin* goblin)
        : _knight(knight), _goblin(goblin) {
    }

    void StartFight()
    {
        while (_knight->IsAlive() && _goblin->IsAlive()) {
            SoundManager::GetInstance()->PlayerAttack();
            _knight->Attack(_goblin);

            if (_goblin->IsAlive()) {
                SoundManager::GetInstance()->PlayerHit();
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


SoundManager* SoundManager::instance = nullptr;

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