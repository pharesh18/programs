#include<iostream>
#include<stack>
using namespace std;

void TOH(int start, int end, char s, char a, char d) {
    stack<int> startStack, endStack;
    stack<char> sourceStack, auxiliaryStack, destinationStack;

    startStack.push(start);
    endStack.push(end);
    sourceStack.push(s);
    auxiliaryStack.push(a);
    destinationStack.push(d);

    while (!startStack.empty()) {
        int currentStart = startStack.top();
        int currentEnd = endStack.top();
        char currentSource = sourceStack.top();
        char currentAuxiliary = auxiliaryStack.top();
        char currentDestination = destinationStack.top();

        startStack.pop();
        endStack.pop();
        sourceStack.pop();
        auxiliaryStack.pop();
        destinationStack.pop();

        if (currentStart > currentEnd) {
            continue;
        }

        startStack.push(currentStart);
        endStack.push(currentEnd - 1);
        sourceStack.push(currentAuxiliary);
        auxiliaryStack.push(currentSource);
        destinationStack.push(currentDestination);

        cout << "\n Move disk from " << currentSource << " to " << currentDestination;

        startStack.push(currentStart);
        endStack.push(currentEnd - 1);
        sourceStack.push(currentSource);
        auxiliaryStack.push(currentDestination);
        destinationStack.push(currentAuxiliary);
    }
}

int main() {
    int start = 1, end = 3;
    char source = 'A', auxiliary = 'B', destination = 'C';

    TOH(start, end, source, auxiliary, destination);

    return 0;
}
