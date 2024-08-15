// This is the code for sorting an array using Bubble Sort. 
#include<iostream>
using namespace std;
// Optimized Bubble Sort code for best case. 
// TC will be O(N) in best case if array is already sorted.
void bubbleSort(int arr[], int n)
{
    for(int i=n-1; i>=0; i--)
    {
        int didSwap = 0;
        for(int j=1; j<=i; j++)
        {
            if(arr[j-1]>arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0)
        {
            break;
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
    bubbleSort(arr,n);
    cout<<"Array after sorting is as follows: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}