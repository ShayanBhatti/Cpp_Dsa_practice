#include <bits/stdc++.h>
using namespace std;
  
class Node {
public:
    int data;
    Node* next;
};

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    third->data = 3;
    third->next = NULL;
    return 0;
}
