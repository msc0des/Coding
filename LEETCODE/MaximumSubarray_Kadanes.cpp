class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        //kadanes Algo
        int ans = INT_MIN, a = 0;
        for (int x : nums)
        {
            a = a + x;
            ans = max(ans, a);
            a = max(a, 0);
        }
        return ans;

        //When all are negative
        // int meh=nums[0],msf=nums[0];
        // for(int x:nums)
        // {
        //     meh=max(x,meh+x);
        //     msf=max(meh,msf);
        // }
        // return msf;
    }
};

// class Solution
// {
// public:
//     int maxSubArray(vector<int> &nums)
//     {
//         int max_so_far = INT_MIN, cur_max = 0;

//         for (int i = 0; i < nums.size(); i++)
//         {
//             cur_max = cur_max + nums[i];
//             if (max_so_far < cur_max)
//                 max_so_far = cur_max;

//             if (cur_max < 0)
//                 cur_max = 0;
//         }
//         return max_so_far;
//     }
// };