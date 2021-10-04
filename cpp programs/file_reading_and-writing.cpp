#include <iostream>
#include <fstream>
using namespace std;
//Here we use a class name ofstream which is already defined in the fstream library
// We use ofstream as a class constructor
int main()
{
     string st = "Take my name as input";
    ofstream out("FileReadingWriting.txt"); //This is write operation
    out<<st;
    cout<<st;
    out.close();
    string st2;
    ifstream in("FileReadingWriting.txt"); //This is read operation
    in >> st2;
    getline(in, st2);
    cout << st2;
    
    return 0;
}