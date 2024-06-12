#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void){
    //set as one initially (BAD CODING!)
    int numWeeks = 1;
    int hours;

    char choice;
    //part two
    int total = 0;
    int average = 0;
    //does this even work?
    int weeks[numWeeks];
    printf("Enter the number of weeks for the course: \n");
    scanf("%d", &numWeeks);
    for (int i=1; i<numWeeks+1; i++) {
        printf("Enter the number of hours for week %d:\n", i);
        scanf("%d", &hours);
        weeks[i] = hours;
        total = total + weeks[i];
    }
    
    //why is it stopping here
    printf("Would you like to view the average or the total hours? enter T for total and A for average: \n");
    getchar();
    scanf("%c", &choice);
    //sum the total before
    
    if (choice == 'T'){
        printf("The total is %d\n", total);
    } 

    else if (choice == 'A'){
        average = round(total / numWeeks);
        printf("The average is %d\n", average);
    }

    else {
        printf("invalid option.");
    }

}

