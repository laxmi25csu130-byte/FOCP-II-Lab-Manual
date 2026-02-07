#include<iostream>
using namespace std;
int main(){
    string s;
    string result="";
    for(char c:s){
        if(isalnum(c)){
            t+=tolower(c);

        }
    }
    string rev=t;
    (rev.begin(),rev.end());
    if (t==rev)
    return true;
    else
    return false;

}
   
   for(i=0;i<s;i++)
   if(s[i]>='A' && s[i]<='z')
    result+=s[i]+32;
   if(s[i]>='a' && s[i]<='z')
    result+=s[i];
   if(s[i>='0' && s[i]<='9'])
    result+=s[i];
    return 0;
}