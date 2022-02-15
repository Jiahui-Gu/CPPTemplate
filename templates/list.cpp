
/*************************************************
Author: GuJiahui
Date: 2022-01-10
Description: CPPTemplate
*************************************************/

#include "base.h"

class Node {
public:
    int val;
    Node* next;
    
    Node(int _val) {
        val = _val;
        next = NULL;
    }
};
int main() {
    Node* node = new Node(0);
    cout<<node->val;
    return 0;
}