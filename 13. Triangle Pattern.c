// 1..
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j<=i)
				printf("%d ", j);

			else printf("  ");
		}
		printf("\n");

	}
}


// 2..
// Enter n: 4
// 1 2 3 4
// 1 2 3
// 1 2
// 1
#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = n; i >= 1; i--) {

		for(int j = 1; j <= n; j++) {

			if(j<=i)
				printf("%d ", j);

			else printf("  ");
		}
		printf("\n");

	}
}

// 3..
// Enter n: 4
//       1
//     2 1
//   3 2 1
// 4 3 2 1

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {

		for(int j = n; j >= 1; j--) {

			if(j<=i)
				printf("%d ", j);

			else printf("  ");
		}
		printf("\n");

	}
}

// 4..
// Enter n: 4
// 4 3 2 1
//   3 2 1
//     2 1
//       1
      
#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j<=i)
				printf("%d ", j);

			else printf("  ");
		}
		printf("\n");

	}
}


// 5..
// Enter n: 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j<=i)
				printf("%d ", i);

			else printf("  ");
		}
		printf("\n");

	}
}


// 6..
// Enter n: 4
// 1 1 1 1
// 2 2 2
// 3 3
// 4

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j>=i) 
			printf("%d ", i);


// 			else printf("  ");
		}
		printf("\n");

	}
}


// 7..
// Enter n: 4
//       1
//     2 2
//   3 3 3
// 4 4 4 4

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {

		for(int j = n; j >= 1; j--) {

			if(j<=i)
				printf("%d ", i);

			else printf("  ");
		}
		printf("\n");

	}
}


// 8..
// Enter n: 4
// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j>=i)
				printf("%d ", i);

			else printf("  ");
		}
		printf("\n");

	}
}


// 9..
// Enter n: 4
// 4
// 3 3
// 2 2 2
// 1 1 1 1

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j>=i)
				printf("%d ", i);

			else printf("  ");
		}
		printf("\n");

	}
}


// 10..
// Enter n: 4
// 4 4 4 4
//   3 3 3
//     2 2
//       1

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j<=i)
				printf("%d ", i);

			else printf("  ");
		}
		printf("\n");

	}
}


// 11.
// Enter n: 4
//       4
//     3 3
//   2 2 2
// 1 1 1 1

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	for(int i = n; i >= 1; i--) {

		for(int j = 1; j <= n; j++) {

			if(j>=i)
				printf("%d ", i);

			else printf("  ");
		}
		printf("\n");

	}
}


// 12..
// Enter n: 4
// 4 4 4 4
//   3 3 3
//     2 2
//       1
#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j<=i)
				printf("%d ", i);

			else printf("  ");
		}
		printf("\n");

	}
}

// 13..
// Enter n: 4
// 1       
// 2 3     
// 4 5 6   
// 7 8 9 10 

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 1;

	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j>=i){
				printf("%d ", temp);
			temp++;
            }
			else printf("  ");
		}
		printf("\n");

	}
}


// 14..
// Enter n: 4
// 1       
// 2 3     
// 4 5 6   
// 7 8 9 10 

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 1;

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j<=i){
				printf("%d ", temp);
			temp++;
            }
			else printf("  ");
		}
		printf("\n");

	}
}



// 15..
// Enter n: 4
//       1 
//     2 3 
//   4 5 6 
// 7 8 9 10

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 1;

	for(int i = n; i >= 1; i--) {

		for(int j = 1; j <= n; j++) {

			if(j>=i){
				printf("%d ", temp);
			temp++;
            }
			else printf("  ");
		}
		printf("\n");

	}
}

// 16..
// Enter n: 4
// 1 2 3 4 
//   5 6 7 
//     8 9 
//       10 

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 1;

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j>=i){
				printf("%d ", temp);
			temp++;
            }
			else printf("  ");
		}
		printf("\n");

	}
}


// 17..
// Enter n: 4
// 10       
// 9 8     
// 7 6 5   
// 4 3 2 1 

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = (n*(n+1))/2;

	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j>=i){
				printf("%d ", temp);
			temp--;
            }
			else printf("  ");
		}
		printf("\n");

	}
}



// 18..
// Enter n: 4
// 10 9 8 7 
//   6 5 4 
//     3 2 
//       1 
      
#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = (n*(n+1))/2;

	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j<=i){
				printf("%d ", temp);
			temp--;
}
			else printf("  ");
		}
		printf("\n");

	}
}


// 19..
// Enter n: 4
//       10 
//     9 8 
//   7 6 5 
// 4 3 2 1 

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = (n*(n+1))/2;

	for(int i = n; i >= 1; i--) {

		for(int j = 1; j <=n; j++) {

			if(j>=i){
				printf("%d ", temp);
			temp--;
            }
			else printf("  ");
		}
		printf("\n");

	}
}


// 20..
// Enter n: 4
// 10 9 8 7 
//   6 5 4 
//     3 2 
//       1 

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = (n*(n+1))/2;

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j>=i){
				printf("%d ", temp);
			temp--;
}
			else printf("  ");
		}
		printf("\n");

	}
}

// 21.. 
// Enter n: 4
// 1       
// 3 5     
// 7 9 11   
// 13 15 17 19 

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 1;

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j<=i){
				printf("%d ", temp);
			temp += 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}


// 22..
// Enter n: 4
// 1 3 5 7 
// 9 11 13   
// 15 17     
// 19       

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 1;

	for(int i = 1; i <= n; i++) {

		for(int j = n; j >= 1; j--) {

			if(j>=i){
				printf("%d ", temp);
			temp += 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}

// 23..
// Enter n: 4
//          1 
//       3 5 
//      7 9 11 
// 13 15 17 19 

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 1;

	for(int i = 1; i <= n; i++) {

		for(int j = n; j >= 1; j--) {

			if(j<=i){
				printf("%d ", temp);
			temp += 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}


// 24..
// Enter n: 4
// 1 3 5 7 
//   9 11 13 
//     15 17 
//       19 
      
#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 1;

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j>=i){
				printf("%d ", temp);
			temp += 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}


// 25..
// Enter n: 4
// 19       
// 17 15     
// 13 11 9   
// 7 5 3 1

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	int temp =  n*n + n - 1;

	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j >= i){
				printf("%d ", temp);
			temp -= 2;
}
			else printf("  ");
		}
		printf("\n");

	}
	return 0;
}

// 26..
// Enter n: 4
// 19 17 15 13 
// 11 9 7   
// 5 3     
// 1  

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	int temp =  n*n + n - 1;

	for(int i = 1; i <= n; i++) {

		for(int j = n; j >= 1; j--) {

			if(j >= i){
				printf("%d ", temp);
			temp -= 2;
}
			else printf("  ");
		}
		printf("\n");

	}
	return 0;
}



// 27..
// Enter n: 4
//             19 
//         17 15 
//      13 11 9 
//   7  5  3  1 

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	int temp =  n*n + n - 1;

	for(int i = n; i >= 1; i--) {

		for(int j = 1; j <= n; j++) {

			if(j >= i){
				printf("%d ", temp);
			temp -= 2;
}
			else printf("  ");
		}
		printf("\n");

	}
	return 0;
}


// 28.. 
// Enter n: 4
// 19 17 15 13 
//   11 9 7 
//     5 3 
//       1 
      
#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	int temp =  n*n + n - 1;

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j >= i){
				printf("%d ", temp);
			temp -= 2;
}
			else printf("  ");
		}
		printf("\n");

	}
	return 0;
}



// 29..
// Enter n: 4
// 2       
// 4 6     
// 8 10 12   
// 14 16 18 20 

#include<stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 2;

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j<=i){
				printf("%d ", temp);
			temp += 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}

// 30..
// Enter n: 4
// 2 4 6 8 
// 10 12 14   
// 16 18     
// 20

#include<stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 2;

	for(int i = n; i >= 1; i--) {

		for(int j = 1; j <= n; j++) {

			if(j<=i){
				printf("%d ", temp);
			temp += 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}


// 31..
// Enter n: 4
//       2 
//     4 6 
//   8 10 12 
// 14 16 18 20 

#include<stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 2;

	for(int i = 1; i <= n; i++) {

		for(int j = n; j >= 1; j--) {

			if(j<=i){
				printf("%d ", temp);
			temp += 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}

// 32..
// Enter n: 4
// 2 4 6 8 
//   10 12 14 
//     16 18 
//       20 

#include<stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int temp = 2;

	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j<=i){
				printf("%d ", temp);
			temp += 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}


// 33..
// Enter n: 4
// 20       
// 18 16     
// 14 12 10   
// 8 6 4 2 

#include<stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int rev = n*(n+1)/2;
	
    int temp = rev*2;
    
	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j<=i){
				printf("%d ", temp);
			temp -= 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}


// 34..
// Enter n: 4
// 20 18 16 14 
// 12 10 8   
// 6 4     
// 2       

#include<stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int rev = n*(n+1)/2;
	
    int temp = rev*2;
    
	for(int i = n; i >= 1; i--) {

		for(int j = 1; j <= n; j++) {

			if(j<=i){
				printf("%d ", temp);
			temp -= 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}


// 35..
// Enter n: 4
//       20 
//     18 16 
//   14 12 10 
// 8 6 4 2 

#include<stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int rev = n*(n+1)/2;
	
    int temp = rev*2;
    
	for(int i = 1; i <= n; i++) {

		for(int j = n; j >= 1; j--) {

			if(j<=i){
				printf("%d ", temp);
			temp -= 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}


// 36..
// Enter n: 4
// 20 18 16 14 
//   12 10 8 
//     6 4 
//       2 

#include<stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);


	int rev = n*(n+1)/2;
	
    int temp = rev*2;
    
	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j<=i){
				printf("%d ", temp);
			temp -= 2;
}
			else printf("  ");
		}
		printf("\n");

	}
}





