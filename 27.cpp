//constructor
#include<iostream>
using namespace std;
class  complex{
    int a,b;
    public:
    complex(void);//construtor declaration
    void printnumber()
    {
        cout<<"your number is"<<a<<"+"<<b<<"i" ;
    }
};
complex ::complex(void)//this is a default cnstrutor
{
    a=10;
    b=0;
}
int main(){
    complex c1  ,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();

    return 0;

}
