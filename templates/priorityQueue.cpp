
/*************************************************
Author: GuJiahui
Date: 2022-01-10
Description: CPPTemplate
*************************************************/

#include "base.h"

struct cmp{
    bool operator() (int a, int b ){ 
        // 比较器返回true意味着b被放在顶端
        // 在ab相等时应当返回false
        return a>b; 
    }
};

int main(){
    priority_queue<int,vector<int>,cmp> pq;
    pq.push(444);
    pq.push(233);
    cout<<pq.top();
    return pq.top();
}
