#include<iostream>
using namespace std;

<<<<<<< HEAD
=======
class Node{
    Node* next;
    int data;
    
    friend class LinkedList;
};

class LinkedList{
private:
    Node* head;
    Node* tail;
    int n;
public:
    LinkedList();
    int size();
};
LinkedList::LinkedList(){
    head = tail = nullptr;
    n = 0;
}

>>>>>>> 51e3161 (feat: 링크드리스트 구현)
int main(){
    int a = 1, b = 2;
    cout << a + b;
}