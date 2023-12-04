# cwiczenia5
Traslation of the task to English -> 
Task 5.1. Duplicate
Write a function that takes a vector container storing integers as an argument. It is assumed that the vector contains unique values except for one, which has been duplicated. The function's task is to find the duplicated value and calculate the sum of unique elements. The function should return an object of the pair class.
In this task, you should use the set container. The main function should test the function.
Task 5.2. Exclusive OR
Write a template function that takes two sets as arguments. The function should display the elements that are only in the first or only in the second set.
Hint: Pay attention to the types used when calling algorithms and iterators.
Task 5.3. Difference
Write a function that takes two strings as arguments. The second string is one character longer than the first one. The second string contains the same characters as the first string but in a different order and additionally one more character. The function's task is to find the character that was added to the second string and return it. In this task, you should use the map container. Test the function in the main function.
Task 5.4. Dictionary
Create a class called Dictionary, which will represent a dictionary and will have the following fields and methods:
- words: a map container that will store a word and its translation. It is assumed that one word has one translation.
- A parameterless constructor.
- A method allowing the addition of a word along with its translation to the dictionary. Before adding, check if the word already exists.
- A method allowing the removal of a word along with its translation from the dictionary.
- A method displaying the content of the dictionary.
- A method displaying the translation for a given word.
- A method displaying the content of the dictionary alphabetically from z to a regarding the translation.
Hint: To sort elements in the map container, create an auxiliary container such as a vector. Add elements to it and perform sorting using the sort function.
In the main function, create an object of the Dictionary class and test the functionality of the methods.
