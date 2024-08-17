// This is the code for Check if the array is sorted.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int arraysorted(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[i])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    string result;
    if(arraysorted(arr,n) == 0) 
    {
        result = "false";
    }
    else 
    {
        result = "true";
    }
    cout<<"Is Array sorted? "<<result;
    return 0;
} */

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
int arraysorted(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i] >= arr[i-1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    string result;
    if(arraysorted(arr,n) == 0) 
    {
        result = "false";
    }
    else 
    {
        result = "true";
    }
    cout<<"Is Array sorted? "<<result;
    return 0;
} 
