#include <iostream>

using namespace std;

struct NodStiva {
    char opr;
    NodStiva* next;
};

struct NodCoada {
    int opd;
    char opr;
    NodCoada* next;
};

NodStiva* push(NodStiva* vf, char c) {
    NodStiva* nou = new NodStiva;
    nou->opr = c;
    nou->next = vf;
    return nou;
}

NodStiva* pop(NodStiva* vf, char* c) {
    if (vf) {
        *c = vf->opr;
        NodStiva* t = vf;
        vf = vf->next;
        delete t;
        return vf;
    }
    return vf;
}

NodCoada* put(NodCoada* c, int v, char o) {
    NodCoada* nou = new NodCoada;
    nou->opd = v;
    nou->opr = o;
    nou->next = NULL;
    if (!c)
        return nou;
    else {
        NodCoada* t = c;
        while (t->next)
            t = t->next;
        t->next = nou;
        return c;
    }
}


int prioritate(char c) {
    switch (c) {
    case '(':
        return 1;
    case ')':
        return 2;
    case '+':
    case '-':
        return 3;
    case '*':
    case '/':
        return 4;
    default:
        return 5;
    }
}

void main() {
    NodStiva* stack = NULL;
    NodCoada* queue = NULL;
    char ExprInfix[100], SubExpr[100], o;
    int vb, vb_op = 0;

    cout << "Introduceti expresia matematica in forma infixata: ";
    cin >> ExprInfix;

    //algoritmul de transformare infixata -> postfixata cu operanzi \
intregi fara semn
    int i = 0;

    //extragere token operand/operator
    while (ExprInfix[i] != '\0') {
        int k = 0;
        if (ExprInfix[i] > 47 && ExprInfix[i] < 58) {
            while (ExprInfix[i] > 47 && ExprInfix[i] < 58) {
                SubExpr[k] = ExprInfix[i];
                k++;
                i++;
            }
            SubExpr[k] = '\0';
            vb = 1;
        }
        else {
            SubExpr[k] = ExprInfix[i];
            SubExpr[k + 1] = '\0';
            i++;
            vb = 0;
        }

        if (vb) {
            o = 0;
            queue = put(queue, atoi(SubExpr), o);
        }
        else {
            if (SubExpr[0] == '(') {
                stack = push(stack, SubExpr[0]);
            }
            else {
                if (SubExpr[0] == ')') {
                    stack = pop(stack, &o);
                    while (o != '(') {
                        queue = put(queue, 0, o);
                        stack = pop(stack, &o);
                    }
                }
                else {
                    if (prioritate(SubExpr[0]) < 5) {
                        if (stack) {
                            while (stack && prioritate(stack->opr) > prioritate(SubExpr[0])) {
                                stack = pop(stack, &o);
                                queue = put(queue, 0, o);
                            }
                        }

                        stack = push(stack, SubExpr[0]);
                    }
                    else {
                        cout << "Operator incorect introdus!";
                        vb_op = 1;
                    }
                }
            }
        }
    }

    while (stack) {
        stack = pop(stack, &o);
        queue = put(queue, 0, o);
    }

    //afisarea expresiei in scriere postfixata
    NodCoada* t;
    if (!vb_op) {
        t = queue;
        while (t) {
            if (t->opd)
                cout << t->opd << " ";
            else
                cout << t->opr << " ";
            t = t->next;
        }
    }

    //dezalocare memorie heap alocata pentru structura coada
    while (queue) {
        t = queue;
        queue = queue->next;
        delete t;
    }

}