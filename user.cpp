#include "user.h"

User::User(string username) {
    this->username = username;
}
void User::addWorkout(Workout workout) {
    workouts.push_back(workout);
}

void User::showAllWorkouts() {
    if (workouts.empty()) {
            cout << "No workout found." << endl;
        return;
    }
    for (int i = 0; i < workouts.size(); i++) {
         workouts[i].showWorkout();
    }
}

void User::searchWorkout(string workoutName) {
             bool found = false; // 
    for (int i = 0; i < workouts.size(); i++) {

        if (workouts[i].getName() == workoutName) {
            workouts[i].showWorkout();

                found = true;
        }
    }

    if (!found) {
        cout << "Workout not found!" << endl;
    }
}

void User::showPersonalRecords() {
    cout << "\n=== Personal records by you =====" << endl;
    for (int i = 0; i < workouts.size(); i++) {

            vector<Exercise>& exercises = workouts[i].getExercises();
    for (int j = 0; j < exercises.size(); j++) {
            cout << exercises[j].getName()
                 << " -> Best Weight: "
                 << exercises[j].getBestWeight()
                 << "kg"
                 << endl;
        }
    }
}