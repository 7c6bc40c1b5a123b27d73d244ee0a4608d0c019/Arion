#include <arion/arion.hpp>
#include <filesystem>
#include <iostream>

int main() {
    std::unique_ptr<Config> config = std::make_unique<Config>();
    config->set_field<arion::ARION_LOG_LEVEL>("log_lvl", arion::ARION_LOG_LEVEL::OFF);
    std::shared_ptr<Arion> arion = Arion::new_instance({"./target"}, "/", {}, std::filesystem::current_path(), std::move(config));
    arion->run();
}