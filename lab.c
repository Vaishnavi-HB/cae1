#include <stdio.h>

int main() {
    int choice;
    printf("Enter a number (1-3): ");
    scanf("%d", &choice);
 switch (choice) {
        case 1:
            printf("You selected One.\n");
            break;
	    case 2:
            printf("You selected Two.\n");
          break;
	  case 3:
            printf("You selected Three.\n");
            break;
	  case 4:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
	    printf("Btech mechanical");
    }

    return 0;
}

