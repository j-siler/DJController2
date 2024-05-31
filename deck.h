#ifndef DECK_H
#define DECK_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsPixmapItem>
#include <QPixmap>

namespace Ui {
class Deck;
}

class Deck : public QWidget
{
    Q_OBJECT

public:
    explicit Deck(QWidget *parent = nullptr);
    ~Deck();

    void addImageToOverview(const QString &image); // New method to add an image

protected:
    void resizeEvent(QResizeEvent *event) override;

private:
    Ui::Deck *ui;
    QGraphicsScene *scene;
    QGraphicsPixmapItem *pixmapItem;
    QPixmap originalPixmap;

    void fitImageToView();
};

#endif // DECK_H
