 #include "client.h"
 #include <iostream>
 
 



// quand on aura la liste de clients
// avant d'introudire le id dans le constructeur verifier qu'il est unique
    Client::Client(std::string id, std::string nom, 
    std::string prenom){
        id_=id;
        nom_=nom;
        prenom_=prenom;
    }
    std::string Client::getId(){
        return id_;
    }
    std::string Client::getNom(){
        return nom_;
    }
    std::string Client::getPrenom(){
        return prenom_;
    }

    void Client::afficher(){
        std::cout<<"Nom :"<<nom_<<std::endl;
        std::cout<<"Prenom :"<<prenom_<<std::endl;

    }