#pragma once
#include <iostream>
#include <cmath>
#include "Point.hpp"

using namespace std;

template <typename T>
class Comparison{

    private:

    Point<T> p1_;
    Point<T> p2_;
    T solution_;

    public:

    Comparison(Point<T> p1, Point<T> p2);
    ~Comparison();
    void pokazPunkty() const;
    void policzOdleglosc();
    Point<T> policzSrodek() const;
    T policzObwod() const;
    void pokazWszystko();

};
template <typename T>
Comparison<T>::Comparison(Point<T> p1,Point<T> p2) : p1_(p1), p2_(p2), solution_(0){}
template <typename T>
Comparison<T>::~Comparison(){}
template <typename T>
void Comparison<T>:: pokazPunkty() const{
    cout<< "P1: ";
    p1_.pokaz();
    cout<< endl;
    cout<< "P2: ";
    p2_.pokaz();
    cout<< endl;
}
template <typename T>
void Comparison<T>::policzOdleglosc() {
    T dx = p2_.getX() - p1_.getX();
    T dy = p2_.getY() - p1_.getY();
    solution_ = sqrt(dx * dx + dy * dy);
}
template <typename T>
Point<T> Comparison<T>::policzSrodek() const {
    T srodekX = (p1_.getX() + p2_.getX()) / 2;
    T srodekY = (p1_.getY() + p2_.getY()) / 2;
    return Point<T>(srodekX, srodekY);
}
template <typename T>
T Comparison<T>::policzObwod() const {
    return 3,1415 * solution_;
}
template <typename T>
void Comparison<T>::pokazWszystko(){
    policzOdleglosc();
    pokazPunkty();
    cout<< "Dystans: " << solution_ << endl;
    cout<< "Srodek okregu: ";
    policzSrodek().pokaz();
    cout<< "\nObwod: ";
    cout<< policzObwod() << endl;
}
