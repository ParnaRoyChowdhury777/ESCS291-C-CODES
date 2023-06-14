# <b>Linear Search

 Linear Search is defined as a sequential search algorithm that starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set.
 
 ```Time Complexity: O(N)```

        ->  Every element is considered as a potential match
            for the key and checked for the same.

        ->  If any element is found equal to the key, the
            search is successful and the index of that element is
            returned.

        ->  If no element is found equal to the key, the
            search yields "No match found".

- - -
<br/>

# <b>Binary Search

Binary Search is defined as a searching algorithm used in a sorted array by repeatedly dividing the search interval in half. The idea of binary search is to use the information that the array is sorted.

 ```Time Complexity: O(log(N))```

- Compare the middle element of the search space with the key.
- If the key is found at middle element, the process is terminated.
- If the key is not found at middle element, choose which half will be used as the next search space.

        ->  If the key is smaller than the middle element, then
            the left side is used for next search.

        ->  If the key is larger than the middle element, then
            the right side is used for next search.

- This process is continued until the key is found or the total search space is exhausted.

- - -
