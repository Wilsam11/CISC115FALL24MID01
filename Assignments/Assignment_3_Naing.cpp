#include <iostream>
#include <iomanip> // For setting precision

using namespace std;

int main() {
    int age, showtime, seatChoice;
    int loyaltyCard;
    double basePrice = 0.0;

    // Step 1: Get user's age and determine base price
    cout << "Enter your age: ";
    cin >> age;

    if (age < 0) {
        cout << "Invalid age entered!\n";
        return 1;
    } else if (age <= 12) {
        basePrice = 8.00;
    } else if (age <= 59) {
        basePrice = 12.00;
    } else {
        basePrice = 10.00;
    }

    // Step 2: Get showtime and apply discount if applicable
    cout << "Enter the showtime (24-hour format between 9AM - 5PM, e.g., 14 for 2 PM): ";
    cin >> showtime;

    if (showtime < 9 || showtime > 23) {
        cout << "Invalid showtime entered!\n";
        return 1;
    }

    if (showtime >= 9 && showtime <= 17) {
        basePrice *= 0.90; // Apply 10% discount
    }

    // Step 3: Get seat type using switch-case
    cout << "Choose seat type\n";
    cout << "1 for Standard\n";
    cout << "2 for Premium\n";
    cout << "3 for Combo\n";
    cout << "4 for Upgrade to gold member\n";
    cin >> seatChoice;

    switch (seatChoice) {
        case 1:
            // No extra charge for Standard
            break;
        case 2:
            basePrice += 5.00;
            break;
        case 3:
            basePrice += 7.00;
            break;
        case 4:
            basePrice += 10.00;
            break;
        default:
            cout << "Invalid seat type entered!\n";
            return 1;
    }

    // Step 4: Check if user has a loyalty card
    cout << "Do you have a loyalty card? (1 for Yes, 0 for No): ";
    cin >> loyaltyCard;

    if (loyaltyCard == 1) {
        basePrice *= 0.85; // Apply 15% discount
    }

    // Step 5: Display the final ticket price with two decimal places
    cout << fixed << setprecision(2);
    cout << "Final Ticket Price: $" << basePrice << endl;

    return 0;
}
