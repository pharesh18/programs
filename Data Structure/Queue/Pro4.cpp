#include <iostream>
#include <queue>

using namespace std;

const int len = 5;
int arr[len];
int front = -1, rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return (rear + 1) % len == front;
}

void push(int value) {
    if ((rear + 1) % len == front) {
        cout << "\n\n Queue is full, Cannot enqueue!!\n\n";
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % len;
    }

    arr[rear] = value;
    cout << " Enqueued element: " << value << "\n";
}

void pop() {
    if (front == -1) {
        cout << "Queue is empty, Cannot dequeue\n";
        return;
    }

    cout << " Dequeued element: " << arr[front] << "\n";

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % len;
    }
}

void display() {
    if (isEmpty()) {
        cout << "\n\n Queue is empty!!\n\n";
        return;
    }

    cout << "\n Queue elements: ";
    int i = front;
    do {
        cout << arr[i] << " ";
        i = (i + 1) % len;
    } while (i != (rear + 1) % len);
}

void generateBinaryNumbers(int n) {
    if (n <= 0) {
        cout << "\n Invalid input. Please enter a positive number.\n";
        return;
    }

    for (int i = 1; i <= n; ++i) {
        push(i);
        cout << " " << arr[front];
        pop();

        int temp = i * 10;

        if (temp <= n)
            push(temp);
        else
            break;
    }
}

int main() {
    int choice;
    int n;
    do {
        cout << "\n\n Enter your choice : \n";
        cout << " 1. Generate binary numbers\n";
        cout << " 0. Exit\n\n";
        cout << " Enter your choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n Enter the value of n: ";
                cin >> n;
                generateBinaryNumbers(n);
                break;

            case 0:
                break;

            default:
                cout << "\n\n Invalid choice, Enter valid choice!";
                break;
        }
    } while (choice != 0);
    return 0;
}
