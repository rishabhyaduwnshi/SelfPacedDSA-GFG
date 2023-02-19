#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(string str, int start, int end)
{
    if(start >= end)
        return true;
        
    return (str[start] == str[end] && isPallindrome(str,start+1,end-1));
}

int main()
{
    string str = "abba";
    int length = str.length();
    if(isPallindrome(str,0,length-1))
        cout<<"Yes";
    else
        cout<<"No";
}
