// Copyright 2001-2018 Crytek GmbH / Crytek Group. All rights reserved.

#pragma once

#include <CryAISystem/ICoverSystem.h>

class CAICoverSurface;

class CCoverSurfaceManager
{
public:
	bool WriteToFile(const char* fileName);
	bool ReadFromFile(const char* fileName);

	void ClearGameSurfaces();
	void AddSurfaceObject(CAICoverSurface* surface);
	void RemoveSurfaceObject(CAICoverSurface* surface);

	typedef std::set<CAICoverSurface*> SurfaceObjects;
	const SurfaceObjects& GetSurfaceObjects() const;

private:
	SurfaceObjects m_surfaceObjects;
};
