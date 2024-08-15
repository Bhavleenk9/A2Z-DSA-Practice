// This is the code for sorting an array using Insertion Sort.
#include<iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
   for(int i=0; i<n-1; i++)
   {
       int j=i;
       while(j>=0 && arr[j]>arr[j+1])
       {
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
           j--;
       }
   }
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
    insertionSort(arr,n);
    cout<<"Array after sorting is as follows: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}