#include <bits/stdc++.h>
using namespace std;

// Loop macros
#define FOR(i, j, k) for(int i=j; i<k; i++)
#define FORE(i, j, k) for(int i=j; i<=k; i++)
#define DFOR(i, j, k) for(int i=j; i>k; i--)
#define DFORE(i, j, k) for(int i=j; i>=k; i--)

//for vectors
#define pb push_back
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;

// bit masking
#define BIT(x,i) (x&(1<<i))  //select the bit of position i of x
#define LOWBIT(x) ((x)&((x)^((x)-1))) //get the lowest bit of x
#define HBIT(msb,n) asm("bsrl %1,%0" : "=r"(msb) : "r"(n)) //get the highest bit of x, maybe the fastest

// container output streams
template <typename T1, typename T2>
inline std::ostream& operator << (std::ostream& os, const std::pair<T1, T2>& p)
{
  return os << "(" << p.first << ", " << p.second << ")";
}
template<typename T>
inline std::ostream &operator << (std::ostream & os,const std::vector<T>& v)
{
  bool first = true;
  os << "[";
  for(unsigned int i = 0; i < v.size(); i++)
  {
    if(!first)
      os << ", ";
    os << v[i];
    first = false;
  }
  return os << "]";
}
template<typename T>
inline std::ostream &operator << (std::ostream & os,const std::set<T>& v)
{
  bool first = true;
  os << "[";
  for (typename std::set<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
  {
    if(!first)
      os << ", ";
    os << *ii;
    first = false;
  }
  return os << "]";
}
template<typename T1, typename T2>
inline std::ostream &operator << (std::ostream & os,const std::map<T1, T2>& v)
{
  bool first = true;
  os << "[";
  for (typename std::map<T1, T2>::const_iterator ii = v.begin(); ii != v.end(); ++ii)
  {
    if(!first)
      os << ", ";
    os << *ii ;
    first = false;
  }
  return os << "]";
}

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef unsigned int ui;
typedef unsigned short us;
const double PI(3.1415926535897932384626);

#ifdef DEBUG
     #define debug(args...)            {dbg,"DEBUG:",args; cerr<<endl;}
#else
    #define debug(args...)              // Just strip off all debug tokens
#endif

struct debugger
{
  template<typename T> debugger& operator , (const T& v)
  {
    cerr<<v<<" ";
    return *this;
  }
} dbg;


int main() 
{


  return 0;
}

