void introInit() {
	_player.x = -8;
	_player.y = 38;
}

void introUpdate() {
	
	_playerSpriteUpdate();
	
	gb.display.print("Level ");
	gb.display.print(_currentLevel +1);
	
	_player.x++;
	
  // Passage à la phase de jeu
	if (_player.x >= 80) {
		gameInit();
		_state = 2;
    introInit(); // remet player à gauche hors écran
	}
	
}