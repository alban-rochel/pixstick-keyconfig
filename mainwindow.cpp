#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->comboUp, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->comboDown, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->comboLeft, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->comboRight, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));

    connect(ui->combo1, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->combo2, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->combo3, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->combo4, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));

    connect(ui->combo5, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->combo6, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->combo7, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->combo8, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));

    connect(ui->combo9, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));

    connect(ui->altCombo1, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->altCombo2, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->altCombo3, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->altCombo4, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));

    connect(ui->altCombo5, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->altCombo6, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->altCombo7, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));
    connect(ui->altCombo8, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));

    connect(ui->altCombo9, SIGNAL(currentIndexChanged(int)), this, SLOT(plop()));

    ui->comboUp->setCurrentText("Pad Up");
    ui->comboDown->setCurrentText("Pad Down");
    ui->comboLeft->setCurrentText("Pad Left");
    ui->comboRight->setCurrentText("Pad Right");

    ui->combo1->setCurrentText("Pad 1");
    ui->combo2->setCurrentText("Pad 2");
    ui->combo3->setCurrentText("Pad 3");
    ui->combo4->setCurrentText("Pad 4");

    ui->combo5->setCurrentText("Pad 5");
    ui->combo6->setCurrentText("Pad 6");
    ui->combo7->setCurrentText("Pad 7");
    ui->combo8->setCurrentText("Pad 8");

    ui->combo9->setCurrentText("Pad 9");

    ui->altCombo1->setCurrentText("Pad 10");
    ui->altCombo2->setCurrentText("Pad 11");
    ui->altCombo3->setCurrentText("Pad 12");
    ui->altCombo4->setCurrentText("Pad 13");

    ui->altCombo5->setCurrentText("Pad 14");
    ui->altCombo6->setCurrentText("Pad 15");
    ui->altCombo7->setCurrentText("Pad 16");
    ui->altCombo8->setCurrentText("Pad 17");

    ui->altCombo9->setCurrentText("Pad 18");

    plop();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::plop()
{
    QString str = ui->comboUp->currentData().toString();
    str += ui->comboDown->currentData().toString();
    str += ui->comboLeft->currentData().toString();
    str += ui->comboRight->currentData().toString();

    str += ui->combo1->currentData().toString();
    str += ui->combo2->currentData().toString();
    str += ui->combo3->currentData().toString();
    str += ui->combo4->currentData().toString();

    str += ui->combo5->currentData().toString();
    str += ui->combo6->currentData().toString();
    str += ui->combo7->currentData().toString();
    str += ui->combo8->currentData().toString();

    str += ui->combo9->currentData().toString();

    str += ui->altCombo1->currentData().toString();
    str += ui->altCombo2->currentData().toString();
    str += ui->altCombo3->currentData().toString();
    str += ui->altCombo4->currentData().toString();

    str += ui->altCombo5->currentData().toString();
    str += ui->altCombo6->currentData().toString();
    str += ui->altCombo7->currentData().toString();
    str += ui->altCombo8->currentData().toString();

    str += ui->altCombo9->currentData().toString();

    ui->lineEdit->setText(str);
}
