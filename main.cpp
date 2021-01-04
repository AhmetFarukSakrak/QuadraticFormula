#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <cmath>
using namespace std;


void WhatsQuadraticformula()
{

    cout<<"n elementary algebra, the quadratic formula is a formula that provides the solution(s) to a quadratic equation.\n";
    cout<<"There are other ways of solving a quadratic equation instead of using the quadratic formula \n";
    cout<<"such as factoring (direct factoring, grouping, AC method), completing the square, graphing and others.\n";
}

int main()
{
        system("color f3");
        system("title Quadratic formula");
        cout<<"                     Quadratic formula\n";
        cout<<"                  1 - Quadratic formula\n";
        cout<<"                  2 - What's Quadratic formula? \n";
        cout<<"                  3 - Exit\n";
        cout<<"                  ? :       ";
        int nFirstOne =1, nSecondOne=2;
        int nTemp = nFirstOne;
        nFirstOne = nSecondOne;
        nSecondOne = nTemp;
        char ck;
        cin>>ck;
        
        switch (ck)
        {
            case '1':
            
               int main();
                system("color f5");
                break;
  
            case '2':
            WhatsQuadraticformula();
            system("color f4");
            break;


            case '3':
            
                exit(1);
                
                break;
            default:
                cout << "wrong option!!!!!" << endl;
        }
    double discriminant, x,y,z;
    cout<<"Enter the coefficients starting with a then b then c "<<endl;
    cin>>x>>y>>z;

    if(x==0.0){
        cout<<"UNDEFINED"<<endl;
        return 1;
    }

    discriminant = y*y - 4*x*z;
    double a1,a2;
    a1=(-y + sqrt(discriminant)) / (2*x);
    a2=(-y - sqrt(discriminant)) / (2*x);

    cout<<endl<<"the roots are a1 = "<<a1 <<" and a2 = "<<a2 <<endl;


    getch();
    return 0;
}
