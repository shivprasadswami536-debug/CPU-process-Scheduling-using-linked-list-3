#include <iostream>
using namespace std;

struct Node {
    int id, burst, rem;
    Node* next;
};

Node *front = NULL, *rear = NULL;

void enqueue(Node* p) {
    p->next = NULL;
    if (rear == NULL)
        front = rear = p;
    else {
        rear->next = p;
        rear = p;
    }
}

Node* dequeue() {
    if (front == NULL) return NULL;

    Node* p = front;
    front = front->next;

    if (front == NULL)
        rear = NULL;

    return p;
}

int main() {
    int n, quantum, time = 0;

    cout << "Enter number of processes: ";
    cin >> n;

    cout << "Enter Time Quantum: ";
    cin >> quantum;

    for (int i = 1; i <= n; i++) {
        Node* p = new Node;

        p->id = i;
        cout << "Enter Burst Time for P" << i << ": ";
        cin >> p->burst;

        p->rem = p->burst;
        enqueue(p);
    }

    cout << "\nProcess Completion Time\n";

    while (front != NULL) {
        Node* p = dequeue();

        if (p->rem > quantum) {
            time += quantum;
            p->rem -= quantum;
            enqueue(p);
        }
        else {
            time += p->rem;
            p->rem = 0;

            cout << "P" << p->id
                 << "        " << time << endl;

            delete p;
        }
    }

    cout << "\nScheduling Completed!";
    return 0;
}
