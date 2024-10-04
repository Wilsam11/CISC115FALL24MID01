#include <iostream>
using namespace std;

int main() {
    //  variables
    int age = 21;
    float height = 5.8;
    char grade = 'B';
    string Fullname = "Myo Set Naing";
    
    //  a basic operation
    age = age + 10;
    
    // Output the results
    cout << "Fullname: " << Fullname << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Grade: " << grade << endl;
    
    // Implicit conversion
    float newAge = age;
    cout << "New Age as float: " << newAge << endl;

    // Explicit conversion
    int heightAsInt = static_cast<int>(height);
    cout << "Height as int: " << heightAsInt << endl;

    return 0;
}
