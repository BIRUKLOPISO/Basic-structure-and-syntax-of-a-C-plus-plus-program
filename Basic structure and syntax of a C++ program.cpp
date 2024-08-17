#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaring and initializing variables
    string name;
    int age;
    double height;

    // Prompting the user for input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (in meters): ";
    cin >> height;

    // Displaying the user's information
    cout << "\nPersonal Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << " years" << endl;
    cout << "Height: " << height << " meters" << endl;

    // Conditional statement
    if (age < 18) {
        cout << "You are a minor." << endl;
    } else {
        cout << "You are an adult." << endl;
    }

    // Loop to display numbers from 1 to 5
    cout << "\nNumbers from 1 to 5:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}