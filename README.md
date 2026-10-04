# Municipal Financial Management System - Group 14

## Members
- Gerome Mahoshi 225164922 - Asset Management

## My Contribution - Asset Management
Files:
- assets.h - struct Asset with assetId, assetName, assetType, purchaseValue, department, condition
- assets.c - Implements addAsset(), displayAssets(), searchAssetById(), searchAsset(), assetReport()

Features:
- Validation: Checks for duplicate ID, negative value, empty name using string.h (strcmp, strcspn, fgets)
- Uses arrays and loops as required
- Search by ID

## How to compile
gcc main.c assets.c employees.c budget.c suppliers.c reports.c -o mfms
./mfms
