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
            .set_name("eisen")
            .set_description("Lebensmittel mit mehr Eisen als Rindfleisch");
}

void handle_dominion(dpp::cluster& client, const dpp::slashcommand_t& event) {
    postLink("https://i.imgur.com/9WSXqGW.jpg", event);
}