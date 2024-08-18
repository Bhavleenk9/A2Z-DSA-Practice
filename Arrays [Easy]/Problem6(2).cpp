// This is the code for Right rotate an array by D places.
// Leetcode 189. Rotate Array 

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
void rightrotate(int arr[], int n, int d)
{
    if (n == 0) return;
    if (d == 0) return;
    d = d % n;
    int temp[d];
    for(int i=n-d; i<n; i++)
    {
        temp[i-(n-d)] = arr[i];
    }
    for(int i=n-d-1; i>=0; i--)
    {
        arr[i+d] = arr[i];
    }
    for(int i=0; i<d; i++)
    {
        arr[i] = temp[i];
    }
}
int main()
{
    int n, d;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the place by which Array is to be shifted to right: ";
    cin>>d;
    rightrotate(arr,n,d);
    cout<<"The Array after being rotated to right by d places is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
*/ 

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
void rightrotate(int arr[], int n, int d)
{
    if (n == 0) return;
    if (d == 0) return;
    d = d % n;
    reverse(arr, arr+n-d);
    reverse(arr+n-d, arr+n);
    reverse(arr, arr+n);
}
int main()
{
    int n, d;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the place by which Array is to be shifted to right: ";
    cin>>d;
    rightrotate(arr,n,d);
    cout<<"The Array after being rotated to right by d places is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
