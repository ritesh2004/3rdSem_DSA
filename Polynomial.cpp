#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int coefficient;
    int exponent;
    node* next;

    node(int coeff,int exp){
        coefficient = coeff;
        exponent = exp;
        next = NULL;
    }
};

node* addPolynomial(node* poly1,node* poly2){
    node* result = new node(0,0);
    node* current = result;

    while (poly1 != NULL || poly2 != NULL)
    {
        /* code */
        int coeff1 = (poly1 != NULL) ? poly1->coefficient : 0;
        int exp1 = (poly1 != NULL) ? poly1->exponent : 0;

        int coeff2 = (poly2 != NULL) ? poly2->coefficient : 0;
        int exp2 = (poly2 != NULL) ? poly2->exponent : 0;

        if (exp1 == exp2){
            int sumCoeff = coeff1 + coeff2;
            if (sumCoeff != 0){
                current -> next = new node(sumCoeff,exp1);
                current = current -> next;
            }
            if (poly1 != NULL)
            poly1 = poly1 -> next;

            if (poly2 != NULL)
            poly2 = poly2 -> next;
        }
        else if (exp1 > exp2){
            current -> next = new node(coeff1,exp1);
            current = current -> next;
            if (poly1 != NULL)
            poly1 = poly1 -> next;
        }
        else{
            current -> next = new node(coeff2,exp2);
            current = current -> next;
            if (poly2 != NULL)
            poly2 = poly2 -> next;
        }
    }
    
    return result->next;
}

void deletePoly(node* poly){
    node* current = poly;
    while (current != NULL)
    {
        /* code */
        node* newNode = current -> next;
        free(current);
        current = newNode;
    }
    
}


void displayPolynomial(node* poly){
    while (poly != NULL)
    {
        /* code */
        cout<<poly->coefficient;
        if (poly->exponent != 0){
            cout<<"X^"<<poly->exponent;
        }

        poly = poly -> next;

        if (poly != NULL){
            cout<<" + ";
        }
    }
    cout<<endl;
}

int main(){
    node* poly1 = new node(2,3);
    poly1->next = new node(3,2);
    poly1->next->next = new node(1,1);
    poly1->next->next->next = new node(5,0);

    node* poly2 = new node(7,2);
    poly2->next = new node(-3,1);
    poly2->next->next = new node(7,0);

    cout<<"Polynomial 1: ";
    displayPolynomial(poly1);
    cout<<"Polynomial 2: ";
    displayPolynomial(poly2);

    node* result = addPolynomial(poly1,poly2);
    cout<<"Result: ";
    displayPolynomial(result);

    // Free up memory
    deletePoly(poly1);
    deletePoly(poly2);
    deletePoly(result);
}