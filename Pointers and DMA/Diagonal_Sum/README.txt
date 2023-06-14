# Diagonal Matrix Sum

This program calculates the sum of the diagonal elements in a square matrix. It prompts the user to enter the order of the matrix and then input the matrix elements. It calculates the sum of both the main diagonal and the secondary diagonal elements.

## Features

- Read the order of the matrix from the user.
- Dynamically allocate memory for the matrix based on the order.
- Read the matrix elements from the user.
- Calculate the sum of both the main diagonal and the secondary diagonal elements.
- Display the sum of the diagonal elements.

## Usage

1. Compile and run the program using a C compiler:

   ```bash
   gcc main.c -o diagonal_sum
   ./diagonal_sum
   ```

2. Enter the order of the matrix when prompted.
3. Enter the elements of the matrix one by one.
4. After inputting all the elements, the program will calculate the sum of the diagonal elements and display the result.

## Example

Here is an example usage of the program:

```
Enter the order of the matrix: 3
Enter the elements of the matrix:
Enter element [0][0]: 1
Enter element [0][1]: 2
Enter element [0][2]: 3
Enter element [1][0]: 4
Enter element [1][1]: 5
Enter element [1][2]: 6
Enter element [2][0]: 7
Enter element [2][1]: 8
Enter element [2][2]: 9
The sum of both diagonal elements is 15
```

## Limitations

- The program assumes that the user will input valid integer values for the matrix elements.
- The program is designed to work with square matrices only.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to modify and use it according to your needs.