  // 1. Taking time 1to4 are applied for 0-n numbers

#include <stdio.h>

int main(){
    
  int n;   //786432567 for this number taking some time to execute.
  printf("Enter n ");
  scanf("%d", &n);
   
  int count = 0;
   
  int i = 2;
  while(i < n){
       
      if(n%i == 0){
          count++;
      }
       
      i++;
  }
   
  if(count == 0) printf("Prime");
  else printf("Not Prime");
   
    return 0;
}


// 2. Fast give "break" 

#include <stdio.h>

int main(){
    
  int n;   
  printf("Enter n ");
  scanf("%d", &n);
   
  int count = 0;
   
  int i = 2;
  while(i < n){
       
      if(n%i == 0){
          count++;
          break; // Due to this "break" 786432567 number fast to execute.
      }
       
      i++;
  }
   
  if(count == 0) printf("Prime");
  else printf("Not Prime");
   
    return 0;
}


// 3. Count how many numbers will divide

#include <stdio.h>

int main(){
    
  int n;   
  printf("Enter n ");
  scanf("%d", &n);
   
  int count = 0;
   
  int i = 2;
  while(i < n){
       
      if(n%i == 0){
          printf("%d " , i); // this line count how many number divided.
          count++;
          break; // Due to this "break" 786432567 number fast to execute.
      }
       
      i++;
  }
  
 
   
  if(count == 0) printf("\nPrime");
  else printf("\nNot Prime");
   
    return 0;
}

 
  //             or
              
#include <stdio.h>

int main(){
    
  int n;   
  printf("Enter n ");
  scanf("%d", &n);
   
  int count = 0;
   
  int i = 2;
  while(i < n){
       
      if(n%i == 0){
          printf("%d " , i); // this line count how many number divided. This line should be before "break"
          count++;
          // break; // Due to this "break" 786432567 number fast to execute.
      }
       
      i++;
  }
  
 
   
  if(count == 0) printf("\nPrime");
  else printf("\nNot Prime");
   
    return 0;
}


// 4. In this initialise "noman variable" and This is count (n-2). 10000019/999999937
// Example n= 12 then, 12-2=noman (except 1 and user n number, check all numbers)

#include <stdio.h>

int main(){
    
  int n;   
  printf("Enter n ");
  scanf("%d", &n);
   
  int count = 0;
  int noman = 0;//first initialise
  int i = 2;
  while(i < n){
      noman++; //This count how many time
      if(n%i == 0){
          printf("%d " , i); // this line count how many number divided. This line should be before "break"
          count++;
          //break; // Due to this "break" 786432567 number fast to execute.
      }
       
      i++;
  }
   
  if(count == 0) printf("\nPrime\n");
  else printf("\nNot Prime\n");
   
  printf("%d ", noman);
    return 0;
}


 //              or 

#include <stdio.h>

int main(){
    
  int n;   
  printf("Enter n ");
  scanf("%d", &n);
   
  int count = 0;
  int noman = 0;//first initialise
  int i = 2;
  while(i < n){
      noman++; //This count how many time
      if(n%i == 0){
          printf("%d " , i); // this line count how many number divided. This line should be before "break"
          count++;
          break; // Due to this "break" 786432567 number fast to execute.
      }
       
      i++;
  }
   
  if(count == 0) printf("\nPrime\n");
  else printf("\nNot Prime\n");
   
  printf("%d ", noman);
    return 0;
}


// 5. 0-n/2 here noman value is directly half and check this is prime or Not

#include <stdio.h>

int main(){
    
  int n;   
  printf("Enter n ");
  scanf("%d", &n);
   
  int count = 0;
  int noman = 0;//first initialise
  int i = 2;
  while(i <= n/2){
      noman++; //This count how many time
      if(n%i == 0){
          printf("%d " , i); // this line count how many number divided. This line should be before "break"
          count++;
          break; // Due to this "break" 786432567,999999937 number fast to execute.
      }
       
      i++;
  }
   
  if(count == 0) printf("\nPrime\n");
  else printf("\nNot Prime\n");
   
  printf("%d ", noman);
    return 0;
//  786432567 is not prime. print fast 
//  999999937 is prime but taking some time
}


6. 0-root"n"

#include <stdio.h>

int main(){
    
  int n;   
  printf("Enter n ");
  scanf("%d", &n);
   
  int count = 0;
  int noman = 0;//first initialise
  int i = 2;
  while(i * i <= n){
      noman++; //This count how many time
      if(n%i == 0){
          printf("%d " , i); // this line count how many number divided. This line should be before "break"
          count++;
          break; // Due to this "break" 786432567,999999937 number fast to execute.
      }
       
      i++;
  }
   
  if(count == 0) printf("\nPrime\n");
  else printf("\nNot Prime\n");
   
  printf("%d ", noman);
    return 0;
//  786432567 is not prime. print fast 
//  999999937 is prime print fast because " root-n=i*i or i*i<=n "
}

