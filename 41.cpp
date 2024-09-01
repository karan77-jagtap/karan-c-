//virtual base class
#include <iostream>
using namespace std;
class students
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll no is" << roll_no << endl;
    }
};
class test : virtual public students
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your marks is " << endl;
        cout << "maths" << maths << endl;
        cout << "physics" << physics << endl;
    }
};
class sports : virtual public students
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "your PT score is" << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_marks();
        print_score();
        print_number();
        cout << "total score is :" << total;
    }
};
int main()
{
    result karan;
    karan.set_number(22);
    karan.set_marks(99, 88);
    karan.set_score(9);
    karan.display();

    return 0;
}