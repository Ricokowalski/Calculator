#include <iostream>

typedef enum calcOp{
    add,
    sub,
    mult,
    div
} calcOperations;

struct CalculationStructure {
    int val_1, val_2, res;
    calcOperations calcOp;
};

typedef struct CalculationStructure CalculationStructureType;

CalculationStructureType CalculationMemory = {};



int main()
{
    
}

