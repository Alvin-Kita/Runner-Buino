#include <Gamebuino-Meta.h>   
#include "sprites.h"
#include "playerFunctions.h"

int _state = 1; // TODO: le repasser à 0


// Valeur max de l'écran 80x64
const int X_SCREEN_MAX = 78;
const int Y_SCREEN_MAX = 62;

void setup() {
  gb.begin();
}

void loop() {

  while(!gb.update());
  gb.display.clear();
  
  // --------------------------------------------
  // Switch en fonction de l'écran _state actuel
  // --------------------------------------------

  switch (_state) {
    
    case 0: //--- ECRAN D'ACCEUIL
      // Code écrand'acceuil
      break;

    case 1: //--- BEFORE THE GAME
      // Code du before
      break;
    
    case 2: //--- LE JEU
      // Code du jeu
      
      break;
    
    case 3: //--- LA PAUSE
      // pause
      break;

    case 4: //--- PENDANT DES DEGATS
      // Code qui fait mal
      break;

    case 5: //--- FIN DE PARTIE
      // Code de fin de partie
      break;
  }
}
