//
// Created by mrtuxa on 8/14/23.
//

#include <dpp/dpp.h>
#include <string>

void postLink(std::string link, const dpp::slashcommand_t& event) {
    return event.reply(link);
}



void post_an3x(std::string video, const dpp::slashcommand_t& event) {
    return event.reply("https://an3x.org/" + video);
}