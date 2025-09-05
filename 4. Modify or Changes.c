//1. This is for "True" and "True" is print

#include <stdio.h>

int main(){
    
    int a = 20;
    
    if(1){
        printf("This is ture for 1\n");
        
    }
  printf("End");

    return 0;
}


// 2. This is for "False" and "False" is not print.

#include <stdio.h>

int main(){
    
    int a = 20;
    
    if(0){
        printf("This is ture for 1\n");
        
    }
  printf("End");

    return 0;
}


// 3. 20 - Logic between

#include <stdio.h>

int main(){
    
    int a = 20;
    
    if(1){
        printf("%d\n", a);
        
    }
  printf("End");

    return 0;
}


// 4. If "int a = 20" is not present then error.

#include <stdio.h>

int main(){
    
           
    
    if(1){
        printf("%d\n", a);
        
    }
  printf("End");

    return 0;
}


// 5. 23

#include <stdio.h>

int main(){
    
    int a = 20;
    
    if(1){
        a = 23;  // This line gives result to modify
        printf("%d\n", a);
        
    }
  printf("End");

    return 0;
}


// 6.  This line gives error

#include <stdio.h>

int main(){
    
    if(1){
        a = 23;  
        printf("%d\n", a);
        
    }
  printf("End");

    return 0;
}


// 7. Print 23 20

#include <stdio.h>

int main(){
    
    int a = 20;
    
    if(1){
      int a = 23;  // This line gives result to modify and also previous result
        printf("%d\n", a);
    }
  printf("%d\n", a);
  printf("End");

    return 0;
}


// 8. Print 23 23

#include <stdio.h>

int main(){
    
    int a = 20;
    
    if(1){
        a = 23;  // This line gives result to modify
        printf("%d\n", a);
    }
  printf("%d\n", a);
  printf("End");

    return 0;
}



