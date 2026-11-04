#include <iostream>
#include <string>

using namespace std;

// Node structure for the linked list
struct ClothNode {
    string clothName;
    ClothNode* next;
};

// Stack class using linked list
class ClothStack {
private:
    ClothNode* top;

public:
    ClothStack() {
        top = NULL;
    }

    // TODO 1: Implement pushCloth() Function
    void pushCloth(string name) {
        ClothNode* newNode = new ClothNode();
        newNode->clothName = name;
        newNode->next = top;
        top = newNode;
        cout << name << " added to the stack." << endl;
    }

    // TODO 2: Implement popCloth() Function
    void popCloth() {
        if (top == NULL) {
            cout << "Stack is empty. Nothing to remove." << endl;
            return;
        }
        ClothNode* temp = top;
        cout << temp->clothName << " removed from the stack." << endl;
        top = top->next;
        delete temp;
    }

    // TODO 3: Implement displayClothStack() Function
    void displayClothStack() {
        if (top == NULL) {
            cout << "Stack is empty." << endl;
            return;
        }
        ClothNode* temp = top;
        while (temp != NULL) {
            cout << temp->clothName << endl;
            temp = temp->next;
        }
    }
};

int main() {
    ClothStack stack;

    // TODO 4: Student ID Updated with your actual ID
    string vuID = "BC250432022"; 

    cout << "----------------------------------------" << endl;
    cout << "Student ID: " << vuID << endl;
    cout << "----------------------------------------" << endl;

    cout << "\n--- Adding Initial Clothes ---" << endl;
    stack.pushCloth("Jeans");
    stack.pushCloth("Shirt");
    stack.pushCloth("Trousers");
    stack.pushCloth("Socks");
    stack.pushCloth("Cap");
    stack.pushCloth("Jacket");

    cout << "\n--- Current Clothes Stack ---" << endl;
    stack.displayClothStack();

    // Logic for VUID last digit check (Last digit = 2)
    char lastChar = vuID[vuID.length() - 1];
    int lastDigit = lastChar - '0';

    cout << "\n--- Adding Clothes based on VUID Last Digit (" << lastDigit << ") ---" << endl;
    if (lastDigit > 5) {
        stack.pushCloth("Sweater");
        stack.pushCloth("Pant");
    } else {
        stack.pushCloth("Sweater");
    }

    cout << "\n--- Removing 3 Clothes from Stack ---" << endl;
    stack.popCloth();
    stack.popCloth();
    stack.popCloth();

    cout << "\n--- Final Clothes Stack ---" << endl;
    stack.displayClothStack();

    return 0;
}
