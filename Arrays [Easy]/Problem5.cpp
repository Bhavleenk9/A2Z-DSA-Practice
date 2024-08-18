// This is the code for Left Rotate an array by one place.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
vector <int> leftrotate(vector <int> &arr, int n)
{
    vector <int> temp(n);
    int newlastdigit = arr[0];
    for(int i=0; i<n-1; i++)
    {
        temp[i] = arr[i+1];
    }
    temp[n-1] = newlastdigit;
    return temp;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector <int> rotated = leftrotate(arr,n);
    cout<<"The Array after being rotated to left by one place is: ";
    for(int i=0; i<n; i++)
    {
        cout<<rotated[i]<<" ";
    }
} */

// Optimal approach. 
#include<bits/stdc++.h>
using namespace std;
vector <int> leftrotate(vector <int> &arr, int n)
{
    int newlastdigit = arr[0];
    for(int i=0; i<n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[n-1] = newlastdigit;
    return arr;
}
int main()
{
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;
    cout<<"Enter the elements of Array: ";
    vector <int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector <int> rotated = leftrotate(arr,n);
    cout<<"The Array after being rotated to left by one place is: ";
    for(int i=0; i<n; i++)
    {
        cout<<rotated[i]<<" ";
    }
}
