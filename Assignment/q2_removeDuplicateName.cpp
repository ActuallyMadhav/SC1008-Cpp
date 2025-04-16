#include <iostream>
#include <string>

struct StringNode {
    std::string name;
    StringNode* next;
};


void printList(const StringNode* head) {
    const StringNode* temp = head;
    while (temp) {
        std::cout << temp->name << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

void append(StringNode*& head, const std::string& name) {
    StringNode* newNode = new StringNode;
    newNode->name = name;
    newNode->next = nullptr;
    if (!head) {
        head = newNode;
        return;
    }
    StringNode* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void freeList(StringNode*& head) {
    while (head) {
        StringNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Remove duplicate names from the linked list
void removeDuplicatedNames(StringNode*& head) {
    // TO-DO: Write Your Code Here
    if (!head || !head->next){
        return;
    }

    StringNode* cur = head;

    while (cur){
        StringNode* prev = cur;
        StringNode* check = cur->next;

        while(check){
            if(check->name == cur->name){
                prev->next = check->next;
                delete check;
                check = prev->next;
            }
            else{
                prev = check;
                check = check->next;
            }
        }

        cur = cur->next;
    }
}

int main() {
    StringNode* head = nullptr;
    append(head, "Alice");
    append(head, "Alice");
    append(head, "Bob");
    append(head, "Charlie");
    append(head, "David");
    printList(head);
    removeDuplicatedNames(head);
    printList(head);
    freeList(head);

    return 0;
}
