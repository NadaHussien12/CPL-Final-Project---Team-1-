//Calling some important libraries
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Declaration and initialization of some variales and arrays of differnt data types.
int i,j,len,count,code[100][1000],v1,vd;
char vec[1000]={0};
char vecd[1000]={0};

//The function(decryption) with data type(void) and parameter(cipher).
void decryption(char cipher[] )
{
	
//Declaration and initialization of some variales and arrays of differnt data types.
	char  ch;
	int i;
	
//For decryption encryption , we apply for loop:
	for(i = 0; cipher[i] != '\0'; ++i)
	{
		ch = cipher[i];

//Applying nested if condition:
		if(ch >= 'a' && ch <= 'z')
		{
		ch = ch - 3;
		if(ch < 'a')
		{
			ch = ch + 'z' - 'a' + 1;
		}
		cipher[i] = ch;
		}
	else if(ch >= 'A' && ch <= 'Z')
	{
		ch = ch - 3;
		if(ch < 'A')
		{
			ch = ch + 'Z' - 'A' + 1;
		}
	cipher[i] = ch;
	}
	}
} 
     

//The function(reverse) with data type(void) and paramter(s).     
void reverse(char cipher[])
{   
    
//The strrev() function is used to reverse the given string.
	strrev(cipher);
}    



//The function(Rail_fence) with data type(void) and paramter(cipher) for (Encryption Process).              
void Rail_fence(char cipher[1000])
{    

//This function returns the length of string and store it in the variable (len). 
	    len=strlen(cipher);
	    
//Applying for loop for the 2D array:	    
	 for(i=0;i<3;i++)
	 {
		  for(j=0;j<len;j++)
		  {
		   	code[i][j]=0;
		  }
	 }
	 
//initialize the variables (count and j) to (0)
	count=0;
	j=0;
	
//Applying while loop:	
	while(j<len)
	{
		if(count%2==0)
		{
			 for(i=0;i<3;i++)
			 {
			 	//strcpy(code[i][j],cipher[j]);
				  code[i][j]=(int)cipher[j]; 
				  j++;
			 }
		 
		}
		else
		{
		
		//Applying another for loop:
			 for(i=3-2;i>0;i--)
			 {
			 	//strcpy(code[i][j],cipher[j]);
				  code[i][j]=(int)cipher[j];
				  j++;
			 }  
		} 
		
		count++;
	}
	
//Applying another for loop:	
	for(i=0;i<3;i++)
	{
		 for(j=0;j<len;j++)
		 {
			  if(code[i][j]!=0)
			{
			    vec[v1]=code[i][j];
			    v1++;
			}
		 }
	 
	}
	printf("\n");
}                                         


//The function(Rail_fence2) with data type(void) and paramter(cipher) for (Decryption Process).  
void Rail_fence2(char cipher[1000])
{   

//Declaration and initialization of some variales and arrays of differnt data types.
      int i,j,k,len,count,code[100][1000];
	
//This function returns the length of string and store it in the variable (len). 
	 len=strlen(cipher);
	    
//Applying for loop for the 2D array:
	 for(i=0;i<3;i++)
	 {
		  for(j=0;j<len;j++)
		  {
		  	 code[i][j]=0;
		  }
	 }
	 
//initialize the variables (count and j) to (0)
	count=0;
	j=0;
	
//Applying while loop:	
	while(j<len)
	{
		if(count%2==0)
		{
			//Applying another for loop:
			 for(i=0;i<3;i++)
			 {
			 	
			 	//strcpy(code[i][j],cipher[j]);
				  code[i][j]=-1; 
				  j++;
			 }
		 
		}
		else
		{
		 //Applying another for loop:
			 for(i=3-2;i>0;i--)
			 {
			 	
			 //strcpy(code[i][j],cipher[j]);
				  code[i][j]=-1;
				  j++;
			 }  
		} 
		
		count++;
	}
	
//Decrypting here.Above is same as encryption but instead of keeping letters we stored it with -1 i.e. dashes(in view)
	k=0;
	
//Applying another for loop:
	for(i=0;i<3;i++)
	{
		 for(j=0;j<len;j++)
		 {
			  if(code[i][j]!=0)
			  {
			     code[i][j]=(int)cipher[k];
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
			 for(i=0;i<3;i++)
			 {
				   vecd[vd]=code[i][j];
				   vd++; 
				   j++;
			 }	 
		}
		else
		{
			 for(i=1;i>0;i--)
			 {
				  vecd[vd]=code[i][j];
				  vd++;
				  j++;
			 }  
		} 	
		count++;
	}
	printf("\n");
}                        




//The function(caesar) with data type(void) and parameter(cipher).
void caesar (char cipher[]) 
{
	
//For caesar encryption , we apply for loop:
	for(int i=0; cipher[i] != '\0'; i++)
	{
	
//Declaration and initialization variale(ch) of data type(char) which is equal to (cipher[i]) array.
    	char ch = cipher[i];
    	
//Applying nested if condition:
		if(ch >= 'a' && ch <= 'z')
		{
			ch = ch + 3;
			if(ch > 'z')
			{
				ch = ch - 'z' + 'a' - 1;
			}
			cipher[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 3;
			if(ch > 'Z')
			{
				ch = ch - 'Z' + 'A' - 1;
			}
			cipher[i] = ch;
		}
	}
}

	
		
//In the main function, we called the functions and adjust the program.
int main ()
{
	

		
//Declaration and initialization of some variales and arrays of differnt data types.
	    char cipher[1000],x,y,z;
    	int n;
    	
//3 messages will appear on the console screen to let the user choose between them.
		printf("To encrypt a word please enter (1) : \n");
		printf("To decrypt a word please enter (2) : \n");
		printf("For closing the proram please enter (3) : \n");
		
//Take the value(number) from the user 
		scanf("%d", &n);
		
//Applying if condition in case the user enter(1):		
	if(n==1)
	{  
	 
	//A message appeared on the screen to let the user know what to write.
		printf("Enter the word that you want to encrypt : \n");
		
	//Take the value(String) from the user.
		scanf("%s", &cipher);
		
	//A message appeared on the screen to let the user know the rules of writing password.
		printf("Enter the password (A-a,B-b,C-c) sequentially and not repeated \n");
		
	//A message appeared on the screen to guide the user.
		printf("Enter the first character in the password : \n");
		
	//Take the value(String) from the user.
		scanf("%s",&x);
		
	//Case A--------------Encryption
        if(x=='A'||x=='a')
		{                              
        	printf("Enter the second character in the password : \n");
        	
    //Take the value(String) from the user
        	scanf("%s",&x);
        	
        	if(x=='B'||x=='b')
			{
        		printf("Enter the third character in the password : \n");
        		
    //Take the value(String) from the user
        		scanf("%s",&y);
        		
    //Calling the function (caesar) with its parameter(cipher):
        		caesar (cipher);      //A
        		
    //Calling the function (reverse) with its parameter(cipher):
        		reverse (cipher);    //B 
				
	//Calling the function (Rail_fence) with its parameter(cipher):  
        		Rail_fence(cipher);	//C
        		
    //The text appears on the console screen after encryption process.
        		printf("%s\n",vec);
        	}
        	if(x=='C'||x=='c')
			{
        		printf("Enter the third character in the password : \n");
        		
    //Take the value(String) from the user
        		scanf("%s",&y);
        		
    //Calling the function (caesar) with its parameter(cipher):   		
        		caesar (cipher);     //A
        		
    //Calling the function (Rail_fence) with its parameter(cipher):
				Rail_fence(cipher);	//C 
				
	//Calling the function (reverse) with its parameter(cipher):   
        		reverse (vec);	   //B
        		
    //The text appears on the console screen after encryption process.
        		printf("%s\n",vec);
			}		
         }
         
    //Case B-------------Encryption  
		if(x=='B'||x=='b')
		{                
			printf("Enter the second character in the password : \n");
        	scanf("%s",&x);
        	if(x=='A'||x=='a')
			{
        		printf("Enter the third character in the password : \n");
        		scanf("%s",&y);
        		reverse (cipher);     //B
        		caesar (cipher);     //A    
        		Rail_fence(cipher); //C
        		printf("%s\n",vec);
			}
			if(x=='C'||x=='c')
			{
				printf("Enter the third character in the password : \n");
        		scanf("%s",&y);
        		reverse (cipher);    //B
        		Rail_fence(cipher); //C    
        		caesar (vec);      //A
				printf("%s\n",vec);   	
			}
		}
		
		
	//Case C-------------Encryption	
	   if(x=='C'||x=='c')
	   {                    
	   	  	printf("Enter the second character in the password : \n");
        	scanf("%s",&x);
			if(x=='A'||x=='a')
			{
				printf("Enter the third key : \n");
        		scanf("%s",&y);
        		Rail_fence(cipher); //C
        		caesar (vec);      //A   
        		reverse (vec);    //B
        		printf("%s\n",vec);
			}
			if(x=='B'||x=='b')
			{
				printf("Enter the third character in the password : \n");
        		scanf("%s",&y);
        		Rail_fence(cipher);  //C
        		reverse (vec);      //B        
        		caesar (vec);      //A	
        		printf("%s\n",vec);
			} 
	   }
		
	}
	
//Applying if condition in case the user enter(2):
	if(n==2)
	{
		
	//A message appeared on the screen to let the user know what to write.
		printf("Enter the word that you want to decrypt : \n");
		
	//Take the value(String) from the user
		scanf("%s", &cipher);
		
	//A message appeared on the screen to let the user know the rules of writing password.
		printf("Enter the password (A-a,B-b,C-c) sequentially and not repeated \n");
		
	//A message appeared on the screen to guide the user.
		printf("Enter the first character in the password : \n");
		
	//Take the value(String) from the user
		scanf("%s",&x);
		
		
   //Case A--------------Decryption		
		if(x=='A'||x=='a')
		{                             
        	printf("Enter the second character in the password : \n");
        	
        //Take the value(String) from the user
        	scanf("%s",&x);
        	
        	if(x=='B'||x=='b')
			{
        		printf("Enter the third character in the password : \n");
        		
        //Take the value(String) from the user
        		scanf("%s",&y);
        		
        //Calling the function (Rail_fence2) with its parameter(cipher):  	
                Rail_fence2(cipher);    //C
                
        //Calling the function (reverse) with its parameter(vecd):  
                reverse(vecd);         //B    
                
        //Calling the function (decryption) with its parameter(vecd):  
                decryption(vecd);     //A
                
        //The text appears on the console screen after decryption process.
                printf("%s\n",vecd);		
        	}
        	if(x=='C'||x=='c')
			{
        		printf("Enter the third character in the password : \n");
        		scanf("%s",&y);
        		reverse(cipher);        //B
				Rail_fence2(cipher);   //C   
                decryption(vecd);     //A
        		printf("%s\n",vecd);
			}		
         }
         
    //Case B-------------Decryption
       if(x=='B'||x=='b')
	   {                    
           printf("Enter the second character in the password : \n");
           scanf("%s",&x);
		   if(x=='A'||x=='a')
		   {
		   	   printf("Enter the third character in the password : \n");
        	   scanf("%s",&y);
        	   Rail_fence2(cipher);    //C
        	   decryption(vecd);      //A   
			   reverse(vecd);        //B
        	   printf("%s\n",vecd);
		   }
		   if(x=='C'||x=='c')
		   {
		   	   printf("Enter the third character in the password : \n");
        	   scanf("%s",&y);
        	   decryption(cipher);     //A 
        	   Rail_fence2(cipher);   //C  
			   reverse(vecd);        //B
        	   printf("%s\n",vecd);
		   }	
		}
		
	//Case C-------------Decryption
		if(x=='C'||x=='c')
		{                        
		    printf("Enter the second character in the password : \n");
            scanf("%s",&x);
		   	if(x=='A'||x=='a')
			   {
		   		printf("Enter the third character in the password : \n");
        	    scanf("%s",&y);
        	    reverse(cipher);         //B
        	    decryption(cipher);     //A  
        	    Rail_fence2(cipher);   //C  
			    printf("%s\n",vecd);
		    }
		    if(x=='B'||x=='b')
			{
		    	printf("Enter the third character in the password : \n");
        	    scanf("%s",&y);
        	    decryption(cipher);      //A
        	    reverse(cipher);        //B  
        	    Rail_fence2(cipher);   //C  
			    printf("%s\n",vecd);
			}
		}
	}
	
	return 0;
}

		  
		  

			  
		  

