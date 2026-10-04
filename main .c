#include <stdio.h>
#include <stdlib.h>
#include "assets.h"
#include "budget.h"

void showMainMenu() {
    printf("\n========================================\n");
    printf(" Municipal Financial Management System\n");
    printf(" Group 14 - Asset & Budget Management\n");
    printf("========================================\n");
    printf("1. Asset Management (Mahoshi 225164922)\n");
    printf("2. Budget Management (Quentos)\n");
    printf("3. Exit System\n");
    printf("Enter your choice: ");
}

void assetMenu() {
    int choice, id;
    do {
        printf("\n--- Asset Management Module ---\n");
        printf("1. Add New Asset\n");
        printf("2. Display All Assets\n");
        printf("3. Search Asset by ID\n");
        printf("4. Generate Asset Report\n");
        printf("5. Back to Main Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1: addAsset(); break;
            case 2: displayAssets(); break;
            case 3: 
                printf("Enter Asset ID to search: ");
                scanf("%d", &id); 
                getchar();
                searchAssetById(id); 
                break;
            case 4: assetReport(); break;
            case 5: printf("Returning to Main Menu...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);
}

void budgetMenu() {
    int choice, id;
    do {
        printf("\n--- Budget Management Module ---\n");
        printf("1. Add New Budget\n");
        printf("2. Display All Budgets\n");
        printf("3. Search Budget by ID\n");
        printf("4. Generate Budget Report\n");
        printf("5. Back to Main Menu\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice) {
            case 1: addBudget(); break;
            case 2: displayBudgets(); break;
            case 3:
                printf("Enter Budget ID to search: ");
                scanf("%d", &id);
                getchar();
                searchBudgetById(id);
                break;
            case 4: budgetReport(); break;
            case 5: printf("Returning to Main Menu...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while(choice != 5);
}

int main() {
    int mainChoice;
    printf("Welcome to Municipal System!\n");
    
    do {
        showMainMenu();
        scanf("%d", &mainChoice);
        getchar();

        switch(mainChoice) {
            case 1: assetMenu(); break;
            case 2: budgetMenu(); break;
            case 3: 
                printf("Thank you for using the system. Goodbye!\n");
                exit(0);
            default: 
                printf("Invalid main menu choice! Please enter 1-3.\n");
        }
    } while(1);

    return 0;
}
