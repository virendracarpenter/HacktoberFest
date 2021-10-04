#include <iostream>
#include<fstream>
using namespace std;

int main()
{
     
    ofstream out("FileReadingWriting.txt");
    string st = "Bhupendra Choudahry";
   // cout<<"Enter your name: "<<endl;
    //cin>>st;
    out<<"My name is "+ st;
    out.close();
    
    ifstream in("FileReadingWriting.txt");
    string st2;
    getline(in, st2);
   //in>>st2;
    cout<<st2;
    in.close();
    return 0;
}