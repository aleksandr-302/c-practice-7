#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string str;
    ofstream object;
    object.open("file.txt");
    cout << "";
    cin >> str;
    object << str;
    object.close();
    return 0;
}