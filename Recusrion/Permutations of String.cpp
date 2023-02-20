#include <bits/stdc++.h>
using namespace std;

void swap(char &A, char &B)
{
    char temp = A;
    A = B;
    B = temp;
    return;
}


void printPermutations(string str, int currentIndex = 0)
{
    if(currentIndex == str.length()-1)
    {
        cout<<str<<endl;
        return;
    }
    
    for(int i= currentIndex; i<str.length(); i++)
    {
        swap(str[i],str[currentIndex]);
        printPermutations(str,currentIndex+1);
        swap(str[currentIndex],str[i]);
    }
    
}


int main()
{
    string str = "ABCD";
    int length = str.length();
    int currentIndex = 0;
    printPermutations(str,currentIndex);
    
}
