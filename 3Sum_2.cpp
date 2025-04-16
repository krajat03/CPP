#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        set<vector<int>> st;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            set<int> hashset;
            for (int j = i + 1; j < n; j++)
            {

                int third = -(nums[i] + nums[j]);
                if (hashset.find(third) != hashset.end())
                {
                    vector<int> temp = {nums[i], nums[j], third};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[j]);
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-2, -2, -2, -1, -1, -1, 0, 0, 0, 2, 2, 2, 2};
    vector<vector<int>> ans = s.threeSum(nums);
    cout << "Triplets are:- " << endl;
    for (vector<int> temp : ans)
    {
        for (int num : temp)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}
