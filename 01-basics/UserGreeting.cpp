/**
 * @file user_greeting.cpp
 * @brief Simple C++ program that prompts the user for their name and prints a greeting.
 * @author Carolina / @YourGitHubUsername
 * @date 2026-10-28
 */

#include <iostream>
#include <string> 

using namespace std;

int main() {
    string userName;
    
    cout << "Please dear user type your name: ";
    cin >> userName;
    
    cout << "The user's name is: " << userName << endl;

    return 0;
}
