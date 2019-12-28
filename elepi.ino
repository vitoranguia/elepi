/**
 * Elepi - ELEctronic PIano
 * Copyright 2017-2019 Vitor Guia
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

const byte soundOut = 11;
int sleepNote = 1000;

/** Musical notes */
int DO = 262;  // or 261
int RE = 294;
int MI = 329;
int FA = 349;
int SOL = 392;
int LA = 440;
int SI = 494;
int DO2 = 523;

int notes[8] = {DO, RE, MI, FA, SOL, LA, SI, DO2};

void setup() {
    for (int i = 2; i < 10; i++) {
        pinMode(i, INPUT);
    }
}

void loop() {
    for (int i = 2; i < 10; i++) {
        if (digitalRead(i)) {
            tone(soundOut, notes[i-2], sleepNote);
        }
    }
}
