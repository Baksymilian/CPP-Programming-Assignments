#pragma once
#include "Enemy.hpp"
class Werewolf : public Enemy {
    private:
    float radius_;
    public:
    Werewolf();
    Werewolf(float x, float y, float strenght, float radius);
    ~Werewolf() override;
    float get_radius() const;
    void set_radius(float radius);
    void show() override;
    void attack(float factor) override;
    void make_sound() override;
};
