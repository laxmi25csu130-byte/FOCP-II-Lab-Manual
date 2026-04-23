#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream fout("num.txt");
    fout << 11 << " " << 23 << " " << 46;
    fout.close();
    ifstream fin("num.txt");
 int a, b, c;
 fin >> a >> c ;
 cout<<a<<"  "<<b<<"  "<<endl;
 cout << a + b + c;
 fin.close();
}