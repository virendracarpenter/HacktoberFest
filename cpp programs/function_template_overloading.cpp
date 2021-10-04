#include <iostream>
using namespace std;
/*template<class T>

class Bhupen
{
   public:
   T data1;
   Bhupen(T a)
   {
       data1=a;
   }
   void display()
   {
      cout<<data1<<endl; 
   }
};*/
void func(int a)
{
    cout<<"I am Bhupendra Choudhary "<<a<<endl;
}
template <class T>
void func(T a)
{
    cout<<"My name is Bhupendra Choudhary "<<a<<endl;
}
int main()
{
    //Bhupen<int> bhu(10);
   // cout<<bhu.data1<<endl;
    //bhu.display();
    func(10);
    return 0;
}