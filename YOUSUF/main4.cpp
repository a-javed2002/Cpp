#include <iostream>
#include <vector>

using namespace std;

class GameObject
{
protected:
    const string Name;

public:
    GameObject(const string &name) : Name(name) {}

    // pure virtual function
    virtual void draw() const = 0;
};

class Player : public GameObject
{
private:
    int Health;

public:
    Player(const string &name, int health) : GameObject(name), Health(health) {}
    int getHealth() const { return Health; }
    void setHealth(int health) { Health = health; }
    virtual void draw() const override
    {
        cout << "Drawing player " << Name << " with health " << Health << endl;
    }
    bool operator==(const Player &other) const
    {
        return Health == other.Health;
    }
};

class Enemy : public GameObject
{
private:
    int Damage;

public:
    Enemy(const string &name, int damage) : GameObject(name), Damage(damage) {}
    int getDamage() const { return Damage; }
    void setDamage(int damage) { Damage = damage; }
    virtual void draw() const override
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
    const string &getEffect() const { return Effect; }
    void setEffect(const string &effect) { Effect = effect; }
    virtual void draw() const override
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

/*
#include <iostream>
#include "GameObject.h"
#include "Player.h"
#include "Enemy.h"
#include "PowerUp.h"
#include "Game.h"

int main() {
  // Create instances of Player, Enemy, and PowerUp classes
  Player player1("John Doe", 100);
  Player player2("Jane Smith", 75);
  Enemy enemy1("Goblin", 20);
  PowerUp powerUp1("Health Boost", "Increases health by 25%");

  // Create an array of GameObject objects and add instances of the above classes to it
  const int NUM_OBJECTS = 4;
  GameObject* gameObjects[NUM_OBJECTS] = {&player1, &player2, &enemy1, &powerUp1};

  // Create an instance of the Game class and add the GameObject array to it
  Game game;
  game.setObjects(gameObjects, NUM_OBJECTS);

  // Call the DrawAll method to draw all the objects in the array
  game.drawAll();

  // Test the overloaded == operator for Player objects
  if (player1 == player2) {
    cout << "Player 1 and Player 2 have the same health." << endl;
  } else {
    cout << "Player 1 and Player 2 have different health." << endl;
  }

  return 0;
}

*/