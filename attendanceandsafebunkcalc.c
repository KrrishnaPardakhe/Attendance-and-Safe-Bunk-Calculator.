#include<stdio.h>
int main(){
    int totalclasses, classesattended;
    float currentpercent;
    int choice;
    printf("---------------------------------------------");
    printf("  75%% ATTENDANCE & SAFE BUNK CALCULATOR");
    printf("---------------------------------------------");
    while(1){
        printf("\n ---- CHOICE TO BE MADE ----\n");
        printf("1. Check your Attendance & Safe Bunks\n");
        printf("2. Exit\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);
        if (choice==1){
            printf("\nEnter total number of classes held so far: ");
            scanf("%d", &totalclasses);
            printf("\n Enter the total number of classes attended: ");
            scanf("%d", &classesattended);
            if(totalclasses<=0 || classesattended<0){
                printf("Invalid input: It cannot be negative or zero.\n");
                continue;
            }
            if(classesattended>totalclasses){
                printf("Invalid- Number of classes attended cannot be more than number of classes held.\n");
                continue;
            }
            currentpercent = (classesattended*100.0)/totalclasses;
            printf("\nCurrent Attendance Percentage: %.2f%%\n", currentpercent);
            if(currentpercent>=75.0){
                int safeskips = 0;
                while((classesattended*100.0)/(totalclasses + safeskips +1) >= 75.0){
                    safeskips++;
                }
                printf("SAFE(Attendance above 75%%)\n");
                if(safeskips > 0){
                    printf("Classes safe to miss = %d\n", safeskips);
                }
                else{
                    printf("Attention needed! Do not skip the next class, you are right on edge\n");
                }
            }
            else{
                int classneeded = 0;
                while(((classesattended + classneeded)*100.0)/ (totalclasses + classneeded) < 75.0){
                    classneeded++; 
                }
                printf("LOW ATTENDANCE (Below 75%%)\n");
                printf("Number of classes you need to attend without skipping = %d\n", classneeded);
            }
        }
        else if(choice==2){
            printf("\nExiting Attendance Calculator\n");
            break;
        }
        else{
            printf("Invalid choice!!");
        }
    }
    return 0;
}
