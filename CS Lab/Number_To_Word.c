#include<stdio.h>

int main()
{
    int i, n;
    printf("Enter how many digit you enter: \n");
    scanf("%d", &n);
    int j, a[n];
    printf("Enter the numbers: \n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=0 ; j<n ; j++)
    {
        switch (a[j])
        {
        case 0:
            printf("Zero ");
            break;
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("six ");
            break;
        case 7:
            printf("Seven ");
            break;
        case 8:
            printf("Eight ");
            break;
        case 9:
            printf("Nine ");
            break;                                
        default:
            printf("\"Please enter a valid positive integer in this place\" ");
            break;
        }
    }
    return 0;
}