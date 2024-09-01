//memory location and using array in oops
#include <iostream>
using namespace std;

class shop
{
     int itemaId[100];
     int itemprice[100];
     int counter;

public:
     void initcounter(void) { counter = 0; }
     void setprice(void);
     void displayprice(void);
};
void shop::setprice(void)
{
     cout << "enter the item id" << counter + 1 << endl;
     cin >>itemaId[counter];
     cout << "enter a price" << endl;
     cin >>itemprice[counter];
     counter++;
}
void shop ::displayprice(void)
{
     for (int i = 0; i < counter; i++)
     {
          cout << "the price with item Id" << itemaId[i] << "i" << itemprice[i] << endl;
     }
}

int main()
{
     shop dukaan;
     dukaan.initcounter();
     dukaan.setprice();
     dukaan.setprice();
     dukaan.setprice();
     dukaan.displayprice();

     return 0;
}