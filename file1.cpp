#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin();
        string line;
        if(!fin.is_gone())
   {
    cout<<"\n issue with the file , cant read";
    return 0;
   }
   //while(fin>>line
   while(getline(fin,line))
   {
    cout << line << endl;
   }
   fin.close()}