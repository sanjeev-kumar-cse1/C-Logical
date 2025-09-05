                              //  Count numbers in digits
#include <stdio.h>

int main(){
    
    int num;
    printf("Enter num ");
    scanf("%d", &num);
    
    int m = 0;
    while(num>0){
        num = num/10;
        m++;
    }
    
    printf("%d ", m);
    
    return 0;
}


                    // Number reverse in column

#include <stdio.h>

int main(){
    
    int num;
    printf("Enter n ");
    scanf("%d", &num);
    
        int s = 0;
        while (num > 0) {
         s = num % 10;     
        num = num / 10;           
        printf("%d\n", s);    
        }
    
    return 0;
}


                         // 0r

#include <stdio.h>

int main(){
    
    int num;
    printf("Enter n ");
    scanf("%d", &num);
    
        int s;
        while (num > 0) {
         s = num % 10;     
        num = num / 10;           
        printf("%d\n", s);    
        }
    
    return 0;
}



