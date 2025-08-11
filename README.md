### Aim: To study and implement C++ Arrays and Strings ###
Theory:
Array:
An array stores a fixed-size sequential collection of elements of the same type. All arrays consist of contiguous memory locations. The lowest address corresponds to the first element and the highest address to the last element.

For example, an array containing 5 integer values of type int called foo could be represented as:
 
where each blank panel represents an element of the array. In this case, these are values of type int. These elements are numbered from 0 to 4, being 0 the first and 4 the last; In C++, the first element in an array is always numbered with a zero (not a one), no matter its length.

•	DECLARING ARRAY
To declare an array in C++, we must specify the type of elements and the number of elements required by an array −
type arrayName [ array_size ];
The array_size must be an integer constant greater than zero and type can be any valid C++ data type.
•	INITIALISING ARRAY
You can initialize C++ array elements either one by one or using a single statement as follows −
