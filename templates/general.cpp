
/*************************************************
Author: GuJiahui
Date: 2022-01-10
Description: CPPTemplate
*************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <map>
#include <deque>

using namespace std;
using std::vector;
using std::string;
using std::unordered_map;
using std::map;
using std::unordered_set;
using std::stack;
using std::queue;
using std::priority_queue;
using std::max;
using std::min;
using std::pair;
using std::cin;
using std::cout;
using std::endl;
using std::deque;

void myQuickSort(vector<int>& nums, int left, int right){
    if(left >= right) return;
    int key = nums[left], l = left, r = right;
    while(l < r){
        while(l < r && nums[r] >= key){
            r--;
        }
        while(l < r && nums[l] <= key){
            l++;
        }
        if(l < r){
            swap(nums[l], nums[r]);
        }
    }
    swap(nums[left], nums[l]);
    myQuickSort(nums, left, l-1);
    myQuickSort(nums, l+1, right);
}

void myQuickSort(vector<int>& nums){
    myQuickSort(nums, 0, nums.size()-1);
}

int main(){
    vector<int> nums = {4, 3, 2, 6, 5, 7};
    myQuickSort(nums);
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}