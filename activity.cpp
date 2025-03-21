#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int birthYear, birthMonth, birthDay;
    const int currentYear= 2025;
    const int currentMonth= 2;
    const int currentDay= 26;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your birth year: ";
    cin >> birthYear;
    cout << "Enter your birth month (1-12): ";
    cin >> birthMonth;
    cout << "Enter your birth day: ";
    cin >> birthDay;
    
   
    int age = currentYear - birthYear - ((currentMonth < birthMonth)||
	(currentMonth == birthMonth&& currentDay < birthDay));
	
	cout << "Name: " << name << endl;
	cout << "Age: " << age  <<  " years old" << endl;
    
    return 0;
}

