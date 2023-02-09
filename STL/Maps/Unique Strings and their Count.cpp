//Given n strings, print them in lexicographical order and thier count

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mapString;
    int stringCount;
    
    cout<<"Enter the number of strings : ";
    cin>>stringCount;
    
    for(int i=0;i<stringCount; i++)
    {
        string inputString;
        cin>>inputString;
        mapString[inputString]++;
    }
    
    for(auto it : mapString)
        cout<<it.first<<" "<<it.second<<"\n";
}
