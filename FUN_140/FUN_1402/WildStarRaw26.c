//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1402bd690(undefined (*param_1)[16], undefined (*param_2)[16]) {
    undefined in_XMM0[16];
    undefined auVar1[16];
    undefined in_XMM1[16];
    short sVar2;
    short sVar3;
    short sVar4;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    int iVar10;
    int iVar12;
    int iVar13;
    undefined in_XMM3[16];
    undefined auVar11[16];
    int iVar14;
    undefined4 uVar15;
    int iVar16;
    int iVar18;
    int iVar19;
    undefined auVar17[16];
    int iVar20;
    short sVar21;
    short sVar23;
    short sVar24;
    short sVar25;
    short sVar26;
    short sVar27;
    short sVar28;
    undefined in_XMM5[16];
    undefined auVar22[16];
    short sVar29;
    short sVar30;
    undefined4 uVar31;
    int iVar32;
    short sVar34;
    short sVar35;
    int iVar36;
    short sVar37;
    short sVar38;
    int iVar39;
    short sVar40;
    short sVar41;
    undefined auVar33[16];
    int iVar42;
    short sVar43;
    short sVar44;
    ushort uVar45;
    undefined4 uVar46;
    int iVar47;
    ushort uVar49;
    ushort uVar50;
    int iVar51;
    ushort uVar52;
    ushort uVar53;
    int iVar54;
    ushort uVar55;
    ushort uVar56;
    undefined auVar48[16];
    int iVar57;
    ushort uVar58;
    ushort uVar59;
    ushort uVar60;
    ushort uVar61;
    ushort uVar62;
    ushort uVar63;
    ushort uVar64;
    ushort uVar65;
    ushort uVar66;
    short sVar67;
    short sVar68;
    short sVar69;
    short sVar70;
    short sVar71;
    short sVar72;
    short sVar73;
    short sVar74;
    short sVar75;
    short sVar76;
    short sVar77;
    short sVar78;
    short sVar79;
    short sVar80;
    short sVar81;
    short sVar82;
    short sVar83;
    short sVar84;
    short sVar85;
    short sVar86;
    short sVar87;
    short sVar88;
    short sVar89;
    short sVar90;
    short sVar91;
    short sVar92;
    short sVar93;
    short sVar94;
    short sVar95;
    short sVar96;
    short sVar97;

    auVar11 = pshuflw(in_XMM3, param_2[2], 0xd8);
    auVar1 = pshufhw(in_XMM0, param_2[3], 0xd8);
    auVar22 = pshuflw(in_XMM5, auVar1, 0xd8);
    auVar1 = pshufhw(in_XMM1, auVar11, 0xd8);
    uVar46 = SUB164(auVar11, 0);
    auVar48 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed5e0);
    uVar46 = SUB164(auVar1 >> 0x40, 0);
    uVar15 = SUB164(auVar1 >> 0x60, 0);
    uVar31 = SUB164(auVar22, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed5f0);
    auVar33 = pmaddwd(CONCAT412(uVar31, CONCAT48(uVar31, CONCAT44(uVar31, uVar31))), _DAT_140aed620);
    auVar17 = pmaddwd(CONCAT412(uVar15, CONCAT48(uVar15, CONCAT44(uVar15, uVar15))), _DAT_140aed610);
    iVar47 = SUB164(auVar48, 0) + _DAT_140c79b80 + SUB164(auVar1, 0);
    iVar51 = SUB164(auVar48 >> 0x20, 0) + iRam0000000140c79b84 + SUB164(auVar1 >> 0x20, 0);
    iVar54 = SUB164(auVar48 >> 0x40, 0) + iRam0000000140c79b88 + SUB164(auVar1 >> 0x40, 0);
    iVar57 = SUB164(auVar48 >> 0x60, 0) + iRam0000000140c79b8c + SUB164(auVar1 >> 0x60, 0);
    uVar46 = SUB164(auVar11 >> 0x20, 0);
    uVar15 = SUB164(auVar22 >> 0x60, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed600);
    auVar11 = pmaddwd(CONCAT412(uVar15, CONCAT48(uVar15, CONCAT44(uVar15, uVar15))), _DAT_140aed650);
    iVar16 = SUB164(auVar17, 0) + SUB164(auVar1, 0);
    iVar18 = SUB164(auVar17 >> 0x20, 0) + SUB164(auVar1 >> 0x20, 0);
    iVar19 = SUB164(auVar17 >> 0x40, 0) + SUB164(auVar1 >> 0x40, 0);
    iVar20 = SUB164(auVar17 >> 0x60, 0) + SUB164(auVar1 >> 0x60, 0);
    uVar46 = SUB164(auVar22 >> 0x40, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed630);
    iVar32 = SUB164(auVar33, 0) + _DAT_140c79b80 + SUB164(auVar1, 0);
    iVar36 = SUB164(auVar33 >> 0x20, 0) + iRam0000000140c79b84 + SUB164(auVar1 >> 0x20, 0);
    iVar39 = SUB164(auVar33 >> 0x40, 0) + iRam0000000140c79b88 + SUB164(auVar1 >> 0x40, 0);
    iVar42 = SUB164(auVar33 >> 0x60, 0) + iRam0000000140c79b8c + SUB164(auVar1 >> 0x60, 0);
    uVar46 = SUB164(auVar22 >> 0x20, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed640);
    iVar10 = SUB164(auVar11, 0) + SUB164(auVar1, 0);
    iVar12 = SUB164(auVar11 >> 0x20, 0) + SUB164(auVar1 >> 0x20, 0);
    iVar13 = SUB164(auVar11 >> 0x40, 0) + SUB164(auVar1 >> 0x40, 0);
    iVar14 = SUB164(auVar11 >> 0x60, 0) + SUB164(auVar1 >> 0x60, 0);
    auVar11 = packssdw(CONCAT412(iVar57 + iVar20 >> 0xc,
                                 CONCAT48(iVar54 + iVar19 >> 0xc,
                                          CONCAT44(iVar51 + iVar18 >> 0xc, iVar47 + iVar16 >> 0xc))),
                       CONCAT412(iVar47 - iVar16 >> 0xc,
                                 CONCAT48(iVar51 - iVar18 >> 0xc,
                                          CONCAT44(iVar54 - iVar19 >> 0xc, iVar57 - iVar20 >> 0xc))));
    param_1[2] = auVar11;
    auVar1 = CONCAT412(iVar32 - iVar10 >> 0xc,
                       CONCAT48(iVar36 - iVar12 >> 0xc,
                                CONCAT44(iVar39 - iVar13 >> 0xc, iVar42 - iVar14 >> 0xc)));
    auVar17 = packssdw(CONCAT412(iVar42 + iVar14 >> 0xc,
                                 CONCAT48(iVar39 + iVar13 >> 0xc,
                                          CONCAT44(iVar36 + iVar12 >> 0xc, iVar32 + iVar10 >> 0xc))),
                       auVar1);
    param_1[3] = auVar17;
    auVar17 = pshuflw(CONCAT412(iVar14, CONCAT48(iVar13, CONCAT44(iVar12, iVar10))), param_2[4], 0xd8);
    auVar1 = pshufhw(auVar1, param_2[5], 0xd8);
    auVar33 = pshuflw(auVar22, auVar1, 0xd8);
    auVar1 = pshufhw(auVar11, auVar17, 0xd8);
    uVar46 = SUB164(auVar17, 0);
    auVar11 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed560);
    uVar46 = SUB164(auVar1 >> 0x40, 0);
    uVar15 = SUB164(auVar1 >> 0x60, 0);
    uVar31 = SUB164(auVar33, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed570);
    auVar48 = pmaddwd(CONCAT412(uVar31, CONCAT48(uVar31, CONCAT44(uVar31, uVar31))), _DAT_140aed620);
    auVar22 = pmaddwd(CONCAT412(uVar15, CONCAT48(uVar15, CONCAT44(uVar15, uVar15))), _DAT_140aed590);
    iVar47 = SUB164(auVar11, 0) + _DAT_140c79b80 + SUB164(auVar1, 0);
    iVar51 = SUB164(auVar11 >> 0x20, 0) + iRam0000000140c79b84 + SUB164(auVar1 >> 0x20, 0);
    iVar54 = SUB164(auVar11 >> 0x40, 0) + iRam0000000140c79b88 + SUB164(auVar1 >> 0x40, 0);
    iVar57 = SUB164(auVar11 >> 0x60, 0) + iRam0000000140c79b8c + SUB164(auVar1 >> 0x60, 0);
    uVar46 = SUB164(auVar17 >> 0x20, 0);
    uVar15 = SUB164(auVar33 >> 0x60, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed580);
    auVar11 = pmaddwd(CONCAT412(uVar15, CONCAT48(uVar15, CONCAT44(uVar15, uVar15))), _DAT_140aed650);
    iVar16 = SUB164(auVar22, 0) + SUB164(auVar1, 0);
    iVar18 = SUB164(auVar22 >> 0x20, 0) + SUB164(auVar1 >> 0x20, 0);
    iVar19 = SUB164(auVar22 >> 0x40, 0) + SUB164(auVar1 >> 0x40, 0);
    iVar20 = SUB164(auVar22 >> 0x60, 0) + SUB164(auVar1 >> 0x60, 0);
    uVar46 = SUB164(auVar33 >> 0x40, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed630);
    iVar32 = SUB164(auVar48, 0) + _DAT_140c79b80 + SUB164(auVar1, 0);
    iVar36 = SUB164(auVar48 >> 0x20, 0) + iRam0000000140c79b84 + SUB164(auVar1 >> 0x20, 0);
    iVar39 = SUB164(auVar48 >> 0x40, 0) + iRam0000000140c79b88 + SUB164(auVar1 >> 0x40, 0);
    iVar42 = SUB164(auVar48 >> 0x60, 0) + iRam0000000140c79b8c + SUB164(auVar1 >> 0x60, 0);
    uVar46 = SUB164(auVar33 >> 0x20, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed640);
    iVar10 = SUB164(auVar11, 0) + SUB164(auVar1, 0);
    iVar12 = SUB164(auVar11 >> 0x20, 0) + SUB164(auVar1 >> 0x20, 0);
    iVar13 = SUB164(auVar11 >> 0x40, 0) + SUB164(auVar1 >> 0x40, 0);
    iVar14 = SUB164(auVar11 >> 0x60, 0) + SUB164(auVar1 >> 0x60, 0);
    auVar11 = packssdw(CONCAT412(iVar57 + iVar20 >> 0xc,
                                 CONCAT48(iVar54 + iVar19 >> 0xc,
                                          CONCAT44(iVar51 + iVar18 >> 0xc, iVar47 + iVar16 >> 0xc))),
                       CONCAT412(iVar47 - iVar16 >> 0xc,
                                 CONCAT48(iVar51 - iVar18 >> 0xc,
                                          CONCAT44(iVar54 - iVar19 >> 0xc, iVar57 - iVar20 >> 0xc))));
    param_1[4] = auVar11;
    auVar1 = CONCAT412(iVar32 - iVar10 >> 0xc,
                       CONCAT48(iVar36 - iVar12 >> 0xc,
                                CONCAT44(iVar39 - iVar13 >> 0xc, iVar42 - iVar14 >> 0xc)));
    auVar17 = packssdw(CONCAT412(iVar42 + iVar14 >> 0xc,
                                 CONCAT48(iVar39 + iVar13 >> 0xc,
                                          CONCAT44(iVar36 + iVar12 >> 0xc, iVar32 + iVar10 >> 0xc))),
                       auVar1);
    param_1[5] = auVar17;
    auVar17 = pshuflw(CONCAT412(iVar14, CONCAT48(iVar13, CONCAT44(iVar12, iVar10))), *param_2, 0xd8);
    auVar1 = pshufhw(auVar1, param_2[1], 0xd8);
    auVar33 = pshuflw(auVar33, auVar1, 0xd8);
    auVar1 = pshufhw(auVar11, auVar17, 0xd8);
    uVar46 = SUB164(auVar17, 0);
    auVar11 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed560);
    uVar46 = SUB164(auVar1 >> 0x40, 0);
    uVar15 = SUB164(auVar1 >> 0x60, 0);
    uVar31 = SUB164(auVar33, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed570);
    auVar48 = pmaddwd(CONCAT412(uVar31, CONCAT48(uVar31, CONCAT44(uVar31, uVar31))), _DAT_140aed5a0);
    auVar22 = pmaddwd(CONCAT412(uVar15, CONCAT48(uVar15, CONCAT44(uVar15, uVar15))), _DAT_140aed590);
    iVar47 = SUB164(auVar11, 0) + _DAT_140c79b80 + SUB164(auVar1, 0);
    iVar51 = SUB164(auVar11 >> 0x20, 0) + iRam0000000140c79b84 + SUB164(auVar1 >> 0x20, 0);
    iVar54 = SUB164(auVar11 >> 0x40, 0) + iRam0000000140c79b88 + SUB164(auVar1 >> 0x40, 0);
    iVar57 = SUB164(auVar11 >> 0x60, 0) + iRam0000000140c79b8c + SUB164(auVar1 >> 0x60, 0);
    uVar46 = SUB164(auVar17 >> 0x20, 0);
    uVar15 = SUB164(auVar33 >> 0x60, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed580);
    auVar11 = pmaddwd(CONCAT412(uVar15, CONCAT48(uVar15, CONCAT44(uVar15, uVar15))), _DAT_140aed5d0);
    iVar16 = SUB164(auVar22, 0) + SUB164(auVar1, 0);
    iVar18 = SUB164(auVar22 >> 0x20, 0) + SUB164(auVar1 >> 0x20, 0);
    iVar19 = SUB164(auVar22 >> 0x40, 0) + SUB164(auVar1 >> 0x40, 0);
    iVar20 = SUB164(auVar22 >> 0x60, 0) + SUB164(auVar1 >> 0x60, 0);
    uVar46 = SUB164(auVar33 >> 0x40, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed5b0);
    iVar32 = SUB164(auVar48, 0) + _DAT_140c79b80 + SUB164(auVar1, 0);
    iVar36 = SUB164(auVar48 >> 0x20, 0) + iRam0000000140c79b84 + SUB164(auVar1 >> 0x20, 0);
    iVar39 = SUB164(auVar48 >> 0x40, 0) + iRam0000000140c79b88 + SUB164(auVar1 >> 0x40, 0);
    iVar42 = SUB164(auVar48 >> 0x60, 0) + iRam0000000140c79b8c + SUB164(auVar1 >> 0x60, 0);
    uVar46 = SUB164(auVar33 >> 0x20, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed5c0);
    iVar10 = SUB164(auVar11, 0) + SUB164(auVar1, 0);
    iVar12 = SUB164(auVar11 >> 0x20, 0) + SUB164(auVar1 >> 0x20, 0);
    iVar13 = SUB164(auVar11 >> 0x40, 0) + SUB164(auVar1 >> 0x40, 0);
    iVar14 = SUB164(auVar11 >> 0x60, 0) + SUB164(auVar1 >> 0x60, 0);
    auVar11 = packssdw(CONCAT412(iVar57 + iVar20 >> 0xc,
                                 CONCAT48(iVar54 + iVar19 >> 0xc,
                                          CONCAT44(iVar51 + iVar18 >> 0xc, iVar47 + iVar16 >> 0xc))),
                       CONCAT412(iVar47 - iVar16 >> 0xc,
                                 CONCAT48(iVar51 - iVar18 >> 0xc,
                                          CONCAT44(iVar54 - iVar19 >> 0xc, iVar57 - iVar20 >> 0xc))));
    *param_1 = auVar11;
    auVar1 = CONCAT412(iVar32 - iVar10 >> 0xc,
                       CONCAT48(iVar36 - iVar12 >> 0xc,
                                CONCAT44(iVar39 - iVar13 >> 0xc, iVar42 - iVar14 >> 0xc)));
    auVar17 = packssdw(CONCAT412(iVar42 + iVar14 >> 0xc,
                                 CONCAT48(iVar39 + iVar13 >> 0xc,
                                          CONCAT44(iVar36 + iVar12 >> 0xc, iVar32 + iVar10 >> 0xc))),
                       auVar1);
    param_1[1] = auVar17;
    auVar1 = pshuflw(auVar1, param_2[6], 0xd8);
    auVar11 = pshufhw(auVar11, auVar1, 0xd8);
    uVar46 = SUB164(auVar1, 0);
    uVar15 = SUB164(auVar1 >> 0x20, 0);
    auVar17 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed5e0);
    auVar22 = pmaddwd(CONCAT412(uVar15, CONCAT48(uVar15, CONCAT44(uVar15, uVar15))), _DAT_140aed600);
    auVar1 = pshufhw(auVar1, param_2[7], 0xd8);
    uVar46 = SUB164(auVar11 >> 0x40, 0);
    auVar48 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed5f0);
    auVar33 = pshuflw(CONCAT412(iVar20, CONCAT48(iVar19, CONCAT44(iVar18, iVar16))), auVar1, 0xd8);
    iVar47 = SUB164(auVar48, 0) + SUB164(auVar17, 0) + _DAT_140c79b80;
    iVar51 = SUB164(auVar48 >> 0x20, 0) + SUB164(auVar17 >> 0x20, 0) + iRam0000000140c79b84;
    iVar54 = SUB164(auVar48 >> 0x40, 0) + SUB164(auVar17 >> 0x40, 0) + iRam0000000140c79b88;
    iVar57 = SUB164(auVar48 >> 0x60, 0) + SUB164(auVar17 >> 0x60, 0) + iRam0000000140c79b8c;
    uVar46 = SUB164(auVar11 >> 0x60, 0);
    auVar11 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed610);
    uVar46 = SUB164(auVar33, 0);
    uVar31 = SUB164(auVar33 >> 0x40, 0);
    uVar15 = SUB164(auVar33 >> 0x20, 0);
    auVar1 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed5a0);
    auVar48 = pmaddwd(CONCAT412(uVar31, CONCAT48(uVar31, CONCAT44(uVar31, uVar31))), _DAT_140aed5b0);
    auVar17 = pmaddwd(CONCAT412(uVar15, CONCAT48(uVar15, CONCAT44(uVar15, uVar15))), _DAT_140aed5c0);
    iVar10 = SUB164(auVar11, 0) + SUB164(auVar22, 0);
    iVar12 = SUB164(auVar11 >> 0x20, 0) + SUB164(auVar22 >> 0x20, 0);
    iVar13 = SUB164(auVar11 >> 0x40, 0) + SUB164(auVar22 >> 0x40, 0);
    iVar14 = SUB164(auVar11 >> 0x60, 0) + SUB164(auVar22 >> 0x60, 0);
    uVar46 = SUB164(auVar33 >> 0x60, 0);
    auVar22 = pmaddwd(CONCAT412(uVar46, CONCAT48(uVar46, CONCAT44(uVar46, uVar46))), _DAT_140aed5d0);
    iVar32 = SUB164(auVar48, 0) + SUB164(auVar1, 0) + _DAT_140c79b80;
    iVar36 = SUB164(auVar48 >> 0x20, 0) + SUB164(auVar1 >> 0x20, 0) + iRam0000000140c79b84;
    iVar39 = SUB164(auVar48 >> 0x40, 0) + SUB164(auVar1 >> 0x40, 0) + iRam0000000140c79b88;
    iVar42 = SUB164(auVar48 >> 0x60, 0) + SUB164(auVar1 >> 0x60, 0) + iRam0000000140c79b8c;
    auVar1 = param_1[5];
    auVar11 = param_1[1];
    iVar16 = SUB164(auVar22, 0) + SUB164(auVar17, 0);
    iVar18 = SUB164(auVar22 >> 0x20, 0) + SUB164(auVar17 >> 0x20, 0);
    iVar19 = SUB164(auVar22 >> 0x40, 0) + SUB164(auVar17 >> 0x40, 0);
    iVar20 = SUB164(auVar22 >> 0x60, 0) + SUB164(auVar17 >> 0x60, 0);
    auVar17 = packssdw(CONCAT412(iVar57 + iVar14 >> 0xc,
                                 CONCAT48(iVar54 + iVar13 >> 0xc,
                                          CONCAT44(iVar51 + iVar12 >> 0xc, iVar47 + iVar10 >> 0xc))),
                       CONCAT412(iVar47 - iVar10 >> 0xc,
                                 CONCAT48(iVar51 - iVar12 >> 0xc,
                                          CONCAT44(iVar54 - iVar13 >> 0xc, iVar57 - iVar14 >> 0xc))));
    param_1[6] = auVar17;
    auVar17 = packssdw(CONCAT412(iVar42 + iVar20 >> 0xc,
                                 CONCAT48(iVar39 + iVar19 >> 0xc,
                                          CONCAT44(iVar36 + iVar18 >> 0xc, iVar32 + iVar16 >> 0xc))),
                       CONCAT412(iVar32 - iVar16 >> 0xc,
                                 CONCAT48(iVar36 - iVar18 >> 0xc,
                                          CONCAT44(iVar39 - iVar19 >> 0xc, iVar42 - iVar20 >> 0xc))));
    param_1[7] = auVar17;
    auVar22 = pmulhw(auVar1, _DAT_140c79bd0);
    auVar17 = param_1[3];
    sVar23 = SUB162(auVar1 >> 0x10, 0);
    sVar24 = SUB162(auVar1 >> 0x20, 0);
    sVar25 = SUB162(auVar1 >> 0x30, 0);
    sVar26 = SUB162(auVar1 >> 0x40, 0);
    sVar27 = SUB162(auVar1 >> 0x50, 0);
    sVar28 = SUB162(auVar1 >> 0x60, 0);
    sVar29 = SUB162(auVar1 >> 0x70, 0);
    sVar30 = SUB162(auVar22, 0) + SUB162(auVar1, 0) + SUB162(auVar17, 0);
    sVar67 = SUB162(auVar17 >> 0x10, 0);
    sVar34 = SUB162(auVar22 >> 0x10, 0) + sVar23 + sVar67;
    sVar69 = SUB162(auVar17 >> 0x20, 0);
    sVar35 = SUB162(auVar22 >> 0x20, 0) + sVar24 + sVar69;
    sVar71 = SUB162(auVar17 >> 0x30, 0);
    sVar37 = SUB162(auVar22 >> 0x30, 0) + sVar25 + sVar71;
    sVar73 = SUB162(auVar17 >> 0x40, 0);
    sVar38 = SUB162(auVar22 >> 0x40, 0) + sVar26 + sVar73;
    sVar75 = SUB162(auVar17 >> 0x50, 0);
    sVar40 = SUB162(auVar22 >> 0x50, 0) + sVar27 + sVar75;
    sVar77 = SUB162(auVar17 >> 0x60, 0);
    sVar41 = SUB162(auVar22 >> 0x60, 0) + sVar28 + sVar77;
    sVar79 = SUB162(auVar17 >> 0x70, 0);
    sVar43 = SUB162(auVar22 >> 0x70, 0) + sVar29 + sVar79;
    auVar33 = pmulhw(param_1[7], _DAT_140c79bb0);
    auVar22 = pmulhw(auVar17, _DAT_140c79bd0);
    sVar82 = SUB162(auVar33, 0) + SUB162(auVar11, 0);
    sVar84 = SUB162(auVar33 >> 0x10, 0) + SUB162(auVar11 >> 0x10, 0);
    sVar86 = SUB162(auVar33 >> 0x20, 0) + SUB162(auVar11 >> 0x20, 0);
    sVar88 = SUB162(auVar33 >> 0x30, 0) + SUB162(auVar11 >> 0x30, 0);
    sVar90 = SUB162(auVar33 >> 0x40, 0) + SUB162(auVar11 >> 0x40, 0);
    sVar92 = SUB162(auVar33 >> 0x50, 0) + SUB162(auVar11 >> 0x50, 0);
    sVar94 = SUB162(auVar33 >> 0x60, 0) + SUB162(auVar11 >> 0x60, 0);
    sVar96 = SUB162(auVar33 >> 0x70, 0) + SUB162(auVar11 >> 0x70, 0);
    auVar11 = pmulhw(auVar11, _DAT_140c79bb0);
    sVar21 = SUB162(auVar1, 0) - (SUB162(auVar22, 0) + SUB162(auVar17, 0));
    sVar23 = sVar23 - (SUB162(auVar22 >> 0x10, 0) + sVar67);
    sVar24 = sVar24 - (SUB162(auVar22 >> 0x20, 0) + sVar69);
    sVar25 = sVar25 - (SUB162(auVar22 >> 0x30, 0) + sVar71);
    sVar26 = sVar26 - (SUB162(auVar22 >> 0x40, 0) + sVar73);
    sVar27 = sVar27 - (SUB162(auVar22 >> 0x50, 0) + sVar75);
    sVar28 = sVar28 - (SUB162(auVar22 >> 0x60, 0) + sVar77);
    sVar29 = sVar29 - (SUB162(auVar22 >> 0x70, 0) + sVar79);
    sVar2 = sVar82 - sVar30;
    sVar3 = sVar84 - sVar34;
    sVar4 = sVar86 - sVar35;
    sVar5 = sVar88 - sVar37;
    sVar6 = sVar90 - sVar38;
    sVar7 = sVar92 - sVar40;
    sVar8 = sVar94 - sVar41;
    sVar9 = sVar96 - sVar43;
    sVar83 = sVar82 + sVar30 + _DAT_140c79b70;
    sVar85 = sVar84 + sVar34 + uRam0000000140c79b72;
    sVar87 = sVar86 + sVar35 + uRam0000000140c79b74;
    sVar89 = sVar88 + sVar37 + uRam0000000140c79b76;
    sVar91 = sVar90 + sVar38 + uRam0000000140c79b78;
    sVar93 = sVar92 + sVar40 + uRam0000000140c79b7a;
    sVar95 = sVar94 + sVar41 + uRam0000000140c79b7c;
    sVar97 = sVar96 + sVar43 + uRam0000000140c79b7e;
    sVar67 = SUB162(auVar11, 0) - *(short *) param_1[7];
    sVar69 = SUB162(auVar11 >> 0x10, 0) - *(short *) (param_1[7] + 2);
    sVar71 = SUB162(auVar11 >> 0x20, 0) - *(short *) (param_1[7] + 4);
    sVar73 = SUB162(auVar11 >> 0x30, 0) - *(short *) (param_1[7] + 6);
    sVar75 = SUB162(auVar11 >> 0x40, 0) - *(short *) (param_1[7] + 8);
    sVar77 = SUB162(auVar11 >> 0x50, 0) - *(short *) (param_1[7] + 10);
    sVar79 = SUB162(auVar11 >> 0x60, 0) - *(short *) (param_1[7] + 0xc);
    sVar34 = SUB162(auVar11 >> 0x70, 0) - *(short *) (param_1[7] + 0xe);
    sVar68 = sVar67 + sVar21;
    sVar70 = sVar69 + sVar23;
    sVar72 = sVar71 + sVar24;
    sVar74 = sVar73 + sVar25;
    sVar76 = sVar75 + sVar26;
    sVar78 = sVar77 + sVar27;
    sVar80 = sVar79 + sVar28;
    sVar81 = sVar34 + sVar29;
    sVar30 = (sVar67 - sVar21) + _DAT_140c79b70;
    sVar23 = (sVar69 - sVar23) + uRam0000000140c79b72;
    sVar24 = (sVar71 - sVar24) + uRam0000000140c79b74;
    sVar25 = (sVar73 - sVar25) + uRam0000000140c79b76;
    sVar26 = (sVar75 - sVar26) + uRam0000000140c79b78;
    sVar27 = (sVar77 - sVar27) + uRam0000000140c79b7a;
    sVar28 = (sVar79 - sVar28) + uRam0000000140c79b7c;
    sVar29 = (sVar34 - sVar29) + uRam0000000140c79b7e;
    sVar67 = sVar2 + sVar30;
    sVar69 = sVar3 + sVar23;
    sVar71 = sVar4 + sVar24;
    sVar73 = sVar5 + sVar25;
    sVar75 = sVar6 + sVar26;
    sVar77 = sVar7 + sVar27;
    sVar79 = sVar8 + sVar28;
    sVar21 = sVar9 + sVar29;
    sVar2 = sVar2 - sVar30;
    sVar3 = sVar3 - sVar23;
    sVar4 = sVar4 - sVar24;
    sVar5 = sVar5 - sVar25;
    sVar6 = sVar6 - sVar26;
    sVar7 = sVar7 - sVar27;
    sVar8 = sVar8 - sVar28;
    sVar9 = sVar9 - sVar29;
    auVar1 = param_1[2];
    auVar17 = pmulhw(CONCAT214(sVar21, CONCAT212(sVar79, CONCAT210(sVar77, CONCAT28(sVar75, CONCAT26(
            sVar73, CONCAT24(sVar71, CONCAT22(sVar69, sVar67)))))
    )), _DAT_140c79be0);
    auVar11 = pmulhw(CONCAT214(sVar9, CONCAT212(sVar8, CONCAT210(sVar7, CONCAT28(sVar6, CONCAT26(sVar5,
                                                                                                 CONCAT24(sVar4,
                                                                                                          CONCAT22(
                                                                                                                  sVar3,
                                                                                                                  sVar2))))))),
                     _DAT_140c79be0);
    uVar59 = SUB162(auVar17, 0) + sVar67 | _DAT_140c79b70;
    uVar60 = SUB162(auVar17 >> 0x10, 0) + sVar69 | uRam0000000140c79b72;
    uVar61 = SUB162(auVar17 >> 0x20, 0) + sVar71 | uRam0000000140c79b74;
    uVar62 = SUB162(auVar17 >> 0x30, 0) + sVar73 | uRam0000000140c79b76;
    uVar63 = SUB162(auVar17 >> 0x40, 0) + sVar75 | uRam0000000140c79b78;
    uVar64 = SUB162(auVar17 >> 0x50, 0) + sVar77 | uRam0000000140c79b7a;
    uVar65 = SUB162(auVar17 >> 0x60, 0) + sVar79 | uRam0000000140c79b7c;
    uVar66 = SUB162(auVar17 >> 0x70, 0) + sVar21 | uRam0000000140c79b7e;
    uVar45 = SUB162(auVar11, 0) + sVar2 | _DAT_140c79b70;
    uVar49 = SUB162(auVar11 >> 0x10, 0) + sVar3 | uRam0000000140c79b72;
    uVar50 = SUB162(auVar11 >> 0x20, 0) + sVar4 | uRam0000000140c79b74;
    uVar52 = SUB162(auVar11 >> 0x30, 0) + sVar5 | uRam0000000140c79b76;
    uVar53 = SUB162(auVar11 >> 0x40, 0) + sVar6 | uRam0000000140c79b78;
    uVar55 = SUB162(auVar11 >> 0x50, 0) + sVar7 | uRam0000000140c79b7a;
    uVar56 = SUB162(auVar11 >> 0x60, 0) + sVar8 | uRam0000000140c79b7c;
    uVar58 = SUB162(auVar11 >> 0x70, 0) + sVar9 | uRam0000000140c79b7e;
    auVar11 = pmulhw(param_1[6], _DAT_140c79bc0);
    sVar2 = *(short *) *param_1 + *(short *) param_1[4];
    sVar3 = *(short *) (*param_1 + 2) + *(short *) (param_1[4] + 2);
    sVar4 = *(short *) (*param_1 + 4) + *(short *) (param_1[4] + 4);
    sVar5 = *(short *) (*param_1 + 6) + *(short *) (param_1[4] + 6);
    sVar6 = *(short *) (*param_1 + 8) + *(short *) (param_1[4] + 8);
    sVar7 = *(short *) (*param_1 + 10) + *(short *) (param_1[4] + 10);
    sVar8 = *(short *) (*param_1 + 0xc) + *(short *) (param_1[4] + 0xc);
    sVar9 = *(short *) (*param_1 + 0xe) + *(short *) (param_1[4] + 0xe);
    sVar34 = *(short *) *param_1 - *(short *) param_1[4];
    sVar35 = *(short *) (*param_1 + 2) - *(short *) (param_1[4] + 2);
    sVar37 = *(short *) (*param_1 + 4) - *(short *) (param_1[4] + 4);
    sVar38 = *(short *) (*param_1 + 6) - *(short *) (param_1[4] + 6);
    sVar40 = *(short *) (*param_1 + 8) - *(short *) (param_1[4] + 8);
    sVar41 = *(short *) (*param_1 + 10) - *(short *) (param_1[4] + 10);
    sVar43 = *(short *) (*param_1 + 0xc) - *(short *) (param_1[4] + 0xc);
    sVar82 = *(short *) (*param_1 + 0xe) - *(short *) (param_1[4] + 0xe);
    sVar67 = SUB162(auVar11, 0) + SUB162(auVar1, 0);
    sVar69 = SUB162(auVar11 >> 0x10, 0) + SUB162(auVar1 >> 0x10, 0);
    sVar71 = SUB162(auVar11 >> 0x20, 0) + SUB162(auVar1 >> 0x20, 0);
    sVar73 = SUB162(auVar11 >> 0x30, 0) + SUB162(auVar1 >> 0x30, 0);
    sVar75 = SUB162(auVar11 >> 0x40, 0) + SUB162(auVar1 >> 0x40, 0);
    sVar77 = SUB162(auVar11 >> 0x50, 0) + SUB162(auVar1 >> 0x50, 0);
    sVar79 = SUB162(auVar11 >> 0x60, 0) + SUB162(auVar1 >> 0x60, 0);
    sVar21 = SUB162(auVar11 >> 0x70, 0) + SUB162(auVar1 >> 0x70, 0);
    auVar1 = pmulhw(auVar1, _DAT_140c79bc0);
    sVar84 = sVar2 + sVar67 + _DAT_140c79b90;
    sVar86 = sVar3 + sVar69 + sRam0000000140c79b92;
    sVar88 = sVar4 + sVar71 + sRam0000000140c79b94;
    sVar90 = sVar5 + sVar73 + sRam0000000140c79b96;
    sVar92 = sVar6 + sVar75 + sRam0000000140c79b98;
    sVar94 = sVar7 + sVar77 + sRam0000000140c79b9a;
    sVar96 = sVar8 + sVar79 + sRam0000000140c79b9c;
    sVar44 = sVar9 + sVar21 + sRam0000000140c79b9e;
    sVar30 = (sVar2 - sVar67) + _DAT_140c79ba0;
    sVar23 = (sVar3 - sVar69) + sRam0000000140c79ba2;
    sVar24 = (sVar4 - sVar71) + sRam0000000140c79ba4;
    sVar25 = (sVar5 - sVar73) + sRam0000000140c79ba6;
    sVar26 = (sVar6 - sVar75) + sRam0000000140c79ba8;
    sVar27 = (sVar7 - sVar77) + sRam0000000140c79baa;
    sVar28 = (sVar8 - sVar79) + sRam0000000140c79bac;
    sVar29 = (sVar9 - sVar21) + sRam0000000140c79bae;
    sVar2 = SUB162(auVar1, 0) - *(short *) param_1[6];
    sVar3 = SUB162(auVar1 >> 0x10, 0) - *(short *) (param_1[6] + 2);
    sVar4 = SUB162(auVar1 >> 0x20, 0) - *(short *) (param_1[6] + 4);
    sVar5 = SUB162(auVar1 >> 0x30, 0) - *(short *) (param_1[6] + 6);
    sVar6 = SUB162(auVar1 >> 0x40, 0) - *(short *) (param_1[6] + 8);
    sVar7 = SUB162(auVar1 >> 0x50, 0) - *(short *) (param_1[6] + 10);
    sVar8 = SUB162(auVar1 >> 0x60, 0) - *(short *) (param_1[6] + 0xc);
    sVar9 = SUB162(auVar1 >> 0x70, 0) - *(short *) (param_1[6] + 0xe);
    sVar67 = sVar34 + sVar2 + _DAT_140c79b90;
    sVar69 = sVar35 + sVar3 + sRam0000000140c79b92;
    sVar71 = sVar37 + sVar4 + sRam0000000140c79b94;
    sVar73 = sVar38 + sVar5 + sRam0000000140c79b96;
    sVar75 = sVar40 + sVar6 + sRam0000000140c79b98;
    sVar77 = sVar41 + sVar7 + sRam0000000140c79b9a;
    sVar79 = sVar43 + sVar8 + sRam0000000140c79b9c;
    sVar21 = sVar82 + sVar9 + sRam0000000140c79b9e;
    sVar2 = (sVar34 - sVar2) + _DAT_140c79ba0;
    sVar3 = (sVar35 - sVar3) + sRam0000000140c79ba2;
    sVar4 = (sVar37 - sVar4) + sRam0000000140c79ba4;
    sVar5 = (sVar38 - sVar5) + sRam0000000140c79ba6;
    sVar6 = (sVar40 - sVar6) + sRam0000000140c79ba8;
    sVar7 = (sVar41 - sVar7) + sRam0000000140c79baa;
    sVar8 = (sVar43 - sVar8) + sRam0000000140c79bac;
    sVar9 = (sVar82 - sVar9) + sRam0000000140c79bae;
    auVar1 = psraw(CONCAT214(sVar44 + sVar97,
                             CONCAT212(sVar96 + sVar95,
                                       CONCAT210(sVar94 + sVar93,
                                                 CONCAT28(sVar92 + sVar91,
                                                          CONCAT26(sVar90 + sVar89,
                                                                   CONCAT24(sVar88 + sVar87,
                                                                            CONCAT22(sVar86 + sVar85,
                                                                                     sVar84 + sVar83))
                                                          ))))), 5);
    *param_1 = auVar1;
    auVar11 = psraw(CONCAT214(uVar66 + sVar21,
                              CONCAT212(uVar65 + sVar79,
                                        CONCAT210(uVar64 + sVar77,
                                                  CONCAT28(uVar63 + sVar75,
                                                           CONCAT26(uVar62 + sVar73,
                                                                    CONCAT24(uVar61 + sVar71,
                                                                             CONCAT22(uVar60 + sVar69,
                                                                                      uVar59 + sVar67)
                                                                    )))))), 5);
    auVar1 = psraw(CONCAT214(uVar58 + sVar9,
                             CONCAT212(uVar56 + sVar8,
                                       CONCAT210(uVar55 + sVar7,
                                                 CONCAT28(uVar53 + sVar6,
                                                          CONCAT26(uVar52 + sVar5,
                                                                   CONCAT24(uVar50 + sVar4,
                                                                            CONCAT22(uVar49 + sVar3,
                                                                                     uVar45 + sVar2)))
                                                 )))), 5);
    param_1[1] = auVar11;
    param_1[2] = auVar1;
    auVar1 = psraw(CONCAT214(sVar44 - sVar97,
                             CONCAT212(sVar96 - sVar95,
                                       CONCAT210(sVar94 - sVar93,
                                                 CONCAT28(sVar92 - sVar91,
                                                          CONCAT26(sVar90 - sVar89,
                                                                   CONCAT24(sVar88 - sVar87,
                                                                            CONCAT22(sVar86 - sVar85,
                                                                                     sVar84 - sVar83))
                                                          ))))), 5);
    param_1[7] = auVar1;
    auVar1 = psraw(CONCAT214(sVar29 + sVar81,
                             CONCAT212(sVar28 + sVar80,
                                       CONCAT210(sVar27 + sVar78,
                                                 CONCAT28(sVar26 + sVar76,
                                                          CONCAT26(sVar25 + sVar74,
                                                                   CONCAT24(sVar24 + sVar72,
                                                                            CONCAT22(sVar23 + sVar70,
                                                                                     sVar30 + sVar68))
                                                          ))))), 5);
    auVar17 = psraw(CONCAT214(sVar29 - sVar81,
                              CONCAT212(sVar28 - sVar80,
                                        CONCAT210(sVar27 - sVar78,
                                                  CONCAT28(sVar26 - sVar76,
                                                           CONCAT26(sVar25 - sVar74,
                                                                    CONCAT24(sVar24 - sVar72,
                                                                             CONCAT22(sVar23 - sVar70,
                                                                                      sVar30 - sVar68)
                                                                    )))))), 5);
    auVar22 = psraw(CONCAT214(sVar9 - uVar58,
                              CONCAT212(sVar8 - uVar56,
                                        CONCAT210(sVar7 - uVar55,
                                                  CONCAT28(sVar6 - uVar53,
                                                           CONCAT26(sVar5 - uVar52,
                                                                    CONCAT24(sVar4 - uVar50,
                                                                             CONCAT22(sVar3 - uVar49,
                                                                                      sVar2 - uVar45))
                                                           ))))), 5);
    auVar11 = psraw(CONCAT214(sVar21 - uVar66,
                              CONCAT212(sVar79 - uVar65,
                                        CONCAT210(sVar77 - uVar64,
                                                  CONCAT28(sVar75 - uVar63,
                                                           CONCAT26(sVar73 - uVar62,
                                                                    CONCAT24(sVar71 - uVar61,
                                                                             CONCAT22(sVar69 - uVar60,
                                                                                      sVar67 - uVar59)
                                                                    )))))), 5);
    param_1[3] = auVar1;
    param_1[4] = auVar17;
    param_1[5] = auVar22;
    param_1[6] = auVar11;
    return 0;
}


void FUN_1402bdc20(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   int param_5, int param_6, uint **param_7, uint *param_8) {
    uint uVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    uint *puVar5;
    int iVar6;
    uint uVar7;
    uint *puVar8;
    uint uVar9;
    uint *puVar10;
    uint uVar11;
    uint uVar12;
    undefined auStack1784[32];
    uint local_6d8;
    uint local_6d4;
    uint local_6d0;
    uint local_6cc;
    uint *local_6c8;
    uint *local_6c0;
    undefined8 local_6b8;
    undefined8 local_6b0;
    undefined8 local_6a8;
    undefined8 local_6a0;
    undefined8 local_698;
    byte local_688[256];
    short asStack1416[64];
    short asStack1288[64];
    byte abStack1160[256];
    undefined local_388[848];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1784;
    uVar11 = param_6 + 0xfU >> 4;
    uVar7 = param_5 + 0xfU >> 4;
    local_6c0 = param_8;
    local_6d8 = uVar11;
    local_6cc = uVar7;
    local_6b8 = param_1;
    puVar5 = (uint *) FUN_14018b280((ulonglong)(uVar11 * uVar7 * 0x100) << 2, 8);
    *param_7 = puVar5;
    *param_8 = uVar7 << 6;
    local_698 = 0;
    local_6b0 = param_3;
    local_6a8 = param_4;
    local_6a0 = param_3;
    FUN_1402c0750(local_388);
    local_6c8 = *param_7;
    local_6d4 = 0;
    if (param_6 + 0xfU >> 4 != 0) {
        do {
            local_6d0 = 0;
            puVar5 = local_6c8;
            if (uVar7 != 0) {
                do {
                    iVar2 = FUN_1402bcb70();
                    if (iVar2 < 0) goto LAB_1402bde76;
                    uVar12 = 0;
                    puVar8 = puVar5;
                    uVar7 = uVar12;
                    uVar11 = uVar12;
                    do {
                        puVar10 = puVar8;
                        uVar9 = uVar12;
                        do {
                            uVar1 = uVar11 + uVar9;
                            uVar3 = (uVar9 >> 1) + (uVar7 >> 1) * 8;
                            iVar2 = (int) (short) ((ushort) local_688[uVar1] - (asStack1288[uVar3] >> 1));
                            iVar6 = asStack1288[uVar3] + iVar2;
                            if (iVar6 < 0) {
                                iVar6 = 0;
                            } else if (0xff < iVar6) {
                                iVar6 = 0xff;
                            }
                            iVar2 = iVar2 - ((int) asStack1416[uVar3] >> 1);
                            if (iVar2 < 0) {
                                iVar2 = 0;
                            } else if (0xff < iVar2) {
                                iVar2 = 0xff;
                            }
                            iVar4 = (int) (short) iVar2 + (int) asStack1416[uVar3];
                            if (iVar4 < 0) {
                                iVar4 = 0;
                            } else if (0xff < iVar4) {
                                iVar4 = 0xff;
                            }
                            uVar9 = uVar9 + 1;
                            *puVar10 = (((uint) abStack1160[uVar1] << 8 | (int) (short) iVar4) << 8 |
                                        (int) (short) iVar6) << 8 | (int) (short) iVar2;
                            puVar10 = puVar10 + 1;
                        } while (uVar9 < 0x10);
                        uVar11 = uVar11 + 0x10;
                        uVar7 = uVar7 + 1;
                        puVar8 = (uint * )((longlong) puVar8 + (ulonglong) * local_6c0);
                    } while (uVar11 < 0x100);
                    local_6d0 = local_6d0 + 1;
                    puVar5 = puVar5 + 0x10;
                    param_8 = local_6c0;
                    uVar7 = local_6cc;
                    uVar11 = local_6d8;
                } while (local_6d0 < local_6cc);
            }
            local_6c8 = (uint * )((longlong) local_6c8 + (ulonglong)(*param_8 << 4));
            local_6d4 = local_6d4 + 1;
        } while (local_6d4 < uVar11);
    }
    LAB_1402bde76:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1784);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402bdeb0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   int param_5, int param_6, byte **param_7, uint *param_8) {
    short sVar1;
    short sVar2;
    short sVar3;
    short sVar4;
    short sVar5;
    int iVar6;
    byte *pbVar7;
    longlong lVar8;
    uint uVar9;
    int iVar10;
    int iVar11;
    longlong lVar12;
    short sVar13;
    uint uVar14;
    uint uVar15;
    byte *pbVar16;
    undefined uVar17;
    uint uVar18;
    uint uVar19;
    uint uVar20;
    undefined auStack2008[32];
    byte local_7b8;
    byte local_7b7;
    byte local_7b6;
    byte local_7b5;
    byte local_7a8;
    byte local_7a7;
    byte local_7a6;
    byte local_7a5;
    undefined4 local_798;
    undefined4 local_794;
    undefined4 local_790;
    undefined4 local_78c;
    undefined4 local_788;
    undefined4 local_784;
    undefined4 local_780;
    undefined4 local_77c;
    undefined4 local_778;
    undefined4 local_774;
    undefined4 local_770;
    undefined4 local_76c;
    undefined4 local_768;
    undefined4 local_764;
    undefined4 local_760;
    undefined4 local_75c;
    uint local_758;
    uint local_754;
    byte *local_750;
    uint local_748;
    uint local_744;
    uint local_740;
    uint local_73c;
    uint local_738;
    uint local_734;
    uint local_730;
    uint local_72c;
    byte *local_728;
    byte *local_720;
    byte *local_718;
    uint *local_710;
    ulonglong local_708;
    ulonglong local_700;
    undefined8 local_6f8;
    undefined8 local_6f0;
    undefined8 local_6e8;
    undefined8 local_6e0;
    undefined8 local_6d8;
    byte local_6c8[16];
    byte local_6b8[16];
    byte local_6a8[16];
    byte local_698[208];
    short local_5c8[8];
    short local_5b8[56];
    short local_548[8];
    short local_538[56];
    undefined local_4c8[16];
    undefined local_4b8[16];
    undefined local_4a8[16];
    undefined local_498[208];
    undefined local_3c8[848];
    undefined4 local_78;
    undefined4 local_74;
    undefined4 local_70;
    undefined4 local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack2008;
    local_748 = param_6 + 0xfU >> 4;
    uVar19 = param_6 + 3U >> 2;
    local_73c = param_5 + 3U >> 2;
    uVar20 = param_5 + 0xfU >> 4;
    local_710 = param_8;
    local_738 = uVar20;
    local_734 = uVar19;
    local_6f8 = param_1;
    pbVar7 = (byte *) FUN_14018b280(uVar19 * *param_8, 8);
    *param_7 = pbVar7;
    local_6d8 = 0;
    local_6f0 = param_3;
    local_6e8 = param_4;
    local_6e0 = param_3;
    FUN_1402c0750(local_3c8);
    local_718 = *param_7;
    local_754 = 0;
    if (local_748 != 0) {
        do {
            local_744 = 0;
            pbVar7 = local_718;
            uVar15 = local_754;
            local_720 = local_718;
            if (uVar20 != 0) {
                do {
                    uVar14 = local_744;
                    local_720 = pbVar7;
                    iVar6 = FUN_1402bcb70(local_6c8, local_3c8);
                    if (iVar6 < 0) goto LAB_1402be9d9;
                    uVar9 = local_73c + uVar14 * -4;
                    uVar18 = 4;
                    if ((int) uVar9 < 4) {
                        uVar18 = uVar9;
                    }
                    uVar9 = uVar19 + uVar15 * -4;
                    local_730 = 4;
                    if ((int) uVar9 < 4) {
                        local_730 = uVar9;
                    }
                    local_758 = 0;
                    pbVar16 = pbVar7;
                    local_72c = uVar18;
                    local_728 = pbVar7;
                    if (local_730 != 0) {
                        do {
                            local_740 = 0;
                            local_728 = pbVar7;
                            if (uVar18 != 0) {
                                local_708 = (ulonglong)(local_758 << 6);
                                local_700 = (ulonglong)(local_758 << 4);
                                do {
                                    lVar12 = local_740 * 2 + local_700;
                                    lVar8 = local_740 * 4 + local_708;
                                    sVar13 = local_548[lVar12];
                                    sVar1 = local_5c8[lVar12];
                                    sVar4 = sVar13 >> 1;
                                    iVar6 = (int) sVar13 + (int) (short) ((ushort) local_6c8[lVar8] - sVar4);
                                    if (iVar6 < 0) {
                                        uVar17 = 0;
                                    } else {
                                        if (0xff < iVar6) {
                                            iVar6 = 0xff;
                                        }
                                        uVar17 = (undefined) iVar6;
                                    }
                                    iVar6 = (int) (short) ((ushort) local_6c8[lVar8] - sVar4) - ((int) sVar1 >> 1);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) sVar1 + (int) (short) iVar6;
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    local_760._0_2_ = (ushort) iVar10 & 0xff;
                                    local_760._0_2_ = (ushort) local_760 | (ushort)(byte)
                                    iVar6 << 8;
                                    local_760 = CONCAT13(local_4c8[lVar8], CONCAT12(uVar17, (ushort) local_760));
                                    local_78 = local_760;
                                    iVar6 = (int) sVar13 + (int) (short) ((ushort) local_6c8[lVar8 + 1] - sVar4);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_6c8[lVar8 + 1] - sVar4) - ((int) sVar1 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar1 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    sVar2 = local_5c8[lVar12 + 1];
                                    local_790._0_2_ = (ushort) iVar11 & 0xff;
                                    local_790._0_2_ = (ushort) local_790 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_790 = CONCAT13(local_4c8[lVar8 + 1],
                                                         CONCAT12((char) iVar6, (ushort) local_790));
                                    sVar3 = local_548[lVar12 + 1];
                                    local_74 = local_790;
                                    sVar5 = sVar3 >> 1;
                                    iVar6 = (int) sVar3 + (int) (short) ((ushort) local_6c8[lVar8 + 2] - sVar5);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_6c8[lVar8 + 2] - sVar5) - ((int) sVar2 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar2 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    local_768._0_2_ = (ushort) iVar11 & 0xff;
                                    local_768._0_2_ = (ushort) local_768 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_768 = CONCAT13(local_4c8[lVar8 + 2],
                                                         CONCAT12((char) iVar6, (ushort) local_768));
                                    local_70 = local_768;
                                    iVar6 = (int) sVar3 + (int) (short) ((ushort) local_6c8[lVar8 + 3] - sVar5);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_6c8[lVar8 + 3] - sVar5) - ((int) sVar2 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar2 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    local_788._0_2_ = (ushort) iVar11 & 0xff;
                                    local_788._0_2_ = (ushort) local_788 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_788 = CONCAT13(local_4c8[lVar8 + 3],
                                                         CONCAT12((char) iVar6, (ushort) local_788));
                                    local_6c = local_788;
                                    iVar6 = (int) sVar13 + (int) (short) ((ushort) local_6b8[lVar8] - sVar4);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_6b8[lVar8] - sVar4) - ((int) sVar1 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar1 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    local_770._0_2_ = (ushort) iVar11 & 0xff;
                                    local_770._0_2_ = (ushort) local_770 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_770 = CONCAT13(local_4b8[lVar8], CONCAT12((char) iVar6, (ushort) local_770));
                                    local_68 = local_770;
                                    iVar6 = (int) sVar13 + (int) (short) ((ushort) local_6b8[lVar8 + 1] - sVar4);
                                    if (iVar6 < 0) {
                                        uVar17 = 0;
                                    } else {
                                        if (0xff < iVar6) {
                                            iVar6 = 0xff;
                                        }
                                        uVar17 = (undefined) iVar6;
                                    }
                                    iVar6 = (int) (short) ((ushort) local_6b8[lVar8 + 1] - sVar4) - ((int) sVar1 >> 1);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) sVar1 + (int) (short) iVar6;
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    local_780._0_2_ = (ushort) iVar10 & 0xff;
                                    local_780._0_2_ = (ushort) local_780 | (ushort)(byte)
                                    iVar6 << 8;
                                    local_780 = CONCAT13(local_4b8[lVar8 + 1], CONCAT12(uVar17, (ushort) local_780));
                                    local_64 = local_780;
                                    iVar6 = (int) sVar3 + (int) (short) ((ushort) local_6b8[lVar8 + 2] - sVar5);
                                    if (iVar6 < 0) {
                                        uVar17 = 0;
                                    } else {
                                        if (0xff < iVar6) {
                                            iVar6 = 0xff;
                                        }
                                        uVar17 = (undefined) iVar6;
                                    }
                                    iVar6 = (int) (short) ((ushort) local_6b8[lVar8 + 2] - sVar5) - ((int) sVar2 >> 1);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) sVar2 + (int) (short) iVar6;
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    local_798._0_2_ = (ushort) iVar10 & 0xff;
                                    local_798._0_2_ = (ushort) local_798 | (ushort)(byte)
                                    iVar6 << 8;
                                    local_798 = CONCAT13(local_4b8[lVar8 + 2], CONCAT12(uVar17, (ushort) local_798));
                                    local_60 = local_798;
                                    iVar6 = (int) sVar3 + (int) (short) ((ushort) local_6b8[lVar8 + 3] - sVar5);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_6b8[lVar8 + 3] - sVar5) - ((int) sVar2 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar2 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    sVar13 = local_5b8[lVar12];
                                    local_778._0_2_ = (ushort) iVar11 & 0xff;
                                    local_778._0_2_ = (ushort) local_778 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_778 = CONCAT13(local_4b8[lVar8 + 3],
                                                         CONCAT12((char) iVar6, (ushort) local_778));
                                    sVar1 = local_538[lVar12];
                                    local_5c = local_778;
                                    sVar4 = sVar1 >> 1;
                                    iVar6 = (int) sVar1 + (int) (short) ((ushort) local_6a8[lVar8] - sVar4);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_6a8[lVar8] - sVar4) - ((int) sVar13 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar13 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    local_794._0_2_ = (ushort) iVar11 & 0xff;
                                    local_794._0_2_ = (ushort) local_794 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_794 = CONCAT13(local_4a8[lVar8], CONCAT12((char) iVar6, (ushort) local_794));
                                    local_58 = local_794;
                                    iVar6 = (int) sVar1 + (int) (short) ((ushort) local_6a8[lVar8 + 1] - sVar4);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 =
                                            (int) (short) ((ushort) local_6a8[lVar8 + 1] - sVar4) - ((int) sVar13 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar13 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    sVar2 = local_5b8[lVar12 + 1];
                                    local_78c._0_2_ = (ushort) iVar11 & 0xff;
                                    local_78c._0_2_ = (ushort) local_78c | (ushort)(byte)
                                    iVar10 << 8;
                                    local_78c = CONCAT13(local_4a8[lVar8 + 1],
                                                         CONCAT12((char) iVar6, (ushort) local_78c));
                                    sVar3 = local_538[lVar12 + 1];
                                    local_54 = local_78c;
                                    sVar5 = sVar3 >> 1;
                                    iVar6 = (int) sVar3 + (int) (short) ((ushort) local_6a8[lVar8 + 2] - sVar5);
                                    if (iVar6 < 0) {
                                        uVar17 = 0;
                                    } else {
                                        if (0xff < iVar6) {
                                            iVar6 = 0xff;
                                        }
                                        uVar17 = (undefined) iVar6;
                                    }
                                    iVar6 = (int) (short) ((ushort) local_6a8[lVar8 + 2] - sVar5) - ((int) sVar2 >> 1);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) sVar2 + (int) (short) iVar6;
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    local_784._0_2_ = (ushort) iVar10 & 0xff;
                                    local_784._0_2_ = (ushort) local_784 | (ushort)(byte)
                                    iVar6 << 8;
                                    local_784 = CONCAT13(local_4a8[lVar8 + 2], CONCAT12(uVar17, (ushort) local_784));
                                    local_50 = local_784;
                                    iVar6 = (int) sVar3 + (int) (short) ((ushort) local_6a8[lVar8 + 3] - sVar5);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_6a8[lVar8 + 3] - sVar5) - ((int) sVar2 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar2 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    local_77c._0_2_ = (ushort) iVar11 & 0xff;
                                    local_77c._0_2_ = (ushort) local_77c | (ushort)(byte)
                                    iVar10 << 8;
                                    local_77c = CONCAT13(local_4a8[lVar8 + 3],
                                                         CONCAT12((char) iVar6, (ushort) local_77c));
                                    local_4c = local_77c;
                                    iVar6 = (int) sVar1 + (int) (short) ((ushort) local_698[lVar8] - sVar4);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_698[lVar8] - sVar4) - ((int) sVar13 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar13 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    local_774._0_2_ = (ushort) iVar11 & 0xff;
                                    local_774._0_2_ = (ushort) local_774 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_774 = CONCAT13(local_498[lVar8], CONCAT12((char) iVar6, (ushort) local_774));
                                    local_48 = local_774;
                                    iVar6 = (int) sVar1 + (int) (short) ((ushort) local_698[lVar8 + 1] - sVar4);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 =
                                            (int) (short) ((ushort) local_698[lVar8 + 1] - sVar4) - ((int) sVar13 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar13 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    local_76c._0_2_ = (ushort) iVar11 & 0xff;
                                    local_76c._0_2_ = (ushort) local_76c | (ushort)(byte)
                                    iVar10 << 8;
                                    local_76c = CONCAT13(local_498[lVar8 + 1],
                                                         CONCAT12((char) iVar6, (ushort) local_76c));
                                    local_44 = local_76c;
                                    iVar6 = (int) sVar3 + (int) (short) ((ushort) local_698[lVar8 + 2] - sVar5);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_698[lVar8 + 2] - sVar5) - ((int) sVar2 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar2 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    local_764 = CONCAT22(CONCAT11(local_498[lVar8 + 2], (char) iVar6),
                                                         CONCAT11((char) iVar10, (char) iVar11));
                                    local_40 = local_764;
                                    iVar6 = (int) sVar3 + (int) (short) ((ushort) local_698[lVar8 + 3] - sVar5);
                                    if (iVar6 < 0) {
                                        iVar6 = 0;
                                    } else if (0xff < iVar6) {
                                        iVar6 = 0xff;
                                    }
                                    iVar10 = (int) (short) ((ushort) local_698[lVar8 + 3] - sVar5) - ((int) sVar2 >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar11 = (int) sVar2 + (int) (short) iVar10;
                                    if (iVar11 < 0) {
                                        iVar11 = 0;
                                    } else if (0xff < iVar11) {
                                        iVar11 = 0xff;
                                    }
                                    local_75c = CONCAT13(local_498[lVar8 + 3],
                                                         CONCAT12((char) iVar6,
                                                                  CONCAT11((char) iVar10, (char) iVar11)));
                                    local_3c = local_75c;
                                    FUN_1402c7250(&local_78, &local_7a8);
                                    *pbVar7 = local_7b5;
                                    pbVar7[1] = local_7a5;
                                    local_750 = pbVar7 + 2;
                                    FUN_1402c77d0();
                                    sVar13 = ((local_7b8 & 0xfff8) << 5 | local_7b6 & 0xfffc) << 3;
                                    *local_750 = (byte) sVar13 | local_7b7 >> 3;
                                    local_750[1] = (byte)((ushort) sVar13 >> 8);
                                    sVar13 = ((local_7a8 & 0xfff8) << 5 | local_7a6 & 0xfffc) << 3;
                                    local_750[2] = (byte) sVar13 | local_7a7 >> 3;
                                    local_750[3] = (byte)((ushort) sVar13 >> 8);
                                    local_750 = local_750 + 4;
                                    FUN_1402c74e0();
                                    local_740 = local_740 + 1;
                                    pbVar7 = local_750;
                                    param_8 = local_710;
                                    uVar18 = local_72c;
                                } while (local_740 < local_72c);
                            }
                            local_758 = local_758 + 1;
                            pbVar7 = local_728 + *param_8;
                            pbVar16 = local_720;
                            uVar19 = local_734;
                            uVar20 = local_738;
                            uVar15 = local_754;
                            uVar14 = local_744;
                            local_728 = pbVar7;
                        } while (local_758 < local_730);
                    }
                    local_744 = uVar14 + 1;
                    local_720 = pbVar16 + (uVar18 << 4);
                    pbVar7 = local_720;
                } while (local_744 < uVar20);
            }
            local_754 = uVar15 + 1;
            local_718 = local_718 + (*param_8 << 2);
        } while (local_754 < local_748);
    }
    LAB_1402be9d9:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack2008);
    return;
}


void FUN_1402bea10(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   int param_5, int param_6, uint **param_7, uint *param_8) {
    int iVar1;
    int iVar2;
    uint *puVar3;
    ulonglong uVar4;
    int iVar5;
    ulonglong uVar6;
    uint uVar7;
    uint uVar8;
    ulonglong uVar9;
    uint *puVar10;
    uint *puVar11;
    uint uVar12;
    undefined auStack1416[32];
    uint local_568;
    uint local_564;
    uint *local_560;
    uint *local_558;
    undefined8 local_550;
    undefined8 local_548;
    undefined8 local_540;
    undefined8 local_538;
    undefined8 local_530;
    undefined8 local_528;
    byte local_518[64];
    short asStack1240[64];
    short asStack1112[64];
    byte abStack984[64];
    undefined local_398[848];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack1416;
    uVar7 = param_6 + 7U >> 3;
    uVar12 = param_5 + 7U >> 3;
    local_558 = param_8;
    local_564 = uVar7;
    local_550 = param_2;
    local_548 = param_1;
    puVar3 = (uint *) FUN_14018b280((ulonglong)(uVar7 * uVar12 * 0x40) << 2, 8);
    *param_7 = puVar3;
    uVar6 = 0;
    *param_8 = uVar12 << 5;
    local_528 = 0;
    local_540 = param_3;
    local_538 = param_4;
    local_530 = param_3;
    FUN_1402c0750(local_398);
    local_560 = *param_7;
    local_568 = 0;
    if (param_6 + 7U >> 3 != 0) {
        do {
            uVar9 = uVar6 & 0xffffffff;
            puVar3 = local_560;
            if (param_5 + 7U >> 3 != 0) {
                do {
                    iVar1 = FUN_1402bd040();
                    if (iVar1 < 0) goto LAB_1402bec37;
                    uVar7 = 0;
                    puVar10 = puVar3;
                    do {
                        uVar6 = 8;
                        puVar11 = puVar10;
                        do {
                            uVar4 = (ulonglong) uVar7;
                            iVar1 = (int) (short) ((ushort) local_518[uVar7] - (asStack1112[uVar7] >> 1));
                            iVar5 = asStack1112[uVar7] + iVar1;
                            if (iVar5 < 0) {
                                iVar5 = 0;
                            } else if (0xff < iVar5) {
                                iVar5 = 0xff;
                            }
                            iVar1 = iVar1 - ((int) asStack1240[uVar7] >> 1);
                            if (iVar1 < 0) {
                                iVar1 = 0;
                            } else if (0xff < iVar1) {
                                iVar1 = 0xff;
                            }
                            iVar2 = (int) (short) iVar1 + (int) asStack1240[uVar7];
                            if (iVar2 < 0) {
                                iVar2 = 0;
                            } else if (0xff < iVar2) {
                                iVar2 = 0xff;
                            }
                            uVar7 = uVar7 + 1;
                            *puVar11 = (((uint) abStack984[uVar4] << 8 | (int) (short) iVar2) << 8 |
                                        (int) (short) iVar5) << 8 | (int) (short) iVar1;
                            uVar6 = uVar6 - 1;
                            puVar11 = puVar11 + 1;
                        } while (uVar6 != 0);
                        puVar10 = (uint * )((longlong) puVar10 + (ulonglong) * local_558);
                    } while (uVar7 < 0x40);
                    uVar8 = (int) uVar9 + 1;
                    uVar9 = (ulonglong) uVar8;
                    puVar3 = puVar3 + 8;
                    param_8 = local_558;
                    uVar7 = local_564;
                } while (uVar8 < uVar12);
            }
            local_560 = (uint * )((longlong) local_560 + (ulonglong)(*param_8 << 3));
            local_568 = local_568 + 1;
        } while (local_568 < uVar7);
    }
    LAB_1402bec37:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack1416);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402bec70(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   int param_5, int param_6, byte **param_7, uint *param_8) {
    int iVar1;
    byte *pbVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    short sVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined uVar9;
    int iVar10;
    ulonglong uVar11;
    uint uVar12;
    uint uVar13;
    ulonglong uVar14;
    undefined auStack1624[32];
    byte local_638;
    byte local_637;
    byte local_636;
    byte local_635;
    byte local_628;
    byte local_627;
    byte local_626;
    byte local_625;
    undefined4 local_618;
    undefined4 local_614;
    undefined4 local_610;
    undefined4 local_60c;
    undefined4 local_608;
    undefined4 local_604;
    undefined4 local_600;
    undefined4 local_5fc;
    undefined4 local_5f8;
    undefined4 local_5f4;
    undefined4 local_5f0;
    undefined4 local_5ec;
    undefined4 local_5e8;
    undefined4 local_5e4;
    undefined4 local_5e0;
    undefined4 local_5dc;
    uint local_5d8;
    uint local_5d4;
    uint local_5d0;
    byte *local_5c8;
    uint local_5c0;
    uint local_5bc;
    uint local_5b8;
    uint local_5b4;
    uint local_5b0;
    byte *local_5a8;
    byte *local_5a0;
    byte *local_598;
    undefined8 local_590;
    uint *local_588;
    undefined8 local_580;
    undefined8 local_578;
    undefined8 local_570;
    undefined8 local_568;
    undefined8 local_560;
    byte local_558[8];
    byte local_550[8];
    byte local_548[8];
    byte local_540[40];
    short local_518[8];
    short local_508[8];
    short local_4f8[8];
    short local_4e8[40];
    short local_498[8];
    short local_488[8];
    short local_478[8];
    short local_468[40];
    undefined local_418[8];
    undefined local_410[8];
    undefined local_408[8];
    undefined local_400[40];
    undefined local_3d8[848];
    undefined4 local_88;
    undefined4 local_84;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    undefined4 local_74;
    undefined4 local_70;
    undefined4 local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack1624;
    local_5d0 = param_6 + 7U >> 3;
    uVar12 = param_6 + 3U >> 2;
    local_5bc = param_5 + 3U >> 2;
    uVar13 = param_5 + 7U >> 3;
    local_588 = param_8;
    local_5b8 = uVar13;
    local_5b4 = uVar12;
    local_590 = param_1;
    local_580 = param_2;
    pbVar2 = (byte *) FUN_14018b280(uVar12 * *param_8, 0);
    *param_7 = pbVar2;
    local_560 = 0;
    local_578 = param_3;
    local_570 = param_4;
    local_568 = param_3;
    FUN_1402c0750(local_3d8, &local_578);
    local_598 = *param_7;
    uVar8 = 0;
    local_5d4 = 0;
    uVar11 = uVar8;
    if (local_5d0 != 0) {
        do {
            iVar1 = (int) uVar8;
            uVar7 = uVar11 & 0xffffffff;
            local_5c0 = (uint) uVar7;
            pbVar2 = local_598;
            local_5a0 = local_598;
            if (uVar13 != 0) {
                do {
                    local_5a0 = pbVar2;
                    iVar1 = FUN_1402bd040(local_558, local_3d8);
                    if (iVar1 < 0) goto LAB_1402bf799;
                    uVar4 = local_5bc + (uint) uVar7 * -2;
                    uVar13 = 2;
                    if ((int) uVar4 < 2) {
                        uVar13 = uVar4;
                    }
                    uVar4 = uVar12 + (int) uVar8 * -2;
                    local_5b0 = 2;
                    if ((int) uVar4 < 2) {
                        local_5b0 = uVar4;
                    }
                    uVar11 = 0;
                    local_5d8 = 0;
                    local_5a8 = pbVar2;
                    uVar14 = uVar11;
                    uVar4 = (uint) uVar7;
                    if (local_5b0 != 0) {
                        do {
                            uVar8 = uVar11 & 0xffffffff;
                            uVar12 = (uint) uVar14;
                            if (uVar13 != 0) {
                                pbVar2 = local_5a8;
                                do {
                                    lVar3 = (ulonglong)(uint)((int) uVar8 * 4) + (ulonglong)((uint) uVar14 << 5);
                                    iVar10 = (int) (short) ((ushort) local_558[lVar3] - (local_498[lVar3] >> 1));
                                    iVar1 = local_498[lVar3] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_518[lVar3] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_518[lVar3] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_5e0._0_2_ = (ushort) iVar5 & 0xff;
                                    local_5e0._0_2_ = (ushort) local_5e0 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_5e0 = CONCAT13(local_418[lVar3], CONCAT12((char) iVar1, (ushort) local_5e0));
                                    local_88 = local_5e0;
                                    iVar10 = (int) (short) ((ushort) local_558[lVar3 + 1] -
                                                            (local_498[lVar3 + 1] >> 1));
                                    iVar1 = local_498[lVar3 + 1] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_518[lVar3 + 1] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_518[lVar3 + 1] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_610._0_2_ = (ushort) iVar5 & 0xff;
                                    local_610._0_2_ = (ushort) local_610 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_610 = CONCAT13(local_418[lVar3 + 1],
                                                         CONCAT12((char) iVar1, (ushort) local_610));
                                    local_84 = local_610;
                                    iVar10 = (int) (short) ((ushort) local_558[lVar3 + 2] -
                                                            (local_498[lVar3 + 2] >> 1));
                                    iVar1 = local_498[lVar3 + 2] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_518[lVar3 + 2] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_518[lVar3 + 2] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_5e8._0_2_ = (ushort) iVar5 & 0xff;
                                    local_5e8._0_2_ = (ushort) local_5e8 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_5e8 = CONCAT13(local_418[lVar3 + 2],
                                                         CONCAT12((char) iVar1, (ushort) local_5e8));
                                    local_80 = local_5e8;
                                    iVar10 = (int) (short) ((ushort) local_558[lVar3 + 3] -
                                                            (local_498[lVar3 + 3] >> 1));
                                    iVar1 = local_498[lVar3 + 3] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_518[lVar3 + 3] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_518[lVar3 + 3] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_608._0_2_ = (ushort) iVar5 & 0xff;
                                    local_608._0_2_ = (ushort) local_608 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_608 = CONCAT13(local_418[lVar3 + 3],
                                                         CONCAT12((char) iVar1, (ushort) local_608));
                                    local_7c = local_608;
                                    iVar10 = (int) (short) ((ushort) local_550[lVar3] - (local_488[lVar3] >> 1));
                                    iVar1 = local_488[lVar3] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_508[lVar3] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_508[lVar3] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_5f0._0_2_ = (ushort) iVar5 & 0xff;
                                    local_5f0._0_2_ = (ushort) local_5f0 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_5f0 = CONCAT13(local_410[lVar3], CONCAT12((char) iVar1, (ushort) local_5f0));
                                    local_78 = local_5f0;
                                    iVar10 = (int) (short) ((ushort) local_550[lVar3 + 1] -
                                                            (local_488[lVar3 + 1] >> 1));
                                    iVar1 = local_488[lVar3 + 1] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_508[lVar3 + 1] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_508[lVar3 + 1] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_600._0_2_ = (ushort) iVar5 & 0xff;
                                    local_600._0_2_ = (ushort) local_600 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_600 = CONCAT13(local_410[lVar3 + 1],
                                                         CONCAT12((char) iVar1, (ushort) local_600));
                                    local_74 = local_600;
                                    iVar10 = (int) (short) ((ushort) local_550[lVar3 + 2] -
                                                            (local_488[lVar3 + 2] >> 1));
                                    iVar1 = local_488[lVar3 + 2] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_508[lVar3 + 2] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_508[lVar3 + 2] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_618._0_2_ = (ushort) iVar5 & 0xff;
                                    local_618._0_2_ = (ushort) local_618 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_618 = CONCAT13(local_410[lVar3 + 2],
                                                         CONCAT12((char) iVar1, (ushort) local_618));
                                    local_70 = local_618;
                                    iVar10 = (int) (short) ((ushort) local_550[lVar3 + 3] -
                                                            (local_488[lVar3 + 3] >> 1));
                                    iVar1 = local_488[lVar3 + 3] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_508[lVar3 + 3] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_508[lVar3 + 3] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_5f8._0_2_ = (ushort) iVar5 & 0xff;
                                    local_5f8._0_2_ = (ushort) local_5f8 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_5f8 = CONCAT13(local_410[lVar3 + 3],
                                                         CONCAT12((char) iVar1, (ushort) local_5f8));
                                    local_6c = local_5f8;
                                    iVar10 = (int) (short) ((ushort) local_548[lVar3] - (local_478[lVar3] >> 1));
                                    iVar1 = local_478[lVar3] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_4f8[lVar3] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_4f8[lVar3] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_614._0_2_ = (ushort) iVar5 & 0xff;
                                    local_614._0_2_ = (ushort) local_614 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_614 = CONCAT13(local_408[lVar3], CONCAT12((char) iVar1, (ushort) local_614));
                                    local_68 = local_614;
                                    iVar10 = (int) (short) ((ushort) local_548[lVar3 + 1] -
                                                            (local_478[lVar3 + 1] >> 1));
                                    iVar1 = local_478[lVar3 + 1] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_4f8[lVar3 + 1] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_4f8[lVar3 + 1] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_60c._0_2_ = (ushort) iVar5 & 0xff;
                                    local_60c._0_2_ = (ushort) local_60c | (ushort)(byte)
                                    iVar10 << 8;
                                    local_60c = CONCAT13(local_408[lVar3 + 1],
                                                         CONCAT12((char) iVar1, (ushort) local_60c));
                                    local_64 = local_60c;
                                    iVar10 = (int) (short) ((ushort) local_548[lVar3 + 2] -
                                                            (local_478[lVar3 + 2] >> 1));
                                    iVar1 = local_478[lVar3 + 2] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_4f8[lVar3 + 2] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_4f8[lVar3 + 2] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_604._0_2_ = (ushort) iVar5 & 0xff;
                                    local_604._0_2_ = (ushort) local_604 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_604 = CONCAT13(local_408[lVar3 + 2],
                                                         CONCAT12((char) iVar1, (ushort) local_604));
                                    local_60 = local_604;
                                    iVar10 = (int) (short) ((ushort) local_548[lVar3 + 3] -
                                                            (local_478[lVar3 + 3] >> 1));
                                    iVar1 = local_478[lVar3 + 3] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_4f8[lVar3 + 3] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_4f8[lVar3 + 3] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_5fc._0_2_ = (ushort) iVar5 & 0xff;
                                    local_5fc._0_2_ = (ushort) local_5fc | (ushort)(byte)
                                    iVar10 << 8;
                                    local_5fc = CONCAT13(local_408[lVar3 + 3],
                                                         CONCAT12((char) iVar1, (ushort) local_5fc));
                                    local_5c = local_5fc;
                                    iVar10 = (int) (short) ((ushort) local_540[lVar3] - (local_468[lVar3] >> 1));
                                    iVar1 = local_468[lVar3] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_4e8[lVar3] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_4e8[lVar3] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_5f4._0_2_ = (ushort) iVar5 & 0xff;
                                    local_5f4._0_2_ = (ushort) local_5f4 | (ushort)(byte)
                                    iVar10 << 8;
                                    local_5f4 = CONCAT13(local_400[lVar3], CONCAT12((char) iVar1, (ushort) local_5f4));
                                    local_58 = local_5f4;
                                    iVar10 = (int) (short) ((ushort) local_540[lVar3 + 1] -
                                                            (local_468[lVar3 + 1] >> 1));
                                    iVar1 = local_468[lVar3 + 1] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_4e8[lVar3 + 1] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_4e8[lVar3 + 1] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_5ec._0_2_ = (ushort) iVar5 & 0xff;
                                    local_5ec._0_2_ = (ushort) local_5ec | (ushort)(byte)
                                    iVar10 << 8;
                                    local_5ec = CONCAT13(local_400[lVar3 + 1],
                                                         CONCAT12((char) iVar1, (ushort) local_5ec));
                                    local_54 = local_5ec;
                                    iVar10 = (int) (short) ((ushort) local_540[lVar3 + 2] -
                                                            (local_468[lVar3 + 2] >> 1));
                                    iVar1 = local_468[lVar3 + 2] + iVar10;
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = iVar10 - ((int) local_4e8[lVar3 + 2] >> 1);
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    iVar5 = (int) local_4e8[lVar3 + 2] + (int) (short) iVar10;
                                    if (iVar5 < 0) {
                                        iVar5 = 0;
                                    } else if (0xff < iVar5) {
                                        iVar5 = 0xff;
                                    }
                                    local_5e4 = CONCAT13(local_400[lVar3 + 2],
                                                         CONCAT12((char) iVar1, CONCAT11((char) iVar10, (char) iVar5)));
                                    local_50 = local_5e4;
                                    iVar1 = (int) (short) ((ushort) local_540[lVar3 + 3] - (local_468[lVar3 + 3] >> 1));
                                    iVar10 = local_468[lVar3 + 3] + iVar1;
                                    if (iVar10 < 0) {
                                        uVar9 = 0;
                                    } else {
                                        if (0xff < iVar10) {
                                            iVar10 = 0xff;
                                        }
                                        uVar9 = (undefined) iVar10;
                                    }
                                    uVar11 = 0;
                                    iVar1 = iVar1 - ((int) local_4e8[lVar3 + 3] >> 1);
                                    if (iVar1 < 0) {
                                        iVar1 = 0;
                                    } else if (0xff < iVar1) {
                                        iVar1 = 0xff;
                                    }
                                    iVar10 = (int) local_4e8[lVar3 + 3] + (int) (short) iVar1;
                                    if (iVar10 < 0) {
                                        iVar10 = 0;
                                    } else if (0xff < iVar10) {
                                        iVar10 = 0xff;
                                    }
                                    local_5dc = CONCAT13(local_400[lVar3 + 3],
                                                         CONCAT12(uVar9, CONCAT11((char) iVar1, (char) iVar10)));
                                    local_4c = local_5dc;
                                    FUN_1402c7250(&local_88, &local_628);
                                    *pbVar2 = local_635;
                                    pbVar2[1] = local_625;
                                    local_5c8 = pbVar2 + 2;
                                    FUN_1402c77d0();
                                    sVar6 = ((local_638 & 0xfff8) << 5 | local_636 & 0xfffc) << 3;
                                    *local_5c8 = (byte) sVar6 | local_637 >> 3;
                                    local_5c8[1] = (byte)((ushort) sVar6 >> 8);
                                    sVar6 = ((local_628 & 0xfff8) << 5 | local_626 & 0xfffc) << 3;
                                    local_5c8[2] = (byte) sVar6 | local_627 >> 3;
                                    local_5c8[3] = (byte)((ushort) sVar6 >> 8);
                                    local_5c8 = local_5c8 + 4;
                                    FUN_1402c74e0();
                                    uVar4 = (int) uVar8 + 1;
                                    uVar8 = (ulonglong) uVar4;
                                    pbVar2 = local_5c8;
                                    uVar12 = local_5d8;
                                } while (uVar4 < uVar13);
                            }
                            local_5d8 = uVar12 + 1;
                            local_5a8 = local_5a8 + *local_588;
                            uVar14 = (ulonglong) local_5d8;
                        } while (local_5d8 < local_5b0);
                        uVar8 = (ulonglong) local_5d4;
                        pbVar2 = local_5a0;
                        param_8 = local_588;
                        uVar12 = local_5b4;
                        uVar4 = local_5c0;
                    }
                    iVar1 = (int) uVar8;
                    local_5c0 = uVar4 + 1;
                    uVar7 = (ulonglong) local_5c0;
                    local_5a0 = pbVar2 + (uVar13 << 4);
                    pbVar2 = local_5a0;
                    uVar13 = local_5b8;
                } while (local_5c0 < local_5b8);
            }
            local_5d4 = iVar1 + 1;
            uVar8 = (ulonglong) local_5d4;
            local_598 = local_598 + *param_8 * 2;
        } while (local_5d4 < local_5d0);
    }
    LAB_1402bf799:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack1624);
    return;
}


void FUN_1402bf7d0(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   int param_5, int param_6, undefined8 *param_7, uint *param_8) {
    undefined uVar1;
    undefined uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined *puVar5;
    uint uVar6;
    uint uVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    longlong lVar11;
    uint uVar12;
    undefined auStack1256[32];
    uint local_4c8;
    undefined8 local_4c0;
    undefined8 local_4b8;
    undefined8 local_4b0;
    undefined8 local_4a8;
    undefined local_498[64];
    undefined local_458[64];
    undefined local_418[64];
    undefined local_3d8[64];
    undefined local_398[848];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack1256;
    local_4c8 = param_6 + 7U >> 3;
    uVar7 = param_5 + 7U >> 3;
    uVar4 = FUN_14018b280((ulonglong)(local_4c8 * uVar7 * 0x40) << 2, 8);
    *param_7 = uVar4;
    *param_8 = uVar7 << 5;
    local_4a8 = 0;
    local_4c0 = param_3;
    local_4b8 = param_4;
    local_4b0 = param_3;
    FUN_1402c0750(local_398, &local_4c0);
    puVar8 = (undefined4 * ) * param_7;
    uVar12 = 0;
    if (local_4c8 != 0) {
        do {
            uVar6 = 0;
            puVar9 = puVar8;
            if (param_5 + 7U >> 3 != 0) {
                do {
                    iVar3 = FUN_1402bd370(local_498, local_398, param_2, param_1);
                    if (iVar3 < 0) goto LAB_1402bfa4b;
                    lVar11 = 8;
                    puVar5 = local_3d8 + 1;
                    puVar10 = puVar9;
                    do {
                        uVar1 = *puVar5;
                        *puVar10 = CONCAT31(CONCAT21(CONCAT11(puVar5[-0xc1], puVar5[-1]), puVar5[-0x81]),
                                            puVar5[-0x41]);
                        uVar2 = puVar5[1];
                        puVar10[1] = CONCAT31(CONCAT21(CONCAT11(puVar5[-0xc0], uVar1), puVar5[-0x80]),
                                              puVar5[-0x40]);
                        uVar1 = puVar5[2];
                        puVar10[2] = CONCAT31(CONCAT21(CONCAT11(puVar5[-0xbf], uVar2), puVar5[-0x7f]),
                                              puVar5[-0x3f]);
                        uVar2 = puVar5[3];
                        puVar10[3] = CONCAT31(CONCAT21(CONCAT11(puVar5[-0xbe], uVar1), puVar5[-0x7e]),
                                              puVar5[-0x3e]);
                        uVar1 = puVar5[4];
                        puVar10[4] = CONCAT31(CONCAT21(CONCAT11(puVar5[-0xbd], uVar2), puVar5[-0x7d]),
                                              puVar5[-0x3d]);
                        uVar2 = puVar5[5];
                        puVar10[5] = CONCAT31(CONCAT21(CONCAT11(puVar5[-0xbc], uVar1), puVar5[-0x7c]),
                                              puVar5[-0x3c]);
                        uVar1 = puVar5[6];
                        puVar10[6] = CONCAT31(CONCAT21(CONCAT11(puVar5[-0xbb], uVar2), puVar5[-0x7b]),
                                              puVar5[-0x3b]);
                        puVar10[7] = CONCAT31(CONCAT21(CONCAT11(puVar5[-0xba], uVar1), puVar5[-0x7a]),
                                              puVar5[-0x3a]);
                        puVar10 = (undefined4 * )((longlong) puVar10 + (ulonglong) * param_8);
                        lVar11 = lVar11 + -1;
                        puVar5 = puVar5 + 8;
                    } while (lVar11 != 0);
                    uVar6 = uVar6 + 1;
                    puVar9 = puVar9 + 8;
                } while (uVar6 < uVar7);
            }
            uVar12 = uVar12 + 1;
            puVar8 = (undefined4 * )((longlong) puVar8 + (ulonglong)(*param_8 << 3));
        } while (uVar12 < local_4c8);
    }
    LAB_1402bfa4b:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack1256);
    return;
}


void FUN_1402bfa80(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   int param_5, int param_6, byte **param_7, uint *param_8) {
    int iVar1;
    uint uVar2;
    byte *pbVar3;
    short sVar4;
    undefined *puVar5;
    undefined *puVar6;
    byte *pbVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    ulonglong uVar11;
    uint uVar12;
    ulonglong uVar13;
    undefined auStack1416[32];
    byte local_568;
    byte local_567;
    byte local_566;
    byte local_565;
    byte local_558;
    byte local_557;
    byte local_556;
    byte local_555;
    byte *local_548;
    uint local_540;
    uint local_53c;
    uint local_538;
    uint local_534;
    uint local_530;
    uint local_52c;
    uint local_528;
    byte *local_520;
    byte *local_518;
    uint *local_510;
    undefined8 local_508;
    undefined8 local_500;
    undefined8 local_4f8;
    undefined8 local_4f0;
    undefined8 local_4e8;
    undefined8 local_4e0;
    undefined local_4d8[65];
    undefined local_497[191];
    undefined local_3d8[848];
    undefined4 local_88;
    undefined4 local_84;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    undefined4 local_74;
    undefined4 local_70;
    undefined4 local_6c;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    undefined4 local_5c;
    undefined4 local_58;
    undefined4 local_54;
    undefined4 local_50;
    undefined4 local_4c;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack1416;
    uVar10 = param_6 + 3U >> 2;
    local_530 = param_5 + 3U >> 2;
    uVar12 = param_5 + 7U >> 3;
    uVar8 = param_6 + 7U >> 3;
    local_510 = param_8;
    local_53c = uVar10;
    local_52c = uVar8;
    local_528 = uVar12;
    local_508 = param_2;
    local_500 = param_1;
    pbVar3 = (byte *) FUN_14018b280(uVar10 * *param_8, 8);
    *param_7 = pbVar3;
    local_4e0 = 0;
    local_4f8 = param_3;
    local_4f0 = param_4;
    local_4e8 = param_3;
    FUN_1402c0750(local_3d8, &local_4f8);
    local_518 = *param_7;
    local_540 = 0;
    if (param_6 + 7U >> 3 != 0) {
        do {
            local_538 = 0;
            pbVar3 = local_518;
            uVar9 = local_530;
            local_520 = local_518;
            if (uVar12 != 0) {
                do {
                    local_534 = uVar9;
                    local_520 = pbVar3;
                    iVar1 = FUN_1402bd370(local_4d8, local_3d8, local_508);
                    if (iVar1 < 0) goto LAB_1402c0045;
                    uVar8 = 2;
                    if ((int) uVar9 < 2) {
                        uVar8 = uVar9;
                    }
                    uVar2 = 2;
                    if ((int) uVar10 < 2) {
                        uVar2 = uVar10;
                    }
                    if (uVar2 != 0) {
                        puVar5 = local_497;
                        uVar11 = (ulonglong) uVar2;
                        do {
                            if (uVar8 != 0) {
                                uVar13 = (ulonglong) uVar8;
                                puVar6 = puVar5;
                                pbVar7 = pbVar3;
                                do {
                                    local_88 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x41], puVar6[-1]), puVar6[0x3f]),
                                                        puVar6[0x7f]);
                                    local_84 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x40], *puVar6), puVar6[0x40]),
                                                        puVar6[0x80]);
                                    local_80 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x3f], puVar6[1]), puVar6[0x41]),
                                                        puVar6[0x81]);
                                    local_7c = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x3e], puVar6[2]), puVar6[0x42]),
                                                        puVar6[0x82]);
                                    local_78 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x39], puVar6[7]), puVar6[0x47]),
                                                        puVar6[0x87]);
                                    local_74 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x38], puVar6[8]), puVar6[0x48]),
                                                        puVar6[0x88]);
                                    local_70 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x37], puVar6[9]), puVar6[0x49]),
                                                        puVar6[0x89]);
                                    local_6c = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x36], puVar6[10]), puVar6[0x4a]),
                                                        puVar6[0x8a]);
                                    local_68 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x31], puVar6[0xf]), puVar6[0x4f]),
                                                        puVar6[0x8f]);
                                    local_64 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x30], puVar6[0x10]), puVar6[0x50]),
                                                        puVar6[0x90]);
                                    local_60 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x2f], puVar6[0x11]), puVar6[0x51]),
                                                        puVar6[0x91]);
                                    local_5c = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x2e], puVar6[0x12]), puVar6[0x52]),
                                                        puVar6[0x92]);
                                    local_58 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x29], puVar6[0x17]), puVar6[0x57]),
                                                        puVar6[0x97]);
                                    local_54 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x28], puVar6[0x18]), puVar6[0x58]),
                                                        puVar6[0x98]);
                                    local_50 = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x27], puVar6[0x19]), puVar6[0x59]),
                                                        puVar6[0x99]);
                                    local_4c = CONCAT31(CONCAT21(CONCAT11(puVar6[-0x26], puVar6[0x1a]), puVar6[0x5a]),
                                                        puVar6[0x9a]);
                                    FUN_1402c7250(&local_88, &local_558);
                                    *pbVar7 = local_565;
                                    pbVar7[1] = local_555;
                                    local_548 = pbVar7 + 2;
                                    FUN_1402c77d0();
                                    sVar4 = ((local_568 & 0xfff8) << 5 | local_566 & 0xfffc) << 3;
                                    *local_548 = (byte) sVar4 | local_567 >> 3;
                                    local_548[1] = (byte)((ushort) sVar4 >> 8);
                                    sVar4 = ((local_558 & 0xfff8) << 5 | local_556 & 0xfffc) << 3;
                                    local_548[2] = (byte) sVar4 | local_557 >> 3;
                                    local_548[3] = (byte)((ushort) sVar4 >> 8);
                                    local_548 = local_548 + 4;
                                    FUN_1402c74e0(&local_88, &local_548, &local_558);
                                    puVar6 = puVar6 + 4;
                                    uVar13 = uVar13 - 1;
                                    pbVar7 = local_548;
                                    param_8 = local_510;
                                } while (uVar13 != 0);
                            }
                            puVar5 = puVar5 + 0x20;
                            pbVar3 = pbVar3 + *param_8;
                            uVar11 = uVar11 - 1;
                            uVar10 = local_53c;
                            uVar12 = local_528;
                            uVar9 = local_534;
                        } while (uVar11 != 0);
                    }
                    local_534 = uVar9 - 2;
                    local_538 = local_538 + 1;
                    local_520 = local_520 + (uVar8 << 4);
                    pbVar3 = local_520;
                    uVar8 = local_52c;
                    uVar9 = local_534;
                } while (local_538 < uVar12);
            }
            uVar10 = uVar10 - 2;
            local_518 = local_518 + *param_8 * 2;
            local_540 = local_540 + 1;
            local_53c = uVar10;
        } while (local_540 < uVar8);
    }
    LAB_1402c0045:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack1416);
    return;
}


int FUN_1402c0070(longlong param_1, short *param_2, longlong param_3, uint param_4) {
    longlong lVar1;
    byte bVar2;
    short sVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    byte bVar7;
    ushort uVar8;
    ulonglong uVar9;
    undefined8 local_res8;
    byte local_res20[8];
    ulonglong in_stack_ffffffffffffffa8;
    ulonglong in_stack_ffffffffffffffb0;

    iVar4 = FUN_1402c0490(param_1, local_res20, param_1 + 8 + (longlong)(int)
    param_4 * 0xd0);
    if (iVar4 < 0) {
        local_res8 = 0x141e5cb00;
        FUN_1401a3130(0xe, 2, &local_res8, iVar4,
                      in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong) param_4);
        return iVar4;
    }
    lVar5 = *(longlong * )(param_1 + 0x348);
    uVar9 = 0;
    uVar8 = 0;
    if (local_res20[0] != 0) {
        do {
            if (7 < *(ulonglong * )(lVar5 + 0x18)) {
                *(longlong * )(lVar5 + 0x10) = *(longlong * )(lVar5 + 0x10) + 1;
                *(undefined8 * )(lVar5 + 0x18) = 0;
                if (*(ulonglong * )(lVar5 + 8) <= *(ulonglong * )(lVar5 + 0x10)) {
                    local_res8 = 0x141e5cb70;
                    FUN_1401a3130(0xe, 2, &local_res8, 0x80004005,
                                  in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong) local_res20[0],
                                  in_stack_ffffffffffffffb0 & 0xffffffff00000000 | (ulonglong) param_4);
                    return -0x7fffbffb;
                }
            }
            uVar9 = uVar9 + 1;
            uVar8 = (ushort)((int) ((uint) * *(byte * *)(lVar5 + 0x10) <<
                                                                       ((byte) * (longlong * )(lVar5 + 0x18) & 0x1f))
                                     >> 7) & 1 | uVar8 * 2;
            *(longlong * )(lVar5 + 0x18) = *(longlong * )(lVar5 + 0x18) + 1;
        } while (uVar9 < local_res20[0]);
    }
    uVar9 = 1;
    if ((int) (short) uVar8 < 1 << (local_res20[0] - 1 & 0x1f)) {
        uVar8 = uVar8 + (1 - (1 << (local_res20[0] & 0x1f)));
    }
    sVar3 = *(short *) (param_1 + param_3 * 2) + uVar8;
    *param_2 = sVar3;
    *(short *) (param_1 + param_3 * 2) = sVar3;
    do {
        iVar4 = FUN_1402c0490(param_1, local_res20, param_1 + (longlong)(int)
        param_4 * 0xd0 + 0x70);
        bVar2 = local_res20[0];
        if (iVar4 < 0) {
            local_res8 = 0x141e5cb58;
            FUN_1401a3130(0xe, 2, &local_res8, iVar4,
                          in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong) param_4);
            return iVar4;
        }
        if (local_res20[0] == 0) {
            do {
                lVar5 = uVar9 * 4;
                uVar9 = uVar9 + 1;
                param_2[*(uint * )(&DAT_140aed820 + lVar5)] = 0;
            } while (uVar9 < 0x40);
            return 0;
        }
        if (local_res20[0] == 0xf0) {
            if (0x3f < uVar9 + 0x10) {
                local_res8 = 0x141e5cb40;
                FUN_1401a3130(0xe, 2, &local_res8, uVar9,
                              in_stack_ffffffffffffffa8 & 0xffffffff00000000 | (ulonglong) param_4);
                return -0x7fffbffb;
            }
            lVar5 = 0x10;
            do {
                lVar1 = uVar9 * 4;
                uVar9 = uVar9 + 1;
                param_2[*(uint * )(&DAT_140aed820 + lVar1)] = 0;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
        } else {
            uVar6 = (ulonglong)(local_res20[0] >> 4);
            if (0x3f < uVar6 + uVar9) {
                local_res8 = 0x141e5cb18;
                FUN_1401a3130(0xe, 2, &local_res8, uVar9, uVar6,
                              in_stack_ffffffffffffffb0 & 0xffffffff00000000 | (ulonglong) local_res20[0],
                              param_4);
                return -0x7fffbffb;
            }
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
                lVar5 = uVar9 * 4;
                uVar9 = uVar9 + 1;
                param_2[*(uint * )(&DAT_140aed820 + lVar5)] = 0;
            }
            bVar7 = local_res20[0] & 0xf;
            iVar4 = FUN_1402c03f0(param_1, param_2 + *(uint * )(&DAT_140aed820 + uVar9 * 4), bVar7);
            if (iVar4 < 0) {
                local_res8 = 0x141e5cb90;
                FUN_1401a3130(0xe, 2, &local_res8, iVar4, uVar9, bVar7, bVar2, param_4);
                return iVar4;
            }
            uVar9 = uVar9 + 1;
        }
        if (0x3f < uVar9) {
            return 0;
        }
    } while (true);
}


undefined8 FUN_1402c03f0(longlong param_1, ushort *param_2, ulonglong param_3) {
    longlong lVar1;
    ushort uVar2;
    ulonglong uVar3;

    lVar1 = *(longlong * )(param_1 + 0x348);
    uVar3 = 0;
    *param_2 = 0;
    if (param_3 != 0) {
        do {
            if (7 < *(ulonglong * )(lVar1 + 0x18)) {
                *(longlong * )(lVar1 + 0x10) = *(longlong * )(lVar1 + 0x10) + 1;
                *(undefined8 * )(lVar1 + 0x18) = 0;
                if (*(ulonglong * )(lVar1 + 8) <= *(ulonglong * )(lVar1 + 0x10)) {
                    return 0x80004005;
                }
            }
            *param_2 = *param_2 << 1;
            uVar3 = uVar3 + 1;
            *param_2 = *param_2 |
                       (ushort)((int) ((uint) * *(byte * *)(lVar1 + 0x10) <<
                                                                          ((byte) * (undefined8 * )(lVar1 + 0x18) &
                                                                           0x1f)) >> 7) & 1;
            *(longlong * )(lVar1 + 0x18) = *(longlong * )(lVar1 + 0x18) + 1;
        } while (uVar3 < param_3);
    }
    uVar2 = *param_2;
    if ((int) (short) uVar2 < 1 << ((byte) param_3 - 1 & 0x1f)) {
        uVar2 = (uVar2 - (short) (1 << ((byte) param_3 & 0x1f))) + 1;
    }
    *param_2 = uVar2;
    return 0;
}


undefined8 FUN_1402c0490(longlong param_1, undefined *param_2, longlong param_3) {
    byte bVar1;
    short sVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    ushort uVar6;
    ushort uVar7;
    longlong lVar8;

    lVar3 = *(longlong * )(param_1 + 0x348);
    uVar5 = 1;
    lVar8 = 0;
    uVar7 = 0;
    do {
        if (7 < *(ulonglong * )(lVar3 + 0x18)) {
            *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 1;
            *(undefined8 * )(lVar3 + 0x18) = 0;
            if (*(ulonglong * )(lVar3 + 8) <= *(ulonglong * )(lVar3 + 0x10)) {
                return 0x80004005;
            }
        }
        lVar8 = lVar8 + 1;
        uVar7 = (ushort)((int) ((uint) * *(byte * *)(lVar3 + 0x10) <<
                                                                   ((byte) * (longlong * )(lVar3 + 0x18) & 0x1f))
                                 >> 7) & 1 | uVar7 * 2;
        *(longlong * )(lVar3 + 0x18) = *(longlong * )(lVar3 + 0x18) + 1;
    } while (lVar8 == 0);
    if (*(short *) (param_3 + 0x12) < (short) uVar7) {
        do {
            lVar3 = *(longlong * )(param_1 + 0x348);
            uVar4 = (int) uVar5 + 1;
            uVar5 = (ulonglong) uVar4;
            lVar8 = 0;
            uVar6 = 0;
            do {
                if (7 < *(ulonglong * )(lVar3 + 0x18)) {
                    *(longlong * )(lVar3 + 0x10) = *(longlong * )(lVar3 + 0x10) + 1;
                    *(undefined8 * )(lVar3 + 0x18) = 0;
                    if (*(ulonglong * )(lVar3 + 8) <= *(ulonglong * )(lVar3 + 0x10)) {
                        return 0x80004005;
                    }
                }
                lVar8 = lVar8 + 1;
                uVar6 = (ushort)((int) ((uint) * *(byte * *)(lVar3 + 0x10) <<
                                                                           ((byte) * (longlong * )(lVar3 + 0x18) &
                                                                            0x1f)) >> 7) & 1 | uVar6 * 2;
                *(longlong * )(lVar3 + 0x18) = *(longlong * )(lVar3 + 0x18) + 1;
            } while (lVar8 == 0);
            uVar7 = uVar7 * 2 | uVar6;
        } while (*(short *) (param_3 + 0x10 + uVar5 * 2) < (short) uVar7);
        if (0x10 < uVar4) {
            return 0x80004005;
        }
    }
    bVar1 = *(byte * )(uVar5 + 0x56 + param_3);
    sVar2 = *(short *) (param_3 + 0x34 + uVar5 * 2);
    if (0xff < ((uint) bVar1 - (int) sVar2) + (int) (short) uVar7) {
        return 0x80004005;
    }
    *param_2 = *(undefined * )
            ((*(longlong * )(param_3 + 8) - (longlong) sVar2) + (ulonglong) bVar1 +
             (longlong)(short)
    uVar7);
    return 0;
}


void FUN_1402c0600(undefined8 param_1, longlong *param_2, longlong param_3, longlong param_4) {
    byte bVar1;
    ushort uVar2;
    byte bVar3;
    longlong *plVar4;
    byte *pbVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    byte bVar8;
    longlong lVar9;
    uint uVar10;
    ulonglong uVar11;
    byte local_328[272];
    ushort auStack536[256];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) local_328;
    uVar6 = 0;
    bVar8 = 1;
    *param_2 = param_3;
    param_2[1] = param_4;
    pbVar5 = (byte * )(param_3 + 1);
    uVar7 = uVar6;
    do {
        bVar3 = 1;
        bVar1 = *pbVar5;
        if (bVar1 != 0) {
            do {
                bVar3 = bVar3 + 1;
                local_328[uVar7] = bVar8;
                uVar7 = uVar7 + 1;
            } while (bVar3 <= bVar1);
        }
        bVar8 = bVar8 + 1;
        pbVar5 = pbVar5 + 1;
    } while (bVar8 < 0x11);
    local_328[uVar7] = 0;
    uVar2 = 0;
    uVar7 = uVar6;
    while (true) {
        do {
            uVar11 = uVar7;
            auStack536[uVar11] = uVar2;
            uVar2 = uVar2 + 1;
            uVar7 = uVar11 + 1;
        } while (local_328[uVar11 + 1] == local_328[0]);
        if (local_328[uVar11 + 1] == 0) break;
        do {
            if ((uint)(1 << (local_328[0] & 0x1f)) <= (uint) uVar2) goto LAB_1402c06bf;
            local_328[0] = local_328[0] + 1;
            uVar2 = uVar2 * 2;
        } while (local_328[uVar11 + 1] != local_328[0]);
    }
    LAB_1402c06bf:
    plVar4 = param_2 + 2;
    lVar9 = 0x11;
    uVar7 = uVar6;
    uVar11 = uVar6;
    do {
        if (*(char *) (uVar6 + *param_2) == '\0') {
            *(undefined2 *) plVar4 = 0xffff;
        } else {
            *(char *) (uVar7 + 0x56 + (longlong) param_2) = (char) uVar11;
            *(ushort * )((longlong) plVar4 + 0x24) = auStack536[uVar11];
            uVar10 = (int) uVar11 + -1 + (uint) * (byte * )(uVar6 + *param_2);
            uVar11 = (ulonglong)(uVar10 + 1);
            *(ushort *) plVar4 = auStack536[uVar10];
        }
        uVar6 = uVar6 + 1;
        uVar7 = uVar7 + 1;
        plVar4 = (longlong * )((longlong) plVar4 + 2);
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    *(undefined2 * )((longlong) param_2 + 0x32) = 0xffff;
    FUN_1407db4f0(local_18 ^ (ulonglong) local_328);
    return;
}


undefined8 *FUN_1402c0750(undefined8 *param_1, undefined8 param_2) {
    param_1[0x69] = param_2;
    *param_1 = 0;
    FUN_1402c0600(param_1, param_1 + 1, &DAT_140aed748, &DAT_140aed808);
    FUN_1402c0600();
    FUN_1402c0600();
    FUN_1402c0600();
    FUN_1402c0600();
    FUN_1402c0600();
    FUN_1402c0600();
    FUN_1402c0600();
    return param_1;
}


void FUN_1402c0840(undefined4 *param_1, undefined8 param_2, longlong *param_3, undefined4 *param_4) {
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    uint uVar4;
    longlong *plVar5;
    undefined auStack200[32];
    ulonglong local_a8;
    ulonglong local_a0;
    ulonglong local_98;
    longlong **local_90;
    longlong *local_88;
    longlong *local_80;
    longlong *local_78;
    longlong *local_70;
    longlong *local_68;
    undefined4 local_60[2];
    longlong local_58;
    longlong local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack200;
    if (((*(longlong * )(param_1 + 10) == 0) || (*(longlong * )(param_4 + 10) == 0)) ||
        (plVar5 = (longlong *) FUN_1402b21e0(), plVar5 == (longlong *) 0x0))
        goto LAB_1402c08a2;
    local_68 = (longlong *) 0x0;
    iVar3 = (**(code * *)(*plVar5 + 0x30))(plVar5, param_3, &local_68);
    if (-1 < iVar3) {
        local_70 = (longlong *) 0x0;
        iVar3 = (**(code * *) * local_68)(local_68, &DAT_140b62578, &local_70);
        if (-1 < iVar3) {
            local_60[0] = 0;
            iVar3 = (**(code * *)(*local_70 + 0x80))(local_70, local_60);
            if (-1 < iVar3) {
                local_90 = &local_78;
                local_98 = *(ulonglong * )(param_1 + 10);
                local_78 = (longlong *) 0x0;
                local_a0 = local_a0 & 0xffffffff00000000 | (ulonglong)(uint)
                param_1[8];
                local_a8 = local_a8 & 0xffffffff00000000 | (ulonglong)(uint)
                param_1[6];
                iVar3 = (**(code * *)(*plVar5 + 0xa0))(plVar5, *param_1, param_1[2], param_3);
                if (-1 < iVar3) {
                    local_88 = (longlong *) 0x0;
                    iVar3 = (**(code * *)(*plVar5 + 0x58))(plVar5, &local_88);
                    plVar2 = local_88;
                    if (-1 < iVar3) {
                        lVar1 = *local_88;
                        uVar4 = FUN_1402b7210(0x400000);
                        local_a8 = local_a8 & 0xffffffff00000000 | (ulonglong) uVar4;
                        iVar3 = (**(code * *)(lVar1 + 0x40))(plVar2, local_78, *param_4, param_4[2]);
                        if ((-1 < iVar3) &&
                            (iVar3 = (**(code * *)(*local_88 + 0x20))(local_88, &local_58), -1 < iVar3)) {
                            if ((local_58 == *param_3) && (local_50 == param_3[1])) {
                                local_a8 = *(ulonglong * )(param_4 + 10);
                                iVar3 = (**(code * *)(*local_88 + 0x38))(local_88, 0, param_4[6], param_4[8]);
                                if (-1 < iVar3) {
                                    LAB_1402c0a88:
                                    if (local_88 != (longlong *) 0x0) {
                                        (**(code * *)(*local_88 + 0x10))();
                                    }
                                    goto LAB_1402c0abe;
                                }
                            } else {
                                local_80 = (longlong *) 0x0;
                                iVar3 = (**(code * *)(*plVar5 + 0x50))(plVar5, &local_80);
                                if (-1 < iVar3) {
                                    local_98 = local_98 & 0xffffffff00000000;
                                    local_a0 = 0;
                                    local_a8 = 0;
                                    iVar3 = (**(code * *)(*local_80 + 0x40))(local_80, local_88, param_3, 0);
                                    if (-1 < iVar3) {
                                        local_a8 = *(ulonglong * )(param_4 + 10);
                                        iVar3 = (**(code * *)(*local_80 + 0x38))(local_80, 0, param_4[6], param_4[8]);
                                        if (-1 < iVar3) {
                                            if (local_80 != (longlong *) 0x0) {
                                                (**(code * *)(*local_80 + 0x10))();
                                            }
                                            goto LAB_1402c0a88;
                                        }
                                    }
                                }
                                if (local_80 != (longlong *) 0x0) {
                                    (**(code * *)(*local_80 + 0x10))();
                                    local_80 = (longlong *) 0x0;
                                }
                            }
                        }
                    }
                    if (local_88 != (longlong *) 0x0) {
                        (**(code * *)(*local_88 + 0x10))();
                    }
                }
                LAB_1402c0abe:
                if (local_78 != (longlong *) 0x0) {
                    (**(code * *)(*local_78 + 0x10))();
                    local_78 = (longlong *) 0x0;
                }
            }
        }
        if (local_70 != (longlong *) 0x0) {
            (**(code * *)(*local_70 + 0x10))();
            local_70 = (longlong *) 0x0;
        }
    }
    if (local_68 != (longlong *) 0x0) {
        (**(code * *)(*local_68 + 0x10))();
    }
    LAB_1402c08a2:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack200);
    return;
}


int FUN_1402c0b20(longlong param_1, undefined8 param_2, undefined8 *param_3) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 local_c8;
    undefined8 local_c0;
    longlong local_a8;
    longlong local_a0;
    longlong local_98;
    int local_84;
    longlong local_80;
    longlong local_78;
    undefined8 local_68;
    undefined8 local_60;
    longlong local_48;
    longlong local_40;
    longlong local_38;
    int local_24;
    longlong local_20;
    longlong local_18;

    if ((*(longlong * )(param_1 + 0x28) != 0) && (param_3[5] != 0)) {
        local_c8 = 0;
        local_c0 = 0;
        local_80 = 0;
        local_78 = 0;
        iVar2 = FUN_1402c6e60(param_1, &local_c8);
        lVar3 = local_80;
        if (-1 < iVar2) {
            if ((((local_98 == 0) || (local_84 < 2)) ||
                 ((3 < local_84 && (local_a0 = local_a8, local_84 != 4)))) ||
                ((local_a0 == 0 || (local_80 == 0)))) {
                iVar2 = -0x7fffbffd;
            } else {
                local_68 = 0;
                local_60 = 0;
                local_20 = 0;
                local_18 = 0;
                iVar2 = FUN_1402b2fe0(&local_68, 2, *param_3, param_3[1], 1, 1);
                lVar1 = local_20;
                if (-1 < iVar2) {
                    if ((((local_38 == 0) || (local_24 < 2)) ||
                         ((3 < local_24 && (local_40 = local_48, local_24 != 4)))) ||
                        ((local_40 == 0 || (local_20 == 0)))) {
                        iVar2 = -0x7fffbffd;
                    } else {
                        iVar2 = FUN_1402c0840(lVar3);
                        if (-1 < iVar2) {
                            FUN_1402b34d0(&local_c8);
                            iVar2 = FUN_1402c6fb0(lVar1, param_3);
                            lVar3 = local_80;
                            if (-1 < iVar2) {
                                iVar2 = 0;
                            }
                        }
                    }
                }
                if (lVar1 != 0) {
                    FUN_14018b900(lVar1, 0);
                }
                if (local_18 != 0) {
                    FUN_14018b900(local_18, 0);
                }
            }
        }
        if (lVar3 != 0) {
            FUN_14018b900(lVar3, 0);
        }
        if (local_78 != 0) {
            FUN_14018b900(local_78, 0);
        }
        return iVar2;
    }
    return -0x7fffbffd;
}


void FUN_1402c0cf0(longlong param_1, ulonglong param_2, longlong param_3, ulonglong param_4,
                   ulonglong param_5, longlong param_6) {
    uint uVar1;
    char cVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined auStack168[32];
    ulonglong local_88;
    ulonglong local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined local_50[16];
    ulonglong local_40;

    local_40 = DAT_140c0f7b0 ^ (ulonglong) auStack168;
    if ((((param_2 != 0) && (param_4 != 0)) && (param_5 != 0)) &&
        ((param_4 < 0x100000000 && (param_5 < 0x100000000)))) {
        local_78 = *(undefined8 * )(param_3 + 0x10);
        local_70 = *(undefined8 * )(param_3 + 0x18);
        local_60 = *(undefined8 * )(param_3 + 0x28);
        local_58 = *(undefined8 * )(param_3 + 0x30);
        local_80 = param_5;
        local_68 = 1;
        local_88 = param_4;
        iVar3 = FUN_1402b2c70(param_6, &local_88);
        if (-1 < iVar3) {
            cVar2 = FUN_1402b1fe0(*(undefined4 * )(param_3 + 0x30), local_50);
            iVar3 = *(int *) (param_3 + 0x34);
            if (1 < iVar3) {
                if (iVar3 < 4) {
                    uVar5 = *(ulonglong * )(param_3 + 0x18);
                    uVar7 = 0;
                    if (uVar5 != 0) {
                        do {
                            if ((*(longlong * )(param_3 + 0x20) == 0) ||
                                (iVar3 = *(int *) (param_3 + 0x34), iVar3 < 2)) {
                                LAB_1402c0f9f:
                                uVar4 = 0xffffffffffffffff;
                            } else if (iVar3 < 4) {
                                if (uVar5 <= uVar7) goto LAB_1402c0f9f;
                                uVar4 = *(longlong * )(param_3 + 0x20) * uVar7;
                            } else {
                                if ((iVar3 != 4) || (uVar7 != 0)) goto LAB_1402c0f9f;
                                uVar4 = (ulonglong)(*(longlong * )(param_3 + 0x10) != 0) - 1;
                            }
                            if (param_2 <= uVar4) goto LAB_1402c107c;
                            puVar6 = (ulonglong * )(uVar4 * 0x30 + param_1);
                            if (*(longlong * )(param_6 + 0x30) == 0) {
                                LAB_1402c0fde:
                                lVar8 = 0;
                            } else {
                                uVar1 = *(uint * )(param_6 + 0x44);
                                uVar5 = (ulonglong) uVar1;
                                lVar8 = 0;
                                if ((int) uVar1 < 2) goto LAB_1402c0fde;
                                if ((int) uVar1 < 4) {
                                    if (*(ulonglong * )(param_6 + 0x28) <= uVar7) goto LAB_1402c0fde;
                                    lVar8 = *(longlong * )(param_6 + 0x30) * uVar7;
                                } else if (((uVar1 != 4) || (uVar7 != 0)) || (*(longlong * )(param_6 + 0x20) == 0))
                                    goto LAB_1402c0fde;
                                lVar8 = lVar8 * 0x30 + *(longlong * )(param_6 + 0x48);
                            }
                            if ((puVar6 == (ulonglong *) 0x0) || (lVar8 == 0)) goto LAB_1402c106a;
                            if ((*(int *) (puVar6 + 2) != *(int *) (param_3 + 0x30)) ||
                                ((0xffffffff < *puVar6 || (0xffffffff < puVar6[1]))))
                                goto LAB_1402c107c;
                            if (cVar2 == '\0') {
                                iVar3 = FUN_1402c0b20();
                            } else {
                                iVar3 = FUN_1402c0840(puVar6, uVar5, local_50, lVar8);
                            }
                            if (iVar3 < 0) goto LAB_1402c105b;
                            uVar5 = *(ulonglong * )(param_3 + 0x18);
                            uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar5);
                    }
                    goto LAB_1402c0f3a;
                }
                if (iVar3 == 4) {
                    uVar5 = *(ulonglong * )(param_3 + 0x10);
                    uVar7 = 0;
                    if (uVar5 != 0) {
                        do {
                            if ((*(longlong * )(param_3 + 0x20) == 0) ||
                                (iVar3 = *(int *) (param_3 + 0x34), iVar3 < 2)) {
                                LAB_1402c0e4f:
                                uVar4 = 0xffffffffffffffff;
                            } else if (iVar3 < 4) {
                                if (uVar7 != 0) goto LAB_1402c0e4f;
                                uVar4 = (ulonglong)(*(longlong * )(param_3 + 0x18) != 0) - 1;
                            } else {
                                if (iVar3 != 4) goto LAB_1402c0e4f;
                                uVar4 = uVar7;
                                if (uVar5 <= uVar7) {
                                    uVar4 = 0xffffffffffffffff;
                                }
                            }
                            if (param_2 <= uVar4) goto LAB_1402c107c;
                            puVar6 = (ulonglong * )(uVar4 * 0x30 + param_1);
                            if ((*(longlong * )(param_6 + 0x30) == 0) ||
                                (iVar3 = *(int *) (param_6 + 0x44), iVar3 < 2)) {
                                LAB_1402c0eb1:
                                lVar8 = 0;
                            } else if (iVar3 < 4) {
                                if ((uVar7 != 0) || (*(longlong * )(param_6 + 0x28) == 0)) goto LAB_1402c0eb1;
                                lVar8 = *(longlong * )(param_6 + 0x48);
                            } else {
                                if ((iVar3 != 4) || (*(ulonglong * )(param_6 + 0x20) <= uVar7)) goto LAB_1402c0eb1;
                                lVar8 = uVar7 * 0x30 + *(longlong * )(param_6 + 0x48);
                            }
                            if ((puVar6 == (ulonglong *) 0x0) || (lVar8 == 0)) goto LAB_1402c106a;
                            if (((*(int *) (puVar6 + 2) != *(int *) (param_3 + 0x30)) || (0xffffffff < *puVar6)) ||
                                (0xffffffff < puVar6[1]))
                                goto LAB_1402c107c;
                            if (cVar2 == '\0') {
                                iVar3 = FUN_1402c0b20();
                            } else {
                                iVar3 = FUN_1402c0840();
                            }
                            if (iVar3 < 0) goto LAB_1402c105b;
                            uVar5 = *(ulonglong * )(param_3 + 0x10);
                            uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar5);
                    }
                    goto LAB_1402c0f3a;
                }
            }
            LAB_1402c107c:
            FUN_1402b34d0(param_6);
        }
    }
    LAB_1402c0f3a:
    FUN_1407db4f0(local_40 ^ (ulonglong) auStack168);
    return;
    LAB_1402c106a:
    FUN_1402b34d0(param_6);
    goto LAB_1402c0f3a;
    LAB_1402c105b:
    FUN_1402b34d0(param_6);
    goto LAB_1402c0f3a;
}


ulonglong FUN_1402c10b0(ulonglong param_1, ulonglong param_2, ulonglong *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = *param_3;
    uVar2 = 1;
    if (1 < uVar1) {
        do {
            if (param_2 < 2) {
                if (param_1 < 2) goto code_r0x0001402c10cc;
                LAB_1402c10dd:
                param_1 = param_1 >> 1;
            } else {
                param_2 = param_2 >> 1;
                if (1 < param_1) goto LAB_1402c10dd;
            }
            uVar2 = uVar2 + 1;
        } while (true);
    }
    if (uVar1 == 0) {
        do {
            if (param_2 < 2) {
                if (param_1 < 2) break;
                LAB_1402c110b:
                param_1 = param_1 >> 1;
            } else {
                param_2 = param_2 >> 1;
                if (1 < param_1) goto LAB_1402c110b;
            }
            uVar2 = uVar2 + 1;
        } while (true);
    }
    *param_3 = uVar2;
    LAB_1402c10ff:
    return CONCAT71((int7)(uVar2 >> 8), 1);
    code_r0x0001402c10cc:
    if (uVar2 < uVar1) {
        return uVar2 & 0xffffffffffffff00;
    }
    goto LAB_1402c10ff;
}


ulonglong FUN_1402c1120(ulonglong param_1, ulonglong param_2, ulonglong param_3, ulonglong *param_4) {
    ulonglong uVar1;
    ulonglong in_RAX;

    uVar1 = *param_4;
    if (uVar1 < 2) {
        if ((((uVar1 == 0) && (param_1 != 0)) && ((param_1 & param_1 - 1) == 0)) &&
            (((param_2 != 0 && ((param_2 & param_2 - 1) == 0)) &&
              ((param_3 != 0 && ((param_3 & param_3 - 1) == 0)))))) {
            in_RAX = 1;
            do {
                if (param_2 < 2) {
                    if (param_1 < 2) {
                        if (1 < param_3) goto LAB_1402c11da;
                        goto LAB_1402c11f6;
                    }
                    LAB_1402c11e0:
                    param_1 = param_1 >> 1;
                } else {
                    param_2 = param_2 >> 1;
                    LAB_1402c11da:
                    if (1 < param_1) goto LAB_1402c11e0;
                }
                if (1 < param_3) {
                    param_3 = param_3 >> 1;
                }
                in_RAX = in_RAX + 1;
            } while (true);
        }
        in_RAX = 1;
        LAB_1402c11f6:
        *param_4 = in_RAX;
        LAB_1402c11f9:
        return CONCAT71((int7)(in_RAX >> 8), 1);
    }
    if (((param_1 != 0) && (in_RAX = param_1 - 1, (param_1 & in_RAX) == 0)) &&
        ((param_2 != 0 &&
          (((in_RAX = param_2 - 1, (param_2 & in_RAX) == 0 && (param_3 != 0)) &&
            (in_RAX = param_3 - 1, (param_3 & in_RAX) == 0)))))) {
        in_RAX = 1;
        LAB_1402c1158:
        if (param_2 < 2) {
            if (param_1 < 2) {
                if (1 < param_3) goto LAB_1402c1179;
                if (uVar1 <= in_RAX) goto LAB_1402c11f9;
                goto LAB_1402c1173;
            }
            LAB_1402c117f:
            param_1 = param_1 >> 1;
        } else {
            param_2 = param_2 >> 1;
            LAB_1402c1179:
            if (1 < param_1) goto LAB_1402c117f;
        }
        if (1 < param_3) {
            param_3 = param_3 >> 1;
        }
        in_RAX = in_RAX + 1;
        goto LAB_1402c1158;
    }
    LAB_1402c1173:
    return in_RAX & 0xffffffffffffff00;
}


void FUN_1402c1200(longlong **param_1, ulonglong param_2, longlong *param_3, longlong param_4) {
    longlong **pplVar1;
    int iVar2;
    uint uVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong *plVar9;
    longlong **pplVar10;
    longlong **pplVar11;
    longlong *plVar12;
    longlong *plVar13;
    ulonglong uVar14;
    longlong *plVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined auStack232[32];
    ulonglong local_c8;
    ulonglong local_c0;
    longlong *local_b8;
    longlong **local_b0;
    longlong **local_a8;
    longlong *local_a0;
    longlong *local_98;
    longlong *local_90;
    longlong *local_88;
    longlong *local_80;
    undefined4 local_78[2];
    ulonglong local_70;
    longlong local_68;
    longlong local_60;
    longlong local_58;
    ulonglong local_50;

    local_50 = DAT_140c0f7b0 ^ (ulonglong) auStack232;
    local_80 = param_3;
    local_70 = param_2;
    local_68 = param_4;
    if ((*(longlong * )(param_4 + 0x50) == 0) ||
        (plVar4 = (longlong *) FUN_1402b21e0(), plVar4 == (longlong *) 0x0))
        goto LAB_1402c163d;
    plVar12 = *param_1;
    local_88 = (longlong *) 0x0;
    local_a8 = param_1 + 3;
    local_b0 = &local_88;
    plVar15 = param_1[1];
    local_b8 = param_1[5];
    local_c0 = local_c0 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_1 + 4);
    local_c8 = local_c8 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_1 + 3);
    local_a0 = plVar12;
    iVar2 = (**(code * *)(*plVar4 + 0xa0))
            (plVar4, (ulonglong) plVar12 & 0xffffffff, (ulonglong) plVar15 & 0xffffffff, param_3);
    pplVar10 = local_a8;
    if ((-1 < iVar2) &&
        ((*(longlong * )(param_4 + 0x30) != 0 && (iVar2 = *(int *) (param_4 + 0x44), 1 < iVar2)))) {
        if (iVar2 < 4) {
            lVar6 = *(longlong * )(param_4 + 0x28);
        } else {
            if (iVar2 != 4) goto LAB_1402c1614;
            lVar6 = *(longlong * )(param_4 + 0x20);
        }
        if (((lVar6 != 0) && (lVar6 = *(longlong * )(param_4 + 0x48), lVar6 != 0)) &&
            (lVar8 = *(longlong * )(lVar6 + 0x28), lVar8 != 0)) {
            plVar9 = param_1[5];
            if (plVar15 != (longlong *) 0x0) {
                pplVar1 = (longlong * *)(lVar6 + 0x18);
                plVar7 = *local_a8;
                plVar5 = *pplVar1;
                plVar13 = plVar15;
                do {
                    pplVar11 = pplVar1;
                    if (plVar7 < plVar5) {
                        pplVar11 = pplVar10;
                    }
                    FUN_1407e15b8(lVar8, plVar5, plVar9, *pplVar11);
                    plVar7 = *pplVar10;
                    plVar5 = *pplVar1;
                    plVar9 = (longlong * )((longlong) plVar9 + (longlong) plVar7);
                    lVar8 = lVar8 + (longlong) plVar5;
                    plVar13 = (longlong * )((longlong) plVar13 - 1);
                    param_4 = local_68;
                    plVar12 = local_a0;
                } while (plVar13 != (longlong *) 0x0);
            }
            local_98 = (longlong *) 0x0;
            iVar2 = (**(code * *)(*plVar4 + 0x30))(plVar4, local_80, &local_98);
            if (-1 < iVar2) {
                local_90 = (longlong *) 0x0;
                iVar2 = (**(code * *) * local_98)(local_98, &DAT_140b62578);
                if (-1 < iVar2) {
                    local_78[0] = 0;
                    iVar2 = (**(code * *)(*local_90 + 0x80))(local_90, local_78);
                    if ((-1 < iVar2) && (uVar14 = 1, 1 < local_70)) {
                        uVar16 = 0;
                        uVar17 = 0;
                        while (true) {
                            pplVar10 = (longlong **) 0x0;
                            lVar6 = FUN_1402b3540(param_4, uVar14, 0, 0);
                            if (lVar6 == 0) break;
                            if ((longlong *) 0x1 < plVar15) {
                                plVar15 = (longlong * )((ulonglong) plVar15 >> 1);
                            }
                            if ((longlong *) 0x1 < plVar12) {
                                plVar12 = (longlong * )((ulonglong) plVar12 >> 1);
                            }
                            local_a8 = pplVar10;
                            iVar2 = (**(code * *)(*plVar4 + 0x58))(plVar4, &local_a8);
                            pplVar10 = local_a8;
                            if (iVar2 < 0) {
                                LAB_1402c15f7:
                                if (local_a8 != (longlong **) 0x0) {
                                    (*(code * )(*local_a8)[2])();
                                }
                                break;
                            }
                            plVar9 = *local_a8;
                            uVar3 = FUN_1402b7210(0x400000);
                            local_c8 = local_c8 & 0xffffffff00000000 | (ulonglong) uVar3;
                            iVar2 = (*(code *) plVar9[8])(pplVar10, local_88);
                            if ((iVar2 < 0) || (iVar2 = (*(code * )(*local_a8)[4])(local_a8, &local_60), iVar2 < 0))
                                goto LAB_1402c15f7;
                            if ((local_60 != *local_80) || (local_58 != local_80[1])) {
                                local_a0 = (longlong *) 0x0;
                                iVar2 = (**(code * *)(*plVar4 + 0x50))(plVar4, &local_a0);
                                plVar9 = local_a0;
                                if (-1 < iVar2) {
                                    lVar8 = *local_a0;
                                    FUN_1402b71e0(0x400000);
                                    local_b8 = (longlong * )((ulonglong) local_b8 & 0xffffffff00000000);
                                    local_c0 = CONCAT44(uVar17, uVar16);
                                    local_c8 = 0;
                                    iVar2 = (**(code * *)(lVar8 + 0x40))(plVar9, local_a8);
                                    if (-1 < iVar2) {
                                        local_c8 = *(ulonglong * )(lVar6 + 0x28);
                                        iVar2 = (**(code * *)(*local_a0 + 0x38))(local_a0, 0);
                                        if (-1 < iVar2) {
                                            if (local_a0 != (longlong *) 0x0) {
                                                (**(code * *)(*local_a0 + 0x10))();
                                                local_a0 = (longlong *) 0x0;
                                            }
                                            goto LAB_1402c157e;
                                        }
                                    }
                                }
                                if (local_a0 != (longlong *) 0x0) {
                                    (**(code * *)(*local_a0 + 0x10))();
                                    local_a0 = (longlong *) 0x0;
                                }
                                goto LAB_1402c15f7;
                            }
                            local_c8 = *(ulonglong * )(lVar6 + 0x28);
                            iVar2 = (*(code * )(*local_a8)[7])(local_a8, 0);
                            if (iVar2 < 0) goto LAB_1402c15f7;
                            LAB_1402c157e:
                            if (local_a8 != (longlong **) 0x0) {
                                (*(code * )(*local_a8)[2])();
                            }
                            uVar14 = uVar14 + 1;
                            param_4 = local_68;
                            if (local_70 <= uVar14) break;
                        }
                    }
                }
                if (local_90 != (longlong *) 0x0) {
                    (**(code * *)(*local_90 + 0x10))();
                    local_90 = (longlong *) 0x0;
                }
            }
            if (local_98 != (longlong *) 0x0) {
                (**(code * *)(*local_98 + 0x10))();
                local_98 = (longlong *) 0x0;
            }
        }
    }
    LAB_1402c1614:
    if (local_88 != (longlong *) 0x0) {
        (**(code * *)(*local_88 + 0x10))();
    }
    LAB_1402c163d:
    FUN_1407db4f0(local_50 ^ (ulonglong) auStack232);
    return;
}


undefined8 FUN_1402c1660(undefined8 *param_1, ulonglong param_2, undefined8 param_3, longlong param_4) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong *puVar10;
    longlong lVar11;
    ulonglong *puVar12;
    ulonglong local_res8;
    ulonglong local_res10;

    if ((param_1 == (undefined8 *) 0x0) || (param_2 == 0)) {
        return 0x80070057;
    }
    lVar2 = param_1[1];
    local_res10 = param_2;
    uVar3 = FUN_1402b3170(param_4, *(undefined4 * )(param_1 + 2), *param_1, lVar2, param_2, param_3);
    if (-1 < (int) uVar3) {
        uVar7 = 0;
        if (param_2 != 0) {
            puVar12 = param_1 + 3;
            do {
                if ((*(longlong * )(param_4 + 0x30) == 0) || (iVar1 = *(int *) (param_4 + 0x44), iVar1 < 2)) {
                    LAB_1402c17df:
                    FUN_1402b34d0(param_4);
                    return 0x80004003;
                }
                if (iVar1 < 4) {
                    if ((uVar7 != 0) || (*(longlong * )(param_4 + 0x28) == 0)) goto LAB_1402c17df;
                    uVar4 = 0;
                } else if ((iVar1 != 4) || (uVar4 = uVar7, *(ulonglong * )(param_4 + 0x20) <= uVar7))
                    goto LAB_1402c17df;
                lVar5 = uVar4 * 0x30 + *(longlong * )(param_4 + 0x48);
                if ((lVar5 == 0) || (lVar9 = *(longlong * )(lVar5 + 0x28), lVar9 == 0)) goto LAB_1402c17df;
                uVar4 = *puVar12;
                uVar8 = puVar12[2];
                local_res8 = uVar4;
                if (lVar2 != 0) {
                    uVar6 = *(ulonglong * )(lVar5 + 0x18);
                    lVar11 = lVar2;
                    do {
                        puVar10 = &local_res8;
                        if (uVar6 <= uVar4) {
                            puVar10 = (ulonglong * )(lVar5 + 0x18);
                        }
                        FUN_1407e15b8(lVar9, uVar6, uVar8, *puVar10);
                        uVar6 = *(ulonglong * )(lVar5 + 0x18);
                        uVar8 = uVar8 + uVar4;
                        lVar9 = lVar9 + uVar6;
                        lVar11 = lVar11 + -1;
                    } while (lVar11 != 0);
                }
                uVar7 = uVar7 + 1;
                puVar12 = puVar12 + 6;
            } while (uVar7 < local_res10);
        }
        uVar3 = 0;
    }
    return uVar3;
}


undefined8 FUN_1402c1800(ulonglong param_1, ulonglong param_2, longlong param_3) {
    float *pfVar1;
    float *pfVar2;
    float *pfVar3;
    float *pfVar4;
    float *pfVar5;
    float *pfVar6;
    float *pfVar7;
    int iVar8;
    undefined auVar9[16];
    char cVar10;
    undefined8 uVar11;
    undefined(*pauVar12)[16];
    undefined(*pauVar13)[16];
    ulonglong uVar14;
    ulonglong uVar15;
    undefined(*pauVar16)[16];
    undefined(*pauVar17)[16];
    undefined(*pauVar18)[16];
    ulonglong uVar19;
    ulonglong uVar20;
    ulonglong uVar21;
    ulonglong uVar22;
    undefined(*pauVar23)[16];
    ulonglong uVar24;
    longlong lVar25;
    longlong lVar26;
    longlong lVar27;
    undefined(*pauVar28)[16];
    longlong lVar29;
    ulonglong local_res8;
    ulonglong local_res20;
    ulonglong in_stack_ffffffffffffff08;
    undefined(*local_e0)[16];
    ulonglong local_c0;
    ulonglong local_b8;
    ulonglong local_b0;
    undefined(*local_a8)[16];
    undefined(*local_a0)[16];
    longlong local_98;
    ulonglong local_90;
    undefined(*local_88)[16];
    ulonglong local_80;
    undefined(*local_70)[16];

    if ((param_1 == 0) || (*(longlong * )(param_3 + 0x48) == 0)) {
        return 0x80070057;
    }
    local_res20 = *(ulonglong * )(param_3 + 0x10);
    uVar15 = *(ulonglong * )(param_3 + 0x18);
    auVar9 = ZEXT816(0x10) * ZEXT816(local_res20 * 5);
    uVar11 = SUB168(auVar9, 0);
    if (SUB168(auVar9 >> 0x40, 0) != 0) {
        uVar11 = 0xffffffffffffffff;
    }
    pauVar12 = (undefined (*)[16]) FUN_14018b280(uVar11, 1);
    if (pauVar12 == (undefined (*)[16]) 0x0) {
        uVar11 = 0x8007000e;
    } else {
        local_e0 = pauVar12[local_res20 * 2];
        pauVar28 = pauVar12[local_res20];
        pauVar18 = pauVar12[local_res20 * 4];
        local_a0 = pauVar28[1];
        local_a8 = local_e0[1];
        pauVar13 = pauVar12[local_res20 * 3];
        local_70 = pauVar13[1];
        local_c0 = 1;
        local_88 = pauVar18[1];
        local_res8 = param_1;
        local_b8 = uVar15;
        if (1 < param_2) {
            do {
                local_90 = 0;
                if (uVar15 == 1) {
                    pauVar28 = pauVar13;
                    local_e0 = pauVar18;
                }
                if (local_res20 == 1) {
                    local_a8 = local_e0;
                    local_a0 = pauVar28;
                    local_88 = pauVar18;
                    local_70 = pauVar13;
                }
                if (param_1 < 2) {
                    uVar22 = local_c0 - 1;
                    uVar24 = local_90;
                    if ((uVar22 < *(ulonglong * )(param_3 + 0x30)) &&
                        (iVar8 = *(int *) (param_3 + 0x44), 1 < iVar8)) {
                        if (iVar8 < 4) {
                            uVar14 = *(ulonglong * )(param_3 + 0x28);
                            uVar19 = uVar22;
                        } else {
                            if (iVar8 != 4) goto LAB_1402c1de0;
                            uVar14 = *(ulonglong * )(param_3 + 0x20);
                            uVar19 = local_90;
                            for (; uVar22 != 0; uVar22 = uVar22 - 1) {
                                uVar19 = uVar19 + uVar14;
                                if (1 < uVar14) {
                                    uVar14 = uVar14 >> 1;
                                }
                            }
                        }
                        if (uVar14 != 0) {
                            uVar24 = uVar19 * 0x30 + *(longlong * )(param_3 + 0x48);
                        }
                    }
                    LAB_1402c1de0:
                    uVar22 = local_90;
                    if ((local_c0 < *(ulonglong * )(param_3 + 0x30)) &&
                        (iVar8 = *(int *) (param_3 + 0x44), 1 < iVar8)) {
                        if (iVar8 < 4) {
                            uVar14 = *(ulonglong * )(param_3 + 0x28);
                            uVar19 = local_c0;
                        } else {
                            if (iVar8 != 4) goto LAB_1402c1e1f;
                            uVar14 = *(ulonglong * )(param_3 + 0x20);
                            uVar19 = local_90;
                            for (uVar20 = local_c0; uVar20 != 0; uVar20 = uVar20 - 1) {
                                uVar19 = uVar19 + uVar14;
                                if (1 < uVar14) {
                                    uVar14 = uVar14 >> 1;
                                }
                            }
                        }
                        if (uVar14 != 0) {
                            uVar22 = uVar19 * 0x30 + *(longlong * )(param_3 + 0x48);
                        }
                    }
                    LAB_1402c1e1f:
                    if ((uVar24 == 0) || (uVar22 == 0)) {
                        LAB_1402c202b:
                        uVar11 = 0x80004003;
                        goto LAB_1402c2034;
                    }
                    lVar27 = *(longlong * )(uVar24 + 0x28);
                    lVar29 = *(longlong * )(uVar22 + 0x28);
                    lVar26 = *(longlong * )(uVar24 + 0x18);
                    if (uVar15 < 2) {
                        uVar14 = 1;
                    } else {
                        uVar14 = uVar15 >> 1;
                    }
                    param_1 = local_res8;
                    if (uVar14 != 0) {
                        do {
                            uVar15 = in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                                     (ulonglong) * (uint * )(uVar24 + 0x10);
                            cVar10 = FUN_1402c33b0(pauVar28, local_res20, lVar27, lVar26, uVar15);
                            if (cVar10 == '\0') goto LAB_1402c2024;
                            lVar27 = lVar27 + lVar26;
                            if (pauVar28 != local_e0) {
                                cVar10 = FUN_1402c33b0(local_e0, local_res20, lVar27, lVar26,
                                                       uVar15 & 0xffffffff00000000 |
                                                       (ulonglong) * (uint * )(uVar24 + 0x10));
                                if (cVar10 == '\0') goto LAB_1402c2024;
                                lVar27 = lVar27 + lVar26;
                            }
                            if (local_res20 < 2) {
                                in_stack_ffffffffffffff08 = 1;
                                LAB_1402c1f19:
                                pauVar16 = pauVar28;
                                pauVar23 = pauVar12;
                                uVar15 = in_stack_ffffffffffffff08;
                                do {
                                    pfVar1 = (float *) ((longlong) pauVar16 +
                                                        ((longlong) local_e0 - (longlong) pauVar28));
                                    pfVar2 = (float *) ((longlong) pauVar16 +
                                                        ((longlong) local_a0 - (longlong) pauVar28));
                                    pfVar3 = (float *) ((longlong) pauVar16 +
                                                        ((longlong) local_a8 - (longlong) pauVar28));
                                    *pauVar23 = CONCAT412((pfVar1[3] + *(float *) (*pauVar16 + 0xc) + pfVar2[3] +
                                                           pfVar3[3]) * 0.25,
                                                          CONCAT48((pfVar1[2] + *(float *) (*pauVar16 + 8) + pfVar2[2]
                                                                    + pfVar3[2]) * 0.25,
                                                                   CONCAT44((pfVar1[1] + *(float *) (*pauVar16 + 4) +
                                                                             pfVar2[1] + pfVar3[1]) * 0.25,
                                                                            (*pfVar1 + *(float *) *pauVar16 + *pfVar2 +
                                                                             *pfVar3) * 0.25)));
                                    uVar15 = uVar15 - 1;
                                    pauVar16 = pauVar16[2];
                                    pauVar23 = pauVar23[1];
                                } while (uVar15 != 0);
                            } else {
                                in_stack_ffffffffffffff08 = local_res20 >> 1;
                                if (in_stack_ffffffffffffff08 != 0) goto LAB_1402c1f19;
                            }
                            cVar10 = FUN_1402c4f90(lVar29, *(undefined8 * )(uVar22 + 0x18),
                                                   *(undefined4 * )(uVar22 + 0x10), pauVar12);
                            if (cVar10 == '\0') goto LAB_1402c2024;
                            lVar29 = lVar29 + *(longlong * )(uVar22 + 0x18);
                            local_90 = local_90 + 1;
                            uVar15 = local_b8;
                        } while (local_90 < uVar14);
                    }
                } else {
                    local_b0 = 0;
                    if (param_1 != 0) {
                        uVar22 = local_c0 - 1;
                        do {
                            uVar15 = *(ulonglong * )(param_3 + 0x30);
                            uVar24 = local_90;
                            if ((uVar22 < uVar15) && (iVar8 = *(int *) (param_3 + 0x44), 1 < iVar8)) {
                                if (iVar8 < 4) {
                                    if ((local_b0 == 0) && (*(longlong * )(param_3 + 0x28) != 0)) {
                                        uVar24 = uVar22 * 0x30 + *(longlong * )(param_3 + 0x48);
                                    }
                                } else if (iVar8 == 4) {
                                    uVar14 = *(ulonglong * )(param_3 + 0x20);
                                    uVar24 = uVar22;
                                    uVar19 = local_90;
                                    while (uVar24 != 0) {
                                        uVar19 = uVar19 + uVar14;
                                        if (1 < uVar14) {
                                            uVar14 = uVar14 >> 1;
                                        }
                                        uVar24 = uVar24 - 1;
                                        local_90 = uVar24;
                                    }
                                    uVar24 = local_90;
                                    if (local_b0 < uVar14) {
                                        uVar24 = (uVar19 + local_b0) * 0x30 + *(longlong * )(param_3 + 0x48);
                                    }
                                }
                            }
                            uVar14 = local_90;
                            if ((uVar22 < uVar15) && (iVar8 = *(int *) (param_3 + 0x44), 1 < iVar8)) {
                                if (iVar8 < 4) {
                                    if ((local_b0 == 0xffffffffffffffff) &&
                                        (local_b0 + 1 <= *(ulonglong * )(param_3 + 0x28) &&
                                         *(ulonglong * )(param_3 + 0x28) != local_b0 + 1)) {
                                        uVar14 = uVar22 * 0x30 + *(longlong * )(param_3 + 0x48);
                                    }
                                } else if (iVar8 == 4) {
                                    uVar19 = *(ulonglong * )(param_3 + 0x20);
                                    uVar14 = uVar22;
                                    uVar20 = local_90;
                                    while (uVar14 != 0) {
                                        uVar20 = uVar20 + uVar19;
                                        if (1 < uVar19) {
                                            uVar19 = uVar19 >> 1;
                                        }
                                        uVar14 = uVar14 - 1;
                                        local_90 = uVar14;
                                    }
                                    uVar14 = local_90;
                                    if (local_b0 + 1 < uVar19) {
                                        uVar14 = (uVar20 + local_b0 + 1) * 0x30 + *(longlong * )(param_3 + 0x48);
                                    }
                                }
                            }
                            uVar20 = local_b0 >> 1;
                            uVar19 = local_90;
                            if ((local_c0 < uVar15) && (iVar8 = *(int *) (param_3 + 0x44), 1 < iVar8)) {
                                if (iVar8 < 4) {
                                    if ((uVar20 == 0) && (*(longlong * )(param_3 + 0x28) != 0)) {
                                        uVar19 = local_c0 * 0x30 + *(longlong * )(param_3 + 0x48);
                                    }
                                } else if (iVar8 == 4) {
                                    uVar15 = *(ulonglong * )(param_3 + 0x20);
                                    uVar21 = local_90;
                                    uVar19 = local_c0;
                                    while (uVar19 != 0) {
                                        uVar21 = uVar21 + uVar15;
                                        if (1 < uVar15) {
                                            uVar15 = uVar15 >> 1;
                                        }
                                        local_90 = uVar19 - 1;
                                        uVar19 = local_90;
                                    }
                                    uVar19 = local_90;
                                    if (uVar20 < uVar15) {
                                        uVar19 = (uVar21 + uVar20) * 0x30 + *(longlong * )(param_3 + 0x48);
                                    }
                                }
                            }
                            if (((uVar24 == 0) || (uVar14 == 0)) || (uVar19 == 0)) goto LAB_1402c202b;
                            local_98 = *(longlong * )(uVar19 + 0x28);
                            lVar27 = *(longlong * )(uVar24 + 0x18);
                            lVar29 = *(longlong * )(uVar14 + 0x18);
                            lVar26 = *(longlong * )(uVar24 + 0x28);
                            lVar25 = *(longlong * )(uVar14 + 0x28);
                            if (local_b8 < 2) {
                                uVar15 = 1;
                            } else {
                                uVar15 = local_b8 >> 1;
                            }
                            if (uVar15 != 0) {
                                do {
                                    uVar20 = in_stack_ffffffffffffff08 & 0xffffffff00000000 |
                                             (ulonglong) * (uint * )(uVar24 + 0x10);
                                    cVar10 = FUN_1402c33b0(pauVar28, local_res20, lVar26, lVar27, uVar20);
                                    if (cVar10 == '\0') goto LAB_1402c2024;
                                    lVar26 = lVar26 + lVar27;
                                    if (pauVar28 != local_e0) {
                                        uVar20 = uVar20 & 0xffffffff00000000 | (ulonglong) * (uint * )(uVar24 + 0x10);
                                        cVar10 = FUN_1402c33b0(local_e0, local_res20, lVar26, lVar27, uVar20);
                                        if (cVar10 == '\0') goto LAB_1402c2024;
                                        lVar26 = lVar26 + lVar27;
                                    }
                                    if (pauVar28 != pauVar13) {
                                        uVar20 = uVar20 & 0xffffffff00000000 | (ulonglong) * (uint * )(uVar14 + 0x10);
                                        cVar10 = FUN_1402c33b0(pauVar13, local_res20, lVar25, lVar29, uVar20);
                                        if (cVar10 == '\0') goto LAB_1402c2024;
                                        lVar25 = lVar25 + lVar29;
                                    }
                                    if ((pauVar28 != pauVar18) && (pauVar13 != pauVar18)) {
                                        cVar10 = FUN_1402c33b0(pauVar18, local_res20, lVar25, lVar29,
                                                               uVar20 & 0xffffffff00000000 |
                                                               (ulonglong) * (uint * )(uVar14 + 0x10));
                                        if (cVar10 == '\0') goto LAB_1402c2024;
                                        lVar25 = lVar25 + lVar29;
                                    }
                                    if (local_res20 < 2) {
                                        in_stack_ffffffffffffff08 = 1;
                                        LAB_1402c1c46:
                                        pauVar16 = pauVar28;
                                        pauVar23 = pauVar12;
                                        local_80 = in_stack_ffffffffffffff08;
                                        do {
                                            pfVar1 = (float *) (((longlong) local_e0 - (longlong) pauVar28) +
                                                                (longlong) pauVar16);
                                            pauVar17 = pauVar16[2];
                                            local_80 = local_80 - 1;
                                            pfVar2 = (float *) ((longlong) local_a0 + (-0x20 - (longlong) pauVar28) +
                                                                (longlong) pauVar17);
                                            pfVar3 = (float *) ((longlong) local_a8 + (-0x20 - (longlong) pauVar28) +
                                                                (longlong) pauVar17);
                                            pfVar4 = (float *) ((longlong) pauVar13 + (-0x20 - (longlong) pauVar28) +
                                                                (longlong) pauVar17);
                                            pfVar5 = (float *) ((longlong) pauVar18 + (-0x20 - (longlong) pauVar28) +
                                                                (longlong) pauVar17);
                                            pfVar6 = (float *) ((longlong) local_70 + (-0x20 - (longlong) pauVar28) +
                                                                (longlong) pauVar17);
                                            pfVar7 = (float *) ((longlong) local_88 + (-0x20 - (longlong) pauVar28) +
                                                                (longlong) pauVar17);
                                            *pauVar23 = CONCAT412(
                                                    (pfVar1[3] + *(float *) (*pauVar16 + 0xc) + pfVar2[3] +
                                                     pfVar3[3] + pfVar4[3] + pfVar5[3] + pfVar6[3] +
                                                     pfVar7[3]) * 0.125,
                                                    CONCAT48((pfVar1[2] + *(float *) (*pauVar16 + 8) +
                                                              pfVar2[2] + pfVar3[2] + pfVar4[2] + pfVar5[2]
                                                              + pfVar6[2] + pfVar7[2]) * 0.125,
                                                             CONCAT44((pfVar1[1] + *(float *) (*pauVar16 + 4)
                                                                       + pfVar2[1] + pfVar3[1] + pfVar4[1] +
                                                                       pfVar5[1] + pfVar6[1] + pfVar7[1]) *
                                                                      0.125, (*pfVar1 + *(float *) *pauVar16 +
                                                                              *pfVar2 + *pfVar3 + *pfVar4 +
                                                                              *pfVar5 + *pfVar6 + *pfVar7) *
                                                                             0.125)));
                                            pauVar16 = pauVar17;
                                            pauVar23 = pauVar23[1];
                                        } while (local_80 != 0);
                                    } else {
                                        in_stack_ffffffffffffff08 = local_res20 >> 1;
                                        if (in_stack_ffffffffffffff08 != 0) goto LAB_1402c1c46;
                                    }
                                    cVar10 = FUN_1402c4f90(local_98, *(undefined8 * )(uVar19 + 0x18),
                                                           *(undefined4 * )(uVar19 + 0x10), pauVar12);
                                    if (cVar10 == '\0') goto LAB_1402c2024;
                                    local_98 = local_98 + *(longlong * )(uVar19 + 0x18);
                                    local_90 = local_90 + 1;
                                } while (local_90 < uVar15);
                                local_90 = 0;
                            }
                            local_b0 = local_b0 + 2;
                            uVar15 = local_b8;
                            param_1 = local_res8;
                        } while (local_b0 < local_res8);
                    }
                }
                if (1 < uVar15) {
                    uVar15 = uVar15 >> 1;
                    local_b8 = uVar15;
                }
                if (1 < local_res20) {
                    local_res20 = local_res20 >> 1;
                }
                if (1 < param_1) {
                    param_1 = param_1 >> 1;
                    local_res8 = param_1;
                }
                local_c0 = local_c0 + 1;
            } while (local_c0 < param_2);
        }
        uVar11 = 0;
    }
    LAB_1402c2034:
    FUN_14018b900(pauVar12, 0);
    return uVar11;
    LAB_1402c2024:
    uVar11 = 0x80004005;
    goto LAB_1402c2034;
}


void FUN_1402c2090(ulonglong *param_1, undefined8 param_2, ulonglong param_3, undefined8 param_4) {
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    char cVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong lVar11;
    undefined auStack328[32];
    undefined8 local_128;
    ulonglong local_120;
    undefined8 local_118;
    undefined8 local_110;
    longlong local_f8;
    longlong local_f0;
    longlong local_e8;
    int local_d4;
    longlong local_d0;
    longlong local_c8;
    undefined8 local_b8;
    undefined8 local_b0;
    undefined local_a8[56];
    longlong local_70;
    longlong local_68;
    undefined local_58[16];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack328;
    iVar5 = *(int *) (param_1 + 2);
    uVar9 = (ulonglong) iVar5;
    if ((0x72 < uVar9 - 1) || (param_1[5] == 0)) goto LAB_1402c235b;
    uVar1 = *param_1;
    uVar2 = param_1[1];
    if (1 < param_3) {
        uVar8 = 1;
        uVar6 = uVar1;
        uVar7 = uVar2;
        do {
            if (uVar7 < 2) {
                if (uVar6 < 2) goto code_r0x0001402c211c;
                LAB_1402c2134:
                uVar6 = uVar6 >> 1;
            } else {
                uVar7 = uVar7 >> 1;
                if (1 < uVar6) goto LAB_1402c2134;
            }
            uVar8 = uVar8 + 1;
        } while (true);
    }
    uVar6 = 1;
    uVar7 = uVar1;
    uVar8 = uVar2;
    if (param_3 == 0) {
        do {
            if (uVar8 < 2) {
                if (uVar7 < 2) break;
                LAB_1402c21ec:
                uVar7 = uVar7 >> 1;
            } else {
                uVar8 = uVar8 >> 1;
                if (1 < uVar7) goto LAB_1402c21ec;
            }
            uVar6 = uVar6 + 1;
        } while (true);
    }
    LAB_1402c2164:
    if (((iVar5 < 0x46) || ((0x54 < iVar5 && (5 < iVar5 - 0x5eU)))) &&
        (cVar4 = FUN_1402b27d0(uVar9 & 0xffffffff), cVar4 == '\0')) {
        cVar4 = FUN_1402b1fe0(uVar9 & 0xffffffff, local_58);
        if (cVar4 == '\0') {
            local_118 = 0;
            local_110 = 0;
            local_d0 = 0;
            local_c8 = 0;
            iVar5 = FUN_1402c6e60(param_1, &local_118);
            lVar11 = local_d0;
            if (((((-1 < iVar5) && (local_e8 != 0)) && (1 < local_d4)) &&
                 ((local_d4 < 4 || (local_f0 = local_f8, local_d4 == 4)))) &&
                ((local_f0 != 0 && (local_d0 != 0)))) {
                local_b8 = 0;
                local_b0 = 0;
                local_70 = 0;
                local_68 = 0;
                lVar10 = 0;
                if ((*(longlong * )(local_d0 + 0x28) != 0) &&
                    (iVar5 = FUN_1402c1200(local_d0, uVar6, &DAT_140964a00, &local_b8), lVar10 = local_70,
                            -1 < iVar5)) {
                    FUN_1402b34d0(&local_118);
                    lVar10 = local_70;
                    local_128 = param_4;
                    FUN_1402c7070(local_70, local_b8, local_a8, *(undefined4 * )(param_1 + 2));
                    lVar11 = local_d0;
                }
                lVar3 = local_68;
                if (lVar10 != 0) {
                    FUN_14018b900(lVar10, 0);
                }
                if (lVar3 != 0) {
                    FUN_14018b900(lVar3, 0);
                }
            }
            if (lVar11 != 0) {
                FUN_14018b900(lVar11, 0);
            }
            if (local_c8 != 0) {
                FUN_14018b900(local_c8, 0);
            }
        } else {
            local_128 = 1;
            local_120 = uVar6;
            iVar5 = FUN_1402b2fe0(param_4, uVar9 & 0xffffffff, uVar1, uVar2);
            if ((-1 < iVar5) && (param_1[5] != 0)) {
                FUN_1402c1200(param_1, uVar6, local_58, param_4);
            }
        }
    }
    LAB_1402c235b:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack328);
    return;
    code_r0x0001402c211c:
    uVar6 = param_3;
    if (uVar8 < param_3) goto LAB_1402c235b;
    goto LAB_1402c2164;
}


ulonglong FUN_1402c2380(ulonglong *param_1, ulonglong param_2, undefined8 param_3, undefined8 param_4,
                        undefined8 param_5) {
    int iVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    char cVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    undefined8 local_res20;

    if ((param_1 == (ulonglong *) 0x0) || (param_2 == 0)) {
        return 0x80070057;
    }
    uVar7 = *param_1;
    uVar2 = param_1[1];
    puVar8 = param_1 + 2;
    iVar1 = *(int *) puVar8;
    if (((((uVar7 == 0) || ((uVar7 & uVar7 - 1) != 0)) || (uVar2 == 0)) ||
         (((uVar2 & uVar2 - 1) != 0 || ((param_2 & param_2 - 1) != 0)))) ||
        (local_res20 = param_4, cVar4 = FUN_1402c1120(uVar7, uVar2, param_2, &local_res20),
         uVar3 = local_res20, cVar4 == '\0')) {
        uVar7 = 0x80070057;
    } else {
        uVar6 = 0;
        if (param_2 != 0) {
            do {
                if (puVar8[3] == 0) {
                    return 0x80004003;
                }
                if (((*(int *) puVar8 != iVar1) || (puVar8[-2] != uVar7)) || (puVar8[-1] != uVar2)) {
                    return 0x80004005;
                }
                uVar6 = uVar6 + 1;
                puVar8 = puVar8 + 6;
            } while (uVar6 < param_2);
        }
        if ((iVar1 < 0x46) || ((0x54 < iVar1 && (5 < iVar1 - 0x5eU)))) {
            uVar7 = FUN_1402c1660(param_1, param_2, local_res20, param_5);
            if (-1 < (int) uVar7) {
                uVar5 = FUN_1402c1800(param_2, uVar3, param_5);
                uVar7 = (ulonglong) uVar5;
                if ((int) uVar5 < 0) {
                    FUN_1402b34d0(param_5);
                }
            }
        } else {
            uVar7 = 0x80070032;
        }
    }
    return uVar7;
}


uint FUN_1402c24e0(ushort param_1) {
    uint uVar1;
    uint uVar2;

    uVar2 = param_1 & 0x3ff;
    if ((param_1 & 0x7c00) == 0) {
        if ((param_1 & 0x3ff) == 0) {
            uVar1 = 0xffffff90;
        } else {
            uVar1 = 1;
            do {
                uVar2 = uVar2 * 2;
                uVar1 = uVar1 - 1;
            } while ((uVar2 >> 10 & 1) == 0);
            uVar2 = uVar2 & 0x3ff;
        }
    } else {
        uVar1 = param_1 >> 10 & 0x1f;
    }
    return (param_1 & 0x8000) << 0x10 | (uVar1 + 0x70) * 0x800000 | uVar2 << 0xd;
}


void FUN_1402c25d0(longlong param_1) {
    if (*(char *) (param_1 + 1) == -0x80) {
        return;
    }
    return;
}


void FUN_1402c2650(uint *param_1) {
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint local_28;
    uint uStack36;
    uint uStack32;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) & local_28;
    uVar1 = *param_1;
    uVar3 = uVar1 & 0x3f;
    uVar2 = uVar1 >> 6 & 0x1f;
    if (uVar2 == 0x1f) {
        local_28 = (uVar3 | 0x3fc0) << 0x11;
    } else {
        if (uVar2 == 0) {
            if (uVar3 == 0) {
                uVar2 = 0xffffff90;
            } else {
                uVar2 = 1;
                do {
                    uVar3 = uVar3 * 2;
                    uVar2 = uVar2 - 1;
                } while ((uVar3 & 0x40) == 0);
                uVar3 = uVar3 & 0x3f;
            }
        }
        local_28 = (uVar2 + 0x70) * 0x800000 | uVar3 << 0x11;
    }
    uVar2 = uVar1 >> 0x11 & 0x1f;
    uVar3 = uVar1 >> 0xb & 0x3f;
    if (uVar2 == 0x1f) {
        uStack36 = (uVar1 & 0x1f800 | 0x1fe0000) << 6;
    } else {
        if (uVar2 == 0) {
            if (uVar3 == 0) {
                uVar2 = 0xffffff90;
            } else {
                uVar2 = 1;
                do {
                    uVar3 = uVar3 * 2;
                    uVar2 = uVar2 - 1;
                } while ((uVar3 & 0x40) == 0);
                uVar3 = uVar3 & 0x3f;
            }
        }
        uStack36 = (uVar2 + 0x70) * 0x800000 | uVar3 << 0x11;
    }
    uVar2 = uVar1 >> 0x1b;
    uVar3 = uVar1 >> 0x16 & 0x1f;
    if (uVar2 == 0x1f) {
        uStack32 = uVar1 >> 5 & 0x3e0000 | 0x7f800000;
    } else {
        if (uVar1 >> 0x1b == 0) {
            if (uVar3 == 0) {
                uVar2 = 0xffffff90;
            } else {
                uVar2 = 1;
                do {
                    uVar3 = uVar3 * 2;
                    uVar2 = uVar2 - 1;
                } while ((uVar3 & 0x20) == 0);
                uVar3 = uVar3 & 0x1f;
            }
        }
        uStack32 = (uVar2 + 0x70) * 0x800000 | uVar3 << 0x12;
    }
    FUN_1407db4f0(local_28, local_18 ^ (ulonglong) & local_28);
    return;
}


void FUN_1402c2780(uint *param_1, undefined8 *param_2) {
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    uint local_38[4];
    undefined8 local_28;
    uint local_20;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) local_38;
    lVar3 = 0;
    lVar4 = 2;
    local_28 = *param_2;
    local_20 = *(uint * )(param_2 + 1);
    do {
        uVar2 = *(uint * )((longlong) & local_28 + lVar3);
        uVar1 = uVar2 & 0x7fffffff;
        if ((uVar2 & 0x7f800000) == 0x7f800000) {
            *(undefined4 * )((longlong) local_38 + lVar3) = 0x7c0;
            if ((uVar2 & 0x7fffff) == 0) {
                if ((uVar2 & 0x80000000) != 0) {
                    *(undefined4 * )((longlong) local_38 + lVar3) = 0;
                }
            } else {
                uVar2 = ((uVar1 >> 0xb | uVar1) >> 6 | (uint)(0xb < uVar1) | uVar1) & 0x3f | 0x7c0;
                LAB_1402c2873:
                *(uint * )((longlong) local_38 + lVar3) = uVar2;
            }
        } else if ((uVar2 & 0x80000000) == 0) {
            if (uVar1 < 0x477e0001) {
                if (uVar1 < 0x38800000) {
                    uVar1 = (uVar2 & 0x7fffff | 0x800000) >> (0x71U - (char) (uVar1 >> 0x17) & 0x1f);
                } else {
                    uVar1 = uVar1 + 0xc8000000;
                }
                uVar2 = uVar1 + 0xffff + (uVar1 >> 0x11 & 1) >> 0x11 & 0x7ff;
                goto LAB_1402c2873;
            }
            *(undefined4 * )((longlong) local_38 + lVar3) = 0x7bf;
        } else {
            *(undefined4 * )((longlong) local_38 + lVar3) = 0;
        }
        lVar3 = lVar3 + 4;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = local_20 & 0x7fffffff;
    if ((local_20 & 0x7f800000) == 0x7f800000) {
        if ((local_20 & 0x7fffff) != 0) {
            uVar2 = ((uVar2 >> 0xf | uVar2) >> 3 | (uint)(0xd < uVar2) | uVar2) & 0x1f | 0x3e0;
            goto LAB_1402c2930;
        }
        uVar2 = 0x3e0;
        if ((local_20 & 0x80000000) == 0) goto LAB_1402c2930;
    } else if ((local_20 & 0x80000000) == 0) {
        if (uVar2 < 0x477c0001) {
            if (uVar2 < 0x38800000) {
                uVar2 = (local_20 & 0x7fffff | 0x800000) >> (0x71U - (char) (uVar2 >> 0x17) & 0x1f);
            } else {
                uVar2 = uVar2 + 0xc8000000;
            }
            uVar2 = uVar2 + 0x1ffff + (uVar2 >> 0x12 & 1) >> 0x12 & 0x3ff;
        } else {
            uVar2 = 0x3df;
        }
        goto LAB_1402c2930;
    }
    uVar2 = 0;
    LAB_1402c2930:
    *param_1 = (local_38[1] & 0x7ff | uVar2 << 0xb) << 0xb | local_38[0] & 0x7ff;
    FUN_1407db4f0(local_18 ^ (ulonglong) local_38);
    return;
}


undefined8 FUN_1402c2970(ulonglong param_1, ulonglong param_2) {
    undefined4 in_EAX;
    uint uVar1;
    uint uVar2;
    float fVar4;
    undefined4 uVar5;
    undefined4 in_XMM0_Dc;
    undefined4 in_XMM0_Dd;
    undefined8 uVar6;
    undefined auVar7[16];
    float local_res8[8];
    ulonglong uVar3;

    uVar5 = (undefined4)(param_1 >> 0x20);
    fVar4 = (float) param_1;
    auVar7 = CONCAT412(in_XMM0_Dd, CONCAT48(in_XMM0_Dc, param_1));
    uVar2 = (uint) fVar4;
    uVar3 = param_2 & 0xffffffff00000000 | (ulonglong) uVar2;
    if ((uVar2 != 0x80000000) && ((float) uVar2 != fVar4)) {
        uVar1 = movmskps(in_EAX, CONCAT88(SUB168(CONCAT412(uVar5, CONCAT48(uVar5, param_1)) >> 0x40, 0),
                                          param_1 & 0xffffffff | param_1 << 0x20));
        uVar2 = uVar2 - (uVar1 & 1);
        uVar3 = (ulonglong) uVar2;
        auVar7 = ZEXT416((uint)(float)
        uVar2);
    }
    uVar6 = SUB168(auVar7, 0);
    fVar4 = fVar4 - SUB164(auVar7, 0);
    if (0.5 <= fVar4) {
        if (fVar4 <= 0.5) {
            FUN_1407e1640(SUB164(auVar7, 0) * 0.5, uVar3, local_res8);
            if (local_res8[0] * 2.0 == SUB164(auVar7, 0)) {
                return SUB168(auVar7, 0);
            }
        }
        uVar6 = SUB168(CONCAT124(SUB1612(auVar7 >> 0x20, 0), SUB164(auVar7, 0) + 1.0), 0);
    }
    return uVar6;
}


void FUN_1402c2a00(uint *param_1, ulonglong param_2, uint *param_3, ulonglong param_4, int param_5,
                   byte param_6) {
    ulonglong uVar1;
    uint uVar2;
    ulonglong *puVar3;
    ushort uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong local_res10[2];
    ulonglong local_res20;

    local_res20 = param_4;
    local_res10[0] = param_2;
    if ((param_6 & 1) == 0) {
        switchD_1402c2a4f_caseD_4:
        if (param_1 != param_3) {
            puVar3 = &local_res20;
            if (param_2 <= param_4) {
                puVar3 = local_res10;
            }
            FUN_1407e15b8(param_1, param_2, param_3, *puVar3);
            return;
        }
    } else {
        switch (param_5) {
            case 1:
            case 2:
            case 3:
            case 4:
                if (param_5 == 2) {
                    uVar2 = 0x3f800000;
                } else {
                    uVar2 = 0xffffffff;
                    if (param_5 == 4) {
                        uVar2 = 0x7fffffff;
                    }
                }
                if (param_1 == param_3) {
                    if (param_2 != 0) {
                        lVar7 = (param_2 - 1 >> 4) + 1;
                        do {
                            param_1[3] = uVar2;
                            param_1 = param_1 + 4;
                            lVar7 = lVar7 + -1;
                        } while (lVar7 != 0);
                        return;
                    }
                } else {
                    puVar3 = &local_res20;
                    if (param_2 <= param_4) {
                        puVar3 = local_res10;
                    }
                    if (*puVar3 != 0) {
                        lVar7 = (*puVar3 - 1 >> 4) + 1;
                        do {
                            *param_1 = *param_3;
                            param_1[1] = param_3[1];
                            param_1[2] = param_3[2];
                            param_1[3] = uVar2;
                            lVar7 = lVar7 + -1;
                            param_1 = param_1 + 4;
                            param_3 = param_3 + 4;
                        } while (lVar7 != 0);
                        return;
                    }
                }
                break;
            default:
                goto switchD_1402c2a4f_caseD_4;
            case 9:
            case 10:
            case 0xb:
            case 0xc:
            case 0xd:
            case 0xe:
                if (param_5 == 10) {
                    uVar4 = 0x3c00;
                } else {
                    uVar4 = 0xffff;
                    if (param_5 - 0xdU < 2) {
                        uVar4 = 0x7fff;
                    }
                }
                if (param_1 == param_3) {
                    if (param_2 != 0) {
                        lVar7 = (param_2 - 1 >> 3) + 1;
                        do {
                            *(ushort * )((longlong) param_1 + 6) = uVar4;
                            param_1 = param_1 + 2;
                            lVar7 = lVar7 + -1;
                        } while (lVar7 != 0);
                        return;
                    }
                } else {
                    puVar3 = &local_res20;
                    if (param_2 <= param_4) {
                        puVar3 = local_res10;
                    }
                    if (*puVar3 != 0) {
                        lVar7 = (*puVar3 - 1 >> 3) + 1;
                        do {
                            *(ushort *) param_1 = *(ushort *) param_3;
                            *(ushort * )((longlong) param_1 + 2) = *(ushort * )((longlong) param_3 + 2);
                            *(ushort * )(param_1 + 1) = *(ushort * )(param_3 + 1);
                            *(ushort * )((longlong) param_1 + 6) = uVar4;
                            lVar7 = lVar7 + -1;
                            param_1 = param_1 + 2;
                            param_3 = param_3 + 2;
                        } while (lVar7 != 0);
                        return;
                    }
                }
                break;
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x59:
                if (param_1 == param_3) {
                    if (param_2 != 0) {
                        lVar7 = (param_2 - 1 >> 2) + 1;
                        do {
                            *param_1 = *param_1 | 0xc0000000;
                            param_1 = param_1 + 1;
                            lVar7 = lVar7 + -1;
                        } while (lVar7 != 0);
                        return;
                    }
                } else {
                    puVar3 = &local_res20;
                    if (param_2 <= param_4) {
                        puVar3 = local_res10;
                    }
                    uVar1 = *puVar3;
                    if (uVar1 != 0) {
                        uVar5 = 0;
                        do {
                            uVar6 = uVar5 + 4;
                            *(uint * )(uVar5 + (longlong) param_1) =
                                    *(uint * )(uVar5 + (longlong) param_3) | 0xc0000000;
                            uVar5 = uVar6;
                        } while (uVar6 < uVar1);
                        return;
                    }
                }
                break;
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x57:
            case 0x5a:
            case 0x5b:
                uVar2 = 0x7f000000;
                if (1 < param_5 - 0x1fU) {
                    uVar2 = 0xff000000;
                }
                if (param_1 == param_3) {
                    if (param_2 != 0) {
                        lVar7 = (param_2 - 1 >> 2) + 1;
                        do {
                            *param_1 = *param_1 & 0xffffff;
                            *param_1 = *param_1 | uVar2;
                            param_1 = param_1 + 1;
                            lVar7 = lVar7 + -1;
                        } while (lVar7 != 0);
                        return;
                    }
                } else {
                    puVar3 = &local_res20;
                    if (param_2 <= param_4) {
                        puVar3 = local_res10;
                    }
                    uVar1 = *puVar3;
                    if (uVar1 != 0) {
                        uVar5 = 0;
                        do {
                            uVar6 = uVar5 + 4;
                            *(uint * )(uVar5 + (longlong) param_1) =
                                    *(uint * )(uVar5 + (longlong) param_3) & 0xffffff | uVar2;
                            uVar5 = uVar6;
                        } while (uVar6 < uVar1);
                        return;
                    }
                }
                break;
            case 0x41:
                FUN_1407e4830(param_1, 0xff, param_2);
                return;
            case 0x56:
                if (param_1 == param_3) {
                    if (param_2 != 0) {
                        lVar7 = (param_2 - 1 >> 1) + 1;
                        do {
                            *(ushort *) param_1 = *(ushort *) param_1 | 0x8000;
                            param_1 = (uint * )((longlong) param_1 + 2);
                            lVar7 = lVar7 + -1;
                        } while (lVar7 != 0);
                        return;
                    }
                } else {
                    puVar3 = &local_res20;
                    if (param_2 <= param_4) {
                        puVar3 = local_res10;
                    }
                    uVar1 = *puVar3;
                    if (uVar1 != 0) {
                        uVar5 = 0;
                        do {
                            uVar6 = uVar5 + 2;
                            *(ushort * )(uVar5 + (longlong) param_1) =
                                    *(ushort * )(uVar5 + (longlong) param_3) | 0x8000;
                            uVar5 = uVar6;
                        } while (uVar6 < uVar1);
                        return;
                    }
                }
                break;
            case 0x73:
                if (param_1 == param_3) {
                    if (param_2 != 0) {
                        lVar7 = (param_2 - 1 >> 1) + 1;
                        do {
                            *(ushort *) param_1 = *(ushort *) param_1 | 0xf000;
                            param_1 = (uint * )((longlong) param_1 + 2);
                            lVar7 = lVar7 + -1;
                        } while (lVar7 != 0);
                        return;
                    }
                } else {
                    puVar3 = &local_res20;
                    if (param_2 <= param_4) {
                        puVar3 = local_res10;
                    }
                    uVar1 = *puVar3;
                    if (uVar1 != 0) {
                        uVar5 = 0;
                        do {
                            uVar6 = uVar5 + 2;
                            *(ushort * )(uVar5 + (longlong) param_1) =
                                    *(ushort * )(uVar5 + (longlong) param_3) | 0xf000;
                            uVar5 = uVar6;
                        } while (uVar6 < uVar1);
                        return;
                    }
                }
        }
    }
    return;
}


void FUN_1402c2e80(uint *param_1, ulonglong param_2, uint *param_3, ulonglong param_4,
                   undefined4 param_5, uint param_6) {
    uint uVar1;
    ulonglong *puVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong local_res10[2];
    ulonglong local_res20;

    local_res20 = param_4;
    local_res10[0] = param_2;
    switch (param_5) {
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x59:
            if ((param_6 & 2) != 0) {
                if (param_1 == param_3) {
                    if (param_2 == 0) {
                        return;
                    }
                    lVar4 = (param_2 - 1 >> 2) + 1;
                    do {
                        uVar1 = *param_1;
                        if ((param_6 & 1) == 0) {
                            uVar3 = uVar1 & 0xc0000000;
                        } else {
                            uVar3 = 0xc0000000;
                        }
                        *param_1 = uVar3 | uVar1 & 0xffc00 | (uVar1 & 0x3ff) << 0x14 | uVar1 >> 0x14 & 0x3ff;
                        lVar4 = lVar4 + -1;
                        param_1 = param_1 + 1;
                    } while (lVar4 != 0);
                    return;
                }
                puVar2 = &local_res20;
                if (param_2 <= param_4) {
                    puVar2 = local_res10;
                }
                if (*puVar2 == 0) {
                    return;
                }
                lVar4 = (*puVar2 - 1 >> 2) + 1;
                do {
                    uVar1 = *param_3;
                    param_3 = param_3 + 1;
                    if ((param_6 & 1) == 0) {
                        uVar3 = uVar1 & 0xc0000000;
                    } else {
                        uVar3 = 0xc0000000;
                    }
                    *param_1 = uVar3 | uVar1 & 0xffc00 | (uVar1 & 0x3ff) << 0x14 | uVar1 >> 0x14 & 0x3ff;
                    lVar4 = lVar4 + -1;
                    param_1 = param_1 + 1;
                } while (lVar4 != 0);
                return;
            }
        default:
            if (param_1 != param_3) {
                puVar2 = &local_res20;
                if (param_2 <= param_4) {
                    puVar2 = local_res10;
                }
                FUN_1407e15b8(param_1, param_2, param_3, *puVar2);
                return;
            }
            break;
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x57:
        case 0x58:
        case 0x5a:
        case 0x5b:
        case 0x5c:
        case 0x5d:
            if (param_1 == param_3) {
                if (param_2 != 0) {
                    lVar4 = (param_2 - 1 >> 2) + 1;
                    do {
                        uVar1 = *param_1;
                        if ((param_6 & 1) == 0) {
                            uVar3 = uVar1 & 0xff000000;
                        } else {
                            uVar3 = 0xff000000;
                        }
                        *param_1 = uVar3 | uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
                        lVar4 = lVar4 + -1;
                        param_1 = param_1 + 1;
                    } while (lVar4 != 0);
                    return;
                }
            } else {
                puVar2 = &local_res20;
                if (param_2 <= param_4) {
                    puVar2 = local_res10;
                }
                if (*puVar2 != 0) {
                    lVar4 = (*puVar2 - 1 >> 2) + 1;
                    do {
                        uVar1 = *param_3;
                        param_3 = param_3 + 1;
                        if ((param_6 & 1) == 0) {
                            uVar3 = uVar1 & 0xff000000;
                        } else {
                            uVar3 = 0xff000000;
                        }
                        *param_1 = uVar3 | uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff;
                        lVar4 = lVar4 + -1;
                        param_1 = param_1 + 1;
                    } while (lVar4 != 0);
                    return;
                }
            }
    }
    return;
}


undefined8
FUN_1402c3140(uint *param_1, ulonglong param_2, undefined8 param_3, ushort *param_4, ulonglong param_5,
              int param_6, uint param_7) {
    ushort uVar1;
    uint uVar2;
    uint uVar3;
    ulonglong uVar4;
    ushort *puVar5;
    uint *puVar6;

    if (param_6 == 0x55) {
        if (param_5 != 0) {
            puVar5 = param_4;
            puVar6 = param_1;
            do {
                if (param_2 <= (ulonglong)((longlong) puVar6 - (longlong) param_1)) {
                    return 1;
                }
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                uVar2 = (uint) uVar1;
                *puVar6 = (((uint)(uVar1 >> 5) | uVar1 & 0xf800) >> 3 | uVar2 & 0x600) >> 5 |
                          ((uVar2 & 0x1c) << 9 | uVar2 & 0x7e0) << 5 | uVar2 << 0x13 | 0xff000000;
                puVar6 = puVar6 + 1;
            } while ((ulonglong)((longlong) puVar5 - (longlong) param_4) < param_5);
        }
        return 1;
    }
    if (param_6 == 0x56) {
        uVar4 = 0;
        if (param_5 != 0) {
            puVar6 = param_1;
            do {
                if (param_2 <= (ulonglong)((longlong) puVar6 - (longlong) param_1)) {
                    return 1;
                }
                uVar1 = *param_4;
                param_4 = param_4 + 1;
                uVar2 = (uint) uVar1;
                if ((param_7 & 1) == 0) {
                    uVar3 = -(uint)((uVar1 & 0x8000) != 0) & 0xff000000;
                } else {
                    uVar3 = 0xff000000;
                }
                uVar4 = uVar4 + 2;
                *puVar6 = uVar3 | ((uVar2 & 0x1f) << 5 | uVar2 & 0x1c) << 0xe |
                          ((uVar1 & 0x3e0) << 5 | uVar2 & 0x380) * 2 |
                          (uVar1 >> 5 & 0x380 | uVar1 & 0x7c00) >> 7;
                puVar6 = puVar6 + 1;
            } while (uVar4 < param_5);
        }
    } else {
        if (param_6 != 0x73) {
            return 0;
        }
        uVar4 = 0;
        if (param_5 != 0) {
            puVar6 = param_1;
            while ((ulonglong)((longlong) puVar6 - (longlong) param_1) < param_2) {
                uVar1 = *param_4;
                param_4 = param_4 + 1;
                uVar2 = (uint) uVar1;
                if ((param_7 & 1) == 0) {
                    uVar3 = (uVar2 & 0xf000) << 0x10 | (uVar2 & 0xf000) << 0xc;
                } else {
                    uVar3 = 0xff000000;
                }
                uVar4 = uVar4 + 2;
                *puVar6 = uVar3 | ((uVar2 & 0xf) << 4 | uVar2 & 0xf) << 0x10 |
                          ((uVar2 & 0xf0) << 4 | uVar2 & 0xf0) << 4 |
                          (uVar1 >> 4 & 0xf0 | uVar1 & 0xf00) >> 4;
                puVar6 = puVar6 + 1;
                if (param_5 <= uVar4) {
                    return 1;
                }
            }
        }
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1402c33b0(undefined (*param_1)[16], longlong param_2, undefined (*param_3)[12],
              undefined *param_4, undefined4 param_5) {
    undefined(*pauVar1)[16];
    int *piVar2;
    byte bVar3;
    char cVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    undefined auVar8[12];
    undefined *puVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined *puVar19;
    longlong lVar20;
    undefined(*pauVar21)[16];
    undefined(*pauVar22)[16];
    uint *puVar23;
    undefined(*pauVar24)[12];
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 extraout_XMM0_Da_01;
    undefined4 extraout_XMM0_Da_02;
    uint extraout_XMM0_Da_03;
    uint extraout_XMM0_Da_04;
    ulonglong extraout_XMM0_Qa;
    undefined auVar25[16];
    undefined extraout_XMM0[16];
    undefined extraout_XMM0_00[16];
    ulonglong uVar26;
    float fVar28;
    undefined auVar27[16];
    float fVar29;
    uint uVar30;
    undefined in_XMM2[16];
    uint uVar31;
    uint uVar32;
    uint uVar33;
    uint uVar34;
    uint uVar35;
    uint uVar36;
    uint uVar37;

    fVar18 = fRam0000000140c58b0c;
    fVar17 = fRam0000000140c58b08;
    fVar16 = fRam0000000140c58b04;
    fVar15 = _DAT_140c58b00;
    fVar14 = fRam0000000140c58afc;
    fVar13 = fRam0000000140c58af8;
    fVar12 = fRam0000000140c58af4;
    fVar11 = _DAT_140c58af0;
    fVar10 = fRam0000000140c58ab8;
    fVar29 = fRam0000000140c58ab4;
    fVar28 = _DAT_140c58ab0;
    auVar25 = _DAT_140b608f0;
    if (param_1 == (undefined (*)[16]) 0x0) {
        return 0;
    }
    puVar19 = (undefined * )(param_2 * 0x10);
    pauVar1 = param_1[param_2];
    switch (param_5) {
        case 2:
            if (puVar19 < param_4) {
                param_4 = puVar19;
            }
            FUN_1407e15b8(param_1, puVar19, param_3, param_4);
            return 1;
        case 3:
            if ((undefined *) 0xf < param_4) {
                if (param_4 != (undefined *) 0x0) {
                    pauVar22 = param_1;
                    while (pauVar22 < pauVar1) {
                        puVar23 = (uint * )(((longlong) param_3 - (longlong) param_1) + (longlong) pauVar22);
                        uVar31 = *puVar23;
                        uVar33 = puVar23[1];
                        uVar30 = puVar23[2];
                        uVar36 = puVar23[3];
                        pauVar21 = pauVar22[1];
                        *(float *) *pauVar22 =
                                (float) ((int) uVar31 >> 0x1f & 0x4f000000) + (float) (uVar31 & 0x80000000 ^ uVar31);
                        *(float *) (*pauVar22 + 4) =
                                (float) ((int) uVar33 >> 0x1f & 0x4f000000) + (float) (uVar33 & 0x80000000 ^ uVar33);
                        *(float *) (*pauVar22 + 8) =
                                (float) ((int) uVar30 >> 0x1f & 0x4f000000) + (float) (uVar30 & 0x80000000 ^ uVar30);
                        *(float *) (*pauVar22 + 0xc) =
                                (float) ((int) uVar36 >> 0x1f & 0x4f000000) + (float) (uVar36 & 0x80000000 ^ uVar36);
                        pauVar22 = pauVar21;
                        if (param_4 <=
                            (undefined * )
                                    ((((longlong) param_3 - (longlong) param_1) - (longlong) param_3) +
                                     (longlong) pauVar21)) {
                            return 1;
                        }
                    }
                }
                // WARNING: Read-only address (ram,0x000140b608f0) is written
                return 1;
            }
            break;
        case 4:
            if ((undefined *) 0xf < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar22 = param_1;
                do {
                    if (pauVar1 <= pauVar22) {
                        return 1;
                    }
                    piVar2 = (int *) (((longlong) param_3 - (longlong) param_1) + (longlong) pauVar22);
                    iVar5 = piVar2[1];
                    iVar6 = piVar2[2];
                    iVar7 = piVar2[3];
                    pauVar21 = pauVar22[1];
                    *(float *) *pauVar22 = (float) *piVar2;
                    *(float *) (*pauVar22 + 4) = (float) iVar5;
                    *(float *) (*pauVar22 + 8) = (float) iVar6;
                    *(float *) (*pauVar22 + 0xc) = (float) iVar7;
                    pauVar22 = pauVar21;
                } while ((undefined * )
                                 ((((longlong) param_3 - (longlong) param_1) - (longlong) param_3) +
                                  (longlong) pauVar21)
                         < param_4);
                return 1;
            }
            break;
        case 6:
            if ((undefined *) 0xb < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 0xc;
                    auVar8 = *param_3;
                    *(undefined4 * ) * param_1 = *(undefined4 * ) * param_3;
                    *(int *) (*param_1 + 4) =
                            SUB164(ZEXT1216(auVar8 & (undefined[12]) 0xffffffffffffffff) >> 0x20, 0);
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                    param_3 = param_3[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 7:
            if ((undefined *) 0xb < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                puVar23 = (uint * )(*param_3 + 8);
                do {
                    uVar31 = puVar23[-1];
                    uVar33 = puVar23[-2];
                    uVar30 = SUB164(ZEXT1216(CONCAT48(*puVar23, *(undefined8 * )(puVar23 + -2)) &
                                             (undefined[12]) 0xffffffffffffffff) >> 0x40, 0);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 0xc;
                    *param_1 = ZEXT1216(CONCAT48((float) ((int) uVar30 >> 0x1f & 0x4f000000) +
                                                 (float) (uVar30 & 0x80000000 ^ *puVar23),
                                                 CONCAT44((float) ((int) uVar31 >> 0x1f & 0x4f000000) +
                                                          (float) (uVar31 & 0x80000000 ^ uVar31),
                                                          (float) ((int) uVar33 >> 0x1f & 0x4f000000) +
                                                          (float) (uVar33 & 0x80000000 ^ uVar33))) &
                                        (undefined[12]) 0xffffffffffffffff) |
                               CONCAT412(0xffffffff, ZEXT812(0)) & (undefined[16]) 0xffffffffffffffff;
                    param_1 = param_1[1];
                    puVar23 = puVar23 + 3;
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 8:
            if ((undefined *) 0xb < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 0xc;
                    auVar8 = *param_3;
                    *(float *) *param_1 = (float) *(int *) *param_3;
                    *(float *) (*param_1 + 4) =
                            (float) SUB164(ZEXT1216(auVar8 & (undefined[12]) 0xffffffffffffffff) >> 0x20, 0);
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                    param_3 = param_3[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 10:
            if ((undefined *) 0x7 < param_4) {
                if (param_4 != (undefined *) 0x0) {
                    puVar19 = *param_3 + 4;
                    do {
                        if (pauVar1 <= param_1) {
                            return 1;
                        }
                        FUN_1402c24e0(*(undefined2 * ) * (undefined(*)[12])(puVar19 + -4));
                        FUN_1402c24e0();
                        FUN_1402c24e0();
                        FUN_1402c24e0();
                        puVar19 = puVar19 + 8;
                        *(undefined4 * ) * param_1 = extraout_XMM0_Da;
                        *(undefined4 * )(*param_1 + 4) = extraout_XMM0_Da_00;
                        *(undefined4 * )(*param_1 + 8) = extraout_XMM0_Da_01;
                        *(undefined4 * )(*param_1 + 0xc) = extraout_XMM0_Da_02;
                        param_1 = param_1[1];
                    } while (puVar19 + (-4 - (longlong) param_3) < param_4);
                }
                // WARNING: Read-only address (ram,0x000140b608f0) is written
                return 1;
            }
            break;
        case 0xb:
            if ((undefined *) 0x7 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 8);
                    auVar25 = shufpd(ZEXT816(*(ulonglong *) puVar19), ZEXT816(*(ulonglong *) puVar19), 0);
                    *param_1 = CONCAT412(((float) (SUB164(auVar25 >> 0x60, 0) & 0xffff0000 ^ 0x80000000) +
                                          2.147484e+09) * 2.328342e-10,
                                         CONCAT48(((float) (SUB164(auVar25 >> 0x20, 0) & 0xffff) + 0.0) *
                                                  1.525902e-05,
                                                  CONCAT44(((float) (SUB164(auVar25 >> 0x40, 0) & 0xffff0000 ^
                                                                     0x80000000) + 2.147484e+09) * 2.328342e-10,
                                                           ((float) (SUB164(auVar25, 0) & 0xffff) + 0.0) *
                                                           1.525902e-05)));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0xc:
            if ((undefined *) 0x7 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 8);
                    auVar25 = shufpd(ZEXT816(*(ulonglong *) puVar19), ZEXT816(*(ulonglong *) puVar19), 0);
                    *param_1 = CONCAT412((float) (SUB164(auVar25 >> 0x60, 0) & 0xffff0000 ^ 0x80000000) *
                                         1.525879e-05 + 32768.0,
                                         CONCAT48((float) (SUB164(auVar25 >> 0x20, 0) & 0xffff) * 1.0 + 0.0,
                                                  CONCAT44((float) (SUB164(auVar25 >> 0x40, 0) & 0xffff0000 ^
                                                                    0x80000000) * 1.525879e-05 + 32768.0,
                                                           (float) (SUB164(auVar25, 0) & 0xffff) * 1.0 + 0.0)));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0xd:
            if ((undefined *) 0x7 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 8);
                    auVar27 = shufpd(ZEXT816(*(ulonglong *) puVar19), ZEXT816(*(ulonglong *) puVar19), 0);
                    auVar27 = maxps(CONCAT412(((float) (SUB164(auVar27 >> 0x60, 0) & 0xffff0000) + 0.0) *
                                              4.656755e-10,
                                              CONCAT48(((float) (SUB164(auVar27 >> 0x20, 0) & 0xffff ^ 0x8000) +
                                                        -32768.0) * 3.051851e-05,
                                                       CONCAT44(((float) (SUB164(auVar27 >> 0x40, 0) & 0xffff0000)
                                                                 + 0.0) * 4.656755e-10,
                                                                ((float) (SUB164(auVar27, 0) & 0xffff ^ 0x8000) +
                                                                 -32768.0) * 3.051851e-05))), auVar25);
                    *param_1 = auVar27;
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0xe:
            if ((undefined *) 0x7 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 8);
                    auVar25 = shufpd(ZEXT816(*(ulonglong *) puVar19), ZEXT816(*(ulonglong *) puVar19), 0);
                    *param_1 = CONCAT412(((float) (SUB164(auVar25 >> 0x60, 0) & 0xffff0000) + 0.0) * 1.525879e-05,
                                         CONCAT48(((float) (SUB164(auVar25 >> 0x20, 0) & 0xffff ^ 0x8000) +
                                                   -32768.0) * 1.0,
                                                  CONCAT44(((float) (SUB164(auVar25 >> 0x40, 0) & 0xffff0000) +
                                                            0.0) * 1.525879e-05,
                                                           ((float) (SUB164(auVar25, 0) & 0xffff ^ 0x8000) +
                                                            -32768.0) * 1.0)));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x10:
            if ((undefined *) 0x7 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 8;
                    *param_1 = ZEXT816(*(ulonglong * ) * param_3) |
                               CONCAT412(0xffffffff, ZEXT812(0)) & (undefined[16]) 0xffffffffffffffff;
                    param_1 = param_1[1];
                    param_3 = (undefined(*)[12])(*param_3 + 8);
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x11:
            if ((undefined *) 0x7 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * )(*param_3 + 4);
                    uVar33 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 8);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 8;
                    *param_1 = ZEXT816(CONCAT44((float) ((int) uVar31 >> 0x1f & 0x4f000000) +
                                                (float) (uVar31 & 0x80000000 ^ uVar31),
                                                (float) ((int) uVar33 >> 0x1f & 0x4f000000) +
                                                (float) (uVar33 & 0x80000000 ^ uVar33))) |
                               CONCAT412(0xffffffff, ZEXT812(0)) & (undefined[16]) 0xffffffffffffffff;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x12:
            if ((undefined *) 0x7 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 8;
                    *param_1 = ZEXT816(CONCAT44((float) *(int *) (*param_3 + 4), (float) *(int *) *param_3)) |
                               CONCAT412(0xffffffff, ZEXT812(0)) & (undefined[16]) 0xffffffffffffffff;
                    param_1 = param_1[1];
                    param_3 = (undefined(*)[12])(*param_3 + 8);
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x14:
            if ((undefined *) 0x7 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                puVar19 = (undefined *) 0x0;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar9 = puVar19 + 4;
                    uVar31 = *(uint * )(*param_3 + (longlong) puVar19);
                    puVar19 = puVar19 + 8;
                    *(ulonglong * ) * param_1 = CONCAT44((float) (uint)(byte)(*param_3)[(longlong) puVar9], uVar31);
                    *(longlong * )(*param_1 + 8) =
                            SUB168(CONCAT412(0x3f800000, ZEXT412(uVar31) & (undefined[12]) 0xffffffff) >> 0x40, 0);
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x18:
            if ((undefined *) 0x3 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    uVar31 = *(uint * ) * pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 4);
                    *(float *) *param_1 = ((float) (uVar31 & 0x3ff) + 0.0) * 0.0009775171;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xffc00) + 0.0) * 9.546065e-07;
                    *(float *) (*param_1 + 8) = ((float) (uVar31 & 0x3ff00000) + 0.0) * 9.32233e-10;
                    *(float *) (*param_1 + 0xc) =
                            ((float) (uVar31 & 0xc0000000 ^ 0x80000000) + 2.147484e+09) * 3.104409e-10;
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x19:
            if ((undefined *) 0x3 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    uVar31 = *(uint * ) * pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 4);
                    *(float *) *param_1 = ((float) (uVar31 & 0x3ff) + 0.0) * 1.0;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xffc00) + 0.0) * 0.0009765625;
                    *(float *) (*param_1 + 8) = ((float) (uVar31 & 0x3ff00000) + 0.0) * 9.536743e-07;
                    *(float *) (*param_1 + 0xc) =
                            ((float) (uVar31 & 0xc0000000 ^ 0x80000000) + 2.147484e+09) * 9.313226e-10;
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x1a:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                uVar31 = 0xffffffff;
                uVar33 = 0xffffffff;
                uVar30 = 0xffffffff;
                uVar36 = 0;
                uVar32 = 0;
                uVar34 = 0;
                uVar35 = 0;
                uVar37 = 0x3f800000;
                do {
                    FUN_1402c2650(param_3);
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(uint * ) * param_1 = SUB164(extraout_XMM0, 0) & uVar31 | ~uVar31 & uVar32;
                    *(uint * )(*param_1 + 4) = SUB164(extraout_XMM0 >> 0x20, 0) & uVar33 | ~uVar33 & uVar34;
                    *(uint * )(*param_1 + 8) = SUB164(extraout_XMM0 >> 0x40, 0) & uVar30 | ~uVar30 & uVar35;
                    *(uint * )(*param_1 + 0xc) = SUB164(extraout_XMM0 >> 0x60, 0) & uVar36 | ~uVar36 & uVar37;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x1c:
        case 0x1d:
            if ((undefined *) 0x3 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    uVar31 = *(uint * ) * pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 4);
                    *(float *) *param_1 = ((float) (uVar31 & 0xff) + 0.0) * 0.003921569;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xff00) + 0.0) * 1.531863e-05;
                    *(float *) (*param_1 + 8) = ((float) (uVar31 & 0xff0000) + 0.0) * 5.983839e-08;
                    *(float *) (*param_1 + 0xc) =
                            ((float) (uVar31 & 0xff000000 ^ 0x80000000) + 2.147484e+09) * 2.337437e-10;
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x1e:
            if ((undefined *) 0x3 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    uVar31 = *(uint * ) * pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 4);
                    *(float *) *param_1 = ((float) (uVar31 & 0xff) + 0.0) * 1.0;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xff00) + 0.0) * 0.00390625;
                    *(float *) (*param_1 + 8) = ((float) (uVar31 & 0xff0000) + 0.0) * 1.525879e-05;
                    *(float *) (*param_1 + 0xc) =
                            ((float) (uVar31 & 0xff000000 ^ 0x80000000) + 2.147484e+09) * 5.960464e-08;
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x1f:
            if ((undefined *) 0x3 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    uVar31 = *(uint * ) * pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 4);
                    auVar27 = maxps(CONCAT412(((float) (uVar31 & 0xff000000) + 0.0) * 4.693279e-10,
                                              CONCAT48(((float) (uVar31 & 0xff0000 ^ 0x800000) + -8388608.0) *
                                                       1.201479e-07,
                                                       CONCAT44(((float) (uVar31 & 0xff00 ^ 0x8000) + -32768.0) *
                                                                3.075787e-05,
                                                                ((float) (uVar31 & 0xff ^ 0x80) + -128.0) *
                                                                0.007874016))), auVar25);
                    *param_1 = auVar27;
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x20:
            if ((undefined *) 0x3 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    uVar31 = *(uint * ) * pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 4);
                    *(float *) *param_1 = ((float) (uVar31 & 0xff ^ 0x80) + -128.0) * 1.0;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xff00 ^ 0x8000) + -32768.0) * 0.00390625;
                    *(float *) (*param_1 + 8) =
                            ((float) (uVar31 & 0xff0000 ^ 0x800000) + -8388608.0) * 1.525879e-05;
                    *(float *) (*param_1 + 0xc) = ((float) (uVar31 & 0xff000000) + 0.0) * 5.960464e-08;
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x22:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                uVar31 = 0;
                uVar33 = 0;
                uVar30 = 0;
                uVar36 = 0x3f800000;
                uVar32 = 0xffffffff;
                uVar34 = 0xffffffff;
                uVar35 = 0;
                uVar37 = 0;
                do {
                    FUN_1402c24e0(*(undefined2 * ) * param_3);
                    FUN_1402c24e0();
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(uint * ) * param_1 = ~uVar32 & uVar31 | uVar32 & extraout_XMM0_Da_03;
                    *(uint * )(*param_1 + 4) = ~uVar34 & uVar33 | uVar34 & extraout_XMM0_Da_04;
                    *(uint * )(*param_1 + 8) = ~uVar35 & uVar30;
                    *(uint * )(*param_1 + 0xc) = ~uVar37 & uVar36;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x23:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(float *) *param_1 = ((float) (uVar31 & 0xffff) + 0.0) * 1.525902e-05;
                    *(float *) (*param_1 + 4) =
                            ((float) (uVar31 & 0xffff0000 ^ 0x80000000) + 2.147484e+09) * 2.328342e-10;
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x24:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(float *) *param_1 = (float) (uVar31 & 0xffff) * 1.0 + 0.0;
                    *(float *) (*param_1 + 4) =
                            (float) (uVar31 & 0xffff0000 ^ 0x80000000) * 1.525879e-05 + 32768.0;
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x25:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    puVar9 = *param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    auVar27 = maxps(ZEXT816(CONCAT44(((float) (*(uint *) puVar9 & 0xffff0000) + 0.0) *
                                                     4.656755e-10,
                                                     ((float) (*(uint *) puVar9 & 0xffff ^ 0x8000) + -32768.0) *
                                                     3.051851e-05)), auVar25);
                    *(int *) *param_1 = SUB164(auVar27, 0);
                    *(int *) (*param_1 + 4) = SUB164(auVar27 >> 0x20, 0);
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x26:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(float *) *param_1 = ((float) (uVar31 & 0xffff ^ 0x8000) + -32768.0) * 1.0;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xffff0000) + 0.0) * 1.525879e-05;
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x28:
        case 0x29:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *param_1 = ZEXT416(*(uint * ) * param_3) & (undefined[16]) 0xffffffff |
                               CONCAT412(0xffffffff, ZEXT812(0)) & (undefined[16]) 0xffffffffffffffff;
                    param_1 = param_1[1];
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x2a:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(float *) *param_1 =
                            ((float) ((int) uVar31 >> 0x1f & 0x4f000000) + (float) (uVar31 ^ uVar31 & 0x80000000)) *
                            1.0;
                    *(undefined4 * )(*param_1 + 4) = 0;
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x2b:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(float *) *param_1 = (float) *(int *) *param_3 * 1.0;
                    *(undefined4 * )(*param_1 + 4) = 0;
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x2d:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    auVar25 = ZEXT416((uint)(float)(ulonglong)(*(uint * ) * param_3 & 0xffffff)) &
                              (undefined[16]) 0xffffffffffffffff;
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    uVar26 = SUB168(CONCAT124(SUB1612(auVar25 >> 0x20, 0), SUB164(auVar25, 0) * 5.960465e-08), 0);
                    *(ulonglong * ) * param_1 = uVar26 | (ulonglong)(uint)(float)(uint)(byte)(*param_3)[3] << 0x20;
                    *(longlong * )(*param_1 + 8) =
                            SUB168(CONCAT412(0x3f800000, ZEXT812(uVar26) & (undefined[12]) 0xffffffff) >> 0x40, 0);
                    param_1 = param_1[1];
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x31:
            if ((undefined *) 0x1 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    bVar3 = (*param_3)[1];
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 2;
                    *(float *) *param_1 = (float) (uint)(byte)(*param_3)[0] * 0.003921569;
                    *(float *) (*param_1 + 4) = (float) (uint) bVar3 * 0.003921569;
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                    param_3 = (undefined(*)[12])(*param_3 + 2);
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x32:
            if ((undefined *) 0x1 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    bVar3 = (*param_3)[1];
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 2;
                    *(float *) *param_1 = (float) (uint)(byte)(*param_3)[0];
                    *(float *) (*param_1 + 4) = (float) (uint) bVar3;
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                    param_3 = (undefined(*)[12])(*param_3 + 2);
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x33:
            if ((undefined *) 0x1 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                uVar31 = 0;
                uVar33 = 0;
                uVar30 = 0;
                uVar36 = 0x3f800000;
                uVar32 = 0xffffffff;
                uVar34 = 0xffffffff;
                uVar35 = 0;
                uVar37 = 0;
                do {
                    FUN_1402c25d0(param_3);
                    param_3 = (undefined(*)[12])(*param_3 + 2);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 2;
                    *(uint * ) * param_1 = SUB164(extraout_XMM0_00, 0) & uVar32 | ~uVar32 & uVar31;
                    *(uint * )(*param_1 + 4) = SUB164(extraout_XMM0_00 >> 0x20, 0) & uVar34 | ~uVar34 & uVar33;
                    *(uint * )(*param_1 + 8) = SUB164(extraout_XMM0_00 >> 0x40, 0) & uVar35 | ~uVar35 & uVar30;
                    *(uint * )(*param_1 + 0xc) = SUB164(extraout_XMM0_00 >> 0x60, 0) & uVar37 | ~uVar37 & uVar36;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x34:
            if ((undefined *) 0x1 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    cVar4 = (*param_3)[1];
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 2;
                    *(float *) *param_1 = (float) (int) (char) (*param_3)[0];
                    *(float *) (*param_1 + 4) = (float) (int) cVar4;
                    *(undefined4 * )(*param_1 + 8) = 0;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                    param_3 = (undefined(*)[12])(*param_3 + 2);
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x36:
            if ((undefined *) 0x1 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    FUN_1402c24e0(*(undefined2 * ) * pauVar24);
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 2);
                    *param_1 = CONCAT412(0x3f800000,
                                         ZEXT812(extraout_XMM0_Qa) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x37:
        case 0x38:
            if ((undefined *) 0x1 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 2);
                    *param_1 = CONCAT412(0x3f800000,
                                         ZEXT412((uint)((float) (uint) * (ushort *) puVar19 * 1.525902e-05)) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x39:
            if ((undefined *) 0x1 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 2);
                    *param_1 = CONCAT412(0x3f800000,
                                         ZEXT412((uint)(float)(uint) * (ushort *) puVar19) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x3a:
            if ((undefined *) 0x1 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 2);
                    *param_1 = CONCAT412(0x3f800000,
                                         ZEXT412((uint)((float) (int) *(short *) puVar19 * 3.051851e-05)) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x3b:
            if ((undefined *) 0x1 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 2);
                    *param_1 = CONCAT412(0x3f800000,
                                         ZEXT412((uint)(float)(int) * (short *) puVar19) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x3d:
            if (param_4 != (undefined *) 0x0) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 1);
                    *param_1 = CONCAT412(0x3f800000,
                                         ZEXT412((uint)((float) (uint)(byte) * puVar19 * 0.003921569)) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x3e:
            if (param_4 != (undefined *) 0x0) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 1);
                    *param_1 = CONCAT412(0x3f800000,
                                         ZEXT412((uint)(float)(uint)(byte) * puVar19) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x3f:
            if (param_4 != (undefined *) 0x0) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 1);
                    *param_1 = CONCAT412(0x3f800000,
                                         ZEXT412((uint)((float) (int) (char) *puVar19 * 0.007874016)) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x40:
            if (param_4 != (undefined *) 0x0) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 1);
                    *param_1 = CONCAT412(0x3f800000,
                                         ZEXT412((uint)(float)(int)(char) * puVar19) &
                                         SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x41:
            if (param_4 != (undefined *) 0x0) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = *pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 1);
                    in_XMM2 = ZEXT816(CONCAT44((float) (uint)(byte) * puVar19 * 0.003921569,
                                               SUB164(in_XMM2 >> 0x20, 0))) << 0x40 &
                              (undefined[16]) 0xffffffffffffffff;
                    *param_1 = in_XMM2;
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x42:
            if (param_4 != (undefined *) 0x0) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    lVar20 = 8;
                    pauVar22 = param_1;
                    do {
                        param_1 = pauVar22;
                        if (pauVar1 <= pauVar22) break;
                        if (((byte)(*param_3)[0] >> ((char) lVar20 - 1U & 0x1f) & 1) == 0) {
                            uVar26 = 0;
                        } else {
                            uVar26 = 0x3f800000;
                        }
                        param_1 = pauVar22[1];
                        *pauVar22 = CONCAT412(0x3f800000,
                                              ZEXT812(uVar26) & SUB1612((undefined[16]) 0xffffffffffffffff, 0));
                        lVar20 = lVar20 + -1;
                        pauVar22 = param_1;
                    } while (lVar20 != 0);
                    param_3 = (undefined(*)[12])(*param_3 + 1);
                    param_4 = param_4 + -1;
                    if (param_4 == (undefined *) 0x0) {
                        return 1;
                    }
                } while (true);
            }
            break;
        case 0x43:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                uVar31 = *(uint * ) * param_3;
                fVar28 = (float) ((uVar31 >> 4 & 0xf800000) + 0x33800000);
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(float *) *param_1 = (float) (ulonglong)(uVar31 & 0x1ff) * fVar28;
                    *(float *) (*param_1 + 4) = (float) (ulonglong)(uVar31 >> 9 & 0x1ff) * fVar28;
                    *(float *) (*param_1 + 8) = (float) (ulonglong)(uVar31 >> 0x12 & 0x1ff) * fVar28;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x44:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                while (true) {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    fVar28 = ((float) (uVar31 & 0xff) + 0.0) * 0.003921569;
                    fVar29 = ((float) (uVar31 & 0xff0000) + 0.0) * 5.983839e-08;
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    *(float *) *param_1 = fVar28;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xff00) + 0.0) * 1.531863e-05;
                    *(float *) (*param_1 + 8) = fVar29;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    if (pauVar1 <= param_1[1]) break;
                    puVar19 = puVar19 + 4;
                    *(float *) param_1[1] = fVar28;
                    *(float *) (param_1[1] + 4) =
                            ((float) (uVar31 & 0xff000000 ^ 0x80000000) + 2.147484e+09) * 2.337437e-10;
                    *(float *) (param_1[1] + 8) = fVar29;
                    *(undefined4 * )(param_1[1] + 0xc) = 0x3f800000;
                    param_1 = param_1[2];
                    if (param_4 <= puVar19) {
                        return 1;
                    }
                }
                return 1;
            }
            break;
        case 0x45:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                while (true) {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    fVar28 = ((float) (uVar31 & 0xff00) + 0.0) * 1.531863e-05;
                    fVar29 = ((float) (uVar31 & 0xff000000 ^ 0x80000000) + 2.147484e+09) * 2.337437e-10;
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    *(float *) *param_1 = fVar28;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xff) + 0.0) * 0.003921569;
                    *(float *) (*param_1 + 8) = fVar29;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    if (pauVar1 <= param_1[1]) break;
                    puVar19 = puVar19 + 4;
                    *(float *) param_1[1] = fVar28;
                    *(float *) (param_1[1] + 4) = ((float) (uVar31 & 0xff0000) + 0.0) * 5.983839e-08;
                    *(float *) (param_1[1] + 8) = fVar29;
                    *(undefined4 * )(param_1[1] + 0xc) = 0x3f800000;
                    param_1 = param_1[2];
                    if (param_4 <= puVar19) {
                        return 1;
                    }
                }
                return 1;
            }
            break;
        case 0x55:
            if ((undefined *) 0x1 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 2);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 2;
                    *(float *) *param_1 = (float) (uVar31 & 0xf800) * 0.0004882813 * fVar10;
                    *(float *) (*param_1 + 4) = (float) (uVar31 & 0x7e0) * 0.03125 * fVar29;
                    *(float *) (*param_1 + 8) = (float) (uVar31 & 0x1f) * 1.0 * fVar28;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x56:
            if ((undefined *) 0x1 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 2);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 2;
                    *(float *) *param_1 = (float) (uVar31 & 0x7c00) * 0.0009765625 * fVar13;
                    *(float *) (*param_1 + 4) = (float) (uVar31 & 0x3e0) * 0.03125 * fVar12;
                    *(float *) (*param_1 + 8) = (float) (uVar31 & 0x1f) * 1.0 * fVar11;
                    *(float *) (*param_1 + 0xc) = (float) (uVar31 & 0x8000) * 3.051758e-05 * fVar14;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x57:
        case 0x5b:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(float *) *param_1 = ((float) (uVar31 & 0xff0000) + 0.0) * 5.983839e-08;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xff00) + 0.0) * 1.531863e-05;
                    *(float *) (*param_1 + 8) = ((float) (uVar31 & 0xff) + 0.0) * 0.003921569;
                    *(float *) (*param_1 + 0xc) =
                            ((float) (uVar31 & 0xff000000 ^ 0x80000000) + 2.147484e+09) * 2.337437e-10;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x58:
        case 0x5d:
            if ((undefined *) 0x3 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 4);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 4;
                    *(float *) *param_1 = ((float) (uVar31 & 0xff0000) + 0.0) * 5.983839e-08;
                    *(float *) (*param_1 + 4) = ((float) (uVar31 & 0xff00) + 0.0) * 1.531863e-05;
                    *(float *) (*param_1 + 8) = ((float) (uVar31 & 0xff) + 0.0) * 0.003921569;
                    *(undefined4 * )(*param_1 + 0xc) = 0x3f800000;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
            break;
        case 0x59:
            if ((undefined *) 0x3 < param_4) {
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                pauVar24 = param_3;
                do {
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    uVar31 = *(uint * ) * pauVar24;
                    pauVar24 = (undefined(*)[12])(*pauVar24 + 4);
                    *(float *) *param_1 = (float) ((uVar31 & 0x3ff) - 0x180) * 0.001960784;
                    *(float *) (*param_1 + 4) = (float) ((uVar31 >> 10 & 0x3ff) - 0x180) * 0.001960784;
                    *(float *) (*param_1 + 8) = (float) ((uVar31 >> 0x14 & 0x3ff) - 0x180) * 0.001960784;
                    *(float *) (*param_1 + 0xc) = (float) (ulonglong)(uVar31 >> 0x1e) * 0.3333333;
                    param_1 = param_1[1];
                } while ((undefined * )((longlong) pauVar24 - (longlong) param_3) < param_4);
                return 1;
            }
            break;
        case 0x73:
            if ((undefined *) 0x1 < param_4) {
                puVar19 = (undefined *) 0x0;
                if (param_4 == (undefined *) 0x0) {
                    return 1;
                }
                do {
                    uVar31 = *(uint * ) * param_3;
                    param_3 = (undefined(*)[12])(*param_3 + 2);
                    if (pauVar1 <= param_1) {
                        return 1;
                    }
                    puVar19 = puVar19 + 2;
                    *(float *) *param_1 = (float) (uVar31 & 0xf00) * 0.00390625 * fVar17;
                    *(float *) (*param_1 + 4) = (float) (uVar31 & 0xf0) * 0.0625 * fVar16;
                    *(float *) (*param_1 + 8) = (float) (uVar31 & 0xf) * 1.0 * fVar15;
                    *(float *) (*param_1 + 0xc) = (float) (uVar31 & 0xf000) * 0.0002441406 * fVar18;
                    param_1 = param_1[1];
                } while (puVar19 < param_4);
                return 1;
            }
    }
    // WARNING: Read-only address (ram,0x000140b608f0) is written
    return 0;
}


/*
Unable to decompile 'FUN_1402c4f90'
Cause:
Low-level Error: Overlapping input varnodes
*/


undefined8 FUN_1402c6e60(undefined8 *param_1, longlong param_2) {
    int iVar1;
    longlong lVar2;
    char cVar3;
    undefined8 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;

    uVar8 = 0;
    uVar4 = FUN_1402b2fe0(param_2, 2, *param_1, param_1[1], 1, 1);
    if ((int) uVar4 < 0) {
        return uVar4;
    }
    if ((*(longlong * )(param_2 + 0x30) != 0) && (iVar1 = *(int *) (param_2 + 0x44), 1 < iVar1)) {
        if (iVar1 < 4) {
            lVar2 = *(longlong * )(param_2 + 0x28);
        } else {
            if (iVar1 != 4) goto LAB_1402c6f8a;
            lVar2 = *(longlong * )(param_2 + 0x20);
        }
        if ((lVar2 != 0) && (lVar2 = *(longlong * )(param_2 + 0x48), lVar2 != 0)) {
            lVar5 = *(longlong * )(lVar2 + 0x28);
            if (lVar5 == 0) {
                FUN_1402b34d0(param_2);
                return 0x80004003;
            }
            uVar6 = 0;
            lVar7 = param_1[5];
            if (param_1[1] != 0) {
                do {
                    uVar8 = uVar8 & 0xffffffff00000000 | (ulonglong) * (uint * )(param_1 + 2);
                    cVar3 = FUN_1402c33b0(lVar5, *param_1, lVar7, param_1[3], uVar8);
                    if (cVar3 == '\0') {
                        FUN_1402b34d0(param_2);
                        return 0x80004005;
                    }
                    lVar7 = lVar7 + param_1[3];
                    lVar5 = lVar5 + *(longlong * )(lVar2 + 0x18);
                    uVar6 = uVar6 + 1;
                } while (uVar6 < (ulonglong) param_1[1]);
            }
            return 0;
        }
    }
    LAB_1402c6f8a:
    FUN_1402b34d0(param_2);
    return 0x80004003;
}


undefined8 FUN_1402c6fb0(longlong *param_1, longlong *param_2) {
    char cVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar3 = param_1[5];
    if ((lVar3 == 0) || (lVar4 = param_2[5], lVar4 == 0)) {
        uVar2 = 0x80004003;
    } else if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
        uVar5 = 0;
        if (param_1[1] != 0) {
            do {
                cVar1 = FUN_1402c4f90(lVar4, param_2[3], *(undefined4 * )(param_2 + 2), lVar3, *param_1);
                if (cVar1 == '\0') {
                    return 0x80004005;
                }
                lVar3 = lVar3 + param_1[3];
                lVar4 = lVar4 + param_2[3];
                uVar5 = uVar5 + 1;
            } while (uVar5 < (ulonglong) param_1[1]);
        }
        uVar2 = 0;
    } else {
        uVar2 = 0x80004005;
    }
    return uVar2;
}


undefined8
FUN_1402c7070(longlong param_1, ulonglong param_2, undefined8 *param_3, uint param_4, ulonglong *param_5
) {
    char cVar1;
    undefined8 uVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    ulonglong local_38;

    if (param_1 == 0) {
        return 0x80004003;
    }
    FUN_1402b34d0(param_5);
    local_68 = *param_3;
    local_60 = param_3[1];
    local_58 = param_3[2];
    local_50 = param_3[3];
    local_48 = param_3[4];
    local_40 = param_3[5];
    local_38 = param_3[6] & 0xffffffff00000000 | (ulonglong) param_4;
    uVar2 = FUN_1402b2c70(param_5, &local_68);
    if (-1 < (int) uVar2) {
        if (param_2 != *param_5) {
            FUN_1402b34d0(param_5);
            return 0x80004005;
        }
        uVar6 = param_5[9];
        if (uVar6 == 0) {
            FUN_1402b34d0(param_5);
            return 0x80004003;
        }
        uVar7 = 0;
        if (param_2 != 0) {
            plVar3 = (longlong * )(uVar6 + 8);
            param_1 = param_1 - uVar6;
            do {
                if ((*(longlong * )(param_1 + -8 + (longlong) plVar3) != plVar3[-1]) ||
                    (*(longlong * )(param_1 + (longlong) plVar3) != *plVar3)) {
                    LAB_1402c7240:
                    FUN_1402b34d0(param_5);
                    return 0x80004005;
                }
                lVar4 = *(longlong * )(param_1 + 0x20 + (longlong) plVar3);
                lVar5 = plVar3[4];
                if ((lVar4 == 0) || (lVar5 == 0)) {
                    FUN_1402b34d0(param_5);
                    return 0x80004003;
                }
                uVar6 = 0;
                if (*(longlong * )(param_1 + (longlong) plVar3) != 0) {
                    do {
                        cVar1 = FUN_1402c4f90(lVar5, plVar3[2], param_4, lVar4,
                                              *(undefined8 * )(param_1 + -8 + (longlong) plVar3));
                        if (cVar1 == '\0') goto LAB_1402c7240;
                        lVar4 = lVar4 + *(longlong * )(param_1 + 0x10 + (longlong) plVar3);
                        lVar5 = lVar5 + plVar3[2];
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < *(ulonglong * )(param_1 + (longlong) plVar3));
                }
                uVar7 = uVar7 + 1;
                plVar3 = plVar3 + 6;
            } while (uVar7 < param_2);
        }
        uVar2 = 0;
    }
    return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402c7250(undefined (*param_1)[16], undefined4 *param_2, undefined4 *param_3) {
    undefined(*pauVar1)[16];
    ushort uVar2;
    ushort uVar3;
    undefined5 uVar4;
    unkbyte9 Var5;
    undefined auVar6[15];
    undefined auVar7[15];
    undefined auVar8[15];
    undefined auVar9[15];
    undefined auVar10[15];
    undefined auVar11[15];
    ushort uVar12;
    short sVar15;
    short sVar17;
    short sVar19;
    short sVar21;
    short sVar23;
    short sVar25;
    undefined auVar13[16];
    ushort uVar16;
    ushort uVar18;
    ushort uVar20;
    ushort uVar22;
    ushort uVar24;
    ushort uVar26;
    ushort uVar27;
    undefined auVar14[16];
    short sVar28;
    uint6 uVar29;
    short sVar34;
    short sVar36;
    undefined auVar32[16];
    short sVar35;
    undefined auVar33[16];
    undefined4 uVar37;
    int iVar38;
    int iVar41;
    int iVar42;
    int iVar43;
    byte bVar44;
    byte bVar51;
    byte bVar52;
    uint3 uVar45;
    byte bVar54;
    short sVar53;
    byte bVar55;
    char cVar57;
    byte bVar59;
    char cVar61;
    short sVar58;
    byte bVar62;
    char cVar64;
    byte bVar66;
    short sVar65;
    byte bVar68;
    byte bVar71;
    short sVar70;
    byte bVar73;
    byte bVar76;
    short sVar75;
    byte bVar78;
    byte bVar81;
    short sVar80;
    byte bVar83;
    byte bVar85;
    undefined auVar87[16];
    undefined in_XMM5[16];
    undefined auVar88[16];
    undefined in_XMM6[16];
    undefined auVar89[16];
    undefined auVar90[16];
    byte bVar91;
    byte bVar92;
    byte bVar101;
    byte bVar102;
    byte bVar103;
    uint3 uVar93;
    byte bVar104;
    byte bVar105;
    byte bVar106;
    char cVar107;
    byte bVar108;
    char cVar109;
    byte bVar110;
    char cVar111;
    byte bVar112;
    byte bVar113;
    byte bVar114;
    byte bVar115;
    byte bVar116;
    byte bVar117;
    byte bVar118;
    byte bVar119;
    byte bVar120;
    undefined auVar99[16];
    undefined uVar122;
    undefined uVar123;
    undefined uVar124;
    undefined uVar125;
    undefined in_XMM10[16];
    undefined auVar121[16];
    undefined8 uVar30;
    undefined auVar31[12];
    undefined8 uVar39;
    undefined auVar40[12];
    uint5 uVar46;
    uint7 uVar47;
    unkuint9 Var48;
    unkbyte10 Var49;
    undefined auVar50[11];
    byte bVar56;
    byte bVar60;
    byte bVar63;
    byte bVar67;
    byte bVar69;
    byte bVar72;
    byte bVar74;
    byte bVar77;
    byte bVar79;
    byte bVar82;
    byte bVar84;
    byte bVar86;
    uint5 uVar94;
    uint7 uVar95;
    unkuint9 Var96;
    unkbyte10 Var97;
    undefined auVar98[11];
    undefined auVar100[16];

    auVar33 = *param_1;
    auVar14 = param_1[1];
    pauVar1 = param_1[1];
    bVar91 = SUB161(auVar33, 0);
    bVar44 = (bVar91 <= (byte)(*pauVar1)[0]) * bVar91 + ((byte)(*pauVar1)[0] < bVar91) * (*pauVar1)[0];
    bVar92 = SUB161(auVar33 >> 8, 0);
    bVar51 = (bVar92 <= (byte)(*pauVar1)[0]) * bVar92 + ((byte)(*pauVar1)[0] < bVar92) * (*pauVar1)[0];
    bVar102 = SUB161(auVar33 >> 0x10, 0);
    bVar52 = (bVar102 <= (byte)(*pauVar1)[0]) * bVar102 +
             ((byte)(*pauVar1)[0] < bVar102) * (*pauVar1)[0];
    bVar104 = SUB161(auVar33 >> 0x18, 0);
    bVar54 = (bVar104 <= (byte)(*pauVar1)[0]) * bVar104 +
             ((byte)(*pauVar1)[0] < bVar104) * (*pauVar1)[0];
    bVar56 = SUB161(auVar33 >> 0x20, 0);
    bVar55 = (bVar56 <= (byte)(*pauVar1)[0]) * bVar56 + ((byte)(*pauVar1)[0] < bVar56) * (*pauVar1)[0];
    bVar60 = SUB161(auVar33 >> 0x28, 0);
    bVar59 = (bVar60 <= (byte)(*pauVar1)[0]) * bVar60 + ((byte)(*pauVar1)[0] < bVar60) * (*pauVar1)[0];
    bVar63 = SUB161(auVar33 >> 0x30, 0);
    bVar62 = (bVar63 <= (byte)(*pauVar1)[0]) * bVar63 + ((byte)(*pauVar1)[0] < bVar63) * (*pauVar1)[0];
    bVar67 = SUB161(auVar33 >> 0x38, 0);
    bVar66 = (bVar67 <= (byte)(*pauVar1)[0]) * bVar67 + ((byte)(*pauVar1)[0] < bVar67) * (*pauVar1)[0];
    bVar69 = SUB161(auVar33 >> 0x40, 0);
    bVar68 = (bVar69 <= (byte)(*pauVar1)[0]) * bVar69 + ((byte)(*pauVar1)[0] < bVar69) * (*pauVar1)[0];
    bVar72 = SUB161(auVar33 >> 0x48, 0);
    bVar71 = (bVar72 <= (byte)(*pauVar1)[0]) * bVar72 + ((byte)(*pauVar1)[0] < bVar72) * (*pauVar1)[0];
    bVar74 = SUB161(auVar33 >> 0x50, 0);
    bVar73 = (bVar74 <= (byte)(*pauVar1)[0]) * bVar74 + ((byte)(*pauVar1)[0] < bVar74) * (*pauVar1)[0];
    bVar77 = SUB161(auVar33 >> 0x58, 0);
    bVar76 = (bVar77 <= (byte)(*pauVar1)[0]) * bVar77 + ((byte)(*pauVar1)[0] < bVar77) * (*pauVar1)[0];
    bVar79 = SUB161(auVar33 >> 0x60, 0);
    bVar78 = (bVar79 <= (byte)(*pauVar1)[0]) * bVar79 + ((byte)(*pauVar1)[0] < bVar79) * (*pauVar1)[0];
    bVar82 = SUB161(auVar33 >> 0x68, 0);
    bVar81 = (bVar82 <= (byte)(*pauVar1)[0]) * bVar82 + ((byte)(*pauVar1)[0] < bVar82) * (*pauVar1)[0];
    bVar84 = SUB161(auVar33 >> 0x70, 0);
    bVar86 = SUB161(auVar33 >> 0x78, 0);
    bVar83 = (bVar84 <= (byte)(*pauVar1)[0]) * bVar84 + ((byte)(*pauVar1)[0] < bVar84) * (*pauVar1)[0];
    bVar85 = (bVar86 <= (byte)(*pauVar1)[0]) * bVar86 + ((byte)(*pauVar1)[0] < bVar86) * (*pauVar1)[0];
    pauVar1 = param_1[2];
    bVar44 = (bVar44 <= (byte)(*pauVar1)[0]) * bVar44 + ((byte)(*pauVar1)[0] < bVar44) * (*pauVar1)[0];
    bVar51 = (bVar51 <= (byte)(*pauVar1)[0]) * bVar51 + ((byte)(*pauVar1)[0] < bVar51) * (*pauVar1)[0];
    bVar52 = (bVar52 <= (byte)(*pauVar1)[0]) * bVar52 + ((byte)(*pauVar1)[0] < bVar52) * (*pauVar1)[0];
    bVar54 = (bVar54 <= (byte)(*pauVar1)[0]) * bVar54 + ((byte)(*pauVar1)[0] < bVar54) * (*pauVar1)[0];
    bVar55 = (bVar55 <= (byte)(*pauVar1)[0]) * bVar55 + ((byte)(*pauVar1)[0] < bVar55) * (*pauVar1)[0];
    bVar59 = (bVar59 <= (byte)(*pauVar1)[0]) * bVar59 + ((byte)(*pauVar1)[0] < bVar59) * (*pauVar1)[0];
    bVar62 = (bVar62 <= (byte)(*pauVar1)[0]) * bVar62 + ((byte)(*pauVar1)[0] < bVar62) * (*pauVar1)[0];
    bVar66 = (bVar66 <= (byte)(*pauVar1)[0]) * bVar66 + ((byte)(*pauVar1)[0] < bVar66) * (*pauVar1)[0];
    bVar68 = (bVar68 <= (byte)(*pauVar1)[0]) * bVar68 + ((byte)(*pauVar1)[0] < bVar68) * (*pauVar1)[0];
    bVar71 = (bVar71 <= (byte)(*pauVar1)[0]) * bVar71 + ((byte)(*pauVar1)[0] < bVar71) * (*pauVar1)[0];
    bVar73 = (bVar73 <= (byte)(*pauVar1)[0]) * bVar73 + ((byte)(*pauVar1)[0] < bVar73) * (*pauVar1)[0];
    bVar76 = (bVar76 <= (byte)(*pauVar1)[0]) * bVar76 + ((byte)(*pauVar1)[0] < bVar76) * (*pauVar1)[0];
    bVar78 = (bVar78 <= (byte)(*pauVar1)[0]) * bVar78 + ((byte)(*pauVar1)[0] < bVar78) * (*pauVar1)[0];
    bVar81 = (bVar81 <= (byte)(*pauVar1)[0]) * bVar81 + ((byte)(*pauVar1)[0] < bVar81) * (*pauVar1)[0];
    bVar83 = (bVar83 <= (byte)(*pauVar1)[0]) * bVar83 + ((byte)(*pauVar1)[0] < bVar83) * (*pauVar1)[0];
    bVar85 = (bVar85 <= (byte)(*pauVar1)[0]) * bVar85 + ((byte)(*pauVar1)[0] < bVar85) * (*pauVar1)[0];
    pauVar1 = param_1[3];
    bVar44 = (bVar44 <= (byte)(*pauVar1)[0]) * bVar44 + ((byte)(*pauVar1)[0] < bVar44) * (*pauVar1)[0];
    bVar51 = (bVar51 <= (byte)(*pauVar1)[0]) * bVar51 + ((byte)(*pauVar1)[0] < bVar51) * (*pauVar1)[0];
    bVar52 = (bVar52 <= (byte)(*pauVar1)[0]) * bVar52 + ((byte)(*pauVar1)[0] < bVar52) * (*pauVar1)[0];
    bVar54 = (bVar54 <= (byte)(*pauVar1)[0]) * bVar54 + ((byte)(*pauVar1)[0] < bVar54) * (*pauVar1)[0];
    bVar55 = (bVar55 <= (byte)(*pauVar1)[0]) * bVar55 + ((byte)(*pauVar1)[0] < bVar55) * (*pauVar1)[0];
    bVar59 = (bVar59 <= (byte)(*pauVar1)[0]) * bVar59 + ((byte)(*pauVar1)[0] < bVar59) * (*pauVar1)[0];
    bVar62 = (bVar62 <= (byte)(*pauVar1)[0]) * bVar62 + ((byte)(*pauVar1)[0] < bVar62) * (*pauVar1)[0];
    bVar66 = (bVar66 <= (byte)(*pauVar1)[0]) * bVar66 + ((byte)(*pauVar1)[0] < bVar66) * (*pauVar1)[0];
    bVar68 = (bVar68 <= (byte)(*pauVar1)[0]) * bVar68 + ((byte)(*pauVar1)[0] < bVar68) * (*pauVar1)[0];
    bVar71 = (bVar71 <= (byte)(*pauVar1)[0]) * bVar71 + ((byte)(*pauVar1)[0] < bVar71) * (*pauVar1)[0];
    bVar73 = (bVar73 <= (byte)(*pauVar1)[0]) * bVar73 + ((byte)(*pauVar1)[0] < bVar73) * (*pauVar1)[0];
    bVar76 = (bVar76 <= (byte)(*pauVar1)[0]) * bVar76 + ((byte)(*pauVar1)[0] < bVar76) * (*pauVar1)[0];
    bVar78 = (bVar78 <= (byte)(*pauVar1)[0]) * bVar78 + ((byte)(*pauVar1)[0] < bVar78) * (*pauVar1)[0];
    bVar81 = (bVar81 <= (byte)(*pauVar1)[0]) * bVar81 + ((byte)(*pauVar1)[0] < bVar81) * (*pauVar1)[0];
    bVar83 = (bVar83 <= (byte)(*pauVar1)[0]) * bVar83 + ((byte)(*pauVar1)[0] < bVar83) * (*pauVar1)[0];
    bVar85 = (bVar85 <= (byte)(*pauVar1)[0]) * bVar85 + ((byte)(*pauVar1)[0] < bVar85) * (*pauVar1)[0];
    auVar121 = in_XMM10 & (undefined[16]) 0x0;
    pauVar1 = param_1[1];
    bVar91 = ((byte)(*pauVar1)[0] <= bVar91) * bVar91 + (bVar91 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar101 = ((byte)(*pauVar1)[0] <= bVar92) * bVar92 +
              (bVar92 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar102 = ((byte)(*pauVar1)[0] <= bVar102) * bVar102 +
              (bVar102 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar104 = ((byte)(*pauVar1)[0] <= bVar104) * bVar104 +
              (bVar104 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar106 = ((byte)(*pauVar1)[0] <= bVar56) * bVar56 +
              (bVar56 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar108 = ((byte)(*pauVar1)[0] <= bVar60) * bVar60 +
              (bVar60 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar110 = ((byte)(*pauVar1)[0] <= bVar63) * bVar63 +
              (bVar63 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar112 = ((byte)(*pauVar1)[0] <= bVar67) * bVar67 +
              (bVar67 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar113 = ((byte)(*pauVar1)[0] <= bVar69) * bVar69 +
              (bVar69 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar114 = ((byte)(*pauVar1)[0] <= bVar72) * bVar72 +
              (bVar72 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar115 = ((byte)(*pauVar1)[0] <= bVar74) * bVar74 +
              (bVar74 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar116 = ((byte)(*pauVar1)[0] <= bVar77) * bVar77 +
              (bVar77 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar117 = ((byte)(*pauVar1)[0] <= bVar79) * bVar79 +
              (bVar79 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar118 = ((byte)(*pauVar1)[0] <= bVar82) * bVar82 +
              (bVar82 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar119 = ((byte)(*pauVar1)[0] <= bVar84) * bVar84 +
              (bVar84 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar120 = ((byte)(*pauVar1)[0] <= bVar86) * bVar86 +
              (bVar86 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    pauVar1 = param_1[2];
    bVar92 = ((byte)(*pauVar1)[0] <= bVar91) * bVar91 + (bVar91 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar101 = ((byte)(*pauVar1)[0] <= bVar101) * bVar101 +
              (bVar101 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar103 = ((byte)(*pauVar1)[0] <= bVar102) * bVar102 +
              (bVar102 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar105 = ((byte)(*pauVar1)[0] <= bVar104) * bVar104 +
              (bVar104 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar106 = ((byte)(*pauVar1)[0] <= bVar106) * bVar106 +
              (bVar106 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar108 = ((byte)(*pauVar1)[0] <= bVar108) * bVar108 +
              (bVar108 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar110 = ((byte)(*pauVar1)[0] <= bVar110) * bVar110 +
              (bVar110 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar112 = ((byte)(*pauVar1)[0] <= bVar112) * bVar112 +
              (bVar112 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar113 = ((byte)(*pauVar1)[0] <= bVar113) * bVar113 +
              (bVar113 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar114 = ((byte)(*pauVar1)[0] <= bVar114) * bVar114 +
              (bVar114 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar115 = ((byte)(*pauVar1)[0] <= bVar115) * bVar115 +
              (bVar115 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar116 = ((byte)(*pauVar1)[0] <= bVar116) * bVar116 +
              (bVar116 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar117 = ((byte)(*pauVar1)[0] <= bVar117) * bVar117 +
              (bVar117 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar118 = ((byte)(*pauVar1)[0] <= bVar118) * bVar118 +
              (bVar118 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar119 = ((byte)(*pauVar1)[0] <= bVar119) * bVar119 +
              (bVar119 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar120 = ((byte)(*pauVar1)[0] <= bVar120) * bVar120 +
              (bVar120 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar91 = (bVar44 <= bVar68) * bVar44 + (bVar68 < bVar44) * bVar68;
    bVar51 = (bVar51 <= bVar71) * bVar51 + (bVar71 < bVar51) * bVar71;
    bVar52 = (bVar52 <= bVar73) * bVar52 + (bVar73 < bVar52) * bVar73;
    bVar102 = (bVar54 <= bVar76) * bVar54 + (bVar76 < bVar54) * bVar76;
    bVar54 = (bVar55 <= bVar78) * bVar55 + (bVar78 < bVar55) * bVar78;
    bVar104 = (bVar59 <= bVar81) * bVar59 + (bVar81 < bVar59) * bVar81;
    bVar55 = (bVar62 <= bVar83) * bVar62 + (bVar83 < bVar62) * bVar83;
    bVar59 = (bVar66 <= bVar85) * bVar66 + (bVar85 < bVar66) * bVar85;
    pauVar1 = param_1[3];
    bVar44 = ((byte)(*pauVar1)[0] <= bVar92) * bVar92 + (bVar92 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar92 = ((byte)(*pauVar1)[0] <= bVar101) * bVar101 +
             (bVar101 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar101 = ((byte)(*pauVar1)[0] <= bVar103) * bVar103 +
              (bVar103 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar103 = ((byte)(*pauVar1)[0] <= bVar105) * bVar105 +
              (bVar105 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar105 = ((byte)(*pauVar1)[0] <= bVar106) * bVar106 +
              (bVar106 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar106 = ((byte)(*pauVar1)[0] <= bVar108) * bVar108 +
              (bVar108 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar108 = ((byte)(*pauVar1)[0] <= bVar110) * bVar110 +
              (bVar110 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar110 = ((byte)(*pauVar1)[0] <= bVar112) * bVar112 +
              (bVar112 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar112 = ((byte)(*pauVar1)[0] <= bVar113) * bVar113 +
              (bVar113 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar113 = ((byte)(*pauVar1)[0] <= bVar114) * bVar114 +
              (bVar114 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar114 = ((byte)(*pauVar1)[0] <= bVar115) * bVar115 +
              (bVar115 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar115 = ((byte)(*pauVar1)[0] <= bVar116) * bVar116 +
              (bVar116 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    uVar4 = CONCAT14(bVar115, CONCAT13(bVar114, CONCAT12(bVar113, CONCAT11(bVar112, bVar110))));
    bVar116 = ((byte)(*pauVar1)[0] <= bVar117) * bVar117 +
              (bVar117 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar117 = ((byte)(*pauVar1)[0] <= bVar118) * bVar118 +
              (bVar118 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar118 = ((byte)(*pauVar1)[0] <= bVar119) * bVar119 +
              (bVar119 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    bVar119 = ((byte)(*pauVar1)[0] <= bVar120) * bVar120 +
              (bVar120 < (byte)(*pauVar1)[0]) * (*pauVar1)[0];
    Var5 = CONCAT18(bVar119, CONCAT17(bVar118, CONCAT16(bVar117, CONCAT15(bVar116, uVar4))));
    bVar62 = (bVar112 <= bVar44) * bVar44 + (bVar44 < bVar112) * bVar112;
    bVar66 = (bVar113 <= bVar92) * bVar92 + (bVar92 < bVar113) * bVar113;
    bVar101 = (bVar114 <= bVar101) * bVar101 + (bVar101 < bVar114) * bVar114;
    bVar103 = (bVar115 <= bVar103) * bVar103 + (bVar103 < bVar115) * bVar115;
    bVar105 = (bVar116 <= bVar105) * bVar105 + (bVar105 < bVar116) * bVar116;
    bVar106 = (bVar117 <= bVar106) * bVar106 + (bVar106 < bVar117) * bVar117;
    bVar108 = (bVar118 <= bVar108) * bVar108 + (bVar108 < bVar118) * bVar118;
    bVar110 = (bVar119 <= bVar110) * bVar110 + (bVar110 < bVar119) * bVar119;
    auVar13 = pshuflw(CONCAT412((int) ((unkuint9) Var5 >> 0x28),
                                CONCAT48((int) ((uint5) uVar4 >> 8), (longlong)((unkuint9) Var5 >> 8))),
                      CONCAT115(bVar85, CONCAT114(bVar83, CONCAT113(bVar81, CONCAT112(bVar78, CONCAT111(
                              bVar76, CONCAT110(bVar73, CONCAT19(bVar71, CONCAT18(
                                      bVar68, CONCAT17(bVar59, CONCAT16(bVar55, CONCAT15(
                                              bVar104, CONCAT14(bVar54, CONCAT13(bVar102, CONCAT12(
                                                      bVar52, CONCAT11(bVar51, bVar91))))))))))))))), 0xee);
    bVar44 = SUB161(auVar13, 0);
    bVar92 = (bVar91 <= bVar44) * bVar91 + (bVar44 < bVar91) * bVar44;
    bVar44 = SUB161(auVar13 >> 8, 0);
    bVar91 = SUB161(auVar13 >> 0x10, 0);
    uVar45 = CONCAT12((bVar52 <= bVar91) * bVar52 + (bVar91 < bVar52) * bVar91,
                      CONCAT11((bVar51 <= bVar44) * bVar51 + (bVar44 < bVar51) * bVar44, bVar92));
    bVar44 = SUB161(auVar13 >> 0x18, 0);
    bVar91 = SUB161(auVar13 >> 0x20, 0);
    cVar57 = (bVar54 <= bVar91) * bVar54 + (bVar91 < bVar54) * bVar91;
    uVar46 = CONCAT14(cVar57, CONCAT13((bVar102 <= bVar44) * bVar102 + (bVar44 < bVar102) * bVar44,
                                       uVar45));
    bVar44 = SUB161(auVar13 >> 0x28, 0);
    cVar61 = (bVar104 <= bVar44) * bVar104 + (bVar44 < bVar104) * bVar44;
    bVar44 = SUB161(auVar13 >> 0x30, 0);
    cVar64 = (bVar55 <= bVar44) * bVar55 + (bVar44 < bVar55) * bVar44;
    uVar47 = CONCAT16(cVar64, CONCAT15(cVar61, uVar46));
    bVar44 = SUB161(auVar13 >> 0x38, 0);
    bVar52 = (bVar59 <= bVar44) * bVar59 + (bVar44 < bVar59) * bVar44;
    uVar30 = CONCAT17(bVar52, uVar47);
    bVar44 = SUB161(auVar13 >> 0x40, 0);
    Var48 = CONCAT18((bVar68 <= bVar44) * bVar68 + (bVar44 < bVar68) * bVar44, uVar30);
    bVar44 = SUB161(auVar13 >> 0x48, 0);
    Var49 = CONCAT19((bVar71 <= bVar44) * bVar71 + (bVar44 < bVar71) * bVar44, Var48);
    bVar44 = SUB161(auVar13 >> 0x50, 0);
    auVar50 = CONCAT110((bVar73 <= bVar44) * bVar73 + (bVar44 < bVar73) * bVar44, Var49);
    bVar44 = SUB161(auVar13 >> 0x58, 0);
    auVar31 = CONCAT111((bVar76 <= bVar44) * bVar76 + (bVar44 < bVar76) * bVar44, auVar50);
    bVar51 = SUB161(auVar13 >> 0x60, 0);
    auVar13 = pshuflw(auVar13, CONCAT115(bVar119, CONCAT114(bVar118, CONCAT113(bVar117, CONCAT112(bVar116,
                                                                                                  CONCAT111(bVar115,
                                                                                                            CONCAT110(
                                                                                                                    bVar114,
                                                                                                                    CONCAT19(
                                                                                                                            bVar113,
                                                                                                                            CONCAT18(
                                                                                                                                    bVar112,
                                                                                                                                    CONCAT17(
                                                                                                                                            bVar110,
                                                                                                                                            CONCAT16
                                                                                                                                                    (bVar108,
                                                                                                                                                     CONCAT15(
                                                                                                                                                             bVar106,
                                                                                                                                                             CONCAT14(
                                                                                                                                                                     bVar105,
                                                                                                                                                                     CONCAT13(
                                                                                                                                                                             bVar103,
                                                                                                                                                                             CONCAT12(
                                                                                                                                                                                     bVar101,
                                                                                                                                                                                     CONCAT11(
                                                                                                                                                                                             bVar66,
                                                                                                                                                                                             bVar62))))))))))))))),
                      0xee);
    bVar44 = SUB161(auVar13, 0);
    bVar102 = (bVar44 <= bVar62) * bVar62 + (bVar62 < bVar44) * bVar44;
    bVar44 = SUB161(auVar13 >> 8, 0);
    bVar91 = SUB161(auVar13 >> 0x10, 0);
    uVar93 = CONCAT12((bVar91 <= bVar101) * bVar101 + (bVar101 < bVar91) * bVar91,
                      CONCAT11((bVar44 <= bVar66) * bVar66 + (bVar66 < bVar44) * bVar44, bVar102));
    bVar44 = SUB161(auVar13 >> 0x18, 0);
    bVar91 = SUB161(auVar13 >> 0x20, 0);
    cVar107 = (bVar91 <= bVar105) * bVar105 + (bVar105 < bVar91) * bVar91;
    uVar94 = CONCAT14(cVar107, CONCAT13((bVar44 <= bVar103) * bVar103 + (bVar103 < bVar44) * bVar44,
                                        uVar93));
    bVar44 = SUB161(auVar13 >> 0x28, 0);
    cVar109 = (bVar44 <= bVar106) * bVar106 + (bVar106 < bVar44) * bVar44;
    bVar44 = SUB161(auVar13 >> 0x30, 0);
    cVar111 = (bVar44 <= bVar108) * bVar108 + (bVar108 < bVar44) * bVar44;
    uVar95 = CONCAT16(cVar111, CONCAT15(cVar109, uVar94));
    bVar44 = SUB161(auVar13 >> 0x38, 0);
    bVar91 = (bVar44 <= bVar110) * bVar110 + (bVar110 < bVar44) * bVar44;
    uVar39 = CONCAT17(bVar91, uVar95);
    bVar44 = SUB161(auVar13 >> 0x40, 0);
    Var96 = CONCAT18((bVar44 <= bVar112) * bVar112 + (bVar112 < bVar44) * bVar44, uVar39);
    bVar44 = SUB161(auVar13 >> 0x48, 0);
    Var97 = CONCAT19((bVar44 <= bVar113) * bVar113 + (bVar113 < bVar44) * bVar44, Var96);
    bVar44 = SUB161(auVar13 >> 0x50, 0);
    auVar98 = CONCAT110((bVar44 <= bVar114) * bVar114 + (bVar114 < bVar44) * bVar44, Var97);
    bVar44 = SUB161(auVar13 >> 0x58, 0);
    auVar40 = CONCAT111((bVar44 <= bVar115) * bVar115 + (bVar115 < bVar44) * bVar44, auVar98);
    bVar44 = SUB161(auVar13 >> 0x60, 0);
    auVar6 = CONCAT213(SUB152(CONCAT114(bVar52, ZEXT1314(CONCAT112((bVar78 <= bVar51) * bVar78 +
                                                                   (bVar51 < bVar78) * bVar51, auVar31))
    ) >> 0x68, 0), CONCAT112(cVar64, auVar31));
    auVar8 = CONCAT411(SUB154(CONCAT312(SUB153(auVar6 >> 0x60, 0), ZEXT1112(auVar50)) >> 0x58, 0),
                       CONCAT110(cVar61, Var49));
    auVar10 = CONCAT69(SUB156(CONCAT510(SUB155(auVar8 >> 0x50, 0), (unkuint10) Var48) >> 0x48, 0),
                       CONCAT18(cVar57, uVar30));
    auVar89 = CONCAT97((unkuint9) SUB157(auVar10 >> 0x40, 0) << 8, (uVar47 >> 0x18) << 0x30);
    auVar88 = CONCAT115(ZEXT1011(SUB1610(auVar89 >> 0x30, 0)) << 8, (uVar46 >> 0x10) << 0x20);
    auVar87 = CONCAT133(ZEXT1213(SUB1612(auVar88 >> 0x20, 0)) << 8, (uVar45 >> 8) << 0x10);
    uVar2 = (ushort) bVar92;
    auVar7 = CONCAT213(SUB152(CONCAT114(bVar91, ZEXT1314(CONCAT112((bVar44 <= bVar116) * bVar116 +
                                                                   (bVar116 < bVar44) * bVar44, auVar40)
    )) >> 0x68, 0), CONCAT112(cVar111, auVar40));
    auVar9 = CONCAT411(SUB154(CONCAT312(SUB153(auVar7 >> 0x60, 0), ZEXT1112(auVar98)) >> 0x58, 0),
                       CONCAT110(cVar109, Var97));
    auVar11 = CONCAT69(SUB156(CONCAT510(SUB155(auVar9 >> 0x50, 0), (unkuint10) Var96) >> 0x48, 0),
                       CONCAT18(cVar107, uVar39));
    auVar100 = CONCAT97((unkuint9) SUB157(auVar11 >> 0x40, 0) << 8, (uVar95 >> 0x18) << 0x30);
    auVar99 = CONCAT115(ZEXT1011(SUB1610(auVar100 >> 0x30, 0)) << 8, (uVar94 >> 0x10) << 0x20);
    auVar90 = CONCAT133(ZEXT1213(SUB1612(auVar99 >> 0x20, 0)) << 8, (uVar93 >> 8) << 0x10);
    uVar3 = (ushort) bVar102;
    auVar32 = psllw(CONCAT142(SUB1614(auVar87 >> 0x10, 0), uVar2) & (undefined[16]) 0xffffffffffff00ff,
                    2);
    auVar13 = psllw(CONCAT142(SUB1614(auVar90 >> 0x10, 0), uVar3) & (undefined[16]) 0xffffffffffff00ff,
                    2);
    sVar28 = pavgw(SUB162(auVar32, 0), SUB162(auVar13, 0));
    sVar34 = pavgw(SUB162(auVar32 >> 0x10, 0), SUB162(auVar13 >> 0x10, 0));
    sVar35 = pavgw(SUB162(auVar32 >> 0x20, 0), SUB162(auVar13 >> 0x20, 0));
    sVar36 = pavgw(SUB162(auVar32 >> 0x30, 0), SUB162(auVar13 >> 0x30, 0));
    pavgw(SUB162(auVar32 >> 0x40, 0), SUB162(auVar13 >> 0x40, 0));
    pavgw(SUB162(auVar32 >> 0x50, 0), SUB162(auVar13 >> 0x50, 0));
    pavgw(SUB162(auVar32 >> 0x60, 0), SUB162(auVar13 >> 0x60, 0));
    pavgw(SUB162(auVar32 >> 0x70, 0), SUB162(auVar13 >> 0x70, 0));
    sVar15 = SUB162(auVar90 >> 0x10, 0);
    sVar53 = SUB162(auVar87 >> 0x10, 0);
    sVar17 = SUB162(auVar99 >> 0x20, 0);
    sVar58 = SUB162(auVar88 >> 0x20, 0);
    sVar19 = SUB162(auVar100 >> 0x30, 0);
    sVar65 = SUB162(auVar89 >> 0x30, 0);
    sVar21 = SUB162(ZEXT1516(auVar11) >> 0x40, 0);
    sVar70 = SUB162(ZEXT1516(auVar10) >> 0x40, 0);
    sVar23 = SUB162(ZEXT1516(auVar9) >> 0x50, 0);
    sVar75 = SUB162(ZEXT1516(auVar8) >> 0x50, 0);
    sVar25 = SUB162(ZEXT1516(auVar7) >> 0x60, 0);
    sVar80 = SUB162(ZEXT1516(auVar6) >> 0x60, 0);
    uVar122 = SUB161(auVar121 >> 0x40, 0);
    uVar123 = SUB161(auVar121 >> 0x48, 0);
    uVar124 = SUB161(auVar121 >> 0x50, 0);
    uVar125 = SUB161(auVar121 >> 0x58, 0);
    auVar33 = psllw(CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(CONCAT115(ZEXT1011(SUB1610(CONCAT97((
                                                                                                             unkuint9) SUB157(
                                                                                           CONCAT69(SUB156(CONCAT510(SUB155(
                                                                                                                             CONCAT411(SUB154(CONCAT312(SUB153(CONCAT213(SUB152
                                                                                                                                                                                 (CONCAT114(bVar67, ZEXT1314(
                                                                                                                                                                                         SUB1613(auVar33, 0))) >>
                                                                                                                                                                                                               0x68, 0),
                                                                                                                                                                         CONCAT112(bVar63, SUB1612(auVar33, 0))) >>
                                                                                                                                                                                                                 0x60,
                                                                                                                                                               0), ZEXT1112(SUB1611(auVar33, 0))) >> 0x58, 0),
                                                                                                                                       CONCAT110(bVar60, SUB1610(auVar33, 0))) >> 0x50, 0),
                                                                                                                     (unkuint10) SUB169(auVar33, 0)) >> 0x48, 0),
                                                                                                    CONCAT18(bVar56, SUB168(auVar33, 0))) >> 0x40, 0) <<
                                                                                                                                                      8, (SUB167(auVar33, 0) >> 0x18) << 0x30)
                                                                                                    >> 0x30, 0))
                                                                                   << 8,
                                                                           (SUB165(auVar33, 0) >> 0x10) << 0x20)
                                                                         >> 0x20,
                                                                 0)) << 8, (SUB163(auVar33, 0) >> 8) << 0x10) >> 0x10,
                                      0), SUB162(auVar33, 0)) & (undefined[16]) 0xffffffffffff00ff, 2);
    uVar12 = (ushort)(uVar3 - uVar2) >> 4;
    uVar16 = (ushort)(sVar15 - sVar53) >> 4;
    uVar18 = (ushort)(sVar17 - sVar58) >> 4;
    uVar20 = (ushort)(sVar19 - sVar65) >> 4;
    uVar22 = (ushort)(sVar21 - sVar70) >> 4;
    uVar24 = (ushort)(sVar23 - sVar75) >> 4;
    uVar26 = (ushort)(sVar25 - sVar80) >> 4;
    uVar27 = (ushort)((ushort) bVar91 - (ushort) bVar52) >> 4;
    auVar13 = psllw(ZEXT1516(CONCAT114(bVar86, ZEXT1314(CONCAT112(bVar84, ZEXT1112(CONCAT110(bVar82, (
            unkuint10)
            CONCAT18(bVar79, CONCAT17(uVar125, CONCAT16(bVar77,
                                                        CONCAT15(uVar124, CONCAT14(bVar74, CONCAT13(uVar123,
                                                                                                    CONCAT12(bVar72,
                                                                                                             CONCAT11(
                                                                                                                     uVar122,
                                                                                                                     bVar69)))))))))))
    ))), 2);
    uVar29 = CONCAT24(SUB162(auVar33 >> 0x20, 0) - sVar35,
                      CONCAT22(SUB162(auVar33 >> 0x10, 0) - sVar34, SUB162(auVar33, 0) - sVar28));
    uVar30 = CONCAT26(SUB162(auVar33 >> 0x30, 0) - sVar36, uVar29);
    auVar31 = CONCAT210(SUB162(auVar33 >> 0x50, 0) - sVar34,
                        CONCAT28(SUB162(auVar33 >> 0x40, 0) - sVar28, uVar30));
    auVar99 = CONCAT214(bVar91 - uVar27,
                        CONCAT212(sVar25 - uVar26,
                                  CONCAT210(sVar23 - uVar24,
                                            CONCAT28(sVar21 - uVar22,
                                                     CONCAT26(sVar19 - uVar20,
                                                              CONCAT24(sVar17 - uVar18,
                                                                       CONCAT22(sVar15 - uVar16,
                                                                                uVar3 - uVar12)))))));
    uVar37 = CONCAT22(SUB162(auVar13 >> 0x10, 0) - sVar34, SUB162(auVar13, 0) - sVar28);
    uVar39 = CONCAT26(SUB162(auVar13 >> 0x30, 0) - sVar36,
                      CONCAT24(SUB162(auVar13 >> 0x20, 0) - sVar35, uVar37));
    auVar40 = CONCAT210(SUB162(auVar13 >> 0x50, 0) - sVar34,
                        CONCAT28(SUB162(auVar13 >> 0x40, 0) - sVar28, uVar39));
    auVar87 = CONCAT214(SUB162(auVar13 >> 0x70, 0) - sVar36,
                        CONCAT212(SUB162(auVar13 >> 0x60, 0) - sVar35, auVar40));
    auVar13 = CONCAT412(SUB164(auVar87 >> 0x60, 0),
                        CONCAT48((int) ((ulonglong) uVar39 >> 0x20),
                                 CONCAT44(SUB164(CONCAT214(SUB162(auVar33 >> 0x70, 0) - sVar36,
                                                           CONCAT212(SUB162(auVar33 >> 0x60, 0) -
                                                                     sVar35, auVar31)) >> 0x60, 0),
                                          (int) ((ulonglong) uVar30 >> 0x20))));
    auVar33 = CONCAT412(SUB124(auVar40 >> 0x40, 0),
                        CONCAT48(uVar37, (ulonglong) uVar29 & 0xffffffff |
                                         (ulonglong) SUB124(auVar31 >> 0x40, 0) << 0x20));
    auVar90 = CONCAT214(uVar27 + bVar52,
                        CONCAT212(uVar26 + sVar80,
                                  CONCAT210(uVar24 + sVar75,
                                            CONCAT28(uVar22 + sVar70,
                                                     CONCAT26(uVar20 + sVar65,
                                                              CONCAT24(uVar18 + sVar58,
                                                                       CONCAT22(uVar16 + sVar53,
                                                                                uVar12 + uVar2)))))));
    auVar33 = pshuflw(auVar33, auVar33, 0xd8);
    auVar32 = pshufhw(in_XMM6, auVar33, 0xd8);
    auVar33 = pshuflw(auVar33, auVar13, 0x88);
    auVar33 = pshufhw(auVar13, auVar33, 0x88);
    auVar89 = pmaddwd(auVar32, auVar33);
    auVar13 = psllw(ZEXT1516(CONCAT114(SUB161(auVar14 >> 0x78, 0),
                                       ZEXT1314(CONCAT112(SUB161(auVar14 >> 0x70, 0),
                                                          ZEXT1112(CONCAT110(SUB161(auVar14 >> 0x68, 0), (unkuint10)
                                                                  CONCAT18(SUB161(auVar14
                                                                                          >> 0x60, 0),
                                                                           CONCAT17(uVar125,
                                                                                    CONCAT16(SUB161(auVar14 >> 0x58, 0
                                                                                    ), CONCAT15(uVar124, CONCAT14(
                                                                                            SUB161(auVar14 >> 0x50, 0),
                                                                                            CONCAT13(uVar123, CONCAT12(
                                                                                                    SUB161(auVar14
                                                                                                                   >> 0x48,
                                                                                                           0),
                                                                                                    CONCAT11(uVar122,
                                                                                                             SUB161(auVar14
                                                                                                                            >> 0x40,
                                                                                                                    0)))))
                                                                                    )))))))))), 2);
    auVar33 = psllw(CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(CONCAT115(ZEXT1011(SUB1610(CONCAT97((
                                                                                                             unkuint9) SUB157(
                                                                                                                     CONCAT69(SUB156(CONCAT510(SUB155(
                                                                                                                                                       CONCAT411(SUB154(CONCAT312(SUB153(CONCAT213(SUB152
                                                                                                                                                                                                           (CONCAT114(SUB161(auVar14 >> 0x38, 0),
                                                                                                                                                                                                                      ZEXT1314(
                                                                                                                                                                                                                              SUB1613(auVar14, 0)))
                                                                                                                                                                                                                    >> 0x68, 0
                                                                                                                                                                                                           ), CONCAT112(SUB161(auVar14 >> 0x30, 0),
                                                                                                                                                                                                                        SUB1612(auVar14, 0)))
                                                                                                                                                                                                 >> 0x60, 0),
                                                                                                                                                                                  ZEXT1112(SUB1611(auVar14, 0))) >> 0x58, 0),
                                                                                                                                                                 CONCAT110(SUB161(auVar14 >> 0x28, 0),
                                                                                                                                                                           SUB1610(auVar14, 0))) >> 0x50, 0),
                                                                                                                                               (unkuint10) SUB169(auVar14, 0)) >> 0x48, 0),
                                                                                                                              CONCAT18(SUB161(auVar14 >> 0x20, 0),
                                                                                                                                       SUB168(auVar14, 0))) >> 0x40, 0) << 8,
                                                                                                     (SUB167(auVar14, 0)
                                                                                                             >> 0x18)
                                                                                                             << 0x30)
                                                                                                    >> 0x30, 0))
                                                                                   << 8,
                                                                           (SUB165(auVar14, 0) >> 0x10) << 0x20)
                                                                         >> 0x20,
                                                                 0)) << 8, (SUB163(auVar14, 0) >> 8) << 0x10) >> 0x10,
                                      0), SUB162(auVar14, 0)) & (undefined[16]) 0xffffffffffff00ff, 2);
    uVar37 = CONCAT22(SUB162(auVar13 >> 0x10, 0) - sVar34, SUB162(auVar13, 0) - sVar28);
    uVar39 = CONCAT26(SUB162(auVar13 >> 0x30, 0) - sVar36,
                      CONCAT24(SUB162(auVar13 >> 0x20, 0) - sVar35, uVar37));
    auVar40 = CONCAT210(SUB162(auVar13 >> 0x50, 0) - sVar34,
                        CONCAT28(SUB162(auVar13 >> 0x40, 0) - sVar28, uVar39));
    uVar29 = CONCAT24(SUB162(auVar33 >> 0x20, 0) - sVar35,
                      CONCAT22(SUB162(auVar33 >> 0x10, 0) - sVar34, SUB162(auVar33, 0) - sVar28));
    uVar30 = CONCAT26(SUB162(auVar33 >> 0x30, 0) - sVar36, uVar29);
    auVar31 = CONCAT210(SUB162(auVar33 >> 0x50, 0) - sVar34,
                        CONCAT28(SUB162(auVar33 >> 0x40, 0) - sVar28, uVar30));
    auVar13 = CONCAT412(SUB164(CONCAT214(SUB162(auVar13 >> 0x70, 0) - sVar36,
                                         CONCAT212(SUB162(auVar13 >> 0x60, 0) - sVar35, auVar40)) >>
                                                                                                  0x60, 0),
                        CONCAT48((int) ((ulonglong) uVar39 >> 0x20),
                                 CONCAT44(SUB164(CONCAT214(SUB162(auVar33 >> 0x70, 0) - sVar36,
                                                           CONCAT212(SUB162(auVar33 >> 0x60, 0) -
                                                                     sVar35, auVar31)) >> 0x60, 0),
                                          (int) ((ulonglong) uVar30 >> 0x20))));
    auVar14 = CONCAT412(SUB124(auVar40 >> 0x40, 0),
                        CONCAT48(uVar37, (ulonglong) uVar29 & 0xffffffff |
                                         (ulonglong) SUB124(auVar31 >> 0x40, 0) << 0x20));
    auVar33 = param_1[2];
    auVar14 = pshuflw(auVar14, auVar14, 0xd8);
    auVar32 = pshufhw(in_XMM5, auVar14, 0xd8);
    auVar14 = pshuflw(auVar14, auVar13, 0x88);
    auVar14 = pshufhw(auVar13, auVar14, 0x88);
    auVar88 = pmaddwd(auVar32, auVar14);
    auVar14 = psllw(ZEXT1516(CONCAT114(SUB161(auVar33 >> 0x78, 0),
                                       ZEXT1314(CONCAT112(SUB161(auVar33 >> 0x70, 0),
                                                          ZEXT1112(CONCAT110(SUB161(auVar33 >> 0x68, 0), (unkuint10)
                                                                  CONCAT18(SUB161(auVar33
                                                                                          >> 0x60, 0),
                                                                           CONCAT17(uVar125,
                                                                                    CONCAT16(SUB161(auVar33 >> 0x58, 0
                                                                                    ), CONCAT15(uVar124, CONCAT14(
                                                                                            SUB161(auVar33 >> 0x50, 0),
                                                                                            CONCAT13(uVar123, CONCAT12(
                                                                                                    SUB161(auVar33
                                                                                                                   >> 0x48,
                                                                                                           0),
                                                                                                    CONCAT11(uVar122,
                                                                                                             SUB161(auVar33
                                                                                                                            >> 0x40,
                                                                                                                    0)))))
                                                                                    )))))))))), 2);
    auVar33 = psllw(CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(CONCAT115(ZEXT1011(SUB1610(CONCAT97((
                                                                                                             unkuint9) SUB157(
                                                                                                                     CONCAT69(SUB156(CONCAT510(SUB155(
                                                                                                                                                       CONCAT411(SUB154(CONCAT312(SUB153(CONCAT213(SUB152
                                                                                                                                                                                                           (CONCAT114(SUB161(auVar33 >> 0x38, 0),
                                                                                                                                                                                                                      ZEXT1314(
                                                                                                                                                                                                                              SUB1613(auVar33, 0)))
                                                                                                                                                                                                                    >> 0x68, 0
                                                                                                                                                                                                           ), CONCAT112(SUB161(auVar33 >> 0x30, 0),
                                                                                                                                                                                                                        SUB1612(auVar33, 0)))
                                                                                                                                                                                                 >> 0x60, 0),
                                                                                                                                                                                  ZEXT1112(SUB1611(auVar33, 0))) >> 0x58, 0),
                                                                                                                                                                 CONCAT110(SUB161(auVar33 >> 0x28, 0),
                                                                                                                                                                           SUB1610(auVar33, 0))) >> 0x50, 0),
                                                                                                                                               (unkuint10) SUB169(auVar33, 0)) >> 0x48, 0),
                                                                                                                              CONCAT18(SUB161(auVar33 >> 0x20, 0),
                                                                                                                                       SUB168(auVar33, 0))) >> 0x40, 0) << 8,
                                                                                                     (SUB167(auVar33, 0)
                                                                                                             >> 0x18)
                                                                                                             << 0x30)
                                                                                                    >> 0x30, 0))
                                                                                   << 8,
                                                                           (SUB165(auVar33, 0) >> 0x10) << 0x20)
                                                                         >> 0x20,
                                                                 0)) << 8, (SUB163(auVar33, 0) >> 8) << 0x10) >> 0x10,
                                      0), SUB162(auVar33, 0)) & (undefined[16]) 0xffffffffffff00ff, 2);
    uVar37 = CONCAT22(SUB162(auVar14 >> 0x10, 0) - sVar34, SUB162(auVar14, 0) - sVar28);
    uVar39 = CONCAT26(SUB162(auVar14 >> 0x30, 0) - sVar36,
                      CONCAT24(SUB162(auVar14 >> 0x20, 0) - sVar35, uVar37));
    auVar40 = CONCAT210(SUB162(auVar14 >> 0x50, 0) - sVar34,
                        CONCAT28(SUB162(auVar14 >> 0x40, 0) - sVar28, uVar39));
    auVar32 = CONCAT214(SUB162(auVar14 >> 0x70, 0) - sVar36,
                        CONCAT212(SUB162(auVar14 >> 0x60, 0) - sVar35, auVar40));
    uVar29 = CONCAT24(SUB162(auVar33 >> 0x20, 0) - sVar35,
                      CONCAT22(SUB162(auVar33 >> 0x10, 0) - sVar34, SUB162(auVar33, 0) - sVar28));
    uVar30 = CONCAT26(SUB162(auVar33 >> 0x30, 0) - sVar36, uVar29);
    auVar31 = CONCAT210(SUB162(auVar33 >> 0x50, 0) - sVar34,
                        CONCAT28(SUB162(auVar33 >> 0x40, 0) - sVar28, uVar30));
    auVar13 = CONCAT412(SUB164(auVar32 >> 0x60, 0),
                        CONCAT48((int) ((ulonglong) uVar39 >> 0x20),
                                 CONCAT44(SUB164(CONCAT214(SUB162(auVar33 >> 0x70, 0) - sVar36,
                                                           CONCAT212(SUB162(auVar33 >> 0x60, 0) -
                                                                     sVar35, auVar31)) >> 0x60, 0),
                                          (int) ((ulonglong) uVar30 >> 0x20))));
    auVar33 = CONCAT412(SUB124(auVar40 >> 0x40, 0),
                        CONCAT48(uVar37, (ulonglong) uVar29 & 0xffffffff |
                                         (ulonglong) SUB124(auVar31 >> 0x40, 0) << 0x20));
    auVar14 = pshuflw(auVar33, auVar33, 0xd8);
    auVar87 = pshufhw(auVar87, auVar14, 0xd8);
    auVar33 = param_1[3];
    auVar14 = pshuflw(auVar14, auVar13, 0x88);
    auVar14 = pshufhw(auVar13, auVar14, 0x88);
    auVar87 = pmaddwd(auVar87, auVar14);
    auVar14 = psllw(ZEXT1516(CONCAT114(SUB161(auVar33 >> 0x78, 0),
                                       ZEXT1314(CONCAT112(SUB161(auVar33 >> 0x70, 0),
                                                          ZEXT1112(CONCAT110(SUB161(auVar33 >> 0x68, 0), (unkuint10)
                                                                  CONCAT18(SUB161(auVar33
                                                                                          >> 0x60, 0),
                                                                           CONCAT17(uVar125,
                                                                                    CONCAT16(SUB161(auVar33 >> 0x58, 0
                                                                                    ), CONCAT15(uVar124, CONCAT14(
                                                                                            SUB161(auVar33 >> 0x50, 0),
                                                                                            CONCAT13(uVar123, CONCAT12(
                                                                                                    SUB161(auVar33
                                                                                                                   >> 0x48,
                                                                                                           0),
                                                                                                    CONCAT11(uVar122,
                                                                                                             SUB161(auVar33
                                                                                                                            >> 0x40,
                                                                                                                    0)))))
                                                                                    )))))))))), 2);
    uVar37 = CONCAT22(SUB162(auVar14 >> 0x10, 0) - sVar34, SUB162(auVar14, 0) - sVar28);
    uVar39 = CONCAT26(SUB162(auVar14 >> 0x30, 0) - sVar36,
                      CONCAT24(SUB162(auVar14 >> 0x20, 0) - sVar35, uVar37));
    auVar40 = CONCAT210(SUB162(auVar14 >> 0x50, 0) - sVar34,
                        CONCAT28(SUB162(auVar14 >> 0x40, 0) - sVar28, uVar39));
    auVar33 = psllw(CONCAT142(SUB1614(CONCAT133(ZEXT1213(SUB1612(CONCAT115(ZEXT1011(SUB1610(CONCAT97((
                                                                                                             unkuint9) SUB157(
                                                                                                                     CONCAT69(SUB156(CONCAT510(SUB155(
                                                                                                                                                       CONCAT411(SUB154(CONCAT312(SUB153(CONCAT213(SUB152
                                                                                                                                                                                                           (CONCAT114(SUB161(auVar33 >> 0x38, 0),
                                                                                                                                                                                                                      ZEXT1314(
                                                                                                                                                                                                                              SUB1613(auVar33, 0)))
                                                                                                                                                                                                                    >> 0x68, 0
                                                                                                                                                                                                           ), CONCAT112(SUB161(auVar33 >> 0x30, 0),
                                                                                                                                                                                                                        SUB1612(auVar33, 0)))
                                                                                                                                                                                                 >> 0x60, 0),
                                                                                                                                                                                  ZEXT1112(SUB1611(auVar33, 0))) >> 0x58, 0),
                                                                                                                                                                 CONCAT110(SUB161(auVar33 >> 0x28, 0),
                                                                                                                                                                           SUB1610(auVar33, 0))) >> 0x50, 0),
                                                                                                                                               (unkuint10) SUB169(auVar33, 0)) >> 0x48, 0),
                                                                                                                              CONCAT18(SUB161(auVar33 >> 0x20, 0),
                                                                                                                                       SUB168(auVar33, 0))) >> 0x40, 0) << 8,
                                                                                                     (SUB167(auVar33, 0)
                                                                                                             >> 0x18)
                                                                                                             << 0x30)
                                                                                                    >> 0x30, 0))
                                                                                   << 8,
                                                                           (SUB165(auVar33, 0) >> 0x10) << 0x20)
                                                                         >> 0x20,
                                                                 0)) << 8, (SUB163(auVar33, 0) >> 8) << 0x10) >> 0x10,
                                      0), SUB162(auVar33, 0)) & (undefined[16]) 0xffffffffffff00ff, 2);
    uVar29 = CONCAT24(SUB162(auVar33 >> 0x20, 0) - sVar35,
                      CONCAT22(SUB162(auVar33 >> 0x10, 0) - sVar34, SUB162(auVar33, 0) - sVar28));
    uVar30 = CONCAT26(SUB162(auVar33 >> 0x30, 0) - sVar36, uVar29);
    auVar31 = CONCAT210(SUB162(auVar33 >> 0x50, 0) - sVar34,
                        CONCAT28(SUB162(auVar33 >> 0x40, 0) - sVar28, uVar30));
    auVar14 = CONCAT412(SUB164(CONCAT214(SUB162(auVar14 >> 0x70, 0) - sVar36,
                                         CONCAT212(SUB162(auVar14 >> 0x60, 0) - sVar35, auVar40)) >>
                                                                                                  0x60, 0),
                        CONCAT48((int) ((ulonglong) uVar39 >> 0x20),
                                 CONCAT44(SUB164(CONCAT214(SUB162(auVar33 >> 0x70, 0) - sVar36,
                                                           CONCAT212(SUB162(auVar33 >> 0x60, 0) -
                                                                     sVar35, auVar31)) >> 0x60, 0),
                                          (int) ((ulonglong) uVar30 >> 0x20))));
    auVar33 = CONCAT412(SUB124(auVar40 >> 0x40, 0),
                        CONCAT48(uVar37, (ulonglong) uVar29 & 0xffffffff |
                                         (ulonglong) SUB124(auVar31 >> 0x40, 0) << 0x20));
    auVar33 = pshuflw(auVar33, auVar33, 0xd8);
    auVar13 = pshufhw(auVar32, auVar33, 0xd8);
    auVar33 = pshuflw(auVar33, auVar14, 0x88);
    auVar14 = pshufhw(auVar14, auVar33, 0x88);
    auVar33 = auVar89 & (undefined[16]) 0xffffffff;
    auVar14 = pmaddwd(auVar13, auVar14);
    iVar38 = SUB164(auVar14, 0) + SUB164(auVar33, 0) + SUB164(auVar88, 0) + SUB164(auVar87, 0);
    iVar41 = SUB164(auVar14 >> 0x20, 0) +
             SUB164(auVar89 >> 0x20, 0) + SUB164(auVar88 >> 0x20, 0) + SUB164(auVar87 >> 0x20, 0);
    iVar42 = SUB164(auVar14 >> 0x40, 0) +
             SUB164(auVar33 >> 0x40, 0) + SUB164(auVar89 >> 0x40, 0) + SUB164(auVar88 >> 0x40, 0) +
             SUB164(auVar87 >> 0x40, 0);
    iVar43 = SUB164(auVar14 >> 0x60, 0) +
             SUB164(auVar33 >> 0x60, 0) + SUB164(auVar89 >> 0x60, 0) + SUB164(auVar88 >> 0x60, 0) +
             SUB164(auVar87 >> 0x60, 0);
    auVar13 = _DAT_140c58b20 & auVar90;
    auVar33 = ZEXT416(-(uint)(iVar42 + iVar38 < 0)) & (undefined[16]) 0xffffffffffffffff;
    auVar33 = CONCAT412(-(uint)(iVar41 + iVar43 < SUB164(auVar33 >> 0x60, 0)),
                        CONCAT48(-(uint)(iVar38 + iVar42 < SUB164(auVar33 >> 0x40, 0)),
                                 CONCAT44(-(uint)(iVar43 + iVar41 < 0), SUB164(auVar33, 0))));
    auVar87 = packssdw(auVar33, auVar33);
    auVar14 = _DAT_140c58b20 & auVar99;
    auVar33 = ~_DAT_140c58b20;
    auVar32 = ~auVar87 & auVar13 | auVar14 & auVar87 | ~_DAT_140c58b20 & auVar90;
    sVar15 = SUB162(auVar32, 0);
    sVar17 = SUB162(auVar32 >> 0x10, 0);
    sVar19 = SUB162(auVar32 >> 0x20, 0);
    sVar21 = SUB162(auVar32 >> 0x30, 0);
    *param_2 = CONCAT13((0 < sVar21) * (sVar21 < 0xff) * SUB161(auVar32 >> 0x30, 0) - (0xff < sVar21),
                        CONCAT12((0 < sVar19) * (sVar19 < 0xff) * SUB161(auVar32 >> 0x20, 0) -
                                 (0xff < sVar19),
                                 CONCAT11((0 < sVar17) * (sVar17 < 0xff) * SUB161(auVar32 >> 0x10, 0) -
                                          (0xff < sVar17),
                                          (0 < sVar15) * (sVar15 < 0xff) * SUB161(auVar32, 0) -
                                          (0xff < sVar15))));
    auVar33 = ~auVar87 & auVar14 | auVar13 & auVar87 | auVar33 & auVar99;
    sVar15 = SUB162(auVar33, 0);
    sVar17 = SUB162(auVar33 >> 0x10, 0);
    sVar19 = SUB162(auVar33 >> 0x20, 0);
    sVar21 = SUB162(auVar33 >> 0x30, 0);
    *param_3 = CONCAT13((0 < sVar21) * (sVar21 < 0xff) * SUB161(auVar33 >> 0x30, 0) - (0xff < sVar21),
                        CONCAT12((0 < sVar19) * (sVar19 < 0xff) * SUB161(auVar33 >> 0x20, 0) -
                                 (0xff < sVar19),
                                 CONCAT11((0 < sVar17) * (sVar17 < 0xff) * SUB161(auVar33 >> 0x10, 0) -
                                          (0xff < sVar17),
                                          (0 < sVar15) * (sVar15 < 0xff) * SUB161(auVar33, 0) -
                                          (0xff < sVar15))));
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402c74e0(longlong param_1, uint **param_2, uint *param_3, uint *param_4) {
    uint *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ushort uVar4;
    ushort uVar10;
    undefined4 uVar5;
    undefined4 uVar6;
    ushort uVar11;
    ushort uVar12;
    short sVar13;
    short sVar14;
    short sVar15;
    undefined auVar7[15];
    undefined auVar8[16];
    undefined auVar9[16];
    short sVar16;
    undefined8 uVar17;
    undefined auVar19[15];
    int iVar20;
    undefined4 uVar21;
    short sVar24;
    short sVar25;
    short sVar26;
    short sVar27;
    undefined in_XMM2[16];
    undefined auVar22[16];
    undefined auVar23[16];
    ushort uVar28;
    ushort uVar31;
    undefined4 uVar29;
    ushort uVar32;
    ushort uVar33;
    short sVar34;
    short sVar35;
    short sVar36;
    undefined in_XMM3[16];
    undefined auVar30[16];
    short sVar37;
    short sVar39;
    undefined auVar38[16];
    short sVar40;
    short sVar41;
    short sVar43;
    short sVar44;
    short sVar45;
    short sVar46;
    short sVar47;
    short sVar48;
    undefined auVar42[16];
    short sVar49;
    short sVar50;
    short sVar53;
    short sVar54;
    short sVar55;
    short sVar56;
    short sVar57;
    short sVar58;
    undefined auVar51[16];
    undefined auVar52[16];
    short sVar59;
    undefined auVar60[16];
    undefined4 uVar61;
    undefined4 uVar62;
    undefined4 uVar63;
    undefined4 uVar64;
    undefined auVar18[12];

    auVar7 = ZEXT415(*param_4) & SUB1615(_DAT_140c38570, 0);
    auVar19 = ZEXT415(*param_3) & SUB1615(_DAT_140c38570, 0);
    auVar60 = ZEXT416(0);
    auVar9 = ZEXT1516(CONCAT132(SUB1513(CONCAT123(ZEXT1112(SUB1511(CONCAT105((unkuint10)
                                                                                     SUB159(CONCAT87((
                                                                                                             ulonglong)
                                                                                                             SUB157(CONCAT69(
                                                                                                                            SUB156(CONCAT510(
                                                                                                                                           SUB155(CONCAT411(
                                                                                                                                                          SUB154(CONCAT312(
                                                                                                                                                                         SUB153(CONCAT213(
                                                                                                                                                                                        SUB152(auVar7
                                                                                                                                                                                                       >>
                                                                                                                                                                                                       0x68,
                                                                                                                                                                                               0),
                                                                                                                                                                                        ZEXT1213(
                                                                                                                                                                                                SUB1512
                                                                                                                                                                                                        (auVar7,
                                                                                                                                                                                                         0)))
                                                                                                                                                                                        >> 0x60,
                                                                                                                                                                                0),
                                                                                                                                                                         ZEXT1112(
                                                                                                                                                                                 SUB1511(auVar7,
                                                                                                                                                                                         0)))
                                                                                                                                                                         >> 0x58,
                                                                                                                                                                 0),
                                                                                                                                                          ZEXT1011(
                                                                                                                                                                  SUB1510(auVar7,
                                                                                                                                                                          0)))
                                                                                                                                                          >> 0x50,
                                                                                                                                                  0),
                                                                                                                                           (unkuint10) SUB159(
                                                                                                                                                   auVar7,
                                                                                                                                                   0))
                                                                                                                                           >> 0x48,
                                                                                                                                   0),
                                                                                                                            (unkuint9) 0
                                                                                                                                    << 0x40)
                                                                                                                            >> 0x40,
                                                                                                                    0)
                                                                                                             << 8,
                                                                                                     (SUB157(auVar7, 0)
                                                                                                             >> 0x18)
                                                                                                             << 0x30)
                                                                                                    >> 0x30, 0) <<
                                                                                                                8,
                                                                             (SUB155(auVar7, 0) >> 0x10) << 0x20)
                                                                           >> 0x20, 0))
                                                          << 8, (SUB153(auVar7, 0) >> 8) << 0x10) >> 0x10, 0),
                                SUB152(auVar7, 0))) & (undefined[16]) 0xffffffffffff00ff;
    auVar23 = ZEXT1516(CONCAT132(SUB1513(CONCAT123(ZEXT1112(SUB1511(CONCAT105((unkuint10)
                                                                                      SUB159(CONCAT87((
                                                                                                              ulonglong)
                                                                                                              SUB157(CONCAT69(
                                                                                                                             SUB156(CONCAT510(
                                                                                                                                            SUB155(CONCAT411(
                                                                                                                                                           SUB154(CONCAT312(
                                                                                                                                                                          SUB153(CONCAT213(
                                                                                                                                                                                         SUB152(auVar19
                                                                                                                                                                                                        >> 0x68,
                                                                                                                                                                                                0),
                                                                                                                                                                                         ZEXT1213(
                                                                                                                                                                                                 SUB1512(auVar19,
                                                                                                                                                                                                         0)))
                                                                                                                                                                                         >> 0x60,
                                                                                                                                                                                 0
                                                                                                                                                                          ),
                                                                                                                                                                          ZEXT1112(
                                                                                                                                                                                  SUB1511(auVar19,
                                                                                                                                                                                          0)))
                                                                                                                                                                          >> 0x58,
                                                                                                                                                                  0),
                                                                                                                                                           ZEXT1011(
                                                                                                                                                                   SUB1510(auVar19,
                                                                                                                                                                           0)))
                                                                                                                                                           >> 0x50,
                                                                                                                                                   0),
                                                                                                                                            (unkuint10) SUB159(
                                                                                                                                                    auVar19,
                                                                                                                                                    0))
                                                                                                                                            >> 0x48,
                                                                                                                                    0),
                                                                                                                             (unkuint9) 0
                                                                                                                                     << 0x40)
                                                                                                                             >> 0x40,
                                                                                                                     0)
                                                                                                              << 8,
                                                                                                      (SUB157(auVar19,
                                                                                                              0)
                                                                                                              >> 0x18)
                                                                                                              << 0x30)
                                                                                                     >> 0x30, 0) <<
                                                                                                                 8,
                                                                              (SUB155(auVar19, 0) >> 0x10) << 0x20)
                                                                            >> 0x20, 0))
                                                           << 8, (SUB153(auVar19, 0) >> 8) << 0x10) >> 0x10, 0),
                                 SUB152(auVar19, 0))) & (undefined[16]) 0xffffffffffff00ff;
    auVar30 = pshuflw(in_XMM3, auVar9, 0xec);
    auVar22 = pshuflw(in_XMM2, auVar23, 0xec);
    lVar2 = 2;
    auVar8 = pshuflw(auVar9, auVar9, 0xf7);
    auVar8 = CONCAT214(SUB162(auVar8 >> 0x76, 0),
                       CONCAT212(SUB162(auVar8 >> 0x60, 0) >> 6,
                                 CONCAT210(SUB162(auVar8 >> 0x50, 0) >> 6,
                                           CONCAT28(SUB162(auVar8 >> 0x40, 0) >> 6,
                                                    CONCAT26(SUB162(auVar8 >> 0x30, 0) >> 6,
                                                             CONCAT24(SUB162(auVar8 >> 0x20, 0) >> 6,
                                                                      CONCAT22(SUB162(auVar8 >> 0x10, 0
                                                                               ) >> 6,
                                                                               SUB162(auVar8, 0) >> 6))
                                                    )))));
    auVar30 = CONCAT214(SUB162(auVar30 >> 0x75, 0),
                        CONCAT212(SUB162(auVar30 >> 0x60, 0) >> 5,
                                  CONCAT210(SUB162(auVar30 >> 0x50, 0) >> 5,
                                            CONCAT28(SUB162(auVar30 >> 0x40, 0) >> 5,
                                                     CONCAT26(SUB162(auVar30 >> 0x30, 0) >> 5,
                                                              CONCAT24(SUB162(auVar30 >> 0x20, 0) >> 5,
                                                                       CONCAT22(SUB162(auVar30 >> 0x10, 0) >> 5,
                                                                                SUB162(auVar30, 0) >> 5
                                                                       ))))))) | auVar9 |
              auVar8;
    auVar9 = pshuflw(auVar8, auVar23, 0xf7);
    auVar23 = CONCAT214(SUB162(auVar22 >> 0x75, 0),
                        CONCAT212(SUB162(auVar22 >> 0x60, 0) >> 5,
                                  CONCAT210(SUB162(auVar22 >> 0x50, 0) >> 5,
                                            CONCAT28(SUB162(auVar22 >> 0x40, 0) >> 5,
                                                     CONCAT26(SUB162(auVar22 >> 0x30, 0) >> 5,
                                                              CONCAT24(SUB162(auVar22 >> 0x20, 0) >> 5,
                                                                       CONCAT22(SUB162(auVar22 >> 0x10, 0) >> 5,
                                                                                SUB162(auVar22, 0) >> 5
                                                                       ))))))) | auVar23 |
              CONCAT214(SUB162(auVar9 >> 0x76, 0),
                        CONCAT212(SUB162(auVar9 >> 0x60, 0) >> 6,
                                  CONCAT210(SUB162(auVar9 >> 0x50, 0) >> 6,
                                            CONCAT28(SUB162(auVar9 >> 0x40, 0) >> 6,
                                                     CONCAT26(SUB162(auVar9 >> 0x30, 0) >> 6,
                                                              CONCAT24(SUB162(auVar9 >> 0x20, 0) >> 6,
                                                                       CONCAT22(SUB162(auVar9 >> 0x10,
                                                                                       0) >> 6,
                                                                                SUB162(auVar9, 0) >> 6)
                                                              ))))));
    uVar4 = SUB162(auVar23, 0);
    uVar10 = SUB162(auVar23 >> 0x10, 0);
    uVar11 = SUB162(auVar23 >> 0x20, 0);
    uVar12 = SUB162(auVar23 >> 0x30, 0);
    sVar13 = SUB162(auVar23 >> 0x40, 0);
    sVar14 = SUB162(auVar23 >> 0x50, 0);
    sVar15 = SUB162(auVar23 >> 0x60, 0);
    sVar16 = SUB162(auVar23 >> 0x70, 0);
    uVar28 = SUB162(auVar30, 0);
    uVar31 = SUB162(auVar30 >> 0x10, 0);
    uVar32 = SUB162(auVar30 >> 0x20, 0);
    uVar33 = SUB162(auVar30 >> 0x30, 0);
    sVar34 = SUB162(auVar30 >> 0x40, 0);
    sVar35 = SUB162(auVar30 >> 0x50, 0);
    sVar36 = SUB162(auVar30 >> 0x60, 0);
    sVar37 = SUB162(auVar30 >> 0x70, 0);
    auVar9 = pmulhw(CONCAT214(sVar16 * 2 + sVar37,
                              CONCAT212(sVar15 * 2 + sVar36,
                                        CONCAT210(sVar14 * 2 + sVar35,
                                                  CONCAT28(sVar13 * 2 + sVar34,
                                                           CONCAT26(uVar12 * 2 + uVar33,
                                                                    CONCAT24(uVar11 * 2 + uVar32,
                                                                             CONCAT22(uVar10 * 2 +
                                                                                      uVar31, uVar4 * 2
                                                                                              + uVar28)
                                                                    )))))), _DAT_140c38600);
    sVar24 = SUB162(auVar9, 0);
    sVar25 = SUB162(auVar9 >> 0x10, 0);
    sVar26 = SUB162(auVar9 >> 0x20, 0);
    sVar27 = SUB162(auVar9 >> 0x30, 0);
    uVar5 = CONCAT13((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar9 >> 0x30, 0) - (0xff < sVar27),
                     CONCAT12((0 < sVar26) * (sVar26 < 0xff) * SUB161(auVar9 >> 0x20, 0) -
                              (0xff < sVar26),
                              CONCAT11((0 < sVar25) * (sVar25 < 0xff) * SUB161(auVar9 >> 0x10, 0) -
                                       (0xff < sVar25),
                                       (0 < sVar24) * (sVar24 < 0xff) * SUB161(auVar9, 0) -
                                       (0xff < sVar24))));
    sVar24 = SUB162(auVar9 >> 0x40, 0);
    sVar25 = SUB162(auVar9 >> 0x50, 0);
    sVar26 = SUB162(auVar9 >> 0x60, 0);
    sVar27 = SUB162(auVar9 >> 0x70, 0);
    uVar61 = SUB154(ZEXT815(CONCAT17((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar9 >> 0x70, 0) -
                                     (0xff < sVar27),
                                     CONCAT16((0 < sVar26) * (sVar26 < 0xff) *
                                              SUB161(auVar9 >> 0x60, 0) - (0xff < sVar26),
                                              CONCAT15((0 < sVar25) * (sVar25 < 0xff) *
                                                       SUB161(auVar9 >> 0x50, 0) - (0xff < sVar25),
                                                       CONCAT14((0 < sVar24) * (sVar24 < 0xff) *
                                                                SUB161(auVar9 >> 0x40, 0) -
                                                                (0xff < sVar24), uVar5))))) >> 0x20, 0);
    uVar29 = CONCAT13((uVar33 != 0) * (uVar33 < 0xff) * SUB161(auVar30 >> 0x30, 0) - (0xff < uVar33),
                      CONCAT12((uVar32 != 0) * (uVar32 < 0xff) * SUB161(auVar30 >> 0x20, 0) -
                               (0xff < uVar32),
                               CONCAT11((uVar31 != 0) * (uVar31 < 0xff) * SUB161(auVar30 >> 0x10, 0) -
                                        (0xff < uVar31),
                                        (uVar28 != 0) * (uVar28 < 0xff) * SUB161(auVar30, 0) -
                                        (0xff < uVar28))));
    uVar21 = CONCAT13((uVar12 != 0) * (uVar12 < 0xff) * SUB161(auVar23 >> 0x30, 0) - (0xff < uVar12),
                      CONCAT12((uVar11 != 0) * (uVar11 < 0xff) * SUB161(auVar23 >> 0x20, 0) -
                               (0xff < uVar11),
                               CONCAT11((uVar10 != 0) * (uVar10 < 0xff) * SUB161(auVar23 >> 0x10, 0) -
                                        (0xff < uVar10),
                                        (uVar4 != 0) * (uVar4 < 0xff) * SUB161(auVar23, 0) -
                                        (0xff < uVar4))));
    uVar64 = SUB154(ZEXT815(CONCAT17((0 < sVar37) * (sVar37 < 0xff) * SUB161(auVar30 >> 0x70, 0) -
                                     (0xff < sVar37),
                                     CONCAT16((0 < sVar36) * (sVar36 < 0xff) *
                                              SUB161(auVar30 >> 0x60, 0) - (0xff < sVar36),
                                              CONCAT15((0 < sVar35) * (sVar35 < 0xff) *
                                                       SUB161(auVar30 >> 0x50, 0) - (0xff < sVar35),
                                                       CONCAT14((0 < sVar34) * (sVar34 < 0xff) *
                                                                SUB161(auVar30 >> 0x40, 0) -
                                                                (0xff < sVar34), uVar29))))) >> 0x20, 0);
    auVar9 = pmulhw(CONCAT214(sVar37 * 2 + sVar16,
                              CONCAT212(sVar36 * 2 + sVar15,
                                        CONCAT210(sVar35 * 2 + sVar14,
                                                  CONCAT28(sVar34 * 2 + sVar13,
                                                           CONCAT26(uVar33 * 2 + uVar12,
                                                                    CONCAT24(uVar32 * 2 + uVar11,
                                                                             CONCAT22(uVar31 * 2 +
                                                                                      uVar10, uVar28 *
                                                                                              2 + uVar4))))))),
                    _DAT_140c38600);
    sVar24 = SUB162(auVar9, 0);
    sVar25 = SUB162(auVar9 >> 0x10, 0);
    sVar26 = SUB162(auVar9 >> 0x20, 0);
    sVar27 = SUB162(auVar9 >> 0x30, 0);
    uVar6 = CONCAT13((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar9 >> 0x30, 0) - (0xff < sVar27),
                     CONCAT12((0 < sVar26) * (sVar26 < 0xff) * SUB161(auVar9 >> 0x20, 0) -
                              (0xff < sVar26),
                              CONCAT11((0 < sVar25) * (sVar25 < 0xff) * SUB161(auVar9 >> 0x10, 0) -
                                       (0xff < sVar25),
                                       (0 < sVar24) * (sVar24 < 0xff) * SUB161(auVar9, 0) -
                                       (0xff < sVar24))));
    sVar24 = SUB162(auVar9 >> 0x40, 0);
    sVar25 = SUB162(auVar9 >> 0x50, 0);
    sVar26 = SUB162(auVar9 >> 0x60, 0);
    sVar27 = SUB162(auVar9 >> 0x70, 0);
    uVar63 = SUB154(ZEXT815(CONCAT17((0 < sVar16) * (sVar16 < 0xff) * SUB161(auVar23 >> 0x70, 0) -
                                     (0xff < sVar16),
                                     CONCAT16((0 < sVar15) * (sVar15 < 0xff) *
                                              SUB161(auVar23 >> 0x60, 0) - (0xff < sVar15),
                                              CONCAT15((0 < sVar14) * (sVar14 < 0xff) *
                                                       SUB161(auVar23 >> 0x50, 0) - (0xff < sVar14),
                                                       CONCAT14((0 < sVar13) * (sVar13 < 0xff) *
                                                                SUB161(auVar23 >> 0x40, 0) -
                                                                (0xff < sVar13), uVar21))))) >> 0x20, 0);
    uVar62 = SUB154(ZEXT815(CONCAT17((0 < sVar27) * (sVar27 < 0xff) * SUB161(auVar9 >> 0x70, 0) -
                                     (0xff < sVar27),
                                     CONCAT16((0 < sVar26) * (sVar26 < 0xff) *
                                              SUB161(auVar9 >> 0x60, 0) - (0xff < sVar26),
                                              CONCAT15((0 < sVar25) * (sVar25 < 0xff) *
                                                       SUB161(auVar9 >> 0x50, 0) - (0xff < sVar25),
                                                       CONCAT14((0 < sVar24) * (sVar24 < 0xff) *
                                                                SUB161(auVar9 >> 0x40, 0) -
                                                                (0xff < sVar24), uVar6))))) >> 0x20, 0);
    puVar3 = (undefined8 * )(param_1 + 0x30);
    do {
        auVar38 = ZEXT1216(CONCAT48((int) ((ulonglong) puVar3[-2] >> 0x20), puVar3[-2]) &
                           (undefined[12]) 0xffffffffffffffff);
        auVar23 = ZEXT1216(CONCAT48((int) ((ulonglong) puVar3[-1] >> 0x20), puVar3[-1]) &
                           (undefined[12]) 0xffffffffffffffff);
        auVar30 = psadbw(auVar38, CONCAT412(uVar62, CONCAT48(uVar6, CONCAT44(uVar62, uVar6))));
        auVar8 = psadbw(auVar38, CONCAT412(uVar63, CONCAT48(uVar21, CONCAT44(uVar63, uVar21))));
        auVar9 = psadbw(auVar23, CONCAT412(uVar64, CONCAT48(uVar29, CONCAT44(uVar64, uVar29))));
        auVar22 = psadbw(auVar38, CONCAT412(uVar64, CONCAT48(uVar29, CONCAT44(uVar64, uVar29))));
        auVar51 = psadbw(auVar38, CONCAT412(uVar61, CONCAT48(uVar5, CONCAT44(uVar61, uVar5))));
        auVar38 = packssdw(auVar22, auVar9);
        auVar9 = psadbw(auVar23, CONCAT412(uVar63, CONCAT48(uVar21, CONCAT44(uVar63, uVar21))));
        auVar22 = packssdw(auVar8, auVar9);
        auVar8 = psadbw(auVar23, CONCAT412(uVar61, CONCAT48(uVar5, CONCAT44(uVar61, uVar5))));
        auVar9 = psadbw(auVar23, CONCAT412(uVar62, CONCAT48(uVar6, CONCAT44(uVar62, uVar6))));
        auVar42 = packssdw(auVar30, auVar9);
        auVar52 = packssdw(auVar51, auVar8);
        auVar30 = ZEXT1216(CONCAT48((int) ((ulonglong) * puVar3 >> 0x20), *puVar3) &
                           (undefined[12]) 0xffffffffffffffff);
        auVar8 = ZEXT1216(CONCAT48((int) ((ulonglong) puVar3[1] >> 0x20), puVar3[1]) &
                          (undefined[12]) 0xffffffffffffffff);
        auVar23 = psadbw(auVar30, CONCAT412(uVar64, CONCAT48(uVar29, CONCAT44(uVar64, uVar29))));
        auVar9 = psadbw(auVar8, CONCAT412(uVar64, CONCAT48(uVar29, CONCAT44(uVar64, uVar29))));
        auVar9 = packssdw(auVar23, auVar9);
        auVar51 = packssdw(auVar38, auVar9);
        auVar23 = psadbw(auVar30, CONCAT412(uVar63, CONCAT48(uVar21, CONCAT44(uVar63, uVar21))));
        auVar9 = psadbw(auVar8, CONCAT412(uVar63, CONCAT48(uVar21, CONCAT44(uVar63, uVar21))));
        auVar9 = packssdw(auVar23, auVar9);
        auVar38 = packssdw(auVar22, auVar9);
        auVar22 = psadbw(auVar8, CONCAT412(uVar61, CONCAT48(uVar5, CONCAT44(uVar61, uVar5))));
        auVar23 = psadbw(auVar30, CONCAT412(uVar62, CONCAT48(uVar6, CONCAT44(uVar62, uVar6))));
        auVar9 = psadbw(auVar8, CONCAT412(uVar62, CONCAT48(uVar6, CONCAT44(uVar62, uVar6))));
        auVar9 = packssdw(auVar23, auVar9);
        auVar23 = psadbw(auVar30, CONCAT412(uVar61, CONCAT48(uVar5, CONCAT44(uVar61, uVar5))));
        auVar23 = packssdw(auVar23, auVar22);
        auVar9 = packssdw(auVar42, auVar9);
        sVar41 = SUB162(auVar9, 0);
        sVar24 = SUB162(auVar38 >> 0x10, 0);
        sVar43 = SUB162(auVar9 >> 0x10, 0);
        sVar25 = SUB162(auVar38 >> 0x20, 0);
        sVar44 = SUB162(auVar9 >> 0x20, 0);
        sVar26 = SUB162(auVar38 >> 0x30, 0);
        sVar45 = SUB162(auVar9 >> 0x30, 0);
        sVar27 = SUB162(auVar38 >> 0x40, 0);
        sVar46 = SUB162(auVar9 >> 0x40, 0);
        sVar13 = SUB162(auVar38 >> 0x50, 0);
        sVar47 = SUB162(auVar9 >> 0x50, 0);
        sVar14 = SUB162(auVar38 >> 0x60, 0);
        sVar48 = SUB162(auVar9 >> 0x60, 0);
        sVar15 = SUB162(auVar38 >> 0x70, 0);
        sVar49 = SUB162(auVar9 >> 0x70, 0);
        sVar16 = SUB162(auVar51 >> 0x10, 0);
        sVar34 = SUB162(auVar51 >> 0x20, 0);
        sVar35 = SUB162(auVar51 >> 0x30, 0);
        sVar36 = SUB162(auVar51 >> 0x40, 0);
        sVar37 = SUB162(auVar51 >> 0x50, 0);
        sVar39 = SUB162(auVar51 >> 0x60, 0);
        sVar40 = SUB162(auVar51 >> 0x70, 0);
        auVar9 = packssdw(auVar52, auVar23);
        sVar50 = SUB162(auVar9, 0);
        sVar53 = SUB162(auVar9 >> 0x10, 0);
        sVar54 = SUB162(auVar9 >> 0x20, 0);
        sVar55 = SUB162(auVar9 >> 0x30, 0);
        sVar56 = SUB162(auVar9 >> 0x40, 0);
        sVar57 = SUB162(auVar9 >> 0x50, 0);
        sVar58 = SUB162(auVar9 >> 0x60, 0);
        sVar59 = SUB162(auVar9 >> 0x70, 0);
        auVar9 = CONCAT214(-(ushort)(sVar59 < sVar40),
                           CONCAT212(-(ushort)(sVar58 < sVar39),
                                     CONCAT210(-(ushort)(sVar57 < sVar37),
                                               CONCAT28(-(ushort)(sVar56 < sVar36),
                                                        CONCAT26(-(ushort)(sVar55 < sVar35),
                                                                 CONCAT24(-(ushort)(sVar54 < sVar34),
                                                                          CONCAT22(-(ushort)(sVar53 <
                                                                                             sVar16), -(ushort)(
                                                                                  sVar50 < SUB162(auVar51, 0)))))))
                           ));
        auVar23 = (CONCAT214(-(ushort)(sVar49 < sVar15),
                             CONCAT212(-(ushort)(sVar48 < sVar14),
                                       CONCAT210(-(ushort)(sVar47 < sVar13),
                                                 CONCAT28(-(ushort)(sVar46 < sVar27),
                                                          CONCAT26(-(ushort)(sVar45 < sVar26),
                                                                   CONCAT24(-(ushort)(sVar44 < sVar25),
                                                                            CONCAT22(-(ushort)(sVar43 <
                                                                                               sVar24), -(ushort)(
                                                                                    sVar41 < SUB162(auVar38, 0)))))))
                             )) &
                   CONCAT214(-(ushort)(sVar49 < sVar40),
                             CONCAT212(-(ushort)(sVar48 < sVar39),
                                       CONCAT210(-(ushort)(sVar47 < sVar37),
                                                 CONCAT28(-(ushort)(sVar46 < sVar36),
                                                          CONCAT26(-(ushort)(sVar45 < sVar35),
                                                                   CONCAT24(-(ushort)(sVar44 < sVar34),
                                                                            CONCAT22(-(ushort)(sVar43 <
                                                                                               sVar16), -(ushort)(
                                                                                    sVar41 < SUB162(auVar51, 0)))))))
                             )) |
                   CONCAT214(-(ushort)(sVar59 < sVar15),
                             CONCAT212(-(ushort)(sVar58 < sVar14),
                                       CONCAT210(-(ushort)(sVar57 < sVar13),
                                                 CONCAT28(-(ushort)(sVar56 < sVar27),
                                                          CONCAT26(-(ushort)(sVar55 < sVar26),
                                                                   CONCAT24(-(ushort)(sVar54 < sVar25),
                                                                            CONCAT22(-(ushort)(sVar53 <
                                                                                               sVar24), -(ushort)(
                                                                                    sVar50 < SUB162(auVar38, 0)))))))
                             )) & auVar9) & _DAT_140c38610 |
                  CONCAT214(-(ushort)(sVar59 < sVar49),
                            CONCAT212(-(ushort)(sVar58 < sVar48),
                                      CONCAT210(-(ushort)(sVar57 < sVar47),
                                                CONCAT28(-(ushort)(sVar56 < sVar46),
                                                         CONCAT26(-(ushort)(sVar55 < sVar45),
                                                                  CONCAT24(-(ushort)(sVar54 < sVar44),
                                                                           CONCAT22(-(ushort)(sVar53 <
                                                                                              sVar43),
                                                                                    -(ushort)(sVar50 < sVar41)))))))) &
                  auVar9
                  & _DAT_140c38620;
        uVar17 = SUB168(auVar23 >> 0x40, 0);
        auVar18 = CONCAT48(SUB164(auVar23, 0), uVar17);
        iVar20 = SUB164(CONCAT214(uRam0000000140c657d6, CONCAT212(SUB162(auVar23 >> 0x70, 0), auVar18)) >>
                                                                                                        0x60, 0);
        auVar9 = CONCAT610(SUB166(CONCAT412(iVar20, CONCAT210(uRam0000000140c657d4, SUB1210(auVar18, 0)))
                                          >> 0x50, 0), CONCAT28(SUB162(auVar23 >> 0x60, 0), uVar17));
        auVar60 = CONCAT412(iVar20 << 8,
                            CONCAT48(SUB164(auVar9 >> 0x40, 0) << 8,
                                     CONCAT44(SUB164(CONCAT106(CONCAT82(SUB168(auVar9 >> 0x40, 0),
                                                                        uRam0000000140c657d2),
                                                               (SUB166(auVar23 >> 0x40, 0) >> 0x10) <<
                                                                                                    0x20) >> 0x20, 0)
                                                      << 8,
                                              (SUB164(auVar23 >> 0x40, 0) & 0xffff |
                                               (uint) _DAT_140c657d0 << 0x10) << 8))) |
                  CONCAT412(SUB164(auVar60 >> 0x60, 0) << 0x10,
                            CONCAT48(SUB164(auVar60 >> 0x40, 0) << 0x10,
                                     CONCAT44(SUB164(auVar60 >> 0x20, 0) << 0x10,
                                              SUB164(auVar60, 0) << 0x10))) |
                  CONCAT124(SUB1612(CONCAT106(CONCAT82(SUB168(CONCAT610(SUB166(CONCAT412(SUB164(
                                                                                CONCAT214(uRam0000000140c657d6,
                                                                                          CONCAT212(SUB162(auVar23 >> 0x30, 0),
                                                                                                    SUB1612(auVar23, 0))) >> 0x60, 0
                                                                        ), CONCAT210(uRam0000000140c657d4,
                                                                                     SUB1610(auVar23, 0))) >> 0x50, 0),
                                                                        CONCAT28(SUB162(auVar23 >> 0x20, 0),
                                                                                 SUB168(auVar23, 0))) >> 0x40, 0),
                                                       uRam0000000140c657d2),
                                              (SUB166(auVar23, 0) >> 0x10) << 0x20) >> 0x20, 0),
                            SUB164(auVar23, 0) & 0xffff | (uint) _DAT_140c657d0 << 0x10);
        lVar2 = lVar2 + -1;
        puVar3 = puVar3 + -4;
    } while (lVar2 != 0);
    puVar1 = *param_2;
    *param_2 = puVar1 + 1;
    *puVar1 = SUB164(auVar60 >> 0x20, 0) << 2 | SUB164(auVar60, 0) | SUB164(auVar60 >> 0x40, 0) << 4 |
              SUB164(auVar60 >> 0x60, 0) << 6;
    return;
}


/*
Unable to decompile 'FUN_1402c77d0'
Cause:
Recoverable Error: Unable to find unique hash for varnode
*/


int FUN_1402c7a70(void) {
    int iVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    puVar4 = (undefined8 *) 0x0;
    if (DAT_140c7f847 == '\0') {
        puVar2 = (undefined8 *) FUN_14018b280(0x18, 0);
        puVar5 = puVar4;
        if (puVar2 != (undefined8 *) 0x0) {
            puVar2[1] = 2;
            puVar2[2] = 0;
            *puVar2 = &DAT_140c38630;
            puVar5 = puVar2;
        }
        DAT_140c7f847 = '\x01';
        puVar5[2] = DAT_140c63770;
        DAT_140c63770 = puVar5;
    }
    if (DAT_140c657f0 == (undefined8 *) 0x0) {
        lVar3 = FUN_14018b280(0x570, 0);
        if (lVar3 != 0) {
            puVar4 = (undefined8 *) FUN_1402c7b40(lVar3);
        }
        iVar1 = FUN_1402c7e30(puVar4);
        if (-1 < iVar1) {
            DAT_140c657f0 = puVar4;
            return 0;
        }
        if (puVar4 != (undefined8 *) 0x0) {
            FUN_1402c7c50(puVar4);
            FUN_14018b900(puVar4, 0);
        }
        return iVar1;
    }
    return 0;
}


longlong FUN_1402c7b40(longlong param_1) {
    *(undefined8 * )(param_1 + 8) = 0;
    *(undefined8 * )(param_1 + 0x10) = 0;
    *(undefined8 * )(param_1 + 0x18) = 0;
    *(undefined8 * )(param_1 + 0x20) = 0;
    *(undefined8 * )(param_1 + 0x28) = 0;
    *(undefined8 * )(param_1 + 0x30) = 0;
    FUN_1402c8db0();
    FUN_1402c8db0(param_1 + 0x60);
    FUN_1402c8db0(param_1 + 0x88);
    FUN_1407e4830(param_1 + 0x1a0, 0, 0x310);
    *(undefined8 * )(param_1 + 0x4d8) = 0;
    *(undefined8 * )(param_1 + 0x4e0) = 0;
    *(undefined8 * )(param_1 + 0x4e8) = 0;
    *(undefined8 * )(param_1 + 0x4f0) = 0;
    *(undefined8 * )(param_1 + 0x4f8) = 0;
    *(undefined8 * )(param_1 + 0x500) = 0;
    *(undefined8 * )(param_1 + 0x508) = 0;
    *(undefined8 * )(param_1 + 0x510) = 0;
    *(undefined8 * )(param_1 + 0x518) = 0;
    *(undefined8 * )(param_1 + 0x520) = 0;
    *(undefined8 * )(param_1 + 0x528) = 0;
    *(undefined8 * )(param_1 + 0x530) = 0;
    *(undefined * **)(param_1 + 0x550) = &PTR_FUN_140b627b0;
    *(undefined * **)(param_1 + 0x560) = &PTR_FUN_140b62790;
    return param_1;
}


undefined8 *FUN_1402c7c20(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b627d0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_1402c7c50(longlong param_1) {
    longlong **pplVar1;
    longlong **pplVar2;
    int iVar3;

    FUN_1401981b0(param_1 + 0x530);
    *(undefined * **)(param_1 + 0x560) = &PTR_FUN_140b627d0;
    *(undefined * **)(param_1 + 0x550) = &PTR_FUN_140b627d0;
    FUN_1401981b0(param_1 + 0x530);
    if (*(longlong * )(param_1 + 0x530) != 0) {
        FUN_1401a4a00(param_1 + 0x530);
    }
    pplVar2 = (longlong * *)(param_1 + 0x528);
    if (*pplVar2 != (longlong *) 0x0) {
        (**(code * *)(**pplVar2 + 8))();
    }
    iVar3 = 1;
    do {
        pplVar1 = pplVar2 + -1;
        pplVar2 = pplVar2 + -1;
        if (*pplVar1 != (longlong *) 0x0) {
            (**(code * *)(**pplVar1 + 8))();
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    if (*(longlong * *)(param_1 + 0x510) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x510) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x508) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x508) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x500) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x500) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x4f8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x4f8) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x4f0) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x4f0) + 8))();
    }
    if (*(longlong * )(param_1 + 0x4e8) != 0) {
        FUN_1401a4a00();
    }
    if (*(longlong * )(param_1 + 0x4e0) != 0) {
        FUN_1401a4a00();
    }
    if (*(longlong * )(param_1 + 0x4d8) != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0x88);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x98), 0);
    *(undefined8 * )(param_1 + 0x98) = 0;
    FUN_140019490(param_1 + 0x60);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x70), 0);
    *(undefined8 * )(param_1 + 0x70) = 0;
    FUN_140019490(param_1 + 0x38);
    FUN_14018b900(*(undefined8 * )(param_1 + 0x48), 0);
    *(undefined8 * )(param_1 + 0x48) = 0;
    if (*(longlong * )(param_1 + 0x30) != 0) {
        FUN_1401a4a00();
    }
    if (*(longlong * )(param_1 + 0x28) != 0) {
        FUN_1401a4a00(param_1 + 0x28);
    }
    if (*(longlong * *)(param_1 + 0x20) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x20) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
    }
    if (*(longlong * *)(param_1 + 0x10) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x10) + 8))();
    }
    if (*(longlong * *)(param_1 + 8) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 8) + 8))();
    }
    return;
}


undefined8 FUN_1402c7e30(undefined4 *param_1) {
    undefined8 uVar1;
    uint uVar2;
    undefined4 local_28[2];
    undefined4 *local_20;
    code *local_18;
    undefined8 local_10;
    ulonglong uVar3;

    param_1[0x14e] = 0x44400000;
    param_1[0x14f] = 0x45000000;
    param_1[0x150] = 3;
    param_1[0x151] = 1;
    param_1[0x152] = 0x42800000;
    param_1[0x153] = 0x3f000000;
    uVar1 = (**(code * *)(*DAT_140c65670 + 0x98))(DAT_140c65670, L"Shaders\\SimplePS.sho", param_1 + 4);
    if ((((-1 < (int) uVar1) &&
          (uVar1 = (**(code * *)(*DAT_140c65670 + 0x90))
                  (DAT_140c65670, L"Shaders\\SimpleVS.sho", param_1 + 2), -1 < (int) uVar1)) &&
         (uVar1 = (**(code * *)(*DAT_140c65670 + 0x98))
                 (DAT_140c65670, L"Shaders\\InteriorPS.sho", param_1 + 8), -1 < (int) uVar1))
        && (uVar1 = (**(code * *)(*DAT_140c65670 + 0x90))
            (DAT_140c65670, L"Shaders\\InteriorVS.sho", param_1 + 6), -1 < (int) uVar1)) {
        uVar3 = 0;
        uVar1 = (**(code * *)(*DAT_140c65670 + 0x58))(DAT_140c65670, 1, 1, 0, 0, 1, 0, 0x15, 0, param_1 + 0x13c);
        if (((-1 < (int) uVar1) &&
             (uVar1 = (**(code * *)(*DAT_140c65670 + 0x58))
                     (DAT_140c65670, 1, 1, 0, 0, 1, 0, 0x15, 0, param_1 + 0x13e), -1 < (int) uVar1)) &&
            ((uVar1 = (**(code * *)(*DAT_140c65670 + 0x58))
                    (DAT_140c65670, 1, 1, 0, 0, 1, 0, 0x15, 0, param_1 + 0x140), -1 < (int) uVar1 &&
                                                                                 ((uVar1 = (**(code * *)(
                                                                                         *DAT_140c65670 + 0x58))
                                                                                         (DAT_140c65670, 2, 2, 0, 0, 1,
                                                                                          1, 0x15, 0, param_1 + 0x142),
                                                                                         -1 < (int) uVar1 &&
                                                                                         (uVar1 = (**(code * *)(
                                                                                                 *DAT_140c65670 + 0x58))
                                                                                                 (DAT_140c65670, 1, 1,
                                                                                                  0, 0, 1, 1, 0x15, 0,
                                                                                                  param_1 + 0x144), -1 <
                                                                                                                    (int) uVar1)))))
                ) {
            do {
                uVar1 = (**(code * *)(*DAT_140c65670 + 0x58))
                        (DAT_140c65670, 1, 1, 1, 0, 1, 0, 0x15, 0, param_1 + (uVar3 + 0xa3) * 2);
                if ((int) uVar1 < 0) {
                    return uVar1;
                }
                uVar2 = (int) uVar3 + 1;
                uVar3 = (ulonglong) uVar2;
            } while (uVar2 < 2);
            uVar1 = (**(code * *)(*DAT_140c65670 + 0xc0))(DAT_140c65670, param_1 + 0x14a);
            if (-1 < (int) uVar1) {
                local_18 = FUN_1402c8170;
                local_28[0] = 0;
                local_10 = 0;
                local_20 = param_1;
                (**(code * *)(**(longlong * *)(param_1 + 0x14a) + 0x18))
                        (*(longlong * *)(param_1 + 0x14a), 0, local_28);
                FUN_1402c8170(param_1);
                param_1[0x156] = 0;
                param_1[0x15a] = 0;
                *param_1 = 0;
                uVar1 = 0;
            }
        }
    }
    return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1402c8170(longlong param_1) {
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    ulonglong uVar9;
    unkbyte10 Var10;
    undefined auVar11[12];
    undefined auVar12[14];
    short sVar13;
    undefined4 uVar14;
    undefined6 uVar15;
    undefined4 uVar16;
    ulonglong uVar17;
    undefined4 *puVar18;
    undefined4 *puVar19;
    longlong **pplVar20;
    longlong lVar21;
    int iVar22;
    int iVar23;
    uint uVar25;
    int iVar27;
    undefined auVar24[16];
    uint uVar26;
    int iVar28;
    int iVar29;
    int iVar30;
    undefined extraout_XMM0[16];
    char cVar31;
    char cVar32;
    undefined in_XMM5[16];
    undefined auVar33[16];
    uint local_res8[2];
    undefined local_res10[8];
    undefined local_res18[8];
    char cVar2;
    char cVar3;
    char cVar4;

    puVar18 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x508) + 0x48))
            (*(longlong * *)(param_1 + 0x508), 0, local_res8, 2);
    if (puVar18 != (undefined4 *) 0x0) {
        auVar33 = maxps(in_XMM5 & (undefined[16]) 0x0, _DAT_140b7a710);
        auVar24 = maxps(ZEXT1216(CONCAT48(SUB164((in_XMM5 & (undefined[16]) 0x0) >> 0x40, 0),
                                          (ulonglong) SUB164(in_XMM5, 0)) &
                                 (undefined[12]) 0xffffffffffffffff), _DAT_140b7af00);
        auVar33 = minps(auVar33, _DAT_140b7b240);
        auVar24 = minps(auVar24, _DAT_140b7b240);
        iVar22 = (int) (SUB164(auVar24, 0) * 255.0 + 0.5);
        uVar25 = (uint)(SUB164(auVar24 >> 0x20, 0) * 255.0 + 0.5);
        iVar27 = (int) (SUB164(auVar24 >> 0x40, 0) * 255.0 + 0.5);
        iVar29 = (int) (SUB164(auVar24 >> 0x60, 0) * 255.0 + 0.5);
        cVar31 = (char) ((uint) iVar22 >> 0x10);
        cVar32 = (char) ((uint) iVar29 >> 0x10);
        iVar23 = (int) (SUB164(auVar33, 0) * 255.0 + 0.5);
        uVar26 = (uint)(SUB164(auVar33 >> 0x20, 0) * 255.0 + 0.5);
        iVar28 = (int) (SUB164(auVar33 >> 0x40, 0) * 255.0 + 0.5);
        iVar30 = (int) (SUB164(auVar33 >> 0x60, 0) * 255.0 + 0.5);
        uVar17 = (ulonglong)
                CONCAT16((char) (uVar25 >> 0x10),
                         CONCAT15((char) (uVar25 >> 8), CONCAT14((char) uVar25, iVar27)));
        uVar9 = ((ulonglong) uVar25 & 0xff000000) << 0x20 | uVar17;
        Var10 = CONCAT19((char) ((uint) iVar22 >> 8), CONCAT18((char) iVar22, uVar9));
        auVar11 = CONCAT111((char) ((uint) iVar22 >> 0x18), CONCAT110(cVar31, Var10));
        auVar12 = CONCAT113((char) ((uint) iVar29 >> 8), CONCAT112((char) iVar29, auVar11));
        sVar5 = (short) iVar27;
        cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar27 - (0xff < sVar5);
        sVar5 = (short) (uVar17 >> 0x10);
        sVar6 = (short) (uVar17 >> 0x20);
        cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) (uVar17 >> 0x20) - (0xff < sVar6);
        sVar6 = (short) (uVar9 >> 0x30);
        sVar7 = (short) ((unkuint10) Var10 >> 0x40);
        cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar22 - (0xff < sVar7);
        sVar7 = SUB122(auVar11 >> 0x50, 0);
        sVar8 = SUB142(auVar12 >> 0x60, 0);
        cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar29 - (0xff < sVar8);
        sVar8 = SUB162(CONCAT115((char) ((uint) iVar29 >> 0x18), CONCAT114(cVar32, auVar12)) >> 0x70, 0);
        sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) (uVar17 >> 0x10) - (0xff < sVar5), cVar1);
        uVar14 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar17 >> 0x30) - (0xff < sVar6),
                          CONCAT12(cVar2, sVar13));
        uVar15 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * cVar31 - (0xff < sVar7), CONCAT14(cVar3, uVar14));
        sVar5 = (short) ((uint) uVar14 >> 0x10);
        sVar6 = (short) ((uint6) uVar15 >> 0x20);
        sVar7 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * cVar32 - (0xff < sVar8),
                                  CONCAT16(cVar4, uVar15)) >> 0x30);
        uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                          CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                   CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                            (0 < sVar13) * (sVar13 < 0xff) * cVar1 - (0xff < sVar13))));
        cVar31 = (char) ((uint) iVar23 >> 0x10);
        cVar32 = (char) ((uint) iVar30 >> 0x10);
        uVar17 = (ulonglong)
                CONCAT16((char) (uVar26 >> 0x10),
                         CONCAT15((char) (uVar26 >> 8), CONCAT14((char) uVar26, iVar28)));
        uVar9 = ((ulonglong) uVar26 & 0xff000000) << 0x20 | uVar17;
        Var10 = CONCAT19((char) ((uint) iVar23 >> 8), CONCAT18((char) iVar23, uVar9));
        auVar11 = CONCAT111((char) ((uint) iVar23 >> 0x18), CONCAT110(cVar31, Var10));
        auVar12 = CONCAT113((char) ((uint) iVar30 >> 8), CONCAT112((char) iVar30, auVar11));
        sVar5 = (short) iVar28;
        cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar28 - (0xff < sVar5);
        sVar5 = (short) (uVar17 >> 0x10);
        sVar6 = (short) (uVar17 >> 0x20);
        cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) (uVar17 >> 0x20) - (0xff < sVar6);
        sVar6 = (short) (uVar9 >> 0x30);
        sVar7 = (short) ((unkuint10) Var10 >> 0x40);
        cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar23 - (0xff < sVar7);
        sVar7 = SUB122(auVar11 >> 0x50, 0);
        sVar8 = SUB142(auVar12 >> 0x60, 0);
        cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar30 - (0xff < sVar8);
        sVar8 = SUB162(CONCAT115((char) ((uint) iVar30 >> 0x18), CONCAT114(cVar32, auVar12)) >> 0x70, 0);
        sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) (uVar17 >> 0x10) - (0xff < sVar5), cVar1);
        uVar16 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar17 >> 0x30) - (0xff < sVar6),
                          CONCAT12(cVar2, sVar13));
        uVar15 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * cVar31 - (0xff < sVar7), CONCAT14(cVar3, uVar16));
        sVar5 = (short) ((uint) uVar16 >> 0x10);
        sVar6 = (short) ((uint6) uVar15 >> 0x20);
        sVar7 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * cVar32 - (0xff < sVar8),
                                  CONCAT16(cVar4, uVar15)) >> 0x30);
        *(undefined4 * )((ulonglong) local_res8[0] + 4 + (longlong) puVar18) = uVar14;
        *puVar18 = uVar14;
        uVar14 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                          CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                   CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                            (0 < sVar13) * (sVar13 < 0xff) * cVar1 - (0xff < sVar13))));
        *(undefined4 * )((ulonglong) local_res8[0] + (longlong) puVar18) = uVar14;
        puVar18[1] = uVar14;
        (**(code * *)(**(longlong * *)(param_1 + 0x508) + 0x50))(*(longlong * *)(param_1 + 0x508), 0);
    }
    puVar18 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x4f0) + 0x48))
            (*(longlong * *)(param_1 + 0x4f0), 0, local_res10, 2);
    if (puVar18 != (undefined4 *) 0x0) {
        *puVar18 = 0xff000000;
        (**(code * *)(**(longlong * *)(param_1 + 0x4f0) + 0x50))(*(longlong * *)(param_1 + 0x4f0), 0);
    }
    puVar18 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x4f8) + 0x48))
            (*(longlong * *)(param_1 + 0x4f8), 0, local_res10, 2);
    if (puVar18 != (undefined4 *) 0x0) {
        *puVar18 = 0xffffffff;
        (**(code * *)(**(longlong * *)(param_1 + 0x4f8) + 0x50))(*(longlong * *)(param_1 + 0x4f8), 0);
    }
    puVar18 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x500) + 0x48))
            (*(longlong * *)(param_1 + 0x500), 0, local_res10, 2);
    if (puVar18 != (undefined4 *) 0x0) {
        *puVar18 = 0xff7f7f7f;
        (**(code * *)(**(longlong * *)(param_1 + 0x500) + 0x50))(*(longlong * *)(param_1 + 0x500), 0);
    }
    puVar18 = (undefined4 * )
            (**(code * *)(**(longlong * *)(param_1 + 0x510) + 0x48))
            (*(longlong * *)(param_1 + 0x510), 0, local_res18, 2);
    if (puVar18 != (undefined4 *) 0x0) {
        auVar24 = maxps(extraout_XMM0 & (undefined[16]) 0x0, _DAT_140b7ac60);
        auVar24 = minps(auVar24, _DAT_140b7b240);
        iVar22 = (int) (SUB164(auVar24, 0) * 255.0 + 0.5);
        uVar25 = (uint)(SUB164(auVar24 >> 0x20, 0) * 255.0 + 0.5);
        iVar23 = (int) (SUB164(auVar24 >> 0x40, 0) * 255.0 + 0.5);
        iVar27 = (int) (SUB164(auVar24 >> 0x60, 0) * 255.0 + 0.5);
        cVar31 = (char) ((uint) iVar22 >> 0x10);
        cVar32 = (char) ((uint) iVar27 >> 0x10);
        uVar17 = (ulonglong)
                CONCAT16((char) (uVar25 >> 0x10),
                         CONCAT15((char) (uVar25 >> 8), CONCAT14((char) uVar25, iVar23)));
        uVar9 = ((ulonglong) uVar25 & 0xff000000) << 0x20 | uVar17;
        Var10 = CONCAT19((char) ((uint) iVar22 >> 8), CONCAT18((char) iVar22, uVar9));
        auVar11 = CONCAT111((char) ((uint) iVar22 >> 0x18), CONCAT110(cVar31, Var10));
        auVar12 = CONCAT113((char) ((uint) iVar27 >> 8), CONCAT112((char) iVar27, auVar11));
        sVar5 = (short) iVar23;
        cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar23 - (0xff < sVar5);
        sVar5 = (short) (uVar17 >> 0x10);
        sVar6 = (short) (uVar17 >> 0x20);
        cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) (uVar17 >> 0x20) - (0xff < sVar6);
        sVar6 = (short) (uVar9 >> 0x30);
        sVar7 = (short) ((unkuint10) Var10 >> 0x40);
        cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar22 - (0xff < sVar7);
        sVar7 = SUB122(auVar11 >> 0x50, 0);
        sVar8 = SUB142(auVar12 >> 0x60, 0);
        cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar27 - (0xff < sVar8);
        sVar8 = SUB162(CONCAT115((char) ((uint) iVar27 >> 0x18), CONCAT114(cVar32, auVar12)) >> 0x70, 0);
        sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) (uVar17 >> 0x10) - (0xff < sVar5), cVar1);
        uVar14 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar17 >> 0x30) - (0xff < sVar6),
                          CONCAT12(cVar2, sVar13));
        uVar15 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * cVar31 - (0xff < sVar7), CONCAT14(cVar3, uVar14));
        sVar5 = (short) ((uint) uVar14 >> 0x10);
        sVar6 = (short) ((uint6) uVar15 >> 0x20);
        sVar7 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * cVar32 - (0xff < sVar8),
                                  CONCAT16(cVar4, uVar15)) >> 0x30);
        *puVar18 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                            CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                     CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 - (0xff < sVar5),
                                              (0 < sVar13) * (sVar13 < 0xff) * cVar1 - (0xff < sVar13)))
        );
        (**(code * *)(**(longlong * *)(param_1 + 0x510) + 0x50))(*(longlong * *)(param_1 + 0x510), 0);
    }
    puVar18 = &DAT_140c58b30;
    pplVar20 = (longlong * *)(param_1 + 0x518);
    lVar21 = 2;
    do {
        puVar19 = (undefined4 * )(**(code * *)(**pplVar20 + 0x48))(*pplVar20, 0, local_res10, 2);
        if (puVar19 != (undefined4 *) 0x0) {
            *puVar19 = *puVar18;
            (**(code * *)(**pplVar20 + 0x50))();
        }
        pplVar20 = pplVar20 + 1;
        puVar18 = puVar18 + 1;
        lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    for (lVar21 = *(longlong * )(param_1 + 0x30); lVar21 != 0; lVar21 = *(longlong * )(lVar21 + 0x78)) {
        // WARNING: Read-only address (ram,0x000140b7a710) is written
        // WARNING: Read-only address (ram,0x000140b7ac60) is written
        // WARNING: Read-only address (ram,0x000140b7af00) is written
        // WARNING: Read-only address (ram,0x000140b7b240) is written
        FUN_1402c9930(lVar21);
    }
    // WARNING: Read-only address (ram,0x000140b7a710) is written
    // WARNING: Read-only address (ram,0x000140b7ac60) is written
    // WARNING: Read-only address (ram,0x000140b7af00) is written
    // WARNING: Read-only address (ram,0x000140b7b240) is written
    return;
}


int FUN_1402c83a0(undefined8 param_1, undefined8 param_2, undefined8 param_3, longlong **param_4) {
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    undefined8 local_res10;

    lVar4 = DAT_140c657f0;
    local_res10 = param_2;
    uVar3 = (**(code * *)(DAT_140c657f0 + 0x50))(&local_res10);
    plVar6 = (longlong *) 0x0;
    puVar1 = *(ulonglong * *)(*(longlong * )(lVar4 + 0x48) + (uVar3 % *(ulonglong * )(lVar4 + 0x40)) * 8);
    do {
        if (puVar1 == (ulonglong *) 0x0) {
            LAB_1402c840e:
            lVar4 = FUN_14018b280(0x80, 0);
            plVar5 = plVar6;
            if (lVar4 != 0) {
                plVar5 = (longlong *) FUN_1402c9600(lVar4);
            }
            iVar2 = FUN_1402c9790(plVar5, local_res10);
            if (iVar2 < 0) {
                if (plVar5 != (longlong *) 0x0) {
                    FUN_1402c9680(plVar5);
                    FUN_14018b900(plVar5, 0);
                }
            } else {
                LAB_1402c8444:
                lVar4 = FUN_14018b280(0x220, 0);
                if (lVar4 != 0) {
                    plVar6 = (longlong *) FUN_1402cb050(lVar4);
                }
                if ((longlong *) plVar6[3] != plVar5) {
                    if (plVar5 != (longlong *) 0x0) {
                        (**(code * *) * plVar5)(plVar5);
                    }
                    if ((longlong *) plVar6[3] != (longlong *) 0x0) {
                        (**(code * *)(*(longlong *) plVar6[3] + 8))();
                    }
                    plVar6[3] = (longlong) plVar5;
                }
                FUN_1402cb390(plVar6, param_3);
                (**(code * *)(*plVar5 + 8))(plVar5);
                *param_4 = plVar6;
                iVar2 = 0;
            }
            return iVar2;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code * *)(lVar4 + 0x58))(&local_res10, puVar1 + 2), iVar2 != 0)) {
            if ((longlong * *)(puVar1 + 3) != (longlong **) 0x0) {
                plVar5 = (longlong *) puVar1[3];
                (**(code * *) * plVar5)(plVar5);
                goto LAB_1402c8444;
            }
            goto LAB_1402c840e;
        }
        puVar1 = (ulonglong *) puVar1[1];
    } while (true);
}


void FUN_1402c8500(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5, undefined8 param_6) {
    longlong lVar1;
    undefined8 uVar2;
    undefined auStack1112[32];
    undefined8 local_438;
    undefined8 local_430;
    undefined local_428[1024];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack1112;
    lVar1 = *(longlong * )(param_1 + 0x4d8);
    while (lVar1 != 0) {
        if (*(undefined8 * *)(lVar1 + 0x208) != (undefined8 *) 0x0) {
            **(undefined8 * *)(lVar1 + 0x208) = *(undefined8 * )(lVar1 + 0x210);
        }
        if (*(longlong * )(lVar1 + 0x210) != 0) {
            *(undefined8 * )(*(longlong * )(lVar1 + 0x210) + 0x208) = *(undefined8 * )(lVar1 + 0x208);
        }
        *(undefined8 * )(lVar1 + 0x208) = 0;
        *(undefined8 * )(lVar1 + 0x210) = 0;
        lVar1 = *(longlong * )(param_1 + 0x4d8);
    }
    lVar1 = *(longlong * )(param_1 + 0x4e0);
    while (lVar1 != 0) {
        if (*(undefined8 * *)(lVar1 + 0x188) != (undefined8 *) 0x0) {
            **(undefined8 * *)(lVar1 + 0x188) = *(undefined8 * )(lVar1 + 400);
        }
        if (*(longlong * )(lVar1 + 400) != 0) {
            *(undefined8 * )(*(longlong * )(lVar1 + 400) + 0x188) = *(undefined8 * )(lVar1 + 0x188);
        }
        *(undefined8 * )(lVar1 + 0x188) = 0;
        *(undefined8 * )(lVar1 + 400) = 0;
        lVar1 = *(longlong * )(param_1 + 0x4e0);
    }
    lVar1 = *(longlong * )(param_1 + 0x4e8);
    while (lVar1 != 0) {
        if (*(undefined8 * *)(lVar1 + 0x170) != (undefined8 *) 0x0) {
            **(undefined8 * *)(lVar1 + 0x170) = *(undefined8 * )(lVar1 + 0x178);
        }
        if (*(longlong * )(lVar1 + 0x178) != 0) {
            *(undefined8 * )(*(longlong * )(lVar1 + 0x178) + 0x170) = *(undefined8 * )(lVar1 + 0x170);
        }
        *(undefined8 * )(lVar1 + 0x170) = 0;
        *(undefined8 * )(lVar1 + 0x178) = 0;
        lVar1 = *(longlong * )(param_1 + 0x4e8);
    }
    local_430 = param_6;
    local_438 = param_5;
    uVar2 = FUN_1402c8e20(local_428, param_2);
    FUN_1402c8690(param_1 + 0xb0, uVar2);
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack1112);
    return;
}


undefined4 *FUN_1402c8690(undefined4 *param_1, undefined4 *param_2) {
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;

    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    uVar2 = param_2[9];
    uVar3 = param_2[10];
    uVar4 = param_2[0xb];
    param_1[8] = param_2[8];
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    uVar2 = param_2[0xd];
    uVar3 = param_2[0xe];
    uVar4 = param_2[0xf];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    uVar2 = param_2[0x11];
    uVar3 = param_2[0x12];
    uVar4 = param_2[0x13];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar3;
    param_1[0x13] = uVar4;
    uVar2 = param_2[0x15];
    uVar3 = param_2[0x16];
    uVar4 = param_2[0x17];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar3;
    param_1[0x17] = uVar4;
    uVar2 = param_2[0x19];
    uVar3 = param_2[0x1a];
    uVar4 = param_2[0x1b];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = uVar2;
    param_1[0x1a] = uVar3;
    param_1[0x1b] = uVar4;
    uVar2 = param_2[0x1d];
    uVar3 = param_2[0x1e];
    uVar4 = param_2[0x1f];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = uVar2;
    param_1[0x1e] = uVar3;
    param_1[0x1f] = uVar4;
    lVar6 = 6;
    puVar5 = param_1 + 0x20;
    do {
        puVar1 = (undefined4 * )
                ((longlong) param_2 + (0x80 - (longlong)(param_1 + 0x20)) + (longlong) puVar5);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        *puVar5 = *puVar1;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        lVar6 = lVar6 + -1;
        puVar5 = puVar5 + 4;
    } while (lVar6 != 0);
    *(undefined8 * )(param_1 + 0x38) = *(undefined8 * )(param_2 + 0x38);
    FUN_1402c8730(param_1 + 0x3c, param_2 + 0x3c);
    return param_1;
}


undefined4 *FUN_1402c8730(undefined4 *param_1, undefined4 *param_2) {
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    longlong lVar7;
    longlong lVar8;

    lVar7 = 0xc;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    lVar8 = 0xc;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    puVar6 = param_2 + 0x38;
    uVar2 = param_2[0x25];
    uVar3 = param_2[0x26];
    uVar4 = param_2[0x27];
    param_1[0x24] = param_2[0x24];
    param_1[0x25] = uVar2;
    param_1[0x26] = uVar3;
    param_1[0x27] = uVar4;
    uVar2 = param_2[0x29];
    uVar3 = param_2[0x2a];
    uVar4 = param_2[0x2b];
    param_1[0x28] = param_2[0x28];
    param_1[0x29] = uVar2;
    param_1[0x2a] = uVar3;
    param_1[0x2b] = uVar4;
    uVar2 = param_2[0x2d];
    uVar3 = param_2[0x2e];
    uVar4 = param_2[0x2f];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2d] = uVar2;
    param_1[0x2e] = uVar3;
    param_1[0x2f] = uVar4;
    uVar2 = param_2[0x31];
    uVar3 = param_2[0x32];
    uVar4 = param_2[0x33];
    param_1[0x30] = param_2[0x30];
    param_1[0x31] = uVar2;
    param_1[0x32] = uVar3;
    param_1[0x33] = uVar4;
    uVar2 = param_2[0x35];
    uVar3 = param_2[0x36];
    uVar4 = param_2[0x37];
    param_1[0x34] = param_2[0x34];
    param_1[0x35] = uVar2;
    param_1[0x36] = uVar3;
    param_1[0x37] = uVar4;
    do {
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        puVar6 = puVar6 + 4;
        puVar1 = (undefined4 * )(((longlong) param_1 - (longlong) param_2) + -0x10 + (longlong) puVar6);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    puVar6 = param_2 + 0x68;
    do {
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar1 = (undefined4 * )((longlong) puVar6 + ((longlong) param_1 - (longlong) param_2));
        *puVar1 = *puVar6;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 4;
    } while (lVar7 != 0);
    uVar2 = param_2[0x99];
    uVar3 = param_2[0x9a];
    uVar4 = param_2[0x9b];
    param_1[0x98] = param_2[0x98];
    param_1[0x99] = uVar2;
    param_1[0x9a] = uVar3;
    param_1[0x9b] = uVar4;
    uVar2 = param_2[0x9d];
    uVar3 = param_2[0x9e];
    uVar4 = param_2[0x9f];
    param_1[0x9c] = param_2[0x9c];
    param_1[0x9d] = uVar2;
    param_1[0x9e] = uVar3;
    param_1[0x9f] = uVar4;
    uVar2 = param_2[0xa1];
    uVar3 = param_2[0xa2];
    uVar4 = param_2[0xa3];
    param_1[0xa0] = param_2[0xa0];
    param_1[0xa1] = uVar2;
    param_1[0xa2] = uVar3;
    param_1[0xa3] = uVar4;
    uVar2 = param_2[0xa5];
    uVar3 = param_2[0xa6];
    uVar4 = param_2[0xa7];
    param_1[0xa4] = param_2[0xa4];
    param_1[0xa5] = uVar2;
    param_1[0xa6] = uVar3;
    param_1[0xa7] = uVar4;
    uVar2 = param_2[0xa9];
    uVar3 = param_2[0xaa];
    uVar4 = param_2[0xab];
    param_1[0xa8] = param_2[0xa8];
    param_1[0xa9] = uVar2;
    param_1[0xaa] = uVar3;
    param_1[0xab] = uVar4;
    param_1[0xac] = param_2[0xac];
    param_1[0xad] = param_2[0xad];
    param_1[0xae] = param_2[0xae];
    param_1[0xaf] = param_2[0xaf];
    param_1[0xb0] = param_2[0xb0];
    param_1[0xb1] = param_2[0xb1];
    param_1[0xb2] = param_2[0xb2];
    param_1[0xb3] = param_2[0xb3];
    param_1[0xb4] = param_2[0xb4];
    param_1[0xb5] = param_2[0xb5];
    param_1[0xb6] = param_2[0xb6];
    param_1[0xb7] = param_2[0xb7];
    param_1[0xb8] = param_2[0xb8];
    param_1[0xb9] = param_2[0xb9];
    param_1[0xba] = param_2[0xba];
    param_1[0xbb] = param_2[0xbb];
    param_1[0xbc] = param_2[0xbc];
    param_1[0xbd] = param_2[0xbd];
    *(undefined8 * )(param_1 + 0xbe) = *(undefined8 * )(param_2 + 0xbe);
    *(undefined8 * )(param_1 + 0xc0) = *(undefined8 * )(param_2 + 0xc0);
    *(undefined8 * )(param_1 + 0xc2) = *(undefined8 * )(param_2 + 0xc2);
    return param_1;
}


undefined8 FUN_1402c89c0(longlong param_1, undefined8 param_2, undefined4 param_3) {
    longlong lVar1;
    undefined4 *puVar2;
    longlong *plVar3;
    float fVar4;
    float fVar5;
    undefined4 local_28[8];

    *(undefined8 * )(param_1 + 0x4b0) = param_2;
    *(undefined4 * )(param_1 + 0x4b8) = param_3;
    puVar2 = (undefined4 * )(**(code * *)(*DAT_140c65670 + 0x248))();
    plVar3 = *(longlong * *)(param_1 + 0x4e0);
    *(undefined4 * )(param_1 + 0x4bc) = *puVar2;
    *(undefined4 * )(param_1 + 0x4c0) = puVar2[1];
    *(undefined4 * )(param_1 + 0x4c4) = puVar2[2];
    *(undefined4 * )(param_1 + 0x4c8) = puVar2[3];
    *(undefined4 * )(param_1 + 0x4cc) = puVar2[4];
    *(undefined4 * )(param_1 + 0x4d0) = puVar2[5];
    if (plVar3 != (longlong *) 0x0) {
        fVar5 = 0.0;
        do {
            fVar4 = (float) (**(code * *)(*(longlong *) plVar3[1] + 0x88))();
            if ((fVar4 != fVar5) ||
                (fVar4 = (float) (**(code * *)(*(longlong *) plVar3[1] + 0x98))(), fVar4 != fVar5)) {
                local_28[0] = 0xffffffff;
                (**(code * *)(*plVar3 + 0x68))(plVar3, local_28);
                FUN_1402d3720(plVar3[3], plVar3);
            }
            plVar3 = (longlong *) plVar3[0x32];
        } while (plVar3 != (longlong *) 0x0);
    }
    if ((*(byte * )(param_1 + 0x4b8) & 4) == 0) {
        for (lVar1 = *(longlong * )(param_1 + 0x4e8); lVar1 != 0; lVar1 = *(longlong * )(lVar1 + 0x178)) {
            FUN_1402d2a40(lVar1);
        }
    }
    return 0;
}


void FUN_1402c8ae0(undefined8 param_1, undefined8 param_2, longlong param_3, longlong param_4) {
    int iVar1;
    undefined8 uVar2;
    uint uVar3;
    undefined auStack280[32];
    undefined *local_f8;
    ulonglong local_f0;
    undefined8 local_e8;
    undefined4 local_d8[2];
    longlong local_d0;
    undefined4 local_c4;
    undefined local_b8[64];
    longlong local_78;
    longlong local_70;
    longlong local_60;
    longlong local_50;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack280;
    FUN_1407c1fe0(local_b8);
    iVar1 = FUN_1402c89c0(param_3, local_b8, 0);
    if (-1 < iVar1) {
        uVar3 = 0x3f800000;
        if (*(longlong * )(param_4 + 0x300) != 0) {
            local_d8[0] = 1;
            local_c4 = 0;
            local_f8 = &DAT_140c3fe88;
            local_d0 = *(longlong * )(param_4 + 0x300);
            (**(code * *)(*DAT_140c65670 + 0x208))(DAT_140c65670, local_d8, &DAT_140c3fe88, &DAT_140c3fe88);
            (**(code * *)(*DAT_140c65670 + 0x1c0))(DAT_140c65670, 0xf);
            local_f8 = (undefined * )((ulonglong) local_f8 & 0xffffffff00000000);
            (**(code * *)(*DAT_140c65670 + 0x270))(DAT_140c65670, 1, param_4 + 0xc0);
            (**(code * *)(*DAT_140c65670 + 0x2a0))();
        }
        local_e8 = 0;
        local_f0 = local_f0 & 0xffffffff00000000;
        local_f8 = (undefined * )((ulonglong) local_f8 & 0xffffffff00000000 | (ulonglong) uVar3);
        iVar1 = (**(code * *)(*DAT_140c65688 + 0x28))
                (DAT_140c65688, param_3 + 0xb0, param_3 + 0xf0, param_3 + 400);
        if (-1 < iVar1) {
            (**(code * *)(*DAT_140c65688 + 0x30))(DAT_140c65688, 0);
            if (local_78 != 0) {
                FUN_1407c2170(local_b8, 0, 0xffffffff);
            }
            (**(code * *)(*DAT_140c65688 + 0x30))(DAT_140c65688, 3);
            uVar2 = (**(code * *)(*DAT_140c65670 + 0x178))(DAT_140c65670, *(undefined8 * )(param_3 + 0x10), 0);
            local_f0 = 0;
            local_f8 = (undefined *) 0x0;
            (**(code * *)(*DAT_140c65670 + 0x298))(uVar2, param_2, uVar3, DAT_140c65670, 0);
            iVar1 = (**(code * *)(*DAT_140c65688 + 0x30))(DAT_140c65688, 8);
            if (iVar1 != 0) {
                if (local_60 != 0) {
                    FUN_1407c2170(local_b8, 3, 0xffffffff);
                }
                (**(code * *)(*DAT_140c65688 + 0x80))(DAT_140c65688, param_4, 0, 0);
            }
            (**(code * *)(*DAT_140c65688 + 0x30))(DAT_140c65688, 10);
            if (local_70 != 0) {
                FUN_1407c2170(local_b8, 1, 0xffffffff);
            }
            iVar1 = (**(code * *)(*DAT_140c65688 + 0x30))(DAT_140c65688, 0xc);
            if (iVar1 != 0) {
                if (local_60 != 0) {
                    FUN_1407c2170(local_b8, 3, 0xffffffff);
                }
                (**(code * *)(*DAT_140c65688 + 0x80))(DAT_140c65688, param_4, 0, 0);
            }
            (**(code * *)(*DAT_140c65688 + 0x30))(DAT_140c65688, 0x13);
            if (local_50 != 0) {
                FUN_1407c2170(local_b8, 5, 0xffffffff);
            }
            (**(code * *)(*DAT_140c65688 + 0x40))();
        }
    }
    FUN_1407c20b0(local_b8);
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack280);
    return;
}


undefined8 *FUN_1402c8db0(undefined8 *param_1) {
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1), 0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40, 0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2, 0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2, 0, param_1[1] << 3);
    param_1[3] = &LAB_140265f10;
    param_1[4] = FUN_140265f20;
    return param_1;
}


undefined4 *
FUN_1402c8e20(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3, longlong param_4,
              undefined4 *param_5, undefined4 *param_6) {
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;

    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    param_1[4] = param_2[4];
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    uVar2 = param_2[9];
    uVar3 = param_2[10];
    uVar4 = param_2[0xb];
    param_1[8] = param_2[8];
    param_1[9] = uVar2;
    param_1[10] = uVar3;
    param_1[0xb] = uVar4;
    uVar2 = param_2[0xd];
    uVar3 = param_2[0xe];
    uVar4 = param_2[0xf];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    param_1[0x10] = *param_3;
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar3;
    param_1[0x13] = uVar4;
    uVar2 = param_3[5];
    uVar3 = param_3[6];
    uVar4 = param_3[7];
    param_1[0x14] = param_3[4];
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar3;
    param_1[0x17] = uVar4;
    uVar2 = param_3[9];
    uVar3 = param_3[10];
    uVar4 = param_3[0xb];
    param_1[0x18] = param_3[8];
    param_1[0x19] = uVar2;
    param_1[0x1a] = uVar3;
    param_1[0x1b] = uVar4;
    uVar2 = param_3[0xd];
    uVar3 = param_3[0xe];
    uVar4 = param_3[0xf];
    param_1[0x1c] = param_3[0xc];
    param_1[0x1d] = uVar2;
    param_1[0x1e] = uVar3;
    param_1[0x1f] = uVar4;
    uVar5 = 0;
    do {
        puVar1 = (undefined4 * )(uVar5 + param_4);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        uVar6 = uVar5 + 0x10;
        puVar8 = (undefined4 * )(uVar5 + 0x80 + (longlong) param_1);
        *puVar8 = *puVar1;
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar5 = uVar6;
    } while (uVar6 < 0x60);
    param_1[0x38] = *param_5;
    puVar1 = param_1 + 0x3c;
    param_1[0x39] = param_5[1];
    if ((((uint) param_6 | (uint) puVar1) & 0xf) == 0) {
        lVar7 = 6;
        do {
            puVar9 = param_6;
            puVar8 = puVar1;
            uVar2 = puVar9[1];
            uVar3 = puVar9[2];
            uVar4 = puVar9[3];
            *puVar8 = *puVar9;
            puVar8[1] = uVar2;
            puVar8[2] = uVar3;
            puVar8[3] = uVar4;
            uVar2 = puVar9[5];
            uVar3 = puVar9[6];
            uVar4 = puVar9[7];
            puVar8[4] = puVar9[4];
            puVar8[5] = uVar2;
            puVar8[6] = uVar3;
            puVar8[7] = uVar4;
            uVar2 = puVar9[9];
            uVar3 = puVar9[10];
            uVar4 = puVar9[0xb];
            puVar8[8] = puVar9[8];
            puVar8[9] = uVar2;
            puVar8[10] = uVar3;
            puVar8[0xb] = uVar4;
            uVar2 = puVar9[0xd];
            uVar3 = puVar9[0xe];
            uVar4 = puVar9[0xf];
            puVar8[0xc] = puVar9[0xc];
            puVar8[0xd] = uVar2;
            puVar8[0xe] = uVar3;
            puVar8[0xf] = uVar4;
            uVar2 = puVar9[0x11];
            uVar3 = puVar9[0x12];
            uVar4 = puVar9[0x13];
            puVar8[0x10] = puVar9[0x10];
            puVar8[0x11] = uVar2;
            puVar8[0x12] = uVar3;
            puVar8[0x13] = uVar4;
            uVar2 = puVar9[0x15];
            uVar3 = puVar9[0x16];
            uVar4 = puVar9[0x17];
            puVar8[0x14] = puVar9[0x14];
            puVar8[0x15] = uVar2;
            puVar8[0x16] = uVar3;
            puVar8[0x17] = uVar4;
            uVar2 = puVar9[0x19];
            uVar3 = puVar9[0x1a];
            uVar4 = puVar9[0x1b];
            puVar8[0x18] = puVar9[0x18];
            puVar8[0x19] = uVar2;
            puVar8[0x1a] = uVar3;
            puVar8[0x1b] = uVar4;
            uVar2 = puVar9[0x1d];
            uVar3 = puVar9[0x1e];
            uVar4 = puVar9[0x1f];
            puVar8[0x1c] = puVar9[0x1c];
            puVar8[0x1d] = uVar2;
            puVar8[0x1e] = uVar3;
            puVar8[0x1f] = uVar4;
            lVar7 = lVar7 + -1;
            puVar1 = puVar8 + 0x20;
            param_6 = puVar9 + 0x20;
        } while (lVar7 != 0);
        uVar2 = puVar9[0x21];
        uVar3 = puVar9[0x22];
        uVar4 = puVar9[0x23];
        puVar8[0x20] = puVar9[0x20];
        puVar8[0x21] = uVar2;
        puVar8[0x22] = uVar3;
        puVar8[0x23] = uVar4;
        return param_1;
    }
    FUN_1407db590(puVar1, param_6, 0x310);
    return param_1;
}


undefined8 FUN_1402c8f30(ulonglong *param_1, longlong param_2, longlong param_3) {
    ulonglong uVar1;
    uint uVar2;
    undefined8 uVar3;
    ulonglong uVar4;

    uVar3 = FUN_1402ca3c0(param_1, param_2, param_3 + 0x18);
    if (((((((int) uVar3 < 0) || (uVar3 = FUN_1402ca3c0(param_1), (int) uVar3 < 0)) ||
           (uVar3 = FUN_1402ca3c0(param_1), (int) uVar3 < 0)) ||
          ((uVar3 = FUN_1402ca3c0(param_1), (int) uVar3 < 0 ||
                                            (uVar3 = FUN_1402ca3c0(param_1), (int) uVar3 < 0)))) ||
         ((uVar3 = FUN_1402ca3c0(param_1), (int) uVar3 < 0 ||
                                           ((uVar3 = FUN_1402ca3c0(param_1), (int) uVar3 < 0 ||
                                                                             (uVar3 = FUN_1402ca3c0(param_1),
                                                                                     (int) uVar3 < 0)))))) ||
        (uVar3 = FUN_1402ca3c0(param_1), (int) uVar3 < 0)) {
        return uVar3;
    }
    uVar1 = *(longlong * )(param_3 + 0x110) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *(uint * )(param_3 + 0x108);
        uVar4 = *(longlong * )(param_3 + 0x110) + (ulonglong) uVar2 * 4 + param_2;
        if (uVar4 < param_1[1] || uVar4 == param_1[1]) {
            uVar4 = 0;
            if (uVar2 != 0) {
                uVar4 = uVar1;
            }
            uVar1 = *(longlong * )(param_3 + 0x118) + param_2;
            *(ulonglong * )(param_3 + 0x110) = uVar4;
            if ((*param_1 <= uVar1) &&
                (uVar4 = *(longlong * )(param_3 + 0x118) + (ulonglong) uVar2 * 0xc + param_2,
                        uVar4 < param_1[1] || uVar4 == param_1[1])) {
                uVar4 = 0;
                if (uVar2 != 0) {
                    uVar4 = uVar1;
                }
                *(ulonglong * )(param_3 + 0x118) = uVar4;
                return 0;
            }
        }
    }
    return 0x80004005;
}


undefined8 FUN_1402c9080(ulonglong *param_1, longlong param_2, longlong param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong * )(param_3 + 0x20) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar4 = *(uint * )(param_3 + 0x18),
                uVar2 = *(longlong * )(param_3 + 0x20) + (ulonglong) uVar4 * 0x128 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar5 = 0;
        uVar2 = uVar5;
        if (uVar4 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong * )(param_3 + 0x20) = uVar2;
        if (uVar4 != 0) {
            do {
                uVar3 = FUN_1402c8f30(param_1);
                if ((int) uVar3 < 0) {
                    return uVar3;
                }
                uVar4 = (int) uVar5 + 1;
                uVar5 = (ulonglong) uVar4;
            } while (uVar4 < *(uint * )(param_3 + 0x18));
        }
        return 0;
    }
    return 0x80004005;
}


undefined8 FUN_1402c9130(ulonglong *param_1, longlong param_2, longlong param_3) {
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = *(longlong * )(param_3 + 0x20) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = (ulonglong) * (uint * )(param_3 + 0x18) * 0x30 + *(longlong * )(param_3 + 0x20) + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar2 = 0;
        if (*(uint * )(param_3 + 0x18) != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong * )(param_3 + 0x20) = uVar2;
        uVar1 = *(longlong * )(param_3 + 0x30) + param_2;
        if ((*param_1 <= uVar1) &&
            (uVar2 = *(longlong * )(param_3 + 0x30) + (ulonglong) * (uint * )(param_3 + 0x28) + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            uVar2 = 0;
            if (*(uint * )(param_3 + 0x28) != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong * )(param_3 + 0x30) = uVar2;
            return 0;
        }
    }
    return 0x80004005;
}


undefined8 FUN_1402c91b0(ulonglong *param_1, longlong param_2, longlong param_3) {
    ulonglong uVar1;
    undefined8 uVar2;
    ulonglong uVar3;

    uVar3 = param_2 + *(longlong * )(param_3 + 0x10);
    if ((*param_1 <= uVar3) &&
        (uVar1 = *(longlong * )(param_3 + 0x10) + (ulonglong) * (uint * )(param_3 + 8) * 2 + param_2,
                uVar1 < param_1[1] || uVar1 == param_1[1])) {
        uVar1 = 0;
        if (*(uint * )(param_3 + 8) != 0) {
            uVar1 = uVar3;
        }
        *(ulonglong * )(param_3 + 0x10) = uVar1;
        uVar2 = FUN_1402ca460(param_1, param_2);
        if (-1 < (int) uVar2) {
            uVar2 = FUN_1402ca420(param_1, param_2, param_3 + 0x28);
            if (-1 < (int) uVar2) {
                uVar2 = FUN_1402ca530(param_1);
                if (-1 < (int) uVar2) {
                    uVar2 = FUN_1402ca420(param_1, param_2, param_3 + 0x48);
                    if (-1 < (int) uVar2) {
                        uVar2 = 0;
                    }
                }
            }
        }
        return uVar2;
    }
    return 0x80004005;
}


undefined8 FUN_1402c9270(ulonglong *param_1, longlong param_2, int *param_3) {
    uint uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;

    if (*param_3 != 0x49444546) {
        return 0xa0100001;
    }
    if (param_3[1] != 0x29) {
        return 0xa0100002;
    }
    uVar4 = param_2 + *(longlong * )(param_3 + 10);
    if ((*param_1 <= uVar4) &&
        (uVar2 = (ulonglong)(uint)
        param_3[8] * 0x40 + *(longlong * )(param_3 + 10) + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar6 = 0;
        uVar2 = uVar6;
        if (param_3[8] != 0) {
            uVar2 = uVar4;
        }
        *(ulonglong * )(param_3 + 10) = uVar2;
        uVar3 = FUN_1402ca5e0(param_1, param_2);
        if ((int) uVar3 < 0) {
            return uVar3;
        }
        uVar4 = *(longlong * )(param_3 + 0x12) + param_2;
        if (*param_1 <= uVar4) {
            uVar1 = param_3[0x10];
            uVar2 = *(longlong * )(param_3 + 0x12) + (ulonglong) uVar1 * 0x58 + param_2;
            if (uVar2 < param_1[1] || uVar2 == param_1[1]) {
                uVar2 = uVar6;
                if (uVar1 != 0) {
                    uVar2 = uVar4;
                }
                *(ulonglong * )(param_3 + 0x12) = uVar2;
                uVar4 = uVar6;
                if (uVar1 != 0) {
                    do {
                        uVar3 = FUN_1402c91b0(param_1, ((ulonglong) uVar1 * 0x58 + 0xf & 0xfffffffffffffff0) +
                                                       uVar2,
                                              uVar4 * 0x58 + *(longlong * )(param_3 + 0x12) + param_1[2]);
                        if ((int) uVar3 < 0) {
                            return uVar3;
                        }
                        uVar5 = (int) uVar4 + 1;
                        uVar4 = (ulonglong) uVar5;
                    } while (uVar5 < (uint) param_3[0x10]);
                }
                uVar4 = *(longlong * )(param_3 + 0x16) + param_2;
                if ((*param_1 <= uVar4) &&
                    (uVar2 = *(longlong * )(param_3 + 0x16) + (ulonglong)(uint)
                    param_3[0x14] * 2 + param_2,
                            uVar2 < param_1[1] || uVar2 == param_1[1])) {
                    uVar2 = uVar6;
                    if (param_3[0x14] != 0) {
                        uVar2 = uVar4;
                    }
                    *(ulonglong * )(param_3 + 0x16) = uVar2;
                    uVar4 = *(longlong * )(param_3 + 0x1a) + param_2;
                    if ((*param_1 <= uVar4) &&
                        (uVar2 = (ulonglong)(uint)
                        param_3[0x18] * 0x40 + *(longlong * )(param_3 + 0x1a) +
                        param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                        uVar2 = uVar6;
                        if (param_3[0x18] != 0) {
                            uVar2 = uVar4;
                        }
                        *(ulonglong * )(param_3 + 0x1a) = uVar2;
                        uVar3 = FUN_1402ca6c0(param_1, param_2);
                        if ((int) uVar3 < 0) {
                            return uVar3;
                        }
                        uVar4 = *(longlong * )(param_3 + 0x22) + param_2;
                        if ((*param_1 <= uVar4) &&
                            (uVar2 = (ulonglong)(uint)
                            param_3[0x20] * 0xb0 + *(longlong * )(param_3 + 0x22) +
                            param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                            uVar2 = uVar6;
                            if (param_3[0x20] != 0) {
                                uVar2 = uVar4;
                            }
                            *(ulonglong * )(param_3 + 0x22) = uVar2;
                            uVar3 = FUN_1402ca530(param_1, param_2);
                            if ((int) uVar3 < 0) {
                                return uVar3;
                            }
                            uVar4 = *(longlong * )(param_3 + 0x2a) + param_2;
                            if ((*param_1 <= uVar4) &&
                                (uVar2 = (ulonglong)(uint)
                                param_3[0x28] * 0x40 + *(longlong * )(param_3 + 0x2a) +
                                param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                uVar2 = uVar6;
                                if (param_3[0x28] != 0) {
                                    uVar2 = uVar4;
                                }
                                *(ulonglong * )(param_3 + 0x2a) = uVar2;
                                uVar3 = FUN_1402ca420(param_1, param_2, param_3 + 0x2c);
                                if ((int) uVar3 < 0) {
                                    return uVar3;
                                }
                                uVar3 = FUN_1402ca7c0(param_1);
                                if ((int) uVar3 < 0) {
                                    return uVar3;
                                }
                                uVar4 = *(longlong * )(param_3 + 0x36) + param_2;
                                if ((*param_1 <= uVar4) &&
                                    (uVar2 = *(longlong * )(param_3 + 0x36) + (ulonglong)(uint)
                                    param_3[0x34] * 8 +
                                    param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                    uVar2 = uVar6;
                                    if (param_3[0x34] != 0) {
                                        uVar2 = uVar4;
                                    }
                                    *(ulonglong * )(param_3 + 0x36) = uVar2;
                                    uVar4 = *(longlong * )(param_3 + 0x3a) + param_2;
                                    if ((*param_1 <= uVar4) &&
                                        (uVar2 = *(longlong * )(param_3 + 0x3a) + (ulonglong)(uint)
                                        param_3[0x38] * 2 +
                                        param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                        uVar2 = uVar6;
                                        if (param_3[0x38] != 0) {
                                            uVar2 = uVar4;
                                        }
                                        *(ulonglong * )(param_3 + 0x3a) = uVar2;
                                        uVar4 = *(longlong * )(param_3 + 0x3e) + param_2;
                                        if ((*param_1 <= uVar4) &&
                                            (uVar2 = *(longlong * )(param_3 + 0x3e) + (ulonglong)(uint)
                                            param_3[0x3c] * 2 +
                                            param_2, uVar2 < param_1[1] || uVar2 == param_1[1])) {
                                            if (param_3[0x3c] != 0) {
                                                uVar6 = uVar4;
                                            }
                                            *(ulonglong * )(param_3 + 0x3e) = uVar6;
                                            uVar3 = FUN_1402ca420(param_1, param_2, param_3 + 0x48);
                                            if ((int) uVar3 < 0) {
                                                return uVar3;
                                            }
                                            uVar3 = FUN_1402cb010(param_1);
                                            if ((int) uVar3 < 0) {
                                                return uVar3;
                                            }
                                            uVar3 = FUN_1402cb010(param_1);
                                            if ((int) uVar3 < 0) {
                                                return uVar3;
                                            }
                                            uVar3 = FUN_1402cb010(param_1);
                                            if ((int) uVar3 < 0) {
                                                return uVar3;
                                            }
                                            return 0;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0x80004005;
}


undefined8 *FUN_1402c9600(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = DAT_140c657f0;
    *param_1 = &PTR_LAB_140b627f0;
    plVar3 = (longlong * )(lVar2 + 0x30);
    *(undefined4 * )(param_1 + 3) = 0;
    *(undefined4 * )(param_1 + 9) = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *(undefined4 * )(param_1 + 1) = 1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
    param_1[2] = 0;
    *(undefined4 * )(param_1 + 6) = 0;
    param_1[7] = 0;
    if (param_1[0xe] == 0) {
        param_1[0xe] = plVar3;
        plVar1 = param_1 + 0xf;
        *plVar1 = *plVar3;
        *plVar3 = (longlong) param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x70) = plVar1;
        }
    }
    return param_1;
}


void FUN_1402c9680(undefined8 *param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined4 local_18[4];

    *param_1 = &PTR_LAB_140b627f0;
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code * *)(*(longlong *) param_1[4] + 0x20))((longlong *) param_1[4], local_18);
        (**(code * *)(*(longlong *) param_1[4] + 8))();
        param_1[4] = 0;
    }
    if ((longlong *) param_1[5] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[5] + 8))();
        param_1[5] = 0;
    }
    if ((longlong *) param_1[7] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[7] + 8))();
        param_1[7] = 0;
    }
    if (*(int *) (param_1 + 6) != 0) {
        FUN_1400b6120(DAT_140c657f0 + 0x38, param_1 + 2);
    }
    FUN_14018b900(param_1[2], 0);
    if ((undefined8 *) param_1[0xe] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 * )(param_1[0xf] + 0x70) = param_1[0xe];
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    lVar1 = param_1[0xc];
    for (lVar2 = param_1[0xb]; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
        FUN_1402d3190(lVar2);
    }
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb], 0);
    }
    return;
}


undefined8 FUN_1402c9790(ulonglong param_1, short *param_2) {
    ulonglong **ppuVar1;
    undefined auVar2[16];
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong *puVar7;
    ulonglong *puVar8;

    if ((param_2 != (short *) 0x0) && (*param_2 != 0)) {
        lVar4 = -1;
        do {
            lVar3 = lVar4 + 1;
            lVar4 = lVar4 + 1;
        } while (param_2[lVar3] != 0);
        uVar6 = (ulonglong)((int) lVar4 + 1);
        auVar2 = ZEXT816(2) * ZEXT816(uVar6);
        uVar5 = SUB168(auVar2, 0);
        if (SUB168(auVar2 >> 0x40, 0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        uVar5 = FUN_14018b280(uVar5, 0);
        *(undefined8 * )(param_1 + 0x10) = uVar5;
        FUN_1407db590(uVar5, param_2, uVar6 * 2);
        uVar5 = FUN_1402c99c0(param_1);
        lVar4 = DAT_140c657f0;
        if (-1 < (int) uVar5) {
            *(undefined4 * )(param_1 + 0x30) = 1;
            if (*(longlong * )(lVar4 + 0x38) == *(longlong * )(lVar4 + 0x40)) {
                FUN_1400290d0(lVar4 + 0x38);
            }
            uVar6 = (**(code * *)(lVar4 + 0x50))(param_1 + 0x10);
            ppuVar1 = (ulonglong * *)
                    (*(longlong * )(lVar4 + 0x48) + (uVar6 % *(ulonglong * )(lVar4 + 0x40)) * 8);
            puVar7 = (ulonglong *) FUN_14018b280(0x20);
            puVar8 = (ulonglong *) 0x0;
            if (puVar7 != (ulonglong *) 0x0) {
                puVar8 = *ppuVar1;
                *puVar7 = uVar6;
                puVar7[1] = (ulonglong) puVar8;
                uVar6 = *(ulonglong * )(param_1 + 0x10);
                puVar7[3] = param_1;
                puVar7[2] = uVar6;
                puVar8 = puVar7;
            }
            *ppuVar1 = puVar8;
            *(longlong * )(lVar4 + 0x38) = *(longlong * )(lVar4 + 0x38) + 1;
            FUN_1401b6bf0();
            uVar5 = 0;
        }
        return uVar5;
    }
    return 0x80070057;
}


void FUN_1402c98e0(longlong param_1) {
    longlong lVar1;

    if (*(longlong * *)(param_1 + 0x38) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x38) + 8))();
        *(undefined8 * )(param_1 + 0x38) = 0;
    }
    lVar1 = DAT_140c657f0;
    if (*(int *) (param_1 + 0x30) != 0) {
        *(undefined4 * )(param_1 + 0x30) = 0;
        FUN_1400b6120(lVar1 + 0x38, param_1 + 0x10);
        return;
    }
    return;
}


void FUN_1402c9930(longlong param_1) {
    uint uVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if ((int) ((*(longlong * )(param_1 + 0x60) - *(longlong * )(param_1 + 0x58)) / 0xb0) != 0) {
        do {
            FUN_1402d35b0(uVar2 * 0xb0 + *(longlong * )(param_1 + 0x58));
            uVar1 = (int) uVar2 + 1;
            uVar2 = (ulonglong) uVar1;
        } while (uVar1 < (uint)((*(longlong * )(param_1 + 0x60) - *(longlong * )(param_1 + 0x58)) / 0xb0));
    }
    return;
}


int FUN_1402c99c0(longlong param_1) {
    int iVar1;
    undefined8 uVar2;
    undefined4 local_28[2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    local_28[0] = 0;
    local_18 = FUN_1402c9a70;
    *(undefined4 * )(param_1 + 0x1c) = 0;
    local_10 = 0;
    local_20 = param_1;
    iVar1 = FUN_1401b6de0(param_1, *(undefined8 * )(param_1 + 0x10), param_1 + 0x28, param_1 + 0x20,
                          local_28);
    if (iVar1 < 0) {
        FUN_1401c5690(0x170, param_1 + 0x28, 0);
        uVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x20))();
        *(undefined8 * )(param_1 + 0x40) = uVar2;
        FUN_1407e4830(uVar2, 0, 0x170);
        *(undefined4 * )(param_1 + 0x18) = 3;
    } else {
        *(undefined4 * )(param_1 + 0x18) = 0;
        iVar1 = 0;
    }
    return iVar1;
}


void FUN_1402c9a70(longlong param_1) {
    undefined4 local_18[6];

    local_18[0] = 0;
    if (*(int *) (param_1 + 0x18) != 3) {
        FUN_1402c9ae0(param_1, local_18, 3);
    }
    return;
}


int FUN_1402c9aa0(longlong param_1) {
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *) (param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1402c9680();
            FUN_14018b900(param_1, 0);
        }
        iVar2 = 0;
    }
    return iVar2;
}


undefined8 FUN_1402c9ae0(longlong param_1, undefined8 param_2, int param_3) {
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong **pplVar5;
    uint uVar6;
    ulonglong uVar7;

    if (param_3 < *(int *) (param_1 + 0x18)) {
        return 1;
    }
    if (*(int *) (param_1 + 0x18) == 0) {
        *(undefined4 * )(param_1 + 0x18) = 1;
    }
    uVar7 = 0;
    if (*(int *) (param_1 + 0x18) == 1) {
        if (*(longlong * *)(param_1 + 0x20) == (longlong *) 0x0) {
            FUN_1401c5690(0x170, param_1 + 0x28, 0);
            uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x20))();
            *(undefined8 * )(param_1 + 0x40) = uVar3;
            FUN_1407e4830(uVar3, 0, 0x170);
            *(undefined4 * )(param_1 + 0x18) = 3;
            return 1;
        }
        uVar3 = (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x20))();
        if ((int) uVar3 == 0) {
            return uVar3;
        }
        FUN_1402c9db0(param_1);
        if (*(longlong * *)(param_1 + 0x20) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x20) + 8))();
            *(undefined8 * )(param_1 + 0x20) = 0;
        }
        *(undefined4 * )(param_1 + 0x18) = 2;
    }
    if (*(int *) (param_1 + 0x18) == 2) {
        lVar4 = *(longlong * )(param_1 + 0x60) - *(longlong * )(param_1 + 0x58);
        iVar2 = (int) (lVar4 >> 0x3f);
        if ((int) (lVar4 / 0xb0) + iVar2 != iVar2) {
            do {
                pplVar5 = (longlong * *)(uVar7 * 0xb0 + *(longlong * )(param_1 + 0x58));
                plVar1 = *pplVar5;
                if (plVar1 != (longlong *) 0x0) {
                    iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, param_2);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    FUN_1402d3300(pplVar5);
                    if (*pplVar5 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar5 + 8))();
                        *pplVar5 = (longlong *) 0x0;
                    }
                }
                uVar6 = (int) uVar7 + 1;
                uVar7 = (ulonglong) uVar6;
            } while (uVar6 < (uint)((*(longlong * )(param_1 + 0x60) - *(longlong * )(param_1 + 0x58)) / 0xb0
            ));
        }
        *(undefined4 * )(param_1 + 0x18) = 3;
    }
    return 1;
}


undefined8 FUN_1402c9c90(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    int iVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong **pplVar5;
    uint uVar6;
    ulonglong uVar7;

    if (*(int *) (param_1 + 0x1c) != 0) {
        return 1;
    }
    if ((*(int *) (param_1 + 0x18) != 3) && (uVar3 = FUN_1402c9ae0(param_1, param_2, 3), (int) uVar3 == 0)
            ) {
        return uVar3;
    }
    lVar4 = *(longlong * )(param_1 + 0x60) - *(longlong * )(param_1 + 0x58);
    uVar7 = 0;
    iVar2 = (int) (lVar4 >> 0x3f);
    if ((int) (lVar4 / 0xb0) + iVar2 != iVar2) {
        do {
            pplVar5 = (longlong * *)(uVar7 * 0xb0 + *(longlong * )(param_1 + 0x58));
            if (*(int *) (pplVar5 + 3) == 0) {
                plVar1 = *pplVar5;
                if (plVar1 != (longlong *) 0x0) {
                    iVar2 = (**(code * *)(*plVar1 + 0x20))(plVar1, param_2);
                    if (iVar2 == 0) {
                        return 0;
                    }
                    FUN_1402d3300(pplVar5);
                    if (*pplVar5 != (longlong *) 0x0) {
                        (**(code * *)(**pplVar5 + 8))();
                        *pplVar5 = (longlong *) 0x0;
                    }
                }
                *(undefined4 * )(pplVar5 + 3) = 1;
            }
            uVar6 = (int) uVar7 + 1;
            uVar7 = (ulonglong) uVar6;
        } while (uVar6 < (uint)((*(longlong * )(param_1 + 0x60) - *(longlong * )(param_1 + 0x58)) / 0xb0));
    }
    *(undefined4 * )(param_1 + 0x1c) = 1;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402c9db0(longlong param_1) {
    longlong lVar1;
    uint uVar2;
    int iVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    wchar_t *pwVar6;
    undefined auStack2888[32];
    undefined ***local_b28;
    undefined ***local_b20;
    undefined **local_b18;
    longlong local_b10;
    LPVOID local_b08;
    undefined4 local_b00[2];
    undefined **local_af8;
    undefined8 uStack2800;
    undefined8 local_ae8;
    undefined8 uStack2784;
    undefined **local_ad8;
    wchar_t *local_ad0;
    LPVOID local_ac8;
    undefined8 local_ac0;
    undefined **local_ab8;
    longlong local_ab0;
    LPVOID local_aa8;
    undefined **local_a98;
    wchar_t *local_a90;
    LPVOID local_a88;
    undefined8 local_a80;
    undefined4 local_a78;
    undefined4 uStack2676;
    undefined4 uStack2672;
    undefined4 uStack2668;
    undefined4 local_a68;
    undefined4 uStack2660;
    uint uStack2656;
    undefined4 uStack2652;
    undefined8 local_a58[2];
    undefined2 local_a48;
    undefined local_a46[510];
    undefined local_848[512];
    undefined local_648[512];
    undefined local_448[512];
    undefined local_248[528];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack2888;
    uVar2 = (**(code * *)(**(longlong * *)(param_1 + 0x20) + 0x28))(*(longlong * *)(param_1 + 0x20), 0);
    uVar5 = 0;
    if (-1 < (int) uVar2) {
        uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x20))();
        *(undefined8 * )(param_1 + 0x40) = uVar4;
        local_b10 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x10))();
        local_b18 = *(undefined * **)(param_1 + 0x40);
        local_b10 = local_b10 + (longlong) local_b18;
        local_b08 = (LPVOID) 0x0;
        uVar2 = FUN_1402c9270(&local_b18, local_b18 + 0x2e);
        if (-1 < (int) uVar2) {
            iVar3 = *(int *) (*(longlong * )(param_1 + 0x40) + 0x20);
            if ((iVar3 != 0) &&
                (FUN_1402ca240(param_1 + 0x50, iVar3), *(int *) (*(longlong * )(param_1 + 0x40) + 0x20) != 0)) {
                do {
                    lVar1 = *(longlong * )(*(longlong * )(param_1 + 0x40) + 0x28);
                    local_b28 = (undefined ***) local_448;
                    FUN_1407df8dc(*(undefined8 * )(param_1 + 0x10), local_a58, local_648, local_848);
                    local_b00[0] = 0x2e;
                    local_a48 = 0;
                    FUN_1407e4830(local_a46, 0, 0x1fe);
                    FUN_1407e16d0(&local_a48, 0x100, local_848);
                    FUN_1407e16d0(&local_a48, 0x100, local_b00);
                    FUN_1407e16d0(&local_a48, 0x100,
                                  *(longlong * )(*(longlong * )(param_1 + 0x40) + 0x128) +
                                  (ulonglong)
                                  * (uint * )(*(longlong * )(*(longlong * )(param_1 + 0x40) + 0x138) +
                                              (ulonglong) * (uint * )(uVar5 * 0x40 + lVar1) * 4) * 2);
                    local_b28 = (undefined ***) local_448;
                    FUN_1407e1758(local_248, local_a58, local_648, &local_a48);
                    local_b28 = &local_af8;
                    pwVar6 = (wchar_t *) (uVar5 * 0xb0 + *(longlong * )(param_1 + 0x58));
                    local_af8 = (undefined * *)((ulonglong) local_af8 & 0xffffffff00000000);
                    local_ae8 = FUN_1402d3250;
                    *(longlong * )(pwVar6 + 0x10) = param_1;
                    uStack2784 = 0;
                    uStack2800 = pwVar6;
                    uVar2 = FUN_1401b6de0();
                    if ((int) uVar2 < 0) {
                        FUN_1401c5690(0x1b0, pwVar6 + 4, 0);
                        uVar4 = (**(code * *)(**(longlong * *)(pwVar6 + 4) + 0x20))();
                        *(undefined8 * )(pwVar6 + 8) = uVar4;
                        FUN_1407e4830(uVar4, 0, 0x1b0);
                        goto LAB_1402c9fd9;
                    }
                    uVar2 = (int) uVar5 + 1;
                    uVar5 = (ulonglong) uVar2;
                } while (uVar2 < *(uint * )(*(longlong * )(param_1 + 0x40) + 0x20));
            }
            goto LAB_1402ca1c5;
        }
    }
    LAB_1402c9fd9:
    if (uVar2 != 0xa0230002) {
        local_b10 = 0;
        local_b18 = &PTR_LAB_140b5e648;
        local_b08 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_b18);
        local_ab8 = local_b18;
        local_ab0 = local_b10;
        local_af8 = &PTR_LAB_140b5e648;
        uStack2800 = L"Result";
        local_aa8 = local_b08;
        local_ae8 = (code *) TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_af8);
        local_ac0 = *(undefined8 * )(param_1 + 0x10);
        uVar5 = uStack2784 & 0xffffffff00000000;
        uStack2784 = uVar5 | uVar2;
        local_ad8 = &PTR_LAB_140b5e648;
        uStack2784._4_4_ = (undefined4)(uVar5 >> 0x20);
        local_af8 = &PTR_LAB_140b5e640;
        local_a68 = (undefined4) local_ae8;
        uStack2660 = local_ae8._4_4_;
        uStack2652 = uStack2784._4_4_;
        local_ad0 = L"FileName";
        local_a78 = 0x40b5e640;
        uStack2676 = 1;
        uStack2672 = (undefined4) uStack2800;
        uStack2668 = uStack2800._4_4_;
        uStack2656 = uVar2;
        local_ac8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720, &local_ad8);
        local_a90 = local_ad0;
        local_ad8 = &PTR_LAB_140b5e638;
        local_a98 = &PTR_LAB_140b5e638;
        local_a58[0] = 0x141deaa78;
        local_b20 = &local_ab8;
        local_a88 = local_ac8;
        local_b28 = (undefined * **) & local_a78;
        local_a80 = local_ac0;
        iVar3 = FUN_1401971e0(&DAT_140c8a564, 0x10, local_a58, &local_a98);
        local_ad8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_ac8);
        local_af8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_ae8);
        local_b18 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720, local_b08);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    if (*(longlong * *)(param_1 + 0x28) != (longlong *) 0x0) {
        (**(code * *)(**(longlong * *)(param_1 + 0x28) + 8))();
        *(undefined8 * )(param_1 + 0x28) = 0;
    }
    FUN_1401c5690(0x170, param_1 + 0x28, 0);
    uVar4 = (**(code * *)(**(longlong * *)(param_1 + 0x28) + 0x20))();
    *(undefined8 * )(param_1 + 0x40) = uVar4;
    FUN_1407e4830(uVar4, 0, 0x170);
    LAB_1402ca1c5:
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack2888);
    return;
}


undefined4 FUN_1402ca200(longlong param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    if (*(int *) (param_1 + 0x18) != 3) {
        FUN_1402c9ae0(param_1, local_18, 1);
    }
    return *(undefined4 * )(*(longlong * )(param_1 + 0x40) + 0x20);
}


void FUN_1402ca240(longlong param_1, ulonglong param_2) {
    ulonglong uVar1;
    undefined local_b8[16];
    undefined8 local_a8;
    undefined4 local_a0;
    undefined8 local_98;
    undefined8 local_88;
    undefined8 local_58;
    undefined local_48[16];
    undefined8 local_38;
    undefined local_28[16];
    undefined8 local_18;
    undefined4 local_10;

    local_a0 = 0;
    local_88 = 0;
    local_58 = 0;
    local_48 = ZEXT816(0);
    local_28 = ZEXT816(0);
    local_b8 = ZEXT816(0);
    local_38 = 0;
    local_18 = 0;
    local_10 = 0;
    local_a8 = 0;
    local_98 = 0;
    uVar1 = (*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 8)) / 0xb0;
    if (param_2 < uVar1) {
        FUN_1402ca320(param_1, *(longlong * )(param_1 + 8) + param_2 * 0xb0,
                      *(undefined8 * )(param_1 + 0x10));
        FUN_1402d3190(local_b8);
        return;
    }
    FUN_1402ca870(param_1, *(undefined8 * )(param_1 + 0x10), param_2 - uVar1, local_b8);
    FUN_1402d3190(local_b8);
    return;
}


longlong FUN_1402ca320(longlong param_1, longlong param_2, longlong param_3) {
    longlong lVar1;
    longlong lVar2;

    lVar2 = FUN_1402caf00(param_3, *(undefined8 * )(param_1 + 0x10), param_2);
    lVar1 = *(longlong * )(param_1 + 0x10);
    for (; lVar2 != lVar1; lVar2 = lVar2 + 0xb0) {
        FUN_1402d3190(lVar2);
    }
    param_3 = param_3 - param_2;
    *(longlong * )(param_1 + 0x10) =
            *(longlong * )(param_1 + 0x10) +
            (SUB168(SEXT816(-0x2e8ba2e8ba2e8ba3) * SEXT816(param_3) >> 0x45, 0) -
             (param_3 / -0x638e38e38e38e38e + (param_3 >> 0x3f))) * 0xb0;
    return param_2;
}


undefined8 FUN_1402ca3c0(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong * )(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong * )(param_3 + 2) + (ulonglong) uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            *(ulonglong * )(param_3 + 2) = uVar3;
            uVar1 = *(longlong * )(param_3 + 4) + param_2;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong * )(param_3 + 4) + (ulonglong) uVar2 * 4 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong * )(param_3 + 4) = uVar3;
                return 0;
            }
        }
    }
    return 0x80004005;
}


undefined8 FUN_1402ca420(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = *(longlong * )(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = *(longlong * )(param_3 + 2) + (ulonglong) * param_3 * 2 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar2 = 0;
        if (*param_3 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong * )(param_3 + 2) = uVar2;
        return 0;
    }
    return 0x80004005;
}


undefined8 FUN_1402ca460(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar1 = *(longlong * )(param_3 + 2) + param_2;
    if (uVar1 < *param_1) {
        return 0x80004005;
    }
    uVar2 = *param_3;
    uVar3 = *(longlong * )(param_3 + 2) + (ulonglong) uVar2 * 0x28 + param_2;
    if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
        uVar6 = 0;
        uVar3 = uVar6;
        if (uVar2 != 0) {
            uVar3 = uVar1;
        }
        *(ulonglong * )(param_3 + 2) = uVar3;
        if (uVar2 != 0) {
            do {
                uVar4 = FUN_1402c9080(param_1, ((ulonglong) uVar2 * 0x28 + 0xf & 0xfffffffffffffff0) + uVar3,
                                      param_1[2] + uVar6 * 0x28 + *(longlong * )(param_3 + 2));
                if ((int) uVar4 < 0) {
                    return uVar4;
                }
                uVar5 = (int) uVar6 + 1;
                uVar6 = (ulonglong) uVar5;
            } while (uVar5 < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}


undefined8 FUN_1402ca530(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    int iVar5;
    ulonglong uVar6;

    uVar1 = *(longlong * )(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = *param_3, uVar3 = *(longlong * )(param_3 + 2) + (ulonglong) uVar2 * 0x20 + param_2,
                uVar3 < param_1[1] || uVar3 == param_1[1])) {
        uVar6 = 0;
        uVar3 = uVar6;
        if (uVar2 != 0) {
            uVar3 = uVar1;
        }
        *(ulonglong * )(param_3 + 2) = uVar3;
        if (uVar2 != 0) {
            do {
                iVar5 = (int) uVar6;
                uVar4 = FUN_1402ca420(param_1);
                if ((int) uVar4 < 0) {
                    return uVar4;
                }
                uVar6 = (ulonglong)(iVar5 + 1U);
            } while (iVar5 + 1U < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}


undefined8 FUN_1402ca5e0(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;
    ulonglong uVar7;

    uVar7 = *(longlong * )(param_3 + 2) + param_2;
    if (*param_1 <= uVar7) {
        uVar6 = *param_3;
        uVar1 = *(longlong * )(param_3 + 2) + (ulonglong) uVar6 * 0x90 + param_2;
        if (uVar1 < param_1[1] || uVar1 == param_1[1]) {
            uVar1 = 0;
            if (uVar6 != 0) {
                uVar1 = uVar7;
            }
            uVar7 = 0;
            *(ulonglong * )(param_3 + 2) = uVar1;
            lVar4 = (ulonglong) uVar6 * 0x90 + uVar1;
            if (uVar6 != 0) {
                do {
                    lVar5 = uVar7 * 0x90 + param_1[2] + *(longlong * )(param_3 + 2);
                    uVar1 = *(longlong * )(lVar5 + 0x48) + lVar4;
                    if (uVar1 < *param_1) {
                        return 0x80004005;
                    }
                    uVar2 = (ulonglong) * (uint * )(lVar5 + 0x40) * 0x10 + *(longlong * )(lVar5 + 0x48) + lVar4;
                    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                        return 0x80004005;
                    }
                    uVar2 = 0;
                    if (*(uint * )(lVar5 + 0x40) != 0) {
                        uVar2 = uVar1;
                    }
                    *(ulonglong * )(lVar5 + 0x48) = uVar2;
                    uVar3 = FUN_1402ca420(param_1);
                    if ((int) uVar3 < 0) {
                        return uVar3;
                    }
                    uVar6 = (int) uVar7 + 1;
                    uVar7 = (ulonglong) uVar6;
                } while (uVar6 < *param_3);
            }
            return 0;
        }
    }
    return 0x80004005;
}


undefined8 FUN_1402ca6c0(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong * )(param_3 + 2) + param_2;
    if (uVar6 < *param_1) {
        return 0x80004005;
    }
    uVar5 = *param_3;
    uVar1 = (ulonglong) uVar5 * 0x28 + *(longlong * )(param_3 + 2) + param_2;
    if (param_1[1] <= uVar1 && uVar1 != param_1[1]) {
        return 0x80004005;
    }
    uVar1 = 0;
    if (uVar5 != 0) {
        uVar1 = uVar6;
    }
    uVar6 = 0;
    lVar4 = ((ulonglong) uVar5 * 0x28 + 0xf & 0xfffffffffffffff0) + uVar1;
    *(ulonglong * )(param_3 + 2) = uVar1;
    if (uVar5 != 0) {
        do {
            lVar3 = param_1[2] + uVar6 * 0x28 + *(longlong * )(param_3 + 2);
            uVar1 = *(longlong * )(lVar3 + 0x10) + lVar4;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar2 = *(longlong * )(lVar3 + 0x10) + (ulonglong) * (uint * )(lVar3 + 8) * 2 + lVar4;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (*(uint * )(lVar3 + 8) != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong * )(lVar3 + 0x10) = uVar2;
            uVar1 = *(longlong * )(lVar3 + 0x20) + lVar4;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar2 = *(longlong * )(lVar3 + 0x20) + (ulonglong) * (uint * )(lVar3 + 0x18) * 2 + lVar4;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (*(uint * )(lVar3 + 0x18) != 0) {
                uVar2 = uVar1;
            }
            uVar5 = (int) uVar6 + 1;
            uVar6 = (ulonglong) uVar5;
            *(ulonglong * )(lVar3 + 0x20) = uVar2;
        } while (uVar5 < *param_3);
    }
    return 0;
}


undefined8 FUN_1402ca7c0(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    uVar1 = *(longlong * )(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar4 = *param_3, uVar2 = *(longlong * )(param_3 + 2) + (ulonglong) uVar4 * 0x38 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar5 = 0;
        uVar2 = uVar5;
        if (uVar4 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong * )(param_3 + 2) = uVar2;
        if (uVar4 != 0) {
            do {
                uVar3 = FUN_1402c9130(param_1);
                if ((int) uVar3 < 0) {
                    return uVar3;
                }
                uVar4 = (int) uVar5 + 1;
                uVar5 = (ulonglong) uVar4;
            } while (uVar4 < *param_3);
        }
        return 0;
    }
    return 0x80004005;
}


void FUN_1402ca870(longlong param_1, longlong param_2, undefined8 *param_3, undefined8 param_4) {
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 **ppuVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    undefined(*pauVar8)[16];
    longlong lVar9;
    longlong lVar10;
    undefined8 *local_res18;
    undefined8 *local_118;
    undefined8 *local_110;
    undefined8 local_108;
    undefined8 local_100;
    undefined8 local_f8;
    undefined4 local_f0;
    undefined8 local_e8;
    undefined8 local_d8;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined8 *local_a8;
    undefined local_a0[32];
    undefined local_80[32];
    undefined4 local_60;

    if (param_3 != (undefined8 *) 0x0) {
        local_res18 = param_3;
        if ((undefined8 * )((*(longlong * )(param_1 + 0x18) - *(longlong * )(param_1 + 0x10)) / 0xb0) <
            param_3) {
            local_118 = (undefined8 * )
                    ((*(longlong * )(param_1 + 0x10) - *(longlong * )(param_1 + 8)) / 0xb0);
            ppuVar3 = &local_res18;
            if (param_3 <= local_118) {
                ppuVar3 = &local_118;
            }
            uVar4 = FUN_14018a3e0(((longlong) * ppuVar3 + (longlong) local_118) * 0xb0);
            lVar10 = (uVar4 / 0xb0) * 0xb0;
            lVar5 = FUN_14018b280(lVar10, 0);
            uVar6 = FUN_1402cac50(*(undefined8 * )(param_1 + 8), param_2, lVar5);
            uVar6 = FUN_1402cada0(uVar6, param_3, param_4);
            uVar6 = FUN_1402cac50(param_2, *(undefined8 * )(param_1 + 0x10), uVar6);
            lVar1 = *(longlong * )(param_1 + 0x10);
            for (lVar9 = *(longlong * )(param_1 + 8); lVar9 != lVar1; lVar9 = lVar9 + 0xb0) {
                FUN_1402d3190(lVar9);
            }
            if (*(longlong * )(param_1 + 8) != 0) {
                FUN_14018b900(*(longlong * )(param_1 + 8), 0);
            }
            *(longlong * )(param_1 + 8) = lVar5;
            *(undefined8 * )(param_1 + 0x10) = uVar6;
            *(longlong * )(param_1 + 0x18) = lVar10 + lVar5;
        } else {
            FUN_1402cabb0(&local_108, param_4);
            puVar7 = *(undefined8 * *)(param_1 + 0x10);
            local_110 = (undefined8 * )((*(longlong * )(param_1 + 0x10) - param_2) / 0xb0);
            local_118 = puVar7;
            if (param_3 < local_110) {
                FUN_1402cac50(puVar7 + (longlong) param_3 * -0x16, puVar7, puVar7);
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (longlong) param_3 * 0xb0;
                FUN_1402cadf0(param_2, puVar7 + (longlong) param_3 * -0x16, puVar7);
                puVar7 = (undefined8 * )((longlong) param_3 * 0xb0 + param_2);
            } else {
                param_3 = (undefined8 * )((longlong) param_3 - (longlong) local_110);
                local_res18 = param_3;
                if (param_3 != (undefined8 *) 0x0) {
                    pauVar8 = (undefined(*)[16])(puVar7 + 8);
                    do {
                        if (puVar7 != (undefined8 *) 0x0) {
                            *(undefined4 * )(pauVar8[-3] + 8) = local_f0;
                            *(undefined8 *) pauVar8[-2] = local_e8;
                            *puVar7 = local_108;
                            *(undefined8 * )(pauVar8[-4] + 8) = local_100;
                            *(undefined8 *) pauVar8[-3] = local_f8;
                            *(undefined8 *) pauVar8[-1] = local_d8;
                            *pauVar8 = CONCAT412(uStack188, CONCAT48(uStack192, CONCAT44(uStack196, local_c8)));
                            pauVar8[1] = CONCAT412(uStack172, CONCAT48(uStack176, CONCAT44(uStack180, local_b8)));
                            *(undefined8 **) pauVar8[2] = local_a8;
                            if (local_a8 != (undefined8 *) 0x0) {
                                (**(code * *) * local_a8)(local_a8);
                            }
                            FUN_1401ddfd0(pauVar8[2] + 8, local_a0);
                            FUN_140029c50(pauVar8[4] + 8, local_80);
                            *(undefined4 * )(pauVar8[6] + 8) = local_60;
                        }
                        puVar7 = puVar7 + 0x16;
                        pauVar8 = pauVar8[0xb];
                        param_3 = (undefined8 * )((longlong) param_3 - 1);
                    } while (param_3 != (undefined8 *) 0x0);
                }
                puVar2 = local_110;
                puVar7 = local_118;
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (longlong) local_res18 * 0xb0;
                FUN_1402cac50(param_2, local_118, *(undefined8 * )(param_1 + 0x10));
                *(longlong * )(param_1 + 0x10) = *(longlong * )(param_1 + 0x10) + (longlong) puVar2 * 0xb0;
            }
            FUN_1402cacb0(param_2, puVar7, &local_108);
            FUN_1402d3190(&local_108);
        }
    }
    return;
}


undefined8 *FUN_1402cabb0(undefined8 *param_1, undefined8 *param_2) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    *(undefined4 * )(param_1 + 3) = *(undefined4 * )(param_2 + 3);
    param_1[4] = param_2[4];
    param_1[6] = param_2[6];
    uVar2 = *(undefined4 * )((longlong) param_2 + 0x44);
    uVar3 = *(undefined4 * )(param_2 + 9);
    uVar4 = *(undefined4 * )((longlong) param_2 + 0x4c);
    *(undefined4 * )(param_1 + 8) = *(undefined4 * )(param_2 + 8);
    *(undefined4 * )((longlong) param_1 + 0x44) = uVar2;
    *(undefined4 * )(param_1 + 9) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x4c) = uVar4;
    uVar2 = *(undefined4 * )((longlong) param_2 + 0x54);
    uVar3 = *(undefined4 * )(param_2 + 0xb);
    uVar4 = *(undefined4 * )((longlong) param_2 + 0x5c);
    *(undefined4 * )(param_1 + 10) = *(undefined4 * )(param_2 + 10);
    *(undefined4 * )((longlong) param_1 + 0x54) = uVar2;
    *(undefined4 * )(param_1 + 0xb) = uVar3;
    *(undefined4 * )((longlong) param_1 + 0x5c) = uVar4;
    puVar1 = (undefined8 *) param_2[0xc];
    param_1[0xc] = puVar1;
    if (puVar1 != (undefined8 *) 0x0) {
        (**(code * *) * puVar1)();
    }
    FUN_1401ddfd0(param_1 + 0xd, param_2 + 0xd);
    FUN_140029c50(param_1 + 0x11, param_2 + 0x11);
    *(undefined4 * )(param_1 + 0x15) = *(undefined4 * )(param_2 + 0x15);
    return param_1;
}


longlong FUN_1402cac50(longlong param_1, longlong param_2, longlong param_3) {
    if (param_1 != param_2) {
        param_1 = param_1 - param_3;
        do {
            if (param_3 != 0) {
                FUN_1402cabb0(param_3, param_1 + param_3);
            }
            param_3 = param_3 + 0xb0;
        } while (param_1 + param_3 != param_2);
    }
    return param_3;
}


void FUN_1402cacb0(undefined4 *param_1, undefined4 *param_2, undefined8 *param_3) {
    undefined4 *puVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 *puVar6;

    if (param_1 != param_2) {
        puVar6 = param_1 + 0x10;
        do {
            *(undefined8 * )(puVar6 + -0x10) = *param_3;
            *(undefined8 * )(puVar6 + -0xe) = param_3[1];
            *(undefined8 * )(puVar6 + -0xc) = param_3[2];
            puVar6[-10] = *(undefined4 * )(param_3 + 3);
            *(undefined8 * )(puVar6 + -8) = param_3[4];
            *(undefined8 * )(puVar6 + -4) = param_3[6];
            uVar3 = *(undefined4 * )((longlong) param_3 + 0x44);
            uVar4 = *(undefined4 * )(param_3 + 9);
            uVar5 = *(undefined4 * )((longlong) param_3 + 0x4c);
            *puVar6 = *(undefined4 * )(param_3 + 8);
            puVar6[1] = uVar3;
            puVar6[2] = uVar4;
            puVar6[3] = uVar5;
            uVar3 = *(undefined4 * )((longlong) param_3 + 0x54);
            uVar4 = *(undefined4 * )(param_3 + 0xb);
            uVar5 = *(undefined4 * )((longlong) param_3 + 0x5c);
            puVar6[4] = *(undefined4 * )(param_3 + 10);
            puVar6[5] = uVar3;
            puVar6[6] = uVar4;
            puVar6[7] = uVar5;
            puVar2 = (undefined8 *) param_3[0xc];
            if (*(undefined8 * *)(puVar6 + 8) != puVar2) {
                if (puVar2 != (undefined8 *) 0x0) {
                    (**(code * *) * puVar2)();
                }
                if (*(longlong * *)(puVar6 + 8) != (longlong *) 0x0) {
                    (**(code * *)(**(longlong * *)(puVar6 + 8) + 8))();
                }
                *(undefined8 * )(puVar6 + 8) = param_3[0xc];
            }
            FUN_14017b020(puVar6 + 10, param_3 + 0xd);
            FUN_14004edb0(puVar6 + 0x12, param_3 + 0x11);
            puVar6[0x1a] = *(undefined4 * )(param_3 + 0x15);
            puVar1 = puVar6 + 0x1c;
            puVar6 = puVar6 + 0x2c;
        } while (puVar1 != param_2);
    }
    return;
}


longlong FUN_1402cada0(longlong param_1, longlong param_2, undefined8 param_3) {
    if (param_2 != 0) {
        do {
            if (param_1 != 0) {
                FUN_1402cabb0(param_1, param_3);
            }
            param_1 = param_1 + 0xb0;
            param_2 = param_2 + -1;
        } while (param_2 != 0);
    }
    return param_1;
}


undefined8 *FUN_1402cadf0(longlong param_1, longlong param_2, undefined8 *param_3) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;

    lVar6 = (param_2 - param_1) / 0xb0;
    if (0 < lVar6) {
        puVar5 = param_3 + 8;
        puVar7 = (undefined4 * )(param_2 + 0x40);
        do {
            param_3 = param_3 + -0x16;
            *param_3 = *(undefined8 * )(puVar7 + -0x3c);
            puVar5[-0x1d] = *(undefined8 * )(puVar7 + -0x3a);
            puVar5[-0x1c] = *(undefined8 * )(puVar7 + -0x38);
            *(undefined4 * )(puVar5 + -0x1b) = puVar7[-0x36];
            puVar5[-0x1a] = *(undefined8 * )(puVar7 + -0x34);
            puVar5[-0x18] = *(undefined8 * )(puVar7 + -0x30);
            uVar2 = puVar7[-0x2b];
            uVar3 = puVar7[-0x2a];
            uVar4 = puVar7[-0x29];
            *(undefined4 * )(puVar5 + -0x16) = puVar7[-0x2c];
            *(undefined4 * )((longlong) puVar5 + -0xac) = uVar2;
            *(undefined4 * )(puVar5 + -0x15) = uVar3;
            *(undefined4 * )((longlong) puVar5 + -0xa4) = uVar4;
            uVar2 = puVar7[-0x27];
            uVar3 = puVar7[-0x26];
            uVar4 = puVar7[-0x25];
            *(undefined4 * )(puVar5 + -0x14) = puVar7[-0x28];
            *(undefined4 * )((longlong) puVar5 + -0x9c) = uVar2;
            *(undefined4 * )(puVar5 + -0x13) = uVar3;
            *(undefined4 * )((longlong) puVar5 + -0x94) = uVar4;
            puVar1 = *(undefined8 * *)(puVar7 + -0x24);
            if ((undefined8 *) puVar5[-0x12] != puVar1) {
                if (puVar1 != (undefined8 *) 0x0) {
                    (**(code * *) * puVar1)();
                }
                if ((longlong *) puVar5[-0x12] != (longlong *) 0x0) {
                    (**(code * *)(*(longlong *) puVar5[-0x12] + 8))();
                }
                puVar5[-0x12] = *(undefined8 * )(puVar7 + -0x24);
            }
            FUN_14017b020(puVar5 + -0x11, puVar7 + -0x22);
            FUN_14004edb0(puVar5 + -0xd, puVar7 + -0x1a);
            lVar6 = lVar6 + -1;
            *(undefined4 * )(puVar5 + -9) = puVar7[-0x12];
            puVar5 = puVar5 + -0x16;
            puVar7 = puVar7 + -0x2c;
        } while (0 < lVar6);
    }
    return param_3;
}


undefined8 *FUN_1402caf00(longlong param_1, longlong param_2, undefined8 *param_3) {
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;

    lVar6 = (param_2 - param_1) / 0xb0;
    if (0 < lVar6) {
        puVar7 = (undefined4 * )(param_1 + 0x40);
        puVar5 = param_3 + 8;
        do {
            *param_3 = *(undefined8 * )(puVar7 + -0x10);
            puVar5[-7] = *(undefined8 * )(puVar7 + -0xe);
            puVar5[-6] = *(undefined8 * )(puVar7 + -0xc);
            *(undefined4 * )(puVar5 + -5) = puVar7[-10];
            puVar5[-4] = *(undefined8 * )(puVar7 + -8);
            puVar5[-2] = *(undefined8 * )(puVar7 + -4);
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *(undefined4 *) puVar5 = *puVar7;
            *(undefined4 * )((longlong) puVar5 + 4) = uVar2;
            *(undefined4 * )(puVar5 + 1) = uVar3;
            *(undefined4 * )((longlong) puVar5 + 0xc) = uVar4;
            uVar2 = puVar7[5];
            uVar3 = puVar7[6];
            uVar4 = puVar7[7];
            *(undefined4 * )(puVar5 + 2) = puVar7[4];
            *(undefined4 * )((longlong) puVar5 + 0x14) = uVar2;
            *(undefined4 * )(puVar5 + 3) = uVar3;
            *(undefined4 * )((longlong) puVar5 + 0x1c) = uVar4;
            puVar1 = *(undefined8 * *)(puVar7 + 8);
            if ((undefined8 *) puVar5[4] != puVar1) {
                if (puVar1 != (undefined8 *) 0x0) {
                    (**(code * *) * puVar1)();
                }
                if ((longlong *) puVar5[4] != (longlong *) 0x0) {
                    (**(code * *)(*(longlong *) puVar5[4] + 8))();
                }
                puVar5[4] = *(undefined8 * )(puVar7 + 8);
            }
            FUN_14017b020(puVar5 + 5, puVar7 + 10);
            FUN_14004edb0(puVar5 + 9, puVar7 + 0x12);
            lVar6 = lVar6 + -1;
            *(undefined4 * )(puVar5 + 0xd) = puVar7[0x1a];
            puVar5 = puVar5 + 0x16;
            param_3 = param_3 + 0x16;
            puVar7 = puVar7 + 0x2c;
        } while (0 < lVar6);
    }
    return param_3;
}


undefined8 FUN_1402cb010(ulonglong *param_1, longlong param_2, uint *param_3) {
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = *(longlong * )(param_3 + 2) + param_2;
    if ((*param_1 <= uVar1) &&
        (uVar2 = *(longlong * )(param_3 + 2) + (ulonglong) * param_3 * 4 + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar2 = 0;
        if (*param_3 != 0) {
            uVar2 = uVar1;
        }
        *(ulonglong * )(param_3 + 2) = uVar2;
        return 0;
    }
    return 0x80004005;
}


undefined8 *FUN_1402cb050(undefined8 *param_1) {
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = DAT_140c657f0;
    *param_1 = &PTR_LAB_140b628d0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[0x20] = 0;
    param_1[0x1f] = 0;
    param_1[0x22] = 0;
    param_1[0x21] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2c] = 0;
    param_1[0x2b] = 0;
    param_1[0x2d] = 0xffffffffffffffff;
    param_1[0x2e] = 0;
    param_1[0x31] = 0;
    param_1[0x30] = 0;
    param_1[0x32] = 0xffffffffffffffff;
    param_1[0x33] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    plVar3 = (longlong * )(lVar2 + 0x28);
    *(undefined4 * )(param_1 + 1) = 1;
    *(undefined4 * )(param_1 + 0x1e) = 0;
    param_1[8] = 0;
    if (param_1[0x3f] == 0) {
        param_1[0x3f] = plVar3;
        plVar1 = param_1 + 0x40;
        *plVar1 = *plVar3;
        *plVar3 = (longlong) param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x1f8) = plVar1;
        }
    }
    return param_1;
}


void FUN_1402cb170(undefined8 *param_1) {
    longlong lVar1;

    lVar1 = param_1[0x3e];
    *param_1 = &PTR_LAB_140b628d0;
    while (lVar1 != 0) {
        if ((undefined8 *) param_1[0x3e] != (undefined8 *) 0x0) {
            (***(code * **)(undefined8 * )
            param_1[0x3e])();
        }
        lVar1 = param_1[0x3e];
    }
    if ((undefined8 *) param_1[0x41] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x41] = param_1[0x42];
        if (param_1[0x42] != 0) {
            *(undefined8 * )(param_1[0x42] + 0x208) = param_1[0x41];
        }
        param_1[0x41] = 0;
        param_1[0x42] = 0;
    }
    if ((undefined8 *) param_1[0x41] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x41] = param_1[0x42];
    }
    if (param_1[0x42] != 0) {
        *(undefined8 * )(param_1[0x42] + 0x208) = param_1[0x41];
    }
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    if ((undefined8 *) param_1[0x3f] != (undefined8 *) 0x0) {
        *(undefined8 *) param_1[0x3f] = param_1[0x40];
    }
    if (param_1[0x40] != 0) {
        *(undefined8 * )(param_1[0x40] + 0x1f8) = param_1[0x3f];
    }
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    if (param_1[0x3e] != 0) {
        FUN_1401a4a00(param_1 + 0x3e);
    }
    if ((longlong *) param_1[0x3d] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[0x3d] + 8))();
    }
    if ((ulonglong) param_1[0x32] < (ulonglong) param_1[0x33]) {
        FUN_14018b900(param_1[0x34] + param_1[0x32] * 8, 0);
    }
    lVar1 = param_1[0x30];
    if (lVar1 != 0) {
        (***(code * **)(lVar1 + -0x10))(lVar1 + -0x10);
    }
    if ((ulonglong) param_1[0x2d] < (ulonglong) param_1[0x2e]) {
        FUN_14018b900(param_1[0x2f] + param_1[0x2d] * 8, 0);
    }
    lVar1 = param_1[0x2b];
    if (lVar1 != 0) {
        (***(code * **)(lVar1 + -0x10))(lVar1 + -0x10);
    }
    if (param_1[0x28] != 0) {
        FUN_14018b900(param_1[0x28], 0);
    }
    FUN_1402ced90(param_1[0x24], param_1[0x25]);
    if (param_1[0x24] != 0) {
        FUN_14018b900(param_1[0x24], 0);
    }
    FUN_1402ce6f0(param_1 + 0x21);
    FUN_1402ce560(param_1 + 0x1f);
    if ((longlong *) param_1[4] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[4] + 8))();
    }
    if ((longlong *) param_1[3] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[3] + 8))();
    }
    if ((longlong *) param_1[2] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[2] + 8))();
    }
    return;
}


void FUN_1402cb390(longlong param_1, undefined4 *param_2, undefined8 param_3, undefined8 param_4) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined auStack136[32];
    undefined4 *local_68[10];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack136;
    *(undefined8 * )(param_1 + 0x30) = param_4;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    local_68[0] = (undefined4 * )(param_1 + 0x50);
    *local_68[0] = *param_2;
    *(undefined4 * )(param_1 + 0x54) = uVar1;
    *(undefined4 * )(param_1 + 0x58) = uVar2;
    *(undefined4 * )(param_1 + 0x5c) = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    *(undefined4 * )(param_1 + 0x60) = param_2[4];
    *(undefined4 * )(param_1 + 100) = uVar1;
    *(undefined4 * )(param_1 + 0x68) = uVar2;
    *(undefined4 * )(param_1 + 0x6c) = uVar3;
    uVar1 = param_2[9];
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    *(undefined4 * )(param_1 + 0x70) = param_2[8];
    *(undefined4 * )(param_1 + 0x74) = uVar1;
    *(undefined4 * )(param_1 + 0x78) = uVar2;
    *(undefined4 * )(param_1 + 0x7c) = uVar3;
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    *(undefined4 * )(param_1 + 0x80) = param_2[0xc];
    *(undefined4 * )(param_1 + 0x84) = uVar1;
    *(undefined4 * )(param_1 + 0x88) = uVar2;
    *(undefined4 * )(param_1 + 0x8c) = uVar3;
    FUN_1401afc20(local_68, param_1 + 0x90);
    *(undefined(*)[16])(param_1 + 0x1b0) = ZEXT816(0);
    *(undefined4 * )(param_1 + 0x1c0) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x1c4) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x1c8) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x1cc) = 0x3f800000;
    *(undefined8 * )(param_1 + 0x1d0) = 0x3f800000;
    *(undefined4 * )(param_1 + 0x1d8) = 0x3f800000;
    *(undefined8 * )(param_1 + 0x1dc) = 0x3f800000;
    *(undefined8 * )(param_1 + 0x38) = 0;
    *(undefined4 * )(param_1 + 0x48) = 0;
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack136);
    return;
}


int FUN_1402cb440(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4) {
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong *plVar5;
    undefined8 local_res10;

    lVar2 = DAT_140c657f0;
    local_res10 = param_2;
    uVar4 = (**(code * *)(DAT_140c657f0 + 0x78))(&local_res10);
    puVar1 = *(ulonglong * *)(*(longlong * )(lVar2 + 0x70) + (uVar4 % *(ulonglong * )(lVar2 + 0x68)) * 8);
    do {
        if (puVar1 == (ulonglong *) 0x0) {
            LAB_1402cb4b1:
            plVar5 = (longlong *) FUN_14018b280(0x40);
            if (plVar5 != (longlong *) 0x0) {
                *plVar5 = (longlong) & PTR_LAB_140b62c10;
                *(undefined4 * )(plVar5 + 1) = 1;
                *plVar5 = (longlong) & PTR_LAB_140b628a0;
                plVar5[2] = 0;
                *(undefined4 * )(plVar5 + 3) = 0;
                plVar5[4] = 0;
                plVar5[5] = 0;
                plVar5[6] = 0;
                *(undefined4 * )(plVar5 + 7) = 0;
            }
            iVar3 = FUN_1402d57c0(plVar5, local_res10);
            if (iVar3 < 0) {
                if (plVar5 != (longlong *) 0x0) {
                    FUN_1402d5740(plVar5);
                    FUN_14018b900(plVar5, 0);
                }
            } else {
                LAB_1402cb510:
                if (*(longlong * *)(param_1 + 0x10) != plVar5) {
                    if (plVar5 != (longlong *) 0x0) {
                        (**(code * *) * plVar5)(plVar5);
                    }
                    if (*(longlong * *)(param_1 + 0x10) != (longlong *) 0x0) {
                        (**(code * *)(**(longlong * *)(param_1 + 0x10) + 8))();
                    }
                    *(longlong * *)(param_1 + 0x10) = plVar5;
                }
                (**(code * *)(*plVar5 + 8))(plVar5);
                *(undefined4 * )(param_1 + 0x28) = param_3;
                FUN_1402cb390(param_1, param_4);
                iVar3 = 0;
            }
            return iVar3;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code * *)(lVar2 + 0x80))(&local_res10, puVar1 + 2), iVar3 != 0)) {
            if ((longlong * *)(puVar1 + 3) != (longlong **) 0x0) {
                plVar5 = (longlong *) puVar1[3];
                (**(code * *) * plVar5)(plVar5);
                goto LAB_1402cb510;
            }
            goto LAB_1402cb4b1;
        }
        puVar1 = (ulonglong *) puVar1[1];
    } while (true);
}


void FUN_1402cb5a0(longlong param_1) {
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined4 local_18[4];

    uVar2 = 0;
    uVar3 = uVar2;
    uVar5 = uVar2;
    while (true) {
        lVar1 = *(longlong * )(param_1 + 0x18);
        local_18[0] = 0xffffffff;
        if (*(int *) (lVar1 + 0x18) != 3) {
            FUN_1402c9ae0(lVar1, local_18, 1);
        }
        uVar4 = uVar2;
        if (*(uint * )(*(longlong * )(lVar1 + 0x40) + 0x20) <= uVar3) break;
        FUN_1402d02d0(*(longlong * )(param_1 + 0xf8) + uVar5, param_1 + 0x50);
        uVar3 = uVar3 + 1;
        uVar5 = uVar5 + 0x1a0;
    }
    while (true) {
        lVar1 = *(longlong * )(param_1 + 0x18);
        local_18[0] = 0xffffffff;
        if (*(int *) (lVar1 + 0x18) != 3) {
            FUN_1402c9ae0(lVar1, local_18, 3);
        }
        if (*(uint * )(*(longlong * )(lVar1 + 0x40) + 0x80) <= (uint) uVar4) break;
        FUN_1402d26c0(uVar4 * 0x180 + *(longlong * )(param_1 + 0x108), param_1 + 0x50);
        uVar4 = (ulonglong)((uint) uVar4 + 1);
    }
    lVar1 = *(longlong * )(param_1 + 0x128) - *(longlong * )(param_1 + 0x120);
    lVar1 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar1) >> 0x40, 0) + lVar1;
    if (lVar1 >> 8 != lVar1 >> 0x3f) {
        do {
            FUN_1402d6030(uVar2 * 0x170 + *(longlong * )(param_1 + 0x120), param_1 + 0x50);
            lVar1 = *(longlong * )(param_1 + 0x128) - *(longlong * )(param_1 + 0x120);
            uVar2 = (ulonglong)((int) uVar2 + 1);
            lVar1 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar1) >> 0x40, 0) + lVar1;
        } while (uVar2 < (ulonglong)((lVar1 >> 8) - (lVar1 >> 0x3f)));
    }
    return;
}


undefined8 FUN_1402cb7b0(longlong *param_1) {
    longlong lVar1;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x40))(param_1, local_18, 2);
    lVar1 = param_1[3];
    local_18[0] = 0xffffffff;
    if (*(int *) (lVar1 + 0x18) != 3) {
        FUN_1402c9ae0(lVar1, local_18, 3);
    }
    return *(undefined8 * )(lVar1 + 0x40);
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1402cb820(longlong *param_1, undefined8 param_2, int param_3) {
    longlong **pplVar1;
    ushort uVar2;
    uint uVar3;
    ushort *puVar4;
    longlong *plVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    int iVar8;
    longlong lVar9;
    ulonglong uVar10;
    longlong *plVar11;
    longlong lVar12;
    undefined4 *puVar13;
    int *piVar14;
    undefined4 uVar15;
    longlong lVar17;
    ulonglong uVar18;
    uint uVar19;
    undefined4 *puVar20;
    ulonglong uVar21;
    longlong lVar22;
    ulonglong uVar23;
    longlong lVar24;
    longlong lVar25;
    ulonglong uVar26;
    undefined8 local_res8;
    undefined8 local_res10;
    undefined8 in_stack_fffffffffffffdb8;
    undefined4 uVar28;
    undefined8 uVar27;
    undefined8 local_228;
    longlong local_220;
    ulonglong local_218;
    ulonglong local_210;
    longlong local_208;
    longlong local_200;
    ulonglong local_1f8;
    undefined local_1e8[64];
    undefined **local_1a8;
    longlong *local_78;
    ulonglong uVar16;

    uVar28 = (undefined4)((ulonglong) in_stack_fffffffffffffdb8 >> 0x20);
    iVar8 = *(int *) (param_1 + 7);
    if ((iVar8 == 5) || (param_3 < iVar8)) {
        return 1;
    }
    if (iVar8 == 0) {
        *(uint * )(param_1 + 7) = 2 - (uint)(param_1[2] != 0);
    }
    local_res10 = param_2;
    if ((*(int *) (param_1 + 7) == 1) && (iVar8 = (**(code * *)(*param_1 + 0x1e0))(param_1), iVar8 == 0)
            ) {
        return 0;
    }
    if (*(int *) (param_1 + 7) == 3) {
        if ((*(int *) (param_1[4] + 0x18) != 2) && (iVar8 = FUN_1402d5980(), iVar8 == 0)) {
            return 0;
        }
        *(undefined4 * )(param_1 + 7) = 2;
    }
    if (*(int *) (param_1 + 7) == 2) {
        if ((*(int *) (param_1[3] + 0x18) != 3) &&
            (iVar8 = FUN_1402c9ae0(param_1[3], param_2, 3), iVar8 == 0)) {
            return 0;
        }
        *(undefined4 * )(param_1 + 7) = 4;
        lVar9 = (**(code * *)(*param_1 + 0x18))(param_1);
        local_200 = lVar9;
        uVar10 = FUN_1402ca200(param_1[3]);
        plVar5 = param_1 + 0x1f;
        local_1f8 = uVar10;
        FUN_1402ce5d0(plVar5, uVar10);
        FUN_1402ced30(param_1 + 0x2b, uVar10);
        local_1a8 = &PTR_LAB_140b62800;
        local_res8 = (longlong *) CONCAT44(local_res8._4_4_, *(undefined4 * )(lVar9 + 0x30));
        local_78 = (longlong *) 0x0;
        FUN_1402ce490(param_1 + 0x23, *(undefined4 * )(lVar9 + 0x30));
        if (local_78 != (longlong *) 0x0) {
            (**(code * *)(*local_78 + 8))();
        }
        uVar19 = *(uint * )(lVar9 + 0xa0);
        uVar26 = (ulonglong) uVar19;
        FUN_1402ce3e0(param_1 + 0x27, uVar19);
        uVar3 = *(uint * )(lVar9 + 0x80);
        FUN_1402ce760(param_1 + 0x21, uVar3);
        FUN_1402ced30(param_1 + 0x30, *(undefined4 * )(lVar9 + 0x40));
        uVar18 = 0;
        uVar23 = uVar18;
        uVar21 = uVar18;
        if (*(int *) (lVar9 + 0x40) != 0) {
            do {
                puVar4 = *(ushort * *)(uVar21 + 0x10 + *(longlong * )(lVar9 + 0x48));
                uVar2 = *puVar4;
                uVar15 = 0;
                uVar16 = uVar18;
                while (uVar2 != 0) {
                    puVar4 = puVar4 + 1;
                    uVar16 = uVar16 * 0xaa7f8ea9 + (ulonglong) uVar2;
                    uVar15 = (undefined4) uVar16;
                    uVar2 = *puVar4;
                }
                uVar23 = uVar23 + 1;
                *(undefined4 * )(param_1[0x30] + -4 + uVar23 * 4) = uVar15;
                uVar21 = uVar21 + 0x58;
            } while (uVar23 < *(uint * )(lVar9 + 0x40));
        }
        local_220 = param_1[0x31];
        local_228 = 0;
        uVar27 = CONCAT44(uVar28, 2);
        plVar11 = (longlong *) FUN_1401d3110(&local_218, &LAB_1402cb720, &local_228, param_1, uVar27);
        lVar22 = param_1[0x32];
        lVar12 = param_1[0x33];
        param_1[0x32] = *plVar11;
        param_1[0x33] = plVar11[1];
        *plVar11 = lVar22;
        plVar11[1] = lVar12;
        lVar22 = param_1[0x34];
        param_1[0x34] = plVar11[2];
        plVar11[2] = lVar22;
        if (local_218 < local_210) {
            FUN_14018b900(local_208 + local_218 * 8, 0);
        }
        uVar28 = (undefined4)((ulonglong) uVar27 >> 0x20);
        if (uVar19 != 0) {
            lVar22 = 0;
            do {
                lVar12 = (**(code * *)(*param_1 + 0x18))(param_1);
                puVar20 = (undefined4 * )(param_1[0x28] + lVar22);
                puVar13 = (undefined4 *)
                        FUN_1402cf690(local_1e8, *(longlong * )(lVar12 + 0xa8) + 0x10 + lVar22);
                uVar28 = (undefined4)((ulonglong) uVar27 >> 0x20);
                lVar22 = lVar22 + 0x40;
                uVar15 = puVar13[1];
                uVar6 = puVar13[2];
                uVar7 = puVar13[3];
                *puVar20 = *puVar13;
                puVar20[1] = uVar15;
                puVar20[2] = uVar6;
                puVar20[3] = uVar7;
                uVar15 = puVar13[5];
                uVar6 = puVar13[6];
                uVar7 = puVar13[7];
                puVar20[4] = puVar13[4];
                puVar20[5] = uVar15;
                puVar20[6] = uVar6;
                puVar20[7] = uVar7;
                uVar15 = puVar13[9];
                uVar6 = puVar13[10];
                uVar7 = puVar13[0xb];
                puVar20[8] = puVar13[8];
                puVar20[9] = uVar15;
                puVar20[10] = uVar6;
                puVar20[0xb] = uVar7;
                uVar15 = puVar13[0xd];
                uVar6 = puVar13[0xe];
                uVar7 = puVar13[0xf];
                puVar20[0xc] = puVar13[0xc];
                puVar20[0xd] = uVar15;
                puVar20[0xe] = uVar6;
                puVar20[0xf] = uVar7;
                uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
        }
        lVar22 = (**(code * *)(*param_1 + 0xe8))(param_1, *(undefined4 * )((longlong) param_1 + 0x3c));
        uVar23 = local_1f8;
        lVar12 = 0;
        uVar21 = 0;
        if (lVar22 == -1) {
            lVar22 = 0;
        }
        if (uVar10 != 0) {
            do {
                plVar11 = param_1 + 10;
                FUN_1402cf8d0(*plVar5 + lVar12, param_1, uVar21, lVar22, param_1 + 10);
                uVar28 = (undefined4)((ulonglong) plVar11 >> 0x20);
                lVar9 = (**(code * *)(*(longlong * )(*plVar5 + lVar12) + 0x18))();
                puVar4 = *(ushort * *)(lVar9 + 0x28);
                iVar8 = 0;
                if (puVar4 != (ushort *) 0x0) {
                    uVar2 = *puVar4;
                    iVar8 = 0;
                    while (uVar2 != 0) {
                        puVar4 = puVar4 + 1;
                        iVar8 = iVar8 * -0x55807157 + (uint) uVar2;
                        uVar2 = *puVar4;
                    }
                }
                *(int *) (param_1[0x2b] + uVar21 * 4) = iVar8;
                if (param_1[4] != 0) {
                    lVar9 = FUN_1402d5890();
                    uVar10 = (ulonglong) * (uint * )(lVar9 + 0x18);
                    if (uVar21 < uVar10) {
                        uVar18 = 0;
                        if (uVar10 != 0) {
                            piVar14 = *(int **) (lVar9 + 0x20);
                            uVar26 = uVar18;
                            do {
                                if (*piVar14 == *(int *) (param_1[0x2b] + uVar21 * 4)) {
                                    uVar18 = (ulonglong)(uint)
                                    piVar14[1];
                                    break;
                                }
                                uVar26 = uVar26 + 1;
                                piVar14 = piVar14 + 5;
                            } while (uVar26 < uVar10);
                        }
                        (**(code * *)(*(longlong * )(*plVar5 + lVar12) + 0xd0))
                                ((longlong * )(*plVar5 + lVar12), uVar18);
                    }
                }
                uVar21 = uVar21 + 1;
                lVar12 = lVar12 + 0x1a0;
                lVar9 = local_200;
            } while (uVar21 < uVar23);
        }
        uVar19 = 0;
        local_220 = param_1[0x2c];
        local_228 = 0;
        plVar11 = (longlong *)
                FUN_1401d3110(&local_218, &LAB_1402cb740, &local_228, param_1, CONCAT44(uVar28, 2));
        lVar22 = param_1[0x2d];
        lVar12 = param_1[0x2e];
        param_1[0x2d] = *plVar11;
        param_1[0x2e] = plVar11[1];
        *plVar11 = lVar22;
        plVar11[1] = lVar12;
        lVar22 = param_1[0x2f];
        param_1[0x2f] = plVar11[2];
        plVar11[2] = lVar22;
        if (local_218 < local_210) {
            FUN_14018b900();
        }
        if ((uint) local_res8 != 0) {
            do {
                FUN_1402d5f00();
                uVar19 = uVar19 + 1;
            } while (uVar19 < (uint) local_res8);
        }
        uVar10 = 0;
        if (uVar3 != 0) {
            lVar22 = 0;
            uVar23 = uVar10;
            do {
                lVar25 = 0;
                lVar24 = *(longlong * )(lVar9 + 0x88) + uVar23;
                lVar12 = lVar25;
                if ((ulonglong) * (uint * )(lVar24 + 0x40) < (ulonglong) param_1[0x20]) {
                    lVar12 = (ulonglong) * (uint * )(lVar24 + 0x40) * 0x1a0 + *plVar5;
                }
                lVar17 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[0x25] - param_1[0x24]) >>
                                                                                                      0x40, 0) +
                         (param_1[0x25] - param_1[0x24]);
                if ((ulonglong) * (uint * )(lVar24 + 0x44) < (ulonglong)((lVar17 >> 8) - (lVar17 >> 0x3f))) {
                    lVar25 = (ulonglong) * (uint * )(lVar24 + 0x44) * 0x170 + param_1[0x24];
                }
                FUN_1402d2550(param_1[0x21] + lVar22, param_1, uVar10, lVar24, param_1 + 10, lVar12, lVar25);
                uVar19 = (int) uVar10 + 1;
                uVar10 = (ulonglong) uVar19;
                lVar22 = lVar22 + 0x180;
                uVar23 = uVar23 + 0xb0;
            } while (uVar19 < uVar3);
        }
    }
    uVar10 = 0;
    if (*(int *) (param_1 + 7) == 4) {
        lVar9 = param_1[3];
        local_228 = CONCAT44(local_228._4_4_, 0xffffffff);
        if (*(int *) (lVar9 + 0x18) != 3) {
            FUN_1402c9ae0(lVar9, &local_228, 1);
        }
        uVar21 = (ulonglong) * (uint * )(*(longlong * )(lVar9 + 0x40) + 0x20);
        uVar23 = uVar10;
        if (uVar21 != 0) {
            do {
                iVar8 = (**(code * *)(*(longlong * )(param_1[0x1f] + uVar23) + 0x58))();
                if (iVar8 == 0) {
                    return 0;
                }
                uVar10 = uVar10 + 1;
                uVar23 = uVar23 + 0x1a0;
            } while (uVar10 < uVar21);
        }
        lVar22 = 0;
        lVar9 = param_1[3];
        local_228 = CONCAT44(local_228._4_4_, 0xffffffff);
        if (*(int *) (lVar9 + 0x18) != 3) {
            FUN_1402c9ae0(lVar9, &local_228, 3);
        }
        uVar19 = *(uint * )(*(longlong * )(lVar9 + 0x40) + 0x80);
        uVar10 = (ulonglong) uVar19;
        if (uVar19 != 0) {
            do {
                if (*(int *) (lVar22 + 0x24 + param_1[0x21]) == 0) {
                    *(undefined4 * )(lVar22 + 0x24 + param_1[0x21]) = 1;
                }
                lVar22 = lVar22 + 0x180;
                uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
        }
        FUN_1402cb5a0(param_1);
        *(undefined4 * )(param_1 + 7) = 5;
    }
    if ((*(int *) (param_1 + 7) == 5) && (local_res8 = (longlong *) 0x0, param_1[0x3e] != 0)) {
        do {
            plVar5 = (longlong *) param_1[0x3e];
            if ((longlong *) plVar5[3] != (longlong *) 0x0) {
                *(longlong *) plVar5[3] = plVar5[4];
            }
            pplVar1 = (longlong * *)(plVar5 + 4);
            if (plVar5[4] != 0) {
                *(longlong * )(plVar5[4] + 0x18) = plVar5[3];
            }
            *pplVar1 = (longlong *) 0x0;
            plVar5[3] = (longlong) & local_res8;
            *pplVar1 = local_res8;
            if (*pplVar1 != (longlong *) 0x0) {
                (*pplVar1)[3] = (longlong) pplVar1;
            }
            local_res8 = plVar5;
        } while (param_1[0x3e] != 0);
        while ((local_res8 != (longlong *) 0x0 &&
                ((**(code * *)(*local_res8 + 8))(local_res8), local_res8 != (longlong *) 0x0))) {
            (**(code * *) * local_res8)(local_res8, 1);
        }
    }
    return 1;
}


undefined8 FUN_1402cc040(longlong param_1) {
    ulonglong *puVar1;
    int *piVar2;
    int iVar3;
    uint uVar4;
    undefined8 uVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong *plVar9;
    int *piVar11;
    longlong *plVar12;
    undefined8 local_res8[2];
    undefined8 local_res18;
    longlong *local_res20;
    longlong *plVar10;

    if ((*(int *) (*(longlong * )(param_1 + 0x10) + 0x18) != 2) &&
        (uVar5 = FUN_1402d5980(), (int) uVar5 == 0)) {
        return uVar5;
    }
    lVar6 = FUN_1402d5890(*(undefined8 * )(param_1 + 0x10));
    lVar8 = DAT_140c657f0;
    local_res18 = *(undefined8 * )(lVar6 + 0x30);
    plVar12 = (longlong *) 0x0;
    local_res20 = (longlong *) 0x0;
    uVar7 = (**(code * *)(DAT_140c657f0 + 0x50))(&local_res18);
    for (puVar1 = *(ulonglong * *)
            (*(longlong * )(lVar8 + 0x48) + (uVar7 % *(ulonglong * )(lVar8 + 0x40)) * 8);
         puVar1 != (ulonglong *) 0x0; puVar1 = (ulonglong *) puVar1[1]) {
        if ((uVar7 == *puVar1) && (iVar3 = (**(code * *)(lVar8 + 0x58))(&local_res18), iVar3 != 0)) {
            if ((longlong * *)(puVar1 + 3) != (longlong **) 0x0) {
                plVar10 = (longlong *) puVar1[3];
                local_res20 = plVar10;
                (**(code * *) * plVar10)(plVar10);
                goto LAB_1402cc12e;
            }
            break;
        }
    }
    lVar8 = FUN_14018b280(0x80, 0);
    plVar10 = plVar12;
    if ((lVar8 != 0) &&
        (plVar9 = (longlong *) FUN_1402c9600(lVar8), local_res20 = plVar12, plVar9 != (longlong *) 0x0)) {
        plVar10 = plVar9;
        local_res20 = plVar9;
    }
    FUN_1402c9790(plVar10);
    LAB_1402cc12e:
    if (*(longlong * *)(param_1 + 0x18) != plVar10) {
        if (plVar10 != (longlong *) 0x0) {
            (**(code * *) * plVar10)(plVar10);
        }
        if (*(longlong * *)(param_1 + 0x18) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x18) + 8))();
        }
        *(longlong * *)(param_1 + 0x18) = plVar10;
    }
    if (plVar10 != (longlong *) 0x0) {
        (**(code * *)(*plVar10 + 8))(plVar10);
    }
    lVar8 = DAT_140c657f0;
    if (*(uint * )(lVar6 + 0x38) != 0) {
        piVar2 = *(int **) (lVar6 + 0x40);
        local_res8[0] = *(undefined8 * )(piVar2 + 8);
        plVar10 = plVar12;
        piVar11 = piVar2;
        do {
            if (*piVar11 == *(int *) (param_1 + 0x28)) {
                local_res8[0] = *(undefined8 * )(piVar2 + (longlong) plVar10 * 10 + 8);
                break;
            }
            uVar4 = (int) plVar10 + 1;
            plVar10 = (longlong * )(ulonglong)
            uVar4;
            piVar11 = piVar11 + 10;
        } while (uVar4 < *(uint * )(lVar6 + 0x38));
        uVar7 = (**(code * *)(DAT_140c657f0 + 0xa0))(local_res8);
        for (puVar1 = *(ulonglong * *)
                (*(longlong * )(lVar8 + 0x98) + (uVar7 % *(ulonglong * )(lVar8 + 0x90)) * 8);
             puVar1 != (ulonglong *) 0x0; puVar1 = (ulonglong *) puVar1[1]) {
            if ((uVar7 == *puVar1) &&
                (iVar3 = (**(code * *)(lVar8 + 0xa8))(local_res8, puVar1 + 2), iVar3 != 0)) {
                if ((longlong * *)(puVar1 + 3) != (longlong **) 0x0) {
                    plVar10 = (longlong *) puVar1[3];
                    (**(code * *) * plVar10)(plVar10);
                    goto LAB_1402cc28e;
                }
                break;
            }
        }
        plVar9 = (longlong *) FUN_14018b280(0x40);
        plVar10 = plVar12;
        if (plVar9 != (longlong *) 0x0) {
            *plVar9 = (longlong) & PTR_LAB_140b62c10;
            *(undefined4 * )(plVar9 + 1) = 1;
            plVar9[2] = 0;
            *(undefined4 * )(plVar9 + 3) = 0;
            plVar9[4] = 0;
            plVar9[5] = 0;
            plVar9[6] = 0;
            *plVar9 = (longlong) & PTR_LAB_140b62870;
            *(undefined4 * )(plVar9 + 7) = 0;
            plVar10 = plVar9;
        }
        iVar3 = FUN_1402d57c0(plVar10, local_res8[0]);
        if ((iVar3 < 0) && (plVar10 != (longlong *) 0x0)) {
            (**(code * *)(*plVar10 + 8))(plVar10);
            plVar10 = plVar12;
        }
        LAB_1402cc28e:
        if (*(longlong * *)(param_1 + 0x20) != plVar10) {
            if (plVar10 != (longlong *) 0x0) {
                (**(code * *) * plVar10)(plVar10);
            }
            if (*(longlong * *)(param_1 + 0x20) != (longlong *) 0x0) {
                (**(code * *)(**(longlong * *)(param_1 + 0x20) + 8))();
            }
            *(longlong * *)(param_1 + 0x20) = plVar10;
        }
        if (plVar10 != (longlong *) 0x0) {
            (**(code * *)(*plVar10 + 8))(plVar10);
        }
    }
    *(uint * )(param_1 + 0x38) = (*(longlong * )(param_1 + 0x20) != 0) + 2;
    return 1;
}


undefined8 FUN_1402cc320(longlong *param_1, undefined8 param_2) {
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    if (*(int *) (param_1 + 9) != 0) {
        return 1;
    }
    iVar1 = (**(code * *)(*param_1 + 0x40))(param_1, param_2, 5);
    if ((iVar1 != 0) && (iVar1 = FUN_1402c9c90(param_1[3], param_2), iVar1 != 0)) {
        uVar2 = 0;
        uVar3 = uVar2;
        if (param_1[0x20] != 0) {
            do {
                iVar1 = (**(code * *)(*(longlong * )(param_1[0x1f] + uVar3) + 0x68))
                        ((longlong * )(param_1[0x1f] + uVar3), param_2);
                if (iVar1 == 0) {
                    return 0;
                }
                uVar2 = uVar2 + 1;
                uVar3 = uVar3 + 0x1a0;
            } while (uVar2 < (ulonglong) param_1[0x20]);
        }
        *(undefined4 * )(param_1 + 9) = 1;
        return 1;
    }
    return 0;
}


void FUN_1402cc570(longlong param_1, undefined8 param_2) {
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (*(longlong * )(param_1 + 0x100) != 0) {
        do {
            plVar1 = (longlong * )(*(longlong * )(param_1 + 0xf8) + uVar3);
            (**(code * *)(*plVar1 + 0x48))(plVar1, param_2);
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x1a0;
        } while (uVar2 < *(ulonglong * )(param_1 + 0x100));
    }
    return;
}


void FUN_1402cc5e0(longlong *param_1, undefined8 param_2, undefined8 param_3, ulonglong param_4) {
    int iVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined4 local_18[4];

    uVar4 = 0;
    local_18[0] = 0;
    iVar1 = (**(code * *)(*param_1 + 0x40))(param_1, local_18, 5);
    if (iVar1 == 0) {
        puVar2 = (undefined8 *) FUN_14018b280(0x38, 0);
        if (puVar2 != (undefined8 *) 0x0) {
            puVar2[1] = param_1;
            puVar2[2] = param_4;
            param_1 = param_1 + 0x3e;
            plVar3 = puVar2 + 4;
            *puVar2 = &PTR_FUN_140b62ca0;
            puVar2[4] = 0;
            puVar2[3] = param_1;
            *plVar3 = *param_1;
            *param_1 = (longlong) puVar2;
            if (*plVar3 != 0) {
                *(longlong * *)(*plVar3 + 0x18) = plVar3;
            }
            puVar2[5] = param_2;
            puVar2[6] = param_3;
            *puVar2 = &PTR_FUN_140b62c50;
        }
    } else if (param_4 == 0xffffffffffffffff) {
        uVar5 = uVar4;
        if (param_1[0x20] != 0) {
            do {
                (**(code * *)(*(longlong * )(param_1[0x1f] + uVar4) + 0x38))
                        ((longlong * )(param_1[0x1f] + uVar4), param_2, param_3);
                uVar5 = uVar5 + 1;
                uVar4 = uVar4 + 0x1a0;
            } while (uVar5 < (ulonglong) param_1[0x20]);
        }
    } else if (param_4 < (ulonglong) param_1[0x20]) {
        plVar3 = (longlong * )(param_1[0x1f] + param_4 * 0x1a0);
        (**(code * *)(*plVar3 + 0x38))(plVar3, param_2, param_3);
    }
    return;
}


void FUN_1402cc710(longlong *param_1, int param_2, undefined8 param_3, int param_4) {
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 local_18[4];

    lVar4 = 0;
    local_18[0] = 0;
    iVar2 = (**(code * *)(*param_1 + 0x40))(param_1, local_18, 5);
    if (iVar2 == 0) {
        puVar3 = (undefined8 *) FUN_14018b280(0x40, 0);
        if (puVar3 != (undefined8 *) 0x0) {
            puVar3[1] = param_1;
            puVar3[2] = 0xffffffffffffffff;
            param_1 = param_1 + 0x3e;
            plVar1 = puVar3 + 4;
            *puVar3 = &PTR_FUN_140b62ca0;
            puVar3[4] = 0;
            puVar3[3] = param_1;
            *plVar1 = *param_1;
            *param_1 = (longlong) puVar3;
            if (*plVar1 != 0) {
                *(longlong * *)(*plVar1 + 0x18) = plVar1;
            }
            *(int *) (puVar3 + 5) = param_2;
            puVar3[6] = param_3;
            *puVar3 = &PTR_FUN_140b62c90;
            *(int *) (puVar3 + 7) = param_4;
        }
    } else {
        if ((param_2 != 0) && (lVar4 = (**(code * *)(*param_1 + 0xe8))(param_1, param_2), lVar4 == -1)) {
            return;
        }
        lVar5 = (**(code * *)(*param_1 + 0x128))(param_1, param_4);
        if ((param_4 == 0) || (lVar5 != -1)) {
            (**(code * *)(*param_1 + 0xd8))(param_1, lVar4, param_3, lVar5);
        }
    }
    return;
}


longlong FUN_1402cc820(longlong *param_1, uint param_2) {
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    (**(code * *)(*param_1 + 0x40))();
    uVar4 = 0;
    if (param_1[0x31] != 0) {
        uVar5 = param_1[0x31];
        do {
            uVar3 = (uVar5 - uVar4 >> 1) + uVar4;
            lVar2 = *(longlong * )(param_1[0x34] + uVar3 * 8);
            uVar1 = *(uint * )(param_1[0x30] + lVar2 * 4);
            if (uVar1 <= param_2) {
                if (param_2 <= uVar1) {
                    return lVar2;
                }
                uVar4 = uVar3 + 1;
                uVar3 = uVar5;
            }
            uVar5 = uVar3;
        } while (uVar4 < uVar3);
    }
    return -1;
}


void FUN_1402cc8c0(longlong param_1, undefined8 *param_2) {
    ulonglong uVar1;

    if (*(undefined8 * *)(param_1 + 0x1e8) != param_2) {
        if (param_2 != (undefined8 *) 0x0) {
            (**(code * *) * param_2)(param_2);
        }
        if (*(longlong * *)(param_1 + 0x1e8) != (longlong *) 0x0) {
            (**(code * *)(**(longlong * *)(param_1 + 0x1e8) + 8))();
        }
        *(undefined8 * *)(param_1 + 0x1e8) = param_2;
        if ((2 < *(int *) (param_1 + 0x38)) && (uVar1 = 0, *(longlong * )(param_1 + 0x100) != 0)) {
            do {
                FUN_1402d0720(uVar1 * 0x1a0 + *(longlong * )(param_1 + 0xf8), *(undefined8 * )(param_1 + 0x1e8)
                );
                uVar1 = (ulonglong)((int) uVar1 + 1);
            } while (uVar1 < *(ulonglong * )(param_1 + 0x100));
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

longlong *FUN_1402cc950(longlong *param_1) {
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    longlong lVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    undefined auVar18[12];
    undefined auVar19[12];
    float fVar20;
    float fVar21;
    undefined local_88[8];
    float fStack128;
    undefined4 uStack124;
    undefined local_78[4];
    undefined auStack116[8];
    undefined4 uStack108;
    undefined4 local_68[24];

    _local_78 = CONCAT124(_auStack116, 0xffffffff);
    (**(code * *)(*param_1 + 0x40))(param_1, local_78, 5);
    if (*(int *) (param_1 + 0x1e) == 0) {
        lVar12 = param_1[3];
        local_68[0] = 0xffffffff;
        if (*(int *) (lVar12 + 0x18) != 3) {
            FUN_1402c9ae0(lVar12, local_68, 3);
        }
        lVar12 = *(longlong * )(lVar12 + 0x40);
        fVar1 = *(float *) (param_1 + 10);
        auVar19 = *(undefined(*)[12])(param_1 + 0x10);
        auVar18 = *(undefined(*)[12])(param_1 + 0x10);
        fVar2 = *(float *) (lVar12 + 0x140);
        fVar3 = *(float *) (lVar12 + 0x150);
        local_88._0_4_ = SUB124(auVar18, 0);
        local_78 = SUB124(auVar19, 0);
        fVar13 = fVar3;
        fVar9 = fVar2;
        if (0.0 < fVar1) {
            fVar13 = fVar2;
            fVar9 = fVar3;
        }
        fVar4 = *(float *) (param_1 + 0xc);
        fVar21 = *(float *) (lVar12 + 0x154);
        fVar5 = *(float *) (lVar12 + 0x144);
        fVar14 = fVar21;
        fVar10 = fVar5;
        if (0.0 < fVar4) {
            fVar14 = fVar5;
            fVar10 = fVar21;
        }
        fVar6 = *(float *) (param_1 + 0xe);
        fVar7 = *(float *) (lVar12 + 0x148);
        fVar20 = *(float *) (lVar12 + 0x158);
        fVar15 = fVar20;
        fVar11 = fVar7;
        if (0.0 < fVar6) {
            fVar15 = fVar7;
            fVar11 = fVar20;
        }
        fVar8 = *(float *) ((longlong) param_1 + 0x54);
        _local_78 = CONCAT124(auVar19 >> 0x20, local_78 + fVar1 * fVar9 + fVar4 * fVar10 + fVar6 * fVar11
        ) & (undefined[16]) 0xffffffffffffffff;
        _local_88 = CONCAT124(auVar18 >> 0x20,
                              local_88._0_4_ + fVar1 * fVar13 + fVar4 * fVar14 + fVar6 * fVar15) &
                    (undefined[16]) 0xffffffffffffffff;
        fVar1 = fVar3;
        fVar13 = fVar2;
        if (0.0 < fVar8) {
            fVar1 = fVar2;
            fVar13 = fVar3;
        }
        fVar9 = *(float *) ((longlong) param_1 + 100);
        fVar4 = fVar21;
        fVar14 = fVar5;
        if (0.0 < fVar9) {
            fVar4 = fVar5;
            fVar14 = fVar21;
        }
        fVar10 = *(float *) ((longlong) param_1 + 0x74);
        fVar6 = fVar20;
        fVar15 = fVar7;
        if (0.0 < fVar10) {
            fVar6 = fVar7;
            fVar15 = fVar20;
        }
        fVar11 = *(float *) (param_1 + 0xb);
        fVar16 = fVar3;
        if (0.0 < fVar11) {
            fVar16 = fVar2;
            fVar2 = fVar3;
        }
        fVar3 = *(float *) (param_1 + 0xd);
        fVar21 = fVar21 * fVar3;
        fVar17 = fVar5 * fVar3;
        if (0.0 < fVar3) {
            fVar17 = fVar21;
            fVar21 = fVar5 * fVar3;
        }
        fVar3 = *(float *) (param_1 + 0xf);
        fVar20 = fVar20 * fVar3;
        fVar5 = fVar7 * fVar3;
        if (0.0 < fVar3) {
            fVar5 = fVar20;
            fVar20 = fVar7 * fVar3;
        }
        *(float *) (param_1 + 0x1a) = local_88._0_4_;
        *(float *) ((longlong) param_1 + 0xd4) =
                local_88._4_4_ + fVar8 * fVar1 + fVar9 * fVar4 + fVar10 * fVar6;
        *(float *) (param_1 + 0x1b) = fStack128 + fVar11 * fVar16 + fVar21 + fVar20;
        *(undefined4 * )((longlong) param_1 + 0xdc) = uStack124;
        *(float *) (param_1 + 0x1c) = local_78;
        *(float *) ((longlong) param_1 + 0xe4) =
                auStack116._0_4_ + fVar8 * fVar13 + fVar9 * fVar14 + fVar10 * fVar15;
        *(float *) (param_1 + 0x1d) = auStack116._4_4_ + fVar11 * fVar2 + fVar17 + fVar5;
        *(undefined4 * )((longlong) param_1 + 0xec) = uStack108;
        *(undefined4 * )(param_1 + 0x1e) = 1;
    }
    return param_1 + 0x1a;
}


longlong FUN_1402ccc40(longlong *param_1) {
    longlong lVar1;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x40))(param_1, local_18, 5);
    lVar1 = param_1[3];
    local_18[0] = 0xffffffff;
    if (*(int *) (lVar1 + 0x18) != 3) {
        FUN_1402c9ae0(lVar1, local_18, 3);
    }
    return *(longlong * )(lVar1 + 0x40) + 0x140;
}


void FUN_1402ccca0(longlong param_1, int param_2) {
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    if (param_2 == 0) {
        if (*(undefined8 * *)(param_1 + 0x208) != (undefined8 *) 0x0) {
            **(undefined8 * *)(param_1 + 0x208) = *(undefined8 * )(param_1 + 0x210);
            if (*(longlong * )(param_1 + 0x210) != 0) {
                *(undefined8 * )(*(longlong * )(param_1 + 0x210) + 0x208) = *(undefined8 * )(param_1 + 0x208);
            }
            uVar5 = 0;
            *(undefined8 * )(param_1 + 0x208) = 0;
            *(undefined8 * )(param_1 + 0x210) = 0;
            uVar4 = uVar5;
            uVar6 = uVar5;
            if (*(longlong * )(param_1 + 0x100) != 0) {
                do {
                    lVar2 = *(longlong * )(param_1 + 0xf8) + uVar6;
                    if (*(undefined8 * *)(lVar2 + 0x188) != (undefined8 *) 0x0) {
                        **(undefined8 * *)(lVar2 + 0x188) = *(undefined8 * )(lVar2 + 400);
                    }
                    if (*(longlong * )(lVar2 + 400) != 0) {
                        *(undefined8 * )(*(longlong * )(lVar2 + 400) + 0x188) = *(undefined8 * )(lVar2 + 0x188);
                    }
                    uVar4 = uVar4 + 1;
                    *(undefined8 * )(lVar2 + 0x188) = 0;
                    *(undefined8 * )(lVar2 + 400) = 0;
                    uVar6 = uVar6 + 0x1a0;
                } while (uVar4 < *(ulonglong * )(param_1 + 0x100));
            }
            uVar4 = uVar5;
            if (*(longlong * )(param_1 + 0x110) != 0) {
                do {
                    lVar2 = *(longlong * )(param_1 + 0x108) + uVar4;
                    if (*(undefined8 * *)(lVar2 + 0x170) != (undefined8 *) 0x0) {
                        **(undefined8 * *)(lVar2 + 0x170) = *(undefined8 * )(lVar2 + 0x178);
                    }
                    if (*(longlong * )(lVar2 + 0x178) != 0) {
                        *(undefined8 * )(*(longlong * )(lVar2 + 0x178) + 0x170) = *(undefined8 * )(lVar2 + 0x170);
                    }
                    uVar5 = uVar5 + 1;
                    *(undefined8 * )(lVar2 + 0x170) = 0;
                    *(undefined8 * )(lVar2 + 0x178) = 0;
                    uVar4 = uVar4 + 0x180;
                } while (uVar5 < *(ulonglong * )(param_1 + 0x110));
            }
        }
    } else if (*(longlong * )(param_1 + 0x208) == 0) {
        plVar1 = (longlong * )(param_1 + 0x210);
        plVar3 = (longlong * )(DAT_140c657f0 + 0x4d8);
        *(longlong * *)(param_1 + 0x208) = plVar3;
        *plVar1 = *plVar3;
        *plVar3 = param_1;
        if (*plVar1 != 0) {
            *(longlong * *)(*plVar1 + 0x208) = plVar1;
        }
        uVar4 = 0;
        if (*(longlong * )(param_1 + 0x100) != 0) {
            do {
                plVar1 = (longlong * )(uVar4 * 0x1a0 + *(longlong * )(param_1 + 0xf8));
                (**(code * *)(*plVar1 + 0xa0))(plVar1, 1, 1);
                uVar4 = (ulonglong)((int) uVar4 + 1);
            } while (uVar4 < *(ulonglong * )(param_1 + 0x100));
            return;
        }
    }
    return;
}


void FUN_1402cce80(longlong *param_1) {
    longlong lVar1;
    longlong **pplVar2;
    longlong *plVar3;
    longlong **pplVar4;
    ulonglong uVar5;
    undefined4 local_18[4];

    if (param_1[0x41] == 0) {
        pplVar2 = (longlong * *)(param_1 + 0x42);
        pplVar4 = (longlong * *)(DAT_140c657f0 + 0x4d8);
        param_1[0x41] = (longlong) pplVar4;
        *pplVar2 = *pplVar4;
        *pplVar4 = param_1;
        if (*pplVar2 != (longlong *) 0x0) {
            (*pplVar2)[0x41] = (longlong) pplVar2;
        }
    }
    uVar5 = 0;
    while (true) {
        lVar1 = param_1[3];
        local_18[0] = 0xffffffff;
        if (*(int *) (lVar1 + 0x18) != 3) {
            FUN_1402c9ae0(lVar1, local_18, 3);
        }
        if (*(uint * )(*(longlong * )(lVar1 + 0x40) + 0x100) <= (uint) uVar5) break;
        lVar1 = (**(code * *)(*param_1 + 0x18))();
        plVar3 = (longlong * )
                ((ulonglong) * (uint * )(*(longlong * )(lVar1 + 0x108) + uVar5 * 4) * 0x1a0 + param_1[0x1f]
                );
        (**(code * *)(*plVar3 + 0xa0))(plVar3, 1, 1);
        uVar5 = (ulonglong)((uint) uVar5 + 1);
    }
    return;
}


longlong FUN_1402ccf50(longlong *param_1) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x40))(param_1, local_18, 2);
    return param_1[0x20];
}


longlong FUN_1402ccfe0(longlong *param_1, uint param_2) {
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    (**(code * *)(*param_1 + 0x40))();
    uVar4 = 0;
    if (param_1[0x2c] != 0) {
        uVar5 = param_1[0x2c];
        do {
            uVar3 = (uVar5 - uVar4 >> 1) + uVar4;
            lVar2 = *(longlong * )(param_1[0x2f] + uVar3 * 8);
            uVar1 = *(uint * )(param_1[0x2b] + lVar2 * 4);
            if (uVar1 <= param_2) {
                if (param_2 <= uVar1) {
                    return lVar2;
                }
                uVar4 = uVar3 + 1;
                uVar3 = uVar5;
            }
            uVar5 = uVar3;
        } while (uVar4 < uVar3);
    }
    return -1;
}


longlong FUN_1402cd080(longlong *param_1) {
    longlong lVar1;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x40))(param_1, local_18, 2);
    lVar1 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[0x25] - param_1[0x24]) >> 0x40, 0) +
            (param_1[0x25] - param_1[0x24]);
    return (lVar1 >> 8) - (lVar1 >> 0x3f);
}


longlong FUN_1402cd0e0(longlong *param_1, longlong param_2) {
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x40))(param_1, local_18, 2);
    return param_2 * 0x170 + param_1[0x24];
}


undefined8 FUN_1402cd130(longlong *param_1, ulonglong param_2) {
    longlong lVar1;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x40))(param_1, local_18, 2);
    lVar1 = param_1[3];
    local_18[0] = 0xffffffff;
    if (*(int *) (lVar1 + 0x18) != 3) {
        FUN_1402c9ae0(lVar1, local_18, 3);
    }
    if (*(uint * )(*(longlong * )(lVar1 + 0x40) + 0x70) <= param_2) {
        return 0x80070057;
    }
    param_1[8] = param_2;
    return 0;
}


undefined4 FUN_1402cd1c0(longlong *param_1) {
    longlong lVar1;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x40))(param_1, local_18, 2);
    lVar1 = param_1[3];
    local_18[0] = 0xffffffff;
    if (*(int *) (lVar1 + 0x18) != 3) {
        FUN_1402c9ae0(lVar1, local_18, 3);
    }
    if ((ulonglong) * (uint * )(*(longlong * )(lVar1 + 0x40) + 0x70) <= (ulonglong) param_1[8]) {
        return 0;
    }
    return *(undefined4 * )
            (*(longlong * )(*(longlong * )(lVar1 + 0x40) + 0x78) + 0x18 + param_1[8] * 0x28);
}


undefined8 FUN_1402cd2a0(longlong *param_1) {
    longlong lVar1;
    int *piVar2;
    uint uVar3;
    ulonglong uVar4;

    (**(code * *)(*param_1 + 0x40))();
    lVar1 = FUN_1402d5890();
    uVar4 = 0;
    if (*(uint * )(lVar1 + 0x38) != 0) {
        piVar2 = *(int **) (lVar1 + 0x40);
        do {
            if (*piVar2 == *(int *) (param_1 + 5)) {
                return *(undefined8 * )(*(int **) (lVar1 + 0x40) + uVar4 * 10 + 4);
            }
            uVar3 = (int) uVar4 + 1;
            uVar4 = (ulonglong) uVar3;
            piVar2 = piVar2 + 10;
        } while (uVar3 < *(uint * )(lVar1 + 0x38));
    }
    return 0;
}


longlong FUN_1402cd310(longlong *param_1, ulonglong param_2) {
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 local_18[4];

    local_18[0] = 0xffffffff;
    (**(code * *)(*param_1 + 0x40))(param_1, local_18, 3);
    lVar2 = param_1[3];
    local_18[0] = 0xffffffff;
    if (*(int *) (lVar2 + 0x18) != 3) {
        FUN_1402c9ae0(lVar2, local_18, 3);
    }
    lVar2 = *(longlong * )(lVar2 + 0x40);
    uVar1 = param_1[8];
    if (uVar1 < *(uint * )(lVar2 + 0x70)) {
        uVar3 = (ulonglong) * (uint * )(*(longlong * )(lVar2 + 0x78) + 0x18 + uVar1 * 0x28);
        if (param_2 < uVar3) {
            return *(longlong * )(lVar2 + 0x128) +
                   (ulonglong)
                   * (uint * )(*(longlong * )(lVar2 + 0x138) +
                               (ulonglong)
                               * (uint * )((ulonglong)
                                           * (ushort * )
                                                   (*(longlong * )(*(longlong * )(lVar2 + 0x78) + 0x20 + uVar1 * 0x28) +
                                                    param_2 * 2) * 0x40 + 4 + *(longlong * )(lVar2 + 0x68)) * 4) * 2;
        }
        if (param_1[4] != 0) {
            lVar2 = FUN_1402d5890();
            param_2 = param_2 - uVar3;
            if (param_2 < *(uint * )(lVar2 + 8)) {
                return *(longlong * )(param_2 * 0x80 + 0x10 + *(longlong * )(lVar2 + 0x10));
            }
        }
    }
    return 0;
}


void FUN_1402cd4d5(undefined8 param_1, ulonglong param_2) {
    ulonglong *unaff_RBP;
    longlong unaff_RSI;
    ulonglong *puStack0000000000000040;
    ulonglong uStack0000000000000048;
    ulonglong in_stack_00000050;
    ulonglong uStack0000000000000058;
    ulonglong in_stack_00000060;
    ulonglong in_stack_00000068;

    unaff_RBP[-0xe] = param_2;
    unaff_RBP[-0xd] = param_2;
    unaff_RBP[-0xc] = in_stack_00000050;
    unaff_RBP[-0xb] = param_2;
    unaff_RBP[-10] = in_stack_00000060;
    unaff_RBP[-9] = in_stack_00000068;
    puStack0000000000000040 = (ulonglong *) param_2;
    uStack0000000000000048 = param_2;
    uStack0000000000000058 = param_2;
    FUN_1401aff00(param_1, unaff_RBP + -8);
    puStack0000000000000040 = unaff_RBP + -8;
    uStack0000000000000048 = unaff_RSI + 0x50;
    FUN_1401afb10(&stack0x00000040);
    FUN_1407db4f0(*unaff_RBP ^ (ulonglong) register0x00000020);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined (*) [16]
FUN_1402cd600(longlong
*param_1,
undefined (*param_2)[16], ulonglong
param_3)

{
undefined4 *puVar1;
longlong lVar2;
ulonglong uVar3;
undefined4 uVar4;
undefined4 uVar5;
undefined4 uVar6;
undefined4 uVar7;
undefined4 local_18[4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_18,3);
lVar2 = param_1[3];
local_18[0] = 0xffffffff;
if (*(int *)(lVar2 + 0x18) != 3) {
FUN_1402c9ae0(lVar2, local_18,
3);
}
uVar4 = _DAT_140c777f0;
uVar5 = uRam0000000140c777f4;
uVar6 = uRam0000000140c777f8;
uVar7 = uRam0000000140c777fc;
if ((((ulonglong)param_1[8] < (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x40) + 0x70)) &&
(
uVar3 = (ulonglong)
        * (uint * )(*(longlong * )(*(longlong * )(lVar2 + 0x40) + 0x78) + 0x18 +
                    param_1[8] * 0x28), uVar3
<= param_3)) && (param_1[4] != 0)) {
lVar2 = FUN_1402d5890();
param_3 = param_3 - uVar3;
uVar4 = _DAT_140c777f0;
uVar5 = uRam0000000140c777f4;
uVar6 = uRam0000000140c777f8;
uVar7 = uRam0000000140c777fc;
if (param_3 < *(uint *)(lVar2 + 8)) {
puVar1 = (undefined4 * )(param_3 * 0x80 + 0x20 + *(longlong * )(lVar2 + 0x10));
uVar4 = *puVar1;
uVar5 = puVar1[1];
uVar6 = puVar1[2];
uVar7 = puVar1[3];
}
}
*
param_2 = CONCAT412(uVar7, CONCAT48(uVar6, CONCAT44(uVar5, uVar4)));
return
param_2;
}


undefined8 FUN_1402cd6d0(longlong * param_1, ulonglong
param_2,
ulonglong *param_3
)

{
uint uVar1;
longlong lVar2;
ulonglong uVar3;
undefined4 local_18[4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_18,3);
if (param_1[4] != 0) {
lVar2 = param_1[3];
local_18[0] = 0xffffffff;
if (*(int *)(lVar2 + 0x18) != 3) {
FUN_1402c9ae0(lVar2, local_18,
3);
}
if (((ulonglong)param_1[8] < (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x40) + 0x70)) &&
(
uVar3 = (ulonglong)
        * (uint * )(*(longlong * )(*(longlong * )(lVar2 + 0x40) + 0x78) + 0x18 +
                    param_1[8] * 0x28), uVar3
<= param_2)) {
lVar2 = FUN_1402d5890();
param_2 = param_2 - uVar3;
if (param_2 < *(uint *)(lVar2 + 8)) {
lVar2 = param_2 * 0x80 + *(longlong * )(lVar2 + 0x10);
uVar1 = *(uint * )(lVar2 + 0x70);
if (uVar1 != 0) {
if (param_3 != (ulonglong *)0x0) {
*
param_3 = (ulonglong)
uVar1;
}
return *(undefined8 *)(lVar2 + 0x78);
}
}
}
}
if (param_3 != (ulonglong *)0x0) {
*
param_3 = 0;
}
return 0;
}


undefined4 FUN_1402cd7b0(longlong * param_1, ulonglong
param_2)

{
longlong lVar1;
ulonglong uVar2;
longlong lVar3;
undefined4 local_18[4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_18,3);
lVar1 = param_1[3];
local_18[0] = 0xffffffff;
if (*(int *)(lVar1 + 0x18) != 3) {
FUN_1402c9ae0(lVar1, local_18,
3);
}
uVar2 = param_1[8];
if ((uVar2 < *(uint *)(*(longlong *)(lVar1 + 0x40) + 0x70)) &&
(
lVar1 = *(longlong * )(*(longlong * )(lVar1 + 0x40) + 0x78),
        *(uint
*)(lVar1 + 0x18 + uVar2 * 0x28) <= param_2)) {
lVar3 = FUN_1402d5890();
return *(undefined4 *)
((param_2 - *(uint *)(lVar1 + uVar2 * 0x28 + 0x18)) * 0x80 + *(longlong *)(lVar3 + 0x10)
);
}
return 0xffffffff;
}


undefined4 FUN_1402cd870(longlong * param_1, ulonglong
param_2)

{
longlong lVar1;
ulonglong uVar2;
longlong lVar3;
undefined4 local_18[4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_18,3);
lVar1 = param_1[3];
local_18[0] = 0xffffffff;
if (*(int *)(lVar1 + 0x18) != 3) {
FUN_1402c9ae0(lVar1, local_18,
3);
}
uVar2 = param_1[8];
if ((uVar2 < *(uint *)(*(longlong *)(lVar1 + 0x40) + 0x70)) &&
(
lVar1 = *(longlong * )(*(longlong * )(lVar1 + 0x40) + 0x78),
        *(uint
*)(lVar1 + 0x18 + uVar2 * 0x28) <= param_2)) {
lVar3 = FUN_1402d5890();
return *(undefined4 *)
((param_2 - *(uint *)(lVar1 + uVar2 * 0x28 + 0x18)) * 0x80 + 4 +
*(longlong *)(lVar3 + 0x10));
}
return 0;
}


undefined8 FUN_1402cd930(longlong * param_1, ulonglong
param_2,
ulonglong *param_3
)

{
uint uVar1;
ulonglong uVar2;
ulonglong uVar3;
longlong lVar4;
longlong lVar5;
undefined4 local_18[4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_18,3);
if (((param_1[4] != 0) && (
uVar2 = FUN_1402cd1c0(param_1), uVar2
<= param_2)) &&
(
uVar3 = (**(code * *)(*param_1 + 0x148))(param_1), param_2<uVar3
)) {
lVar4 = FUN_1402d5890(param_1[4]);
lVar5 = (param_2 - uVar2) * 0x80;
uVar1 = *(uint * )(*(longlong * )(lVar4 + 0x10) + 0x60 + lVar5);
if (uVar1 != 0) {
if (param_3 != (ulonglong *)0x0) {
*
param_3 = (ulonglong)
uVar1;
}
return *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0x68 + lVar5);
}
}
if (param_3 != (ulonglong *)0x0) {
*
param_3 = 0;
}
return 0;
}


longlong FUN_1402cda40(longlong * param_1, ulonglong
param_2)

{
undefined4 local_18[4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_18,5);
if ((ulonglong)param_1[0x22] <= param_2) {
return 0;
}
return param_2 * 0x180 + param_1[0x21];
}


longlong FUN_1402cdaa0(longlong * param_1, uint
param_2)

{
longlong lVar1;
undefined4 local_18[4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_18,2);
lVar1 = param_1[3];
local_18[0] = 0xffffffff;
if (*(int *)(lVar1 + 0x18) != 3) {
FUN_1402c9ae0(lVar1, local_18,
1);
}
return *(longlong *)(*(longlong *)(lVar1 + 0x40) + 0x128) +
(ulonglong)
*(uint *)(*(longlong *)(*(longlong *)(lVar1 + 0x40) + 0x138) + (ulonglong)param_2 * 4) * 2;
}


bool FUN_1402cdb20(longlong * param_1, uint
param_2)

{
longlong lVar1;
undefined4 local_18[4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_18,5);
lVar1 = (**(code * *)(*param_1 + 0x18))(param_1);
if (*(uint *)(lVar1 + 0xb0) < param_2 || *(uint *)(lVar1 + 0xb0) == param_2) {
return false;
}
return *(short *)(*(longlong *)(lVar1 + 0xb8) + (longlong)(int)param_2 * 2) != -1;
}


longlong FUN_1402cdb90(longlong * param_1, int
param_2)

{
longlong lVar1;
undefined4 local_18[4];

local_18[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_18,5);
lVar1 = (**(code * *)(*param_1 + 0x18))(param_1);
return (ulonglong)*(ushort *)(*(longlong *)(lVar1 + 0xb8) + (longlong)param_2 * 2) * 0x40 +
param_1[0x28];
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1402cdbf0(longlong * param_1, undefined(*param_2)[16], undefined4
param_3,
undefined8 param_4
)

{
undefined (*pauVar1)[16];
longlong *plVar2;
ulonglong uVar3;
undefined local_38[4];
undefined auStack52[12];
undefined local_28[8];
float fStack32;

_local_38 = CONCAT124(auStack52, 0xffffffff);
(**(code **)(*param_1 + 0x40))(param_1,local_38,5);
uVar3 = 0;
if (param_1[0x20] != 0) {
do {
pauVar1 = (undefined(*)[16])
        (**(code * *)(*(longlong * )(param_1[0x1f] + uVar3 * 0x1a0) + 0x70))();
_local_28 = minps(pauVar1[1], param_2[1]);
_local_38 = maxps(*pauVar1, *param_2);
if (
SUB164(_local_38,
0) <
SUB164(_local_28,
0)) {
auStack52.
_0_4_ = SUB164(_local_38 >> 0x20, 0);
local_28.
_4_4_ = SUB164(_local_28 >> 0x20, 0);
if (auStack52._0_4_<local_28._4_4_) {
auStack52.
_4_4_ = SUB164(_local_38 >> 0x40, 0);
fStack32 = SUB164(_local_28 >> 0x40, 0);
if (auStack52._4_4_<fStack32) {
plVar2 = (longlong * )(param_1[0x1f] + uVar3 * 0x1a0);
(**(code **)(*plVar2 + 0xa8))(plVar2,param_2,param_3,param_4);
}
}
}
uVar3 = (ulonglong)((int) uVar3 + 1);
} while (uVar3 < (ulonglong)param_1[0x20]);
}
return;
}


undefined4 FUN_1402cdce0(longlong * param_1, float * param_2, undefined8
param_3,
longlong *param_4
)

{
int iVar1;
float *pfVar2;
ulonglong uVar3;
longlong lVar4;
undefined4 local_28[4];

local_28[0] = 0xffffffff;
(**(code **)(*param_1 + 0x40))(param_1,local_28,5);
pfVar2 = (float *) (**(code * *)(*param_1 + 0xf8))(param_1);
if ((((*pfVar2 <= *param_2) && (*param_2<pfVar2[4])) && (pfVar2[1] <= param_2[1])) &&
(((param_2[1] < pfVar2[5] && (pfVar2[2] <= param_2[2])) &&
((param_2[2] < pfVar2[6] && (
uVar3 = 0, param_1[0x20]
!= 0)))))) {
lVar4 = 0;
do {
iVar1 = (**(code * *)(*(longlong * )(param_1[0x1f] + lVar4) + 0xb0))
        ((longlong * )(param_1[0x1f] + lVar4), param_2, param_3, 0, 0);
if (iVar1 != 0) {
if (param_4 != (longlong *)0x0) {
*
param_4 = uVar3 * 0x1a0 + param_1[0x1f];
}
return 1;
}
uVar3 = uVar3 + 1;
lVar4 = lVar4 + 0x1a0;
} while (uVar3 < (ulonglong)param_1[0x20]);
}
return 0;
}


void FUN_1402cdfc0(longlong * param_1, undefined4
param_2,
ulonglong param_3
)

{
int iVar1;
undefined8 *puVar2;
longlong *plVar3;
ulonglong uVar4;
ulonglong uVar5;
undefined4 local_18[4];

uVar4 = 0;
local_18[0] = 0;
iVar1 = (**(code * *)(*param_1 + 0x40))(param_1, local_18, 5);
if (iVar1 == 0) {
puVar2 = (undefined8 *) FUN_14018b280(0x30, 0);
if (puVar2 != (undefined8 *)0x0) {
puVar2[1] =
param_1;
puVar2[2] =
param_3;
param_1 = param_1 + 0x3e;
plVar3 = puVar2 + 4;
*
puVar2 = &PTR_FUN_140b62ca0;
puVar2[4] = 0;
puVar2[3] =
param_1;
*
plVar3 = *param_1;
*
param_1 = (longlong)
puVar2;
if (*plVar3 != 0) {
*(longlong **)(*plVar3 + 0x18) =
plVar3;
}
*(undefined4 *)(puVar2 + 5) =
param_2;
*
puVar2 = &PTR_FUN_140b62c70;
}
}
else if (param_3 == 0xffffffffffffffff) {
uVar5 = uVar4;
if (param_1[0x20] != 0) {
do {
(**(code **)(*(longlong *)(param_1[0x1f] + uVar4) + 200))
((longlong *)(param_1[0x1f] + uVar4),param_2);
uVar5 = uVar5 + 1;
uVar4 = uVar4 + 0x1a0;
} while (uVar5 < (ulonglong)param_1[0x20]);
}
}
else if (param_3 < (ulonglong)param_1[0x20]) {
plVar3 = (longlong * )(param_1[0x1f] + param_3 * 0x1a0);
(**(code **)(*plVar3 + 200))(plVar3,param_2);
}
return;
}


void FUN_1402ce0e0(longlong * param_1, undefined4
param_2,
int param_3
)

{
longlong *plVar1;
int iVar2;
undefined8 *puVar3;
longlong lVar4;
undefined4 local_18[4];

local_18[0] = 0;
iVar2 = (**(code * *)(*param_1 + 0x40))(param_1, local_18, 5);
if (iVar2 == 0) {
puVar3 = (undefined8 *) FUN_14018b280(0x30, 0);
if (puVar3 != (undefined8 *)0x0) {
puVar3[1] =
param_1;
puVar3[2] = 0xffffffffffffffff;
param_1 = param_1 + 0x3e;
plVar1 = puVar3 + 4;
*
puVar3 = &PTR_FUN_140b62ca0;
puVar3[4] = 0;
puVar3[3] =
param_1;
*
plVar1 = *param_1;
*
param_1 = (longlong)
puVar3;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x18) =
plVar1;
}
*(int *)(puVar3 + 5) =
param_3;
*(undefined4 *)((longlong)puVar3 + 0x2c) =
param_2;
*
puVar3 = &PTR_FUN_140b62c80;
return;
}
}
else {
lVar4 = (**(code * *)(*param_1 + 0x128))(param_1, param_3);
if ((param_3 == 0) || (lVar4 != -1)) {
(**(code **)(*param_1 + 0x1c0))(param_1,param_2,lVar4);
}
}
return;
}


void FUN_1402ce1d0(longlong * param_1, undefined4
param_2,
ulonglong param_3
)

{
int iVar1;
undefined8 *puVar2;
longlong *plVar3;
ulonglong uVar4;
ulonglong uVar5;
undefined4 local_18[4];

uVar4 = 0;
local_18[0] = 0;
iVar1 = (**(code * *)(*param_1 + 0x40))(param_1, local_18, 5);
if (iVar1 == 0) {
puVar2 = (undefined8 *) FUN_14018b280(0x30, 0);
if (puVar2 != (undefined8 *)0x0) {
puVar2[1] =
param_1;
puVar2[2] =
param_3;
param_1 = param_1 + 0x3e;
plVar3 = puVar2 + 4;
*
puVar2 = &PTR_FUN_140b62ca0;
puVar2[4] = 0;
puVar2[3] =
param_1;
*
plVar3 = *param_1;
*
param_1 = (longlong)
puVar2;
if (*plVar3 != 0) {
*(longlong **)(*plVar3 + 0x18) =
plVar3;
}
*(undefined4 *)(puVar2 + 5) =
param_2;
*
puVar2 = &PTR_FUN_140b62c60;
}
}
else if (param_3 == 0xffffffffffffffff) {
uVar5 = uVar4;
if (param_1[0x20] != 0) {
do {
(**(code **)(*(longlong *)(param_1[0x1f] + uVar4) + 0xd0))
((longlong *)(param_1[0x1f] + uVar4),param_2);
uVar5 = uVar5 + 1;
uVar4 = uVar4 + 0x1a0;
} while (uVar5 < (ulonglong)param_1[0x20]);
}
}
else if (param_3 < (ulonglong)param_1[0x20]) {
plVar3 = (longlong * )(param_1[0x1f] + param_3 * 0x1a0);
(**(code **)(*plVar3 + 0xd0))(plVar3,param_2);
}
return;
}


void FUN_1402ce2f0(longlong * param_1, undefined4
param_2,
int param_3
)

{
longlong *plVar1;
int iVar2;
undefined8 *puVar3;
longlong lVar4;
undefined4 local_18[4];

local_18[0] = 0;
iVar2 = (**(code * *)(*param_1 + 0x40))(param_1, local_18, 5);
if (iVar2 == 0) {
puVar3 = (undefined8 *) FUN_14018b280(0x30, 0);
if (puVar3 != (undefined8 *)0x0) {
puVar3[1] =
param_1;
puVar3[2] = 0xffffffffffffffff;
param_1 = param_1 + 0x3e;
plVar1 = puVar3 + 4;
*
puVar3 = &PTR_FUN_140b62ca0;
puVar3[4] = 0;
puVar3[3] =
param_1;
*
plVar1 = *param_1;
*
param_1 = (longlong)
puVar3;
if (*plVar1 != 0) {
*(longlong **)(*plVar1 + 0x18) =
plVar1;
}
*(int *)(puVar3 + 5) =
param_3;
*(undefined4 *)((longlong)puVar3 + 0x2c) =
param_2;
*
puVar3 = &PTR_FUN_140b62c40;
return;
}
}
else {
lVar4 = (**(code * *)(*param_1 + 0x128))(param_1, param_3);
if ((param_3 == 0) || (lVar4 != -1)) {
(**(code **)(*param_1 + 0x1d0))(param_1,param_2,lVar4);
}
}
return;
}



// WARNING: Removing unreachable block (ram,0x0001402ce417)
// WARNING: Removing unreachable block (ram,0x0001402ce421)

void FUN_1402ce3e0(longlong
param_1,
ulonglong param_2
)

{
longlong lVar1;
ulonglong uVar2;
undefined local_48[72];

lVar1 = *(longlong * )(param_1 + 0x10);
uVar2 = lVar1 - *(longlong * )(param_1 + 8) >> 6;
if (uVar2 <= param_2) {
FUN_1402ceaa0(param_1, lVar1, param_2
- uVar2,local_48);
return;
}
*(longlong *)(param_1 + 0x10) =
*(longlong *)(param_1 + 0x10) +
((longlong)(lVar1 - (param_2 * 0x40 + *(longlong *)(param_1 + 8))) >> 6) * -0x40;
return;
}
