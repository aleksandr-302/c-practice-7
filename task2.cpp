#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "rus");
    char buff[100];
    ifstream fin("file.txt");

    fin.getline(buff, 100);
    fin.close();
    cout << buff << endl;

    system("pause");
    return 0;
}