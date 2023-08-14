//
// Created by mrtuxa on 8/15/23.
//


#include <dpp/dpp.h>
#include "../../utils/postLink.hpp"

dpp::slashcommand command_bingo() {
    return dpp::slashcommand()
            .set_name("bingo")
            .set_description("Bingo Bild");
}

void handle_bingo(dpp::cluster& client, const dpp::slashcommand_t& event) {
    post_picture("bingo", event);
}