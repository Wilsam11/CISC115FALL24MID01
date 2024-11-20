#include <iostream>
using namespace std;

int main() {
    // Define the enum for the days of the week
    enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

    // Loop through the days of the week
    for (int day = Sunday; day <= Saturday; day++) {
        cout << day << endl;  // Print the number for each day
    }

    // Print the final message
    cout << "There are 7 days in a week" << endl;

    return 0;
}
