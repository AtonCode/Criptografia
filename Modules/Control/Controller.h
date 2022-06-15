#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "../Model/Message.h"
#include "../Model/Agent.h"
#include <string>
#include <list>

class Controller
{
    private:
        std::list<Agent> agents;

    public:
        Controller();
        ~Controller();
        void sendMessage(Message message);
        void makeAgent(std::string name, std::string public_Key, std::string password);
        void loginAgentByPublicKey(std::string public_Key);

        void update();
        void errase_all();

};


#endif /* CONTROLLER_H */
