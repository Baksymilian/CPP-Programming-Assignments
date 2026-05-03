#include <iostream>
#include "Enemy.hpp"

using namespace std;

Enemy::Enemy() : x_(0.0),y_(0.0),strenght_(0.0){}
Enemy::Enemy(float x, float y, float strenght) : x_(x),y_(y),strenght_(strenght){}
Enemy::~Enemy(){
    cout<< "Enemy destroyed! "<<endl;
}
float Enemy::get_x() const {return x_;}
float Enemy::get_y() const {return y_;}
float Enemy::get_strenght() const {return strenght_;}
void Enemy::set_x(float x) {x_=x;}
void Enemy::set_y(float y) {y_=y;}
void Enemy::set_strenght(float strenght) {strenght_=strenght;}
void Enemy::update_position(float x,float y) {
    x_+=x;
    y_+=y;
}
