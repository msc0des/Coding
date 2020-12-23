#include<bits/stdc++.h>
using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
int main()
{
    int arr[8]={-2,-3,4,-1,-2,1,5,-3};
    int msf,meh,i;
    meh=arr[0];//0
    msf=arr[0];//INT_MIN; //it was 0 in original kadanes algorithm,here we will handle both +ve/-ve cases
    for(i=1;i<8;i++)
    {
        meh=max(arr[i],meh+arr[i]);
        if(meh>msf)
            msf=meh;
    }
    cout<<msf;

}