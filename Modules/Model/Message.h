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
        void encrypt();

};


#endif /* MESSAGE_H */
