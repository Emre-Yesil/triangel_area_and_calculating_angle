#define _USE_MATH_DEFINES
#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int a,b,c,s;
    double cosa,cosb,cosc,area;
    cout<<" enter the triangeles edges(a,b,c)"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    
   if(a+b <= c || a+c <= b || b+c <=a){
      cout<<"this triangel is not possible";
    }
      else{
        s = (a+b+c)/2;
      area= sqrt(s*(s-a)*(s-b)*(s-c));
      cout<<"area = "<<area<<endl;
      cosa = (pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c);
      cout<<"angle of the triangel opposite the A edge is "<<round(((acos(cosa)*180)/M_PI)*pow(10,4))/pow(10,4)<<" degrees"<<endl;
      cosb = (pow(a,2)+pow(c,2)-pow(b,2))/(2*a*c);
      cout<<"angle of the triangel opposite the B edge is "<<round(((acos(cosb)*180)/M_PI)*pow(10,4))/pow(10,4)<<" degrees"<<endl;
      cosc = (pow(a,2)+pow(b,2)-pow(c,2))/(2*a*b);
      cout<<"angle of the triangel opposite the C edge is "<<round(((acos(cosc)*180)/M_PI)*pow(10,4))/pow(10,4)<<" degress"<<endl;
    }
      return 0;  
    }
 



