// 1. Print reverse 5 to 1 because "int n = 5 if 6 then print 6 to 1"
#include <stdio.h>

int main(){
    
    int n = 5;
    
    for(; n != 0; n--){
            printf("%d ", n);

    }

    return 0;
}


// 2. Print reverse even numbers

#include <stdio.h>

int main(){
    
    int n = 5; // if here is 5 then 10,8,6,4,2,"But 6 then 12,10,8,6,4,2"
    
    for(int i = n*2; n != 0; n--, i = i-2){
            printf("%d ", i);
    }
}


// 3. Prnit reverse according to "int n = " here is 3 then print 3,2,10

#include <stdio.h>

int main(){
    
  int n = 3;
   
  while(n>0){
      printf("%d ", n);
      n--;
  }
   
//   for(;n > 0; n--){
      printf("%d ", n);
       
       
//   }


}


// 4. If print 2,4,6, means gaping using while

#include <stdio.h>

int main(){
    
  int n = 3;
   
  int i = 2; //this is start from 2
  while(n>0){
      printf("%d ", i); //here also print i
      i = i+2; // every time +2 
       
      n--;
  }
   
//   for(;n > 0; n--){
    //   printf("%d ", n);
       
       
//   }


}


// // 5. If print 2,4,6, means gaping using FOR_LOOP

#include <stdio.h>

int main(){
    
  int n = 3;
   
//   int i = 2; //this is start from 2
//   while(n>0){
//       printf("%d ", i); //here also print i
//       i = i+2; // every time +2 
       
//       n--;
//   }
   
  for(int i = 2; n > 0; n--, i = i+2){//here "int i = 2"
      printf("%d ", i);
  }
}


// 6. If print 1,3,5....19 means gaping using FOR_LOOP

#include <stdio.h>

int main(){
    
  int n = 10;
   
//   int i = 2; //this is start from 2
//   while(n>0){
//       printf("%d ", i); //here also print i
//       i = i+2; // every time +2 
       
//       n--;
//   }
   
  for(int i = 1; n > 0; n--, i = i+2){//here "int i = 1"
      printf("%d ", i);
  }
}


// 7. print 10,8,6,4,2 if "int n =5" then print only 5numbers

#include <stdio.h>

int main(){
    
  int n = 5;
   
  for(int i = 2*n; n > 0; n--, i = i-2){//here "int i = 2*n" because double gaping
                            //   i=i-2 because two two less as like 10,8,6..
      printf("%d ", i);
  }
}



// 8. Print 9,7,5,3,1 

#include <stdio.h>

int main(){
    
  int n = 5;
   
  for(int i = 2*n-1; n > 0; n--, i = i-2){//here "int i = 2*n-1" because double gaping
                            //   i=i-2 because two two less as like 10,8,6..
      printf("%d ", i);
  }
}


// 9. This is Print 1 to 5

#include <stdio.h>

int main(){
    
  int n = 5;
   
  for(int j = 1; j <= n; j++){
      printf("%d ", j);
  }
  printf("\n");
}


// // 10. Priint like square matrix of that n number
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 here n=5 so this.

#include <stdio.h>

int main(){
    
  int n = 5;
   

for(int i = 1; i <= n; i++){
    
  for(int j = 1; j <= n; j++){
      printf("%d ", j);
  }
  printf("\n");
}
}
 









