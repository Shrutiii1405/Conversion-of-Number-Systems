#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // connect button if not auto-connected
    connect(ui->converter, &QPushButton::clicked,
            this, &MainWindow::on_converter_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_converter_clicked()
{
    QString inText = ui->inputbox->toPlainText().trimmed();
    if (inText.isEmpty()) {
        ui->outputbox->setPlainText("Please enter a value.");
        return;
    }

    QString from = ui->inputcombo->currentText();
    QString to   = ui->outputcombo->currentText();

    bool ok = true;
    int valueDec = 0;

    if (from == "Decimal") {
        valueDec = inText.toInt(&ok, 10);
    } else if (from == "Binary") {
        valueDec = binToDec(inText, ok);
    } else if (from == "Octal") {
        valueDec = octToDec(inText, ok);
    } else if (from == "Hexadecimal") {
        valueDec = hexToDec(inText, ok);
    }

    if (!ok) {
        ui->outputbox->setPlainText("Invalid input for selected base.");
        return;
    }

    QString result;
    if (to == "Decimal") {
        result = QString::number(valueDec);
    } else if (to == "Binary") {
        result = decToBin(valueDec);
    } else if (to == "Octal") {
        result = decToOct(valueDec);
    } else if (to == "Hexadecimal") {
        result = decToHex(valueDec);
    }

    ui->outputbox->setPlainText(result);
}
QString MainWindow::decToBin(int n)
{
    if (n == 0) return "0";
    QString r;
    while (n > 0) {
        r.prepend((n % 2) ? '1' : '0');
        n /= 2;
    }
    return r;
}

QString MainWindow::decToOct(int n)
{
    return QString::number(n, 8);
}

QString MainWindow::decToHex(int n)
{
    return QString::number(n, 16).toUpper();
}

int MainWindow::binToDec(const QString &s, bool &ok)
{
    ok = true;
    int val = 0;
    for (QChar c : s) {
        if (c != '0' && c != '1') { ok = false; return 0; }
        val = val * 2 + (c == '1' ? 1 : 0);
    }
    return val;
}

int MainWindow::octToDec(const QString &s, bool &ok)
{
    bool localOk;
    int v = s.toInt(&localOk, 8);
    ok = localOk;
    return localOk ? v : 0;
}

int MainWindow::hexToDec(const QString &s, bool &ok)
{
    bool localOk;
    int v = s.toInt(&localOk, 16);
    ok = localOk;
    return localOk ? v : 0;
}
