#ifndef PICSHOW_H
#define PICSHOW_H

#include <QDialog>
#include<QPropertyAnimation>
namespace Ui {
class PicShow;
}

class PicShow : public QDialog
{
    Q_OBJECT

public:
    explicit PicShow(QWidget *parent = nullptr);
    //bool event(QEvent*event) override;
    void ReloadPic();
    ~PicShow();
protected:
    bool event(QEvent*event) override;


public slots:
    void SlotSelectItem(const QString&path);
    void SlotUpdatePic(const QString &_path);
private:
    void ShowPreNextBtns(bool b_show);

    Ui::PicShow *ui;
    QPropertyAnimation* _animation_show_pre;
    QPropertyAnimation*_animation_show_next;
    QString _selected_path;
    QPixmap _pix_map;
    bool _b_btnvisible;
signals:
    void SigNextClicked();
    void SigPreClicked();
};

#endif // PICSHOW_H
