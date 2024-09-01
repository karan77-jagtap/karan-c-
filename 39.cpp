#include <iostream>
using namespace std;

// Inline function to calculate the area of a triangle
inline float triangleArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float base, height;

    // Input the base and height of the triangle
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // Calculate and display the area
    float area = triangleArea(base, height);
    cout << "The area of the triangle is: " << area << endl;

    return 0;
}