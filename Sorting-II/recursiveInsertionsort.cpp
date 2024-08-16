// This is the code for sorting an array using Recursive Insertion Sort.
#include<bits/stdc++.h>
using namespace std;
void recursiveInsertionSort(int arr[], int i, int n)
{
    if(i==n) return;
    int j = i;
    while(j>=0 && arr[j] > arr[j+1])
    {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        j--;
    }
    recursiveInsertionSort(arr,i+1,n);
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
    recursiveInsertionSort(arr,0,n);
    cout<<"Array after sorting is as follows: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
