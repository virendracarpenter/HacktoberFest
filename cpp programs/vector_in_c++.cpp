#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout<<"Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
       // cout<<v.at(i)<<endl;
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;
    vector<char> vec2(4);
    vector<char> vec3(vec2);
    vector<int> vec4(6,3);
    vec2.push_back('5');
    display(vec2);
    display(vec3);
    display(vec4);
    cout<<vec4.size();
    int element, size=4;
  //  for (int i = 0; i < size; i++)
  //  {
    //    cout << "Enter an element to add to this vector:" << endl;
      //  cin >> element;
        //vec1.push_back(element);
   // }
    //vec1.pop_back();
    //vector<int>::iterator iter = vec1.begin();
    //vec1.insert(iter + 2, 50, 1500);
    //display(vec1);
    return 0;
}