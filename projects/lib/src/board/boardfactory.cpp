/*
    This file is part of Cute Chess.

    Cute Chess is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Cute Chess is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Cute Chess.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "boardfactory.h"
#include "andernachboard.h"
#include "antiboard.h"
#include "atomicboard.h"
#include "berolinaboard.h"
#include "capablancaboard.h"
#include "caparandomboard.h"
#include "checklessboard.h"
#include "chessgiboard.h"
#include "coregalboard.h"
#include "crazyhouseboard.h"
#include "extinctionboard.h"
#include "frcboard.h"
#include "giveawayboard.h"
#include "gothicboard.h"
#include "gridboard.h"
#include "hordeboard.h"
#include "janusboard.h"
#include "kingofthehillboard.h"
#include "knightmateboard.h"
#include "loopboard.h"
#include "losersboard.h"
#include "ncheckboard.h"
#include "pocketknightboard.h"
#include "racingkingsboard.h"
#include "standardboard.h"
#include "suicideboard.h"
#include "threekingsboard.h"
#include "twokingseachboard.h"

namespace Chess {

REGISTER_BOARD(ThreeCheckBoard, "3check")
REGISTER_BOARD(FiveCheckBoard, "5check")
REGISTER_BOARD(AndernachBoard, "andernach")
REGISTER_BOARD(AntiAndernachBoard, "antiandernach")
REGISTER_BOARD(AntiBoard, "antichess")
REGISTER_BOARD(AtomicBoard, "atomic")
REGISTER_BOARD(BerolinaBoard, "berolina")
REGISTER_BOARD(CapablancaBoard, "capablanca")
REGISTER_BOARD(CaparandomBoard, "caparandom")
REGISTER_BOARD(ChecklessBoard, "checkless")
REGISTER_BOARD(ChessgiBoard, "chessgi")
REGISTER_BOARD(CoRegalBoard, "coregal")
REGISTER_BOARD(CrazyhouseBoard, "crazyhouse")
REGISTER_BOARD(DisplacedGridBoard, "displacedgrid")
REGISTER_BOARD(ExtinctionBoard, "extinction")
REGISTER_BOARD(KingletBoard, "kinglet")
REGISTER_BOARD(FrcBoard, "fischerandom")
REGISTER_BOARD(GiveawayBoard, "giveaway")
REGISTER_BOARD(GothicBoard, "gothic")
REGISTER_BOARD(GridBoard, "grid")
REGISTER_BOARD(BerolinaGridBoard, "gridolina")
REGISTER_BOARD(HordeBoard, "horde")
REGISTER_BOARD(JanusBoard, "janus")
REGISTER_BOARD(KingOfTheHillBoard, "kingofthehill")
REGISTER_BOARD(KnightMateBoard, "knightmate")
REGISTER_BOARD(LoopBoard, "loop")
REGISTER_BOARD(LosersBoard, "losers")
REGISTER_BOARD(PocketKnightBoard, "pocketknight")
REGISTER_BOARD(RacingKingsBoard, "racingkings")
REGISTER_BOARD(SlippedGridBoard, "slippedgrid")
REGISTER_BOARD(TwoKingsSymmetricalBoard, "sortland9")
REGISTER_BOARD(StandardBoard, "standard")
REGISTER_BOARD(SuicideBoard, "suicide")
REGISTER_BOARD(SuperAndernachBoard, "superandernach")
REGISTER_BOARD(ThreeKingsBoard, "threekings")
REGISTER_BOARD(TwoKingsEachBoard, "twokings")


ClassRegistry<Board>* BoardFactory::registry()
{
	static ClassRegistry<Board>* registry = new ClassRegistry<Board>;
	return registry;
}

Board* BoardFactory::create(const QString& variant)
{
	return registry()->create(variant);
}

QStringList BoardFactory::variants()
{
	return registry()->items().keys();
}

} // namespace Chess
