#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QDialog>

namespace Ui{
    class GoToCellDialog ;
}

class GoToCellDialog : public QDialog{
    Q_OBJECT
    private:
        Ui::GoToCellDialog *ui;
    public :
        explicit GoToCellDialog (QWidget *parent = 0);
        ~GoToCellDialog();
    private slots:
    void on_lineEdit_textChanged();
};

#endif // GOTOCELLDIALOG H
