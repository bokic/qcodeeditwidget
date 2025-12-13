#include "qappmaindialog.h"
#include <QCodeEditWidget/qcodeeditwidget.h>
#include "ui_qappmaindialog.h"

QAppMainDialog::QAppMainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QAppMainDialog)
{
    ui->setupUi(this);

    QCodeEditWidget *widget = new QCodeEditWidget(this);
    widget->setObjectName(QString::fromUtf8("widget"));

    ui->gridLayout->addWidget(widget, 0, 0, 1, 1);
}

QAppMainDialog::~QAppMainDialog()
{
    delete ui;
    ui = nullptr;
}

void QAppMainDialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type())
    {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
