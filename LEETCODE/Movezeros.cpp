#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,j;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   for(i=0,j=0;i<n&&j<n;j++)
   {
       if(arr[j]!=0)
       {
           //cout<<"Swapping occured for "<<arr[j]<<" and "<<arr[i]<<endl;
           int tmp=arr[i];
           arr[i++]=arr[j];
           arr[j]=tmp;
       }
   }
   for(i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
    
}