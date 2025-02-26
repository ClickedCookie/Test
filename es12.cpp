#include <iostream>
#include <vector>

void reverseVec(std::vector<int>& v);

int main() {
    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < vec.size(); ++i){
        std::cin >> vec[i];
    }

    reverseVec(vec);
    for (int i = 0; i < n; ++i) {
        std::cout << vec[i] << " ";
    }

    return 0;
}

void reverseVec(std::vector<int>& v) {
    int left = 0, right = v.size() - 1;
    while (left < right) {                                // Continua il while fino a che sinistra non è minore di destra
        std::swap(v[left], v[right]);          // Scambia gli elementi delle posizioni sinistra e destra
        left++;                                         // Muove il puntatore sinistra verso destra
        right--;                                       // Mouve quello di destra verso sinistra
    }
}

