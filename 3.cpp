#include<iostream>
using namespace std;
//local and gobal variable
//int d=31;
int main()
{
    /*int a,b,c;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter the value of b";
    cin>>b;
    c=a+b;
    cout<<"the sum of "<<c<<endl;
    cout<<"the global value"<<::d<<endl;*/

    /*reference variables
    float a=455;
    float &b=a;
    cout<<a<<endl;
    cout<<b<<endl;*/

    //typecasting
    int a=45;
    float b=45.45;
    cout<<(float)a<<endl;
    cout<<(int)b<<endl;


    cout<<"the expression is"<<a + b<<endl;
    cout<<"the expression is"<<a +int(b)<<endl;
    cout<<"the expression is"<<b + float(a)<<endl; 






    return 0;
}