/*
** EPITECH PROJECT, 2021
** init_stage3_v.c
** File description:
** init_stage3_v
*/

#include "../../../include/my_rpg.h"

void init_stage3_rect_v(game_t *gm)
{
    int k = 0;
    int j = 0;

    for (int i = 0; i < 191; i++) {
        gm->play->ear->mp->rect_v[i][0] = k;
        gm->play->ear->mp->rect_v[i][1] = j;
        if (k == 1176) {
            k = -24;
            j += 24;
        }
        k += 24;
    }
}

void init_stage3_text_v(game_t *gm)
{
    for (int i = 0; i < 191; i++)
        gm->play->ear->mp->text_v[i] = 5;
}

void init_stage3_v(game_t *gm)
{
    gm->play->ear->mp->stage[0] = 124;
    gm->play->ear->mp->stage[1] = 299;
    gm->play->ear->mp->stage[2] = 470;
    gm->play->ear->mp->stage[3] = 121;
    gm->play->ear->mp->stage[4] = 454;
    gm->play->ear->mp->stage[5] = 91;
    gm->play->ear->mp->stage[6] = 101;
    gm->play->ear->mp->stage[7] = 44;
    gm->play->ear->mp->stage[8] = 425;
    gm->play->ear->mp->stage[9] = 386;
    gm->play->ear->mp->stage[10] = 394;
    gm->play->ear->mp->stage[11] = 402;
    gm->play->ear->mp->stage[12] = 401;
    gm->play->ear->mp->stage[13] = 56;
    gm->play->ear->mp->stage[14] = 409;
    gm->play->ear->mp->stage[15] = 120;
    gm->play->ear->mp->stage[16] = 96;
    gm->play->ear->mp->stage[17] = 98;
    gm->play->ear->mp->stage[18] = 49;
    gm->play->ear->mp->stage[19] = 99;
    gm->play->ear->mp->stage[20] = 97;
    gm->play->ear->mp->stage[21] = 109;
    gm->play->ear->mp->stage[22] = 423;
    gm->play->ear->mp->stage[23] = 90;
    gm->play->ear->mp->stage[24] = 257;
    gm->play->ear->mp->stage[25] = 92;
    gm->play->ear->mp->stage[26] = 213;
    gm->play->ear->mp->stage[27] = 408;
    gm->play->ear->mp->stage[28] = 420;
    gm->play->ear->mp->stage[29] = 424;
    gm->play->ear->mp->stage[30] = 421;
    gm->play->ear->mp->stage[31] = 181;
    gm->play->ear->mp->stage[32] = 430;
    gm->play->ear->mp->stage[33] = 100;
    gm->play->ear->mp->stage[34] = 107;
    gm->play->ear->mp->stage[35] = 113;
    gm->play->ear->mp->stage[36] = 112;
    gm->play->ear->mp->stage[37] = 462;
    gm->play->ear->mp->stage[38] = 116;
    gm->play->ear->mp->stage[39] = 77;
    gm->play->ear->mp->stage[40] = 463;
    gm->play->ear->mp->stage[41] = 182;
    gm->play->ear->mp->stage[42] = 446;
    gm->play->ear->mp->stage[43] = 447;
    gm->play->ear->mp->stage[44] = 290;
    gm->play->ear->mp->stage[45] = 53;
    gm->play->ear->mp->stage[46] = 229;
    gm->play->ear->mp->stage[47] = 471;
    gm->play->ear->mp->stage[48] = 455;
    gm->play->ear->mp->stage[49] = 291;
    gm->play->ear->mp->stage[50] = 102;
    gm->play->ear->mp->stage[51] = 438;
    gm->play->ear->mp->stage[52] = 439;
    gm->play->ear->mp->stage[53] = 298;
    gm->play->ear->mp->stage[54] = 61;
    gm->play->ear->mp->stage[55] = 237;
    gm->play->ear->mp->stage[56] = 197;
    gm->play->ear->mp->stage[57] = 337;
    gm->play->ear->mp->stage[58] = 338;
    gm->play->ear->mp->stage[59] = 245;
    gm->play->ear->mp->stage[60] = 371;
    gm->play->ear->mp->stage[61] = 345;
    gm->play->ear->mp->stage[62] = 346;
    gm->play->ear->mp->stage[63] = 55;
    gm->play->ear->mp->stage[64] = 196;
    gm->play->ear->mp->stage[65] = 63;
    gm->play->ear->mp->stage[66] = 69;
    gm->play->ear->mp->stage[67] = 204;
    gm->play->ear->mp->stage[68] = 192;
    gm->play->ear->mp->stage[69] = 198;
    gm->play->ear->mp->stage[70] = 309;
    gm->play->ear->mp->stage[71] = 310;
    gm->play->ear->mp->stage[72] = 311;
    gm->play->ear->mp->stage[73] = 199;
    gm->play->ear->mp->stage[74] = 68;
    gm->play->ear->mp->stage[75] = 343;
    gm->play->ear->mp->stage[76] = 71;
    gm->play->ear->mp->stage[77] = 200;
    gm->play->ear->mp->stage[78] = 206;
    gm->play->ear->mp->stage[79] = 259;
    gm->play->ear->mp->stage[80] = 317;
    gm->play->ear->mp->stage[81] = 318;
    gm->play->ear->mp->stage[82] = 319;
    gm->play->ear->mp->stage[83] = 261;
    gm->play->ear->mp->stage[84] = 351;
    gm->play->ear->mp->stage[85] = 267;
    gm->play->ear->mp->stage[86] = 84;
    gm->play->ear->mp->stage[87] = 269;
    gm->play->ear->mp->stage[88] = 275;
    gm->play->ear->mp->stage[89] = 74;
    gm->play->ear->mp->stage[90] = 178;
    gm->play->ear->mp->stage[91] = 93;
    gm->play->ear->mp->stage[92] = 78;
    gm->play->ear->mp->stage[93] = 208;
    gm->play->ear->mp->stage[94] = 209;
    gm->play->ear->mp->stage[95] = 210;
    gm->play->ear->mp->stage[96] = 36;
    gm->play->ear->mp->stage[97] = 7;
    gm->play->ear->mp->stage[98] = 410;
    gm->play->ear->mp->stage[99] = 216;
    gm->play->ear->mp->stage[100] = 217;
    gm->play->ear->mp->stage[101] = 218;
    gm->play->ear->mp->stage[102] = 37;
    gm->play->ear->mp->stage[103] = 211;
    gm->play->ear->mp->stage[104] = 416;
    gm->play->ear->mp->stage[105] = 417;
    gm->play->ear->mp->stage[106] = 418;
    gm->play->ear->mp->stage[107] = 224;
    gm->play->ear->mp->stage[108] = 225;
    gm->play->ear->mp->stage[109] = 226;
    gm->play->ear->mp->stage[110] = 119;
    gm->play->ear->mp->stage[111] = 80;
    gm->play->ear->mp->stage[112] = 219;
    gm->play->ear->mp->stage[113] = 442;
    gm->play->ear->mp->stage[114] = 426;
    gm->play->ear->mp->stage[115] = 86;
    gm->play->ear->mp->stage[116] = 110;
    gm->play->ear->mp->stage[117] = 227;
    gm->play->ear->mp->stage[118] = 51;
    gm->play->ear->mp->stage[119] = 384;
    gm->play->ear->mp->stage[120] = 385;
    gm->play->ear->mp->stage[121] = 388;
    gm->play->ear->mp->stage[122] = 59;
    gm->play->ear->mp->stage[123] = 126;
    gm->play->ear->mp->stage[124] = 392;
    gm->play->ear->mp->stage[125] = 393;
    gm->play->ear->mp->stage[126] = 396;
    gm->play->ear->mp->stage[127] = 117;
    gm->play->ear->mp->stage[128] = 400;
    gm->play->ear->mp->stage[129] = 434;
    gm->play->ear->mp->stage[130] = 9;
    gm->play->ear->mp->stage[131] = 64;
    gm->play->ear->mp->stage[132] = 48;
    gm->play->ear->mp->stage[133] = 34;
    gm->play->ear->mp->stage[134] = 57;
    gm->play->ear->mp->stage[135] = 355;
    gm->play->ear->mp->stage[136] = 2;
    gm->play->ear->mp->stage[137] = 76;
    gm->play->ear->mp->stage[138] = 363;
    gm->play->ear->mp->stage[139] = 75;
    gm->play->ear->mp->stage[140] = 72;
    gm->play->ear->mp->stage[141] = 106;
    gm->play->ear->mp->stage[142] = 427;
    gm->play->ear->mp->stage[143] = 45;
    gm->play->ear->mp->stage[144] = 3;
    gm->play->ear->mp->stage[145] = 111;
    gm->play->ear->mp->stage[146] = 104;
    gm->play->ear->mp->stage[147] = 89;
    gm->play->ear->mp->stage[148] = 82;
    gm->play->ear->mp->stage[149] = 4;
    gm->play->ear->mp->stage[150] = 108;
    gm->play->ear->mp->stage[151] = 428;
    gm->play->ear->mp->stage[152] = 1;
    gm->play->ear->mp->stage[153] = 73;
    gm->play->ear->mp->stage[154] = 194;
    gm->play->ear->mp->stage[155] = 359;
    gm->play->ear->mp->stage[156] = 172;
    gm->play->ear->mp->stage[157] = 367;
    gm->play->ear->mp->stage[158] = 180;
    gm->play->ear->mp->stage[159] = 85;
    gm->play->ear->mp->stage[160] = 171;
    gm->play->ear->mp->stage[161] = 189;
    gm->play->ear->mp->stage[162] = 247;
    gm->play->ear->mp->stage[163] = 95;
    gm->play->ear->mp->stage[164] = 413;
    gm->play->ear->mp->stage[165] = 415;
    gm->play->ear->mp->stage[166] = 429;
    gm->play->ear->mp->stage[167] = 431;
    gm->play->ear->mp->stage[168] = 38;
    gm->play->ear->mp->stage[169] = 32;
    gm->play->ear->mp->stage[170] = 46;
    gm->play->ear->mp->stage[171] = 83;
    gm->play->ear->mp->stage[172] = 265;
    gm->play->ear->mp->stage[173] = 65;
    gm->play->ear->mp->stage[174] = 274;
    gm->play->ear->mp->stage[175] = 341;
    gm->play->ear->mp->stage[176] = 342;
    gm->play->ear->mp->stage[177] = 87;
    gm->play->ear->mp->stage[178] = 349;
    gm->play->ear->mp->stage[179] = 350;
    gm->play->ear->mp->stage[180] = 21;
    gm->play->ear->mp->stage[181] = 414;
    gm->play->ear->mp->stage[182] = 422;
    gm->play->ear->mp->stage[183] = 444;
    gm->play->ear->mp->stage[184] = 443;
    gm->play->ear->mp->stage[185] = 254;
    gm->play->ear->mp->stage[186] = 125;
    gm->play->ear->mp->stage[187] = 195;
    gm->play->ear->mp->stage[188] = 203;
    gm->play->ear->mp->stage[189] = 283;
    gm->play->ear->mp->stage[190] = 285;
    init_stage3_text_v(gm);
    init_stage3_rect_v(gm);
}