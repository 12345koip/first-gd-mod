//silly test mod idk

#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

// $on_mod(Loaded) {
//     FLAlertLayer::create(
//         "Hello!",
//         "testing ok thanks",
//         "OK"
//     )->show();
// }

class $modify(PlayLayer) {
    void destroyPlayer(PlayerObject* player, GameObject* object) {
        static int dc = 0;
        PlayLayer::destroyPlayer(player, object);

        if (dc++ != 0) {
            FLAlertLayer::create(
                "death",
                "you died. please get better at the game.",
                "OK"
            )->show();
        }
    }
};