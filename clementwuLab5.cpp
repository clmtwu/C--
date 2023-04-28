// Program Description:
// Software Development Environment: VSCode C++
// Solution File: clementwuLab4.cpp
// Date: 04/27/23
using namespace std;
#include <iostream> //importing libraries with std

bool flag = true;

int getSize() { // function to validate user input for 
                //the size of the array to be dynamically created [1..8]
    int temporary; //placeholder int
    while(flag) { //loop
        cout << "Enter a value [1..8] ";
        cin >> temporary;
        if (!cin) { //checking if input is a number, if not clearing memory
        //and making user resubmit
            cin.clear();
            cin.ignore (1000, '\n'); 
            continue;
        }
        if (temporary < 1 || temporary > 8) {
            //checking if number is within the bounds, if not 
            //making user resubmit
            cin.clear();
            continue;
        }
        else { //if number passes, turning off loop
        //and submitting number to reference
            cin.clear();
            flag = false;
        }
    }
    flag = true; //restarting loop when it reiterates
    return temporary;
} 

int *arrayAllocator(int size) {
    int* dynamicArray = new int[size];//dynamically allocating array of size 'sizes'
    return dynamicArray;

} //function that dynamically allocates an array of integers.  The function accepts an integer argument indicating the number of elements to allocate.  The function should return a pointer to the array.

int getValue() { // function to obtain a lucky number from the user [5..10]
    int temporary;
    while (flag) {
        cout << "Enter a lucky number [5..10]: ";
        cin >> temporary;
        if (!cin) { //checking if input is a number, if not clearing memory
        //and making user resubmit
            cin.clear();
            cin.ignore (1000, '\n'); 
            continue;
        }
        if (temporary < 4 || temporary > 11) {
            //checking if number is within the bounds, if not 
            //making user resubmit
            cin.clear();
            continue;
        }
        else { //if number passes, turning off loop
        //and submitting number to reference
            cin.clear();
            flag = false;
        }
    }
    flag = true;
    return temporary;
}  

int main(){ //main function
    int size = getSize(); //calling functions to get validated values
    int *pointer = arrayAllocator(size);
    int sum = 0;

    //prompt to enter array values
    cout << "Time to pick your " << size << " lucky number[s] [5..10]";
    cout << endl;
    //obtaining values within the dynamic array using a for loop
    for (int i = 0; i < size; i++){
        *(pointer + i) = getValue();
    }

    //output
    cout << "Here are the values in the lucky array:" << endl;
    //iterating and printing results of array through iteration of a for loop
    for (int i = 0; i < size; i++){
        cout << "Lucky number " << i + 1;
        cout<<" has the value " << *(pointer + i) << endl;
        sum += *(pointer + i);
    }
    cout<<"Your GRAND lucky number is: "<<sum;
    return 0; //end of main
}
/* Program Output:
Enter a value [1..8] apples
Enter a value [1..8] 9
Enter a value [1..8] 2
Time to pick your 2 lucky numbers [5..10]
Enter a lucky number [5..10]: 6
Enter a lucky number [5..10]: 7
Here are the values in the lucky array:
Lucky number 1 has the value 6
Lucky number 2 has the value 7
Your GRAND lucky number is: 13
*/

