#pragma once
#include "CScene.h"
#include "Item.h"
#include "BackgroundMap.h"
#include "Static.h"

class CScene_Intro : public CScene
{
	LPBACKGROUNDMAP bgmap;


	float xLeftFlagSlowSpeed = 1285.0f;     //diem dau va diem cuoi cua luc simon di cham khi chuyen canh
	float XRightFlagSlowSpeed = 1374.0f;

	float vxSlowDown = 0.075f;    // van toc di cham tu dat 

	float FlagChangeScene = 1375.0f;    //diem chuyen canh


public:



	void init();
	void update(DWORD time, vector<LPGAMEOBJECT> *coObjects = NULL);
	void draw();
	CScene_Intro();
	~CScene_Intro();
};

