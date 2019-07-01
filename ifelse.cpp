/*
created by Muhammad Yasir
Namefile: ifelse.cpp
how to choose condition
Date: 31.06.2019
*/

#include<iostream>
#include<string.h>

int main(void){

    std::string Name[10];
    double Grade[10];

    for (int i = 0; i<10; i++){

        std::cout<<" Input Name and value "<<i<<" : ";
        std::cin>>Name[i]>>Grade[i];
    }
    std::cout<<std::endl;
    std::cout<<" Name "<<"\t"<<" Grade "<<"\t"<<"Status"<<std::endl;
    std::cout<<"======================="<<std::endl;
    for (int i = 0; i<10; i++){

        if(Grade[i]>= 70)
        std::cout<<Name[i]<<"\t"<<Grade[i]<<"\t"<<"Pass"<<std::endl;
        else
        std::cout<<Name[i]<<"\t"<<Grade[i]<<"\t"<<"failed"<<std::endl;
    }

}
