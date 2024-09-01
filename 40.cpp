#include <iostream>
using namespace std;

class Student {
public:
    // Method for addition
    int add(int a, int b) {
        return a + b;
    }

    // Method for subtraction
    int sub(int a, int b) {
        return a - b;
    }

    // Method for multiplication
    int mul(int a, int b) {
        return a * b;
    }

    // Method for division
    float div(float a, float b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Student student; // Create an object of the Student class

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform arithmetic operations using the object
    cout << "Addition: " << student.add(num1, num2) << endl;
    cout << "Subtraction: " << student.sub(num1, num2) << endl;
    cout << "Multiplication: " << student.mul(num1, num2) << endl;
    cout << "Division: " << student.div(num1, num2) << endl;

    return 0;
}