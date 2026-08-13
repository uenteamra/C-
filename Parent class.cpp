#include <iostream>
using namespace std;
class floor 
{
    public:
    int fn;
    int rack_no;
    
};
class book:protected floor 
{
    private:
    char bname[40];
    int bid;
    
    public:
    void accept() 
    {
        cin>>fn>>rack_no>>bname>>bid;
    }
    void disp()
    {
        cout<<fn<<rack_no<<bname<<bid;
    }
};
int main() {
    book b1;
    b1.accept();
    b1.disp();

    return 0;
}

