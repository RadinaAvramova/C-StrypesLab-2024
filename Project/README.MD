
# Final project

To run C++ code on both Windows and Linux, you can follow these steps to set up your environment and execute the code.

## 1. Running C++ Code on Windows
There are several ways to run C++ code on Windows, but one of the most popular is using Visual Studio Code (VS Code) with the g++ compiler from MinGW (Minimalist GNU for Windows) or using Microsoft Visual Studio.

Using VS Code with MinGW on Windows
Install MinGW:

Download MinGW from MinGW website.
Run the installer and select mingw32-gcc-g++ for installation (this is the C++ compiler).
After installation, add C:\MinGW\bin (or the equivalent path) to your system's PATH.
Install the C/C++ Extension in VS Code:

Open VS Code.
Go to Extensions (sidebar or press Ctrl+Shift+X).
Search for "C++" and install the C/C++ extension by Microsoft.
Set Up a VS Code Task for Compiling and Running:

Open your C++ file in VS Code.
Create a tasks.json file to set up the build task:
Go to Terminal > Configure Default Build Task.
Choose "Create tasks.json from template".
Use the following example to configure:
json
Copy code
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "command": "g++",
            "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}\\${fileBasenameNoExtension}.exe"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
Build and Run Your Code:

To build, press Ctrl+Shift+B or go to Terminal > Run Build Task.
To run, open a terminal in VS Code (or Command Prompt in the project directory) and run the following command:
bash
Copy code
.\your_program_name.exe

## 2. Running C++ Code on Linux
On Linux, you can compile and run C++ code directly using the g++ compiler (which is often pre-installed on most Linux distributions).

Steps
Install g++ (if not already installed):

On Debian/Ubuntu-based distributions:
bash
Copy code
sudo apt update
sudo apt install g++
On Red Hat/Fedora-based distributions:
bash
Copy code
sudo dnf install g++
Compile and Run the Code:

Open a terminal and navigate to the directory with your C++ file.
Compile the code using:
bash
Copy code
g++ -o your_program_name your_program_file.cpp
Run the program:
bash
Copy code
./your_program_name
Running C++ Code from Both Platforms Using the Same Commands in VS Code
If you want to use VS Code and have consistent commands across both platforms:

Install VS Code on both Windows and Linux, following the steps above.
In VS Code, open a Terminal and use platform-specific commands to build and run the program:
Build:
bash
Copy code
g++ -o program_name program_file.cpp
Run:
bash
Copy code
./program_name

## 3.Main Architecture of the Code
The code is organized into the following key structures:

IntegratedCircuit: Represents an integrated circuit, storing its name, logical expression, and arguments.
CircuitInput: Stores the arguments (inputs) for a given integrated circuit.
CircuitStorage: Manages a collection of integrated circuits with a fixed capacity.
TruthTable: (not presented here, but mentioned) for storing and analyzing truth tables used for analyzing and generating logical functions.

## 4.Key Functions and Their Logic
Parsing and Processing Functions
parseIntegratedCircuit()

Reads and creates an integrated circuit from the input stream.
This function:
Parses the circuit's name and its arguments.
Reads the logical expression and converts it into tokens.
Validates the expression against the arguments using validateCircuit().
parseRunCommand()

Parses a RUN command containing the circuit's name and specific argument values.
Logical Expression Computation and Processing
convertInfixToPostfix()

Converts an infix logical expression to postfix using the Shunting Yard algorithm to simplify computation.
evaluatePostfixExpr()

Computes the value of a logical expression in postfix form using a stack. It supports & (AND), | (OR), and ! (NOT) operators.
runCircuit()

Takes a circuit and specific input values, substitutes arguments with values, and calculates the result.
Command Handling Functions
runAllCommand()

Executes a given circuit for all possible combinations of inputs, effectively generating its complete truth table.
runFindCommand()

Calculates a logical expression for a circuit represented by a truth table. It uses logical synthesis based on the "1" entries.

## 5.Memory Management
Functions like freeIntegratedCircuit(), freeCircuitStorage(), and clearCharVector() help release dynamically allocated memory. Memory management focuses on avoiding leaks, employing manual memory management for vectors and arrays.

## 6.Main Program
In main():

A CircuitStorage instance with a maximum capacity is created.
Commands are read and executed:
DEFINE: Defines a new integrated circuit.
RUN: Executes a circuit with specific inputs.
ALL: Outputs results for all combinations of inputs.
FIND: Generates a logical expression using a truth table from a file.
PRINT: Prints all defined circuits.

## 7.Sample Command Flow
The program expects commands like:

DEFINE AND_GATE(A, B) "A & B"
RUN AND_GATE(1, 0)
ALL AND_GATE
FIND "truth_table.txt"

## 8.Conclusion
The code demonstrates the fundamental principles of simulating logical circuits, using methods for:

Parsing and validating input data.
Converting and evaluating logical expressions.
Managing memory and effectively utilizing vectors.
This is an efficient solution for simulating digital integrated circuits, leveraging basic algorithms for parsing and logical function computation.





