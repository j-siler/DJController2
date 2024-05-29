#ifndef CUSTOMBUTTON_H
#define CUSTOMBUTTON_H

#include <QPushButton>
#include <QMouseEvent>

class CustomButton : public QPushButton
{
    Q_OBJECT

public:
    static const unsigned NUM_CUE_BUTTONS=8;
    static const QString CB_YELLOW, CB_ORANGE, CB_VIOLET, CB_RED, CB_GREEN, CB_BLUEGREEN, CB_CYAN, CB_BLUE, CB_GREY;
    static const QString DEFAULT_COLORS[NUM_CUE_BUTTONS];
    explicit CustomButton(QWidget *parent = nullptr);
    void defaultColor(const QString& c) {_defaultColor=c;}
    void currentColor(const QString& c) {_currentColor=c;}
    void btnNumber(unsigned n) {_btnNumber=n;}
    const QString &defaultColor() const {return _defaultColor;}
    const QString &currentColor() const {return _currentColor;}
    unsigned btnNumber() const {return _btnNumber;}
 signals:
    void rightClicked();
    void shiftedRightClicked();
    void leftClicked();           // Unique name to avoid conflict
    void shiftedLeftClicked();    // Unique name to avoid conflict

protected:
    void mousePressEvent(QMouseEvent *event) override;

private:
    QString _defaultColor, _currentColor;
    unsigned _btnNumber;
};

#endif // CUSTOMBUTTON_H
