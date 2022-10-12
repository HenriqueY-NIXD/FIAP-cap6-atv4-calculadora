#include <stdio.h>

void resetColour() {
    printf("\033[0m");
}

void black (char text[]) {
  printf("\033[1;30m");
  printf("%s", text);
  resetColour();
}

void red (char text[]) {
  printf("\033[1;31m");
  printf("%s", text);
  resetColour();
}

void green (char text[]) {
  printf("\033[1;32m");
  printf("%s", text);
  resetColour();
}

void yellow (char text[]) {
  printf("\033[1;33m");
  printf("%s", text);
  resetColour();
}

void blue (char text[]) {
  printf("\033[1;34m");
  printf("%s", text);
  resetColour();
}

void purple (char text[]) {
  printf("\033[1;35m");
  printf("%s", text);
  resetColour();
}

void cyan (char text[]) {
  printf("\033[1;36m");
  printf("%s", text);
  resetColour();
}

void white (char text[]) {
  printf("\033[1;37m");
  printf("%s", text);
  resetColour();
}
