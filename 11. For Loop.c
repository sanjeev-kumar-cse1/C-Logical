// 1. Print 1 to 10.

#include <stdio.h>

int main(){
    
    // int i =1;
    // while(i<=10){
    //     printf("%d ", i);
    //     i++;
    // }
     
    for(int i = 1; i <= 10; i++){
        printf("%d ", i);
    }
    
    return 0;
}


// 2. int i = 1; is committed then error "i is not initialise"

#include <stdio.h>

int main(){
    
    // int i =1;
    while(i<=10){
        printf("%d ", i);
        i++;
    }
     
    // for(int i = 1; i <= 10; i++){
    //     printf("%d ", i);
    // }
    
    return 0;
}


// 3. condition is not in while loop so "error"

#include <stdio.h>

int main(){
    
    int i =1;
    while(){
        printf("%d ", i);
        i++;
    }
     
    // for(int i = 1; i <= 10; i++){
    //     printf("%d ", i);
    // }
    
    return 0;
}


// 4. loop-break and initialise also removed , while is not contain "condition", print also only Hello 

#include <stdio.h>

int main(){
    
    //int i =1;
    while(){
        printf("Hello ");
        // i++;
    }
     
    // for(int i = 1; i <= 10; i++){
    //     printf("%d ", i);
    // }
    
    return 0;
}


// 5. Check 4 question is working in 5 for FOR_LOOP error .

#include <stdio.h>

int main(){
    
    // //int i =1;                                  
    // while(){                                   In 6 question, Koi ek bhi miss kie to code error While:- initialise,
    //     printf("Hello ");                                condition,
    //     // i++;                                          loop-break (i++,i--, etc.)
    // }
     
    for(){                                       // For-loop:- initialise 
        printf("Hello");                           //          condition,
    }                                                //        loop-break (i++,i--, etc)
    
    return 0;
}


// 6. For FOR_LOOP

#include <stdio.h>

int main(){
    
    // //int i =1;
    // while(){
    //     printf("Hello ");
    //     // i++;
    // }
     
    for( ; ; ){
        printf("Hello");
    }
    
    return 0;
}


// 7.FOR_LOOP initialise out side also


#include <stdio.h>

int main(){
    
    // //int i =1;
    // while(){
    //     printf("Hello ");
    //     // i++;
    // }
     
    int i =1;
    for( ; i<=10; ){
        printf("Hello ");
        i++;
    }
    
    return 0;
}


// 8. More variable also initialise in this.

#include <stdio.h>

int main(){
    
    // //int i =1;
    // while(){
    //     printf("Hello ");
    //     // i++;
    // }
     
    
    for(int i = 1 , j = 20 ; i<=10; j++, i++ ){
        printf("%d  %d\n", i , j);
        
    }
    
    return 0;
}