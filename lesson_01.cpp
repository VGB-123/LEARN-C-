#include <iostream>

using namespace std;

#define BASIC_SALARY 300
// #define: keyword khai bao hang so
// BASIC_SALARY: ten cua hang so
// 300 : gia tri cua hang so
// Hang so : gia tri cua no khong bi thay doi trong suot qua trinh thuc thi


int main(){
    //xy ly logic code o day
    // khai bao 1 bien luu ho ten
    string full_name = " Vuong Gia Bao";
    // khai bao 1 bien luu tru tuoi
    int my_age = 18;
    // khai bao 1 bien luu tru dia chi
    string my_address = " TPHCM";
    // int a; // khong nen viet
    // int b; // khong nen viet
    bool checking = true;
    char letter = 'A'; // su dung dau nhay don ''
    float my_point = 8.9; //  so thuc
    double my_money = 100.534; // so thuc
     
    cout << "Full name: " << full_name << endl;
    cout << "Age: " << my_age << endl;
    cout << "Address: " << my_address << endl;
    cout << "Checking: " << checking << endl;
    cout << "Letter: " << letter << endl;
    cout << "Point: " << my_point << endl;
    cout << "Money: " << my_money << endl;
    cout << "Luong co ban : "<< BASIC_SALARY << endl;
    // su dung tu khoa constant de khai bao ham so
    const double PI = 3.14; // hang so
    cout << " Gia tri cua so PI : " << PI << endl;
    // PI = 3.56; // error : khong duoc phep thay doi gia tri cua hang so
    // uu tien su dung tu khoa const de khai bao hang so ( han che dung #define)

    int number1 = 4;
    int number2 = 9;
    int result = number2 % number1; // phep chia lay du ( chi ap dung cho so nguyen)
    cout << "In gia tri : " << result << endl;
    cout << (number1 + number2) << endl; // phep cong
    cout << (number2 - number1) << endl; // phep tru

    // = : phep gan gia tri
    // == : phep so sanh
    bool kiem_tra = number1 == number2; // so sanh number1 co bang number2 khong
    cout << kiem_tra << endl;
    bool kiem_tra2 = number1 != number2; // so sanh number1 khong bang number2
    cout << kiem_tra2 << endl; // 1 - true : dung la khong bang nhau

    int number3 = 9;
    int number4 = 10;
    bool kiem_tra3 = (number1 > number2) && (number3 < number4); // AND => 0 // neu hai dieu kien nay deu dung thi tra ve TRUE
    bool kiem_tra4 = (number1 > number2) || (number3 < number4); // OR => 1
    cout << kiem_tra3 << endl; // o == False
    cout << kiem_tra4 << endl; //1 == True

    return 0;
}
git config --global --unset user.email 10425053@student.vgu.edu.vn