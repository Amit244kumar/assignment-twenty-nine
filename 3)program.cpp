#include<conio.h>
#include<iostream>

using namespace std;

class Product
{
   private:
     int w,e;
   public:
       void setData(int q,int t)
       {
           w=q;
           e=t;
       }
       void display()
       {
           cout<<"Product are "<<w<<" and "<<e<<endl;
       }
       int GetFirst()
       {
           return w;
       }
       int GetSecond()
       {
           return e;
       }

};


class Item
{
    private:
       int a,b;
    public:
        Item(){}
        Item(Product p1)
        {
            a=p1.GetFirst();
            b=p1.GetSecond();
        }
        void setData(int j,int i)
        {
            a=j;
            b=i;
        }
        void display()
        {
            cout<<"Item are "<<a<<" and "<<b<<endl;
        }

};


int main()
{
     Item i1;
     Product p1;
     p1.setData(3,4);
     p1.display();
     i1=    p1;
     i1.display();
     getch();
     return 0;
}
