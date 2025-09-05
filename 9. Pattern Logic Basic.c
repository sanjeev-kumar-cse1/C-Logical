   // How to write
   
#include <stdio.h>

int main(){
    
    int n = 100;
    
    int i = 2;
    while(i <= n){
        
        
        
        i++;
    }
    
    return 0;
}


 //2.what change

#include <stdio.h>

int main(){
    
    int n = 100;
    
    int i = 2;
    while(i <= n){
        
        int j = 2;
        int count = 0;
        
        while(j*j <= i){
            
            j++;
        }
        
        i++;
    }
    
    return 0;
}


// 3. What effected

#include <stdio.h>

int main(){
    
    int n = 100;
    
    int i = 2;
    while(i <= n){
        
        int j = 2;
        int count = 0;
        
        while(j*j <= i){
            
            if(i%j == 0){
                couunt++;
                break;
            }
            
            j++;
        }
        
        
        i++;
    }
    
    return 0;
}


//4. Print Prime number at 100. "Final code"

#include <stdio.h>

int main(){
    
    int n = 100;
    
    int i = 2;
    while(i <= n){
        
        int j = 2;
        int count = 0;
        
        while(j*j <= i){
            
            if(i%j == 0){
                count++;
                break;
            }
            
            j++;
        }
        
        if(count == 0) printf("%d ", i);
        
        i++;
    }
    
    return 0;
}


                              // 6.using FOR_LOOP, change while loop of i 

#include <stdio.h>

int main(){
    
    int n = 100;
    
    // int i = 2;
    // while(i <= n){
        for(int i = 2; i <= n; i++){
        int j = 2;
        int count = 0;
        
        while(j*j <= i){
            
            if(i%j == 0){
                count++;
                break;
            }
            
            j++;
        }
        
        if(count == 0) printf("%d ", i);
        
        // i++;
    }
    
    return 0;
}


  // 7. change while loop of j
 
#include <stdio.h>

int main(){
    
    int n = 100;
    
    // int i = 2;
    // while(i <= n){
        for(int i = 2; i <= n; i++){
        // int j = 2;
        int count = 0;
        
        // while(j*j <= i){
          for(int j = 2; j*j <= i; j++){
               
            if(i%j == 0){
                count++;
                break;
            }
            
            // j++;
        }
        
        if(count == 0) printf("%d ", i);
        
        // i++;
    }
    
    return 0;
}


// 8. Using FOR_LOOP print at 100 Prime , "Final code"

#include <stdio.h>

int main(){
    
    int n = 100;
    
        for(int i = 2; i <= n; i++){
        int count = 0;
        
          for(int j = 2; j*j <= i; j++){
               
            if(i%j == 0){
                count++;
                break;
            }
        }
        if(count == 0) printf("%d ", i);
    }
}


// 9. print even 5 starting value "2 4 6 8 10" where "int n = 5 and int i=2 for even"

#include <stdio.h>

int main(){
    
    int n = 5;
    
    int i = 2;
    
    while(n != 0){
        
        printf("%d ", i);
        i = i+2;
        
        n--;
    }
}


// 10. Print odd 5 starting value "1, 3, 5, 7, 9" where "int n = 5 and int i = 1 for odd"

#include <stdio.h>

int main(){
    
    int n = 5;
    
    int i = 1;
    
    while(n != 0){
        
        printf("%d ", i);
        i = i+2;
        
        n--;
    }
}
 
 
  // using FOR_LOOP, print 2,3,4,5,6 because "int i=2"
 
#include <stdio.h>

int main(){
    
    
    int n = 5;
    for( int i = 2; n != 0; n--){
        
        printf("%d ", i);
        i = i+1;  
        
    }
}

  // print 5 starting even number start "int i = 2"
#include <stdio.h>

int main(){
    
    
    int n = 5;
    for( int i = 2; n != 0; n--){
        
        printf("%d ", i);
        i = i+2; 
        
    }
}


// Print 5 odd number from starting "int i = 1" 

#include <stdio.h>

int main(){
    
    
    int n = 5;
    for( int i = 1; n != 0; n--){
        
        printf("%d ", i);
        i = i+2; 
        
    }
}


// Print 1to5 "int i = 1" and "i=i+1"

#include <stdio.h>

int main(){
    
    
    int n = 5;
    for( int i = 1; n != 0; n--){
        
        printf("%d ", i);
        i = i+1; 
        
    }
}