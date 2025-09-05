// 0. print 1 to 100
#include <stdio.h>

int main() {

	int i = 1;

	while (i <= 100) {

		printf("%d ", i);
		i++;
	}

	return 0;
}


// 1. Print 1-100

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number which is only 1 to 100: ");
    scanf("%d", &num);

    while (num <= 100) {
        printf("%d ", num);
        num++;
    }

    return 0;
}


// 2. Print 100-1 (above 100 then neglect but print 100-1)

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number only from 100 to 1: ");
    scanf("%d", &num);

    while (num >= 1) {
        
        if (num <= 100) printf("%d ", num);
        num--;
    }

    return 0;
}


//           If 100 above then Invalid

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number only from 100 to 1: ");
    scanf("%d", &num);

    while (num >= 1) {
         if (num > 100) {
          printf("Invalid number\n");
          return 0;
          }
        printf("%d ", num);
        num--;
    }

    return 0;
}


// 3. Print 1-n

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number between 1 to n: ");
    scanf("%d", &num);

    int i = 1;
    while (i <= num) {
        printf("%d ", i);
        i++;
    }

    return 0;
}


// 4. Print n-1

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number between n to 1: ");
    scanf("%d", &num);

    while ( num >= 1) {
        printf("%d ", num);
        num--;
    }

    return 0;
}


// 5. Print number between two numbers m and n (m is small and n is large)

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter m number: ");
    scanf("%d", &m);

    printf("Enter n number: ");
    scanf("%d", &n);

    if (m < n) {
        while (m <= n) {
            printf("%d ", m);
            m++;
        }
    } 
    // else {
    //     printf("Invalid input! m number must be less than n number.\n");
    // }

    return 0;
}


// 6. Print number between two numbers n and m (n is large and m is small)

#include <stdio.h>

int main() {
    int n, m;

    printf("Enter n number: ");
    scanf("%d", &n);

    printf("Enter m number: ");
    scanf("%d", &m);

    if (n>m) {
        while (n >= m) {
            printf(" %d ", n);
            n--;
        }
    } 
    // else {
    //     printf("Invalid input! m number must be less than n number.\n");
    // }

    return 0;
}


// or

if not between number(6-5) then
#include <stdio.h>

int main() {
    int n, m;

    printf("Enter first number (larger): ");
    scanf("%d", &n);

    printf("Enter second number (smaller): ");
    scanf("%d", &m);

    if (n > m + 1) {
        n--; 
        while (n > m) {
            printf("%d ", n);
            n--;
        }
    } else {
        printf("No numbers in between.\n");
    }

    return 0;
}


// 7. 1-100 even numbers print/odd

 #include <stdio.h>

int main() {

    int num;
    printf("Enter a number from where you want and show even between this to 100: ");
    scanf("%d", &num);

    while (num <= 100) {
        if (num % 2 == 0) printf("%d ", num); //For even
        // if (num % 2 != 0) printf("%d ", num); // For odd num.
        num++;
    }

    return 0;
}


// 8. 100 - 1 even numbers print

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number between 100 to 1: ");
    scanf("%d", &num);

    if (num > 100) {
        printf("Invalid input \n");
        return 0;
    }

    while (num >= 1) {
        if (num % 2 == 0)
            printf("%d ", num);
        num--;
    }

    return 0;
}


// 9.Two numbers from user and print even and odd between that numbers

#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the number m smaller than n : ");
    scanf("%d", &m);

    printf("Enter the number  n greater than m : ");
    scanf("%d", &n);

          // If this line is present then,this is only for m>n then invalid.
          //If this line is commented then output is not visilbe during m>n.
    if (m >= n - 1) {
        printf("No numbers in between or invalid input.\n");
        return 0;
    }

    printf("\nEven numbers between %d and %d:\n", m, n);
    int i = m + 1;
    while (i < n) {
        if (i % 2 == 0)
            printf("%d ", i);
        i++;
    }

    printf("\n\nOdd numbers between %d and %d:\n", m, n);
    i = m + 1;
    while (i < n) {
        if (i % 2 != 0)
            printf("%d ", i);
        i++;
    }

    return 0;
}


// 10. 1-500 if user input (1-10) as like 7 then 7 14 21....497 using whileloop

#include <stdio.h>

int main() {
    int num, multiple = 1;

    printf("Enter a number from 1 to : ");
    scanf("%d", &num);

    // if (num < 1 || num > 10) {
    //     printf("Invalid input! Number must be between 1 and 10.\n");
    //     return 0;
    // }

    while (num * multiple <= 500) {
        printf("%d ", num * multiple);
        multiple++;
    }

    return 0;
}

