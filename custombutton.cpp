#include "custombutton.h"
#include <QApplication>
#include <QMouseEvent>

CustomButton::CustomButton(QWidget *parent) : QPushButton(parent)
{
}

void CustomButton::mousePressEvent(QMouseEvent *event)
{
    bool shiftPressed = QApplication::keyboardModifiers() & Qt::ShiftModifier;

    if (event->button() == Qt::RightButton) {
        if (shiftPressed) {
            emit shiftedRightClicked();
        } else {
            emit rightClicked();
        }
    } else if (event->button() == Qt::LeftButton) {
        if (shiftPressed) {
            emit shiftedLeftClicked();
        } else {
            emit leftClicked();
        }
    } else {
        QPushButton::mousePressEvent(event); // Call the base class implementation for other buttons
    }
}

const QString
    CustomButton::CB_YELLOW("#FFFF00"),
    CustomButton::CB_ORANGE("#FF8000"),
    CustomButton::CB_VIOLET("#C000C0"),
    CustomButton::CB_RED("#E00000"),
    CustomButton::CB_GREEN("#40c800"),
    CustomButton::CB_BLUEGREEN("#00B090"),
    CustomButton::CB_CYAN("#00C0C0"),
    CustomButton::CB_BLUE("#0050FF"),
    CustomButton::CB_GREY("#808080");

const QString CustomButton::DEFAULT_COLORS[NUM_CUE_BUTTONS]=
    { CB_YELLOW, CB_ORANGE, CB_VIOLET, CB_RED, CB_GREEN, CB_BLUEGREEN, CB_CYAN, CB_BLUE };
