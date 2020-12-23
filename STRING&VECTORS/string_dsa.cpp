#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,wrd="";
    int vc,cc,ccc;
    vc=cc=0;
    getline(cin,str);
    //finding duplicate characters in a string
    for(int i=0;i<str.length();i++)
    {
        ccc=1;
        if(str.at(i)!='0')
        {
            for(int j=i+1;j<str.length();j++)
            {
                if(str.at(i)==str.at(j))
                {
                    ccc++;
                    str.at(j)='0';
                }
            }
            if(ccc>1)
                cout<<str.at(i)<<" Repeated "<<ccc<<" Times"<<endl;
        }
    }
    if(ccc==1)
        cout<<"No duplicate characters found in "<<str;
    /* //string reverse
    for(int i=str.length()-1;i>=0;i--)
    {
        char ch=str.at(i);
        wrd+=ch;
    }
    cout<<wrd; */
    /* //Uppercase to lower Case and vice-versa
     for(int i=0;i<str.length();i++)
    {
        if(str.at(i)>=65 &&str.at(i)<=90)
        {
            str.at(i)+=32;
        }
        else if(str.at(i)>=97 &&str.at(i)<=122)
        {
            str.at(i)-=32;
        } 
    cout<<str; */
    //vowels and consonant counter in a string
    /* for(int i=0;i<str.length();i++)
    {
        char ch=str.at(i);
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            vc++;
        }
        else if(ch>=65 ||ch<=122)
        {
            cc++;
        }
    }
    cout<<"Vowels count is "<<vc<<"\n";
    cout<<"Consonant count is "<<cc<<"\n"; */
    
}