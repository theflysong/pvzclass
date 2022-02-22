#pragma once

#include <string>

namespace PlantState {
	enum PlantState {
		IDLE = 0x0,
		WAIT = 0x1,
		WORK = 0x2,
		SQUASH_LOOK = 0x3,
		SQUASH_JUMP_UP = 0x4,
		SQUASH_STOP_IN_THE_AIR = 0x5,
		SQUASH_JUMP_DOWN = 0x6,
		SQUASH_CRUSHED = 0x7,
		GRAVE_BUSTER_LAND = 0x8,
		GRAVE_BUSTER_IDLE = 0x9,
		CHOMPER_BITE_BEGIN = 0xA,
		CHOMPER_BITE_SUCCESS = 0xB,
		CHOMPER_BITE_FAIL = 0xC,
		CHOMPER_CHEW = 0xD,
		CHOMPER_SWALLOW = 0xE,
		POTATO_SPROUT_OUT = 0xF,
		POTATO_ARMED = 0x10,
		SPIKE_ATTACK = 0x12,
		SCAREDYSHROOM_SCARED = 0x14,
		SCAREDYSHROOM_SCARED_IDLE = 0x15,
		SCAREDYSHROOM_GROW = 0x16,
		SUNSHROOM_SMALL = 0x17,
		SUNSHROOM_GROW = 0x18,
		SUNSHROOM_BIG = 0x19,
		MAGNETSHROOM_WORKING = 0x1A,
		MAGNETSHROOM_INACTIVE_IDLE = 0x1B,
		BOWLING_RISE,
		BOWLING_FALL,
		CACTUS_SHORT_IDLE = 0x1E,
		CACTUS_GROW_TALL = 0x1F,
		CACTUS_TALL_IDLE = 0x20,
		CACTUS_GET_SHORT = 0x21,
		TANGLE_KELP_GRAB = 0x22,
		COB_CANNON_UNARAMED_IDLE = 0x23,
		COB_CANNON_CHARGE = 0x24,
		COB_CANNON_LAUNCH = 0x25,
		COB_CANNON_ARAMED_IDLE = 0x26,
		KERNELPULT_LAUNCH_BUTTER = 0x27,
		UMBRELLA_LEAF_BLOCK = 0x28,
		UMBRELLA_LEAF_SHRINK = 0x29,
		IMITATER_EXPLODE = 0x2A,
		FLOWER_POT_PLACED = 0x2F,
		LILY_PAD_PLACED = 0x30
	};

	std::string ToString(PlantState state);
}