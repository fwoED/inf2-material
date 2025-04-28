#ifndef QUESTION_H
#define QUESTION_H

#include <string>

struct Question {
    std::string text;
    std::string answer;

    //Standardkonstruktor
    Question();

    //Konstruktor für Fragen mit Antworten.
    Question(std::string q, std::string a);

    //Erwartet einen Antworttext und liefert true, falls korrekt.
    bool check_answer(std::string);
};

#endif
