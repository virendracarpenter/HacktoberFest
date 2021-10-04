#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator itr;
    for (itr = lst.begin(); itr != lst.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list1; //list 0 length

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    display(list1);
    //list1.sort();
    //REmoving elements from the list
    //list1.pop_back();
    //list1.pop_front();
    //list1.remove(15);
    list<int> list2(3); //list with 3 elements
    list<int>::iterator itr;
    itr = list2.begin();
    *itr = 45;
    itr++;
    *itr = 6;
    itr++;
    *itr = 9;
    itr++;
   display(list2);
 // list1.sort();
   // list2.sort();
    list1.merge(list2);
    cout<<"list1 after merging "<<endl;
    //REversing the list
    //list1.reverse();

    display(list1);
    

    return 0;
}