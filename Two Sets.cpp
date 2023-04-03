#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    size_t n;
    size_t set1 = 0;
    size_t set2 = 0;
    std::vector<int> seq1;
    std::vector<int> seq2;
    std::cin >> n; //7
    while (n > 0){
        if (set1 <= set2){
            set1 += n; //7 4 2 1
            seq1.push_back(n); //7

        }else{
            set2 += n; //6 5 3
            seq2.push_back(n);
        }
        n-=1; //6 5 4 3 2 1 
    }

    if (set1 == set2){
        std::cout << "YES" << '\n';
        std::reverse(seq1.begin(), seq1.end());
        std::reverse(seq2.begin(), seq2.end());
        std::cout << seq1.size() << '\n';
        for (auto i:seq1){
            std::cout << i << ' ';
        }
        std::cout << '\n';

        std::cout << seq2.size() << '\n';
        for (auto i:seq2){
            std::cout << i << ' ';
        }
    }else{
        std::cout << "NO";
    }

}
