#include <iostream>
#include <cmath>
#include <string>
using namespace std;

bool isZero(float num, float epsilon = 1e-6) {
    return fabs(num) < epsilon;  // Check if num is very close to 0
}

// TO-DO: Write your code here
template <typename T>
string calculate(T a, T b, char op){
    switch(op){
        case '+' : return tostring(a+b); break;
        case '-' : return tostring(a-b); break;
        case '*' : return to_string(a*b); break;
        case '/' : 
            if(isZero(static_cast<float>(b))){
                return "Error: Division by zero!\n0";
            }
            return to_string(a / b);
            break;
        default:
            return "Error: Invalid operator!\n0";
    }
}





int main() {
    cout << "Addition (10 + 5): " << calculate(10, 5, '+') << endl;
    cout << "Subtraction (10.5 - 3.2): " << calculate(10.5, 3.2, '-') << endl;
    cout << "Multiplication (4 * 2): " << calculate(4, 2, '*') << endl;
    cout << "Division (10 / 2): " << calculate(10, 2, '/') << endl;
    cout << "Division (10.6 / 0.0): " << calculate(10.6, 0.0, '/') << endl;
    cout << "Division by zero (10 / 0): " << calculate(10, 0, '/') << endl;
    return 0;
}
