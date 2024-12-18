#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

class SingleLinkedList {
private:
    int size;

public:
    Node* head;
    SingleLinkedList() {
        head = nullptr;
        size = 0;

    }

    void insert(int value) {
        Node* newNode = new Node;
        newNode->value = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }


        size++;
    }

    // Function to print the contents of the list
    void print() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->value << " ";
            current = current->next;
        }
        cout << endl;
    }

    void recursivePrint(Node* n) {

        if (n == nullptr) {
            cout << endl;
            return;
        }

        cout << n->value << " ";
        recursivePrint(n->next);

    }


    int getSize() {
        return size;
    }
};

int main() {
    SingleLinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.print(); // Output: 3 2 1
    list.recursivePrint(list.head);
    cout << "Size: " << list.getSize() << endl; // Output: Size: 3
    return 0;
}
