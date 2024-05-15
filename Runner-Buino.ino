#include <Gamebuino-Meta.h>   

#include "sprites.h"
#include "variables.h"
#include "acceuil.h"
#include "background.h"
#include "game.h"
#include "intro.h"
#include "player.h"
#include "ui.h"



void setup() {
  gb.begin();
	gb.display.setPalette(PALETTE);
	// initialisation
  obstaclesInit();
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
      acceuilUpdate();
      break;

    case 1: //--- INTRO
      // Code de l'intro
      introUpdate();
			break;
    
    case 2: //--- LE JEU
      // Code du jeu
      backgroundUpdate();
			playerUpdate();
			gameCheckCollision();
			uiGameUpdate();
      break;

    case 3: //--- FIN DE PARTIE
      // Code de fin de partie
      gameOverUpdate();
      break;
  }
}
