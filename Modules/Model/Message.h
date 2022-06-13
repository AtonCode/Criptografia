#ifndef MESSAGE_H
#define MESSAGE_H

class Message
{
    private:
        char* message;
        char* public_Key;
        int length;

    public:
        Message();
        ~Message();
        void setMessage(char* message);
        void setPublicKey(char* public_Key);
        void encrypt();
        void decrypt();
};


#endif /* MESSAGE_H */
