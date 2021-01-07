#include <stdio.h>
#include <stdlib.h>

int main()
{
    char age_type[20];
    char place[20];
    char gender[20];
    char next_gender[20];
    char third[20];
    char fourth[20];

    printf("Enter the age_type: ");
    scanf("%s", age_type);
    printf("Enter a place: ");
    scanf("%s", place);
    printf("Enter the gender: ");
    scanf("%s", gender);
    printf("Enter the next_gender: ");
    scanf("%s", next_gender);
    printf("Enter the third: ");
    scanf("%s", third);
    printf("Enter the fourth: ");
    scanf("%s", fourth);


    printf("There was %s woman from %s \n",age_type,place);
    printf("%s had a peculiar feeling\n",gender);
    printf("%s laid on %s back\n",next_gender,third);
    printf("Opened %s's crack\n",fourth);
    printf("Pissed all over the ceiling");
    return 0;
}
