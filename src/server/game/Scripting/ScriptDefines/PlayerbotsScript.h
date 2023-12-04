/*
 * This file is part of the AzerothCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Affero General Public License as published by the
 * Free Software Foundation; either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU Affero General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SCRIPT_OBJECT_PLAYERBOTS_SCRIPT_H_
#define SCRIPT_OBJECT_PLAYERBOTS_SCRIPT_H_

#include "LFGMgr.h"
#include "ScriptObject.h"

class PlayerbotScript : public ScriptObject
{
protected:
    PlayerbotScript(const char* name);

public:
    bool IsDatabaseBound() const { return false; }

    [[nodiscard]] virtual bool OnPlayerbotCheckLFGQueue(lfg::Lfg5Guids const& /*guidsList*/) { return true; }
    virtual void OnPlayerbotCheckKillTask(Player* /*player*/, Unit* /*victim*/) { }
    virtual void OnPlayerbotCheckPetitionAccount(Player* /*player*/, bool& /*found*/) { }
    [[nodiscard]] virtual bool OnPlayerbotCheckUpdatesToSend(Player* /*player*/) { return true; }
    virtual void OnPlayerbotPacketSent(Player* /*player*/, WorldPacket const* /*packet*/) { }
    virtual void OnPlayerbotUpdate(uint32 /*diff*/) { }
    virtual void OnPlayerbotUpdateSessions(Player* /*player*/) { }
    virtual void OnPlayerbotLogout(Player* /*player*/) { }
    virtual void OnPlayerbotLogoutBots() { }
};

#endif
