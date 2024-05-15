#include <Gamebuino-Meta.h>   
#include "sprites.h"
#include "variables.h"
#include "intro.h"
#include "game.h"


void setup() {
  gb.begin();
	gb.display.setPalette(PALETTE);
	// initialisation
	introInit();
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

    case 1: //--- INTRO
      // Code de l'intro
      introUpdate();
			break;
    
    case 2: //--- LE JEU
      // Code du jeu
      gameUpdate();
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
