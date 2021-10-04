#include <iostream>
//#include<string>
#include <map>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Bhupendra"] = 99;
    marksMap["Harry"] = 96;
    marksMap["Virat"] = 93;
    marksMap.insert({{"Rohit", 100}, {"Dhoni", 200}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << endl;
    }
    cout << "Size of marksMap is: " << marksMap.size() << endl;
    cout << "max_size of marksMap is: " << marksMap.max_size() << endl;
    cout << "Empty's return value is: " << marksMap.empty() << endl;
    return 0;
}