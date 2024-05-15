// ---------------------------
// Méthodes de GAME (state 2)
// ---------------------------

// Lancement du jeu
void gameInit() {
	_player.life = 3;
	_player.score = 0;
  _player.x = -8;
	_player.y = 38;
	obstaclesInit();
  _currentLevel = random(0,3);
  _loseTimer = 0;
  _state = 2;
}

// Check des collision obstacles
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
      _loseTimer = 24;
			if (_player.life == 0) {
				_player.x = -8;
				_player.y = 38;
				_state = 3;
			}
		}
	}
}

// Écran de Game Over
bool _gameOverPressed;
bool _gameOverReleased;
void gameOverUpdate() {

  gb.display.setColor(7);
  gb.display.fillRect(0,0,80,64);

  gb.display.setColor(12);
  gb.display.setCursor(22,20);
  gb.display.print("GAME OVER");
  gb.display.setColor(2);
  gb.display.setCursor(12,30);
  gb.display.print("Your score:");
  gb.display.print(_player.score);
  gb.display.print("m");
  gb.display.setCursor(20,40);
  gb.display.print("Play again?");

  for (int i=0; i<8; i++) {
    drawSprite(i*16 -(_scrollingTimer *2), 56, _spriteForeground);
  }
	_scrollingTimer++;
	if (_scrollingTimer == 16) {
		_scrollingTimer = 0;
	}

  if (gb.buttons.pressed(BUTTON_A) || (gb.buttons.pressed(BUTTON_B))){
    _gameOverPressed = true;
  }
  if (gb.buttons.released(BUTTON_A) || (gb.buttons.released(BUTTON_B))){
    _gameOverReleased = true;
  }

  if (_gameOverPressed && _gameOverReleased) {
    _gameOverPressed = false;
    _gameOverReleased = false;
    cptStart = 0; // Réinitialise le compteur de l'écran d'accueil
    startGame = false; // Réinitialise flag de l'accueil
    _state = 0;
  }
}