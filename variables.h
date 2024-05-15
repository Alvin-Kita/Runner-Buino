// -------------------
// Variables globales
// -------------------

int _state = 1; // TODO: le repasser à 0
int _currentLevel = 0;
int _scrollingTimer = 0;

// Function du joueur
// ------------------- 

struct Player {
  float x;
  float y;
  int score;
  int life;
  int timer;
  bool isJumping;
  bool isBugged;
  bool isCooldown;
};

Player _player;


void _playerSpriteUpdate() {
  _player.timer++;
	if (_player.timer == 8) {
		_player.timer = 0;
	}

  if (_player.timer < 4) {
		gb.display.drawImage(_player.x, _player.y, _spriteHero1);
	} else {
		gb.display.drawImage(_player.x, _player.y, _spriteHero2);
	}
}



// Constantes
// ----------
const Image BACKGROUNDS[] = {
	_spriteBackground1,
	_spriteBackground2,
	_spriteBackground3
};

// Valeur max de l'écran 80x64
const int X_SCREEN_MAX = 78;
const int Y_SCREEN_MAX = 62;