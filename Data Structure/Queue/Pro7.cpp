#include <iostream>

using namespace std;

const int MAX_SIZE = 5;

class Deque {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Deque() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
   		if ((front == 0 && rear == MAX_SIZE - 1) || (front == rear + 1)) {
      		return true;
    	} else {
        	return false;
    	}
	}

    bool isEmpty() {
        return front == -1;
    }

    void insertFront(int value) {
        if (isFull()) {
            cout << "\n Deque is full. Cannot insert at front.\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        } else if (front == 0) {
            front = MAX_SIZE - 1;
        } else {
            front--;
        }

        arr[front] = value;
        cout << "\n Inserted at front: " << value << endl;
    }

    void insertRear(int value) {
        if (isFull()) {
            cout<<"\n Deque is full. Cannot insert at rear.\n";
            return;
        }

        if (front == -1) {
            front = rear = 0;
        } else if (rear == MAX_SIZE - 1) {
            rear = 0;
        } else {
            rear++;
        }

        arr[rear] = value;
        cout << "\n Inserted at rear: " << value << endl;
    }

    void deleteFront() {
        if (isEmpty()) {
            cout << "\n Deque is empty, Cannot delete from front.\n";
            return;
        }

        cout << "\n Deleted from front: " << arr[front] << endl;

        if (front == rear) {
            front = rear = -1;
        } else if (front == MAX_SIZE - 1) {
            front = 0;
        } else {
            front++;
        }
    }

    void deleteRear() {
        if (isEmpty()) {
            cout << "\n Deque is empty, Cannot delete from rear.\n";
            return;
        }

        cout << "\n Deleted from rear: " << arr[rear] << endl;

        if (front == rear) {
            front = rear = -1;
        } else if (rear == 0) {
            rear = MAX_SIZE - 1;
        } else {
            rear--;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "\n Deque is empty\n";
            return;
        }

        cout << "\n Deque element: ";
        int i = front;
        do {
            cout << arr[i] << " ";
            i = (i + 1) % MAX_SIZE;
        } while (i != (rear + 1) % MAX_SIZE);

        cout<<"\n";
    }
};

int main() {
    Deque dq;

    int choice, value;

    do {
        cout << "\n\n Enter your choice:\n";
        cout << " 1. Insert at Front\n";
        cout << " 2. Insert at Rear\n";
        cout << " 3. Delete from Front\n";
        cout << " 4. Delete from Rear\n";
        cout << " 5. Display Deque\n";
        cout << " 0. Exit\n";

        cout << " Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\n Enter value to insert at front: ";
                cin >> value;
                dq.insertFront(value);
                break;

            case 2:
                cout << "\n Enter value to insert at rear: ";
                cin >> value;
                dq.insertRear(value);
                break;

            case 3:
                dq.deleteFront();
                break;

            case 4:
                dq.deleteRear();
                break;

            case 5:
                dq.display();
                break;

            case 0:
                break;

            default:
                cout << "\n\n Invalid choice. Please enter a valid choice.\n";
        }

    } while (choice != 0);

    return 0;
}
