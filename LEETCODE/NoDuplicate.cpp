#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums);
class Solution {
public:
    int singleNumber(vector<int> nums) {
        
        int result = 0;
        for(int i=0;i<nums.size();++i)
            result ^= nums[i];
        return result;
    }
};
int main()
{

    Solution obj;
    vector<int> a;//={1,2,1,2,4};
    int n,e,i,res;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>e;
        a.push_back(e);
    }
    res=obj.singleNumber(a);
    cout<<res;
    return 0;
}
