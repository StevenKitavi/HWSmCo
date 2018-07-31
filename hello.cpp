#include <eosiolib/eosio.hpp>
#include <eosiolib/print.http>
using namespace eosio;


class hello : public eosio:: contract {
    public:
        using contract::contract;

        /// @abi action
        void hi( account_name user ) {
            print( "hello, ", name{user} );

        }
};
EOSIO_ABI( hello, (hi) )

