class MyLinkedList {
    class Node {
    public:
        int value=0;
        Node *next=nullptr,*prev=nullptr;
    };
public:
    Node *head=nullptr;
    Node *tail=nullptr;
    int size=0;
    MyLinkedList() {
        head=nullptr;
        tail=nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index>=size) return -1;
        auto pointer=head;
        for(int i=0;i<index;i++) {
            pointer=pointer->next;
        }
        return pointer->value;
    }
    
    void addAtHead(int val) {
        if(head==nullptr) {
            auto *newNode=new Node();
            newNode->value=val;
            head=newNode;
            tail=newNode;
        }else {
            auto *newNode=new Node();
            newNode->value=val;
            head->prev=newNode;
            newNode->next=head;
            head=newNode;
        }
        size++;
    }
    
    void addAtTail(int val) {
        if(tail==nullptr) {
            auto *newNode=new Node();
            newNode->value=val;
            head=newNode;
            tail=newNode;
        }else {
            auto *newNode=new Node();
            newNode->value=val;
            tail->next=newNode;
            newNode->prev=tail;
            tail=newNode;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size) return;
        if(index==size) {
            addAtTail(val);
            return;
        }
        auto pointer=head;
        for(int i=0;i<index;i++) {
            pointer=pointer->next;
        }
        auto *newNode=new Node();
        newNode->value=val;
        if(pointer->prev!=nullptr) {
            pointer->prev->next=newNode;
            newNode->prev=pointer->prev;
        }

        pointer->prev=newNode;
        newNode->next=pointer;
        size++;

    }
    
    void deleteAtIndex(int index) {
        if(index>=size) return;

        auto pointer=head;
        for(int i=0;i<index;i++) {
            pointer=pointer->next;
        }
        if(pointer->prev!=nullptr) {
            pointer->prev->next=pointer->next;
        }
        if(pointer->next!=nullptr) {
            pointer->next->prev=pointer->prev;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */