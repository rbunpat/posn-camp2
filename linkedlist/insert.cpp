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

    listNode* numList = getNode();

    numList -> val = 23;//init the original list |  23  |null|
    numList -> next = NULL;

    listNode* newList = getNode();

    newList -> val = 20;//idk wtf
    newList -> next = numList;

   // cout << newList -> next; //why tf does it output the mem location

    

    return 0;
}