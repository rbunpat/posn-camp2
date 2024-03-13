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


int main() {
    // listNode * numList = NULL;
    // numList = new listNode;

    // numList -> val = 10;

    // cout << numList -> val;

    listNode* node1 = getNode();
    listNode* node2 = getNode();
    listNode* node3 = getNode();

    node1 -> val = 10;
    node2 -> val = 20;
    node3 -> val = 30;

    // cout << node1 -> val;

    node1 -> next = node2; // links the list i think idk this shit is fucking confusing
    node2 -> next = node3;

    

    return 0;
}