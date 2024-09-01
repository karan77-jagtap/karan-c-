// dynamic initilization
#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int q, float r);
    bankdeposit(int p, int y, int r);
    void show();
};
bankdeposit::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
void bankdeposit ::show()
{
    cout << "princial amount was" << principal << "return value after" << years << "years is" << returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();

    cout << "enter the value of p y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();

    return 0;
}