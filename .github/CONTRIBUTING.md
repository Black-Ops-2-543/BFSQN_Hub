# Terminology & Introduction

- This mod as a whole is referred to as the **Blackforce Squadron Mod Hub** (BFSQN MH).
  - The BFSQN MH is meant to work on a "hub and spoke" system, where new people can make new additions onto the already-made framework.
- The primary (core) section of the mod is referred to as the **hub**.
- Each new addition to the BFSQN MH is referred to as a **spoke**.

- Try to follow the conventions in `CONTRIBUTING.md` as closely as possible. Having a well-structured and well-maintained codebase makes all the world when attempting to bugfix, change, or add on to the mod.
- Use `camelCase` for most instances you have to name something. You can use `snake_case`, but it is not preferred. Definitely do not use `PascalCase`.
  - For classnames, use `snake_case`. For filenames, use a mix of `camelCase` and underscores to strategically break up the name (e.g. `planePilot_insignia.paa`). Use `SCREAMING_SNAKE_CASE` for constants. For all else (particularly variables), use `camelCase`.

# First Steps

If you want to add on a new spoke, follow these steps before any other:

1. Sign-in to your GitHub account.
2. Create a new fork of this repository so that you can edit your own copy.
  - This is found in the top-right of the repo homepage.
  - Name your fork something reasonable. It should follow the form `BFSQN_<name>`. The `<name>` should be no more than two words.
3. Load into your preferred coding environment. If you use (the preferred) Visual Studio Code, [this tutorial](https://code.visualstudio.com/docs/sourcecontrol/overview) does a good job at teaching how to use GitHub.
4. Create a new folder under `addons/`. The name of this folder should be the `BFSQN_<name>` you decided on earlier.
5. Inside this folder, create a file named `$PBOPREFIX$`. Inside it, paste `x\BFSQN_Hub\addons\BFSQN_<name>`. Make sure to change that final `<name>`!
6. Inside the folder, create a file named `script_component.hpp`. Inside it, paste:
```
#define SPOKE ""
#define COMPONENT 

#include "..\BFSQN_core\universal_script_component.hpp"
```
  - Right after `SPOKE`, type in the human-phrased name of your spoke (e.g. `#define SPOKE "Blackforce Squadron Hub - Insignias"`).
  - Right after `COMPONENT`, type in the `<name>` from earlier (e.g. `#define COMPONENT insignia`).
7. Inside the folder, create a file named `config.cpp`. Inside it, paste:
```
#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = SPOKE;
        author = AUTHOR;
        requiredVersion = REQUIRED_VERSION;
        units[] = {};
        weapons[] = {};
        requiredAddons[] = { "BFSQN_core" };
    };
};
```
  - **Do not** edit any of the data from `class ADDON` to the first `};`. If you think you need to (changing `requiredAddons[]` for example), DM *blackops2543* on Discord.
8. You're done with files! Ensure the whole BFSQN MH builds and your Arma 3 launches, then begin modding!

# Last Steps

Once you're finished with developing your spoke, you'll need to submit a **pull request** through GitHub so that your fork can be merged into the main branch.
