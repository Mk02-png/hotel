#ifndef CLIENT_H
#define CLIENT_H
#include <string>

class  Client{


    public:

    Client()=default;
    Client(std::string id, std::string nom, std::string prenom);
    std::string getId();
    std::string getNom();
    std::string getPrenom();
    void afficher();


    private:
    std::string id_;
    std::string nom_;
    std::string prenom_;



};
#endif