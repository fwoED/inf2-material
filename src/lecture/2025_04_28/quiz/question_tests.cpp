#include "question.h"
#include "question.cpp"



TEST_CASE("quiz")
{
    std::vector<Question> quiz;

    Question q1;
    q1.text = "Um wie viel Uhr beginnt die Vorlesung?";
    q1.answer = "Um 8 Uhr";

    Question q2;
    q2.text = "";
    
}

TEST_CASE("question_constructor"){
    Question q1()
}