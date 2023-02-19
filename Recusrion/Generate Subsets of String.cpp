#include <bits/stdc++.h>
using namespace std;

void printSubsets(string str,string current, int index=0)
{
    if(index == str.length())
    {
        cout<<current<<"\n";
        return;
    }
    printSubsets(str,current,index+1);
    printSubsets(str,current+str[index],index+1);
}


int main()
{
    string str = "abc";
    string current = "";
    int index = 0;
    printSubsets(str,current,index);
}
