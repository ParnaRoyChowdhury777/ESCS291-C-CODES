

# Student Management Program

This program is designed to manage student information such as their names, ages, and genders. It provides functionality to read student data from a file, search for a specific student by name, sort the student list by name, and display the student information.

## Compilation

To compile the program, use a C compiler such as GCC:

```shell
gcc -o student_management program.c
```

## Usage

The program requires an input file named `input.txt`, which should contain the student data in the following format:

```
John Doe
20
M
Jane Smith
22
F
...
```

Each student's data consists of three lines: the name, age, and gender. The data for each student should be separated by an empty line. The file should end with the line `END` to indicate the end of the student data.

To run the program, execute the compiled binary:

```shell
./student_management
```

The program will read the student data from the input file, display the list of students, and prompt for a name to search for. Enter a name to search for a specific student or enter `END` to exit the program.

The program will then display the search result, indicating whether the student was found or not. After each search, it will prompt for another name to search or enter `END` to exit the program.

Finally, the program will sort the student list by name and display the sorted list of students.

## Limitations

- The program has a maximum limit of 100 students (`MaxStudents`) and a maximum name length of 30 characters (`MaxNameLength`).
- The input file must be named `input.txt` and should follow the specified format.
- The program assumes that the input file exists and can be opened for reading. If the file doesn't exist or cannot be opened, an error message will be displayed, and the program will terminate.

Feel free to modify the program or customize it according to your specific requirements.