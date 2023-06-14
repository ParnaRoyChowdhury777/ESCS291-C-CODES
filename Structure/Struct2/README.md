# Date Display showing the implementation of typedef

This program allows the user to input a date and displays it in the format "day month, year". It utilizes a `struct` named `date` to store the day, month, and year components of the date.

## Features

- Prompt the user to enter the day, month, and year.
- Store the inputted date components in a `date` structure.
- Display the date in the format "day month, year".

## Usage

1. Compile and run the program using a C compiler:

   ```bash
   gcc main.c -o date_display
   ./date_display
   ```

2. Enter the day when prompted.
3. Enter the month (as a string) when prompted.
4. Enter the year when prompted.
5. The program will display the date in the format "day month, year".

## Example

Here is an example usage of the program:

```
Enter the day:
10
Enter the month:
June
Enter the year:
2023
10 June, 2023
```

## Limitations

- The program assumes that the user will input valid integer values for the day and year, and a valid string for the month.
- The program does not perform extensive error handling for invalid inputs.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to modify and use it according to your needs.