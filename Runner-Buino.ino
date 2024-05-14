#include <Gamebuino-Meta.h>   
#include "sprites.h"

int _state = 1; // TODO: le repasser à 0

// déclaration des sprites
Image _spriteHero1(IMAGE_DATA_HERO1);
Image _spriteHero2(IMAGE_DATA_HERO2);
Image _spriteCactusLarge(IMAGE_DATA_CACTUS_LG);
Image _spriteCactusSmall(IMAGE_DATA_CACTUS_SM);
Image _spriteForeground(IMAGE_DATA_FOREGROUND);
Image _spriteHeart(IMAGE_DATA_HEART);
Image _spriteHole(IMAGE_DATA_HOLE);
Image _spriteSky(IMAGE_DATA_SKY);


// Valeur max de l'écran 80x64
const int X_SCREEN_MAX = 78;
const int Y_SCREEN_MAX = 62;

struct Player {
  float x;
  float y;
  int score;
  int life;
  int timer;
  bool isJumping;
  bool isDoubleJumping;
  bool isCooldown;
};

Player player;


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
