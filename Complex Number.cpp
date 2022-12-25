#include<iostream>
using namespace std;

class Complex{
    int x;
    int y;
    public:

    Complex(){
        x=0;
        y=0;
    }

    Complex operator+(Complex);

    Complex operator*(Complex);

    friend istream &operator>>(istream &input, Complex &t);
    friend ostream &operator<<(ostream &output, Complex &o);
};

istream &operator>>(istream &input, Complex &t){
    cout<<"Enter the Real Part: ";
    input>>t.x;
    cout<<"Enter the Imaginary Part: ";
    input>>t.y;
}

ostream &operator<<(ostream &output, Complex &o){
    output<<o.x<<" + "<<o.y<<"i"<<endl;
}

Complex Complex:: operator+(Complex obj){
        Complex add;
        add.x=x+obj.x;
        add.y=y+obj.y;
        return (add);
    }


Complex Complex :: operator*(Complex c){
        Complex multi;
        multi.x=(x*c.x)-(y*c.y);
        multi.y=(y*c.x)+(x*c.y);
        return (multi);
    }

int main(){
    Complex c1, c2, c3, c4;
    
    cout<<"Default constructor is: "<<endl;
    cout<<c1;
    
    cout<<"\nEnter the First Number"<<endl;
    cin>>c1;

    cout<<"\nEnter the Second Number"<<endl;
    cin>>c2;

    c3=c1+c2;
    c4=c1*c2;

    cout<<"\nThe first Number is ";
    cout<<c1;

    cout<<"\nThe Second Number is ";
    cout<<c2;

    
    cout<<"\nAddition of Complex Numbers is: "<<endl;
    cout<<c3;

    
    cout<<"\nMultiplication of Complex Numbers is: "<<endl;
    cout<<c4;
    
    return 0;
}
