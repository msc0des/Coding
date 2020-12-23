#include<bits/stdc++.h>
using namespace std;
#include<set>
bool check(int num);
int main()
{
    int n,num,rem,val;
    cin>>n;
    if(check(n))
        cout<<"yes";
    else
    {
        cout<<"No";
    }
} 
    bool check(int num)
    {
        int rem,val;
        set<int> m;
        while(1)
        { 
            val=0;
            while(num)
            {
                rem=num%10;
                val+=rem*rem;
                num=num/10;
            }
                if(val==1)
                    return true;
                else if(m.find(val)!=m.end())
                   return false;
                m.insert(val);
                num=val;
        }
       return false;
    }
    