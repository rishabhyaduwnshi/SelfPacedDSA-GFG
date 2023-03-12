#include <bits/stdc++.h>
using namespace std;

double getMedian(int array1[], int array2[], int n1, int n2)
{
    int start1 = 0;
    int end1 = n1;
    
    while(start1 <= end1)
    {
        int mid1 = (start1+end1)/2;
        int mid2 = ((n1+n2+1)/2)-mid1;
        
        int min1 = (mid1 == n1) ? INT_MAX : array1[mid1];
        int max1 = (mid1 == 0) ? INT_MIN : array1[mid1-1];
        
        int min2 = (mid2 == n2) ? INT_MAX : array2[mid2];
        int max2 = (mid2 == 0) ? INT_MIN : array2[mid2-1];
        
        if(max1 <= min2 && max2 <= min1)
        {
            if((n1+n2)%2 == 0)
                return ((double)max(max1, max2) + min(min1, min2)) / 2;
            else
                return (double)max(max1, max2);
        }
        else if(max1 > min2)
        {
            end1 = mid1-1;
        }
        else
        {
            start1 = mid1+1;
        }
    }
}


int main()
{
    int array1[] = {10,20,30,40,50};
    int n1 = 5;
    int array2[] = {5,15,25,35,45};
    int n2 = 5;
	cout << getMedian(array1, array2, n1, n2);
}
