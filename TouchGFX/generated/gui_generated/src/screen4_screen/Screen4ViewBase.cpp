/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen4_screen/Screen4ViewBase.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

Screen4ViewBase::Screen4ViewBase()
{
    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);
    
    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 240, 320);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(box1);

    textArea3_2_1_1_1.setXY(128, 256);
    textArea3_2_1_1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3_2_1_1_1.setLinespacing(0);
    textArea3_2_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_WUBU));
    add(textArea3_2_1_1_1);

    textArea3_2_1_2_2.setXY(129, 269);
    textArea3_2_1_2_2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3_2_1_2_2.setLinespacing(0);
    textArea3_2_1_2_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_VHQ4));
    add(textArea3_2_1_2_2);

    box2_1_4.setPosition(184, 244, 5, 9);
    box2_1_4.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_4);

    box2_2_1.setPosition(176, 256, 5, 9);
    box2_2_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_2_1);

    box2_1_2_1.setPosition(184, 256, 5, 9);
    box2_1_2_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_2_1);

    box2_1_1_2_1.setPosition(193, 256, 5, 9);
    box2_1_1_2_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_2_1);

    box2_1_1_1_2_1.setPosition(201, 256, 5, 9);
    box2_1_1_1_2_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_2_1);

    box2_3_2.setPosition(176, 269, 5, 9);
    box2_3_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_3_2);

    box2_1_3_2.setPosition(184, 269, 5, 9);
    box2_1_3_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_3_2);

    box2_1_1_3_2.setPosition(193, 269, 5, 9);
    box2_1_1_3_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_3_2);

    box2_1_1_1_3_2.setPosition(201, 269, 5, 9);
    box2_1_1_1_3_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_3_2);

    box2_1_1_1_1_1_2.setPosition(209, 269, 5, 9);
    box2_1_1_1_1_1_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_1_1_2);

    box2_1_1_1_1_2.setPosition(209, 244, 5, 9);
    box2_1_1_1_1_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_1_2);

    box2_1_1_1_4.setPosition(201, 244, 5, 9);
    box2_1_1_1_4.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_4);

    box2_1_1_4.setPosition(193, 244, 5, 9);
    box2_1_1_4.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_4);

    boxWithBorder1_1.setPosition(209, 256, 5, 9);
    boxWithBorder1_1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    boxWithBorder1_1.setBorderColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    boxWithBorder1_1.setBorderSize(2);
    add(boxWithBorder1_1);

    box2_4.setPosition(176, 244, 5, 9);
    box2_4.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_4);

    box2_1_1_1_3_1_1.setPosition(201, 282, 5, 9);
    box2_1_1_1_3_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_3_1_1);

    box2_1_1_1_1_1_1_1.setPosition(209, 282, 5, 9);
    box2_1_1_1_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_1_1_1_1);

    box2_1_1_3_1_1.setPosition(193, 282, 5, 9);
    box2_1_1_3_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_3_1_1);

    box2_1_3_1_1.setPosition(184, 282, 5, 9);
    box2_1_3_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_3_1_1);

    box2_3_1_1.setPosition(176, 282, 5, 9);
    box2_3_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_3_1_1);

    textArea3_2_1_2_1_1.setXY(129, 282);
    textArea3_2_1_2_1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3_2_1_2_1_1.setLinespacing(0);
    textArea3_2_1_2_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZOXT));
    add(textArea3_2_1_2_1_1);

    textArea3_2_1_2_1.setXY(28, 282);
    textArea3_2_1_2_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3_2_1_2_1.setLinespacing(0);
    textArea3_2_1_2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YHEV));
    add(textArea3_2_1_2_1);

    box2_3_1.setPosition(65, 282, 5, 9);
    box2_3_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_3_1);

    box2_1_3_1.setPosition(73, 282, 5, 9);
    box2_1_3_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_3_1);

    box2_1_1_3_1.setPosition(82, 282, 5, 9);
    box2_1_1_3_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_3_1);

    box2_1_1_1_1_1_1.setPosition(98, 282, 5, 9);
    box2_1_1_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_1_1_1);

    box2_1_1_1_3_1.setPosition(90, 282, 5, 9);
    box2_1_1_1_3_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_3_1);

    circle2_2.setPosition(-10, 112, 61, 63);
    circle2_2.setCenter(40, 40);
    circle2_2.setRadius(2.5f);
    circle2_2.setLineWidth(0);
    circle2_2.setArc(0, 360);
    circle2_2Painter.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    circle2_2.setPainter(circle2_2Painter);
    add(circle2_2);

    textArea5_1_1_2.setXY(35, 148);
    textArea5_1_1_2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1_1_2.setLinespacing(0);
    textArea5_1_1_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_69JC));
    add(textArea5_1_1_2);

    textArea1.setXY(22, 19);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DIUU));
    add(textArea1);

    textArea2.setXY(22, 43);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FHLB));
    add(textArea2);

    line1.setPosition(-78, 86, 100, 50);
    line1Painter.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    line1.setPainter(line1Painter);
    line1.setStart(5, 5);
    line1.setEnd(95, 5);
    line1.setLineWidth(4);
    line1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    add(line1);

    line1_1.setPosition(-78, 223, 100, 50);
    line1_1Painter.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    line1_1.setPainter(line1_1Painter);
    line1_1.setStart(5, 5);
    line1_1.setEnd(95, 5);
    line1_1.setLineWidth(4);
    line1_1.setLineEndingStyle(touchgfx::Line::ROUND_CAP_ENDING);
    add(line1_1);

    circle1.setPosition(9, 81, 26, 22);
    circle1.setCenter(10, 10);
    circle1.setRadius(4);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    circle1.setPainter(circle1Painter);
    add(circle1);

    circle1_1.setPosition(9, 218, 26, 22);
    circle1_1.setCenter(10, 10);
    circle1_1.setRadius(4);
    circle1_1.setLineWidth(0);
    circle1_1.setArc(0, 360);
    circle1_1Painter.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    circle1_1.setPainter(circle1_1Painter);
    add(circle1_1);

    textArea3.setXY(28, 84);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LNA0));
    add(textArea3);

    textArea3_3.setXY(28, 222);
    textArea3_3.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    textArea3_3.setLinespacing(0);
    textArea3_3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_OV79));
    add(textArea3_3);

    textArea3_2.setXY(28, 103);
    textArea3_2.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    textArea3_2.setLinespacing(0);
    textArea3_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IE6I));
    add(textArea3_2);

    textArea3_2_1.setXY(28, 244);
    textArea3_2_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3_2_1.setLinespacing(0);
    textArea3_2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_M0P8));
    add(textArea3_2_1);

    textArea3_2_1_3.setXY(128, 244);
    textArea3_2_1_3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3_2_1_3.setLinespacing(0);
    textArea3_2_1_3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FZK6));
    add(textArea3_2_1_3);

    textArea3_1.setXY(128, 84);
    textArea3_1.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    textArea3_1.setLinespacing(0);
    textArea3_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_TCU3));
    add(textArea3_1);

    shape1.setPosition(13, 104, 15, 15);
    shape1.setOrigin(0.0f, 0.0f);
    shape1.setScale(0.1f, 0.1f);
    shape1.setAngle(0.0f);
    shape1Painter.setColor(touchgfx::Color::getColorFromRGB(94, 46, 214));
    shape1.setPainter(shape1Painter);
    const touchgfx::AbstractShape::ShapePoint<float> shape1Points[4] = { { 40.0f, 0.0f }, { 76.8f, 40.0f }, { 40.0f, 80.0f }, { 0.0f, 40.0f } };
    shape1.setShape(shape1Points);
    add(shape1);

    textArea4.setXY(28, 112);
    textArea4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea4.setLinespacing(0);
    textArea4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LXI7));
    add(textArea4);

    textArea5.setXY(61, 112);
    textArea5.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5.setLinespacing(0);
    textArea5.setTypedText(touchgfx::TypedText(T___SINGLEUSE_P9Q4));
    add(textArea5);

    textArea5_1.setXY(28, 120);
    textArea5_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1.setLinespacing(0);
    textArea5_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_2E70));
    add(textArea5_1);

    circle2.setPosition(-10, 112, 61, 63);
    circle2.setCenter(40, 40);
    circle2.setRadius(2.5f);
    circle2.setLineWidth(0);
    circle2.setArc(0, 360);
    circle2Painter.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    circle2.setPainter(circle2Painter);
    add(circle2);

    circle2_1.setPosition(-10, 125, 61, 63);
    circle2_1.setCenter(40, 40);
    circle2_1.setRadius(2.5f);
    circle2_1.setLineWidth(0);
    circle2_1.setArc(0, 360);
    circle2_1Painter.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    circle2_1.setPainter(circle2_1Painter);
    add(circle2_1);

    textArea5_1_1_1.setXY(35, 161);
    textArea5_1_1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1_1_1.setLinespacing(0);
    textArea5_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ON69));
    add(textArea5_1_1_1);

    textArea5_1_1_1_2.setXY(128, 103);
    textArea5_1_1_1_2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1_1_1_2.setLinespacing(0);
    textArea5_1_1_1_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IJTT));
    add(textArea5_1_1_1_2);

    textArea5_1_1_1_2_1.setXY(128, 115);
    textArea5_1_1_1_2_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1_1_1_2_1.setLinespacing(0);
    textArea5_1_1_1_2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W5DL));
    add(textArea5_1_1_1_2_1);

    textArea5_1_1_1_2_1_1.setXY(128, 125);
    textArea5_1_1_1_2_1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1_1_1_2_1_1.setLinespacing(0);
    textArea5_1_1_1_2_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_5VIY));
    add(textArea5_1_1_1_2_1_1);

    textArea5_1_1_1_2_1_1_1.setXY(128, 136);
    textArea5_1_1_1_2_1_1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1_1_1_2_1_1_1.setLinespacing(0);
    textArea5_1_1_1_2_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_J8B5));
    add(textArea5_1_1_1_2_1_1_1);

    textArea5_1_1_1_1.setXY(35, 172);
    textArea5_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1_1_1_1.setLinespacing(0);
    textArea5_1_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_T0NZ));
    add(textArea5_1_1_1_1);

    circle2_1_1.setPosition(-10, 136, 61, 63);
    circle2_1_1.setCenter(40, 40);
    circle2_1_1.setRadius(2.5f);
    circle2_1_1.setLineWidth(0);
    circle2_1_1.setArc(0, 360);
    circle2_1_1Painter.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    circle2_1_1.setPainter(circle2_1_1Painter);
    add(circle2_1_1);

    circle2_1_1_1.setPosition(-10, 148, 61, 63);
    circle2_1_1_1.setCenter(40, 40);
    circle2_1_1_1.setRadius(2.5f);
    circle2_1_1_1.setLineWidth(0);
    circle2_1_1_1.setArc(0, 360);
    circle2_1_1_1Painter.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    circle2_1_1_1.setPainter(circle2_1_1_1Painter);
    add(circle2_1_1_1);

    textArea5_1_1_1_1_1.setXY(35, 184);
    textArea5_1_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1_1_1_1_1.setLinespacing(0);
    textArea5_1_1_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZR1Z));
    add(textArea5_1_1_1_1_1);

    textArea5_1_1_1_1_1_1.setXY(35, 196);
    textArea5_1_1_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea5_1_1_1_1_1_1.setLinespacing(0);
    textArea5_1_1_1_1_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_T6A0));
    add(textArea5_1_1_1_1_1_1);

    circle2_1_1_1_1.setPosition(-10, 160, 61, 63);
    circle2_1_1_1_1.setCenter(40, 40);
    circle2_1_1_1_1.setRadius(2.5f);
    circle2_1_1_1_1.setLineWidth(0);
    circle2_1_1_1_1.setArc(0, 360);
    circle2_1_1_1_1Painter.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    circle2_1_1_1_1.setPainter(circle2_1_1_1_1Painter);
    add(circle2_1_1_1_1);

    box2.setPosition(65, 244, 5, 9);
    box2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2);

    box2_1.setPosition(73, 244, 5, 9);
    box2_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1);

    box2_1_1.setPosition(82, 244, 5, 9);
    box2_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1);

    box2_1_1_1.setPosition(90, 244, 5, 9);
    box2_1_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1);

    box2_1_1_1_1.setPosition(98, 244, 5, 9);
    box2_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_1);

    box2_1_1_1_1_1.setPosition(98, 269, 5, 9);
    box2_1_1_1_1_1.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_1_1);

    box2_1_1_1_3.setPosition(90, 269, 5, 9);
    box2_1_1_1_3.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_3);

    box2_1_1_3.setPosition(82, 269, 5, 9);
    box2_1_1_3.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_3);

    box2_1_3.setPosition(73, 269, 5, 9);
    box2_1_3.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_3);

    box2_3.setPosition(65, 269, 5, 9);
    box2_3.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_3);

    textArea3_2_1_2.setXY(28, 269);
    textArea3_2_1_2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3_2_1_2.setLinespacing(0);
    textArea3_2_1_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RTNG));
    add(textArea3_2_1_2);

    box2_1_1_1_2.setPosition(90, 256, 5, 9);
    box2_1_1_1_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_1_2);

    box2_1_1_2.setPosition(82, 256, 5, 9);
    box2_1_1_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_1_2);

    box2_1_2.setPosition(73, 256, 5, 9);
    box2_1_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_1_2);

    box2_2.setPosition(65, 256, 5, 9);
    box2_2.setColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    add(box2_2);

    textArea3_2_1_1.setXY(27, 256);
    textArea3_2_1_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3_2_1_1.setLinespacing(0);
    textArea3_2_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W0SB));
    add(textArea3_2_1_1);

    boxWithBorder1.setPosition(98, 256, 5, 9);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(94, 23, 235));
    boxWithBorder1.setBorderSize(2);
    add(boxWithBorder1);
}

Screen4ViewBase::~Screen4ViewBase()
{
    touchgfx::CanvasWidgetRenderer::resetBuffer();
}

void Screen4ViewBase::setupScreen()
{

}
