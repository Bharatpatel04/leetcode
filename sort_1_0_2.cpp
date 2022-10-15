#include <bits/stdc++.h> 
void sort012(int *a, int n)
{
   //   Write your code here
    
    
   int low=0;
    int med=0;
    int high=n-1;
    while(med<=high)
    {
        if(a[med]==0)
        swap(a[low++],a[med++]);
        else if(a[med]==1)
           med++;
        else if(a[med]==2)
        {
            swap(a[med],a[high]);
           high--;   
        }
        
    }  
}
