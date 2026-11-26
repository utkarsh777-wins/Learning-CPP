#include <iostream>
#include <string>

bool isEmpty(int top) {
    return top == -1;
}
bool isFull(int top, int n) {
    return (top == n-1);
}

void push(int stack[], int *top, int n, int val) {
    if (isFull((*top), n)) {
        std::cout << "FULL" << std::endl;
        return;
    }
    *top += 1;
    stack[(*top)] = val;
}
void pop(int stack[], int *top) {
    if (isEmpty(*top)) {
        std::cout << "EMPTY" << std::endl;
        return;
    }
    std::cout << stack[*(top)] << std::endl;
    *top -= 1;
}
void show(int stack[], int *top) {
    
    
    if (isEmpty(*top)) {
        std::cout << "EMPTY" << std::endl;
        return;
    }
    for (int i=(*top); i>=0; i--) {
        std::cout << stack[i] << " ";
    }
    std::cout << std::endl;
}
void showT(int stack[], int *top)
{
    if (isEmpty(*top)) {
        std::cout << "EMPTY" << std::endl;
        return;
    }
    std::cout << stack[(*top)] << std::endl;
}

int main() {

    int n;
    std::cin >> n;

    int stack[n];
    int top =-1;

    int q=0;
    std::cin >> q;

    while(q--) {
        std::string i;
        std::cin >> i;

        if (i == "PUSH") {
            int val;
            std::cin >> val;
            push(stack, &top, n, val);

        } else if(i == "POP") {
            pop(stack, &top);

        } else if(i == "SHOW") {
            show(stack, &top);
        } else if (i == "TOP") {
            showT(stack, &top);

        } else if (i == "EXIT") {
            q=0;
            std::cout << "we back" << std::endl;
        } else {
            std::cout << "Enter a valid command\n";
        }

    }

    return 0;

}