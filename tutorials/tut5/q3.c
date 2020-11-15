#include <stdio.h>
#define SIZE 16

typedef struct {
    int id;         /* staff identifier */
    int totalLeave; /* the total number of days of leave allowed */
    int leaveTaken; /* the number of days of leave taken so far */
} leaveRecord;

void getInput(leaveRecord list[], int *n);
int mayTakeLeave(leaveRecord list[], int id, int leave, int n);
void printList(leaveRecord list[], int n);

int main(void) {
    leaveRecord list[SIZE];
    int size = 0, choice;
    printf("Select one of the following options: \n");
    printf("1: getInput()\n");
    printf("2: mayTakeLeave()\n");
    printf("3: printList()\n");
    printf("4: exit\n");
    do {
        int id, leave;
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                getInput(list, &size);
                break;
            case 2:
                printf("Enter staff ID: ");
                scanf("%d", &id);
                printf("Enter number of days of leave: ");
                scanf("%d", &leave);
                switch (mayTakeLeave(list, id, leave, size)) {
                    case 1: {
                        printf("Leave approved.\n");
                        break;
                    }
                    case 0: {
                        printf("Leave disapproved.\n");
                        break;
                    }
                    case -1: {
                        printf("Staff member not found.\n");
                        break;
                    }
                }
                break;
            case 3:
                printList(list, size);
                break;
        }
    } while (choice < 4);
    return 0;
}

void getInput(leaveRecord list[], int *n) {
    printf("Please enter ID, Total Leave, Leave Taken in one line respectively, seperated by comma.\n");
    printf("Enter # to finish.\n");
    *n = 0;
    printf("Enter Record 1: ");
    while (scanf("%d %d %d", &list[*n].id, &list[*n].id, &list[*n].id) == 3) {
        (*n)++;
        printf("Enter Record %d: ", *n + 1);
    }
    while (getchar() != '\n') continue;
}

int mayTakeLeave(leaveRecord list[], int id, int leave, int n) {
    int i = 0;
    while (i < n) {
        if (list->id == id) {
            if (list->leaveTaken + leave <= list->totalLeave) {
                list->leaveTaken += leave;
                return 1;
            }
            return 0;
        }
        i++;
        list++;
    }
    return -1;
}

void printList(leaveRecord list[], int n) {
    if (n) {
        printf("ID\tTotal\tTaken\n");
        for (int i = 0; i < n; i++) {
            printf("%d\t%d\t%d\n", list->id, list->totalLeave, list->leaveTaken);
            list++;
        }
    } else {
        printf("There are no records to be displayed.\n");
    }
}
