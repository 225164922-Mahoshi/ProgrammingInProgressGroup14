#include <stdio.h>
#include <stdlib.h>
#include "assets.h"

int main() {
    int choice, id;
    printf("=== Municipal System - Group 14 ===\n");
    printf("Asset Management - Gerome Mahoshi 225164922\n");
    
    do {
        printf("\n--- Asset Management ---\n");
        printf("1. Add Asset\n");
        printf("2. Display Assets\n");
        printf("3. Search Asset by ID\n");
        printf("4. Asset Report\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        getchar();
        switch(choice) {
            case 1: addAsset(); break;
            case 2: displayAssets(); break;
            case 3: printf("Enter ID: "); scanf("%d",&id); getchar(); searchAssetById(id); break;
            case 4: assetReport(); break;
            case 5: exit(0);
            default: printf("Invalid!\n");
        }
    } while(1);
}
