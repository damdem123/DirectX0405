#pragma once
class Creature
{
public:
    Creature(int hp, int atk) : _hp(hp), _atk(atk) {} // ������ �߰�

    int GetHP() const { return _hp; }

    int GetATK() const { return _atk; }

    void TakeDamage(int damage, const char* creatureName) {
        _hp -= damage; 
        cout << creatureName <<"���� HP : " << _hp << "\n" << endl;
    }


    bool IsAlive() const { return _hp > 0; }

protected:
    int _hp;
    int _atk;
};
