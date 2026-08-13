#include <iostream>
using namespace std;
class demo
{
    private:
    int a,b;


    public:
    void get()
    {
        cin>>a>>b;
    }
    void disp() {
        cout<<a<<" "<<b;
    }
   void swap(demo &d1)
   {
        int t;
        t=d1.a;
        d1.a=d1.b;
        d1.b=t;
   }
};
int main()
{
    demo d2,d3;


    d2.get();
    cout<<"Before swapping \n";
    d2.disp();
    d3.swap(d2);
    cout<<"\nAfter Swapping \n";
    d2.disp();
    return 0;
}
