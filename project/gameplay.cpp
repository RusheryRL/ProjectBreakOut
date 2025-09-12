#include "sl.h"

#include "windowManagment.h"
#include "gameplay.h"

namespace projectBreakOut
{
	void runGame()
	{
		//initWindow
		slWindow(screen_width, screen_hight, "projectBreakOut", false);

		while (!slShouldClose())
		{
			//texturas a dibujar
			slSetBackColor(0.5, 0.75, 1.0);

			slSetForeColor(1, 0, 0, 1);
			slRectangleFill(screen_width /2, screen_hight /5, 200, 50);


			//hace el dibujado
			slRender();
		}

		//cierraWindow
		slClose();
	}
}