#include <iostream>
#include <vector>



int count_mimax(std::vector<int> vec, int max, int min);

int main(){

    int n;
    std::cin >> n;
    std::vector<int> vec(n);
    int min, max;
    std::cin >> min;
    std::cin >> max;
    for (int i = 0; i < vec.size(); i++){
        std::cin >> vec[i];
    }
    int res = count_mimax(vec, max, min);
    std::cout << res << std::endl;

    return 0;
}

int count_mimax(std::vector<int> vec, int max, int min){
    int count = 0;
    for(int i = 0; i < vec.size(); i++){
        if(vec[i]>min and vec[i]<max){
            count++;
        }
    }
    return count;
}
