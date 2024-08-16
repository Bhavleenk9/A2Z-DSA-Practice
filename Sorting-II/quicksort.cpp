// This is the code for sorting an array using Quick Sort.
#include<bits/stdc++.h>
using namespace std;
int partitionArr(vector <int> &arr, int low, int high);
void quickSort(vector <int> &arr, int low, int high)
{
    if(low<high)
    {
        int pIndex = partitionArr(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}
int partitionArr(vector <int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(arr[i] <= pivot && i<=high-1)
        {
            i++;
        }
        while(arr[j] > pivot && j>=low+1)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
int main()
{
    int n;
    cout<<"Enter the size of array you want to sort: ";
    cin>>n;
    vector <int> arr(n);
    cout<<"Enter "<<n<<" elements of the array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    cout<<"Array after sorting is as follows: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
