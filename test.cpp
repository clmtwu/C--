#include <iostream>
#include <iomanip>
#include<iostream>
#include <set>
#include <iterator>

using namespace std;

float convertToFahrenheit(float celsius) {
    float constantinteger = 32;
    float constantratio = 1.8;
    float result = (celsius * constantratio) + constantinteger;
    return result;
}

int main()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < 10; i = i + 2)
    cout << arr[i] << " ";
}

