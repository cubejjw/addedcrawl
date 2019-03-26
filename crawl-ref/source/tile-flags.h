#pragma once

enum tile_flags ENUM_INT64
{
    //// Foreground flags

    // 3 mutually exclusive flags for attitude.
    TILE_FLAG_ATT_MASK     = 0x00030000ULL,
    TILE_FLAG_PET          = 0x00010000ULL,
    TILE_FLAG_GD_NEUTRAL   = 0x00020000ULL,
    TILE_FLAG_NEUTRAL      = 0x00030000ULL,

    TILE_FLAG_S_UNDER      = 0x00040000ULL,
    TILE_FLAG_FLYING       = 0x00080000ULL,

    // 3 mutually exclusive flags for behaviour.
    TILE_FLAG_BEH_MASK     = 0x00300000ULL,
    TILE_FLAG_STAB         = 0x00100000ULL,
    TILE_FLAG_MAY_STAB     = 0x00200000ULL,
    TILE_FLAG_FLEEING      = 0x00300000ULL,

    TILE_FLAG_NET          = 0x00400000ULL,
    TILE_FLAG_POISON       = 0x00800000ULL,
    TILE_FLAG_WEB          = 0x01000000ULL,
    TILE_FLAG_GLOWING      = 0x02000000ULL,
    TILE_FLAG_STICKY_FLAME = 0x04000000ULL,
    TILE_FLAG_BERSERK      = 0x08000000ULL,
    TILE_FLAG_INNER_FLAME  = 0x10000000ULL,
    TILE_FLAG_CONSTRICTED  = 0x20000000ULL,
    TILE_FLAG_SLOWED       = 0x8000000000ULL,
    TILE_FLAG_PAIN_MIRROR  = 0x10000000000ULL,
    TILE_FLAG_HASTED       = 0x20000000000ULL,
    TILE_FLAG_MIGHT        = 0x40000000000ULL,
    TILE_FLAG_PETRIFYING   = 0x80000000000ULL,
    TILE_FLAG_PETRIFIED    = 0x100000000000ULL,
    TILE_FLAG_BLIND        = 0x200000000000ULL,
    TILE_FLAG_ANIM_WEP     = 0x400000000000ULL,
    TILE_FLAG_SUMMONED     = 0x800000000000ULL,
    TILE_FLAG_PERM_SUMMON  = 0x1000000000000ULL,
    TILE_FLAG_DEATHS_DOOR  = 0x2000000000000ULL,
    TILE_FLAG_RECALL       = 0x4000000000000ULL,
    TILE_FLAG_DRAIN        = 0x8000000000000ULL,
    TILE_FLAG_IDEALISED    = 0x10000000000000ULL,
    TILE_FLAG_BOUND_SOUL   = 0x20000000000000ULL,
    TILE_FLAG_INFESTED     = 0x40000000000000ULL,
    TILE_FLAG_CORRODED     = 0x80000000000000ULL,
    TILE_FLAG_SWIFT        = 0x100000000000000ULL,
    TILE_FLAG_PINNED       = 0x200000000000000ULL,
    TILE_FLAG_VILE_CLUTCH  = 0x400000000000000ULL,
    TILE_FLAG_POSSESSABLE  = 0x800000000000000ULL,
	TILE_FLAG_HOLD_POSITION  = 0x1000000000000000ULL,
	TILE_FLAG_OVERLOAD     = 0x2000000000000000ULL,
	TILE_FLAG_FROZEN  	   = 0x4000000000000000ULL,

    // MDAM has 5 possibilities, so uses 3 bits.
    TILE_FLAG_MDAM_MASK    = 0x1C0000000ULL,
    TILE_FLAG_MDAM_LIGHT   = 0x040000000ULL,
    TILE_FLAG_MDAM_MOD     = 0x080000000ULL,
    TILE_FLAG_MDAM_HEAVY   = 0x0C0000000ULL,
    TILE_FLAG_MDAM_SEV     = 0x100000000ULL,
    TILE_FLAG_MDAM_ADEAD   = 0x1C0000000ULL,

    // Demon difficulty has 5 possibilities, so uses 3 bits.
    TILE_FLAG_DEMON        = 0xE00000000ULL,
    TILE_FLAG_DEMON_5      = 0x200000000ULL,
    TILE_FLAG_DEMON_4      = 0x400000000ULL,
    TILE_FLAG_DEMON_3      = 0x600000000ULL,
    TILE_FLAG_DEMON_2      = 0x800000000ULL,
    TILE_FLAG_DEMON_1      = 0xE00000000ULL,

    //// Background flags

    TILE_FLAG_RAY          = 0x00010000ULL,
    TILE_FLAG_MM_UNSEEN    = 0x00020000ULL,
    TILE_FLAG_UNSEEN       = 0x00040000ULL,

    // 3 mutually exclusive flags for cursors.
    TILE_FLAG_CURSOR1      = 0x00180000ULL,
    TILE_FLAG_CURSOR2      = 0x00080000ULL,
    TILE_FLAG_CURSOR3      = 0x00100000ULL,
    TILE_FLAG_CURSOR       = 0x00180000ULL,

    TILE_FLAG_TUT_CURSOR   = 0x00200000ULL,
    TILE_FLAG_TRAV_EXCL    = 0x00400000ULL,
    TILE_FLAG_EXCL_CTR     = 0x00800000ULL,
    TILE_FLAG_RAY_OOR      = 0x01000000ULL,
    TILE_FLAG_OOR          = 0x02000000ULL,
    TILE_FLAG_WATER        = 0x04000000ULL,
    TILE_FLAG_NEW_STAIR    = 0x08000000ULL,
    TILE_FLAG_NEW_TRANSPORTER = 0x10000000ULL,

    // Tentacle overlay flags: direction and type.
    TILE_FLAG_TENTACLE_NW        = 0x020000000ULL,
    TILE_FLAG_TENTACLE_NE        = 0x040000000ULL,
    TILE_FLAG_TENTACLE_SE        = 0x080000000ULL,
    TILE_FLAG_TENTACLE_SW        = 0x100000000ULL,
    TILE_FLAG_TENTACLE_KRAKEN    = 0x0200000000ULL,
    TILE_FLAG_TENTACLE_ELDRITCH  = 0x0400000000ULL,
    TILE_FLAG_TENTACLE_STARSPAWN = 0x0800000000ULL,
    TILE_FLAG_TENTACLE_VINE      = 0x1000000000ULL,

#if TAG_MAJOR_VERSION == 34
    // Starspawn tentacle overlays. Obviated by the above.
    TILE_FLAG_STARSPAWN_NW = 0x02000000000ULL,
    TILE_FLAG_STARSPAWN_NE = 0x04000000000ULL,
    TILE_FLAG_STARSPAWN_SE = 0x08000000000ULL,
    TILE_FLAG_STARSPAWN_SW = 0x10000000000ULL,
#endif

    //// General

    // Should go up with RAY/RAY_OOR, but they need to be exclusive for those
    // flags and there's no room.
    TILE_FLAG_LANDING     = 0x20000000000ULL,
    TILE_FLAG_RAY_MULTI   = 0x40000000000ULL,

    // More tentacle types
    TILE_FLAG_TENTACLE_ZOMBIE_KRAKEN = 0x80000000000ULL,
    TILE_FLAG_TENTACLE_SIMULACRUM_KRAKEN = 0x100000000000ULL,
    TILE_FLAG_TENTACLE_SPECTRAL_KRAKEN = 0x200000000000ULL,

    // Mask for the tile index itself.
    TILE_FLAG_MASK       = 0x0000FFFFULL,
};
