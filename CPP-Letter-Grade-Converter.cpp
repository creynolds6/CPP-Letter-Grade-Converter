#include <iostream>
#include <map>

using namespace std;

int main()
{
    double score; // For storing users score
    string UserGrade; // For storing users score converted to a letter grade

    cout << "Input test score: "; 
    cin >> score; // Take user input

    map<string, int> // Learned to create dictionaries in C++
        LetterGrades = { // List of all possible letter grades and their minimum scores
            {"A", 90},
            {"B", 80},
            {"C", 70},
            {"D", 60},
            {"F",0} 
        };

    for (const auto& v : LetterGrades) { // Loop through all LetterGrades and check to make sure the value is greater or equal to the minimum score listed in the map/dictionary
        if (score >= v.second) {
            UserGrade = v.first;
            break; // break For loop after finding answer
        }
    }
    if (UserGrade == "") { // If grade left blank (score is below 0)
       cout << "you suck pretty bad, we couldn't register a score. \n";
        return main(); // Loop
    }
    else if (score > 100) { // If score is above 100
        cout << score << " is out of the max range (100), try again. \n";
        return main(); // Loop
    }

    cout << "With a score of " << score << " You get a " << UserGrade << "\n"; // Output results
    return main(); // Loop
}