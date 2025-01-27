#include<iostream>
using namespace std;

class BOX
{
    private:
    int length;
    int breadth;
    int height;

    public:
    // Setter Method
    void insertDetails(int l,int b,int h) 
    {
        this->length = l;
        this->breadth = b;
        this->height = h;
    }

    int calculateVolumn()
    {
        return length*breadth*height;
    }

};

int main()
{
    BOX box1;
    box1.insertDetails(2,3,4);
    cout<<"volumn is : " << box1.calculateVolumn()<<endl;

    return 0;
}