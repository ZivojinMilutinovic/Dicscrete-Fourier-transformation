#include "view.h"

View::View(QWidget *parent) : QWidget(parent)
{

}

void View::paintEvent(QPaintEvent *event)
{

    QPainter *painter=new QPainter(this);

    painter->translate(0,100);
    painter->drawLine(235,0,235,150);
    painter->drawLine(235,200,235,350);
    painter->drawLine(20,75,450,75);
    painter->drawLine(20,275,450,275);

    painter->drawText(238,5,"y(t)");
    painter->drawText(446,84,"t");
    painter->drawText(238,205,"Y(f)");
    painter->drawText(446,284,"f");

    QPen pen;

    QFont font;
    font.setBold(true);
    font.setPixelSize(12);
    painter->setFont(font);
  painter->setPen(pen);
    painter->drawText(50,185,"Diskretna Furijeova transformacija signala:");





    if(prosledjeni)
    {
        QPointF * niz=new QPointF[points.length()];
        for(int i=0;i<points.length();i++)
            niz[i]=points[i];
        painter->drawPolyline(niz,points.length());

        double x1,x2;
        x1 = points[0].x();
        x2 = points[2].x();

        painter->drawText(x1-11,89,"-T/2");
        painter->drawText(x2-8,89,"T/2");

         pen.setWidth(3);
         pen.setColor(Qt::red);
         painter->setPen(pen);
         niz=new QPointF[pointsDFT.length()];
         for(int i=0;i<pointsDFT.length();i++)
            niz[i]=pointsDFT[i];


             painter->drawPoints(niz,pointsDFT.length());


             pen.setWidth(1);
             pen.setColor(Qt::blue);
             painter->setPen(pen);
        for(int i=0;i<pointsDFT.length();i++)
        {
            painter->drawLine(niz[i],QPointF(niz[i].x(),275));
        }

         /*
        foreach (QPointF p, pointsDFT) {

           painter->drawPoint(p);
        }
        */
    }









}
void View::Preuzmi(double f, bool d)
{
//racunica
    prosledjeni=true;
    frekvencija=f/10;
    pravougaona=d;
    points.clear();
    pointsDFT.clear();

    if(pravougaona)
    {
        double offset=190-190/(sqrt(frekvencija*10))+45;
        points.append(QPointF(offset,75));
        points.append(QPointF(offset,20));
        offset=470-offset;
        points.append(QPointF(offset,20));
        points.append(QPointF(offset,75));


    }
    else
    {
        double offset=190-190/(sqrt(frekvencija*10))+45;
        points.append(QPointF(offset,75));
        points.append(QPointF(235,20));
        offset=470-offset;
        points.append(QPointF(offset,75));

    }
    dft();

 this->update();
}


void View::dft()
{
    vrednosti=new double[95];
    if(pravougaona)
    {
        for(int x=45;x<=425;x+=5)
        {
            double xK=(x-235)/5;
            double y;
            if(xK==0.0)
                y=55;
            else
             //FUNKCIJA ZA IZRACUNAVANJE DFT PRAVOUGAONOG SIGNALA
                y=sin(frekvencija*xK)/(xK*frekvencija)*55;
            double yK=275-y;
            pointsDFT.append(QPointF(x,yK));

        }
    }
    else
    {
        for(int x=45;x<=425;x+=5)
        {
            double xK=(x-235)/5;
            double y;
            if(xK==0.0)
                y=55;
            else
              //FUNKCIJA ZA IZRACUNAVANJE DFT TROUGANOG SIGNALA
                y=pow(sin(frekvencija*xK/2)/(xK*frekvencija/2),2)*55;
            double yK=275-y;
            pointsDFT.append(QPointF(x,yK));

        }
    }
}
