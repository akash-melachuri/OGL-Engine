#pragma once
#include "Scene.h"
#include "EntityRenderer.h"
#include "TerrainRenderer.h"
#include "WaterRenderer.h"
#include "LevelRenderer.h"
#include "World.h"


class MasterRenderer
{
public:
	MasterRenderer();
	~MasterRenderer();
	void render(Scene& scene, GLFWwindow *window);
	void init();
	EntityRenderer entityRenderer;
	TerrainRenderer terrainRenderer;
	WaterRenderer waterRenderer;
	LevelRenderer levelRenderer;
	World *world;
	Scene *scene;
};
