#include <iostream>
#include "user.h"
#include "user.cpp"
#include "workout.h"
#include "exercise.h"
#include "exercise.cpp"
#include "workout.cpp"
#include "set.cpp"
using namespace std;

//fail safe
int safeInputInt(string message) {
    int x;
    while (true) {
        cout << message;
        cin >> x;
            if (cin.fail()) {
                cin.clear();
                
                cin.ignore(6700, '\n');
                
                cout << "Invalid input! Try again.\n";
        } else {
                cin.ignore(6700, '\n');
            return x;
        }
    }
}

int safeInputDouble(string message) {
    double x;
    while (true) {
        cout << message;
        cin >> x;
            if (cin.fail()) {
                cin.clear();
                
                cin.ignore(6700, '\n');
                
                cout << "Invalid input! Try again.\n";
        } else {
                cin.ignore(6700, '\n');
            return x;
        }
    }
}


int  main(){
    User user("John");
    int choice;

    while(true) {
        cout << "\n==========Fitnes Tracker=====" <<endl;
        cout <<"1. Add workout/" <<endl;
        cout << "2. Show All Workouts/ " <<endl;
        cout << "3.Search/" <<endl;
        cout << "4. Show Personal Records(pr)/"<<endl;
        cout << "5. Delete workout/" <<endl;
        cout << "6.Exit/" <<endl;
        cout << "/n Enter/:";
        cin >> choice;
        cin.ignore();



         if (choice == 1) {

            string workoutName;
            string workoutDate;
            cout << "\nWorkout name- : ";
            cin >> workoutName;

            cout << "Workout date-: ";
            cin >> workoutDate;

            Workout workout(workoutName, workoutDate);
                string note;

            cout << "Enter note: ";
                
                cin.ignore();
                getline(cin, note);
            
                workout.setNote(note);



                int exerciseCount = safeInputInt("How many exercises-: ");// fail safe change

            for (int i=0;i<exerciseCount;i++) {

                string exerciseName;

                cout <<"\nExercise name- : ";
                cin.ignore();
                getline(cin, exerciseName);

                    Exercise exercise(exerciseName);

                    int setCount;
                cout << "How many sets: ";

                cin >> setCount;


                for (int j=0;j<setCount; j++) {

                    int reps =safeInputInt("Reps: ");              //
                    double weight = safeInputDouble("Weight: ");   //      FAIL SAFE CHANGE 
                                                                   //

                        exercise.addSet(reps, weight);
                }

                    workout.addExercise(exercise);
            }

                user.addWorkout(workout);

            cout << "\nWorkout added succesfuly" << endl;
//smqta vsichki workoutove napraveni ot user
            cout << "Total workouts: "
            << user.getWorkoutCount()
            << endl;
        }

        

     else if (choice==2) {
         user.showAllWorkouts();
    }

        else if (choice==3) {

                 //

            string workoutName;


            cout << "Enter workout name:";
            cin >> workoutName;

            user.searchWorkout(workoutName);
        }

        else if (choice== 4) {
            user.showPersonalRecords();
        }

        else if (choice == 5) {

        string workoutName;

        cout << "Enter workout name: ";
        cin >> workoutName;

        user.deleteWorkout(workoutName);

        }
        else if (choice==6) {
            cout << "Exiting." << endl;
            break;
        }

        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;

}

