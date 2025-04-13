#include<iostream>
using namespace std;

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
};

int main(){
    int a = 1, b = 2;
    cout << a + b;

}// 테스트
