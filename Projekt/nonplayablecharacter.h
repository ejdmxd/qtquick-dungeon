#ifndef NONPLAYABLECHARACTER_H
#define NONPLAYABLECHARACTER_H

#include <QObject>
#include "position.h"
#include "quest.h"
#include "position.h"


class Player;

class NonPlayableCharacter : public QObject
{
    Q_PROPERTY(int npcx READ getNPCX CONSTANT)
    Q_PROPERTY(int npcy READ getNPCX CONSTANT)


    Q_OBJECT
    Position* m_position = new Position;
    QString m_dialog = "Zdravim, diky, ze jsi prisel na pomoc, potrebuji pomoc zneskodnit vsechny monstra v dungeonu";
public:
    explicit NonPlayableCharacter(QObject *parent = nullptr);
    NonPlayableCharacter(int positionX, int positionY);
    Quest* m_quest = new Quest;
    void checkProgress(Quest* quest);
    Quest* giveQuest(Player* player);
    int getNPCX() const;
    int getNPCY() const;
signals:

};

#endif // NONPLAYABLECHARACTER_H
