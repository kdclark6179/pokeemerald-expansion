const struct Ability gAbilitiesInfo[ABILITIES_COUNT] =
{
    [ABILITY_NONE] =
    {
        .name = _("-------"),
        .description = COMPOUND_STRING("No special ability."),
        .aiRating = 0,
        .cantBeSwapped = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STENCH] =
    {
        .name = _("Stench"),
        .description = COMPOUND_STRING("May cause a foe to flinch."),
        .aiRating = 1,
    },

    [ABILITY_DRIZZLE] =
    {
        .name = _("Drizzle"),
        .description = COMPOUND_STRING("Summons rain in battle."),
        .aiRating = 9,
    },

    [ABILITY_SPEED_BOOST] =
    {
        .name = _("Speed Boost"),
        .description = COMPOUND_STRING("Gradually boosts Speed."),
        .aiRating = 9,
    },

    [ABILITY_BATTLE_ARMOR] =
    {
        .name = _("Battle Armor"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_STURDY] =
    {
        .name = _("Sturdy"),
        .description = COMPOUND_STRING("Negates 1-hit KO attacks."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_DAMP] =
    {
        .name = _("Damp"),
        .description = COMPOUND_STRING("Prevents self-destruction."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_LIMBER] =
    {
        .name = _("Limber"),
        .description = COMPOUND_STRING("Prevents paralysis."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SAND_VEIL] =
    {
        .name = _("Sand Veil"),
        .description = COMPOUND_STRING("Ups evasion in a sandstorm."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_STATIC] =
    {
        .name = _("Static"),
        .description = COMPOUND_STRING("Paralyzes on contact."),
        .aiRating = 4,
    },

    [ABILITY_VOLT_ABSORB] =
    {
        .name = _("Volt Absorb"),
        .description = COMPOUND_STRING("Turns electricity into HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_WATER_ABSORB] =
    {
        .name = _("Water Absorb"),
        .description = COMPOUND_STRING("Changes water into HP."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_OBLIVIOUS] =
    {
        .name = _("Oblivious"),
        .description = COMPOUND_STRING("Prevents attraction."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_CLOUD_NINE] =
    {
        .name = _("Cloud Nine"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

    [ABILITY_COMPOUND_EYES] =
    {
        .name = _("Compound Eyes"),
        .description = COMPOUND_STRING("Raises accuracy."),
        .aiRating = 7,
    },

    [ABILITY_INSOMNIA] =
    {
        .name = _("Insomnia"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_COLOR_CHANGE] =
    {
        .name = _("Color Change"),
        .description = COMPOUND_STRING("Changes type to foe's move."),
        .aiRating = 2,
    },

    [ABILITY_IMMUNITY] =
    {
        .name = _("Immunity"),
        .description = COMPOUND_STRING("Prevents poisoning."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_FLASH_FIRE] =
    {
        .name = _("Flash Fire"),
        .description = COMPOUND_STRING("Powers up if hit by fire."),
        .aiRating = 6,
        .breakable = TRUE,
    },

    [ABILITY_SHIELD_DUST] =
    {
        .name = _("Shield Dust"),
        .description = COMPOUND_STRING("Prevents added effects."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_OWN_TEMPO] =
    {
        .name = _("Own Tempo"),
        .description = COMPOUND_STRING("Prevents confusion."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SUCTION_CUPS] =
    {
        .name = _("Suction Cups"),
        .description = COMPOUND_STRING("Firmly anchors the body."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_INTIMIDATE] =
    {
        .name = _("Intimidate"),
        .description = COMPOUND_STRING("Lowers the foe's Attack."),
        .aiRating = 7,
    },

    [ABILITY_SHADOW_TAG] =
    {
        .name = _("Shadow Tag"),
        .description = COMPOUND_STRING("Prevents the foe's escape."),
        .aiRating = 10,
    },

    [ABILITY_ROUGH_SKIN] =
    {
        .name = _("Rough Skin"),
        .description = COMPOUND_STRING("Hurts to touch."),
        .aiRating = 6,
    },

    [ABILITY_WONDER_GUARD] =
    {
        .name = _("Wonder Guard"),
        .description = COMPOUND_STRING("Only “Supereffective” hits."),
        .aiRating = 10,
        .cantBeCopied = TRUE,
        .cantBeSwapped = TRUE,
        .breakable = TRUE,
    },

    [ABILITY_LEVITATE] =
    {
        .name = _("Levitate"),
        .description = COMPOUND_STRING("Not hit by Ground attacks."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EFFECT_SPORE] =
    {
        .name = _("Effect Spore"),
        .description = COMPOUND_STRING("Leaves spores on contact."),
        .aiRating = 4,
    },

    [ABILITY_SYNCHRONIZE] =
    {
        .name = _("Synchronize"),
        .description = COMPOUND_STRING("Passes on status problems."),
        .aiRating = 4,
    },

    [ABILITY_CLEAR_BODY] =
    {
        .name = _("Clear Body"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_NATURAL_CURE] =
    {
        .name = _("Natural Cure"),
        .description = COMPOUND_STRING("Heals upon switching out."),
        .aiRating = 7,
    },

    [ABILITY_LIGHTNING_ROD] =
    {
        .name = _("Lightning Rod"),
        .description = COMPOUND_STRING("Draws electrical moves."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_SERENE_GRACE] =
    {
        .name = _("Serene Grace"),
        .description = COMPOUND_STRING("Promotes added effects."),
        .aiRating = 8,
    },

    [ABILITY_SWIFT_SWIM] =
    {
        .name = _("Swift Swim"),
        .description = COMPOUND_STRING("Raises Speed in rain."),
        .aiRating = 6,
    },

    [ABILITY_CHLOROPHYLL] =
    {
        .name = _("Chlorophyll"),
        .description = COMPOUND_STRING("Raises Speed in sunshine."),
        .aiRating = 6,
    },

    [ABILITY_ILLUMINATE] =
    {
        .name = _("Illuminate"),
        .description = COMPOUND_STRING("Encounter rate increases."),
        .aiRating = 0,
        .breakable = TRUE,
    },

    [ABILITY_TRACE] =
    {
        .name = _("Trace"),
        .description = COMPOUND_STRING("Copies special ability."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_HUGE_POWER] =
    {
        .name = _("Huge Power"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 10,
    },

    [ABILITY_POISON_POINT] =
    {
        .name = _("Poison Point"),
        .description = COMPOUND_STRING("Poisons foe on contact."),
        .aiRating = 4,
    },

    [ABILITY_INNER_FOCUS] =
    {
        .name = _("Inner Focus"),
        .description = COMPOUND_STRING("Prevents flinching."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_MAGMA_ARMOR] =
    {
        .name = _("Magma Armor"),
        .description = COMPOUND_STRING("Prevents freezing."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_WATER_VEIL] =
    {
        .name = _("Water Veil"),
        .description = COMPOUND_STRING("Prevents burns."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_MAGNET_PULL] =
    {
        .name = _("Magnet Pull"),
        .description = COMPOUND_STRING("Traps Steel-type Pokémon."),
        .aiRating = 9,
    },

    [ABILITY_SOUNDPROOF] =
    {
        .name = _("Soundproof"),
        .description = COMPOUND_STRING("Avoids sound-based moves."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_RAIN_DISH] =
    {
        .name = _("Rain Dish"),
        .description = COMPOUND_STRING("Slight HP recovery in rain."),
        .aiRating = 3,
    },

    [ABILITY_SAND_STREAM] =
    {
        .name = _("Sand Stream"),
        .description = COMPOUND_STRING("Summons a sandstorm."),
        .aiRating = 9,
    },

    [ABILITY_PRESSURE] =
    {
        .name = _("Pressure"),
        .description = COMPOUND_STRING("Raises foe's PP usage."),
        .aiRating = 5,
    },

    [ABILITY_THICK_FAT] =
    {
        .name = _("Thick Fat"),
        .description = COMPOUND_STRING("Heat-and-cold protection."),
        .aiRating = 7,
        .breakable = TRUE,
    },

    [ABILITY_EARLY_BIRD] =
    {
        .name = _("Early Bird"),
        .description = COMPOUND_STRING("Awakens quickly from sleep."),
        .aiRating = 4,
    },

    [ABILITY_FLAME_BODY] =
    {
        .name = _("Flame Body"),
        .description = COMPOUND_STRING("Burns the foe on contact."),
        .aiRating = 4,
    },

    [ABILITY_RUN_AWAY] =
    {
        .name = _("Run Away"),
        .description = COMPOUND_STRING("Makes escaping easier."),
        .aiRating = 0,
    },

    [ABILITY_KEEN_EYE] =
    {
        .name = _("Keen Eye"),
        .description = COMPOUND_STRING("Prevents loss of accuracy."),
        .aiRating = 1,
        .breakable = TRUE,
    },

    [ABILITY_HYPER_CUTTER] =
    {
        .name = _("Hyper Cutter"),
        .description = COMPOUND_STRING("Prevents Attack reduction."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_PICKUP] =
    {
        .name = _("Pickup"),
        .description = COMPOUND_STRING("May pick up items."),
        .aiRating = 1,
    },

    [ABILITY_TRUANT] =
    {
        .name = _("Truant"),
        .description = COMPOUND_STRING("Moves only every two turns."),
        .aiRating = -2,
        .cantBeOverwritten = TRUE,
    },

    [ABILITY_HUSTLE] =
    {
        .name = _("Hustle"),
        .description = COMPOUND_STRING("Trades accuracy for power."),
        .aiRating = 7,
    },

    [ABILITY_CUTE_CHARM] =
    {
        .name = _("Cute Charm"),
        .description = COMPOUND_STRING("Infatuates on contact."),
        .aiRating = 2,
    },

    [ABILITY_PLUS] =
    {
        .name = _("Plus"),
        .description = COMPOUND_STRING("Powers up with Minus."),
        .aiRating = 0,
    },

    [ABILITY_MINUS] =
    {
        .name = _("Minus"),
        .description = COMPOUND_STRING("Powers up with Plus."),
        .aiRating = 0,
    },

    [ABILITY_FORECAST] =
    {
        .name = _("Forecast"),
        .description = COMPOUND_STRING("Changes with the weather."),
        .aiRating = 6,
        .cantBeCopied = TRUE,
        .cantBeTraced = TRUE,
    },

    [ABILITY_STICKY_HOLD] =
    {
        .name = _("Sticky Hold"),
        .description = COMPOUND_STRING("Prevents item theft."),
        .aiRating = 3,
        .breakable = TRUE,
    },

    [ABILITY_SHED_SKIN] =
    {
        .name = _("Shed Skin"),
        .description = COMPOUND_STRING("Heals the body by shedding."),
        .aiRating = 7,
    },

    [ABILITY_GUTS] =
    {
        .name = _("Guts"),
        .description = COMPOUND_STRING("Ups Attack if suffering."),
        .aiRating = 6,
    },

    [ABILITY_MARVEL_SCALE] =
    {
        .name = _("Marvel Scale"),
        .description = COMPOUND_STRING("Ups Defense if suffering."),
        .aiRating = 5,
        .breakable = TRUE,
    },

    [ABILITY_LIQUID_OOZE] =
    {
        .name = _("Liquid Ooze"),
        .description = COMPOUND_STRING("Draining causes injury."),
        .aiRating = 3,
    },

    [ABILITY_OVERGROW] =
    {
        .name = _("Overgrow"),
        .description = COMPOUND_STRING("Ups Grass moves in a pinch."),
        .aiRating = 5,
    },

    [ABILITY_BLAZE] =
    {
        .name = _("Blaze"),
        .description = COMPOUND_STRING("Ups Fire moves in a pinch."),
        .aiRating = 5,
    },

    [ABILITY_TORRENT] =
    {
        .name = _("Torrent"),
        .description = COMPOUND_STRING("Ups Water moves in a pinch."),
        .aiRating = 5,
    },

    [ABILITY_SWARM] =
    {
        .name = _("Swarm"),
        .description = COMPOUND_STRING("Ups Bug moves in a pinch."),
        .aiRating = 5,
    },

    [ABILITY_ROCK_HEAD] =
    {
        .name = _("Rock Head"),
        .description = COMPOUND_STRING("Prevents recoil damage."),
        .aiRating = 5,
    },

    [ABILITY_DROUGHT] =
    {
        .name = _("Drought"),
        .description = COMPOUND_STRING("Summons sunlight in battle."),
        .aiRating = 9,
    },

    [ABILITY_ARENA_TRAP] =
    {
        .name = _("Arena Trap"),
        .description = COMPOUND_STRING("Prevents fleeing."),
        .aiRating = 9,
    },

    [ABILITY_VITAL_SPIRIT] =
    {
        .name = _("Vital Spirit"),
        .description = COMPOUND_STRING("Prevents sleep."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_WHITE_SMOKE] =
    {
        .name = _("White Smoke"),
        .description = COMPOUND_STRING("Prevents ability reduction."),
        .aiRating = 4,
        .breakable = TRUE,
    },

    [ABILITY_PURE_POWER] =
    {
        .name = _("Pure Power"),
        .description = COMPOUND_STRING("Raises Attack."),
        .aiRating = 10,
    },

    [ABILITY_SHELL_ARMOR] =
    {
        .name = _("Shell Armor"),
        .description = COMPOUND_STRING("Blocks critical hits."),
        .aiRating = 2,
        .breakable = TRUE,
    },

    [ABILITY_AIR_LOCK] =
    {
        .name = _("Air Lock"),
        .description = COMPOUND_STRING("Negates weather effects."),
        .aiRating = 5,
    },

   // [ABILITY_TANGLED_FEET] =
   // {
   //     .name = _("Tangled Feet"),
   //     .description = COMPOUND_STRING("Ups evasion if confused."),
   //     .aiRating = 2,
   //     .breakable = TRUE,
   // },

   // [ABILITY_MOTOR_DRIVE] = 
   // {
   //     .name = _("Motor Drive"),
   //     .description = COMPOUND_STRING("Electricity raises Speed."),
   //     .aiRating = 6,
   //     .breakable = TRUE,
   // },

   // [ABILITY_RIVALRY] = 
   // {
   //     .name = _("Rivalry"),
   //     .description = COMPOUND_STRING("Powers up against rivals."),
   //     .aiRating = 1,
   // },

   // [ABILITY_STEADFAST] =
   // {
   //     .name = _("Steadfast"),
   //     .description = COMPOUND_STRING("Flinching raises Speed."),
   //     .aiRating = 2,
   // },

   // [ABILITY_SNOW_CLOAK] = false
   // {
   //     .name = _("Snow Cloak"),
   //     .description = COMPOUND_STRING("Ups evasion in Hail or Snow."),
   //     .aiRating = 3,
   //     .breakable = TRUE,
   // },

   // [ABILITY_GLUTTONY] = false
   // {
   //     .name = _("Gluttony"),
   //     .description = COMPOUND_STRING("Eats Berries early."),
   //     .aiRating = 3,
   // },

   // [ABILITY_ANGER_POINT] = false
   // {
   //     .name = _("Anger Point"),
   //     .description = COMPOUND_STRING("Critical hits raise Attack."),
   //     .aiRating = 4,
   // },

   // [ABILITY_UNBURDEN] = false
   // {
   //     .name = _("Unburden"),
   //     .description = COMPOUND_STRING("Using a hold item ups Speed."),
   //     .aiRating = 7,
   // },

   // [ABILITY_HEATPROOF] = false
    //{
      //  .name = _("Heatproof"),
      //  .description = COMPOUND_STRING("Heat and burn protection."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_SIMPLE] = false
    //{
      //  .name = _("Simple"),
      //  .description = COMPOUND_STRING("Prone to wild stat changes."),
      //  .aiRating = 8,
      //  .breakable = TRUE,
    //},

    //[ABILITY_DRY_SKIN] = false
    //{
      //  .name = _("Dry Skin"),
      //  .description = COMPOUND_STRING("Prefers moisture to heat."),
      //  .aiRating = 6,
      //  .breakable = TRUE,
    //},

   // [ABILITY_DOWNLOAD] = false
    //{
      //  .name = _("Download"),
      //  .description = COMPOUND_STRING("Adjusts power favorably."),
      //  .aiRating = 7,
    //},

    //[ABILITY_IRON_FIST] = false
    //{
      //  .name = _("Iron Fist"),
      //  .description = COMPOUND_STRING("Boosts punching moves."),
      //  .aiRating = 6,
    //},

    //[ABILITY_POISON_HEAL] = false
    //{
      //  .name = _("Poison Heal"),
      //  .description = COMPOUND_STRING("Restores HP if poisoned."),
      //  .aiRating = 8,
    //},

    //[ABILITY_ADAPTABILITY] = false
    //{
      //  .name = _("Adaptability"),
      //  .description = COMPOUND_STRING("Boosts same type attacks."),
      //  .aiRating = 8,
    //},

    //[ABILITY_SKILL_LINK] = false
    //{
      //  .name = _("Skill Link"),
      //  .description = COMPOUND_STRING("Multi-hit moves hit 5 times."),
      //  .aiRating = 7,
    //},

    //[ABILITY_HYDRATION] = false
    //{
      //  .name = _("Hydration"),
      //  .description = COMPOUND_STRING("Cures status in rain."),
      //  .aiRating = 4,
    //},

    //[ABILITY_SOLAR_POWER] = false
    //{
      //  .name = _("Solar Power"),
      //  .description = COMPOUND_STRING("Powers up in sunshine."),
      //  .aiRating = 3,
    //},

    //[ABILITY_QUICK_FEET] = false
    //{
      //  .name = _("Quick Feet"),
      //  .description = COMPOUND_STRING("Ups Speed if suffering."),
      //  .aiRating = 5,
    //},

    //[ABILITY_NORMALIZE] = false
    //{
      //  .name = _("Normalize"),
      //  .description = COMPOUND_STRING("Moves become Normal-type."),
      //  .aiRating = -1,
    //},

    //[ABILITY_SNIPER] = false
    //{
      //  .name = _("Sniper"),
      //  .description = COMPOUND_STRING("Boosts critical hits."),
      //  .aiRating = 3,
    //},

    //[ABILITY_MAGIC_GUARD] = false
    //{
      //  .name = _("Magic Guard"),
      //  .description = COMPOUND_STRING("Only damaged by attacks."),
      //  .aiRating = 9,
    //},

    //[ABILITY_NO_GUARD] = false
    //{
      //  .name = _("No Guard"),
      //  .description = COMPOUND_STRING("Ensures that all moves hit."),
      //  .aiRating = 8,
    //},

    //[ABILITY_STALL] = false
    //{
      //  .name = _("Stall"),
      //  .description = COMPOUND_STRING("Always moves last."),
      //  .aiRating = -1,
    //},

   // [ABILITY_TECHNICIAN] = false
    //{
      //  .name = _("Technician"),
      //  .description = COMPOUND_STRING("Boosts weaker moves."),
      //  .aiRating = 8,
    //},

    //[ABILITY_LEAF_GUARD] = false
    //{
      //  .name = _("Leaf Guard"),
      //  .description = COMPOUND_STRING("Blocks status in sunshine."),
      //  .aiRating = 2,
      //  .breakable = TRUE,
    //},

    //[ABILITY_KLUTZ] = false
    //{
      //  .name = _("Klutz"),
      //  .description = COMPOUND_STRING("Can't use hold items."),
      //  .aiRating = -1,
    //},

   // [ABILITY_MOLD_BREAKER] = false
    //{
      //  .name = _("Mold Breaker"),
      //  .description = COMPOUND_STRING("Moves hit through abilities."),
      //  .aiRating = 7,
    //},

    //[ABILITY_SUPER_LUCK] = false
    //{ 
      //  .name = _("Super Luck"),
      //  .description = COMPOUND_STRING("Critical hits land often."),
      //  .aiRating = 3,
    //},

    //[ABILITY_AFTERMATH] = false
    //{
      //  .name = _("Aftermath"),
      //  .description = COMPOUND_STRING("Fainting damages the foe."),
      //  .aiRating = 5,
    //},

    //[ABILITY_ANTICIPATION] = false
    //{
      //  .name = _("Anticipation"),
      //  .description = COMPOUND_STRING("Senses dangerous moves."),
      //  .aiRating = 2,
    //},

    //[ABILITY_FOREWARN] = false
    //{
      //  .name = _("Forewarn"),
      //  .description = COMPOUND_STRING("Determines a foe's move."),
      //  .aiRating = 2,
    //},

    //[ABILITY_UNAWARE] = false
    //{
      //  .name = _("Unaware"),
      //  .description = COMPOUND_STRING("Ignores stat changes."),
      //  .aiRating = 6,
      //  .breakable = TRUE,
    //},

    //[ABILITY_TINTED_LENS] = false
    //{
      //  .name = _("Tinted Lens"),
      //  .description = COMPOUND_STRING("Ups “not very effective”."),
      //  .aiRating = 7,
    //},

    //[ABILITY_FILTER] = false
    //{
      //  .name = _("Filter"),
      //  .description = COMPOUND_STRING("Weakens “supereffective”."),
      //  .aiRating = 6,
      //  .breakable = TRUE,
    //},

    //[ABILITY_SLOW_START] = false
    //{
      //  .name = _("Slow Start"),
      //  .description = COMPOUND_STRING("Takes a while to get going."),
      //  .aiRating = -2,
    //},

    //[ABILITY_SCRAPPY] = false
    //{
      //  .name = _("Scrappy"),
      //  .description = COMPOUND_STRING("Hits Ghost-type Pokémon."),
      //  .aiRating = 6,
    //},

    //[ABILITY_STORM_DRAIN] = false
    //{
      //  .name = _("Storm Drain"),
      //  .description = COMPOUND_STRING("Draws in Water moves."),
      //  .aiRating = 7,
      //  .breakable = TRUE,
    //},

    //[ABILITY_ICE_BODY] =
    //{
      //  .name = _("Ice Body"),
      //  .description = COMPOUND_STRING("HP recovery in Hail or Snow."),
      //  .aiRating = 3,
    //},

    //[ABILITY_SOLID_ROCK] = false
    //{
      //  .name = _("Solid Rock"),
      //  .description = COMPOUND_STRING("Weakens “supereffective”."),
      //  .aiRating = 6,
      //  .breakable = TRUE,
    //},

    //[ABILITY_SNOW_WARNING] = false
    //{
      //  .name = _("Snow Warning"),
    //#if B_SNOW_WARNING >= GEN_9
      //  .description = COMPOUND_STRING("Summons snow in battle."),
    //#else
      //  .description = COMPOUND_STRING("Summons hail in battle."),
    //#endif
      //  .aiRating = 8,
    //},

    //[ABILITY_HONEY_GATHER] = false
    //{
      //  .name = _("Honey Gather"),
      //  .description = COMPOUND_STRING("May gather Honey."),
      //  .aiRating = 0,
    //},

    //[ABILITY_FRISK] = false 
    //{
      //  .name = _("Frisk"),
      //  .description = COMPOUND_STRING("Checks a foe's item."),
      //  .aiRating = 3,
    //},

    //[ABILITY_RECKLESS] = false
    //{
      //  .name = _("Reckless"),
      //  .description = COMPOUND_STRING("Boosts moves with recoil."),
      //  .aiRating = 6,
    //},

    //[ABILITY_MULTITYPE] = false
    //{
      //  .name = _("Multitype"),
      //  .description = COMPOUND_STRING("Changes type to its Plate."),
      //  .aiRating = 8,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_FLOWER_GIFT] = false
    //{
      //  .name = _("Flower Gift"),
      //  .description = COMPOUND_STRING("Allies power up in sunshine."),
      //  .aiRating = 4,
      //  .cantBeCopied = TRUE,
      //  .cantBeTraced = TRUE,
      //  .breakable = TRUE,
    //},

    //[ABILITY_BAD_DREAMS] = false
    //{
      //  .name = _("Bad Dreams"),
      //  .description = COMPOUND_STRING("Damages sleeping Pokémon."),
      //  .aiRating = 4,
    //},

    //[ABILITY_PICKPOCKET] = false
    //{
      //  .name = _("Pickpocket"),
      //  .description = COMPOUND_STRING("Steals the foe's held item."),
      //  .aiRating = 3,
    //},

    //[ABILITY_SHEER_FORCE] = false
    //{
      //  .name = _("Sheer Force"),
      //  .description = COMPOUND_STRING("Trades effects for power."),
      //  .aiRating = 8,
    //},

    //[ABILITY_CONTRARY] = false
    //{
      //  .name = _("Contrary"),
      //  .description = COMPOUND_STRING("Inverts stat changes."),
      //  .aiRating = 8,
      //  .breakable = TRUE,
    //},

    //[ABILITY_UNNERVE] = false
    //{
      //  .name = _("Unnerve"),
      //  .description = COMPOUND_STRING("Foes can't eat Berries."),
      //  .aiRating = 3,
    //},

    //[ABILITY_DEFIANT] = false
    //{
      //  .name = _("Defiant"),
      //  .description = COMPOUND_STRING("Lowered stats up Attack."),
      //  .aiRating = 5,
    //},

    //[ABILITY_DEFEATIST] = false
    //{
      //  .name = _("Defeatist"),
      //  .description = COMPOUND_STRING("Gives up at half HP."),
      //  .aiRating = -1,
    //},

    //[ABILITY_CURSED_BODY] = false
    //{
      //  .name = _("Cursed Body"),
      //  .description = COMPOUND_STRING("Disables moves on contact."),
      //  .aiRating = 4,
    //},

    //[ABILITY_HEALER] = false
    //{
      //  .name = _("Healer"),
      //  .description = COMPOUND_STRING("Heals partner Pokémon."),
      //  .aiRating = 0,
    //},

    //[ABILITY_FRIEND_GUARD] = false
    //{
      //  .name = _("Friend Guard"),
      //  .description = COMPOUND_STRING("Lowers damage to partner."),
      //  .aiRating = 0,
      //  .breakable = TRUE,
    //},

    //[ABILITY_WEAK_ARMOR] = false
    //{
      //  .name = _("Weak Armor"),
      //  .description = COMPOUND_STRING("Its stats change when hit."),
      //  .aiRating = 2,
    //},

    //[ABILITY_HEAVY_METAL] = false
    //{
      //  .name = _("Heavy Metal"),
      //  .description = COMPOUND_STRING("Doubles weight."),
      //  .aiRating = -1,
      //  .breakable = TRUE,
    //},

    //[ABILITY_LIGHT_METAL] = false
    //{
      //  .name = _("Light Metal"),
      //  .description = COMPOUND_STRING("Halves weight."),
      //  .aiRating = 2,
      //  .breakable = TRUE,
    //},

    //[ABILITY_MULTISCALE] = false
    //{
      //  .name = _("Multiscale"),
      //  .description = COMPOUND_STRING("Halves damage at full HP."),
      //  .aiRating = 8,
      //  .breakable = TRUE,
    //},

    //[ABILITY_TOXIC_BOOST] = false
    //{
      //  .name = _("Toxic Boost"),
      //  .description = COMPOUND_STRING("Ups Attack if poisoned."),
      //  .aiRating = 6,
    //},

    //[ABILITY_FLARE_BOOST] = false
    //{
      //  .name = _("Flare Boost"),
      //  .description = COMPOUND_STRING("Ups Sp. Atk if burned."),
      //  .aiRating = 5,
    //},

    //[ABILITY_HARVEST] = false
    //{
      //  .name = _("Harvest"),
      //  .description = COMPOUND_STRING("May recycle a used Berry."),
      //  .aiRating = 5,
    //},

    //[ABILITY_TELEPATHY] = false
    //{
      //  .name = _("Telepathy"),
      //  .description = COMPOUND_STRING("Can't be damaged by an ally."),
      //  .aiRating = 0,
      //  .breakable = TRUE,
    //},

    //[ABILITY_MOODY] = false
    //{
      //  .name = _("Moody"),
      //  .description = COMPOUND_STRING("Stats change gradually."),
      //  .aiRating = 10,
    //},

    //[ABILITY_OVERCOAT] = false
    //{
      //  .name = _("Overcoat"),
      //  .description = COMPOUND_STRING("Blocks weather and powder."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_POISON_TOUCH] = false
    //{
      //  .name = _("Poison Touch"),
      //  .description = COMPOUND_STRING("Poisons foe on contact."),
      //  .aiRating = 4,
    //},

    //[ABILITY_REGENERATOR] = false
    //{
      //  .name = _("Regenerator"),
      //  .description = COMPOUND_STRING("Heals upon switching out."),
      //  .aiRating = 8,
    //},

    //[ABILITY_BIG_PECKS] = false
    //{
      //  .name = _("Big Pecks"),
      //  .description = COMPOUND_STRING("Prevents Defense loss."),
      //  .aiRating = 1,
      //  .breakable = TRUE,
    //},

    //[ABILITY_SAND_RUSH] = false
    //{
      //  .name = _("Sand Rush"),
      //  .description = COMPOUND_STRING("Ups Speed in a sandstorm."),
      //  .aiRating = 6,
    //},

    //[ABILITY_WONDER_SKIN] = false
    //{
      //  .name = _("Wonder Skin"),
      //  .description = COMPOUND_STRING("May avoid status problems."),
      //  .aiRating = 4,
      //  .breakable = TRUE,
    //},

    //[ABILITY_ANALYTIC] = false
    //{
      //  .name = _("Analytic"),
      //  .description = COMPOUND_STRING("Moving last boosts power."),
      //  .aiRating = 5,
    //},

    //[ABILITY_ILLUSION] = false
    //{
      //  .name = _("Illusion"),
      //  .description = COMPOUND_STRING("Appears as a partner."),
      //  .aiRating = 8,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
    //},

    //[ABILITY_IMPOSTER] = false
    //{
      //  .name = _("Imposter"),
      //  .description = COMPOUND_STRING("Transforms into the foe."),
      //  .aiRating = 9,
      //  .cantBeCopied = TRUE,
      //  .cantBeTraced = TRUE,
    //},

    //[ABILITY_INFILTRATOR] = false
    //{
      //  .name = _("Infiltrator"),
      //  .description = COMPOUND_STRING("Passes through barriers."),
      //  .aiRating = 6,
    //},

    //[ABILITY_MUMMY] = false
    //{
      //  .name = _("Mummy"),
      //  .description = COMPOUND_STRING("Spreads with contact."),
      //  .aiRating = 5,
    //},

    //[ABILITY_MOXIE] = false
    //{
      //  .name = _("Moxie"),
      //  .description = COMPOUND_STRING("KOs raise Attack."),
      //  .aiRating = 7,
    //},

    //[ABILITY_JUSTIFIED] = false
    //{
      //  .name = _("Justified"),
      //  .description = COMPOUND_STRING("Dark hits raise Attack."),
      //  .aiRating = 4,
    //},

    //[ABILITY_RATTLED] = false
    //{
      //  .name = _("Rattled"),
      //  .description = COMPOUND_STRING("Raises Speed when scared."),
      //  .aiRating = 3,
    //},

    //[ABILITY_MAGIC_BOUNCE] = false
    //{
      //  .name = _("Magic Bounce"),
      //  .description = COMPOUND_STRING("Reflects status moves."),
      //  .aiRating = 9,
      //  .breakable = TRUE,
    //},

    //[ABILITY_SAP_SIPPER] = false
    //{
      //  .name = _("Sap Sipper"),
      //  .description = COMPOUND_STRING("Grass increases Attack."),
      //  .aiRating = 7,
      //  .breakable = TRUE,
    //},

    //[ABILITY_PRANKSTER] = false
    //{
      //  .name = _("Prankster"),
      //  .description = COMPOUND_STRING("Status moves go first."),
      //  .aiRating = 8,
    //},

    //[ABILITY_SAND_FORCE] = false
    //{
      //  .name = _("Sand Force"),
      //  .description = COMPOUND_STRING("Powers up in a sandstorm."),
      //  .aiRating = 4,
    //},

    //[ABILITY_IRON_BARBS] = false
    //{
      //  .name = _("Iron Barbs"),
      //  .description = COMPOUND_STRING("Hurts to touch."),
      //  .aiRating = 6,
    //},

    //[ABILITY_ZEN_MODE] = false
    //{
      //  .name = _("Zen Mode"),
      //  .description = COMPOUND_STRING("Transforms at half HP."),
      //  .aiRating = -1,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = B_UPDATED_ABILITY_DATA >= GEN_7,
    //},

    //[ABILITY_VICTORY_STAR] =
    //{
      //  .name = _("Victory Star"),
      //  .description = COMPOUND_STRING("Raises party accuracy."),
      //  .aiRating = 6,
    //},

    //[ABILITY_TURBOBLAZE] = false
    //{
      //  .name = _("Turboblaze"),
      //  .description = COMPOUND_STRING("Moves hit through abilities."),
      //  .aiRating = 7,
    //},

    //[ABILITY_TERAVOLT] = false
    //{
      //  .name = _("Teravolt"),
      //  .description = COMPOUND_STRING("Moves hit through abilities."),
      //  .aiRating = 7,
    //},

    //[ABILITY_AROMA_VEIL] = false
    //{
      //  .name = _("Aroma Veil"),
      //  .description = COMPOUND_STRING("Prevents limiting of moves."),
      //  .aiRating = 3,
      //  .breakable = TRUE,
    //},

    //[ABILITY_FLOWER_VEIL] = false
    //{
      //  .name = _("Flower Veil"),
      //  .description = COMPOUND_STRING("Protects Grass-types."),
      //  .aiRating = 0,
    //},

    //[ABILITY_CHEEK_POUCH] = false
    //{
      //  .name = _("Cheek Pouch"),
      //  .description = COMPOUND_STRING("Eating Berries restores HP."),
      //  .aiRating = 4,
    //},

    //[ABILITY_PROTEAN] = false
    //{
      //  .name = _("Protean"),
      //  .description = COMPOUND_STRING("Changes type to used move."),
      //  .aiRating = 8,
    //},

    //[ABILITY_FUR_COAT] = false
    //{
      //  .name = _("Fur Coat"),
      //  .description = COMPOUND_STRING("Raises Defense."),
      //  .aiRating = 7,
      //  .breakable = TRUE,
    //},

    //[ABILITY_MAGICIAN] = false
    //{
      //  .name = _("Magician"),
      //  .description = COMPOUND_STRING("Steals the foe's held item."),
      //  .aiRating = 3,
    //},

    //[ABILITY_BULLETPROOF] = false
    //{
      //  .name = _("Bulletproof"),
      //  .description = COMPOUND_STRING("Avoids some projectiles."),
      //  .aiRating = 7,
    //},

    //[ABILITY_COMPETITIVE] = false
    //{
      //  .name = _("Competitive"),
      //  .description = COMPOUND_STRING("Lowered stats up Sp. Atk."),
      //  .aiRating = 5,
    //},

    //[ABILITY_STRONG_JAW] = false
    //{
      //  .name = _("Strong Jaw"),
      //  .description = COMPOUND_STRING("Boosts biting moves."),
      //  .aiRating = 6,
    //},

    //[ABILITY_REFRIGERATE] = false
    //{
      //  .name = _("Refrigerate"),
      //  .description = COMPOUND_STRING("Normal moves become Ice."),
      //  .aiRating = 8,
    //},

    //[ABILITY_SWEET_VEIL] = false
    //{
      //  .name = _("Sweet Veil"),
      //  .description = COMPOUND_STRING("Prevents party from sleep."),
      //  .aiRating = 4,
      //  .breakable = TRUE,
    //},

    //[ABILITY_STANCE_CHANGE] = false
    //{
      //  .name = _("Stance Change"),
      //  .description = COMPOUND_STRING("Transforms as it battles."),
      //  .aiRating = 10,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_GALE_WINGS] = false
    //{
      //  .name = _("Gale Wings"),
      //  .description = COMPOUND_STRING("Flying moves go first."),
      //  .aiRating = 6,
    //},

    //[ABILITY_MEGA_LAUNCHER] = false
    //{
      //  .name = _("Mega Launcher"),
      //  .description = COMPOUND_STRING("Boosts pulse moves."),
      //  .aiRating = 7,
    //},

    //[ABILITY_GRASS_PELT] = false
    //{
      //  .name = _("Grass Pelt"),
      //  .description = COMPOUND_STRING("Ups Defense in grass."),
      //  .aiRating = 2,
      //  .breakable = TRUE,
    //},

    //[ABILITY_SYMBIOSIS] = false
    //{
      //  .name = _("Symbiosis"),
      //  .description = COMPOUND_STRING("Passes its item to an ally."),
      //  .aiRating = 0,
    //},

    //[ABILITY_TOUGH_CLAWS] = false
    //{
      //  .name = _("Tough Claws"),
      //  .description = COMPOUND_STRING("Boosts contact moves."),
      //  .aiRating = 7,
    //},

    //[ABILITY_PIXILATE] = false
    //{
      //  .name = _("Pixilate"),
      //  .description = COMPOUND_STRING("Normal moves become Fairy."),
      //  .aiRating = 8,
    //},

    //[ABILITY_GOOEY] = false
    //{
      //  .name = _("Gooey"),
      //  .description = COMPOUND_STRING("Lowers Speed on contact."),
      //  .aiRating = 5,
    //},

    //[ABILITY_AERILATE] = false
    //{
      //  .name = _("Aerilate"),
      //  .description = COMPOUND_STRING("Normal moves become Flying."),
      //  .aiRating = 8,
    //},

    //[ABILITY_PARENTAL_BOND] = false
    //{
      //  .name = _("Parental Bond"),
      //  .description = COMPOUND_STRING("Moves hit twice."),
      //  .aiRating = 10,
    //},

    //[ABILITY_DARK_AURA] = false
    //{
      //  .name = _("Dark Aura"),
      //  .description = COMPOUND_STRING("Boosts Dark moves."),
      //  .aiRating = 6,
    //},

    //[ABILITY_FAIRY_AURA] = false
    //{
      //  .name = _("Fairy Aura"),
      //  .description = COMPOUND_STRING("Boosts Fairy moves."),
      //  .aiRating = 6,
    //},

    //[ABILITY_AURA_BREAK] = false
    //{
      //  .name = _("Aura Break"),
      //  .description = COMPOUND_STRING("Reverse aura abilities."),
      //  .aiRating = 3,
    //},

    //[ABILITY_PRIMORDIAL_SEA] = false
    //{
      //  .name = _("Primordial Sea"),
      //  .description = COMPOUND_STRING("Summons heavy rain."),
      //  .aiRating = 10,
    //},

    //[ABILITY_DESOLATE_LAND] = false
    //{
      //  .name = _("Desolate Land"),
      //  .description = COMPOUND_STRING("Summons intense sunlight."),
      //  .aiRating = 10,
    //},

   // [ABILITY_DELTA_STREAM] = false
    //{
      //  .name = _("Delta Stream"),
      //  .description = COMPOUND_STRING("Summons strong winds."),
      //  .aiRating = 10,
    //},

    //[ABILITY_STAMINA] = false
    //{
      //  .name = _("Stamina"),
      //  .description = COMPOUND_STRING("Boosts Defense when hit."),
      //  .aiRating = 6,
    //},

    //[ABILITY_WIMP_OUT] = false
    //{
      //  .name = _("Wimp Out"),
      //  .description = COMPOUND_STRING("Flees at half HP."),
      //  .aiRating = 3,
    //},

    //[ABILITY_EMERGENCY_EXIT] = false
    //{
      //  .name = _("Emergency Exit"),
      //  .description = COMPOUND_STRING("Flees at half HP."),
      //  .aiRating = 3,
    //},

   // [ABILITY_WATER_COMPACTION] = false
    //{
      //  .name = _("Water Compaction"),
      //  .description = COMPOUND_STRING("Water boosts Defense."),
      //  .aiRating = 4,
    //},

    //[ABILITY_MERCILESS] = false
    //{ 
      //  .name = _("Merciless"),
      //  .description = COMPOUND_STRING("Criticals poisoned foes."),
      //  .aiRating = 4,
    //},

    //[ABILITY_SHIELDS_DOWN] = false
    //{
      //  .name = _("Shields Down"),
      //  .description = COMPOUND_STRING("Shell breaks at half HP."),
      //  .aiRating = 6,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_STAKEOUT] = false
    //{
      //  .name = _("Stakeout"),
      //  .description = COMPOUND_STRING("Stronger as foes switch in."),
      //  .aiRating = 6,
    //},

    //[ABILITY_WATER_BUBBLE] = false
    //{
      //  .name = _("Water Bubble"),
      //  .description = COMPOUND_STRING("Guards from fire and burns."),
      //  .aiRating = 8,
    //},

    //[ABILITY_STEELWORKER] = false
    //{
      //  .name = _("Steelworker"),
      //  .description = COMPOUND_STRING("Powers up Steel moves."),
      //  .aiRating = 6,
    //},

    //[ABILITY_BERSERK] = false
    //{
      //  .name = _("Berserk"),
      //  .description = COMPOUND_STRING("Boosts Sp. Atk at low HP."),
      //  .aiRating = 5,
    //},

    //[ABILITY_SLUSH_RUSH] = false
    //{
      //  .name = _("Slush Rush"),
      //  .description = COMPOUND_STRING("Raises Speed in Hail/Snow."),
      //  .aiRating = 5,
    //},

    //[ABILITY_LONG_REACH] = false
    //{
      //  .name = _("Long Reach"),
      //  .description = COMPOUND_STRING("Never makes contact."),
      //  .aiRating = 3,
    //},

    //[ABILITY_LIQUID_VOICE] = false
    //{
      //  .name = _("Liquid Voice"),
      //  .description = COMPOUND_STRING("Makes sound moves Water."),
      //  .aiRating = 5,
    //},

    //[ABILITY_TRIAGE] = false
    //{
      //  .name = _("Triage"),
      //  .description = COMPOUND_STRING("Healing moves go first."),
      //  .aiRating = 7,
    //},

    //[ABILITY_GALVANIZE] = false
    //{
      //  .name = _("Galvanize"),
      //  .description = COMPOUND_STRING("Normal moves turn Electric."),
      //  .aiRating = 8,
    //},

    //[ABILITY_SURGE_SURFER] = false
    //{
      //  .name = _("Surge Surfer"),
      //  .description = COMPOUND_STRING("Faster on electricity."),
      //  .aiRating = 4,
    //},

    //[ABILITY_SCHOOLING] = false
    //{
      //  .name = _("Schooling"),
      //  .description = COMPOUND_STRING("Forms a school when strong."),
      //  .aiRating = 6,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_DISGUISE] = false
    //{
      //  .name = _("Disguise"),
      //  .description = COMPOUND_STRING("Decoy protects it once."),
      //  .aiRating = 8,
      //  .breakable = TRUE,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_BATTLE_BOND] = false
    //{
      //  .name = _("Battle Bond"),
      //  .description = COMPOUND_STRING("Changes form after a KO."),
      //  .aiRating = 6,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_POWER_CONSTRUCT] = false
    //{
      //  .name = _("Power Construct"),
      //  .description = COMPOUND_STRING("Cells aid it when weakened."),
      //  .aiRating = 10,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_CORROSION] = false
    //{
      //  .name = _("Corrosion"),
      //  .description = COMPOUND_STRING("Poisons any type."),
      //  .aiRating = 5,
    //},

    //[ABILITY_COMATOSE] = false
    //{
      //  .name = _("Comatose"),
      //  .description = COMPOUND_STRING("Always drowsing."),
      //  .aiRating = 6,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_QUEENLY_MAJESTY] = false
    //{
      //  .name = _("Queenly Majesty"),
      //  .description = COMPOUND_STRING("Protects from priority."),
      //  .aiRating = 6,
      //  .breakable = TRUE,
    //},

 //   [ABILITY_INNARDS_OUT] = false
   // {
      //  .name = _("Innards Out"),
      //  .description = COMPOUND_STRING("Hurts foe when defeated."),
      //  .aiRating = 5,
    //},

    //[ABILITY_DANCER] = false
    //{
      //  .name = _("Dancer"),
      //  .description = COMPOUND_STRING("Dances along with others."),
      //  .aiRating = 5,
    //},

    //[ABILITY_BATTERY] = false
    //{
      //  .name = _("Battery"),
      //  .description = COMPOUND_STRING("Boosts ally's Sp. Atk."),
      //  .aiRating = 0,
    //},
 
    //[ABILITY_FLUFFY] = false
    //{
      //  .name = _("Fluffy"),
      //  .description = COMPOUND_STRING("Tougher but flammable."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_DAZZLING] = false
    //{
      //  .name = _("Dazzling"),
      //  .description = COMPOUND_STRING("Protects from priority."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_SOUL_HEART] = false
    //{
      //  .name = _("Soul-Heart"),
      //  .description = COMPOUND_STRING("KOs raise Sp. Atk."),
      //  .aiRating = 7,
    //},

    //[ABILITY_TANGLING_HAIR] = false
    //{
      //  .name = _("Tangling Hair"),
      //  .description = COMPOUND_STRING("Lowers Speed on contact."),
      //  .aiRating = 5,
    //},

    //[ABILITY_RECEIVER] = false
    //{
      //  .name = _("Receiver"),
      //  .description = COMPOUND_STRING("Copies ally's ability."),
      //  .aiRating = 0,
      //  .cantBeCopied = TRUE,
      //  .cantBeTraced = TRUE,
    //},

    //[ABILITY_POWER_OF_ALCHEMY] = false
    //{
      //  .name = _("Power Of Alchemy"),
      //  .description = COMPOUND_STRING("Copies ally's ability."),
      //  .aiRating = 0,
      //  .cantBeCopied = TRUE,
      //  .cantBeTraced = TRUE,
    //},

    //[ABILITY_BEAST_BOOST] = false
    //{
      //  .name = _("Beast Boost"),
      //  .description = COMPOUND_STRING("KOs boost best stat."),
      //  .aiRating = 7,
    //},

    //[ABILITY_RKS_SYSTEM] = false
    //{
      //  .name = _("RKS System"),
      //  .description = COMPOUND_STRING("Memories change its type."),
      //  .aiRating = 8,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_ELECTRIC_SURGE] = false
    //{
      //  .name = _("Electric Surge"),
      //  .description = COMPOUND_STRING("Field becomes Electric."),
      //  .aiRating = 8,
    //},

    //[ABILITY_PSYCHIC_SURGE] = false
    //{
      //  .name = _("Psychic Surge"),
      //  .description = COMPOUND_STRING("Field becomes weird."),
      //  .aiRating = 8,
    //},

    //[ABILITY_MISTY_SURGE] = false
    //{
      //  .name = _("Misty Surge"),
      //  .description = COMPOUND_STRING("Field becomes misty."),
      //  .aiRating = 8,
    //},

    //[ABILITY_GRASSY_SURGE] = false
    //{
      //  .name = _("Grassy Surge"),
      //  .description = COMPOUND_STRING("Field becomes grassy."),
      //  .aiRating = 8,
    //},

    //[ABILITY_FULL_METAL_BODY] = false
    //{
      //  .name = _("Full Metal Body"),
      //  .description = COMPOUND_STRING("Prevents stat reduction."),
      //  .aiRating = 4,
    //},

    //[ABILITY_SHADOW_SHIELD] = false
    //{
      //  .name = _("Shadow Shield"),
      //  .description = COMPOUND_STRING("Halves damage at full HP."),
      //  .aiRating = 8,
    //},

    //[ABILITY_PRISM_ARMOR] = false
    //{
      //  .name = _("Prism Armor"),
      //  .description = COMPOUND_STRING("Weakens “supereffective”."),
      //  .aiRating = 6,
    //},

    //[ABILITY_NEUROFORCE] = false
    //{
      //  .name = _("Neuroforce"),
      //  .description = COMPOUND_STRING("Ups “supereffective”."),
      //  .aiRating = 6,
    //},

    //[ABILITY_INTREPID_SWORD] = false
    //{
      //  .name = _("Intrepid Sword"),
      //  .description = COMPOUND_STRING("Ups Attack on entry."),
      //  .aiRating = 3,
    //},

    //[ABILITY_DAUNTLESS_SHIELD] = false
    //{
      //  .name = _("Dauntless Shield"),
      //  .description = COMPOUND_STRING("Ups Defense on entry."),
      //  .aiRating = 3,
    //},

    //[ABILITY_LIBERO] = false
    //{
      //  .name = _("Libero"),
      //  .description = COMPOUND_STRING("Changes type to move's."),
    //},

    //[ABILITY_BALL_FETCH] = false
    //{
      //  .name = _("Ball Fetch"),
      //  .description = COMPOUND_STRING("Fetches failed Poké Ball."),
      //  .aiRating = 0,
    //},

    //[ABILITY_COTTON_DOWN] = false
    //{
      //  .name = _("Cotton Down"),
      //  .description = COMPOUND_STRING("Lower Speed of all when hit."),
      //  .aiRating = 3,
    //},

    //[ABILITY_PROPELLER_TAIL] = false
    //{
      //  .name = _("Propeller Tail"),
      //  .description = COMPOUND_STRING("Ignores foe's redirection."),
      //  .aiRating = 2,
    //},

    //[ABILITY_MIRROR_ARMOR] = false
    //{
      //  .name = _("Mirror Armor"),
      //  .description = COMPOUND_STRING("Reflect stat decreases."),
      //  .aiRating = 6,
      //  .breakable = TRUE,
    //},

    //[ABILITY_GULP_MISSILE] = false
    //{
      //  .name = _("Gulp Missile"),
      //  .description = COMPOUND_STRING("If hit, spits prey from sea."),
      //  .aiRating = 3,
      //  .cantBeCopied = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_STALWART] = false
    //{
      //  .name = _("Stalwart"),
      //  .description = COMPOUND_STRING("Ignores foe's redirection."),
      //  .aiRating = 2,
    //},

    //[ABILITY_STEAM_ENGINE] = false
    //{
      //  .name = _("Steam Engine"),
      //  .description = COMPOUND_STRING("Fire or Water hits up Speed."),
      //  .aiRating = 3,
    //},

    //[ABILITY_PUNK_ROCK] = false
    //{
      //  .name = _("Punk Rock"),
      //  .description = COMPOUND_STRING("Ups and resists sound."),
      //  .aiRating = 2,
      //  .breakable = TRUE,
    //},

    //[ABILITY_SAND_SPIT] = false
    //{
      //  .name = _("Sand Spit"),
      //  .description = COMPOUND_STRING("Creates a sandstorm if hit."),
      //  .aiRating = 5,
    //},

    //[ABILITY_ICE_SCALES] = false
    //{
      //  .name = _("Ice Scales"),
      //  .description = COMPOUND_STRING("Halves special damage."),
      //  .aiRating = 7,
      //  .breakable = TRUE,
    //},

    //[ABILITY_RIPEN] = false
    //{
      //  .name = _("Ripen"),
      //  .description = COMPOUND_STRING("Doubles effect of Berries."),
      //  .aiRating = 4,
    //},

    //[ABILITY_ICE_FACE] = false
    //{
      //  .name = _("Ice Face"),
      //  .description = COMPOUND_STRING("Hail or Snow renew free hit."),
      //  .aiRating = 4,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
      //  .breakable = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_POWER_SPOT] = false
    //{
      //  .name = _("Power Spot"),
      //  .description = COMPOUND_STRING("Powers up ally moves."),
      //  .aiRating = 2,
    //},

    //[ABILITY_MIMICRY] = false
    //{
      //  .name = _("Mimicry"),
      //  .description = COMPOUND_STRING("Changes type on terrain."),
      //  .aiRating = 2,
    //},

    //[ABILITY_SCREEN_CLEANER] = false
    //{
      //  .name = _("Screen Cleaner"),
      //  .description = COMPOUND_STRING("Removes walls of light."),
      //  .aiRating = 3,
    //},

    //[ABILITY_STEELY_SPIRIT] = false
    //{
      //  .name = _("Steely Spirit"),
      //  .description = COMPOUND_STRING("Boosts ally's Steel moves."),
      //  .aiRating = 2,
    //},

    //[ABILITY_PERISH_BODY] = false
    //{
      //  .name = _("Perish Body"),
      //  .description = COMPOUND_STRING("Foe faints in 3 turns if hit."),
      //  .aiRating = -1,
    //},

    //[ABILITY_WANDERING_SPIRIT] = false
    //{
      //  .name = _("Wandering Spirit"),
      //  .description = COMPOUND_STRING("Trade abilities on contact."),
      //  .aiRating = 2,
    //},

    //[ABILITY_GORILLA_TACTICS] = false
    //{
      //  .name = _("Gorilla Tactics"),
      //  .description = COMPOUND_STRING("Ups Attack and locks move."),
      //  .aiRating = 4,
    //},

    //[ABILITY_NEUTRALIZING_GAS] = false
    //{
      //  .name = _("Neutralizing Gas"),
      //  .description = COMPOUND_STRING("All Abilities are nullified."),
      //  .aiRating = 5,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_PASTEL_VEIL] = false
    //{
      //  .name = _("Pastel Veil"),
      //  .description = COMPOUND_STRING("Protects team from poison."),
      //  .aiRating = 4,
      //  .breakable = TRUE,
    //},

    //[ABILITY_HUNGER_SWITCH] = false
    //{
      //  .name = _("Hunger Switch"),
      //  .description = COMPOUND_STRING("Changes form each turn."),
      //  .aiRating = 2,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_QUICK_DRAW] = false
    //{
      //  .name = _("Quick Draw"),
      //  .description = COMPOUND_STRING("Moves first occasionally."),
      //  .aiRating = 4,
    //},

    //[ABILITY_UNSEEN_FIST] = false
    //{
      //  .name = _("Unseen Fist"),
      //  .description = COMPOUND_STRING("Contact evades protection."),
      //  .aiRating = 6,
    //},

    //[ABILITY_CURIOUS_MEDICINE] = false
    //{
      //  .name = _("Curious Medicine"),
      //  .description = COMPOUND_STRING("Remove ally's stat changes."),
      //  .aiRating = 3,
    //},

    //[ABILITY_TRANSISTOR] = false
    //{
      //  .name = _("Transistor"),
      //  .description = COMPOUND_STRING("Ups Electric-type moves."),
      //  .aiRating = 6,
    //},

    //[ABILITY_DRAGONS_MAW] = false
    //{
      //  .name = _("Dragon's Maw"),
      //  .description = COMPOUND_STRING("Ups Dragon-type moves."),
      //  .aiRating = 6,
    //},

    //[ABILITY_CHILLING_NEIGH] = false
    //{
      //  .name = _("Chilling Neigh"),
      //  .description = COMPOUND_STRING("KOs boost Attack stat."),
      //  .aiRating = 7,
    //},

    //[ABILITY_GRIM_NEIGH] = false
    //{
      //  .name = _("Grim Neigh"),
      //  .description = COMPOUND_STRING("KOs boost Sp. Atk stat."),
      //  .aiRating = 7,
    //},

    //[ABILITY_AS_ONE_ICE_RIDER] = false
    //{
      //  .name = _("As One"),
      //  .description = COMPOUND_STRING("Unnerve and Chilling Neigh."),
      //  .aiRating = 10,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_AS_ONE_SHADOW_RIDER] = false
    //{
      //  .name = _("As One"),
      //  .description = COMPOUND_STRING("Unnerve and Grim Neigh."),
      //  .aiRating = 10,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_LINGERING_AROMA] = false
    //{
      //  .name = _("Lingering Aroma"),
      //  .description = COMPOUND_STRING("Spreads with contact."),
      //  .aiRating = 5,
    //},

    //[ABILITY_SEED_SOWER] = false
    //{
      //  .name = _("Seed Sower"),
      //  .description = COMPOUND_STRING("Affects terrain when hit."),
      //  .aiRating = 5,
    //},

    //[ABILITY_THERMAL_EXCHANGE] = false
    //{
      //  .name = _("Thermal Exchange"),
      //  .description = COMPOUND_STRING("Fire hits up Attack."),
      //  .aiRating = 4,
      //  .breakable = TRUE,
    //},

    //[ABILITY_ANGER_SHELL] = false
    //{
      //  .name = _("Anger Shell"),
      //  .description = COMPOUND_STRING("Gets angry at half HP."),
      //  .aiRating = 3,
    //},

    //[ABILITY_PURIFYING_SALT] = false
    //{
      //  .name = _("Purifying Salt"),
      //  .description = COMPOUND_STRING("Protected by pure salts."),
      //  .aiRating = 6,
      //  .breakable = TRUE,
    //},

    //[ABILITY_WELL_BAKED_BODY] = false
    //{
      //  .name = _("Well-Baked Body"),
      //  .description = COMPOUND_STRING("Strengthened by Fire."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_WIND_RIDER] = false
    //{
      //  .name = _("Wind Rider"),
      //  .description = COMPOUND_STRING("Ups Attack if hit by wind."),
      //  .aiRating = 4,
      //  .breakable = TRUE,
    //},

    //[ABILITY_GUARD_DOG] = false
    //{
      //  .name = _("Guard Dog"),
      //  .description = COMPOUND_STRING("Cannot be intimidated."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_ROCKY_PAYLOAD] = false
    //{
      //  .name = _("Rocky Payload"),
      //  .description = COMPOUND_STRING("Powers up Rock moves."),
      //  .aiRating = 6,
    //},

    //[ABILITY_WIND_POWER] = false
    //{
      //  .name = _("Wind Power"),
      //  .description = COMPOUND_STRING("Gets charged by wind."),
      //  .aiRating = 4,
    //},

    //[ABILITY_ZERO_TO_HERO] = false
    //{
      //  .name = _("Zero to Hero"),
      //  .description = COMPOUND_STRING("Changes form on switch out."),
      //  .aiRating = 10,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_COMMANDER] = false
    //{
      //  .name = _("Commander"),
      //  .description = COMPOUND_STRING("Commands from Dondozo."),
      //  .aiRating = 10,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
    //},

    //[ABILITY_ELECTROMORPHOSIS] = false
    //{
      //  .name = _("Electromorphosis"),
      //  .description = COMPOUND_STRING("Gets Charged when hit."),
      //  .aiRating = 5,
    //},

    //[ABILITY_PROTOSYNTHESIS] = false
    //{
      //  .name = _("Protosynthesis"),
      //  .description = COMPOUND_STRING("Sun boosts best stat."),
      //  .aiRating = 7,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_QUARK_DRIVE] = false
    //{
      //  .name = _("Quark Drive"),
      //  .description = COMPOUND_STRING("Elec. field ups best stat."),
      //  .aiRating = 7,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_GOOD_AS_GOLD] = false
    //{
     //   .name = _("Good as Gold"),
     //   .description = COMPOUND_STRING("Avoids status moves."),
     //   .aiRating = 8,
     //   .breakable = TRUE,
    //},

    //[ABILITY_VESSEL_OF_RUIN] = false
    //{
      //  .name = _("Vessel of Ruin"),
      //  .description = COMPOUND_STRING("Lowers foes' sp. damage."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_SWORD_OF_RUIN] = false
    //{
      //  .name = _("Sword of Ruin"),
      //  .description = COMPOUND_STRING("Lowers foes' Defense."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_TABLETS_OF_RUIN] = false
    //{
      //  .name = _("Tablets of Ruin"),
      //  .description = COMPOUND_STRING("Lowers foes' damage."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_BEADS_OF_RUIN] = false
    //{
      //  .name = _("Beads of Ruin"),
      //  .description = COMPOUND_STRING("Lowers foes' Sp. Defense."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_ORICHALCUM_PULSE] = false
    //{
      //  .name = _("Orichalcum Pulse"),
      //  .description = COMPOUND_STRING("Summons sunlight in battle."),
      //  .aiRating = 8,
    //},

    //[ABILITY_HADRON_ENGINE] = false
    //{ 
      //  .name = _("Hadron Engine"),
      //  .description = COMPOUND_STRING("Field becomes Electric."),
      //  .aiRating = 8,
    //},

    //[ABILITY_OPPORTUNIST] = false
    //{
      //  .name = _("Opportunist"),
      //  .description = COMPOUND_STRING("Copies foe's stat change."),
      //  .aiRating = 5,
    //},

    //[ABILITY_CUD_CHEW] = false
    //{
      //  .name = _("Cud Chew"),
      //  .description = COMPOUND_STRING("Eats a used berry again."),
      //  .aiRating = 4,
    //},

    //[ABILITY_SHARPNESS] = false
    //{
      //  .name = _("Sharpness"),
      //  .description = COMPOUND_STRING("Strengthens slicing moves."),
      //  .aiRating = 7,
    //},

    //[ABILITY_SUPREME_OVERLORD] = false
    //{
      //  .name = _("Supreme Overlord"),
      //  .description = COMPOUND_STRING("Inherits fallen's strength."),
      //  .aiRating = 6,
    //},

    //[ABILITY_COSTAR] = false
    //{
      //  .name = _("Costar"),
      //  .description = COMPOUND_STRING("Copies ally's stat changes."),
      //  .aiRating = 5,
    //},

    //[ABILITY_TOXIC_DEBRIS] = false
    //{
      //  .name = _("Toxic Debris"),
      //  .description = COMPOUND_STRING("Throws poison spikes if hit."),
      //  .aiRating = 4,
    //},

    //[ABILITY_ARMOR_TAIL] = false
    //{
      //  .name = _("Armor Tail"),
      //  .description = COMPOUND_STRING("Protects from priority."),
      //  .aiRating = 5,
      //  .breakable = TRUE,
    //},

    //[ABILITY_EARTH_EATER] = false
    //{
      //  .name = _("Earth Eater"),
      //  .description = COMPOUND_STRING("Eats ground to heal HP."),
      //  .aiRating = 7,
      //  .breakable = TRUE,
    //},

    //[ABILITY_MYCELIUM_MIGHT] = false
    //{
      //  .name = _("Mycelium Might"),
      //  .description = COMPOUND_STRING("Status moves never fail."),
      //  .aiRating = 2,
    //},

    //[ABILITY_HOSPITALITY] = false
    //{
      //  .name = _("Hospitality"),
      //  .description = COMPOUND_STRING("Restores ally's HP."),
      //  .aiRating = 5,
    //},

    //[ABILITY_MINDS_EYE] = false
    //{
      //  .name = _("Mind's Eye"),
      //  .description = COMPOUND_STRING("Keen Eye and Scrappy."),
      //  .aiRating = 8,
      //  .breakable = TRUE,
    //},

    //[ABILITY_EMBODY_ASPECT_TEAL_MASK] = false
    //{
      //  .name = _("Embody Aspect"),
      //  .description = COMPOUND_STRING("Raises Speed."),
      //  .aiRating = 6,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_EMBODY_ASPECT_HEARTHFLAME_MASK] = false
    //{
      //  .name = _("Embody Aspect"),
      //  .description = COMPOUND_STRING("Raises Attack."),
      //  .aiRating = 6,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_EMBODY_ASPECT_WELLSPRING_MASK] = false
    //{
      //  .name = _("Embody Aspect"),
      //  .description = COMPOUND_STRING("Raises Sp. Def."),
      //  .aiRating = 6,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_EMBODY_ASPECT_CORNERSTONE_MASK] = false
    //{
      //  .name = _("Embody Aspect"),
      //  .description = COMPOUND_STRING("Raises Defense."),
      //  .aiRating = 6,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_TOXIC_CHAIN] = false
    //{
      //  .name = _("Toxic Chain"),
      //  .description = COMPOUND_STRING("Moves can poison."),
      //  .aiRating = 8,
    //},

    //[ABILITY_SUPERSWEET_SYRUP] = false
    //{
      //  .name = _("Supersweet Syrup"),
      //  .description = COMPOUND_STRING("Lowers the foe's Evasion."),
      //  .aiRating = 5,
    //},

    //[ABILITY_TERA_SHIFT] = false
    //{
      //  .name = _("Tera Shift"),
      //  .description = COMPOUND_STRING("Terastallizes upon entry."),
      //  .aiRating = 10,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .cantBeSuppressed = TRUE,
      //  .cantBeOverwritten = TRUE,
      //  .failsOnImposter = TRUE,
    //},

    //[ABILITY_TERA_SHELL] = false
    //{
      //  .name = _("Tera Shell"),
      //  .description = COMPOUND_STRING("Resists all at full HP."),
      //  .aiRating = 10,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
      //  .breakable = TRUE,
    //},

    //[ABILITY_TERAFORM_ZERO] = false
    //{
      //  .name = _("Teraform Zero"),
      //  .description = COMPOUND_STRING("Zeroes weather and terrain."),
      //  .aiRating = 10,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
    //},

    //[ABILITY_POISON_PUPPETEER] = false
    //{
      //  .name = _("Poison Puppeteer"),
      //  .description = COMPOUND_STRING("Confuses poisoned foes."),
      //  .aiRating = 8,
      //  .cantBeCopied = TRUE,
      //  .cantBeSwapped = TRUE,
      //  .cantBeTraced = TRUE,
    //},
};
