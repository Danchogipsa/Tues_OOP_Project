#include "set.h"

Set::Set(int reps, double weight) {
    this->reps = reps;
    this->weight = weight;
}

int Set::getReps() {
    return reps;
}

double Set::getWeight() {
    return weight;
}

void Set::showSet() {

cout << "Reps: "
     << reps
     << " | Weight: "
     << weight
     << "kg"
     << endl;
}