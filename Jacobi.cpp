#include<iostream>
#include<iomanip>
#include<math.h>
/* In this example we are solving
   8x - 3y + 2z = 20
   4x + 11y - z = 33
   6x + 3y - 12z = 35
*/
/* Arranging given system of linear
   equations in diagonally dominant
   form:
   8x - 3y + 2z = 20
   4x + 11y - z = 33
   6x + 3y - 12z = 35
*/
/* Equations:
   x = (20+3y-2z)/8
   y = (33-4x+z)/11
   z = (-35+6x+3y)/12
*/
/* Defining function */
#define f1(x,y,z)  (20+3*y-2*z)/8
#define f2(x,y,z)  (33-4*x+z)/11
#define f3(x,y,z)  (-35+6*x+3*y)/12
using namespace std;
int main()
{
 float x0=0, y0=0, z0=0, x1, y1, z1, e1, e2, e3, e;
 int step=1;
 cout<< setprecision(6)<< fixed;
 cout<<"Correct Up To Decimal: ";
 cin>>e;
 cout<< endl<<"Count\tx\t\ty\t\tz"<< endl;
 do
 {
  x1 = f1(x0,y0,z0);
  y1 = f2(x0,y0,z0);
  z1 = f3(x0,y0,z0);
  cout<< step<<"\t"<< x1<<"\t"<< y1<<"\t"<< z1<< endl;
  e1 = fabs(x0-x1);
  e2 = fabs(y0-y1);
  e3 = fabs(z0-z1);
  step++;
  x0 = x1;
  y0 = y1;
  z0 = z1;
 }
 while(e1>e && e2>e && e3>e);
 cout<< endl<<"Solution: x = "<< x1<<", y = "<< y1<<" and z = "<< z1;
 return 0;
}
