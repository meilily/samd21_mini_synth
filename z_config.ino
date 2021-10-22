/*
 * Copyright (c) 2021 Marcel Licence
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Dieses Programm ist Freie Software: Sie k�nnen es unter den Bedingungen
 * der GNU General Public License, wie von der Free Software Foundation,
 * Version 3 der Lizenz oder (nach Ihrer Wahl) jeder neueren
 * ver�ffentlichten Version, weiter verteilen und/oder modifizieren.
 *
 * Dieses Programm wird in der Hoffnung bereitgestellt, dass es n�tzlich sein wird, jedoch
 * OHNE JEDE GEW�HR,; sogar ohne die implizite
 * Gew�hr der MARKTF�HIGKEIT oder EIGNUNG F�R EINEN BESTIMMTEN ZWECK.
 * Siehe die GNU General Public License f�r weitere Einzelheiten.
 *
 * Sie sollten eine Kopie der GNU General Public License zusammen mit diesem
 * Programm erhalten haben. Wenn nicht, siehe <https://www.gnu.org/licenses/>.
 */

/**
 * @file z_config.ino
 * @author Marcel Licence
 * @date 15.05.2021
 *
 * @brief This file contains the mapping configuration
 * Put all your project configuration here (no defines etc)
 * This file will be included at the and can access all
 * declarations and type definitions
 */


/*
 * this mapping is used for the edirol pcr-800
 * this should be changed when using another controller
 */
struct midiControllerMapping edirolMapping[] =
{
    /* transport buttons */
    { 0x8, 0x52, "back", NULL, NULL, 0},
    { 0xD, 0x52, "stop", NULL, NULL, 0},
    { 0xe, 0x52, "start", NULL, NULL, 0},
    { 0xe, 0x52, "start", NULL, NULL, 0},
    { 0xa, 0x52, "rec", NULL, NULL, 0},

    /* upper row of buttons */
    { 0x0, 0x50, "A1", NULL, NULL, 0},
    { 0x1, 0x50, "A2", NULL, NULL, 1},
    { 0x2, 0x50, "A3", NULL, NULL, 2},
    { 0x3, 0x50, "A4", NULL, NULL, 3},

    { 0x4, 0x50, "A5", NULL, NULL, 0},
    { 0x5, 0x50, "A6", NULL, NULL, 1},
    { 0x6, 0x50, "A7", NULL, NULL, 2},
    { 0x7, 0x50, "A8", NULL, NULL, 3},

    { 0x0, 0x53, "A9", NULL, NULL, 0},

    /* lower row of buttons */
    { 0x0, 0x51, "B1", NULL, NULL, 0},
    { 0x1, 0x51, "B2", NULL, NULL, 1},
    { 0x2, 0x51, "B3", NULL, NULL, 2},
    { 0x3, 0x51, "B4", NULL, NULL, 3},

    { 0x4, 0x51, "B5", NULL, NULL, 4},
    { 0x5, 0x51, "B6", NULL, NULL, 5},
    { 0x6, 0x51, "B7", NULL, NULL, 6},
    { 0x7, 0x51, "B8", NULL, NULL, 7},

    { 0x1, 0x53, "B9", NULL, NULL, 8},

    /* pedal */
    { 0x0, 0x0b, "VolumePedal", NULL, NULL, 0},

    /* slider */
    { 0x0, 0x11, "S1", NULL, Synth_ModulationWheel, 0},
    { 0x1, 0x11, "S2", NULL, NULL, 1},
    { 0x2, 0x11, "S3", NULL, NULL, 2},
    { 0x3, 0x11, "S4", NULL, NULL, 3},

    { 0x4, 0x11, "S5", NULL, NULL, 4},
    { 0x5, 0x11, "S6", NULL, NULL, 5},
    { 0x6, 0x11, "S7", NULL, NULL, 6},
    { 0x7, 0x11, "S8", NULL, NULL, 7},

    { 0x1, 0x12, "S9", NULL, NULL, 8},

    /* rotary */
    { 0x0, 0x10, "R1", NULL, Synth_SetParam, SYNTH_PARAM_WAVEFORM_1},
    { 0x1, 0x10, "R2", NULL, Synth_SetParam, SYNTH_PARAM_WAVEFORM_2},
    { 0x2, 0x10, "R3", NULL, Synth_SetParam, SYNTH_PARAM_MODULATION_PITCH},
    { 0x3, 0x10, "R4", NULL, Synth_SetParam, SYNTH_PARAM_MODULATION_SPEED},

    { 0x4, 0x10, "R5", NULL, Synth_SetParam, SYNTH_PARAM_PITCH_BEND_RANGE},
    { 0x5, 0x10, "R6", NULL, NULL, 0},
    { 0x6, 0x10, "R7", NULL, Delay_SetFeedback, 0},
    { 0x7, 0x10, "R8", NULL, Delay_SetLevel, 0},

    { 0x0, 0x12, "R9", NULL, NULL, 0},

    /* Central slider */
    { 0x0, 0x13, "H1", NULL, Synth_ModulationWheel, 0},
};

struct midiMapping_s midiMapping =
{
    NULL,
    Synth_NoteOn,
    Synth_NoteOff,
    Synth_PitchBend,
    Synth_ModulationWheel,
    edirolMapping,
    sizeof(edirolMapping) / sizeof(edirolMapping[0]),
};
