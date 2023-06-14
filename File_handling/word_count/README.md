# Word Frequency Counter

This program counts the frequency of words in a text file and prints the results to an output file. It uses binary search to efficiently search for words in a sorted word list.

## Main Function

The program declares an array `wordList` to store the words and an array `frequency` to store the corresponding frequencies. It also declares variables to keep track of the number of words (`numWords`) and file pointers `in` and `out` to read from the input file and write to the output file, respectively.

The program first opens the input file named `file.txt` for reading and checks if the file was successfully opened. If the file cannot be found, it prints an error message and exits.

Next, it opens the output file named `output.txt` for writing and checks if the file was successfully created. If the file cannot be created, it prints an error message and exits.

The frequency array `frequency` is initialized with all elements set to 0.

## Word Processing Loop

The program enters a loop that reads words from the input file using the `getWord` function. For each word, it performs a binary search on the `wordList` to find its location or the location where it should be inserted.

If the word is found (`strcmp(word, wordList[loc]) == 0`), the corresponding frequency in the `frequency` array is incremented.

If the word is not found, the program checks if there is space in the `wordList` to add a new word. If there is space, the `addToList` function is called to insert the word into the `wordList` and shift the subsequent words to the right. The frequency for the new word is set to 1, and the `numWords` counter is incremented.

If the `wordList` is full and the word cannot be added, an appropriate message is written to the output file.

## Printing Results

After processing all the words in the input file, the program calls the `printResults` function to print the word frequencies to the output file. It formats the output as a two-column table with the words and their corresponding frequencies.

## Utility Functions

The program includes several utility functions:

- `getWord`: Reads the next word from the input file, converts it to lowercase, and returns 1 if a word is found or 0 otherwise.
- `binarySearch`: Performs a binary search on the `wordList` to find the location of a word or the location where it should be inserted.
- `addToList`: Adds a word to the `wordList` at the specified position, shifting subsequent words to the right, and sets the corresponding frequency.
- `printResults`: Prints the word frequencies to the output file in a formatted manner.

## Conclusion

This program demonstrates how to count the frequency of words in a text file using a sorted word list and binary search. By efficiently searching for words and maintaining a separate array for frequencies, it provides an effective way to analyze the occurrence of words in a given text.

