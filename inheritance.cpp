#include<iostream>
using namespace std;
class rectangle
{
    int length;
    int width;
    static int count;
    public:
    rectangle(){length=0,width=0;count++;}
    rectangle(int l,int b){
    length=l;width=b;count++;
    }
    void display(){
        cout<<"\n length="<<length;
        cout<<"\n width="<<width;
        cout<<"\n number of objects created:"<<count;
    }   
};
int rectangle::count;
int main()
{
    rectangle r1;
    r1.display();
    rectangle r2(23,55),r3;
    r2.display();
    rectangle r4(12,23);
}
