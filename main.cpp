/*
* Title:       Math Tutor V2
*Programer(s): Jesse Winberg & Khumo Nakedi
*Date:         10/10/2025
*Github URL:   https://github.com/Jwinb01/MathTutorv2
*Description:  UPDATE THE DESCRIPTION A simple math tutor that will eventually turn into a big program to help students with their math
*              randomized integer number with math types for the user to solve. The users name is read in the getline
*              and given either an addition, subtraction, multiplication or division operation problem. The if-else
*              statement assists for the user for if they get an answer wrong then the correct answer will be displayed.
*
*/




#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;


int main() {

    string userName;
    int userAnswer = 0;
    int leftNum = 0;
    int rightNum = 0;
    int mathType = 0;
    char mathOperator ='?';
    int totalNum = 0;
    int tempNum = 0;

    srand(time(0)); // Randomizing numbers
    leftNum = rand() % 9+1;
    rightNum = rand() % 9+1;
    mathType = rand() % 4+1;

    cout <<  "******************************************************************************************************" << endl; // Simply a header stating what this program is.
    cout <<  "*                               Welcome to the Simply Silly Math Tutor                               *" << endl;
    cout <<  "******************************************************************************************************" << endl;
    cout << endl;

    cout << "Fun math facts:" << endl;

    cout << "    * 1000 is the only number with an {A} in it form one to one thousand" << endl;   // listing a few math facts for the user's entertainment
    cout << "    * There is no Roman numeral for zero" << endl;
    cout << "    * The largest prime digit has over 24 million digits" << endl;
    cout << "    * In a room of 23 people, there is a greater than 50% chance that two will share the same birthday" << endl;
    cout << endl;    // formatting whitespace
    cout <<  "******************************************************************************************************" << endl;
    cout << endl;    // formatting whitespace

    cout << "What is your name?" << endl; // where the user puts there name
    getline (cin,userName); // gets the user's fullnames with getline
    cout << "Welcome, " << userName << ", to the Simply Silly Math Tutor!" << endl; // prints and welcomes the user
    cout << endl;

    switch (mathType) { // logic behind generating problems based of the math type
        case 1:
            mathOperator = '+';
            totalNum = leftNum + rightNum; // answer for addition
            break;
        case 2:
            mathOperator = '-';
                if (rightNum>leftNum) { // making sure that we won't get a negative number when subtracting
                    tempNum = leftNum;
                    leftNum = rightNum;
                    rightNum = tempNum;
        }
            totalNum = leftNum - rightNum; // answer for subtraction
            break;
        case 3:
            mathOperator = '*';
            totalNum = leftNum * rightNum; //answer for multiplication
            break;
        case 4:
            mathOperator = '/';
            totalNum = leftNum; // makes sure there is no fractions and correct answer
            leftNum = leftNum * rightNum; // makes sure there is no fractions
            break;
        default: // if math type is invalid and it ends the program
            cout << "invaild math type!" << endl;
            cout << "contact Jesse or Khumo for help" << endl;
        return -1;
    }
    cout << leftNum << " " << mathOperator << " " << rightNum << " = " << "?" << endl; // displays the question
    cin >> userAnswer; // user inputs their answer
        if (userAnswer == totalNum) { // logic to check if the user inputs the right answer
            cout << "Excellent Job Einstein!" << endl;
        } else {
            cout << "Incorrect sorry :(" << endl;
            cout << "The correct answer was " << totalNum << endl;
    }

    cout << endl; // formating white space
    cout << "That's all folks!" << endl; // showing that this code can not check answer
    cout << "Come back for version three to see what is in store!" << endl; // Showing that there is a version two coming
    cout << "end of program" << endl; // end of program

    cout << endl;
    return 0;
}


