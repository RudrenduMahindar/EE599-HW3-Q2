#include "src/lib/solution.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  Solution s;
  int i=0,n=5;
  vector<int> v = {1,4,3,2};
  vector<int> v1 = s.VectorIndices(v,n);
  cout<<"[";
  for(auto it=v1.begin();it!=v1.end();it++)
  {
    cout<< *it;
    if(i!=(v1.size()-1))
      cout<<",";
    i++;  
  }
  cout<<"]"<<endl;


  return EXIT_SUCCESS;
}