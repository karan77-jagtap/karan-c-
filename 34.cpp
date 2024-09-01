#include <iostream>
using namespace std;
// base class
class emloyee
{
public:
    int id;
    float salary;
    emloyee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    emloyee() {}
};

// creating a programmer class derived from base  class
class programmer : public emloyee
{
public:
    int language;
    programmer(int inpid)
    {
        id = inpid;
        language = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};
int main()
{
    emloyee karan(1),harry(2);
    cout<<karan.salary<<endl;
    cout<<harry.salary<<endl;
    programmer skillf(10);
    cout<<skillf.language<<endl;
    cout<<skillf.id<<endl;
    skillf.getdata();


    return 0;
}
// // Derived Class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}*/
/*note:
1.default visibility mode is private
2. public visibility mode:public of the base class becomes public member of the  derived class
3. private visibility mode : public member of the base class becomes private member of the derived class
4.private member never inherited
*/