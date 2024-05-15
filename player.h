const int xPosition = 6;

void gameInit() {
	_player.x = -8;
	_player.y = 38;
}

void playerUpdate() {
	
  // Apparition du player
  if (_player.x < xPosition) {
    _player.x++;
  }
  
  _playerSpriteUpdate();

  ;
}