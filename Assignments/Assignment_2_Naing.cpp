#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string bookTitle = "To Kill a Mockingbird";  // Predefined book title
    string authorName = "Harper Lee";            // Predefined author
    double bookPrice = 14.99;                    // Predefined price

    // Display predefined book details
    cout << "----- Predefined Book Details -----" << endl;
    cout << setw(15) << left << "Title:" << bookTitle << endl;
    cout << setw(15) << left << "Author:" << authorName << endl;
    cout << setw(15) << left << "Price: $" << fixed << setprecision(2) << bookPrice << endl;

    // Collecting new book information from the user
    cout << "\nNow, enter your book information:" << endl;

    cout << "Enter book title: ";
    getline(cin, bookTitle);  // Collecting title with spaces

    cout << "Enter author's name: ";
    getline(cin, authorName);  // Collecting author name with spaces

    cout << "Enter book price: $";
    while (!(cin >> bookPrice)) {
        // Error handling for invalid input
        cin.clear();  // Clear the error flag
        cin.ignore(1000, '\n');  // Discard invalid input
        cout << "Invalid input. Please enter a valid price: $";
    }

    // Displaying user-entered book information neatly formatted
    cout << "\n----- Your Book Details -----" << endl;
    cout << setw(15) << left << "Title:" << bookTitle << endl;
    cout << setw(15) << left << "Author:" << authorName << endl;
    cout << setw(15) << left << "Price: $" << fixed << setprecision(2) << bookPrice << endl;

    return 0;
}
