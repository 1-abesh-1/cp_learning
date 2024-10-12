
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
   v1.push_back(10);
   v1.push_back(12);
   v1.push_back(13);
   vector<int>v2;//declaring another vecctor
   v2.push_back(1);
   v2.push_back(2);
   v2.push_back(3);
swap(v1,v2);//swapping two vector
cout << v1[0];


   
sort(v1.begin(),v1.end());//sorting
reverse(v1.begin(),v1.end());//reversing

cout << v1[0];



   return 0;
}
