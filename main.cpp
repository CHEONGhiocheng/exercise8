//
//  main.cpp
//  exercise8
//
//  Created by jane cheong  on 13/11/2022.
//

#include <iostream>
#include <vector>
#include <list>
#include<algorithm>
#include "mysort.h"

/*
struct mysort
{
    double num;
    mysort(double mynum){
        num = mynum;
        }
    bool operator<(const mysort & sortObj) const
    {
        return (num < sortObj.num ? num : sortObj.num);
    }
};*/

mysort::mysort(){};
mysort::~mysort(){};
void mysort::sortnumber(){
    for(int i =0;i<8;i++){
        for (int j = 0; j < 8; j++)
        {
            if(v[i] > v[j])
            {
                double s;
                s = v[i];
               v[i] = v[j];
                v[j] = s;
            }
            std::cout << v[j] <<std::endl;
         }
        break;
    }
};

int main() {
    std::vector <double> v= { -9.3,-3.8, -7.4, -0.4, 1.3, 3.9, 5.4, 8.2};
    std::cout<<"Before sorting vector : ";
        for(auto i=v.begin(); i<v.end(); i++)
        {
            std::cout<<" "<<*i;
        }
    
        std::sort(v.begin(),v.end(), [](double &a, double &b){ return a>b; });
        std::cout << "\n By lambda to sorting vector:" << std::endl;
      //  std::cout<<"\n After sorting vector : "<<std::endl;;
        for(auto i=v.begin(); i<v.end(); i++)
        {
            std::cout<<" "<<*i << '\n';
        }
    std::cout<<"\n By functor to sorting vector:" <<std::endl;
    mysort s1;
    s1.sortnumber();
  /*
    std::cout << "By functor to sorting vector:" << std::endl;
    std::list <mysort> listofmysort = { mysort(3.9),mysort(-9.3),mysort(-7.4),mysort( -3.8),mysort(-0.4),mysort(1.3),  mysort(5.4),mysort (8.2)};
    for(mysort & sortObj : listofmysort)
           std::cout<< sortObj.num <<std::endl;*/
    return 0;
}
