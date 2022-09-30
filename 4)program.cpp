#include<conio.h>
#include<iostream>

using namespace std;

class Item
{
    private:
       int a,b;
    public:
        void display()
        {
            cout<<"Item are "<<a<<" and "<<b<<endl;
        }
        void setData(int x,int y)
        {
            a=x;
            b=y;
        }
};
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
       operator Item()
       {
           Item i;
           i.setData(w,e);
           return i;

       }

};

int main()
{
    Item i1;
    Product p1;
    p1.setData(3,4);
    p1.display();
    i1=p1;
    i1.display();
    getch();
    return 0;

}
