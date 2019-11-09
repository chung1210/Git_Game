#include "CSceneManager.h"
#include "CGameState.h"

CSceneManager* CSceneManager::_instance = 0;
CSceneManager * CSceneManager::getInstance()
{
	if (_instance == 0)
		_instance = new CSceneManager();
	return _instance;
}
void CSceneManager::init()
{
}

void CSceneManager::update(DWORD time, vector<LPGAMEOBJECT> *coObjects)
{
#pragma region GridUpdate
	if (GAMESTATE->IsCrossActivated) {
		(GetTickCount() % 2 == 0) ? GRAPHICS->SetColor(255, 255, 255) : GRAPHICS->SetColor(0, 0, 0);
	}

	if (GAMESTATE->IsGameWin) {

	}
	else if (GAMESTATE->IsGameEnd) {

	}
	else {
		curScene->update(time, coObjects);
		VISUALFIGURES->Update(time);
	}

#pragma endregion
}

void CSceneManager::draw()
{
	if (GAMESTATE->IsGameWin) {
		SPRITES->Get(GAMEWIN_ID)->Draw(0, 0);
	}
	else if (GAMESTATE->IsGameEnd) {
		SPRITES->Get(GAMEOVER_ID)->Draw(0, 0);
	}
	else {
		curScene->draw();
	
	}
}

CSceneManager::CSceneManager()
{
	objManager = new CGameObjectManager();
	gridManager = new GridManager();
}


CSceneManager::~CSceneManager()
{
	delete gridManager;
	delete objManager;
}
