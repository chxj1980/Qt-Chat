#ifndef CHATWIDGET_H
#define CHATWIDGET_H

#include <QMainWindow>
#include "../Data/userlist.h"
#include "../Data/userdata.h"
#include "../Data/message.h"

namespace Ui {
class ChatWidget;
}

class ChatWidget : public QMainWindow
{
    Q_OBJECT
public:

    explicit ChatWidget(QWidget *parent = 0);

    void addParticipant(const UserData &username);
    void removeParticipant(const QString &username);
    void addParticipants(const UserList &lst);
    void addMessage(const Message &msg);

    ~ChatWidget();

private slots:

    void on_SendButton_clicked();

signals:

    void messageSent(Message &msg);


private:
    Ui::ChatWidget *ui;
};

#endif // CHATWIDGET_H
