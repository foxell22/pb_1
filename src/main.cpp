//==============================================================================
///
/// @file
/// @brief Программа для робота Карела и стартовая функция
///
//==============================================================================


#include "karel.h"


//==============================================================================
/// Программа для робота Карела
///
void KarelProgram() {int p = 0;

TurnLeft();

while(FrontIsClear() == true){
    TurnLeft();
    TurnLeft();
    TurnLeft();
    while(FrontIsClear() == true){
        while(BeepersPresent() == true){
            PickBeeper();
            p += 2;
        }
        for(int i = 0; i < p; i++){
            PutBeeper();
        }
        p = 0;
        Move();
    }
    while(BeepersPresent() == true){
        PickBeeper();
        p += 2;
    }
    for(int i = 0; i < p; i++){
        PutBeeper();
    }
    p = 0;
    TurnLeft();
    if (FrontIsClear() == true){
        Move();
        TurnLeft();
       while(FrontIsClear() == true){
            Move();
        }
    }
    TurnLeft();
    TurnLeft();
    TurnLeft();
}
TurnLeft();
TurnLeft();
TurnLeft();
while(FrontIsClear() == true){
        while(BeepersPresent() == true){
            PickBeeper();
            p += 2;
        }
        for(int i = 0; i < p; i++){
            PutBeeper();
        }
        p = 0;
        Move();
    }
    while(BeepersPresent() == true){
        PickBeeper();
        p += 2;
    }
    for(int i = 0; i < p; i++){
        PutBeeper();
    }
/// @todo Добавить программу для Карела

}


//==============================================================================
/// Стартовая функция
///
int main() {
    LoadWorld("worlds/Double_beepers_02.w");
    KarelProgram();
    Finish();
    return 0;
}
