//https://github.com/YaDmitryE/D.Z.2.4

#include <stdio.h>

int main()

{
    int day;
    printf("input day number: ");
    scanf("%i", &day);
    switch (day) {
    case 1: {
        printf("Monday");
    }
          break;
    case 2: {
        printf("Thuesday");
    }
          break;
    case 3: {
        printf("Wednesday");
    }
          break;
    case 4: {
        printf("Thursday");
    }
          break;
    case 5: {
        printf("Friday");
    }
          break;
    case 6: {
        printf("Saturday");
    }
          break;
    case 7: {
        printf("Sunday");
    }
          break;
    default: {
        printf("ERROR");
    }
    }
    return 0;
}
