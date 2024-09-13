#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data){
            this->data = data;
        }

        Node(int data, Node *next){
            this->data = data;
            this->next = next;
        }
};

class Linklist {
    Node *head = NULL;

    public:
    void insert(int data){
        if(head == NULL){
            head = new Node(data);
            cout << "inserted" << endl;
            return;
        }
        head = new Node(data, head);
        cout << "inserted" << endl;
    }

    void display(){
        Node *temp = head;
        while(temp){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void remove(int data){
        if(!head){
            cout << "List is empty" <<endl;
            return;
        }
        Node *temp = head;
        if(head->data == data){
            remove();
            return;
        }
        while(temp->next){
            if(temp->next->data == data)
                break;
            else temp = temp->next;
        }
        if(temp->next->data == data){
            Node *dummy = temp->next;
            temp->next = dummy->next;
            delete dummy;
            cout << "removed" << endl;
        }else{
            cout << "Not Found Data";
        }
    }

    void remove(){
        if(!head){
            cout << "List is empty" <<endl;
            return;
        }
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "removed" << endl;
    }


    void search(int data){
        Node *temp = head;
        while(temp){
            if(temp->data == data){
                cout << "Found" << endl;
                return;
            }
        }
        cout << "Not Found" << endl;
        return;
    }
};

int main() {
    Linklist l1;
    l1.remove();
    l1.remove(3);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.insert(5);
    l1.insert(6);
    l1.display();
    l1.display();
    l1.remove(5);
    l1.display();
    l1.display();
    return 0;
}