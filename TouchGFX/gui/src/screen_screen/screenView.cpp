#include <gui/screen_screen/screenView.hpp>
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <math.h>
#include <stdlib.h>

screenView::screenView()
{
	tickCounter = 0;
}

void screenView::setupScreen()
{
    screenViewBase::setupScreen();
}

void screenView::tearDownScreen()
{
    screenViewBase::tearDownScreen();
}

void screenView::handleTickEvent()
{
    tickCounter++;

    // Insert each second tick
    if (tickCounter % 3 == 0)
    {
      // Insert data point
      dynamicGraph2.addDataPoint((sinf(tickCounter * 0.07f) +1) * 40 + rand() % 10);
    }
}
