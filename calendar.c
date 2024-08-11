#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct
{
 	 char *name;
 	 int date;
 	 char *description;
} Day;
// Function to create a calendar
Day *create() 
{
  Day *calendar = (Day *)malloc(sizeof(Day) * 7);
  if (calendar = = NULL) 
{
    printf("Error allocating memory for calendar\n");
    exit(1);
  }
  return calendar;
}
// Function to read data from the keyboard
void read(Day *calendar) 
{
  for (int i = 0; i < 7; i++) 
{
    printf("Enter the name of day %d: ", i + 1);
    char *name = (char *)malloc(sizeof(char) * 100);
if (name == NULL) 
{
      printf("Error allocating memory for day name\n");
      exit(1);
    }
    scanf("%s", name);
    calendar[i].name = name;
    printf("Enter the date of day %d: ", i + 1);
    int date;
    scanf("%d", &date);
    calendar[i].date = date;
    printf("Enter the description of activity for day %d: ", i + 1);
    char *description = (char *)malloc(sizeof(char) * 100);
    if (description == NULL) {
      printf("Error allocating memory for activity description\n");
      exit(1);
    }
    scanf("%s", description);
    calendar[i].description = description;
  }
}
// Function to print weeks activity details report on screen
void display(Day *calendar) 
{
  printf("\nWeek Activity Details Report\n");
  printf("----------------------------\n");
  for (int i = 0; i < 7; i++) 
{
    printf("%s %d: %s\n", calendar[i].name, calendar[i].date, calendar[i].description);
  }
}
int main( ) 
{
  // Create a calendar
  Day *calendar = create();

  // Read data from the keyboard
  read(calendar);

  // Display weeks activity details report on screen
  display(calendar);

  // Free the memory allocated for the calendar
  for (int i = 0; i < 7; i++)
 {
    free(calendar[i].name);
    free(calendar[i].description);
  }
  free(calendar);
  return 0;
}
