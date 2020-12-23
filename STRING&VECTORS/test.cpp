#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
    vector<int> timestamp={1,2,2,3,4,5,6,6,13,16};
    vector<int> top={10,15};
    int i,j;
    vector<int>p;
    sort(timestamp.begin(),timestamp.end());
    for(auto i:top)//i=0;i!=top.end();i++)
    {
        for(j=0;j<timestamp.size();j++)//auto j:timestamp)
        {
            if(timestamp.at(j)<top.at(i))
            {
                p.push_back(j);
            }
            else
            {
                break;
                j+=p.size();
            }
        }
        p.clear();  
    }
    cout<<p.size();
   /*  int sse,sso;
    sse=sso=0;
    vector<int> s={2,4,3,6,1,9};
    for(int i;i<s.size();i++)
    {
        cout<<s.at(i);
    }
        if(s[i]%2==0)
            sse=sse+s[i];
        else
        {
            sso+=s[i];
        } 
    }
    cout<<"Sum of even numbers is "<<sse<<endl;
    cout<<"Sum of odd numbers is "<<sso;  */
}