// Course: CS-102
// Name: Clement
// Program Description:  Prints hello world with
// a few more modifications
// Details:  Prints out last name,
// Ohlone ID, two Course syllabus details, and three 
// coding style guidelines
// Software Development Environment: VSCode C++
// Solution File: helloworld.cpp
// Date: 02/7/22
#include <iostream>
#include <string>
using namespace std;
//importing libraries and using std to remove std:: before everything

int main()
{
   // Define a variable named number.
   int number;

   cout << "Enter a number greater than 0: ";
   cin >> number;
   if (number > 0)
   {
      int number;  // Another variable named number.
      cout << "Now enter another number: ";
      cin >> number;
      cout << "The second number you entered was "
           << number << endl;
   }
   cout << "Your first number was " << number << endl;
   return 0;
}

//OUTPUT:
/*
Hello World!
My last name is Wu!
My Ohlone ID is 494810
Syllabus: There are five required lab assignments,
Syllabus: And there will be five quizzes.
Coding: Make sure each statement is within 80 characters,
Coding: Make sure each variable name is clear, and
Coding: Make sure to indent code for readability!
*/