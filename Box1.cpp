#include<iostream>
using namespace std;

class BOX
{
    public:
    int length;
    int breadth;
    int height;
};

int main()
{
    BOX box1;
    cout<<"Enter length : ";
    cin>>box1.length;
    cout<<"Enter breadth : ";
    cin>>box1.breadth;
    cout<<"Enter height : ";
    cin>>box1.height;
    cout<<"Volume of box is "<<box1.length*box1.breadth*box1.height<<endl;
    return 0;
}