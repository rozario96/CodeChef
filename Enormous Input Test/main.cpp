#include <iostream>
#include <vector>

int enormous(int n, int k)
{
    int count = 0;
    std::vector<int> t;

    for(int i = 0; i < n; i++)
    {
        int num;
        std::cin >> num;
        t.push_back(num);
    }

    for(int i = 0; i < n; i++)
    {
        if(t[i] % k == 0) count++;
    }

    return count;
}

int main()
{
    int n, k;

    std::cin >> n;
    std::cin >> k;

    std::cout << enormous(n, k);

    return 0;
}