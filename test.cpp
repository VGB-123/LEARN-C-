#include <iostream>
#include <string>

// using std::cout;
//using std::endl;

using namespace std;

int main() {
    int id; // ma so
    string address; // dia chi

    cout << "Hello! I am learning C++." << endl;

    cout << " moi nhap ma so:" <<endl;
    cin >> id;
    cin.ignore();
    cout << "moi nhap dia chi ro rang:" <<endl;
    // cin << address;
    getline(cin, address);
    
    cout << "ID:" <<id << "- Address :" << address << endl;

    return 0;
}
