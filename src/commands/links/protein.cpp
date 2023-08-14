//
// Created by mrtuxa on 8/14/23.
//



#include <dpp/dpp.h>
#include "../../utils/postLink.hpp"
dpp::slashcommand command_protein() {
    return dpp::slashcommand()
            .set_name("protein")
            .set_description("Lebensmittel mit mehr Protein als Rindfleisch");
}

void handle_protein(const dpp::slashcommand_t &event) {
    post_picture("protein", event);
}