#include <iostream>
using namespace std;
// destor never takes an argument nor does it return any value
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for object number" << count << endl;
    }
    ~num()
    {
        cout << "this is the time when my destructor is called for objectnumber" << count << endl;
        count--;
    }
};
int main()
{
    cout<<"we are inside our main function "<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;{
        cout<<"entering this block"<<endl;
        cout<<"creatingtwo more objects"<<endl;
        num n2,n3;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main "<<endl;
    return 0;
}