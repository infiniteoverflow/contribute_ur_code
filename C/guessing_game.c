/*This is a C implementation of High Lower Guessing Game where the Computer puts a number and the user needs to guess it. If the
user guesses a greater number than what computer has put up, a message is displayed that User has entered a greater number and vice
versa. In addition, Lifeline Options have also been added to the game to allow the user some hints like whether the number is Even/Odd,
Prime/Composite or the sum of digits. A Guess counter has also been added for further compatability. */
#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

#include <math.h>

void eo(int a);
void sum(int b);
void prime(int c);
void play() {
  int player, computer;
  char choice, life = 3;
  int g = 0;
  clrscr();
  srand(time(NULL));
  computer = rand() % 101;
  printf("*******************Welcome to the Game*********************\n");
  printf("The computer has chosen a number between 0 and 100. You have to guess that number \n");
  printf("LIFELINE: You can take three lifeline choices to be able to \n guess the number with much more accuracy. If you want to take a \nlifeline just enter -1 as your choice. \nYou have only three lifeline options! \n");

  while (g >= 0) {
    printf("Enter your guess: \n");
    scanf("%d", & player);
    if (player == -1) {
      if (life == 3) {
        eo(computer);
        life--;
      } else if (life == 2) {
        sum(computer);
        life--;
      } else if (life == 1) {
        prime(computer);
        life--;
      } else {
        printf("You don't have any lifelines left! \n");
      }
    } else if (player == computer) {
      printf("You have made the correct choice. Congratulations!!! \n");
      break;
    } else if (player > computer) {
      printf("Oops! You have entered a larger number than what computer entered. Try again! \n");
      g += 1;
    } else if (player < computer) {
      printf("Sigh! Computer guessed a larger number than what you predicted \n");
      g += 1;
    } else {
      printf("Invalid choice \n");
      g += 1;
    }
  }
  if (g == 0) {
    printf("You arrived at the conclusion head-on. You are a PRO! \n");
  } else {
    printf("You made %d guesses before arriving to correct conclusion \n", g);
  }
  printf("Do you want to play further [Y/N]? \n");
  scanf(" %c", & choice);
  if (choice == 'y' || choice == 'Y') {
    system("cls");
    play();
  } else {
    exit(0);
  }
}
void main() {
  system("cls");
  play();
  getch();
}
void eo(int a) {
  if (a % 2 == 0) {
    printf("The guessed number is an even number \n");
  } else {
    printf("The guessed number is an odd number \n");
  }
}
void sum(int b) {
  int sum = 0;
  while (b != 0) {
    sum = sum + (b % 10);
    b = b / 10;
  }
  printf("The sum of digits in guessed number is %d \n", sum);
}
void prime(int c) {
  int flag = 0, i;
  for (i = 1; i <= c; i++) {
    if (c % i == 0) {
      flag++;
    }
  }
  if (flag == 2) {
    printf("The guessed number is an odd number \n");
  } else {
    printf("The guessed number is a composite number \n");
  }
}
