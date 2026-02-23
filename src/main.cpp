//silly test mod idk

#include <Geode/Geode.hpp>

using namespace geode::prelude;

$on_mod(Loaded) {
    FLAlertLayer::create(
        "Hello!",
        "testing ok thanks",
        "OK"
    )->show();
}