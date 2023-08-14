#include <dpp/dpp.h>
#include <sstream>
#include <csignal>
#include "utils/secrets.hpp"
#include "commands/links/bingo.hpp"
#include "commands/links/dominion.hpp"
#include "commands/links/earthlings.hpp"
#include "commands/links/eisen.hpp"
#include "commands/links/protein.hpp"

int main() {
    dpp::cluster client(token, dpp::i_all_intents);
    client.on_log(dpp::utility::cout_logger());

    client.on_slashcommand([&client](const dpp::slashcommand_t &event) {
        if (event.command.get_command_name() == "bingo") {
            handle_bingo(event);
        } else if (event.command.get_command_name() == "dominion") {
            handle_dominion(event);
        } else if (event.command.get_command_name() == "earthlings") {
            handle_earthlings(event);
        } else if (event.command.get_command_name() == "eisen") {
            handle_eisen(event);
        } else if (event.command.get_command_name() == "protein") {
            handle_protein(event);
        }
    });

    client.on_ready([&client](const dpp::ready_t &event) {
        if (dpp::run_once<struct register_bot_commands>()) {
            std::vector<dpp::slashcommand> commands = {
              command_bingo(),
              command_dominion(),
              command_earthlings(),
              command_eisen(),
              command_protein()
            };

            client.global_bulk_command_create(commands, [&client](const dpp::confirmation_callback_t &event) {
                if (event.is_error()) {
                    client.log(dpp::ll_error, "error creating slash commands: " + event.http_info.body);
                } else {
                    client.log(dpp::ll_info, "success creating slash commands");
                }
            });
        }
    });

    client.start(dpp::st_wait);

    return 0;
}
