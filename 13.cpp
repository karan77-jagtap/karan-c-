#include<iostream>
#include<math.h>

using namespace std;
 const  double PI= 3.14;
class circle{
    private:
    double radius;
    public:
    circle(double rad):radius(rad){}
    double calculatearea(){
        return PI*pow(radius,2);
    }
    double calculatecircumference(){
        return 2*PI*radius;
    }
};


int main()
{
    double radius;
    cout<<"input the radius of the circle";
    cin>>radius;
    circle circle(radius);

    double area = circle.calculatearea();
    cout<<"area"<<area<<endl;
    double circumference = circle.calculatecircumference();
    cout<<"circumference"<<circumference<<endl;


    return 0;
}