void introInit() {
	_player.x = -8;
	_player.y = 38;
}

void introUpdate() {
	
	_playerSpriteUpdate();
	
  gb.display.setCursor(24,16);
	gb.display.print("Get ready");
	
	_player.x++;
	
  // Passage à la phase de jeu
	if (_player.x >= 80) {
		gameInit();
	}
	
}