
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
        // When the comparator returns true, a is placed before b.
        // Return false when a and b are equal.
        // Use stable_sort if stability is required.
        return int(a) < int(b);
    }
};

struct cmpVector2D{
    bool operator()(const vector<int>& a, const vector<int>& b){
        // Sort by the first value in ascending order.
        // If the first values are equal, sort by the second value in ascending order.
        if(a[0] != b[0]){
            return a[0] < b[0];
        }
        return a[1] < b[1];
    }
};

int main(){
    vector<double> nums = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};
    sort(nums.begin(), nums.end(), cmp());
    for(int i = 0; i < nums.size(); i++){
        cout<<nums[i]<<' ';
    }

    cout<<endl;

    vector<vector<int>> points = {{2, 3}, {1, 5}, {2, 1}, {1, 2}};
    sort(points.begin(), points.end(), cmpVector2D());
    for(int i = 0; i < points.size(); i++){
        cout<<points[i][0]<<' '<<points[i][1]<<endl;
    }

    return 0; 
}
