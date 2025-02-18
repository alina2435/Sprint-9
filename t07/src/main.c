#include "calculator.h"
#include "minilibmx.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        mx_printerr("usage: ./calc [operand1] [operation] [operand2]\n");
        return 1;
    }
    
    int start = (argv[1][0] == '-') ? 1 : 0;
    for (int i = start; argv[1][i]; i++) {
        if (!mx_isdigit(argv[1][i])) {
            mx_printerr("error: invalid number\n");
            return 1;
        }
    }
    
    start = (argv[3][0] == '-') ? 1 : 0;
    for (int i = start; argv[3][i]; i++) {
        if (!mx_isdigit(argv[3][i])) {
            mx_printerr("error: invalid number\n");
            return 1;
        }
    }
    
    int operand1 = mx_atoi(argv[1]);
    int operand2 = mx_atoi(argv[3]);
    
    char operation = argv[2][0];
    t_operation operations[] = {
        {'+', mx_add},
        {'-', mx_sub},
        {'*', mx_mul},
        {'/', mx_div},
        {'%', mx_mod},
    };
    
    int found = 0;
    for (int i = 0; i < 5; i++) {
        if (operations[i].op == operation) {
            found = 1;
            if ((operation == '/' || operation == '%') && operand2 == 0) {
                mx_printerr("error: division by zero\n");
                return 1;
            }
            int result = operations[i].f(operand1, operand2);
            mx_printint(result);
            mx_printstr("\n");
            break;
        }
    }
    
    if (!found) {
        mx_printerr("error: invalid operation\n");
        return 1;
    }
    
    return 0;
}

