#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    string command;
    string question;
    string language;
    
    int rnd = rand();
    
    cout << "Write the command: ";
    cin >> command;
    
    // check
    if (command == "version" || command == "ver" || command == "vers") {
        cout << "\nVersion of the console: 0.7";
    }
    if (command == "clear" || command == "clr") {
        system("cls");
        cout << "Write the command: ";
    }
    if (command == "randomnumber" || command == "rnd") {
        rnd = rand();
        cout << "Your number: " << rnd;
    }
    if (command == "generatecode" || command == "gnrc") {
        cout << "What code should be generated: ";
        cin >> question;
        if (question == "print code" || question == "cout code" || question == "cout" || question == "print") {
            cout << "What programming language: ";
            cin >> language;
            if (language == "C++" || language == "c++" || language == "c ++") {
                cout << "cout << Hello World!; // Put quotes before and after Hello World";
            }
            if (language == "python" || language == "Python" || language == "py" || language == "Py") {
                cout << "print('Hello World!')";
            }
            if (language == "C#" || language == "c#" || language == "c #") {
                cout << "Console.WriteLine('Hello World!');";
            }
            if (language == "javascript" || language == "js") {
                cout << "console.log('Hello World!');";
            }
            if (language == "C" || language == "c") {
                cout << "printf('Hello World!');";
            }
        }
        if (question == "arifmetic operations" || question == "arifmeticoperations" || question == "Arifmetic Operations" || question == "Arifmeticoperations" || question == "arifoper") {
            cout << "Most commonly used in programming languages arithmetic operations are performed using the symbols: + (plus) - (minus) * (multiply) / (divide)";
            cout << "\nExample (с++): ";
            cout << "\nint a = 5;";
            cout << "\nint b = 5;";
            cout << "\nint summ = a + b;";
            cout << "\ncout << summ; // Output: 10";
        }
    }
    if (command == "question" || command == "Question" || command == "que") {
        cout << "What question would you like to ask: ";
        cin >> question;
        if (question == "Howtomovealine" || question == "howtomovealine" || question == "How to move a line" || question == "how to move a line") {
            cout << "Most commonly used in programming languages to move a line need to add stick tilted to the left and n (without space) before or after text in print or cout or printf or console.log or console.writeline.";
        }
    }
    if (command == "robloxscripts" || command == "rbxscripts" || command == "rbs") {
        cout << "Script type: ";
        cin >> question;
        if (question == "place" || question == "Place") {
            cout << "To what place: ";
            cin >> question;
            if (question == "Pet Simulator X" || question == "PetSimX" || question == "PSX") {
                cout << "loadstring(game:HttpGet('https://raw.githubusercontent.com/NukeVsCity/TheALLHACKLoader/main/NukeLoader'))()";
            }
        }
        if (question == "Exploit" || question == "exploit" || question == "exp") {
            cout << "1x1x1x1 script: loadstring(game:HttpGet('https://gist.githubusercontent.com/Srhhr/d9c517f37941b2feed8b83641a8289ff/raw/c418f0140a1e1aa1690215a933396f47c050ff5a/1x1x1x1script'))()";
            cout << "\nCrash/lag script: loadstring(game:HttpGet('https://gist.githubusercontent.com/Srhhr/5cac548ba8e1dd3a91139afd426257b8/raw/c4cee6cf5849b3d9f9f07be17ca079cbdf7ada97/RobloxCrashlagSCRIPT'))()";
        }
    }
    if (command == "calculator" || command == "Calculator" || command == "clc") {
        int ar_deistvie,num1,num2,summ;
        cout << "Calculator v2.0";
        cout << "\nChoose ( 1 = +, 2 = -, 3 = *, 4 = / ): ";
        cin >> ar_deistvie;
        cout << "1 number: ";
        cin >> num1;
        cout << "2 number: ";
        cin >> num2;
        if (ar_deistvie == 1) {
            summ = num1 + num2;
        }
        if (ar_deistvie == 2) {
            summ = num1 - num2;
        }
        if (ar_deistvie == 3) {
            summ = num1 * num2;
        }
        if (ar_deistvie == 4) {
            if (num1 < num2) {
                cout << "Error!";
            }
            else {
                summ = num1 / num2;
            }
        }
        cout << summ;
    }
    if (command == "lC++" || command == "lc++" || command == "lc ++") {
        cout << "https://code-live.ru/tag/cpp-manual/?page=1";
    }
    if (command == "credits" || command == "cred" || command == "cr") {
        cout << "All credits to: Srhhr";
    }
    if (command == "Csgo" || command == "csgo" || command == "CSGO" || command == "cs") {
        cout << "Enter a question or csgo command: ";
        cin >> question;
        if (question == "All ranks in csgo" || question == "Allranksincsgo" || question == "all ranks in csgo" ||  question == "allranksincsgo" ||  question == "arics") {
            cout << "All ranks in csgo: ";
            cout << "\nSilver I, Silver II, Silver III, Silver IV, Silver Elite, Silver Elite Master, Gold Nova I, Gold Nova II, Gold Nova III, Gold Nova Master, Master Guardian I, Master Guardian II,  Master Guardian Elite, Distinguished Master Guardian, Legendary Eagle, Legendary Eagle Master, Supreme Master First Class, The Global Elite";
        }
        if (question == "HTI simple radar" || question == "HTI Simple Radar" || question == "HTISimpleRadar" || question == "HTIsimpleradar" || question == "HTIsimrad") {
            cout << "1 step: download it from the link: readtldr.gg/simpleradar";
            cout << "\n2 step: choose your favorite radar (topic)";
            cout << "\n3 step: once you have downloaded the archive, transfer it to a location convenient for you and unzip it (Make sure CS:GO is closed)";
            cout << "\n4 step: Go to the folder where your games from the Steam library are installed, then follow this path: steamapps, common, Counter-Strike Global Offensive, csgo, resource";
            cout << "\n5 step: Save the destination folder in case you do something wrong";
            cout << "\n6 step: Go to the downloaded archive, open the '01 default' folder, and copy the files to the 'overviews' folder, replacing the files in the destination";
            cout << "\nFor normal radar display, play at resolutions of 1024 or higher.";
        }
    }
    return 0;
}
