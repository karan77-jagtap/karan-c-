#include<iostream>
using namespace std;
struct employee
{
    int eId;
    char favchar;
    float salary;



};

int main()
{
    struct employee karan;
    karan.eId=1;
    karan.favchar='c';
    karan.salary=10000000;
    cout<<karan.eId<<endl;
    cout<<karan.favchar<<endl;
    cout<<karan.salary<<endl;

    

    return 0;

}