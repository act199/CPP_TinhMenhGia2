// CPP_TinhMenhGia2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Tinh Menh Gia\n";
    int t, t500, t200, t100, t50, t20, t10, t5;
    cout << "Nhap so tien t: ";
    cin >> t;
    t500 = t / 500;
    t -= 500 * t500;
    t200 = t / 200;
    t -= 200 * t200;
    t100 = t / 100;
    t -= 100 * t100;
    t50 = t / 50;
    t -= 50 * t50;
    t20 = t / 20;
    t -= 20 * t20;
    t10 = t / 10;
    t -= 10 * t10;
    t5 = t / 5;
    t -= 5 * t5;
    cout << "To 500: " << t500;
    cout << "\nTo 200: " << t200;
    cout << "\nTo 100: " << t100;
    cout << "\nTo 50: " << t50;
    cout << "\nTo 20: " << t20;
    cout << "\nTo 10: " << t10;
    cout << "\nTo 5: " << t5;
    cout << "\nTo 1: " << t;
    cout << "\nTong to tien: " << t + t5 + t10 + t20 + t50 + t100 + t200 + t500;
    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
