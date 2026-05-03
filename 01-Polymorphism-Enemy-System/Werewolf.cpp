#include "Werewolf.hpp"
using namespace std;

Werewolf::Werewolf() : Enemy(), radius_(0.0){}
Werewolf::Werewolf(float x, float y, float strenght, float radius) : Enemy(x,y,strenght), radius_(radius){}
Werewolf::~Werewolf(){
    cout<< "Werewolf destroyed! "<<endl;
}
float Werewolf::get_radius() const {return radius_;}
void Werewolf::set_radius(float radius) {radius_=radius;}
void Werewolf::show() {
    cout<< "The Werewolf is at point (" << x_ << "," << y_<< ") and its radius is " << radius_ << "\n";
}
void Werewolf::make_sound() {
    cout<< "Werewolf's growl!" << endl;

}
void Werewolf::attack(float factor){
    strenght_ -= strenght_ * factor;
    radius_ *= 1.5;
    make_sound();
}