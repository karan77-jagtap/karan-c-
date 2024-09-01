#include<iostream>
using namespace std;
int main()
{
   int marks;
   cin>>marks;
   if((marks<100)&&(marks>=90)){
    cout<<"a+ grade";

   }else if((marks<90)&&(marks>=80)){
    cout<<"a grade";

   }else if((marks<80)&&(marks>=70)){
    cout<<"b grade";
   } else {
   
    cout<<"failed";
   }
   

    return 0;
}