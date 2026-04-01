class Node {
    private :
        long data ;
        Node* next ;
    public :
        Node(long );
        ~Node();
        void addHead(Node*);
        Node* nextNode ();
        void displayNode ();
};


Node :: Node (long d ) {
    data = d;
    next = NULL;
    cout<<"adding "<<data<<endl;
}

Node :: ~Node () {
    cout<<"Node "<<data<<" is being deleted"<<endl;
}

void Node :: addHead (Node * newNode) {
    //next = newNode ;
    newNode->next=this;
}


Node* Node :: nextNode () {
    return next ;
}

void Node :: displayNode () {
    cout<<"Node data:"<<data<<endl;
}



class LL {
    private :
        Node* head ;
        int size;
    public :
        LL();
        ~LL();
        void displayLL () ;
        void addNode (Node*) ;
};


LL :: LL () {
    size = 0 ;
    head = NULL;
}

LL :: ~LL () {
    for (int i = 0;i < size ; i ++) {
        Node* dummy = head;
        
        head = head->nextNode();
        delete dummy ;
    }
}

void LL :: displayLL () {
    Node* dummy = head ;
    for (int i = 0 ; i < size ; i ++) {
        dummy->displayNode();
        dummy = dummy->nextNode();
    }
}

void LL :: addNode (Node* newNode) {
    /*if (head == NULL) {
        head = newNode ;
    }else{*/
        head->addHead(newNode);
        head=newNode;
    //}
    
    size ++ ;
}