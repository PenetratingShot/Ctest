#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

#define KEY "Enter the operations you want to do:"

// Function Declarations
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void sqrt();
void calculator_operations();


// Start of program

int main() {
  int X=1;
  char Calc_oprn;
  
  //Func callback
  calculator_operations();
  
  while(X) {
   printf("\n");
   printf("%s : ", KEY);
    
   Calc_oprn=getche();
    
   switch(Calc_oprn) {
     // Case Addition
     case '+': addition();
       break;
       
     // Case Subtraction  
     case '-': subtraction();
       break;
       
     // Case Multiplication
     case '*': multiplication();
       break;
       
     //Case Division
     case '/': division();
       break();
       
     // Case Modulous
     case '?': modulus();
       break();
       
     // Case Power
     case '^': power();
       break;
       
     // Case Factorial
     case '!': factorial();
       break;
       
     //Case Square Root
     case '@': sqrt();
       break();
       
     // Func Display Key
     case 'H':
     case 'h': calculator_operations();
       break();
       
     // Func Exit  
     case 'Q':
     case 'q': exit(0);
       break;
       
     //Func Clear Screen
     case 'C':
     case 'c': system("cls");
       calculator_operations();
       break;
       
     default : system("cls");
        
    printf("\n**********You have entered unavailable option");
    printf("***********\n");
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      calculator_operations();
   }
  }
}

// Defining Functions
void calculator_operations() {
 // Cls use to clear
 printf("\n             This is a calculator... \n\n");
 
 printf("******* Press 'Q' or 'q' to quit  ");
 printf("the program *******\n");
 printf("***** Press 'H' or 'h' to display  ");
 printf("below options *****\n\n");
 printf("Enter 'C' or 'c' to clear the screen and");
 printf(" display availible options \n\n");
  
 printf("Operations: \n"); 
 printf("Enter '+' for Addition \n");
 printf("Enter '-' for Subtraction \n");
 printf("Enter '*' for Multiplication \n");
 printf("Enter '/' for Division \n");
 printf("Enter '?' for Modulus \n");
 printf("Enter '^' for Power \n");
 printf("Enter '!' for Factorial \n");
 printf("Enter '@' for Square Root \n");
}

// Function for Addition
void addition() {
 int n, total=0, k=0, number;
 printf("\nEnter the amount of elements you want to add: ");
 scanf("%d",&n);
 printf("Please enter %d numbers one by one: \n",n);
 while(k<n) {
   scanf("%d",&number);
   total=total+number;
   k=k+1;
 }
 printf("The sum of %d numbers is %d \n",n,total);
}
void subtraction() {
  
} 
