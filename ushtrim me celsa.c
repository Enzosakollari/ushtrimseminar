#include <stdio.h>
#include <stdbool.h>

int main(){
    int totalThrows, chosenGate;
    int throwCounter = 0, yToggleCounter = 0, totalPoints = 0;
    bool gateAState = true, gateBState = true, gateCState = true;

    printf(“Please enter the number of throws: “);
    scanf(“%d”, &totalThrows);

    while(throwCounter < totalThrows){
        printf(“Zgjidhni porten %d: 0.A   1.B:  “, throwCounter + 1);
        scanf(“%d”, &chosenGate);
        while((chosenGate != 0) && (chosenGate != 1)){
            printf(“Please enter a valid option ! Press 0 or 1: “);
            scanf(“%d”, &chosenGate);
        }

if(chosenGate == 0){
            // Gate A
            if(gateAState){
                gateAState = false;
            } else if(!gateAState && gateBState){
                gateAState = true;
                yToggleCounter++;
                if(yToggleCounter % 2 == 0){
                    gateBState = !gateBState;
                }
            } else if(!gateAState && !gateBState){
                gateAState = true;
                yToggleCounter++;
                totalPoints++;
                if(yToggleCounter % 2 == 0){
                    gateBState = !gateBState;
                }
            }
        } else {
            //  Gate B
            if(!gateCState){
                gateCState = true;
                totalPoints++;
            } else if(gateCState && gateBState){
                gateCState = false;
                yToggleCounter++;
                if(yToggleCounter % 2 == 0){
                    gateBState = !gateBState;
                }

} else if(gateCState && !gateBState){
                gateCState = false;
                yToggleCounter++;
                totalPoints++;
                if(yToggleCounter % 2 == 0){
                    gateBState = !gateBState;
                }
            }
        }
        throwCounter++;
    }
    printf(“Your total points are : %d\n”, totalPoints);
    return 0;
}
