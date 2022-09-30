#include<conio.h>
#include<iostream>

using namespace std;

class Dollar
{
   private:
     int d;
   public:
     Dollar(){}
     Dollar(int s):d(s)
     {

     }
     void display()
     {
         cout<<"Dollar "<<d<<endl;
     }
};

int main()
{
     int x = 50;
     Dollar d;
     d = x;
     d.display();
     return 0;
}
