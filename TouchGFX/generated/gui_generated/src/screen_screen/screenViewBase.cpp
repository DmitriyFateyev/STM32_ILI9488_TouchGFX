/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

screenViewBase::screenViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 480, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(18, 18, 18));
    add(box1);

    dynamicGraph1.setPosition(0, 0, 480, 320);
    dynamicGraph1.setScale(1);
    dynamicGraph1.setGraphAreaMargin(0, 0, 0, 0);
    dynamicGraph1.setGraphAreaPadding(0, 0, 0, 0);
    dynamicGraph1.setGraphRangeY(0, 3000);
    dynamicGraph1MajorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(71, 73, 74));
    dynamicGraph1MajorXAxisGrid.setInterval(10);
    dynamicGraph1MajorXAxisGrid.setLineWidth(1);
    dynamicGraph1MajorXAxisGrid.setScale(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorXAxisGrid);

    dynamicGraph1MajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(72, 73, 74));
    dynamicGraph1MajorYAxisGrid.setInterval(300);
    dynamicGraph1MajorYAxisGrid.setLineWidth(1);
    dynamicGraph1MajorYAxisGrid.setScale(1);
    dynamicGraph1.addGraphElement(dynamicGraph1MajorYAxisGrid);

    dynamicGraph1MajorXAxisLabel.setInterval(10);
    dynamicGraph1MajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_UEYQ));
    dynamicGraph1MajorXAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1MajorXAxisLabel.setScale(1);
    dynamicGraph1.addBottomElement(dynamicGraph1MajorXAxisLabel);

    dynamicGraph1MajorYAxisLabel.setInterval(300);
    dynamicGraph1MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_LWNM));
    dynamicGraph1MajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(20, 151, 197));
    dynamicGraph1MajorYAxisLabel.setScale(1);
    dynamicGraph1.addLeftElement(dynamicGraph1MajorYAxisLabel);

    dynamicGraph1Line1Painter.setColor(touchgfx::Color::getColorFromRGB(199, 122, 22));
    dynamicGraph1Line1.setPainter(dynamicGraph1Line1Painter);
    dynamicGraph1Line1.setLineWidth(2);
    dynamicGraph1.addGraphElement(dynamicGraph1Line1);


    dynamicGraph1.addDataPoint(1839.13979f);
    dynamicGraph1.addDataPoint(1391.65513f);
    dynamicGraph1.addDataPoint(897.81474f);
    dynamicGraph1.addDataPoint(453.09077f);
    dynamicGraph1.addDataPoint(144.84953f);
    dynamicGraph1.addDataPoint(31.81917f);
    dynamicGraph1.addDataPoint(130.37832f);
    dynamicGraph1.addDataPoint(410.99631f);
    dynamicGraph1.addDataPoint(805.6786f);
    dynamicGraph1.addDataPoint(1224.58591f);
    dynamicGraph1.addDataPoint(1577.75914f);
    dynamicGraph1.addDataPoint(1796.6421f);
    dynamicGraph1.addDataPoint(1850.15228f);
    dynamicGraph1.addDataPoint(1751.39356f);
    dynamicGraph1.addDataPoint(1553.40333f);
    dynamicGraph1.addDataPoint(1335.01657f);
    dynamicGraph1.addDataPoint(1180.35388f);
    dynamicGraph1.addDataPoint(1157.00396f);
    dynamicGraph1.addDataPoint(1298.2904f);
    dynamicGraph1.addDataPoint(1594.01258f);
    dynamicGraph1.addDataPoint(1991.97055f);
    dynamicGraph1.addDataPoint(2409.94002f);
    dynamicGraph1.addDataPoint(2755.19737f);
    dynamicGraph1.addDataPoint(2946.83851f);
    dynamicGraph1.addDataPoint(2935.44243f);
    dynamicGraph1.addDataPoint(2715.27088f);
    dynamicGraph1.addDataPoint(2326.01326f);
    dynamicGraph1.addDataPoint(1843.63605f);
    dynamicGraph1.addDataPoint(1362.55458f);
    dynamicGraph1.addDataPoint(973.46102f);
    dynamicGraph1.addDataPoint(742.20004f);
    dynamicGraph1.addDataPoint(694.82054f);
    dynamicGraph1.addDataPoint(812.41674f);
    dynamicGraph1.addDataPoint(1036.97328f);
    dynamicGraph1.addDataPoint(1286.73428f);
    dynamicGraph1.addDataPoint(1477.28762f);
    dynamicGraph1.addDataPoint(1543.15939f);
    dynamicGraph1.addDataPoint(1454.59437f);
    dynamicGraph1.addDataPoint(1225.38457f);
    dynamicGraph1.addDataPoint(909.80692f);
    dynamicGraph1.addDataPoint(589.40795f);
    dynamicGraph1.addDataPoint(352.86755f);
    dynamicGraph1.addDataPoint(273.87907f);
    dynamicGraph1.addDataPoint(392.4774f);
    dynamicGraph1.addDataPoint(704.41213f);
    dynamicGraph1.addDataPoint(1161.1999f);
    dynamicGraph1.addDataPoint(1680.88301f);
    dynamicGraph1.addDataPoint(2166.90435f);
    dynamicGraph1.addDataPoint(2530.52471f);
    dynamicGraph1.addDataPoint(2711.34323f);
    dynamicGraph1.addDataPoint(2690.94428f);
    dynamicGraph1.addDataPoint(2496.37551f);
    dynamicGraph1.addDataPoint(2192.64648f);
    dynamicGraph1.addDataPoint(1866.1194f);
    dynamicGraph1.addDataPoint(1602.88638f);
    dynamicGraph1.addDataPoint(1467.446f);
    dynamicGraph1.addDataPoint(1486.90977f);
    dynamicGraph1.addDataPoint(1644.60546f);
    dynamicGraph1.addDataPoint(1884.63382f);
    dynamicGraph1.addDataPoint(2126.24382f);
    dynamicGraph1.addDataPoint(2284.47981f);
    dynamicGraph1.addDataPoint(2292.01025f);
    dynamicGraph1.addDataPoint(2116.75252f);
    dynamicGraph1.addDataPoint(1770.93359f);
    dynamicGraph1.addDataPoint(1309.31937f);
    dynamicGraph1.addDataPoint(816.99843f);
    dynamicGraph1.addDataPoint(389.66275f);
    dynamicGraph1.addDataPoint(111.16956f);
    dynamicGraph1.addDataPoint(33.83817f);
    dynamicGraph1.addDataPoint(166.27282f);
    dynamicGraph1.addDataPoint(471.66793f);
    dynamicGraph1.addDataPoint(876.99399f);
    dynamicGraph1.addDataPoint(1290.80838f);
    dynamicGraph1.addDataPoint(1625.33277f);
    dynamicGraph1.addDataPoint(1817.40478f);
    dynamicGraph1.addDataPoint(1843.19509f);
    dynamicGraph1.addDataPoint(1723.11697f);
    dynamicGraph1.addDataPoint(1515.76284f);
    dynamicGraph1.addDataPoint(1302.39484f);
    dynamicGraph1.addDataPoint(1165.83354f);
    dynamicGraph1.addDataPoint(1168.96124f);
    dynamicGraph1.addDataPoint(1338.15228f);
    dynamicGraph1.addDataPoint(1655.7337f);
    dynamicGraph1.addDataPoint(2063.36524f);
    dynamicGraph1.addDataPoint(2475.5492f);
    dynamicGraph1.addDataPoint(2799.99288f);
    dynamicGraph1.addDataPoint(2959.86127f);
    dynamicGraph1.addDataPoint(2912.48522f);
    dynamicGraph1.addDataPoint(2659.9491f);
    dynamicGraph1.addDataPoint(2248.95965f);
    dynamicGraph1.addDataPoint(1760.01358f);
    dynamicGraph1.addDataPoint(1288.4915f);
    dynamicGraph1.addDataPoint(922.27543f);
    dynamicGraph1.addDataPoint(721.33118f);
    dynamicGraph1.addDataPoint(704.21033f);
    dynamicGraph1.addDataPoint(844.73008f);
    dynamicGraph1.addDataPoint(1079.59464f);
    dynamicGraph1.addDataPoint(1325.04398f);
    dynamicGraph1.addDataPoint(1498.40817f);
    dynamicGraph1.addDataPoint(1539.24766f);
    add(dynamicGraph1);
}

screenViewBase::~screenViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void screenViewBase::setupScreen()
{

}
