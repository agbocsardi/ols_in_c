#include <stdio.h>
#include <gsl/gsl_linalg.h> // i'll need to use this later

char get_filename() {
  char filename;
  printf("Enter name of CSV file:\n");
  scanf(" %c", &filename);

  return filename;
}



int main() {
  printf("\n\n=== OLS in C ===\n\n");

  FILE data_csv;
  char filename = get_filename();

  return 0;
}
