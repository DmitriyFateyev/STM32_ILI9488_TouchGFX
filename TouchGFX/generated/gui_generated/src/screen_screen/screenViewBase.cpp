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
    box1.setColor(touchgfx::Color::getColorFromRGB(22, 23, 20));
    add(box1);

    dynamicGraph2.setPosition(0, 0, 480, 320);
    dynamicGraph2.setScale(1);
    dynamicGraph2.setGraphAreaMargin(9, 22, 0, 16);
    dynamicGraph2.setGraphAreaPadding(0, 8, 0, 5);
    dynamicGraph2.setGraphRangeY(0, 100);
    dynamicGraph2MajorXAxisGrid.setColor(touchgfx::Color::getColorFromRGB(74, 74, 74));
    dynamicGraph2MajorXAxisGrid.setInterval(10);
    dynamicGraph2MajorXAxisGrid.setLineWidth(1);
    dynamicGraph2MajorXAxisGrid.setScale(1);
    dynamicGraph2.addGraphElement(dynamicGraph2MajorXAxisGrid);

    dynamicGraph2MajorYAxisGrid.setColor(touchgfx::Color::getColorFromRGB(82, 82, 82));
    dynamicGraph2MajorYAxisGrid.setInterval(10);
    dynamicGraph2MajorYAxisGrid.setLineWidth(1);
    dynamicGraph2MajorYAxisGrid.setScale(1);
    dynamicGraph2.addGraphElement(dynamicGraph2MajorYAxisGrid);

    dynamicGraph2MajorXAxisLabel.setInterval(10);
    dynamicGraph2MajorXAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_6KY9));
    dynamicGraph2MajorXAxisLabel.setColor(touchgfx::Color::getColorFromRGB(240, 240, 240));
    dynamicGraph2MajorXAxisLabel.setScale(1);
    dynamicGraph2.addBottomElement(dynamicGraph2MajorXAxisLabel);

    dynamicGraph2MajorYAxisLabel.setInterval(10);
    dynamicGraph2MajorYAxisLabel.setLabelTypedText(touchgfx::TypedText(T___SINGLEUSE_R0KL));
    dynamicGraph2MajorYAxisLabel.setColor(touchgfx::Color::getColorFromRGB(230, 230, 230));
    dynamicGraph2MajorYAxisLabel.setScale(1);
    dynamicGraph2.addLeftElement(dynamicGraph2MajorYAxisLabel);

    dynamicGraph2Line1Painter.setColor(touchgfx::Color::getColorFromRGB(34, 207, 19));
    dynamicGraph2Line1.setPainter(dynamicGraph2Line1Painter);
    dynamicGraph2Line1.setLineWidth(2);
    dynamicGraph2.addGraphElement(dynamicGraph2Line1);


    dynamicGraph2.addDataPoint(74.85409f);
    dynamicGraph2.addDataPoint(66.65838f);
    dynamicGraph2.addDataPoint(53.33732f);
    dynamicGraph2.addDataPoint(37.17667f);
    dynamicGraph2.addDataPoint(21.23809f);
    dynamicGraph2.addDataPoint(8.64514f);
    dynamicGraph2.addDataPoint(1.84963f);
    dynamicGraph2.addDataPoint(2.05649f);
    dynamicGraph2.addDataPoint(8.94704f);
    dynamicGraph2.addDataPoint(20.76771f);
    dynamicGraph2.addDataPoint(34.76203f);
    dynamicGraph2.addDataPoint(47.84002f);
    dynamicGraph2.addDataPoint(57.32131f);
    dynamicGraph2.addDataPoint(61.5706f);
    dynamicGraph2.addDataPoint(60.37069f);
    dynamicGraph2.addDataPoint(54.94283f);
    dynamicGraph2.addDataPoint(47.61077f);
    dynamicGraph2.addDataPoint(41.19212f);
    dynamicGraph2.addDataPoint(38.26778f);
    dynamicGraph2.addDataPoint(40.50976f);
    dynamicGraph2.addDataPoint(48.23376f);
    dynamicGraph2.addDataPoint(60.28734f);
    dynamicGraph2.addDataPoint(74.30268f);
    dynamicGraph2.addDataPoint(87.25303f);
    dynamicGraph2.addDataPoint(96.17762f);
    dynamicGraph2.addDataPoint(98.89821f);
    dynamicGraph2.addDataPoint(94.55212f);
    dynamicGraph2.addDataPoint(83.81128f);
    dynamicGraph2.addDataPoint(68.73334f);
    dynamicGraph2.addDataPoint(52.28073f);
    dynamicGraph2.addDataPoint(37.62437f);
    dynamicGraph2.addDataPoint(27.40155f);
    dynamicGraph2.addDataPoint(23.10809f);
    dynamicGraph2.addDataPoint(24.77233f);
    dynamicGraph2.addDataPoint(30.98888f);
    dynamicGraph2.addDataPoint(39.30258f);
    dynamicGraph2.addDataPoint(46.84676f);
    dynamicGraph2.addDataPoint(51.07824f);
    dynamicGraph2.addDataPoint(50.42776f);
    dynamicGraph2.addDataPoint(44.70543f);
    dynamicGraph2.addDataPoint(35.16117f);
    dynamicGraph2.addDataPoint(24.18465f);
    dynamicGraph2.addDataPoint(14.71818f);
    dynamicGraph2.addDataPoint(9.52613f);
    dynamicGraph2.addDataPoint(10.50029f);
    dynamicGraph2.addDataPoint(18.17201f);
    dynamicGraph2.addDataPoint(31.55135f);
    dynamicGraph2.addDataPoint(48.3341f);
    dynamicGraph2.addDataPoint(65.42713f);
    dynamicGraph2.addDataPoint(79.66527f);
    dynamicGraph2.addDataPoint(88.54553f);
    dynamicGraph2.addDataPoint(90.80078f);
    dynamicGraph2.addDataPoint(86.6738f);
    dynamicGraph2.addDataPoint(77.82616f);
    dynamicGraph2.addDataPoint(66.90543f);
    dynamicGraph2.addDataPoint(56.87781f);
    dynamicGraph2.addDataPoint(50.29019f);
    dynamicGraph2.addDataPoint(48.64298f);
    dynamicGraph2.addDataPoint(52.02721f);
    dynamicGraph2.addDataPoint(59.11467f);
    dynamicGraph2.addDataPoint(67.50308f);
    dynamicGraph2.addDataPoint(74.3308f);
    dynamicGraph2.addDataPoint(77.00967f);
    dynamicGraph2.addDataPoint(73.89523f);
    dynamicGraph2.addDataPoint(64.72875f);
    dynamicGraph2.addDataPoint(50.74129f);
    dynamicGraph2.addDataPoint(34.3927f);
    dynamicGraph2.addDataPoint(18.80778f);
    dynamicGraph2.addDataPoint(7.04629f);
    dynamicGraph2.addDataPoint(1.38389f);
    dynamicGraph2.addDataPoint(2.77907f);
    dynamicGraph2.addDataPoint(10.65559f);
    dynamicGraph2.addDataPoint(23.05282f);
    dynamicGraph2.addDataPoint(37.10716f);
    dynamicGraph2.addDataPoint(49.74622f);
    dynamicGraph2.addDataPoint(58.42639f);
    dynamicGraph2.addDataPoint(61.73366f);
    dynamicGraph2.addDataPoint(59.70143f);
    dynamicGraph2.addDataPoint(53.76873f);
    dynamicGraph2.addDataPoint(46.39038f);
    dynamicGraph2.addDataPoint(40.39599f);
    dynamicGraph2.addDataPoint(38.25638f);
    dynamicGraph2.addDataPoint(41.43866f);
    dynamicGraph2.addDataPoint(50.00941f);
    dynamicGraph2.addDataPoint(62.58466f);
    dynamicGraph2.addDataPoint(76.64029f);
    dynamicGraph2.addDataPoint(89.10783f);
    dynamicGraph2.addDataPoint(97.11096f);
    dynamicGraph2.addDataPoint(98.66264f);
    dynamicGraph2.addDataPoint(93.15271f);
    dynamicGraph2.addDataPoint(81.50651f);
    dynamicGraph2.addDataPoint(65.97517f);
    dynamicGraph2.addDataPoint(49.60838f);
    dynamicGraph2.addDataPoint(35.53778f);
    dynamicGraph2.addDataPoint(26.24509f);
    dynamicGraph2.addDataPoint(22.99291f);
    dynamicGraph2.addDataPoint(25.55597f);
    dynamicGraph2.addDataPoint(32.317f);
    dynamicGraph2.addDataPoint(40.70216f);
    dynamicGraph2.addDataPoint(47.8478f);
    add(dynamicGraph2);
}

screenViewBase::~screenViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void screenViewBase::setupScreen()
{

}
