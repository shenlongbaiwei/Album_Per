#ifndef PICBUTTON_H
#define PICBUTTON_H

#include <QObject>
#include <QPushButton>

class PicButton : public QPushButton
{
    Q_OBJECT
public:
    PicButton(QWidget *parent = nullptr);
    void SetIcons(const QString &normal, const QString &hover, const QString &pressed);
    bool event(QEvent*event) override;
private:
    void setHoverIcon();
    void setNormalIcon();
    void setPressIcon();
    QString _normal;
    QString _hover;
    QString _pressed;

};

#endif // PICBUTTON_H
