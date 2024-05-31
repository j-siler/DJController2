#include "deck.h"
#include "ui_deck.h"
#include <QDebug>

Deck::Deck(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Deck),
    scene(new QGraphicsScene(this)),
    pixmapItem(nullptr)
{
    ui->setupUi(this);

    ui->OverviewWaveform->setScene(scene);
    ui->OverviewWaveform->setRenderHint(QPainter::Antialiasing);
    ui->OverviewWaveform->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->OverviewWaveform->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->OverviewWaveform->setAlignment(Qt::AlignLeft | Qt::AlignTop);
}

Deck::~Deck()
{
    delete ui;
}

void Deck::addImageToOverview(const QString &imagePath)
{
    QPixmap pixmap(imagePath);
    if (pixmap.isNull()) {
        qDebug() << "Failed to load the image from:" << imagePath;
        return;
    }

    originalPixmap = pixmap;

    if (!pixmapItem) {
        pixmapItem = new QGraphicsPixmapItem(pixmap);
        scene->addItem(pixmapItem);
    } else {
        pixmapItem->setPixmap(pixmap);
    }
    fitImageToView();
}

void Deck::fitImageToView()
{
    if (pixmapItem) {
        // Fit the item in the view's visible area
        ui->OverviewWaveform->fitInView(pixmapItem, Qt::IgnoreAspectRatio);
    }
}

void Deck::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    fitImageToView();  // Adjust the image size when the view size changes
}
