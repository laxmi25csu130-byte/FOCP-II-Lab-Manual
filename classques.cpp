//Hello world in c++
#include<iostream>
using namespace std;
int main()
{
 int a=10;
 float b=34.6;
 char c='L';
 printf("the value of the a=%d the value of b=%f the value of the c=%d",a,b,c);
  std::cout<<"the value of a="<<a<<std::endl<<"the value of b="<<b<<std::endl<<"the value of c="<<c;
 return 0;
}




{   
    //getline(std::cin,name);     for a whole statement 
    int n;
    float e;
    char g;
    string name;
    cout<<"enter value of n,e,g,name:";
    //cout<<"enter the value of name";
    cin>>n;
    cin>>e;
    cin>>g;
    cin.ignore();     //for a fresh input
    getline(cin,name);
    //cin>>name;
    
    std::cout<<"the value of n="<<n<<std::endl<<"the value of e="<<e<<std::endl<<"the value of g="<<g<<std::endl<<"the value of name="<<name;
    return 0;
    

}