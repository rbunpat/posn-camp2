#include <bits/stdc++.h>

using namespace std;

struct listNode
{
    int val;
    struct listNode * next;
};

listNode * getNode() {
    listNode * node;
    node = new listNode;
    node -> next = NULL;

    return node;
}

void printList(listNode* head) {
    while (head != NULL) {
        cout << head -> val << " ";
        head = head -> next;
    }
}


int main() {

    listNode* node1 = getNode();

    node1 -> val = 23;
    node1 -> next = NULL;

    listNode* node2 = getNode();
    
    node2 -> val = 20;
    node2 -> next = node1;

    listNode* node3 = getNode();

    node3 -> val = 24;

    node2 -> next = node3;
    node3 -> next = node1;
    

    printList(node2);

    return 0;
}