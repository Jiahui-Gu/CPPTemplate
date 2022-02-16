
/*************************************************
Author: GuJiahui
Date: 2022-01-10
Description: CPPTemplate
*************************************************/

#include "base.h"

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
