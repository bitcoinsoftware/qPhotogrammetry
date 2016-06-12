#ifndef QPHOTOGRAMMETRYDLG_H
#define QPHOTOGRAMMETRYDLG_H

#include <QJsonObject>
#include "ui_qPhotogrammetryDlg.h"

namespace Ui {
class qPhotogrammetryDlg;
}

class qPhotogrammetryDlg : public QDialog, public Ui::qPhotogrammetryDlg
{
    Q_OBJECT

public:
    QString pathToFolder = QString();
    QString pathToOutputFolder = QString();
    QString pathToOpenMVGRelease = QString();

    explicit qPhotogrammetryDlg(QWidget *parent = 0);
    ~qPhotogrammetryDlg();

    QString getPath(){
        return pathToFolder;
    }

private slots:
    void on_pushButton_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    QJsonObject get_sparse_recon_settings();

    QJsonObject get_dense_recon_settings();

    QJsonObject get_mesh_tex_settings();

    QJsonObject get_georeference_settings();

private:
    Ui::qPhotogrammetryDlg *ui;
};

#endif // QPHOTOGRAMMETRYDLG_H
