#include <iostream>
#include <vector>

int provolone(const std::vector<int>& vec, std::vector<int> &copy, int a, int b, int &conta);


// NON si sa perché conta è 1+




int main(){

    int n, a, b, conta = 0;
    std::cout << "dimensione vec: ";
    std::cin>>n;
    std::vector<int> v(n);
    std::vector<int> copy;
    for(int i=0;i<v.size();i++){
        std::cout<<"Valore per valore a locazione " << i << " : ";
        std::cin>>v[i];
    }

    std::cout<<"val min: ";
    std::cin>>a;

    std::cout<<"val max: ";
    std::cin>>b;


    provolone(v,copy,a,b,conta);
    std::cout<<"conta: "<<conta<<std::endl;

    return 0;
}

int provolone(const std::vector<int>& vec, std::vector<int> &copy, int a, int b, int &conta){
    for(int i=0; i<=vec.size(); i++){
        if(vec[i]>a and vec[i]<b){
            copy.push_back(vec[i]);
            conta++;
        }
    }
    return conta;
}