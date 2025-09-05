      // Two numbers of LCM(Priime Factor) in numbers as like 2,2,3,

#include <stdio.h>

int main(){
    
    int m;
    printf("Enter m ");
    scanf("%d", &m);
    
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    
    int i = 2;
    
    while(m>1 || n>1){
        if(m%i ==0  || n%i == 0){
            if(m%i == 0) m = m/i;
            if(n%i == 0) n = n/i;
            
            printf("%d " , i);
            
        }
        
        else i++;
    }
}


              // Two numbers of LCM(Priime Factor) in numbers as like direct multiply

#include <stdio.h>

int main(){
    
    int m;
    printf("Enter m ");
    scanf("%d", &m);
    
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    
    int lcm =1;
    
    int i = 2;
    
    while(m>1 || n>1){
        if(m%i ==0  || n%i == 0){
            if(m%i == 0) m = m/i;
            if(n%i == 0) n = n/i;
            
            lcm = lcm * i;
            
        }
        
        else i++;
    }
    
    printf("%d ", lcm);
}


                           // HCF and LCM in this.

#include <stdio.h>

int main(){
    
    int m;
    printf("Enter m ");
    scanf("%d", &m);
    
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    
    int lcm =1, hcf =1;
    
    int i = 2;
    
    while(m>1 || n>1){
        if(m%i ==0  || n%i == 0){
            
            if(m%i ==0  && n%i == 0) hcf = hcf * i;
            
            if(m%i == 0) m = m/i;
            if(n%i == 0) n = n/i;
            
            lcm = lcm * i;
            
        }
        else i++;
    }

    printf("hcf = %d and lcm = %d ",hcf, lcm);
}


                     //  Here first LCM declear 

#include <stdio.h>

int main(){
    
    int m;
    printf("Enter m ");
    scanf("%d", &m);
    
    int n;
    printf("Enter n ");
    scanf("%d", &n);
    
    int lcm =1, hcf =1;
    
    int i = 2;
    
    while(m>1 || n>1){
        if(m%i ==0  || n%i == 0){
            
            if(m%i ==0  && n%i == 0) lcm = lcm * i; //Here first LCM
            
            if(m%i == 0) m = m/i;
            if(n%i == 0) n = n/i;
            
            hcf = hcf * i;
            
        }
        else i++;
    }

    printf("hcf = %d and lcm = %d ",hcf, lcm);
}

