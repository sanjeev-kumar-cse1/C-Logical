// 1.Q)write a c program input number and check number is greater than 10 or not ?

#include <stdio.h>

int main() {

	int num;
	printf("Enter your number: ");
	scanf("%d", &num);

	if(num > 10) {
		printf("This is greater than 10 ");
	}
	else {
		printf("This is not greater than 10 ");
	}

	return 0;
}


// 2. Q)write a c program input number and check number is greater than 67 or not?

#include <stdio.h>

int main() {

	int num;
	printf("Enter your number: ");
	scanf("%d", &num);

	if(num > 67) {
		printf("This is greater than 67 ");
	}
	else {
		printf("This is not greater than 67 ");
	}

	return 0;
}


// 3. Q)write a c program input number and check number is even or odd ?
// even :number divide by 2
// odd :number does not divide by 2

#include <stdio.h>

int main() {

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("The number even is %d\n", num);
    }

    else {
        printf("The number odd is %d\n", num);
    }

    return 0;
}


// 4. Q)write a c program input number and check number is divisible by 5 or not ?

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0) {
        printf("The number %d is divisible by 5.\n", num);
    } else {
        printf("The number %d is not divisible by 5.\n", num);
    }

    return 0;
}


// 5. Q)write a c program input character :a
// apple
// otherwise :input is not matched

#include <stdio.h>

int main() {

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a') {
        printf("apple\n");
    }
    else {
        printf("Input is not matched\n");
    }

    return 0;
}

// 6. Q)write a c program input character :b
// ball
// otherwise :input is not matched

#include <stdio.h>

int main() {

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch == 'b') {
        printf("ball\n");
    }
    else {
        printf("Input is not matched\n");
    }

    return 0;
}


// 7. Q)write a c program input character and check character is vowel and consonant ?
// vowel :a,e,i,o,u
// consoant :

#include <stdio.h>

int main() {

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch == 'a') {
        printf("The character is a vowel.\n");
    }
    else {
        if (ch == 'e') {
            printf("The character is a vowel.\n");
        } else {
            if (ch == 'i') {
                printf("The character is a vowel.\n");
            } else {
                if (ch == 'o') {
                    printf("The character is a vowel.\n");
                } else {
                    if (ch == 'u') {
                        printf("The character is a vowel.\n");
                    }
                    else {
                         printf("The character is a consonant.\n");
                                        }
                }}}}
    return 0;
}


// 8. Q)write a c program input character and check character is q,w,e,r,t,y,u,i,o,p : upper line
// otherwise :input is not matched

#include <stdio.h>

int main() {

	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch == 'q') {
		printf("Character %c is in the upper line.\n", ch);
	} else {
		if (ch == 'w') {
			printf("Character %c is in the upper line.\n", ch);
		} else {
			if (ch == 'e') {
				printf("Character %c is in the upper line.\n", ch);
			} else {
				if (ch == 'r') {
					printf("Character %c is in the upper line.\n", ch);
				} else {
					if (ch == 't') {
						printf("Character %c is in the upper line.\n", ch);
					} else {
						if (ch == 'y') {
							printf("Character %c is in the upper line.\n", ch);
						} else {
							if (ch == 'u') {
								printf("Character %c is in the upper line.\n", ch);
							} else {
								if (ch == 'i') {
									printf("Character %c is in the upper line.\n", ch);
								} else {
									if (ch == 'o') {
										printf("Character %c is in the upper line.\n", ch);
									} else {
										if (ch == 'p') {
											printf("Character %c is in the upper line.\n", ch);
										} else {
											printf("Input is not matched.\n");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}


// 9. Q)write a c program input character and check character is a,s,d,f,g,h,j,k,l : mid line
// otherwise :input is not matched

#include <stdio.h>

int main() {

	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch == 'a') {
		printf("Character %c is in the mid line.\n", ch);
	} else {
		if (ch == 's') {
			printf("Character %c is in the mid line.\n", ch);
		} else {
			if (ch == 'd') {
				printf("Character %c is in the mid line.\n", ch);
			} else {
				if (ch == 'f') {
					printf("Character %c is in the mid line.\n", ch);
				} else {
					if (ch == 'g') {
						printf("Character %c is in the mid line.\n", ch);
					} else {
						if (ch == 'h') {
							printf("Character %c is in the mid line.\n", ch);
						} else {
							if (ch == 'j') {
								printf("Character %c is in the mid line.\n", ch);
							} else {
								if (ch == 'k') {
									printf("Character %c is in the mid line.\n", ch);
								} else {
									if (ch == 'l') {
										printf("Character %c is in the mid line.\n", ch);
									} else {
											printf("Input is not matched.\n");
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}


// 10. Q)write a c program input character and check character is z,x,c,v,b,n,m : lower line
// otherwise :input is not matched

#include <stdio.h>

int main() {

	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch == 'z') {
		printf("Character %c is in the lower line.\n", ch);
	} else {
		if (ch == 'x') {
			printf("Character %c is in the lower line.\n", ch);
		} else {
			if (ch == 'c') {
				printf("Character %c is in the lower line.\n", ch);
			} else {
				if (ch == 'v') {
					printf("Character %c is in the lower line.\n", ch);
				} else {
					if (ch == 'b') {
						printf("Character %c is in the lower line.\n", ch);
					} else {
						if (ch == 'n') {
							printf("Character %c is in the lower line.\n", ch);
						} else {
							if (ch == 'm') {
								printf("Character %c is in the lower line.\n", ch);
							}  else {
											printf("Input is not matched.\n");
									}
								}
							}

				}
			}
		}
	}

	return 0;
}


// 11. Q)write a c program input character 'a':
// two number
// addition
// otherwise :input is not matched

#include <stdio.h>

int main() {


	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch == 'a') {

		int num1;
		printf("Enter first number: ");
		scanf("%d", &num1);
		int num2;
		printf("Enter second number: ");
		scanf("%d", &num2);

		printf("Addition = %d\n", num1 + num2);
	} else {
		printf("input is not matched\n");
	}

	return 0;
}


// 12. Q)write a c program input character 's':
// four number
// substraction
// otherwise :input is not matched


#include <stdio.h>

int main() {


	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch == 's') {

		int num1;
		printf("Enter first number: ");
		scanf("%d", &num1);
		int num2;
		printf("Enter second number: ");
		scanf("%d", &num2);
		int num3;
		printf("Enter third number: ");
		scanf("%d", &num3);
		int num4;
		printf("Enter forth number: ");
		scanf("%d", &num4);

		printf("substraction = %d\n", num1 - (num2+num3+num4));
	} else {
		printf("input is not matched\n");
	}

	return 0;
}


// 13. Q)write a c program input character 'm':
// two number
// multiplication
// otherwise :input is not matched

#include <stdio.h>

int main() {


	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch == 'm') {

		int num1;
		printf("Enter first number: ");
		scanf("%d", &num1);
		int num2;
		printf("Enter second number: ");
		scanf("%d", &num2);

		printf("multiplication = %d\n", num1 * num2);
	} else {
		printf("input is not matched\n");
	}

	return 0;
}


// 14. Q)write a c program input character 'd':
// two number
// divide
// otherwise :input is not matched

#include <stdio.h>
int main() {


	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch == 'd') {

		int num1;
		printf("Enter first number: ");
		scanf("%d", &num1);
		int num2;
		printf("Enter second number: ");
		scanf("%d", &num2);

		printf("divide = %d\n", num1 / num2);
	} else {
		printf("input is not matched\n");
	}

	return 0;
}


// 15. Q)write a c program input character 's':
// two number
// swap number without third variable
// otherwise :input is not matched

#include <stdio.h>
int main() {


	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch == 's') {

		int num1;
		printf("Enter first number: ");
		scanf("%d", &num1);
		int num2;
		printf("Enter second number: ");
		scanf("%d", &num2);

		
		printf("num1 = %d and num2 =%d \n", num1 , num2);
		
		num1 = num1+num2;
		num2 = num1-num2;
		num1 = num1-num2;
		
		printf("num1 = %d and num2 =%d \n", num1 , num2);
	} else {
		printf("input is not matched\n");
	}

	return 0;
}


// 16. Q)write a c program input character 'w':
// two number
// swap number with third variable
// otherwise :input is not matched

#include <stdio.h>
int main() {


	char ch;
	printf("Enter a character: ");
	scanf(" %c", &ch);

	if (ch == 'w') {

		int num1;
		printf("Enter first number: ");
		scanf("%d", &num1);
		int num2;
		printf("Enter second number: ");
		scanf("%d", &num2);

		
		printf("num1 = %d and num2 =%d \n", num1 , num2);
		
		int temp=num1;
		num1=num2;
		num2=temp;
		
		printf("num1 = %d and num2 =%d \n", num1 , num2);
	} else {
		printf("input is not matched\n");
	}

	return 0;
}



              //                     using else-if


// 7. question

#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter a character ");
    scanf("%c", &ch);
    
    if(ch == 'a'){
        printf("vowel\n");
    }
    else if(ch == 'e'){
        printf("vowel\n");
    }
    else if(ch == 'i'){
        printf("vowel\n");
    }
    else if(ch == 'o'){
        printf("vowel\n");
    }
    
    else if(ch == 'u'){
        printf("vowel\n");
    }
    
    else{
        printf("consonant\n");
    }
    
}
 
 
// 8.

#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter a character ");
    scanf("%c", &ch);
    
    if(ch == 'q'){
        printf("This is in upper line.\n");
    }
    else if(ch == 'w'){
        printf("This is in upper line.\n");
    }
    else if(ch == 'e'){
        printf("This is in upper line.\n");
    }
    else if(ch == 'r'){
        printf("This is in upper line.\n");
    }
    
    else if(ch == 't'){
        printf("This is in upper line.\n");
    }
    else if(ch == 'y'){
        printf("This is in upper line.\n");
    }
    else if(ch == 'u'){
        printf("This is in upper line.\n");
    }
    else if(ch == 'i'){
        printf("This is in upper line.\n");
    }
    else if(ch == 'o'){
        printf("This is in upper line.\n");
    }
    else if(ch == 'p'){
        printf("This is in upper line.\n");
    }
    
    else{
        printf("Input is not matched\n");
    }
    
}


// 9. question

#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter a character ");
    scanf("%c", &ch);
    
    if(ch == 'a'){
        printf("This is in mid line.\n");
    }
    else if(ch == 's'){
        printf("This is in mid line.\n");
    }
    else if(ch == 'd'){
        printf("This is in mid line.\n");
    }
    else if(ch == 'f'){
        printf("This is in mid line.\n");
    }
    
    else if(ch == 'g'){
        printf("This is in mid line.\n");
    }
    else if(ch == 'h'){
        printf("This is in mid line.\n");
    }
    else if(ch == 'j'){
        printf("This is in mid line.\n");
    }
    else if(ch == 'k'){
        printf("This is in mid line.\n");
    }
    else if(ch == 'l'){
        printf("This is in mid line.\n");
    }
    
    else{
        printf("Input is not matched\n");
    }
    
}


// 10. question

#include <stdio.h>

int main(){
    
    char ch;
    printf("Enter a character ");
    scanf("%c", &ch);
    
    if(ch == 'z'){
        printf("This is in lower line.\n");
    }
    else if(ch == 'x'){
        printf("This is in lower line.\n");
    }
    else if(ch == 'c'){
        printf("This is in lower line.\n");
    }
    else if(ch == 'v'){
        printf("This is in lower line.\n");
    }
    
    else if(ch == 'b'){
        printf("This is in lower line.\n");
    }
    else if(ch == 'n'){
        printf("This is in lower line.\n");
    }
    else if(ch == 'm'){
        printf("This is in lower line.\n");
    }
    
    else{
        printf("Input is not matched\n");
    }
    
}

