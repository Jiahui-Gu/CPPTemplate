
/*************************************************
Author: GuJiahui
Date: 2022-01-10
Description: CPPTemplate
*************************************************/

#include "base.h"

struct cmp{
    bool operator() (int a, int b ){ 
        //compare  
        return true; 
    }
};

int main(){
    priority_queue<int,vector<int>,cmp> pq;
    pq.push(444);
    cout<<pq.top();
    return pq.top();
}
