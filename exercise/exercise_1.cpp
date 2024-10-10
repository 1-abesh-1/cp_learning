//sales=$95000
//state tax=4%
//county tax=2%
//find out state tax county tax and total tax
#include <iostream>
//solve
int main(){
    double sales=95000;
    double state_tax=sales*4/100;
    double county_tax=sales*2/100;
    
    std :: cout << "state_tax"<<state_tax<<std :: endl; //state tax
    std:: cout << "county_tax"<<county_tax<< std::endl;//county tax
    std::cout <<"total tax"<<state_tax+county_tax<<std::endl;//totala tax

}
