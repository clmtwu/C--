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

void f(int i, int &k)
{    
   i = 1;         
   k = 2;
}   

int main()
{
    int *p;
    int i;
    int k;
    i = 42;
    k = i;
    p = &i;
    *p = 75;
    cout << i << endl;
}

