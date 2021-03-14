#include "snowman.hpp"

#include <iostream>
#include <stdexcept>

constexpr int TEN_MILION = 10000000;
constexpr int ONE_MILION = 1000000;
constexpr int HUNDRED_THOUSAND = 100000;
constexpr int TEN_THOUSAND = 10000;
constexpr int ONE_THOUSAND = 1000;
constexpr int ONE_HUNDRED = 100;
constexpr int TEN = 10;

using namespace std;
namespace ariel{

    string Hat(int number){
        switch(number){
            case 1:
                return "_===_ ";
            case 2:
                return " ___ \n .....";
            case 3:
                return "  _  \n  /_\\ ";
            case 4:
                return " ___ \n (_*_)";
            default:
                throw invalid_argument ("please enter a valid hat number (1-4)");
        }
    }

    string Nose_Mouth(int number){
        switch(number){
            case 1:
                return ",";
            case 2:
                return ".";
            case 3:
                return "_";
            case 4:
                return " ";
            default:
                throw invalid_argument ("please enter a valid nose/mouth number (1-4)");
        }
    }

    string Eye(int number){
        switch(number){
            case 1:
                return ".";
            case 2:
                return "o";
            case 3:
                return "O";
            case 4:
                return "-";
            default:
                throw invalid_argument ("please enter a valid eye number (1-4)");
        }
    }

    string LeftArm_first(int number){
        switch(number){
            case 1:
                return "";
            case 2:
                return "\\";
            case 3:
                return " ";
            case 4:
                return "";
            default:
                throw invalid_argument ("please enter a valid left arm number (1-4)");
        }
    }

    string LeftArm_second(int number){
        switch(number){
            case 1:
                return "<";
            case 2:
                return "";
            case 3:
                return "/";
            case 4:
                return " ";
            default:
                throw invalid_argument ("please enter a valid left arm number (1-4)");
        }
    }

    string RightArm_first(int number){
        switch(number){
            case 1:
                return "";
            case 2:
                return "/";
            case 3:
                return " ";
            case 4:
                return "";
            default:
                throw invalid_argument ("please enter a valid right arm number (1-4)");
        }
    }

    string RightArm_second(int number){
        switch(number){
            case 1:
                return ">";
            case 2:
                return "";
            case 3:
                return "\\";
            case 4:
                return " ";
            default:
                throw invalid_argument ("please enter a valid right arm number (1-4)");
        }
    }

    string Torso(int number){
        switch(number){
            case 1:
                return "( : )";
            case 2:
                return "(] [)";
            case 3:
                return "(> <)";
            case 4:
                return "(   )";
            default:
                throw invalid_argument ("please enter a valid torso number (1-4)");
        }
    }

    string Base(int number){
        switch(number){
            case 1:
                return "( : )";
            case 2:
                return "(\" \")";
            case 3:
                return "(___)";
            case 4:
                return "(   )";
            default:
                throw invalid_argument ("please enter a valid base number (1-4)");
        }
    }
    string snowman(int number){
//         HHHHH
//         HHHHH
//        X(LNR)Y
//        X(TTT)Y
//         (BBB)
        string snowman = " " + Hat(number / TEN_MILION) + "\n" + LeftArm_first((number / (ONE_THOUSAND)) % TEN) +
                "(" + Eye((number / (HUNDRED_THOUSAND)) % TEN) +Nose_Mouth((number / (ONE_MILION)) % TEN) +
                Eye((number / (TEN_THOUSAND)) % TEN) + ")" + RightArm_first((number / (ONE_HUNDRED)) % TEN) + "\n" +
                LeftArm_second((number / (ONE_THOUSAND)) % TEN) + Torso((number / (TEN)) % TEN) +
                RightArm_second((number / (ONE_HUNDRED)) % TEN) + "\n" +  " " + Base(number % TEN) + " " + "\n";

        return snowman;
    }
}