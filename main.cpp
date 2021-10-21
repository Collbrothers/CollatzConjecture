/*
 * Author: Aron, K (Collbrothers)
 *
 */

#include <iostream>
#include <vector>


int main() {
    std::vector<int> defaultArr = {4,2,1};
    /* for (Variable Integer, Max long long int, increment */
    for (long long int n = 92233720368547758; n < 9223372036854775807; n++) {
        std::vector<int> arr;
        long long int defaultValue = n;
        while(n != 1) {
            if ( n % 2 == 0) {
                n = n / 2;
            }
            else {
                n = n * 3;
                n++;
            }
            std::cout << n << std::endl;
            if(n <= 0) exit(1);
            if(arr.size() == 3) arr.erase(arr.begin());
            arr.push_back(n);
        }
        if(arr != defaultArr) {
            std::cout << "Unrecognized finished product:" << std::endl;
            for (int i : arr) {
                std::cout << i << std::endl;
            }
            std::cout << "Integer used:" << defaultValue << std::endl;
            exit(200);
        }else {
            std::cout << "Expected finished product :(";
            exit(500);
        }
     }
}

/*
 If num is odd: num = (num * 3) + 1
 If num is even: num = num / 2
 */