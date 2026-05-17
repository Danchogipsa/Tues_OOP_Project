#include "exercise.h"

Exercise::Exercise(string name) {
    this->name=name;
}

string Exercise::getName() {
    return name;
}

void Exercise::addSet(int reps, double weight) {
    Set newSet(reps,weight);
    sets.push_back(newSet);
}

double Exercise::getBestWeight() {
    double best = 0;

    for (int i = 0; i < sets.size(); i++) {
        if (sets[i].getWeight()>best) {
            best = sets[i].getWeight();
        }
    }

    return best;
}

void Exercise::showExercise() {

    cout << "\nExercise: " << name << endl;

    for (int i=0; i<sets.size(); i++) {

        cout << "Set " << i+1 << ": ";

        sets[i].showSet();
    }
}