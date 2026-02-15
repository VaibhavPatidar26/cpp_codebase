#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Solution {
private:
    int maxFromMp(map<int,int>& MaxStore){
        return MaxStore.rbegin()->first;
    }

public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int,int> MaxStore;
        vector<int> returnMax;

        int end = nums.size();
        int left = 0;
        int right = 0;

        while (right < end) {

            MaxStore[nums[right]]++;


            if (right - left + 1 == k) {

                int value = maxFromMp(MaxStore);
                returnMax.push_back(value);
                MaxStore[nums[left]]--;
                if (MaxStore[nums[left]] == 0)
                    MaxStore.erase(nums[left]);

                left++;
            }

            right++;
        }

        return returnMax;
    }
};