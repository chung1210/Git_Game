#pragma once
#include "CScene.h"
#include "CGameState.h"
#include "CScene_Intro.h"
class CScene_EnterCastle : public CScene
{
	int FlagEnterCastle = 260;   // toa do vo cong
	bool isFlagEnable = false; // kiem tra neu true thi chuyen canh

	

	int timeDuringBack = 1500; //simon cho vo cong
	DWORD timeStartBack; // thoi gian danh dau trong vo
public:
	LPSPRITE enter_background;

	void init();
	void update(DWORD time, vector<LPGAMEOBJECT> *coObjects = NULL);
	void draw();

	CScene_EnterCastle();
	~CScene_EnterCastle();
};

