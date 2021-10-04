#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("FileReadingWriting.txt");
    out << "My name is Bhupendra Choudhary"<<endl;
    out << "My father name is Mr Jitendra Choudhary"<<endl;
    out.close();

    ifstream in;
    in.open("FileReadingWriting.txt");
    string st;
   /* in>>st;
    in>>st2;
    cout<<st<<endl;
    cout<<st2<<endl;*/
    while(in.eof()==0)
    {
        getline(in, st);
        cout<<st<<endl;

    }
    in.close();
    return 0;
}