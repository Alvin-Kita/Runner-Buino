// ---------------
// USER INTERFACE
// ------------------

int _meterCounter;

void uiGameUpdate() {
	
	for (int i=0; i<_player.life; i++) {
		gb.display.drawImage(1+ i*8, 0, _spriteHeart);
	}

  _meterCounter++;
  if(_meterCounter == 8){
    _player.score++;
    _meterCounter = 0;
  }

  gb.display.setColor(2);
  gb.display.setCursor(40,1);
  gb.display.print(_player.score);
  gb.display.print("m");
	
}