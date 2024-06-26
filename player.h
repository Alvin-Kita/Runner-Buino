const int X_POSITION_PLAYER = 6;
const int Y_FLOOR_PLAYER = 38;
const int Y_MAX_PLAYER = 16;
const float JUMP_SPEED_UP = 2;
const float JUMP_SPEED_BOTTOM = 3;

int jumpState = 0; // 0 => au sol; 1 => montée; 2 => Ymax; 3 => descente 

//Varible de jumpState2 immobile en l'air
const int FRAME_JUMPSTATE_2 = 5;
int cptCase2 = 0; // compteur des frame d'immobilitée en l'air

// Variable de bugged
// bugged = retour instantanné au sol et cooldown pour le réutiliser
const int BUGGED_NB_FRAME = 50; // Nombre de frame où le bbug est inutilisable
int buggedCount = 0;

// TODO: inertie 
void playerJump() {
    switch (jumpState) {
      
      case 0: // au sol
        _player.y-= JUMP_SPEED_UP;
        _player.isJumping = true;
        jumpState = 1;
        break;
      
      case 1: // montée
        _player.y-= JUMP_SPEED_UP;
        if (_player.y <= Y_MAX_PLAYER) {
          jumpState = 2;
        }
        break;
      
      case 2: // au max
        cptCase2++;
        if (cptCase2 >= FRAME_JUMPSTATE_2) {
          jumpState = 3;
          cptCase2 = 0;
        }
        break;

      case 3: // descente
        if (_player.y >= Y_FLOOR_PLAYER){
          _player.y = Y_FLOOR_PLAYER;
          jumpState = 0;
          _player.isJumping = false;
        } else {
          _player.y += JUMP_SPEED_BOTTOM;
        }
        break;
    }
    
    
  }

void playerUpdate() {
	
  // Apparition du player
  if (_player.x < X_POSITION_PLAYER) {
    _player.x++;
  }
  
  if (_loseTimer > 0) {
    _loseTimer--;
  }

  // Gestion des sprites
  if (!_player.isJumping) {
    _playerSpriteUpdate();
  } else {
    // Permet le clignottement du sprite le temps de LoseTimer :
    if ((_loseTimer == 0) || (_loseTimer % 4 < 2)) {
      gb.display.drawImage(_player.x, _player.y, _spriteHero2);
    }
    
  }

  // -------------------------
  // Saut
  // -------------------------   

  // Déclenchement
  if ( ((gb.buttons.repeat(BUTTON_UP, 0) || gb.buttons.repeat(BUTTON_A, 0)) && !_player.isJumping) || _player.isJumping) {
    playerJump();
  }

  // Retour instantané
  if (_player.isJumping && gb.buttons.repeat(BUTTON_DOWN, 0) && !_player.isBugged) {
    _player.isBugged = true;
    _player.y = Y_FLOOR_PLAYER;
    jumpState = 0;
    _player.isJumping = false;
  }

  // timer du retour instantané
  if (_player.isBugged) {
    if (buggedCount >= BUGGED_NB_FRAME) {
      _player.isBugged = false;
      buggedCount = 0;
    } else {
      buggedCount++;
    }
  }
}