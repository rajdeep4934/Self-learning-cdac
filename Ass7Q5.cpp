#include <iostream>
#include <map>
#include <fstream>
using namespace std;

int main() {
    map<int, string> students;
    int choice, roll;
    string name;

    while(true) {
        cout << "\n1.Add\n2.Display\n3.Save\n4.Exit\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Roll No: ";
                cin >> roll;
                cout << "Enter Name: ";
                cin >> name;
                students[roll] = name;
                break;

            case 2:
                for(auto s : students) {
                    cout << s.first << " - " << s.second << endl;
                }
                break;

            case 3: {
                ofstream file("students.txt");
                for(auto s : students) {
                    file << s.first << " " << s.second << endl;
                }
                file.close();
                cout << "Saved to file\n";
                break;
            }

            case 4:
                return 0;
        }
    }
}