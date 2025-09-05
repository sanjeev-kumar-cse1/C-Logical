// // 1..
// Enter n: 6
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *
// * * * * * *

#include <stdio.h>

int main(){

    int n ;
    printf("Enter n: ");
    scanf("%d", &n);

     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
}


// // 2..
// Enter n: 6
// * * * * * *
// *         *
// *         *
// *         *
// *         *
// * * * * * *

#include <stdio.h>

int main(){

    int n ;
    printf("Enter n: ");
    scanf("%d", &n);

     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
             if (i == 1 || i == n || j == 1 || j == n) // This condition for hole inside.
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}


// // 3..
// Enter n: 5
//     1
//   2 2
//   3 3 3
//  4 4 4 4
// 5 5 5 5 5

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {

		for (int j = 1; j <= n; j++) {

			if(j<=n-i)
				printf(" ");


			else
				printf("%d ", i);
		}

		printf("\n");
	}
}


// // 4..
// Enter n: 4
// 1
// 1 2
// 1 2 3
// 1 2 3 4

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



// // 5..
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



// // 6..
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



// // 7..

// 1
// 0 1
// 1 0 1
// 0 1 0 1


#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {


        for (int j = i; j >= 1; j--) {

            if (j % 2 == 0)
                printf("0");

            else
                printf("1");
        }

        printf("\n");
    }

}


// // 8..?

//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4



// // 9..

//*****
// *****
//  *****
//   *****
//    *****

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n + i; j++) {

            if (j < i)
                printf(" ");

            else if (j < n + i)
                printf("*");

            else
                printf(" ");
        }

        printf("\n");
    }
}


// // 10..
//      *
//     * *
//    * * *
//   * * * *
//    * * *
//     * *
//      *

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j >= n - (i - 1) && j <= n + (i - 1) && (j + i) % 2 == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j >= n - (i - 1) && j <= n + (i - 1) && (j + i) % 2 == 0)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}



// // 11..?

// *                *
//    *          *
// *     *    *     *
//    *     *    *
// *     *    *     *
//    *          *
// *                *






// //               or

// Enter odd n: 7
// *               *

// *   *       *   *

// *     *   *     *

// *       *       *

// *     *   *     *

// *   *       *   *

// *               *


#include <stdio.h>

int main() {
    int n;
    printf("Enter odd n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

        if (j == 1 || j==n || j==i || j == n - i + 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}




// // 12..

// Enter n: 5
// *
// * *
// * * *
// * * * *
// * * * * *

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {

		for(int j = 1; j <= n; j++) {

			if(j<=i)
				printf("* ");

			else printf("  ");
		}
		printf("\n");

	}
}



// // 13..
// Enter n: 5
// * * * * *
// * * * *
// * * *
// * *
// *

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = n; i >= 1; i--) {

		for(int j = 1; j <= n; j++) {

			if(j<=i)
				printf("* ");

			else printf("  ");
		}
		printf("\n");

	}
}



// // 14..

// Enter n: 5
//         *
//       * *
//     * * *
//   * * * *
// * * * * *

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++) {

		for(int j = n; j >= 1; j--) {

			if(j<=i)
				printf("* ");

			else printf("  ");
		}
		printf("\n");

	}
}


// // 15..
// Enter n: 5
// * * * * *
//   * * * *
//     * * *
//       * *
//         *

#include <stdio.h>

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for(int i = n; i >= 1; i--) {

		for(int j = n; j >= 1; j--) {

			if(j<=i)
				printf("* ");

			else printf("  ");
		}
		printf("\n");

	}
}

// // 16..

// Enter n: 4
// * * * *
// * * *
// * *
// *
// * *
// * * *
// * * * *


#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // Upper part (decreasing)
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower part (increasing)
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}



// // 17..
// Enter rows: 5
//         *
//       *    *
//     *    *    *
//   *    *    *    *
// *    *    *    *    *

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            if (j <= n - i) {
                printf("  ");
            }
            else {
                printf("*    ");
                }
        }
        printf("\n");
    }

    return 0;
}




// // 18..

// Enter n: 4
// 1   2   3   4
//   2   3   4
//     3   4
//       4

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {        
        for (int j = 1; j <= n; j++) {    
            if (j < i) {
                
                printf("  ");
            } else {
                
                printf("%d   ", j);
            }
        }
        printf("\n");
    }

    return 0;
}


// // 19..

// Enter odd n: 7

// * * * * * * *
//   * * * * *
//     * * *
//       *
//     * * *
//   * * * * *
// * * * * * * *

#include <stdio.h>

int main() {
    int n;
    printf("Enter odd n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {


            if ( j == i || j == n - i + 1) {
                printf("* ");
            }

            else if ((j > n - i + 1 && j < i) || (j > i && j < n - i + 1)) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}


// // 20..
// Enter rows: 5
//     *
//    * *
//   *   *
//  *     *
// * * * * *

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j <= n - i) {
                printf(" ");
            }
            else {
                if (i == 1 || i == n || j == n - i + 1 || j == n) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}



// // 21..

// Enter n: 5
// * * * * *
//  *     *
//   *   *
//    * *
//     *


#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n; j++) {
            if (j <= n - i) {
                printf(" ");
            }
            else {
                if (i == 1 || i == n || j == n - i + 1 || j == n) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}


// // 22..

//Enter n: 4
//   *
//  * *
// *   *
//*     *
// *   *
//  * *
//   *

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);


    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j == n - (i - 1) || j == n + (i - 1))   
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j == n - (i - 1) || j == n + (i - 1))   
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}




// // 23..
// Enter odd n: 7
// * * * * * * *
//   *       *
//     *   *
//       *
//     *   *
//   *       *
// * * * * * * *

#include <stdio.h>

int main() {
    int n;
    printf("Enter odd n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {

            
            if (i == 1 || i == n) {
                printf("* ");
            }
            
            else if (j == i || j == n - i + 1) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}


// // 24..

// Enter n: 4
//          1
//        1   1
//      1   2   1
//    1   3   3   1

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n - i - 1; j++) {
            printf("  ");
        }

        int val = 1;  
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                printf("%4d", 1);
            }
            else {
                val = val * (i - j + 1) / j;
                printf("%4d", val);
            }
        }

        printf("\n");
    }

    return 0;
}


// // 25..?
//*
//  *
//*   *
//  *   *
//*   *
//  *
//*

