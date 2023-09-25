#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double sideL1, sideL2, sideE1, sideE2, fib[46];

// typedef struct Letter{
//     double side1;
//     double side2;
// } letter_t;
// typedef letter_t* LETTER;

// typedef struct Envelope {
//     double side1;
//     double side2;
// } envelope_t;
// typedef envelope_t* ENVELOPE;

void swap(double* sideL1, double*sideL2){
    double temp = *sideL1;
    *sideL1 = *sideL2;
    *sideL2 = temp;
}

int isFit(double sideL1, double sideL2, double sideE1, double sideE2 ){
    if (sideL1 > sideE1 || sideL2 > sideE2){ 
        return 0;
    }
    return 1;
}

int fold (double sideL1, double sideL2, double sideE1, double sideE2, unsigned int cnt){
    if ((sideL1 > sideL2 && sideE2 > sideE1)) swap (&sideL1, &sideL2);
    else if ((sideL2 > sideL1 && sideE1 > sideE2)) swap (&sideL1, &sideL2);
    if (sideL1 <= sideE1 && sideL2 <= sideE2) return cnt;
    

    if (sideL1 > sideE1) {
        ++cnt;
        sideL1 /= 2;
        fold (sideL1, sideL2, sideE1, sideE2, cnt);
    }
    
    else if (sideL2 > sideE2) {
        ++cnt;
        sideL2 /= 2;
        fold (sideL1, sideL2, sideE1, sideE2, cnt);
    }
    
}

int main(void){
    // LETTER letter = (LETTER)malloc(sizeof (letter_t));
    // ENVELOPE envelope = (ENVELOPE)malloc(sizeof (envelope_t));
    
    scanf("%lf %lf %lf %lf", &sideL1, &sideL2, &sideE1, &sideE2);
    unsigned int counter = fold (sideL1, sideL2, sideE1, sideE2, 0);
    printf ("%d\n", counter);
    return 0;
}