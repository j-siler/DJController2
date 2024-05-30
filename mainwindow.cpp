#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QDebug>
#include <QInputDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    int index=0;
    for(auto buttonP:
        {
          ui->CueButton_1, ui->CueButton_2, ui->CueButton_3, ui->CueButton_4,
          ui->CueButton_5, ui->CueButton_6, ui->CueButton_7, ui->CueButton_8})
    {
        _cueButtons[index]=buttonP;
        buttonP->defaultColor(CustomButton::DEFAULT_COLORS[index]);
        buttonP->currentColor(CustomButton::CB_GREY);
        buttonP->btnNumber(index);
        changeButtonColor(buttonP, buttonP->currentColor());
        ++index;
     }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CueButton_1_leftClicked() {
    changeButtonColor(_cueButtons[0], _cueButtons[0]->defaultColor());
    changeButtonText(_cueButtons[0], "Cue 1");
}
void MainWindow::on_CueButton_2_leftClicked() {
    changeButtonColor(_cueButtons[1], _cueButtons[1]->defaultColor());
    changeButtonText(_cueButtons[1], "Cue 2");
}
void MainWindow::on_CueButton_3_leftClicked() {
    changeButtonColor(_cueButtons[2], _cueButtons[2]->defaultColor());
    changeButtonText(_cueButtons[2], "Cue 3");
}
void MainWindow::on_CueButton_4_leftClicked() {
    changeButtonColor(_cueButtons[3], _cueButtons[3]->defaultColor());
    changeButtonText(_cueButtons[3], "Cue 4");
}
void MainWindow::on_CueButton_5_leftClicked() {
    changeButtonColor(_cueButtons[4], _cueButtons[4]->defaultColor());
    changeButtonText(_cueButtons[4], "Cue 5");
}
void MainWindow::on_CueButton_6_leftClicked() {
    changeButtonColor(_cueButtons[5], _cueButtons[5]->defaultColor());
    changeButtonText(_cueButtons[5], "Cue 6");
}
void MainWindow::on_CueButton_7_leftClicked() {
    changeButtonColor(_cueButtons[6], _cueButtons[6]->defaultColor());
    changeButtonText(_cueButtons[6], "Cue 7");
}
void MainWindow::on_CueButton_8_leftClicked() {
    changeButtonColor(_cueButtons[7], _cueButtons[7]->defaultColor());
    changeButtonText(_cueButtons[7], "Cue 8");
}

void MainWindow::on_CueButton_1_rightClicked() {
    changeButtonColor(_cueButtons[0], CustomButton::CB_BLUE);
    showCustomCueDialog(0);
}
void MainWindow::on_CueButton_2_rightClicked() {
    changeButtonColor(_cueButtons[1], CustomButton::CB_BLUE);
    changeButtonText(_cueButtons[1], "Custom");
}
void MainWindow::on_CueButton_3_rightClicked() {
    changeButtonColor(_cueButtons[2], CustomButton::CB_BLUE);
    changeButtonText(_cueButtons[2], "Custom");
}
void MainWindow::on_CueButton_4_rightClicked() {
    changeButtonColor(_cueButtons[3], CustomButton::CB_BLUE);
    changeButtonText(_cueButtons[3], "Custom");
}
void MainWindow::on_CueButton_5_rightClicked() {
    changeButtonColor(_cueButtons[4], CustomButton::CB_BLUE);
    changeButtonText(_cueButtons[4], "Custom");
}
void MainWindow::on_CueButton_6_rightClicked() {
    changeButtonColor(_cueButtons[5], CustomButton::CB_BLUE);
    changeButtonText(_cueButtons[5], "Custom");
}
void MainWindow::on_CueButton_7_rightClicked() {
    changeButtonColor(_cueButtons[6], CustomButton::CB_BLUE);
    changeButtonText(_cueButtons[6], "Custom");
}
void MainWindow::on_CueButton_8_rightClicked() {
    changeButtonColor(_cueButtons[7], CustomButton::CB_BLUE);
    changeButtonText(_cueButtons[7], "Custom");
}

void MainWindow::on_CueButton_1_shiftedRightClicked() {
    changeButtonColor(_cueButtons[0], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[0], "");
    }
void MainWindow::on_CueButton_2_shiftedRightClicked() {
    changeButtonColor(_cueButtons[1], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[1], "");
}
void MainWindow::on_CueButton_3_shiftedRightClicked() {
    changeButtonColor(_cueButtons[2], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[2], "");
}
void MainWindow::on_CueButton_4_shiftedRightClicked() {
    changeButtonColor(_cueButtons[3], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[3], "");
}
void MainWindow::on_CueButton_5_shiftedRightClicked() {
    changeButtonColor(_cueButtons[4], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[4], "");
}
void MainWindow::on_CueButton_6_shiftedRightClicked() {
    changeButtonColor(_cueButtons[5], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[5], "");
}
void MainWindow::on_CueButton_7_shiftedRightClicked() {
    changeButtonColor(_cueButtons[6], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[6], "");
}
void MainWindow::on_CueButton_8_shiftedRightClicked() {
    changeButtonColor(_cueButtons[7], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[7], "");
}

void MainWindow::on_CueButton_1_shiftedLeftClicked() {
    changeButtonColor(_cueButtons[0], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[0], "");
}
void MainWindow::on_CueButton_2_shiftedLeftClicked() {
    changeButtonColor(_cueButtons[1], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[1], "");
}
void MainWindow::on_CueButton_3_shiftedLeftClicked() {
    changeButtonColor(_cueButtons[2], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[2], "");
}
void MainWindow::on_CueButton_4_shiftedLeftClicked() {
    changeButtonColor(_cueButtons[3], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[3], "");
}
void MainWindow::on_CueButton_5_shiftedLeftClicked() {
    changeButtonColor(_cueButtons[4], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[4], "");
}
void MainWindow::on_CueButton_6_shiftedLeftClicked() {
    changeButtonColor(_cueButtons[5], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[5], "");
}
void MainWindow::on_CueButton_7_shiftedLeftClicked() {
    changeButtonColor(_cueButtons[6], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[6], "");
}
void MainWindow::on_CueButton_8_shiftedLeftClicked() {
    changeButtonColor(_cueButtons[7], CustomButton::CB_GREY);
    changeButtonText(_cueButtons[7], "");
}


void MainWindow::processCueButtonLeftClick(unsigned index)
{
    if(index >= NUM_CUE_BUTTONS)
        qDebug()
            <<"Bad Cue Button index "<< index
            << ".  Shound be between " << 0
            << " and " << NUM_CUE_BUTTONS-1;
    changeButtonColor(_cueButtons[index], "#ff0000");
}

void MainWindow::processCueButtonRightClick(unsigned index)
{
    if(index >= NUM_CUE_BUTTONS)
        qDebug()
            <<"Bad Cue Button index "<< index
            << ".  Shound be between " << 0
            << " and " << NUM_CUE_BUTTONS-1;
    changeButtonColor(_cueButtons[index], "#0000ff");
}

void MainWindow::changeButtonColor(QPushButton *button, const QString &color) {
    // Static regular expression to match and replace the background color
    static QRegularExpression regex("background-color: #[0-9a-fA-F]{6};");

    // Get the current stylesheet
    QString styleSheet = button->styleSheet();
    QRegularExpressionMatch match = regex.match(styleSheet);

    if (match.hasMatch()) {
        // If the background-color is found, replace it with the new color
        styleSheet.replace(regex, QString("background-color: %1;").arg(color));
    } else {
        // If the background-color is not found, add it
        styleSheet.append(QString("background-color: %1;").arg(color));
    }

    // Set the updated stylesheet back to the button
    button->setStyleSheet(styleSheet);
}

void MainWindow::changeButtonColor(CustomButton *button, const QString &color) {
    changeButtonColor((QPushButton*)button, color);
    button->currentColor(color);
}

void MainWindow::changeButtonText(QPushButton *button, const QString &text) {
    button->setText(text);
}


void MainWindow::showCustomCueDialog(unsigned cueNum) {
    bool ok;
    CustomButton* btn(_cueButtons[cueNum]);
    QString text = QInputDialog::getText(nullptr, "Custom Cue",
                                         "Text:", QLineEdit::Normal,
                                         btn->text(), &ok);
    if (ok) {
        // User entered some text and pressed OK
        _cueButtons[cueNum]->setText(text);
        _cueButtons[cueNum]->setToolTip(text);
    }
}
