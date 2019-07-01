/*
created by Muhammad Yasir
Namefile: cal_c.cpp
calculate number
Date: 31.06.2019
*/

#include<iostream>


double add(double, double);
double sub(double, double);
double div(double, double);
double mul(double, double);

int main(void){

    char op;
    double result, operand1, operand2;

    std::cout<<"<<=======CALCULATOR========>>"<<std::endl;
    std::cout<<"=============================="<<std::endl;
    std::cout<<"First Operand "<<"|operator|"<<" Second Operand"<<std::endl;
    std::cin>>operand1>>op>>operand2;

    switch(op){

        case '+' :
                    result = add(operand1, operand2);
                    break;
        case '-' :
                    result = sub(operand1, operand2);
                    break;
        case '/' :
                    result = div(operand1, operand2);
                    break;
        case '*' :
                    result = mul(operand1, operand2);
                    break;
        default  :
                    std::cout<<"operator invalid"<<std::endl;
                    break;
    }

    std::cout<<"Result : "<<result<<std::endl;
}
double add (double a, double b){

    return a+b;
}
double sub (double a, double b){

    return a-b;
}
double div (double a, double b){

    return a/b;
}
double mul(double a, double b){

    return a*b;
}
