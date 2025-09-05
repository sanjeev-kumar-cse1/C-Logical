// 1.
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <stdio.h>

int main(){

  int n = 4;


  for(int i = 1; i <= n; i++){
     for(int j = 1; j <= n; j++){
        printf("%d ", j);
  }
  printf("\n");
}
}


// 2.
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4

#include <stdio.h>

int main(){

  int n = 4;


  for(int j = 1; j <= n; j++){
     for(int i = 1; i <= n; i++){

      printf("%d ", j);
  }
  printf("\n");
}
}


// 3.
// 4 4 4 4 
// 3 3 3 3 
// 2 2 2 2 
// 1 1 1 1 

#include <stdio.h>

int main() {

	int n = 4;


	for(int j = n; j >= 1; j--) {
		for(int i = 1; i <= n; i++) {

			printf("%d ", j);
		}
			printf("\n");
	}
}


// 4. 
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 
// 4 3 2 1 

#include <stdio.h>

int main() {

	int n = 4;


	for(int j = 1; j <= n; j++) {
		for(int i = n; i >= 1; i--) {

			printf("%d ", i);
		}
			printf("\n");
	}
}


// 5
// 1 3 5 7 
// 1 3 5 7 
// 1 3 5 7 
// 1 3 5 7

#include <stdio.h>

int main(){

  int n = 4;


    for(int j = 1; j <= n; j++){
     for(int i = 1; i <= n; i++){
        printf("%d ", 2*i-1);
  }
  printf("\n");
}
}


// 6.
// 7 5 3 1 
// 7 5 3 1 
// 7 5 3 1 
// 7 5 3 1 

#include <stdio.h>

int main(){

  int n = 4;


    for(int j = 1; j <= n; j++){
     for(int i = n; i >= 1; i--){
        printf("%d ", 2*i-1);
  }
  printf("\n");
}
}


// 7.
// 2 4 6 8 
// 2 4 6 8 
// 2 4 6 8 
// 2 4 6 8 

#include <stdio.h>

int main(){

  int n = 4;


    for(int j = 1; j <= n; j++){
     for(int i = 1; i <= n; i++){
        printf("%d ", i*2);
  }
  printf("\n");
}
}


// 8.
// 8 6 4 2 
// 8 6 4 2 
// 8 6 4 2 
// 8 6 4 2

#include <stdio.h>

int main(){

  int n = 4;


    for(int j = 1; j <= n; j++){
     for(int i = n; i >= 1; i--){
        printf("%d ", i*2);
  }
  printf("\n");
}
}


// 9.
// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16

#include <stdio.h>

int main(){

  int n = 4;
  int num = 1;

    for(int j = 1; j <= n; j++){
     for(int i = 1; i <= n; i++){
        printf("%d ", num);
        num++;
  }
  printf("\n");
}
}


// 10
// 16 15 14 13 
// 12 11 10 9 
// 8 7 6 5 
// 4 3 2 1

#include <stdio.h>

int main(){

  int n = 4;
  int num = n*n;

    for(int j = 1; j <= n; j++){
     for(int i = 1; i <= n; i++){
        printf("%d ", num);
        num--;
  }
  printf("\n");
}
}


// 11. 
// 1 3 5 7 
// 9 11 13 15 
// 17 19 21 23 
// 25 27 29 31

#include <stdio.h>

int main(){

  int n = 4;
  int num = 1;

    for(int j = 1; j <= n; j++){
     for(int i = 1; i <= n; i++){
        printf("%d ", num);
        num = num+2;
  }
  printf("\n");
}
}


// 12.
// 31 29 27 25 
// 23 21 19 17 
// 15 13 11 9 
// 7 5 3 1 

#include <stdio.h>

int main() {
    int n = 4;
    
    int total = n * n;        
    int num = total * 2 - 1;   

    for (int i = 1; i <= n; i++) {       
        for (int j = 1; j <= n; j++) {   
            printf("%d ", num);
            num = num - 2;  
        }
            printf("\n");
    }
}


// 13. 
// 2 4 6 8 
// 10 12 14 16 
// 18 20 22 24 
// 26 28 30 32 

#include <stdio.h>

int main(){

  int n = 4;
  int num = 2;

    for(int j = 1; j <= n; j++){
     for(int i = 1; i <= n; i++){
        printf("%d ", num);
        num = num+2;
  }
  printf("\n");
}
}


// Question. 14=15
// 32 30 28 26 
// 24 22 20 18 
// 16 14 12 10 
// 8 6 4 2

#include <stdio.h>

int main() {
    int n = 4;
    
    int total = n * n;        
    int num = total * 2 ;   

    for (int i = 1; i <= n; i++) {       
        for (int j = 1; j <= n; j++) {   
            printf("%d ", num);
            num = num - 2;  
        }
            printf("\n");
    }
}


// 16
// A B C D 
// A B C D 
// A B C D 
// A B C D

#include <stdio.h>

int main() {
    int n = 4;   

    for (int i = 1; i <= n; i++) {         
        for (int j = 0; j < n; j++) {      
            printf("%c ", 'A' + j);        
        }
        printf("\n");
    }
}


// 17.
// A A A A 
// B B B B 
// C C C C 
// D D D D 

#include <stdio.h>

int main() {
    int n = 4;   

    for (int i = 0; i < n; i++) {          
        for (int j = 0; j < n; j++) {      
            printf("%c ", 'A' + i);        
        }
        printf("\n");
    }
}

 
// 18.
// A B C D
// E F G H 
// I J K L
// M N O P

#include <stdio.h>

int main() {
    int n = 4;        
    char ch = 'A';   

    for (int i = 0; i < n; i++) {        
        for (int j = 0; j < n; j++) {    
            printf("%c ", ch);
            ch++;   
        }
        printf("\n");
    }

    return 0;
}


// 19.
// P O N M
// L K J I
// H G F E
// D C B A

#include <stdio.h>

int main() {
    int n = 4;              
    char ch = 'A' + (n * n - 1);          

    for (int i = 0; i < n; i++) {          
        for (int j = 0; j < n; j++) {      
            printf("%c ", ch);
            ch--;  
        }
        printf("\n");
    }
}



















