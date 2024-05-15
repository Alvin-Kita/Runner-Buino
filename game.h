void drawBg() {
	
	// Dessin du ciel
  gb.display.setColor(13);
  gb.display.fillRect(0,0,80,24);
	
	// Dessin du background
  for (int i=0; i<12; i++) {
    gb.display.drawImage(i*8 -_scrollingTimer, 24, BACKGROUNDS[_currentLevel]);  
  }
	
	// Dessin du sol
  gb.display.setColor(7);
  gb.display.fillRect(0,48,80,64);
  
	// Foreground (2x plus rapide que le background)
  for (int i=0; i<8; i++) {
    gb.display.drawImage(i*16 -(_scrollingTimer *2), 56, _spriteForeground);
  }
}

void gameUpdate() {
	
	// Timer pour l'animation du background
	_scrollingTimer++;
	if (_scrollingTimer == 16) {
		_scrollingTimer = 0;
	}
	
	// Affichage du background
	drawBg();
	
}