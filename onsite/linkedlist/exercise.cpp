#include <bits/stdc++.h>

using namespace std;

// init the data structure thingy
struct dataNode
{
    int data;
    struct dataNode *next;
};

dataNode *head = NULL; // make it null cuz no data yet

// function to make a new thingy
dataNode *getNode()
{
    dataNode *node;
    node = new dataNode;
    node->next = NULL;

    return node;
}

void addData(int newData)
{
    dataNode *newNode = getNode();
    newNode->data = newData;
    newNode->next = NULL;

    // if there is not data, make the new data the head
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    else
    {
        dataNode *currentNode = head;
        while (currentNode->next != NULL)
        {
            currentNode = currentNode->next;
        }
        currentNode->next = newNode;
    }
}

void deleteData(int nodeDataToDelete)
{
    dataNode *currentNode = head;  // start at the first node
    dataNode *previousNode = NULL; // there is no previous node at the first node

    while (currentNode != NULL)
    {
        // if the current node match nodedatatodelete
        if (currentNode->data == nodeDataToDelete)
        {
            if (previousNode == NULL)
            {
                head = currentNode->next;
                delete currentNode; // yeet
                return;
            }
            else
            {
                previousNode->next = currentNode->next;
                delete currentNode; // yeet
                return;
            }
        }
        previousNode = currentNode;
        currentNode = currentNode->next;
    }
}

void showData()
{
    dataNode *currentNode = head;
    cout << "***Data in the Linked List are: ";
    // traverse the thingy
    while (currentNode != NULL)
    {
        cout << currentNode->data << " ";
        currentNode = currentNode->next;
    }
    cout << "***" << endl;
}

int main()
{
    char currentCommand;
    int data;

    do
    {
        cout << "Enter Command: ";
        cin >> currentCommand;

        switch (currentCommand)
        {
        case 'A':
            cout << "Enter Data: ";
            cin >> data;
            addData(data);
            break;

        case 'D':
            cout << "Enter Data: ";
            cin >> data;
            deleteData(data);
            break;

        case 'P':
            showData();
            break;
        }
        // if the command is not E, repeat the loop
    } while (currentCommand != 'E');

    return 0;
}