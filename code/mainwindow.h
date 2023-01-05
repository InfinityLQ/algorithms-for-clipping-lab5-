#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "plotarea.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_segments_clicked();

    void on_poly_clicked();

private:
    Ui::MainWindow *ui;
    PlotArea *area;
    QString segmentsPath = "D:\\Computer-graphics-programming-main (1)\\Computer-graphics-programming-main\\algorithms-for-clipping-segments-and-polygons(lab 5)\\code\\segments.txt";
    QString polygonPath = "D:\\Computer-graphics-programming-main (1)\\Computer-graphics-programming-main\\algorithms-for-clipping-segments-and-polygons(lab 5)\\code\\polygon.txt";
    void ProcessSegments();
    void ProcessPoly();
    void ClipAfterLine(std::vector<QPointF>& polygon, int cord, int bit);
    int getCode(qreal x, qreal y) const;
    int getCode(const QPointF& p) const;
};
#endif // MAINWINDOW_H
