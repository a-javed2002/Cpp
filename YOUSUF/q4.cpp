#include <iostream>
#include <vector>

using namespace std;

class GameObject
{
protected:
    const string Name;

public:
    GameObject(const string &name) : Name(name) {}

    virtual void draw() = 0;
};

class Player : public GameObject
{
private:
    int Health;

public:
    Player(const string &name, int health) : GameObject(name), Health(health) {}
    int getHealth()
    {
        return Health;
    }
    void setHealth(int heal)
    {
        Health = heal;
    }
    virtual void draw() override
    {
        cout << "Drawing player " << Name << " with health " << Health << endl;
    }
    bool operator==(const Player &other)
    {
        return Health == other.Health;
    }
};

class Enemy : public GameObject
{
private:
    int Damage;

public:
    Enemy(const string &name, int dam) : GameObject(name), Damage(dam) {}
    int getDamage()
    {
        return Damage;
    }
    void setDamage(int dam)
    {
        Damage = dam;
    }
    virtual void draw() override
    {
        cout << "Drawing enemy " << Name << " with damage " << Damage << endl;
    }
};

class PowerUp : public GameObject
{
private:
    string Effect;

public:
    PowerUp(const string &name, const string &effect) : GameObject(name), Effect(effect) {}
    string &getEffect()
    {
        return Effect;
    }
    void setEffect(string &effect)
    {
        Effect = effect;
    }
    virtual void draw() override
    {
        cout << "Drawing power up " << Name << " with effect " << Effect << endl;
    }
};

class Game
{
private:
    vector<GameObject *> Objects;

public:
    void addGameObject(GameObject *obj)
    {
        Objects.push_back(obj);
    }
    void drawAll()
    {
        for (auto &obj : Objects)
        {
            obj->draw();
        }
    }
};

int main()
{
    Game game;

    Player player1("Player 1", 100);
    Player player2("Player 2", 80);

    Enemy enemy1("Enemy 1", 10);
    Enemy enemy2("Enemy 2", 5);

    PowerUp powerUp1("PowerUp 1", "Increase speed");
    PowerUp powerUp2("PowerUp 2", "Increase damage");

    game.addGameObject(&player1);
    game.addGameObject(&player2);
    game.addGameObject(&enemy1);
    game.addGameObject(&enemy2);
    game.addGameObject(&powerUp1);
    game.addGameObject(&powerUp2);

    game.drawAll();

    if (player1 == player2)
    {
        cout << "Player 1 and Player 2 have the same health" << endl;
    }
    else
    {
        cout << "Player 1 and Player 2 have different health" << endl;
    }

    return 0;
}