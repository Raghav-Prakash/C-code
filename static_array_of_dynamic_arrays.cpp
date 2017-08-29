#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
  int N;
  int Q;
  cin >> N >> Q;

  vector<int> static_array[N]; // static array of N dynamic arrays.
  for(int i = 0; i < N; i++)
  {
    int var_len_array_size;
    cin >> var_len_array_size;

    vector<int> sub_array;

    for(int j = 0; j < var_len_array_size; j++)
    {
      int elem;
      cin >> elem;

      sub_array.push_back(elem);
    }

    static_array[i] = sub_array;
  }

  while(Q > 0)
  {
    int static_array_index;
    int dynamic_array_index;

    cin >> static_array_index >> dynamic_array_index;

    cout << static_array[static_array_index].at(dynamic_array_index) << endl;

    Q--;
  }

  return 0;
}
