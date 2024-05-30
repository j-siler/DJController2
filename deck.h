#ifndef DECK_H
#define DECK_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>


namespace Ui {
class Deck;
}

class Deck : public QWidget
{
    Q_OBJECT

public:
    explicit Deck(QWidget *parent = nullptr);
    ~Deck();

private:
    Ui::Deck *ui;
    QGraphicsScene *scene;
};

#endif // DECK_H
