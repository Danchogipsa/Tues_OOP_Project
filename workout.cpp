#include "workout.h"

Workout::Workout(string name, string date) {
    this->name = name;
    this->date = date;
}
string Workout::getName() {
       return name;
}

void Workout::setNote(string note) {
    this->note = note;

}

void Workout::addExercise(Exercise exercise) {

    exercises.push_back(exercise);
}



vector<Exercise>& Workout::getExercises() {
    return exercises;
}



void Workout::showWorkout() {
    cout << "\n==== WORKOUT =====" << endl;
    cout << "Workout Name: " << name << endl;
    cout << "Date: " << date << endl;
    cout << "Note: " << note << endl;

    for (int i = 0; i < exercises.size(); i++) {
        exercises[i].showExercise();
    }
}