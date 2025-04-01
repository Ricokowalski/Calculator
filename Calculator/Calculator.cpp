#include <iostream>
using namespace std;

typedef enum calcOp{
    add,
    sub,
    mult,
    divi
} calcOperations;

struct CalculationStructure {
    unsigned int pos;
    int val_1, val_2, res;
    calcOperations calcOp;
};

typedef struct CalculationStructure CalculationStructureType;

CalculationStructureType CalculationMemory = {};

void calculate_result(CalculationStructureType* data) {

    switch (data->calcOp)
    {
    case add:
        data->res = data->val_1 + data->val_2;
        break;
    case sub:
        data->res = data->val_1 - data->val_2;
        break;
    case mult:
        data->res = data->val_1 * data->val_2;
        break;
    case divi:
        data->res = data->val_1 / data->val_2;
        break;
    default:
        cout << "Fehler aufgetreten! Berechnungsoperator stimmt nicht!";
        break;
    }
}

int findFreeMemory(CalculationStructureType* memory) {
    for (int i = 0; i <= (sizeof(memory)/sizeof(CalculationStructureType); i++) {
        if (*memory[i] == NULL) {
            return i;
        }
    }
}

void init_new_CalcStruct() {

}

int main()
{
    
}

