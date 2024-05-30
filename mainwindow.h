#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>
#include <QRegularExpression>

#include "custombutton.h"
#include "deck.h"

const unsigned NUM_CUE_BUTTONS(CustomButton::NUM_CUE_BUTTONS);

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_CueButton_1_leftClicked();
    void on_CueButton_1_rightClicked();
    void on_CueButton_1_shiftedLeftClicked();
    void on_CueButton_1_shiftedRightClicked();
    void on_CueButton_2_leftClicked();
    void on_CueButton_2_shiftedLeftClicked();
    void on_CueButton_2_rightClicked();
    void on_CueButton_2_shiftedRightClicked();
    void on_CueButton_3_leftClicked();
    void on_CueButton_3_shiftedLeftClicked();
    void on_CueButton_3_rightClicked();
    void on_CueButton_3_shiftedRightClicked();
    void on_CueButton_4_leftClicked();
    void on_CueButton_4_shiftedLeftClicked();
    void on_CueButton_4_rightClicked();
    void on_CueButton_4_shiftedRightClicked();
    void on_CueButton_5_leftClicked();
    void on_CueButton_5_shiftedLeftClicked();
    void on_CueButton_5_rightClicked();
    void on_CueButton_5_shiftedRightClicked();
    void on_CueButton_6_leftClicked();
    void on_CueButton_6_shiftedLeftClicked();
    void on_CueButton_6_rightClicked();
    void on_CueButton_6_shiftedRightClicked();
    void on_CueButton_7_leftClicked();
    void on_CueButton_7_shiftedLeftClicked();
    void on_CueButton_7_rightClicked();
    void on_CueButton_7_shiftedRightClicked();
    void on_CueButton_8_leftClicked();
    void on_CueButton_8_shiftedLeftClicked();
    void on_CueButton_8_rightClicked();
    void on_CueButton_8_shiftedRightClicked();
private:
    void changeButtonColor(QPushButton *button, const QString &color);
    void changeButtonText(QPushButton *button, const QString &text="");
    void changeButtonColor(CustomButton *button, const QString &color);
    void processCueButtonLeftClick(int unsigned index);
    void processCueButtonRightClick(int unsigned index);
    void showCustomCueDialog(unsigned cueNum);
    Ui::MainWindow *ui;
    CustomButton* _cueButtons[NUM_CUE_BUTTONS];
};
#endif // MAINWINDOW_H
