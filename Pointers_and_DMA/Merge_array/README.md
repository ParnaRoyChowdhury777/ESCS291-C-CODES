# Array Merging

This program merges two arrays into a single array. It prompts the user to enter the size and elements of two arrays and then combines them into a new merged array.

## Features

- Read the size of the first array from the user.
- Read the elements of the first array from the user.
- Read the size of the second array from the user.
- Read the elements of the second array from the user.
- Create a new array that combines the elements from both arrays.
- Display the merged array.

## Usage

1. Compile and run the program using a C compiler:

   ```bash
   gcc main.c -o array_merge
   ./array_merge
   ```

2. Enter the size of the first array when prompted.
3. Enter the elements of the first array one by one.
4. Enter the size of the second array when prompted.
5. Enter the elements of the second array one by one.
6. After inputting all the elements, the program will merge the arrays and display the merged array.

## Example

Here is an example usage of the program:

```
Enter size of first array: 3
Enter elements of first array: 1 2 3

Enter size of second array: 2
Enter elements of second array: 4 5

Merged array is: 1 2 3 4 5
```

## Limitations

- The program assumes that the user will input valid integer values for the array elements.
- The merged array is created dynamically using memory allocation.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to modify and use it according to your needs.