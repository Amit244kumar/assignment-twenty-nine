#include<conio.h>
#include<iostream>

using namespace std;

class Rupee
{
    private:
      int r;
    public:
        Rupee(int a):r(a)
        {
        }
        void display()
        {
            cout<<"Rupee "<<r<<endl;
        }
        operator int()
        {
            return r;
        }

};

int main()
{
     Rupee r = 10;
     r.display();
     int x = r;
     cout<<x;
     return 0;
}


