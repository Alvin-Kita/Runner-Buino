void introInit() {
	_player.x = -8;
	_player.y = 38;
}

void introUpdate() {
	
	_player.timer++;
	if (_player.timer == 8) {
		_player.timer = 0;
	}
	
	gb.display.print("Level ");
	gb.display.print(_currentLevel +1);
	
	_player.x++;
	
	if (_player.x >= 80) {
		_state = 2;
	}
	
	if (_player.timer < 4) {
		gb.display.drawImage(_player.x, _player.y, _spriteHero1);
	} else {
		gb.display.drawImage(_player.x, _player.y, _spriteHero2);
	}
}