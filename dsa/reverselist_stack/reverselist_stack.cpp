#include <iostream>
#include<stack>// stack from standard template library (STL)


using namespace std;

void Reverse (char c[], int n) {
    stack <char> s;
    for (int i=0; i<n; i++) { //loop for push
        s.push(c[i]);
    }
    // loop for pop
    for (int i =0; i<n; i++) {

        c[i]=s.top();// overwrite the characters at index i
        s.pop(); // perform pop
    }
}

class stack {
  private:
    char A[101];
    int top;
  public:
    void push(int x);
    void pop();
    int Top;
    bool isempty();
};

void reverse(char c[],int n) {
    stack<char> s;
}


int main() {
    char c[51];
    gets(c);
    reverse(c,strlen(c));
    printf("output=%s",c);
}
