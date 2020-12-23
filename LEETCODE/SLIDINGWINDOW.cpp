
//SLIDING WINDOW DISPLAY ALL FIRST NEGATIVE in a WINDOW OF SIZE K
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int l = 0; l < n; l++)
        {
            cin >> arr[l];
        }
        cin >> k;
        //Sliding window Algo
        int i, j;
        list<int> ll;
        vector<int> vv;
        i = j = 0;
        while (j < n)
        {
            //calculation
            if (arr[j] < 0)
            {
                ll.push_back(arr[j]);
            }
            if ((j - i + 1) < k)
            {
                j++;
            }
            else if ((j - i + 1) == k)
            {
                if (ll.size() == 0)
                {
                    vv.push_back(0);
                }
                else
                {
                    vv.push_back(ll.front());
                }
                if (arr[i] == ll.front())
                {
                    ll.pop_front();
                }
                i++;
                j++;
            }
        }
        for (int i = 0; i < vv.size(); i++)
        {
            cout << vv[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

//239. Sliding Window Maximum in all window of size k
