#include "deck.h"
#include "ui_deck.h"

Deck::Deck(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Deck)
    , scene(new QGraphicsScene(this))
{
    ui->setupUi(this);
    ui->OverviewWaveform->setScene(scene);
    QPixmap pixmap(":/images/Waveform.png");
    QGraphicsPixmapItem *item = new QGraphicsPixmapItem(pixmap);
    scene->addItem(item);
    ui->OverviewWaveform->fitInView(item, Qt::KeepAspectRatio);
}

Deck::~Deck()
{
    delete ui;
}
