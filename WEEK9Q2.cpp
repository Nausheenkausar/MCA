#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

// ---------------- Recursive Tower of Hanoi ----------------
void hanoiRecursive(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        return;
    }
    hanoiRecursive(n - 1, from, aux, to);
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    hanoiRecursive(n - 1, aux, to, from);
}

// ---------------- Non-Recursive Tower of Hanoi ----------------
void moveDisk(char from, char to, stack<int> &A, stack<int> &B) {
    if (A.empty()) {
        A.push(B.top());
        cout << "Move disk " << B.top() << " from " << to << " to " << from << endl;
        B.pop();
    } else if (B.empty()) {
        B.push(A.top());
        cout << "Move disk " << A.top() << " from " << from << " to " << to << endl;
        A.pop();
    } else if (A.top() > B.top()) {
        A.push(B.top());
        cout << "Move disk " << B.top() << " from " << to << " to " << from << endl;
        B.pop();
    } else {
        B.push(A.top());
        cout << "Move disk " << A.top() << " from " << from << " to " << to << endl;
        A.pop();
    }
}

void hanoiIterative(int n) {
    stack<int> src, aux, dest;
    char S = 'A', A = 'B', D = 'C';

    // If number of disks is even, swap destination and auxiliary
    if (n % 2 == 0) swap(D, A);

    // Push disks onto source peg
    for (int i = n; i >= 1; i--) src.push(i);

    int totalMoves = pow(2, n) - 1;

    for (int i = 1; i <= totalMoves; i++) {
        if (i % 3 == 1)
            moveDisk(S, D, src, dest);
        else if (i % 3 == 2)
            moveDisk(S, A, src, aux);
        else
            moveDisk(A, D, aux, dest);
    }
}

// ---------------- Main Function ----------------
int main() {
    int n;
    cout << "Enter number of disks: ";
    cin >> n;

    cout << "
--- Recursive Solution ---
";
    hanoiRecursive(n, 'A', 'C', 'B');

    cout << "
--- Non-Recursive Solution ---
";
    hanoiIterative(n);

    return 0;
}

