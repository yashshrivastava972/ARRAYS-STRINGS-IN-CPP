# Aim: To study and implement C++ Arrays and Strings #

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






