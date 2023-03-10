#include "test.hpp"

bool equals(int a, int b){
    if(a=b){
        return true;
    }
    return false;
}

bool nonequals(int a, int b) {
    return !equals(a,b);
}