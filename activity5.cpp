#include <iostream>
using namespace std;

int main() {
    double grade, sum = 0;
    int num_grades = 4;
    
    for (int i = 1; i <= num_grades; i++) {
        do {
            cout << "Enter grade " << i << " (0-100): ";
            cin >> grade;
            
            if (grade < 0 || grade > 100) {
                cout << "Invalid input! Please enter a grade between 0 and 100." << endl;
            }
        } while (grade < 0 || grade > 100);
        
        sum += grade;
    }
    
    double average = sum / num_grades;
    cout << "The average grade is: " << average << endl;
    
    return 0;
}

