//static function and method
#include<iostream>
using namespace std;
class employee
{
    int id;
    static int count;
    public:
    void setdata(void){
        cout<<"enter a id"<<endl;
        cin>>id;
        count++;

    }
    void getdata(void){
        cout<<"the id is employee is"<<id<<"and this employee number"<<count<<endl;

    }
    static void getcount(void){
        cout<<"the value of count is"<<count<<endl;
    }

};
int employee ::count;

int main()

{
    employee harry, karan ,lovish;
    harry.setdata();
    harry.getcount();
    employee::getcount();

    karan.setdata();
    karan.getdata();
    employee::getcount();

    lovish.setdata();
    lovish.getdata();
    employee::getcount();
    return 0;

}