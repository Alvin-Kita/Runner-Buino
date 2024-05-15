// ---------------
// USER INTERFACE
// ------------------

int _meterCounter;

void uiGameUpdate() {
	
  // Life counter
	for (int i=0; i<_player.life; i++) {
		gb.display.drawImage(1+ i*8, 0, _spriteHeart);
	}

  // Score counter
  _meterCounter++;
  if(_meterCounter == 8){
    _player.score++;
    _meterCounter = 0;

    // Patch game design - Tous les 100m, on change de décor :
    if (_player.score % 100 == 0) {
      _currentLevel++;
      if (_currentLevel == 3) {
        _currentLevel = 0;
      }
    }

  }
  // Score display
  gb.display.setColor(2);
  gb.display.setCursor(40,1);
  gb.display.print(_player.score);
  gb.display.print("m");
	
}