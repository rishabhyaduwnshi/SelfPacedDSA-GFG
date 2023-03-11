#include <bits/stdc++.h>
using namespace std;

int squareRoot(int number)
{
    int low = 1;
    int high = number;
    int result = -1;
    
    while(low <= high)
    {
        int mid = (low+high)/2;
        int midSquare = mid*mid;
        
        if(midSquare == number)
            return mid;
            
        else if(midSquare > number)
            high = mid-1;
        
        else
        {
            low = mid+1;
            result = mid;
        }
    }
    return result;
    
}

int main()
{
    cout<<squareRoot(13);
}
