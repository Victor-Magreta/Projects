/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <cctype>
#include <algorithm>
using namespace std;

// Function to count vowels
int countVowels(const string &text) {
    int vowels = 0;
    for (char ch : text) {
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowels;
        }
    }
    return vowels;
}

// Function to count words
int countWords(const string &text) {
    int words = 0;
    bool inWord = false;
    for (char ch : text) {
        if (isspace(ch)) {
            if (inWord) {
                ++words;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }
    if (inWord) ++words; // Count the last word if the string doesn't end with a space
    return words;
}

// Function to reverse a string
string reverseString(const string &text) {
    return string(text.rbegin(), text.rend());
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(string text) {
    bool capitalizeNext = false;
    for (char &ch : text) {
        if (capitalizeNext && isalpha(ch)) {
            ch = toupper(ch);
            capitalizeNext = false;
        } else if (isspace(ch)) {
            capitalizeNext = true;
        }
    }
    return text;
}

int main() {
    string fileData;
    ifstream file("C:\\Users\\bed_com_41_22\\Desktop\\harrah\\AdvancedComputerProgrammingModule.txt");

    // Check if the file is open
    if (!file.is_open()) {
        cerr << "Error!! File cant open!!" << endl;
        return EXIT_FAILURE;
    }

    // Read the contents of the file into fileData
    getline(file, fileData);
    file.close();

    // Output the number of vowels
    cout << "Number of vowels: " << countVowels(fileData) << "\n";

    // Output the number of words
    cout << "Number of words: " << countWords(fileData) << "\n";

    // Output the reversed string
    cout << "Reversed statement: " << reverseString(fileData) << "\n";

    // Output the statement with the second letter of each word capitalized
    cout << "Capitalized second letters: " << capitalizeSecondLetter(fileData) << "\n";

    return 0;
}