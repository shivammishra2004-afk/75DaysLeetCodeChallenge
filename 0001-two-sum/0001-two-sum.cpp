#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int m = 0; m < nums.size(); m++) {
            int complement = target - nums[m];

            if(mp.find(complement) != mp.end()) {
                return {mp[complement], m};
            }

            mp[nums[m]] = m;
        }

        return {};
    }
};