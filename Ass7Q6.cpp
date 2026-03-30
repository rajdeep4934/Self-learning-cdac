#include <iostream>
#include <vector>
using namespace std;

class Item {
public:
    int itemId;
    string itemName;
    float price;

    void input() {
        cout << "Enter ID: ";
        cin >> itemId;
        cout << "Enter Name: ";
        cin >> itemName;
        cout << "Enter Price: ";
        cin >> price;

        if(price < 0) {
            throw "Price cannot be negative!";
        }
    }

    void display() {
        cout << itemId << " " << itemName << " " << price << endl;
    }
};

int main() {
    vector<Item> cart;
    int choice;

    while(true) {
        cout << "\n1.Add\n2.Display\n3.Total\n4.Exit\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                try {
                    Item i;
                    i.input();
                    cart.push_back(i);
                }
                catch(const char* msg) {
                    cout << msg << endl;
                }
                break;
            }

            case 2:
                for(auto i : cart) {
                    i.display();
                }
                break;

            case 3: {
                float total = 0;
                for(auto i : cart) {
                    total += i.price;
                }
                cout << "Total Bill = " << total << endl;
                break;
            }

            case 4:
                return 0;
        }
    }
}