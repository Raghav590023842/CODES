// WAP to display basic banking services menu
// 1) Inquiry
// 2) Open Account
// 3) Close Account
// 4) Deposit Money
// 5) Withdraw Money
// 6) Display Balance
// 7) Display Transactions
// 8) Identify Defaulter

//Done By Niharika(590022720) and Raghav Vij(590023842)
//Work done by Niharika:-
//1)inquiry
//2)deposit money
//3)withdraw money
//4)identify defaulter
//
//Work done by Raghav:-
//1)open account
//2)close account
//3)display balance
//
//what we were unable to do:-
//1)display transactions


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int checkcustid(char custID[]) {
    FILE *ptr;
    char filename[200];
    char first[] = "C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\Project\\";
    char third[] = ".txt";

    strcpy(filename, first);
    strcat(filename, custID);
    strcat(filename, third);

    ptr = fopen(filename, "r");
    if (ptr == NULL) {
        return 0;
    } else {
        fclose(ptr);
        return 1;
    }
}

int openaccount() {
    char str[6];   
    int i;
    char filename[200];
    char first[] = "C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\Project\\";
    char third[] = ".txt";

    for (i = 0; i < 5; i++) {
        str[i] = 'A' + rand() % 26;
    }
    str[5] = '\0';

    strcpy(filename, first);
    strcat(filename, str);
    strcat(filename, third);

    FILE *ptr = fopen(filename, "w");
    if (ptr == NULL) {
        printf("Error creating account file!\n");
        return 0;
    } else {
        printf("Account created successfully! Your Customer ID is %s\n", str);
        float balance = 0.0;
        
        fprintf(ptr, "Balance: %.2f\n", balance);
        fclose(ptr);
    }

    return 0;
}

int closeaccount(const char id[]) {
    char filename[200];
    char first[] = "C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\Project\\";
    char third[] = ".txt";
    char answer;

    strcpy(filename, first);
    strcat(filename, id);
    strcat(filename, third);

    
    if (!checkcustid((char *)id)) {
        printf("Account with ID %s does not exist.\n", id);
        return 0;
    }

    
    printf("Are you sure you want to close account %s? This will delete the file. (y/n): ", id);
    
    getchar();
    scanf(" %c", &answer);

    if (answer == 'y' || answer == 'Y') {
        if (remove(filename) == 0) {
            printf("Account %s closed successfully. File deleted.\n", id);
            return 1;
        } else {
            printf("Error: Could not delete account file for %s.\n", id);
            return 0;
        }
    } else {
        printf("Account closure cancelled.\n");
        return 0;
    }
}
void inquiry() {
    printf("\n======= Bank Inquiry Section =======\n");
    printf("Welcome to RaNi Bank! Here are some common questions:\n\n");

    printf("Q1: What types of accounts do you offer?\n");
    printf("A: We currently offer Savings and Current Accounts.\n\n");

    printf("Q2: What is the minimum balance required?\n");
    printf("A: Minimum balance for a Savings Account is ₹1000.\n");
    printf("   There is no minimum balance for Current Accounts.\n\n");

    printf("Q3: How can I open a new account?\n");
    printf("A: You can open an account by selecting 'Open Account' from the main menu.\n\n");

    printf("Q4: How can I check my account balance?\n");
    printf("A: Choose 'Display Balance' from the main menu after logging in.\n\n");

    printf("Q5: What should I do if I forget my Customer ID?\n");
    printf("A: Please contact the nearest RaNi Bank branch for verification and recovery.\n\n");

    printf("Q6: What are your working hours?\n");
    printf("A: Our bank operates from Monday to Saturday, 9:00 AM to 5:00 PM.\n\n");

    printf("Q7: How can I close my account?\n");
    printf("A: Select 'Close Account' from the main menu to permanently delete your account file.\n\n");

    printf("For more information, visit our help desk or call customer support.\n");
    printf("====================================\n");
}
void deposit(char custID[]) {
    FILE *ptr;
    char filename[200];
    char first[] = "C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\Project\\";
    char third[] = ".txt";
    float balance = 0.0, depositAmount;

    strcpy(filename, first);
    strcat(filename, custID);
    strcat(filename, third);

    ptr = fopen(filename, "r");
    if (ptr == NULL) {
        printf("Error: Account not found for ID %s\n", custID);
        return;
    }

    fscanf(ptr, "Balance: %f", &balance);
    fclose(ptr);

    printf("Current balance: %.2f\n", balance);
    printf("Enter amount to deposit: ");
    scanf("%f", &depositAmount);

    if (depositAmount <= 0) {
        printf("Invalid deposit amount!\n");
        return;
    }

    balance += depositAmount;

    ptr = fopen(filename, "w");
    if (ptr == NULL) {
        printf("Error updating account file!\n");
        return;
    }
    fprintf(ptr, "Balance: %.2f\n", balance);
    fclose(ptr);

    printf("%.2f deposited successfully!\n", depositAmount);
    printf("Updated balance: %.2f\n", balance);
}

void withdraw(char custID[]) {
    FILE *ptr;
    char filename[200];
    char first[] = "C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\Project\\";
    char third[] = ".txt";
    float balance = 0.0, withdrawAmount;

    strcpy(filename, first);
    strcat(filename, custID);
    strcat(filename, third);

    ptr = fopen(filename, "r");
    if (ptr == NULL) {
        printf("Error: Account not found for ID %s\n", custID);
        return;
    }

    fscanf(ptr, "Balance: %f", &balance);
    fclose(ptr);

    printf("Current balance: %.2f\n", balance);
    printf("Enter amount to withdraw: ");
    scanf("%f", &withdrawAmount);

    if (withdrawAmount <= 0) {
        printf("Invalid amount!\n");
        return;
    }

    if (withdrawAmount > balance) {
        printf("Insufficient balance! You only have %.2f\n", balance);
        return;
    }

    balance -= withdrawAmount;

    
    ptr = fopen(filename, "w");
    if (ptr == NULL) {
        printf("Error updating account file!\n");
        return;
    }
    fprintf(ptr, "Balance: %.2f\n", balance);
    fclose(ptr);

    printf("%.2f withdrawn successfully!\n", withdrawAmount);
    printf("Remaining balance: %.2f\n", balance);
}
void displaybalance(char custID[]) {
    FILE *ptr;
    char filename[200];
    char first[] = "C:\\Users\\hp\\Documents\\UPES\\C\\Codes\\Project\\";
    char third[] = ".txt";
    float balance = 0.0;

    strcpy(filename, first);
    strcat(filename, custID);
    strcat(filename, third);

    ptr = fopen(filename, "r");
    if (ptr == NULL) {
        printf("Error: Account not found for ID %s\n", custID);
        return;
    }

    fscanf(ptr, "Balance: %f", &balance);
    fclose(ptr);

    printf("\nCurrent balance for account %s: %.2f\n", custID, balance);
}

int main() {
    char name[50];
    int phone;
    char existing;
    int choice;
    float balance = 0.0, amount;
    char custIDstr[20]; 
    int loggedIn = 0;  

    srand((unsigned int)time(0));  

    printf("******** Welcome to RaNi Bank ********\n\n");
    printf("Are you an existing customer? (y/n): ");
    scanf(" %c", &existing);

    if (existing == 'y' || existing == 'Y') {
        
        printf("\nEnter your Customer ID: ");
        scanf("%s", custIDstr);

        int found = checkcustid(custIDstr);
        if (found == 0) {
            printf("Customer ID not found! Please restart the program and enter a valid Customer ID.\n");
            return 0;
        } else {
            loggedIn = 1;
            printf("Welcome back, Customer #%s!\n", custIDstr);
        }
        
        getchar();
    } else if (existing == 'n' || existing == 'N') {
        printf("Enter your full name: ");
        getchar(); 
        fgets(name, sizeof(name), stdin);

        printf("Enter your phone number: ");
        scanf("%d",&phone);
       

        printf("Welcome, %s!\n", name);
    } else {
        printf("\nInvalid option! Please restart the program and enter y/n.\n");
        return 0;
    }

    do {
        printf("\n======= Banking Services =======\n");
        printf("1. Inquiry\n");
        printf("2. Open Account\n");
        printf("3. Close Account\n");
        printf("4. Deposit Money\n");
        printf("5. Withdraw Money\n");
        printf("6. Display Balance\n");
        printf("7. Display Transactions\n");
        printf("8. Identify Defaulter\n");
        printf("9. Exit\n");
        printf("================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                inquiry();
                break;

            case 2:
                openaccount();
                break;

            case 3:
                if (loggedIn) {
                    
                    if (closeaccount(custIDstr)) {
                        
                        loggedIn = 0;
                        custIDstr[0] = '\0';
                    }
                } else {
                    
                    char idtmp[20];
                    printf("Enter Customer ID to close: ");
                    scanf("%s", idtmp);
                    closeaccount(idtmp);
                }
                break;

            case 4:
                if (existing == 'y' || existing == 'Y') {
                    deposit(custIDstr);
                } else {
                char idtmp[20];
                printf("Enter your Customer ID to deposit money: ");
                scanf("%s", idtmp);
                deposit(idtmp);
            }
                break;
            case 5:
                if (existing == 'y' || existing == 'Y') {
                    withdraw(custIDstr);
                } else {
                    char idtmp[20];
                    printf("Enter your Customer ID to withdraw money: ");
                    scanf("%s", idtmp);
                    withdraw(idtmp);
                }
                break;

            case 6:
                if (existing == 'y' || existing == 'Y') {
                    displaybalance(custIDstr);
                } else {
                    char idtmp[20];
                    printf("Enter your Customer ID to view balance: ");
                    scanf("%s", idtmp);
                    displaybalance(idtmp);
                }
                break;

            case 7:
                printf("Displaying your recent transactions...\n");
                printf("Feature under development.\n");
                break;

            case 8:
                if (balance < 1000) {
                    printf("You are marked as a defaulter!\n");
                } else {
                    printf("You are not a defaulter.\n");
                }
                break;

            case 9:
                printf("Thank you for using RaNi Bank. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please select a valid option.\n");
        }

    } while (choice != 9);

    return 0;
}

