#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to sort names alphabetically (case-sensitive)
void sortNames(string names[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (names[i] > names[j]) {
                swap(names[i], names[j]);
            }
        }
    }
}

// Function to search for a name in the list
bool searchName(const string names[], int size, const string& target) {
    for (int i = 0; i < size; ++i) {
        if (names[i] == target) {
            return true;
        }
    }
    return false;
}

// Function to find the longest name in the list
string findLongestName(const string names[], int size) {
    string longest = names[0];
    for (int i = 1; i < size; ++i) {
        if (names[i].length() > longest.length()) {
            longest = names[i];
        }
    }
    return longest;
}

// Function to count vowels in all names
int countVowels(const string names[], int size) {
    int vowelCount = 0;
    for (int i = 0; i < size; ++i) {
        for (char c : names[i]) {
            c = tolower(c); // Convert character to lowercase
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowelCount++;
            }
        }
    }
    return vowelCount;
}

int main() {
    int n;
    cout << "Enter the number of names: ";
    cin >> n;

    // Check if the number of names is zero or negative
    if (n <= 0) {
        cout << "\nEnter 0 names:\n";
        cout << "\nSorted List of Names:\n";
        cout << "\nEnter a name to search: \n not found in the list." << endl;
        cout << "\nLongest Name: " << endl;
        cout << "Total Vowel Count: 0" << endl;
        return 0;
    }

    cin.ignore(); // Clear the input buffer

    // Dynamically allocate memory for names
    string* names = new string[n];

    // Input names
    cout << "Enter " << n << " names:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    // Sort names
    sortNames(names, n);

    // Ask for a name to search
    string searchTarget;
    cout << "Enter a name to search: ";
    getline(cin, searchTarget);

    // Perform operations
    bool found = searchName(names, n, searchTarget);
    string longestName = findLongestName(names, n);
    int totalVowels = countVowels(names, n);

    // Output results
    cout << "\nSorted List of Names:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << names[i] << endl;
    }

    cout << "\nEnter a name to search: " << searchTarget << endl;
    if (found) {
        cout << searchTarget << " found in the list." << endl;
    } else {
        cout << searchTarget << " not found in the list." << endl;
    }

    cout << "\nLongest Name: " << longestName << endl;
    cout << "Total Vowel Count: " << totalVowels << endl;

    // Free allocated memory
    delete[] names;

    return 0;
}

