//
// Created by mrtuxa on 8/14/23.
//

#include <dpp/dpp.h>
#include "../../utils/postLink.hpp"
dpp::slashcommand command_eisen() {
    return dpp::slashcommand()
            .set_name("eisen")
            .set_description("Lebensmittel mit mehr Eisen als Rindfleisch");
}

void handle_eisen(dpp::cluster& client, const dpp::slashcommand_t& event) {
   post_picture("eisen", event);
}