//Calling some important libraries
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

//The function(reverse) with data type(void) and paramter(s).
void reverse(char s[])
	{
	//The strrev() function is used to reverse the given string.	
   		strrev(s); 
    }

    
//The function(caesar) with data type(void) and parameter(cipher and shift).
void caesar (char cipher[], int shift) 
{

//For caesar encryption , we apply for loop
	for(int i=0; cipher[i] != '\0'; i++)
	{
	
//Declaration and initialization variale(ch) of data type(char) which is equal to (cipher[i]) array.
    	char ch = cipher[i];
    	
//Applying nested if condition:
		if(ch >= 'a' && ch <= 'z')
		{
			ch = ch + shift;
			if(ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			cipher[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch + shift;
			if(ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			cipher[i] = ch;
		}
	}
	
//Printing the encrypted text on the console screen.
		  printf("The Encrypted text: %s\n", cipher);
}


//The function(decryption) with data type(void) and parameter(message and key).		  
void decryption(char message[],int key)
{
	
//Declaration and initialization of some variales and arrays of differnt data types.
	char  ch;
	int i;
	
//For decryption encryption , we apply for loop
	for(i = 0; message[i] != '\0'; ++i)
	{
	ch = message[i];
	
//Applying nested if condition:
	if(ch >= 'a' && ch <= 'z')
	{
		ch = ch - key;
		if(ch < 'a')
		{
			ch = ch + 'z' - 'a' + 1;
		}
		message[i] = ch;
	}
	else if(ch >= 'A' && ch <= 'Z')
	{
		ch = ch - key;
		if(ch < 'A')
		{
			ch = ch + 'Z' - 'A' + 1;
		}
		message[i] = ch;
	}
	}
	
//Printing the encrypted text on the console screen.
     printf("The Decrypted text: %s\n", message);
} 



	


	
		
//In the main function, we called the functions and adjust the program.
int main ()
{

//Applying an infinite loop for the program until the user decides to close it.
	while(1)
	{

//Declaration and initialization of some variales and arrays of differnt data types.
		char cipher[50],message[100];
		int shift,key, rails;
		char str[1000],s[1000],str2[1000],code[1000][1000];
	    int n,i,j,k,count;
	    
//3 messages will appear on the console screen to let the user choose between them.
		printf("\nFor Encryption Technique Enter 1:\n");
		printf("For Decryption Technique Enter 2:\n");
		printf("for (Exit) Enter 3: \n");

//Take the value(number) from the user 
		scanf("%d", &n);
		
//Applying if condition in case the user enter(1):

		if(n==1)
		{
			int x;

//3 messages will appear on the console screen to let the user choose between the 3 algorithms:
			printf("For Caesar Encryption Algorithm press 4: \n");
			printf("For Reverse Encryption Algorithm (REA) press 5: \n");
			printf("For Rail_Fence Encryption Algorithm  press 6: \n");
			
//Take the value(number) from the user.
			scanf("%d", &x);
			
//Applying if condition in case the user enter(4):
			if(x==4)
			{
			
			//A message appeared on the screen to let the user know what to write.
				printf("Please Enter the text: \n");
				
			//Take the value(String) from the user.
		        scanf("%s", &cipher);
		    
		    //Message is printed on the console to write the number of shifts.
		        printf("Shift: \n");
		        
		    //Take the value(number) from the user.
		        scanf("%d", &shift);
		        
		    //Calling the function (caesar) with parameters(cipher and shift).
		        caesar (cipher, shift);
		    }
		    
//Applying if condition in case the user enter(5):	    
		    if(x==5)
			{
				
			//A message appeared on the screen to let the user know what to write.
		    	printf("Please Enter the text: \n");
		    	
		    //Take the value(String) from the user.
				scanf("%s", &s);
				
			//Calling the function (reverse) with parameter(s).
				reverse(s);
				
			//Message is printed on the console to write the reversed string.	
			    printf("REA of the text: %s\n", s);
	        }
	
//Applying if condition in case the user enter(6):				
		    if(x==6)
	    	{
	    		
			//Declaration and initialization of some variales and arrays of differnt data types.
		    	char str[1000];
				int rails,len;
			
			//A message appeared on the screen to let the user know what to write.
				printf("Please Enter the text: \n");
				
			//Take the value(String) from the user.	
				scanf("%s", &str);
				
			//This function returns the length of string and store it in the variable (len).
	    		len=strlen(str);
	    		
	    	//Message is printed on the console to write the number of rails.
				printf("Enter number of rails\n");
				
			//Take the value(number) from the user.
				scanf("%d", &rails);
			//Applying for loop for the 2D array:
				 for(i=0;i<rails;i++)
				 {
				  for(j=0;j<len;j++)
				  {
				   code[i][j]=0;
				  }
				 }
	 
			 //initialize the variables (count and j) to (0).	 
				count=0;
				j=0;
	
			//Applying while loop:
				while(j<len)
				 {
					if(count%2==0)
					{
					 	for(i=0;i<rails;i++)
						 {
						 		
						//strcpy(code[i][j],str[j]);
							code[i][j]=(int)str[j]; 
							j++;
					     }
				 
				   }
				else
				{
		
			//Applying another for loop:
				 for(i=rails-2;i>0;i--)
				 {
				 	
				 	//strcpy(code[i][j],str[j]);
					  code[i][j]=(int)str[j];
					  j++;
				 }  
				} 
			
				count++;
				}

			//Applying another for loop:	
				for(i=0;i<rails;i++)
				{
				 	for(j=0;j<len;j++)
				 	{
					  if(code[i][j]!=0){
					  	 printf("%c",code[i][j]);
					  } 
					 }
				 
				}
				printf("\n");
					   }				
						}

			
//Applying if condition in case the user enter(2):			
		if(n==2)
		{
			int y;
			
//3 messages will appear on the console screen to let the user choose between the 3 algorithms:
			printf("For Caesar Decryption Technique press 4: \n");
			printf("For Reverse Decryption Algorithm (REA) press 5 : \n");
			printf("For Rail_Fence Decryption Algorithm press 6 : \n");
			
//Take the value(number) from the user.
			scanf("%d", &y);
			
//Applying if condition in case the user enter(4):
			if(y==4)
			{
				
			//A message appeared on the screen to let the user know what to write.
				printf("Enter a message to decrypt: \n");
				
			//Take the value(String) from the user.
				scanf("%s", &message);
				
			//Message is printed on the console to write the number of keys.
				printf("\nEnter key: \n");
				
			//Take the value(number) from the user.
				scanf("%d", &key);
				
			//Calling the function (decryption) with parameters(message and key).
				decryption(message,key);
			}
			
			
//Applying if condition in case the user enter(5):	
			if(y==5)
			{
				
				///Declaration and initialization of array of data type(char).
		    	   char s[100];
				
				//A message appeared on the screen to let the user know what to write.
				   printf("Enter a message to decrypt: \n");
				   
				//Take the value(String) from the user.
				   scanf("%s", &s);
				   
				//Calling the function (reverse) with parameter(s).
				   reverse(s);
				   
				////Message is printed on the console after (REA) is applied.
				   printf("Reverse of the message (REA): %s\n", s);
	       }
	
			
//Applying if condition in case the user enter(6):
			if(y==6)
			{
				
			//Declaration and initialization of some variales and arrays of differnt data types.
		    	char str2[1000];
				int rails,len;
				
			//A message appeared on the screen to let the user know what to write.
				printf("Enter a message to decrypt: \n");
				
			//Take the value(String) from the user.	
	    		scanf("%s", &str2);
	    		
	    	//This function returns the length of string and store it in the variable (len).
	    		len=strlen(str2);
	    		
	    	//Message is printed on the console to write the number of rails.
				printf("Enter number of rails\n");
				
			//Take the value(number) from the user.
				scanf("%d", &rails);
			//Applying for loop for the 2D array:	
				 for(i=0;i<rails;i++)
				 {
					  for(j=0;j<len;j++)
					  {
					   code[i][j]=0;
					  }
				 }
	 
			 //initialize the variables (count and j) to (0).
				count=0;
				j=0;
				
			//Applying while loop:
				while(j<len)
				{
					if(count%2==0)
					{
						 for(i=0;i<rails;i++)
						 {
						 	
					//strcpy(code[i][j],str[j]);
							  code[i][j]=-1; 
							  j++;
						 }
					 
					}
					else
					{			
			//Applying another for loop:	
						 for(i=rails-2;i>0;i--)
						 {
							  code[i][j]=-1;
							  j++;
						 }  
					} 		
					count++;
				}
	
//Decrypting here.Above is same as encryption but instead of keeping letters we stored it with -1 i.e. dashes(in view)
				k=0;
				for(i=0;i<rails;i++)
				{
					 for(j=0;j<len;j++)
					 {
						  if(code[i][j]!=0)
						  {
						     code[i][j]=(int)str2[k];
						     k++;
					      }
					 } 
				}
	
	
			//repeating above procedure:
			//initialize the variables (count and j) to (0).
				count=0;
				j=0;
				
			//Applying while loop:
				while(j<len)
				{
					if(count%2==0)
					{
						 for(i=0;i<rails;i++)
						 {
						 	
						//strcpy(code[i][j],str[j]);
							  printf("%c",code[i][j]); 
							  j++;
						 }
					 
					}
					else
					{
						 for(i=rails-2;i>0;i--)
						 {
						 	
						//strcpy(code[i][j],str[j]);
							  printf("%c",code[i][j]);
							  j++;	
						 }  
					} 
					
					count++;
				}
				printf("\n");
							 
				        }			
					}
		
		
//Applying if condition in case the user enter(3):	
		if(n==3)
		{
			
		//Terminate the loop
			break;
		}

}
	return 0;
}



		  

			  








		  

