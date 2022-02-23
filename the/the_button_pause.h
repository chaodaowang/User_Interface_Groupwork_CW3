#ifndef THE_BUTTON_PAUSE_H
#define THE_BUTTON_PAUSE_H

#include <QPushButton>
#include "the_player.h"

class PauseButton : public QPushButton {
    Q_OBJECT
public:
    PauseButton(const QString &text);
    void makeConnections();
signals:
    void pauseButton_pushed();
public slots:
    void changeIcon(QMediaPlayer::State);

};

#endif // THE_BUTTON_PAUSE_H
