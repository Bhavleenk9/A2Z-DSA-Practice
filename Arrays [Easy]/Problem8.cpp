// This is the code for Linear Search.
#include<bits/stdc++.h>
using namespace std;
int linearsearch(int arr[], int n, int num)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n, num;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched: ";
    cin>>num;
    int result = linearsearch(arr,n,num);
    if(result == -1) 
    {
        cout<<"Element is not present in the Array.";
    }
    else
    {
        cout<<"The element is present at "<<result<<" index";
    }
    return 0;
}
