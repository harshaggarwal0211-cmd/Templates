#include <bits/stdc++.h>
using namespace std;

struct Person {
    // These are members of the struct
    string name;
    int age;
    char gender;

    // This is a member method or function of the struct
    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

int main() {
    Person p1;
    // Method 1 of initialization
    p1.name = "Hritik";
    p1.age = 49;
    p1.gender = 'M';

    // Method 2
    Person p2 = {"Mary", 25, 'F'}; // Order must be the same as declaration

    // Printing method
    cout << "Details of p1" << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Gender: " << p1.gender << endl;
    cout << endl;

    cout << "Details of p2" << endl;
    p2.printDetails(); // Member function calling

    return 0;
}