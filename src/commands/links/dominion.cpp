//
// Created by mrtuxa on 8/14/23.
//

#include <dpp/dpp.h>
#include "../../utils/postLink.hpp"
dpp::slashcommand command_dominion() {
    return dpp::slashcommand()
            .set_name("dominion")
            .set_description("Schickt Link zu Dominion");
}

void handle_dominion(dpp::cluster& client, const dpp::slashcommand_t& event) {
    post_an3x("dominion", event);
}