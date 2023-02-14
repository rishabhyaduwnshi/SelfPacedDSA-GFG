#include <bits/stdc++.h>
using namespace std;

void printPowerSet(string chars)
{
    int stringLength = chars.size();
    int powerSetSize = (1<<stringLength);
    
    for(int i=0; i<powerSetSize; i++)
    {
        for(int j=0; j<stringLength; j++)
        {
            if((i & (1<<j)) != 0)
                cout<<chars[j];
        }
        cout<<endl;
    }
}

int main()
{   
    string chars = "abc";
    printPowerSet(chars);
}
