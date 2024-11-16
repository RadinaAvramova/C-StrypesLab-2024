
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

2. Running C++ Code on Linux
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





