// ---------------
// USER INTERFACE
// ------------------


void uiGameUpdate() {
	
	for (int i=0; i<_player.life; i++) {
		gb.display.drawImage(1+ i*8, 0, _spriteHeart);
	}
	
}