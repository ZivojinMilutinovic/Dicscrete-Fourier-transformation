#ifndef VIEW_H
#define VIEW_H

#include <QWidget>
#include <QPainter>
#include "QFont"
#include <complex>
using namespace std;

class View : public QWidget
{
    Q_OBJECT
public:
    explicit View(QWidget *parent = nullptr);
    void Preuzmi(double a,bool d);
    void dft();
protected:
    void paintEvent(QPaintEvent *event);
    private:
double frekvencija;
bool pravougaona;
bool prosledjeni=false;
QList<QPointF> points;
QList<QPointF> pointsDFT;
double* vrednosti;

signals:



public slots:
};

#endif // VIEW_H
