🛒 Inventory Management System
A simple command-line program written in C for managing an inventory of items. This program allows you to add items, view the entire inventory, and search for specific items by their ID.# Inventory-Management-Using-C-Language

✨ Features
➕ Add Items: Input item details such as ID, name, quantity, and price.
📋 Display Inventory: View all items in a clean tabular format.
🔍 Search Items: Find items by their unique ID.
🛠️ Technologies Used
C Programming Language
🚀 How to Run
Clone the Repository:

bash
Copy code
git clone https://github.com/your-username/inventory-management-system.git
cd inventory-management-system
Compile the Code:
Use a C compiler such as gcc to compile the code.

bash
Copy code
gcc inventory.c -o inventory
Run the Program:

bash
Copy code
./inventory
📂 File Structure
bash
Copy code
.
├── inventory.c      # Main source code
├── README.md        # Documentation
🖥️ Sample Output
Main Menu
plaintext
Copy code
Inventory Management System
1. Add Item
2. Display Items
3. Search Item
4. Exit
Enter your choice:
Adding an Item
plaintext
Copy code
Enter Item ID: 101
Enter Item Name: Laptop
Enter Quantity: 10
Enter Price: 55000
Item added successfully!
Displaying Items
plaintext
Copy code
Inventory Items:
ID      Name            Quantity        Price
---------------------------------------------
101     Laptop          10              55000.00
Searching for an Item
plaintext
Copy code
Enter Item ID to search: 101
Item Found:
ID: 101
Name: Laptop
Quantity: 10
Price: 55000.00
🚧 Future Enhancements
📝 Add functionality to update or delete items.
💾 Save inventory data to a file for persistence.
📊 Add sorting and filtering options for better usability.
