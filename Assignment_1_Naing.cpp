#include <iostream>
using namespace std;

int main() {
    //  variables
    int age = 11;
    float height = 5.8;
    char grade = 'A';
    string Fullname = "Myo Set Naing";
    
    //  a basic operation
    age = age + 10;
    
    // Output the results
    cout << "My name is : " << Fullname << endl;
    cout << "This is my first basic program in C++" << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "I want Grade in CISC115: " << grade << endl;

    // Implicit conversion
    float newAge = age;
    cout << "New Age as float: " << newAge << endl;

    // Explicit conversion
    int heightAsInt = static_cast<int>(height);
    cout << "Height as int: " << heightAsInt << endl;

    return 0;
}
