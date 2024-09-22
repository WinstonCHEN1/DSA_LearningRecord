class MyLinkedList {
    class Node {
    public:
        int value = 0;
        Node *next = nullptr, *prev = nullptr;
    };
public:
    Node *head = nullptr;
    Node *tail = nullptr;
    int size = 0;

    MyLinkedList() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;  // 增加负索引检查
        Node *pointer = head;
        for (int i = 0; i < index; i++) {
            pointer = pointer->next;
        }
        return pointer->value;
    }

    void addAtHead(int val) {
        Node *newNode = new Node();
        newNode->value = val;
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void addAtTail(int val) {
        Node *newNode = new Node();
        newNode->value = val;
        if (tail == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index > size) return;
        if (index < 0) index = 0;  // 处理负索引情况
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }

        Node *pointer = head;
        for (int i = 0; i < index; i++) {
            pointer = pointer->next;
        }

        Node *newNode = new Node();
        newNode->value = val;

        newNode->prev = pointer->prev;
        newNode->next = pointer;
        if (pointer->prev != nullptr) {
            pointer->prev->next = newNode;
        }
        pointer->prev = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index >= size || index < 0) return;

        Node* pointer = head;
        for (int i = 0; i < index; i++) {
            pointer = pointer->next;
        }

        if (pointer == head) {
            head = pointer->next;
            if (head != nullptr) head->prev = nullptr;
        }
        if (pointer == tail) {
            tail = pointer->prev;
            if (tail != nullptr) tail->next = nullptr;
        }

        if (pointer->prev != nullptr) {
            pointer->prev->next = pointer->next;
        }
        if (pointer->next != nullptr) {
            pointer->next->prev = pointer->prev;
        }

        delete pointer; // 释放内存
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index, val);
 * obj->deleteAtIndex(index);
 */
