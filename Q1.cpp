#include <iostream>
using namespace std;
class qIMParr {
    int q[10];
    int size=10;
    int start=-1;
    int end=-1;
    int curr_size=0;
public:
    void push(int x) {
        if (isFull()) {
            cout<<"The queue is full!"<<endl;
        }
        else {
            if (curr_size == 0) {
                start = 0;
                end = 0;
            } else {
                end++;
            }
            q[end]=x;
            curr_size++;
        }
    }
    void pop() {
        if (curr_size==0) {
            cout<<"The queue is empty!"<<endl;
            return;
        }
        if (start==end) {
            start=-1;
            end=-1;
        }
        else {
            start++;
        }
        curr_size--;
    }
    bool isEmpty() {
        return curr_size == 0;
    }
    bool isFull() {
        return end == size-1;
    }
    int peek() {
        if (isEmpty()) {
            cout << "The queue is empty!" << endl;
            return -1;
        }
        return q[start];
    }
    int top() { // Added missing top() function
        return peek();
    }
    void display() {
        if (isEmpty()) {
            cout<<"The queue is empty!"<<endl;
            return;
        }
        for (int i=start;i<=end;i++) {
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    qIMParr q;
    q.push(10);
    cout<<q.top()<<endl;
    q.push(20);
    q.pop();
    cout<<q.top()<<endl;
    cout<<q.peek();
    return 0;
}