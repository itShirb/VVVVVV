# Shirb's VVVVVV fork
This is my fork of VVVVVV's source code. My goal is to add certain features that I personally want to see in the game, and hope to one day be pulled into the main repository.

### TODO:
- Un-hardcode The Tower ~ Either gonna make so you place two entities, one marking the bottom and one marking the top of a segment, or part of the level metadata, or maybe even an internal scripting function
- ~~Add teleporter entity~~ ~ Complete, however I did this before realizing that another fork already has this so idk what to do about that lmao
- Make `telesave()` work in custom levels
- Ability to load other levels from the current level, while retaining stats n such like the base game can do (i.e., intermission segments being outside the main game's level
- Allow `loadscript()` to load custom level scripts
- Make `teleportscript()`/`clearteleportscript()` work in custom levels
- Add checks for player being grounded (ceiling or floor), as well as delays similar to `untilbars()` that run until player is grounded
- Allow `flipgravity()` to unflip crewmates
- Allow moving during `delay(x)`
- Make `nocontrol()` only disable input and not the game's ability to have the player walk in a cutscene
- Add the rest of the enemies in the game that you for some reason aren't allowed to (properly) spawn in custom levels (whether via createentity or level editor)
- Allow positioning textbox above terminal that is closest to the player
- Add `cflash(x,ef,d)` to streamline flashes in internal scripting
- Rename `customposition(type,above/below)` to `rescuecrewpos(type,above/below)` for my own sanity
- Add helpful functions in the form of gamestates or outright new custom functions
- *...add more stuff to this later...*


---
This is the source code to VVVVVV, version 2.0+. For more context about this release, see the [announcement](http://distractionware.com/blog/2020/01/vvvvvv-is-now-open-source/) on Terry's blog!

License
-------
VVVVVV's source code is made available under a custom license. See [LICENSE.md](LICENSE.md) for more details.

In general, if you're interested in creating something that falls outside the license terms, get in touch with Terry and we'll talk about it!

Authors
-------
- Created by [Terry Cavanagh](http://distractionware.com/)
- Room Names by [Bennett Foddy](http://www.foddy.net)
- Music by [Magnus Pålsson](http://souleye.madtracker.net/)
- Metal Soundtrack by [FamilyJules](http://familyjules7x.com/)
- 2.0 Update (C++ Port) by [Simon Roth](http://www.machinestudios.co.uk)
- 2.2 Update (SDL2/PhysicsFS/Steamworks port) by [Ethan Lee](http://www.flibitijibibo.com/)
- Beta Testing by Sam Kaplan and Pauli Kohberger
- Ending Picture by Pauli Kohberger

Versions
------------
There are two versions of the VVVVVV source code available - the [desktop version](https://github.com/TerryCavanagh/VVVVVV/tree/master/desktop_version) (based on the C++ port, and currently live on Steam), and the [mobile version](https://github.com/TerryCavanagh/VVVVVV/tree/master/mobile_version) (based on a fork of the original flash source code, and currently live on iOS and Android).
