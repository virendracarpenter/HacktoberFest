// Cpp Code to implement stack using stl 
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    // empty set
    set<int, greater<int> > s1;
 
   
    s1.insert(10);
    s1.insert(30);
    s1.insert(50);
    s1.insert(40);
    s1.insert(70);
     

    
    s1.insert(20);
    s1.insert(80);
 
    // printing set s1
    set<int, greater<int> >::iterator itr;
    cout << "\nThe set s1 is : \n";
    for (itr = s1.begin(); itr != s1.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;
 
    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());
 
    // print all elements of the set s2
    cout << "\nThe set s2 after assign from s1 is : \n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout << *itr<<" ";
    }
    cout << endl;
 
    // remove all elements up to 30 in s2
    cout
        << "\ns2 after removal of elements less than 30 :\n";
    s2.erase(s2.begin(), s2.find(30));
    for (itr = s2.begin(); itr != s2.end(); itr++) {
        cout <<*itr<<" ";
    }
 
    // remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "\ns2.erase(50) : ";
    cout << num << " removed\n";
    for (itr = s2.begin(); itr != s2.end(); itr++)
    {
        cout <<*itr<<" ";
    }
 
    cout << endl;

    cout << "s1.lower_bound(40) : \n"
         << *s1.lower_bound(40)
         << endl;
    cout << "s1.upper_bound(40) : \n"
         << *s1.upper_bound(40)
         << endl;
 
    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40)
         << endl;
    cout << "s2.upper_bound(40) : \n"
         << *s2.upper_bound(40)
         << endl;
 
    return 0;
}