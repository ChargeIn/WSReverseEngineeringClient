//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_140731430(longlong param_1,undefined8 param_2)

{
    ulonglong uVar1;
    short sVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    undefined local_38 [8];
    longlong local_30;
    undefined2 *local_28;
    longlong local_20;

    psVar3 = *(short **)(param_1 + 8);
    lVar5 = 0;
    local_30 = 0;
    local_20 = 0;
    sVar2 = *psVar3;
    while (sVar2 != 0) {
        lVar5 = lVar5 + 1;
        sVar2 = psVar3[lVar5];
    }
    lVar5 = lVar5 * 2 >> 1;
    uVar1 = lVar5 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar4 = uVar1 * 2;
        local_30 = FUN_14018b280(lVar4,0);
        local_20 = lVar4 + local_30;
    }
    lVar4 = local_30;
    lVar5 = lVar5 * 2;
    FUN_1407db590(local_30,psVar3,lVar5);
    local_28 = (undefined2 *)(lVar5 + lVar4);
    if (local_28 != (undefined2 *)0x0) {
        *local_28 = 0;
    }
    FUN_140115df0(param_2,local_38);
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    return 1;
}



undefined8 FUN_140731510(longlong param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    double dVar9;
    int local_res8;
    int iStackX12;
    longlong local_48;
    ulonglong local_40;
    undefined **local_38;
    int local_30;
    longlong local_28;
    undefined4 local_20;

    uVar7 = 0;
    local_40 = 0;
    local_48 = 0;
    FUN_1400ec9e0(*(undefined8 *)(DAT_140c65898 + 0x7340),param_2,&local_48);
    FUN_1400ecab0(*(undefined8 *)(DAT_140c65898 + 0x7340));
    if (1 < local_40) {
        FUN_140731820(&local_48);
    }
    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_28 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar4 + 1) = 5;
    *puVar4 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_30 = FUN_1400578c0();
    uVar6 = uVar7;
    uVar8 = uVar7;
    if (local_40 != 0) {
        do {
            FUN_1400fad30(&local_38,*(undefined8 *)(uVar6 + 8 + local_48));
            uVar8 = uVar8 + 1;
            uVar6 = uVar6 + 0x20;
            param_1 = local_28;
        } while (uVar8 < local_40);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (local_30 - 1U < *(uint *)(lVar5 + 0x38)) {
        puVar4 = (undefined8 *)((longlong)(local_30 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
    }
    else {
        dVar9 = (double)local_30;
        if (dVar9 == 0.0) {
            puVar4 = *(undefined8 **)(lVar5 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar9 >> 0x20);
            local_res8 = SUB84(dVar9,0);
            puVar4 = (undefined8 *)
                    (*(longlong *)(lVar5 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar4 + 3) == 3) && (dVar9 == (double)puVar4[2])) goto LAB_140731693;
            puVar4 = (undefined8 *)puVar4[4];
        } while (puVar4 != (undefined8 *)0x0);
        puVar4 = &DAT_140a12138;
    }
    LAB_140731693:
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,local_30);
    lVar5 = local_48;
    uVar6 = local_40;
    uVar8 = uVar7;
    if (local_40 != 0) {
        do {
            lVar2 = *(longlong *)(uVar7 + 8 + lVar5);
            if (lVar2 != 0) {
                FUN_14018b900(lVar2,0);
                lVar5 = local_48;
                uVar6 = local_40;
            }
            uVar8 = uVar8 + 1;
            uVar7 = uVar7 + 0x20;
        } while (uVar8 < uVar6);
    }
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    return 1;
}



undefined4 FUN_140731740(longlong param_1)

{
    uint uVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;
    uint *puVar6;

    uVar1 = FUN_140056d60();
    uVar5 = (ulonglong)uVar1 % *(ulonglong *)(DAT_140c658a0 + 0xd8);
    if ((uVar5 < *(ulonglong *)(DAT_140c658a0 + 0xf0)) &&
        (puVar6 = (uint *)(*(longlong *)(DAT_140c658a0 + 0xe8) + uVar5 * 0x30), *puVar6 == uVar1)) {
        lVar3 = FUN_14018b280(0x68);
        plVar4 = (longlong *)0x0;
        if (lVar3 != 0) {
            plVar4 = (longlong *)
                    FUN_14073de90(lVar3,*(undefined8 *)(puVar6 + 8),*(undefined8 *)(puVar6 + 10),
                                  puVar6 + 2,0,5,*(undefined8 *)(puVar6 + 6));
        }
        uVar2 = FUN_14073eb30(param_1,plVar4);
        if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4);
        }
        return uVar2;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_140731820(longlong *param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    longlong local_10;

    local_28 = *param_1;
    uVar2 = param_1[1];
    uVar9 = 0;
    local_20 = &LAB_140731720;
    local_18 = 0;
    uVar3 = SUB168(ZEXT816(8) * ZEXT816(uVar2),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar2) >> 0x40,0) != 0) {
        uVar3 = 0xffffffffffffffff;
    }
    local_10 = FUN_14018b280(uVar3,0);
    if (uVar2 != 0) {
        uVar5 = uVar9;
        if (1 < uVar2) {
            uVar4 = uVar9;
            do {
                uVar5 = uVar4 + 2;
                puVar1 = (ulonglong *)(local_10 + -0x10 + uVar5 * 8);
                *puVar1 = uVar4;
                puVar1[1] = uVar4 + 1;
                uVar4 = uVar5;
            } while (uVar5 < uVar2 - ((uint)uVar2 & 1));
        }
        for (; uVar5 < uVar2; uVar5 = uVar5 + 1) {
            *(ulonglong *)(local_10 + uVar5 * 8) = uVar5;
        }
    }
    FUN_14001fec0(&LAB_140731a00,local_10,uVar2,&local_28);
    lVar7 = param_1[1];
    if (lVar7 == 0) {
        puVar8 = (undefined8 *)0x0;
    }
    else {
        puVar6 = (undefined8 *)FUN_14018b280(lVar7 * 0x20 + 0x10,0);
        if (puVar6 == (undefined8 *)0x0) {
            puVar8 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar6[1] = lVar7;
            puVar8 = puVar6 + 2;
            *puVar6 = &PTR_LAB_140b55060;
        }
    }
    if (param_1[1] != 0) {
        puVar6 = puVar8 + 2;
        do {
            if (puVar6 != (undefined8 *)&DAT_00000010) {
                lVar7 = *(longlong *)(local_10 + uVar9 * 8) * 0x20 + *param_1;
                puVar6[-1] = 0;
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[-1] = *(undefined8 *)(lVar7 + 8);
                *(undefined8 *)(lVar7 + 8) = 0;
                uVar3 = *puVar6;
                *puVar6 = *(undefined8 *)(lVar7 + 0x10);
                *(undefined8 *)(lVar7 + 0x10) = uVar3;
                uVar3 = puVar6[1];
                puVar6[1] = *(undefined8 *)(lVar7 + 0x18);
                *(undefined8 *)(lVar7 + 0x18) = uVar3;
            }
            lVar7 = *(longlong *)(*(longlong *)(local_10 + uVar9 * 8) * 0x20 + *param_1 + 8);
            if (lVar7 != 0) {
                FUN_14018b900(lVar7,0);
            }
            uVar9 = uVar9 + 1;
            puVar6 = puVar6 + 4;
        } while (uVar9 < (ulonglong)param_1[1]);
    }
    lVar7 = *param_1;
    if (lVar7 != 0) {
        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
    }
    *param_1 = (longlong)puVar8;
    FUN_14018b900(local_10,0);
    return;
}



undefined8 FUN_140731a20(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    byte bVar3;
    longlong lVar4;

    (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))();
    lVar4 = FUN_14024acc0();
    if (lVar4 == 0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if ((7 < *(uint *)(lVar4 + 0x14)) ||
        (bVar3 = 1, (0xa4U >> (*(uint *)(lVar4 + 0x14) & 0x1f) & 1) == 0)) {
        bVar3 = 0;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140731ad0(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    uint uVar3;

    lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
    puVar1 = *(uint **)(param_1 + 0x10);
    uVar3 = 0;
    if (lVar2 != 0) {
        uVar3 = (uint)(*(longlong *)(lVar2 + 0x20) == *(longlong *)(DAT_140c635f0 + 0x16a0));
    }
    *puVar1 = uVar3;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140731be0(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    byte bVar3;
    int iVar4;
    ulonglong uVar5;
    uint uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar5 = 0;
    iVar4 = 0;
    uVar6 = (uint)(DAT_140c7dfc8 - DAT_140c7dfc0 >> 3);
    if (uVar6 != 0) {
        uVar7 = uVar5;
        uVar8 = uVar5;
        if (uVar6 == 0) goto LAB_140731c4a;
        do {
            iVar4 = (int)uVar5;
            lVar1 = *(longlong *)(DAT_140c7dfc0 + uVar5 * 8);
            if (lVar1 != 0) {
                if (*(longlong *)(lVar1 + 0x20) == *(longlong *)(DAT_140c635f0 + 0x16a0)) {
                    uVar7 = 1;
                }
                if (*(int *)(lVar1 + 0x30) == 5) {
                    uVar8 = 1;
                }
            }
            LAB_140731c4a:
            uVar5 = (ulonglong)(iVar4 + 1U);
        } while (iVar4 + 1U < uVar6);
        if (((int)uVar8 != 0) && (bVar3 = 1, (int)uVar7 != 0)) goto LAB_140731c64;
    }
    bVar3 = 0;
    LAB_140731c64:
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_140731d30(longlong param_1,uint *param_2,undefined8 param_3)

{
    undefined4 uVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 *puVar5;

    FUN_14034bdd0(param_1,param_2[1]);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar5 + 1) = 5;
    *puVar5 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_1);
    uVar4 = (ulonglong)*param_2;
    puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = *puVar3;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar5,&DAT_140b47320,uVar4 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar5 = *puVar3;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0870(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar5 = *puVar3;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0870(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_1400fb1d0(param_3,uVar1);
    FUN_1400579e0(param_1);
    return;
}



void FUN_140731eb0(longlong param_1)

{
    undefined4 *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar2;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar2 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar2 + 0x180,1);
    puVar1 = (undefined4 *)FUN_1404b7d40();
    FUN_1406ae160(param_1,*puVar1);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140731f40(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    double dVar7;
    double dVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined auStack600 [32];
    float local_238;
    float local_234;
    float local_230;
    float local_22c;
    undefined8 local_228;
    undefined8 uStack544;
    undefined8 local_218;
    undefined8 uStack528;
    undefined local_1f8 [16];
    undefined local_1e8 [64];
    undefined local_1a8 [64];
    float local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined local_148 [64];
    undefined *local_108;
    undefined8 local_100;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack600;
    uVar4 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                lVar6 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                goto LAB_140731fdb;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar6 = 0;
    LAB_140731fdb:
    FUN_1400f26a0(lVar6 + 0x180,1);
    lVar1 = *(longlong *)(lVar6 + 400);
    uVar15 = 0;
    uVar16 = 0;
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x18))) {
        dVar7 = (double)FUN_140056c40(lVar1,2);
    }
    else {
        dVar7 = 0.0;
    }
    lVar1 = *(longlong *)(lVar6 + 400);
    fVar12 = (float)dVar7;
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    if (((puVar5 < *(undefined8 **)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x28))) {
        dVar7 = (double)FUN_140056c40(lVar1,3);
    }
    lVar1 = *(longlong *)(lVar6 + 400);
    fVar9 = (float)dVar7;
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x30);
    if (((puVar5 < *(undefined8 **)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x38))) {
        dVar7 = (double)FUN_140056c40(lVar1,4);
    }
    dVar8 = (double)((ulonglong)dVar7 & 0xffffffff00000000 | (ulonglong)(uint)(float)dVar7);
    local_1f8 = ZEXT1216(CONCAT48((float)dVar7,CONCAT44(fVar9,fVar12)));
    lVar1 = *(longlong *)(lVar6 + 400);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x40);
    if (((puVar5 < *(undefined8 **)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x48))) {
        dVar8 = (double)FUN_140056c40(lVar1,5);
    }
    lVar1 = *(longlong *)(lVar6 + 400);
    fVar12 = (float)dVar8;
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x50);
    if (((puVar5 < *(undefined8 **)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x58))) {
        dVar8 = (double)FUN_140056c40(SUB84(dVar8,0),lVar1,6);
    }
    lVar1 = *(longlong *)(lVar6 + 400);
    fVar9 = (float)dVar8;
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x60);
    dVar7 = (double)CONCAT44(uVar16,uVar15);
    if (((puVar5 < *(undefined8 **)(lVar1 + 0x10)) &&
         (dVar7 = (double)CONCAT44(uVar16,uVar15), puVar5 != &DAT_140a12138)) &&
        (dVar7 = (double)CONCAT44(uVar16,uVar15), 0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x68))) {
        dVar7 = (double)FUN_140056c40(lVar1,7);
    }
    fVar14 = DAT_140c3b438 * 0.005555556;
    fVar13 = 0.5;
    fVar10 = fVar14 * fVar9 * 0.5;
    fVar9 = (float)FUN_1408fe3d0(fVar10);
    fVar10 = (float)FUN_1408fc950(fVar10);
    fVar11 = fVar14 * fVar12 * fVar13;
    fVar12 = (float)FUN_1408fe3d0(fVar11);
    fVar11 = (float)FUN_1408fc950(fVar11);
    fVar13 = (float)dVar7 * fVar14 * fVar13;
    fVar14 = (float)FUN_1408fe3d0(fVar13);
    fVar13 = (float)FUN_1408fc950(fVar13);
    local_238 = fVar9 * fVar14 * fVar11 + fVar13 * fVar12 * fVar10;
    local_234 = fVar14 * fVar11 * fVar10 - fVar9 * fVar13 * fVar12;
    local_22c = fVar9 * fVar14 * fVar12 + fVar13 * fVar11 * fVar10;
    local_230 = fVar9 * fVar13 * fVar11 - fVar14 * fVar12 * fVar10;
    lVar6 = *(longlong *)(lVar6 + 400);
    puVar5 = (undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x70);
    dVar7 = (double)CONCAT44(uVar16,uVar15);
    if (((puVar5 < *(undefined8 **)(lVar6 + 0x10)) &&
         (dVar7 = (double)CONCAT44(uVar16,uVar15), puVar5 != &DAT_140a12138)) &&
        (dVar7 = (double)CONCAT44(uVar16,uVar15), 0 < *(int *)(*(longlong *)(lVar6 + 0x18) + 0x78))) {
        dVar7 = (double)FUN_140056c40(lVar6,8);
    }
    local_168 = (float)dVar7;
    local_218 = &local_238;
    uStack544 = 0;
    uStack528 = local_1f8;
    local_228 = (undefined *)CONCAT44(local_228._4_4_,local_168);
    local_218._4_4_ = (undefined4)((ulonglong)local_218 >> 0x20);
    uStack528._4_4_ = (undefined4)((ulonglong)uStack528 >> 0x20);
    uStack356 = local_228._4_4_;
    uStack352 = 0;
    uStack348 = 0;
    local_158 = (undefined4)local_218;
    uStack340 = local_218._4_4_;
    uStack336 = (undefined4)uStack528;
    uStack332 = uStack528._4_4_;
    uVar2 = FUN_1405b1510(&DAT_140c7dfb0);
    local_100 = FUN_1405b0600(uVar2,local_1a8);
    FUN_1401b0590(&local_168,local_148);
    local_228 = local_148;
    uStack544 = local_100;
    local_108 = local_228;
    FUN_1401afb10(&local_108,local_1e8);
    puVar3 = (undefined4 *)FUN_1404b7d40();
    FUN_1406ae160(param_1,*puVar3);
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack600);
    return;
}



undefined8 FUN_140732390(longlong param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar1 = uVar2;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar1 * 8) + 400) ==
                param_1) {
                uVar2 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar1 * 8);
                break;
            }
            uVar1 = (ulonglong)((int)uVar1 + 1);
        } while (uVar1 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar2 + 0x180,1);
    FUN_1404b8f30();
    return 0;
}



undefined8 FUN_140732410(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    iVar2 = FUN_1404b9a20();
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140732450(void)

{
    int iVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined8 local_10;

    iVar1 = FUN_1404b9a20();
    if (iVar1 != 0) {
        lVar2 = FUN_1405b1510();
        local_18 = *(undefined8 *)(lVar2 + 8);
        local_10 = *(undefined8 *)(lVar2 + 0x10);
        FUN_1403f4900(DAT_140c65898,0x4ec,&local_18);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140732b20(longlong param_1)

{
    undefined uVar1;
    undefined4 uVar2;
    int iVar3;
    uint uVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    undefined auStack136 [32];
    undefined **local_68;
    ulonglong local_60;
    longlong local_58;
    undefined4 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    longlong local_30;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    uVar8 = 0;
    uVar1 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar8;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar8 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar6 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar2 = FUN_1400f26a0(uVar8 + 0x180,1);
    puVar7 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar8 + 400) + 0x18) + 0x10);
    puVar9 = &DAT_140a12138;
    if (puVar7 < *(undefined8 **)(*(longlong *)(uVar8 + 400) + 0x10)) {
        puVar9 = puVar7;
    }
    iVar3 = *(int *)(puVar9 + 1);
    if ((iVar3 != 0) && ((iVar3 != 1 || (*(int *)puVar9 != 0)))) {
        uVar1 = 1;
    }
    local_40 = 1;
    local_38 = 0;
    local_60 = 1;
    local_28 = 1;
    local_20 = 0;
    local_48 = 0;
    local_30 = 0;
    local_58 = 0;
    iVar3 = FUN_1404b8680(iVar3,uVar2,&local_48,uVar1);
    if (iVar3 < 0) {
        FUN_140056570(param_1,1,"Not a valid color shift");
    }
    else {
        local_68 = &PTR_FUN_140b569f0;
        local_50 = 1;
        local_58 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar9 + 1) = 5;
        *puVar9 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(param_1);
        local_60 = local_60 & 0xffffffff00000000 | (ulonglong)uVar4;
        iVar3 = FUN_140501210(param_1,&local_48);
        if (iVar3 != 0) {
            FUN_1400fb540(&local_68,L"monPrice1");
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        if ((local_30 != 0) &&
            ((((int)local_28 < 0xf ||
               (((int)local_28 == 0xf &&
                 ((((int)local_20 != 0 || (local_28._4_4_ == 1)) || (local_20._4_4_ != 0)))))) &&
              (iVar3 = FUN_140501210(param_1,&local_30), iVar3 != 0)))) {
            FUN_1400fb540(&local_68,L"monPrice2");
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar7;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1,puVar9,uVar4);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack136);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140732e20(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined4 *puVar4;
    ulonglong uVar5;
    longlong lVar6;
    double dVar7;
    double dVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined auStack600 [32];
    float local_238;
    float local_234;
    float local_230;
    float local_22c;
    undefined8 local_228;
    undefined8 uStack544;
    undefined8 local_218;
    undefined8 uStack528;
    undefined local_1f8 [16];
    undefined local_1e8 [64];
    undefined local_1a8 [64];
    float local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined local_148 [64];
    undefined *local_108;
    undefined8 local_100;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack600;
    uVar5 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar6 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                goto LAB_140732ebb;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar6 = 0;
    LAB_140732ebb:
    FUN_1400f26a0(lVar6 + 0x180,1);
    FUN_1400f26a0(lVar6 + 0x180,2);
    lVar1 = *(longlong *)(lVar6 + 400);
    uVar15 = 0;
    uVar16 = 0;
    puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x28))) {
        dVar7 = (double)FUN_140056c40(lVar1,3);
    }
    else {
        dVar7 = 0.0;
    }
    lVar1 = *(longlong *)(lVar6 + 400);
    fVar12 = (float)dVar7;
    puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x30);
    if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x38))) {
        dVar7 = (double)FUN_140056c40(lVar1,4);
    }
    lVar1 = *(longlong *)(lVar6 + 400);
    fVar9 = (float)dVar7;
    puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x40);
    if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x48))) {
        dVar7 = (double)FUN_140056c40(lVar1,5);
    }
    dVar8 = (double)((ulonglong)dVar7 & 0xffffffff00000000 | (ulonglong)(uint)(float)dVar7);
    local_1f8 = ZEXT1216(CONCAT48((float)dVar7,CONCAT44(fVar9,fVar12)));
    lVar1 = *(longlong *)(lVar6 + 400);
    puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x50);
    if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x58))) {
        dVar8 = (double)FUN_140056c40(lVar1,6);
    }
    lVar1 = *(longlong *)(lVar6 + 400);
    fVar12 = (float)dVar8;
    puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x60);
    if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x68))) {
        dVar8 = (double)FUN_140056c40(SUB84(dVar8,0),lVar1,7);
    }
    lVar1 = *(longlong *)(lVar6 + 400);
    fVar9 = (float)dVar8;
    puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x70);
    dVar7 = (double)CONCAT44(uVar16,uVar15);
    if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) &&
         (dVar7 = (double)CONCAT44(uVar16,uVar15), puVar2 != &DAT_140a12138)) &&
        (dVar7 = (double)CONCAT44(uVar16,uVar15), 0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x78))) {
        dVar7 = (double)FUN_140056c40(lVar1,8);
    }
    fVar14 = DAT_140c3b438 * 0.005555556;
    fVar13 = 0.5;
    fVar10 = fVar14 * fVar9 * 0.5;
    fVar9 = (float)FUN_1408fe3d0(fVar10);
    fVar10 = (float)FUN_1408fc950(fVar10);
    fVar11 = fVar14 * fVar12 * fVar13;
    fVar12 = (float)FUN_1408fe3d0(fVar11);
    fVar11 = (float)FUN_1408fc950(fVar11);
    fVar13 = (float)dVar7 * fVar14 * fVar13;
    fVar14 = (float)FUN_1408fe3d0(fVar13);
    fVar13 = (float)FUN_1408fc950(fVar13);
    local_238 = fVar9 * fVar14 * fVar11 + fVar13 * fVar12 * fVar10;
    local_234 = fVar14 * fVar11 * fVar10 - fVar9 * fVar13 * fVar12;
    local_22c = fVar9 * fVar14 * fVar12 + fVar13 * fVar11 * fVar10;
    local_230 = fVar9 * fVar13 * fVar11 - fVar14 * fVar12 * fVar10;
    lVar6 = *(longlong *)(lVar6 + 400);
    puVar2 = (undefined8 *)(*(longlong *)(lVar6 + 0x18) + 0x80);
    dVar7 = (double)CONCAT44(uVar16,uVar15);
    if (((puVar2 < *(undefined8 **)(lVar6 + 0x10)) &&
         (dVar7 = (double)CONCAT44(uVar16,uVar15), puVar2 != &DAT_140a12138)) &&
        (dVar7 = (double)CONCAT44(uVar16,uVar15), 0 < *(int *)(*(longlong *)(lVar6 + 0x18) + 0x88))) {
        dVar7 = (double)FUN_140056c40(lVar6,9);
    }
    local_168 = (float)dVar7;
    local_218 = &local_238;
    uStack544 = 0;
    uStack528 = local_1f8;
    local_228 = (undefined *)CONCAT44(local_228._4_4_,local_168);
    local_218._4_4_ = (undefined4)((ulonglong)local_218 >> 0x20);
    uStack528._4_4_ = (undefined4)((ulonglong)uStack528 >> 0x20);
    uStack356 = local_228._4_4_;
    uStack352 = 0;
    uStack348 = 0;
    local_158 = (undefined4)local_218;
    uStack340 = local_218._4_4_;
    uStack336 = (undefined4)uStack528;
    uStack332 = uStack528._4_4_;
    uVar3 = FUN_1405b1510(&DAT_140c7dfb0);
    local_100 = FUN_1405b0600(uVar3,local_1a8);
    FUN_1401b0590(&local_168,local_148);
    local_228 = local_148;
    uStack544 = local_100;
    local_108 = local_228;
    FUN_1401afb10(&local_108,local_1e8);
    puVar4 = (undefined4 *)FUN_1404b7ec0();
    FUN_1406ae160(param_1,*puVar4);
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack600);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407333a0(longlong param_1)

{
    undefined4 uVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    uVar10 = (ulonglong)local_20;
    uVar7 = *(longlong *)(DAT_140c659f0 + 0x100) - *(longlong *)(DAT_140c659f0 + 0xf8) >> 3;
    iVar2 = (int)uVar7;
    if (iVar2 == 0) {
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_20);
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        *puVar8 = *puVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar4 + 1);
    }
    else {
        uVar9 = 0;
        if (iVar2 != 0) {
            do {
                if (((uint)uVar9 <
                     (uint)(*(longlong *)(DAT_140c659f0 + 0x100) - *(longlong *)(DAT_140c659f0 + 0xf8) >> 3)
                    ) && (lVar5 = *(longlong *)
                        (*(longlong *)(DAT_140c659f0 + 0xf8) + (uVar9 & 0xffffffff) * 8),
                        lVar5 != 0)) {
                    uVar1 = *(undefined4 *)(lVar5 + 8);
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c65068 != 0) || (iVar2 = FUN_140206a00(), iVar2 < 0)) goto LAB_1407334e5;
                        lVar5 = (**(code **)(*DAT_140c64258 + 0x18))(DAT_140c64258,uVar1);
                    }
                    else {
                        lVar5 = (*DAT_140c63840)(&PTR_u_HousingPlugItem_140a6a980,uVar1,DAT_140c63858);
                    }
                }
                else {
                    LAB_1407334e5:
                    lVar5 = 0;
                }
                if (lVar5 != 0) {
                    FUN_1406a6c80(param_1,lVar5,&local_28,0);
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < (uVar7 & 0xffffffff));
            uVar10 = (ulonglong)local_20;
            param_1 = local_18;
        }
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar10);
        puVar4 = *(undefined8 **)(param_1 + 0x10);
        *puVar4 = *puVar6;
        puVar8 = (undefined8 *)(ulonglong)*(uint *)(puVar6 + 1);
        *(uint *)(puVar4 + 1) = *(uint *)(puVar6 + 1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar8,uVar10 & 0xffffffff);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140734230(longlong param_1,int param_2,undefined8 param_3)

{
    short sVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    uint uVar4;
    uint uVar5;
    int iVar6;
    longlong lVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    longlong lVar11;
    short *psVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    undefined8 *puVar16;
    undefined8 *puVar17;
    undefined local_88 [8];
    longlong local_80;
    undefined local_68 [8];
    short *local_60;

    puVar17 = (undefined8 *)0x0;
    uVar4 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c646a8 == 0) && (iVar6 = FUN_140203b40(), -1 < iVar6)) {
            uVar4 = (**(code **)(*DAT_140c65008 + 0x28))();
        }
    }
    else {
        uVar4 = (*DAT_140c63838)(&PTR_u_HousingDecorInfo_140a6a718,DAT_140c63858);
    }
    if (uVar4 != 0) {
        puVar10 = puVar17;
        if (*(undefined8 **)(DAT_140c63650 + 0x300) != (undefined8 *)0x0) {
            puVar16 = puVar17;
            do {
                if (*(longlong *)
                        (*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar16 * 8) + 400) ==
                    param_1) {
                    puVar10 = *(undefined8 **)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar16 * 8);
                    break;
                }
                puVar16 = (undefined8 *)(ulonglong)((int)puVar16 + 1);
            } while (puVar16 < *(undefined8 **)(DAT_140c63650 + 0x300));
        }
        lVar11 = puVar10[0x32];
        lVar7 = FUN_14018f0e0(local_88,0);
        uVar8 = *(undefined8 *)(lVar7 + 8);
        puVar10 = *(undefined8 **)(lVar11 + 0x18);
        if (((puVar10 < *(undefined8 **)(lVar11 + 0x10)) && (puVar10 != &DAT_140a12138)) &&
            (0 < *(int *)(puVar10 + 1))) {
            uVar8 = FUN_140056bb0(lVar11,1);
        }
        FUN_14018f2d0(local_68,uVar8);
        if (local_80 != 0) {
            FUN_14018b900(local_80,0);
        }
        puVar10 = puVar17;
        if (local_60 != (short *)0x0) {
            sVar1 = *local_60;
            puVar16 = puVar17;
            while (sVar1 != 0) {
                puVar16 = (undefined8 *)((longlong)puVar16 + 1);
                sVar1 = local_60[(longlong)puVar16];
            }
            puVar9 = (undefined8 *)FUN_14018b280((longlong)puVar16 * 2 + 0x12,0);
            if (puVar9 != (undefined8 *)0x0) {
                *puVar9 = &PTR_LAB_140b55060;
                puVar9[1] = puVar16;
                puVar10 = puVar9;
            }
            puVar10 = puVar10 + 2;
            FUN_1407db590(puVar10,local_60,(longlong)puVar16 * 2);
            *(short *)((longlong)puVar16 * 2 + (longlong)puVar10) = 0;
            FUN_14018b900(local_60,0);
        }
        FUN_1400585e0(param_1);
        lVar11 = FUN_1405b1510(&DAT_140c7dfb0);
        if ((undefined8 *)(ulonglong)uVar4 != (undefined8 *)0x0) {
            do {
                puVar16 = (undefined8 *)0x0;
                if (DAT_140c63838 == (code *)0x0) {
                    if ((_DAT_140c646a8 == 0) && (iVar6 = FUN_140203b40(), -1 < iVar6)) {
                        uVar5 = (**(code **)(*DAT_140c65008 + 0x28))();
                        goto LAB_14073445e;
                    }
                    LAB_1407344ae:
                    lVar7 = 0;
                }
                else {
                    uVar5 = (*DAT_140c63838)(&PTR_u_HousingDecorInfo_140a6a718);
                    LAB_14073445e:
                    if (uVar5 <= (uint)puVar17) goto LAB_1407344ae;
                    if (DAT_140c63848 == (code *)0x0) {
                        if ((_DAT_140c646a8 != 0) || (iVar6 = FUN_140203b40(), iVar6 < 0)) goto LAB_1407344ae;
                        lVar7 = (**(code **)(*DAT_140c65008 + 0x20))();
                    }
                    else {
                        lVar7 = (*DAT_140c63848)(&PTR_u_HousingDecorInfo_140a6a718,
                                                 (ulonglong)puVar17 & 0xffffffff,DAT_140c63858);
                    }
                }
                if (((lVar7 != 0) && ((*(uint *)(lVar7 + 0x10) & 1) == 0)) &&
                    (((*(uint *)(lVar7 + 0x10) & 8) == 0 || ((lVar11 != 0 && (*(int *)(lVar11 + 0x30) != 5)))
                    ))) {
                    psVar12 = (short *)FUN_14034bdd0();
                    puVar9 = puVar16;
                    if (psVar12 != (short *)0x0) {
                        sVar1 = *psVar12;
                        puVar14 = puVar16;
                        while (sVar1 != 0) {
                            puVar14 = (undefined8 *)((longlong)puVar14 + 1);
                            sVar1 = psVar12[(longlong)puVar14];
                        }
                        puVar13 = (undefined8 *)FUN_14018b280((longlong)puVar14 * 2 + 0x12,0);
                        if (puVar13 != (undefined8 *)0x0) {
                            puVar13[1] = puVar14;
                            *puVar13 = &PTR_LAB_140b55060;
                            puVar9 = puVar13;
                        }
                        puVar9 = puVar9 + 2;
                        FUN_1407db590(puVar9,psVar12,(longlong)puVar14 * 2);
                        *(undefined2 *)((longlong)puVar14 * 2 + (longlong)puVar9) = 0;
                    }
                    if ((param_2 == 0) || (*(int *)(lVar7 + 8) == param_2)) {
                        if (puVar10 == (undefined8 *)&DAT_1409f91bc) {
                            LAB_1407345db:
                            FUN_1406ad5f0(param_1,lVar7,param_3);
                        }
                        else {
                            if ((puVar10 != (undefined8 *)0x0) && (sVar1 = *(short *)puVar10, sVar1 == 0)) {
                                do {
                                    if (sVar1 == 0) goto LAB_1407345db;
                                    sVar1 = *(short *)((longlong)puVar10 + (longlong)puVar16 * 2 + 2);
                                    psVar12 = &DAT_1409f91be + (longlong)puVar16;
                                    puVar16 = (undefined8 *)((longlong)puVar16 + 1);
                                } while (sVar1 == *psVar12);
                            }
                            uVar2 = puVar9[-1];
                            uVar3 = puVar10[-1];
                            if (uVar3 <= uVar2) {
                                uVar15 = 0;
                                puVar16 = puVar9;
                                do {
                                    iVar6 = FUN_14018e3e0(puVar16,puVar10,uVar3);
                                    if ((iVar6 == 0) && (*(short *)((longlong)puVar10 + uVar3 * 2) == 0))
                                        goto LAB_1407345db;
                                    uVar15 = uVar15 + 1;
                                    puVar16 = (undefined8 *)((longlong)puVar16 + 2);
                                } while (uVar15 <= uVar2 - uVar3);
                            }
                        }
                    }
                    if (puVar9 != (undefined8 *)0x0) {
                        (**(code **)(puVar9[-2] + 8))(puVar9 + -2);
                    }
                }
                puVar17 = (undefined8 *)((longlong)puVar17 + 1);
            } while (puVar17 < (undefined8 *)(ulonglong)uVar4);
        }
        if (puVar10 != (undefined8 *)0x0) {
            (**(code **)(puVar10[-2] + 8))(puVar10 + -2);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140734670(longlong param_1,uint param_2,short **param_3)

{
    short *psVar1;
    short sVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    uint uVar5;
    int iVar6;
    longlong lVar7;
    undefined8 uVar8;
    int *piVar9;
    short *psVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    uint uVar17;
    int local_68;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;

    lVar7 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if (lVar7 == 0) {
        psVar10 = *param_3;
        if (psVar10 != (short *)0x0) {
            (**(code **)(*(longlong *)(psVar10 + -8) + 8))(psVar10 + -8);
        }
        return 0;
    }
    local_58 = &PTR_FUN_140b569f0;
    local_68 = 1;
    local_40 = 1;
    local_48 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar15 = *(undefined8 **)(param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar15 + 1) = 5;
    *puVar15 = uVar8;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0();
    uVar14 = 0;
    uVar5 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar13 = uVar14;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar13 * 8) + 400) ==
                param_1) break;
            uVar13 = (ulonglong)((int)uVar13 + 1);
        } while (uVar13 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    local_50 = uVar4;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c63a64 == 0) {
            iVar6 = FUN_140207b00();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c63e68 + 0x28))();
            }
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_HousingWallpaperInfo_140a6aa60);
    }
    lVar7 = param_1;
    if (uVar5 != 0) {
        do {
            puVar15 = (undefined8 *)0x0;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63a64 == 0) && (iVar6 = FUN_140207b00(), -1 < iVar6)) {
                    piVar9 = (int *)(**(code **)(*DAT_140c63e68 + 0x20))();
                    goto LAB_14073481b;
                }
            }
            else {
                piVar9 = (int *)(*DAT_140c63848)(&PTR_u_HousingWallpaperInfo_140a6aa60,uVar14,DAT_140c63858)
                        ;
                LAB_14073481b:
                if (((piVar9 != (int *)0x0) && ((piVar9[6] & param_2) != 0)) && (*piVar9 != 5)) {
                    psVar10 = (short *)FUN_14034bdd0();
                    puVar12 = puVar15;
                    if (psVar10 != (short *)0x0) {
                        sVar2 = *psVar10;
                        puVar16 = puVar15;
                        while (sVar2 != 0) {
                            puVar16 = (undefined8 *)((longlong)puVar16 + 1);
                            sVar2 = psVar10[(longlong)puVar16];
                        }
                        puVar11 = (undefined8 *)FUN_14018b280((longlong)puVar16 * 2 + 0x12,0);
                        if (puVar11 != (undefined8 *)0x0) {
                            *puVar11 = &PTR_LAB_140b55060;
                            puVar11[1] = puVar16;
                            puVar12 = puVar11;
                        }
                        puVar12 = puVar12 + 2;
                        FUN_1407db590(puVar12,psVar10,(longlong)puVar16 * 2);
                        *(undefined2 *)((longlong)puVar16 * 2 + (longlong)puVar12) = 0;
                    }
                    psVar10 = *param_3;
                    if (psVar10 == (short *)&DAT_1409f91ac) {
                        LAB_14073490b:
                        iVar6 = FUN_1406ad9f0(param_1,local_68,piVar9,&local_58);
                        if (iVar6 != 0) {
                            local_68 = local_68 + 1;
                        }
                    }
                    else {
                        if ((psVar10 != (short *)0x0) && (sVar2 = *psVar10, puVar16 = puVar15, sVar2 == 0)) {
                            do {
                                if (sVar2 == 0) goto LAB_14073490b;
                                sVar2 = psVar10[(longlong)puVar16 + 1];
                                psVar1 = &DAT_1409f91ae + (longlong)puVar16;
                                puVar16 = (undefined8 *)((longlong)puVar16 + 1);
                            } while (sVar2 == *psVar1);
                        }
                        uVar13 = puVar12[-1];
                        uVar3 = *(ulonglong *)(psVar10 + -4);
                        if (uVar3 <= uVar13) {
                            puVar16 = puVar12;
                            do {
                                iVar6 = FUN_14018e3e0(puVar16,psVar10,uVar3);
                                if ((iVar6 == 0) && (psVar10[uVar3] == 0)) goto LAB_14073490b;
                                puVar15 = (undefined8 *)((longlong)puVar15 + 1);
                                puVar16 = (undefined8 *)((longlong)puVar16 + 2);
                            } while (puVar15 <= (undefined8 *)(uVar13 - uVar3));
                        }
                    }
                    if (puVar12 != (undefined8 *)0x0) {
                        (**(code **)(puVar12[-2] + 8))(puVar12 + -2);
                    }
                }
            }
            uVar17 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar17;
            lVar7 = local_48;
            uVar4 = local_50;
        } while (uVar17 < uVar5);
    }
    puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),uVar4);
    puVar15 = *(undefined8 **)(lVar7 + 0x10);
    uVar8 = *puVar12;
    *puVar15 = uVar8;
    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
    FUN_1400579e0(lVar7,uVar8,uVar4);
    psVar10 = *param_3;
    if (psVar10 != (short *)0x0) {
        (**(code **)(*(longlong *)(psVar10 + -8) + 8))(psVar10 + -8);
    }
    return 1;
}



undefined8 FUN_140734ec0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined4 uVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    lVar3 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if (lVar3 != 0) {
        lVar3 = FUN_1402074e0(*(undefined4 *)(lVar3 + 0x44));
        if (lVar3 != 0) {
            lVar3 = FUN_140203da0(*(undefined4 *)(lVar3 + 4));
            if (lVar3 != 0) {
                uVar5 = *(undefined4 *)(lVar3 + 8);
                goto LAB_140734f61;
            }
        }
    }
    uVar5 = 0x3f;
    LAB_140734f61:
    FUN_140734230(param_1,uVar5,&local_28);
    lVar3 = local_18;
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
    puVar1 = *(undefined8 **)(lVar3 + 0x10);
    *puVar1 = *puVar4;
    uVar5 = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)(puVar1 + 1) = uVar5;
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400579e0(lVar3,uVar5,local_20);
    return 1;
}



undefined8 FUN_140734fc0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined4 uVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    lVar3 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if (lVar3 != 0) {
        lVar3 = FUN_1402074e0(*(undefined4 *)(lVar3 + 0x44));
        if (lVar3 != 0) {
            lVar3 = FUN_140203da0(*(undefined4 *)(lVar3 + 8));
            if (lVar3 != 0) {
                uVar5 = *(undefined4 *)(lVar3 + 8);
                goto LAB_140735061;
            }
        }
    }
    uVar5 = 0x3f;
    LAB_140735061:
    FUN_140734230(param_1,uVar5,&local_28);
    lVar3 = local_18;
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
    puVar1 = *(undefined8 **)(lVar3 + 0x10);
    *puVar1 = *puVar4;
    uVar5 = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)(puVar1 + 1) = uVar5;
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400579e0(lVar3,uVar5,local_20);
    return 1;
}



ulonglong FUN_1407350c0(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    undefined8 *local_res10;
    undefined local_58 [8];
    longlong local_50;
    undefined local_38 [8];
    short *local_30;

    local_res10 = (undefined8 *)0x0;
    puVar5 = local_res10;
    if (*(undefined8 **)(DAT_140c63650 + 0x300) != (undefined8 *)0x0) {
        puVar9 = local_res10;
        do {
            if (*(longlong *)
                    (*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar9 * 8) + 400) ==
                param_1) {
                puVar5 = *(undefined8 **)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar9 * 8);
                break;
            }
            puVar9 = (undefined8 *)(ulonglong)((int)puVar9 + 1);
        } while (puVar9 < *(undefined8 **)(DAT_140c63650 + 0x300));
    }
    uVar3 = FUN_1400f26a0(puVar5 + 0x30,1);
    puVar9 = local_res10;
    switch(uVar3) {
        case 1:
            puVar9 = (undefined8 *)0x1;
            break;
        case 2:
            puVar9 = (undefined8 *)&DAT_00000004;
            break;
        case 3:
            puVar9 = (undefined8 *)&DAT_00000008;
            break;
        case 4:
            puVar9 = (undefined8 *)&DAT_00000010;
            break;
        case 5:
            puVar9 = (undefined8 *)&DAT_00000020;
            break;
        case 6:
            puVar9 = (undefined8 *)&DAT_00000080;
    }
    lVar2 = puVar5[0x32];
    lVar4 = FUN_14018f0e0(local_58,0);
    uVar6 = *(undefined8 *)(lVar4 + 8);
    puVar5 = (undefined8 *)(*(longlong *)(lVar2 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(lVar2 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar2 + 0x18) + 0x18))) {
        uVar6 = FUN_140056bb0(lVar2,2);
    }
    FUN_14018f2d0(local_38,uVar6);
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    if (local_30 == (short *)0x0) {
        local_res10 = (undefined8 *)0x0;
    }
    else {
        sVar1 = *local_30;
        puVar5 = local_res10;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = local_30[(longlong)puVar5];
        }
        puVar7 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = puVar5;
            *puVar7 = &PTR_LAB_140b55060;
            local_res10 = puVar7;
        }
        local_res10 = local_res10 + 2;
        FUN_1407db590(local_res10,local_30,(longlong)puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)local_res10) = 0;
    }
    uVar8 = FUN_140734670(param_1,puVar9,&local_res10);
    if (local_30 != (short *)0x0) {
        FUN_14018b900(local_30,0);
        uVar8 = uVar8 & 0xffffffff;
    }
    return uVar8;
}



undefined8 FUN_1407355f0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined4 uVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    lVar3 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
    if (lVar3 != 0) {
        lVar3 = FUN_1402074e0(*(undefined4 *)(lVar3 + 0x44));
        if (lVar3 != 0) {
            lVar3 = FUN_140203da0(*(undefined4 *)(lVar3 + 0xc));
            if (lVar3 != 0) {
                uVar5 = *(undefined4 *)(lVar3 + 8);
                goto LAB_140735691;
            }
        }
    }
    uVar5 = 0x3f;
    LAB_140735691:
    FUN_140734230(param_1,uVar5,&local_28);
    lVar3 = local_18;
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
    puVar1 = *(undefined8 **)(lVar3 + 0x10);
    *puVar1 = *puVar4;
    uVar5 = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)(puVar1 + 1) = uVar5;
    *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
    FUN_1400579e0(lVar3,uVar5,local_20);
    return 1;
}



undefined8 FUN_140735880(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    if (DAT_140c7dfe0 == 0) {
        FUN_140734230(param_1,0xc,&local_28);
        FUN_140734230(param_1,0x36,&local_28);
        uVar3 = 0x16;
    }
    else {
        uVar3 = 0x35;
    }
    FUN_140734230(param_1,uVar3,&local_28);
    lVar5 = local_18;
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
    puVar2 = *(undefined8 **)(lVar5 + 0x10);
    *puVar2 = *puVar4;
    uVar1 = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)(puVar2 + 1) = uVar1;
    *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
    FUN_1400579e0(lVar5,uVar1,local_20);
    return 1;
}



undefined8 FUN_140735cc0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    double dVar7;
    int local_res8;
    int iStackX12;
    undefined **local_48;
    int local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_30 = 1;
    local_48 = &PTR_FUN_140b569f0;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_40 = FUN_1400578c0(param_1);
    lVar4 = param_1;
    for (lVar2 = *(longlong *)(DAT_140c659f0 + 0x1f0); lVar2 != 0;
         lVar2 = *(longlong *)(lVar2 + 0x100)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar6 + 1) = 5;
        *puVar6 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        FUN_1404b4e40(lVar2);
        FUN_1400fb1d0(&local_48);
        FUN_1400579e0();
        lVar4 = local_38;
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x20) + 0xa0);
    if (local_40 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(local_40 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar7 = (double)local_40;
        if (dVar7 == 0.0) {
            puVar6 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar7 >> 0x20);
            local_res8 = SUB84(dVar7,0);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (dVar7 == (double)puVar6[2])) goto LAB_140735e73;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_140735e73:
    puVar3 = *(undefined8 **)(lVar4 + 0x10);
    *puVar3 = *puVar6;
    uVar1 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400579e0(lVar4,uVar1,local_40);
    return 1;
}



undefined8 FUN_140735fb0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    FUN_140056d60(param_1,1);
    lVar1 = FUN_1404b7220();
    if (lVar1 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingResult",&DAT_1409ebb6c,
                      &DAT_1409f9264,3);
        return 0;
    }
    local_18 = 0;
    local_28 = *(undefined8 *)(lVar1 + 0xb8);
    local_20 = *(undefined8 *)(lVar1 + 0xc0);
    FUN_1403f4740(DAT_140c65898,0x515,&local_28);
    return 0;
}



undefined8 FUN_140736050(void)

{
    undefined4 local_res10 [6];

    local_res10[0] = 1;
    FUN_1403f4740(DAT_140c65898,0x513,local_res10);
    return 0;
}



undefined8 FUN_140736080(void)

{
    undefined4 local_res10 [6];

    local_res10[0] = 0;
    FUN_1403f4740(DAT_140c65898,0x513,local_res10);
    return 0;
}



undefined8 FUN_1407360b0(undefined8 param_1)

{
    uint uVar1;
    longlong lVar2;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    FUN_140056d60(param_1,1);
    lVar2 = FUN_1404b7220();
    if (lVar2 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingResult",&DAT_1409ebb6c,
                      &DAT_1409f9254,3);
        return 0;
    }
    uVar1 = FUN_140056d60(param_1,2);
    if (uVar1 < 3) {
        local_18 = 0;
        local_28 = *(undefined8 *)(lVar2 + 0xb8);
        local_20 = *(undefined8 *)(lVar2 + 0xc0);
        local_10 = (ulonglong)uVar1;
        FUN_1403f4740(DAT_140c65898,0x518,&local_28);
    }
    return 0;
}



undefined8 FUN_140736180(undefined8 param_1)

{
    longlong lVar1;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    FUN_140056d60(param_1,1);
    lVar1 = FUN_1404b7220();
    if (lVar1 == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingResult",&DAT_1409ebb6c,
                      &DAT_1409f9244,3);
        return 0;
    }
    local_48 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    local_40 = *(undefined8 *)(lVar1 + 0xb8);
    local_38 = *(undefined8 *)(lVar1 + 0xc0);
    FUN_1403f4900(DAT_140c65898,0x531,&local_48);
    return 0;
}



void FUN_140736230(undefined8 param_1)

{
    longlong lVar1;
    undefined4 local_res10 [6];

    lVar1 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar1 == 0) {
        return;
    }
    local_res10[0] = *(undefined4 *)(lVar1 + 0xbc);
    FUN_1404339c0(param_1,local_res10);
    return;
}



undefined8 FUN_140736270(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 local_18;
    undefined4 local_10;

    iVar1 = FUN_1400f26a0(*(longlong *)(DAT_140c65898 + 0x7340) + 0x180);
    lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
    if (lVar3 == 0) {
        return 0;
    }
    if ((*(longlong *)(lVar3 + 0xe8) == 0) || (*(uint *)(lVar3 + 0x110) <= iVar1 - 1U)) {
        lVar3 = 0;
    }
    else {
        lVar3 = (ulonglong)(iVar1 - 1U) * 0xc0 + *(longlong *)(lVar3 + 0xe8);
    }
    if (lVar3 == 0) {
        return 0;
    }
    lVar2 = FUN_140059170(param_1,0x10);
    *(longlong *)(lVar2 + 8) = lVar3;
    lVar3 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.HousingPlot",0x10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar3 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



void FUN_140736310(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    uVar1 = FUN_1400f26a0(*(longlong *)(DAT_140c65898 + 0x7340) + 0x180,1);
    lVar2 = FUN_140206c60(uVar1);
    if (lVar2 == 0) {
        return;
    }
    FUN_1406a6c80(param_1,lVar2,0,1);
    return;
}



undefined8 FUN_140736370(void)

{
    undefined local_res10 [24];

    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x80) == 0x14)) {
        local_res10[0] = 0;
        FUN_1403f4900(DAT_140c65898,0x52e,local_res10);
    }
    return 0;
}



undefined8 FUN_1407363b0(void)

{
    longlong lVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar1 = FUN_1405b1510();
    if (lVar1 != 0) {
        local_18 = 0;
        local_28 = *(undefined8 *)(lVar1 + 8);
        local_20 = *(undefined8 *)(lVar1 + 0x10);
        FUN_1403f4900(DAT_140c65898,0x525,&local_28);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140736410(void)

{
    undefined local_res10 [24];

    if ((DAT_140dc4d04 & 1) == 0) {
        DAT_140dc4d04 = DAT_140dc4d04 | 1;
        DAT_140dc4d0c = 0;
        _DAT_140dc4d10 = 1000;
        DAT_140dc4d08 = DAT_140c636a8 + -1000;
        _DAT_140dc4d14 = 1;
        DAT_140dc4d18 = 1000;
        FUN_1407dd89c();
    }
    if ((uint)(DAT_140c636a8 - DAT_140dc4d08) < DAT_140dc4d18) {
        if (DAT_140dc4d0c == _DAT_140dc4d14) {
            return 0;
        }
        DAT_140dc4d0c = DAT_140dc4d0c + 1;
    }
    else if ((uint)(DAT_140c636a8 - DAT_140dc4d08) < _DAT_140dc4d10) {
        DAT_140dc4d08 = DAT_140dc4d08 + DAT_140dc4d18;
    }
    else {
        DAT_140dc4d08 = DAT_140c636a8;
        DAT_140dc4d0c = 1;
    }
    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x80) == 0x14)) {
        local_res10[0] = 0;
        FUN_1403f4740(DAT_140c65898,0x52d,local_res10);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140736500(void)

{
    undefined local_res10 [24];

    if ((DAT_140dc4d1c & 1) == 0) {
        DAT_140dc4d1c = DAT_140dc4d1c | 1;
        DAT_140dc4d24 = 0;
        _DAT_140dc4d28 = 1000;
        DAT_140dc4d20 = DAT_140c636a8 + -1000;
        _DAT_140dc4d2c = 1;
        DAT_140dc4d30 = 1000;
        FUN_1407dd89c();
    }
    if ((uint)(DAT_140c636a8 - DAT_140dc4d20) < DAT_140dc4d30) {
        if (DAT_140dc4d24 == _DAT_140dc4d2c) {
            return 0;
        }
        DAT_140dc4d24 = DAT_140dc4d24 + 1;
    }
    else if ((uint)(DAT_140c636a8 - DAT_140dc4d20) < _DAT_140dc4d28) {
        DAT_140dc4d20 = DAT_140dc4d20 + DAT_140dc4d30;
    }
    else {
        DAT_140dc4d20 = DAT_140c636a8;
        DAT_140dc4d24 = 1;
    }
    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x80) == 0x14)) {
        local_res10[0] = 0;
        FUN_1403f4740(DAT_140c65898,0x52c,local_res10);
    }
    return 0;
}



undefined8 FUN_1407365f0(void)

{
    undefined local_res10 [24];

    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x80) == 0x14)) {
        local_res10[0] = 0;
        FUN_1403f4740(DAT_140c65898,0x52a,local_res10);
    }
    return 0;
}



undefined8 FUN_140736630(undefined8 param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    iVar2 = FUN_140056d60(param_1,1);
    if ((iVar2 - 1U <
         (uint)(*(longlong *)(DAT_140c659f0 + 0x208) - *(longlong *)(DAT_140c659f0 + 0x200) >> 3)) &&
        (puVar1 = *(undefined8 **)(*(longlong *)(DAT_140c659f0 + 0x200) + (ulonglong)(iVar2 - 1U) * 8),
                puVar1 != (undefined8 *)0x0)) {
        local_48 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        local_40 = *puVar1;
        local_38 = puVar1[1];
        FUN_1403f4900(DAT_140c65898,0x531,&local_48);
        return 0;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingResult",&DAT_1409ebb6c,
                  &DAT_1409f9234,3);
    return 0;
}



undefined8 FUN_140736700(undefined8 param_1)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    iVar2 = FUN_140056d60(param_1,1);
    if ((iVar2 - 1U <
         (uint)(*(longlong *)(DAT_140c659f0 + 0x228) - *(longlong *)(DAT_140c659f0 + 0x220) >> 3)) &&
        (puVar1 = *(undefined8 **)(*(longlong *)(DAT_140c659f0 + 0x220) + (ulonglong)(iVar2 - 1U) * 8),
                puVar1 != (undefined8 *)0x0)) {
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_18 = 0;
        local_28 = *puVar1;
        local_20 = puVar1[1];
        FUN_1403f4900(DAT_140c65898,0x531,&local_48);
        return 0;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingResult",&DAT_1409ebb6c,
                  &DAT_1409f921c,3);
    return 0;
}



undefined8 FUN_1407367d0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined8 local_48;
    longlong local_40;
    longlong local_38;
    longlong local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    uVar2 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(&local_48,uVar2);
    lVar1 = local_40;
    if ((local_38 - local_40 & 0xfffffffffffffffeU) == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingResult",&DAT_1409ebb6c,
                      &DAT_1409f91e4,3);
    }
    else {
        local_30 = local_40;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_28 = 0;
        local_20 = 0;
        local_18 = 0;
        FUN_1403f4900(DAT_140c65898,0x531,&local_48);
    }
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    return 0;
}



undefined8 FUN_140736890(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined8 local_48;
    longlong local_40;
    longlong local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    longlong local_18;

    uVar2 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(&local_48,uVar2);
    lVar1 = local_40;
    if ((local_38 - local_40 & 0xfffffffffffffffeU) == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingResult",&DAT_1409ebb6c,
                      &DAT_1409f91cc,0x3e);
    }
    else {
        local_18 = local_40;
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        local_28 = 0;
        local_20 = 0;
        FUN_1403f4900(DAT_140c65898,0x531,&local_48);
    }
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    return 0;
}



undefined8 FUN_140736950(void)

{
    FUN_1400f26a0(*(longlong *)(DAT_140c65898 + 0x7340) + 0x180);
    FUN_1404b6b90();
    return 0;
}



undefined8 FUN_140736990(void)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    undefined4 uStack84;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    uVar2 = 0;
    if (DAT_140c7de20 != 0) {
        while (puVar1 = *(undefined8 **)(DAT_140c7de18 + uVar2 * 8), *(int *)(puVar1 + 2) != 7) {
            uVar2 = uVar2 + 1;
            if (DAT_140c7de20 <= uVar2) {
                return 0;
            }
        }
        if (puVar1 != (undefined8 *)0x0) {
            local_20 = *puVar1;
            local_48 = 0;
            local_40 = 0;
            local_38 = 0;
            local_30 = 0;
            local_18 = 0;
            local_28 = CONCAT44(uStack84,*(undefined4 *)(DAT_140c635f0 + 0x1680));
            FUN_1403f4900(DAT_140c65898,0x531,&local_48);
        }
    }
    return 0;
}



undefined8 FUN_140736a40(void)

{
    FUN_1404b6c80();
    return 0;
}



undefined8 FUN_140736b40(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined local_res10 [24];

    plVar2 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar2 = *(longlong **)(param_1 + 0x18);
    }
    if ((*(int *)(plVar2 + 1) != 3) &&
        ((*(int *)(plVar2 + 1) != 4 || (iVar1 = FUN_14005ac80(*plVar2 + 0x20,local_res10), iVar1 == 0))
        )) {
        FUN_1404b8870();
        return 0;
    }
    FUN_1404b8870();
    return 0;
}



undefined8 FUN_140736c30(longlong param_1)

{
    bool bVar1;
    longlong lVar2;
    undefined8 *puVar3;

    puVar3 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar3 = *(undefined8 **)(param_1 + 0x18);
    }
    if ((*(int *)(puVar3 + 1) == 0) || ((*(int *)(puVar3 + 1) == 1 && (*(int *)puVar3 == 0)))) {
        bVar1 = false;
    }
    else {
        bVar1 = true;
    }
    lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc0) != 4)) {
        if (bVar1) {
            FUN_1404c98f0();
            return 0;
        }
        FUN_1404c98f0();
    }
    return 0;
}



undefined8 FUN_140736cb0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined8 *puVar3;
    longlong lVar4;

    lVar4 = FUN_1405b1510(&DAT_140c7dfb0);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0xc0) != 4)) {
        pdVar2 = *(double **)(param_1 + 0x10);
        iVar1 = *(int *)(DAT_140c659f8 + 0xd4);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    *puVar3 = 0x3ff0000000000000;
    *(undefined4 *)(puVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140736d30(longlong param_1)

{
    longlong **pplVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    double *pdVar5;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    pdVar5 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar5 = *(double **)(param_1 + 0x18);
    }
    if (*(int *)(pdVar5 + 1) == 3) {
        LAB_140736d84:
        iVar2 = (int)*pdVar5;
    }
    else {
        if (*(int *)(pdVar5 + 1) == 4) {
            iVar2 = FUN_14005ac80((longlong)*pdVar5 + 0x20,local_res10);
            if (iVar2 != 0) {
                local_10 = 3;
                pdVar5 = &local_18;
                local_18 = local_res10[0];
                goto LAB_140736d84;
            }
        }
        iVar2 = 0;
    }
    lVar3 = FUN_1405b1510(&DAT_140c7dfb0);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0xc0) != 4)) {
        pplVar1 = (longlong **)(DAT_140c659f8 + 200);
        *(int *)(DAT_140c659f8 + 0xd4) = iVar2;
        if (*pplVar1 != (longlong *)0x0) {
            plVar4 = (longlong *)(**(code **)(**pplVar1 + 0x70))();
            (**(code **)(*plVar4 + 0x58))(plVar4,iVar2);
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140736de0(longlong param_1)

{
    undefined4 uVar1;
    double *pdVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;
    int *piVar10;
    ulonglong uVar11;
    uint uVar12;
    undefined local_48 [8];
    longlong local_40;
    longlong local_38;
    undefined8 local_30;
    ulonglong uVar13;

    lVar3 = DAT_140c7dfe0;
    uVar11 = 0;
    iVar5 = 0;
    if (DAT_140c7dfe0 != 0) {
        uVar4 = *(uint *)(DAT_140c7dfe0 + 0x110);
        uVar8 = uVar11;
        uVar13 = uVar11;
        if (uVar4 != 0) {
            do {
                if (((*(longlong *)(lVar3 + 0xe8) != 0) && ((uint)uVar13 < uVar4)) &&
                    (uVar13 * 0xc0 + *(longlong *)(lVar3 + 0xe8) != 0)) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c65068 != 0) || (iVar5 = FUN_140206a00(), iVar5 < 0)) goto LAB_140736f3c;
                        lVar6 = (**(code **)(*DAT_140c64258 + 0x18))();
                    }
                    else {
                        lVar6 = (*DAT_140c63840)(&PTR_u_HousingPlugItem_140a6a980);
                    }
                    if (lVar6 != 0) {
                        piVar10 = (int *)(lVar6 + 0x48);
                        lVar9 = 5;
                        do {
                            if (*piVar10 != 0) {
                                if (DAT_140c63840 == (code *)0x0) {
                                    if ((_DAT_140c63e00 != 0) || (iVar5 = FUN_140204c40(), iVar5 < 0))
                                        goto LAB_140736f33;
                                    lVar7 = (**(code **)(*DAT_140c64c88 + 0x18))();
                                }
                                else {
                                    lVar7 = (*DAT_140c63840)();
                                }
                                if ((lVar7 != 0) && (*(int *)(lVar7 + 4) == 4)) {
                                    uVar4 = *(uint *)(lVar7 + 8);
                                    if ((*(int *)(lVar6 + 0x80) == 5) && (*(uint *)(lVar7 + 0x20) != 0)) {
                                        uVar4 = uVar4 / *(uint *)(lVar7 + 0x20);
                                    }
                                    uVar8 = (ulonglong)((int)uVar8 + uVar4);
                                }
                            }
                            LAB_140736f33:
                            piVar10 = piVar10 + 1;
                            lVar9 = lVar9 + -1;
                        } while (lVar9 != 0);
                    }
                }
                LAB_140736f3c:
                uVar4 = *(uint *)(lVar3 + 0x110);
                uVar12 = (uint)uVar13 + 1;
                uVar13 = (ulonglong)uVar12;
            } while (uVar12 < uVar4);
        }
        iVar5 = (int)uVar8;
        local_40 = 0;
        local_38 = 0;
        local_30 = 0;
        FUN_1405acf20(lVar3,local_48,6);
        lVar6 = local_40;
        lVar3 = local_38 - local_40 >> 0x3f;
        lVar9 = (local_38 - local_40) / 0x68 + lVar3;
        if (lVar9 != lVar3) {
            do {
                uVar1 = *(undefined4 *)(uVar11 * 0x68 + 0x4c + lVar6);
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c646a8 == 0) && (iVar5 = FUN_140203b40(), -1 < iVar5)) {
                        lVar7 = (**(code **)(*DAT_140c65008 + 0x18))(DAT_140c65008,uVar1);
                        goto LAB_140736ff9;
                    }
                }
                else {
                    lVar7 = (*DAT_140c63840)(&PTR_u_HousingDecorInfo_140a6a718,uVar1,DAT_140c63858);
                    LAB_140736ff9:
                    if (lVar7 != 0) {
                        uVar8 = (ulonglong)(uint)((int)uVar8 + *(int *)(lVar7 + 0x18));
                    }
                }
                iVar5 = (int)uVar8;
                uVar11 = (ulonglong)((int)uVar11 + 1);
            } while (uVar11 < (ulonglong)(lVar9 - lVar3));
        }
        if (lVar6 != 0) {
            FUN_14018b900(lVar6,0);
        }
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140737350(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    double *pdVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    pdVar3 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar3 = *(double **)(param_1 + 0x18);
    }
    uVar4 = 0;
    if (*(int *)(pdVar3 + 1) != 3) {
        uVar5 = uVar4;
        if ((*(int *)(pdVar3 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong)*pdVar3 + 0x20,local_res10), iVar2 == 0))
            goto LAB_1407373ab;
        local_10 = 3;
        pdVar3 = &local_18;
        local_18 = local_res10[0];
    }
    uVar5 = (ulonglong)(uint)(int)*pdVar3;
    LAB_1407373ab:
    if (DAT_140c7de20 != 0) {
        while (lVar1 = *(longlong *)(DAT_140c7de18 + uVar4 * 8), *(int *)(lVar1 + 0x10) != 7) {
            uVar4 = uVar4 + 1;
            if (DAT_140c7de20 <= uVar4) {
                return 0;
            }
        }
        if (lVar1 != 0) {
            FUN_14057fe90(lVar1,uVar5);
        }
    }
    return 0;
}



undefined8 FUN_140737400(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    undefined local_28 [8];
    longlong local_20;

    uVar2 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(local_28,uVar2);
    uVar3 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            lVar1 = *(longlong *)(DAT_140c7de18 + uVar3 * 8);
            if (*(int *)(lVar1 + 0x10) == 7) {
                if (lVar1 != 0) {
                    FUN_14057ff10(lVar1,local_20);
                }
                break;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < DAT_140c7de20);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_1407376f0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    ulonglong uVar3;
    double *pdVar4;
    ulonglong uVar5;
    double local_res10 [3];
    undefined8 local_38;
    undefined4 local_30;
    double local_28;
    undefined8 local_20;
    ulonglong local_18;

    pdVar4 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar4 = *(double **)(param_1 + 0x18);
    }
    uVar3 = 0;
    if (*(int *)(pdVar4 + 1) != 3) {
        uVar5 = uVar3;
        if ((*(int *)(pdVar4 + 1) != 4) ||
            (iVar2 = FUN_14005ac80((longlong)*pdVar4 + 0x20,local_res10), iVar2 == 0))
            goto LAB_14073774b;
        local_30 = 3;
        pdVar4 = (double *)&local_38;
        local_38 = local_res10[0];
    }
    uVar5 = (ulonglong)(uint)(int)*pdVar4;
    LAB_14073774b:
    if (DAT_140c7de20 != 0) {
        while (puVar1 = *(undefined8 **)(DAT_140c7de18 + uVar3 * 8), *(int *)(puVar1 + 2) != 7) {
            uVar3 = uVar3 + 1;
            if (DAT_140c7de20 <= uVar3) {
                return 0;
            }
        }
        if ((puVar1 != (undefined8 *)0x0) && ((iVar2 = (int)uVar5, iVar2 == 3 || (iVar2 == 0)))) {
            local_18 = (ulonglong)(iVar2 == 3);
            local_38 = (double)CONCAT44(local_38._4_4_,*(undefined4 *)(DAT_140c635f0 + 0x1680));
            local_20 = *puVar1;
            local_28 = local_38;
            FUN_1403f4740(DAT_140c65898,0x538,&local_28);
        }
    }
    return 0;
}



undefined4 FUN_140737ce0(longlong param_1)

{
    int *piVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong *plVar5;

    lVar2 = DAT_140c659f0;
    piVar1 = (int *)(DAT_140c659f0 + 0x158);
    if ((*piVar1 != 0) && (*(longlong *)(DAT_140c659f0 + 0x160) != 0)) {
        lVar4 = FUN_14018b280(0x68);
        if (lVar4 == 0) {
            plVar5 = (longlong *)0x0;
        }
        else {
            plVar5 = (longlong *)FUN_14073e140(lVar4,*(undefined8 *)(lVar2 + 0x168),0,0,10,0,piVar1);
        }
        uVar3 = FUN_14073eb30(param_1,plVar5);
        if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 8))(plVar5);
        }
        return uVar3;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}


// undefined8 FUN_140737da0(longlong param_1)
undefined8 LoadHousingLib(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    undefined8 uVar3;
    longlong lVar4;
    int iVar5;
    undefined8 local_38;
    undefined4 local_30;

    LuaElementLoaderOrSo(param_1,"Game.Housing");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"__index",7);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140057020(param_1,"HousingLib",&PTR_s_IsHousingWorld_140b747a0);
    local_38 = FUN_140062650(param_1,"HousingLib",10);
    local_30 = 4;
    FUN_14005e8e0(param_1,param_1 + 0x78,&local_38,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"CodeEnumDecorHookType",0x15);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b47db4,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Entryway",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b47d9c,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Wallpaper",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FreePlace",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"WarplotFreePlace",0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"DefaultHook",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Crate",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Landscape",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Mannequin",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"HousingUpkeepType",0x11);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Permanent",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Timed",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Charged",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"TimedCharged",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Decay",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"StructurePoints",0xf);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"NeighborPermissionLevel",0x17);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Normal",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Roommate",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Account",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ResidencePrivileges",0x13);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b47e3c,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Owner",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Roommate",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ResidencePrivacyLevel",0x15);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Public",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"NeighborsOnly",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RoommatesOnly",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Private",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"DecorCategoryLimit",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Mannequin",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Light",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Special",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ResidenceCustomizationMode",0x1a);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Advanced",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Simple",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"DecorControlMode",0x10);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Local",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Global",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RemodelOptionTypeInterior",0x19);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Wallpaper",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Floor",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Ceiling",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b47ed4,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Lighting",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Music",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RemodelOptionTypeExterior",0x19);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b4805c,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Wallpaper",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Entry",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b4803c,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_1409f92d4,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Music",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Ground",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RemodelOptionTypeCommunity",0x1a);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_1409f92ac,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Music",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Ground",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar4 = FUN_140200220();
    if (lVar4 == 0) {
        iVar5 = 10000;
    }
    else {
        iVar5 = *(int *)(lVar4 + 4);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"PropertyRenameCost",0x12);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Success",0x15);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Failed",0x14);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_Success",0x1e);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_RequestTimedOut",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402a000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_RequestDeclined",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_PlayerNotFound",0x25);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_PlayerNotOnline",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_PlayerNotAHomeowner",0x2a);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4018000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_PlayerDoesntExist",0x28);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_InvalidNeighbor",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_AlreadyNeighbors",0x27);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"HousingResult_Neighbor_NoPendingInvite",0x26);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Neighbor_PlayerWrongFaction");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Neighbor_Full");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4045800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Neighbor_PlayerIsIgnored");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4046000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Neighbor_IgnoredByPlayer");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4047000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Neighbor_MissingEntitlement");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403a000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Visit_Private");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403b000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Visit_Ignored");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_InvalidPermissions");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Visit_InvalidWorld");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Neighbor_RequestAccepted");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Guild_TransactionFailed");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Guild_NotMember");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4033000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Neighbor_InvitePending");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4037000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Visit_Failed");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4034000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_InvalidPosition");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4035000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_CannotAfford");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4036000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_ExceedsDecorLimit");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4038000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_CouldNotValidate");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4039000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_PrereqNotMet");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_CannotCreateDecor");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403d000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_CannotModifyDecor");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403e000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_CannotDeleteDecor");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x403f000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_InvalidDecor");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4045000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_MustBeUnique");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4046800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_CannotOwnMore");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4040000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Plug_PrereqNotMet");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4040800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Plug_InvalidPlug");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4041000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Plug_CannotAfford");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4041800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Plug_ModifyFailed");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4042000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Plug_MustBeUnique");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4042800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Plug_NotActive");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4044800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Plug_CannotRotate");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4043000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_InvalidResidence");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4043800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_InvalidNeighborhood");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4047800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_InvalidResidenceName");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4048000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_MustHaveResidenceName");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4048800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Neighbor_PrivilegeRestricted");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x404b000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_CannotDonate");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x404e800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_Decor_ExceedsCommunityDecorLimit");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x404f000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_CommunityNotFound");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4050400000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058a40(param_1,0xfffffffe,"HousingResult_InsufficientFunds");
    FUN_140058710(param_1,"HousingPlugFacing",0x11);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar4 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar4,lVar4 + -0x20,lVar4 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058a40(param_1,0xffffd8ee,"HousingLib");
    return 1;
}



undefined8 FUN_14073a060(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    int *piVar4;
    int *piVar5;

    piVar4 = (int *)FUN_140056ab0(param_1,1,"Game.MatchMakingEntry");
    piVar5 = (int *)FUN_140056ab0(param_1,2,"Game.MatchMakingEntry");
    if ((piVar4 == (int *)0x0) || (piVar5 == (int *)0x0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((((*(longlong *)(piVar4 + 4) != *(longlong *)(piVar5 + 4)) ||
              (*(longlong *)(piVar4 + 6) != *(longlong *)(piVar5 + 6))) || (*piVar4 != *piVar5)) ||
            (bVar3 = 1, piVar4[1] != piVar5[1])) {
            bVar3 = 0;
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar3;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073a110(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_14073a153:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.MatchMakingEntry",0x15);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_14073a237;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14073a153;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14073a237:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}


// undefined8 FUN_14073a250(longlong param_1)
undefined8 LoadMatchMakingEntry(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.MatchMakingEntry");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5eec0;
    puVar6 = PTR_DAT_140c5eec0;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"MatchMakingEntry",&PTR_DAT_140b74c70);
    return 1;
}



undefined8 FUN_14073a3e0(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    int *piVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 < 0x10) {
        piVar2 = (int *)FUN_140059170(param_1,0x20);
        *(undefined8 *)(piVar2 + 4) = 0;
        *(undefined8 *)(piVar2 + 6) = 0;
        piVar2[2] = 0;
        *piVar2 = param_2;
        piVar2[1] = param_3;
        lVar1 = *(longlong *)(param_1 + 0x20);
        local_18 = FUN_140062650(param_1,"Game.MatchMakingEntry",0x15);
        local_10 = 4;
        FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
    }
    else {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    return 1;
}



undefined4 FUN_14073a490(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined4 *)FUN_140059170(param_1,0x20);
    *puVar2 = *(undefined4 *)(param_2 + 0xc);
    *(longlong *)(puVar2 + 6) = param_2;
    *(undefined8 *)(puVar2 + 1) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.MatchMakingEntry",0x15);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_14073a540(longlong param_1,longlong param_2,undefined4 param_3)

{
    uint uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar2 = FUN_140214e00(*(undefined4 *)(param_2 + 0x10));
        if (lVar2 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            puVar3 = (undefined4 *)FUN_140059170(param_1,0x20);
            *puVar3 = *(undefined4 *)(lVar2 + 0xc);
            uVar1 = *(uint *)(lVar2 + 0x10);
            puVar3[2] = param_3;
            *(longlong *)(puVar3 + 4) = param_2;
            *(longlong *)(puVar3 + 6) = lVar2;
            puVar3[1] = uVar1 & 0x20;
            lVar2 = *(longlong *)(param_1 + 0x20);
            local_18 = FUN_140062650(param_1,"Game.MatchMakingEntry",0x15);
            local_10 = 4;
            FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1,0xfffffffe);
        }
    }
    return 1;
}



bool FUN_14073a630(longlong param_1,undefined8 param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    double dVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    int local_res18;
    int iStackX28;
    undefined local_a8 [8];
    int local_a0;
    longlong local_98;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined **local_70;
    undefined4 local_68;
    longlong local_60;
    undefined ***local_58;

    param_3[1] = 0;
    local_78 = 1;
    local_90 = &PTR_FUN_140b569f0;
    local_88 = 0xfffffffe;
    local_80 = param_1;
    puVar5 = (undefined8 *)FUN_1400580e0(param_1,1);
    if ((puVar5 != &DAT_140a12138) && (*(int *)(puVar5 + 1) == 5)) {
        FUN_1400579e0(local_80);
        lVar7 = local_80;
        puVar6 = (undefined8 *)FUN_1400580e0(local_80,1);
        puVar5 = *(undefined8 **)(lVar7 + 0x10);
        *puVar5 = *puVar6;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
        local_88 = FUN_1400578c0(local_80);
    }
    local_68 = 0xfffffffe;
    local_58 = &local_90;
    local_60 = local_80;
    local_70 = &PTR_FUN_140b56a08;
    *(undefined4 *)(*(longlong *)(local_80 + 0x10) + 8) = 0;
    *(longlong *)(local_80 + 0x10) = *(longlong *)(local_80 + 0x10) + 0x10;
    FUN_1400fa090(&local_70,0xffffffff);
    uVar10 = 0;
    uVar11 = 0;
    *(longlong *)(local_80 + 0x10) = *(longlong *)(local_80 + 0x10) + -0x10;
    while( true ) {
        iVar4 = (*(code *)(*local_58)[1])();
        if (iVar4 == 0) break;
        iVar4 = FUN_1400fcba0(&local_70);
        if (iVar4 == 0) break;
        FUN_1400fb8d0(&local_70,local_a8);
        lVar3 = local_98;
        lVar7 = *(longlong *)(*(longlong *)(local_98 + 0x20) + 0xa0);
        if (local_a0 - 1U < *(uint *)(lVar7 + 0x38)) {
            puVar5 = (undefined8 *)((longlong)(local_a0 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
        }
        else {
            dVar9 = (double)local_a0;
            if (dVar9 == (double)CONCAT44(uVar11,uVar10)) {
                puVar5 = *(undefined8 **)(lVar7 + 0x20);
            }
            else {
                iStackX28 = (int)((ulonglong)dVar9 >> 0x20);
                local_res18 = SUB84(dVar9,0);
                puVar5 = (undefined8 *)
                        (*(longlong *)(lVar7 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                          (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar5 + 3) == 3) && (dVar9 == (double)puVar5[2])) goto LAB_14073a7f1;
                puVar5 = (undefined8 *)puVar5[4];
            } while (puVar5 != (undefined8 *)0x0);
            puVar5 = &DAT_140a12138;
        }
        LAB_14073a7f1:
        puVar6 = *(undefined8 **)(local_98 + 0x10);
        *puVar6 = *puVar5;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(local_98 + 0x10) = *(longlong *)(local_98 + 0x10) + 0x10;
        lVar7 = FUN_140056ab0(param_1,0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        if (lVar7 == 0) {
            FUN_1400579e0(lVar3);
        }
        else {
            lVar2 = param_3[1];
            lVar1 = lVar2 + 1;
            lVar8 = FUN_14018db00(*param_3,lVar1);
            *(longlong *)(lVar8 + lVar2 * 8) = lVar7;
            if (*param_3 != lVar8) {
                FUN_1407db590(lVar8);
                lVar7 = *param_3;
                if (lVar7 != 0) {
                    (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
                }
                *param_3 = lVar8;
            }
            param_3[1] = lVar1;
            FUN_1400579e0(lVar3);
        }
    }
    local_70 = &PTR_FUN_140b56a08;
    if (local_60 != 0) {
        FUN_1400579e0();
    }
    lVar7 = param_3[1];
    local_90 = &PTR_FUN_140b56a08;
    if (local_80 != 0) {
        FUN_1400579e0();
    }
    return lVar7 != 0;
}



undefined8 FUN_14073a930(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    undefined4 *puVar3;

    puVar3 = (undefined4 *)FUN_140056ab0(param_1,0xffffffff);
    if (puVar3 == (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
        puVar3[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar2 = FUN_1405c2fd0(DAT_140c65b98,*puVar3,*(undefined8 *)(puVar3 + 6),
                          *(undefined8 *)(puVar3 + 4));
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 == 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073a9c0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    double *pdVar3;
    int *piVar4;
    int iVar5;
    uint uVar6;
    longlong local_res8;

    piVar4 = (int *)FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (piVar4 == (int *)0x0) {
        iVar5 = 0x10;
    }
    else {
        iVar5 = *piVar4;
    }
    lVar1 = *(longlong *)(DAT_140c65b98 + 0x48);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < iVar5) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (iVar5 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if ((local_res8 == lVar1) || (local_res8 == -0x28)) {
        uVar6 = 0;
    }
    else {
        uVar6 = *(uint *)(local_res8 + 0x48);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)((float)(ulonglong)uVar6 * 0.001);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073b8f0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    double *pdVar3;
    int *piVar4;
    int iVar5;
    uint uVar6;
    longlong local_res8;

    piVar4 = (int *)FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (piVar4 == (int *)0x0) {
        iVar5 = 0x10;
    }
    else {
        iVar5 = *piVar4;
    }
    lVar1 = *(longlong *)(DAT_140c65b98 + 0x48);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < iVar5) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (iVar5 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if ((local_res8 == lVar1) || (local_res8 == -0x28)) {
        iVar5 = -1;
    }
    else {
        iVar5 = *(int *)(local_res8 + 0x44);
    }
    if (iVar5 - DAT_140c636a8 < 1) {
        uVar6 = DAT_140c636a8 - iVar5;
    }
    else {
        uVar6 = 0;
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)((float)(ulonglong)uVar6 * 0.001);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073b9c0(longlong param_1)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    undefined4 *puVar4;
    longlong lVar5;

    lVar5 = FUN_140056ab0(param_1,0xffffffff);
    if ((lVar5 != 0) && (*(int **)(lVar5 + 0x10) != (int *)0x0)) {
        puVar3 = *(uint **)(param_1 + 0x10);
        iVar1 = *(int *)(DAT_140c65b98 + 0x108);
        iVar2 = **(int **)(lVar5 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar2 == iVar1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    *puVar4 = 0;
    puVar4[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073ba40(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    uint *puVar3;
    int *piVar4;
    longlong lVar5;
    ulonglong uVar6;
    bool bVar7;

    piVar4 = (int *)FUN_140056ab0(param_1,0xffffffff);
    uVar6 = 0;
    bVar7 = false;
    if (piVar4 == (int *)0x0) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*piVar4 == 3) {
        if (*(longlong *)(piVar4 + 6) != 0) {
            iVar1 = *(int *)(*(longlong *)(piVar4 + 6) + 0x14);
            if (iVar1 == 2) {
                if (DAT_140c7de20 != 0) {
                    do {
                        lVar5 = *(longlong *)(DAT_140c7de18 + uVar6 * 8);
                        if (*(int *)(lVar5 + 0x10) == 4) goto LAB_14073bb88;
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < DAT_140c7de20);
                }
            }
            else if (iVar1 == 3) {
                if (DAT_140c7de20 != 0) {
                    do {
                        lVar5 = *(longlong *)(DAT_140c7de18 + uVar6 * 8);
                        if (*(int *)(lVar5 + 0x10) == 5) goto LAB_14073bb88;
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < DAT_140c7de20);
                }
            }
            else if ((iVar1 == 5) && (DAT_140c7de20 != 0)) {
                do {
                    lVar5 = *(longlong *)(DAT_140c7de18 + uVar6 * 8);
                    if (*(int *)(lVar5 + 0x10) == 6) goto LAB_14073bb88;
                    uVar6 = uVar6 + 1;
                } while (uVar6 < DAT_140c7de20);
            }
        }
    }
    else if ((*piVar4 == 4) && (DAT_140c7de20 != 0)) {
        do {
            lVar5 = *(longlong *)(DAT_140c7de18 + uVar6 * 8);
            if (*(int *)(lVar5 + 0x10) == 3) goto LAB_14073bb88;
            uVar6 = uVar6 + 1;
        } while (uVar6 < DAT_140c7de20);
    }
    LAB_14073bab9:
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)bVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
    LAB_14073bb88:
    if (lVar5 != 0) {
        bVar7 = *(int *)(lVar5 + 0x230) != 0;
    }
    goto LAB_14073bab9;
}



undefined8 FUN_14073bbb0(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    byte bVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x18) == 0)) ||
        ((iVar1 = *(int *)(*(longlong *)(lVar4 + 0x18) + 0xc), 1 < iVar1 - 1U && (iVar1 != 8)))) {
        bVar3 = 0;
    }
    else {
        bVar3 = 1;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073bc20(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    byte bVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x18) == 0)) ||
        ((iVar1 = *(int *)(*(longlong *)(lVar4 + 0x18) + 0xc), iVar1 != 0 && (4 < iVar1 - 3U)))) {
        bVar3 = 0;
    }
    else {
        bVar3 = 1;
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073bc90(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    uint *puVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    uint uVar8;
    longlong lVar9;
    bool bVar10;
    longlong local_res10;

    piVar7 = (int *)FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (piVar7 == (int *)0x0) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        goto LAB_14073be34;
    }
    iVar6 = *piVar7;
    if ((iVar6 == 0) || (iVar6 != *(int *)(DAT_140c65b98 + 0x10c))) {
        puVar1 = *(undefined4 **)(piVar7 + 4);
        if ((puVar1 == (undefined4 *)0x0) && (*(longlong *)(piVar7 + 6) == 0)) {
            lVar9 = *(longlong *)(DAT_140c65b98 + 0x48);
            local_res10 = lVar9;
            lVar2 = *(longlong *)(lVar9 + 8);
            while (lVar2 != 0) {
                if (*(int *)(lVar2 + 0x20) < iVar6) {
                    lVar2 = *(longlong *)(lVar2 + 0x18);
                }
                else {
                    local_res10 = lVar2;
                    lVar2 = *(longlong *)(lVar2 + 0x10);
                }
            }
            if ((local_res10 == lVar9) || (iVar6 < *(int *)(local_res10 + 0x20))) {
                local_res10 = lVar9;
            }
            uVar8 = 0;
            uVar4 = uVar8;
            if ((local_res10 != lVar9) && (local_res10 != -0x28)) {
                uVar4 = *(uint *)(local_res10 + 0x40);
            }
            if ((uVar4 & 1) == 0) goto LAB_14073be27;
            lVar9 = DAT_140c65b98;
            iVar5 = FUN_1405bfb30();
            if (iVar5 == 0) {
                LAB_14073bdd6:
                bVar10 = false;
            }
            else {
                lVar9 = *(longlong *)(lVar9 + 0x48);
                local_res10 = lVar9;
                lVar2 = *(longlong *)(lVar9 + 8);
                while (lVar2 != 0) {
                    if (*(int *)(lVar2 + 0x20) < iVar6) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        local_res10 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((local_res10 == lVar9) || (iVar6 < *(int *)(local_res10 + 0x20))) {
                    local_res10 = lVar9;
                }
                if ((local_res10 != lVar9) && (local_res10 != -0x28)) {
                    uVar8 = *(uint *)(local_res10 + 0x40);
                }
                bVar10 = true;
                if ((uVar8 >> 8 & 1) != piVar7[1]) goto LAB_14073bdd6;
            }
            bVar10 = !bVar10;
        }
        else if (((iVar6 - 3U & 0xfffffffc) == 0) && (iVar6 != 5)) {
            if (*(undefined4 **)(piVar7 + 6) == (undefined4 *)0x0) goto LAB_14073bdd6;
            iVar6 = FUN_1405bfb90(DAT_140c65b98,iVar6,**(undefined4 **)(piVar7 + 6));
            bVar10 = iVar6 == 0;
        }
        else {
            if (puVar1 == (undefined4 *)0x0) {
                iVar6 = 0;
            }
            else {
                iVar6 = FUN_1405bfc70(DAT_140c65b98,iVar6,*puVar1);
            }
            bVar10 = iVar6 == 0;
        }
        uVar8 = (uint)!bVar10;
    }
    else {
        uVar8 = 0;
    }
    LAB_14073be27:
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = uVar8;
    LAB_14073be34:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073be50(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    undefined8 uVar3;
    undefined4 uVar4;

    puVar2 = (undefined4 *)FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (puVar2 == (undefined4 *)0x0) {
        uVar4 = 0x10;
    }
    else {
        uVar4 = *puVar2;
    }
    iVar1 = FUN_1405bed30(DAT_140c65b98,uVar4);
    if (iVar1 == 0) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar3 = FUN_14073bc90(param_1);
    return uVar3;
}



undefined8 FUN_14073bf20(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    uint uVar3;

    lVar2 = FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x18) == 0)) {
        uVar3 = *(uint *)(lVar2 + 4);
    }
    else {
        uVar3 = *(uint *)(*(longlong *)(lVar2 + 0x18) + 0x10) & 0x20;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(uVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073bf80(undefined8 param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    int *piVar5;
    longlong local_res10;

    piVar5 = (int *)FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    lVar3 = DAT_140c65b98;
    if (piVar5 == (int *)0x0) {
        iVar4 = 0x10;
    }
    else {
        iVar4 = *piVar5;
    }
    lVar1 = *(longlong *)(DAT_140c65b98 + 0x48);
    local_res10 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < iVar4) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res10 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || (iVar4 < *(int *)(local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if ((((lVar1 != local_res10) && (*(int *)(local_res10 + 0x3c) == 0)) &&
         (iVar4 = FUN_1405bed30(DAT_140c65b98,iVar4), iVar4 == 0)) &&
        (((*(longlong *)(lVar3 + 0xd0) == 0 && (*(int *)(lVar3 + 0xac) == 0)) &&
          (*(int *)(lVar3 + 0xb4) == 0)))) {
        FUN_1405c35d0();
    }
    return 0;
}



undefined8 FUN_14073c040(undefined8 param_1)

{
    longlong lVar1;
    int iVar2;
    undefined4 *puVar3;
    undefined4 uVar4;

    puVar3 = (undefined4 *)FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    lVar1 = DAT_140c65b98;
    if (puVar3 == (undefined4 *)0x0) {
        uVar4 = 0x10;
    }
    else {
        uVar4 = *puVar3;
    }
    iVar2 = FUN_1405bed30(DAT_140c65b98,uVar4);
    if ((((iVar2 != 0) && (*(longlong *)(lVar1 + 0xd0) == 0)) && (*(int *)(lVar1 + 0xac) == 0)) &&
        (*(int *)(lVar1 + 0xb4) == 0)) {
        FUN_1405c3660();
    }
    return 0;
}



undefined8 FUN_14073c0b0(longlong param_1)

{
    uint *puVar1;
    double *pdVar2;
    uint uVar3;
    uint uVar4;

    puVar1 = (uint *)FUN_140056ab0(param_1,0xffffffff);
    if (puVar1 == (uint *)0x0) {
        pdVar2 = *(double **)(param_1 + 0x10);
        *pdVar2 = -1.0;
    }
    else {
        uVar3 = 0;
        uVar4 = uVar3;
        if (*(uint **)(puVar1 + 6) != (uint *)0x0) {
            uVar4 = **(uint **)(puVar1 + 6);
        }
        if (*(uint **)(puVar1 + 4) != (uint *)0x0) {
            uVar3 = **(uint **)(puVar1 + 4);
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *pdVar2 = (double)(((uint)(puVar1[1] != 0) << 7 | *puVar1) << 0x18 | uVar4 << 0xc | uVar3);
    }
    *(undefined4 *)(pdVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14073c150(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    int *piVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    int iVar8;
    uint uVar9;
    uint uVar10;
    uint uVar11;
    double dVar12;
    undefined8 local_res8;
    undefined **local_28;
    int local_20;
    longlong local_18;
    undefined4 local_10;

    piVar5 = (int *)FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (piVar5 == (int *)0x0) {
        iVar8 = 0x10;
    }
    else {
        iVar8 = *piVar5;
    }
    lVar2 = *(longlong *)(DAT_140c65b98 + 0x48);
    local_res8 = lVar2;
    lVar3 = *(longlong *)(lVar2 + 8);
    while (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x20) < iVar8) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (iVar8 < *(int *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    uVar11 = 0;
    if ((local_res8 == lVar2) || (local_res8 == -0x28)) {
        uVar10 = 0;
    }
    else {
        uVar10 = *(uint *)(local_res8 + 0x4c);
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0();
    uVar9 = 1;
    do {
        if ((uVar10 & uVar9) != 0) {
            FUN_1400fa9e0(&local_28,uVar11);
        }
        uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
        uVar11 = uVar11 + 1;
    } while (uVar11 < 3);
    lVar2 = *(longlong *)(*(longlong *)(local_18 + 0x20) + 0xa0);
    if (local_20 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(local_20 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar12 = (double)local_20;
        if (dVar12 == 0.0) {
            puVar7 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
            local_res8._0_4_ = SUB84(dVar12,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_14073c2fd;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_14073c2fd:
    puVar4 = *(undefined8 **)(local_18 + 0x10);
    *puVar4 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)(puVar4 + 1) = uVar1;
    *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
    FUN_1400579e0(local_18,uVar1,local_20);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14073c340(longlong param_1)

{
    undefined8 *puVar1;
    uint uVar2;
    int iVar3;
    undefined4 uVar4;
    int *piVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    uint uVar9;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    piVar5 = (int *)FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (piVar5 == (int *)0x0) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0xbff0000000000000;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(longlong *)(piVar5 + 4) == 0) {
        if (*(longlong *)(piVar5 + 6) == 0) {
            uVar9 = 0;
            do {
                if (DAT_140c63838 == (code *)0x0) {
                    if ((_DAT_140c65454 != 0) || (iVar3 = FUN_140215ca0(), iVar3 < 0)) break;
                    uVar2 = (**(code **)(*DAT_140c654d8 + 0x28))();
                }
                else {
                    uVar2 = (*DAT_140c63838)(&PTR_u_MatchTypeRewardRotationContent_140a6b5f8,DAT_140c63858);
                }
                if (uVar2 <= uVar9) break;
                if (DAT_140c63848 == (code *)0x0) {
                    if ((_DAT_140c65454 == 0) && (iVar3 = FUN_140215ca0(), -1 < iVar3)) {
                        lVar6 = (**(code **)(*DAT_140c654d8 + 0x20))(DAT_140c654d8,uVar9);
                        goto LAB_14073c440;
                    }
                }
                else {
                    lVar6 = (*DAT_140c63848)(&PTR_u_MatchTypeRewardRotationContent_140a6b5f8,uVar9,
                                             DAT_140c63858);
                    LAB_14073c440:
                    if ((lVar6 != 0) && (*(int *)(lVar6 + 4) == *piVar5)) goto LAB_14073c456;
                }
                uVar9 = uVar9 + 1;
            } while( true );
        }
        goto LAB_14073c540;
    }
    lVar6 = FUN_14024acc0(*(undefined4 *)(*(longlong *)(piVar5 + 4) + 0x14));
    if (lVar6 == 0) goto LAB_14073c540;
    iVar3 = *(int *)(lVar6 + 0x58);
    LAB_14073c483:
    if ((iVar3 != 0) && (DAT_140c65c20 != 0)) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        uVar7 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar1 + 1) = 5;
        *puVar1 = uVar7;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0();
        local_20 = uVar4;
        FUN_140639060(piVar5[1],iVar3,iVar3,&local_28,piVar5[1]);
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = *puVar8;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1,puVar1,uVar4);
        return 1;
    }
    LAB_14073c540:
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
    LAB_14073c456:
    if (piVar5[1] == 0) {
        iVar3 = *(int *)(lVar6 + 8);
    }
    else {
        iVar3 = *(int *)(lVar6 + 0xc);
    }
    goto LAB_14073c483;
}



undefined4 FUN_14073c570(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    undefined4 uVar6;
    undefined4 local_res10 [2];
    longlong local_18;
    undefined8 local_10;

    lVar5 = FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (lVar5 == 0) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0x4022000000000000;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    local_10 = 0;
    local_18 = 0;
    if (*(longlong *)(lVar5 + 0x10) != 0) {
        FUN_140003460(&local_18);
    }
    lVar3 = local_18;
    if (*(undefined4 **)(lVar5 + 0x18) == (undefined4 *)0x0) {
        uVar6 = 0;
    }
    else {
        uVar6 = **(undefined4 **)(lVar5 + 0x18);
    }
    local_res10[0] = 0x10;
    iVar4 = FUN_1405c48e0(DAT_140c65b98,local_res10,uVar6,&local_18,0);
    pdVar2 = *(double **)(param_1 + 0x10);
    *pdVar2 = (double)iVar4;
    *(undefined4 *)(pdVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    return 1;
}



undefined4 FUN_14073c670(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    undefined4 uVar7;
    undefined4 local_res10 [2];
    longlong local_18;
    undefined8 local_10;

    lVar6 = FUN_140056ab0(param_1,0xffffffff,"Game.MatchMakingEntry");
    if (lVar6 == 0) {
        puVar1 = *(undefined8 **)(param_1 + 0x10);
        *puVar1 = 0x4022000000000000;
        *(undefined4 *)(puVar1 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    local_10 = 0;
    uVar7 = 0;
    local_18 = 0;
    if (*(longlong *)(lVar6 + 0x10) != 0) {
        FUN_140003460(&local_18);
    }
    lVar4 = local_18;
    if (*(undefined4 **)(lVar6 + 0x18) != (undefined4 *)0x0) {
        uVar7 = **(undefined4 **)(lVar6 + 0x18);
    }
    if ((((*(int *)(DAT_140c65b98 + 0x10c) == 0x10) || (*(int *)(DAT_140c65b98 + 0x154) != 0)) &&
         (lVar6 = *(longlong *)(DAT_140c65898 + 0x6c50), lVar6 != 0)) &&
        (((*(longlong *)(lVar6 + 0x60) != 0 &&
           (lVar2 = *(longlong *)(*(longlong *)(lVar6 + 0x58) + *(longlong *)(lVar6 + 0x68) * 8),
                   lVar2 != 0)) &&
          ((*(int *)(lVar2 + 0x10) == *(int *)(lVar6 + 0x10) &&
            (*(longlong *)(lVar2 + 0x18) == *(longlong *)(lVar6 + 0x18))))))) {
        local_res10[0] = 0x10;
        iVar5 = FUN_1405c48e0(DAT_140c65b98,local_res10,uVar7,&local_18,1);
    }
    else {
        iVar5 = 7;
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    return 1;
}


// undefined8 FUN_14073c7d0(longlong param_1)
undefined8 LoadCustomerSurveyTypeLib(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.CustomerSurvey");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_s_isCustomerSurvey_140c5f030;
    puVar6 = PTR_s_isCustomerSurvey_140c5f030;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    return 1;
}



undefined8 FUN_14073c950(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170(param_1,0x418);
    FUN_1407e4830(puVar2 + 1,0,0x410);
    *puVar2 = *param_2;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.CustomerSurvey",0x13);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_14073cb30(longlong param_1)

{
    short sVar1;
    int iVar2;
    undefined8 *puVar3;
    int *piVar4;
    undefined2 *puVar5;
    longlong lVar6;
    short *psVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    undefined **local_108 [2];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_48 [16];
    undefined2 *local_38;
    undefined local_28 [8];
    longlong local_20;

    puVar3 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
         (*(int *)(puVar3 + 1) == 0)) || (piVar4 = (int *)FUN_140056ab0(param_1), piVar4 == (int *)0x0)
            ) {
        return 0;
    }
    FUN_1400b6f30(local_108);
    lVar9 = 0;
    local_38 = (undefined2 *)0x0;
    local_48 = ZEXT816(0);
    local_108[0] = &PTR_FUN_140b69230;
    puVar5 = (undefined2 *)FUN_14018b280(0x10);
    local_38 = puVar5 + 8;
    local_48 = CONCAT88(puVar5,puVar5);
    if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
    }
    lVar6 = FUN_140240700();
    if (lVar6 == 0) goto LAB_14073ce9c;
    if (*(int *)(lVar6 + 8) == 0) {
        if (*piVar4 == 7) {
            psVar7 = (short *)FUN_14034bdd0();
            if (psVar7 == (short *)0x0) goto LAB_14073cd42;
            sVar1 = *psVar7;
            lVar8 = lVar9;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = psVar7[lVar8];
            }
            goto LAB_14073cd6e;
        }
        if (*piVar4 == 9) {
            psVar7 = (short *)FUN_14034bdd0();
            if (psVar7 == (short *)0x0) goto LAB_14073cd42;
            sVar1 = *psVar7;
            lVar8 = lVar9;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = psVar7[lVar8];
            }
            goto LAB_14073cd6e;
        }
        iVar2 = *(int *)(lVar6 + 4);
        if (iVar2 == 1) {
            psVar7 = (short *)FUN_14034bdd0(0,0x7448d);
            if (psVar7 == (short *)0x0) goto LAB_14073cd42;
            sVar1 = *psVar7;
            lVar8 = lVar9;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = psVar7[lVar8];
            }
            goto LAB_14073cd6e;
        }
        if (iVar2 == 2) {
            psVar7 = (short *)FUN_14034bdd0(0,0x74491);
            if (psVar7 == (short *)0x0) goto LAB_14073cd42;
            sVar1 = *psVar7;
            lVar8 = lVar9;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = psVar7[lVar8];
            }
            goto LAB_14073cd6e;
        }
        if (iVar2 + -3 == 0) {
            psVar7 = (short *)FUN_14034bdd0(0,0x7448e);
            if (psVar7 == (short *)0x0) goto LAB_14073cd42;
            sVar1 = *psVar7;
            lVar8 = lVar9;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = psVar7[lVar8];
            }
            goto LAB_14073cd6e;
        }
        psVar7 = (short *)FUN_14034bdd0(iVar2 + -3,0x74492);
        if (psVar7 != (short *)0x0) {
            sVar1 = *psVar7;
            lVar8 = lVar9;
            while (sVar1 != 0) {
                lVar8 = lVar8 + 1;
                sVar1 = psVar7[lVar8];
            }
            goto LAB_14073cd6e;
        }
        LAB_14073cd42:
        if (local_f8 != local_f0) {
            *local_f8 = 0;
            local_f0 = local_f8;
        }
    }
    else {
        psVar7 = (short *)FUN_14034bdd0();
        if (psVar7 == (short *)0x0) goto LAB_14073cd42;
        sVar1 = *psVar7;
        lVar8 = lVar9;
        while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar7[lVar8];
        }
        LAB_14073cd6e:
        FUN_14001c480();
    }
    if (*piVar4 == 7) {
        lVar6 = FUN_14018b280(0x58);
        if (lVar6 != 0) {
            lVar9 = FUN_1404dda70(lVar6,piVar4[1]);
        }
        LAB_14073ce37:
        FUN_1400b7480(local_108,lVar9);
    }
    else {
        iVar2 = *(int *)(lVar6 + 4);
        if (iVar2 == 1) {
            lVar6 = FUN_14018b280(0x58);
            if (lVar6 != 0) {
                lVar9 = FUN_1404dd130(lVar6,piVar4[1]);
            }
            goto LAB_14073ce37;
        }
        if (iVar2 == 2) {
            plVar10 = (longlong *)FUN_140491c60(DAT_140c65968,piVar4[1]);
            lVar6 = FUN_14018b280(0x60);
            if (lVar6 != 0) {
                lVar9 = FUN_1404ddaf0(lVar6,*(undefined4 *)(*plVar10 + 0x18));
            }
            goto LAB_14073ce37;
        }
        if (iVar2 == 3) {
            lVar6 = FUN_14048d310(DAT_140c65948,piVar4[1]);
            lVar8 = FUN_14018b280(0x60);
            if (lVar8 != 0) {
                lVar9 = FUN_1404ddaf0(lVar8,*(undefined4 *)(lVar6 + 0x44));
            }
            goto LAB_14073ce37;
        }
    }
    lVar9 = FUN_1400b7660(local_108);
    lVar9 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar9 + 8));
    if (*(longlong *)(lVar9 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar9 + 8) + lVar6) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    lVar9 = 1;
    LAB_14073ce9c:
    if (local_48._0_8_ != 0) {
        FUN_14018b900(local_48._0_8_,0);
    }
    FUN_1400b7390(local_108);
    return lVar9;
}



undefined8 FUN_14073cee0(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    short *psVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    puVar5 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (*(int *)(puVar5 + 1) == 0)) {
        return 0;
    }
    puVar3 = (undefined4 *)FUN_140056ab0(param_1,1);
    if (puVar3 == (undefined4 *)0x0) {
        return 0;
    }
    lVar4 = FUN_140240700(*puVar3);
    if (lVar4 == 0) {
        return 0;
    }
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar5) || (puVar5 == &DAT_140a12138)) ||
        ((*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) < 1 ||
          (uVar2 = FUN_140056d60(param_1,2), uVar2 == 0)))) {
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        uVar6 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar5 + 1) = 5;
        *puVar5 = uVar6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_20 = FUN_1400578c0(param_1);
        lVar4 = 3;
        do {
            psVar7 = (short *)FUN_14034bdd0();
            lVar9 = 0;
            if (*psVar7 != 0) {
                do {
                    lVar9 = lVar9 + 1;
                } while (psVar7[lVar9] != 0);
                if (lVar9 != 0) {
                    FUN_1400fad30(&local_28);
                }
            }
            lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
        lVar4 = local_18;
        puVar8 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
        puVar5 = *(undefined8 **)(lVar4 + 0x10);
        *puVar5 = *puVar8;
        uVar1 = *(undefined4 *)(puVar8 + 1);
        *(undefined4 *)(puVar5 + 1) = uVar1;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        FUN_1400579e0(lVar4,uVar1,local_20);
        return 1;
    }
    if (3 < uVar2) {
        return 0;
    }
    uVar6 = FUN_14034bdd0();
    lVar4 = FUN_14018f0e0(&local_28,uVar6);
    if (*(longlong *)(lVar4 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar9) != '\0');
        FUN_140058710(param_1);
    }
    if (CONCAT44(uStack28,local_20) == 0) {
        return 1;
    }
    FUN_14018b900(CONCAT44(uStack28,local_20),0);
    return 1;
}



undefined8 FUN_14073d0e0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.CustomerSurvey");
        if (lVar4 != 0) {
            iVar1 = *(int *)(lVar4 + 4);
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14073d150(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    int *piVar4;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        piVar4 = (int *)FUN_140056ab0(param_1,1,"Game.CustomerSurvey");
        if (piVar4 != (int *)0x0) {
            iVar1 = *piVar4;
            pdVar3 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14073d1c0(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined4 *puVar4;
    longlong lVar5;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *)(puVar2 + 1) != 0)) {
        puVar4 = (undefined4 *)FUN_140056ab0(param_1,1,"Game.CustomerSurvey");
        if (puVar4 != (undefined4 *)0x0) {
            lVar5 = FUN_140240700(*puVar4);
            if (lVar5 != 0) {
                iVar1 = *(int *)(lVar5 + 4);
                pdVar3 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_14073d240(longlong param_1)

{
    int iVar1;
    undefined4 uVar2;
    double *pdVar3;
    uint uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    undefined4 *puVar9;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    puVar6 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar6 < *(undefined8 **)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        (*(int *)(puVar6 + 1) == 0)) {
        return 0;
    }
    lVar5 = FUN_140056ab0(param_1,1,"Game.CustomerSurvey");
    if (lVar5 == 0) {
        return 0;
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar6 < *(undefined8 **)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
        ((0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18) &&
          (uVar4 = FUN_140056d60(param_1,2), uVar4 != 0)))) {
        if (uVar4 < 5) {
            pdVar3 = *(double **)(param_1 + 0x10);
            iVar1 = *(int *)(lVar5 + 8 + (ulonglong)(uVar4 - 1) * 4);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        return 0;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    puVar9 = (undefined4 *)(lVar5 + 8);
    lVar5 = 4;
    do {
        FUN_1400fa9e0(&local_28,*puVar9);
        puVar9 = puVar9 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar5 = local_18;
    puVar8 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
    puVar6 = *(undefined8 **)(lVar5 + 0x10);
    *puVar6 = *puVar8;
    uVar2 = *(undefined4 *)(puVar8 + 1);
    *(undefined4 *)(puVar6 + 1) = uVar2;
    *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
    FUN_1400579e0(lVar5,uVar2,local_20);
    return 1;
}



undefined8 FUN_14073d3c0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) != 0)) {
        lVar2 = FUN_140056ab0(param_1,1);
        if (lVar2 != 0) {
            lVar2 = FUN_14018f2d0(local_28,lVar2 + 0x18);
            lVar2 = FUN_14018f0e0(local_48,*(undefined8 *)(lVar2 + 8));
            if (*(longlong *)(lVar2 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar3 = -1;
                do {
                    lVar3 = lVar3 + 1;
                } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
                FUN_140058710(param_1);
            }
            if (local_40 != 0) {
                FUN_14018b900(local_40,0);
            }
            if (local_20 != 0) {
                FUN_14018b900(local_20,0);
            }
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14073d730(longlong param_1)

{
    undefined8 *puVar1;
    uint *puVar2;
    int iVar3;
    longlong lVar4;
    uint uVar5;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) != 0)) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.CustomerSurvey");
        if (lVar4 != 0) {
            iVar3 = FUN_1404b41c0();
            uVar5 = (uint)(-1 < iVar3);
            goto LAB_14073d781;
        }
    }
    uVar5 = 0;
    LAB_14073d781:
    puVar2 = *(uint **)(param_1 + 0x10);
    *puVar2 = uVar5;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073d7a0(longlong param_1)

{
    undefined4 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int *piVar4;
    undefined8 *puVar5;
    longlong lVar6;

    puVar5 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
         (*(int *)(puVar5 + 1) == 0)) ||
        (piVar4 = (int *)FUN_140056ab0(param_1,1,"Game.CustomerSurvey"), lVar3 = DAT_140c659e0,
                piVar4 == (int *)0x0)) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar5 = *(undefined8 **)(DAT_140c659e0 + 8);
    puVar2 = *(undefined8 **)(DAT_140c659e0 + 0x10);
    if (puVar5 != puVar2) {
        do {
            if ((*(int *)puVar5 == *piVar4) && (*(int *)((longlong)puVar5 + 4) == piVar4[1])) {
                if (puVar5 + 1 != puVar2) {
                    lVar6 = (longlong)puVar2 - (longlong)(puVar5 + 1) >> 3;
                    for (; 0 < lVar6; lVar6 = lVar6 + -1) {
                        *puVar5 = puVar5[1];
                        puVar5 = puVar5 + 1;
                    }
                }
                *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -8;
                break;
            }
            puVar5 = puVar5 + 1;
        } while (puVar5 != puVar2);
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 1;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073d890(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int *piVar3;
    undefined8 *puVar4;
    int *piVar5;
    uint uVar6;
    uint uVar7;

    puVar4 = *(undefined8 **)(param_1 + 0x18);
    piVar5 = (int *)0x0;
    uVar7 = 0;
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar4) || (puVar4 == &DAT_140a12138)) ||
        (piVar3 = piVar5, *(int *)(puVar4 + 1) != 0)) {
        piVar3 = (int *)FUN_140056ab0(param_1,1,"Game.CustomerSurvey");
    }
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar4) || (puVar4 == &DAT_140a12138)) ||
        (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) != 0)) {
        piVar5 = (int *)FUN_140056ab0(param_1,2,"Game.CustomerSurvey");
    }
    if (piVar3 == (int *)0x0) {
        if (piVar5 == (int *)0x0) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 1;
            puVar1[2] = 1;
            goto LAB_14073d95a;
        }
    }
    else if (piVar5 != (int *)0x0) {
        if ((*piVar3 != *piVar5) || (uVar6 = 1, piVar3[1] != piVar5[1])) {
            uVar6 = uVar7;
        }
        uVar7 = (uint)(uVar6 != 0);
    }
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = uVar7;
    LAB_14073d95a:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}


// undefined4 FUN_14073d980(longlong param_1)
undefined4 LoadCustomerSurveyLib(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;

    FUN_140057020(param_1,"CustomerSurveyLib",&PTR_s_GetPending_140c5f110);
    FUN_140058710(param_1,"CodeEnumCustomerSurvey",0x16);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 10;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumSurveyType",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 4;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_14073db00(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar2 + 1))) {
        uVar5 = FUN_140056d60(param_1);
        uVar5 = uVar5 & 0xffffffff;
    }
    else {
        uVar5 = 0;
    }
    lVar3 = DAT_140c659e0;
    if (DAT_140c659e0 != 0) {
        if ((int)uVar5 == 0) {
            local_28 = &PTR_FUN_140b569f0;
            local_10 = 1;
            local_18 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            uVar6 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar6;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_20 = FUN_1400578c0(param_1);
            lVar8 = *(longlong *)(lVar3 + 8);
            if (lVar8 != *(longlong *)(lVar3 + 0x10)) {
                do {
                    iVar4 = FUN_14073c950(param_1,lVar8);
                    if (iVar4 != 0) {
                        FUN_1400fb470(&local_28);
                        *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                        param_1 = local_18;
                    }
                    lVar8 = lVar8 + 8;
                } while (lVar8 != *(longlong *)(lVar3 + 0x10));
            }
            uVar5 = (ulonglong)local_20;
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = *puVar7;
            uVar1 = *(undefined4 *)(puVar7 + 1);
            *(undefined4 *)(puVar2 + 1) = uVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400579e0(param_1,uVar1,uVar5 & 0xffffffff);
            return 1;
        }
        if (uVar5 <= (ulonglong)
                (*(longlong *)(DAT_140c659e0 + 0x10) - *(longlong *)(DAT_140c659e0 + 8) >> 3)) {
            FUN_14073c950(param_1,*(longlong *)(DAT_140c659e0 + 8) + (ulonglong)((int)uVar5 - 1) * 8);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_14073dcc0(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    longlong lVar3;
    undefined4 *puVar4;
    longlong *plVar5;
    longlong *plVar6;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1,"Game.IncidentReport");
    plVar6 = (longlong *)FUN_140056ab0(param_1,2);
    if ((plVar5 == (longlong *)0x0) || (plVar6 == (longlong *)0x0)) {
        puVar4 = *(undefined4 **)(param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
    }
    else {
        lVar1 = *plVar6;
        puVar2 = *(uint **)(param_1 + 0x10);
        lVar3 = *plVar5;
        puVar2[2] = 1;
        *puVar2 = (uint)(lVar3 == lVar1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073dd50(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_14073dd93:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.IncidentReport",0x13);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_14073de77;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14073dd93;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14073de77:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 *
FUN_14073de90(undefined8 *param_1,short *param_2,short *param_3,undefined8 *param_4,
              undefined4 param_5,int param_6,undefined8 param_7)

{
    short sVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    puVar5 = (undefined8 *)0x0;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b74c90;
    *(undefined4 *)(param_1 + 2) = 0;
    if (param_2 == (short *)0x0) {
        param_1[3] = 0;
    }
    else {
        sVar1 = *param_2;
        puVar6 = puVar5;
        while (sVar1 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar1 = param_2[(longlong)puVar6];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        puVar4 = puVar5;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = puVar6;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_2,(longlong)puVar6 * 2);
        *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar4) = 0;
        param_1[3] = puVar4;
    }
    if (param_3 == (short *)0x0) {
        param_1[4] = 0;
    }
    else {
        sVar1 = *param_3;
        puVar6 = puVar5;
        while (sVar1 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar1 = param_3[(longlong)puVar6];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        puVar4 = puVar5;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = puVar6;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_3,(longlong)puVar6 * 2);
        *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar4) = 0;
        param_1[4] = puVar4;
    }
    param_1[5] = 0;
    if (param_3 == (short *)0x0) {
        param_1[6] = 0;
    }
    else {
        sVar1 = *param_3;
        puVar6 = puVar5;
        while (sVar1 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar1 = param_3[(longlong)puVar6];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        puVar4 = puVar5;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = puVar6;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_3,(longlong)puVar6 * 2);
        *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar4) = 0;
        param_1[6] = puVar4;
    }
    param_1[7] = *param_4;
    param_1[8] = param_4[1];
    *(undefined4 *)(param_1 + 9) = param_5;
    *(int *)((longlong)param_1 + 0x4c) = param_6;
    param_1[10] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = param_7;
    if (param_6 == 0) {
        lVar2 = param_1[4];
        puVar6 = (undefined8 *)FUN_14018b280(0x12);
        if (puVar6 != (undefined8 *)0x0) {
            *puVar6 = &PTR_LAB_140b55060;
            puVar6[1] = 0;
            puVar5 = puVar6;
        }
        *(undefined2 *)(puVar5 + 2) = 0;
        param_1[4] = puVar5 + 2;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
    }
    FUN_14073e320(param_1);
    return param_1;
}



undefined8 * FUN_14073e0b0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    lVar1 = param_1[6];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[5];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[4];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_LAB_140b55048;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 *
FUN_14073e140(undefined8 *param_1,short *param_2,short *param_3,undefined4 param_4,
              undefined4 param_5,undefined8 param_6,undefined8 *param_7)

{
    short sVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    _FILETIME local_res8;

    puVar4 = (undefined8 *)0x0;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = &PTR_LAB_140b74c90;
    if (param_2 == (short *)0x0) {
        param_1[3] = 0;
    }
    else {
        sVar1 = *param_2;
        puVar5 = puVar4;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = param_2[(longlong)puVar5];
        }
        puVar2 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        puVar3 = puVar4;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_LAB_140b55060;
            puVar2[1] = puVar5;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_2,(longlong)puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)puVar3) = 0;
        param_1[3] = puVar3;
    }
    if (param_3 == (short *)0x0) {
        param_1[4] = 0;
    }
    else {
        sVar1 = *param_3;
        puVar5 = puVar4;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = param_3[(longlong)puVar5];
        }
        puVar2 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        puVar3 = puVar4;
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = &PTR_LAB_140b55060;
            puVar2[1] = puVar5;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_3,(longlong)puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)puVar3) = 0;
        param_1[4] = puVar3;
    }
    param_1[5] = 0;
    if (param_3 == (short *)0x0) {
        param_1[6] = 0;
    }
    else {
        sVar1 = *param_3;
        puVar5 = puVar4;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = param_3[(longlong)puVar5];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = puVar5;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_3,(longlong)puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)puVar4) = 0;
        param_1[6] = puVar4;
    }
    param_1[7] = *param_7;
    param_1[8] = param_7[1];
    *(undefined4 *)(param_1 + 9) = param_4;
    *(undefined4 *)((longlong)param_1 + 0x4c) = param_5;
    param_1[10] = param_6;
    GetSystemTimeAsFileTime(&local_res8);
    *(_FILETIME *)(param_1 + 0xb) = local_res8;
    param_1[0xc] = 0;
    FUN_14073e320(param_1);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14073e320(longlong param_1)

{
    short sVar1;
    int iVar2;
    short *psVar3;
    undefined8 *puVar4;
    undefined2 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined **local_f8 [24];
    undefined local_38 [16];
    undefined2 *local_28;

    puVar9 = (undefined8 *)0x0;
    if (*(longlong *)(param_1 + 0x20) == 0) {
        puVar4 = (undefined8 *)FUN_14018b280(0x12);
        puVar7 = puVar9;
        if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_LAB_140b55060;
            puVar4[1] = 0;
            puVar7 = puVar4;
        }
        *(undefined2 *)(puVar7 + 2) = 0;
        *(undefined8 **)(param_1 + 0x20) = puVar7 + 2;
    }
    if ((*(int *)(param_1 + 0x4c) == 0xc) || (*(int *)(param_1 + 0x48) == 4)) {
        lVar6 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(param_1 + 0x20) == 0) {
            *(undefined8 *)(param_1 + 0x28) = 0;
        }
        else {
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x20) + -8);
            puVar7 = (undefined8 *)FUN_14018b280(lVar8 * 2 + 0x12,0);
            if (puVar7 != (undefined8 *)0x0) {
                *puVar7 = &PTR_LAB_140b55060;
                puVar7[1] = lVar8;
                puVar9 = puVar7;
            }
            puVar9 = puVar9 + 2;
            FUN_1407db590(puVar9,*(undefined8 *)(param_1 + 0x20),lVar8 * 2);
            *(undefined2 *)(lVar8 * 2 + (longlong)puVar9) = 0;
            *(undefined8 **)(param_1 + 0x28) = puVar9;
        }
        if (lVar6 != 0) {
            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
    }
    else {
        FUN_1400b7090(local_f8,0x986c5);
        local_f8[0] = &PTR_FUN_140b69230;
        local_28 = (undefined2 *)0x0;
        local_38 = ZEXT816(0);
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        local_38 = CONCAT88(puVar5,puVar5);
        local_28 = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        puVar7 = puVar9;
        if ((*(short **)(param_1 + 0x18) == (short *)0x0) || (**(short **)(param_1 + 0x18) == 0)) {
            lVar6 = FUN_14018b280(0x60);
            if (lVar6 != 0) {
                puVar7 = (undefined8 *)FUN_1404ddaf0(lVar6,0x6c);
            }
        }
        else {
            lVar6 = FUN_14018b280(0x60);
            if (lVar6 != 0) {
                puVar7 = (undefined8 *)FUN_1404ddb40(lVar6,*(undefined8 *)(param_1 + 0x18));
            }
        }
        *(undefined4 *)(puVar7 + 0xb) = 0;
        FUN_1400b7480(local_f8,puVar7);
        iVar2 = *(int *)(param_1 + 0x48);
        puVar7 = puVar9;
        if (iVar2 == 1) {
            lVar6 = FUN_14018b280(0x60);
            if (lVar6 != 0) {
                puVar7 = (undefined8 *)FUN_1404ddaf0(lVar6,0x986ea);
            }
        }
        else if (iVar2 == 2) {
            lVar6 = FUN_14018b280(0x60);
            if (lVar6 != 0) {
                puVar7 = (undefined8 *)FUN_1404ddaf0(lVar6,0x986e8);
            }
        }
        else if (iVar2 == 3) {
            lVar6 = FUN_14018b280(0x60);
            if (lVar6 != 0) {
                puVar7 = (undefined8 *)FUN_1404ddaf0(lVar6,0x986eb);
            }
        }
        else {
            lVar6 = FUN_14018b280(0x60);
            if (lVar6 != 0) {
                puVar7 = (undefined8 *)FUN_1404ddaf0(lVar6,0x986e9);
            }
        }
        FUN_1400b7480(local_f8,puVar7);
        lVar6 = FUN_14018b280(0x60);
        puVar7 = puVar9;
        if (lVar6 != 0) {
            puVar7 = (undefined8 *)FUN_1404ddb40(lVar6,*(undefined8 *)(param_1 + 0x20));
        }
        *(undefined4 *)(puVar7 + 0xb) = 0;
        FUN_1400b7480(local_f8,puVar7);
        lVar8 = FUN_1400b7660(local_f8);
        lVar6 = *(longlong *)(param_1 + 0x28);
        psVar3 = *(short **)(lVar8 + 8);
        if (psVar3 == (short *)0x0) {
            *(undefined8 *)(param_1 + 0x28) = 0;
        }
        else {
            sVar1 = *psVar3;
            puVar7 = puVar9;
            while (sVar1 != 0) {
                puVar7 = (undefined8 *)((longlong)puVar7 + 1);
                sVar1 = psVar3[(longlong)puVar7];
            }
            puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
            if (puVar4 != (undefined8 *)0x0) {
                *puVar4 = &PTR_LAB_140b55060;
                puVar4[1] = puVar7;
                puVar9 = puVar4;
            }
            puVar9 = puVar9 + 2;
            FUN_1407db590(puVar9,psVar3,(longlong)puVar7 * 2);
            *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar9) = 0;
            *(undefined8 **)(param_1 + 0x28) = puVar9;
        }
        if (lVar6 != 0) {
            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
        }
        if (local_38._0_8_ != 0) {
            FUN_14018b900(local_38._0_8_,0);
        }
        FUN_1400b7390(local_f8);
    }
    return;
}



void FUN_14073e640(longlong param_1)

{
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    longlong local_10;

    if (*(int *)(param_1 + 0x10) == 0) {
        local_18 = *(undefined8 *)(param_1 + 0x50);
        local_20 = *(undefined8 *)(param_1 + 0x30);
        local_28 = *(undefined8 *)(param_1 + 0x48);
        local_38 = *(undefined8 *)(param_1 + 0x38);
        local_30 = *(undefined8 *)(param_1 + 0x40);
        local_10 = (ulonglong)*(uint *)(param_1 + 100) << 0x20;
        FUN_1401e83a0(&local_10,*(undefined8 *)(param_1 + 0x58));
        FUN_1403f4900(DAT_140c65898,0x6c5,&local_38);
        *(undefined4 *)(param_1 + 0x10) = 1;
    }
    return;
}



undefined8 FUN_14073e6d0(longlong param_1,short *param_2)

{
    short sVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    if (*(int *)(param_1 + 0x4c) != 0) {
        return 0;
    }
    puVar5 = (undefined8 *)0x0;
    lVar2 = *(longlong *)(param_1 + 0x18);
    if (param_2 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
        sVar1 = *param_2;
        puVar6 = puVar5;
        while (sVar1 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar1 = param_2[(longlong)puVar6];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        puVar4 = puVar5;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = puVar6;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_2,(longlong)puVar6 * 2);
        *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar4) = 0;
        *(undefined8 **)(param_1 + 0x18) = puVar4;
    }
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = *(longlong *)(param_1 + 0x30);
    if (param_2 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
    }
    else {
        sVar1 = *param_2;
        puVar6 = puVar5;
        while (sVar1 != 0) {
            puVar6 = (undefined8 *)((longlong)puVar6 + 1);
            sVar1 = param_2[(longlong)puVar6];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
        puVar4 = puVar5;
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = puVar6;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_2,(longlong)puVar6 * 2);
        *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar4) = 0;
        *(undefined8 **)(param_1 + 0x30) = puVar4;
    }
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FUN_14018b280(0x12);
    if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_LAB_140b55060;
        puVar6[1] = 0;
        puVar5 = puVar6;
    }
    *(undefined2 *)(puVar5 + 2) = 0;
    *(undefined8 **)(param_1 + 0x20) = puVar5 + 2;
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
    FUN_14073e320(param_1);
    return 1;
}


// undefined4 FUN_14073e860(longlong param_1)
undefined4 LoadIncidentReportLib(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined **ppuVar6;
    undefined *puVar7;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.IncidentReport");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    lVar5 = 4;
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar6 = &PTR_DAT_140c5f140;
    puVar7 = PTR_DAT_140c5f140;
    while (puVar7 != (undefined *)0x0) {
        puVar7 = ppuVar6[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar7;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar7 = *ppuVar6;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar7[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar7);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar6 = ppuVar6 + 2;
        puVar7 = *ppuVar6;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"IncidentReportLib",&PTR_DAT_140b74ca8);
    FUN_140058710(param_1,"CodeEnumReportPlayerReason",0x1a);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumReportPlayerSource",0x1a);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0xc;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_14073eb30(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined8 *)0x0) {
        return 0;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,8);
    *puVar2 = param_2;
    (**(code **)*param_2)(param_2);
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.IncidentReport",0x13);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_14073ebd0(undefined8 param_1)

{
    longlong **pplVar1;

    pplVar1 = (longlong **)FUN_140056ab0(param_1,1,"Game.IncidentReport");
    if ((pplVar1 != (longlong **)0x0) && (*pplVar1 != (longlong *)0x0)) {
        (**(code **)(**pplVar1 + 8))();
        *pplVar1 = (longlong *)0x0;
    }
    return 0;
}



undefined8 FUN_14073ec10(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    plVar1 = (longlong *)FUN_140056ab0(param_1,1);
    if (((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) || (*(longlong *)(*plVar1 + 0x28) == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar2 = FUN_14018f0e0(local_28);
        if (*(longlong *)(lVar2 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_14073ecb0(longlong param_1)

{
    uint uVar1;
    double *pdVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.IncidentReport");
    if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) &&
        (uVar1 = *(uint *)(*plVar3 + 0x4c), uVar1 < 0xc)) {
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)uVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073ed30(longlong param_1)

{
    uint uVar1;
    double *pdVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.IncidentReport");
    if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) &&
        (uVar1 = *(uint *)(*plVar3 + 0x48), uVar1 < 4)) {
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)uVar1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073edb0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.IncidentReport");
    if ((plVar3 == (longlong *)0x0) || (*plVar3 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    switch(*(undefined4 *)(*plVar3 + 0x4c)) {
        case 0:
        case 4:
        case 7:
            FUN_1400fa9e0(&local_28,0);
            FUN_1400fa9e0(&local_28,1);
            FUN_1400fa9e0(&local_28,2);
            uVar4 = 3;
            break;
        case 1:
        case 2:
        case 3:
        case 5:
        case 6:
        case 8:
            uVar4 = 0;
            break;
        default:
            goto switchD_14073ee6c_caseD_9;
    }
    FUN_1400fa9e0(&local_28,uVar4);
    param_1 = local_18;
    switchD_14073ee6c_caseD_9:
    uVar6 = (ulonglong)local_20;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar5;
    uVar1 = *(undefined4 *)(puVar5 + 1);
    *(undefined4 *)(puVar2 + 1) = uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar1,uVar6 & 0xffffffff);
    return 1;
}



undefined8 FUN_14073ef30(undefined8 param_1)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    longlong *plVar4;

    plVar4 = (longlong *)FUN_140056ab0(param_1,1,"Game.IncidentReport");
    if ((plVar4 != (longlong *)0x0) && (*plVar4 != 0)) {
        uVar3 = FUN_140056d60(param_1,2);
        lVar2 = *plVar4;
        uVar1 = *(uint *)(lVar2 + 0x4c);
        if ((uVar1 < 8) && ((((0x91U >> (uVar1 & 0x1f) & 1) != 0 && (uVar3 < 4)) && (uVar1 < 0xc)))) {
            if (3 < uVar3) {
                uVar3 = 4;
            }
            *(uint *)(lVar2 + 0x48) = uVar3;
            FUN_14073e320(lVar2);
            *(undefined4 *)(lVar2 + 0x60) = 1;
        }
    }
    return 0;
}



undefined8 FUN_14073efc0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    plVar1 = (longlong *)FUN_140056ab0(param_1,1);
    if (((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) || (*(longlong *)(*plVar1 + 0x18) == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar2 = FUN_14018f0e0(local_28);
        if (*(longlong *)(lVar2 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_14073f150(longlong param_1)

{
    undefined4 *puVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.IncidentReport");
    if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(int *)(*plVar2 + 100) != 0)) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073f1c0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.IncidentReport");
    if ((plVar2 != (longlong *)0x0) && (lVar1 = *plVar2, lVar1 != 0)) {
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        puVar4 = &DAT_140a12138;
        if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
            puVar4 = puVar3;
        }
        if ((*(int *)(puVar4 + 1) != 0) && ((*(int *)(puVar4 + 1) != 1 || (*(int *)puVar4 != 0)))) {
            *(undefined4 *)(lVar1 + 100) = 1;
            *(undefined4 *)(lVar1 + 0x60) = 1;
            return 0;
        }
        *(undefined4 *)(lVar1 + 0x60) = 1;
        *(undefined4 *)(lVar1 + 100) = 0;
    }
    return 0;
}



undefined8 FUN_14073f250(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Costume");
    lVar5 = 0;
    lVar6 = lVar5;
    if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar4 + 8);
    }
    lVar4 = FUN_140056ab0(param_1,2,"Game.Costume");
    if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar4 + 8);
    }
    if ((lVar6 == 0) || (lVar5 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        puVar1 = *(uint **)(param_1 + 0x10);
        iVar3 = FUN_14073f4c0(lVar6);
        puVar1[2] = 1;
        *puVar1 = (uint)(iVar3 != 0);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073f300(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_14073f343:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.Costume",0xc);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_14073f427;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_14073f343;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_14073f427:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14073f440(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Costume");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        plVar3 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar3 = *(longlong **)(param_1 + 0x18);
        }
        if (*(int *)(plVar3 + 1) == 2) {
            lVar2 = *plVar3;
        }
        else if (*(int *)(plVar3 + 1) == 7) {
            lVar2 = *plVar3 + 0x30;
        }
        else {
            lVar2 = 0;
        }
        puVar1 = *(undefined8 **)(lVar2 + 8);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
    }
    return 0;
}



undefined8 FUN_14073f4c0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    int *piVar2;
    uint uVar3;
    int *piVar4;
    longlong lVar5;
    uint uVar6;
    longlong lVar7;
    int *piVar8;

    if (((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
         (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
        (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x10))) {
        if ((*(int *)(param_1 + 0xe0) == 0) && (*(int *)(param_2 + 0xe0) == 0)) {
            return 1;
        }
        if (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34)) {
            uVar3 = 0;
            lVar5 = 0x23;
            piVar4 = (int *)(param_1 + 0x18);
            piVar8 = (int *)(param_1 + 0x38);
            do {
                if (*piVar4 != *(int *)((longlong)piVar4 + (param_2 - param_1))) {
                    return 0;
                }
                uVar6 = 0;
                lVar7 = 0;
                piVar2 = piVar8;
                do {
                    if (*piVar2 != *(int *)((param_2 - param_1) + (longlong)piVar2)) {
                        return 0;
                    }
                    lVar1 = (lVar5 + lVar7) * 4;
                    if (*(int *)(lVar1 + param_1) != *(int *)(lVar1 + param_2)) {
                        return 0;
                    }
                    uVar6 = uVar6 + 1;
                    lVar7 = lVar7 + 1;
                    piVar2 = piVar2 + 1;
                } while (uVar6 < 3);
                uVar3 = uVar3 + 1;
                piVar4 = piVar4 + 1;
                piVar8 = piVar8 + 3;
                lVar5 = lVar5 + 3;
                if (6 < uVar3) {
                    return 1;
                }
            } while( true );
        }
    }
    return 0;
}



void FUN_14073f5c0(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    uint uVar5;
    ulonglong uVar6;
    longlong lVar7;
    longlong *plVar8;
    uint *puVar9;
    longlong lVar10;
    uint uVar11;
    undefined auStack136 [32];
    longlong local_68;
    undefined4 *local_60;
    longlong *local_58;
    longlong local_50;
    uint local_48 [4];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack136;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    local_68 = param_1;
    local_60 = param_2;
    FUN_1407e4830(param_1 + 0x38,0,0x54);
    local_50 = 0;
    local_58 = (longlong *)0x0;
    FUN_1403d6710(DAT_140c65898 + 0xa0);
    plVar1 = local_58 + local_50;
    for (plVar8 = local_58; plVar8 != plVar1; plVar8 = plVar8 + 1) {
        lVar10 = *plVar8;
        if (lVar10 != 0) {
            iVar3 = *(int *)(*(longlong *)(lVar10 + 0x40) + 0x17c);
            if (iVar3 - 1U < 6) {
                uVar11 = iVar3 - 1;
            }
            else {
                uVar11 = (iVar3 != 0x14) + 6;
            }
            uVar5 = *(uint *)(lVar10 + 0x88);
            if ((int)uVar5 < 0) {
                uVar6 = 0;
                local_48[0] = uVar5 & 0x3ff;
                local_48[2] = uVar5 >> 0x14 & 0x3ff;
                lVar10 = 0;
                local_48[1] = uVar5 >> 10 & 0x3ff;
                do {
                    if (local_48[lVar10] != 0) {
                        uVar4 = (*DAT_140c4b740)(local_48 + uVar6);
                        param_1 = local_68;
                        for (puVar2 = *(ulonglong **)(DAT_140c4b738 + (uVar4 % DAT_140c4b730) * 8);
                             local_68 = param_1, puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
                            if ((uVar4 == *puVar2) && (iVar3 = (*DAT_140c4b748)(), iVar3 != 0)) {
                                param_1 = local_68;
                                if ((undefined4 *)((longlong)puVar2 + 0x14) != (undefined4 *)0x0) {
                                    *(undefined4 *)(local_68 + 0x38 + (lVar10 + (ulonglong)uVar11 * 3) * 4) =
                                            *(undefined4 *)((longlong)puVar2 + 0x14);
                                }
                                break;
                            }
                            param_1 = local_68;
                        }
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                    lVar10 = lVar10 + 1;
                } while (uVar5 < 3);
            }
        }
        param_2 = local_60;
    }
    if (param_2 != (undefined4 *)0x0) {
        uVar6 = 0;
        puVar9 = param_2 + 7;
        *(undefined4 *)(param_1 + 0x18) = *param_2;
        lVar10 = 0xe;
        *(undefined4 *)(param_1 + 0x1c) = param_2[1];
        *(undefined4 *)(param_1 + 0x20) = param_2[2];
        *(undefined4 *)(param_1 + 0x24) = param_2[3];
        *(undefined4 *)(param_1 + 0x28) = param_2[4];
        *(undefined4 *)(param_1 + 0x2c) = param_2[5];
        *(undefined4 *)(param_1 + 0x30) = param_2[6];
        *(undefined4 *)(param_1 + 0x34) = param_2[0xe];
        local_60 = (undefined4 *)((param_1 - (longlong)param_2) + -4);
        do {
            if (*(int *)((longlong)puVar9 + (longlong)local_60) != 0) {
                *(undefined8 *)(param_1 + 0x38 + uVar6 * 0xc) = 0;
                *(undefined4 *)(param_1 + 0x40 + uVar6 * 0xc) = 0;
            }
            uVar11 = *puVar9;
            if ((int)uVar11 < 0) {
                uVar5 = 0;
                local_48[0] = uVar11 & 0x3ff;
                local_48[2] = uVar11 >> 0x14 & 0x3ff;
                lVar7 = 0;
                local_48[1] = uVar11 >> 10 & 0x3ff;
                do {
                    if (local_48[lVar7] != 0) {
                        uVar4 = (*DAT_140c4b740)();
                        param_1 = local_68;
                        for (puVar2 = *(ulonglong **)(DAT_140c4b738 + (uVar4 % DAT_140c4b730) * 8);
                             local_68 = param_1, puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
                            if ((uVar4 == *puVar2) && (iVar3 = (*DAT_140c4b748)(), iVar3 != 0)) {
                                param_1 = local_68;
                                if ((undefined4 *)((longlong)puVar2 + 0x14) != (undefined4 *)0x0) {
                                    *(undefined4 *)(local_68 + (lVar10 + lVar7) * 4) =
                                            *(undefined4 *)((longlong)puVar2 + 0x14);
                                }
                                break;
                            }
                            param_1 = local_68;
                        }
                    }
                    uVar5 = uVar5 + 1;
                    lVar7 = lVar7 + 1;
                } while (uVar5 < 3);
            }
            uVar11 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar11;
            puVar9 = puVar9 + 1;
            lVar10 = lVar10 + 3;
        } while (uVar11 < 7);
    }
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x7c);
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0x88);
    if (local_58 != (longlong *)0x0) {
        (**(code **)(local_58[-2] + 8))(local_58 + -2);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack136);
    return;
}



void FUN_14073fa10(longlong param_1)

{
    undefined4 *puVar1;
    int *piVar2;
    uint uVar3;
    ulonglong uVar4;
    int *piVar5;
    uint uVar6;
    int *piVar7;
    int *piVar8;
    longlong lVar9;

    puVar1 = (undefined4 *)(param_1 + 0xe0);
    *puVar1 = 0;
    if (*(int *)(param_1 + 0xc) == 0) {
        uVar6 = *(uint *)(param_1 + 8);
        uVar4 = (ulonglong)(int)uVar6;
        if ((-1 < (int)uVar6) && (uVar6 < 0xc)) {
            lVar9 = uVar4 * 8 + 0xaf;
            LAB_14073fa58:
            piVar8 = (int *)(DAT_140c65898 + (lVar9 + uVar4) * 8);
            goto LAB_14073fa66;
        }
    }
    else {
        uVar4 = (ulonglong)*(uint *)(param_1 + 8);
        if (*(uint *)(param_1 + 8) < 5) {
            lVar9 = uVar4 * 8 + 0x11b;
            goto LAB_14073fa58;
        }
    }
    piVar8 = (int *)0x0;
    LAB_14073fa66:
    if (piVar8 == (int *)0x0) {
        if ((int)uVar4 != -1) {
            return;
        }
    }
    else if (piVar8[0xe] != *(int *)(param_1 + 0x34)) {
        *puVar1 = 1;
        return;
    }
    uVar6 = 0;
    piVar7 = (int *)(param_1 + 0x38);
    piVar5 = piVar8;
    while ((piVar8 == (int *)0x0 ||
            (*piVar5 == *(int *)((param_1 - (longlong)piVar8) + 0x18 + (longlong)piVar5)))) {
        uVar3 = 0;
        piVar2 = piVar7;
        do {
            if (piVar2[0x15] != *piVar2) goto LAB_14073fadb;
            uVar3 = uVar3 + 1;
            piVar2 = piVar2 + 1;
        } while (uVar3 < 3);
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 1;
        piVar7 = piVar7 + 3;
        if (6 < uVar6) {
            return;
        }
    }
    LAB_14073fadb:
    *puVar1 = 1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong * FUN_14073faf0(longlong param_1,ulonglong *param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    uint uVar7;
    int *piVar9;
    uint uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    int *piVar13;
    uint uVar14;
    uint local_res8;
    longlong local_68;
    ulonglong local_60;
    ulonglong local_58;
    ulonglong uVar8;

    uVar8 = 0;
    uVar7 = 0;
    local_68 = 0;
    if (param_3 == 0) {
        local_60 = 1;
        local_58 = 0;
    }
    else {
        local_60 = 0xf;
        local_58 = 0x900000000;
    }
    iVar2 = *(int *)(param_1 + 0xe0);
    *param_2 = 0;
    param_2[1] = local_60;
    param_2[2] = local_58;
    if (iVar2 == 0) {
        return param_2;
    }
    piVar9 = (int *)(param_1 + 0x38);
    puVar3 = (undefined4 *)(param_1 + 0x18);
    local_res8 = 0;
    uVar11 = uVar8;
    uVar12 = uVar8;
    do {
        lVar4 = FUN_1400b5df0(DAT_140c658f0,*puVar3,0);
        if ((lVar4 != 0) ||
            ((lVar4 = FUN_1403ac780(DAT_140c65898 + 0xa0), uVar1 = (uint)uVar11, lVar4 != 0 &&
                                                                                 (lVar4 = *(longlong *)(lVar4 + 0x40), lVar4 != 0)))) {
            uVar10 = 1;
            piVar13 = piVar9;
            uVar11 = uVar8;
            do {
                if (piVar13[0x15] != *piVar13) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63eac != 0) || (iVar2 = FUN_1401fccc0(), iVar2 < 0)) goto LAB_14073fd25;
                        lVar5 = (**(code **)(*DAT_140c63ae0 + 0x18))();
                    }
                    else {
                        lVar5 = (*DAT_140c63840)(&PTR_u_DyeColorRamp_140a6a168);
                    }
                    if (lVar5 != 0) {
                        uVar1 = uVar7;
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c64f64 == 0) && (iVar2 = FUN_14020bac0(), -1 < iVar2)) {
                                lVar6 = (**(code **)(*DAT_140c654e8 + 0x18))();
                                goto LAB_14073fccb;
                            }
                        }
                        else {
                            lVar6 = (*DAT_140c63840)(&PTR_u_ItemDisplay_140a6ada8);
                            LAB_14073fccb:
                            if (lVar6 != 0) {
                                uVar1 = *(uint *)(lVar6 + 0xf8);
                            }
                        }
                        if ((uVar1 & uVar10) != 0) {
                            local_68 = 0;
                            local_60 = 1;
                            local_58 = 0;
                            if ((DAT_140c65898 != 0) &&
                                (iVar2 = FUN_14070c8c0(lVar4,&local_68,DAT_140c65898,uVar11,
                                                       *(undefined4 *)(lVar5 + 0x10)), iVar2 != 0)) {
                                uVar12 = uVar12 + local_68;
                            }
                        }
                    }
                }
                LAB_14073fd25:
                uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
                uVar14 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar14;
                piVar13 = piVar13 + 1;
                uVar1 = local_res8;
            } while (uVar14 < 3);
        }
        local_res8 = uVar1 + 1;
        uVar11 = (ulonglong)local_res8;
        piVar9 = piVar9 + 3;
        puVar3 = puVar3 + 1;
        if (6 < local_res8) {
            if (param_3 == 0) {
                *param_2 = uVar12;
            }
            else {
                if ((DAT_140dc4d60 & 1) == 0) {
                    DAT_140dc4d60 = DAT_140dc4d60 | 1;
                    DAT_140dc4d6c = 0;
                }
                uVar1 = uVar7;
                if ((uVar12 == 0) || (uVar1 = DAT_140dc4d68, DAT_140dc4d6c != 0)) {
                    *param_2 = (longlong)(int)uVar1;
                }
                else {
                    DAT_140dc4d6c = 1;
                    lVar4 = FUN_140200220(0x498);
                    if (lVar4 != 0) {
                        uVar7 = *(uint *)(lVar4 + 4);
                    }
                    DAT_140dc4d68 = uVar7;
                    *param_2 = (longlong)(int)uVar7;
                }
            }
            return param_2;
        }
    } while( true );
}



void FUN_14073fe40(longlong param_1,undefined4 param_2)

{
    undefined auStack200 [32];
    undefined4 local_a8;
    undefined4 local_a4;
    undefined8 local_a0;
    undefined4 local_98;
    undefined4 local_94;
    undefined4 local_90;
    undefined4 local_8c;
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
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    FUN_1407e4830(&local_a8,0,0x88);
    local_a8 = *(undefined4 *)(param_1 + 8);
    local_a4 = *(undefined4 *)(param_1 + 0xc);
    local_a0 = *(undefined8 *)(param_1 + 0x10);
    local_28 = *(undefined4 *)(param_1 + 0x34);
    local_98 = *(undefined4 *)(param_1 + 0x18);
    local_94 = *(undefined4 *)(param_1 + 0x8c);
    local_90 = *(undefined4 *)(param_1 + 0x90);
    local_8c = *(undefined4 *)(param_1 + 0x94);
    local_88 = *(undefined4 *)(param_1 + 0x1c);
    local_84 = *(undefined4 *)(param_1 + 0x98);
    local_80 = *(undefined4 *)(param_1 + 0x9c);
    local_7c = *(undefined4 *)(param_1 + 0xa0);
    local_78 = *(undefined4 *)(param_1 + 0x20);
    local_74 = *(undefined4 *)(param_1 + 0xa4);
    local_70 = *(undefined4 *)(param_1 + 0xa8);
    local_6c = *(undefined4 *)(param_1 + 0xac);
    local_68 = *(undefined4 *)(param_1 + 0x24);
    local_64 = *(undefined4 *)(param_1 + 0xb0);
    local_60 = *(undefined4 *)(param_1 + 0xb4);
    local_5c = *(undefined4 *)(param_1 + 0xb8);
    local_58 = *(undefined4 *)(param_1 + 0x28);
    local_54 = *(undefined4 *)(param_1 + 0xbc);
    local_50 = *(undefined4 *)(param_1 + 0xc0);
    local_4c = *(undefined4 *)(param_1 + 0xc4);
    local_48 = *(undefined4 *)(param_1 + 0x2c);
    local_44 = *(undefined4 *)(param_1 + 200);
    local_40 = *(undefined4 *)(param_1 + 0xcc);
    local_3c = *(undefined4 *)(param_1 + 0xd0);
    local_38 = *(undefined4 *)(param_1 + 0x30);
    local_34 = *(undefined4 *)(param_1 + 0xd4);
    local_30 = *(undefined4 *)(param_1 + 0xd8);
    local_2c = *(undefined4 *)(param_1 + 0xdc);
    local_24 = param_2;
    FUN_1403f4900(DAT_140c65898,0x255,&local_a8);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack200);
    return;
}



void FUN_1407402b0(longlong param_1,uint param_2,int param_3,undefined8 param_4)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined auStack312 [32];
    undefined8 local_118;
    undefined4 local_110;
    undefined **local_108;
    uint local_100;
    int local_fc;
    undefined8 local_f8;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    lVar4 = 0;
    lVar1 = 0;
    lVar2 = lVar1;
    if (param_3 == 0) {
        lVar2 = lVar4;
        if (((int)param_2 < 0) || (lVar2 = lVar1, 0xb < param_2)) goto LAB_140740325;
        lVar2 = DAT_140c65898 + (longlong)(int)param_2 * 0x48 + 0x578;
        LAB_140740320:
        if (lVar2 == 0) goto LAB_140740325;
    }
    else {
        if ((param_3 == 1) && (param_2 < 5)) {
            lVar2 = DAT_140c65898 + (ulonglong)param_2 * 0x48 + 0x8d8;
            goto LAB_140740320;
        }
        LAB_140740325:
        if (param_2 != 0xffffffff) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            goto LAB_1407403fe;
        }
    }
    local_108 = &PTR_FUN_140b74ce8;
    local_100 = param_2;
    local_fc = param_3;
    local_f8 = param_4;
    FUN_14073f5c0(&local_108,lVar2);
    puVar3 = (undefined8 *)FUN_140059170(param_1,0x10);
    lVar2 = FUN_14018b280(0xe8,0);
    if (lVar2 != 0) {
        lVar4 = FUN_140741170(lVar2,&local_108);
    }
    *puVar3 = 0x3950;
    puVar3[1] = lVar4;
    lVar2 = *(longlong *)(param_1 + 0x20);
    local_118 = FUN_140062650(param_1,"Game.Costume",0xc);
    local_110 = 4;
    FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_118,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    LAB_1407403fe:
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack312);
    return;
}



undefined8 FUN_140740430(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1,"Game.Costume");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        iVar1 = *(int *)(*(longlong *)(lVar3 + 8) + 8);
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)(iVar1 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140740560(longlong param_1)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    lVar3 = FUN_140056ab0(param_1,1);
    if ((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 8), lVar3 == 0)) {
        LAB_1407405aa:
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        iVar1 = FUN_140056d60(param_1,2);
        if (iVar1 - 1U < 6) {
            uVar2 = iVar1 - 1;
            if (6 < uVar2) goto LAB_1407405aa;
        }
        else {
            if (iVar1 != 0x14) goto LAB_1407405aa;
            uVar2 = 6;
        }
        lVar3 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar3 + 0x18 + (ulonglong)uVar2 * 4));
        if (lVar3 != 0) {
            lVar3 = FUN_14018f0e0(local_28,*(undefined8 *)(lVar3 + 0x1e8));
            if (*(longlong *)(lVar3 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            }
            else {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar4) != '\0');
                FUN_140058710(param_1);
            }
            if (local_20 == 0) {
                return 1;
            }
            FUN_14018b900(local_20,0);
            return 1;
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140740660(longlong param_1)

{
    uint uVar1;
    undefined4 *puVar2;
    uint *puVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;

    lVar6 = FUN_140056ab0(param_1,1);
    if ((lVar6 == 0) || (lVar6 = *(longlong *)(lVar6 + 8), lVar6 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        goto LAB_1407406ef;
    }
    iVar4 = FUN_140056d60(param_1,2);
    if (iVar4 - 1U < 6) {
        uVar5 = iVar4 - 1;
        if (uVar5 < 7) {
            LAB_1407406c7:
            uVar1 = *(uint *)(lVar6 + 0x34);
            puVar3 = *(uint **)(param_1 + 0x10);
            puVar3[2] = 1;
            *puVar3 = (uint)((uVar1 >> (uVar5 & 0x1f) & 1) != 0);
            goto LAB_1407406ef;
        }
    }
    else if (iVar4 == 0x14) {
        uVar5 = 6;
        goto LAB_1407406c7;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    LAB_1407406ef:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140740c00(longlong param_1)

{
    uint uVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    bool bVar4;
    int iVar5;
    longlong lVar6;
    undefined8 *puVar7;
    uint uVar8;
    undefined8 *puVar9;

    lVar6 = FUN_140056ab0(param_1,1,"Game.Costume");
    if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
        iVar5 = FUN_140056d60(param_1,2);
        if (iVar5 - 1U < 6) {
            uVar8 = iVar5 - 1;
            if (uVar8 < 7) {
                LAB_140740c79:
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
                puVar9 = &DAT_140a12138;
                if (puVar7 < puVar3) {
                    puVar9 = puVar7;
                }
                if ((*(int *)(puVar9 + 1) == 0) || ((*(int *)(puVar9 + 1) == 1 && (*(int *)puVar9 == 0)))) {
                    bVar4 = false;
                }
                else {
                    bVar4 = true;
                }
                uVar1 = *(uint *)(lVar6 + 0x34);
                if (bVar4) {
                    uVar8 = uVar1 | 1 << ((byte)uVar8 & 0x1f);
                }
                else {
                    uVar8 = uVar1 & ~(1 << ((byte)uVar8 & 0x1f));
                }
                if (uVar8 != uVar1) {
                    *(uint *)(lVar6 + 0x34) = uVar8;
                    puVar2 = *(undefined4 **)(param_1 + 0x10);
                    *puVar2 = 1;
                    puVar2[2] = 1;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    FUN_14073fa10(lVar6);
                    return 1;
                }
                *(undefined4 *)puVar3 = 0;
                *(undefined4 *)(puVar3 + 1) = 1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_14073fa10(lVar6);
                return 1;
            }
        }
        else if (iVar5 == 0x14) {
            uVar8 = 6;
            goto LAB_140740c79;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140740d30(longlong param_1)

{
    undefined4 *puVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    int *piVar6;
    uint uVar7;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Costume");
    if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) {
        iVar2 = FUN_140056d60();
        if (iVar2 - 1U < 6) {
            uVar5 = (ulonglong)(iVar2 - 1U);
            if (iVar2 - 1U < 7) {
                LAB_140740daa:
                uVar7 = 0;
                piVar6 = (int *)(lVar4 + 0x8c + uVar5 * 0xc);
                do {
                    iVar3 = FUN_140056d60(param_1);
                    iVar2 = 0;
                    if (0 < iVar3) {
                        iVar2 = iVar3;
                    }
                    uVar7 = uVar7 + 1;
                    *piVar6 = iVar2;
                    piVar6 = piVar6 + 1;
                } while (uVar7 < 3);
                FUN_14073fa10(lVar4);
                puVar1 = *(undefined4 **)(param_1 + 0x10);
                *puVar1 = 1;
                puVar1[2] = 1;
                goto LAB_140740d8b;
            }
        }
        else if (iVar2 == 0x14) {
            uVar5 = 6;
            goto LAB_140740daa;
        }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = 0;
    LAB_140740d8b:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140740e10(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar4 = FUN_140056ab0(param_1,1,"Game.Costume");
    if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
        puVar2 = *(uint **)(param_1 + 0x10);
        iVar1 = *(int *)(*(longlong *)(lVar4 + 8) + 0xe0);
        puVar2[2] = 1;
        *puVar2 = (uint)(iVar1 != 0);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140740e80(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    undefined4 *puVar3;
    longlong lVar4;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Costume");
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 8), lVar2 == 0)) {
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 0;
    }
    else {
        lVar4 = 0;
        if (*(int *)(lVar2 + 0xc) == 0) {
            uVar1 = *(uint *)(lVar2 + 8);
            lVar4 = 0;
            if ((-1 < (int)uVar1) && (uVar1 < 0xc)) {
                lVar4 = DAT_140c65898 + ((longlong)(int)uVar1 * 9 + 0xaf) * 8;
            }
        }
        else if ((*(int *)(lVar2 + 0xc) == 1) && (*(uint *)(lVar2 + 8) < 5)) {
            lVar4 = DAT_140c65898 + (ulonglong)*(uint *)(lVar2 + 8) * 0x48 + 0x8d8;
        }
        if ((*(int *)(lVar2 + 8) != -1) && (lVar4 == 0)) {
            puVar3 = *(undefined4 **)(param_1 + 0x10);
            *puVar3 = 0;
            puVar3[2] = 1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        FUN_14073f5c0(lVar2);
        puVar3 = *(undefined4 **)(param_1 + 0x10);
        *puVar3 = 1;
    }
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140741000(longlong param_1)

{
    undefined uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined8 local_18;

    lVar2 = FUN_140056ab0(param_1,1,"Game.Costume");
    if ((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar3;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    puVar6 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar3 + 400) + 0x18) + 0x10);
    puVar4 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(*(longlong *)(uVar3 + 400) + 0x10)) {
        puVar4 = puVar6;
    }
    if ((*(int *)(puVar4 + 1) == 0) || ((*(int *)(puVar4 + 1) == 1 && (*(int *)puVar4 == 0)))) {
        uVar1 = 0;
    }
    else {
        uVar1 = 1;
    }
    FUN_14073faf0(*(longlong *)(lVar2 + 8),&local_28,uVar1);
    puVar4 = (undefined8 *)FUN_140059170(param_1,0x18);
    *puVar4 = local_28;
    puVar4[1] = CONCAT44(uStack28,local_20);
    puVar4[2] = local_18;
    lVar2 = *(longlong *)(param_1 + 0x20);
    local_28 = FUN_140062650(param_1,"Game.Money",10);
    local_20 = 4;
    FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 * FUN_140741170(undefined8 *param_1,longlong param_2)

{
    *param_1 = &PTR_FUN_140b74ce8;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    param_1[2] = *(undefined8 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x60);
    *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)(param_2 + 100);
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x88);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)(param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x98);
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
    *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
    *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(param_2 + 0xbc);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc0);
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 0xc4);
    *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
    *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)(param_2 + 0xcc);
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xd0);
    *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)(param_2 + 0xd4);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0xd8);
    *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)(param_2 + 0xdc);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
    return param_1;
}



undefined8 FUN_140741360(longlong param_1)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    undefined4 *puVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar5 = FUN_140056ab0(param_1,1,"Game.QuestHub");
    lVar6 = 0;
    lVar7 = lVar6;
    if (lVar5 != 0) {
        lVar7 = *(longlong *)(lVar5 + 8);
    }
    lVar5 = FUN_140056ab0(param_1,2,"Game.QuestHub");
    if (lVar5 != 0) {
        lVar6 = *(longlong *)(lVar5 + 8);
    }
    if ((lVar7 == 0) || (lVar6 == 0)) {
        puVar4 = *(undefined4 **)(param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
    }
    else {
        iVar1 = *(int *)(lVar6 + 8);
        puVar3 = *(uint **)(param_1 + 0x10);
        iVar2 = *(int *)(lVar7 + 8);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar2 == iVar1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140741400(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_140741443:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.QuestHub",0xd);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_140741527;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140741443;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140741527:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140741540(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.QuestHub");
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
        plVar3 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar3 = *(longlong **)(param_1 + 0x18);
        }
        if (*(int *)(plVar3 + 1) == 2) {
            lVar2 = *plVar3;
        }
        else if (*(int *)(plVar3 + 1) == 7) {
            lVar2 = *plVar3 + 0x30;
        }
        else {
            lVar2 = 0;
        }
        puVar1 = *(undefined8 **)(lVar2 + 8);
        if (puVar1 != (undefined8 *)0x0) {
            (**(code **)*puVar1)(puVar1,1);
        }
    }
    return 0;
}


// undefined8 FUN_1407415c0(longlong param_1)
undefined8 LoadQuestHub(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.QuestHub");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5f2f0;
    puVar6 = PTR_DAT_140c5f2f0;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"QuestHub",&PTR_DAT_140b74cf8);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140741800(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_140056ab0(param_1,1);
    if (((lVar2 == 0) || (*(longlong *)(lVar2 + 8) == 0)) ||
        (lVar2 = FUN_14022bfc0(*(undefined4 *)(*(longlong *)(lVar2 + 8) + 8)), lVar2 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        uVar3 = 0;
        lVar2 = FUN_14024b980(*(undefined4 *)(lVar2 + 4));
        if (lVar2 != 0) {
            lVar2 = FUN_14024db80(*(undefined4 *)(lVar2 + 0x2c));
            while (lVar2 != 0) {
                if (*(int *)(lVar2 + 8) == 0) {
                    uVar3 = FUN_14034bdd0();
                    goto LAB_1407418b1;
                }
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64634 != 0) || (iVar1 = FUN_14024d920(), iVar1 < 0)) break;
                    lVar2 = (**(code **)(*DAT_140c64270 + 0x18))();
                }
                else {
                    lVar2 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8);
                }
            }
            uVar3 = 0;
        }
        LAB_1407418b1:
        lVar2 = FUN_14018f0e0(local_28,uVar3);
        if (*(longlong *)(lVar2 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar4 = -1;
            do {
                lVar4 = lVar4 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar4) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140741940(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;
    int *piVar5;
    int iVar6;
    int iVar7;

    lVar4 = FUN_140056ab0(param_1,1,"Game.QuestHub");
    if (((lVar4 == 0) || (*(longlong *)(lVar4 + 8) == 0)) ||
        (lVar4 = FUN_14022bfc0(*(undefined4 *)(*(longlong *)(lVar4 + 8) + 8)), lVar4 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        iVar6 = 0;
        lVar4 = FUN_14024b980(*(undefined4 *)(lVar4 + 4));
        iVar7 = 0;
        if ((lVar4 != 0) &&
            (piVar5 = (int *)FUN_14024db80(*(undefined4 *)(lVar4 + 0x2c)), piVar5 != (int *)0x0)) {
            while (iVar1 = piVar5[2], iVar1 != 0) {
                iVar7 = iVar6;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64634 != 0) || (iVar3 = FUN_14024d920(), iVar3 < 0)) goto LAB_1407419fb;
                    piVar5 = (int *)(**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,iVar1);
                }
                else {
                    piVar5 = (int *)(*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,iVar1,DAT_140c63858);
                }
                if (piVar5 == (int *)0x0) goto LAB_1407419fb;
            }
            iVar7 = *piVar5;
        }
        LAB_1407419fb:
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar7;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140741a40(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_140056ab0(param_1,1);
    if (((lVar1 == 0) || (*(longlong *)(lVar1 + 8) == 0)) ||
        (lVar1 = FUN_14022bfc0(*(undefined4 *)(*(longlong *)(lVar1 + 8) + 8)), lVar1 == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = 0;
    lVar1 = FUN_14024b980(*(undefined4 *)(lVar1 + 4));
    if ((lVar1 != 0) && (lVar1 = FUN_14024db80(*(undefined4 *)(lVar1 + 0x2c)), lVar1 != 0)) {
        uVar2 = FUN_14034bdd0();
    }
    lVar1 = FUN_14018f0e0(local_28,uVar2);
    if (*(longlong *)(lVar1 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar3) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 == 0) {
        return 1;
    }
    FUN_14018b900(local_20,0);
    return 1;
}



undefined8 FUN_140741b30(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar3 = FUN_140056ab0(param_1,1,"Game.QuestHub");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_14022bfc0(*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8));
        if (lVar3 != 0) {
            iVar2 = 0;
            lVar3 = FUN_14024b980(*(undefined4 *)(lVar3 + 4));
            if (lVar3 != 0) {
                if (DAT_140c658f8 != 0) {
                    puVar4 = (undefined8 *)FUN_140448be0();
                    if (puVar4 != (undefined8 *)0x0) {
                        iVar2 = (**(code **)*puVar4)(puVar4);
                    }
                }
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar1 + 1) = 3;
            *pdVar1 = (double)iVar2;
            goto LAB_140741c1d;
        }
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 1) = 3;
    LAB_140741c1d:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140741c40(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined (*pauVar4) [12];
    undefined8 *puVar5;
    undefined local_38 [16];
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    lVar3 = FUN_140056ab0(param_1,1,"Game.QuestHub");
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
        lVar3 = FUN_14022bfc0(*(undefined4 *)(*(longlong *)(lVar3 + 8) + 8));
        if (lVar3 != 0) {
            lVar3 = FUN_14024b980(*(undefined4 *)(lVar3 + 4));
            if (lVar3 == 0) {
                pauVar4 = (undefined (*) [12])local_38;
                local_38 = ZEXT816(0);
            }
            else {
                pauVar4 = (undefined (*) [12])(lVar3 + 0xc);
            }
            local_38 = ZEXT1216(*pauVar4);
            FUN_1400fa3c0(local_28,param_1,local_38);
            puVar5 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
            puVar2 = *(undefined8 **)(local_18 + 0x10);
            *puVar2 = *puVar5;
            uVar1 = *(undefined4 *)(puVar5 + 1);
            *(undefined4 *)(puVar2 + 1) = uVar1;
            *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
            FUN_1400579e0(local_18,uVar1,local_20);
            return 1;
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140741d40(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    longlong lVar3;
    undefined4 *puVar4;
    longlong *plVar5;
    longlong *plVar6;

    plVar5 = (longlong *)FUN_140056ab0(param_1,1,"Game.CommDialog");
    plVar6 = (longlong *)FUN_140056ab0(param_1,2);
    if ((plVar5 == (longlong *)0x0) || (plVar6 == (longlong *)0x0)) {
        puVar4 = *(undefined4 **)(param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
    }
    else {
        lVar1 = *plVar6;
        puVar2 = *(uint **)(param_1 + 0x10);
        lVar3 = *plVar5;
        puVar2[2] = 1;
        *puVar2 = (uint)(lVar3 == lVar1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140741dd0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    uint uVar5;
    longlong *plVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = *(longlong **)(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x10);
    plVar6 = &DAT_140a12138;
    if (plVar3 < plVar4) {
        plVar6 = plVar3;
    }
    if (*(int *)(plVar6 + 1) == 2) {
        lVar7 = *plVar6;
        LAB_140741e13:
        if (lVar7 != 0) {
            plVar6 = &DAT_140a12138;
            if (plVar3 < plVar4) {
                plVar6 = plVar3;
            }
            iVar2 = *(int *)(plVar6 + 1);
            if ((iVar2 == 5) || (iVar2 == 7)) {
                lVar7 = *(longlong *)(*plVar6 + 0x10);
            }
            else {
                lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar2 * 8);
            }
            if (lVar7 != 0) {
                *plVar4 = lVar7;
                *(undefined4 *)(plVar4 + 1) = 5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x20);
                local_18 = FUN_140062650(param_1,"Game.CommDialog",0xf);
                local_10 = 4;
                FUN_14005e8e0(param_1,lVar7 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar7 = *(longlong *)(param_1 + 0x10);
                uVar8 = 0;
                uVar5 = 0;
                puVar1 = (undefined8 *)(lVar7 + -0x20);
                uVar9 = uVar5;
                if (((undefined8 *)(lVar7 + -0x10) != &DAT_140a12138) && (puVar1 != &DAT_140a12138)) {
                    uVar5 = FUN_14005ac20((undefined8 *)(lVar7 + -0x10),puVar1);
                    uVar9 = uVar8;
                }
                *(undefined8 **)(param_1 + 0x10) = puVar1;
                *(undefined4 *)(&DAT_ffffffffffffffe8 + lVar7) = 1;
                *(uint *)puVar1 = uVar9 & 0xffffff00 | (uint)(uVar5 != 0);
                goto LAB_140741ef7;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_140741e13;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_140741ef7:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 * FUN_140741f10(undefined8 *param_1,short *param_2,undefined4 param_3)

{
    short sVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    puVar3 = (undefined8 *)0x0;
    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    *param_1 = &PTR_LAB_140b74d38;
    if (param_2 != (short *)0x0) {
        sVar1 = *param_2;
        puVar4 = puVar3;
        while (sVar1 != 0) {
            puVar4 = (undefined8 *)((longlong)puVar4 + 1);
            sVar1 = param_2[(longlong)puVar4];
        }
        puVar2 = (undefined8 *)FUN_14018b280((longlong)puVar4 * 2 + 0x12,0);
        if (puVar2 != (undefined8 *)0x0) {
            puVar2[1] = puVar4;
            *puVar2 = &PTR_LAB_140b55060;
            puVar3 = puVar2;
        }
        puVar3 = puVar3 + 2;
        FUN_1407db590(puVar3,param_2,(longlong)puVar4 * 2);
        *(undefined2 *)((longlong)puVar4 * 2 + (longlong)puVar3) = 0;
        param_1[2] = puVar3;
        *(undefined4 *)(param_1 + 3) = param_3;
        return param_1;
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = param_3;
    return param_1;
}



undefined8 * FUN_140741ff0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_LAB_140b55048;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}


// undefined8 FUN_140742040(longlong param_1)
undefined8 LoadCommDialog(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.CommDialog");
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = puVar1[-2];
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar1 + -1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"__index",7);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar3 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    ppuVar5 = &PTR_DAT_140c5f380;
    puVar6 = PTR_DAT_140c5f380;
    while (puVar6 != (undefined *)0x0) {
        puVar6 = ppuVar5[1];
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        lVar3 = FUN_140060ab0(param_1,0);
        *(undefined **)(lVar3 + 0x20) = puVar6;
        plVar2 = *(longlong **)(param_1 + 0x10);
        *plVar2 = lVar3;
        *(undefined4 *)(plVar2 + 1) = 6;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        puVar6 = *ppuVar5;
        uVar4 = FUN_1400580e0(param_1,0xfffffffe);
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (puVar6[lVar3] != '\0');
        local_18 = FUN_140062650(param_1,puVar6);
        local_10 = 4;
        FUN_14005ea50(param_1,uVar4,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        ppuVar5 = ppuVar5 + 2;
        puVar6 = *ppuVar5;
    }
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_140057020(param_1,"CommDialog",&PTR_DAT_140b74d18);
    return 1;
}



undefined8 FUN_1407421d0(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined8 *)0x0) {
        return 0;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,8);
    *puVar2 = param_2;
    (**(code **)*param_2)(param_2);
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.CommDialog",0xf);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_140742270(undefined8 param_1)

{
    longlong **pplVar1;

    pplVar1 = (longlong **)FUN_140056ab0(param_1,1,"Game.CommDialog");
    if ((pplVar1 != (longlong **)0x0) && (*pplVar1 != (longlong *)0x0)) {
        (**(code **)(**pplVar1 + 8))();
        *pplVar1 = (longlong *)0x0;
    }
    return 0;
}



undefined8 FUN_1407422b0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    plVar1 = (longlong *)FUN_140056ab0(param_1,1);
    if (((plVar1 == (longlong *)0x0) || (*plVar1 == 0)) || (*(longlong *)(*plVar1 + 0x10) == 0)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar2 = FUN_14018f0e0(local_28);
        if (*(longlong *)(lVar2 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        }
        else {
            lVar3 = -1;
            do {
                lVar3 = lVar3 + 1;
            } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar3) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_140742350(longlong param_1)

{
    undefined4 *puVar1;
    longlong *plVar2;

    plVar2 = (longlong *)FUN_140056ab0(param_1,1,"Game.CommDialog");
    if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) && (*(int *)(*plVar2 + 0x18) != 0)) {
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407423c0(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    longlong *plVar3;

    plVar3 = (longlong *)FUN_140056ab0(param_1,1,"Game.CommDialog");
    if (((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) &&
        (iVar1 = *(int *)(*plVar3 + 0x18), iVar1 != 0)) {
        if (DAT_140c7dc80 != 0) {
            FUN_140712c00(DAT_140c7dc80,iVar1,&LAB_140472eb0,0);
        }
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 1;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_140742600(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    uVar4 = uVar6;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar4 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar2 = FUN_1400f26a0(uVar4 + 0x180,1);
    uVar4 = (ulonglong)(iVar2 - 1);
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if ((lVar1 != 0) && (uVar4 < *(ulonglong *)(lVar1 + 0x60))) {
        if (uVar4 == 0) {
            uVar4 = *(ulonglong *)(lVar1 + 0x68);
        }
        else if (uVar4 < *(ulonglong *)(lVar1 + 0x68) || uVar4 == *(ulonglong *)(lVar1 + 0x68)) {
            uVar4 = uVar4 - 1;
        }
        lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar4 * 8);
        if (lVar1 != 0) {
            uVar3 = FUN_1403d9500(DAT_140c65898,lVar1 + 0x10);
            uVar6 = (ulonglong)uVar3;
        }
    }
    FUN_140649870(param_1,uVar6);
    return;
}



undefined8 FUN_1407426d0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;

    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = 0;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_140742718;
            }
            uVar1 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar1;
            uVar5 = (ulonglong)uVar1;
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar4 = 0;
    LAB_140742718:
    iVar2 = FUN_1400f26a0(lVar4 + 0x180,1);
    iVar2 = FUN_1406054d0(DAT_140c65898 + 0x6c10,param_1,iVar2 + -1);
    if (iVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    return 1;
}



undefined8 FUN_140742770(longlong param_1)

{
    int iVar1;

    iVar1 = FUN_140606150(DAT_140c65898 + 0x6c10,param_1);
    if (iVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    return 1;
}



undefined8 FUN_140742950(longlong param_1)

{
    longlong lVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    short *local_68;
    undefined *local_60;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    short *local_20;

    uVar8 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar8;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                uVar8 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                break;
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar1 = *(longlong *)(uVar8 + 400);
    lVar3 = FUN_14018f0e0(&local_68,0);
    uVar4 = *(undefined8 *)(lVar3 + 8);
    puVar5 = *(undefined8 **)(lVar1 + 0x18);
    if (((puVar5 < *(undefined8 **)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar5 + 1))) {
        uVar4 = FUN_140056bb0(lVar1,1);
    }
    FUN_14018f2d0(local_28,uVar4);
    if (local_60 != (undefined *)0x0) {
        FUN_14018b900(local_60,0);
    }
    lVar1 = *(longlong *)(uVar8 + 400);
    lVar3 = FUN_14018f0e0(local_48,0);
    uVar4 = *(undefined8 *)(lVar3 + 8);
    puVar5 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(lVar1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x18))) {
        uVar4 = FUN_140056bb0(lVar1,2);
    }
    FUN_14018f2d0(&local_68,uVar4);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar2 = local_60;
    if ((local_20 != (short *)0x0) && (*local_20 != 0)) {
        puVar6 = &DAT_1409f3bb4;
        if (local_60 != (undefined *)0x0) {
            puVar6 = local_60;
        }
        local_68 = local_20;
        local_60 = puVar6;
        FUN_1403f4900(DAT_140c65898,0x416,&local_68);
    }
    if (puVar2 != (undefined *)0x0) {
        FUN_14018b900(puVar2,0);
    }
    if (local_20 != (short *)0x0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_140742af0(void)

{
    undefined8 local_18;
    undefined8 local_10;

    if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
        local_18 = *(undefined8 *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 0x48);
        local_10 = 1;
        FUN_1403f4740(DAT_140c65898,0x42b,&local_18);
    }
    return 0;
}



undefined8 FUN_140742b40(longlong param_1)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar2;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar2 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar1 = FUN_1400f26a0(uVar2 + 0x180,1);
    if (iVar1 != 0) {
        FUN_140601ad0(DAT_140c65898 + 0x6c10,iVar1 + -1);
    }
    return 0;
}



undefined8 FUN_140742bd0(longlong param_1)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar2;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar2 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar1 = FUN_1400f26a0(uVar2 + 0x180,1);
    if (iVar1 != 0) {
        FUN_140601b80(DAT_140c65898 + 0x6c10,iVar1 + -1);
    }
    return 0;
}



undefined8 FUN_140742c60(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    undefined8 *puVar6;
    uint local_res10;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined ***local_10;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = 0;
    uVar5 = uVar4;
    if (((puVar1 < puVar2) && (puVar6 = &DAT_140a12138, puVar1 != &DAT_140a12138)) &&
        (uVar5 = 0, 0 < *(int *)(puVar1 + 1))) {
        local_30 = 1;
        local_40 = 0xfffffffe;
        local_48 = &PTR_FUN_140b569f0;
        local_38 = param_1;
        if (((puVar1 < puVar2) && (puVar1 != &DAT_140a12138)) && (*(int *)(puVar1 + 1) == 5)) {
            FUN_1400579e0(param_1,puVar2,0xfffffffe);
            puVar1 = *(undefined8 **)(local_38 + 0x10);
            if (*(undefined8 **)(local_38 + 0x18) < puVar1) {
                puVar6 = *(undefined8 **)(local_38 + 0x18);
            }
            *puVar1 = *puVar6;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + 0x10;
            local_40 = FUN_1400578c0(local_38);
        }
        local_20 = 0xfffffffe;
        local_10 = &local_48;
        local_28 = &PTR_FUN_140b56a08;
        *(undefined4 *)(*(longlong *)(local_38 + 0x10) + 8) = 0;
        *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + 0x10;
        local_18 = local_38;
        FUN_1400fa090(&local_28,0xffffffff);
        *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + -0x10;
        uVar5 = uVar4;
        while ((iVar3 = (*(code *)(*local_10)[1])(), iVar3 != 0 &&
                                                     (iVar3 = FUN_1400fcba0(&local_28), iVar3 != 0))) {
            iVar3 = FUN_1400fc8e0();
            if ((-1 < iVar3) && (local_res10 < 3)) {
                uVar5 = uVar5 | 1 << ((byte)local_res10 & 0x1f);
            }
        }
        local_28 = &PTR_FUN_140b56a08;
        if (local_18 != 0) {
            FUN_1400579e0();
        }
        local_48 = &PTR_FUN_140b56a08;
        if (local_38 != 0) {
            FUN_1400579e0();
        }
    }
    FUN_1406019a0(DAT_140c65898 + 0x6c10,uVar5);
    return 0;
}



undefined8 FUN_140742df0(void)

{
    FUN_140601a50(DAT_140c65898 + 0x6c10);
    return 0;
}



undefined8 FUN_140742ea0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    uint *puVar3;
    longlong lVar4;

    lVar4 = DAT_140c65898;
    plVar1 = (longlong *)(DAT_140c65898 + 0x6c30);
    lVar2 = *plVar1;
    if (lVar2 != 0) {
        *(undefined4 *)(DAT_140c65898 + 0x6c38) = 0;
        FUN_1403f4900(lVar4,0x453,plVar1);
        *plVar1 = 0;
        *(undefined8 *)(lVar4 + 0x6c38) = 0;
        *(undefined8 *)(lVar4 + 0x6c40) = 0;
        *(undefined8 *)(lVar4 + 0x6c48) = 0;
    }
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(lVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140742fa0(void)

{
    FUN_140605210(DAT_140c65898 + 0x6c10);
    return 0;
}



undefined8 FUN_140743010(void)

{
    FUN_1406052d0(DAT_140c65898 + 0x6c10);
    return 0;
}



undefined8 FUN_140743030(longlong param_1)

{
    int iVar1;

    iVar1 = FUN_1406069b0(DAT_140c65898 + 0x6c10,param_1);
    if (iVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    return 1;
}



undefined8 FUN_1407430c0(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,4);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407431c0(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,2);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407432c0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    uint *puVar4;
    bool bVar5;
    bool bVar6;
    ulonglong uVar7;
    uint uVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;
    ulonglong local_10;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar9 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar9 * 8);
                break;
            }
            uVar9 = (ulonglong)((int)uVar9 + 1);
        } while (uVar9 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    puVar1 = *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x18);
    puVar10 = &DAT_140a12138;
    if (puVar1 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar10 = puVar1;
    }
    bVar6 = false;
    bVar5 = bVar6;
    if ((*(int *)(puVar10 + 1) != 0) && ((*(int *)(puVar10 + 1) != 1 || (*(int *)puVar10 != 0)))) {
        bVar5 = true;
    }
    lVar2 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x60) != 0)) &&
        (lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + *(longlong *)(lVar2 + 0x68) * 8),
                lVar3 != 0)) {
        local_28 = *(undefined8 *)(lVar2 + 0x48);
        local_20 = *(undefined8 *)(lVar3 + 0x10);
        local_18 = *(undefined8 *)(lVar3 + 0x18);
        if (bVar5) {
            uVar8 = *(uint *)(lVar3 + 8) | 0x800;
        }
        else {
            uVar8 = *(uint *)(lVar3 + 8) & 0xfffff7ff;
        }
        local_10 = CONCAT44(*(uint *)(lVar3 + 8) ^ (uVar8 | 0x4000),uVar8) | 0x4000;
        FUN_1403f4740(DAT_140c65898,0x408,&local_28);
        bVar6 = true;
    }
    puVar4 = *(uint **)(param_1 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)bVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140743420(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,0x80);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140743520(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,0x40);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140743620(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,0x20);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140743720(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,0x400);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140743820(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,0x100);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140743920(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,0x200);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140743a20(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,0x1000);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140743b20(longlong param_1)

{
    uint *puVar1;
    undefined uVar2;
    int iVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar7 + 0x180,1);
    puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)(uVar7 + 400) + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(*(longlong *)(uVar7 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *)(puVar6 + 1) == 0) || ((*(int *)(puVar6 + 1) == 1 && (*(int *)puVar6 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    iVar3 = FUN_140601d20(DAT_140c65898 + 0x6c10,iVar3 + -1,uVar2,0x2000);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140743c20(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    uint *puVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
        } while (uVar8 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar1 = *(longlong *)(uVar7 + 400);
    lVar5 = FUN_14018f0e0(local_48,0);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    puVar2 = *(undefined8 **)(lVar1 + 0x18);
    if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar2 + 1))) {
        uVar6 = FUN_140056bb0(lVar1,1);
    }
    FUN_14018f2d0(local_28,uVar6);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    iVar4 = FUN_140602020(DAT_140c65898 + 0x6c10,local_20);
    puVar3 = *(uint **)(param_1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar4 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_140743dc0(undefined8 param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1,1);
    FUN_140601c10(DAT_140c65898 + 0x6c10,uVar1);
    return 0;
}



undefined8 FUN_140743e50(undefined8 param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1,1);
    FUN_140601c90(DAT_140c65898 + 0x6c10,uVar1);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140743f30(longlong param_1)

{
    int iVar1;
    uint uVar2;
    double local_18;
    undefined8 local_10;
    double *pdVar3;

    if (*(longlong *)(DAT_140c65898 + 0x6c50) == 0) {
        return 0;
    }
    pdVar3 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar3 = *(double **)(param_1 + 0x18);
    }
    if (*(int *)(pdVar3 + 1) != 3) {
        if ((*(int *)(pdVar3 + 1) != 4) || (iVar1 = FUN_14005ac80((longlong)*pdVar3 + 0x20), iVar1 == 0)
                ) {
            uVar2 = 0;
            goto LAB_140743fa5;
        }
        local_10 = CONCAT44(local_10._4_4_,3);
        pdVar3 = &local_18;
    }
    uVar2 = (uint)*pdVar3;
    LAB_140743fa5:
    if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
        local_18 = *(double *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 0x48);
        local_10 = (ulonglong)uVar2;
        FUN_1403f4740(DAT_140c65898,0x412,&local_18);
    }
    return 0;
}



undefined8 FUN_140744210(longlong param_1)

{
    undefined4 uVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    undefined8 *puVar5;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar5 + 1) = 5;
    *puVar5 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_1);
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (*(longlong *)(DAT_140c65898 + 0x6c50) == 0) {
        puVar3 = (undefined8 *)FUN_14005c3c0(uVar2,uVar1);
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        *puVar5 = *puVar3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar5,L"eNormalRule",1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        puVar3 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar5 = *puVar3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        puVar3 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar5 = *puVar3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        puVar3 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar5 = *puVar3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
    }
    else {
        uVar4 = (ulonglong)*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 0x28);
        puVar3 = (undefined8 *)FUN_14005c3c0(uVar2,uVar1);
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        *puVar5 = *puVar3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar5,L"eNormalRule",uVar4 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        puVar3 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar5 = *puVar3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        puVar3 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar5 = *puVar3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        puVar3 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        *puVar5 = *puVar3;
        *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar5 = *puVar3;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_1407444e0(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    int iVar3;

    iVar2 = FUN_140056d60(param_1,1);
    iVar3 = FUN_140056d60(param_1,2);
    iVar2 = FUN_140601df0(DAT_140c65898 + 0x6c10,iVar2 + -1,iVar3 + -1);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140744550(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    undefined4 uVar3;

    iVar2 = FUN_140056d60(param_1,1);
    uVar3 = FUN_140056d60(param_1,2);
    iVar2 = FUN_140601f00(DAT_140c65898 + 0x6c10,iVar2 + -1,uVar3);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407445c0(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    iVar2 = FUN_140601fb0(DAT_140c65898 + 0x6c10);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140744610(void)

{
    longlong lVar1;
    int iVar2;
    undefined8 local_res10 [3];

    lVar1 = DAT_140c65898;
    if ((*(longlong *)(DAT_140c65898 + 0x6c50) != 0) &&
        (iVar2 = FUN_140601fb0(DAT_140c65898 + 0x6c10), iVar2 != 0)) {
        local_res10[0] = *(undefined8 *)(*(longlong *)(lVar1 + 0x6c50) + 0x48);
        FUN_1403f4740(DAT_140c65898,0x411,local_res10);
    }
    return 0;
}



undefined8 FUN_140744680(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    undefined4 *puVar3;
    int iVar4;
    ulonglong uVar5;

    iVar4 = FUN_140056d60();
    uVar5 = (ulonglong)(iVar4 - 1);
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if ((lVar1 != 0) && (uVar5 < *(ulonglong *)(lVar1 + 0x60))) {
        if (uVar5 == 0) {
            uVar5 = *(ulonglong *)(lVar1 + 0x68);
        }
        else if (uVar5 < *(ulonglong *)(lVar1 + 0x68) || uVar5 == *(ulonglong *)(lVar1 + 0x68)) {
            uVar5 = uVar5 - 1;
        }
        lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x58) + uVar5 * 8);
        if (lVar1 != 0) {
            puVar2 = *(uint **)(param_1 + 0x10);
            iVar4 = *(int *)(lVar1 + 0xe8);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar4 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140744720(longlong param_1)

{
    double *pdVar1;
    undefined4 *puVar2;
    int iVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;

    iVar3 = FUN_140056d60(param_1,1);
    iVar4 = FUN_140056d60(param_1,2);
    uVar5 = (ulonglong)(iVar4 - 1);
    lVar8 = *(longlong *)(DAT_140c65898 + 0x6c50);
    uVar7 = (ulonglong)(iVar3 - 1U);
    if ((lVar8 == 0) || (*(ulonglong *)(lVar8 + 0x60) <= uVar7)) {
        lVar8 = 0;
    }
    else if (iVar3 - 1U == 0) {
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + *(longlong *)(lVar8 + 0x68) * 8);
    }
    else {
        if (uVar7 < *(ulonglong *)(lVar8 + 0x68) || uVar7 == *(ulonglong *)(lVar8 + 0x68)) {
            uVar7 = uVar7 - 1;
        }
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x58) + uVar7 * 8);
    }
    lVar6 = *(longlong *)(DAT_140c65898 + 0x6c50);
    if ((lVar6 == 0) || (*(ulonglong *)(lVar6 + 0x60) <= uVar5)) {
        lVar6 = 0;
    }
    else if (uVar5 == 0) {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x58) + *(longlong *)(lVar6 + 0x68) * 8);
    }
    else {
        if (uVar5 < *(ulonglong *)(lVar6 + 0x68) || uVar5 == *(ulonglong *)(lVar6 + 0x68)) {
            uVar5 = uVar5 - 1;
        }
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x58) + uVar5 * 8);
    }
    if ((lVar8 == 0) || (lVar6 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((((*(int *)(lVar8 + 0xd0) == *(int *)(lVar6 + 0xd0)) &&
              (*(int *)(lVar8 + 0xd4) == *(int *)(lVar6 + 0xd4))) &&
             (*(int *)(lVar8 + 0xd8) == *(int *)(lVar6 + 0xd8))) &&
            (*(int *)(lVar8 + 0xe0) == *(int *)(lVar6 + 0xe0))) {
            iVar3 = 1;
        }
        else {
            iVar3 = 0;
        }
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar3;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140744d00(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    FUN_140056d60();
    iVar2 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
        iVar2 = FUN_14079ef50();
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}


// undefined8 FUN_140744d60(longlong param_1)
undefined8 GroupLibLoader(longlong param_1)
{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 local_38;
    undefined4 local_30;

    FUN_140057020(param_1,"GroupLib",&PTR_s_AmILeader_140b74d50);
    local_38 = FUN_140062650(param_1,"GroupLib",8);
    local_30 = 4;
    FUN_14005e8e0(param_1,param_1 + 0x78,&local_38,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"LootThreshold",0xd);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Inferior",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Average",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b4959c,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Excellent",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Superb",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Legendary",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Artifact",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"LootRule",8);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"FreeForAll",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RoundRobin",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"NeedBeforeGreed",0xf);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Master",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"HarvestLootRule",0xf);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"RoundRobin",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FirstTagger",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Result",6);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b496f4,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Accepted",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Declined",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"NoPermissions",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"PlayerNotFound",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RealmNotFound",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Grouped",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Pending",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ExpiredInviter",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ExpiredInvitee",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"IsInvited",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"InvitedYou",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b49814,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402a000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RoleFull",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"NoInvitingSelf",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ServerControlled",0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"GroupNotFound",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"NotAcceptingRequests",0x14);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b497b0,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4033000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"SentToLeader",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4034000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"LeaderOffline",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4035000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"WrongFaction",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4036000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"PrivilegeRestricted",0x13);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4037000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"PvPFlagRestriction",0x12);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4038000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RemoveReason",0xc);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b49928,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Kicked",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Disconnected",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Disband",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RemovedByServer",0xf);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"VoteKicked",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RemovedByServerForPvPFlag",0x19);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ActionResult",0xc);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"LeaveSuccess",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"LeaveFailed",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"DisbandSuccess",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"DisbandFailed",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"KickSuccess",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"KickFailed",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"PromoteSuccess",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"PromoteFailed",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FlagsSuccess",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FlagsFailed",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MemberFlagsSuccess",0x12);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MemberFlagsFailed",0x11);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"NotInGroup",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402a000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ChangeSettingsFailed",0x14);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ChangeSettingsSuccess",0x15);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MentoringInvalidMentor",0x16);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MentoringInvalidMentee",0x16);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"InvalidGroup",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MentoringSelf",0xd);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4033000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ReadyCheckFailed",0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4034000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MentoringNotAllowed",0x13);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4037000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MarkingNotPermitted",0x13);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4035000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"InvalidMarkIndex",0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4036000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"InvalidMarkTarget",0x11);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4038000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"MentoringInCombat",0x11);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4039000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Difficulty",10);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"InvitationMethod",0x10);
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    local_38 = FUN_140062650(param_1,"GroupLib",8);
    local_30 = 4;
    FUN_14005ea50(param_1,param_1 + 0x78,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}

