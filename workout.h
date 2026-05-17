#ifndef WORKOUT_H
#define WORKOUT_H

#include <iostream>
#include <vector>
#include "exercise.h"

using namespace std;

class Workout {
private:
    string name;
    string date;
    vector<Exercise> exercises;

public:
    Workout(string name, string date);
    string getName();


    void addExercise(Exercise exercise);
    vector<Exercise>& getExercises();
    void showWorkout();
};

#endif