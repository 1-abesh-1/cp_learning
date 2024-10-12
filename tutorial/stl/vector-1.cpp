#include <iostream>
#include <bits/stdc++.h>
#include <cmath>


/*we can store data in vector
*vector is like array
*/

using namespace std;
//solve
int main(){
   vector<int>v;//declared a vector
v.push_back(1);//we assigned a value in the vector v. v[0]
v.push_back(2);//we assigned a value in the vector v. v[1]
v.push_back(3);//we assigned a value in the vector v. v[2]
v.push_back(4);//we assigned a value in the vector v. v[3]
v.push_back(5);//we assigned a value in the vector v. v[4]
v.push_back(6);//we assigned a value in the vector v. v[5]
cout << v[0]<<endl;//if not in range it will through a garbage value
cout << v.at(1)<<endl;//but in this case it will not do that. it will gave a warning
cout << v.size()<<endl;//it will declare size
cout << v.front()<<endl;//it will print the first value of vector
cout << v.back()<<endl;//it will print the last value

v.pop_back();//erase the last value
cout << v.at(3);
v.erase(v.begin()+1);
v.erase(v.begin(),v.end());
v.clear();//all values are removed
cout << v.size();
cout << v.empty();//returns 1= true or 0=false

   return 0;
}
