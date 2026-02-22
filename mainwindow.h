#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_converter_clicked();   // button slot

private:
    Ui::MainWindow *ui;

    // helper functions using your old logic
    QString decToBin(int n);
    QString decToOct(int n);
    QString decToHex(int n);
    int binToDec(const QString &s, bool &ok);
    int octToDec(const QString &s, bool &ok);
    int hexToDec(const QString &s, bool &ok);
};

#endif // MAINWINDOW_H
