
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    ifstream file ("file.txt");

    //метод getline()
    int n = 10;
    char* buffer = new char[n+1];
    buffer[n]=0;
    file.get(buffer,n);
    file.getline(buffer,n,' ');
    cout << buffer;
    delete [] buffer;

    // метод read()
    int n=10;
    char* buffer=new char[n+1]; buffer[n]=0;
    file.read(buffer,n);
    cout<<buffer;
    delete [] buffer;

}
