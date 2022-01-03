#include <iostream>
using namespace std;

template <class T>

class Demo
{
  T x, y, sum;

public:
  Demo(T a, T b)
  {
    x = a;
    y = b;
  }

  T add()
  {
    sum = x + y;

    return (sum);
  }
};

int main()
{
  Demo<int> d1(5, 10);

  cout << "Integer Addition: " << d1.add();

  Demo<float> d2(5.4f, 0.5f);

  cout << endl << "Floating Point Addition: " << d2.add();

  return 0;
}
