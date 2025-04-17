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
        int n = nums.size();
        set<vector<int>> st;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    for (int l = k + 1; l < n; l++)
                    {
                        long long sum = nums[i] + nums[j] + nums[k] + nums[l];
                        if (sum == target)
                        {
                            vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                            sort(temp.begin(), temp.end());
                            st.insert(temp);
                        }
                    }
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