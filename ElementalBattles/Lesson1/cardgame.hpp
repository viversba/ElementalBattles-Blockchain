#include <eosio/eosioi.hpp>

using namespace std;
using namespace eosio;

class[[eosio::contract]] cardgame : public eosio::contract{

    public :
        cardgame(name receiver, name code, datastream<const char *> ds) : conract(receiver, code, ds){}

    private :

        [[eosio::table]] struct user_info{}
};