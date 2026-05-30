#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include "workout.h"

using namespace std;

class User {
private:
    string username;
    vector<Workout> workouts;
public:
    User(string username);
    void addWorkout(Workout workout);
    void showAllWorkouts();
    void searchWorkout(string workoutName);
    void showPersonalRecords();
    void deleteWorkout(string workoutName);
     int getWorkoutCount(); 
     void showProgress();
};

#endif