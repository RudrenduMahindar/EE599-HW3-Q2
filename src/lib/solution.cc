#include "solution.h"
#include <vector>
#include <map>

using namespace std;

vector<int> Solution::VectorIndices(vector<int>& v,int& n) 
{ //return "**** Hello World ****"; 
  map<int,int> m;
  pair<int,int> p;
  int i=0,temp;
  vector<int> v1={};
  for(auto it=v.begin();it!=v.end();it++)
  {
    p.first=*it;
    p.second=i++;
    m.insert(p);
  }
  for(auto it=m.begin();it!=m.end();it++)
  {
    temp=(*it).first;
    auto f=m.find(n-temp);
    if(f!=m.end())
    {
      v1.push_back((*it).second);
      v1.push_back((*f).second);
      return v1;
    }
  }
  return v1;
}

