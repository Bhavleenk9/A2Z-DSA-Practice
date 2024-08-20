// This is the code for Find the Intersection (Sorted Arrays).

// Brute force approach.
/* #include<bits/stdc++.h>
using namespace std;
vector <int> intersection(vector <int> &a, vector <int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    vector <int> visited(n2);
    vector <int> ans;
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(a[i] == b[j] && visited[j] == 0)
            {
                ans.push_back(a[i]);
                visited[j] = 1;
                break;
            }
            if(b[j] > a[i]) break;
        }
    }
    return ans;
}
int main()
{
    int n1, n2;
    cout<<"Enter the size of first and second Array: ";
    cin>>n1>>n2;
    vector <int> a(n1);
    vector <int> b(n2);
    cout<<"Enter the elements of first sorted Array: ";
    for(int i=0; i<n1; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of second sorted Array: ";
    for(int i=0; i<n2; i++)
    {
        cin>>b[i];
    }
    vector<int> result = intersection(a,b);
    cout<<"The intersection of 2 sorted Arrays is: ";
    for (int elem : result) {
        cout << elem << " ";
    }
    return 0;
} */

// Optimal approach.
#include<bits/stdc++.h>
using namespace std;
vector <int> intersection(vector <int> &a, vector <int> &b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector <int> ans;
    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            i++;
        }
        else if(b[j] < a[i])
        {
            j++;
        }
        else
        {
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
int main()
{
    int n1, n2;
    cout<<"Enter the size of first and second Array: ";
    cin>>n1>>n2;
    vector <int> a(n1);
    vector <int> b(n2);
    cout<<"Enter the elements of first sorted Array: ";
    for(int i=0; i<n1; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the elements of second sorted Array: ";
    for(int i=0; i<n2; i++)
    {
        cin>>b[i];
    }
    vector<int> result = intersection(a,b);
    cout<<"The intersection of 2 sorted Arrays is: ";
    for (int elem : result) {
        cout << elem << " ";
    }
    return 0;
}

