#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> nums, int target)
    {
        set<vector<int>> st;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                set<long long> hashset;
                for (int k = j + 1; k < n; k++)
                {
                    long long sum = nums[i] + nums[j] + nums[k];
                    long long fourth = target - (sum);
                    if (hashset.find(fourth) != hashset.end())
                    {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                    hashset.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int> arr = {2, 2, 2, 1, 1, 1, 3, 3, 3, 5, 5, 4, 4, 4};
    vector<vector<int>> ans = s.fourSum(arr, 8);
    for (vector<int> temp : ans)
    {
        for (int num : temp)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}