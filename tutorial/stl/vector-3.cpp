#include <iostream>
#include <bits/stdc++.h>
#include <cmath>


/*we can store data in vector
*vector is like array
*/

using namespace std;
//solve
int main(){
   vector<int>v1;//declared a vector
   v1.push_back(15);
   v1.push_back(12);
   v1.push_back(13);
   v1.push_back(1);
   v1.push_back(2);
   v1.push_back(3);

//cout << v1[0];

vector<int>::iterator it;
it=v1.begin();//reduces the time complexity
cout << *it <<endl;



   return 0;
}
