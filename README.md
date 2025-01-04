# Inventory Management System 📦

This repository contains a **simple Inventory Management System** implemented in **C**. The program allows users to add, display, and search inventory items using a menu-driven interface. All data is stored in memory during execution, providing a lightweight and efficient solution for inventory management.

---

## 🚀 Features

- **Add Items**: Add new inventory items with ID, name, quantity, and price.  
- **Display All Items**: View the list of all inventory items currently stored.  
- **Search by ID**: Quickly find specific inventory items using their unique ID.  
- **In-Memory Storage**: Data is stored temporarily during program execution (no persistence).  

---

## 🛠️ Technologies Used

- **Programming Language**: C  
- **Console-Based Interface**: Intuitive menu-driven interaction.  

---

## 📂 Project Structure

```plaintext
Inventory-Management-Using-C-Language/
├── inventory.c       # Main C program file
├── README.md         # Project documentation

```
---
## ⚡ Getting Started
1. Clone the Repository
Clone the repository to your local system using:

bash
```plaintext
git clone https://github.com/moiz6309/Inventory-Management-Using-C-Language.git
cd Inventory-Management-Using-C-Language
```
2. Compile the Code
Use a C compiler, such as GCC, to compile the program:

bash
```plaintext
gcc inventory.c -o inventory
```
3. Run the Program
Run the compiled file to start the application:
bash
```plaintext
./inventory
```
## 📖 How to Use
Run the program using the instructions above. Choose an option from the menu:

Add Item: Add a new inventory item with its details.
Display Items: View all items in the inventory.
Search Item: Find an item by its unique ID.
Exit: Exit the application.
Follow the on-screen prompts to perform actions.

📝 Example Usage
Adding a New Item
Input:
```plaintext
Enter Item ID: 101
Enter Item Name: Monitor
Enter Quantity: 10
Enter Price: 199.99
```
Output:
```plaintext
Item added successfully!
```
Displaying All Items
Output:
```plaintext
Inventory Items:
ID      Name            Quantity    Price
101     Monitor         10          199.99
```
Searching for an Item
Input:
```plaintext
Enter Item ID to search: 101
```
Output:
```plaintext
Item Found:
ID: 101
Name: Monitor
Quantity: 10
Price: 199.99
```
## 🚧 Limitations
- **No Persistence**: Data is lost when the program exits as no file handling is implemented.
- **Maximum Capacity**: Limited to 100 items due to array size constraints.
## 🚀 Future Enhancements
- **File Handling**: Save and load inventory data for persistence.
- **Search by Name**: Add support to search for items by name.
- **Delete/Update Items**: Enable editing and removing existing records.
- **Improved UI**: Transition to a graphical or web-based interface.

