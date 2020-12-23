#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include <vector>
using namespace std;
vector<string> check_substr(vector<string> s,vector<string> t)
{
    int i,j;
    vector<string> sss;
    string s1,s2;
    i=j=0;
    while(i<s.size()&&j<t.size())
    {
        s1=s[i];
        s2=t[j];
        int l=0;
        if(s2.find(s1[l++]))
        {
            sss.push_back("YES");
        }
        else
        {
            sss.push_back("NO");
        }  
        i++;
        j++;
    }
    return sss;
}
int main()
{
    string s;
    vector<string> ss,tt;
    for(int i=0;i<2;i++)
    {
        cin >> s;
        ss.push_back(s);
    }
    cout<<"Enter second vector"<<endl;
    for(int i=0;i<2;i++)
    {
        cin >> s;
        tt.push_back(s);
    }
    for (auto it = ss.begin(); it != ss.end(); ++it)
        cout <<*it<<" ";
    cout<<"\n";
    for (auto it =tt.begin(); it != tt.end(); ++it)
        cout <<*it<<" "<<endl;
    vector<string> ttt= check_substr(ss,tt);
    for (auto it =ttt.begin(); it != ttt.end(); ++it)
        cout <<*it<<" "<<endl;
    return 0;
}
    // vector<int> myvector;
    // string s;
    // for (int i = 1; i <= 5; i++){
        
    //     cout<<"enter your string \n";
    //     cin>>s;
    //     myvector.push_back(s);
    // }
    // cout << "myvector contains:";
    // for (auto it = myvector.begin(); it != myvector.end(); ++it)
    //     cout << ' ' << *it;
    // cout << '\n';

    // return 0;

