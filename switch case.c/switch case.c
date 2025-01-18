#include <stdio.h>

int main() 
{
    int sub1, sub2, sub3, sub4, sub5, per, result;
    
    printf("Enter 5 subjects marks: ");
    scanf("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);
    
    // Calculate percentage
    per = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;
    
    // Qualification check
    if (per > 40) {
        printf("Qualified\n");
    } else {
        printf("Not qualified\n");
    }

    // Check for invalid marks (greater than 100)
    if (per > 100) {
        printf("You've entered wrong marks.\n");
    } else if (per >= 40) {
        // Switch case for grades only if qualified
        switch (per / 10) {
            case 10: // 100%
            case 9:  // 90% to 99%
                printf("Grade A\n");
                break;
            case 8:  // 80% to 89%
                printf("Grade B\n");
                break;
            case 7:  // 70% to 79%
                printf("Grade C\n");
                break;
            case 6:  // 60% to 69%
                printf("Grade D\n");
                break;
            case 5:  // 50% to 59%
                printf("Grade D\n");
                break;
            case 4:  // 40% to 49%
                printf("Grade D\n");
                break;
            default:  // Below 40%
                break; // Fail is already handled earlier
        }
    } else {
        // If not qualified, print Fail
        printf("Fail\n");
    }

    return 0;
}