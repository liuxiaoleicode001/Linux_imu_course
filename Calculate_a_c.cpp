#include <iostream>
#include <math.h>
using namespace std;
int main(){
	cout<<"Calculate the circumference and area of a circle through coordinates"<<endl;
	double c_a[2],c_b[2];
	cout<<"please input a"<<endl;
	cin>>c_a[0]>>c_a[1];
	cout<<"please input b"<<endl;
    cin>>c_b[0]>>c_b[1];
    double R=sqrt( (c_b[0]-c_a[0])*(c_b[0]-c_a[0])+(c_b[1]-c_a[1])*(c_b[1]-c_a[1]) );
    double PI = 3.1415;
    cout<<"Circumference of a circle"<<endl;
    cout<<2*R*PI<<endl;
    cout<<"Area of a circle"<<endl;
    cout<<R*R*PI<<endl;
	cout<<"Calculating the of a triangle by coordinates Perimeter and area"<<endl;
    double a[2],b[2],c[2];
    cout<<"please input a"<<endl;
	cin>>a[0]>>a[1];
	cout<<"please input b"<<endl;
    cin>>b[0]>>b[1];
	cout<<"please input c"<<endl;
    cin>>c[0]>>c[1];
    double A,B,C,s,S;
    A=sqrt( (b[0]-a[0])*(b[0]-a[0])+(b[1]-a[1])*(b[1]-a[1]) );
    B=sqrt( (c[0]-b[0])*(c[0]-b[0])+(c[1]-b[1])*(c[1]-b[1]) );
    C=sqrt( (c[0]-a[0])*(c[0]-a[0])+(c[1]-a[1])*(c[1]-a[1]) );
    s=(A+B+C)/2.0;
    S=sqrt(s*(s-A)*(s-B)*(s-C));
    cout<<"Perimeter S"<<A+B+C<<endl;
    cout<<"Area S"<<S<<endl;
    return 0;
}
