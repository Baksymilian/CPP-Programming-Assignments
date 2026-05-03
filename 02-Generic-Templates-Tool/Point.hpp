#pragma once
#include <iostream>

using namespace std;

template <typename T>
class Point {

    private:

    T x_;
    T y_;
    
    public:

    Point(T x = 0, T y = 0);
    ~Point();

    T getX() const;
    T getY() const;
    void setX(T x);
    void setY(T y);

    void pokaz() const;
};
template <typename T>
Point<T>::Point(T x, T y) : x_(x), y_(y) {}
template <typename T>
Point<T>::~Point(){}
template <typename T>
T Point<T>::getX() const{
    return x_;
}
template <typename T>
T Point<T>::getY() const{
    return y_;
}
template <typename T>
void Point<T>::setX(T x){
    x_=x;
}
template <typename T>
void Point<T>::setY(T y){
    y_=y;
}
template <typename T>
void Point<T>::pokaz() const{
    cout<< "(" << x_ << ", " << y_ << ")";
}