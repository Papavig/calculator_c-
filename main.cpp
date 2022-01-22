#include<iostream>
using namespace std;

class abc{
    public:
        void getdata();
        void putdata();
    public:
        float a,b,c;
        char op;
};

int main(){
    abc obj;
    obj.getdata();
    obj.putdata();
}

void abc::getdata(){
    cout<<"1st number: ";
    cin>>a;
    cout<<"2nd number: ";
    cin>>b;
    cout<<"enter operation\n + - * /: ";
    cin>>op;
};

void abc::putdata(){
    if (op == '+')
    {
        c=a+b;
        cout<<"Answer: "<<c;
    }
    else if (op == '-')
    {
        c=a-b;
        cout<<"Answer: "<<c;
    }
    else if (op == '*')
    {
        c=a*b;
        cout<<"Answer: "<<c;
    }
    else if (op == '/')
    {
        c=a/b;
        cout<<"Answer: "<<c;
    }
}