#include <iostream>
#include <fstream>
using namespace std;

int main(){
    //by default ios::out
ofstream fout("C:\Users\singh\Downloads\merifile.txt");
    //fstream fout("laxmi.txt",ios::out)

    fout << "\n 233646 \n srdf dbhjhh hjbweuey";
    fout << "cjehg jhrbf2 ojihfr";

    fout.close();
    cout << "Data written successfully";

}