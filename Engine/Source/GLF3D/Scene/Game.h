#ifndef GLF3D_GAME_H
#define GLF3D_GAME_H

#include "../Core/_Exporter.h"
#include "../Core/Window.h"

class GLF3D_API Game
{
public:
	Game();
	virtual ~Game();

	virtual void Start() = 0;
	virtual void Update(float& DeltaTime) = 0;
	virtual void Draw() = 0;
	virtual void End() = 0;

protected:
	inline Window*& GetWindow() const { return s_Window; }

private:
	static Window*& s_Window;
};

#endif

