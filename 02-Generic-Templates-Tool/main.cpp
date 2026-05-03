#include <iostream>
#include <cstdlib>
#include <ctime>
#include <type_traits>
#include "Point.hpp"
#include "Comparison.hpp"

using namespace std;

template <typename T>
void losuj(Point<T>& p, T start, T end) {
    if constexpr (is_integral<T>::value) {
        int zasieg = (int)end - (int)start + 1;
        p.setX(start + (rand() % zasieg));
        p.setY(start + (rand() % zasieg));
    } else {
        T losX = start + (T)rand() / RAND_MAX * (end - start);
        T losY = start + (T)rand() / RAND_MAX * (end - start);
        p.setX(losX);
        p.setY(losY);
    }
}
template <typename T>
void losuj(Point<T>& p){
    losuj(p, static_cast<T>(0), static_cast<T>(50));
}
int main() {
    srand(time(NULL));
    cout << "=== Test INT:" << endl;
    Point<int> graczInt, wrogInt;
    
    losuj(graczInt);
    losuj(wrogInt,1,10); 
    Comparison<int> walkaInt(graczInt, wrogInt);
    walkaInt.pokazWszystko();
    cout<< "=== Test DOUBLE:" << endl;
    Point<double> graczDouble, wrogDouble;
    losuj(graczDouble);
    losuj(wrogDouble,1.1, 21.1);
    Comparison<double> walkaDouble(graczDouble, wrogDouble);
    walkaDouble.pokazWszystko();
    return 0;
}