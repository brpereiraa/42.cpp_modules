#pragma once

class Data {
    public:
        Data();
        Data(int nbr);
        Data(const Data &obj);
        ~Data();
        
        Data	&operator=(const Data &obj);

        int nbr;

};
