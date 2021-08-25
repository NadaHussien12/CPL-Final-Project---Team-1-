# CPL-Final-Project---Team-1-
 


	Project details:
	The used programming language
	The purpose of the document
	The description of the program






(The used programming language: CPL)

	C is a general-purpose programming language that is extremely popular, simple, and flexible to use.
	It is a structured programming language that is machine-independent and extensively used to write various applications, Operating Systems like Windows, and many other complex programs like Oracle database, Git, Python interpreter, and more.
	It is said that 'C' is a god's programming language. 
	One can say, C is a base for the programming. 
	If you know 'C', you can easily grasp the knowledge of the other programming languages that uses the concept of 'C' It is essential to have a background in computer memory mechanisms because it is an important aspect when dealing with the C programming language.



 









(The purpose of the document)

	The purpose of this document is to describe the code of the program with the help of code snippets to make it easily read and understood.


 



(The description of the program)

	There are 2 scenarios in this document:
1)	Multi-choice encryption and decryption program
2)	SIC’s Enigma


Multi-choice encryption and decryption program

	This program is based on 3 encryption and decryption techniques that enable the user to choose the algorithm he wants every time until he decides to stop the program by himself.
	This program consists of group of functions which are:
	Caesar Function
	Reverse Function
	Decryption Function
	Main function



Reverse Function

 

	First, we called some important libraries to help us in writing the program which are:
•	Stdio.h (Standard input output hidden library)
•	String.h (String hidden library)
•	Stdlib.h (Standard library (hidden))

	The Reverse function aims to reverse the string entered by the user as one of algorithms used in encryption and decryption techniques.
	It reverses the array (s).


Caesar Function
 
	The Caesar function aims to encrypt the string entered by the user by using Caesar technique.
	Caesar technique is based on shifting the letters (+ or -) and applying if conditions in some cases to make sure that the operation is correct.
	After that, the decrypted text is printed on the console screen.

Decryption Function
 
	The Decryption function aims to decrypt the string entered by the user by using Caesar technique.
	Caesar technique is based on shifting the letters (+ or -) and applying if conditions in some cases to make sure that the operation is correct.
	After that, the decrypted text is printed on the console screen.
Main Function
 
	In this function, we called the other functions and adjust the program.
	First, we apply infinite loop and inside it:
•	We declared and initialized some variables.
•	Print some messages.
•	Take an input from the user.
 
	Ask the user to choose between the 3 Algorithms.
	Take an input from the user.
 
	In case the user chooses (Caesar Encryption Algorithm).
 
	In case the user chooses (Reverse Encryption Algorithm (REA)).
 
 

 
	In case the user chooses (Rail Fence Encryption Algorithm) which based on:
•	The plain text is written downwards and diagonally on successive “rails” of an imaginary fence.
•	Then moving up when the bottom rail is reached. 
•	When the top rail is reached, the message is written downwards again until the whole plaintext is written out. 
•	The message is then read off in rows.



 
	Ask the user to choose between the 3 Algorithms.
	Take an input from the user.
 
	In case the user chooses (Caesar Decryption Algorithm).
 
	In case the user chooses (Reverse Decryption Algorithm (RDA)).
 
 
 

 
	In case the user chooses (Rail Fence Decryption Algorithm) which based on:
•	The decryption process for the Rail Fence Cipher involves reconstructing the diagonal grid used to encrypt the message.
•	We start writing the message but leaving a dash in place of the spaces yet to be occupied.
•	Gradually, you can replace all the dashes with the corresponding letters and read off the plaintext from the table.
•	We start by making a grid with as many rows as the key is, and as many columns as the length of the ciphertext. 
•	We then place the first letter in the top left square, and dashes diagonally downwards where the letters will be. 
•	When we get back to the top row, we place the next letter in the ciphertext. 
•	Continue like this across the row and start the next row when you reach the end.
 
	In case the user chooses the third choice, then it will terminate the program.



SIC’s Enigma program

	This program consists of group of functions which are:
	Caesar Function
	Reverse Function
	Decryption Function
	Rail fence
	Rail fence 2
	Main function
 
	First, we called some important libraries to help us in writing the program which are:
•	Stdio.h (Standard input output hidden library)
•	String.h (String hidden library)
•	Stdlib.h (Standard library (hidden))
	Declaration and initialization of some variables.


Decryption Function
 
	The Decryption function aims to decrypt the string entered by the user by using Caesar technique.
	Caesar technique is based on shifting the letters (+ or -) and applying if conditions in some cases to make sure that the operation is correct.
	After that, the decrypted text is printed on the console screen.

Reverse Function

 
	The Reverse function aims to reverse the string entered by the user as one of algorithms used in encryption and decryption techniques.
	It reverses the array (s).
Rail Fence Function
 
 
	This function aims to (Rail Fence Encryption Algorithm) which based on:
•	The plain text is written downwards and diagonally on successive “rails” of an imaginary fence.
•	Then moving up when the bottom rail is reached. 
•	When the top rail is reached, the message is written downwards again until the whole plaintext is written out. 
•	The message is then read off in rows.



Rail Fence function 2
 
 
 
	This function aims to (Rail Fence Decryption Algorithm) which based on:
•	The decryption process for the Rail Fence Cipher involves reconstructing the diagonal grid used to encrypt the message.
•	We start writing the message but leaving a dash in place of the spaces yet to be occupied.
•	Gradually, you can replace all the dashes with the corresponding letters and read off the plaintext from the table.
•	We start by making a grid with as many rows as the key is, and as many columns as the length of the ciphertext. 
•	We then place the first letter in the top left square, and dashes diagonally downwards where the letters will be. 
•	When we get back to the top row, we place the next letter in the ciphertext. 
•	Continue like this across the row and start the next row when you reach the end.
Main Function
 
	In this function, we called the other functions and adjust the program.
	First, we apply infinite loop and inside it:
•	We declared and initialized some variables.
•	Print some messages.
•	Take an input from the user.
 
	In case the user chooses (Encryption Algorithm). 
 

	In case the user chooses (A) then (B) then (C):
•	First calling the (Caesar) function.
•	Then calling (reverse) function.
•	Then calling (Rail fence) function.
 
	In case the user chooses (A) then (C) then (B):
•	First calling the (Caesar) function.
•	Then calling (Rail fence) function.
•	Then calling (Reverse) function.


 
	In case the user chooses (B) then (A) then (C):
•	First calling the (Reverse) function.
•	Then calling (Caesar) function.
•	Then calling (Rail fence) function.

	In case the user chooses (B) then (C) then (A):
•	First calling the (Reverse) function.
•	Then calling (Rail fence) function.
•	Then calling (Caesar) function.




 
	In case the user chooses (C) then (A) then (B):
•	First calling the (Rail fence) function.
•	Then calling (Caesar) function.
•	Then calling (Reverse) function.

	In case the user chooses (C) then (B) then (A):
•	First calling the (Rail fence) function.
•	Then calling (Reverse) function.
•	Then calling (Caesar) function.




 
	In case the user chooses (Decryption Algorithm). 
 
	In case the user chooses (C) then (B) then (A):
•	First calling the (Rail fence2) function.
•	Then calling (Reverse) function.
•	Then calling (Decryption) function.

	In case the user chooses (B) then (C) then (A):
•	First calling the (Reverse) function.
•	Then calling (Rail fence2) function.
•	Then calling (Decryption) function.
 
	In case the user chooses (C) then (A) then (B):
•	First calling the (Rail fence2) function.
•	Then calling (Decryption) function.
•	Then calling (Reverse) function.

	In case the user chooses (A) then (C) then (B):
•	First calling the (Decryption) function.
•	Then calling (Rail fence2) function.
•	Then calling (Reverse) function.
 
	In case the user chooses (B) then (A) then (C):
•	First calling the (Reverse) function.
•	Then calling (Decryption) function.
•	Then calling (Rail fence2) function.

	In case the user chooses (A) then (B) then (C):
•	First calling the (Decryption) function.
•	Then calling (Reverse) function.
•	Then calling (Rail fence2) function.
 
	In case the user chooses the third choice, then it will terminate the program













Samsung Innovation Campus
CPL
FINAL PROJECT
(MULTI-CHOICE ENCRYPTION AND DECRYPTION PROGRAM && SIC’S ENIGMA)
 
