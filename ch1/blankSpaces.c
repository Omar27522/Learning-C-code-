/* 1.4.3 Blank Spaces
A computer network has transmitted a body of text (ASCII characters) to our computer.
In the transmission some additional spaces have been sent.
Using the problem-solving methodology, write the steps necessary to look through the text and eliminate any multiple spaces which occur.

Your algorithm should be presented in pseudocode.

		{my aproach}
A body of text has extra spaces.
1.	Read the body of text.
2.	Separate each character individually.
3.	loop if character != " " printf character.
4.	Repeat step 3 for all characters in the body of 			text.

			<AI's aproach>
Problem-Solving MethodologyUnderstand the Problem:
	Input: A string of text with ASCII characters, potentially containing multiple consecutive spaces.
	Output: A string of text where all sequences of multiple spaces are reduced to a single space.
	Plan the Solution:Read the input text.
	Iterate through each character of the text.Maintain a variable to keep track of the previous character.
	Append characters to the result string, but only append a space if the previous character was not a space.
	
	Pseudocode:
	
		procedure RemoveMultipleSpaces(inputText):
    initialize result as an empty string
    initialize previousChar as empty character
    
    for each char in inputText:
        if char is not a space:
            append char to result
        else if previousChar is not a space:
            append char to result
        previousChar = char
    
    return result

# Example usage:
inputText = "This  is  a  test    message."
cleanText = RemoveMultipleSpaces(inputText)
print cleanText  # Output should be "This is a test message."


	Explanation of Pseudocode
	
	Initialization:
		result is initialized as an empty string to build the cleaned text.
		previousChar is initialized as an empty character to track the last processed character.
	
	Iteration through the input text:
		For each character char in inputText:
		If char is not a space, append it to result.If char is a space and previousChar is not a space, append it to result.
		Update previousChar to be char for the next iteration.
		
	Return the result:
		After the loop, result will contain the cleaned text with no multiple spaces.
*/