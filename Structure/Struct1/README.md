# Student Details

This program allows the user to enter details of a student, including the course name, roll number, subject codes, and subject marks. It calculates the average marks and displays all the entered details.

## Features

- Prompt the user to enter the course name.
- Prompt the user to enter the roll number.
- Prompt the user to enter three subject codes.
- Prompt the user to enter the marks for each subject.
- Calculate the average marks.
- Display all the entered details, including the course name, roll number, subject codes, subject marks, and average marks.

## Usage

1. Compile and run the program using a C compiler:

   ```bash
   gcc main.c -o student_details
   ./student_details
   ```

2. Enter the course name when prompted.
3. Enter the roll number when prompted.
4. Enter three subject codes when prompted.
5. Enter the marks for each subject when prompted.
6. The program will display all the entered details, including the course name, roll number, subject codes, subject marks, and average marks.

## Example

Here is an example usage of the program:

```
Enter the course name:
Computer Science
Enter the roll number:
12345
Enter the three subject codes:
CSE101 MTH201 PHY301
Enter the three subject marks:
85.5 92.0 78.5

The details of the student are as follows:
The course name is Computer Science
The roll number is 12345
The three subject codes are CSE101, MTH201, and PHY301
The three subject marks are 85.500000, 92.000000, and 78.500000
The average marks is 85.666664
```

## Limitations

- The program assumes that the user will input valid values for the course name, roll number, subject codes, and subject marks.
- The program calculates the average marks by assuming equal weightage for each subject.
- The program does not perform extensive error handling for invalid inputs.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to modify and use it according to your needs.