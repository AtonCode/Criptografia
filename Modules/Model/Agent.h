#ifndef AGENT_H
#define AGENT_H

#include "Message.h"
#include <string>
#include <stack>

class Agent
{
    private:
        int id;
        int number_of_messagesForRead;
        std::string name;
        std::string password;
        std::string public_Key;
        std::stack<Message> messagesForRead;
        

    public:
        Agent();
        ~Agent();
        void setName(std::string name);
        std::string getName();

        void setPublicKey(std::string public_Key);
        std::string getPublicKey();

        void addMessage(Message message);
        Message getMessage();

        void setPassword(std::string password);

        void decrypt();
        
};


#endif /* AGENT_H */
