#include <iostream>
#include<vector>
using namespace std;
struct sale
{
	string name;
	int price, quantity;
};
sale sl;
vector<sale>item;
int main()
{
	while (true) {
		int value;
		cout << " 1. Add Items: " << endl;
		cout << " 2. Search Items: " << endl;
		cout << " 3. Sold Items: " << endl;
		cout << " 4. Show All Items: " << endl;
		cout << " 0. For Exit: " << endl;
		cout << " Enter Here: "; cin >> value;

		if (value == 1) {
			system("cls");
			int choice;
			do {
				cout << " Name: "; cin >> sl.name;
				cout << " Price: "; cin >> sl.price;
				cout << " Quantity: "; cin >> sl.quantity;
				item.push_back(sl);
				cout << " Saved Successfuly: " << endl;
				cout << "Enter '1' For Continue Or '0' For Exit: ";
				cin >> choice;
			} 
			while (choice !=0 && choice==1);
		
		}//if1
		else if (value == 2) {
			system("cls");
			string n;
			cout << " Enter Name For Search Item: ";
			cin >> n;
			
			for (int i = 0; i < item.size(); i++) {
				if (n == item[i].name) {
					cout << " Name: " << item[i].name << endl;
					cout << " Price: " << item[i].price << endl;
					cout << " Quantity: " << item[i].quantity << endl << endl;
				}
			}
		}//elseif
		else if (value == 3) {
			system("cls");
			string n;
			cout << " Enter Name Of Sold item: ";
			cin >> n;
			for (int i = 0; i < item.size(); i++) {
				if (n == item[i].name) {
					int q;
					cout << " Enter Sold Quantity: "; cin >> q;
					
					item[i].quantity= item[i].quantity - q;
					cout << " Remaining Quantity of " << item[i].name << "   is : " << item[i].quantity<<endl;
           
			 }

			}
		}//elseif2
		else if (value == 4) {
			system("cls");
			for (int i = 0; i < item.size(); i++) {
				cout << " Name: " << item[i].name << endl;
				cout << " Price: " << item[i].price << endl;
				cout << " Quantity: " << item[i].quantity << endl << endl;
			}
		}//elseif3
		else if (value == 0) {
			exit(0);
		}//elseif0
		else { system("cls"); cout << " Invalid Input " << endl << endl; }
	}//while
}//main

