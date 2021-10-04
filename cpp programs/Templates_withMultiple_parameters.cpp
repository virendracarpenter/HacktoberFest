#include <iostream>
using namespace std;

template <class T1, class T2>
class myclass
{
   public:
   T1 data1;
   T2 data2;
   
   myclass(T1 a, T2 b)
   { 
       data1=a;
       data2=b;
   }
   void display()
   {
    // cout<<"Value of data1 is "<<data1<<endl;
    // cout<<"Value of data2 is "<<data2<<endl;
       cout<<"value of data1 is "<<this->data1<<endl<<"Value of data2 is "<<this->data2;
   }
};
int main()
{
    myclass<int, int> Obj(10,50);
    Obj.display();
    return 0;
}