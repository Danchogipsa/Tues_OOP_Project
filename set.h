#ifndef SET_H
#define SET_H

#include <iostream>

using namespace std;

class Set {
private:
    int reps;
    double weight;
public:
    Set(int reps, double weight);
    int getReps();
    double getWeight();
    void showSet();
};

#endif