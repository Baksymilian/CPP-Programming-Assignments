#include "Harpy.hpp"

Harpy::Harpy() : Enemy(), height_(0.0){}
Harpy::Harpy(float x, float y, float strenght, float height) : Enemy(x,y,strenght), height_(height){}
Harpy::~Harpy(){
    cout<< "Harpy destroyed! "<<endl;
}
float Harpy::get_height() const {return height_;}
void Harpy::set_height(float height) {height_=height;}
void Harpy::show() {
    cout<< "The Harpy is at point (" << x_ << "," << y_<< ") and its height is " << height_ << "\n";
}
void Harpy::make_sound() {
    cout<< "Harpy's yell" << endl;

}
void Harpy::attack(float factor){
    strenght_-=strenght_ *factor;
    height_ = 1.85;
    make_sound();
}
