#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    // Push operation (insert at beginning)
    void push(int value) {
        Node* newNode = new Node(value);

        newNode->next = top;
        top = newNode;

        cout << value << " pushed into stack" << endl;
    }

    // Pop operation (delete from beginning)
    void pop() {
        if (top == NULL) {
            cout << "Stack Underflow" << endl;
            return;
        }

        Node* temp = top;
        cout << temp->data << " popped from stack" << endl;

        top = top->next;
        delete temp;
    }

    // Peek operation
    void peek() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
        }
        else {
            cout << "Top element: " << top->data << endl;
        }
    }

    // Display stack elements
    void display() {
        if (top == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = top;

        cout << "Stack elements are: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}

//2.
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

// Function to print linked list in reverse using recursion
void printReverse(Node* head) {
    if (head == NULL)
        return;

    printReverse(head->next);   // Recursive call
    cout << head->data << " ";  // Print while returning
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    cout << "Linked List in Reverse Order: ";
    printReverse(head);
    return 0;
}

//3
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Stack {
    Node* head;

public:
    Stack() {
        head = NULL;
    }

    // Push operation (insert at end)
    void push(int value) {
        Node* newNode = new Node(value);

        if (head == NULL) {
            head = newNode;
        }
        else {
            Node* temp = head;

            while (temp->next != NULL) {
                temp = temp->next;
            }

            temp->next = newNode;
        }

        cout << value << " pushed into stack" << endl;
    }

    // Pop operation (delete from end)
    void pop() {
        if (head == NULL) {
            cout << "Stack Underflow" << endl;
            return;
        }

        // Only one node present
        if (head->next == NULL) {
            cout << head->data << " popped from stack" << endl;
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        // Reach second last node
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        cout << temp->next->data << " popped from stack" << endl;

        delete temp->next;
        temp->next = NULL;
    }

    // Peek operation
    void peek() {
        if (head == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        cout << "Top element: " << temp->data << endl;
    }

    // Display stack
    void display() {
        if (head == NULL) {
            cout << "Stack is empty" << endl;
            return;
        }

        Node* temp = head;

        cout << "Stack elements are: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.peek();

    s.pop();

    s.display();

    return 0;
}
//4
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
    Node* head;

public:
    Queue() {
        head = NULL;
    }

    // Enqueue at beginning
    void enqueue(int value) {
        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;

        cout << value << " inserted into queue" << endl;
    }

    // Dequeue from end
    void dequeue() {
        if (head == NULL) {
            cout << "Queue Underflow" << endl;
            return;
        }

        // Only one node
        if (head->next == NULL) {
            cout << head->data << " removed from queue" << endl;
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        // Move to second last node
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        cout << temp->next->data << " removed from queue" << endl;

        delete temp->next;
        temp->next = NULL;
    }

    // Display queue
    void display() {
        Node* temp = head;

        if (head == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}

//5

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = NULL;
    }

    // Insert at last
    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (rear == NULL) {
            front = rear = newNode;
        }
        else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << value << " inserted into queue" << endl;
    }

    // Delete from first
    void dequeue() {
        if (front == NULL) {
            cout << "Queue Underflow" << endl;
            return;
        }

        Node* temp = front;
        cout << temp->data << " removed from queue" << endl;

        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete temp;
    }

    // Display queue
    void display() {
        if (front == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;

        cout << "Queue elements: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();

    return 0;
}