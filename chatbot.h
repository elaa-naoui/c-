#ifndef CHATBOT_H
#define CHATBOT_H

#include <QObject>
#include <QString>

class Chatbot : public QObject
{
    Q_OBJECT

public:
    explicit Chatbot(QObject *parent = nullptr);

public slots:
    void startChat();            // Start the chatbot conversation
    void generateEmail(const QString &subject);  // Generate email based on the subject
    void generateComplaint(const QString &subject);  // Generate complaint based on the subject
    void performCalculation(const QString &operation);  // Handle arithmetic operations
};

#endif // CHATBOT_H

