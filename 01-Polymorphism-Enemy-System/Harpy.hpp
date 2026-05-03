#pragma once
#include "Enemy.hpp"

using namespace std;

class Harpy : public Enemy {
    private:
    float height_;
    public:
    Harpy();
    Harpy(float x, float y, float strenght, float height);
    ~Harpy() override;
    float get_height() const;
    void set_height(float height);
    void show() override;
    void attack(float factor) override;
    void make_sound() override;
};
