//pointer to functions

#include <iostream>
using namespace std;

void displayMessage() {
    cout << "Hello, World!" << endl;
}
int danger(){
    return 10;
}

int main() {
    void (*funcPtr)();
     // Declaring a function pointer
    int(*pp)();
    pp = &danger;

    cout << pp() <<endl;

    // Assigning the address of the function 'displayMessage' to the function pointer
    funcPtr = &displayMessage;

    // Calling the function using the function pointer
    funcPtr();  // Output: Hello, World!

    // Another way to assign the function address (implicitly)
    funcPtr = displayMessage;
    funcPtr();  // Output: Hello, World!

    return 0;
}

