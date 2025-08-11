###Aim: To study and implement C++ Arrays and Strings###
Apparatus Required:
Visual Studio

Theory:
Arrarys:

An array in C or C++ is a collection of items stored at contiguous memory locations and elements can be accessed randomly using indices of an array. They are used to store similar types of elements as in the data type must be the same for all elements. They can be used to store the collection of primitive data types such as int, float, double, char, etc of any particular type. To add to it, an array in C or C++ can store derived data types such as the structures, pointers, etc. There are two types of arrays:

One Dimensional Array

Multi Dimensional Array

One Dimensional Array: A one dimensional array is a collection of same data.
Screenshot 2025-08-06 083128
Multi-Dimensional Array: A multi-dimensional array is also known as array of arrays. Generally, we use a two-dimensional array. It is also known as the matrix. We use two indices to traverse the rows and columns of the 2D array
Strings:

C++ string class internally uses character array to store character but all memory management, allocation, and null termination are handled by string class itself that is why it is easy to use.

The string data_type in C++ provides various functionality of string manipulation. They are:

strcpy(): It is used to copy characters from one string to another string.
strcat(): It is used to add the two given strings.
strlen(): It is used to find the length of the given string.
strcmp(): It is used to compare the two given string.
Implementation:
The following cases demonstrate the usage of arrays and strings in C++

Basic array decleration and printing
Array element Search
Min and Max Values in Arrays
Reverse Array
Algorithms:
For Arrays :

Algorithm: Linear Search in an Array

Start

Declare an integer array num of size 10 and initialize with {30, 40, 50, 60}.

Declare an integer variable key.

Display a message: "Enter the value to search in the array:".

Read the value of key from the user.

Loop variable j from 0 to 4:

If key == num[j]:

Display "Key found at Location:" followed by j.

Exit the loop.

End

Algorithm: Reverse the Elements of an Array

Start

Declare an integer variable x.

Display the message: "Enter the size of array:".

Read the value of x from the user.

Declare an integer array num of size x.

Display the message: "Enter any x integer values:".

For i from 0 to x-1:

Read num[i].

Display the message: "Reversed Array is:".

For j from x-1 down to 0:

Display num[j] followed by a space.

End

Algorithm: Check if a String is a Palindrome

Start

Declare a string variable str.

Declare integer variables n and x = 0.

Display the message: "Enter a String:".

Read the string str from the user.

Set n = length of str.

For i from 0 to n-1:

If str[i] == str[n-1-i], then increment x by 1.

If x == n:

Display "It is a palindrome".

Else:

Display "It is not a palindrome".

End
Algorithm: Reverse a String

Start

Declare a string variable str.

Declare an integer variable n.

Display the message: "Enter a String:".

Read the string str from the user.

Set n = length of str.

For i from n-1 down to 0:

Display str[i].

End

Conclusion:
The Implentation of Strings and Array was done through various codes in C++
