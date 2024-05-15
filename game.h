// ---------------------------
// Méthodes de GAME (state 2)
// ---------------------------

void gameInit() {
	_player.life = 3;
	_player.score = 0;
  _player.x = -8;
	_player.y = 38;
	obstaclesInit();
  _currentLevel = random(0,3);
  _state = 2;
}

void gameCheckCollision() {
	
	for (int i=0; i<NB_OBSTACLES; i++){
		
		bool is_collide = false;
		
		// collisions avec différentes hitboxes pour chaque type d'objet  :
		switch(_obstacles[i].type) {
			case 0:
				if (gb.collide.rectRect(_player.x+4, _player.y, 4, 12, _obstacles[i].x, 48, 16, 8)) {
					is_collide = true;
				}
				break;
				
			case 1:
				if (gb.collide.rectRect(_player.x+4, _player.y, 4, 12, _obstacles[i].x, 40, 8, 16)) {
					is_collide = true;
				}
				break;
				
			case 2:
				if (gb.collide.rectRect(_player.x+4, _player.y, 4, 12, _obstacles[i].x, 48, 8, 8)) {
					is_collide = true;
				}
				break;
		}
		
		// Dans le cas de collision
		if (is_collide) {
			respawnObstacle(i);
			_player.life--;
			if (_player.life == 0) {
				_player.x = -8;
				_player.y = 38;
				_state = 1;
			}
		}
	}
}