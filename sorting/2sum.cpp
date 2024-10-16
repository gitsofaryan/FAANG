#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            int more = target - a;
            if (mpp.find(more) != mpp.end())
            {
                return {mpp[more], i};
            }
            mpp[a] = i;
        }
        return {-1, -1};
    }
};
int main()
{
    Solution s;
    vector<int> nums = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = s.twoSum(nums, target);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}