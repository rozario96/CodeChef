#include <iostream>

float withdraw(int x, float y)
{
    if(x % 5 == 0 && (x + 0.5) <= y)
    {
        return (y - x - 0.5);
    }
    else 
    {
        return y;
    }
}

int main()
{
    int x;
    float y;
    
    std::cin >> x;
    std::cin >> y;

    printf("%.2f", withdraw(x, y));

    return 0;
}