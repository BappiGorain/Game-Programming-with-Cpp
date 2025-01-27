#include<iostream>
using namespace std;

class BOX
{
    private:
    int length;
    int breadth;
    int height;

    public:
    BOX(int l, int b, int h) : length(l),breadth(b),height(h){}

    friend int calculateVolume(BOX b);

};


int calculateVolume(BOX b)
{
    return b.length * b.breadth * b.height;
}


int main()
{
    BOX box(1,2,3);
    cout<<calculateVolume(box)<<endl;

}