#include <iostream>
#include <vector>

bool has_val(int val, std::vector<int> v);

// attenzione questo codice non funziona per niente e non so perché


int main(){
    std::vector<int> v;
    int val, n;
    std::cin >> val;

    do{
      std::cin >> n;
      v.push_back(n);
      bool check = has_val(val, v);
      if (check){
        std::cout << "Vero" << std::endl;
      }else{
        std::cout << "Falso" << std::endl;
      }
    }while(n!=0);

    return 0;

}

bool has_val(int val, std::vector<int> v){
  for(int i = 0; i < v.size(); i++){
    if(v[i] == val){
      return true;
    }
  }
  return false;
}