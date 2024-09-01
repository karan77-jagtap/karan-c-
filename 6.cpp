#include<iostream>
using namespace std;
int main()
{
    char oper;
    float num1,num2;
    cout<<"enter an opertator";
    cin>>oper;
    cout<<"enter a num1 and num2";
    cin>>num1>>num2;
    switch (oper)
    {
    case '+':
    cout<<num1<<'+'<<num2<<'='<<num1+num2;
        break;

         case '-':
    cout<<num1<<'-'<<num2<<'='<<num1-num2;
        break;

        case '/':
    cout<<num1<<'/'<<num2<<'='<<num1 / num2;
        break;

        case '*':
    cout<<num1<<'*'<<num2<<'='<<num1*num2;
        break;
    
    default:
    cout<<"error";
        break;
    }
    return 0;
}