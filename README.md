JamLegendBot
============

Video of the bot in action: https://www.youtube.com/watch?v=IhwxqqtJolw

Bot for Jam Legend written in C++

This is a project from 2008. It is a command line bot that would continuously play songs on the flash-based game "Jam Legend."

JamLegend:
============
Jam Legend was a guitar hero-style game that was played from your web browser.

The game itself played exactly as you'd expect, music runs in the background and you push keys to hit notes at certain times.


The Bot:
============
This AI would read the screen, anticipate the notes by storing them in a queue, and press the corresponding keys as the notes reached the bottom. It would detect taps as well as sustained notes.

It was capable of playing and beating any level on any difficulty, in both the single and multiplayer modes.

Depending on what flags were set, the bot could also play in a continuous mode. If continuous play was enabled, the bot would start the song, play through it, and then play the next available song. This would continue endlessly until the bot was manually disabled.

The bot maintained first place in the global rankings until the time I stopped running it.
