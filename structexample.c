#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const int MAX_Len = 50;

typedef struct CountryTvWatch_struct {
   char countryName[MAX_Len];
   int tvMinutes;
} CountryTvWatch;

struct Person
{
    char name[50];
    int citNo;
    float salary;
} person1, person2, p[20];



int main(void) {
    struct Person person4, person5, p[30];
   // Source: www.statista.com, 2010
   const int NUM_COUNTRIES = 4;
   
   CountryTvWatch countryList[NUM_COUNTRIES];
   char countryToFind[MAX_Len];
   bool countryFound;
   int i;
   
   strcpy(countryList[0].countryName, "Brazil");
   countryList[0].tvMinutes = 222;
   strcpy(countryList[1].countryName, "India");
   countryList[1].tvMinutes = 119;
   strcpy(countryList[2].countryName, "U.K.");
   countryList[2].tvMinutes = 242;
   strcpy(countryList[3].countryName, "U.S.A.");
   countryList[3].tvMinutes = 283;
   
   printf("Enter country name: ");
   scanf("%s", countryToFind);
  
   countryFound = false;
   for (i = 0; i < NUM_COUNTRIES; ++i) { // Find country's index
      if (strcmp(countryList[i].countryName, countryToFind) == 0) {
         countryFound = true;
         printf("People in %s watch\n", countryToFind);
         printf("%d minutes of TV daily.\n", countryList[i].tvMinutes);
      }
   }
   if (!countryFound) {
      printf("Country not found, try again.\n");
   }
   
   return 0;
}