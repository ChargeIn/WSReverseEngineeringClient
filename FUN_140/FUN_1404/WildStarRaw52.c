//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14048e2b0(undefined8 param_1,uint *param_2)

{
    short sVar1;
    uint uVar2;
    uint *puVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    short *psVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    undefined8 uVar12;
    undefined8 uVar13;
    undefined *puVar14;
    char *pcVar15;
    bool bVar16;
    longlong local_res8;
    ulonglong in_stack_fffffffffffff528;
    uint uVar18;
    ulonglong uVar17;
    undefined8 in_stack_fffffffffffff530;
    ulonglong in_stack_fffffffffffff538;
    undefined4 uVar19;
    undefined local_ab8 [16];
    undefined local_aa8 [8];
    undefined local_aa0 [8];
    undefined2 *local_a98;
    undefined2 *local_a90;
    longlong local_9e8;
    undefined local_9c8 [8];
    undefined local_9c0 [8];
    undefined2 *local_9b8;
    undefined2 *local_9b0;
    longlong local_908;
    undefined local_8e8 [8];
    undefined local_8e0 [8];
    undefined2 *local_8d8;
    undefined2 *local_8d0;
    longlong local_828;
    undefined local_808 [8];
    undefined local_800 [8];
    undefined2 *local_7f8;
    undefined2 *local_7f0;
    longlong local_748;
    undefined local_728 [8];
    undefined local_720 [8];
    undefined2 *local_718;
    undefined2 *local_710;
    longlong local_668;
    undefined local_648 [8];
    undefined local_640 [8];
    undefined2 *local_638;
    undefined2 *local_630;
    longlong local_588;
    undefined local_568 [8];
    undefined local_560 [8];
    undefined2 *local_558;
    undefined2 *local_550;
    longlong local_4a8;
    undefined local_488 [8];
    undefined local_480 [8];
    undefined2 *local_478;
    undefined2 *local_470;
    longlong local_3c8;
    undefined local_3a8 [8];
    undefined local_3a0 [8];
    undefined2 *local_398;
    undefined2 *local_390;
    longlong local_2e8;
    undefined local_2c8 [8];
    undefined local_2c0 [8];
    undefined2 *local_2b8;
    undefined2 *local_2b0;
    longlong local_208;
    undefined local_1e8 [8];
    undefined local_1e0 [8];
    undefined2 *local_1d8;
    undefined2 *local_1d0;
    longlong local_128;
    undefined local_108 [8];
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    longlong local_48;

    lVar11 = DAT_140c65948;
    uVar4 = (uint)((ulonglong)in_stack_fffffffffffff530 >> 0x20);
    if (param_2 == (uint *)0x0) {
        return 0x80004005;
    }
    uVar2 = *param_2;
    lVar6 = *(longlong *)(DAT_140c65948 + 0x10);
    local_res8 = lVar6;
    lVar5 = *(longlong *)(lVar6 + 8);
    while (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x20) < uVar2) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
            local_res8 = lVar5;
            lVar5 = *(longlong *)(lVar5 + 0x10);
        }
    }
    if ((local_res8 == lVar6) || (uVar2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar6;
    }
    if ((local_res8 == lVar6) || (lVar6 = *(longlong *)(local_res8 + 0x28), lVar6 == 0)) {
        if (*(char *)(param_2 + 1) != '\r') {
            return 0x80004005;
        }
        FUN_14048d060(DAT_140c65948);
        return 0;
    }
    lVar5 = FUN_14048d370(DAT_140c65948,uVar2);
    uVar18 = (uint)(in_stack_fffffffffffff528 >> 0x20);
    uVar19 = (undefined4)(in_stack_fffffffffffff538 >> 0x20);
    if (lVar5 == 0) {
        return 0;
    }
    pcVar15 = IMAGE_DOS_HEADER_140000000.e_magic +
              (&switchD_14048e3a0::switchdataD_14048f830)[*(byte *)(param_2 + 1)];
    switch(*(byte *)(param_2 + 1)) {
        case 0:
            FUN_14034bdd0(pcVar15,0x238dd);
            FUN_14034bdd0();
            FUN_1404dde90(local_1e8);
            psVar8 = (short *)FUN_14034bdd0();
            lVar11 = 0;
            if (psVar8 == (short *)0x0) {
                if (local_1d8 != local_1d0) {
                    *local_1d8 = 0;
                    local_1d0 = local_1d8;
                }
            }
            else {
                sVar1 = *psVar8;
                while (sVar1 != 0) {
                    lVar11 = lVar11 + 1;
                    sVar1 = psVar8[lVar11];
                }
                FUN_14001c480(local_1e0,psVar8,psVar8 + lVar11);
            }
            FUN_1400b7660(local_1e8);
            if ((DAT_140dc3080 & 1) == 0) {
                DAT_140dc3080 = DAT_140dc3080 | 1;
                lVar11 = FUN_140200220(0x14b);
                if (lVar11 == 0) {
                    _DAT_140dc3084 = 5000;
                }
                else {
                    _DAT_140dc3084 = *(undefined4 *)(lVar11 + 4);
                }
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeUnlocked",&DAT_1409e952c,lVar6);
            FUN_140437a10(DAT_140c658d8,0x44,0,0,(ulonglong)uVar18 << 0x20,(ulonglong)uVar4 << 0x20,
                          CONCAT44(uVar19,1));
            if (local_128 != 0) {
                FUN_14018b900(local_128,0);
            }
            FUN_1400b7390(local_1e8);
            break;
        case 1:
            FUN_14048dde0(lVar11,uVar2,0);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeActivate",&DAT_1409e945c,lVar6);
            break;
        case 3:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeAbandon",&DAT_1409e9514,uVar2,
                          &DAT_1409f05f4);
            FUN_14048d7a0(lVar11,uVar2);
            break;
        case 4:
            FUN_1404dde90(local_648);
            FUN_1404dde90();
            uVar19 = (undefined4)(in_stack_fffffffffffff538 >> 0x20);
            if (*(int *)(lVar5 + 0x20) == 0) {
                lVar9 = FUN_14018b280(0x60);
                lVar5 = 0;
                lVar10 = lVar5;
                if (lVar9 != 0) {
                    lVar10 = FUN_1404ddaf0(lVar9,*(undefined4 *)(lVar6 + 0x44));
                }
                FUN_1400b7480(local_648,lVar10);
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_638 != local_630) {
                        *local_638 = 0;
                        local_630 = local_638;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar10 = lVar5;
                    while (sVar1 != 0) {
                        lVar10 = lVar10 + 1;
                        sVar1 = psVar8[lVar10];
                    }
                    FUN_14001c480(local_640,psVar8,psVar8 + lVar10);
                }
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_718 != local_710) {
                        *local_718 = 0;
                        local_710 = local_718;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    while (sVar1 != 0) {
                        lVar5 = lVar5 + 1;
                        sVar1 = psVar8[lVar5];
                    }
                    FUN_14001c480(local_720,psVar8,psVar8 + lVar5);
                }
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeFailSound",&DAT_1409e975c,
                              uVar2);
            }
            else {
                psVar8 = (short *)FUN_14034bdd0();
                lVar10 = 0;
                if (psVar8 == (short *)0x0) {
                    if (local_638 != local_630) {
                        *local_638 = 0;
                        local_630 = local_638;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar9 = lVar10;
                    while (sVar1 != 0) {
                        lVar9 = lVar9 + 1;
                        sVar1 = psVar8[lVar9];
                    }
                    FUN_14001c480(local_640,psVar8,psVar8 + lVar9);
                }
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_718 != local_710) {
                        *local_718 = 0;
                        local_710 = local_718;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar9 = lVar10;
                    while (sVar1 != 0) {
                        lVar9 = lVar9 + 1;
                        sVar1 = psVar8[lVar9];
                    }
                    FUN_14001c480(local_720,psVar8,psVar8 + lVar9);
                }
                lVar9 = FUN_14018b280();
                if (lVar9 != 0) {
                    puVar14 = &DAT_1409f060c;
                    if (*(uint *)(lVar5 + 0x24) < 3) {
                        puVar14 = *(undefined **)(lVar11 + 0xe8 + (ulonglong)*(uint *)(lVar5 + 0x24) * 8);
                    }
                    lVar10 = FUN_1404ddb40(lVar9,puVar14);
                }
                FUN_1400b7480(local_728,lVar10);
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeCompletedSound",&DAT_1409e9784
                        ,uVar2);
                in_stack_fffffffffffff538 = CONCAT44(uVar19,1);
                FUN_140437a10(DAT_140c658d8,0x46,0,0,(ulonglong)uVar18 << 0x20,(ulonglong)uVar4 << 0x20,
                              in_stack_fffffffffffff538);
            }
            if ((DAT_140dc3080 & 8) == 0) {
                DAT_140dc3080 = DAT_140dc3080 | 8;
                lVar5 = FUN_140200220(0x14e);
                if (lVar5 == 0) {
                    DAT_140dc3090 = 5000;
                }
                else {
                    DAT_140dc3090 = *(uint *)(lVar5 + 4);
                }
            }
            lVar5 = FUN_1400b7660(local_728);
            uVar12 = *(undefined8 *)(lVar5 + 8);
            lVar5 = FUN_1400b7660();
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeFailTime",&DAT_140b008bc,lVar6,
                          *(undefined8 *)(lVar5 + 8),uVar12,
                          in_stack_fffffffffffff538 & 0xffffffff00000000 | (ulonglong)DAT_140dc3090);
            FUN_14048d7a0(lVar11,uVar2);
            if (local_668 != 0) {
                FUN_14018b900(local_668,0);
            }
            FUN_1400b7390(local_728);
            if (local_588 != 0) {
                FUN_14018b900(local_588,0);
            }
            FUN_1400b7390(local_648);
            break;
        case 5:
            FUN_1404dde90(local_8e8);
            FUN_1404dde90(local_108);
            uVar19 = (undefined4)(in_stack_fffffffffffff538 >> 0x20);
            if (*(int *)(lVar5 + 0x20) == 0) {
                lVar9 = FUN_14018b280(0x60);
                lVar5 = 0;
                lVar10 = lVar5;
                if (lVar9 != 0) {
                    lVar10 = FUN_1404ddaf0(lVar9,*(undefined4 *)(lVar6 + 0x44));
                }
                FUN_1400b7480(local_8e8,lVar10);
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_8d8 != local_8d0) {
                        *local_8d8 = 0;
                        local_8d0 = local_8d8;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar10 = lVar5;
                    while (sVar1 != 0) {
                        lVar10 = lVar10 + 1;
                        sVar1 = psVar8[lVar10];
                    }
                    FUN_14001c480(local_8e0,psVar8,psVar8 + lVar10);
                }
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_f8 != local_f0) {
                        *local_f8 = 0;
                        local_f0 = local_f8;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    while (sVar1 != 0) {
                        lVar5 = lVar5 + 1;
                        sVar1 = psVar8[lVar5];
                    }
                    FUN_14001c480(local_100,psVar8,psVar8 + lVar5);
                }
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeFailSound",&DAT_1409e975c,
                              uVar2);
            }
            else {
                lVar9 = FUN_14018b280(0x60);
                lVar5 = 0;
                lVar10 = lVar5;
                if (lVar9 != 0) {
                    lVar10 = FUN_1404ddaf0(lVar9,*(undefined4 *)(lVar6 + 0x44));
                }
                FUN_1400b7480(local_8e8,lVar10);
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_8d8 != local_8d0) {
                        *local_8d8 = 0;
                        local_8d0 = local_8d8;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    while (sVar1 != 0) {
                        lVar5 = lVar5 + 1;
                        sVar1 = psVar8[lVar5];
                    }
                    FUN_14001c480(local_8e0,psVar8,psVar8 + lVar5);
                }
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeCompletedSound",&DAT_1409e9784
                        ,uVar2);
                in_stack_fffffffffffff538 = CONCAT44(uVar19,1);
                FUN_140437a10(DAT_140c658d8,0x46,0,0,(ulonglong)uVar18 << 0x20,(ulonglong)uVar4 << 0x20,
                              in_stack_fffffffffffff538);
            }
            if ((DAT_140dc3080 & 0x10) == 0) {
                DAT_140dc3080 = DAT_140dc3080 | 0x10;
                lVar5 = FUN_140200220(0x14e);
                if (lVar5 == 0) {
                    DAT_140dc3094 = 5000;
                }
                else {
                    DAT_140dc3094 = *(uint *)(lVar5 + 4);
                }
            }
            lVar5 = FUN_1400b7660(local_108);
            uVar12 = *(undefined8 *)(lVar5 + 8);
            lVar5 = FUN_1400b7660();
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeFailArea",&DAT_140b008b4,lVar6,
                          *(undefined8 *)(lVar5 + 8),uVar12,
                          in_stack_fffffffffffff538 & 0xffffffff00000000 | (ulonglong)DAT_140dc3094);
            FUN_14048d7a0(lVar11,uVar2);
            if (local_48 != 0) {
                FUN_14018b900(local_48,0);
            }
            FUN_1400b7390(local_108);
            if (local_828 != 0) {
                FUN_14018b900(local_828,0);
            }
            FUN_1400b7390(local_8e8);
            break;
        case 6:
            FUN_1404dde90(local_9c8);
            FUN_1404dde90(local_aa8);
            if (param_2[2] == 0) {
                psVar8 = (short *)FUN_14034bdd0();
                lVar10 = 0;
                if (psVar8 == (short *)0x0) {
                    if (local_9b8 != local_9b0) {
                        *local_9b8 = 0;
                        local_9b0 = local_9b8;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar9 = lVar10;
                    while (sVar1 != 0) {
                        lVar9 = lVar9 + 1;
                        sVar1 = psVar8[lVar9];
                    }
                    FUN_14001c480(local_9c0,psVar8,psVar8 + lVar9);
                }
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 != (short *)0x0) {
                    sVar1 = *psVar8;
                    while (sVar1 != 0) {
                        lVar10 = lVar10 + 1;
                        sVar1 = psVar8[lVar10];
                    }
                    goto LAB_14048e819;
                }
                LAB_14048e7ea:
                if (local_a98 != local_a90) {
                    *local_a98 = 0;
                    local_a90 = local_a98;
                }
            }
            else {
                lVar7 = FUN_14018b280(0x60);
                lVar10 = 0;
                lVar9 = lVar10;
                if (lVar7 != 0) {
                    lVar9 = FUN_1404ddaf0(lVar7,*(undefined4 *)(lVar6 + 0x44));
                }
                FUN_1400b7480(local_9c8,lVar9);
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_9b8 != local_9b0) {
                        *local_9b8 = 0;
                        local_9b0 = local_9b8;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar9 = lVar10;
                    while (sVar1 != 0) {
                        lVar9 = lVar9 + 1;
                        sVar1 = psVar8[lVar9];
                    }
                    FUN_14001c480(local_9c0,psVar8,psVar8 + lVar9);
                }
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) goto LAB_14048e7ea;
                sVar1 = *psVar8;
                while (sVar1 != 0) {
                    lVar10 = lVar10 + 1;
                    sVar1 = psVar8[lVar10];
                }
                LAB_14048e819:
                FUN_14001c480(local_aa0,psVar8,psVar8 + lVar10);
            }
            uVar19 = (undefined4)(in_stack_fffffffffffff538 >> 0x20);
            lVar10 = 0;
            if (*(int *)(lVar5 + 0x20) == 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeFailSound",&DAT_1409e975c,
                              uVar2);
            }
            else {
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_9b8 != local_9b0) {
                        *local_9b8 = 0;
                        local_9b0 = local_9b8;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar5 = lVar10;
                    while (sVar1 != 0) {
                        lVar5 = lVar5 + 1;
                        sVar1 = psVar8[lVar5];
                    }
                    FUN_14001c480(local_9c0,psVar8,psVar8 + lVar5);
                }
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeCompletedSound",&DAT_1409e9784
                        ,uVar2);
                in_stack_fffffffffffff538 = CONCAT44(uVar19,1);
                FUN_140437a10(DAT_140c658d8,0x46,0,0,(ulonglong)uVar18 << 0x20,(ulonglong)uVar4 << 0x20,
                              in_stack_fffffffffffff538);
                if (param_2[2] == 0) {
                    psVar8 = (short *)FUN_14034bdd0();
                    if (psVar8 == (short *)0x0) {
                        if (local_a98 != local_a90) {
                            *local_a98 = 0;
                            local_a90 = local_a98;
                        }
                    }
                    else {
                        sVar1 = *psVar8;
                        lVar5 = lVar10;
                        while (sVar1 != 0) {
                            lVar5 = lVar5 + 1;
                            sVar1 = psVar8[lVar5];
                        }
                        FUN_14001c480(local_aa0,psVar8,psVar8 + lVar5);
                    }
                    lVar5 = FUN_14018b280(0x60);
                    if (lVar5 != 0) {
                        lVar10 = FUN_1404ddaf0(lVar5,*(undefined4 *)(lVar6 + 0x44));
                    }
                    FUN_1400b7480(local_aa8,lVar10);
                }
            }
            if ((DAT_140dc3080 & 4) == 0) {
                DAT_140dc3080 = DAT_140dc3080 | 4;
                lVar5 = FUN_140200220(0x14e);
                if (lVar5 == 0) {
                    DAT_140dc308c = 5000;
                }
                else {
                    DAT_140dc308c = *(uint *)(lVar5 + 4);
                }
            }
            lVar5 = FUN_1400b7660(local_aa8);
            uVar12 = *(undefined8 *)(lVar5 + 8);
            lVar5 = FUN_1400b7660();
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeFailGeneric",&DAT_140b008ac,
                          lVar6,*(undefined8 *)(lVar5 + 8),uVar12,
                          in_stack_fffffffffffff538 & 0xffffffff00000000 | (ulonglong)DAT_140dc308c);
            FUN_14048d7a0(lVar11,uVar2);
            if (local_9e8 != 0) {
                FUN_14018b900(local_9e8,0);
            }
            FUN_1400b7390(local_aa8);
            if (local_908 != 0) {
                FUN_14018b900(local_908,0);
            }
            FUN_1400b7390(local_9c8);
            break;
        case 7:
            uVar12 = FUN_14034bdd0(pcVar15,*(undefined4 *)(lVar6 + 0x44));
            FUN_1404dde90(local_3a8);
            lVar10 = FUN_14018b280(0x60);
            lVar11 = 0;
            lVar5 = lVar11;
            if (lVar10 != 0) {
                lVar5 = FUN_1404ddaf0(lVar10,*(undefined4 *)(lVar6 + 0x4c));
            }
            FUN_1400b7480(local_3a8,lVar5);
            psVar8 = (short *)FUN_14034bdd0();
            if (psVar8 == (short *)0x0) {
                if (local_398 != local_390) {
                    *local_398 = 0;
                    local_390 = local_398;
                }
            }
            else {
                sVar1 = *psVar8;
                while (sVar1 != 0) {
                    lVar11 = lVar11 + 1;
                    sVar1 = psVar8[lVar11];
                }
                FUN_14001c480(local_3a0,psVar8,psVar8 + lVar11);
            }
            if (-1 < (char)DAT_140dc3080) {
                DAT_140dc3080 = DAT_140dc3080 | 0x80;
                lVar11 = FUN_140200220(0x14d);
                if (lVar11 == 0) {
                    DAT_140dc30a0 = 5000;
                }
                else {
                    DAT_140dc30a0 = *(uint *)(lVar11 + 4);
                }
            }
            lVar11 = FUN_1400b7660();
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeAreaRestriction",&DAT_140b00894,
                          uVar2,uVar12,*(undefined8 *)(lVar11 + 8),
                          (double)((float)(ulonglong)DAT_140dc30a0 * 0.001));
            if (*(int *)(lVar6 + 0x24) != 0) {
                lVar11 = FUN_14024b980();
                local_ab8 = ZEXT1216(*(undefined (*) [12])(lVar11 + 0xc));
                if ((DAT_140dc3080 >> 8 & 1) == 0) {
                    DAT_140dc3080 = DAT_140dc3080 | 0x100;
                    lVar11 = FUN_140200220(0x1b3);
                    if (lVar11 == 0) {
                        DAT_140dc30a4 = 30000;
                    }
                    else {
                        DAT_140dc30a4 = *(undefined4 *)(lVar11 + 4);
                    }
                }
                FUN_1404262a0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar2,uVar12,local_ab8);
            }
            if (local_2e8 != 0) {
                FUN_14018b900(local_2e8,0);
            }
            FUN_1400b7390(local_3a8);
            break;
        case 8:
            uVar4 = param_2[2] + 1;
            FUN_14048dde0(lVar11,uVar2,uVar4);
            FUN_1404dde90(local_488);
            lVar9 = FUN_14018b280(0x60);
            lVar5 = 0;
            lVar10 = lVar5;
            if (lVar9 != 0) {
                lVar10 = FUN_1404ddaf0(lVar9,*(undefined4 *)(lVar6 + 0x44));
            }
            FUN_1400b7480(local_488,lVar10);
            psVar8 = (short *)FUN_14034bdd0();
            if (psVar8 == (short *)0x0) {
                if (local_478 != local_470) {
                    *local_478 = 0;
                    local_470 = local_478;
                }
            }
            else {
                sVar1 = *psVar8;
                while (sVar1 != 0) {
                    lVar5 = lVar5 + 1;
                    sVar1 = psVar8[lVar5];
                }
                FUN_14001c480(local_480,psVar8,psVar8 + lVar5);
            }
            if ((DAT_140dc3080 & 2) == 0) {
                DAT_140dc3080 = DAT_140dc3080 | 2;
                lVar5 = FUN_140200220(0x14f);
                if (lVar5 == 0) {
                    DAT_140dc3088 = 10000;
                }
                else {
                    DAT_140dc3088 = *(undefined4 *)(lVar5 + 4);
                }
            }
            if ((((*(byte *)(lVar6 + 0xc) & 8) != 0) || (*(uint *)(lVar6 + 0x28) <= uVar4)) &&
                (1 < *(uint *)(lVar6 + 0x28))) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeTierAchieved",&DAT_1409e97e4,
                              uVar2,in_stack_fffffffffffff528 & 0xffffffff00000000 | (ulonglong)uVar4);
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeCompletedSound",&DAT_1409e9784,
                          uVar2);
            lVar6 = FUN_1400b7660();
            uVar17 = *(ulonglong *)(lVar6 + 8);
            puVar14 = &DAT_1409f05b4;
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeCompleted",&DAT_140b0088c,uVar2,
                          uVar17,&DAT_1409f05b4,CONCAT44(uVar19,DAT_140dc3088));
            FUN_140437a10(DAT_140c658d8,0x46,0,0,uVar17 & 0xffffffff00000000,
                          (ulonglong)puVar14 & 0xffffffff00000000,1);
            FUN_14048d7a0(lVar11,uVar2);
            if (local_3c8 != 0) {
                FUN_14018b900(local_3c8,0);
            }
            FUN_1400b7390(local_488);
            break;
        case 9:
            FUN_14048dde0(lVar11,uVar2,param_2[2] + 1);
            puVar14 = &DAT_1409e97e4;
            uVar4 = param_2[2] + 1;
            pcVar15 = "ChallengeTierAchieved";
            goto LAB_14048f3aa;
        case 10:
            puVar3 = *(uint **)(lVar11 + 0x68 + (longlong)*(int *)(lVar5 + 4) * 8);
            if (puVar3 == (uint *)0x0) break;
            uVar4 = *puVar3;
            puVar14 = &DAT_1409e94fc;
            pcVar15 = "ChallengeTypeAlreadyActive";
        LAB_14048f3aa:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),pcVar15,puVar14,uVar2,
                          in_stack_fffffffffffff528 & 0xffffffff00000000 | (ulonglong)uVar4);
            break;
        case 0xb:
            uVar12 = FUN_14034bdd0(pcVar15,*(undefined4 *)(lVar6 + 0x44));
            FUN_1404dde90(local_2c8);
            lVar10 = FUN_14018b280(0x60);
            lVar11 = 0;
            lVar5 = lVar11;
            if (lVar10 != 0) {
                lVar5 = FUN_1404ddaf0(lVar10,*(undefined4 *)(lVar6 + 0x44));
            }
            FUN_1400b7480(local_2c8,lVar5);
            psVar8 = (short *)FUN_14034bdd0();
            if (psVar8 == (short *)0x0) {
                if (local_2b8 != local_2b0) {
                    *local_2b8 = 0;
                    local_2b0 = local_2b8;
                }
            }
            else {
                sVar1 = *psVar8;
                while (sVar1 != 0) {
                    lVar11 = lVar11 + 1;
                    sVar1 = psVar8[lVar11];
                }
                FUN_14001c480(local_2c0,psVar8,psVar8 + lVar11);
            }
            if ((DAT_140dc3080 & 0x40) == 0) {
                DAT_140dc3080 = DAT_140dc3080 | 0x40;
                lVar11 = FUN_140200220(0x152);
                if (lVar11 == 0) {
                    DAT_140dc309c = 5000;
                }
                else {
                    DAT_140dc309c = *(undefined4 *)(lVar11 + 4);
                }
            }
            lVar11 = FUN_1400b7660();
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeCooldownActive",&DAT_140b0089c,
                          uVar2,uVar12,*(undefined8 *)(lVar11 + 8),CONCAT44(uVar19,DAT_140dc309c));
            if (local_208 != 0) {
                FUN_14018b900(local_208,0);
            }
            FUN_1400b7390(local_2c8);
            break;
        case 0xc:
            uVar12 = FUN_14034bdd0(pcVar15,*(undefined4 *)(lVar6 + 0x44));
            uVar13 = FUN_14034bdd0();
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeLeftArea",&DAT_140b008a4,uVar2,
                          uVar12,uVar13,CONCAT44(uVar19,*(undefined4 *)(lVar5 + 0x38)));
            break;
        case 0x10:
            FUN_14048d120(lVar11,uVar2);
            break;
        case 0x11:
            FUN_1404dde90(local_568);
            FUN_1404dde90();
            uVar19 = (undefined4)(in_stack_fffffffffffff538 >> 0x20);
            if (*(int *)(lVar5 + 0x20) == 0) {
                lVar9 = FUN_14018b280(0x60);
                lVar5 = 0;
                lVar10 = lVar5;
                if (lVar9 != 0) {
                    lVar10 = FUN_1404ddaf0(lVar9,*(undefined4 *)(lVar6 + 0x44));
                }
                FUN_1400b7480(local_568,lVar10);
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_558 != local_550) {
                        *local_558 = 0;
                        local_550 = local_558;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar10 = lVar5;
                    while (sVar1 != 0) {
                        lVar10 = lVar10 + 1;
                        sVar1 = psVar8[lVar10];
                    }
                    FUN_14001c480(local_560,psVar8,psVar8 + lVar10);
                }
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_7f8 != local_7f0) {
                        *local_7f8 = 0;
                        local_7f0 = local_7f8;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    while (sVar1 != 0) {
                        lVar5 = lVar5 + 1;
                        sVar1 = psVar8[lVar5];
                    }
                    FUN_14001c480(local_800,psVar8,psVar8 + lVar5);
                }
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeFailSound",&DAT_1409e975c,
                              uVar2);
            }
            else {
                psVar8 = (short *)FUN_14034bdd0();
                lVar10 = 0;
                if (psVar8 == (short *)0x0) {
                    if (local_558 != local_550) {
                        *local_558 = 0;
                        local_550 = local_558;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar9 = lVar10;
                    while (sVar1 != 0) {
                        lVar9 = lVar9 + 1;
                        sVar1 = psVar8[lVar9];
                    }
                    FUN_14001c480(local_560,psVar8,psVar8 + lVar9);
                }
                psVar8 = (short *)FUN_14034bdd0();
                if (psVar8 == (short *)0x0) {
                    if (local_7f8 != local_7f0) {
                        *local_7f8 = 0;
                        local_7f0 = local_7f8;
                    }
                }
                else {
                    sVar1 = *psVar8;
                    lVar9 = lVar10;
                    while (sVar1 != 0) {
                        lVar9 = lVar9 + 1;
                        sVar1 = psVar8[lVar9];
                    }
                    FUN_14001c480(local_800,psVar8,psVar8 + lVar9);
                }
                lVar9 = FUN_14018b280();
                if (lVar9 != 0) {
                    puVar14 = &DAT_1409f060c;
                    if (*(uint *)(lVar5 + 0x24) < 3) {
                        puVar14 = *(undefined **)(lVar11 + 0xe8 + (ulonglong)*(uint *)(lVar5 + 0x24) * 8);
                    }
                    lVar10 = FUN_1404ddb40(lVar9,puVar14);
                }
                FUN_1400b7480(local_808,lVar10);
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeCompletedSound",&DAT_1409e9784
                        ,uVar2);
                in_stack_fffffffffffff538 = CONCAT44(uVar19,1);
                FUN_140437a10(DAT_140c658d8,0x46,0,0,(ulonglong)uVar18 << 0x20,(ulonglong)uVar4 << 0x20,
                              in_stack_fffffffffffff538);
            }
            if ((DAT_140dc3080 & 0x20) == 0) {
                DAT_140dc3080 = DAT_140dc3080 | 0x20;
                lVar5 = FUN_140200220(0x14e);
                if (lVar5 == 0) {
                    DAT_140dc3098 = 5000;
                }
                else {
                    DAT_140dc3098 = *(uint *)(lVar5 + 4);
                }
            }
            lVar5 = FUN_1400b7660(local_808);
            uVar12 = *(undefined8 *)(lVar5 + 8);
            lVar5 = FUN_1400b7660();
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeFailTime",&DAT_140b008bc,lVar6,
                          *(undefined8 *)(lVar5 + 8),uVar12,
                          in_stack_fffffffffffff538 & 0xffffffff00000000 | (ulonglong)DAT_140dc3098);
            FUN_14048d7a0(lVar11,uVar2);
            if (local_748 != 0) {
                FUN_14018b900(local_748,0);
            }
            FUN_1400b7390(local_808);
            if (local_4a8 != 0) {
                FUN_14018b900(local_4a8,0);
            }
            FUN_1400b7390(local_568);
    }
    lVar11 = DAT_140c65898;
    bVar16 = DAT_140c65b78 != 0;
    *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    if (bVar16) {
        FUN_140575dd0();
        lVar11 = DAT_140c65898;
    }
    FUN_1400ea3e0(*(undefined8 *)(lVar11 + 0x7340),"ChallengeUpdated",&DAT_1409e965c,uVar2);
    return 0;
}



undefined8 FUN_14048f880(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65948 + 0x10);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if ((local_res8 != lVar1) && (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 != 0)) {
        lVar2 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res8 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < param_2) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar2;
        }
        if ((((local_res8 != lVar2) && (*(longlong *)(local_res8 + 0x28) != 0)) &&
             (*(int *)(lVar1 + 4) == 0)) &&
            (((*(uint *)(lVar1 + 0xc) & 0x140) == 0 &&
              (1 < *(uint *)(*(longlong *)(local_res8 + 0x28) + 0x18))))) {
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14048f960(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;
    uint uVar2;

    if ((DAT_140dc30a8 & 1) == 0) {
        DAT_140dc30a8 = DAT_140dc30a8 | 1;
        lVar1 = FUN_140200220();
        if (lVar1 == 0) {
            uVar2 = 30000;
        }
        else {
            uVar2 = *(uint *)(lVar1 + 4);
        }
        DAT_140dc30ac = uVar2 / 1000;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ChallengeShared",&DAT_1409e99b4,*param_2,
                  param_2[1],DAT_140dc30ac);
    return 0;
}



longlong FUN_14048f9f0(undefined8 param_1,uint param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    float fVar7;
    float fVar8;
    longlong local_res8;

    lVar3 = *(longlong *)(DAT_140c65948 + 0x10);
    local_res8 = lVar3;
    lVar4 = *(longlong *)(lVar3 + 8);
    while (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x20) < param_2) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            local_res8 = lVar4;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar3) && (plVar1 = (longlong *)(local_res8 + 0x28), *plVar1 != 0)) {
        lVar3 = *(longlong *)(DAT_140c65948 + 0x30);
        local_res8 = lVar3;
        lVar4 = *(longlong *)(lVar3 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < param_2) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res8 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar3;
        }
        if ((local_res8 != lVar3) && (lVar3 = *(longlong *)(local_res8 + 0x28), lVar3 != 0)) {
            iVar2 = *(int *)(*plVar1 + 0x28);
            uVar5 = 0;
            uVar6 = 0;
            if (iVar2 != 0) {
                uVar6 = *(uint *)(lVar3 + 0x54 + (ulonglong)(iVar2 - 1) * 4);
            }
            if (*(int *)(lVar3 + 0x20) != 0) {
                uVar5 = *(uint *)(lVar3 + 0x54 + (ulonglong)(*(int *)(lVar3 + 0x20) - 1) * 4);
            }
            fVar8 = (float)(ulonglong)uVar5 * (1.0 / (float)(ulonglong)uVar6);
            fVar8 = ((float)(ulonglong)*(uint *)(lVar3 + 0x1c) * 0.01 - fVar8) /
                    ((float)(ulonglong)*(uint *)(lVar3 + 0x18) * (1.0 / (float)(ulonglong)uVar6) - fVar8);
            if (1.0 <= fVar8) {
                fVar8 = 1.0;
            }
            fVar7 = 0.0;
            if (0.0 <= fVar8) {
                fVar7 = fVar8;
            }
            return (longlong)(fVar7 * 100.0);
        }
    }
    return 0;
}



void FUN_14048fb60(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8acfc,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x00014048fc26. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        uVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_14018b900(uVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



longlong FUN_14048fc60(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;
    longlong local_res18 [2];

    local_res18[0] = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(local_res18[0] + 8);
    local_res8 = local_res18[0];
    if (lVar4 != 0) {
        lVar2 = lVar4;
        do {
            if (*param_2 < *(uint *)(lVar2 + 0x20)) {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                local_res8 = lVar2;
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        if (lVar4 != 0) {
            do {
                if (*(uint *)(lVar4 + 0x20) < *param_2) {
                    lVar2 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar4 + 0x10);
                    local_res18[0] = lVar4;
                }
                lVar4 = lVar2;
            } while (lVar2 != 0);
        }
    }
    lVar4 = 0;
    lVar2 = local_res18[0];
    while (lVar2 != local_res8) {
        lVar3 = *(longlong *)(lVar2 + 0x18);
        if (lVar3 == 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            if (lVar2 == *(longlong *)(lVar3 + 0x18)) {
                do {
                    lVar2 = lVar3;
                    lVar3 = *(longlong *)(lVar2 + 8);
                } while (lVar2 == *(longlong *)(lVar3 + 0x18));
            }
            if (*(longlong *)(lVar2 + 0x18) != lVar3) {
                lVar2 = lVar3;
            }
        }
        else {
            for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar2 = lVar3, lVar1 != 0;
                 lVar1 = *(longlong *)(lVar1 + 0x10)) {
                lVar3 = lVar1;
            }
        }
        lVar4 = lVar4 + 1;
    }
    FUN_14048fd50(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_14048fd50(longlong param_1,longlong *param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    if ((*param_2 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) &&
        (*param_3 == *(longlong *)(param_1 + 8))) {
        FUN_140008410();
        return;
    }
    if (*param_2 != *param_3) {
        do {
            local_res8 = *param_2;
            lVar2 = *(longlong *)(local_res8 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(*param_2 + 8);
                if (*param_2 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        *param_2 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 8);
                    } while (*param_2 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(*param_2 + 0x18) != lVar2) {
                    *param_2 = lVar2;
                }
            }
            else {
                *param_2 = lVar2;
                lVar1 = *(longlong *)(lVar2 + 0x10);
                while (lVar1 != 0) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                    *param_2 = lVar2;
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                }
            }
            FUN_14048fe30(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



void FUN_14048fe30(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8ad00,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x00014048fef6. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        uVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_14018b900(uVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



void FUN_14048ff30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280(0x18);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = param_2;
        *(undefined4 *)(puVar1 + 2) = param_3;
        *puVar1 = &PTR_FUN_140b68f20;
        return;
    }
    return;
}



void FUN_14048ff80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280(0x20);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[2] = param_2;
        puVar1[3] = param_3;
        *puVar1 = &PTR_FUN_140b68f20;
        *(undefined4 *)(puVar1 + 1) = param_4;
        return;
    }
    return;
}



void FUN_14048ffe0(undefined8 param_1,undefined8 param_2)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = param_2;
        *puVar1 = &PTR_FUN_140b68f20;
        return;
    }
    return;
}



undefined8 * FUN_140490020(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b67230;
    FUN_140008410();
    FUN_14018b900(param_1[10],0);
    if (param_1[6] != 0) {
        FUN_14018b900(param_1[6],0);
    }
    FUN_140494dd0(param_1 + 1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1404900d0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280(0x88,0);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140492f80(puVar1,param_2,param_3);
        *puVar1 = &PTR_LAB_140b673a8;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_140490140(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280(0x78);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140492ef0(puVar1,param_2,param_3);
        *puVar1 = &PTR_FUN_140b67230;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_1404901b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280(0x20);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = param_2;
        puVar1[2] = 0;
        *puVar1 = &PTR_FUN_140b67398;
        *(undefined4 *)(puVar1 + 3) = param_3;
        return;
    }
    return;
}



void FUN_140490200(undefined8 *param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    *param_1 = &PTR_FUN_140b67390;
    plVar2 = *(longlong **)(longlong *)param_1[3];
    if (plVar2 != (longlong *)param_1[3]) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)param_1[3]);
    }
    *(undefined8 *)param_1[3] = param_1[3];
    *(undefined8 *)(param_1[3] + 8) = param_1[3];
    FUN_14018b900(param_1[3],0);
    return;
}



undefined8 FUN_140490260(undefined8 param_1,ulonglong param_2)

{
    FUN_140490200();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1404902a0(undefined8 param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    puVar1 = (undefined8 *)FUN_14018b280(0x20);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[1] = param_2;
        *puVar1 = &PTR_FUN_140b67390;
        uVar2 = FUN_14018b280(0x18);
        puVar1[3] = uVar2;
        *(undefined8 *)uVar2 = uVar2;
        *(undefined8 *)(puVar1[3] + 8) = puVar1[3];
        *puVar1 = &PTR_FUN_140b67390;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_140490310(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    uVar6 = 0;
    *param_1 = &PTR_FUN_140b67370;
    uVar4 = uVar6;
    uVar7 = uVar6;
    if ((longlong)(param_1[3] - param_1[2]) >> 5 != 0) {
        do {
            lVar3 = *(longlong *)(param_1[2] + 8 + uVar4);
            lVar5 = *(longlong *)(lVar3 + 0x10);
            while (lVar5 != lVar3) {
                lVar2 = *(longlong *)(lVar5 + 0x28);
                if (lVar2 != 0) {
                    FUN_1404963f0(lVar2);
                    FUN_14018b900(lVar2,0);
                }
                lVar2 = *(longlong *)(lVar5 + 0x18);
                if (lVar2 == 0) {
                    lVar2 = *(longlong *)(lVar5 + 8);
                    if (lVar5 == *(longlong *)(lVar2 + 0x18)) {
                        do {
                            lVar5 = lVar2;
                            lVar2 = *(longlong *)(lVar5 + 8);
                        } while (lVar5 == *(longlong *)(lVar2 + 0x18));
                    }
                    if (*(longlong *)(lVar5 + 0x18) != lVar2) {
                        lVar5 = lVar2;
                    }
                }
                else {
                    for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar5 = lVar2, lVar1 != 0;
                         lVar1 = *(longlong *)(lVar1 + 0x10)) {
                        lVar2 = lVar1;
                    }
                }
            }
            uVar7 = uVar7 + 1;
            uVar4 = uVar4 + 0x20;
        } while (uVar7 < (ulonglong)((longlong)(param_1[3] - param_1[2]) >> 5));
    }
    FUN_140492e40(param_1 + 1,param_1[2],param_1[3]);
    FUN_140008410(param_1 + 5);
    lVar3 = *(longlong *)(param_1[10] + 0x10);
    if (lVar3 != param_1[10]) {
        do {
            uVar4 = uVar6;
            if (*(longlong *)(lVar3 + 0x30) != 0) {
                do {
                    lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + uVar4 * 8);
                    if (lVar5 != 0) {
                        if (*(longlong *)(lVar5 + 0x10) != 0) {
                            FUN_14018b900(*(longlong *)(lVar5 + 0x10),0);
                        }
                        FUN_14018b900(lVar5,0);
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < *(ulonglong *)(lVar3 + 0x30));
            }
            lVar5 = *(longlong *)(lVar3 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar3 = lVar5;
                        lVar5 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar5) {
                    lVar3 = lVar5;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar5 + 0x10); lVar3 = lVar5, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar5 = lVar2;
                }
            }
        } while (lVar3 != param_1[10]);
    }
    if (param_1[0xb] != 0) {
        lVar3 = *(longlong *)(param_1[10] + 8);
        while (lVar3 != 0) {
            FUN_14001a270(param_1 + 9,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x28);
            lVar2 = *(longlong *)(lVar3 + 0x10);
            if (lVar5 != 0) {
                (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            FUN_14018b900(lVar3,0);
            lVar3 = lVar2;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    if (param_1[0x2f] != 0) {
        lVar3 = *(longlong *)(param_1[0x2e] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 0x2d,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar5;
        }
        *(undefined8 *)(param_1[0x2e] + 0x10) = param_1[0x2e];
        *(undefined8 *)(param_1[0x2e] + 8) = 0;
        *(undefined8 *)(param_1[0x2e] + 0x18) = param_1[0x2e];
        param_1[0x2f] = 0;
    }
    FUN_14018b900(param_1[0x2e],0);
    if (param_1[0x2b] != 0) {
        lVar3 = *(longlong *)(param_1[0x2a] + 8);
        while (lVar3 != 0) {
            FUN_1401de580(param_1 + 0x29,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x10);
            if (*(longlong *)(lVar3 + 0x30) != 0) {
                FUN_14018b900(*(longlong *)(lVar3 + 0x30),0);
            }
            FUN_14018b900(lVar3,0);
            lVar3 = lVar5;
        }
        *(undefined8 *)(param_1[0x2a] + 0x10) = param_1[0x2a];
        *(undefined8 *)(param_1[0x2a] + 8) = 0;
        *(undefined8 *)(param_1[0x2a] + 0x18) = param_1[0x2a];
        param_1[0x2b] = 0;
    }
    FUN_14018b900(param_1[0x2a],0);
    if (param_1[0x27] != 0) {
        lVar3 = *(longlong *)(param_1[0x26] + 8);
        while (lVar3 != 0) {
            FUN_14001a270(param_1 + 0x25,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x28);
            lVar2 = *(longlong *)(lVar3 + 0x10);
            if (lVar5 != 0) {
                (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            FUN_14018b900(lVar3,0);
            lVar3 = lVar2;
        }
        *(undefined8 *)(param_1[0x26] + 0x10) = param_1[0x26];
        *(undefined8 *)(param_1[0x26] + 8) = 0;
        *(undefined8 *)(param_1[0x26] + 0x18) = param_1[0x26];
        param_1[0x27] = 0;
    }
    FUN_14018b900(param_1[0x26],0);
    if (param_1[0x23] != 0) {
        lVar3 = *(longlong *)(param_1[0x22] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 0x21,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar5;
        }
        *(undefined8 *)(param_1[0x22] + 0x10) = param_1[0x22];
        *(undefined8 *)(param_1[0x22] + 8) = 0;
        *(undefined8 *)(param_1[0x22] + 0x18) = param_1[0x22];
        param_1[0x23] = 0;
    }
    FUN_14018b900(param_1[0x22],0);
    if (param_1[0x1f] != 0) {
        lVar3 = *(longlong *)(param_1[0x1e] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 0x1d,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar5;
        }
        *(undefined8 *)(param_1[0x1e] + 0x10) = param_1[0x1e];
        *(undefined8 *)(param_1[0x1e] + 8) = 0;
        *(undefined8 *)(param_1[0x1e] + 0x18) = param_1[0x1e];
        param_1[0x1f] = 0;
    }
    FUN_14018b900(param_1[0x1e],0);
    if (param_1[0x1b] != 0) {
        lVar3 = *(longlong *)(param_1[0x1a] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 0x19,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar5;
        }
        *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
        *(undefined8 *)(param_1[0x1a] + 8) = 0;
        *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
        param_1[0x1b] = 0;
    }
    FUN_14018b900(param_1[0x1a],0);
    if (param_1[0x17] != 0) {
        lVar3 = *(longlong *)(param_1[0x16] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 0x15,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar5;
        }
        *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
        *(undefined8 *)(param_1[0x16] + 8) = 0;
        *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
        param_1[0x17] = 0;
    }
    FUN_14018b900(param_1[0x16],0);
    if (param_1[0x13] != 0) {
        lVar3 = *(longlong *)(param_1[0x12] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 0x11,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar5;
        }
        *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
        *(undefined8 *)(param_1[0x12] + 8) = 0;
        *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
        param_1[0x13] = 0;
    }
    FUN_14018b900(param_1[0x12],0);
    if (param_1[0xf] != 0) {
        lVar3 = *(longlong *)(param_1[0xe] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar5;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    FUN_14018b900(param_1[0xe],0);
    if (param_1[0xb] != 0) {
        lVar3 = *(longlong *)(param_1[10] + 8);
        while (lVar3 != 0) {
            FUN_14001a270(param_1 + 9,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x28);
            lVar2 = *(longlong *)(lVar3 + 0x10);
            if (lVar5 != 0) {
                (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
            }
            FUN_14018b900(lVar3,0);
            lVar3 = lVar2;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    FUN_14018b900(param_1[10],0);
    if (param_1[7] != 0) {
        lVar3 = *(longlong *)(param_1[6] + 8);
        while (lVar3 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar3 + 0x18));
            lVar5 = *(longlong *)(lVar3 + 0x10);
            FUN_14018b900(lVar3,0);
            lVar3 = lVar5;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    lVar3 = param_1[3];
    for (lVar5 = param_1[2]; lVar5 != lVar3; lVar5 = lVar5 + 0x20) {
        if (*(longlong *)(lVar5 + 0x10) != 0) {
            lVar2 = *(longlong *)(*(longlong *)(lVar5 + 8) + 8);
            while (lVar2 != 0) {
                FUN_1400083b0(lVar5,*(undefined8 *)(lVar2 + 0x18));
                lVar1 = *(longlong *)(lVar2 + 0x10);
                FUN_14018b900(lVar2,0);
                lVar2 = lVar1;
            }
            *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10) = *(longlong *)(lVar5 + 8);
            *(undefined8 *)(*(longlong *)(lVar5 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar5 + 8) + 0x18) = *(longlong *)(lVar5 + 8);
            *(undefined8 *)(lVar5 + 0x10) = 0;
        }
        FUN_14018b900(*(undefined8 *)(lVar5 + 8),0);
    }
    if (param_1[2] == 0) {
        return;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



undefined8 FUN_140490aa0(undefined8 param_1,ulonglong param_2)

{
    FUN_140490310();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140490ae0(longlong *param_1)

{
    uint uVar1;
    undefined4 *puVar2;
    uint uVar3;
    int iVar4;
    uint *puVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint **ppuVar8;
    uint *puVar9;
    undefined8 *puVar10;
    uint **ppuVar11;
    longlong *plVar12;
    longlong lVar13;
    longlong lVar14;
    ulonglong uVar15;
    ulonglong *puVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    uint uVar19;
    longlong lVar20;
    uint uVar21;
    bool bVar22;
    ulonglong local_res10;
    ulonglong local_res18;
    ulonglong local_res20;
    ulonglong local_a8;
    ulonglong local_a0;
    uint local_98;
    undefined4 uStack148;
    undefined8 local_90;
    undefined8 local_88;
    uint local_80 [2];
    undefined *local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    uint local_58;
    undefined4 uStack84;

    lVar20 = 4;
    uVar21 = 0;
    do {
        local_78 = (undefined *)FUN_14018b280(0x30);
        local_70 = 0;
        *local_78 = 0;
        *(undefined8 *)(local_78 + 8) = 0;
        *(undefined **)(local_78 + 0x10) = local_78;
        *(undefined **)(local_78 + 0x18) = local_78;
        lVar14 = param_1[3];
        if (lVar14 == param_1[4]) {
            FUN_140494140(param_1 + 1);
        }
        else {
            if (lVar14 != 0) {
                FUN_14048b2a0(lVar14);
            }
            param_1[3] = param_1[3] + 0x20;
        }
        FUN_140008410(local_80);
        FUN_14018b900();
        lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    uVar3 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c6405c == 0) && (iVar4 = FUN_14021c6e0(), -1 < iVar4)) {
            uVar3 = (**(code **)(*DAT_140c65408 + 0x28))();
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_PathEpisode_140a6bb70);
    }
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c6405c == 0) && (iVar4 = FUN_14021c6e0(), -1 < iVar4)) {
                    puVar5 = (uint *)(**(code **)(*DAT_140c65408 + 0x20))();
                    goto LAB_140490c2b;
                }
            }
            else {
                puVar5 = (uint *)(*DAT_140c63848)(&PTR_u_PathEpisode_140a6bb70);
                LAB_140490c2b:
                if ((puVar5 != (uint *)0x0) && (puVar5[5] < 4)) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64634 != 0) || (iVar4 = FUN_14024d920(), iVar4 < 0)) goto LAB_140490d86;
                        lVar20 = (**(code **)(*DAT_140c64270 + 0x18))();
                    }
                    else {
                        lVar20 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8);
                    }
                    if (lVar20 != 0) {
                        lVar20 = (ulonglong)puVar5[5] * 0x20 + param_1[2];
                        uVar15 = *(ulonglong *)(lVar20 + 8);
                        uVar18 = uVar15;
                        if (*(ulonglong *)(uVar15 + 8) != 0) {
                            uVar17 = *(ulonglong *)(uVar15 + 8);
                            do {
                                if (*(uint *)(uVar17 + 0x20) < *puVar5) {
                                    uVar6 = *(ulonglong *)(uVar17 + 0x18);
                                }
                                else {
                                    uVar6 = *(ulonglong *)(uVar17 + 0x10);
                                    uVar18 = uVar17;
                                }
                                uVar17 = uVar6;
                            } while (uVar6 != 0);
                        }
                        if ((uVar18 == uVar15) || (*puVar5 < *(uint *)(uVar18 + 0x20))) {
                            local_res18 = uVar15;
                            puVar16 = &local_res18;
                        }
                        else {
                            local_res10 = uVar18;
                            puVar16 = &local_res10;
                        }
                        if (*puVar16 == uVar15) {
                            uVar15 = param_1[6];
                            uVar18 = *(ulonglong *)(uVar15 + 8);
                            uVar17 = uVar15;
                            if (uVar18 != 0) {
                                uVar6 = uVar18;
                                do {
                                    if (*(uint *)(uVar6 + 0x20) < puVar5[4]) {
                                        uVar7 = *(ulonglong *)(uVar6 + 0x18);
                                    }
                                    else {
                                        uVar7 = *(ulonglong *)(uVar6 + 0x10);
                                        uVar17 = uVar6;
                                    }
                                    uVar6 = uVar7;
                                } while (uVar7 != 0);
                            }
                            if ((uVar17 == uVar15) || (puVar5[4] < *(uint *)(uVar17 + 0x20))) {
                                local_a8 = uVar15;
                                puVar16 = &local_a8;
                            }
                            else {
                                local_res20 = uVar17;
                                puVar16 = &local_res20;
                            }
                            if (((*puVar16 == uVar15) ||
                                 (lVar14 = **(longlong **)(*puVar16 + 0x28), *(uint *)(lVar14 + 0x14) != puVar5[5])
                                ) || (*(uint *)(lVar14 + 0xc) != puVar5[3])) {
                                ppuVar8 = (uint **)FUN_14018b280(0x48);
                                if (ppuVar8 == (uint **)0x0) {
                                    ppuVar8 = (uint **)0x0;
                                }
                                else {
                                    puVar9 = (uint *)FUN_14018b280(0x30);
                                    ppuVar8[2] = puVar9;
                                    ppuVar8[3] = (uint *)0x0;
                                    *(undefined *)puVar9 = 0;
                                    *(undefined8 *)(ppuVar8[2] + 2) = 0;
                                    *(uint **)(ppuVar8[2] + 4) = ppuVar8[2];
                                    *(uint **)(ppuVar8[2] + 6) = ppuVar8[2];
                                    ppuVar8[6] = (uint *)0x0;
                                    ppuVar8[7] = (uint *)0x0;
                                    ppuVar8[8] = (uint *)0x0;
                                }
                                *ppuVar8 = puVar5;
                                puVar10 = (undefined8 *)FUN_140055be0(lVar20,puVar5);
                                *puVar10 = ppuVar8;
                                lVar20 = param_1[6];
                                local_98 = (*ppuVar8)[4];
                                lVar14 = lVar20;
                                lVar13 = *(longlong *)(lVar20 + 8);
                                while (lVar13 != 0) {
                                    lVar14 = lVar13;
                                    if (local_98 < *(uint *)(lVar13 + 0x20)) {
                                        lVar13 = *(longlong *)(lVar13 + 0x10);
                                    }
                                    else {
                                        lVar13 = *(longlong *)(lVar13 + 0x18);
                                    }
                                }
                                if ((lVar14 == lVar20) || (local_98 < *(uint *)(lVar14 + 0x20))) {
                                    lVar20 = FUN_14018b280(0x30);
                                    if ((undefined8 *)(lVar20 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar20 + 0x20) = CONCAT44(uStack148,local_98);
                                        *(uint ***)(lVar20 + 0x28) = ppuVar8;
                                    }
                                    *(longlong *)(lVar14 + 0x10) = lVar20;
                                    lVar13 = param_1[6];
                                    if (lVar14 == lVar13) {
                                        *(longlong *)(lVar13 + 8) = lVar20;
                                        *(longlong *)(param_1[6] + 0x18) = lVar20;
                                    }
                                    else if (lVar14 == *(longlong *)(lVar13 + 0x10)) {
                                        *(longlong *)(lVar13 + 0x10) = lVar20;
                                    }
                                }
                                else {
                                    lVar20 = FUN_14018b280(0x30,0);
                                    if ((undefined8 *)(lVar20 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar20 + 0x20) = CONCAT44(uStack148,local_98);
                                        *(uint ***)(lVar20 + 0x28) = ppuVar8;
                                    }
                                    *(longlong *)(lVar14 + 0x18) = lVar20;
                                    if (lVar14 == *(longlong *)(param_1[6] + 0x18)) {
                                        *(longlong *)(param_1[6] + 0x18) = lVar20;
                                    }
                                }
                                *(longlong *)(lVar20 + 8) = lVar14;
                                *(undefined8 *)(lVar20 + 0x10) = 0;
                                *(undefined8 *)(lVar20 + 0x18) = 0;
                                FUN_1400081c0();
                                param_1[7] = param_1[7] + 1;
                            }
                            else if (uVar18 != 0) {
                                do {
                                    if (*(uint *)(uVar18 + 0x20) < puVar5[4]) {
                                        uVar18 = *(ulonglong *)(uVar18 + 0x18);
                                    }
                                    else {
                                        uVar18 = *(ulonglong *)(uVar18 + 0x10);
                                    }
                                } while (uVar18 != 0);
                            }
                        }
                    }
                }
            }
            LAB_140490d86:
            uVar21 = uVar21 + 1;
        } while (uVar21 < uVar3);
    }
    uVar21 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar3 = 0;
        if ((_DAT_140c64ec8 == 0) && (iVar4 = FUN_14021f160(), -1 < iVar4)) {
            uVar3 = (**(code **)(*DAT_140c64e80 + 0x28))();
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_PathMission_140a6bda0);
    }
    if (uVar3 != 0) {
        do {
            ppuVar8 = (uint **)0x0;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64ec8 == 0) && (iVar4 = FUN_14021f160(), -1 < iVar4)) {
                    puVar5 = (uint *)(**(code **)(*DAT_140c64e80 + 0x20))();
                    goto LAB_140490f7b;
                }
            }
            else {
                puVar5 = (uint *)(*DAT_140c63848)(&PTR_u_PathMission_140a6bda0,uVar21,DAT_140c63858);
                LAB_140490f7b:
                if (puVar5 != (uint *)0x0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c6405c != 0) || (iVar4 = FUN_14021c6e0(), iVar4 < 0)) goto LAB_140491361;
                        lVar20 = (**(code **)(*DAT_140c65408 + 0x18))();
                    }
                    else {
                        lVar20 = (*DAT_140c63840)(&PTR_u_PathEpisode_140a6bb70,puVar5[8],DAT_140c63858);
                    }
                    if ((lVar20 != 0) && (*(uint *)(lVar20 + 0x14) < 4)) {
                        uVar15 = *(ulonglong *)((ulonglong)*(uint *)(lVar20 + 0x14) * 0x20 + param_1[2] + 8);
                        uVar18 = uVar15;
                        if (*(ulonglong *)(uVar15 + 8) != 0) {
                            uVar17 = *(ulonglong *)(uVar15 + 8);
                            do {
                                if (*(uint *)(uVar17 + 0x20) < puVar5[8]) {
                                    uVar6 = *(ulonglong *)(uVar17 + 0x18);
                                }
                                else {
                                    uVar6 = *(ulonglong *)(uVar17 + 0x10);
                                    uVar18 = uVar17;
                                }
                                uVar17 = uVar6;
                            } while (uVar6 != 0);
                        }
                        if ((uVar18 == uVar15) || (puVar5[8] < *(uint *)(uVar18 + 0x20))) {
                            local_res20 = uVar15;
                            puVar16 = &local_res20;
                        }
                        else {
                            local_res18 = uVar18;
                            puVar16 = &local_res18;
                        }
                        if (*puVar16 != uVar15) {
                            lVar20 = *(longlong *)(*puVar16 + 0x28);
                            ppuVar11 = (uint **)FUN_14018b280(0x28);
                            if (ppuVar11 != (uint **)0x0) {
                                ppuVar11[2] = (uint *)0x0;
                                ppuVar11[3] = (uint *)0x0;
                                ppuVar11[4] = (uint *)0x0;
                                *ppuVar11 = puVar5;
                                ppuVar8 = ppuVar11;
                            }
                            uVar15 = *(ulonglong *)(lVar20 + 0x10);
                            uVar19 = **ppuVar8;
                            uVar17 = uVar15;
                            uVar18 = *(ulonglong *)(uVar15 + 8);
                            while (uVar18 != 0) {
                                if (*(uint *)(uVar18 + 0x20) < uVar19) {
                                    uVar18 = *(ulonglong *)(uVar18 + 0x18);
                                }
                                else {
                                    uVar17 = uVar18;
                                    uVar18 = *(ulonglong *)(uVar18 + 0x10);
                                }
                            }
                            if ((uVar17 == uVar15) || (uVar19 < *(uint *)(uVar17 + 0x20))) {
                                local_90 = 0;
                                local_a8 = uVar17;
                                local_98 = uVar19;
                                FUN_140055c60(lVar20 + 8,&local_a0,&local_a8);
                                uVar17 = local_a0;
                            }
                            *(uint ***)(uVar17 + 0x28) = ppuVar8;
                            uVar19 = puVar5[1];
                            if (uVar19 != 0) {
                                lVar20 = param_1[0xe];
                                lVar14 = lVar20;
                                lVar13 = *(longlong *)(lVar20 + 8);
                                while (lVar13 != 0) {
                                    lVar14 = lVar13;
                                    if (uVar19 < *(uint *)(lVar13 + 0x20)) {
                                        lVar13 = *(longlong *)(lVar13 + 0x10);
                                    }
                                    else {
                                        lVar13 = *(longlong *)(lVar13 + 0x18);
                                    }
                                }
                                local_58 = uVar19;
                                if ((lVar14 == lVar20) || (uVar19 < *(uint *)(lVar14 + 0x20))) {
                                    lVar20 = FUN_14018b280(0x30);
                                    if ((undefined8 *)(lVar20 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar20 + 0x20) = CONCAT44(uStack84,local_58);
                                        *(uint ***)(lVar20 + 0x28) = ppuVar8;
                                    }
                                    *(longlong *)(lVar14 + 0x10) = lVar20;
                                    lVar13 = param_1[0xe];
                                    if (lVar14 == lVar13) {
                                        *(longlong *)(lVar13 + 8) = lVar20;
                                        *(longlong *)(param_1[0xe] + 0x18) = lVar20;
                                    }
                                    else if (lVar14 == *(longlong *)(lVar13 + 0x10)) {
                                        *(longlong *)(lVar13 + 0x10) = lVar20;
                                    }
                                }
                                else {
                                    lVar20 = FUN_14018b280(0x30,0);
                                    if ((undefined8 *)(lVar20 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar20 + 0x20) = CONCAT44(uStack84,local_58);
                                        *(uint ***)(lVar20 + 0x28) = ppuVar8;
                                    }
                                    *(longlong *)(lVar14 + 0x18) = lVar20;
                                    if (lVar14 == *(longlong *)(param_1[0xe] + 0x18)) {
                                        *(longlong *)(param_1[0xe] + 0x18) = lVar20;
                                    }
                                }
                                *(longlong *)(lVar20 + 8) = lVar14;
                                *(undefined8 *)(lVar20 + 0x10) = 0;
                                *(undefined8 *)(lVar20 + 0x18) = 0;
                                FUN_1400081c0();
                                param_1[0xf] = param_1[0xf] + 1;
                            }
                            puVar5 = *ppuVar8;
                            if (puVar5 == (uint *)0x0) {
                                uVar19 = 0;
                            }
                            else {
                                uVar19 = puVar5[5];
                            }
                            if (puVar5[3] == 0x1b) {
                                if (DAT_140c63840 == (code *)0x0) {
                                    if ((_DAT_140c65148 != 0) ||
                                        (iVar4 = FUN_14021cf60(), plVar12 = DAT_140c64720, iVar4 < 0))
                                        goto LAB_14049124e;
                                    LAB_14049123e:
                                    lVar20 = (**(code **)(*plVar12 + 0x18))();
                                }
                                else {
                                    lVar20 = (*DAT_140c63840)(&PTR_u_PathExplorerArea_140a6bbe0,uVar19,DAT_140c63858);
                                }
                                LAB_140491246:
                                if (lVar20 != 0) {
                                    uVar19 = *(uint *)(lVar20 + 4);
                                }
                            }
                            else if (puVar5[3] == 0x15) {
                                if (DAT_140c63840 != (code *)0x0) {
                                    lVar20 = (*DAT_140c63840)(&PTR_u_PathSettlerInfrastructure_140a6bfd0,uVar19,
                                                              DAT_140c63858);
                                    goto LAB_140491246;
                                }
                                if ((_DAT_140c64500 == 0) &&
                                    (iVar4 = FUN_140221be0(), plVar12 = DAT_140c64300, -1 < iVar4))
                                    goto LAB_14049123e;
                            }
                            LAB_14049124e:
                            lVar20 = param_1[0x22];
                            uVar1 = (*ppuVar8)[3];
                            local_res10 = CONCAT44(uVar19,uVar1);
                            uVar15 = local_res10;
                            lVar14 = lVar20;
                            lVar13 = *(longlong *)(lVar20 + 8);
                            while (lVar13 != 0) {
                                if (uVar1 == *(uint *)(lVar13 + 0x20)) {
                                    bVar22 = uVar19 < *(uint *)(lVar13 + 0x24);
                                }
                                else {
                                    bVar22 = (int)uVar1 < (int)*(uint *)(lVar13 + 0x20);
                                }
                                lVar14 = lVar13;
                                if (bVar22) {
                                    lVar13 = *(longlong *)(lVar13 + 0x10);
                                }
                                else {
                                    lVar13 = *(longlong *)(lVar13 + 0x18);
                                }
                            }
                            if (lVar14 == lVar20) {
                                LAB_1404912ea:
                                lVar20 = FUN_14018b280(0x30);
                                if ((ulonglong *)(lVar20 + 0x20) != (ulonglong *)0x0) {
                                    *(ulonglong *)(lVar20 + 0x20) = uVar15;
                                    *(uint ***)(lVar20 + 0x28) = ppuVar8;
                                }
                                *(longlong *)(lVar14 + 0x10) = lVar20;
                                lVar13 = param_1[0x22];
                                if (lVar14 == lVar13) {
                                    *(longlong *)(lVar13 + 8) = lVar20;
                                    *(longlong *)(param_1[0x22] + 0x18) = lVar20;
                                }
                                else if (lVar14 == *(longlong *)(lVar13 + 0x10)) {
                                    *(longlong *)(lVar13 + 0x10) = lVar20;
                                }
                            }
                            else {
                                if (uVar1 == *(uint *)(lVar14 + 0x20)) {
                                    bVar22 = uVar19 < *(uint *)(lVar14 + 0x24);
                                }
                                else {
                                    bVar22 = (int)uVar1 < (int)*(uint *)(lVar14 + 0x20);
                                }
                                if (bVar22) goto LAB_1404912ea;
                                lVar20 = FUN_14018b280(0x30);
                                if ((ulonglong *)(lVar20 + 0x20) != (ulonglong *)0x0) {
                                    *(ulonglong *)(lVar20 + 0x20) = uVar15;
                                    *(uint ***)(lVar20 + 0x28) = ppuVar8;
                                }
                                *(longlong *)(lVar14 + 0x18) = lVar20;
                                if (lVar14 == *(longlong *)(param_1[0x22] + 0x18)) {
                                    *(longlong *)(param_1[0x22] + 0x18) = lVar20;
                                }
                            }
                            *(longlong *)(lVar20 + 8) = lVar14;
                            *(undefined8 *)(lVar20 + 0x10) = 0;
                            *(undefined8 *)(lVar20 + 0x18) = 0;
                            FUN_1400081c0(lVar20,param_1[0x22] + 8);
                            param_1[0x23] = param_1[0x23] + 1;
                            (**(code **)(*param_1 + 0x18))(param_1);
                        }
                    }
                }
            }
            LAB_140491361:
            uVar21 = uVar21 + 1;
        } while (uVar21 < uVar3);
    }
    uVar21 = 0;
    lVar20 = *(longlong *)(param_1[6] + 0x10);
    while (lVar20 != param_1[6]) {
        lVar14 = *(longlong *)(lVar20 + 0x18);
        if (lVar14 == 0) {
            lVar14 = *(longlong *)(lVar20 + 8);
            if (lVar20 == *(longlong *)(lVar14 + 0x18)) {
                do {
                    lVar20 = lVar14;
                    lVar14 = *(longlong *)(lVar20 + 8);
                } while (lVar20 == *(longlong *)(lVar14 + 0x18));
            }
            if (*(longlong *)(lVar20 + 0x18) != lVar14) {
                lVar20 = lVar14;
            }
        }
        else {
            for (lVar13 = *(longlong *)(lVar14 + 0x10); lVar20 = lVar14, lVar13 != 0;
                 lVar13 = *(longlong *)(lVar13 + 0x10)) {
                lVar14 = lVar13;
            }
        }
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar3 = 0;
        if ((_DAT_140c638b8 == 0) && (iVar4 = FUN_14021ed20(), -1 < iVar4)) {
            uVar3 = (**(code **)(*DAT_140c65628 + 0x28))();
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_PathLevel_140a6bd68);
    }
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c638b8 == 0) && (iVar4 = FUN_14021ed20(), -1 < iVar4)) {
                    lVar20 = (**(code **)(*DAT_140c65628 + 0x20))();
                    goto LAB_14049147b;
                }
            }
            else {
                lVar20 = (*DAT_140c63848)(&PTR_u_PathLevel_140a6bd68,uVar21,DAT_140c63858);
                LAB_14049147b:
                if ((lVar20 != 0) && (uVar19 = *(uint *)(lVar20 + 4), uVar19 < 4)) {
                    uVar15 = param_1[10];
                    uVar17 = uVar15;
                    uVar18 = *(ulonglong *)(uVar15 + 8);
                    while (uVar18 != 0) {
                        if (*(int *)(uVar18 + 0x20) < (int)uVar19) {
                            uVar18 = *(ulonglong *)(uVar18 + 0x18);
                        }
                        else {
                            uVar17 = uVar18;
                            uVar18 = *(ulonglong *)(uVar18 + 0x10);
                        }
                    }
                    if ((uVar17 == uVar15) || ((int)uVar19 < *(int *)(uVar17 + 0x20))) {
                        local_88 = 0;
                        local_90 = 0;
                        local_res10 = uVar17;
                        local_98 = uVar19;
                        FUN_140494310(param_1 + 9,&local_res18,&local_res10);
                        uVar17 = local_res18;
                    }
                    plVar12 = (longlong *)FUN_14018b280(0x28);
                    if (plVar12 == (longlong *)0x0) {
                        plVar12 = (longlong *)0x0;
                    }
                    else {
                        plVar12[2] = 0;
                        plVar12[3] = 0;
                        plVar12[4] = 0;
                        *plVar12 = lVar20;
                    }
                    lVar14 = *(longlong *)(uVar17 + 0x30);
                    lVar20 = lVar14 + 1;
                    lVar13 = FUN_14018db00(*(undefined8 *)(uVar17 + 0x28),lVar20,8);
                    *(longlong **)(lVar13 + lVar14 * 8) = plVar12;
                    if (*(longlong *)(uVar17 + 0x28) != lVar13) {
                        FUN_1407db590(lVar13,*(longlong *)(uVar17 + 0x28),*(longlong *)(uVar17 + 0x30) << 3);
                        lVar14 = *(longlong *)(uVar17 + 0x28);
                        if (lVar14 != 0) {
                            (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                        }
                        *(longlong *)(uVar17 + 0x28) = lVar13;
                    }
                    *(longlong *)(uVar17 + 0x30) = lVar20;
                }
            }
            uVar21 = uVar21 + 1;
        } while (uVar21 < uVar3);
    }
    uVar21 = 0;
    lVar20 = *(longlong *)(param_1[10] + 0x10);
    if (lVar20 != param_1[10]) {
        do {
            FUN_140494940();
            lVar14 = *(longlong *)(lVar20 + 0x18);
            if (lVar14 == 0) {
                lVar14 = *(longlong *)(lVar20 + 8);
                if (lVar20 == *(longlong *)(lVar14 + 0x18)) {
                    do {
                        lVar20 = lVar14;
                        lVar14 = *(longlong *)(lVar20 + 8);
                    } while (lVar20 == *(longlong *)(lVar14 + 0x18));
                }
                if (*(longlong *)(lVar20 + 0x18) != lVar14) {
                    lVar20 = lVar14;
                }
            }
            else {
                for (lVar13 = *(longlong *)(lVar14 + 0x10); lVar20 = lVar14, lVar13 != 0;
                     lVar13 = *(longlong *)(lVar13 + 0x10)) {
                    lVar14 = lVar13;
                }
            }
        } while (lVar20 != param_1[10]);
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar3 = 0;
        if ((_DAT_140c64b5c == 0) && (iVar4 = FUN_14021f5a0(), -1 < iVar4)) {
            uVar3 = (**(code **)(*DAT_140c64a70 + 0x28))();
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_PathReward_140a6bdd8);
    }
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64b5c == 0) && (iVar4 = FUN_14021f5a0(), -1 < iVar4)) {
                    uVar15 = (**(code **)(*DAT_140c64a70 + 0x20))();
                    goto LAB_14049168c;
                }
            }
            else {
                uVar15 = (*DAT_140c63848)(&PTR_u_PathReward_140a6bdd8,uVar21,DAT_140c63858);
                LAB_14049168c:
                if (uVar15 != 0) {
                    iVar4 = *(int *)(uVar15 + 4);
                    if (iVar4 == 0) {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c638b8 != 0) || (iVar4 = FUN_14021ed20(), iVar4 < 0)) goto LAB_14049192e;
                            lVar20 = (**(code **)(*DAT_140c65628 + 0x18))();
                        }
                        else {
                            lVar20 = (*DAT_140c63840)(&PTR_u_PathLevel_140a6bd68,*(undefined4 *)(uVar15 + 8),
                                                      DAT_140c63858);
                        }
                        if (lVar20 != 0) {
                            if (*(uint *)(lVar20 + 8) != 0) {
                                uVar18 = param_1[10];
                                uVar6 = uVar18;
                                uVar17 = *(ulonglong *)(uVar18 + 8);
                                while (uVar17 != 0) {
                                    if (*(int *)(uVar17 + 0x20) < *(int *)(lVar20 + 4)) {
                                        uVar17 = *(ulonglong *)(uVar17 + 0x18);
                                    }
                                    else {
                                        uVar6 = uVar17;
                                        uVar17 = *(ulonglong *)(uVar17 + 0x10);
                                    }
                                }
                                if ((uVar6 == uVar18) || (*(int *)(lVar20 + 4) < *(int *)(uVar6 + 0x20))) {
                                    local_a0 = uVar18;
                                    puVar16 = &local_a0;
                                }
                                else {
                                    local_res20 = uVar6;
                                    puVar16 = &local_res20;
                                }
                                uVar17 = *puVar16;
                                if (((uVar17 != uVar18) &&
                                     (uVar18 = (ulonglong)*(uint *)(lVar20 + 8) - 1,
                                             uVar18 < *(ulonglong *)(uVar17 + 0x30))) &&
                                    (plVar12 = *(longlong **)(*(longlong *)(uVar17 + 0x28) + uVar18 * 8),
                                            plVar12 != (longlong *)0x0)) {
                                    puVar16 = (ulonglong *)plVar12[3];
                                    if (puVar16 == (ulonglong *)plVar12[4]) {
                                        local_res18 = uVar15;
                                        FUN_1400b9430(plVar12 + 1,puVar16,&local_res18);
                                    }
                                    else {
                                        if (puVar16 != (ulonglong *)0x0) {
                                            *puVar16 = uVar15;
                                        }
                                        plVar12[3] = plVar12[3] + 8;
                                        local_res18 = uVar15;
                                    }
                                    if (*(int *)(uVar15 + 0xc) != 0) {
                                        uVar18 = param_1[0x2a];
                                        uVar19 = *(uint *)(*plVar12 + 4);
                                        uVar6 = uVar18;
                                        uVar17 = *(ulonglong *)(uVar18 + 8);
                                        while (uVar17 != 0) {
                                            if (*(int *)(uVar17 + 0x20) < (int)uVar19) {
                                                uVar17 = *(ulonglong *)(uVar17 + 0x18);
                                            }
                                            else {
                                                uVar6 = uVar17;
                                                uVar17 = *(ulonglong *)(uVar17 + 0x10);
                                            }
                                        }
                                        if ((uVar6 == uVar18) || ((int)uVar19 < *(int *)(uVar6 + 0x20))) {
                                            local_70 = 0;
                                            local_60 = 0;
                                            local_80[0] = uVar19;
                                            FUN_1407db590(0,0,0);
                                            local_68 = 0;
                                            local_res18 = uVar6;
                                            FUN_140494730(param_1 + 0x29,&local_a8,&local_res18);
                                            uVar6 = local_a8;
                                        }
                                        puVar2 = *(undefined4 **)(uVar6 + 0x38);
                                        if (puVar2 == *(undefined4 **)(uVar6 + 0x40)) {
                                            FUN_14017b140(uVar6 + 0x28,puVar2,uVar15 + 0xc);
                                        }
                                        else {
                                            if (puVar2 != (undefined4 *)0x0) {
                                                *puVar2 = *(undefined4 *)(uVar15 + 0xc);
                                            }
                                            *(longlong *)(uVar6 + 0x38) = *(longlong *)(uVar6 + 0x38) + 4;
                                        }
                                        lVar20 = *plVar12;
                                        uVar18 = param_1[0x2e];
                                        uVar17 = uVar18;
                                        if (*(ulonglong *)(uVar18 + 8) != 0) {
                                            uVar6 = *(ulonglong *)(uVar18 + 8);
                                            do {
                                                if (*(uint *)(uVar6 + 0x20) < *(uint *)(uVar15 + 0xc)) {
                                                    uVar7 = *(ulonglong *)(uVar6 + 0x18);
                                                }
                                                else {
                                                    uVar7 = *(ulonglong *)(uVar6 + 0x10);
                                                    uVar17 = uVar6;
                                                }
                                                uVar6 = uVar7;
                                            } while (uVar7 != 0);
                                        }
                                        if ((uVar17 == uVar18) || (*(uint *)(uVar15 + 0xc) < *(uint *)(uVar17 + 0x20)))
                                        {
                                            local_res10 = (ulonglong)*(uint *)(uVar15 + 0xc);
                                            local_res18 = uVar17;
                                            FUN_140032b30(param_1 + 0x2d,&local_58,&local_res18);
                                            uVar17 = CONCAT44(uStack84,local_58);
                                        }
                                        *(undefined4 *)(uVar17 + 0x24) = *(undefined4 *)(lVar20 + 8);
                                    }
                                }
                            }
                        }
                    }
                    else if (iVar4 == 1) {
                        lVar20 = FUN_140491c60();
                        if (lVar20 != 0) {
                            lVar20 = lVar20 + 8;
                            goto LAB_1404916c3;
                        }
                    }
                    else if ((iVar4 == 2) && (lVar20 = FUN_140491bd0(), lVar20 != 0)) {
                        lVar20 = lVar20 + 0x28;
                        LAB_1404916c3:
                        puVar16 = *(ulonglong **)(lVar20 + 0x10);
                        if (puVar16 == *(ulonglong **)(lVar20 + 0x18)) {
                            local_res18 = uVar15;
                            FUN_1400b9430(lVar20,puVar16,&local_res18);
                        }
                        else {
                            if (puVar16 != (ulonglong *)0x0) {
                                *puVar16 = uVar15;
                            }
                            *(longlong *)(lVar20 + 0x10) = *(longlong *)(lVar20 + 0x10) + 8;
                            local_res18 = uVar15;
                        }
                    }
                    LAB_14049192e:
                    uVar19 = *(uint *)(uVar15 + 0x28);
                    if (uVar19 != 0) {
                        uVar18 = param_1[0x26];
                        uVar6 = uVar18;
                        uVar17 = *(ulonglong *)(uVar18 + 8);
                        while (uVar17 != 0) {
                            if (*(uint *)(uVar17 + 0x20) < uVar19) {
                                uVar17 = *(ulonglong *)(uVar17 + 0x18);
                            }
                            else {
                                uVar6 = uVar17;
                                uVar17 = *(ulonglong *)(uVar17 + 0x10);
                            }
                        }
                        if ((uVar6 == uVar18) || (uVar19 < *(uint *)(uVar6 + 0x20))) {
                            local_70 = 0;
                            local_78 = (undefined *)0x0;
                            local_res18 = uVar6;
                            local_80[0] = uVar19;
                            FUN_140494520(param_1 + 0x25,&local_98,&local_res18);
                            uVar6 = CONCAT44(uStack148,local_98);
                        }
                        lVar14 = *(longlong *)(uVar6 + 0x30);
                        lVar20 = lVar14 + 1;
                        lVar13 = FUN_14018db00(*(undefined8 *)(uVar6 + 0x28),lVar20,8);
                        *(ulonglong *)(lVar13 + lVar14 * 8) = uVar15;
                        if (*(longlong *)(uVar6 + 0x28) != lVar13) {
                            FUN_1407db590(lVar13,*(longlong *)(uVar6 + 0x28),*(longlong *)(uVar6 + 0x30) << 3);
                            lVar14 = *(longlong *)(uVar6 + 0x28);
                            if (lVar14 != 0) {
                                (**(code **)(*(longlong *)(lVar14 + -0x10) + 8))(lVar14 + -0x10);
                            }
                            *(longlong *)(uVar6 + 0x28) = lVar13;
                        }
                        *(longlong *)(uVar6 + 0x30) = lVar20;
                    }
                }
            }
            uVar21 = uVar21 + 1;
        } while (uVar21 < uVar3);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong * FUN_140491a20(undefined8 param_1,int param_2,undefined4 param_3,int param_4)

{
    uint uVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;
    uint *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;

    plVar3 = DAT_140c65968;
    if (3 < param_2) {
        return (longlong *)0x0;
    }
    puVar5 = (uint *)FUN_14024db80(param_3);
    do {
        if (puVar5 == (uint *)0x0) {
            return (longlong *)0x0;
        }
        lVar9 = plVar3[6];
        lVar6 = *(longlong *)(lVar9 + 8);
        lVar10 = lVar9;
        if (lVar6 != 0) {
            lVar7 = lVar6;
            do {
                if (*puVar5 < *(uint *)(lVar7 + 0x20)) {
                    lVar8 = *(longlong *)(lVar7 + 0x10);
                    lVar10 = lVar7;
                }
                else {
                    lVar8 = *(longlong *)(lVar7 + 0x18);
                }
                lVar7 = lVar8;
            } while (lVar8 != 0);
            if (lVar6 != 0) {
                do {
                    if (*(uint *)(lVar6 + 0x20) < *puVar5) {
                        lVar7 = *(longlong *)(lVar6 + 0x18);
                    }
                    else {
                        lVar7 = *(longlong *)(lVar6 + 0x10);
                        lVar9 = lVar6;
                    }
                    lVar6 = lVar7;
                } while (lVar7 != 0);
            }
        }
        while (lVar9 != lVar10) {
            plVar2 = *(longlong **)(lVar9 + 0x28);
            if (param_4 == 0) {
                iVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined4 *)(*plVar2 + 0xc));
                if (iVar4 != 0) goto LAB_140491ae8;
            }
            else if (param_4 == *(int *)(*plVar2 + 0xc)) {
                LAB_140491ae8:
                if (*(int *)(*plVar2 + 0x14) == param_2) {
                    return plVar2;
                }
            }
            lVar6 = *(longlong *)(lVar9 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar9 + 8);
                if (lVar9 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar9 = lVar6;
                        lVar6 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar9 + 0x18) != lVar6) {
                    lVar9 = lVar6;
                }
            }
            else {
                for (lVar7 = *(longlong *)(lVar6 + 0x10); lVar9 = lVar6, lVar7 != 0;
                     lVar7 = *(longlong *)(lVar7 + 0x10)) {
                    lVar6 = lVar7;
                }
            }
        }
        uVar1 = puVar5[2];
        if (DAT_140c63840 == (code *)0x0) {
            if (_DAT_140c64634 != 0) {
                return (longlong *)0x0;
            }
            iVar4 = FUN_14024d920();
            if (iVar4 < 0) {
                return (longlong *)0x0;
            }
            puVar5 = (uint *)(**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,uVar1);
        }
        else {
            puVar5 = (uint *)(*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,uVar1,DAT_140c63858);
        }
    } while( true );
}



undefined8 FUN_140491bd0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    lVar2 = FUN_14021c940(param_2);
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 0x14) < 4)) {
        lVar2 = *(longlong *)
                ((ulonglong)*(uint *)(lVar2 + 0x14) * 0x20 + *(longlong *)(param_1 + 0x10) + 8);
        local_res18 = lVar2;
        lVar1 = *(longlong *)(lVar2 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < param_2) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res18 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res18 == lVar2) || (param_2 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar2;
        }
        if (local_res18 != lVar2) {
            return *(undefined8 *)(local_res18 + 0x28);
        }
    }
    return 0;
}



undefined8 FUN_140491c60(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    lVar2 = FUN_14021f3c0(param_2);
    if ((lVar2 != 0) && (lVar2 = FUN_140491bd0(param_1,*(undefined4 *)(lVar2 + 0x20)), lVar2 != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x10);
        local_res18 = lVar2;
        lVar1 = *(longlong *)(lVar2 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < param_2) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res18 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res18 == lVar2) || (param_2 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar2;
        }
        if (local_res18 != lVar2) {
            return *(undefined8 *)(local_res18 + 0x28);
        }
    }
    return 0;
}



undefined8 FUN_140491cf0(longlong param_1,int param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res20;

    if (param_3 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x50);
        local_res20 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res20 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res20 == lVar1) || (param_2 < *(int *)(local_res20 + 0x20))) {
            local_res20 = lVar1;
        }
        if ((local_res20 != lVar1) && ((ulonglong)param_3 - 1 < *(ulonglong *)(local_res20 + 0x30))) {
            return *(undefined8 *)(*(longlong *)(local_res20 + 0x28) + ((ulonglong)param_3 - 1) * 8);
        }
    }
    return 0;
}



undefined8 FUN_140491d60(undefined8 param_1,int param_2,uint param_3)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong local_res8;

    lVar2 = *(longlong *)(DAT_140c65968 + 0x50);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x20) < param_2) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if ((local_res8 == lVar2) || (uVar4 = *(ulonglong *)(local_res8 + 0x30), uVar4 == 0)) {
        return 0;
    }
    uVar8 = 0;
    uVar5 = uVar4;
    uVar6 = uVar4;
    while (1 < uVar6) {
        uVar7 = uVar5 + uVar8 >> 1;
        uVar1 = *(uint *)(**(longlong **)(*(longlong *)(local_res8 + 0x28) + uVar7 * 8) + 0xc);
        if ((uVar1 <= param_3) && (uVar8 = uVar7, uVar7 = uVar5, param_3 <= uVar1)) break;
        uVar5 = uVar7;
        uVar6 = uVar7 - uVar8;
    }
    if (uVar4 <= uVar8) {
        uVar8 = uVar4 - 1;
    }
    return *(undefined8 *)(*(longlong *)(local_res8 + 0x28) + uVar8 * 8);
}



undefined8 FUN_140491e30(undefined8 param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65968 + 0x50);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined8 *)(local_res8 + 0x30);
}



undefined4 FUN_140491e90(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65968 + 0x170);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return *(undefined4 *)(local_res8 + 0x24);
    }
    return 0;
}



undefined8 FUN_140491ef0(undefined4 param_1)

{
    switch(param_1) {
        case 0:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            return 0;
        default:
            return 4;
        case 2:
        case 10:
        case 0xe:
        case 0x14:
        case 0x16:
        case 0x17:
        case 0x18:
            return 2;
        case 3:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
            return 3;
        case 9:
        case 0x13:
        case 0x15:
        case 0x19:
        case 0x1a:
        case 0x1b:
            return 1;
    }
}



undefined8 FUN_140491f60(void)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined *puVar4;
    longlong *plVar5;
    longlong *plVar6;

    plVar6 = (longlong *)0x0;
    if (DAT_140c65968 == (longlong *)0x0) {
        plVar1 = (longlong *)FUN_14018b280(0x188,0);
        plVar5 = plVar6;
        if (plVar1 != (longlong *)0x0) {
            FUN_140492190(plVar1);
            *plVar1 = (longlong)&PTR_FUN_140b67310;
            plVar5 = plVar1;
        }
        DAT_140c65968 = plVar5;
        (**(code **)(*plVar5 + 8))(plVar5);
    }
    if (DAT_140c65978 == (longlong *)0x0) {
        plVar1 = (longlong *)FUN_14018b280(0x108,0);
        plVar5 = plVar6;
        if (plVar1 != (longlong *)0x0) {
            FUN_140492470(plVar1);
            *plVar1 = (longlong)&PTR_FUN_140b67330;
            plVar5 = plVar1;
        }
        DAT_140c65978 = plVar5;
        (**(code **)*plVar5)(plVar5);
        (**(code **)(*DAT_140c65978 + 8))(DAT_140c65978,0);
    }
    if (DAT_140c65958 == 0) {
        lVar2 = FUN_14018b280(0x40);
        if (lVar2 == 0) {
            DAT_140c65958 = 0;
        }
        else {
            DAT_140c65958 = FUN_140492110(lVar2);
        }
        FUN_140616f80();
    }
    if (DAT_140c65960 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN_14018b280(0x28);
        if (puVar3 == (undefined8 *)0x0) {
            DAT_140c65960 = (undefined8 *)0x0;
        }
        else {
            *puVar3 = &PTR_FUN_140b67280;
            puVar4 = (undefined *)FUN_14018b280(0x108,0);
            puVar3[3] = 0;
            puVar3[2] = puVar4;
            *puVar4 = 0;
            *(undefined8 *)(puVar3[2] + 8) = 0;
            DAT_140c65960 = puVar3;
            *(undefined8 *)(puVar3[2] + 0x10) = puVar3[2];
            *(undefined8 *)(puVar3[2] + 0x18) = puVar3[2];
            *puVar3 = &PTR_FUN_140b67258;
        }
        FUN_1404931c0();
    }
    if (DAT_140c65950 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_14018b280(0x78);
        if (plVar5 != (longlong *)0x0) {
            FUN_140492700(plVar5);
            *plVar5 = (longlong)&PTR_LAB_140b67238;
            plVar5[10] = 0;
            plVar5[9] = 0;
            plVar5[0xc] = 0;
            plVar5[0xb] = 0;
            plVar6 = plVar5;
        }
        DAT_140c65950 = plVar6;
        (**(code **)*plVar6)(plVar6);
    }
    return 0;
}



longlong FUN_140492110(longlong param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14018b280(0x28);
    *(undefined **)(param_1 + 8) = puVar1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined **)(param_1 + 0x28) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(longlong *)(param_1 + 0x28);
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(longlong *)(param_1 + 0x28);
    return param_1;
}



undefined8 * FUN_140492190(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b67370;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x38,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xf] = 0;
    param_1[0xe] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xe] + 8) = 0;
    *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
    *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x13] = 0;
    param_1[0x12] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x12] + 8) = 0;
    *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
    *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x17] = 0;
    param_1[0x16] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x16] + 8) = 0;
    *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
    *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x1b] = 0;
    param_1[0x1a] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x1f] = 0;
    param_1[0x1e] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined8 *)(param_1[0x1e] + 0x10) = param_1[0x1e];
    *(undefined8 *)(param_1[0x1e] + 0x18) = param_1[0x1e];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x23] = 0;
    param_1[0x22] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x22] + 8) = 0;
    *(undefined8 *)(param_1[0x22] + 0x10) = param_1[0x22];
    *(undefined8 *)(param_1[0x22] + 0x18) = param_1[0x22];
    puVar1 = (undefined *)FUN_14018b280(0x38,0);
    param_1[0x27] = 0;
    param_1[0x26] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x26] + 8) = 0;
    *(undefined8 *)(param_1[0x26] + 0x10) = param_1[0x26];
    *(undefined8 *)(param_1[0x26] + 0x18) = param_1[0x26];
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[0x2b] = 0;
    param_1[0x2a] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x2a] + 8) = 0;
    *(undefined8 *)(param_1[0x2a] + 0x10) = param_1[0x2a];
    *(undefined8 *)(param_1[0x2a] + 0x18) = param_1[0x2a];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x2f] = 0;
    param_1[0x2e] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x2e] + 8) = 0;
    *(undefined8 *)(param_1[0x2e] + 0x10) = param_1[0x2e];
    *(undefined8 *)(param_1[0x2e] + 0x18) = param_1[0x2e];
    return param_1;
}



undefined8 FUN_140492430(undefined8 param_1,ulonglong param_2)

{
    FUN_1407220b0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_140492470(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b672b0;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xf] = 0;
    param_1[0xe] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xe] + 8) = 0;
    *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
    *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[0x13] = 0;
    param_1[0x12] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x12] + 8) = 0;
    *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
    *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[0x17] = 0;
    param_1[0x16] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x16] + 8) = 0;
    *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
    *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x1b] = 0;
    param_1[0x1a] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x1f] = 0;
    param_1[0x1e] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined8 *)(param_1[0x1e] + 0x10) = param_1[0x1e];
    *(undefined8 *)(param_1[0x1e] + 0x18) = param_1[0x1e];
    return param_1;
}



undefined8 FUN_140492640(undefined8 param_1,ulonglong param_2)

{
    FUN_1404930b0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_140492680(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_LAB_140b67238;
    param_1[10] = 0;
    param_1[0xc] = 0;
    lVar1 = param_1[0xb];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[9];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140618c60(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_140492700(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_LAB_140b672f0;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    return param_1;
}



undefined8 FUN_140492790(undefined8 param_1,ulonglong param_2)

{
    FUN_140618c60();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1404927d0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_14018b280(0x128,0);
    if (lVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = FUN_14056e070(lVar1,param_1);
    }
    if (DAT_140c65970 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65970)(DAT_140c65970,1);
    }
    DAT_140c65970 = (undefined8 *)uVar2;
    if (DAT_140c65898 != 0) {
        if (DAT_140c65b78 != 0) {
            FUN_140575dd0();
        }
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    }
    return 0;
}



void FUN_140492850(void)

{
    longlong lVar1;

    if (DAT_140c65960 != (undefined8 *)0x0) {
        FUN_140493df0(DAT_140c65960,0);
    }
    if (DAT_140c65978 != (longlong *)0x0) {
        (**(code **)(*DAT_140c65978 + 0x10))(DAT_140c65978,0);
    }
    if (DAT_140c65970 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65970)(DAT_140c65970,1);
    }
    if (DAT_140c65968 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65968)(DAT_140c65968,1);
    }
    if (DAT_140c65978 != (longlong *)0x0) {
        (**(code **)(*DAT_140c65978 + 0x18))(DAT_140c65978,1);
    }
    lVar1 = DAT_140c65958;
    if (DAT_140c65958 != 0) {
        FUN_140616d70(DAT_140c65958);
        FUN_14018b900(lVar1,0);
    }
    if (DAT_140c65960 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65960)(DAT_140c65960,1);
    }
    if (DAT_140c65950 != (longlong *)0x0) {
        (**(code **)(*DAT_140c65950 + 8))(DAT_140c65950,1);
    }
    DAT_140c65950 = (longlong *)0x0;
    DAT_140c65958 = 0;
    DAT_140c65960 = (undefined8 *)0x0;
    DAT_140c65968 = (undefined8 *)0x0;
    DAT_140c65970 = (undefined8 *)0x0;
    DAT_140c65978 = (longlong *)0x0;
    return;
}



bool FUN_140492960(undefined8 param_1,int param_2)

{
    int iVar1;

    if (DAT_140c65898 == 0) {
        return false;
    }
    iVar1 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    return iVar1 == param_2;
}



void FUN_140492da0(undefined8 *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;

    *param_1 = &PTR_LAB_140b673a8;
    lVar1 = param_1[0xe];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140008410(param_1 + 8);
    FUN_14018b900(param_1[9],0);
    plVar3 = *(longlong **)(longlong *)param_1[7];
    if (plVar3 != (longlong *)param_1[7]) {
        do {
            plVar2 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong *)param_1[7]);
    }
    *(undefined8 *)param_1[7] = param_1[7];
    *(undefined8 *)(param_1[7] + 8) = param_1[7];
    FUN_14018b900(param_1[7],0);
    FUN_140008410(param_1 + 2);
    FUN_14018b900(param_1[3],0);
    return;
}



longlong FUN_140492e40(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = *(longlong *)(param_1 + 0x10) - param_3 >> 5;
    lVar1 = param_2;
    if (0 < lVar2) {
        do {
            FUN_1404956e0(lVar1,(param_3 - param_2) + lVar1);
            lVar2 = lVar2 + -1;
            lVar1 = lVar1 + 0x20;
        } while (0 < lVar2);
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x20) {
        FUN_140008410(lVar1);
        FUN_14018b900(*(undefined8 *)(lVar1 + 8),0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + (param_3 - param_2 >> 5) * -0x20;
    return param_2;
}



undefined8 * FUN_140492ef0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b67230;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    param_1[3] = param_2;
    param_1[4] = param_3;
    return param_1;
}



undefined8 * FUN_140492f80(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
    undefined *puVar1;
    undefined8 uVar2;

    *param_1 = &PTR_LAB_140b673a8;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[3] = puVar1;
    param_1[4] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[3] + 8) = 0;
    *(undefined8 *)(param_1[3] + 0x10) = param_1[3];
    *(undefined8 *)(param_1[3] + 0x18) = param_1[3];
    uVar2 = FUN_14018b280(0x18,0);
    param_1[7] = uVar2;
    *(undefined8 *)uVar2 = uVar2;
    *(undefined8 *)(param_1[7] + 8) = param_1[7];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[10] = 0;
    param_1[9] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[9] + 8) = 0;
    *(undefined8 *)(param_1[9] + 0x10) = param_1[9];
    *(undefined8 *)(param_1[9] + 0x18) = param_1[9];
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = 0;
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[1] = param_2;
    *(undefined4 *)(param_1 + 0x10) = param_3;
    return param_1;
}



void FUN_140493050(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 != 0) {
        do {
            FUN_140493050(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            FUN_140494c80(param_2 + 0x28);
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140493170)

void FUN_1404930b0(undefined8 *param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b67280;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x18);
            puVar1 = (undefined4 *)(lVar4 + 0x20);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
            FUN_140493df0(param_1,*puVar1);
        } while (lVar4 != param_1[2]);
    }
    if (param_1[3] != 0) {
        FUN_140493050(param_1 + 1,*(undefined8 *)(param_1[2] + 8));
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404931c0(undefined8 param_1,undefined4 param_2)

{
    uint uVar1;
    char *pcVar2;
    uint uVar3;
    int iVar4;
    undefined8 uVar5;
    uint *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    char *pcVar11;
    longlong lVar12;
    longlong lVar13;
    longlong *plVar14;
    char *pcVar15;
    char *pcVar16;
    longlong lVar17;
    char **ppcVar18;
    char *pcVar19;
    longlong lVar20;
    uint *puVar21;
    uint uVar22;
    bool bVar23;
    longlong local_res8;
    uint local_res10;
    longlong local_res18;
    char *local_res20;
    uint local_268;
    undefined4 uStack612;
    longlong local_260;
    uint local_258;
    undefined4 uStack596;
    longlong local_250;
    char *local_248;
    uint local_240;
    undefined4 uStack572;
    longlong *local_230;
    undefined local_228 [16];
    undefined4 local_218;
    undefined local_210 [224];
    undefined local_130 [240];

    plVar14 = DAT_140c65960;
    local_230 = DAT_140c65960;
    lVar7 = DAT_140c65960[2];
    lVar8 = *(longlong *)(lVar7 + 8);
    local_res8 = lVar7;
    for (lVar20 = lVar8; lVar20 != 0; lVar20 = *(longlong *)(lVar20 + 0x10)) {
        local_res8 = lVar20;
    }
    if ((local_res8 == lVar7) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar7;
    }
    lVar20 = lVar7;
    if ((local_res8 != lVar7) && (local_res8 != -0x28)) {
        return 0x80004005;
    }
    for (; lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x10)) {
        lVar20 = lVar8;
    }
    local_res10 = param_2;
    if ((lVar20 == lVar7) || (*(int *)(lVar20 + 0x20) != 0)) {
        uVar5 = FUN_140494af0(local_130);
        local_218 = 0;
        FUN_140494d40(local_210,uVar5);
        local_res8 = lVar20;
        FUN_1404953c0(plVar14 + 1,&local_res18);
        lVar20 = local_res18;
        FUN_140494c80(local_210);
        FUN_140494c80(local_130);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64874 == 0) {
            iVar4 = FUN_140222020();
            if (iVar4 < 0) {
                uVar3 = 0;
            }
            else {
                uVar3 = (**(code **)(*DAT_140c650b8 + 0x28))();
            }
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_PathSettlerHub_140a6c008,DAT_140c63858);
    }
    uVar22 = 0;
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64874 == 0) && (iVar4 = FUN_140222020(), -1 < iVar4)) {
                    puVar6 = (uint *)(**(code **)(*DAT_140c650b8 + 0x20))(DAT_140c650b8,uVar22);
                    goto LAB_14049339b;
                }
            }
            else {
                puVar6 = (uint *)(*DAT_140c63848)(&PTR_u_PathSettlerHub_140a6c008);
                LAB_14049339b:
                if (puVar6 != (uint *)0x0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64634 != 0) || (iVar4 = FUN_14024d920(), iVar4 < 0)) goto LAB_14049353f;
                        lVar7 = (**(code **)(*DAT_140c64270 + 0x18))();
                    }
                    else {
                        lVar7 = (*DAT_140c63840)();
                    }
                    if (lVar7 != 0) {
                        if ((*(byte *)(puVar6 + 9) & 1) != 0) {
                            puVar21 = puVar6 + 0xd;
                            lVar7 = 3;
                            do {
                                if (*puVar21 != 0) {
                                    FUN_1402284a0();
                                }
                                puVar21 = puVar21 + 1;
                                lVar7 = lVar7 + -1;
                            } while (lVar7 != 0);
                        }
                        lVar7 = (**(code **)(*plVar14 + 8))(plVar14,puVar6,0);
                        local_258 = *puVar6;
                        local_250 = lVar7;
                        FUN_140055f80(lVar20 + 0x28);
                        uVar1 = *(uint *)(*(longlong *)(lVar7 + 8) + 0x1c);
                        if (uVar1 != 0) {
                            lVar8 = *(longlong *)(lVar20 + 0x50);
                            lVar17 = lVar8;
                            lVar9 = *(longlong *)(lVar8 + 8);
                            while (lVar9 != 0) {
                                lVar17 = lVar9;
                                if (uVar1 < *(uint *)(lVar9 + 0x20)) {
                                    lVar9 = *(longlong *)(lVar9 + 0x10);
                                }
                                else {
                                    lVar9 = *(longlong *)(lVar9 + 0x18);
                                }
                            }
                            local_268 = uVar1;
                            if ((lVar17 == lVar8) || (uVar1 < *(uint *)(lVar17 + 0x20))) {
                                lVar8 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack612,local_268);
                                    *(longlong *)(lVar8 + 0x28) = lVar7;
                                }
                                *(longlong *)(lVar17 + 0x10) = lVar8;
                                lVar7 = *(longlong *)(lVar20 + 0x50);
                                if (lVar17 == lVar7) {
                                    *(longlong *)(lVar7 + 8) = lVar8;
                                    *(longlong *)(*(longlong *)(lVar20 + 0x50) + 0x18) = lVar8;
                                }
                                else if (lVar17 == *(longlong *)(lVar7 + 0x10)) {
                                    *(longlong *)(lVar7 + 0x10) = lVar8;
                                }
                            }
                            else {
                                lVar8 = FUN_14018b280(0x30,0);
                                if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack612,local_268);
                                    *(longlong *)(lVar8 + 0x28) = lVar7;
                                }
                                *(longlong *)(lVar17 + 0x18) = lVar8;
                                if (lVar17 == *(longlong *)(*(longlong *)(lVar20 + 0x50) + 0x18)) {
                                    *(longlong *)(*(longlong *)(lVar20 + 0x50) + 0x18) = lVar8;
                                }
                            }
                            *(longlong *)(lVar8 + 8) = lVar17;
                            *(undefined8 *)(lVar8 + 0x10) = 0;
                            *(undefined8 *)(lVar8 + 0x18) = 0;
                            FUN_1400081c0();
                            *(longlong *)(lVar20 + 0x58) = *(longlong *)(lVar20 + 0x58) + 1;
                        }
                    }
                }
            }
            LAB_14049353f:
            uVar22 = uVar22 + 1;
        } while (uVar22 < uVar3);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c650b0 == 0) {
            iVar4 = FUN_1402217a0();
            if (iVar4 < 0) {
                uVar3 = 0;
            }
            else {
                uVar3 = (**(code **)(*DAT_140c64660 + 0x28))();
            }
        }
        else {
            uVar3 = 0;
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_PathSettlerImprovementGroup_140a6bf98,DAT_140c63858);
    }
    uVar22 = 0;
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c650b0 == 0) && (iVar4 = FUN_1402217a0(), -1 < iVar4)) {
                    puVar6 = (uint *)(**(code **)(*DAT_140c64660 + 0x20))(DAT_140c64660,uVar22);
                    goto LAB_1404935e9;
                }
            }
            else {
                puVar6 = (uint *)(*DAT_140c63848)(&PTR_u_PathSettlerImprovementGroup_140a6bf98);
                LAB_1404935e9:
                if ((puVar6 != (uint *)0x0) && ((puVar6[3] != 0 || ((*(byte *)(puVar6 + 2) & 1) != 0)))) {
                    lVar7 = *(longlong *)(lVar20 + 0x30);
                    lVar8 = lVar7;
                    if (*(longlong *)(lVar7 + 8) != 0) {
                        lVar17 = *(longlong *)(lVar7 + 8);
                        do {
                            if (*(uint *)(lVar17 + 0x20) < puVar6[1]) {
                                lVar9 = *(longlong *)(lVar17 + 0x18);
                            }
                            else {
                                lVar9 = *(longlong *)(lVar17 + 0x10);
                                lVar8 = lVar17;
                            }
                            lVar17 = lVar9;
                        } while (lVar9 != 0);
                    }
                    if ((lVar8 == lVar7) || (puVar6[1] < *(uint *)(lVar8 + 0x20))) {
                        local_res18 = lVar7;
                        plVar10 = &local_res18;
                    }
                    else {
                        local_res8 = lVar8;
                        plVar10 = &local_res8;
                    }
                    if (*plVar10 != lVar7) {
                        lVar7 = *(longlong *)(*plVar10 + 0x28);
                        lVar8 = (**(code **)(*plVar14 + 0x10))(plVar14,puVar6,lVar7);
                        FUN_140494e40(lVar7,lVar8);
                        local_258 = *puVar6;
                        local_250 = lVar8;
                        FUN_140055f80(lVar20 + 0x68);
                        if ((*(byte *)(puVar6 + 2) & 1) == 0) {
                            pcVar2 = *(char **)(lVar20 + 0x90);
                            pcVar19 = pcVar2;
                            if (*(char **)(pcVar2 + 8) != (char *)0x0) {
                                pcVar11 = *(char **)(pcVar2 + 8);
                                do {
                                    if (*(uint *)(pcVar11 + 0x20) < puVar6[3]) {
                                        pcVar15 = *(char **)(pcVar11 + 0x18);
                                    }
                                    else {
                                        pcVar15 = *(char **)(pcVar11 + 0x10);
                                        pcVar19 = pcVar11;
                                    }
                                    pcVar11 = pcVar15;
                                } while (pcVar15 != (char *)0x0);
                            }
                            if ((pcVar19 == pcVar2) || (puVar6[3] < *(uint *)(pcVar19 + 0x20))) {
                                local_248 = pcVar2;
                                ppcVar18 = &local_248;
                            }
                            else {
                                local_res20 = pcVar19;
                                ppcVar18 = &local_res20;
                            }
                            if (*ppcVar18 == pcVar2) {
                                local_268 = puVar6[3];
                                local_260 = lVar7;
                                FUN_140055f80(lVar20 + 0x88);
                            }
                        }
                    }
                }
            }
            uVar22 = uVar22 + 1;
        } while (uVar22 < uVar3);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64500 == 0) {
            iVar4 = FUN_140221be0();
            if (iVar4 < 0) {
                local_res10 = 0;
            }
            else {
                local_res10 = (**(code **)(*DAT_140c64300 + 0x28))();
            }
        }
        else {
            local_res10 = 0;
        }
    }
    else {
        local_res10 = (*DAT_140c63838)(&PTR_u_PathSettlerInfrastructure_140a6bfd0,DAT_140c63858);
    }
    uVar3 = 0;
    if (local_res10 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64500 == 0) && (iVar4 = FUN_140221be0(), -1 < iVar4)) {
                    puVar6 = (uint *)(**(code **)(*DAT_140c64300 + 0x20))(DAT_140c64300,uVar3);
                    goto LAB_1404937db;
                }
            }
            else {
                puVar6 = (uint *)(*DAT_140c63848)(&PTR_u_PathSettlerInfrastructure_140a6bfd0);
                LAB_1404937db:
                if (((puVar6 != (uint *)0x0) && (puVar6[6] != 0)) && (puVar6[8] != 0)) {
                    lVar7 = (**(code **)(*local_230 + 0x18))(local_230,puVar6);
                    local_268 = *puVar6;
                    pcVar2 = *(char **)(lVar20 + 0xb0);
                    bVar23 = true;
                    pcVar19 = pcVar2;
                    pcVar11 = *(char **)(pcVar2 + 8);
                    while (pcVar11 != (char *)0x0) {
                        bVar23 = local_268 < *(uint *)(pcVar11 + 0x20);
                        pcVar19 = pcVar11;
                        if (bVar23) {
                            pcVar11 = *(char **)(pcVar11 + 0x10);
                        }
                        else {
                            pcVar11 = *(char **)(pcVar11 + 0x18);
                        }
                    }
                    pcVar11 = pcVar19;
                    local_260 = lVar7;
                    if (bVar23) {
                        if (pcVar19 != *(char **)(pcVar2 + 0x10)) {
                            if ((*pcVar19 == '\0') && (*(char **)(*(longlong *)(pcVar19 + 8) + 8) == pcVar19)) {
                                pcVar11 = *(char **)(pcVar19 + 0x18);
                            }
                            else {
                                pcVar11 = *(char **)(pcVar19 + 0x10);
                                if (pcVar11 == (char *)0x0) {
                                    pcVar11 = *(char **)(pcVar19 + 8);
                                    pcVar15 = pcVar11;
                                    if (pcVar19 == *(char **)(pcVar11 + 0x10)) {
                                        do {
                                            pcVar11 = *(char **)(pcVar15 + 8);
                                            bVar23 = pcVar15 == *(char **)(pcVar11 + 0x10);
                                            pcVar15 = pcVar11;
                                        } while (bVar23);
                                    }
                                }
                                else {
                                    for (pcVar15 = *(char **)(pcVar11 + 0x18); pcVar15 != (char *)0x0;
                                         pcVar15 = *(char **)(pcVar15 + 0x18)) {
                                        pcVar11 = pcVar15;
                                    }
                                }
                            }
                            goto LAB_1404938ed;
                        }
                        FUN_140055e80(lVar20 + 0xa8,local_228,0,pcVar19,&local_268);
                    }
                    else {
                        LAB_1404938ed:
                        if (*(uint *)(pcVar11 + 0x20) < local_268) {
                            if ((pcVar19 == pcVar2) || (local_268 < *(uint *)(pcVar19 + 0x20))) {
                                lVar8 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack612,local_268);
                                    *(longlong *)(lVar8 + 0x28) = lVar7;
                                }
                                *(longlong *)(pcVar19 + 0x10) = lVar8;
                                pcVar2 = *(char **)(lVar20 + 0xb0);
                                if (pcVar19 == pcVar2) {
                                    *(longlong *)(pcVar2 + 8) = lVar8;
                                    *(longlong *)(*(longlong *)(lVar20 + 0xb0) + 0x18) = lVar8;
                                }
                                else if (pcVar19 == *(char **)(pcVar2 + 0x10)) {
                                    *(longlong *)(pcVar2 + 0x10) = lVar8;
                                }
                            }
                            else {
                                lVar8 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack612,local_268);
                                    *(longlong *)(lVar8 + 0x28) = lVar7;
                                }
                                *(longlong *)(pcVar19 + 0x18) = lVar8;
                                if (pcVar19 == *(char **)(*(longlong *)(lVar20 + 0xb0) + 0x18)) {
                                    *(longlong *)(*(longlong *)(lVar20 + 0xb0) + 0x18) = lVar8;
                                }
                            }
                            *(char **)(lVar8 + 8) = pcVar19;
                            *(undefined8 *)(lVar8 + 0x10) = 0;
                            *(undefined8 *)(lVar8 + 0x18) = 0;
                            FUN_1400081c0();
                            *(longlong *)(lVar20 + 0xb8) = *(longlong *)(lVar20 + 0xb8) + 1;
                        }
                    }
                    lVar8 = 2;
                    puVar21 = puVar6;
                    do {
                        puVar21 = puVar21 + 1;
                        lVar17 = *(longlong *)(lVar20 + 0x30);
                        lVar9 = lVar17;
                        if (*(longlong *)(lVar17 + 8) != 0) {
                            lVar12 = *(longlong *)(lVar17 + 8);
                            do {
                                if (*(uint *)(lVar12 + 0x20) < *puVar21) {
                                    lVar13 = *(longlong *)(lVar12 + 0x18);
                                }
                                else {
                                    lVar13 = *(longlong *)(lVar12 + 0x10);
                                    lVar9 = lVar12;
                                }
                                lVar12 = lVar13;
                            } while (lVar13 != 0);
                        }
                        if ((lVar9 == lVar17) || (*puVar21 < *(uint *)(lVar9 + 0x20))) {
                            local_res18 = lVar17;
                            plVar14 = &local_res18;
                        }
                        else {
                            local_res8 = lVar9;
                            plVar14 = &local_res8;
                        }
                        if (*plVar14 != lVar17) {
                            lVar17 = *(longlong *)(*(longlong *)(*plVar14 + 0x28) + 0x38);
                            plVar14 = (longlong *)FUN_14018b280(0x18);
                            if (plVar14 + 2 != (longlong *)0x0) {
                                plVar14[2] = lVar7;
                            }
                            *plVar14 = lVar17;
                            plVar14[1] = *(longlong *)(lVar17 + 8);
                            **(longlong ***)(lVar17 + 8) = plVar14;
                            *(longlong **)(lVar17 + 8) = plVar14;
                        }
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                    pcVar2 = *(char **)(lVar20 + 0xf0);
                    pcVar19 = *(char **)(pcVar2 + 8);
                    pcVar11 = pcVar2;
                    if (pcVar19 != (char *)0x0) {
                        pcVar15 = pcVar19;
                        do {
                            if (*(uint *)(pcVar15 + 0x20) < puVar6[8]) {
                                pcVar16 = *(char **)(pcVar15 + 0x18);
                            }
                            else {
                                pcVar16 = *(char **)(pcVar15 + 0x10);
                                pcVar11 = pcVar15;
                            }
                            pcVar15 = pcVar16;
                        } while (pcVar16 != (char *)0x0);
                    }
                    if ((pcVar11 == pcVar2) || (puVar6[8] < *(uint *)(pcVar11 + 0x20))) {
                        local_248 = pcVar2;
                        ppcVar18 = &local_248;
                    }
                    else {
                        local_res20 = pcVar11;
                        ppcVar18 = &local_res20;
                    }
                    if (*ppcVar18 == pcVar2) {
                        local_258 = puVar6[8];
                        bVar23 = true;
                        pcVar11 = pcVar2;
                        while (pcVar19 != (char *)0x0) {
                            bVar23 = local_258 < *(uint *)(pcVar19 + 0x20);
                            pcVar11 = pcVar19;
                            if (bVar23) {
                                pcVar19 = *(char **)(pcVar19 + 0x10);
                            }
                            else {
                                pcVar19 = *(char **)(pcVar19 + 0x18);
                            }
                        }
                        pcVar19 = pcVar11;
                        if (bVar23) {
                            if (pcVar11 != *(char **)(pcVar2 + 0x10)) {
                                if ((*pcVar11 == '\0') && (*(char **)(*(longlong *)(pcVar11 + 8) + 8) == pcVar11)) {
                                    pcVar19 = *(char **)(pcVar11 + 0x18);
                                }
                                else {
                                    pcVar19 = *(char **)(pcVar11 + 0x10);
                                    if (pcVar19 == (char *)0x0) {
                                        pcVar19 = *(char **)(pcVar11 + 8);
                                        pcVar15 = pcVar19;
                                        if (pcVar11 == *(char **)(pcVar19 + 0x10)) {
                                            do {
                                                pcVar19 = *(char **)(pcVar15 + 8);
                                                bVar23 = pcVar15 == *(char **)(pcVar19 + 0x10);
                                                pcVar15 = pcVar19;
                                            } while (bVar23);
                                        }
                                    }
                                    else {
                                        for (pcVar15 = *(char **)(pcVar19 + 0x18); pcVar15 != (char *)0x0;
                                             pcVar15 = *(char **)(pcVar15 + 0x18)) {
                                            pcVar19 = pcVar15;
                                        }
                                    }
                                }
                                goto LAB_140493b4d;
                            }
                        }
                        else {
                            LAB_140493b4d:
                            if (local_258 <= *(uint *)(pcVar19 + 0x20)) goto LAB_140493c10;
                        }
                        if ((pcVar11 == pcVar2) || (local_258 < *(uint *)(pcVar11 + 0x20))) {
                            lVar8 = FUN_14018b280(0x30);
                            if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack596,local_258);
                                *(longlong *)(lVar8 + 0x28) = lVar7;
                            }
                            *(longlong *)(pcVar11 + 0x10) = lVar8;
                            pcVar2 = *(char **)(lVar20 + 0xf0);
                            if (pcVar11 == pcVar2) {
                                *(longlong *)(pcVar2 + 8) = lVar8;
                                *(longlong *)(*(longlong *)(lVar20 + 0xf0) + 0x18) = lVar8;
                            }
                            else if (pcVar11 == *(char **)(pcVar2 + 0x10)) {
                                *(longlong *)(pcVar2 + 0x10) = lVar8;
                            }
                        }
                        else {
                            lVar8 = FUN_14018b280(0x30);
                            if ((undefined8 *)(lVar8 + 0x20) != (undefined8 *)0x0) {
                                *(undefined8 *)(lVar8 + 0x20) = CONCAT44(uStack596,local_258);
                                *(longlong *)(lVar8 + 0x28) = lVar7;
                            }
                            *(longlong *)(pcVar11 + 0x18) = lVar8;
                            if (pcVar11 == *(char **)(*(longlong *)(lVar20 + 0xf0) + 0x18)) {
                                *(longlong *)(*(longlong *)(lVar20 + 0xf0) + 0x18) = lVar8;
                            }
                        }
                        *(char **)(lVar8 + 8) = pcVar11;
                        *(undefined8 *)(lVar8 + 0x10) = 0;
                        *(undefined8 *)(lVar8 + 0x18) = 0;
                        FUN_1400081c0();
                        *(longlong *)(lVar20 + 0xf8) = *(longlong *)(lVar20 + 0xf8) + 1;
                    }
                    LAB_140493c10:
                    puVar6 = puVar6 + 0xc;
                    lVar8 = 3;
                    do {
                        uVar22 = puVar6[-3];
                        if ((uVar22 != 0) && (*puVar6 != 0)) {
                            lVar17 = *(longlong *)(lVar20 + 0xd0);
                            lVar9 = lVar17;
                            lVar12 = *(longlong *)(lVar17 + 8);
                            while (lVar12 != 0) {
                                lVar9 = lVar12;
                                if (uVar22 < *(uint *)(lVar12 + 0x20)) {
                                    lVar12 = *(longlong *)(lVar12 + 0x10);
                                }
                                else {
                                    lVar12 = *(longlong *)(lVar12 + 0x18);
                                }
                            }
                            local_240 = uVar22;
                            if ((lVar9 == lVar17) || (uVar22 < *(uint *)(lVar9 + 0x20))) {
                                lVar17 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar17 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar17 + 0x20) = CONCAT44(uStack572,local_240);
                                    *(longlong *)(lVar17 + 0x28) = lVar7;
                                }
                                *(longlong *)(lVar9 + 0x10) = lVar17;
                                lVar12 = *(longlong *)(lVar20 + 0xd0);
                                if (lVar9 == lVar12) {
                                    *(longlong *)(lVar12 + 8) = lVar17;
                                    *(longlong *)(*(longlong *)(lVar20 + 0xd0) + 0x18) = lVar17;
                                }
                                else if (lVar9 == *(longlong *)(lVar12 + 0x10)) {
                                    *(longlong *)(lVar12 + 0x10) = lVar17;
                                }
                            }
                            else {
                                lVar17 = FUN_14018b280(0x30,0);
                                if ((undefined8 *)(lVar17 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar17 + 0x20) = CONCAT44(uStack572,local_240);
                                    *(longlong *)(lVar17 + 0x28) = lVar7;
                                }
                                *(longlong *)(lVar9 + 0x18) = lVar17;
                                if (lVar9 == *(longlong *)(*(longlong *)(lVar20 + 0xd0) + 0x18)) {
                                    *(longlong *)(*(longlong *)(lVar20 + 0xd0) + 0x18) = lVar17;
                                }
                            }
                            *(longlong *)(lVar17 + 8) = lVar9;
                            *(undefined8 *)(lVar17 + 0x10) = 0;
                            *(undefined8 *)(lVar17 + 0x18) = 0;
                            FUN_1400081c0();
                            *(longlong *)(lVar20 + 0xd8) = *(longlong *)(lVar20 + 0xd8) + 1;
                        }
                        puVar6 = puVar6 + 1;
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < local_res10);
    }
    lVar7 = *(longlong *)(*(longlong *)(lVar20 + 0x30) + 0x10);
    if (lVar7 != *(longlong *)(lVar20 + 0x30)) {
        do {
            FUN_140494f70(*(undefined8 *)(lVar7 + 0x28));
            lVar8 = *(longlong *)(lVar7 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar7 = lVar8;
                        lVar8 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar8) {
                    lVar7 = lVar8;
                }
            }
            else {
                for (lVar17 = *(longlong *)(lVar8 + 0x10); lVar7 = lVar8, lVar17 != 0;
                     lVar17 = *(longlong *)(lVar17 + 0x10)) {
                    lVar8 = lVar17;
                }
            }
        } while (lVar7 != *(longlong *)(lVar20 + 0x30));
    }
    return 0;
}



undefined8 FUN_140493df0(longlong param_1,uint param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar1;
    lVar5 = *(longlong *)(lVar1 + 8);
    while (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x20) < param_2) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
            local_res8 = lVar5;
            lVar5 = *(longlong *)(lVar5 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    lVar1 = local_res8;
    if (local_res8 != *(longlong *)(param_1 + 0x10)) {
        lVar5 = *(longlong *)(*(longlong *)(local_res8 + 0x70) + 0x10);
        if (lVar5 != *(longlong *)(local_res8 + 0x70)) {
            do {
                puVar2 = *(undefined8 **)(lVar5 + 0x28);
                if (puVar2 != (undefined8 *)0x0) {
                    (**(code **)*puVar2)(puVar2,1);
                }
                lVar4 = *(longlong *)(lVar5 + 0x18);
                if (lVar4 == 0) {
                    lVar4 = *(longlong *)(lVar5 + 8);
                    if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                        do {
                            lVar5 = lVar4;
                            lVar4 = *(longlong *)(lVar5 + 8);
                        } while (lVar5 == *(longlong *)(lVar4 + 0x18));
                    }
                    if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                        lVar5 = lVar4;
                    }
                }
                else {
                    for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar4 = lVar3;
                    }
                }
            } while (lVar5 != *(longlong *)(lVar1 + 0x70));
        }
        FUN_140008410(lVar1 + 0x68);
        FUN_140008410(lVar1 + 0x88);
        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0xb0) + 0x10);
        if (lVar5 != *(longlong *)(lVar1 + 0xb0)) {
            do {
                puVar2 = *(undefined8 **)(lVar5 + 0x28);
                if (puVar2 != (undefined8 *)0x0) {
                    (**(code **)*puVar2)(puVar2,1);
                }
                lVar4 = *(longlong *)(lVar5 + 0x18);
                if (lVar4 == 0) {
                    lVar4 = *(longlong *)(lVar5 + 8);
                    if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                        do {
                            lVar5 = lVar4;
                            lVar4 = *(longlong *)(lVar5 + 8);
                        } while (lVar5 == *(longlong *)(lVar4 + 0x18));
                    }
                    if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                        lVar5 = lVar4;
                    }
                }
                else {
                    for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar4 = lVar3;
                    }
                }
            } while (lVar5 != *(longlong *)(lVar1 + 0xb0));
        }
        if (*(longlong *)(lVar1 + 0xb8) != 0) {
            lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0xb0) + 8);
            while (lVar5 != 0) {
                FUN_1400083b0(lVar1 + 0xa8,*(undefined8 *)(lVar5 + 0x18));
                lVar4 = *(longlong *)(lVar5 + 0x10);
                FUN_14018b900(lVar5,0);
                lVar5 = lVar4;
            }
            *(longlong *)(*(longlong *)(lVar1 + 0xb0) + 0x10) = *(longlong *)(lVar1 + 0xb0);
            *(undefined8 *)(*(longlong *)(lVar1 + 0xb0) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar1 + 0xb0) + 0x18) = *(longlong *)(lVar1 + 0xb0);
            *(undefined8 *)(lVar1 + 0xb8) = 0;
        }
        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x10);
        if (lVar5 != *(longlong *)(lVar1 + 0x30)) {
            do {
                puVar2 = *(undefined8 **)(lVar5 + 0x28);
                if (puVar2 != (undefined8 *)0x0) {
                    (**(code **)*puVar2)(puVar2,1);
                }
                lVar4 = *(longlong *)(lVar5 + 0x18);
                if (lVar4 == 0) {
                    lVar4 = *(longlong *)(lVar5 + 8);
                    if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                        do {
                            lVar5 = lVar4;
                            lVar4 = *(longlong *)(lVar5 + 8);
                        } while (lVar5 == *(longlong *)(lVar4 + 0x18));
                    }
                    if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                        lVar5 = lVar4;
                    }
                }
                else {
                    for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar4 = lVar3;
                    }
                }
            } while (lVar5 != *(longlong *)(lVar1 + 0x30));
        }
        if (*(longlong *)(lVar1 + 0x38) != 0) {
            lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 8);
            while (lVar5 != 0) {
                FUN_1400083b0(lVar1 + 0x28,*(undefined8 *)(lVar5 + 0x18));
                lVar4 = *(longlong *)(lVar5 + 0x10);
                FUN_14018b900(lVar5,0);
                lVar5 = lVar4;
            }
            *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x10) = *(longlong *)(lVar1 + 0x30);
            *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x18) = *(longlong *)(lVar1 + 0x30);
            *(undefined8 *)(lVar1 + 0x38) = 0;
        }
        if (*(longlong *)(lVar1 + 0x58) != 0) {
            lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x50) + 8);
            while (lVar5 != 0) {
                FUN_1400083b0(lVar1 + 0x48,*(undefined8 *)(lVar5 + 0x18));
                lVar4 = *(longlong *)(lVar5 + 0x10);
                FUN_14018b900(lVar5,0);
                lVar5 = lVar4;
            }
            *(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x10) = *(longlong *)(lVar1 + 0x50);
            *(undefined8 *)(*(longlong *)(lVar1 + 0x50) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x18) = *(longlong *)(lVar1 + 0x50);
            *(undefined8 *)(lVar1 + 0x58) = 0;
        }
        local_res8 = lVar1;
        FUN_1404955d0(param_1 + 8,&local_res8);
        return 0;
    }
    return 0x80004005;
}



void FUN_140494140(longlong param_1,longlong param_2,undefined8 param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_38 [8];
    undefined8 local_30;

    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 == *(longlong *)(param_1 + 0x18)) {
        lVar4 = lVar5 - *(longlong *)(param_1 + 8) >> 5;
        lVar5 = lVar4 * 2;
        if (lVar4 == 0) {
            lVar5 = 1;
        }
        uVar1 = FUN_14018a3e0(lVar5 << 5);
        lVar2 = FUN_14018b280(uVar1 & 0xffffffffffffffe0,0);
        lVar4 = lVar2;
        for (lVar5 = *(longlong *)(param_1 + 8); lVar5 != param_2; lVar5 = lVar5 + 0x20) {
            if (lVar4 != 0) {
                FUN_14048b2a0(lVar4,lVar5);
            }
            lVar4 = lVar4 + 0x20;
        }
        if (lVar4 != 0) {
            FUN_14048b2a0(lVar4,param_3);
        }
        lVar3 = *(longlong *)(param_1 + 0x10);
        lVar5 = lVar4 + 0x20;
        if (param_2 != lVar3) {
            lVar4 = param_2 + -0x20 + (lVar5 - lVar4);
            do {
                if (lVar5 != 0) {
                    FUN_14048b2a0(lVar5,lVar4);
                }
                lVar4 = lVar4 + 0x20;
                lVar5 = lVar5 + 0x20;
            } while (lVar4 != lVar3);
        }
        lVar4 = *(longlong *)(param_1 + 0x10);
        for (lVar3 = *(longlong *)(param_1 + 8); lVar3 != lVar4; lVar3 = lVar3 + 0x20) {
            FUN_140008410(lVar3);
            FUN_14018b900(*(undefined8 *)(lVar3 + 8),0);
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar2;
        *(ulonglong *)(param_1 + 0x18) = (uVar1 & 0xffffffffffffffe0) + lVar2;
        *(longlong *)(param_1 + 0x10) = lVar5;
    }
    else {
        if (lVar5 != 0) {
            FUN_14048b2a0(lVar5,lVar5 + -0x20);
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x20;
        FUN_14048b2a0(local_38,param_3);
        lVar5 = *(longlong *)(param_1 + 0x10) + -0x40;
        lVar4 = *(longlong *)(param_1 + 0x10) + -0x20;
        for (lVar2 = lVar5 - param_2 >> 5; 0 < lVar2; lVar2 = lVar2 + -1) {
            lVar5 = lVar5 + -0x20;
            lVar4 = lVar4 + -0x20;
            FUN_1404956e0(lVar4,lVar5);
        }
        FUN_1404956e0(param_2,local_38);
        FUN_140008410(local_38);
        FUN_14018b900(local_30,0);
    }
    return;
}



longlong * FUN_140494310(longlong param_1,longlong *param_2,char **param_3,int *param_4)

{
    int iVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(int *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_14049436a:
            plVar4 = (longlong *)FUN_1404958b0(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            iVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(int *)(pcVar3 + 0x20) < iVar1) {
                if ((pcVar3 == pcVar2) || (iVar1 < *(int *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x38);
                    if ((int *)(lVar5 + 0x20) != (int *)0x0) {
                        *(int *)(lVar5 + 0x20) = *param_4;
                        FUN_1403fe910(lVar5 + 0x28,param_4 + 2);
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_1403ffbc0(iVar1,param_4);
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            else {
                plVar4 = (longlong *)FUN_1404958b0(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
                        lVar6 = lVar5;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar5 = lVar6;
                }
            }
        }
        if ((*param_4 <= *(int *)(lVar5 + 0x20)) || (*(int *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_14049436a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1404957c0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1404957c0();
    return param_2;
}



longlong * FUN_140494520(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_14049457a:
            plVar4 = (longlong *)FUN_1403fe760(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            uVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(uint *)(pcVar3 + 0x20) < uVar1) {
                if ((pcVar3 == pcVar2) || (uVar1 < *(uint *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x38);
                    if ((uint *)(lVar5 + 0x20) != (uint *)0x0) {
                        *(uint *)(lVar5 + 0x20) = *param_4;
                        FUN_1403fe910(lVar5 + 0x28,param_4 + 2);
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_1403ffbc0(uVar1,param_4);
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            else {
                plVar4 = (longlong *)FUN_1403fe760(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
                        lVar6 = lVar5;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar5 = lVar6;
                }
            }
        }
        if ((*param_4 <= *(uint *)(lVar5 + 0x20)) || (*(uint *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_14049457a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1403ff5e0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1403ff5e0();
    return param_2;
}



longlong * FUN_140494730(longlong param_1,longlong *param_2,char **param_3,int *param_4)

{
    int iVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(int *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_14049478a:
            plVar4 = (longlong *)FUN_140495aa0(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            iVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(int *)(pcVar3 + 0x20) < iVar1) {
                if ((pcVar3 == pcVar2) || (iVar1 < *(int *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x48);
                    if ((int *)(lVar5 + 0x20) != (int *)0x0) {
                        *(int *)(lVar5 + 0x20) = *param_4;
                        FUN_140029c50(lVar5 + 0x28,param_4 + 2);
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_140495ba0(iVar1,param_4);
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            else {
                plVar4 = (longlong *)FUN_140495aa0(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
                        lVar6 = lVar5;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar5 = lVar6;
                }
            }
        }
        if ((*param_4 <= *(int *)(lVar5 + 0x20)) || (*(int *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_14049478a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_1404959b0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_1404959b0();
    return param_2;
}



void FUN_140494940(undefined8 param_1,longlong **param_2,ulonglong param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    if (param_3 == 2) {
        plVar3 = *param_2;
        if (*(uint *)(*param_2[1] + 8) < *(uint *)(*plVar3 + 8)) {
            *param_2 = param_2[1];
            param_2[1] = plVar3;
            return;
        }
    }
    else if (1 < param_3) {
        uVar8 = param_3 >> 1;
        if (uVar8 != 0) {
            uVar9 = (param_3 & 0xfffffffffffffffe) + 1;
            do {
                plVar3 = param_2[uVar8 - 1];
                uVar8 = uVar8 - 1;
                uVar9 = uVar9 - 2;
                uVar7 = uVar8;
                uVar2 = uVar9;
                while (uVar2 < param_3) {
                    plVar5 = param_2[uVar2];
                    uVar1 = uVar2 + 1;
                    uVar6 = uVar2;
                    if (uVar1 < param_3) {
                        plVar4 = param_2[uVar1];
                        if ((*(uint *)(*plVar5 + 8) <= *(uint *)(*plVar4 + 8)) &&
                            ((*(uint *)(*plVar5 + 8) < *(uint *)(*plVar4 + 8) || (plVar5 < plVar4)))) {
                            plVar5 = plVar4;
                            uVar6 = uVar1;
                        }
                    }
                    if ((*(uint *)(*plVar5 + 8) < *(uint *)(*plVar3 + 8)) ||
                        ((*(uint *)(*plVar5 + 8) <= *(uint *)(*plVar3 + 8) && (plVar5 <= plVar3)))) break;
                    param_2[uVar7] = plVar5;
                    uVar7 = uVar6;
                    uVar2 = uVar6 * 2 + 1;
                }
                param_2[uVar7] = plVar3;
            } while (uVar8 != 0);
        }
        for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 1) {
            plVar3 = param_2[param_3];
            uVar8 = 1;
            uVar9 = 0;
            param_2[param_3] = *param_2;
            if (1 < param_3) {
                do {
                    plVar5 = param_2[uVar8];
                    uVar2 = uVar8 + 1;
                    uVar7 = uVar8;
                    if (uVar2 < param_3) {
                        plVar4 = param_2[uVar2];
                        if ((*(uint *)(*plVar5 + 8) <= *(uint *)(*plVar4 + 8)) &&
                            ((*(uint *)(*plVar5 + 8) < *(uint *)(*plVar4 + 8) || (plVar5 < plVar4)))) {
                            plVar5 = plVar4;
                            uVar7 = uVar2;
                        }
                    }
                    if ((*(uint *)(*plVar5 + 8) < *(uint *)(*plVar3 + 8)) ||
                        ((*(uint *)(*plVar5 + 8) <= *(uint *)(*plVar3 + 8) && (plVar5 <= plVar3)))) break;
                    param_2[uVar9] = plVar5;
                    uVar8 = uVar7 * 2 + 1;
                    uVar9 = uVar7;
                } while (uVar8 < param_3);
            }
            param_2[uVar9] = plVar3;
        }
    }
    return;
}



longlong FUN_140494af0(longlong param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14018b280(0x30);
    *(undefined **)(param_1 + 8) = puVar1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined **)(param_1 + 0x28) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(longlong *)(param_1 + 0x28);
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(longlong *)(param_1 + 0x28);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined **)(param_1 + 0x48) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined **)(param_1 + 0x68) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x10) = *(longlong *)(param_1 + 0x68);
    *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x18) = *(longlong *)(param_1 + 0x68);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined **)(param_1 + 0x88) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) = *(longlong *)(param_1 + 0x88);
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x18) = *(longlong *)(param_1 + 0x88);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined **)(param_1 + 0xa8) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10) = *(longlong *)(param_1 + 0xa8);
    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x18) = *(longlong *)(param_1 + 0xa8);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined **)(param_1 + 200) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 200) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 200) + 0x10) = *(longlong *)(param_1 + 200);
    *(longlong *)(*(longlong *)(param_1 + 200) + 0x18) = *(longlong *)(param_1 + 200);
    return param_1;
}



void FUN_140494c80(longlong param_1)

{
    FUN_140008410(param_1 + 0xc0);
    FUN_14018b900(*(undefined8 *)(param_1 + 200),0);
    FUN_140008410(param_1 + 0xa0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xa8),0);
    FUN_140008410(param_1 + 0x80);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x88),0);
    FUN_140008410(param_1 + 0x60);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x68),0);
    FUN_140008410(param_1 + 0x40);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    FUN_140008410(param_1 + 0x20);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x28),0);
    FUN_140008410(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



longlong FUN_140494d40(longlong param_1,longlong param_2)

{
    FUN_14048b2a0();
    FUN_14048b2a0(param_1 + 0x20,param_2 + 0x20);
    FUN_14048b2a0(param_1 + 0x40,param_2 + 0x40);
    FUN_14048b2a0(param_1 + 0x60,param_2 + 0x60);
    FUN_14048b2a0(param_1 + 0x80,param_2 + 0x80);
    FUN_14048b2a0(param_1 + 0xa0,param_2 + 0xa0);
    FUN_14048b2a0(param_1 + 0xc0,param_2 + 0xc0);
    return param_1;
}



void FUN_140494dd0(longlong *param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_1[1] != 0) {
        do {
            (***(code ***)(undefined8 *)(*param_1 + uVar3))((undefined8 *)(*param_1 + uVar3),0);
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x18;
        } while (uVar2 < (ulonglong)param_1[1]);
    }
    lVar1 = *param_1;
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140494e2d. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



void FUN_140494e40(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined4 uStack20;

    if ((*(byte *)(*(longlong *)(param_2 + 0x18) + 8) & 1) == 0) {
        plVar5 = (longlong *)FUN_140055be0(param_1 + 0x10);
        *plVar5 = param_2;
        return;
    }
    lVar4 = *(longlong *)(param_1 + 0x48);
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x18) + 0x14);
    lVar3 = lVar4;
    lVar2 = *(longlong *)(lVar4 + 8);
    while (lVar2 != 0) {
        lVar3 = lVar2;
        if (iVar1 < *(int *)(lVar2 + 0x20)) {
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
        else {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
    }
    if ((lVar3 == lVar4) || (iVar1 < *(int *)(lVar3 + 0x20))) {
        lVar4 = FUN_14018b280(0x30);
        if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar4 + 0x20) = CONCAT44(uStack20,iVar1);
            *(longlong *)(lVar4 + 0x28) = param_2;
        }
        *(longlong *)(lVar3 + 0x10) = lVar4;
        lVar2 = *(longlong *)(param_1 + 0x48);
        if (lVar3 == lVar2) {
            *(longlong *)(lVar2 + 8) = lVar4;
            *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar4;
        }
        else if (lVar3 == *(longlong *)(lVar2 + 0x10)) {
            *(longlong *)(lVar2 + 0x10) = lVar4;
        }
    }
    else {
        lVar4 = FUN_14018b280(0x30,0);
        if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar4 + 0x20) = CONCAT44(uStack20,iVar1);
            *(longlong *)(lVar4 + 0x28) = param_2;
        }
        *(longlong *)(lVar3 + 0x18) = lVar4;
        if (lVar3 == *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar4;
        }
    }
    *(longlong *)(lVar4 + 8) = lVar3;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    FUN_1400081c0(lVar4,*(longlong *)(param_1 + 0x48) + 8);
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
    return;
}



void FUN_140494f70(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;

    lVar6 = *(longlong *)(DAT_140c65968 + 0x110);
    lVar1 = *(longlong *)(lVar6 + 8);
    lVar2 = lVar1;
    lVar5 = lVar6;
    if (lVar1 != 0) {
        do {
            if (*(int *)(lVar2 + 0x20) == 0x13) {
                bVar7 = **(uint **)(param_1 + 8) < *(uint *)(lVar2 + 0x24);
            }
            else {
                bVar7 = 0x13 < *(int *)(lVar2 + 0x20);
            }
            if (bVar7) {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                lVar5 = lVar2;
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        while (lVar1 != 0) {
            if (*(int *)(lVar1 + 0x20) == 0x13) {
                bVar7 = *(uint *)(lVar1 + 0x24) < **(uint **)(param_1 + 8);
            }
            else {
                bVar7 = *(int *)(lVar1 + 0x20) < 0x13;
            }
            if (bVar7) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar6 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
    }
    while (lVar6 != lVar5) {
        FUN_140033260(param_1 + 0x70);
        lVar1 = *(longlong *)(lVar6 + 0x18);
        if (lVar1 == 0) {
            lVar1 = *(longlong *)(lVar6 + 8);
            if (lVar6 == *(longlong *)(lVar1 + 0x18)) {
                do {
                    lVar6 = lVar1;
                    lVar1 = *(longlong *)(lVar6 + 8);
                } while (lVar6 == *(longlong *)(lVar1 + 0x18));
            }
            if (*(longlong *)(lVar6 + 0x18) != lVar1) {
                lVar6 = lVar1;
            }
        }
        else {
            for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar6 = lVar1, lVar2 != 0;
                 lVar2 = *(longlong *)(lVar2 + 0x10)) {
                lVar1 = lVar2;
            }
        }
    }
    lVar6 = *(longlong *)(DAT_140c65968 + 0x110);
    lVar1 = *(longlong *)(lVar6 + 8);
    lVar2 = lVar1;
    lVar5 = lVar6;
    if (lVar1 != 0) {
        do {
            if (*(int *)(lVar2 + 0x20) == 0x1b) {
                bVar7 = **(uint **)(param_1 + 8) < *(uint *)(lVar2 + 0x24);
            }
            else {
                bVar7 = 0x1b < *(int *)(lVar2 + 0x20);
            }
            if (bVar7) {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                lVar5 = lVar2;
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        while (lVar1 != 0) {
            if (*(int *)(lVar1 + 0x20) == 0x1b) {
                bVar7 = *(uint *)(lVar1 + 0x24) < **(uint **)(param_1 + 8);
            }
            else {
                bVar7 = *(int *)(lVar1 + 0x20) < 0x1b;
            }
            if (bVar7) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar6 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
    }
    while (lVar6 != lVar5) {
        FUN_140033260(param_1 + 0x70);
        lVar1 = *(longlong *)(lVar6 + 0x18);
        if (lVar1 == 0) {
            lVar1 = *(longlong *)(lVar6 + 8);
            if (lVar6 == *(longlong *)(lVar1 + 0x18)) {
                do {
                    lVar6 = lVar1;
                    lVar1 = *(longlong *)(lVar6 + 8);
                } while (lVar6 == *(longlong *)(lVar1 + 0x18));
            }
            if (*(longlong *)(lVar6 + 0x18) != lVar1) {
                lVar6 = lVar1;
            }
        }
        else {
            for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar6 = lVar1, lVar2 != 0;
                 lVar2 = *(longlong *)(lVar2 + 0x10)) {
                lVar1 = lVar2;
            }
        }
    }
    lVar6 = *(longlong *)(DAT_140c65968 + 0x110);
    lVar1 = *(longlong *)(lVar6 + 8);
    lVar2 = lVar1;
    lVar5 = lVar6;
    if (lVar1 != 0) {
        do {
            if (*(int *)(lVar2 + 0x20) == 0x15) {
                bVar7 = **(uint **)(param_1 + 8) < *(uint *)(lVar2 + 0x24);
            }
            else {
                bVar7 = 0x15 < *(int *)(lVar2 + 0x20);
            }
            if (bVar7) {
                lVar3 = *(longlong *)(lVar2 + 0x10);
                lVar5 = lVar2;
            }
            else {
                lVar3 = *(longlong *)(lVar2 + 0x18);
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
        while (lVar1 != 0) {
            if (*(int *)(lVar1 + 0x20) == 0x15) {
                bVar7 = *(uint *)(lVar1 + 0x24) < **(uint **)(param_1 + 8);
            }
            else {
                bVar7 = *(int *)(lVar1 + 0x20) < 0x15;
            }
            if (bVar7) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar6 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
    }
    while (lVar6 != lVar5) {
        FUN_140033260(param_1 + 0x70);
        lVar1 = *(longlong *)(lVar6 + 0x18);
        if (lVar1 == 0) {
            lVar1 = *(longlong *)(lVar6 + 8);
            if (lVar6 == *(longlong *)(lVar1 + 0x18)) {
                do {
                    lVar6 = lVar1;
                    lVar1 = *(longlong *)(lVar6 + 8);
                } while (lVar6 == *(longlong *)(lVar1 + 0x18));
            }
            if (*(longlong *)(lVar6 + 0x18) != lVar1) {
                lVar6 = lVar1;
            }
        }
        else {
            for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar6 = lVar1, lVar2 != 0;
                 lVar2 = *(longlong *)(lVar2 + 0x10)) {
                lVar1 = lVar2;
            }
        }
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x18)) {
        do {
            FUN_140495be0(*(undefined8 *)(lVar6 + 0x28));
            lVar1 = *(longlong *)(lVar6 + 0x18);
            if (lVar1 == 0) {
                lVar1 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar1 + 0x18)) {
                    do {
                        lVar6 = lVar1;
                        lVar1 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar1 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar1) {
                    lVar6 = lVar1;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar6 = lVar1, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar1 = lVar2;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 0x18));
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x48)) {
        do {
            FUN_140495be0(*(undefined8 *)(lVar6 + 0x28));
            lVar1 = *(longlong *)(lVar6 + 0x18);
            if (lVar1 == 0) {
                lVar1 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar1 + 0x18)) {
                    do {
                        lVar6 = lVar1;
                        lVar1 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar1 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar1) {
                    lVar6 = lVar1;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar6 = lVar1, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar1 = lVar2;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 0x48));
    }
    uVar4 = 0;
    lVar6 = 0;
    do {
        if (((2 < lVar6) || (*(int *)(*(longlong *)(param_1 + 8) + 4 + lVar6 * 4) == 0)) &&
            (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8), lVar2 = lVar1, lVar1 != 0)) {
            do {
                if ((int)uVar4 < *(int *)(lVar2 + 0x20)) {
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
                else {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
            } while (lVar2 != 0);
            while (lVar1 != 0) {
                if (*(int *)(lVar1 + 0x20) < (int)uVar4) {
                    lVar1 = *(longlong *)(lVar1 + 0x18);
                }
                else {
                    lVar1 = *(longlong *)(lVar1 + 0x10);
                }
            }
        }
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 1;
    } while (uVar4 < 3);
    return;
}



longlong * FUN_1404953c0(longlong param_1,longlong *param_2,char **param_3,uint *param_4)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;
    undefined local_18 [16];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar3 = *param_3;
    if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
        if ((*(longlong *)(param_1 + 0x10) == 0) || (*(uint *)(pcVar3 + 0x20) <= *param_4)) {
            LAB_14049541a:
            plVar4 = (longlong *)FUN_140495ee0(param_1,local_18,param_4);
            *param_2 = *plVar4;
            return param_2;
        }
    }
    else {
        if (pcVar3 == pcVar2) {
            uVar1 = *param_4;
            pcVar3 = *(char **)(pcVar2 + 0x18);
            if (*(uint *)(pcVar3 + 0x20) < uVar1) {
                if ((pcVar3 == pcVar2) || (uVar1 < *(uint *)(pcVar3 + 0x20))) {
                    lVar5 = FUN_14018b280(0x108,0);
                    if ((uint *)(lVar5 + 0x20) != (uint *)0x0) {
                        *(uint *)(lVar5 + 0x20) = *param_4;
                        FUN_140494d40(lVar5 + 0x28,param_4 + 2);
                    }
                    *(longlong *)(pcVar3 + 0x10) = lVar5;
                    pcVar2 = *(char **)(param_1 + 8);
                    if (pcVar3 == pcVar2) {
                        *(longlong *)(pcVar2 + 8) = lVar5;
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                    else if (pcVar3 == *(char **)(pcVar2 + 0x10)) {
                        *(longlong *)(pcVar2 + 0x10) = lVar5;
                    }
                }
                else {
                    lVar5 = FUN_140495fe0(uVar1,param_4);
                    *(longlong *)(pcVar3 + 0x18) = lVar5;
                    if (pcVar3 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar5;
                    }
                }
                *(char **)(lVar5 + 8) = pcVar3;
                *(undefined8 *)(lVar5 + 0x10) = 0;
                *(undefined8 *)(lVar5 + 0x18) = 0;
                FUN_1400081c0(lVar5,*(longlong *)(param_1 + 8) + 8);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
                *param_2 = lVar5;
            }
            else {
                plVar4 = (longlong *)FUN_140495ee0(param_1,local_18,param_4);
                *param_2 = *plVar4;
            }
            return param_2;
        }
        if ((*pcVar3 == '\0') && (*(char **)(*(longlong *)(pcVar3 + 8) + 8) == pcVar3)) {
            lVar5 = *(longlong *)(pcVar3 + 0x18);
        }
        else {
            lVar5 = *(longlong *)(pcVar3 + 0x10);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(pcVar3 + 8);
                lVar6 = lVar5;
                if (pcVar3 == *(char **)(lVar5 + 0x10)) {
                    do {
                        lVar5 = *(longlong *)(lVar6 + 8);
                        bVar7 = lVar6 == *(longlong *)(lVar5 + 0x10);
                        lVar6 = lVar5;
                    } while (bVar7);
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar5 + 0x18); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
                    lVar5 = lVar6;
                }
            }
        }
        if ((*param_4 <= *(uint *)(lVar5 + 0x20)) || (*(uint *)(pcVar3 + 0x20) <= *param_4))
            goto LAB_14049541a;
        if (*(longlong *)(lVar5 + 0x18) == 0) {
            FUN_140495df0(param_1,param_2,0,lVar5,param_4);
            return param_2;
        }
    }
    FUN_140495df0();
    return param_2;
}



void FUN_1404955d0(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar2 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar2) {
        local_40 = 0;
        local_48 = &PTR_LAB_140b5e648;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar1 = FUN_1401971e0(&DAT_140c8ad04,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140495695. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        lVar2 = FUN_140007db0(*param_2,lVar2 + 8,lVar2 + 0x10,lVar2 + 0x18);
        FUN_140494c80(lVar2 + 0x28);
        FUN_14018b900(lVar2,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



longlong FUN_1404956e0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    if (param_1 != param_2) {
        FUN_140008410();
        *(undefined8 *)(param_1 + 0x10) = 0;
        if (*(longlong *)(*(longlong *)(param_2 + 8) + 8) == 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
            return param_1;
        }
        lVar1 = *(longlong *)(param_1 + 8);
        uVar3 = FUN_14048b370(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
        *(undefined8 *)(lVar1 + 8) = uVar3;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        for (lVar2 = *(longlong *)(lVar1 + 0x10); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
            lVar1 = lVar2;
        }
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        for (lVar2 = *(longlong *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x18)) {
            lVar1 = lVar2;
        }
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar1;
        *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    }
    return param_1;
}



longlong *
FUN_1404957c0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x38);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            FUN_1403fe910(lVar2 + 0x28,param_5 + 2);
        }
        *(longlong *)(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *)(lVar1 + 8) = lVar2;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
        else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
            *(longlong *)(lVar1 + 0x10) = lVar2;
        }
    }
    else {
        lVar2 = FUN_1403ffbc0(param_1,param_5);
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_1404958b0(longlong param_1,char **param_2,int *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 < *(int *)(pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_14049590e;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (*param_3 <= *(int *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_14049590e:
    ppcVar1 = (char **)FUN_1404957c0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong *
FUN_1404959b0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,int *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(int *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x48);
        if ((int *)(lVar2 + 0x20) != (int *)0x0) {
            *(int *)(lVar2 + 0x20) = *param_5;
            FUN_140029c50(lVar2 + 0x28,param_5 + 2);
        }
        *(longlong *)(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *)(lVar1 + 8) = lVar2;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
        else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
            *(longlong *)(lVar1 + 0x10) = lVar2;
        }
    }
    else {
        lVar2 = FUN_140495ba0(param_1,param_5);
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_140495aa0(longlong param_1,char **param_2,int *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 < *(int *)(pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_140495afe;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (*param_3 <= *(int *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140495afe:
    ppcVar1 = (char **)FUN_1404959b0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_140495ba0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_140029c50(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140495be0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    int *piVar4;
    int *piVar5;
    longlong *plVar6;
    uint uVar7;
    uint uVar8;
    longlong local_res8;
    undefined **local_48;
    int *local_40;
    longlong local_38;

    uVar7 = 0;
    do {
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63e60 != 0) || (iVar3 = FUN_140222460(), iVar3 < 0)) break;
            piVar4 = (int *)(**(code **)(*DAT_140c64028 + 0x18))();
        }
        else {
            piVar4 = (int *)(*DAT_140c63840)(&PTR_u_PathSettlerImprovement_140a6c040);
        }
        if (piVar4 == (int *)0x0) break;
        local_48 = &PTR_FUN_140b67218;
        local_40 = piVar4;
        local_38 = param_1;
        FUN_140496030(param_1 + 8,&local_48);
        uVar8 = 0;
        piVar5 = piVar4;
        do {
            piVar5 = piVar5 + 1;
            if ((*(int *)((*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) - (longlong)piVar4) + 0x24 +
                          (longlong)piVar5) != 0) && (*piVar5 != 0)) break;
            uVar8 = uVar8 + 1;
        } while (uVar8 < 3);
        if (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x40)) {
            FUN_140496140(param_1 + 0x28);
        }
        else {
            *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 0x18;
        }
        uVar7 = uVar7 + 1;
        lVar1 = *(longlong *)(param_1 + 0x30) +
                ((*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) / 0x18) * 0x18;
        *(int *)(&DAT_ffffffffffffffe8 + lVar1) = piVar4[1];
        *(int *)(lVar1 + -0xc) = piVar4[4];
        *(int *)(lVar1 + -0x14) = piVar4[2];
        *(int *)(lVar1 + -8) = piVar4[5];
        *(int *)(lVar1 + -0x10) = piVar4[3];
        *(int *)(lVar1 + -4) = piVar4[6];
    } while (uVar7 < 4);
    uVar7 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x28);
    if (uVar7 != 0) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18);
        local_res8 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < uVar7) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar1) || (uVar7 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        if ((local_res8 != lVar1) && (*(longlong *)(local_res8 + 0x28) != 0)) {
            plVar6 = (longlong *)
                    FUN_140055be0(*(longlong *)(local_res8 + 0x28) + 0x48,
                                  *(longlong *)(param_1 + 0x18) + 0x28);
            *plVar6 = param_1;
        }
    }
    return;
}



longlong *
FUN_140495df0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x108,0);
        if ((uint *)(lVar2 + 0x20) != (uint *)0x0) {
            *(uint *)(lVar2 + 0x20) = *param_5;
            FUN_140494d40(lVar2 + 0x28,param_5 + 2);
        }
        *(longlong *)(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *)(lVar1 + 8) = lVar2;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
        else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
            *(longlong *)(lVar1 + 0x10) = lVar2;
        }
    }
    else {
        lVar2 = FUN_140495fe0(param_1,param_5);
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



char ** FUN_140495ee0(longlong param_1,char **param_2,uint *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 < *(uint *)(pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_140495f3e;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (*param_3 <= *(uint *)(pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140495f3e:
    ppcVar1 = (char **)FUN_140495df0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_140495fe0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x108,0);
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        FUN_140494d40(lVar1 + 0x28,param_2 + 2);
    }
    return lVar1;
}



longlong FUN_140496030(longlong *param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    lVar1 = param_1[1];
    puVar4 = (undefined8 *)FUN_14018db00(*param_1,lVar1 + 1,0x18);
    puVar6 = puVar4 + lVar1 * 3;
    if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_140b68f20;
        puVar6[1] = *(undefined8 *)(param_2 + 8);
        uVar2 = *(undefined8 *)(param_2 + 0x10);
        *puVar6 = &PTR_FUN_140b67218;
        puVar6[2] = uVar2;
    }
    if ((undefined8 *)*param_1 != puVar4) {
        uVar7 = 0;
        if (param_1[1] != 0) {
            puVar6 = puVar4;
            do {
                if (puVar6 != (undefined8 *)0x0) {
                    lVar3 = *param_1 + -(longlong)puVar4;
                    *puVar6 = &PTR_FUN_140b68f20;
                    puVar6[1] = *(undefined8 *)((longlong)puVar6 + lVar3 + 8);
                    uVar2 = *(undefined8 *)((longlong)puVar6 + lVar3 + 0x10);
                    *puVar6 = &PTR_FUN_140b67218;
                    puVar6[2] = uVar2;
                }
                puVar5 = (undefined8 *)((longlong)puVar6 + *param_1 + -(longlong)puVar4);
                (**(code **)*puVar5)(puVar5,0);
                uVar7 = uVar7 + 1;
                puVar6 = puVar6 + 3;
            } while (uVar7 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = (longlong)puVar4;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



void FUN_140496140(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined *puVar2;
    ulonglong uVar3;
    undefined4 *puVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;

    puVar7 = *(undefined4 **)(param_1 + 0x10);
    if (puVar7 != *(undefined4 **)(param_1 + 0x18)) {
        if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = puVar7[-6];
            puVar7[1] = puVar7[-5];
            puVar7[2] = puVar7[-4];
            puVar7[3] = puVar7[-3];
            puVar7[4] = puVar7[-2];
            puVar7[5] = puVar7[-1];
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x18;
        puVar2 = &DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10);
        puVar7 = (undefined4 *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10));
        for (lVar5 = ((longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10)) -
                      (longlong)param_2) / 0x18; 0 < lVar5; lVar5 = lVar5 + -1) {
            puVar7[-6] = *(undefined4 *)(&DAT_ffffffffffffffe8 + (longlong)puVar2);
            puVar7[-5] = *(undefined4 *)(puVar2 + -0x14);
            puVar7[-4] = *(undefined4 *)(puVar2 + -0x10);
            puVar7[-3] = *(undefined4 *)(puVar2 + -0xc);
            puVar7[-2] = *(undefined4 *)(puVar2 + -8);
            puVar7[-1] = *(undefined4 *)(puVar2 + -4);
            puVar2 = &DAT_ffffffffffffffe8 + (longlong)puVar2;
            puVar7 = puVar7 + -6;
        }
        *param_2 = local_28;
        param_2[1] = local_24;
        param_2[2] = local_20;
        param_2[3] = local_1c;
        param_2[4] = local_18;
        param_2[5] = local_14;
        return;
    }
    lVar5 = ((longlong)puVar7 - *(longlong *)(param_1 + 8)) / 0x18;
    if (lVar5 == 0) {
        lVar5 = 1;
    }
    else {
        lVar5 = lVar5 * 2;
    }
    uVar3 = FUN_14018a3e0(lVar5 * 0x18);
    puVar4 = (undefined4 *)FUN_14018b280((uVar3 / 0x18) * 0x18,0);
    puVar6 = puVar4;
    for (puVar7 = *(undefined4 **)(param_1 + 8); puVar7 != param_2; puVar7 = puVar7 + 6) {
        if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar7;
            puVar6[1] = puVar7[1];
            puVar6[2] = puVar7[2];
            puVar6[3] = puVar7[3];
            puVar6[4] = puVar7[4];
            puVar6[5] = puVar7[5];
        }
        puVar6 = puVar6 + 6;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar7 = puVar6 + 6;
    if (param_2 != puVar1) {
        param_2 = (undefined4 *)
                ((longlong)param_2 +
                 (longlong)puVar7 + ((longlong)&DAT_ffffffffffffffe8 - (longlong)puVar6));
        do {
            if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = *param_2;
                puVar7[1] = param_2[1];
                puVar7[2] = param_2[2];
                puVar7[3] = param_2[3];
                puVar7[4] = param_2[4];
                puVar7[5] = param_2[5];
            }
            param_2 = param_2 + 6;
            puVar7 = puVar7 + 6;
        } while (param_2 != puVar1);
    }
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
    }
    *(undefined4 **)(param_1 + 8) = puVar4;
    *(undefined4 **)(param_1 + 0x10) = puVar7;
    *(undefined4 **)(param_1 + 0x18) = puVar4 + (uVar3 / 0x18) * 6;
    return;
}



undefined4 FUN_140496390(longlong *param_1)

{
    longlong lVar1;
    undefined4 uVar2;

    lVar1 = *param_1;
    if (lVar1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(undefined4 *)(lVar1 + 0x14);
    }
    if (*(int *)(lVar1 + 0xc) == 0x1b) {
        lVar1 = FUN_14021d1c0(uVar2);
        if (lVar1 != 0) {
            return *(undefined4 *)(lVar1 + 4);
        }
    }
    else if (*(int *)(lVar1 + 0xc) == 0x15) {
        lVar1 = FUN_140221e40(uVar2);
        if (lVar1 != 0) {
            return *(undefined4 *)(lVar1 + 4);
        }
    }
    return uVar2;
}



void FUN_1404963f0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x10)) {
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            if (lVar2 != 0) {
                if (*(longlong *)(lVar2 + 0x10) != 0) {
                    FUN_14018b900(*(longlong *)(lVar2 + 0x10),0);
                }
                FUN_14018b900(lVar2,0);
            }
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                    lVar3 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar3 != *(longlong *)(param_1 + 0x10));
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x30),0);
    }
    FUN_140008410(param_1 + 8);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x10),0);
    return;
}



undefined8 * FUN_1404964c0(void)

{
    undefined8 *puVar1;
    undefined *puVar2;

    puVar1 = (undefined8 *)FUN_14018b280();
    if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = &PTR_FUN_140b675b8;
        puVar2 = (undefined *)FUN_14018b280();
        puVar1[3] = puVar2;
        puVar1[4] = 0;
        *puVar2 = 0;
        *(undefined8 *)(puVar1[3] + 8) = 0;
        *(undefined8 *)(puVar1[3] + 0x10) = puVar1[3];
        *(undefined8 *)(puVar1[3] + 0x18) = puVar1[3];
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        *puVar1 = &PTR_FUN_140b675b8;
        return puVar1;
    }
    return (undefined8 *)0x0;
}



void FUN_140496550(void)

{
    undefined8 *puVar1;

    puVar1 = (undefined8 *)FUN_14018b280(0x28);
    if (puVar1 != (undefined8 *)0x0) {
        puVar1[4] = 0;
        puVar1[3] = 0;
        *puVar1 = &PTR_FUN_140b675f0;
        return;
    }
    return;
}



undefined8 * FUN_140496590(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b675b8;
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb],0);
    }
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7],0);
    }
    FUN_140008410(param_1 + 2);
    FUN_14018b900(param_1[3],0);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_140496610(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b675f0;
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_140496660(void)

{
    int iVar1;
    longlong *plVar2;
    undefined *puVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;

    if (DAT_140c65988 != (longlong *)0x0) {
        return 0;
    }
    plVar2 = (longlong *)FUN_14018b280(0xf0,0);
    if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
    }
    else {
        FUN_140496870(plVar2);
        *plVar2 = (longlong)&PTR_FUN_140b673b8;
        puVar3 = (undefined *)FUN_14018b280(0x28);
        plVar2[0x1b] = (longlong)puVar3;
        plVar2[0x1c] = 0;
        *puVar3 = 0;
        *(undefined8 *)(plVar2[0x1b] + 8) = 0;
        *(longlong *)(plVar2[0x1b] + 0x10) = plVar2[0x1b];
        *(longlong *)(plVar2[0x1b] + 0x18) = plVar2[0x1b];
    }
    puVar6 = (undefined8 *)0x0;
    DAT_140c65988 = plVar2;
    iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    if (-1 < iVar1) {
        puVar4 = (undefined8 *)FUN_14018b280(0x48);
        if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_LAB_140b674f0;
            puVar3 = (undefined *)FUN_14018b280(0x30);
            puVar4[3] = 0;
            puVar4[2] = puVar3;
            *puVar3 = 0;
            *(undefined8 *)(puVar4[2] + 8) = 0;
            *(undefined8 *)(puVar4[2] + 0x10) = puVar4[2];
            *(undefined8 *)(puVar4[2] + 0x18) = puVar4[2];
            *puVar4 = &PTR_LAB_140b67420;
            uVar5 = FUN_14018b280(0x18);
            puVar4[6] = uVar5;
            *(undefined8 *)uVar5 = uVar5;
            *(undefined8 *)(puVar4[6] + 8) = puVar4[6];
            puVar6 = puVar4;
        }
        DAT_140c65980 = puVar6;
        iVar1 = (**(code **)*puVar6)(puVar6,DAT_140c65988 + 1,0);
        if (-1 < iVar1) {
            return 0;
        }
        FUN_140496aa0();
        return 0x80004005;
    }
    if (DAT_140c65980 != (longlong *)0x0) {
        (**(code **)(*DAT_140c65980 + 0x10))(DAT_140c65980,1);
    }
    if (DAT_140c65988 != (longlong *)0x0) {
        (**(code **)*DAT_140c65988)(DAT_140c65988,1);
    }
    DAT_140c65980 = (longlong *)0x0;
    DAT_140c65988 = (longlong *)0x0;
    return 0x80004005;
}



longlong FUN_140496810(longlong param_1,ulonglong param_2)

{
    FUN_140008410(param_1 + 0xd0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xd8),0);
    FUN_140496fa0(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_140496870(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b673e8;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xf] = 0;
    param_1[0xe] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xe] + 8) = 0;
    *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
    *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x13] = 0;
    param_1[0x12] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x12] + 8) = 0;
    *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
    *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
    FUN_1400b6000(param_1 + 0x15,0);
    return param_1;
}



longlong FUN_1404969a0(longlong param_1,ulonglong param_2)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 0x30);
    if (plVar2 != *(longlong **)(param_1 + 0x30)) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x30));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x30);
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 8) = *(longlong *)(param_1 + 0x30);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x30),0);
    FUN_140498990(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_140496a20(undefined8 param_1,ulonglong param_2)

{
    FUN_140496fa0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_140496a60(undefined8 param_1,ulonglong param_2)

{
    FUN_140498990();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140496aa0(void)

{
    if (DAT_140c65980 != (longlong *)0x0) {
        (**(code **)(*DAT_140c65980 + 0x10))(DAT_140c65980,1);
    }
    if (DAT_140c65988 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65988)(DAT_140c65988,1);
    }
    DAT_140c65980 = (longlong *)0x0;
    DAT_140c65988 = (undefined8 *)0x0;
    return;
}



int FUN_140496af0(void)

{
    int iVar1;
    int iVar2;

    iVar1 = FUN_140497390();
    iVar2 = 0;
    if (iVar1 < 0) {
        iVar2 = iVar1;
    }
    return iVar2;
}



void FUN_140496b10(undefined8 param_1,uint *param_2)

{
    longlong lVar1;
    longlong *plVar2;
    bool bVar3;
    longlong lVar4;
    longlong lVar5;
    char *pcVar6;
    undefined *puVar7;
    bool bVar8;
    longlong local_res8;
    undefined local_28 [16];

    lVar4 = DAT_140c65988;
    lVar5 = *(longlong *)(DAT_140c65988 + 0x10);
    local_res8 = lVar5;
    lVar1 = *(longlong *)(lVar5 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < *param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar5) || (*param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar5;
    }
    if (local_res8 == lVar5) {
        return;
    }
    plVar2 = *(longlong **)(local_res8 + 0x28);
    if (plVar2 == (longlong *)0x0) {
        return;
    }
    lVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
    bVar8 = true;
    bVar3 = false;
    if (*(int *)(lVar5 + 0x24) != 0) {
        lVar5 = (**(code **)(*plVar2 + 0x18))(plVar2);
        lVar5 = FUN_14020fd40(*(undefined4 *)(lVar5 + 0x24));
        bVar8 = true;
        bVar3 = false;
        if (lVar5 != 0) {
            bVar8 = (*(uint *)(lVar5 + 0xc) & 8) == 0;
            bVar3 = false;
            if ((*(uint *)(lVar5 + 0xc) & 0x20) != 0) {
                bVar3 = true;
            }
        }
    }
    if (param_2[1] == 0) {
        FUN_1400ee810(lVar4 + 0xd0,param_2);
        if (!bVar8) goto LAB_140496c40;
        puVar7 = &DAT_1409ed1cc;
        pcVar6 = "PublicEventCleared";
    }
    else {
        FUN_1400293c0(lVar4 + 0xd0,local_28,param_2);
        if (!bVar8) goto LAB_140496c40;
        puVar7 = &DAT_1409ecf5c;
        pcVar6 = "PublicEventStart";
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),pcVar6,puVar7,plVar2);
    LAB_140496c40:
    if (((bVar3) || ((plVar2[8] - plVar2[7] & 0xfffffffffffffff8U) != 0)) ||
        ((plVar2[0xc] - plVar2[0xb] & 0xfffffffffffffff8U) != 0)) {
        FUN_1400a8020(*(longlong *)(DAT_140c65898 + 0x7340) + 0x1680);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong * FUN_140496ca0(ulonglong param_1,uint *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong *puVar5;
    longlong lVar6;
    ulonglong *puVar7;
    ulonglong uVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    undefined4 uVar12;
    ulonglong local_res8;

    lVar6 = DAT_140c65988;
    local_res8 = param_1;
    uVar4 = (**(code **)(DAT_140c65988 + 0xc0))(param_2);
    puVar5 = (ulonglong *)(uVar4 / *(ulonglong *)(lVar6 + 0xb0));
    puVar7 = *(ulonglong **)(*(longlong *)(lVar6 + 0xb8) + (uVar4 % *(ulonglong *)(lVar6 + 0xb0)) * 8)
            ;
    while( true ) {
        if (puVar7 == (ulonglong *)0x0) {
            return puVar5;
        }
        if ((uVar4 == *puVar7) &&
            (puVar5 = (ulonglong *)(**(code **)(lVar6 + 200))(param_2), (int)puVar5 != 0)) break;
        puVar7 = (ulonglong *)puVar7[1];
    }
    if ((undefined4 *)((longlong)puVar7 + 0x14) == (undefined4 *)0x0) {
        return puVar5;
    }
    lVar6 = (**(code **)(*DAT_140c65980 + 0x30))
            (DAT_140c65980,*(undefined4 *)((longlong)puVar7 + 0x14),0);
    if (lVar6 == 0) {
        return (ulonglong *)0x0;
    }
    uVar11 = param_2[3];
    uVar10 = param_2[2];
    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)*param_2;
    plVar1 = (longlong *)(lVar6 + 0xb8);
    uVar9 = param_2[1];
    uVar12 = 0;
    uVar4 = (**(code **)(lVar6 + 0xd0))(&local_res8);
    puVar7 = *(ulonglong **)(*(longlong *)(lVar6 + 200) + (uVar4 % *(ulonglong *)(lVar6 + 0xc0)) * 8);
    do {
        if (puVar7 == (ulonglong *)0x0) {
            LAB_140496da2:
            if (*plVar1 == *(longlong *)(lVar6 + 0xc0)) {
                FUN_1400290d0(plVar1);
            }
            uVar4 = (**(code **)(lVar6 + 0xd0))(&local_res8);
            lVar2 = *(longlong *)(lVar6 + 200);
            uVar8 = uVar4 % *(ulonglong *)(lVar6 + 0xc0);
            puVar7 = (ulonglong *)FUN_14018b280(0x30);
            if (puVar7 != (ulonglong *)0x0) {
                uVar3 = *(ulonglong *)(lVar2 + uVar8 * 8);
                *puVar7 = uVar4;
                puVar7[1] = uVar3;
                *(undefined4 *)(puVar7 + 2) = (undefined4)local_res8;
                *(undefined (*) [16])(puVar7 + 4) =
                        CONCAT412(uVar12,CONCAT48(uVar11,CONCAT44(uVar10,uVar9)));
            }
            *(ulonglong **)(lVar2 + uVar8 * 8) = puVar7;
            *plVar1 = *plVar1 + 1;
            return puVar7;
        }
        if ((uVar4 == *puVar7) &&
            (puVar5 = (ulonglong *)(**(code **)(lVar6 + 0xd8))(&local_res8), (int)puVar5 != 0)) {
            if ((undefined (*) [16])(puVar7 + 4) != (undefined (*) [16])0x0) {
                *(undefined (*) [16])(puVar7 + 4) =
                        CONCAT412(uVar12,CONCAT48(uVar11,CONCAT44(uVar10,uVar9)));
                return puVar5;
            }
            goto LAB_140496da2;
        }
        puVar7 = (ulonglong *)puVar7[1];
    } while( true );
}



ulonglong FUN_140496e20(undefined8 param_1,undefined4 *param_2)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;

    lVar4 = DAT_140c65988;
    uVar2 = (**(code **)(DAT_140c65988 + 0xc0))(param_2);
    uVar3 = uVar2 / *(ulonglong *)(lVar4 + 0xb0);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar4 + 0xb8) + (uVar2 % *(ulonglong *)(lVar4 + 0xb0)) * 8)
            ;
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return uVar3;
        }
        if ((uVar2 == *puVar1) &&
            (uVar3 = (**(code **)(lVar4 + 200))(param_2,puVar1 + 2), (int)uVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if ((undefined4 *)((longlong)puVar1 + 0x14) == (undefined4 *)0x0) {
        return uVar3;
    }
    lVar4 = (**(code **)(*DAT_140c65980 + 0x30))
            (DAT_140c65980,*(undefined4 *)((longlong)puVar1 + 0x14),0);
    if (lVar4 == 0) {
        return 0;
    }
    uVar3 = FUN_1405f2420(lVar4,*param_2);
    return uVar3;
}



void FUN_140496f10(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x18)) {
        do {
            (**(code **)(**(longlong **)(lVar3 + 0x28) + 0x10))();
            lVar2 = *(longlong *)(lVar3 + 0x18);
            if (lVar2 == 0) {
                lVar2 = *(longlong *)(lVar3 + 8);
                if (lVar3 == *(longlong *)(lVar2 + 0x18)) {
                    do {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar3 + 8);
                    } while (lVar3 == *(longlong *)(lVar2 + 0x18));
                }
                if (*(longlong *)(lVar3 + 0x18) != lVar2) {
                    lVar3 = lVar2;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar2 + 0x10); lVar3 = lVar2, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar2 = lVar1;
                }
            }
        } while (lVar3 != *(longlong *)(param_1 + 0x18));
    }
    return;
}



void FUN_140496fa0(undefined8 *param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;

    *param_1 = &PTR_FUN_140b673e8;
    lVar5 = *(longlong *)(param_1[2] + 0x10);
    if (lVar5 != param_1[2]) {
        do {
            puVar2 = *(undefined8 **)(lVar5 + 0x28);
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2,1);
            }
            lVar4 = *(longlong *)(lVar5 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                    do {
                        lVar5 = lVar4;
                        lVar4 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar4 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                    lVar5 = lVar4;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar4 = lVar3;
                }
            }
        } while (lVar5 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    lVar5 = *(longlong *)(param_1[6] + 0x10);
    if (lVar5 != param_1[6]) {
        do {
            puVar2 = *(undefined8 **)(lVar5 + 0x28);
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2,1);
            }
            lVar4 = *(longlong *)(lVar5 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                    do {
                        lVar5 = lVar4;
                        lVar4 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar4 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                    lVar5 = lVar4;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar4 = lVar3;
                }
            }
        } while (lVar5 != param_1[6]);
    }
    uVar6 = 0;
    if (param_1[7] != 0) {
        lVar5 = *(longlong *)(param_1[6] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    if (param_1[0x16] != 0) {
        do {
            plVar1 = (longlong *)(param_1[0x17] + uVar6 * 8);
            lVar5 = *(longlong *)(param_1[0x17] + uVar6 * 8);
            while (lVar5 != 0) {
                lVar5 = *plVar1;
                *plVar1 = *(longlong *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *plVar1;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < (ulonglong)param_1[0x16]);
    }
    param_1[0x15] = 0;
    FUN_14018b900(param_1[0x17],0);
    param_1[0x17] = 0;
    if (param_1[0x13] != 0) {
        lVar5 = *(longlong *)(param_1[0x12] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0x11,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
        *(undefined8 *)(param_1[0x12] + 8) = 0;
        *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
        param_1[0x13] = 0;
    }
    FUN_14018b900(param_1[0x12],0);
    if (param_1[0xf] != 0) {
        lVar5 = *(longlong *)(param_1[0xe] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    FUN_14018b900(param_1[0xe],0);
    if (param_1[0xb] != 0) {
        lVar5 = *(longlong *)(param_1[10] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 9,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    FUN_14018b900(param_1[10],0);
    if (param_1[7] != 0) {
        lVar5 = *(longlong *)(param_1[6] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar5 = *(longlong *)(param_1[2] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar5 + 0x18));
            lVar4 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar4;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140497390(longlong *param_1)

{
    undefined4 uVar1;
    uint *puVar2;
    char *pcVar3;
    uint *puVar4;
    longlong lVar5;
    char *pcVar6;
    uint uVar7;
    int iVar8;
    int iVar9;
    uint *puVar10;
    longlong lVar11;
    longlong *plVar12;
    longlong *plVar13;
    longlong lVar14;
    undefined4 *puVar15;
    uint **ppuVar16;
    longlong lVar17;
    uint *puVar18;
    char *pcVar19;
    char *pcVar20;
    uint uVar21;
    uint uVar23;
    longlong *plVar24;
    uint uVar25;
    bool bVar26;
    uint *local_res10;
    longlong *local_res18;
    uint *local_res20;
    uint **in_stack_ffffffffffffff58;
    uint *local_98;
    uint *local_90 [2];
    undefined local_80 [16];
    uint *local_70;
    longlong *local_68;
    uint *local_60;
    longlong *local_58;
    longlong *plVar22;

    plVar24 = (longlong *)0x0;
    local_res18 = (longlong *)0x0;
    uVar7 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63e2c == 0) && (iVar8 = FUN_140226ca0(), -1 < iVar8)) {
            uVar7 = (**(code **)(*DAT_140c63be0 + 0x28))();
        }
    }
    else {
        uVar7 = (*DAT_140c63838)(&PTR_u_PublicEvent_140a6c3f8);
    }
    plVar22 = plVar24;
    if (uVar7 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63e2c == 0) && (iVar8 = FUN_140226ca0(), -1 < iVar8)) {
                    puVar10 = (uint *)(**(code **)(*DAT_140c63be0 + 0x20))();
                    goto LAB_14049745c;
                }
            }
            else {
                puVar10 = (uint *)(*DAT_140c63848)(&PTR_u_PublicEvent_140a6c3f8);
                LAB_14049745c:
                if (puVar10 != (uint *)0x0) {
                    if (puVar10[6] == 0x10) {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c64698 == 0) && (iVar8 = FUN_14024aa60(), -1 < iVar8)) {
                                lVar11 = (**(code **)(*DAT_140c63c08 + 0x18))();
                                goto LAB_14049750d;
                            }
                        }
                        else {
                            lVar11 = (*DAT_140c63840)();
                            LAB_14049750d:
                            if (((lVar11 != 0) && (*(uint *)(lVar11 + 0x14) < 0xc)) &&
                                ((0x94aU >> (*(uint *)(lVar11 + 0x14) & 0x1f) & 1) != 0)) {
                                lVar11 = FUN_14020fd40(puVar10[9]);
                                if (lVar11 == 0) goto LAB_140497566;
                                bVar26 = (*(byte *)(lVar11 + 0xc) & 0x40) == 0;
                                goto LAB_140497531;
                            }
                        }
                    }
                    else {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c64698 != 0) || (iVar8 = FUN_14024aa60(), iVar8 < 0)) goto LAB_140497566;
                            lVar11 = (**(code **)(*DAT_140c63c08 + 0x18))();
                        }
                        else {
                            lVar11 = (*DAT_140c63840)(&PTR_u_World_140a6e180);
                        }
                        if (lVar11 == 0) goto LAB_140497566;
                        iVar8 = (**(code **)(*param_1 + 0x10))(param_1);
                        bVar26 = iVar8 == 0;
                        LAB_140497531:
                        if (bVar26) goto LAB_140497566;
                    }
                    plVar12 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1);
                    (**(code **)(*plVar12 + 8))(plVar12,puVar10);
                    local_70 = (uint *)((ulonglong)local_70 & 0xffffffff00000000 | (ulonglong)*puVar10);
                    local_68 = plVar12;
                    FUN_140055f80(param_1 + 1);
                }
            }
            LAB_140497566:
            uVar23 = (int)plVar22 + 1;
            plVar22 = (longlong *)(ulonglong)uVar23;
        } while (uVar23 < uVar7);
    }
    uVar7 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar23 = uVar7;
        if ((_DAT_140c638c4 == 0) && (iVar8 = FUN_1402281e0(), -1 < iVar8)) {
            uVar23 = (**(code **)(*DAT_140c64890 + 0x28))();
        }
    }
    else {
        uVar23 = (*DAT_140c63838)(&PTR_u_PublicEventObjective_140a6c510);
    }
    plVar22 = plVar24;
    if (uVar23 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c638c4 == 0) && (iVar8 = FUN_1402281e0(), -1 < iVar8)) {
                    puVar10 = (uint *)(**(code **)(*DAT_140c64890 + 0x20))();
                    goto LAB_14049761b;
                }
            }
            else {
                puVar10 = (uint *)(*DAT_140c63848)(&PTR_u_PublicEventObjective_140a6c510);
                LAB_14049761b:
                if (puVar10 != (uint *)0x0) {
                    puVar2 = (uint *)param_1[2];
                    puVar18 = puVar2;
                    puVar4 = *(uint **)(puVar2 + 2);
                    while (puVar4 != (uint *)0x0) {
                        if (puVar4[8] < puVar10[1]) {
                            puVar4 = *(uint **)(puVar4 + 6);
                        }
                        else {
                            puVar18 = puVar4;
                            puVar4 = *(uint **)(puVar4 + 4);
                        }
                    }
                    if ((puVar18 == puVar2) || (puVar10[1] < puVar18[8])) {
                        local_res20 = puVar2;
                        ppuVar16 = &local_res20;
                    }
                    else {
                        local_res10 = puVar18;
                        ppuVar16 = &local_res10;
                    }
                    if (((*ppuVar16 != puVar2) &&
                         (plVar12 = *(longlong **)(*ppuVar16 + 10), plVar12 != (longlong *)0x0)) &&
                        ((iVar8 = (**(code **)(*plVar12 + 0x28))(plVar12), iVar8 != 0x10 ||
                                                                           ((puVar10[0x10] != 0 || (puVar10[10] == 5)))))) {
                        if (puVar10[10] == 0x21) {
                            if (DAT_140c63840 == (code *)0x0) {
                                if ((_DAT_140c647d0 != 0) || (iVar8 = FUN_140225760(), iVar8 < 0))
                                    goto LAB_1404978ff;
                                lVar11 = (**(code **)(*DAT_140c64208 + 0x18))();
                            }
                            else {
                                lVar11 = (*DAT_140c63840)(&PTR_u_Prerequisite_140a6c2e0);
                            }
                            if (lVar11 == 0) goto LAB_1404978ff;
                        }
                        plVar13 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
                        (**(code **)(*plVar13 + 8))(plVar13,plVar12);
                        puVar2 = (uint *)plVar12[3];
                        uVar25 = *(uint *)plVar13[1];
                        puVar18 = puVar2;
                        puVar4 = *(uint **)(puVar2 + 2);
                        while (puVar4 != (uint *)0x0) {
                            if (puVar4[8] < uVar25) {
                                puVar4 = *(uint **)(puVar4 + 6);
                            }
                            else {
                                puVar18 = puVar4;
                                puVar4 = *(uint **)(puVar4 + 4);
                            }
                        }
                        if ((puVar18 == puVar2) || (uVar25 < puVar18[8])) {
                            local_60 = (uint *)((ulonglong)local_60 & 0xffffffff00000000 | (ulonglong)uVar25);
                            local_58 = (longlong *)0x0;
                            local_98 = puVar18;
                            FUN_140055c60(plVar12 + 2,local_90,&local_98,&local_60);
                            puVar18 = local_90[0];
                        }
                        *(longlong **)(puVar18 + 10) = plVar13;
                        (**(code **)(*param_1 + 0x28))(param_1,plVar13);
                        pcVar3 = (char *)param_1[6];
                        uVar25 = *puVar10;
                        local_70 = (uint *)((ulonglong)local_70 & 0xffffffff00000000 | (ulonglong)uVar25);
                        bVar26 = true;
                        pcVar6 = pcVar3;
                        pcVar20 = *(char **)(pcVar3 + 8);
                        while (pcVar20 != (char *)0x0) {
                            bVar26 = uVar25 < *(uint *)(pcVar20 + 0x20);
                            pcVar6 = pcVar20;
                            if (bVar26) {
                                pcVar20 = *(char **)(pcVar20 + 0x10);
                            }
                            else {
                                pcVar20 = *(char **)(pcVar20 + 0x18);
                            }
                        }
                        pcVar20 = pcVar6;
                        local_68 = plVar13;
                        if (bVar26) {
                            if (pcVar6 == *(char **)(pcVar3 + 0x10)) {
                                in_stack_ffffffffffffff58 = &local_70;
                                FUN_140055e80(param_1 + 5,local_80,0,pcVar6,in_stack_ffffffffffffff58);
                                goto LAB_1404978ff;
                            }
                            if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
                                pcVar20 = *(char **)(pcVar6 + 0x18);
                            }
                            else {
                                pcVar20 = *(char **)(pcVar6 + 0x10);
                                if (pcVar20 == (char *)0x0) {
                                    pcVar20 = *(char **)(pcVar6 + 8);
                                    pcVar19 = pcVar20;
                                    if (pcVar6 == *(char **)(pcVar20 + 0x10)) {
                                        do {
                                            pcVar20 = *(char **)(pcVar19 + 8);
                                            bVar26 = pcVar19 == *(char **)(pcVar20 + 0x10);
                                            pcVar19 = pcVar20;
                                        } while (bVar26);
                                    }
                                }
                                else {
                                    for (pcVar19 = *(char **)(pcVar20 + 0x18); pcVar19 != (char *)0x0;
                                         pcVar19 = *(char **)(pcVar19 + 0x18)) {
                                        pcVar20 = pcVar19;
                                    }
                                }
                            }
                        }
                        if (*(uint *)(pcVar20 + 0x20) < uVar25) {
                            if ((pcVar6 == pcVar3) || (uVar25 < *(uint *)(pcVar6 + 0x20))) {
                                lVar11 = FUN_14018b280(0x30);
                                if ((uint **)(lVar11 + 0x20) != (uint **)0x0) {
                                    *(uint **)(lVar11 + 0x20) = local_70;
                                    *(longlong **)(lVar11 + 0x28) = plVar13;
                                }
                                *(longlong *)(pcVar6 + 0x10) = lVar11;
                                pcVar3 = (char *)param_1[6];
                                if (pcVar6 == pcVar3) {
                                    *(longlong *)(pcVar3 + 8) = lVar11;
                                    *(longlong *)(param_1[6] + 0x18) = lVar11;
                                }
                                else if (pcVar6 == *(char **)(pcVar3 + 0x10)) {
                                    *(longlong *)(pcVar3 + 0x10) = lVar11;
                                }
                            }
                            else {
                                lVar11 = FUN_14018b280(0x30);
                                if ((uint **)(lVar11 + 0x20) != (uint **)0x0) {
                                    *(uint **)(lVar11 + 0x20) = local_70;
                                    *(longlong **)(lVar11 + 0x28) = plVar13;
                                }
                                *(longlong *)(pcVar6 + 0x18) = lVar11;
                                if (pcVar6 == *(char **)(param_1[6] + 0x18)) {
                                    *(longlong *)(param_1[6] + 0x18) = lVar11;
                                }
                            }
                            *(char **)(lVar11 + 8) = pcVar6;
                            *(undefined8 *)(lVar11 + 0x10) = 0;
                            *(undefined8 *)(lVar11 + 0x18) = 0;
                            FUN_1400081c0();
                            param_1[7] = param_1[7] + 1;
                        }
                    }
                }
            }
            LAB_1404978ff:
            uVar25 = (int)plVar22 + 1;
            plVar22 = (longlong *)(ulonglong)uVar25;
        } while (uVar25 < uVar23);
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar23 = uVar7;
        if ((_DAT_140c64bd8 == 0) && (iVar8 = FUN_1402292e0(), -1 < iVar8)) {
            uVar23 = (**(code **)(*DAT_140c63888 + 0x28))();
        }
    }
    else {
        uVar23 = (*DAT_140c63838)(&PTR_u_PublicEventTeam_140a6c5f0);
    }
    plVar22 = plVar24;
    if (uVar23 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64bd8 == 0) && (iVar8 = FUN_1402292e0(), -1 < iVar8)) {
                    puVar10 = (uint *)(**(code **)(*DAT_140c63888 + 0x20))();
                    goto LAB_1404979aa;
                }
            }
            else {
                puVar10 = (uint *)(*DAT_140c63848)(&PTR_u_PublicEventTeam_140a6c5f0);
                LAB_1404979aa:
                if (puVar10 != (uint *)0x0) {
                    pcVar3 = (char *)param_1[10];
                    uVar25 = *puVar10;
                    bVar26 = true;
                    local_70 = (uint *)((ulonglong)local_70 & 0xffffffff00000000 | (ulonglong)uVar25);
                    pcVar6 = pcVar3;
                    pcVar20 = *(char **)(pcVar3 + 8);
                    while (pcVar20 != (char *)0x0) {
                        bVar26 = uVar25 < *(uint *)(pcVar20 + 0x20);
                        pcVar6 = pcVar20;
                        if (bVar26) {
                            pcVar20 = *(char **)(pcVar20 + 0x10);
                        }
                        else {
                            pcVar20 = *(char **)(pcVar20 + 0x18);
                        }
                    }
                    pcVar20 = pcVar6;
                    if (bVar26) {
                        if (pcVar6 != *(char **)(pcVar3 + 0x10)) {
                            if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
                                pcVar20 = *(char **)(pcVar6 + 0x18);
                            }
                            else {
                                pcVar20 = *(char **)(pcVar6 + 0x10);
                                if (pcVar20 == (char *)0x0) {
                                    pcVar20 = *(char **)(pcVar6 + 8);
                                    pcVar19 = pcVar20;
                                    if (pcVar6 == *(char **)(pcVar20 + 0x10)) {
                                        do {
                                            pcVar20 = *(char **)(pcVar19 + 8);
                                            bVar26 = pcVar19 == *(char **)(pcVar20 + 0x10);
                                            pcVar19 = pcVar20;
                                        } while (bVar26);
                                    }
                                }
                                else {
                                    for (pcVar19 = *(char **)(pcVar20 + 0x18); pcVar19 != (char *)0x0;
                                         pcVar19 = *(char **)(pcVar19 + 0x18)) {
                                        pcVar20 = pcVar19;
                                    }
                                }
                            }
                            goto LAB_140497a4d;
                        }
                    }
                    else {
                        LAB_140497a4d:
                        if (uVar25 <= *(uint *)(pcVar20 + 0x20)) goto LAB_140497afd;
                    }
                    if ((pcVar6 == pcVar3) || (uVar25 < *(uint *)(pcVar6 + 0x20))) {
                        lVar11 = FUN_14018b280(0x30);
                        if ((uint **)(lVar11 + 0x20) != (uint **)0x0) {
                            *(uint **)(lVar11 + 0x20) = local_70;
                            *(uint **)(lVar11 + 0x28) = puVar10;
                        }
                        *(longlong *)(pcVar6 + 0x10) = lVar11;
                        pcVar3 = (char *)param_1[10];
                        if (pcVar6 == pcVar3) {
                            *(longlong *)(pcVar3 + 8) = lVar11;
                            *(longlong *)(param_1[10] + 0x18) = lVar11;
                        }
                        else if (pcVar6 == *(char **)(pcVar3 + 0x10)) {
                            *(longlong *)(pcVar3 + 0x10) = lVar11;
                        }
                    }
                    else {
                        lVar11 = FUN_14018b280(0x30);
                        if ((uint **)(lVar11 + 0x20) != (uint **)0x0) {
                            *(uint **)(lVar11 + 0x20) = local_70;
                            *(uint **)(lVar11 + 0x28) = puVar10;
                        }
                        *(longlong *)(pcVar6 + 0x18) = lVar11;
                        if (pcVar6 == *(char **)(param_1[10] + 0x18)) {
                            *(longlong *)(param_1[10] + 0x18) = lVar11;
                        }
                    }
                    *(char **)(lVar11 + 8) = pcVar6;
                    *(undefined8 *)(lVar11 + 0x10) = 0;
                    *(undefined8 *)(lVar11 + 0x18) = 0;
                    FUN_1400081c0();
                    param_1[0xb] = param_1[0xb] + 1;
                }
            }
            LAB_140497afd:
            uVar25 = (int)plVar22 + 1;
            plVar22 = (longlong *)(ulonglong)uVar25;
        } while (uVar25 < uVar23);
    }
    lVar11 = *(longlong *)(param_1[2] + 0x10);
    if (lVar11 != param_1[2]) {
        do {
            (**(code **)(**(longlong **)(lVar11 + 0x28) + 0x30))();
            lVar14 = *(longlong *)(lVar11 + 0x18);
            if (lVar14 == 0) {
                lVar14 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar14 + 0x18)) {
                    do {
                        lVar11 = lVar14;
                        lVar14 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar14 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar14) {
                    lVar11 = lVar14;
                }
            }
            else {
                for (lVar5 = *(longlong *)(lVar14 + 0x10); lVar11 = lVar14, lVar5 != 0;
                     lVar5 = *(longlong *)(lVar5 + 0x10)) {
                    lVar14 = lVar5;
                }
            }
        } while (lVar11 != param_1[2]);
    }
    uVar23 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar25 = uVar7;
        if ((_DAT_140c63a84 == 0) && (iVar8 = FUN_1402270e0(), uVar25 = uVar23, -1 < iVar8)) {
            uVar25 = (**(code **)(*DAT_140c64738 + 0x28))();
        }
    }
    else {
        uVar25 = (*DAT_140c63838)(&PTR_u_PublicEventCustomStat_140a6c430);
    }
    plVar22 = plVar24;
    if (uVar25 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                plVar12 = plVar24;
                if (_DAT_140c63a84 == 0) {
                    iVar8 = FUN_1402270e0();
                    if (iVar8 < 0) {
                        plVar12 = (longlong *)0x0;
                    }
                    else {
                        plVar12 = (longlong *)(**(code **)(*DAT_140c64738 + 0x20))();
                    }
                }
            }
            else {
                plVar12 = (longlong *)(*DAT_140c63848)(&PTR_u_PublicEventCustomStat_140a6c430);
            }
            uVar21 = *(uint *)((longlong)plVar12 + 0xc);
            if (uVar21 < 6) {
                if (*(int *)(plVar12 + 1) == 0) {
                    local_res20 = (uint *)CONCAT44(uVar21,*(undefined4 *)((longlong)plVar12 + 4));
                    local_70 = local_res20;
                    local_68 = plVar12;
                    FUN_1403ae510(param_1 + 0xd);
                }
                else {
                    local_res10 = (uint *)CONCAT44(uVar21,*(int *)(plVar12 + 1));
                    local_60 = local_res10;
                    local_58 = plVar12;
                    FUN_1404990f0(param_1 + 0x11);
                }
            }
            uVar21 = (int)plVar22 + 1;
            plVar22 = (longlong *)(ulonglong)uVar21;
        } while (uVar21 < uVar25);
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar25 = uVar23;
        if ((_DAT_140c64efc == 0) && (iVar8 = FUN_140229720(), -1 < iVar8)) {
            uVar25 = (**(code **)(*DAT_140c64da0 + 0x28))();
        }
    }
    else {
        uVar25 = (*DAT_140c63838)(&PTR_u_PublicEventUnitPropertyModifier_140a6c628);
    }
    plVar22 = plVar24;
    if (uVar25 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64efc == 0) && (iVar8 = FUN_140229720(), -1 < iVar8)) {
                    puVar10 = (uint *)(**(code **)(*DAT_140c64da0 + 0x20))(DAT_140c64da0,plVar22);
                    goto LAB_140497d29;
                }
            }
            else {
                puVar10 = (uint *)(*DAT_140c63848)(&PTR_u_PublicEventUnitPropertyModifier_140a6c628,plVar22)
                        ;
                LAB_140497d29:
                if (puVar10 != (uint *)0x0) {
                    switch(puVar10[2]) {
                        case 7:
                        case 0x23:
                        case 0x24:
                        case 100:
                        case 0x72:
                        case 0x81:
                        case 0x82:
                        case 0x83:
                        case 0x89:
                        case 0xa2:
                        case 0xa6:
                        case 0xa7:
                        case 0xb5:
                        case 0xbf:
                            puVar2 = (uint *)param_1[2];
                            puVar18 = puVar2;
                            puVar4 = *(uint **)(puVar2 + 2);
                            while (puVar4 != (uint *)0x0) {
                                if (puVar4[8] < puVar10[1]) {
                                    puVar4 = *(uint **)(puVar4 + 6);
                                }
                                else {
                                    puVar18 = puVar4;
                                    puVar4 = *(uint **)(puVar4 + 4);
                                }
                            }
                            if ((puVar18 == puVar2) || (puVar10[1] < puVar18[8])) {
                                local_res20 = puVar2;
                                ppuVar16 = &local_res20;
                            }
                            else {
                                local_res10 = puVar18;
                                ppuVar16 = &local_res10;
                            }
                            if ((*ppuVar16 != puVar2) && (lVar11 = *(longlong *)(*ppuVar16 + 10), lVar11 != 0)) {
                                ppuVar16 = *(uint ***)(lVar11 + 0x40);
                                local_90[0] = puVar10;
                                if (ppuVar16 == *(uint ***)(lVar11 + 0x48)) {
                                    FUN_1400b9430();
                                }
                                else {
                                    if (ppuVar16 != (uint **)0x0) {
                                        *ppuVar16 = puVar10;
                                    }
                                    *(longlong *)(lVar11 + 0x40) = *(longlong *)(lVar11 + 0x40) + 8;
                                }
                            }
                            break;
                        default:
                            local_90[0] = (uint *)0x141e03570;
                            in_stack_ffffffffffffff58 =
                                    (uint **)((ulonglong)in_stack_ffffffffffffff58 & 0xffffffff00000000 |
                                              (ulonglong)*puVar10);
                            FUN_1401a2e50(0x40,0,local_90,puVar10[1],in_stack_ffffffffffffff58,puVar10[2]);
                    }
                }
            }
            uVar21 = (int)plVar22 + 1;
            plVar22 = (longlong *)(ulonglong)uVar21;
        } while (uVar21 < uVar25);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63d4c == 0) && (iVar8 = FUN_140229b60(), uVar23 = uVar7, -1 < iVar8)) {
            uVar23 = (**(code **)(*DAT_140c649a8 + 0x28))();
        }
    }
    else {
        uVar23 = (*DAT_140c63838)(&PTR_u_PublicEventRewardModifier_140a6c660);
    }
    plVar22 = plVar24;
    if (uVar23 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63d4c == 0) && (iVar8 = FUN_140229b60(), -1 < iVar8)) {
                    puVar10 = (uint *)(**(code **)(*DAT_140c649a8 + 0x20))();
                    goto LAB_140497ead;
                }
            }
            else {
                puVar10 = (uint *)(*DAT_140c63848)(&PTR_u_PublicEventRewardModifier_140a6c660,plVar22,
                                                   DAT_140c63858);
                LAB_140497ead:
                if (puVar10 != (uint *)0x0) {
                    puVar2 = (uint *)param_1[2];
                    puVar18 = puVar2;
                    puVar4 = *(uint **)(puVar2 + 2);
                    while (puVar4 != (uint *)0x0) {
                        if (puVar4[8] < puVar10[1]) {
                            puVar4 = *(uint **)(puVar4 + 6);
                        }
                        else {
                            puVar18 = puVar4;
                            puVar4 = *(uint **)(puVar4 + 4);
                        }
                    }
                    if ((puVar18 == puVar2) || (puVar10[1] < puVar18[8])) {
                        local_res20 = puVar2;
                        ppuVar16 = &local_res20;
                    }
                    else {
                        local_res10 = puVar18;
                        ppuVar16 = &local_res10;
                    }
                    if ((*ppuVar16 != puVar2) && (lVar11 = *(longlong *)(*ppuVar16 + 10), lVar11 != 0)) {
                        ppuVar16 = *(uint ***)(lVar11 + 0x60);
                        local_90[0] = puVar10;
                        if (ppuVar16 == *(uint ***)(lVar11 + 0x68)) {
                            FUN_1400b9430(lVar11 + 0x50,ppuVar16,local_90);
                        }
                        else {
                            if (ppuVar16 != (uint **)0x0) {
                                *ppuVar16 = puVar10;
                            }
                            *(longlong *)(lVar11 + 0x60) = *(longlong *)(lVar11 + 0x60) + 8;
                        }
                    }
                }
            }
            uVar7 = (int)plVar22 + 1;
            plVar22 = (longlong *)(ulonglong)uVar7;
        } while (uVar7 < uVar23);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c63c54 == 0) {
            iVar8 = FUN_1402426a0();
            if (iVar8 < 0) {
                uVar7 = 0;
            }
            else {
                uVar7 = (**(code **)(*DAT_140c653c0 + 0x28))();
            }
        }
        else {
            uVar7 = 0;
        }
    }
    else {
        uVar7 = (*DAT_140c63838)(&PTR_u_TrackingSlot_140a6dab8);
    }
    local_res10 = (uint *)((ulonglong)local_res10 & 0xffffffff00000000 | (ulonglong)uVar7);
    if (uVar7 != 0) {
        do {
            iVar8 = (int)plVar24;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63c54 == 0) && (iVar9 = FUN_1402426a0(), -1 < iVar9)) {
                    puVar15 = (undefined4 *)(**(code **)(*DAT_140c653c0 + 0x20))();
                    goto LAB_140497feb;
                }
            }
            else {
                puVar15 = (undefined4 *)
                        (*DAT_140c63848)(&PTR_u_TrackingSlot_140a6dab8,plVar24,DAT_140c63858);
                LAB_140497feb:
                if (puVar15 != (undefined4 *)0x0) {
                    uVar7 = puVar15[4];
                    if (uVar7 != 0) {
                        puVar10 = (uint *)param_1[6];
                        puVar4 = puVar10;
                        puVar2 = *(uint **)(puVar10 + 2);
                        while (puVar2 != (uint *)0x0) {
                            if (puVar2[8] < uVar7) {
                                puVar2 = *(uint **)(puVar2 + 6);
                            }
                            else {
                                puVar4 = puVar2;
                                puVar2 = *(uint **)(puVar2 + 4);
                            }
                        }
                        if ((puVar4 == puVar10) || (uVar7 < puVar4[8])) {
                            local_90[0] = puVar10;
                            ppuVar16 = local_90;
                        }
                        else {
                            local_res20 = puVar4;
                            ppuVar16 = &local_res20;
                        }
                        if (*ppuVar16 != puVar10) {
                            lVar14 = *(longlong *)(*ppuVar16 + 10);
                            uVar1 = *puVar15;
                            lVar5 = *(longlong *)(lVar14 + 0x20);
                            lVar11 = lVar5 + 1;
                            lVar17 = FUN_14018db00(*(undefined8 *)(lVar14 + 0x18),lVar11,4);
                            *(undefined4 *)(lVar17 + lVar5 * 4) = uVar1;
                            if (*(longlong *)(lVar14 + 0x18) != lVar17) {
                                FUN_1407db590(lVar17,*(longlong *)(lVar14 + 0x18),*(longlong *)(lVar14 + 0x20) << 2)
                                        ;
                                lVar5 = *(longlong *)(lVar14 + 0x18);
                                if (lVar5 != 0) {
                                    (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
                                }
                                *(longlong *)(lVar14 + 0x18) = lVar17;
                            }
                            *(longlong *)(lVar14 + 0x20) = lVar11;
                            FUN_1400bd4a0(param_1 + 0x15,puVar15,puVar15 + 4);
                        }
                    }
                    iVar8 = (int)local_res18;
                }
            }
            plVar24 = (longlong *)(ulonglong)(iVar8 + 1U);
            local_res18 = plVar24;
        } while (iVar8 + 1U < (uint)local_res10);
    }
    return 0;
}



undefined8 FUN_140498700(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    lVar1 = local_res8;
    if (local_res8 != *(longlong *)(param_1 + 0x10)) {
        lVar2 = *(longlong *)(local_res8 + 0x28);
        lVar6 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10);
        if (lVar6 != *(longlong *)(lVar2 + 8)) {
            do {
                puVar3 = *(undefined8 **)(lVar6 + 0x28);
                if (puVar3 != (undefined8 *)0x0) {
                    (**(code **)*puVar3)(puVar3,1);
                }
                lVar5 = *(longlong *)(lVar6 + 0x18);
                if (lVar5 == 0) {
                    lVar5 = *(longlong *)(lVar6 + 8);
                    if (lVar6 == *(longlong *)(lVar5 + 0x18)) {
                        do {
                            lVar6 = lVar5;
                            lVar5 = *(longlong *)(lVar6 + 8);
                        } while (lVar6 == *(longlong *)(lVar5 + 0x18));
                    }
                    if (*(longlong *)(lVar6 + 0x18) != lVar5) {
                        lVar6 = lVar5;
                    }
                }
                else {
                    for (lVar4 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar4 != 0;
                         lVar4 = *(longlong *)(lVar4 + 0x10)) {
                        lVar5 = lVar4;
                    }
                }
            } while (lVar6 != *(longlong *)(lVar2 + 8));
        }
        FUN_140008410(lVar2);
        FUN_140008410();
        lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x10);
        if (lVar6 != *(longlong *)(lVar2 + 0x70)) {
            do {
                (**(code **)(**(longlong **)(lVar6 + 0x28) + 0x10))();
                puVar3 = *(undefined8 **)(lVar6 + 0x28);
                if (puVar3 != (undefined8 *)0x0) {
                    (**(code **)*puVar3)(puVar3,1);
                }
                lVar5 = *(longlong *)(lVar6 + 0x18);
                if (lVar5 == 0) {
                    lVar5 = *(longlong *)(lVar6 + 8);
                    if (lVar6 == *(longlong *)(lVar5 + 0x18)) {
                        do {
                            lVar6 = lVar5;
                            lVar5 = *(longlong *)(lVar6 + 8);
                        } while (lVar6 == *(longlong *)(lVar5 + 0x18));
                    }
                    if (*(longlong *)(lVar6 + 0x18) != lVar5) {
                        lVar6 = lVar5;
                    }
                }
                else {
                    for (lVar4 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar4 != 0;
                         lVar4 = *(longlong *)(lVar4 + 0x10)) {
                        lVar5 = lVar4;
                    }
                }
            } while (lVar6 != *(longlong *)(lVar2 + 0x70));
        }
        if (*(longlong *)(lVar2 + 0x78) != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x70) + 8);
            while (lVar6 != 0) {
                FUN_1400083b0(lVar2 + 0x68,*(undefined8 *)(lVar6 + 0x18));
                lVar5 = *(longlong *)(lVar6 + 0x10);
                FUN_14018b900(lVar6,0);
                lVar6 = lVar5;
            }
            *(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x10) = *(longlong *)(lVar2 + 0x70);
            *(undefined8 *)(*(longlong *)(lVar2 + 0x70) + 8) = 0;
            *(longlong *)(*(longlong *)(lVar2 + 0x70) + 0x18) = *(longlong *)(lVar2 + 0x70);
            *(undefined8 *)(lVar2 + 0x78) = 0;
        }
        FUN_140008410(lVar2 + 0x68);
        FUN_14018b900(*(undefined8 *)(lVar2 + 0x70),0);
        FUN_140008410(lVar2 + 0x48);
        FUN_14018b900(*(undefined8 *)(lVar2 + 0x50),0);
        FUN_140008410(lVar2 + 0x28);
        FUN_14018b900(*(undefined8 *)(lVar2 + 0x30),0);
        if (*(longlong *)(lVar2 + 0x20) != 0) {
            FUN_1401a4a00(lVar2 + 0x20);
        }
        FUN_140008410(lVar2);
        FUN_14018b900(*(undefined8 *)(lVar2 + 8),0);
        FUN_14018b900(lVar2,0);
        local_res8 = lVar1;
        FUN_140498ff0(param_1 + 8,&local_res8);
        return 0;
    }
    return 0x80004005;
}



void FUN_140498990(undefined8 *param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_LAB_140b674f0;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x18);
            puVar1 = (undefined4 *)(lVar4 + 0x20);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
            FUN_140498700(param_1,*puVar1);
        } while (lVar4 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    FUN_140008410(param_1 + 1);
    FUN_14018b900(param_1[2],0);
    return;
}



undefined8 FUN_140498a40(longlong param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_3) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_3 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if ((local_res8 != lVar1) && (*(longlong *)(local_res8 + 0x28) != 0)) {
        lVar1 = *(longlong *)(*(longlong *)(local_res8 + 0x28) + 8);
        local_res8 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        if (local_res8 != lVar1) {
            return *(undefined8 *)(local_res8 + 0x28);
        }
    }
    return 0;
}



void FUN_140498ba0(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140498bbe. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x28))(plVar1);
    return;
}



void FUN_140498bd0(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x30))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140498bee. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x30))(plVar1);
    return;
}



void FUN_140498c00(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x18))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140498c1e. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x68))(plVar1);
    return;
}



undefined8 FUN_140498c30(longlong *param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined8 uVar3;

    plVar2 = (longlong *)(**(code **)(*param_1 + 0x18))();
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x68))(plVar2);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140498c64. Too many branches
            // WARNING: Treating indirect jump as call
            uVar3 = (**(code **)(*plVar2 + 0x70))(plVar2);
            return uVar3;
        }
    }
    return 0;
}



undefined8 FUN_140498c70(longlong *param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined8 uVar3;

    plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0x68))(plVar2);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140498ca4. Too many branches
            // WARNING: Treating indirect jump as call
            uVar3 = (**(code **)(*plVar2 + 0xa0))(plVar2);
            return uVar3;
        }
    }
    return 0;
}



void FUN_140498cb0(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140498cce. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x68))(plVar1);
    return;
}



void FUN_140498ce0(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140498cfe. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x60))(plVar1);
    return;
}



undefined8 FUN_140498d10(longlong *param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 uVar4;

    plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar2 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2);
        iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140498d4d. Too many branches
            // WARNING: Treating indirect jump as call
            uVar4 = (**(code **)(*plVar2 + 0x38))(plVar2);
            return uVar4;
        }
    }
    return 0;
}



undefined8 FUN_140498d60(longlong *param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 uVar4;

    plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar2 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2);
        iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140498d9d. Too many branches
            // WARNING: Treating indirect jump as call
            uVar4 = (**(code **)(*plVar2 + 0x98))(plVar2);
            return uVar4;
        }
    }
    return 0;
}



undefined8 FUN_140498db0(longlong *param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    undefined8 uVar4;

    plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar2 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2);
        iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
        if (iVar1 != 0) {
            // WARNING: Could not recover jumptable at 0x000140498ded. Too many branches
            // WARNING: Treating indirect jump as call
            uVar4 = (**(code **)(*plVar2 + 0xd0))(plVar2);
            return uVar4;
        }
    }
    return 0;
}



ulonglong FUN_140498e00(longlong *param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong *plVar3;
    ulonglong uVar4;

    plVar2 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar2 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar2 + 0x28))(plVar2);
        iVar1 = (**(code **)(*plVar3 + 0x68))(plVar3);
        if (iVar1 != 0) {
            uVar4 = (**(code **)(*plVar2 + 0x88))(plVar2);
            return uVar4 & 0xffffffff00000000 | (ulonglong)(uint)((float)uVar4 * 100.0);
        }
    }
    return 0;
}



void FUN_140498e50(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x18))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140498e6e. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x78))(plVar1);
    return;
}



void FUN_140498e80(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140498e9e. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0xa8))(plVar1);
    return;
}



void FUN_140498eb0(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x18))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140498ece. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x80))(plVar1);
    return;
}



void FUN_140498ee0(longlong *param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)(**(code **)(*param_1 + 0x28))();
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140498efe. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0xb0))(plVar1);
    return;
}



longlong FUN_140498f10(longlong param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14018b280(0x30);
    *(undefined **)(param_1 + 8) = puVar1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x20) = 0;
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = *(longlong *)(param_1 + 0x30);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined **)(param_1 + 0x50) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x10) = *(longlong *)(param_1 + 0x50);
    *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x18) = *(longlong *)(param_1 + 0x50);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined **)(param_1 + 0x70) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x10) = *(longlong *)(param_1 + 0x70);
    *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) = *(longlong *)(param_1 + 0x70);
    return param_1;
}



void FUN_140498ff0(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 local_res8;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined **local_28;
    undefined8 local_20;
    LPVOID local_18;

    lVar1 = *(longlong *)(param_1 + 8);
    if (*param_2 == lVar1) {
        local_48 = &PTR_LAB_140b5e648;
        local_40 = 0;
        local_38 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_48);
        local_28 = local_48;
        local_res8 = 0x141e4f6b0;
        local_18 = local_38;
        local_20 = local_40;
        iVar2 = FUN_1401971e0(&DAT_140c8ad08,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001404990b6. Too many branches
            // WARNING: Treating indirect jump as call
            DebugBreak();
            return;
        }
    }
    else {
        uVar3 = FUN_140007db0(*param_2,lVar1 + 8,lVar1 + 0x10,lVar1 + 0x18);
        FUN_14018b900(uVar3,0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -1;
    }
    return;
}



char ** FUN_1404990f0(longlong param_1,char **param_2,uint *param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            if ((*param_3 < *(uint *)(pcVar5 + 0x20)) ||
                ((*param_3 <= *(uint *)(pcVar5 + 0x20) && (param_3[1] < *(uint *)(pcVar5 + 0x24))))) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
                bVar6 = true;
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
                bVar6 = false;
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_1404991d9;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if ((*param_3 <= *(uint *)(pcVar3 + 0x20)) &&
        ((*param_3 < *(uint *)(pcVar3 + 0x20) || (param_3[1] <= *(uint *)(pcVar3 + 0x24))))) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_1404991d9:
    ppcVar1 = (char **)FUN_140499210(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong *
FUN_140499210(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if ((*(uint *)(param_4 + 0x20) <= *(uint *)param_5) &&
            ((*(uint *)(param_4 + 0x20) < *(uint *)param_5 ||
              (*(uint *)(param_4 + 0x24) <= *(uint *)((longlong)param_5 + 4))))) {
            lVar2 = FUN_14018b280(0x30);
            if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
                *(undefined8 *)(lVar2 + 0x20) = *param_5;
                *(undefined8 *)(lVar2 + 0x28) = param_5[1];
            }
            *(longlong *)(param_4 + 0x18) = lVar2;
            if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
            }
            goto LAB_1404992da;
        }
    }
    lVar2 = FUN_14018b280(0x30);
    if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar2 + 0x20) = *param_5;
        *(undefined8 *)(lVar2 + 0x28) = param_5[1];
    }
    *(longlong *)(param_4 + 0x10) = lVar2;
    lVar1 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar1) {
        *(longlong *)(lVar1 + 8) = lVar2;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
    }
    else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
        *(longlong *)(lVar1 + 0x10) = lVar2;
    }
    LAB_1404992da:
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



undefined8 * FUN_140499320(void)

{
    undefined8 *puVar1;
    undefined *puVar2;

    puVar1 = (undefined8 *)FUN_14018b280(0x70);
    if (puVar1 != (undefined8 *)0x0) {
        FUN_140499440(puVar1);
        *puVar1 = &PTR_FUN_140b676a0;
        puVar2 = (undefined *)FUN_14018b280(0x30);
        puVar1[0xc] = 0;
        puVar1[0xb] = puVar2;
        *puVar2 = 0;
        *(undefined8 *)(puVar1[0xb] + 8) = 0;
        *(undefined8 *)(puVar1[0xb] + 0x10) = puVar1[0xb];
        *(undefined8 *)(puVar1[0xb] + 0x18) = puVar1[0xb];
        return puVar1;
    }
    return (undefined8 *)0x0;
}



undefined8 * FUN_1404993c0(undefined8 *param_1,ulonglong param_2)

{
    FUN_140008410(param_1 + 10);
    FUN_14018b900(param_1[0xb],0);
    *param_1 = &PTR_FUN_140b676e8;
    FUN_140008410(param_1 + 6);
    FUN_14018b900(param_1[7],0);
    FUN_140008410(param_1 + 2);
    FUN_14018b900(param_1[3],0);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_140499440(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b676e8;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[3] = puVar1;
    param_1[4] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[3] + 8) = 0;
    *(undefined8 *)(param_1[3] + 0x10) = param_1[3];
    *(undefined8 *)(param_1[3] + 0x18) = param_1[3];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[8] = 0;
    param_1[7] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[7] + 8) = 0;
    *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
    *(undefined8 *)(param_1[7] + 0x18) = param_1[7];
    return param_1;
}



undefined8 * FUN_1404994d0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b676d8;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_140499500(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b676e8;
    FUN_140008410();
    FUN_14018b900(param_1[7],0);
    FUN_140008410(param_1 + 2);
    FUN_14018b900(param_1[3],0);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_140499570(void)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined *puVar4;

    if ((DAT_140c65998 == (longlong *)0x0) && (DAT_140c65990 == (undefined8 *)0x0)) {
        lVar2 = FUN_14018b280(0x108,0);
        if (lVar2 == 0) {
            DAT_140c65998 = (longlong *)0x0;
        }
        else {
            DAT_140c65998 = (longlong *)FUN_140499670(lVar2);
        }
        iVar1 = (**(code **)(*DAT_140c65998 + 8))();
        if (iVar1 < 0) {
            FUN_1404999d0();
            return 0x80004005;
        }
        puVar3 = (undefined8 *)FUN_14018b280(0x28);
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_FUN_140b67678;
            puVar4 = (undefined *)FUN_14018b280(0x30);
            puVar3[3] = 0;
            DAT_140c65990 = puVar3;
            puVar3[2] = puVar4;
            *puVar4 = 0;
            *(undefined8 *)(puVar3[2] + 8) = 0;
            *(undefined8 *)(puVar3[2] + 0x10) = puVar3[2];
            *(undefined8 *)(puVar3[2] + 0x18) = puVar3[2];
            *puVar3 = &PTR_FUN_140b67678;
            return 0;
        }
        DAT_140c65990 = (undefined8 *)0x0;
    }
    return 0;
}



undefined8 * FUN_140499670(undefined8 *param_1)

{
    undefined *puVar1;

    FUN_140499790();
    *param_1 = &PTR_LAB_140b67720;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[0x16] = puVar1;
    param_1[0x17] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x16] + 8) = 0;
    *(undefined8 *)(param_1[0x16] + 0x10) = param_1[0x16];
    *(undefined8 *)(param_1[0x16] + 0x18) = param_1[0x16];
    puVar1 = (undefined *)FUN_14018b280(0x48,0);
    param_1[0x1b] = 0;
    param_1[0x1a] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined8 *)(param_1[0x1a] + 0x10) = param_1[0x1a];
    *(undefined8 *)(param_1[0x1a] + 0x18) = param_1[0x1a];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x1f] = 0;
    param_1[0x1e] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined8 *)(param_1[0x1e] + 0x10) = param_1[0x1e];
    *(undefined8 *)(param_1[0x1e] + 0x18) = param_1[0x1e];
    return param_1;
}



undefined8 * FUN_140499790(undefined8 *param_1)

{
    undefined *puVar1;

    *param_1 = &PTR_FUN_140b67680;
    puVar1 = (undefined *)FUN_14018b280(0x30);
    param_1[2] = puVar1;
    param_1[3] = 0;
    *puVar1 = 0;
    *(undefined8 *)(param_1[2] + 8) = 0;
    *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
    *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[7] = 0;
    param_1[6] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[6] + 8) = 0;
    *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
    *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xb] = 0;
    param_1[10] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[10] + 8) = 0;
    *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
    *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xf] = 0;
    param_1[0xe] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0xe] + 8) = 0;
    *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
    *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x13] = 0;
    param_1[0x12] = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(param_1[0x12] + 8) = 0;
    *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
    *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
    return param_1;
}



undefined8 FUN_1404998b0(undefined8 param_1,ulonglong param_2)

{
    FUN_14049bb00();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404998f0(longlong param_1)

{
    FUN_140008410(param_1 + 0xe8);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xf0),0);
    if (*(longlong *)(param_1 + 0xd8) != 0) {
        FUN_140044ca0(param_1 + 200,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 8));
        *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x10) = *(longlong *)(param_1 + 0xd0);
        *(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x18) = *(longlong *)(param_1 + 0xd0);
        *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0xd0),0);
    FUN_140008410(param_1 + 0xa8);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xb0),0);
    FUN_14049b0b0(param_1);
    return;
}



undefined8 FUN_140499990(undefined8 param_1,ulonglong param_2)

{
    FUN_14049b0b0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404999d0(void)

{
    if (DAT_140c65998 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65998)(DAT_140c65998,1);
    }
    if (DAT_140c65990 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65990)(DAT_140c65990,1);
    }
    DAT_140c65990 = (undefined8 *)0x0;
    DAT_140c65998 = (undefined8 *)0x0;
    return;
}



undefined8 FUN_140499a20(longlong param_1,uint param_2)

{
    ulonglong uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;

    uVar3 = *(uint *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = param_2;
    if ((uVar3 != 0) && (param_2 == 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GalacticArchiveRefresh","");
    }
    uVar3 = uVar3 ^ param_2;
    if (((int)uVar3 < 0) && ((int)param_2 < 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GalacticArchiveArticleAdded",
                      &DAT_1409ee14c,*(undefined8 *)(param_1 + 8));
    }
    uVar2 = 1;
    uVar4 = 0;
    do {
        if (((uVar3 & uVar2) != 0) && ((param_2 & uVar2) != 0)) {
            uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(*(longlong **)(param_1 + 8),uVar4);
            if (uVar1 != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GalacticArchiveEntryAdded",
                              &DAT_1409ee13c,*(undefined8 *)(param_1 + 8),uVar1);
                FUN_140437a10(DAT_140c658d8,0x6f,0,0,uVar1 & 0xffffffff00000000,0,1);
            }
        }
        uVar2 = uVar2 << 1 | (uint)((int)uVar2 < 0);
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
    return 0;
}



undefined8 FUN_140499b40(longlong *param_1,uint param_2)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    uint *puVar10;
    uint uVar11;
    ulonglong uVar12;
    float extraout_XMM0_Da;
    float fVar13;
    float fVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    float fVar17;
    float fVar18;
    undefined4 uVar19;
    float fVar20;
    undefined4 uVar21;
    float fVar22;
    float fVar23;
    undefined4 uVar24;
    undefined4 uVar25;
    longlong local_res8;
    longlong local_res18;
    longlong local_res20;
    undefined local_b8 [8];
    longlong local_b0;

    lVar4 = (**(code **)(*(longlong *)param_1[1] + 0x10))();
    if (lVar4 == 0) {
        return 0;
    }
    iVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
    if (iVar2 != 0) {
        return 0x42c80000;
    }
    fVar22 = 0.0;
    uVar24 = 0;
    fVar20 = 0.0;
    uVar21 = 0;
    FUN_14048b2a0(local_b8,DAT_140c65998 + 0xe8);
    lVar4 = *(longlong *)(local_b0 + 8);
    local_res8 = local_b0;
    lVar5 = lVar4;
    lVar8 = local_b0;
    if (lVar4 != 0) {
        do {
            if (param_2 < *(uint *)(lVar5 + 0x20)) {
                lVar7 = *(longlong *)(lVar5 + 0x10);
                local_res8 = lVar5;
            }
            else {
                lVar7 = *(longlong *)(lVar5 + 0x18);
            }
            lVar5 = lVar7;
        } while (lVar7 != 0);
        while (lVar5 = lVar4, lVar5 != 0) {
            if (*(uint *)(lVar5 + 0x20) < param_2) {
                lVar4 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                lVar4 = *(longlong *)(lVar5 + 0x10);
                lVar8 = lVar5;
            }
        }
    }
    if (lVar8 != local_res8) {
        fVar18 = 1.0;
        uVar19 = 0;
        do {
            lVar4 = *(longlong *)(lVar8 + 0x28);
            fVar23 = fVar22;
            uVar25 = uVar24;
            if (lVar4 != 0) {
                uVar12 = 0;
                uVar11 = *(uint *)(lVar4 + 0xc) & 1;
                uVar9 = 0;
                puVar10 = (uint *)(lVar4 + 0x10);
                fVar13 = fVar22;
                uVar15 = uVar24;
                do {
                    uVar3 = *puVar10;
                    fVar23 = fVar13;
                    uVar25 = uVar15;
                    if (uVar3 != 0) {
                        iVar2 = *(int *)(lVar4 + 8);
                        fVar14 = fVar13;
                        uVar16 = uVar15;
                        if (iVar2 == 0) {
                            lVar5 = *(longlong *)(DAT_140c65c28 + 0x70);
                            lVar1 = lVar5;
                            lVar7 = *(longlong *)(lVar5 + 8);
                            while (lVar7 != 0) {
                                if (*(uint *)(lVar7 + 0x20) < uVar3) {
                                    lVar7 = *(longlong *)(lVar7 + 0x18);
                                }
                                else {
                                    lVar1 = lVar7;
                                    lVar7 = *(longlong *)(lVar7 + 0x10);
                                }
                            }
                            if ((lVar1 == lVar5) || (uVar3 < *(uint *)(lVar1 + 0x20))) {
                                local_res20 = lVar5;
                                plVar6 = &local_res20;
                            }
                            else {
                                local_res18 = lVar1;
                                plVar6 = &local_res18;
                            }
                            if ((((*plVar6 != *(longlong *)(DAT_140c65c28 + 0x70)) &&
                                  (lVar5 = *(longlong *)(*plVar6 + 0x28), lVar5 != 0)) &&
                                 (fVar14 = fVar18, uVar16 = uVar19, *(longlong *)(lVar5 + 0x20) == 0)) &&
                                (fVar14 = fVar13, uVar16 = uVar15,
                                        fVar13 < (float)(ulonglong)*(uint *)(**(longlong **)(lVar5 + 0x28) + 0x2c))) {
                                uVar3 = FUN_140642b30();
                                fVar14 = (float)(ulonglong)uVar3 / extraout_XMM0_Da;
                                uVar16 = 0;
                                fVar23 = fVar13;
                                uVar25 = uVar15;
                            }
                            LAB_140499e4a:
                            if (uVar11 != 0) {
                                uVar12 = (ulonglong)((int)uVar12 + 1);
                                fVar22 = fVar22 + fVar14;
                                goto LAB_140499e6d;
                            }
                            fVar13 = fVar14;
                            uVar15 = uVar16;
                            if (fVar14 == fVar18) goto LAB_140499f93;
                        }
                        else {
                            if (iVar2 != 1) {
                                if (((iVar2 == 2) &&
                                     (lVar5 = FUN_1405a8a40(), fVar14 = fVar13, uVar16 = uVar15, lVar5 != 0)) &&
                                    (iVar2 = FUN_1405fbc40(), fVar14 = fVar23, uVar16 = uVar25, iVar2 == 3)) {
                                    fVar14 = fVar18;
                                    uVar16 = uVar19;
                                }
                                goto LAB_140499e4a;
                            }
                            if ((DAT_140c65970 != 0) &&
                                (plVar6 = (longlong *)FUN_1403d7bc0(), plVar6 != (longlong *)0x0)) {
                                fVar14 = fVar18;
                                uVar16 = uVar19;
                                iVar2 = (**(code **)(*plVar6 + 0x38))();
                                fVar18 = fVar14;
                                uVar19 = uVar16;
                                if (iVar2 == 0) {
                                    uVar3 = FUN_14056d330();
                                    fVar17 = (float)(ulonglong)uVar3;
                                    fVar14 = fVar13;
                                    uVar16 = uVar15;
                                    if (fVar23 < fVar17) {
                                        uVar3 = FUN_14056d0d0();
                                        fVar14 = (float)(ulonglong)uVar3 / fVar17;
                                        uVar16 = 0;
                                    }
                                }
                                goto LAB_140499e4a;
                            }
                            if (uVar11 != 0) {
                                lVar5 = FUN_140491c60();
                                fVar14 = fVar13;
                                uVar16 = uVar15;
                                if ((lVar5 != 0) &&
                                    (iVar2 = FUN_1403d7c30(lVar5,*(undefined8 *)(DAT_140c65898 + 0x78),1),
                                     fVar14 = fVar13, uVar16 = uVar15, iVar2 == 0)) goto LAB_140499e6d;
                                goto LAB_140499e4a;
                            }
                        }
                        if (fVar20 < fVar13) {
                            fVar20 = fVar13;
                            uVar21 = uVar15;
                        }
                    }
                    LAB_140499e6d:
                    uVar9 = uVar9 + 1;
                    puVar10 = puVar10 + 1;
                    fVar13 = fVar23;
                    uVar15 = uVar25;
                } while (uVar9 < 6);
                if ((uVar11 != 0) && ((int)uVar12 != 0)) {
                    if (fVar20 < fVar22 / (float)uVar12) {
                        fVar20 = fVar22 / (float)uVar12;
                        uVar21 = uVar24;
                    }
                    if (fVar20 == fVar18) {
                        LAB_140499f93:
                        fVar20 = 100.0;
                        uVar21 = 0;
                        goto LAB_140499f17;
                    }
                }
            }
            lVar4 = *(longlong *)(lVar8 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar4 + 0x18)) {
                    do {
                        lVar8 = lVar4;
                        lVar4 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar4 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar4) {
                    lVar8 = lVar4;
                }
            }
            else {
                for (lVar5 = *(longlong *)(lVar4 + 0x10); lVar8 = lVar4, lVar5 != 0;
                     lVar5 = *(longlong *)(lVar5 + 0x10)) {
                    lVar4 = lVar5;
                }
            }
            fVar22 = fVar23;
            uVar24 = uVar25;
        } while (lVar8 != local_res8);
    }
    fVar20 = fVar20 * 100.0;
    LAB_140499f17:
    FUN_140008410(local_b8);
    FUN_14018b900(local_b0,0);
    return CONCAT44(uVar21,fVar20);
}



undefined8 FUN_14049a790(void)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar3 = DAT_140c65990;
    lVar5 = *(longlong *)(*(longlong *)(DAT_140c65990 + 0x10) + 0x10);
    if (lVar5 != *(longlong *)(DAT_140c65990 + 0x10)) {
        do {
            puVar1 = *(undefined8 **)(lVar5 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
            }
            lVar4 = *(longlong *)(lVar5 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar4 + 0x18)) {
                    do {
                        lVar5 = lVar4;
                        lVar4 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar4 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar4) {
                    lVar5 = lVar4;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar4 = lVar2;
                }
            }
        } while (lVar5 != *(longlong *)(lVar3 + 0x10));
    }
    FUN_140008410(lVar3 + 8);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GalacticArchiveRefresh","");
    return 0;
}



undefined8 FUN_14049a860(undefined8 param_1,uint *param_2)

{
    longlong lVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong local_res8;
    undefined4 local_38 [2];
    longlong *local_30;
    undefined local_28 [16];

    uVar2 = *param_2;
    lVar3 = *(longlong *)(DAT_140c65990 + 0x10);
    lVar1 = DAT_140c65990 + 8;
    local_res8 = lVar3;
    lVar4 = *(longlong *)(lVar3 + 8);
    while (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x20) < uVar2) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            local_res8 = lVar4;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar3) || (uVar2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    plVar6 = (longlong *)0x0;
    plVar5 = plVar6;
    if (local_res8 != *(longlong *)(DAT_140c65990 + 0x10)) {
        plVar5 = *(longlong **)(local_res8 + 0x28);
    }
    if (plVar5 == (longlong *)0x0) {
        lVar3 = *(longlong *)(DAT_140c65998 + 0x10);
        local_res8 = lVar3;
        lVar4 = *(longlong *)(lVar3 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar2) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res8 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res8 == lVar3) || (uVar2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar3;
        }
        if ((local_res8 == lVar3) || (lVar3 = *(longlong *)(local_res8 + 0x28), lVar3 == 0)) {
            return 1;
        }
        plVar5 = (longlong *)FUN_14018b280(0x20);
        if (plVar5 != (longlong *)0x0) {
            plVar5[1] = 0;
            plVar5[2] = 0;
            plVar5[3] = 0;
            *plVar5 = (longlong)&PTR_FUN_140b67610;
            plVar6 = plVar5;
        }
        (**(code **)(*plVar6 + 8))(plVar6,lVar3);
        local_38[0] = (**(code **)(*plVar6 + 0x10))(plVar6);
        local_30 = plVar6;
        FUN_140055f80(lVar1,local_28,local_38);
        plVar5 = plVar6;
    }
    *(uint *)((longlong)plVar5 + 0x14) = param_2[2];
    FUN_140499a20(plVar5,param_2[1]);
    return 0;
}



undefined8 * FUN_14049a9e0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b67610;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_14049aa10(longlong param_1,uint param_2)

{
    longlong *plVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    longlong *plVar8;
    undefined4 local_res10 [2];
    longlong local_res18;
    undefined4 local_38 [2];
    longlong *local_30;
    undefined local_28 [16];

    lVar5 = *(longlong *)(DAT_140c65998 + 0x10);
    local_res18 = lVar5;
    lVar7 = *(longlong *)(lVar5 + 8);
    while (lVar7 != 0) {
        if (*(uint *)(lVar7 + 0x20) < param_2) {
            lVar7 = *(longlong *)(lVar7 + 0x18);
        }
        else {
            local_res18 = lVar7;
            lVar7 = *(longlong *)(lVar7 + 0x10);
        }
    }
    if ((local_res18 == lVar5) || (param_2 < *(uint *)(local_res18 + 0x20))) {
        local_res18 = lVar5;
    }
    if ((local_res18 != lVar5) &&
        (plVar1 = *(longlong **)(local_res18 + 0x28), plVar1 != (longlong *)0x0)) {
        uVar3 = (**(code **)(*plVar1 + 0x30))(plVar1);
        lVar5 = *(longlong *)(param_1 + 0x10);
        local_res18 = lVar5;
        lVar7 = *(longlong *)(lVar5 + 8);
        while (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x20) < uVar3) {
                lVar7 = *(longlong *)(lVar7 + 0x18);
            }
            else {
                local_res18 = lVar7;
                lVar7 = *(longlong *)(lVar7 + 0x10);
            }
        }
        if ((local_res18 == lVar5) || (uVar3 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar5;
        }
        plVar8 = (longlong *)0x0;
        plVar6 = plVar8;
        if (local_res18 != *(longlong *)(param_1 + 0x10)) {
            plVar6 = *(longlong **)(local_res18 + 0x28);
        }
        if ((plVar6 == (longlong *)0x0) || (iVar4 = (**(code **)(*plVar6 + 0x48))(plVar6), iVar4 == 0))
        {
            lVar5 = (**(code **)(*plVar1 + 0x28))(plVar1);
            if ((*(byte *)(lVar5 + 0x6c) & 1) != 0) {
                return 0x80004005;
            }
            if (plVar6 == (longlong *)0x0) {
                plVar6 = (longlong *)FUN_14018b280(0x20,0);
                if (plVar6 != (longlong *)0x0) {
                    plVar6[1] = 0;
                    plVar6[2] = 0;
                    plVar6[3] = 0;
                    *plVar6 = (longlong)&PTR_FUN_140b67610;
                    plVar8 = plVar6;
                }
                (**(code **)(*plVar8 + 8))(plVar8,plVar1);
                local_38[0] = (**(code **)(*plVar8 + 0x10))(plVar8);
                local_30 = plVar8;
                FUN_140055f80(param_1 + 8,local_28,local_38);
                plVar6 = plVar8;
            }
            uVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
            uVar3 = uVar3 | 0x80000000;
            lVar5 = (**(code **)(*plVar1 + 0x20))(plVar1);
            lVar5 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x10);
            lVar7 = (**(code **)(*plVar1 + 0x20))(plVar1);
            if (lVar5 != *(longlong *)(lVar7 + 8)) {
                do {
                    if ((*(byte *)(*(longlong *)(*(longlong *)(lVar5 + 0x28) + 8) + 0x54) & 4) != 0) {
                        uVar3 = uVar3 | 1 << ((byte)*(undefined4 *)(*(longlong *)(lVar5 + 0x28) + 0x18) & 0x1f);
                    }
                    lVar7 = *(longlong *)(lVar5 + 0x18);
                    if (lVar7 == 0) {
                        lVar7 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == *(longlong *)(lVar7 + 0x18)) {
                            do {
                                lVar5 = lVar7;
                                lVar7 = *(longlong *)(lVar5 + 8);
                            } while (lVar5 == *(longlong *)(lVar7 + 0x18));
                        }
                        if (*(longlong *)(lVar5 + 0x18) != lVar7) {
                            lVar5 = lVar7;
                        }
                    }
                    else {
                        for (lVar2 = *(longlong *)(lVar7 + 0x10); lVar5 = lVar7, lVar2 != 0;
                             lVar2 = *(longlong *)(lVar2 + 0x10)) {
                            lVar7 = lVar2;
                        }
                    }
                    lVar7 = (**(code **)(*plVar1 + 0x20))(plVar1);
                } while (lVar5 != *(longlong *)(lVar7 + 8));
            }
            FUN_140499a20(plVar6,uVar3);
            local_res10[0] = 0;
            local_res10[0] = (**(code **)(*plVar1 + 0x30))(plVar1);
            FUN_1403f4900(DAT_140c65898,0x103,local_res10);
        }
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_14049ac80(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong local_res8;

    lVar1 = DAT_140c65998;
    local_res8 = param_1;
    FUN_1401529e0(DAT_140c65998 + 200,&local_res8);
    if (local_res8 == *(longlong *)(lVar1 + 0xd0)) {
        return 0;
    }
    (**(code **)(**(longlong **)(local_res8 + 0x40) + 0x28))();
    lVar1 = FUN_14034bdd0();
    if (lVar1 == 0) {
        return 0;
    }
    lVar2 = FUN_14018b280(0x360,0);
    if (lVar2 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = FUN_14013feb0(lVar2,param_2);
    }
    FUN_140141600(uVar3,lVar1,0,0);
    return uVar3;
}



undefined4 FUN_14049ad50(longlong *param_1)

{
    undefined4 *puVar1;

    puVar1 = (undefined4 *)(**(code **)(*param_1 + 0x20))();
    return *puVar1;
}



undefined8 FUN_14049ade0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x38);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_2) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 == lVar1) {
        return 0;
    }
    return *(undefined8 *)(local_res8 + 0x28);
}



char ** FUN_14049ae40(longlong param_1,char **param_2,longlong param_3)

{
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8 [8];

    pcVar2 = *(char **)(param_1 + 8);
    pcVar4 = *(char **)(pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *)0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *(ulonglong *)(param_3 + 8) < *(ulonglong *)(pcVar5 + 0x28);
            if (bVar6) {
                pcVar4 = *(char **)(pcVar5 + 0x10);
            }
            else {
                pcVar4 = *(char **)(pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *)0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_14049ae9e;
        if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **)(pcVar5 + 0x18);
        }
        else {
            pcVar3 = *(char **)(pcVar5 + 0x10);
            if (pcVar3 == (char *)0x0) {
                pcVar3 = *(char **)(pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **)(pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **)(pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            }
            else {
                for (pcVar2 = *(char **)(pcVar3 + 0x18); pcVar2 != (char *)0x0;
                     pcVar2 = *(char **)(pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (*(ulonglong *)(param_3 + 8) <= *(ulonglong *)(pcVar3 + 0x28)) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_14049ae9e:
    ppcVar1 = (char **)FUN_14049bcc0(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



undefined8 FUN_14049af50(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x10);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
    if (lVar2 != *(longlong *)(lVar3 + 8)) {
        do {
            if ((*(uint *)(param_1 + 0x10) >> (*(uint *)(*(longlong *)(lVar2 + 0x28) + 0x18) & 0x1f) & 1)
                == 0) {
                return 0;
            }
            lVar3 = *(longlong *)(lVar2 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar2 + 8);
                if (lVar2 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar2 = lVar3;
                        lVar3 = *(longlong *)(lVar2 + 8);
                    } while (lVar2 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar2 + 0x18) != lVar3) {
                    lVar2 = lVar3;
                }
            }
            else {
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar2 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
            lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))();
        } while (lVar2 != *(longlong *)(lVar3 + 8));
    }
    return 1;
}



uint FUN_14049b030(longlong param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (lVar1 == 0) {
        return 0;
    }
    return 1 << ((byte)*(undefined4 *)(lVar1 + 0x18) & 0x1f) & *(uint *)(param_1 + 0x10);
}



uint FUN_14049b070(longlong param_1)

{
    longlong lVar1;

    lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))();
    if (lVar1 == 0) {
        return 0;
    }
    return 1 << ((byte)*(undefined4 *)(lVar1 + 0x18) & 0x1f) & *(uint *)(param_1 + 0x14);
}



void FUN_14049b0b0(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b67680;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    lVar4 = *(longlong *)(param_1[6] + 0x10);
    if (lVar4 != param_1[6]) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[6]);
    }
    if (param_1[7] != 0) {
        lVar4 = *(longlong *)(param_1[6] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    if (param_1[0x13] != 0) {
        lVar4 = *(longlong *)(param_1[0x12] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x11,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0x12] + 0x10) = param_1[0x12];
        *(undefined8 *)(param_1[0x12] + 8) = 0;
        *(undefined8 *)(param_1[0x12] + 0x18) = param_1[0x12];
        param_1[0x13] = 0;
    }
    FUN_14018b900(param_1[0x12],0);
    if (param_1[0xf] != 0) {
        lVar4 = *(longlong *)(param_1[0xe] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0xd,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[0xe] + 0x10) = param_1[0xe];
        *(undefined8 *)(param_1[0xe] + 8) = 0;
        *(undefined8 *)(param_1[0xe] + 0x18) = param_1[0xe];
        param_1[0xf] = 0;
    }
    FUN_14018b900(param_1[0xe],0);
    if (param_1[0xb] != 0) {
        lVar4 = *(longlong *)(param_1[10] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 9,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[10] + 0x10) = param_1[10];
        *(undefined8 *)(param_1[10] + 8) = 0;
        *(undefined8 *)(param_1[10] + 0x18) = param_1[10];
        param_1[0xb] = 0;
    }
    FUN_14018b900(param_1[10],0);
    if (param_1[7] != 0) {
        lVar4 = *(longlong *)(param_1[6] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 5,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[6] + 0x10) = param_1[6];
        *(undefined8 *)(param_1[6] + 8) = 0;
        *(undefined8 *)(param_1[6] + 0x18) = param_1[6];
        param_1[7] = 0;
    }
    FUN_14018b900(param_1[6],0);
    if (param_1[3] != 0) {
        lVar4 = *(longlong *)(param_1[2] + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 1,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(undefined8 *)(param_1[2] + 0x10) = param_1[2];
        *(undefined8 *)(param_1[2] + 8) = 0;
        *(undefined8 *)(param_1[2] + 0x18) = param_1[2];
        param_1[3] = 0;
    }
    FUN_14018b900(param_1[2],0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14049b440(longlong *param_1)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    int iVar6;
    uint *puVar7;
    longlong *plVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong *puVar12;
    longlong *plVar13;
    longlong lVar14;
    ulonglong uVar15;
    longlong lVar16;
    uint uVar17;
    uint local_res18;
    ulonglong local_res20;
    ulonglong local_88 [2];
    uint local_78;
    undefined4 uStack116;
    longlong *local_70;
    uint local_68;
    undefined4 uStack100;
    longlong *local_60;
    undefined local_58 [16];
    undefined local_48 [16];

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64e08 == 0) {
            iVar6 = FUN_1401eb440();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c63d68 + 0x28))();
            }
        }
        else {
            uVar5 = 0;
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_ArchiveArticle_140a692f8);
    }
    local_res18 = 0;
    if (uVar5 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64e08 == 0) && (iVar6 = FUN_1401eb440(), -1 < iVar6)) {
                    puVar7 = (uint *)(**(code **)(*DAT_140c63d68 + 0x20))();
                    goto LAB_14049b509;
                }
            }
            else {
                puVar7 = (uint *)(*DAT_140c63848)(&PTR_u_ArchiveArticle_140a692f8,local_res18,DAT_140c63858)
                        ;
                LAB_14049b509:
                if (puVar7 != (uint *)0x0) {
                    plVar8 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
                    (**(code **)(*plVar8 + 8))(plVar8,puVar7);
                    local_78 = *puVar7;
                    local_70 = plVar8;
                    FUN_140055f80(param_1 + 1,local_58,&local_78);
                    uVar17 = 0;
                    lVar16 = 0x2c;
                    do {
                        lVar9 = (**(code **)(*plVar8 + 0x28))(plVar8);
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c6545c == 0) && (iVar6 = FUN_1401ebcc0(), -1 < iVar6)) {
                                puVar7 = (uint *)(**(code **)(*DAT_140c655f0 + 0x18))();
                                goto LAB_14049b5a6;
                            }
                        }
                        else {
                            puVar7 = (uint *)(*DAT_140c63840)(&PTR_u_ArchiveEntry_140a69368,
                                                              *(undefined4 *)(lVar9 + lVar16),DAT_140c63858);
                            LAB_14049b5a6:
                            if (puVar7 != (uint *)0x0) {
                                uVar2 = param_1[6];
                                uVar15 = uVar2;
                                if (*(ulonglong *)(uVar2 + 8) != 0) {
                                    uVar10 = *(ulonglong *)(uVar2 + 8);
                                    do {
                                        if (*(uint *)(uVar10 + 0x20) < *puVar7) {
                                            uVar11 = *(ulonglong *)(uVar10 + 0x18);
                                        }
                                        else {
                                            uVar11 = *(ulonglong *)(uVar10 + 0x10);
                                            uVar15 = uVar10;
                                        }
                                        uVar10 = uVar11;
                                    } while (uVar11 != 0);
                                }
                                if ((uVar15 == uVar2) || (*puVar7 < *(uint *)(uVar15 + 0x20))) {
                                    local_88[0] = uVar2;
                                    puVar12 = local_88;
                                }
                                else {
                                    puVar12 = &local_res20;
                                    local_res20 = uVar15;
                                }
                                if (*puVar12 == uVar2) {
                                    plVar13 = (longlong *)FUN_14018b280(0x20);
                                    if (plVar13 == (longlong *)0x0) {
                                        plVar13 = (longlong *)0x0;
                                    }
                                    else {
                                        *plVar13 = (longlong)&PTR_FUN_140b676d8;
                                    }
                                    (**(code **)(*plVar13 + 8))(plVar13,plVar8,puVar7,uVar17);
                                    local_68 = *puVar7;
                                    local_60 = plVar13;
                                    FUN_140055f80(param_1 + 5,local_48,&local_68);
                                }
                                FUN_14049bbc0(plVar8);
                            }
                        }
                        uVar17 = uVar17 + 1;
                        lVar16 = lVar16 + 4;
                    } while (uVar17 < 0x10);
                }
            }
            local_res18 = local_res18 + 1;
        } while (local_res18 < uVar5);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c6545c == 0) {
            iVar6 = FUN_1401ebcc0();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c655f0 + 0x28))();
            }
        }
        else {
            uVar5 = 0;
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_ArchiveEntry_140a69368);
    }
    uVar17 = 0;
    if (uVar5 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c6545c == 0) && (iVar6 = FUN_1401ebcc0(), -1 < iVar6)) {
                    puVar7 = (uint *)(**(code **)(*DAT_140c655f0 + 0x20))();
                    goto LAB_14049b711;
                }
            }
            else {
                puVar7 = (uint *)(*DAT_140c63848)(&PTR_u_ArchiveEntry_140a69368,uVar17,DAT_140c63858);
                LAB_14049b711:
                if (puVar7 != (uint *)0x0) {
                    lVar16 = *(longlong *)(param_1[6] + 8);
                    while (lVar16 != 0) {
                        if (*(uint *)(lVar16 + 0x20) < *puVar7) {
                            lVar16 = *(longlong *)(lVar16 + 0x18);
                        }
                        else {
                            lVar16 = *(longlong *)(lVar16 + 0x10);
                        }
                    }
                }
            }
            uVar17 = uVar17 + 1;
        } while (uVar17 < uVar5);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64380 == 0) {
            iVar6 = FUN_1401ec100();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c64eb0 + 0x28))();
            }
        }
        else {
            uVar5 = 0;
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_ArchiveEntryUnlockRule_140a693a0);
    }
    uVar17 = 0;
    if (uVar5 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64380 == 0) && (iVar6 = FUN_1401ec100(), -1 < iVar6)) {
                    lVar16 = (**(code **)(*DAT_140c64eb0 + 0x20))();
                    goto LAB_14049b7eb;
                }
            }
            else {
                lVar16 = (*DAT_140c63848)(&PTR_u_ArchiveEntryUnlockRule_140a693a0,uVar17,DAT_140c63858);
                LAB_14049b7eb:
                if (lVar16 != 0) {
                    puVar7 = (uint *)(lVar16 + 0x10);
                    lVar9 = 6;
                    do {
                        uVar1 = *puVar7;
                        if (uVar1 != 0) {
                            iVar6 = *(int *)(lVar16 + 8);
                            if (iVar6 == 0) {
                                lVar14 = param_1[10];
                                local_88[0] = local_88[0] & 0xffffffff00000000 | (ulonglong)uVar1;
                                lVar4 = lVar14;
                                lVar3 = *(longlong *)(lVar14 + 8);
                                while (lVar3 != 0) {
                                    lVar4 = lVar3;
                                    if (uVar1 < *(uint *)(lVar3 + 0x20)) {
                                        lVar3 = *(longlong *)(lVar3 + 0x10);
                                    }
                                    else {
                                        lVar3 = *(longlong *)(lVar3 + 0x18);
                                    }
                                }
                                if ((lVar4 == lVar14) || (uVar1 < *(uint *)(lVar4 + 0x20))) {
                                    lVar14 = FUN_14018b280(0x30);
                                    if ((ulonglong *)(lVar14 + 0x20) != (ulonglong *)0x0) {
                                        *(ulonglong *)(lVar14 + 0x20) = local_88[0];
                                        *(longlong *)(lVar14 + 0x28) = lVar16;
                                    }
                                    *(longlong *)(lVar4 + 0x10) = lVar14;
                                    lVar3 = param_1[10];
                                    if (lVar4 == lVar3) {
                                        *(longlong *)(lVar3 + 8) = lVar14;
                                        *(longlong *)(param_1[10] + 0x18) = lVar14;
                                    }
                                    else if (lVar4 == *(longlong *)(lVar3 + 0x10)) {
                                        *(longlong *)(lVar3 + 0x10) = lVar14;
                                    }
                                }
                                else {
                                    lVar14 = FUN_14018b280(0x30,0);
                                    if ((ulonglong *)(lVar14 + 0x20) != (ulonglong *)0x0) {
                                        *(ulonglong *)(lVar14 + 0x20) = local_88[0];
                                        *(longlong *)(lVar14 + 0x28) = lVar16;
                                    }
                                    *(longlong *)(lVar4 + 0x18) = lVar14;
                                    if (lVar4 == *(longlong *)(param_1[10] + 0x18)) {
                                        *(longlong *)(param_1[10] + 0x18) = lVar14;
                                    }
                                }
                                *(longlong *)(lVar14 + 8) = lVar4;
                                *(undefined8 *)(lVar14 + 0x10) = 0;
                                *(undefined8 *)(lVar14 + 0x18) = 0;
                                FUN_1400081c0();
                                param_1[0xb] = param_1[0xb] + 1;
                            }
                            else if (iVar6 == 1) {
                                lVar14 = param_1[0xe];
                                lVar4 = lVar14;
                                lVar3 = *(longlong *)(lVar14 + 8);
                                while (lVar3 != 0) {
                                    lVar4 = lVar3;
                                    if (uVar1 < *(uint *)(lVar3 + 0x20)) {
                                        lVar3 = *(longlong *)(lVar3 + 0x10);
                                    }
                                    else {
                                        lVar3 = *(longlong *)(lVar3 + 0x18);
                                    }
                                }
                                local_78 = uVar1;
                                if ((lVar4 == lVar14) || (uVar1 < *(uint *)(lVar4 + 0x20))) {
                                    lVar14 = FUN_14018b280(0x30);
                                    if ((undefined8 *)(lVar14 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar14 + 0x20) = CONCAT44(uStack116,local_78);
                                        *(longlong *)(lVar14 + 0x28) = lVar16;
                                    }
                                    *(longlong *)(lVar4 + 0x10) = lVar14;
                                    lVar3 = param_1[0xe];
                                    if (lVar4 == lVar3) {
                                        *(longlong *)(lVar3 + 8) = lVar14;
                                        *(longlong *)(param_1[0xe] + 0x18) = lVar14;
                                    }
                                    else if (lVar4 == *(longlong *)(lVar3 + 0x10)) {
                                        *(longlong *)(lVar3 + 0x10) = lVar14;
                                    }
                                }
                                else {
                                    lVar14 = FUN_14018b280(0x30,0);
                                    if ((undefined8 *)(lVar14 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar14 + 0x20) = CONCAT44(uStack116,local_78);
                                        *(longlong *)(lVar14 + 0x28) = lVar16;
                                    }
                                    *(longlong *)(lVar4 + 0x18) = lVar14;
                                    if (lVar4 == *(longlong *)(param_1[0xe] + 0x18)) {
                                        *(longlong *)(param_1[0xe] + 0x18) = lVar14;
                                    }
                                }
                                *(longlong *)(lVar14 + 8) = lVar4;
                                *(undefined8 *)(lVar14 + 0x10) = 0;
                                *(undefined8 *)(lVar14 + 0x18) = 0;
                                FUN_1400081c0();
                                param_1[0xf] = param_1[0xf] + 1;
                            }
                            else if (iVar6 == 2) {
                                lVar14 = param_1[0x12];
                                lVar4 = lVar14;
                                lVar3 = *(longlong *)(lVar14 + 8);
                                while (lVar3 != 0) {
                                    lVar4 = lVar3;
                                    if (uVar1 < *(uint *)(lVar3 + 0x20)) {
                                        lVar3 = *(longlong *)(lVar3 + 0x10);
                                    }
                                    else {
                                        lVar3 = *(longlong *)(lVar3 + 0x18);
                                    }
                                }
                                local_68 = uVar1;
                                if ((lVar4 == lVar14) || (uVar1 < *(uint *)(lVar4 + 0x20))) {
                                    lVar14 = FUN_14018b280(0x30);
                                    if ((undefined8 *)(lVar14 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar14 + 0x20) = CONCAT44(uStack100,local_68);
                                        *(longlong *)(lVar14 + 0x28) = lVar16;
                                    }
                                    *(longlong *)(lVar4 + 0x10) = lVar14;
                                    lVar3 = param_1[0x12];
                                    if (lVar4 == lVar3) {
                                        *(longlong *)(lVar3 + 8) = lVar14;
                                        *(longlong *)(param_1[0x12] + 0x18) = lVar14;
                                    }
                                    else if (lVar4 == *(longlong *)(lVar3 + 0x10)) {
                                        *(longlong *)(lVar3 + 0x10) = lVar14;
                                    }
                                }
                                else {
                                    lVar14 = FUN_14018b280(0x30,0);
                                    if ((undefined8 *)(lVar14 + 0x20) != (undefined8 *)0x0) {
                                        *(undefined8 *)(lVar14 + 0x20) = CONCAT44(uStack100,local_68);
                                        *(longlong *)(lVar14 + 0x28) = lVar16;
                                    }
                                    *(longlong *)(lVar4 + 0x18) = lVar14;
                                    if (lVar4 == *(longlong *)(param_1[0x12] + 0x18)) {
                                        *(longlong *)(param_1[0x12] + 0x18) = lVar14;
                                    }
                                }
                                *(longlong *)(lVar14 + 8) = lVar4;
                                *(undefined8 *)(lVar14 + 0x10) = 0;
                                *(undefined8 *)(lVar14 + 0x18) = 0;
                                FUN_1400081c0();
                                param_1[0x13] = param_1[0x13] + 1;
                            }
                        }
                        puVar7 = puVar7 + 1;
                        lVar9 = lVar9 + -1;
                    } while (lVar9 != 0);
                }
            }
            uVar17 = uVar17 + 1;
        } while (uVar17 < uVar5);
    }
    return 0;
}



void FUN_14049bb00(undefined8 *param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    *param_1 = &PTR_FUN_140b67678;
    lVar4 = *(longlong *)(param_1[2] + 0x10);
    if (lVar4 != param_1[2]) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x28);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
            }
            lVar3 = *(longlong *)(lVar4 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar4 = lVar3;
                        lVar3 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar3) {
                    lVar4 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar4 != param_1[2]);
    }
    FUN_140008410(param_1 + 1);
    FUN_140008410(param_1 + 1);
    FUN_14018b900(param_1[2],0);
    return;
}



void FUN_14049bbc0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;
    longlong local_res10;
    uint local_18 [2];
    undefined8 local_10;

    lVar1 = *(longlong *)(param_1 + 0x18);
    local_18[0] = **(uint **)(param_2 + 8);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < local_18[0]) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (local_18[0] < *(uint *)(local_res8 + 0x20))) {
        local_10 = 0;
        FUN_140055c60(param_1 + 0x10,&local_res10,&local_res8,local_18);
        local_res8 = local_res10;
    }
    *(longlong *)(local_res8 + 0x28) = param_2;
    lVar1 = *(longlong *)(param_1 + 0x38);
    local_18[0] = *(uint *)(param_2 + 0x18);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < local_18[0]) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (local_18[0] < *(uint *)(local_res8 + 0x20))) {
        local_10 = 0;
        FUN_140055c60(param_1 + 0x30,&local_res10,&local_res8,local_18);
        local_res8 = local_res10;
    }
    *(longlong *)(local_res8 + 0x28) = param_2;
    return;
}



longlong *
FUN_14049bcc0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        ((ulonglong)param_5[1] < *(ulonglong *)(param_4 + 0x28))) {
        lVar2 = FUN_14018b280(0x30);
        if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20) = *param_5;
            *(undefined8 *)(lVar2 + 0x28) = param_5[1];
        }
        *(longlong *)(param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *)(param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *)(lVar1 + 8) = lVar2;
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
        else if (param_4 == *(longlong *)(lVar1 + 0x10)) {
            *(longlong *)(lVar1 + 0x10) = lVar2;
        }
    }
    else {
        lVar2 = FUN_14018b280(0x30);
        if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20) = *param_5;
            *(undefined8 *)(lVar2 + 0x28) = param_5[1];
        }
        *(longlong *)(param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *)(lVar2 + 8) = param_4;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}



undefined8 FUN_14049bdc0(undefined4 param_1)

{
    switch(param_1) {
        case 7:
            return 1;
        case 8:
            return 2;
        case 9:
            return 4;
        case 10:
            return 8;
        case 0xb:
            return 0x10;
        case 0xc:
            return 0x20;
        case 0xd:
            return 0x40;
        default:
            return 0;
    }
}



int FUN_14049be30(void)

{
    int iVar1;
    longlong *plVar2;

    if (DAT_140c659a0 != (longlong *)0x0) {
        return 0;
    }
    plVar2 = (longlong *)FUN_14018b280(0x78);
    if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)0x0;
    }
    else {
        FUN_1404a1be0(plVar2);
        *plVar2 = (longlong)&PTR_FUN_140b67740;
    }
    iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
    if (iVar1 < 0) {
        (**(code **)*plVar2)(plVar2,1);
        return iVar1;
    }
    DAT_140c659a0 = plVar2;
    return 0;
}



undefined8 * FUN_14049bec0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b67740;
    FUN_1404a5590();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8
FUN_14049bf10(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              uint *param_5,undefined4 param_6)

{
    undefined8 uVar1;
    longlong local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    if ((param_2 == 0) && (param_2 = *(longlong *)(DAT_140c65898 + 0x78), param_2 == 0)) {
        return 0;
    }
    local_28 = 8;
    local_18 = 0xffffffff;
    local_38 = 0;
    local_30 = 0;
    local_20 = 0;
    local_1c = param_6;
    if (param_5 != (uint *)0x0) {
        local_28 = (ulonglong)*param_5;
    }
    local_48 = param_2;
    local_40 = param_4;
    uVar1 = FUN_1404a1ca0(param_1,&local_48);
    return uVar1;
}



undefined8 FUN_14049bf90(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
    undefined8 uVar1;
    longlong local_48;
    undefined8 local_40;
    longlong local_38;
    longlong local_30;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    if ((param_2 == 0) && (param_2 = *(longlong *)(DAT_140c65898 + 0x78), param_2 == 0)) {
        return 0;
    }
    local_30 = *(longlong *)(param_4 + 0x48);
    local_38 = *(longlong *)(param_4 + 0x40);
    local_40 = 0;
    local_28 = 8;
    local_20 = 0;
    local_18 = 0xffffffff;
    if (local_30 == 0) {
        local_30 = local_38 + 8;
    }
    local_1c = 0;
    local_48 = param_2;
    uVar1 = FUN_1404a1ca0(DAT_140c659a0,&local_48);
    return uVar1;
}



undefined8 FUN_14049c010(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
    undefined8 uVar1;
    longlong local_48;
    undefined8 local_40;
    longlong local_38;
    longlong local_30;
    undefined8 local_28;
    ulonglong local_20;
    undefined4 local_18;

    uVar1 = DAT_140c659a0;
    if ((param_2 == 0) && (param_2 = *(longlong *)(DAT_140c65898 + 0x78), param_2 == 0)) {
        return 0;
    }
    local_28 = 8;
    local_18 = 0xffffffff;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    local_20 = 0;
    local_48 = param_2;
    local_38 = FUN_1400b5df0(DAT_140c658f0,param_4,0);
    local_30 = local_38 + 8;
    local_20 = local_20 & 0xffffffff;
    uVar1 = FUN_1404a1ca0(uVar1,&local_48,param_3);
    return uVar1;
}



undefined8 FUN_14049c0c0(longlong *param_1)

{
    int iVar1;

    iVar1 = (**(code **)(*param_1 + 0x18))();
    if (iVar1 != 0) {
        return 1;
    }
    FUN_14049c1a0();
    return 0;
}



undefined8
FUN_14049c120(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              uint *param_5,undefined4 param_6)

{
    undefined8 uVar1;
    longlong local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    ulonglong local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    if ((param_2 == 0) && (param_2 = *(longlong *)(DAT_140c65898 + 0x78), param_2 == 0)) {
        return 0;
    }
    local_28 = 8;
    local_18 = 0xffffffff;
    local_38 = 0;
    local_30 = 0;
    local_20 = 0;
    local_1c = param_6;
    if (param_5 != (uint *)0x0) {
        local_28 = (ulonglong)*param_5;
    }
    local_48 = param_2;
    local_40 = param_4;
    uVar1 = FUN_1404a1e10(param_1,&local_48);
    return uVar1;
}



// WARNING: Removing unreachable block (ram,0x00014049c29f)

undefined8 FUN_14049c1a0(undefined8 param_1,int param_2,undefined4 param_3,int param_4)

{
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    undefined2 *puVar4;
    short *psVar5;
    longlong lVar6;
    undefined *puVar7;
    short *psVar8;
    undefined2 *puVar9;
    undefined2 *puVar10;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined local_38 [8];
    longlong local_30;

    if (param_2 == 0) {
        return 0x80004005;
    }
    lVar3 = FUN_1402259c0(param_2);
    if (lVar3 != 0) {
        puVar4 = (undefined2 *)FUN_14018b280(2);
        local_40 = puVar4 + 1;
        local_50 = puVar4;
        FUN_1407db590(puVar4,&DAT_1409f0724,0);
        lVar6 = 0;
        if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0;
        }
        puVar9 = puVar4;
        local_48 = puVar4;
        if (*(int *)(lVar3 + 0x38) != 0) {
            psVar5 = (short *)FUN_14034bdd0();
            psVar8 = (short *)&DAT_1409f073c;
            if (psVar5 != (short *)0x0) {
                psVar8 = psVar5;
            }
            sVar2 = *psVar8;
            lVar3 = lVar6;
            while (sVar2 != 0) {
                lVar3 = lVar3 + 1;
                sVar2 = psVar8[lVar3];
            }
            if (lVar3 * 2 >> 1 == 0) {
                FUN_1407db590(puVar4,psVar8,0);
            }
            else {
                FUN_14001c310(local_58);
                puVar4 = local_48;
                puVar9 = local_50;
            }
        }
        if (((((longlong)puVar4 - (longlong)puVar9 & 0xfffffffffffffffeU) == 0) &&
             (lVar3 = FUN_140225e00(param_3), lVar3 != 0)) && (*(int *)(lVar3 + 4) != 0)) {
            psVar5 = (short *)FUN_14034bdd0();
            psVar8 = (short *)&DAT_1409f0684;
            if (psVar5 != (short *)0x0) {
                psVar8 = psVar5;
            }
            sVar2 = *psVar8;
            lVar3 = lVar6;
            while (sVar2 != 0) {
                lVar3 = lVar3 + 1;
                sVar2 = psVar8[lVar3];
            }
            if (lVar3 * 2 >> 1 == 0) {
                FUN_1407db590(puVar9,psVar8,0);
                if (puVar9 != puVar4) {
                    FUN_1407db590(puVar9,puVar4,2);
                }
            }
            else {
                FUN_14001c310(local_58);
                puVar9 = local_50;
            }
        }
        if (param_4 == 0) {
            psVar8 = &DAT_1409f06e4;
        }
        else {
            psVar5 = (short *)FUN_14034bdd0();
            psVar8 = (short *)&DAT_1409f069c;
            if (psVar5 != (short *)0x0) {
                psVar8 = psVar5;
            }
        }
        local_50 = (undefined2 *)0x0;
        local_40 = (undefined2 *)0x0;
        sVar2 = *psVar8;
        while (sVar2 != 0) {
            lVar6 = lVar6 + 1;
            sVar2 = psVar8[lVar6];
        }
        lVar3 = lVar6 * 2 >> 1;
        uVar1 = lVar3 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            local_50 = (undefined2 *)FUN_14018b280(uVar1 * 2,0);
            local_40 = local_50 + uVar1;
        }
        puVar4 = local_50;
        FUN_1407db590(local_50,psVar8,lVar3 * 2);
        local_48 = puVar4 + lVar3;
        if (local_48 != (undefined2 *)0x0) {
            *local_48 = 0;
        }
        puVar10 = puVar9;
        if (((longlong)local_48 - (longlong)puVar4 & 0xfffffffffffffffeU) != 0) {
            puVar7 = (undefined *)FUN_14018efa0(local_38,puVar4,puVar9);
            if (puVar7 != local_58) {
                FUN_14001c480(local_58,*(undefined8 *)(puVar7 + 8),*(undefined8 *)(puVar7 + 0x10));
                puVar4 = local_50;
            }
            puVar10 = puVar4;
            if (local_30 != 0) {
                FUN_14018b900(local_30,0);
            }
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PrereqFailureMessage",&DAT_1409e958c,
                      puVar10);
        if (puVar4 != (undefined2 *)0x0) {
            FUN_14018b900(puVar4,0);
        }
        if (puVar9 != (undefined2 *)0x0) {
            FUN_14018b900(puVar9,0);
        }
        return 0;
    }
    return 0x80004005;
}



bool FUN_14049c620(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
    int iVar1;
    bool bVar2;

    if (param_2 == 0) {
        return false;
    }
    if (*(longlong **)(param_2 + 0x118) == (longlong *)0x0) {
        iVar1 = 0;
    }
    else {
        iVar1 = (**(code **)(**(longlong **)(param_2 + 0x118) + 0x18))();
    }
    bVar2 = iVar1 == param_4;
    if ((param_3 != 1) && (bVar2 = false, param_3 == 2)) {
        return iVar1 != param_4;
    }
    return bVar2;
}



bool FUN_14049c6a0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
    int iVar1;
    bool bVar2;

    if (param_2 == 0) {
        return false;
    }
    if (*(longlong **)(param_2 + 0x110) == (longlong *)0x0) {
        iVar1 = 0;
    }
    else {
        iVar1 = (**(code **)(**(longlong **)(param_2 + 0x110) + 0x18))();
    }
    bVar2 = iVar1 == param_4;
    if ((param_3 != 1) && (bVar2 = false, param_3 == 2)) {
        return iVar1 != param_4;
    }
    return bVar2;
}



bool FUN_14049c720(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    bool bVar1;
    int iVar2;
    longlong lVar3;
    bool bVar4;

    if (param_2 == 0) {
        return false;
    }
    if (*(longlong **)(param_2 + 0x118) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0x118) + 0x18))();
        lVar3 = FUN_140717160();
        if (lVar3 != 0) {
            iVar2 = FUN_1407176b0(lVar3,param_4);
            bVar1 = true;
            bVar4 = true;
            if (iVar2 != 0) goto LAB_14049c77a;
        }
    }
    bVar1 = false;
    bVar4 = false;
    LAB_14049c77a:
    if ((param_3 != 1) && (bVar4 = false, param_3 == 2)) {
        return !bVar1;
    }
    return bVar4;
}



bool FUN_14049c880(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
    longlong *plVar1;
    int *piVar2;
    bool bVar3;
    bool bVar4;

    if (param_2 == 0) {
        return false;
    }
    plVar1 = *(longlong **)(DAT_140c65898 + 0x7188);
    bVar4 = false;
    if (plVar1 != (longlong *)0x0) {
        if (param_4 == 0) {
            bVar4 = true;
        }
        else {
            piVar2 = (int *)(**(code **)(*plVar1 + 0x68))(plVar1);
            bVar4 = *piVar2 == param_4;
        }
    }
    bVar3 = bVar4;
    if ((param_3 != 1) && (bVar3 = false, param_3 == 2)) {
        return bVar4 == false;
    }
    return bVar3;
}



bool FUN_14049ca70(undefined8 param_1,longlong param_2,int param_3)

{
    longlong lVar1;
    bool bVar2;

    if ((param_2 == 0) || ((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17))))
    {
        return false;
    }
    lVar1 = FUN_1401ed460(*(undefined4 *)(DAT_140c65898 + 0x1694));
    bVar2 = lVar1 != 0;
    if ((param_3 != 1) && (bVar2 = false, param_3 == 2)) {
        return lVar1 == 0;
    }
    return bVar2;
}



uint FUN_14049cbb0(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5)

{
    int iVar1;
    longlong *plVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;

    plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_2 + 0xc0));
    if ((plVar2 != (longlong *)0x0) && (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 != 0)) {
        plVar2 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_2 + 0xc0));
        if (((plVar2 == (longlong *)0x0) || (iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2), iVar1 == 0))
            || ((int *)plVar2[3] == (int *)0x0)) {
            if ((param_3 - 1U == 0) || (uVar4 = param_3 - 1U, param_3 != 2)) {
                uVar4 = 0;
            }
        }
        else {
            uVar3 = 0;
            if ((param_4 == 0) || (uVar5 = uVar3, *(int *)plVar2[3] == param_4)) {
                uVar5 = 1;
            }
            if ((param_5 != -1) && (*(int *)(param_2 + 200) != param_5)) {
                uVar5 = uVar3;
            }
            uVar4 = uVar5;
            if ((param_3 != 1) && (uVar4 = uVar3, param_3 == 2)) {
                uVar4 = (uint)(uVar5 == 0);
            }
        }
        return uVar4;
    }
    if ((param_3 != 1) && (param_3 == 2)) {
        return 1;
    }
    return 0;
}



uint FUN_14049ccc0(undefined8 param_1,longlong param_2,int param_3,int param_4,int param_5)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;

    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_2 + 0xc0));
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x80) == 7)) {
        plVar3 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_2 + 0xc0));
        if (((plVar3 == (longlong *)0x0) || (iVar1 = (**(code **)(*plVar3 + 0x20))(plVar3), iVar1 == 0))
            || ((int *)plVar3[3] == (int *)0x0)) {
            if ((param_3 - 1U == 0) || (uVar5 = param_3 - 1U, param_3 != 2)) {
                uVar5 = 0;
            }
        }
        else {
            uVar4 = 0;
            if ((param_4 == 0) || (uVar6 = uVar4, *(int *)plVar3[3] == param_4)) {
                uVar6 = 1;
            }
            if ((param_5 != -1) && (*(int *)(param_2 + 200) != param_5)) {
                uVar6 = uVar4;
            }
            uVar5 = uVar6;
            if ((param_3 != 1) && (uVar5 = uVar4, param_3 == 2)) {
                uVar5 = (uint)(uVar6 == 0);
            }
        }
        return uVar5;
    }
    if ((param_3 != 1) && (param_3 == 2)) {
        return 1;
    }
    return 0;
}



bool FUN_14049cdd0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
    longlong lVar1;
    bool bVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    bool bVar6;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 == 0) {
        return false;
    }
    lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar1 + 0xc0));
    if ((((lVar4 == 0) || (*(int *)(lVar4 + 0x80) != 9)) ||
         (plVar5 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar1 + 0xc0)),
                 plVar5 == (longlong *)0x0)) ||
        ((iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5), iVar3 == 0 || ((int *)plVar5[3] == (int *)0x0)
        ))) {
        if ((param_3 != 1) && (param_3 == 2)) {
            return true;
        }
    }
    else {
        bVar2 = false;
        bVar6 = false;
        if ((param_4 == 0) || (*(int *)plVar5[3] == param_4)) {
            bVar2 = true;
            bVar6 = true;
        }
        if (param_3 == 1) {
            return bVar6;
        }
        if (param_3 == 2) {
            return !bVar2;
        }
    }
    return false;
}



ulonglong FUN_14049ced0(undefined8 param_1,longlong param_2,int param_3)

{
    uint uVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;

    if (param_2 == *(longlong *)(DAT_140c65898 + 0x78)) {
        uVar5 = 0;
        plVar2 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x16f0);
        uVar6 = 1;
        if ((plVar2 == (longlong *)0x0) ||
            (iVar3 = (**(code **)(*plVar2 + 0x78))(), uVar8 = uVar6, iVar3 != 0)) {
            uVar8 = 0;
        }
        uVar7 = uVar5;
        lVar4 = FUN_14043ed60();
        iVar3 = (int)uVar7;
        while (lVar4 != 0) {
            uVar1 = *(uint *)(*(longlong *)(lVar4 + 8) + 0x1c);
            if ((uVar1 & 0x10) != 0) goto LAB_14049cf77;
            lVar4 = *(longlong *)(lVar4 + 0x10);
            uVar7 = uVar7 & 0xffffffff;
            if ((uVar1 >> 8 & 1) != 0) {
                uVar7 = 1;
            }
            iVar3 = (int)uVar7;
        }
        if ((uVar8 != 0) && (iVar3 == 0)) {
            LAB_14049cf77:
            uVar6 = 0;
        }
        if (param_3 == 1) {
            uVar5 = (ulonglong)uVar6;
        }
        else if (param_3 == 2) {
            uVar5 = (ulonglong)(uVar6 == 0);
        }
    }
    else if ((param_3 - 1U == 0) || (param_3 != 2)) {
        uVar5 = 0;
    }
    else {
        uVar5 = (ulonglong)(param_3 - 1U);
    }
    return uVar5;
}



ulonglong FUN_14049cfb0(undefined8 param_1,longlong param_2,int param_3)

{
    uint uVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;

    if (param_2 == *(longlong *)(DAT_140c65898 + 0x78)) {
        uVar5 = 0;
        plVar2 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x16f0);
        uVar6 = 1;
        if ((plVar2 == (longlong *)0x0) ||
            (iVar3 = (**(code **)(*plVar2 + 0x78))(), uVar8 = uVar6, iVar3 != 0)) {
            uVar8 = 0;
        }
        uVar7 = uVar5;
        lVar4 = FUN_14043ed60();
        iVar3 = (int)uVar7;
        while (lVar4 != 0) {
            uVar1 = *(uint *)(*(longlong *)(lVar4 + 8) + 0x1c);
            if ((uVar1 & 0x40) != 0) goto LAB_14049d057;
            lVar4 = *(longlong *)(lVar4 + 0x10);
            uVar7 = uVar7 & 0xffffffff;
            if ((uVar1 >> 9 & 1) != 0) {
                uVar7 = 1;
            }
            iVar3 = (int)uVar7;
        }
        if ((uVar8 != 0) && (iVar3 == 0)) {
            LAB_14049d057:
            uVar6 = 0;
        }
        if (param_3 == 1) {
            uVar5 = (ulonglong)uVar6;
        }
        else if (param_3 == 2) {
            uVar5 = (ulonglong)(uVar6 == 0);
        }
    }
    else if ((param_3 - 1U == 0) || (param_3 != 2)) {
        uVar5 = 0;
    }
    else {
        uVar5 = (ulonglong)(param_3 - 1U);
    }
    return uVar5;
}



ulonglong FUN_14049d090(undefined8 param_1,longlong param_2,int param_3)

{
    uint uVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    uint uVar8;

    if (param_2 == *(longlong *)(DAT_140c65898 + 0x78)) {
        uVar5 = 0;
        plVar2 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x16f0);
        uVar6 = 1;
        if ((plVar2 == (longlong *)0x0) ||
            (iVar3 = (**(code **)(*plVar2 + 0x78))(), uVar8 = uVar6, iVar3 != 0)) {
            uVar8 = 0;
        }
        uVar7 = uVar5;
        lVar4 = FUN_14043ed60();
        iVar3 = (int)uVar7;
        while (lVar4 != 0) {
            uVar1 = *(uint *)(*(longlong *)(lVar4 + 8) + 0x1c);
            if ((char)uVar1 < '\0') goto LAB_14049d136;
            lVar4 = *(longlong *)(lVar4 + 0x10);
            uVar7 = uVar7 & 0xffffffff;
            if ((uVar1 >> 10 & 1) != 0) {
                uVar7 = 1;
            }
            iVar3 = (int)uVar7;
        }
        if ((uVar8 != 0) && (iVar3 == 0)) {
            LAB_14049d136:
            uVar6 = 0;
        }
        if (param_3 == 1) {
            uVar5 = (ulonglong)uVar6;
        }
        else if (param_3 == 2) {
            uVar5 = (ulonglong)(uVar6 == 0);
        }
    }
    else if ((param_3 - 1U == 0) || (param_3 != 2)) {
        uVar5 = 0;
    }
    else {
        uVar5 = (ulonglong)(param_3 - 1U);
    }
    return uVar5;
}



ulonglong FUN_14049d1c0(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    uVar2 = FUN_1403ac590(DAT_140c65898 + 0xa0,1,param_4);
    iVar1 = (int)uVar2;
    if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
        uVar2 = (ulonglong)(iVar1 == 0);
    }
    return uVar2;
}



ulonglong FUN_14049d200(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    uVar2 = FUN_1403ac590(DAT_140c65898 + 0xa0,0x303,param_4);
    iVar1 = (int)uVar2;
    if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
        uVar2 = (ulonglong)(iVar1 == 0);
    }
    return uVar2;
}



ulonglong FUN_14049d240(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    uVar2 = FUN_1403ac590(DAT_140c65898 + 0xa0,0x707,param_4);
    iVar1 = (int)uVar2;
    if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
        uVar2 = (ulonglong)(iVar1 == 0);
    }
    return uVar2;
}



void FUN_14049d280(void)

{
    undefined4 in_R9D;

    FUN_1403ac840(DAT_140c65898 + 0xa0,0x303,in_R9D);
    FUN_1404a2090();
    return;
}



bool FUN_14049d2c0(undefined8 param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    uint uVar2;
    byte bVar3;
    bool bVar4;
    undefined4 local_18;
    uint local_14;

    lVar1 = FUN_14020e7a0();
    if (lVar1 != 0) {
        uVar2 = *(uint *)(lVar1 + 0x10);
        if (uVar2 == 0) {
            bVar3 = 0xff;
        }
        else {
            bVar3 = 0;
            if ((short)uVar2 == 0) {
                bVar3 = 0x10;
                uVar2 = uVar2 >> 0x10;
            }
            if ((char)uVar2 == '\0') {
                bVar3 = bVar3 + 8;
                uVar2 = uVar2 >> 8;
            }
            if ((uVar2 & 0xf) == 0) {
                bVar3 = bVar3 + 4;
                uVar2 = uVar2 >> 4;
            }
            if ((uVar2 & 3) == 0) {
                bVar3 = bVar3 + 2;
                uVar2 = uVar2 >> 2;
            }
            if ((uVar2 & 1) == 0) {
                bVar3 = bVar3 + 1;
            }
        }
        local_14 = (uint)bVar3;
        if (local_14 < 0x1f) {
            local_18 = 0;
            lVar1 = FUN_1403ac780(DAT_140c65898 + 0xa0,&local_18);
            bVar4 = lVar1 != 0;
            if ((param_3 != 1) && (bVar4 = false, param_3 == 2)) {
                return lVar1 == 0;
            }
            return bVar4;
        }
    }
    if ((param_3 != 1) && (param_3 == 2)) {
        return true;
    }
    return false;
}



bool FUN_14049d3f0(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
    int iVar1;
    longlong lVar2;
    undefined4 uVar3;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        uVar3 = 0x17;
    }
    else {
        uVar3 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xdc);
    }
    lVar2 = FUN_1401f31e0(uVar3);
    if (lVar2 == 0) {
        iVar1 = 7;
    }
    else {
        iVar1 = *(int *)(lVar2 + 0x18);
    }
    if (param_3 != 1) {
        return param_3 == 2 && iVar1 != param_4;
    }
    return iVar1 == param_4;
}



bool FUN_14049d4f0(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
    longlong *plVar1;
    longlong *plVar2;

    if (param_4 == 0) {
        if ((param_3 != 1) && (param_3 == 2)) {
            return true;
        }
        return false;
    }
    plVar1 = (longlong *)FUN_1403dec00(DAT_140c65898);
    plVar2 = (longlong *)FUN_1403dec00(DAT_140c65898,param_4);
    if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) {
        if ((param_3 != 1) && (param_3 == 2)) {
            return true;
        }
    }
    else {
        if (param_3 == 1) {
            return *plVar1 == *plVar2;
        }
        if (param_3 == 2) {
            return *plVar1 != *plVar2;
        }
    }
    return false;
}



undefined8
FUN_14049d5b0(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,uint param_5)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    bool bVar4;

    lVar3 = FUN_140239cc0();
    if (lVar3 != 0) {
        piVar2 = *(int **)(DAT_140c65898 + 0x7178);
        if (param_5 == 0) {
            param_5 = DAT_140c6664c;
        }
        for (; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 0x1a)) {
            if (*(longlong *)(piVar2 + 10) != 0) {
                iVar1 = *piVar2;
                if (iVar1 == 4) {
                    bVar4 = (*(byte *)(lVar3 + 4) & 0x20) == 0;
                }
                else if (iVar1 == 5) {
                    bVar4 = (*(byte *)(lVar3 + 4) & 0x40) == 0;
                }
                else if (iVar1 == 6) {
                    bVar4 = (*(uint *)(lVar3 + 4) & 0x100) == 0;
                }
                else if (iVar1 == 7) {
                    bVar4 = (*(byte *)(lVar3 + 4) & 0x80) == 0;
                }
                else {
                    if (iVar1 != 8) goto LAB_14049d649;
                    bVar4 = (*(uint *)(lVar3 + 4) & 0xc00) == 0;
                }
                if ((!bVar4) && ((uint)(DAT_140c636a8 - piVar2[4]) <= param_5)) {
                    if (param_3 == 1) {
                        return 1;
                    }
                    return 0;
                }
            }
            LAB_14049d649:
        }
    }
    if ((param_3 != 1) && (param_3 == 2)) {
        return 1;
    }
    return 0;
}



ulonglong FUN_14049d680(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if ((param_2 == 0) || ((*(int *)(param_2 + 0x80) != 0x14 && (*(int *)(param_2 + 0x80) != 0x17))))
    {
        uVar2 = 0;
    }
    else {
        uVar2 = FUN_1403bb170(DAT_140c65898,param_4);
        iVar1 = (int)uVar2;
        if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
            return (ulonglong)(iVar1 == 0);
        }
    }
    return uVar2;
}



ulonglong FUN_14049d760(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if ((param_2 != 0) && (param_2 == *(longlong *)(DAT_140c65898 + 0x78))) {
        uVar2 = FUN_1403cdf50(DAT_140c65898,param_4,*(undefined *)(DAT_140c65898 + 0x6dec),0);
        iVar1 = (int)uVar2;
        if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
            uVar2 = (ulonglong)(iVar1 == 0);
        }
        return uVar2;
    }
    return 0;
}



uint FUN_14049d940(undefined8 param_1,longlong param_2,int param_3,longlong param_4,int param_5)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined4 uVar8;
    float fVar9;
    float fVar10;
    float fVar11;

    if (((param_4 == 0) || (param_5 == 0)) || (lVar1 = FUN_140225580(), lVar1 == 0)) {
        if ((param_3 - 1U != 0) && (param_3 == 2)) {
            return param_3 - 1U;
        }
        return 0;
    }
    lVar4 = param_2;
    if ((*(byte *)(lVar1 + 0xc) & 1) != 0) {
        lVar4 = param_4;
        param_4 = param_2;
    }
    fVar9 = DAT_140c3b438 * 0.005555556;
    fVar7 = 3.141593;
    uVar8 = 0x40c90fdb;
    fVar10 = (float)(ulonglong)*(uint *)(lVar1 + 4);
    fVar11 = 0.0;
    fVar6 = (float)(ulonglong)*(uint *)(lVar1 + 8) * 0.5;
    fVar5 = (fVar10 - fVar6) * fVar9 + *(float *)(lVar4 + 0x12c0);
    if (fVar5 < 0.0) {
        fVar5 = (float)FUN_1408fde98(fVar5 - 3.141593,0x40c90fdb);
        fVar5 = fVar5 + fVar7;
    }
    else {
        fVar5 = (float)FUN_1408fde98(fVar5 + 3.141593,0x40c90fdb);
        fVar5 = fVar5 - fVar7;
    }
    fVar6 = (fVar6 + fVar10) * fVar9 + *(float *)(lVar4 + 0x12c0);
    if (fVar6 < fVar11) {
        fVar6 = (float)FUN_1408fde98(fVar6 - fVar7,uVar8);
        fVar6 = fVar6 + fVar7;
    }
    else {
        fVar6 = (float)FUN_1408fde98(fVar6 + fVar7,uVar8);
        fVar6 = fVar6 - fVar7;
    }
    fVar7 = (float)FUN_1408fd190((uint)(*(float *)(param_4 + 0x11e0) - *(float *)(lVar4 + 0x11e0)) ^
                                 0x80000000,0x80000000);
    if (fVar6 < fVar5) {
        if (fVar7 < fVar5) goto joined_r0x00014049daf4;
    }
    else {
        uVar3 = 0;
        if (fVar7 < fVar5) goto LAB_14049dafb;
        joined_r0x00014049daf4:
        uVar3 = 0;
        if (fVar6 < fVar7) goto LAB_14049dafb;
    }
    uVar3 = 1;
    LAB_14049dafb:
    uVar2 = uVar3;
    if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
        uVar2 = (uint)(uVar3 == 0);
    }
    return uVar2;
}



bool FUN_14049db90(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
    int iVar1;
    bool bVar2;

    if (param_2 == 0) {
        return false;
    }
    iVar1 = FUN_1403b48b0(param_2);
    bVar2 = false;
    if (param_3 == 1) {
        bVar2 = iVar1 == param_4;
    }
    else if (param_3 == 2) {
        return iVar1 != param_4;
    }
    return bVar2;
}



undefined8 FUN_14049dbf0(undefined8 param_1,longlong param_2)

{
    undefined8 uVar1;

    if (((param_2 != 0) && (param_2 == *(longlong *)(DAT_140c65898 + 0x78))) && (DAT_140c65b98 != 0))
    {
        FUN_1405bffe0(DAT_140c65b98,0,0xffffffff);
        uVar1 = FUN_1404a2090();
        return uVar1;
    }
    return 0;
}



undefined8 FUN_14049dc50(undefined8 param_1,longlong param_2)

{
    undefined8 uVar1;

    if (((param_2 != 0) && (param_2 == *(longlong *)(DAT_140c65898 + 0x78))) && (DAT_140c65b98 != 0))
    {
        FUN_1405bffe0(DAT_140c65b98,1,0xffffffff);
        uVar1 = FUN_1404a2090();
        return uVar1;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14049de40(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    float fVar6;

    if (((param_2 != 0) && (param_2 == *(longlong *)(DAT_140c65898 + 0x78))) && (DAT_140c65b98 != 0))
    {
        uVar5 = 0;
        if (DAT_140c7de20 != 0) {
            uVar2 = uVar5;
            if (DAT_140c7de20 == 0) goto LAB_14049deaf;
            do {
                lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
                if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == 4)) {
                    lVar3 = FUN_1405bfe80(DAT_140c65b98,0,0xffffffff);
                    if (lVar3 == 0) {
                        if (_DAT_140c7e0ac == 0) {
                            _DAT_140c7e0ac = 1;
                            lVar3 = FUN_140200220(0x330);
                            if (lVar3 != 0) {
                                uVar5 = (ulonglong)*(uint *)(lVar3 + 4);
                            }
                            DAT_140c7e0a8 = (uint)uVar5;
                        }
                        else {
                            uVar5 = (ulonglong)DAT_140c7e0a8;
                        }
                    }
                    else {
                        uVar5 = (ulonglong)*(uint *)(lVar3 + 4);
                    }
                    fVar6 = (float)uVar5 / (float)(ulonglong)*(uint *)(lVar1 + 0x208);
                    uVar4 = FUN_1404a2010((float)(ulonglong)*(uint *)(lVar1 + 0x208),fVar6,
                                          (uint)(1.0 - fVar6) & 0x7fffffff,(float)(ulonglong)param_4);
                    return uVar4;
                }
                LAB_14049deaf:
                uVar2 = uVar2 + 1;
            } while (uVar2 < DAT_140c7de20);
        }
        return 0;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14049df70(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    float fVar6;

    if (((param_2 != 0) && (param_2 == *(longlong *)(DAT_140c65898 + 0x78))) && (DAT_140c65b98 != 0))
    {
        uVar5 = 0;
        if (DAT_140c7de20 != 0) {
            uVar2 = uVar5;
            if (DAT_140c7de20 == 0) goto LAB_14049dfdf;
            do {
                lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
                if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == 5)) {
                    lVar3 = FUN_1405bfe80(DAT_140c65b98,1,0xffffffff);
                    if (lVar3 == 0) {
                        if (_DAT_140c7e0ac == 0) {
                            _DAT_140c7e0ac = 1;
                            lVar3 = FUN_140200220(0x330);
                            if (lVar3 != 0) {
                                uVar5 = (ulonglong)*(uint *)(lVar3 + 4);
                            }
                            DAT_140c7e0a8 = (uint)uVar5;
                        }
                        else {
                            uVar5 = (ulonglong)DAT_140c7e0a8;
                        }
                    }
                    else {
                        uVar5 = (ulonglong)*(uint *)(lVar3 + 4);
                    }
                    fVar6 = (float)uVar5 / (float)(ulonglong)*(uint *)(lVar1 + 0x208);
                    uVar4 = FUN_1404a2010((float)(ulonglong)*(uint *)(lVar1 + 0x208),fVar6,
                                          (uint)(1.0 - fVar6) & 0x7fffffff,(float)(ulonglong)param_4);
                    return uVar4;
                }
                LAB_14049dfdf:
                uVar2 = uVar2 + 1;
            } while (uVar2 < DAT_140c7de20);
        }
        return 0;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14049e0a0(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    float fVar6;

    if (((param_2 != 0) && (param_2 == *(longlong *)(DAT_140c65898 + 0x78))) && (DAT_140c65b98 != 0))
    {
        uVar5 = 0;
        if (DAT_140c7de20 != 0) {
            uVar2 = uVar5;
            if (DAT_140c7de20 == 0) goto LAB_14049e10f;
            do {
                lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
                if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == 6)) {
                    lVar3 = FUN_1405bfe80(DAT_140c65b98,2,0xffffffff);
                    if (lVar3 == 0) {
                        if (_DAT_140c7e0ac == 0) {
                            _DAT_140c7e0ac = 1;
                            lVar3 = FUN_140200220(0x330);
                            if (lVar3 != 0) {
                                uVar5 = (ulonglong)*(uint *)(lVar3 + 4);
                            }
                            DAT_140c7e0a8 = (uint)uVar5;
                        }
                        else {
                            uVar5 = (ulonglong)DAT_140c7e0a8;
                        }
                    }
                    else {
                        uVar5 = (ulonglong)*(uint *)(lVar3 + 4);
                    }
                    fVar6 = (float)uVar5 / (float)(ulonglong)*(uint *)(lVar1 + 0x208);
                    uVar4 = FUN_1404a2010((float)(ulonglong)*(uint *)(lVar1 + 0x208),fVar6,
                                          (uint)(1.0 - fVar6) & 0x7fffffff,(float)(ulonglong)param_4);
                    return uVar4;
                }
                LAB_14049e10f:
                uVar2 = uVar2 + 1;
            } while (uVar2 < DAT_140c7de20);
        }
        return 0;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14049e1d0(undefined8 param_1,longlong param_2,undefined8 param_3,uint param_4)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    float fVar6;

    if (((param_2 != 0) && (param_2 == *(longlong *)(DAT_140c65898 + 0x78))) && (DAT_140c65b98 != 0))
    {
        uVar5 = 0;
        if (DAT_140c7de20 != 0) {
            uVar2 = uVar5;
            if (DAT_140c7de20 == 0) goto LAB_14049e23f;
            do {
                lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
                if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == 3)) {
                    lVar3 = FUN_1405bfe80(DAT_140c65b98,4,0xffffffff);
                    if (lVar3 == 0) {
                        if (_DAT_140c7e0ac == 0) {
                            _DAT_140c7e0ac = 1;
                            lVar3 = FUN_140200220(0x330);
                            if (lVar3 != 0) {
                                uVar5 = (ulonglong)*(uint *)(lVar3 + 4);
                            }
                            DAT_140c7e0a8 = (uint)uVar5;
                        }
                        else {
                            uVar5 = (ulonglong)DAT_140c7e0a8;
                        }
                    }
                    else {
                        uVar5 = (ulonglong)*(uint *)(lVar3 + 4);
                    }
                    fVar6 = (float)uVar5 / (float)(ulonglong)*(uint *)(lVar1 + 0x208);
                    uVar4 = FUN_1404a2010((float)(ulonglong)*(uint *)(lVar1 + 0x208),fVar6,
                                          (uint)(1.0 - fVar6) & 0x7fffffff,(float)(ulonglong)param_4);
                    return uVar4;
                }
                LAB_14049e23f:
                uVar2 = uVar2 + 1;
            } while (uVar2 < DAT_140c7de20);
        }
        return 0;
    }
    return 0;
}



undefined8 FUN_14049e300(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
    undefined8 uVar1;

    if (((param_2 != 0) && (param_2 == *(longlong *)(DAT_140c65898 + 0x78))) && (DAT_140c65b98 != 0))
    {
        FUN_1405bffe0(DAT_140c65b98,0,param_4);
        uVar1 = FUN_1404a2090();
        return uVar1;
    }
    return 0;
}



undefined8 FUN_14049e350(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
    undefined8 uVar1;

    if (((param_2 != 0) && (param_2 == *(longlong *)(DAT_140c65898 + 0x78))) && (DAT_140c65b98 != 0))
    {
        FUN_1405bffe0(DAT_140c65b98,1,param_4);
        uVar1 = FUN_1404a2090();
        return uVar1;
    }
    return 0;
}



ulonglong FUN_14049e680(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    uVar2 = FUN_1403c92e0(param_1,param_4);
    iVar1 = (int)uVar2;
    if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
        uVar2 = (ulonglong)(iVar1 == 0);
    }
    return uVar2;
}



undefined8
FUN_14049e6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              int param_5_00,undefined4 param_6,undefined4 param_5)

{
    uint uVar1;
    longlong *plVar2;
    uint *puVar3;
    undefined8 uVar4;
    float extraout_XMM0_Da;
    float fVar5;
    float fVar6;

    if (DAT_140c658f8 != 0) {
        plVar2 = (longlong *)FUN_140448420(param_3,param_6);
        if (plVar2 != (longlong *)0x0) {
            puVar3 = (uint *)(**(code **)(*plVar2 + 0xa8))();
            fVar6 = 0.0;
            uVar1 = puVar3[1];
            fVar5 = extraout_XMM0_Da;
            if (uVar1 != 0) {
                fVar5 = (float)(ulonglong)uVar1;
                fVar6 = ((float)(ulonglong)*puVar3 * 100.0) / fVar5;
            }
            uVar4 = FUN_1404a2010(fVar5,param_2,fVar6,param_5,(ulonglong)uVar1,param_5_00);
            return uVar4;
        }
    }
    if ((param_5_00 != 1) && (param_5_00 == 2)) {
        return 1;
    }
    return 0;
}



bool FUN_14049e780(undefined8 param_1,int param_2,int param_3)

{
    int iVar1;

    iVar1 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    if (param_2 != 1) {
        return param_2 == 2 && iVar1 != param_3;
    }
    return iVar1 == param_3;
}



bool FUN_14049e900(undefined8 param_1,undefined8 param_2,int param_3,longlong param_4)

{
    int iVar1;
    bool bVar2;
    longlong lVar3;
    longlong local_res20;

    if (param_4 == 0) {
        if ((param_3 != 1) && (param_3 == 2)) {
            return true;
        }
        return false;
    }
    lVar3 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if ((lVar3 == 0) || (iVar1 = FUN_14079ee60(lVar3,param_4 + 0x1a0,&local_res20), iVar1 == 0)) {
        lVar3 = 0;
    }
    else {
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x58) + local_res20 * 8);
    }
    bVar2 = lVar3 != 0;
    if ((param_3 != 1) && (bVar2 = false, param_3 == 2)) {
        return lVar3 == 0;
    }
    return bVar2;
}



ulonglong FUN_14049eae0(undefined8 param_1,longlong param_2,int param_3,ulonglong param_4)

{
    longlong *plVar1;
    longlong *plVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    if (param_2 == 0) {
        if ((param_3 == 1) || (param_3 != 2)) {
            return 0;
        }
    }
    else {
        uVar4 = 0;
        uVar3 = uVar4;
        if (DAT_140c7de20 != 0) {
            do {
                plVar1 = *(longlong **)(DAT_140c7de18 + uVar3 * 8);
                if (*(int *)(plVar1 + 2) == 1) {
                    if (plVar1 != (longlong *)0x0) {
                        if (*(ulonglong *)(param_2 + 0xa8) != 0) {
                            plVar2 = *(longlong **)(param_2 + 0xa0);
                            uVar3 = uVar4;
                            do {
                                if (*plVar2 == *plVar1) {
                                    if ((plVar1 + 0x42 != (longlong *)0x0) &&
                                        (uVar3 = (param_4 & 0xffffffff) >> 6, uVar3 < 2)) {
                                        uVar4 = (ulonglong)
                                                (((ulonglong)(plVar1 + 0x42)[uVar3] >>
                                                                                    ((byte)(param_4 & 0xffffffff) & 0x3f) & 1) != 0);
                                    }
                                    if (param_3 != 1) {
                                        if (param_3 != 2) {
                                            return 0;
                                        }
                                        return (ulonglong)((int)uVar4 == 0);
                                    }
                                    return uVar4;
                                }
                                uVar3 = uVar3 + 1;
                                plVar2 = plVar2 + 1;
                            } while (uVar3 < *(ulonglong *)(param_2 + 0xa8));
                        }
                    }
                    break;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < DAT_140c7de20);
        }
        if (param_3 == 1) {
            return 0;
        }
        if (param_3 != 2) {
            return 0;
        }
    }
    return 1;
}



ulonglong FUN_14049ebf0(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
    longlong lVar1;
    ulonglong uVar2;
    bool bVar3;

    uVar2 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar2 * 8);
            if (*(int *)(lVar1 + 0x10) == 3) {
                if (((lVar1 != 0) && ((ulonglong)(longlong)*(int *)(lVar1 + 0x304) < 10)) &&
                    (lVar1 = lVar1 + ((longlong)*(int *)(lVar1 + 0x304) * 5 + 3) * 8, lVar1 != 0)) {
                    bVar3 = (*(uint *)(lVar1 + 8) >> (param_4 & 0x1f) & 1) != 0;
                    if (param_3 == 1) {
                        return (ulonglong)bVar3;
                    }
                    if (param_3 != 2) {
                        return 0;
                    }
                    return (ulonglong)!bVar3;
                }
                break;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < DAT_140c7de20);
    }
    bVar3 = (*(uint *)(DAT_140c65b98 + 400) >> (param_4 & 0x1f) & 1) != 0;
    uVar2 = (ulonglong)bVar3;
    if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
        return (ulonglong)!bVar3;
    }
    return uVar2;
}



bool FUN_14049ee40(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
    int iVar1;
    undefined8 uVar2;
    bool bVar3;
    undefined **local_18;
    longlong local_10;

    if ((param_2 == 0) || (param_4 == 0)) {
        return false;
    }
    local_18 = &PTR_FUN_140b66440;
    local_10 = param_2;
    uVar2 = FUN_1403b4a10(&local_18,param_4);
    iVar1 = FUN_1403b4a20(&local_18,uVar2);
    bVar3 = iVar1 == 0;
    if ((param_3 != 1) && (bVar3 = false, param_3 == 2)) {
        return iVar1 != 0;
    }
    return bVar3;
}



bool FUN_14049efc0(undefined8 param_1,int param_2,undefined4 param_3)

{
    bool bVar1;
    longlong lVar2;
    bool bVar3;

    lVar2 = FUN_14024dfc0(param_3);
    if (lVar2 == 0) {
        return false;
    }
    bVar1 = *(int *)(lVar2 + 0xc) != 0;
    bVar3 = bVar1;
    if ((param_2 != 1) && (bVar3 = false, param_2 == 2)) {
        return !bVar1;
    }
    return bVar3;
}



bool FUN_14049f010(undefined8 param_1,int param_2,int param_3)

{
    longlong lVar1;

    if ((DAT_140dc30b0 & 1) == 0) {
        DAT_140dc30b0 = DAT_140dc30b0 | 1;
        lVar1 = FUN_140200220(0x3ae);
        if (lVar1 == 0) {
            DAT_140dc30b4 = 6;
        }
        else {
            DAT_140dc30b4 = *(int *)(lVar1 + 4);
        }
    }
    if (param_2 != 1) {
        return param_2 == 2 && DAT_140dc30b4 > param_3;
    }
    return DAT_140dc30b4 <= param_3;
}



void FUN_14049f0f0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    lVar1 = FUN_140246480();
    if (lVar1 == 0) {
        return;
    }
    uVar3 = 0;
    uVar2 = uVar3;
    if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
        do {
            if (*(int *)(*(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar2 * 8) + 8) ==
                *(int *)(lVar1 + 4)) {
                uVar2 = *(ulonglong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar2 * 8);
                if (uVar2 != 0) {
                    if (*(int *)(uVar2 + 0xc) != 0) {
                        uVar3 = (ulonglong)*(uint *)(uVar2 + 0x54);
                    }
                    FUN_1404a2090(uVar2,param_3,uVar3,*(undefined4 *)(lVar1 + 8));
                    return;
                }
                break;
            }
            uVar2 = (ulonglong)((int)uVar2 + 1);
        } while (uVar2 < *(ulonglong *)(DAT_140c65898 + 0x16a0));
    }
    FUN_1404a2090(uVar2,param_3,0,*(undefined4 *)(lVar1 + 8));
    return;
}



ulonglong FUN_14049f190(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
    longlong lVar1;
    int *piVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar7;
    ulonglong uVar6;

    uVar7 = 0;
    uVar3 = uVar7;
    if (*(ulonglong *)(DAT_140c65898 + 0x16a0) != 0) {
        uVar4 = uVar7;
        do {
            lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1698) + uVar4 * 8);
            if (*(int *)(lVar1 + 0xc) != 0) {
                piVar2 = (int *)(lVar1 + 0x18);
                uVar6 = uVar7;
                do {
                    if (param_4 == *piVar2) {
                        uVar3 = 1;
                        goto LAB_14049f1ed;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                    piVar2 = piVar2 + 1;
                } while (uVar5 < 10);
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c65898 + 0x16a0));
    }
    LAB_14049f1ed:
    uVar4 = uVar3;
    if ((param_3 != 1) && (uVar4 = uVar7, param_3 == 2)) {
        uVar4 = (ulonglong)((int)uVar3 == 0);
    }
    return uVar4;
}



bool FUN_14049f280(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4)

{
    longlong lVar1;
    bool bVar2;

    if (param_2 == 0) {
        return false;
    }
    lVar1 = FUN_14020e7a0(param_4);
    if (lVar1 == 0) {
        return false;
    }
    FUN_140245c00(*(undefined4 *)(param_2 + 0x1cc));
    bVar2 = false;
    if (param_3 == 1) {
        bVar2 = *(int *)(param_2 + 0x180) == *(int *)(lVar1 + 0x10);
    }
    else if (param_3 == 2) {
        return *(int *)(param_2 + 0x180) != *(int *)(lVar1 + 0x10);
    }
    return bVar2;
}



uint FUN_14049f460(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,
                   undefined4 param_5)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;

    uVar3 = 0;
    lVar2 = FUN_1405a8a40(param_1,param_4);
    uVar1 = uVar3;
    if (lVar2 != 0) {
        uVar1 = FUN_1405510d0(lVar2,param_5);
    }
    if (param_3 != 1) {
        if (param_3 == 2) {
            uVar3 = (uint)(uVar1 == 0);
        }
        return uVar3;
    }
    return uVar1;
}



void FUN_14049f4d0(void)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    undefined4 in_stack_00000028;
    longlong local_18;

    lVar4 = FUN_1405a8a40();
    if (lVar4 != 0) {
        iVar3 = FUN_1405fbc40(*DAT_140c65b80);
        if (iVar3 == 3) {
            FUN_140551840(lVar4,in_stack_00000028);
        }
        else {
            lVar1 = *(longlong *)(*DAT_140c65b80 + 8);
            local_18 = lVar1;
            lVar2 = *(longlong *)(lVar1 + 8);
            while (lVar2 != 0) {
                if (*(uint *)(lVar2 + 0x20) < **(uint **)(lVar4 + 8)) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    local_18 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((local_18 == lVar1) || (**(uint **)(lVar4 + 8) < *(uint *)(local_18 + 0x20))) {
                local_18 = lVar1;
            }
            if ((local_18 != lVar1) && (local_18 + 0x28 != 0)) {
                FUN_1406113b0(local_18 + 0x28,in_stack_00000028);
            }
        }
    }
    FUN_1404a2090();
    return;
}



ulonglong FUN_14049f5b0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                        undefined4 param_5,longlong param_6)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    ulonglong uVar4;

    if ((((*(int *)(param_2 + 0x80) == 0x14) || (*(int *)(param_2 + 0x80) == 0x17)) &&
         ((param_6 == 0 ||
           ((*(int *)(param_6 + 0x80) == 0x14 || (param_2 = param_6, *(int *)(param_6 + 0x80) == 0x17)))
         ))) || (lVar3 = FUN_1405a8a40(param_1,param_4), lVar3 == 0)) {
        if ((param_3 != 1) && (param_3 == 2)) {
            return 1;
        }
    }
    else {
        uVar4 = 0;
        iVar1 = FUN_140552f50(lVar3);
        if (iVar1 != 0) {
            uVar2 = FUN_140551730(lVar3,param_5,*(undefined4 *)(param_2 + 0x35f8));
            uVar4 = (ulonglong)uVar2;
        }
        if (param_3 == 1) {
            return uVar4 & 0xffffffff;
        }
        if (param_3 == 2) {
            return (ulonglong)((int)uVar4 == 0);
        }
    }
    return 0;
}



bool FUN_14049f700(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4,int param_5)

{
    int iVar1;
    longlong *plVar2;
    bool bVar3;

    bVar3 = false;
    plVar2 = (longlong *)FUN_1407242b0(param_1,param_4);
    if (plVar2 != (longlong *)0x0) {
        iVar1 = (**(code **)(*plVar2 + 0xc0))(plVar2);
        bVar3 = iVar1 == param_5;
    }
    if (param_3 != 1) {
        return param_3 == 2 && bVar3 == false;
    }
    return bVar3;
}



bool FUN_14049f770(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,uint param_5)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    bool bVar4;
    longlong local_18;

    bVar4 = false;
    lVar1 = *(longlong *)(DAT_140c65c28 + 0x70);
    local_18 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_18 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_18 == lVar1) || (param_4 < *(uint *)(local_18 + 0x20))) {
        local_18 = lVar1;
    }
    uVar3 = 0;
    if ((local_18 != lVar1) && (uVar3 = 0, *(longlong *)(local_18 + 0x28) != 0)) {
        uVar3 = (uint)(*(longlong *)(*(longlong *)(local_18 + 0x28) + 0x20) != 0);
    }
    if (param_3 == 1) {
        bVar4 = uVar3 == param_5;
    }
    else if (param_3 == 2) {
        return uVar3 != param_5;
    }
    return bVar4;
}



uint FUN_14049f810(undefined8 param_1,undefined8 param_2,int param_3,uint param_4,undefined4 param_5
)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    longlong local_18;

    if (DAT_140c65c28 == 0) {
        return 0;
    }
    lVar1 = *(longlong *)(DAT_140c65c28 + 0x70);
    local_18 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < param_4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_18 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_18 == lVar1) || (param_4 < *(uint *)(local_18 + 0x20))) {
        local_18 = lVar1;
    }
    uVar3 = 0;
    if ((local_18 != lVar1) && (uVar3 = 0, *(longlong *)(local_18 + 0x28) != 0)) {
        uVar3 = FUN_140642a00(*(longlong *)(local_18 + 0x28),param_5);
    }
    uVar4 = uVar3;
    if ((param_3 != 1) && (uVar4 = 0, param_3 == 2)) {
        return (uint)(uVar3 == 0);
    }
    return uVar4;
}



ulonglong FUN_14049f8c0(undefined8 param_1,longlong param_2,int param_3,undefined4 param_4,
                        longlong param_5)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;

    if (DAT_140c65c28 == 0) {
        return 0;
    }
    if (((*(int *)(param_2 + 0x80) == 0x14) || (*(int *)(param_2 + 0x80) == 0x17)) &&
        ((param_5 == 0 ||
          ((*(int *)(param_5 + 0x80) == 0x14 || (param_2 = param_5, *(int *)(param_5 + 0x80) == 0x17))))
        )) {
        if ((param_3 != 1) && (param_3 == 2)) {
            return 1;
        }
    }
    else {
        uVar3 = 0;
        lVar2 = FUN_140643ea0(DAT_140c65c28,param_4);
        if (lVar2 != 0) {
            uVar1 = FUN_140642a00(lVar2,*(undefined4 *)(param_2 + 0x35f8));
            uVar3 = (ulonglong)uVar1;
        }
        if (param_3 == 1) {
            return uVar3 & 0xffffffff;
        }
        if (param_3 == 2) {
            return (ulonglong)((int)uVar3 == 0);
        }
    }
    return 0;
}



ulonglong FUN_14049f990(undefined8 param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong uVar2;

    if (DAT_140c65948 == 0) {
        return 0;
    }
    uVar2 = FUN_14048d530(param_1,param_4);
    iVar1 = (int)uVar2;
    if ((param_3 != 1) && (uVar2 = 0, param_3 == 2)) {
        uVar2 = (ulonglong)(iVar1 == 0);
    }
    return uVar2;
}
