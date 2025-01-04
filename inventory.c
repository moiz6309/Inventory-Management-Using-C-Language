#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITEMS 100
#define NAME_LEN 50

// Structure to store inventory item details
typedef struct {
    int id;
    char name[NAME_LEN];
    int quantity;
    float price;
} Item;

Item inventory[MAX_ITEMS];
int itemCount = 0;

// Function to add a new item
void addItem() {
    if (itemCount >= MAX_ITEMS) {
        printf("Inventory is full! Cannot add more items.\n");
        return;
    }

    Item newItem;
    printf("Enter Item ID: ");
    scanf("%d", &newItem.id);
    printf("Enter Item Name: ");
    scanf(" %[^\n]", newItem.name); // Read input with spaces
    printf("Enter Quantity: ");
    scanf("%d", &newItem.quantity);
    printf("Enter Price: ");
    scanf("%f", &newItem.price);

    inventory[itemCount++] = newItem;
    printf("Item added successfully!\n");
}

// Function to display all items
void displayItems() {
    if (itemCount == 0) {
        printf("No items in the inventory.\n");
        return;
    }

    printf("\nInventory Items:\n");
    printf("ID\tName\t\tQuantity\tPrice\n");
    printf("---------------------------------------------\n");
    int i;
    for ( i = 0; i < itemCount; i++) {
        printf("%d\t%-15s\t%d\t\t%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
    }
}

// Function to search for an item by ID
void searchItem() {
    int searchId;
    printf("Enter Item ID to search: ");
    scanf("%d", &searchId);
    int i;
    for (i = 0; i < itemCount; i++) {
        if (inventory[i].id == searchId) {
            printf("\nItem Found:\n");
            printf("ID: %d\n", inventory[i].id);
            printf("Name: %s\n", inventory[i].name);
            printf("Quantity: %d\n", inventory[i].quantity);
            printf("Price: %.2f\n", inventory[i].price);
            return;
        }
    }
    printf("Item with ID %d not found.\n", searchId);
}

// Main menu
void menu() {
    int choice;
    do {
        printf("\nInventory Management System\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addItem();
                break;
            case 2:
                displayItems();
                break;
            case 3:
                searchItem();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
}

// Main function
int main() {
    menu();
    return 0;
}
