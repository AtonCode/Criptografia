#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>

class Message
{
    private:
        std::string  message;
        std::string  public_Key_Sender;
        std::string  public_Key_Receiver;
        

    public:
        Message();
        ~Message();

        void setMessage(std::string  message);
        std::string getMessage();

        void setPublicKeySender(std::string public_Key);
        std::string getPublicKeySender();
        
        void setPublicKeyReceiver(std::string public_Key);
        std::string getPublicKeyReceiver();

        void encrypt();
    
        
};


#endif /* MESSAGE_H */
