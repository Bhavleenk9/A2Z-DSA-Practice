// This is the code for Left rotate an array by D places.

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
void leftrotate(int arr[], int n, int d)
{
    d = d % n;
    int temp[d];
    for(int i=0; i<d; i++)
    {
        temp[i] = arr[i];
    }
    for(int i=d; i<n; i++)
    {
        arr[i-d] = arr[i];
    }
    for(int i=n-d; i<n; i++)
    {
        arr[i] = temp[i-(n-d)];
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
    cout<<"Enter the place by which Array is to be shifted to left: ";
    cin>>d;
    leftrotate(arr,n,d);
    cout<<"The Array after being rotated to left by d places is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
} */

// Optimal approach.
/* user defined reverse function can also be created.
void reverse(int arr[], int start, int end)
{
    while(start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
void leftrotate(int arr[], int n, int d)
{
    if (n == 0) return;
    if (d == 0) return;
    d = d % n;
    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
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
    cout<<"Enter the place by which Array is to be shifted to left: ";
    cin>>d;
    leftrotate(arr,n,d);
    cout<<"The Array after being rotated to left by d places is: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
