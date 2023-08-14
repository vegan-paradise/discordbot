//
// Created by mrtuxa on 8/14/23.
//

//
// Created by mrtuxa on 8/14/23.
//

#include <dpp/dpp.h>
#include "../utils/postLink.hpp"
dpp::slashcommand command_earthlings() {
    return dpp::slashcommand()
            .set_name("earthlings")
            .set_description("Schickt Link zu Earthlings");
}

void handle_dominion(dpp::cluster& client, const dpp::slashcommand_t& event) {
    post_an3x("earthlings", event);
}