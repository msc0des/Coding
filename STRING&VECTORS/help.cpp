#include<bits/stdc++.h>
using namespace std;
#include<vector>
int fact(int n) 
{ 
        if (n == 0) 
            return 1; 
        return n * fact(n - 1); 
 }
int maxStrength(int n) {
    int num,sum,max,size,res,rem;
    set<int>p;
    p.insert(n); 
    num=fact(n);
    p.insert(num);
    max=size=0;
    while(1)
    {
        sum=0;
        while(num)
        {
            rem=num%10;
            sum+=fact(rem);
            num=num/10;
        }
        if(p.find(sum)!=p.end())
            break;   
        else
        {
            p.insert(sum);
            num=sum;
        }             
    }
    size=p.size();
    //cout<<"max size "<<size<<endl;
    max=*max_element(p.begin(),p.end());
    //cout<<"max is "<<max<<endl;
    res=size * max;
    return res;
}
int main()
{
    cout<<maxStrength(540);
}
