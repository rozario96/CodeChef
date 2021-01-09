#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t, a, b;
    vector<int> sum;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> a >> b;
        sum.push_back(a + b);
    } 

    for(int i = 0; i < sum.size(); i++)
    {
        cout << sum[i] << endl;
    }

    return 0;
}