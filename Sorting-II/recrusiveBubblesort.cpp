// This is the code for sorting an array using Recursive Bubble Sort.
#include<bits/stdc++.h>
using namespace std;

// void recursiveBubbleSort(int arr[], int n)
// {
//     if(n==1) return;
//     for(int i=0; i<n-1; i++)
//     {
//         if(arr[i]>arr[i+1])
//         {
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = temp;
//         }
//     }
//     recursiveBubbleSort(arr,n-1);
// }

// Optimized Bubble Sort for best case.
void recursiveBubbleSort(int arr[], int n)
{
    if(n==1) return;
    int didSwap = 0;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
            didSwap = 1;
        }
    }
    if(didSwap == 0) return;
    recursiveBubbleSort(arr,n-1);
}

int main()
{
    int n;
    cout<<"Enter the size of array you want to sort: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    recursiveBubbleSort(arr,n);
    cout<<"Array after sorting is as follows: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
