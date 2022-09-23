
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

struct cmp{
	bool operator()(const double a, const double b){
        // 比较器返回true意味着, a被放在前面
        // 在ab相等时应当返回false
        // 如要保证稳定性, 应当使用stable_sort
        return int(a) < int(b);
	}
};

int main(){
    vector<double> nums = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};
    sort(nums.begin(), nums.end(), cmp());
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<' ';
    }
    return 0; 
}
