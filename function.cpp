#include<iostream>
using namespace std;
int main()
int sum(int a,int b);
float sum(float a,float b);
double sum(double a,double b);
int main()
{
cout<<endl<<sum(10,34);
cout<<endl<<sum(11.78f,20.34f);
cout<<endl<<sum(11.3487,20.7654);
return 0;
}
int sum(int n1,int n2)
{}
//////////////////////////////////////////////////

   

#include<iostream>
using namespace std;
//int result(int,int,int=0,int=0,int=0);
int result(int,int);
int result(int,int,int);
int result(int,int,int,int);
int result(int,int,int,int,int);
int main()
{
cout<<"\n result of 2 subject "<<result(45,87);
cout<<"\n result of 3 ubject "<<result(45,87,23);
cout<<"\n result of 4 subject "<<result(45,87,56,98);
cout<<"\n result of 5 subject "<<result(45,87,34,55,91);
return 0;
}
//int result(int a,int b,int c,int d,int e){
//    return(a+b+c+d+e);}
int result(int a,int b){
    return(a+b);
}
int result(int a,int b,int c){
    return(a+b+c);
}
int result(int a,int b,int c,int d){
    return(a+b+c+d);
}
int result(int a,int b,int c,int d,int e){
    return(a+b+c+d+e);
}


void welcome(string="agent",string="");
int main()
{
welcome();
welcome("laxmi");
welcome("laxmi","singh");
return 0;
}
//definition
void welcome(string fname,string lname){
    cout<<"\n welcome "<<fname<<lname;
}
///////////////////////////////////////////////////////


//swap function with addrress
#include<iostream>
using namespace std;
void swap(int *p1,int *p2);
int main(){
    int a,b;
    a=30;
    b=55;
    cout<<"a"<<"b"<<b<<endl;
    swap(&a,&b);
    cout<<"a"<<a<<"b"<<b<<endl;
    return 0;
}
void swap(int *p1,int *p2){
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
    cout<<"a"<<*p1<<"b"<<*p2<<endl;
}
void swap(int r1,int r2){
    int temp=r1;
    r1=r2;
    r2=temp;
    cout<<r1<<r2;
}
