#include <iostream>
using namespace std;

//s=subject total
int s;

//g=grades
int g;

//Takes user input for their subject total
int main() {
  cout << "Enter how many subjects (graded) you take.";
  cin >> s;
  cout << s;
  //has user add all of the grades up
  cout << "Take all of your grades and add them into one number";
  cin >> g;
  //gives your gpa to you.
  cout << "Your CGPA is ";
  cout << g / s / 100 * 4;

}