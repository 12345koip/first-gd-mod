//why are you using this mod
//why
//ITS LITERALLY 17 LINES FOR THE MOST USELESS THING!!!

#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(PlayLayer) {
    void destroyPlayer(PlayerObject* player, GameObject* object) {

        if (object != m_anticheatSpike) {
            FLAlertLayer::create("death", "you died. please get better at the game.", "OK")->show();

            PlayLayer* playLayer = PlayLayer::get(); //always exists in this context
            playLayer->pauseGame(false);
        }

        return PlayLayer::destroyPlayer(player, object);
    }
};