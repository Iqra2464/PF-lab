#include <iostream>
using namespace std;

// Function overloads with different signatures
void display(int num) {
    cout << "Integer: " << num << endl;
}

void display(double num) {
    cout << "Double: " << num << endl;
}

int main() {
    display(5);        // Calls the int version
    display(5.5);      // Calls the double version
    return 0;
}





#include <iostream>
using namespace std;

// Function declaration (prototype)
int add(int a, int b);

int main() {
    cout << "Sum: " << add(3, 7) << endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}


3. Function Definition

#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum: " << sum(4, 6) << endl;
    return 0;
}


4. Function Call

#include <iostream>
using namespace std;

void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet("Alice");
    greet("Bob");
    return 0;
}


5. Return Type

#include <iostream>
using namespace std;

int square(int num) { return num * num; }
double half(double num) { return num / 2; }
void message() { cout << "No return type!" << endl; }

int main() {
    cout << "Square: " << square(4) << endl;
    cout << "Half: " << half(10.0) << endl;
    message();
    return 0;
}


6. Parameters

#include <iostream>
using namespace std;

int multiply(int a, int b) {
    return a * b;
}

int main() {
    cout << "Product: " << multiply(4, 5) << endl;
    return 0;
}



7. Arguments

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    cout << "Sum 1: " << add(3, 7) << endl;
    cout << "Sum 2: " << add(10, 15) << endl;
    return 0;
}


8. Default Parameters

#include <iostream>
using namespace std;

void display(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    display();          // Uses default parameter
    display("Alice");   // Uses provided argument
    return 0;
}



9. Pass by Value

#include <iostream>
using namespace std;

void modifyValue(int x) {
    x = 10; // Only changes the local copy
}

int main() {
    int num = 5;
    modifyValue(num);
    cout << "Value: " << num << endl; // Original value remains unchanged
    return 0;
}



10. Pass by Reference

#include <iostream>
using namespace std;

void modifyValue(int &x) {
    x = 10; // Changes the actual variable
}

int main() {
    int num = 5;
    modifyValue(num);
    cout << "Value: " << num << endl; // Original value is modified
    return 0;
}



11. Inline Functions

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square: " << square(5) << endl;
    return 0;
}

