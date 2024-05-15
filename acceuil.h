bool startGame;

// Temps de stance avant l'écran suivant
int cptStart;
const int START_NB_FRAME = 0; // nombre de frame après avoir appuyer sur le bouton, avant de passer à l'intro

//clignotement du bouton text de start
int cptBlink = 0;
const int frameOn = 16; // Frame où l'on affiche le titre
const int frameOff = 12; // frame où l'on affiche pas le titre
int frameBlink = frameOn;
int showBlink = 1;

void acceuilUpdate() {
  // -------------------------
  // Title
  // ------------------------- 
  gb.display.setCursor(20, 20);
  gb.display.println("E.T RUNNER");

  // -------------------------
  // Press A
  // ------------------------- 
  gb.display.setFontSize(1.0);
  gb.display.setCursor(25, 30);
  if (showBlink > 0) {
    gb.display.print("press A");
  }

  if (cptBlink == frameBlink) {
    cptBlink = 0;
    showBlink = -showBlink;
    switch (frameBlink) {
      case frameOff:
        frameBlink = frameOn;
        break;
      case frameOn:
        frameBlink = frameOff;
        break;
    }
  }

  cptBlink++;
  // -------------------------
  // Crédits
  // ------------------------- 
  gb.display.setCursor(4, 57);
  gb.display.println("Game by : AK & JCK");

  if ( (gb.buttons.repeat(BUTTON_A, 0) || (gb.buttons.repeat(BUTTON_B, 0))) && !startGame ) {
    cptStart = 0;
    startGame = true;
  }

  if (startGame) {
    if (cptStart >= START_NB_FRAME) {
      _state = 1;
    } else {
      cptStart++;
    }
  }
}