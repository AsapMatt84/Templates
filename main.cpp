//Matthew Cahill
//CIS 1202 5T1
//July 30,2021

#include <iostream>
#include <cmath>
using namespace std;
//Template and function for double and float types
template <typename T>
T half(T number){
   T product = number/2;
    return product;
}
//Template and function for integer types
int half(int number){
    float newNumber = static_cast<float>(number);
    int product = round(newNumber/2);
     return product;
}

int main() {
    //Test date from assignment
    double a = 7.0;
    float b = 5.0f;
    int c = 3;
    
    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
    return 0;
}


