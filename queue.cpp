#include <iostream>
using namespace std;
int queueArr[10];
int firstindex = 0;
int rear = -1;

void enqueue(int value) {
    if (rear == 9) {
        cout << "Queue overflow!" << endl;
        return;
    }
    rear++;
    queueArr[rear] = value;
}

void dequeue() {
    if (firstindex > rear) {
        cout << "Queue underflow!" << endl;
        return;
    }
    cout << "Removed= " << queueArr[firstindex] << endl;
    firstindex++;
}



void display() {
    if (firstindex > rear) {
        cout << "Queue is empty!" << endl;
        return;
    }
    cout << "Queue elements: ";
    for (int i = firstindex; i <= rear; i++) {
        cout << queueArr[i] << " ";
    }
    cout << endl;
}

int main() {
    enqueue(10);
    enqueue(20);
    // enqueue(30);
    // enqueue(40);

    display();

    dequeue();
    display();

    dequeue();
    display();

    return 0;
}