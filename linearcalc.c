#include <stdio.h>
int main()
{ // variable declaration 
  float a,b,c,a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3,dX,dY,dZ,D,X,Y,Z;
 char m;
   c=0;
   // while loop is for consistency of calculator until user choose to exit
  while (c==0)
  
  { printf("\033[7;31m====Linear equation solving calculator====\033[0m\n");
  printf("enter the number of unknowns [2 or 3]\n ");
  scanf("%f",&a);
  // linear equations in two variable system soultion
  // a1x+b1y=c1
  // a2x+b2y=c2
  if (a==2)
  { { printf("enter a1=");
  scanf("%f",&a1);
  printf("enter b1=");
  scanf("%f",&b1);
  printf("enter c1=");
  scanf("%f",&c1);
  printf("enter a2=");
  scanf("%f",&a2);
  printf("enter b2=");
  scanf("%f",&b2);
  printf("enter c2=");
  scanf("%f",&c2);
  // formula for calculating the value of x and y
  X=(b2*c1-b1*c2)/(b2*a1-b1*a2);
  Y=(c2*a1-c1*a2)/(b2*a1-b1*a2);}
  // if a1b2 is not = b1a2 then unique Solution exist 
  if (a1*b2!=b1*a2)
  {printf("Answer is =%f\t%f\n\n",X,Y);}
   // if a1b2=b1a2 then no solution exist
  if (a1*b2==b1*a2)
  {printf("Solution does not exist\n");}}
  // linear equations in 3 variables system solution
  if (a==3)
  { printf("enter a1=");
  scanf("%f",&a1);
  printf("enter b1=");
  scanf("%f",&b1);
  printf("enter c1=");
  scanf("%f",&c1);
  printf("enter d1=");
  scanf("%f",&d1);
  printf("enter a2=");
  scanf("%f",&a2);
  printf("enter b2=");
  scanf("%f",&b2);
  printf("enter c2=");
  scanf("%f",&c2);
  printf("enter d2=");
  scanf("%f",&d2);
  printf("enter a3=");
  scanf("%f",&a3);
  printf("enter b3=");
  scanf("%f",&b3);
  printf("enter c3=");
  scanf("%f",&c3);
  printf("enter d3=");
  scanf("%f",&d3);
  // formula for solving calue of x y and z using cramers rule 
   D=a1*(b2*c3-b3*c2)-a2*(b1*c3-b3*c1)+a3*(b1*c2-b2*c1);
  dX=d1*(b2*c3-b3*c2)-d2*(b1*c3-b3*c1)+d3*(b1*c2-b2*c1);
  dY=a1*(d2*c3-d3*c2)-a2*(d1*c3-d3*c1)+a3*(d1*c2-d2*c1);
  dZ=a1*(b2*d3-b3*d2)-a2*(b1*d3-b3*d1)+a3*(b1*d2-b2*d1);
  X=dX/D;
  Y=dY/D;
  Z=dZ/D;
  // condition for no solution 
  if (D==0 && (dX!=0 || dY!=0 || dZ!=0))
 { printf("no solution exist\n");}
  // condition for infinite solution
  else if (D==0 && dX==0 && dY==0 && dZ==0)
  { printf("Infinitely many solutions exist\n");}
  // condition for unique solution 
  else
 { printf("Answer is %f\t%f\t%f \n",X,Y,Z);}
 }
 // asking user if he/she wants to continue or exit the calculator 
 printf("\033[2;42mDo you want to continue?\033[0m\n");
 printf("\033[4mY/N\033[0m\n");
 scanf(" %c",&m);
 // condition to continue or exit 
 if (m=='Y' || m=='y' )
 {c=0;}
 else 
 { c+=1;
 printf("Thankyou for using the calculator");}
  }
  
  return 0;
  }
  