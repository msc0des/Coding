#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,diff=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
       cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            diff+=arr[i]-arr[i-1];
    }
    cout<<"maximum profit is: "<<diff;
}