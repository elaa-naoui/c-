#include "Chatbot.h"
#include <QMessageBox>
#include <QInputDialog>
#include <QString>

Chatbot::Chatbot(QObject *parent) : QObject(parent) {
    // Constructor implementation (if necessary)
}

void Chatbot::startChat() {
    bool ok;
    QString text;

    // Start the chat and prompt for user input
    QMessageBox::information(nullptr, "Chatbot", "Chat started! I am here to assist you.");
    text = QInputDialog::getText(nullptr, "************ Welcome to C.A.I chatbot ************",
                                 "Type 'menu' to see the available options or if you have a request feel free to ask.", QLineEdit::Normal, "", &ok);

    while (ok && !text.isEmpty()) {
        if (text.toLower() == "hi") {
            QMessageBox::information(nullptr, "Chatbot", "Hello! I am C.A.I, an AI chatbot. How can I help you?");
        }
        else if (text.toLower() == "hello") {
            QMessageBox::information(nullptr, "Chatbot", "Hi! I am C.A.I, your assistant. How can I assist you?");
        }
        else if (text.toLower() == "how are you") {
            QMessageBox::information(nullptr, "Chatbot", "I am just a chatbot, but thanks for asking! How can I help?");
        }
        else if (text.toLower() == "what are you doing") {
            QMessageBox::information(nullptr, "Chatbot", "I am here to assist you with your questions.");
        }
        else if (text.toLower() == "menu") {
            QMessageBox::information(nullptr, "Menu",
                                     "Available options:\n"
                                     "- general chat.\n"
                                     "- Type 'generate email' to generate an email to your boss.\n"
                                     "- Type 'generate complaint' to generate a complaint.\n"
                                     "- calculator \n"
                                     "- Type 'Bye' to end the conversation.");
        }
        else if (text.toLower() == "calculator") {
            QMessageBox::information(nullptr, "Menu",
                                     "Available options:\n"
                                     "- Type 'subtract' to subtract numbers.\n"
                                     "- Type 'multiply' to multiply numbers.\n"
                                     "- Type 'divide' to divide numbers.\n"
                                     "- Type 'Bye' to end the conversation.");
        }

        else if (text.toLower() == "generate email") {
            QString subject = QInputDialog::getText(nullptr, "Subject", "Enter the subject of the email:");
            generateEmail(subject);  // Call function to generate email
        }
        else if (text.toLower() == "generate complaint") {
            QString subject = QInputDialog::getText(nullptr, "Subject", "Enter the subject of the complaint:");
            generateComplaint(subject);  // Call function to generate complaint
        }
        else if (text.toLower() == "sum" || text.toLower() == "subtract" ||
                 text.toLower() == "multiply" || text.toLower() == "divide") {
            performCalculation(text);  // Call function to handle math operation
        }
        else if (text.toLower() == "bye") {
            QMessageBox::information(nullptr, "Goodbye", "Goodbye! Have a nice day.");
            break;  // Exit the loop and end the conversation
        }
        else {
            QMessageBox::information(nullptr, "Chatbot Response", "Sorry, I don't understand that request.");
        }

        // After handling the current input, prompt the user again
        text = QInputDialog::getText(nullptr, "C.A.I Chatbot",
                                     "Type 'menu' to see the available options or ask a question:", QLineEdit::Normal, "", &ok);

        if (!ok || text.isEmpty()) {
            // If the user enters an empty string, ask for a valid question or request
            QMessageBox::information(nullptr, "Chatbot", "Please enter a valid question or request.");
            text = QInputDialog::getText(nullptr, "C.A.I Chatbot",
                                         "Type 'menu' to see the available options or ask a question:", QLineEdit::Normal, "", &ok);
        }
    }
}

void Chatbot::generateEmail(const QString &subject) {
    QString body = "Dear [Boss's Name],\n\n"
                   "I hope this email finds you well. I am writing to inform you about [mention the purpose or details here].\n\n"
                   "If you have any questions or need further clarification, please let me know.\n\n"
                   "Thank you for your time and attention.\n\n"
                   "Best regards,\n[Your Name]";

    QString email = "Subject: " + subject + "\n\n" + body;
    QMessageBox::information(nullptr, "Generated Email", "Here is the generated email:\n\n" + email);
}

void Chatbot::generateComplaint(const QString &subject) {
    QString body = "Dear [Company Name],\n\n"
                   "I am writing to file a complaint regarding [mention the issue]. I believe this is a serious matter that needs immediate attention.\n\n"
                   "I request that appropriate actions be taken to resolve the situation as soon as possible.\n\n"
                   "Please inform me of any steps you will take to address this issue.\n\n"
                   "Sincerely,\n[Your Name]";

    QString complaint = "Subject: " + subject + "\n\n" + body;
    QMessageBox::information(nullptr, "Generated Complaint", "Here is the generated complaint:\n\n" + complaint);
}

// This function handles basic math operations (sum, subtract, multiply, divide)
void Chatbot::performCalculation(const QString &operation) {
    bool ok1, ok2;
    int num1 = QInputDialog::getInt(nullptr, "Enter first number", "Enter the first number:", 0, -10000, 10000, 1, &ok1);
    if (!ok1) return;  // Exit if the user cancels or provides invalid input

    int num2 = QInputDialog::getInt(nullptr, "Enter second number", "Enter the second number:", 0, -10000, 10000, 1, &ok2);
    if (!ok2) return;  // Exit if the user cancels or provides invalid input

    int result = 0;
    if (operation.toLower() == "sum") {
        result = num1 + num2;
    } else if (operation.toLower() == "subtract") {
        result = num1 - num2;
    } else if (operation.toLower() == "multiply") {
        result = num1 * num2;
    } else if (operation.toLower() == "divide") {
        if (num2 == 0) {
            QMessageBox::critical(nullptr, "Error", "Cannot divide by zero.");
            return;
        }
        result = num1 / num2;
    }

    QMessageBox::information(nullptr, "Calculation Result", "The result is: " + QString::number(result));
}

