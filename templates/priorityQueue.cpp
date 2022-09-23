
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
    bool operator() (int a, int b ){ 
        // 比较器返回true意味着b被放在顶端
        // 在ab相等时应当返回false
        return a>b; 
    }
};

int main(){
    //priority_queue<int, vector<int>, greater<int>> pq; // 小顶堆
    //priority_queue<int, vector<int>, less<int>> pq; // 大顶堆
    priority_queue<int,vector<int>,cmp> pq;
    pq.push(444);
    pq.push(233);
    cout<<pq.top();
    return pq.top();
}
