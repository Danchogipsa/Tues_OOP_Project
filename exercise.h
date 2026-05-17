#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>
#include <vector>
#include "Set.h"

using namespace std;

class Exercise {
private:
    string name;
    vector<Set> sets;
public:
    Exercise(string name);
    string getName();
    void addSet(int reps, double weight);
    double getBestWeight();
    void showExercise();
};

#endif