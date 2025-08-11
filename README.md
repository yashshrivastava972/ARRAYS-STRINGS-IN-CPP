# Aim: To Study and Implement C++ Arrays and Strings. #

# Tool: VS CODE.

# Theory: #
Array:
An array stores a fixed-size sequential collection of elements of the same type. All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.

•	DECLARING ARRAY
To declare an array in C++, we must specify the type of elements and the number of elements required by an array −
type arrayName [ array_size ];
The array_size must be an integer constant greater than zero and type can be any valid C++ data type.

•	INITIALISING ARRAY
You can initialize C++ array elements either one by one or using a single statement as follows −
int arr[5] = {1000, 2, 3, 17, 50};
The number of values between braces { } cannot be larger than the number of elements that we declare for the array between square brackets [ ].

•	ACCESSING ARRAY ELEMENTS
An element is accessed by indexing the array name. This is done by placing the index of the element within square brackets after the name of the array. For example −
int num = arr[9];
The above statement will take the 10th element from the array named arr and assign the value to num variable.

Key Points:
•	In C++, an array is a variable that can store multiple values of the same type. 

•	With a limited number of objects, we can use regular variables (v1, v2, v3,..), but when we need to hold many instances, managing them with normal variables becomes challenging. To represent numerous instances in one variable, we use an array.

•	The array's indexes begin at 0. Meaning that the first item saved at index 0 is x[0].

•	The final element of an array with size n is kept at index (n-1). This example's final element is x[5].

•	An array's elements have sequential addresses. Consider the scenario where x[0beginning ]'s address is 2120.

•	The address of the subsequent element, x[1], will then be 2124, followed by x[2], 2128, and so forth.

•	Each element in this case has a four-fold increase in size. This is due to the fact that int has a 4 byte capacity.

Strings:
A string is a sequence of characters used as an object of the class. The string class stores the characters as a sequence of bytes with the functionality of allowing access to the single-byte character. A string is different from an array of characters. Some key differences are:


STRINGS:
A string is a class that defines objects that be represented as a stream of characters.
String class defines a number of functionalities that allow manifold operations on strings.

ARRAY OF CHARACTERS:
A character array is simply an array of characters that can be terminated by a null character.
Character arrays do not offer many inbuilt functions to manipulate strings.

# Algorithms:

## For Arrays :
i. Algorithm: Sum and Average of N Numbers

1. Start
2. Read n → number of elements.
3. Initialize sum = 0.
4. Declare an array arr of size n.
5 Display: "Enter elements".
6. Repeat for i = 0 to n-1
   6.1 Read arr[i]
   6.2 Add arr[i] to sum
7. Calculate avg = sum / n (use float division).
8. Display sum.
9. Display avg.
10. End.

ii. Algorithm: Find Maximum and Minimum in an Array

1. Start
2. Read n → number of elements.
3. Declare array arr of size n.
4. Display: "Enter n elements".
5. Repeat for i = 0 to n-1
  5.1 Read arr[i]
6. Initialize:
   max = arr[0]
   min = arr[0]
7. Repeat for i = 1 to n-1
  7.1 If arr[i] > max, then max = arr[i]
  7.2 If arr[i] < min, then min = arr[i]
8. Display: max as "Maximum element"
9. Display: min as "Minimum element"
10. End.

## For Strings :
i. Algorithm: Reverse a String

1. Start
2. Declare a string variable str and an integer length.
3. Display: "Enter a String".
4. Read str (note: input stops at space).
5. Find length of string: length = str.length().
6. Repeat for i = length - 1 down to 0
   6.1 Display str[i] (character at position i).
7. End.

ii. Algorithm: Check if a String is a Palindrome

1. Start
2. Declare variables:
   str (string)
   length (integer)
   matchCount (integer, initially 0)
3. Display: "Enter a String".
4. Read str (only reads until space).
5. Find length of string: length = str.length().
6. Repeat for i = 0 to length - 1
   6.1 Compare str[i] with str[length - 1 - i].
   6.2 If equal → increment matchCount.
7. Check:
   If matchCount == length → Display "It is a Palindrome".
   Else → Display "It is not a Palindrome".
8. End.

# Conclusion:
By studying and implementing C++ arrays and strings, we learned how to store and manipulate multiple data elements efficiently. Arrays allow handling fixed-size collections of elements of the same type, while strings enable working with sequences of characters. Through practical programs, we applied concepts such as initialization, traversal, searching, and modification, gaining a better understanding of data storage, indexing, and built-in functions. This strengthens our problem-solving skills and forms a foundation for more complex data structures and algorithms in C++.
