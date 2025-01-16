#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Temperature Conversion Function
void temperatureConversion() {
    float     celsius, fahrenheit;
    int choice;

    cout << "\nTemperature Conversion\n";
    cout << "-----------------------\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "\nEnter temperature in Celsius: ";
        cin >> celsius;
        
        fahrenheit = (celsius * 9 / 5) + 32;
        
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F\n\n";
    }
    else if (choice == 2) {
        cout << "\nEnter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        
        celsius = (fahrenheit - 32) * 5 / 9;
        
        cout << "Temperature in Celsius: " << celsius << "°C\n\n";
    }
    else {
        cout << "Invalid choice.\n\n";
    }
}

void studentGradingchart() {
    int numstudents;
    
    // Displaying header
    cout << "\n**** Student Grading System ****\n";
    cout << "-----------------------\n";
    cout << "Enter number of students: ";
    cin >> numstudents;  // Read number of students

    // Arrays to store names, grades, and percentages for each student
    string name[numstudents], grade[numstudents];   // Array for student names and grades
    double percentage[numstudents], marks[numstudents]; // Array for student percentages
    
    // Clearing the input buffer to prevent getline from skipping
    cin.ignore();  // This clears any leftover newline from the input buffer

    // Loop to input each student's data
    for (int i = 0; i < numstudents; i++) {
        cout << "\nEnter name of student " << (i + 1) << ": ";
        getline(cin, name[i]);  // Use getline to allow spaces in the name

        cout << "Enter the marks of " << name[i] << " Out of 1100: ";
        cin >> marks[i];  // Read marks for the student
        
        // Check if marks are within the valid range
        if (marks[i] > 1100 || marks[i] < 0) {		
            cout << "\n**** Marks are out of range for " << name[i] << " ****" << endl;
            grade[i] = "Invalid";  // Mark grade as invalid
            percentage[i] = 0;  // Set percentage to 0 for invalid marks
            continue;
        }
        else {
            // Calculate the percentage
            percentage[i] = (marks[i] / 1100.0) * 100;

            // Assign grades based on percentage
            if (percentage[i] >= 80 && percentage[i] <= 100)
                grade[i] = "A1";
            else if (percentage[i] >= 70 && percentage[i] < 80)
                grade[i] = "A";
            else if (percentage[i] >= 60 && percentage[i] < 70)
                grade[i] = "B";
            else if (percentage[i] >= 50 && percentage[i] < 60)
                grade[i] = "C";
            else if (percentage[i] >= 40 && percentage[i] < 50)
                grade[i] = "D";
            else if (percentage[i] >= 30 && percentage[i] < 40)
                grade[i] = "E";
            else if (percentage[i] >= 0 && percentage[i] < 30)
                grade[i] = "F";
            else {
                // If percentage is out of range, which is technically unnecessary
                grade[i] = "Invalid";
            }
        }
    }

    cout << "\n";
    
    // Printing the header with a set width for the columns
    cout << left << setw(25) << "Student Name" 
         << setw(12) << "Grade" 
         << setw(15) << "Percentage" << endl;
    cout << "---------------------------------------------\n";

    // Loop to display the entered data with aligned columns
    for (int i = 0; i < numstudents; i++) {
        // Display the entered data with width formatting
        cout << setw(25) << name[i]  // Set width for the name
             << setw(12) << grade[i]       // Set width for the grade
             << setw(15) << percentage[i] << "%" << endl ; // Set width for percentage     
    }
}


// Simple Calculator Function
void simpleCalculator() {
    double num1, num2, result;
    char operation;

    cout << "\nSimple Calculator\n";
    cout << "-------------------\n";
    
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    
    cout << "\nEnter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;

    if (operation == '+') {
        result = num1 + num2;
        cout << "Result: " << result << "\n\n";
    }
    else if (operation == '-') {
        result = num1 - num2;
        cout << "Result: " << result << "\n\n";
    }
    else if (operation == '*') {
        result = num1 * num2;
        cout << "Result: " << result << "\n\n";
    }
    else if (operation == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            cout << "Result: " << result << "\n\n";
        }
        else {
            cout << "Error! Division by zero.\n\n";
        }
    }
    else {
        cout << "Invalid operator.\n\n";
    }
}


// Simple Expense Tracker Function
void expenseTracker() {
    double expense, totalExpense = 0;
    char moreExpenses;

    cout << "\nSimple Expense Tracker\n";
    cout << "-----------------------\n";

    do {
        cout << "\nEnter expense: ";
        cin >> expense;
        
        totalExpense += expense;

        cout << "Do you want to enter another expense? (y/n): ";
        cin >> moreExpenses;

    } while (moreExpenses == 'y' || moreExpenses == 'Y');

    cout << "\nTotal Expenses: " << totalExpense << "\n\n";
}


// University Hierarchy System Function
void universityHierarchy() {
    int departmentChoice;

    cout << "\nUniversity Hierarchy\n";
    cout << "-----------------------\n";
    cout << "1. Computer Science\n";
    cout << "2. Mathematics\n";
    cout << "3. Physics\n";
    cout << "4. Chemistry\n";
    cout << "Enter your department choice (1-4): ";
    cin >> departmentChoice;

    switch (departmentChoice) {
        case 1:
            cout << "\nWelcome to Computer Science Department!\n\n";
            break;
        case 2:
            cout << "\nWelcome to Mathematics Department!\n\n";
            break;
        case 3:
            cout << "\nWelcome to Physics Department!\n\n";
            break;
        case 4:
            cout << "\nWelcome to Chemistry Department!\n\n";
            break;
        default:
            cout << "\nInvalid department choice.\n\n";
            break;
    }
}


int main() {
    int operationChoice;
    char b;
    
       do{	   

    // Menu
    cout << "\nChoose an operation:\n";
    cout << "----------------------\n";
    cout << "1. Temperature Conversion\n";
    cout << "2. Student Grading System\n";
    cout << "3. Simple Calculator\n";
    cout << "4. Simple Expense Tracker\n";
    cout << "5. University Hierarchy System\n";
    cout << "Enter your choice (1-5): ";
    cin >> operationChoice;

    // Perform the selected operation
    cout << "\n";
    switch (operationChoice) {
        case 1:
            temperatureConversion();
            break;
        case 2:
            studentGradingchart();
            break;
        case 3:
            simpleCalculator();
            break;
        case 4:
            expenseTracker();
            break;
        case 5:
            universityHierarchy();
            break;
        default:
            cout << "Invalid choice. Please select a valid option (1-5).\n\n";
            break;
    }
    
    cout<<"Do you want to perform any other operation?(y/n)"<<endl;
    cin>>b;
}
    while(b=='Y' || b=='y');
    
    cout<<"\n Operation End";

    return 0;
}
