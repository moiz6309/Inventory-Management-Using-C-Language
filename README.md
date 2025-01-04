# Inventory Management System 📦  
A simple yet effective **Inventory Management System** written in **C**. This program is designed to handle the addition, deletion, updating, and viewing of inventory records. It's a great demonstration of basic file handling and data management in C programming.

---

## 🚀 Features  
- **Add New Inventory Items**: Add products with details such as name, price, and quantity.  
- **Delete Inventory Records**: Remove specific items from the inventory.  
- **Update Existing Records**: Modify the quantity or price of existing products.  
- **View Inventory**: Display all items currently in the inventory.  
- **Permanent Storage**: Inventory data is saved in a file for persistence.  

---

## 🛠️ Technologies Used  
- **Programming Language**: C  
- **File Handling**: To store and retrieve inventory data.  
- **Console-Based Interface**: Simple and easy-to-use text-based menu system.  

---

## 📂 Project Structure  
```plaintext
Inventory-Management-Using-C-Language/
├── inventory.c       # Main C program file
├── inventory.txt     # File to store inventory data (created dynamically)
└── README.md         # Project documentation (this file)
⚡ Getting Started
1. Clone the Repository
bash
Copy code
git clone https://github.com/moiz6309/Inventory-Management-Using-C-Language.git
cd Inventory-Management-Using-C-Language
2. Compile the Code
Use any C compiler to compile the inventory.c file. For example:

bash
Copy code
gcc inventory.c -o inventory
3. Run the Program
After compiling, run the program:

bash
Copy code
./inventory
📖 How to Use
Run the program and choose an option from the menu:

1: Add a new inventory item.
2: View all inventory items.
3: Update an existing item's price or quantity.
4: Delete an item from the inventory.
5: Exit the program.
Follow the prompts to enter data or make updates.

All changes are saved to inventory.txt for future use.

📝 Example Usage
Adding a New Item
Input:

plaintext
Copy code
Enter product name: Laptop
Enter product price: 55000
Enter product quantity: 10
Output:

plaintext
Copy code
Item added successfully!
Viewing Items
Output:

plaintext
Copy code
--------------------------------------
ID    Product Name   Price   Quantity
--------------------------------------
1     Laptop         55000   10
--------------------------------------
🚧 Future Enhancements
🔒 Add User Authentication: Password-protect the inventory system.
📊 Generate Reports: Include sales and inventory reports.
🌐 Add a GUI: Upgrade to a graphical interface for easier usage.
