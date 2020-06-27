#include <algorithm>
#include <iostream>
#include <vector>

int sockMerchant(int n, std::vector<int> ar)
{
    std::sort(ar.begin(), ar.end());
    for(int j = 0; j < ar.size();j++)
    {
        std::cout << ar[j] << std::endl;
    }
    
    int pair = 0;
    for (int i = 0; i < ar.size() - 1;)
    {
        if (ar[i] == ar[i + 1])
        {
            //matching pair
            pair++;
            i = i + 2;
        }
        else
        {
            i++;
        }

    }
    return pair;
}

int main() {

    std::vector<int> arr = { 10,20,20,10,10,30,50,10,20};
    int n = 9;

    std::cout << sockMerchant(n, arr) << std::endl;


	return 0;

}