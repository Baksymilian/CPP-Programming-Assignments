#pragma once
#include <iostream>

class Enemy {
    protected:
    float x_;
    float y_;
    float strenght_;
    Enemy ();
    Enemy (float x, float y, float strenght);
    public:
    virtual ~Enemy();
    float get_x() const;
    void set_x(float x);
    float get_y() const;
    void set_y(float y);
    float get_strenght() const;
    void set_strenght(float strenght);
    void update_position(float x, float y);
    virtual void show()=0;
    virtual void attack(float factor) =0;
    virtual void make_sound()=0;
};