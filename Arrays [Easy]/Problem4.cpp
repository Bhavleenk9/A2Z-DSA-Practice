// This is the code for Remove duplicates from Sorted array.
// Leetcode 26. Remove Duplicates from Sorted Array.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
int uniquearray(int arr[], int n)
{
    set <int> set;
    for(int i=0; i<n; i++)
    {
        set.insert(arr[i]);
    }
    int Arrsize = set.size();
    int i=0;
    for(int x: set)
    {
        arr[i] = x;
        i++;
    }
    return Arrsize;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int size = uniquearray(arr,n);
    cout<<"Array after removing duplicates from the Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
} */

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
int uniquearray(int arr[], int n)
{
    int i=0;
    for(int j=1; j<n; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int size = uniquearray(arr,n);
    cout<<"Array after removing duplicates from the Array: ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



