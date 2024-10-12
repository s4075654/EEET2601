#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long int current_full_name = 0;

char **EnterAListOfFullNames(char **full_names, unsigned long int *sizes,
                             unsigned long long int current_full_name) {
  _Bool error = 0;

  printf("Input full name %llu: ", current_full_name + 1);
  if (getline(&full_names[current_full_name], &sizes[current_full_name],
              stdin) == -1) {
    error = 1;
  }
  full_names =
      (char **)realloc(full_names, (current_full_name + 2) * sizeof(char *));
  if (full_names == NULL) {
    error = 1;
  }
  sizes = (unsigned long int *)realloc(sizes, (current_full_name + 2) *
                                                  sizeof(unsigned long int));
  if (sizes == NULL) {
    error = 1;
  }

  if (error == 1) {
    printf("Full name not entered, proceeding...\n");
    return (full_names);
  } else {
    return (EnterAListOfFullNames(full_names, sizes, current_full_name + 1));
  }
}

char *ASearchKeyword() {
  char *a_search_keyword;
  unsigned long int size = 0;

  printf("Input a search keyword: ");
  getline(&a_search_keyword, &size, stdin);

  return (a_search_keyword);
}

void PrintOutAllNamesContainingIt(char **a_list_of_full_names,
                                  unsigned long long int current_full_name,
                                  char *a_search_keyword) {

  printf("All names containing it: \n");
  for (unsigned long long int full_name = 0; full_name < current_full_name;
       ++full_name) {
    if (strstr(a_list_of_full_names[full_name], a_search_keyword) != NULL) {
      printf("%s\n", a_list_of_full_names[full_name]);
    }
  }

  free(a_list_of_full_names);
  free(a_search_keyword);
}

int main() {
  char **full_names = (char **)malloc(sizeof(char *));
  unsigned long int *sizes =
      (unsigned long int *)malloc(sizeof(unsigned long int));

  PrintOutAllNamesContainingIt(
      EnterAListOfFullNames(full_names, sizes, current_full_name),
      current_full_name, ASearchKeyword());

  free(sizes);
  return (0);
}