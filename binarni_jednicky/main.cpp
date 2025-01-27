#include <iostream>
using namespace std;
/*
Na standardním vstupu se nachází řada celočíselných hodnot typu long long int.
Vypište ze vstupní řady dvě hodnoty, které jsou v paměti počítače zobrazeny s největším počtem binárních jedniček.
*/

 int CountOnes(long long int x) {
     int count = 0;
     while (x>0) {
         count+= x&1;
         x>>=1;
     }
     return count;
 }

int main() {
     long long int number;
     long long int max1=0, max2=0;
     int ones1=-1,ones2=-1;

     while(cin>>number) {
         int ones=CountOnes(number);

         if(ones>max1) {
             ones2=ones1;
             max2=max1;

             max1=number;
             ones1=ones;
         }else if (ones>max2) {
             ones2=ones;
             max2=number;
         }
     }
     if(ones1 == -1 && ones2 == -1) {
         cout<<"error"<<endl;
         return 1;
     }
 cout<<"zadejte cisla"<<endl;
     cout<<max1<<"(with"<<ones1<<")ones"<<endl;
     cout<<max2<<"(with"<<ones2<<")ones"<<endl;
}
