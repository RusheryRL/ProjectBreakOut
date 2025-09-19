#include "sl.h"

#include "windowManagment.h"
#include "gameplay.h"

namespace projectBreakOut
{
	void runGame()
	{
		//initWindow
		slWindow(screenWidth, screenHeight, "projectBreakOut", false);

		while (!slShouldClose())
		{
			//init

			//update

			//texturas a dibujar
			slSetBackColor(0, 0, 0);


			//hace el dibujado
			slRender();
		}

		//cierraWindow
		slClose();
	}
}