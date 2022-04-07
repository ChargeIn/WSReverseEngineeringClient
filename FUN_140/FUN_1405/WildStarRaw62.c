//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_140558e90(longlong param_1)

{
    longlong *plVar1;
    longlong **pplVar2;
    undefined8 uVar3;
    longlong **pplVar4;
    longlong *plVar5;
    longlong **pplVar6;
    undefined *puVar7;
    longlong *plVar8;
    longlong lVar9;
    int iVar10;
    longlong **pplVar11;
    ulonglong uVar12;
    int iVar13;
    undefined auStack1128 [32];
    undefined local_448 [8];
    longlong **local_440;
    undefined local_438 [8];
    longlong *local_430;
    undefined local_428 [1000];
    longlong *local_40;
    ulonglong local_38;
    longlong local_30;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1128;
    if (*(undefined8 **)**(undefined8 **)(param_1 + 8) != *(undefined8 **)(param_1 + 8)) {
        pplVar4 = (longlong **)FUN_14018b280(0x18);
        *pplVar4 = (longlong *)pplVar4;
        pplVar4[1] = (longlong *)pplVar4;
        iVar10 = 0x3f;
        pplVar6 = &local_430;
        local_440 = pplVar4;
        do {
            plVar5 = (longlong *)FUN_14018b280(0x18);
            iVar10 = iVar10 + -1;
            *plVar5 = (longlong)plVar5;
            *pplVar6 = plVar5;
            plVar5[1] = (longlong)plVar5;
            pplVar6 = pplVar6 + 2;
        } while (-1 < iVar10);
        pplVar6 = *(longlong ***)(param_1 + 8);
        iVar10 = 0;
        if ((longlong **)*pplVar6 != pplVar6) {
            do {
                plVar5 = *pplVar6;
                plVar8 = *pplVar4;
                plVar1 = (longlong *)*plVar5;
                if ((plVar8 != plVar5) && (plVar8 != plVar1)) {
                    *(longlong **)plVar1[1] = plVar8;
                    *(longlong **)plVar5[1] = plVar1;
                    *(longlong **)plVar8[1] = plVar5;
                    lVar9 = plVar8[1];
                    plVar8[1] = plVar1[1];
                    plVar1[1] = plVar5[1];
                    plVar5[1] = lVar9;
                }
                iVar13 = 0;
                lVar9 = 0;
                pplVar6 = pplVar4;
                if (0 < iVar10) {
                    pplVar11 = &local_430;
                    do {
                        pplVar2 = (longlong **)*pplVar11;
                        pplVar6 = pplVar4;
                        if ((longlong **)*pplVar2 == pplVar2) break;
                        FUN_1401589f0(local_438 + (longlong)iVar13 * 0x10,local_448,&LAB_140555320);
                        lVar9 = lVar9 + 1;
                        *pplVar11 = (longlong *)pplVar4;
                        pplVar11 = pplVar11 + 2;
                        iVar13 = iVar13 + 1;
                        pplVar6 = pplVar2;
                        pplVar4 = pplVar2;
                        local_440 = pplVar2;
                    } while (lVar9 < iVar10);
                }
                pplVar4 = *(longlong ***)(local_428 + lVar9 * 0x10 + -8);
                *(longlong ***)(local_428 + lVar9 * 0x10 + -8) = pplVar6;
                if (iVar13 == iVar10) {
                    iVar10 = iVar10 + 1;
                }
                pplVar6 = *(longlong ***)(param_1 + 8);
                local_440 = pplVar4;
            } while ((longlong **)*pplVar6 != pplVar6);
        }
        iVar13 = 0x3f;
        if (1 < iVar10) {
            puVar7 = local_428;
            uVar12 = (ulonglong)(iVar10 - 1);
            do {
                FUN_1401589f0(puVar7,puVar7 + -0x10,&LAB_140555320);
                puVar7 = puVar7 + 0x10;
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
        plVar5 = &local_30;
        uVar3 = *(undefined8 *)(local_428 + (longlong)(iVar10 + -1) * 0x10 + -8);
        *(undefined8 *)(local_428 + (longlong)(iVar10 + -1) * 0x10 + -8) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = uVar3;
        do {
            pplVar6 = (longlong **)(plVar5 + -2);
            plVar5 = plVar5 + -2;
            plVar8 = (longlong *)**pplVar6;
            if (plVar8 != *pplVar6) {
                do {
                    plVar1 = (longlong *)*plVar8;
                    FUN_14018b900(plVar8,0);
                    plVar8 = plVar1;
                } while (plVar1 != (longlong *)*plVar5);
            }
            *(longlong *)*plVar5 = *plVar5;
            *(longlong *)(*plVar5 + 8) = *plVar5;
            FUN_14018b900(*plVar5,0);
            iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
        pplVar6 = (longlong **)*pplVar4;
        while (pplVar6 != pplVar4) {
            pplVar11 = (longlong **)*pplVar6;
            FUN_14018b900(pplVar6,0);
            pplVar6 = pplVar11;
        }
        *pplVar4 = (longlong *)pplVar4;
        pplVar4[1] = (longlong *)pplVar4;
        FUN_14018b900(pplVar4,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1128);
    return;
}



void FUN_140559130(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x88) + 8))();
        *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x90) + 8))();
        *(undefined8 *)(param_1 + 0x90) = 0;
    }
    return;
}



undefined8 FUN_140559180(undefined4 param_1,longlong param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;

    iVar4 = DAT_140c4d220;
    if (*DAT_140c63750 < DAT_140c4d220) {
        iVar4 = *DAT_140c63750;
    }
    if ((&DAT_140c4d230)[iVar4] == '\0') {
        return 0x80004005;
    }
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x48) = 300;
    *(undefined8 *)(param_2 + 0x4c) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x80) = 0;
    if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0x90) + 0x98))(param_1,0);
    }
    *(undefined4 *)(param_2 + 4) = 0;
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(param_2 + 0x20) = *param_3;
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    *(undefined4 *)(param_2 + 0x3c) = 0x3fc00000;
    FUN_140559920(param_2);
    FUN_14055a050(param_2);
    return 0;
}



undefined8 FUN_140559250(undefined8 param_1,longlong param_2,longlong param_3)

{
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x48) = 300;
    *(undefined8 *)(param_2 + 0x4c) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x80) = 0;
    if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0x90) + 0x98))(param_1,0);
    }
    if (param_3 == 0) {
        return 0x80004005;
    }
    *(undefined4 *)(param_2 + 4) = 1;
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_2 + 0x3c) = 0x3fc00000;
    FUN_140559920(param_2);
    return 0;
}



undefined8
FUN_1405592f0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,undefined4 param_5,
              undefined8 param_6,int param_7)

{
    undefined4 uVar1;
    int iVar2;

    if (param_7 == 0) {
        iVar2 = DAT_140c4d260;
        if (*DAT_140c63750 < DAT_140c4d260) {
            iVar2 = *DAT_140c63750;
        }
        if ((&DAT_140c4d270)[iVar2] == '\0') {
            return 0x80004005;
        }
    }
    else {
        iVar2 = DAT_140c4d2a0;
        if (*DAT_140c63750 < DAT_140c4d2a0) {
            iVar2 = *DAT_140c63750;
        }
        if ((&DAT_140c4d2b0)[iVar2] == '\0') {
            return 0x80004005;
        }
    }
    if ((param_3 < 0x24) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) {
        FUN_1405598d0(param_1);
        *(undefined4 *)(param_1 + 4) = 2;
        uVar1 = *(undefined4 *)(param_2 + 8);
        *(undefined4 *)(param_1 + 0x3c) = param_5;
        *(undefined4 *)(param_1 + 0xc) = uVar1;
        *(int *)(param_1 + 0x54) = param_3;
        FUN_140559920(param_1);
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_1405593e0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 *param_4)

{
    int iVar1;
    longlong lVar2;

    iVar1 = DAT_140c4d260;
    if (*DAT_140c63750 < DAT_140c4d260) {
        iVar1 = *DAT_140c63750;
    }
    if ((&DAT_140c4d270)[iVar1] != '\0') {
        *(undefined4 *)(param_2 + 4) = 0xffffffff;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined4 *)(param_2 + 0x40) = 0;
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x48) = 300;
        *(undefined8 *)(param_2 + 0x4c) = 0xffffffffffffffff;
        *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
        *(undefined4 *)(param_2 + 0x80) = 0;
        if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_2 + 0x90) + 0x98))(param_1,0);
        }
        if (((param_3 != 0) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) &&
            (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
            lVar2 = FUN_1403ac780(DAT_140c65898 + 0xa0,param_4);
            if (lVar2 != 0) {
                lVar2 = FUN_14056a030(lVar2);
                if (lVar2 != 0) {
                    *(undefined4 *)(param_2 + 4) = 3;
                    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 8);
                    *(undefined8 *)(param_2 + 0x48) = *param_4;
                    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(*(longlong *)(lVar2 + 0x70) + 0x70);
                    FUN_140559920(param_2);
                }
                return 0;
            }
        }
    }
    return 0x80004005;
}



undefined8 FUN_140559500(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    float fVar5;

    iVar1 = DAT_140c4d2a0;
    if (*DAT_140c63750 < DAT_140c4d2a0) {
        iVar1 = *DAT_140c63750;
    }
    if ((&DAT_140c4d2b0)[iVar1] != '\0') {
        *(undefined4 *)(param_2 + 4) = 0xffffffff;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined4 *)(param_2 + 0x40) = 0;
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x48) = 300;
        *(undefined8 *)(param_2 + 0x4c) = 0xffffffffffffffff;
        *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
        *(undefined4 *)(param_2 + 0x80) = 0;
        if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_2 + 0x90) + 0x98))(param_1,0);
        }
        if ((param_3 != 0) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) {
            if (((ulonglong)param_4 < *(ulonglong *)(DAT_140c65898 + 0xa98)) &&
                (lVar3 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0xa90) + (ulonglong)param_4 * 8),
                        lVar3 != 0)) {
                *(undefined4 *)(param_2 + 4) = 4;
                *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 8);
                *(uint *)(param_2 + 0x4c) = param_4;
                lVar2 = FUN_140200220(0x1b2);
                if (lVar2 == 0) {
                    fVar5 = 0.85;
                }
                else {
                    fVar5 = *(float *)(lVar2 + 0x18);
                }
                lVar3 = FUN_1405a4b80(lVar3,1);
                *(float *)(param_2 + 0x3c) = fVar5 * *(float *)(*(longlong *)(lVar3 + 0x70) + 0x70);
                FUN_140559920(param_2);
                uVar4 = 0;
            }
            else {
                uVar4 = 0x80004005;
            }
            return uVar4;
        }
    }
    return 0x80004005;
}



undefined8
FUN_140559650(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,
              undefined4 param_5_00,undefined4 param_5,undefined4 param_6)

{
    undefined4 uVar1;
    longlong lVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;

    iVar3 = DAT_140c4d2a0;
    if (*DAT_140c63750 < DAT_140c4d2a0) {
        iVar3 = *DAT_140c63750;
    }
    if ((&DAT_140c4d2b0)[iVar3] != '\0') {
        *(undefined4 *)(param_2 + 4) = 0xffffffff;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined4 *)(param_2 + 0x40) = 0;
        *(undefined4 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0x48) = 300;
        *(undefined8 *)(param_2 + 0x4c) = 0xffffffffffffffff;
        *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
        *(undefined4 *)(param_2 + 0x80) = 0;
        if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_2 + 0x90) + 0x98))(param_1,0);
        }
        if ((param_4 == 0) || (*(longlong *)(DAT_140c65898 + 0x6490) == 0)) {
            uVar4 = 0x80004005;
        }
        else {
            lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
            if (lVar2 == 0) {
                uVar4 = 0x80004005;
            }
            else {
                lVar5 = FUN_1403acd90(DAT_140c65b70,param_5,lVar2);
                if (lVar5 == 0) {
                    uVar4 = 0x80004005;
                }
                else {
                    *(uint *)(param_2 + 4) = (param_3 != lVar2) + 5;
                    uVar1 = *(undefined4 *)(param_4 + 8);
                    *(undefined4 *)(param_2 + 0x50) = param_5_00;
                    *(undefined4 *)(param_2 + 0xc) = uVar1;
                    *(undefined4 *)(param_2 + 0x4c) = param_5;
                    *(undefined4 *)(param_2 + 0x58) = param_6;
                    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(*(longlong *)(lVar5 + 0x70) + 0x70);
                    FUN_140559920(param_2);
                    uVar4 = 0;
                }
            }
        }
        return uVar4;
    }
    return 0x80004005;
}



undefined8
FUN_1405597b0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
              undefined4 param_5)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;

    iVar2 = DAT_140c4d2a0;
    if (*DAT_140c63750 < DAT_140c4d2a0) {
        iVar2 = *DAT_140c63750;
    }
    if ((&DAT_140c4d2b0)[iVar2] == '\0') {
        return 0x80004005;
    }
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x48) = 300;
    *(undefined8 *)(param_2 + 0x4c) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x80) = 0;
    if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_2 + 0x90) + 0x98))(param_1,0);
    }
    if ((((param_4 != 0) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0)) &&
         (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
        (lVar3 = FUN_1403acd90(DAT_140c65b70,param_5), lVar3 != 0)) {
        *(undefined4 *)(param_2 + 4) = 7;
        uVar1 = *(undefined4 *)(param_4 + 8);
        *(undefined4 *)(param_2 + 0x10) = param_5;
        *(undefined4 *)(param_2 + 0xc) = uVar1;
        *(undefined4 *)(param_2 + 0x58) = 0;
        *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)(*(longlong *)(lVar3 + 0x70) + 0x70);
        FUN_140559920(param_2);
        return 0;
    }
    return 0x80004005;
}



void FUN_1405598d0(undefined8 param_1,longlong param_2)

{
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x48) = 300;
    *(undefined8 *)(param_2 + 0x4c) = 0xffffffffffffffff;
    *(undefined4 *)(param_2 + 0x54) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x80) = 0;
    if (*(longlong **)(param_2 + 0x90) != (longlong *)0x0) {
        // WARNING: Could not recover jumptable at 0x000140559911. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(**(longlong **)(param_2 + 0x90) + 0x98))(param_1,0);
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140559920(uint *param_1)

{
    char cVar1;
    uint uVar2;
    longlong lVar3;
    bool bVar4;
    bool bVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    uint uVar8;
    uint uVar9;
    float fVar10;
    float fVar11;
    int *piVar12;
    int iVar13;
    uint uVar14;
    int iVar15;
    longlong lVar16;
    longlong lVar17;
    longlong lVar18;
    uint *puVar19;
    uint uVar20;
    undefined in_XMM1 [16];
    undefined auVar22 [12];
    undefined auVar21 [16];
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    undefined local_78 [8];
    undefined8 uStack112;
    undefined local_68 [16];

    lVar17 = DAT_140c65898;
    auVar22 = SUB1612(in_XMM1 >> 0x20,0);
    uVar2 = param_1[2];
    lVar18 = 0;
    uVar20 = 0;
    param_1[2] = 0;
    lVar3 = *(longlong *)(lVar17 + 0x6490);
    bVar4 = false;
    if (lVar3 == 0) {
        param_1[1] = 0xffffffff;
        *(undefined8 *)(param_1 + 2) = 0;
        param_1[0x10] = 0;
        param_1[4] = 0;
        param_1[0x12] = 300;
        *(undefined8 *)(param_1 + 0x13) = 0xffffffffffffffff;
        param_1[0x15] = 0xffffffff;
        param_1[0x20] = 0;
        if (*(longlong **)(param_1 + 0x24) == (longlong *)0x0) {
            return;
        }
        // WARNING: Could not recover jumptable at 0x00014055999d. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(**(longlong **)(param_1 + 0x24) + 0x98))();
        return;
    }
    if ((*(byte *)(lVar3 + 0x1070) & 4) != 0) {
        return;
    }
    if (*(char *)(param_1 + 0x11) != '\0') {
        *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + -1;
        return;
    }
    if (param_1[0x10] != 0) {
        switch(param_1[1]) {
            case 2:
                if ((param_1[0x15] < 0x24) &&
                    ((longlong *)(&DAT_140c89d80)[(int)param_1[0x15]] != (longlong *)0x0)) {
                    (**(code **)(*(longlong *)(&DAT_140c89d80)[(int)param_1[0x15]] + 0x40))();
                }
                break;
            case 3:
                lVar16 = FUN_1403ac780(lVar17 + 0xa0);
                if (((lVar16 != 0) && (lVar17 = FUN_1403d90d0(lVar17), lVar17 != 0)) &&
                    ((iVar15 = FUN_1403998e0(DAT_140c65898), iVar15 != 0 &&
                                                             ((iVar15 != 0x13d && (lVar17 = FUN_14056a030(lVar16), lVar17 != 0)))))) {
                    FUN_14056a030(lVar16);
                    FUN_1403a12a0(DAT_140c65898);
                }
                break;
            case 4:
                if (((((ulonglong)param_1[0x13] < *(ulonglong *)(lVar17 + 0xa98)) &&
                      (lVar16 = *(longlong *)(*(longlong *)(lVar17 + 0xa90) + (ulonglong)param_1[0x13] * 8),
                              lVar16 != 0)) && (lVar17 = FUN_1403d90d0(lVar17), lVar17 != 0)) &&
                    ((iVar15 = FUN_14039a040(DAT_140c65898), iVar15 != 0 && (iVar15 != 0x13d)))) {
                    FUN_1405a4b80(lVar16);
                    FUN_1403a12a0(DAT_140c65898);
                }
                break;
            case 5:
            case 6:
                lVar17 = *(longlong *)(lVar17 + 0x78);
                if ((lVar17 != 0) && (lVar16 = FUN_1403acd90(DAT_140c65b70), lVar16 != 0)) {
                    lVar16 = lVar18;
                    if (0xb < param_1[0x14]) {
                        lVar16 = 7;
                    }
                    FUN_14039ac90(DAT_140c65898,lVar17,lVar16,param_1[0x14],param_1[0x13]);
                    LAB_140559bd5:
                    FUN_140051af0(0);
                }
                break;
            case 7:
                if ((lVar3 != 0) && (lVar17 = FUN_1403acd90(DAT_140c65b70), lVar17 != 0)) {
                    FUN_14039b340(DAT_140c65898,param_1[4]);
                    goto LAB_140559bd5;
                }
        }
        FUN_1405598d0(param_1);
        lVar17 = DAT_140c65898;
    }
    piVar12 = DAT_140c63750;
    iVar15 = *DAT_140c63750;
    iVar13 = DAT_140c4d220;
    if (iVar15 < DAT_140c4d220) {
        iVar13 = iVar15;
    }
    if ((*param_1 == 0) != ((&DAT_140c4d230)[iVar13] == '\0')) {
        iVar13 = DAT_140c4d220;
        if (iVar15 < DAT_140c4d220) {
            iVar13 = iVar15;
        }
        *param_1 = (uint)(byte)(&DAT_140c4d230)[iVar13];
        iVar15 = DAT_140c4d220;
        if (*piVar12 < DAT_140c4d220) {
            iVar15 = *piVar12;
        }
        cVar1 = (&DAT_140c4d230)[iVar15];
        *(uint *)(lVar17 + 0x7234) = (uint)(cVar1 == '\0');
        *(uint *)(lVar17 + 0x7230) = 2 - (uint)(cVar1 != '\0');
        *(uint *)(lVar17 + 0x722c) = (uint)(cVar1 == '\0');
    }
    if (param_1[1] == 0xffffffff) {
        return;
    }
    if (param_1[3] != 0) {
        lVar18 = FUN_1403d90d0();
        if (lVar18 == 0) goto LAB_140559cbb;
        uVar14 = *(uint *)(lVar18 + 0x11e4);
        uVar8 = *(uint *)(lVar18 + 0x11e8);
        uVar9 = *(uint *)(lVar18 + 0x11ec);
        param_1[8] = *(uint *)(lVar18 + 0x11e0);
        param_1[9] = uVar14;
        param_1[10] = uVar8;
        param_1[0xb] = uVar9;
    }
    iVar15 = DAT_140c636a8;
    if ((param_1[1] == 1) && (*(longlong *)(lVar3 + 0x3c8) != 0)) {
        LAB_140559cbb:
        FUN_1405598d0(param_1);
        return;
    }
    fVar25 = *(float *)(lVar3 + 0x11e0);
    fVar26 = *(float *)(lVar3 + 0x11e4);
    fVar10 = *(float *)(lVar3 + 0x11e8);
    fVar11 = *(float *)(lVar3 + 0x11ec);
    fVar28 = (float)param_1[8] - fVar25;
    local_78._4_4_ = (float)param_1[9] - fVar26;
    fVar29 = (float)param_1[10] - fVar10;
    fVar30 = (float)param_1[0xb] - fVar11;
    _local_78 = CONCAT412(fVar30,CONCAT48(fVar29,CONCAT44(local_78._4_4_,fVar28)));
    fVar27 = local_78._4_4_ * local_78._4_4_;
    if (param_1[0x20] == 0) {
        param_1[0x20] = 1;
        bVar5 = false;
        LAB_140559d58:
        param_1[0x18] = iVar15 + 500;
        param_1[0x1c] = (uint)fVar25;
        param_1[0x1d] = (uint)fVar26;
        param_1[0x1e] = (uint)fVar10;
        param_1[0x1f] = (uint)fVar11;
    }
    else {
        bVar5 = bVar4;
        if (0 < (int)(DAT_140c636a8 - param_1[0x18])) {
            fVar23 = (fVar25 - (float)param_1[0x1c]) * (fVar25 - (float)param_1[0x1c]);
            fVar24 = (fVar26 - (float)param_1[0x1d]) * (fVar26 - (float)param_1[0x1d]);
            auVar22 = SUB1612(CONCAT412((fVar11 - (float)param_1[0x1f]) * (fVar11 - (float)param_1[0x1f]),
                                        CONCAT48((fVar10 - (float)param_1[0x1e]) *
                                                 (fVar10 - (float)param_1[0x1e]),CONCAT44(fVar24,fVar23)))
                                      >> 0x20,0);
            bVar5 = fVar23 + fVar24 + 0.0 < 0.1;
            goto LAB_140559d58;
        }
    }
    if ((*(int *)(lVar3 + 0x1088) - 1U & 0xfffffffd) != 0) {
        uStack112 = SUB168(_local_78 >> 0x40,0);
        _local_78 = CONCAT88(uStack112,(ulonglong)(uint)fVar28) & (undefined  [16])0xffffffffffffffff;
        local_78._4_4_ = 0.0;
    }
    fVar25 = local_78._4_4_ * local_78._4_4_;
    uVar6 = SUB128(CONCAT84(SUB168((ZEXT1216(auVar22) << 0x20) >> 0x40,0),fVar25),0);
    uVar7 = uVar6 & 0xffffffff;
    fVar26 = fVar28 * fVar28 + (float)uVar7 + 0.0;
    auVar21 = rsqrtss(CONCAT412(fVar25,CONCAT48(fVar25,uVar6 << 0x20 | uVar7)),
                      CONCAT412(fVar30 * fVar30,CONCAT48(fVar29 * fVar29,CONCAT44(fVar25,fVar26))));
    fVar25 = SUB164(auVar21,0);
    fVar25 = (3.0 - fVar26 * fVar25 * fVar25) * 0.5 * fVar25;
    if (fVar25 <= 0.0) {
        fVar25 = 0.0;
    }
    local_68 = CONCAT412(fVar25 * fVar30,
                         CONCAT48(fVar25 * fVar29,CONCAT44(fVar25 * local_78._4_4_,fVar25 * fVar28)));
    puVar19 = (uint *)FUN_1401b3170(0,SUB168(auVar21,0),local_78,local_68);
    param_1[0xc] = *puVar19;
    param_1[0xd] = puVar19[1];
    param_1[0xe] = puVar19[2];
    param_1[0x17] = 0x3f800000;
    if ((lVar18 == 0) || ((*(int *)(lVar18 + 0x1088) == 3 && (param_1[1] == 1)))) {
        fVar25 = (float)param_1[0xf];
        uVar14 = (uint)(fVar28 * fVar28 + local_78._4_4_ * local_78._4_4_ + 0.0 < fVar25 * fVar25);
        bVar4 = false;
        if (param_1[1] == 1) {
            bVar4 = fVar25 * 1.5 * fVar25 <
                    fVar28 * fVar28 + local_78._4_4_ * local_78._4_4_ + fVar29 * fVar29;
        }
        LAB_140559f44:
        if (uVar14 != 0) {
            LAB_140559f48:
            uVar14 = param_1[1];
            if (uVar14 == 0) {
                LAB_140559ece:
                FUN_1405598d0(param_1);
                return;
            }
            if (uVar14 - 2 < 6) {
                param_1[0x10] = 1;
                *(undefined *)(param_1 + 0x11) = 2;
                return;
            }
            goto LAB_140559f8e;
        }
    }
    else {
        uVar14 = FUN_1403ad690(lVar3,lVar18);
        if (param_1[1] == 1) {
            iVar15 = FUN_1403ad690(lVar3,lVar18);
            bVar4 = iVar15 == 0;
            goto LAB_140559f44;
        }
        if (uVar14 != 0) goto LAB_140559f48;
        if (bVar5) goto LAB_140559ece;
        fVar25 = fVar28 * fVar28 + local_78._4_4_ * local_78._4_4_ + 0.0;
        if (fVar25 < (float)param_1[0xf] || fVar25 == (float)param_1[0xf]) {
            fVar25 = (fVar28 * fVar28 + local_78._4_4_ * local_78._4_4_ + 0.0) * 10.0;
            if (fVar25 <= 4.0) {
                fVar25 = 4.0;
            }
            if (fVar25 < fVar27) goto LAB_140559ece;
        }
    }
    uVar14 = param_1[1];
    if (uVar14 == 1) {
        if ((uVar2 != 0) || (bVar4)) {
            uVar20 = 1;
        }
        param_1[2] = uVar20;
    }
    else {
        param_1[2] = 1;
    }
    LAB_140559f8e:
    if (uVar14 != 1) {
        return;
    }
    if (param_1[2] == 0) {
        return;
    }
    fVar25 = (SQRT(fVar28 * fVar28 + local_78._4_4_ * local_78._4_4_ + 0.0) - (float)param_1[0xf]) /
             (((float)param_1[0xf] + 1e-05) * 4.0);
    if (1.0 <= fVar25) {
        fVar25 = 1.0;
    }
    fVar26 = 0.01;
    if (0.01 <= fVar25 * fVar25) {
        fVar26 = fVar25 * fVar25;
    }
    param_1[0x17] = (uint)fVar26;
    return;
}



void FUN_14055a050(longlong param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 uVar4;
    undefined auStack280 [32];
    undefined4 local_f8;
    undefined4 local_f0;
    longlong **local_e8;
    undefined4 local_e0;
    undefined8 local_d8;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 uStack200;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    undefined4 local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 local_68;
    undefined4 uStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined8 local_38;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack280;
    if (*(int *)(param_1 + 4) != -1) {
        local_d8 = CONCAT44(local_d8._4_4_,0x40400000);
        uStack192 = (undefined4)(param_1 + 0x20);
        uStack188 = (undefined4)((ulonglong)(param_1 + 0x20) >> 0x20);
        uStack208 = 0;
        uStack204 = 0;
        uStack200 = 0;
        uStack196 = 0;
        local_78 = 0x40400000;
        uStack116 = local_d8._4_4_;
        uStack112 = 0;
        uStack108 = 0;
        local_68 = 0;
        uStack100 = 0;
        uStack96 = uStack192;
        uStack92 = uStack188;
        FUN_1401b0590(&local_78,&local_b8);
        pplVar1 = (longlong **)(param_1 + 0x90);
        plVar2 = *pplVar1;
        if (plVar2 == (longlong *)0x0) {
            iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                    (*(longlong **)(DAT_140c65898 + 0x7250),
                     L"Art\\Prop\\Constructed\\ClickToMove\\PRP_ClickToMove_000.m3",
                     param_1 + 0x88,0);
            if (-1 < iVar3) {
                local_d8 = 0x96;
                uStack204 = 0;
                uStack200 = 0;
                uStack196 = 0;
                uStack192 = 0;
                uStack188 = 0;
                uStack208 = 0x3f800000;
                (**(code **)(**(longlong **)(param_1 + 0x88) + 0x248))
                        (*(longlong **)(param_1 + 0x88),0,&local_d8);
                local_78 = local_b8;
                uStack116 = uStack180;
                uStack112 = uStack176;
                uStack108 = uStack172;
                local_e0 = 0;
                local_38 = 0;
                local_68 = local_a8;
                uStack100 = uStack164;
                uStack96 = uStack160;
                uStack92 = uStack156;
                local_58 = local_98;
                uStack84 = uStack148;
                uStack80 = uStack144;
                uStack76 = uStack140;
                local_f0 = 0;
                local_48 = local_88;
                uStack68 = uStack132;
                uStack64 = uStack128;
                uStack60 = uStack124;
                local_f8 = 1;
                local_e8 = pplVar1;
                (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xb8))
                        (*(longlong **)(DAT_140c65898 + 0x7248),0,&local_78,
                         *(undefined8 *)(param_1 + 0x88));
            }
        }
        else {
            local_38 = 0;
            local_78 = local_b8;
            uStack116 = uStack180;
            uStack112 = uStack176;
            uStack108 = uStack172;
            local_68 = local_a8;
            uStack100 = uStack164;
            uStack96 = uStack160;
            uStack92 = uStack156;
            local_58 = local_98;
            uStack84 = uStack148;
            uStack80 = uStack144;
            uStack76 = uStack140;
            local_48 = local_88;
            uStack68 = uStack132;
            uStack64 = uStack128;
            uStack60 = uStack124;
            uVar4 = (**(code **)(*plVar2 + 0x140))(plVar2,&local_78);
            (**(code **)(**pplVar1 + 0x98))(uVar4,0x3f800000);
            plVar2 = *(longlong **)(param_1 + 0x88);
            if (plVar2 != (longlong *)0x0) {
                local_d8 = 0x96;
                uStack208 = 0x3f800000;
                uStack204 = 0;
                uStack200 = 0;
                uStack196 = 0;
                uStack192 = 0;
                uStack188 = 0;
                (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_d8);
            }
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack280);
    return;
}



uint FUN_14055a260(int *param_1)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    IMAGE_DOS_HEADER *pIVar4;

    if ((((DAT_140c635f0 != 0) && (DAT_140c65898 != 0)) &&
         ((*(uint *)(DAT_140c635f0 + 0x40) & 0x2000) != 0)) && (*(int *)(DAT_140c65898 + 0x28) != 4)) {
        for (lVar1 = *(longlong *)(DAT_140c65898 + 0x20); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x20)) {
            if (*(int *)(lVar1 + 0x28) != 4) {
                return 0;
            }
        }
        pIVar4 = &IMAGE_DOS_HEADER_140000000;
        iVar3 = *DAT_140c63750;
        iVar2 = DAT_140c4d420;
        if (iVar3 < DAT_140c4d420) {
            iVar2 = iVar3;
        }
        if (((&DAT_140c4d430)[iVar2] != '\0') || (iVar2 = FUN_1403a1600(), iVar2 == 0)) {
            iVar2 = param_1[3];
            if (iVar2 != 0) {
                LAB_14055a2fe:
                return (uint)(iVar2 == 1);
            }
            iVar2 = DAT_140c4d3a0;
            if (iVar3 < DAT_140c4d3a0) {
                iVar2 = iVar3;
            }
            if ((*(char *)((longlong)pIVar4[0x189a7].e_res2_10_ + (longlong)iVar2 + 8) != '\0') ||
                (*param_1 == 0)) {
                iVar2 = DAT_140c4d3a0;
                if (iVar3 < DAT_140c4d3a0) {
                    iVar2 = iVar3;
                }
                if (((*(char *)((longlong)pIVar4[0x189a7].e_res2_10_ + (longlong)iVar2 + 8) != '\0') ||
                     (DAT_140c659f0 == (int *)0x0)) || (*DAT_140c659f0 == 0)) {
                    iVar2 = param_1[2];
                    if (iVar2 == 0) {
                        return param_1[1];
                    }
                    goto LAB_14055a2fe;
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_14055a370(void)

{
    int iVar1;
    int iVar2;

    iVar1 = *DAT_140c63750;
    iVar2 = DAT_140c4d2e0;
    if (iVar1 < DAT_140c4d2e0) {
        iVar2 = iVar1;
    }
    if ((&DAT_140c4d2f0)[iVar2] != '\0') {
        iVar2 = DAT_140c4d320;
        if (iVar1 < DAT_140c4d320) {
            iVar2 = iVar1;
        }
        if ((&DAT_140c4d330)[iVar2] == '\0') {
            iVar2 = DAT_140c4d360;
            if (iVar1 < DAT_140c4d360) {
                iVar2 = iVar1;
            }
            if ((((&DAT_140c4d370)[iVar2] == '\0') || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) ||
                (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x2ac) == 0)) {
                return 1;
            }
        }
    }
    return 0;
}



void FUN_14055a3f0(uint *param_1)

{
    uint uVar1;
    longlong lVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    uint uVar7;

    lVar2 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        uVar1 = *param_1;
        if (*(longlong *)(DAT_140c65898 + 0x7340) != 0) {
            *param_1 = (uint)(*(int *)(*(longlong *)(DAT_140c65898 + 0x7340) + 0xd10) != 0);
        }
        lVar2 = *(longlong *)(lVar2 + 0x78);
        if (lVar2 != 0) {
            uVar7 = 1;
            iVar4 = DAT_140c4d320;
            if (*DAT_140c63750 < DAT_140c4d320) {
                iVar4 = *DAT_140c63750;
            }
            if (((&DAT_140c4d330)[iVar4] == '\0') ||
                (((*(byte *)(lVar2 + 0x1070) & 2) == 0 &&
                  (((iVar4 = FUN_14047bd80(), iVar4 == 0 || (lVar6 = FUN_14039de90(), lVar6 == 0)) ||
                    (lVar6 = FUN_14039de90(), (*(byte *)(lVar6 + 0x1070) & 2) == 0)))))) {
                bVar3 = false;
            }
            else {
                bVar3 = true;
            }
            iVar4 = *DAT_140c63750;
            iVar5 = DAT_140c4d2e0;
            if (iVar4 < DAT_140c4d2e0) {
                iVar5 = iVar4;
            }
            if ((((&DAT_140c4d2f0)[iVar5] == '\0') || ((*(byte *)(lVar2 + 0x1070) & 2) != 0)) && (!bVar3))
            {
                iVar5 = DAT_140c4d360;
                if (iVar4 < DAT_140c4d360) {
                    iVar5 = iVar4;
                }
                if (((&DAT_140c4d370)[iVar5] == '\0') || (*(int *)(lVar2 + 0x2ac) == 0)) {
                    uVar7 = 0;
                }
            }
            param_1[1] = uVar7;
            if ((param_1[3] != 0) &&
                (((*(uint *)(DAT_140c635f0 + 0x40) & 0x2000) == 0 || (0 < (int)uVar1)))) {
                param_1[3] = 0;
            }
        }
    }
    return;
}



ulonglong FUN_14055a5f0(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6
        ,uint param_7,float param_8)

{
    int *piVar1;
    float fVar2;
    ulonglong uVar3;
    int iVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    float *pfVar9;
    longlong *plVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    undefined4 *puVar14;
    undefined4 extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined auVar15 [16];
    float fVar16;
    float fVar18;
    float fVar19;
    float fVar20;
    undefined auVar17 [16];
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    uint uVar26;
    undefined4 uVar27;
    longlong local_148;
    ulonglong local_140;
    longlong local_138;
    uint local_130;
    undefined4 uStack300;
    ulonglong local_128;
    longlong *local_120;
    ulonglong local_110;
    ulonglong local_108;
    longlong local_100;
    ulonglong local_f8;
    ulonglong local_f0;
    longlong local_e8;

    local_138 = *(longlong *)(DAT_140c65898 + 0x78);
    if ((local_138 == 0) || (*(longlong *)(param_1 + 0x6490) == 0)) {
        return 0;
    }
    lVar7 = *(longlong *)(param_1 + 0x6f30);
    uVar12 = 0;
    fVar21 = 3.402823e+38;
    local_140 = 0;
    local_148 = 0;
    iVar4 = 0;
    param_8 = param_8 * param_8;
    uVar11 = uVar12;
    uVar13 = uVar12;
    uVar3 = local_140;
    lVar8 = local_148;
    for (; local_148 = lVar8, local_140 = uVar3, lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x60)) {
        uVar26 = *(uint *)(lVar7 + 8);
        if ((((((((*(longlong *)(param_1 + 0x6490) == 0) ||
                  (uVar26 != *(uint *)(*(longlong *)(param_1 + 0x6490) + 8))) &&
                 (*(int *)(lVar7 + 0x250) == 0)) && ((*(byte *)(lVar7 + 0x24) & 1) == 0)) &&
               (((*(longlong *)(lVar7 + 0x18) == 0 ||
                  (iVar4 = FUN_140466b90(local_138,lVar7), iVar4 != 0)) &&
                 ((*(int *)(lVar7 + 0x80) == 0x14 || (*(int *)(lVar7 + 0x80) == 0)))))) &&
              ((iVar4 = FUN_14045a950(local_138,uVar26), param_2 != 0 || (iVar4 != 0)))) &&
             ((param_3 != 0 || (iVar4 != 1)))) && ((param_4 != 0 || (iVar4 != 2)))) {
            plVar10 = *(longlong **)(lVar7 + 0x16f0);
            plVar5 = plVar10;
            if (plVar10 == (longlong *)0x0) {
                plVar5 = *(longlong **)(lVar7 + 0x16f8);
            }
            if (plVar5 != (longlong *)0x0) {
                lVar8 = *(longlong *)(param_1 + 0x6490);
                fVar16 = *(float *)(lVar7 + 0x11e0) - *(float *)(lVar8 + 0x11e0);
                fVar18 = *(float *)(lVar7 + 0x11e4) - *(float *)(lVar8 + 0x11e4);
                fVar20 = *(float *)(lVar7 + 0x11e8) - *(float *)(lVar8 + 0x11e8);
                fVar16 = fVar16 * fVar16 + fVar18 * fVar18 + fVar20 * fVar20;
                if (((fVar16 <= param_8) && (DAT_140c7dc64 != *(int *)(lVar7 + 8))) &&
                    (*(int *)(lVar7 + 0x54) < 2)) {
                    if (plVar10 == (longlong *)0x0) {
                        plVar10 = *(longlong **)(lVar7 + 0x16f8);
                    }
                    iVar4 = (**(code **)(*plVar10 + 0x100))();
                    if (iVar4 != 0) {
                        plVar10 = *(longlong **)(lVar7 + 0x16f0);
                        if (plVar10 == (longlong *)0x0) {
                            plVar10 = *(longlong **)(lVar7 + 0x16f8);
                        }
                        iVar4 = (**(code **)(*plVar10 + 0x108))(plVar10,0,1,1);
                        if (iVar4 != 1) {
                            if (param_5 == 0) {
                                local_130 = uVar26;
                                FUN_14055c580(&local_148);
                                if (uVar26 == param_7) {
                                    uVar11 = 1;
                                }
                            }
                            else if (fVar16 < fVar21) {
                                uVar13 = (ulonglong)uVar26;
                                fVar21 = fVar16;
                            }
                        }
                    }
                }
            }
        }
        iVar4 = (int)uVar11;
        uVar3 = local_140;
        lVar8 = local_148;
    }
    if ((param_5 == 0) && (uVar13 = uVar12, uVar3 != 0)) {
        lVar7 = *(longlong *)(param_1 + 0x6490);
        if (lVar7 == 0) {
            fVar21 = 0.0;
            fVar16 = 0.0;
            fVar18 = 0.0;
            fVar20 = 0.0;
        }
        else {
            lVar6 = *(longlong *)(param_1 + 0x71a8);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(param_1 + 0x71a0);
            }
            fVar20 = *(float *)(lVar7 + 0x11e0);
            fVar19 = *(float *)(lVar7 + 0x11e4);
            fVar25 = *(float *)(lVar7 + 0x11e8);
            fVar21 = fVar19 * *(float *)(lVar6 + 0x70) + fVar20 * *(float *)(lVar6 + 0x60) +
                     fVar25 * *(float *)(lVar6 + 0x80) + *(float *)(lVar6 + 0x90);
            fVar16 = fVar19 * *(float *)(lVar6 + 0x74) + fVar20 * *(float *)(lVar6 + 100) +
                     fVar25 * *(float *)(lVar6 + 0x84) + *(float *)(lVar6 + 0x94);
            fVar18 = fVar19 * *(float *)(lVar6 + 0x78) + fVar20 * *(float *)(lVar6 + 0x68) +
                     fVar25 * *(float *)(lVar6 + 0x88) + *(float *)(lVar6 + 0x98);
            fVar20 = fVar19 * *(float *)(lVar6 + 0x7c) + fVar20 * *(float *)(lVar6 + 0x6c) +
                     fVar25 * *(float *)(lVar6 + 0x8c) + *(float *)(lVar6 + 0x9c);
        }
        if (iVar4 == 0) {
            if (uVar3 != 0) {
                uVar27 = 0x80000000;
                uVar13 = uVar3;
                puVar14 = (undefined4 *)(lVar8 + 0x1c);
                do {
                    lVar7 = FUN_1403d90d0(param_1,puVar14[-7]);
                    pfVar9 = (float *)FUN_140401060(param_1);
                    fVar19 = *(float *)(lVar7 + 0x11e0);
                    fVar25 = *(float *)(lVar7 + 0x11e4);
                    fVar2 = *(float *)(lVar7 + 0x11e8);
                    fVar22 = (fVar25 * pfVar9[4] + fVar19 * *pfVar9 + fVar2 * pfVar9[8] + pfVar9[0xc]) -
                             fVar21;
                    fVar23 = (fVar25 * pfVar9[5] + fVar19 * pfVar9[1] + fVar2 * pfVar9[9] + pfVar9[0xd]) -
                             fVar16;
                    fVar24 = (fVar25 * pfVar9[6] + fVar19 * pfVar9[2] + fVar2 * pfVar9[10] + pfVar9[0xe]) -
                             fVar18;
                    fVar25 = (fVar25 * pfVar9[7] + fVar19 * pfVar9[3] + fVar2 * pfVar9[0xb] + pfVar9[0xf]) -
                             fVar20;
                    fVar19 = fVar23 * fVar23;
                    rsqrtss(CONCAT412(fVar19,CONCAT48(fVar19,CONCAT44(fVar19,fVar19))),
                            CONCAT412(fVar25 * fVar25,
                                      CONCAT48(fVar24 * fVar24,
                                               CONCAT44(fVar19,fVar22 * fVar22 + fVar19 + fVar24 * fVar24))));
                    fVar19 = SQRT(fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24);
                    FUN_1408fbfc0();
                    *puVar14 = uVar27;
                    puVar14[-3] = fVar19 * extraout_XMM0_Da_00;
                    uVar13 = uVar13 - 1;
                    lVar8 = local_148;
                    puVar14 = puVar14 + 8;
                } while (uVar13 != 0);
            }
            local_148 = 0;
            local_140 = uVar3;
            FUN_1401d3110(&local_130,&LAB_14055a550,&local_148,lVar8,2);
            uVar13 = uVar12;
            if (3 < (longlong)uVar3) {
                plVar10 = local_120 + 2;
                do {
                    pfVar9 = (float *)(plVar10[-2] * 0x20 + 0x1c + lVar8);
                    uVar13 = (ulonglong)*(uint *)(plVar10[-2] * 0x20 + lVar8);
                    if (((0.0 < *pfVar9 || *pfVar9 == 0.0) ||
                         (pfVar9 = (float *)(plVar10[-1] * 0x20 + 0x1c + lVar8),
                                 uVar13 = (ulonglong)*(uint *)(plVar10[-1] * 0x20 + lVar8),
                                 0.0 < *pfVar9 || *pfVar9 == 0.0)) ||
                        ((pfVar9 = (float *)(*plVar10 * 0x20 + 0x1c + lVar8),
                                uVar13 = (ulonglong)*(uint *)(*plVar10 * 0x20 + lVar8),
                                0.0 < *pfVar9 || *pfVar9 == 0.0 ||
                                (pfVar9 = (float *)(plVar10[1] * 0x20 + 0x1c + lVar8),
                                        uVar13 = (ulonglong)*(uint *)(plVar10[1] * 0x20 + lVar8),
                                        0.0 < *pfVar9 || *pfVar9 == 0.0)))) goto LAB_14055af2d;
                    uVar12 = uVar12 + 4;
                    plVar10 = plVar10 + 4;
                } while (uVar12 < uVar3 - 3);
            }
            while ((uVar12 < uVar3 &&
                    (pfVar9 = (float *)(local_120[uVar12] * 0x20 + 0x1c + lVar8),
                            uVar13 = (ulonglong)*(uint *)(local_120[uVar12] * 0x20 + lVar8),
                            *pfVar9 <= 0.0 && *pfVar9 != 0.0))) {
                uVar12 = uVar12 + 1;
            }
            LAB_14055af2d:
            if (local_128 <= CONCAT44(uStack300,local_130)) goto LAB_14055af44;
            local_120 = local_120 + CONCAT44(uStack300,local_130);
        }
        else {
            if (uVar3 != 0) {
                uVar26 = 0x80000000;
                fVar21 = 0.0;
                uVar13 = uVar3;
                puVar14 = (undefined4 *)(lVar8 + 0x1c);
                do {
                    lVar7 = FUN_1403d90d0(param_1,puVar14[-7]);
                    lVar8 = FUN_140401060(param_1);
                    fVar16 = (float)((uint)(*(float *)(lVar7 + 0x11e4) * *(float *)(lVar8 + 0x18) +
                                            *(float *)(lVar7 + 0x11e0) * *(float *)(lVar8 + 8) +
                                            *(float *)(lVar7 + 0x11e8) * *(float *)(lVar8 + 0x28) +
                                            *(float *)(lVar8 + 0x38)) ^ uVar26);
                    if (fVar16 <= fVar21) {
                        fVar16 = fVar21;
                    }
                    puVar14[-3] = fVar16;
                    FUN_1408fd190();
                    puVar14[-1] = 0;
                    *puVar14 = extraout_XMM0_Da;
                    uVar13 = uVar13 - 1;
                    lVar8 = local_148;
                    puVar14 = puVar14 + 8;
                } while (uVar13 != 0);
            }
            local_148 = 0;
            local_140 = uVar3;
            FUN_1401d3110(&local_130,&LAB_14055a550,&local_148,lVar8,2);
            uVar13 = 1;
            *(undefined4 *)(*local_120 * 0x20 + 0x14 + lVar8) = 0;
            if (1 < uVar3) {
                if (3 < (longlong)(uVar3 - 1)) {
                    lVar7 = (uVar3 - 5 >> 2) + 1;
                    uVar13 = lVar7 * 4 + 1;
                    plVar10 = local_120 + 2;
                    do {
                        auVar17 = ZEXT416(*(uint *)(plVar10[-1] * 0x20 + 0x10 + lVar8));
                        auVar15 = ZEXT416(*(uint *)(plVar10[-2] * 0x20 + 0x10 + lVar8));
                        auVar17 = sqrtps(auVar17,auVar17);
                        auVar15 = sqrtps(auVar15,auVar15);
                        *(float *)(plVar10[-1] * 0x20 + 0x14 + lVar8) = SUB164(auVar17,0) - SUB164(auVar15,0);
                        auVar17 = ZEXT416(*(uint *)(*plVar10 * 0x20 + 0x10 + lVar8));
                        auVar15 = ZEXT416(*(uint *)(plVar10[-1] * 0x20 + 0x10 + lVar8));
                        auVar17 = sqrtps(auVar17,auVar17);
                        auVar15 = sqrtps(auVar15,auVar15);
                        *(float *)(*plVar10 * 0x20 + 0x14 + lVar8) = SUB164(auVar17,0) - SUB164(auVar15,0);
                        auVar17 = ZEXT416(*(uint *)(plVar10[1] * 0x20 + 0x10 + lVar8));
                        auVar15 = ZEXT416(*(uint *)(*plVar10 * 0x20 + 0x10 + lVar8));
                        auVar17 = sqrtps(auVar17,auVar17);
                        auVar15 = sqrtps(auVar15,auVar15);
                        *(float *)(plVar10[1] * 0x20 + 0x14 + lVar8) = SUB164(auVar17,0) - SUB164(auVar15,0);
                        auVar17 = ZEXT416(*(uint *)(plVar10[2] * 0x20 + 0x10 + lVar8));
                        auVar15 = ZEXT416(*(uint *)(plVar10[1] * 0x20 + 0x10 + lVar8));
                        auVar17 = sqrtps(auVar17,auVar17);
                        auVar15 = sqrtps(auVar15,auVar15);
                        *(float *)(plVar10[2] * 0x20 + 0x14 + lVar8) = SUB164(auVar17,0) - SUB164(auVar15,0);
                        lVar7 = lVar7 + -1;
                        plVar10 = plVar10 + 4;
                    } while (lVar7 != 0);
                }
                while (uVar13 < uVar3) {
                    plVar10 = local_120 + uVar13;
                    lVar7 = uVar13 - 1;
                    uVar13 = uVar13 + 1;
                    auVar15 = ZEXT416(*(uint *)(local_120[lVar7] * 0x20 + 0x10 + lVar8));
                    auVar17 = ZEXT416(*(uint *)(*plVar10 * 0x20 + 0x10 + lVar8));
                    auVar17 = sqrtps(auVar17,auVar17);
                    auVar15 = sqrtps(auVar15,auVar15);
                    *(float *)(*plVar10 * 0x20 + 0x14 + lVar8) = SUB164(auVar17,0) - SUB164(auVar15,0);
                }
            }
            local_148 = 0;
            local_140 = uVar3;
            FUN_1401d3110(&local_f8,&LAB_14055a580,&local_148,lVar8,2);
            uVar13 = uVar12;
            if (3 < (longlong)uVar3) {
                plVar10 = (longlong *)(local_e8 + 0x10);
                do {
                    pfVar9 = (float *)(plVar10[-2] * 0x20 + 0x14 + lVar8);
                    if (*pfVar9 <= 1.0 && *pfVar9 != 1.0) goto LAB_14055abd1;
                    *(undefined4 *)(plVar10[-2] * 0x20 + 0x18 + lVar8) = 1;
                    pfVar9 = (float *)(plVar10[-1] * 0x20 + 0x14 + lVar8);
                    if (*pfVar9 <= 1.0 && *pfVar9 != 1.0) goto LAB_14055abd1;
                    *(undefined4 *)(plVar10[-1] * 0x20 + 0x18 + lVar8) = 1;
                    pfVar9 = (float *)(*plVar10 * 0x20 + 0x14 + lVar8);
                    if (*pfVar9 <= 1.0 && *pfVar9 != 1.0) goto LAB_14055abd1;
                    *(undefined4 *)(*plVar10 * 0x20 + 0x18 + lVar8) = 1;
                    pfVar9 = (float *)(plVar10[1] * 0x20 + 0x14 + lVar8);
                    if (*pfVar9 <= 1.0 && *pfVar9 != 1.0) goto LAB_14055abd1;
                    *(undefined4 *)(plVar10[1] * 0x20 + 0x18 + lVar8) = 1;
                    uVar13 = uVar13 + 4;
                    plVar10 = plVar10 + 4;
                } while (uVar13 < uVar3 - 3);
            }
            while ((uVar13 < uVar3 &&
                    (lVar7 = *(longlong *)(local_e8 + uVar13 * 8) * 0x20,
                            pfVar9 = (float *)(lVar7 + 0x14 + lVar8), 1.0 < *pfVar9 || *pfVar9 == 1.0))) {
                *(undefined4 *)(lVar7 + 0x18 + lVar8) = 1;
                uVar13 = uVar13 + 1;
            }
            LAB_14055abd1:
            uVar13 = uVar12;
            uVar11 = uVar12;
            if (uVar3 != 0) {
                do {
                    lVar7 = local_120[uVar13];
                    uVar13 = uVar13 + 1;
                    piVar1 = (int *)(lVar7 * 0x20 + 0x18 + lVar8);
                    *piVar1 = *piVar1 + (int)uVar11;
                    uVar11 = (ulonglong)*(uint *)(lVar7 * 0x20 + 0x18 + lVar8);
                } while (uVar13 < uVar3);
            }
            local_148 = 0;
            local_140 = uVar3;
            FUN_1401d3110(&local_110,&LAB_14055a5b0,&local_148,lVar8,2);
            uVar13 = uVar12;
            if (uVar3 != 0) {
                do {
                    if (*(uint *)(*(longlong *)(local_100 + uVar12 * 8) * 0x20 + lVar8) == param_7) {
                        if (param_6 == 0) {
                            uVar12 = (uVar12 - 1) + uVar3;
                        }
                        else {
                            uVar12 = uVar12 + 1;
                        }
                        uVar13 = (ulonglong)
                                 *(uint *)(*(longlong *)(local_100 + (uVar12 % uVar3) * 8) * 0x20 + lVar8);
                        break;
                    }
                    uVar12 = uVar12 + 1;
                    uVar13 = 0;
                } while (uVar12 < uVar3);
            }
            if (local_110 < local_108) {
                FUN_14018b900(local_100 + local_110 * 8,0);
            }
            if (local_f8 < local_f0) {
                FUN_14018b900(local_e8 + local_f8 * 8,0);
            }
            if (local_128 <= CONCAT44(uStack300,local_130)) goto LAB_14055af44;
            local_120 = local_120 + CONCAT44(uStack300,local_130);
        }
        FUN_14018b900(local_120,0);
    }
    LAB_14055af44:
    if (lVar8 != 0) {
        (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
    }
    return uVar13;
}



void FUN_14055afc0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    longlong *plVar5;
    longlong lVar6;

    lVar1 = DAT_140c65898;
    if (((param_2 != 0) && (lVar6 = *(longlong *)(DAT_140c65898 + 0x78), lVar6 != 0)) &&
        (*(int *)(param_2 + 8) == *(int *)(lVar6 + 0x108))) {
        if (*(int *)(param_2 + 0x80) == 0x14) {
            plVar5 = *(longlong **)(lVar6 + 0x110);
            iVar2 = (**(code **)(**(longlong **)(param_2 + 0x110) + 0x18))();
            iVar3 = (**(code **)(*plVar5 + 0x18))(plVar5);
            if (iVar3 == iVar2) {
                return;
            }
        }
        plVar5 = (longlong *)FUN_1404695e0();
        if ((plVar5 != (longlong *)0x0) && (*(int *)(plVar5 + 0x2b) == *(int *)(param_2 + 8))) {
            iVar2 = *(int *)(*(longlong *)(plVar5[0x27] + 0x70) + 0x18);
            if ((iVar2 == 7) || (iVar2 == 2)) {
                uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
                FUN_1403bef30(lVar1,uVar4,1);
            }
            else {
                FUN_14039cce0(lVar1,*(undefined4 *)((longlong)plVar5 + 0x5c),6);
            }
        }
        lVar6 = FUN_1403dec00(lVar1,param_2);
        if ((lVar6 == 0) || (lVar6 = FUN_140625d30(lVar6), lVar6 == 0)) {
            uVar4 = 0;
        }
        else {
            uVar4 = *(undefined4 *)(lVar6 + 8);
        }
        FUN_14055b0e0(lVar1,uVar4);
    }
    return;
}



void FUN_14055b0e0(longlong param_1,int param_2)

{
    longlong **pplVar1;
    longlong **pplVar2;
    short sVar3;
    undefined4 *puVar4;
    undefined4 uVar5;
    int iVar6;
    uint uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 uVar11;
    longlong *plVar12;
    longlong *plVar13;
    longlong *plVar14;
    longlong *plVar15;
    int iVar16;
    short *psVar17;
    float fVar18;
    float fVar21;
    float fVar22;
    undefined auVar19 [16];
    undefined auVar20 [16];
    float fVar23;
    int local_res8 [2];

    if (*(longlong *)(param_1 + 0x6490) == 0) {
        return;
    }
    lVar8 = FUN_1403d90d0();
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0x80) == 7)) {
        uVar5 = FUN_14045b6b0(lVar8);
        lVar9 = FUN_1403d90d0(param_1,uVar5);
        if (lVar9 != 0) {
            param_2 = *(int *)(lVar9 + 8);
            lVar8 = lVar9;
        }
    }
    iVar16 = *(int *)(*(longlong *)(param_1 + 0x6490) + 0x108);
    if (iVar16 == param_2) {
        return;
    }
    lVar9 = FUN_1403d90d0(param_1,iVar16);
    if (((lVar9 != 0) && (1 < *(int *)(lVar9 + 0x54))) &&
        (iVar6 = FUN_14045a950(*(undefined8 *)(param_1 + 0x6490),iVar16), iVar6 == 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UnitDestroyed",&DAT_1409eddfc,iVar16);
    }
    lVar10 = DAT_140c65898;
    *(undefined8 *)(param_1 + 0x66f0) = 0;
    FUN_14042e1f0(*(undefined8 *)(lVar10 + 0x7340));
    iVar16 = 1;
    if (*(longlong *)(param_1 + 0x78) != 0) {
        iVar16 = FUN_14045a950(*(longlong *)(param_1 + 0x78),param_2);
    }
    if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1620) == 0) {
        if (*(int *)(param_1 + 0x6360) != 0) {
            uVar11 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(param_1 + 0x6364));
            FUN_14039dd70(param_1,uVar11,0xffffffff,1);
        }
    }
    else {
        FUN_14046bd10(*(longlong *)(param_1 + 0x6490),param_2);
    }
    if (lVar8 != 0) {
        if ((*(uint *)(lVar8 + 0x28) & 0x4000) != 0) {
            return;
        }
        if ((DAT_140dc33c8 & 1) == 0) {
            DAT_140dc33c8 = DAT_140dc33c8 | 1;
            lVar10 = FUN_140200220(0x303);
            if (lVar10 == 0) {
                DAT_140dc33cc = 1;
            }
            else {
                DAT_140dc33cc = *(int *)(lVar10 + 4);
            }
        }
        if (((DAT_140dc33cc == 0) && (1 < *(int *)(lVar8 + 0x54))) && (iVar16 == 0)) {
            return;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"UnitCreated",&DAT_1409ede34,
                      *(undefined4 *)(lVar8 + 8));
    }
    if (((*(longlong *)(param_1 + 0x6ce8) != 0) &&
         (puVar4 = *(undefined4 **)(*(longlong *)(param_1 + 0x6ce8) + 0x70),
                 (int)(puVar4[0x43] << 5) < 0)) && (iVar16 == 2)) {
        iVar16 = *(int *)(param_1 + 0x6cf4);
        if (iVar16 == 0) {
            FUN_140559500(param_1 + 0x70b0,lVar8,*(undefined4 *)(param_1 + 0x6cfc));
        }
        else if (iVar16 == 1) {
            FUN_1405593e0(param_1 + 0x70b0,lVar8,param_1 + 0x6cf8);
        }
        else if (iVar16 == 2) {
            FUN_140559650(param_1 + 0x70b0,*(undefined8 *)(param_1 + 0x78),lVar8,
                          *(undefined4 *)(param_1 + 0x6cfc),*puVar4,0);
        }
        else if (iVar16 == 4) {
            uVar5 = *puVar4;
            uVar11 = FUN_14039df50(param_1);
            FUN_140559650(param_1 + 0x70b0,uVar11,lVar8,*(undefined4 *)(param_1 + 0x6cfc),uVar5,0);
        }
        FUN_1403a1510(param_1);
    }
    if (lVar9 != 0) {
        if (*(longlong **)(param_1 + 0x6630) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x6630) + 0x3a8))();
        }
        if (*(longlong **)(param_1 + 0x6630) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x6630) + 8))();
            *(undefined8 *)(param_1 + 0x6630) = 0;
        }
        if (*(longlong **)(param_1 + 0x6638) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x6638) + 0x3a8))();
        }
    }
    lVar10 = *(longlong *)(param_1 + 0x6490);
    if (*(int *)(lVar10 + 0x108) != param_2) {
        *(int *)(lVar10 + 0x108) = param_2;
        uVar5 = FUN_14045a950(lVar10,param_2);
        *(undefined4 *)(lVar10 + 0x10c) = uVar5;
    }
    lVar10 = *(longlong *)(param_1 + 0x78);
    if (((lVar10 != 0) && (lVar10 != *(longlong *)(param_1 + 0x6490))) &&
        (*(int *)(lVar10 + 0x108) != param_2)) {
        *(int *)(lVar10 + 0x108) = param_2;
        uVar5 = FUN_14045a950(lVar10,param_2);
        *(undefined4 *)(lVar10 + 0x10c) = uVar5;
    }
    if (((*(uint *)(param_1 + 0x70b4) != 0xffffffff) && (*(int *)(param_1 + 0x70bc) != param_2)) &&
        (1 < *(uint *)(param_1 + 0x70b4))) {
        FUN_1405598d0();
    }
    if (((lVar8 != 0) && (lVar8 != *(longlong *)(param_1 + 0x6490))) &&
        ((*(int *)(lVar8 + 0x80) == 0x17 || (*(int *)(lVar8 + 0x80) == 0x14)))) {
        pplVar1 = (longlong **)(param_1 + 0x6410);
        plVar14 = *pplVar1;
        if ((plVar14 == (longlong *)0x0) || (*(int *)(plVar14 + 2) != param_2)) {
            pplVar2 = (longlong **)(param_1 + 0x6418);
            if ((*pplVar2 == (longlong *)0x0) || (*(int *)(*pplVar2 + 2) != param_2)) {
                FUN_1401e42b0(pplVar2,pplVar1);
                plVar12 = (longlong *)FUN_14018b280(0x30);
                plVar14 = (longlong *)0x0;
                plVar15 = plVar14;
                if (plVar12 != (longlong *)0x0) {
                    *plVar12 = (longlong)&PTR_LAB_140b55048;
                    *(undefined4 *)(plVar12 + 1) = 1;
                    *plVar12 = (longlong)&PTR_LAB_140b6c6f0;
                    plVar12[3] = 0;
                    *(undefined4 *)(plVar12 + 4) = 0;
                    plVar12[5] = 0;
                    plVar15 = plVar12;
                }
                plVar12 = *pplVar1;
                if (plVar12 != plVar15) {
                    if (plVar12 != (longlong *)0x0) {
                        (**(code **)(*plVar12 + 8))();
                    }
                    *pplVar1 = plVar15;
                }
                plVar15 = *pplVar1;
                plVar15[4] = *(longlong *)(lVar8 + 0x1a0);
                plVar15[5] = *(longlong *)(lVar8 + 0x1a8);
                plVar15 = *pplVar1;
                psVar17 = &DAT_140b7b704;
                if (*(short **)(lVar8 + 0x10) != (short *)0x0) {
                    psVar17 = *(short **)(lVar8 + 0x10);
                }
                lVar10 = plVar15[3];
                if (psVar17 != (short *)0x0) {
                    sVar3 = *psVar17;
                    plVar12 = plVar14;
                    while (sVar3 != 0) {
                        plVar12 = (longlong *)((longlong)plVar12 + 1);
                        sVar3 = psVar17[(longlong)plVar12];
                    }
                    plVar13 = (longlong *)FUN_14018b280((longlong)plVar12 * 2 + 0x12,0);
                    if (plVar13 != (longlong *)0x0) {
                        plVar13[1] = (longlong)plVar12;
                        *plVar13 = (longlong)&PTR_LAB_140b55060;
                        plVar14 = plVar13;
                    }
                    plVar14 = plVar14 + 2;
                    FUN_1407db590(plVar14,psVar17,(longlong)plVar12 * 2);
                    *(undefined2 *)((longlong)plVar14 + (longlong)plVar12 * 2) = 0;
                }
                plVar15[3] = (longlong)plVar14;
                if (lVar10 != 0) {
                    (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
                }
                *(int *)(*pplVar1 + 2) = param_2;
            }
            else {
                if (plVar14 != (longlong *)0x0) {
                    (**(code **)*plVar14)(plVar14);
                }
                FUN_1401e42b0(pplVar1,pplVar2);
                if (*pplVar2 != plVar14) {
                    if (plVar14 != (longlong *)0x0) {
                        (**(code **)*plVar14)(plVar14);
                    }
                    if (*pplVar2 != (longlong *)0x0) {
                        (**(code **)(**pplVar2 + 8))();
                    }
                    *pplVar2 = plVar14;
                }
                if (plVar14 != (longlong *)0x0) {
                    (**(code **)(*plVar14 + 8))(plVar14);
                }
            }
        }
    }
    uVar5 = 0;
    if (lVar9 != 0) {
        FUN_14046c2c0(lVar9);
    }
    local_res8[0] = param_2;
    FUN_1403f4900(DAT_140c65898,0x185,local_res8);
    iVar16 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
        uVar5 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"TargetUnitChanged",&DAT_1409edf14,uVar5);
    uVar5 = 0x27;
    if (param_2 == 0) {
        uVar5 = 0x5c;
    }
    FUN_140051af0(0,uVar5);
    if (lVar8 != 0) {
        iVar6 = DAT_140c45130;
        if (*DAT_140c63750 < DAT_140c45130) {
            iVar6 = *DAT_140c63750;
        }
        if ((&DAT_140c45140)[iVar6] == '\0') {
            switch(*(undefined4 *)(lVar8 + 0x80)) {
                case 3:
                case 7:
                case 9:
                case 0x14:
                case 0x17:
                case 0x18:
                case 0x19:
                case 0x1b:
                    break;
                default:
                    if (*(longlong *)(param_1 + 0x78) != 0) {
                        iVar6 = FUN_14045a950(*(longlong *)(param_1 + 0x78),param_2);
                        iVar16 = 2;
                        if (iVar6 == 2) break;
                    }
                    iVar16 = 1;
            }
            lVar9 = FUN_140200220();
            if (lVar9 == 0) {
                fVar23 = 128.0;
            }
            else {
                fVar23 = *(float *)(lVar9 + 0x18 + (longlong)iVar16 * 4);
            }
            lVar9 = *(longlong *)(param_1 + 0x6490);
            *(float *)(param_1 + 0x6408) = fVar23;
            fVar18 = *(float *)(lVar8 + 0x11e0) - *(float *)(lVar9 + 0x11e0);
            fVar21 = *(float *)(lVar8 + 0x11e4) - *(float *)(lVar9 + 0x11e4);
            fVar22 = *(float *)(lVar8 + 0x11e8) - *(float *)(lVar9 + 0x11e8);
            fVar18 = fVar18 * fVar18 + fVar21 * fVar21 + fVar22 * fVar22;
            if (fVar18 <= fVar23 * fVar23) {
                *(undefined4 *)(param_1 + 0x6404) = 0;
            }
            else {
                auVar19 = ZEXT416((uint)SQRT(fVar18)) & (undefined  [16])0xffffffffffffffff;
                fVar18 = (SUB164(auVar19,0) - fVar23) * 0.2;
                auVar20 = CONCAT124(SUB1612(auVar19 >> 0x20,0),fVar18);
                iVar16 = (int)fVar18;
                if ((iVar16 != -0x80000000) && ((float)iVar16 != fVar18)) {
                    uVar7 = movmskps((int)lVar9,
                                     CONCAT88(SUB168(auVar19 >> 0x40,0),
                                              SUB168(auVar20,0) | SUB168(auVar20,0) << 0x20) &
                                     (undefined  [16])0xffffffffffffffff);
                    auVar20 = ZEXT416((uint)(float)(iVar16 + (uVar7 & 1 ^ 1)));
                }
                *(float *)(param_1 + 0x6404) = SUB164(auVar20,0) * 5.0 + fVar23;
            }
            goto LAB_14055b7fd;
        }
    }
    *(undefined8 *)(param_1 + 0x6404) = 0;
    LAB_14055b7fd:
    FUN_14055bac0(param_1);
    FUN_1403971c0(param_1);
    return;
}



undefined8 * FUN_14055b860(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

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



void FUN_14055b8b0(undefined8 param_1,longlong param_2)

{
    undefined8 uVar1;
    longlong lVar2;

    uVar1 = DAT_140c65898;
    if (param_2 != 0) {
        if ((*(int *)(param_2 + 0x80) - 0x14U & 0xfffffffb) != 0) {
            uVar1 = FUN_14034bdd0(param_1,0x58db9);
            FUN_140003890(DAT_140c658a0,2,0,uVar1,0,0);
            return;
        }
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_2 + 0x108));
        if (lVar2 == 0) {
            uVar1 = FUN_14034bdd0();
            FUN_140003890(DAT_140c658a0,2,0,uVar1,0,0);
            return;
        }
        FUN_14055b0e0(uVar1,*(undefined4 *)(lVar2 + 8));
    }
    return;
}



void FUN_14055b960(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    longlong *plVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float fVar5;
    float fVar6;
    float fVar9;
    float fVar10;
    undefined auVar7 [16];
    undefined4 in_XMM6_Da;
    float fVar11;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar8 [16];

    plVar1 = *(longlong **)(param_2 + 0x16f8);
    auVar7 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    fVar11 = 0.0;
    if ((((*(longlong **)(param_2 + 0x16f0) != (longlong *)0x0) &&
          ((**(code **)(**(longlong **)(param_2 + 0x16f0) + 0x90))(), fVar11 < extraout_XMM0_Da)) ||
         ((plVar1 != (longlong *)0x0 && ((**(code **)(*plVar1 + 0x90))(), fVar11 < extraout_XMM0_Da_00)
         ))) || ((lVar2 = *(longlong *)(param_1 + 0x6490), lVar2 == 0 ||
                                                           (*(int *)(lVar2 + 8) == *(int *)(lVar2 + 0x108))))) {
        iVar4 = DAT_140c45130;
        if (*DAT_140c63750 < DAT_140c45130) {
            iVar4 = *DAT_140c63750;
        }
        if ((&DAT_140c45140)[iVar4] != '\0') {
            return;
        }
        lVar2 = *(longlong *)(param_1 + 0x6490);
        fVar11 = *(float *)(param_1 + 0x6408);
        fVar5 = *(float *)(param_2 + 0x11e0) - *(float *)(lVar2 + 0x11e0);
        fVar9 = *(float *)(param_2 + 0x11e4) - *(float *)(lVar2 + 0x11e4);
        fVar10 = *(float *)(param_2 + 0x11e8) - *(float *)(lVar2 + 0x11e8);
        fVar6 = *(float *)(param_1 + 0x6404);
        fVar5 = fVar5 * fVar5 + fVar9 * fVar9 + fVar10 * fVar10;
        if (fVar6 <= fVar11) {
            if (fVar5 <= fVar11 * fVar11) {
                return;
            }
        }
        else if (fVar5 <= fVar6 * fVar6) {
            auVar7 = ZEXT416((uint)SQRT(fVar5)) & (undefined  [16])0xffffffffffffffff;
            fVar6 = (SUB164(auVar7,0) - fVar11) * 0.2;
            auVar8 = CONCAT124(SUB1612(auVar7 >> 0x20,0),fVar6);
            iVar4 = (int)fVar6;
            if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar6)) {
                uVar3 = movmskps((int)lVar2,
                                 CONCAT88(SUB168(auVar7 >> 0x40,0),
                                          SUB168(auVar8,0) | SUB168(auVar8,0) << 0x20) &
                                 (undefined  [16])0xffffffffffffffff);
                auVar8 = ZEXT416((uint)(float)(iVar4 + (uVar3 & 1 ^ 1)));
            }
            *(float *)(param_1 + 0x6404) = SUB164(auVar8,0) * 5.0 + fVar11;
            return;
        }
    }
    FUN_14055b0e0(param_1,0,param_3,param_4,auVar7);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14055bac0(longlong param_1)

{
    undefined *puVar1;
    longlong *plVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    undefined *puVar8;
    longlong **pplVar9;
    float fVar10;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined local_68 [16];
    undefined local_58 [16];
    undefined local_48 [16];
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    iVar3 = DAT_140c450b0;
    if (*DAT_140c63750 < DAT_140c450b0) {
        iVar3 = *DAT_140c63750;
    }
    if ((&DAT_140c450c0)[iVar3] == '\0') {
        if (*(longlong **)(param_1 + 0x6630) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x6630) + 0x3a8))();
            if (*(longlong **)(param_1 + 0x6630) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x6630) + 8))();
                *(undefined8 *)(param_1 + 0x6630) = 0;
                return;
            }
        }
    }
    else {
        lVar6 = FUN_1403d90d0(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0x108));
        if (lVar6 != 0) {
            if (*(longlong *)(param_1 + 0x78) == 0) {
                iVar3 = 1;
            }
            else {
                iVar3 = FUN_14045a950(*(longlong *)(param_1 + 0x78),*(undefined4 *)(lVar6 + 8));
            }
            iVar4 = FUN_14045bed0(lVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 8));
            lVar7 = *(longlong *)(lVar6 + 0xd08);
            iVar5 = 0;
            if (iVar4 != 0) {
                iVar3 = iVar5;
            }
            if (lVar7 == 0) {
                lVar7 = FUN_14022d500(*(undefined4 *)(lVar6 + 0xd8));
                if (lVar7 == 0) {
                    fVar10 = 0.0;
                }
                else {
                    fVar10 = *(float *)(lVar7 + 0x28);
                }
            }
            else {
                fVar10 = (float)FUN_14047a940();
                fVar10 = fVar10 * *(float *)(lVar7 + 0x8c);
            }
            if (DAT_140c65880 < fVar10) {
                iVar5 = (_DAT_140c65888 <= fVar10) + 1;
            }
            pplVar9 = (longlong **)(param_1 + 0x6630);
            puVar1 = (&PTR_u_Art_FX_UI_Selection_Selection_Ho_140af6d40)
            [(longlong)iVar3 + (longlong)iVar5 * 4];
            fVar10 = (fVar10 / (&DAT_140c65880)[iVar5]) * (1.0 / *(float *)(lVar6 + 0x12c4));
            if (*pplVar9 != (longlong *)0x0) {
                puVar8 = (undefined *)(**(code **)(**pplVar9 + 0x30))();
                if (puVar8 == puVar1) {
                    return;
                }
                (**(code **)(**pplVar9 + 0x3a8))();
                if (*pplVar9 != (longlong *)0x0) {
                    (**(code **)(**pplVar9 + 8))();
                    *pplVar9 = (longlong *)0x0;
                }
            }
            iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                    (*(longlong **)(DAT_140c65898 + 0x7250),puVar1,pplVar9,0);
            if ((-1 < iVar3) && (plVar2 = *(longlong **)(lVar6 + 0x16e8), plVar2 != (longlong *)0x0)) {
                iVar3 = (**(code **)(*plVar2 + 0x350))(plVar2,9);
                if (iVar3 == 0) {
                    FUN_1400035b0(0x16,0,0,puVar1);
                }
                else {
                    (**(code **)(**(longlong **)(lVar6 + 0x16e8) + 0x380))
                            (*(longlong **)(lVar6 + 0x16e8),9,*pplVar9);
                }
                local_88 = 0x96;
                local_80 = 0x3f800000;
                local_78 = 0;
                local_70 = 0;
                (**(code **)(**pplVar9 + 0x248))(*pplVar9,0,&local_88);
                (**(code **)(**pplVar9 + 0x288))(*pplVar9,FUN_14055c530,0);
                local_68 = CONCAT412(fRam0000000140c7841c * fVar10,
                                     CONCAT48(fRam0000000140c78418 * fVar10,
                                              CONCAT44(fRam0000000140c78414 * fVar10,_DAT_140c78410 * fVar10
                                              )));
                local_58 = CONCAT412(fRam0000000140c7842c * fVar10,
                                     CONCAT48(fRam0000000140c78428 * fVar10,
                                              CONCAT44(fRam0000000140c78424 * fVar10,_DAT_140c78420 * fVar10
                                              )));
                local_48 = CONCAT412(fRam0000000140c7843c * fVar10,
                                     CONCAT48(fRam0000000140c78438 * fVar10,
                                              CONCAT44(fRam0000000140c78434 * fVar10,_DAT_140c78430 * fVar10
                                              )));
                local_38 = _DAT_140c78440;
                uStack52 = uRam0000000140c78444;
                uStack48 = uRam0000000140c78448;
                uStack44 = uRam0000000140c7844c;
                (**(code **)(**pplVar9 + 0x48))(*pplVar9,local_68);
            }
        }
    }
    return;
}



undefined8 FUN_14055bdc0(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined4 uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    ulonglong in_stack_ffffffffffffff88;

    if ((param_2 == 0) || (param_3 == 0)) {
        return 0;
    }
    if ((((*(byte *)(param_1 + 0x7ba0) & 1) != 0) &&
         (uVar1 = *(uint *)(*(longlong *)(param_3 + 0x70) + 0x10c), (uVar1 >> 0x1a & 1) != 0)) &&
        ((uVar1 >> 0x1c & 1) != 0)) {
        if (*(longlong *)(param_1 + 0x6490) == 0) {
            uVar6 = 0;
        }
        else {
            uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0x108);
        }
        lVar3 = FUN_1403d90d0(param_1,uVar6);
        if (lVar3 == 0) {
            LAB_14055bec1:
            lVar3 = param_2;
        }
        else {
            if (*(longlong *)(param_1 + 0x6490) == 0) {
                uVar6 = 0;
            }
            else {
                uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x6490) + 0x108);
            }
            iVar2 = FUN_14045a950(param_2,uVar6);
            if (((iVar2 != 2) || ((*(byte *)(lVar3 + 0x24) & 1) != 0)) ||
                ((*(longlong *)(lVar3 + 0x18) != 0 && (iVar2 = FUN_140466b90(param_2,lVar3), iVar2 == 0))))
            {
                in_stack_ffffffffffffff88 = *(ulonglong *)(lVar3 + 0x18);
                iVar2 = FUN_1403b44b0(in_stack_ffffffffffffff88,**(undefined4 **)(param_3 + 0x70),
                                      (*(undefined4 **)(param_3 + 0x70))[0x4a],lVar3,
                                      in_stack_ffffffffffffff88,param_2);
                if ((*(int *)(*(longlong *)(param_3 + 0x70) + 0x128) == 0) || (iVar2 != 0))
                    goto LAB_14055bec1;
            }
        }
        param_5 = *(int *)(lVar3 + 8);
        goto LAB_14055bf09;
    }
    if (*(int *)(*(longlong *)(param_3 + 0x70) + 0x18) == 3) {
        switchD_14055beed_caseD_4:
        param_5 = 0;
    }
    else {
        switch(*(undefined4 *)(*(longlong *)(param_3 + 0x70) + 0x7c)) {
            case 0:
            case 2:
            case 6:
            case 7:
                param_5 = *(int *)(param_2 + 8);
                break;
            case 1:
            case 3:
            case 5:
            case 8:
                if (param_5 == 0) {
                    param_5 = *(int *)(param_2 + 0x108);
                }
                break;
            default:
                goto switchD_14055beed_caseD_4;
        }
    }
    LAB_14055bf09:
    if ((((param_4 == 0) && (param_5 == 0)) &&
         (uVar1 = *(uint *)(*(longlong *)(param_3 + 0x70) + 0x7c), uVar1 < 9)) &&
        ((0x12aU >> (uVar1 & 0x1f) & 1) != 0)) {
        if ((DAT_140dc33d0 & 1) == 0) {
            DAT_140dc33d0 = DAT_140dc33d0 | 1;
            lVar3 = FUN_140200220(0x145);
            if (lVar3 == 0) {
                DAT_140dc33d4 = 0x40a00000;
            }
            else {
                DAT_140dc33d4 = *(undefined4 *)(lVar3 + 0x18);
            }
        }
        iVar2 = FUN_14055a5f0(param_1,1,1,0,in_stack_ffffffffffffff88 & 0xffffffff00000000,1,0,
                              DAT_140dc33d4);
        if ((iVar2 != 0) && (lVar3 = FUN_1403d90d0(param_1,iVar2), lVar3 != 0)) {
            lVar4 = (**(code **)(**(longlong **)(param_2 + 0x16f0) + 0x50))
                    (*(longlong **)(param_2 + 0x16f0),1);
            fVar9 = *(float *)(lVar4 + 0x30);
            lVar4 = (**(code **)(**(longlong **)(lVar3 + 0x16f0) + 0x50))
                    (*(longlong **)(lVar3 + 0x16f0),1);
            fVar7 = *(float *)(param_2 + 0x11e0) - *(float *)(lVar3 + 0x11e0);
            fVar8 = *(float *)(param_2 + 0x11e4) - *(float *)(lVar3 + 0x11e4);
            if ((SQRT(fVar7 * fVar7 + fVar8 * fVar8 + 0.0) - (*(float *)(lVar4 + 0x30) + fVar9) < 4.0) &&
                (param_5 = *(int *)(lVar3 + 8), param_5 != 0)) {
                FUN_14055b0e0(param_1,iVar2);
            }
        }
    }
    uVar5 = FUN_1403d90d0(param_1,param_5);
    return uVar5;
}



void FUN_14055c530(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (param_4 == 0) {
        local_1c = 0;
        local_14 = 0;
        local_c = 0;
        local_20 = 0x3f800000;
        local_28 = 0x96;
        (**(code **)(*param_1 + 0x248))(param_1,0,&local_28);
    }
    return;
}



longlong FUN_14055c580(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar1 + 1);
    puVar4 = (undefined4 *)(lVar1 * 0x20 + lVar3);
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_2;
        puVar4[1] = param_2[1];
        puVar4[2] = param_2[2];
        puVar4[3] = param_2[3];
        puVar4[4] = param_2[4];
        puVar4[5] = param_2[5];
        puVar4[6] = param_2[6];
        puVar4[7] = param_2[7];
    }
    if (*param_1 != lVar3) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            puVar4 = (undefined4 *)(lVar3 + 0xc);
            do {
                if (puVar4 + -3 != (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)((longlong)puVar4 + *param_1 + (-0xc - lVar3));
                    puVar4[-3] = *puVar5;
                    puVar4[-2] = puVar5[1];
                    puVar4[-1] = puVar5[2];
                    *puVar4 = puVar5[3];
                    puVar4[1] = puVar5[4];
                    puVar4[2] = puVar5[5];
                    puVar4[3] = puVar5[6];
                    puVar4[4] = puVar5[7];
                }
                uVar6 = uVar6 + 1;
                puVar4 = puVar4 + 8;
            } while (uVar6 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



undefined8 FUN_14055c6a0(void)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined4 uVar4;

    FUN_140236320();
    FUN_140238520();
    FUN_140236ba0();
    if (DAT_140c65b70 != (undefined8 *)0x0) {
        (**(code **)*DAT_140c65b70)();
        return 0;
    }
    lVar2 = FUN_14018b280(0x810,0);
    plVar3 = (longlong *)0x0;
    uVar4 = 0;
    if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_14055c940(lVar2);
    }
    iVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
    if (-1 < iVar1) {
        DAT_140c65b70 = plVar3;
        lVar2 = FUN_140200220(100);
        if (lVar2 != 0) {
            uVar4 = *(undefined4 *)(lVar2 + 4);
        }
        DAT_140c6664c = uVar4;
        return 0;
    }
    (**(code **)(*plVar3 + 8))(plVar3);
    return 0x80004005;
}



undefined8 FUN_14055c760(longlong **param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong local_res8;

    uVar3 = (**(code **)(**param_1 + 8))();
    lVar1 = *(longlong *)(param_2 + 8);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < uVar3) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (uVar3 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        (**(code **)(*(longlong *)(*param_1)[0x27] + 8))
                ((longlong *)(*param_1)[0x27],*(undefined4 *)(*(longlong *)(local_res8 + 0x28) + 0x80)
                );
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14055c800(void)

{
    if (DAT_140c63850 == (code *)0x0) {
        if (_DAT_140c64d94 == 0) {
            _DAT_140c64d94 = 1;
            if (DAT_140c653f0 != (longlong *)0x0) {
                (**(code **)(*DAT_140c653f0 + 8))();
                DAT_140c653f0 = (longlong *)0x0;
                goto LAB_14055c852;
            }
        }
        LAB_14055c870:
        if (_DAT_140c644e4 != 0) goto LAB_14055c8c1;
        _DAT_140c644e4 = 1;
        if (DAT_140c63ba0 == (longlong *)0x0) goto LAB_14055c8c1;
        (**(code **)(*DAT_140c63ba0 + 8))();
        DAT_140c63ba0 = (longlong *)0x0;
    }
    else {
        (*DAT_140c63850)(&PTR_u_Spell4_140a6d0a8,DAT_140c63858);
        LAB_14055c852:
        if (DAT_140c63850 == (code *)0x0) goto LAB_14055c870;
        (*DAT_140c63850)(&PTR_u_Spell4Effects_140a6d268,DAT_140c63858);
    }
    if (DAT_140c63850 != (code *)0x0) {
        // WARNING: Could not recover jumptable at 0x00014055c8be. Too many branches
        // WARNING: Treating indirect jump as call
        (*DAT_140c63850)(&PTR_u_Spell4Base_140a6d118,DAT_140c63858);
        return;
    }
    LAB_14055c8c1:
    if (_DAT_140c64510 == 0) {
        _DAT_140c64510 = 1;
        if (DAT_140c654e0 != (longlong *)0x0) {
            (**(code **)(*DAT_140c654e0 + 8))();
            DAT_140c654e0 = (longlong *)0x0;
        }
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014055c912)

longlong FUN_14055c900(undefined8 param_1,longlong param_2)

{
    longlong lVar1;

    if (param_2 == 0) {
        return 0;
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) == param_2) {
        return DAT_140c65898;
    }
    lVar1 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x6490) == param_2) {
        lVar1 = DAT_140c65898;
    }
    return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_14055c940(undefined8 *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    int iVar3;
    undefined *puVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;

    FUN_1407a0980();
    *param_1 = &PTR_LAB_140b6c720;
    FUN_1403fb600(param_1 + 0xc4);
    puVar10 = (undefined8 *)0x0;
    param_1[0xc9] = 0;
    puVar4 = (undefined *)FUN_14018b280(0x40,0);
    param_1[0xcc] = 0;
    param_1[0xcb] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xcb] + 8) = 0;
    *(undefined8 *)(param_1[0xcb] + 0x10) = param_1[0xcb];
    *(undefined8 *)(param_1[0xcb] + 0x18) = param_1[0xcb];
    puVar4 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xd0] = 0;
    param_1[0xcf] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xcf] + 8) = 0;
    *(undefined8 *)(param_1[0xcf] + 0x10) = param_1[0xcf];
    *(undefined8 *)(param_1[0xcf] + 0x18) = param_1[0xcf];
    puVar4 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0xd4] = 0;
    param_1[0xd3] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xd3] + 8) = 0;
    *(undefined8 *)(param_1[0xd3] + 0x10) = param_1[0xd3];
    *(undefined8 *)(param_1[0xd3] + 0x18) = param_1[0xd3];
    FUN_1400b6000(param_1 + 0xd6,0);
    puVar4 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xdd] = 0;
    param_1[0xdc] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xdc] + 8) = 0;
    *(undefined8 *)(param_1[0xdc] + 0x10) = param_1[0xdc];
    *(undefined8 *)(param_1[0xdc] + 0x18) = param_1[0xdc];
    puVar4 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xe1] = 0;
    param_1[0xe0] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xe0] + 8) = 0;
    *(undefined8 *)(param_1[0xe0] + 0x10) = param_1[0xe0];
    *(undefined8 *)(param_1[0xe0] + 0x18) = param_1[0xe0];
    puVar4 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xe5] = 0;
    param_1[0xe4] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xe4] + 8) = 0;
    *(undefined8 *)(param_1[0xe4] + 0x10) = param_1[0xe4];
    *(undefined8 *)(param_1[0xe4] + 0x18) = param_1[0xe4];
    puVar4 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xe9] = 0;
    param_1[0xe8] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xe8] + 8) = 0;
    *(undefined8 *)(param_1[0xe8] + 0x10) = param_1[0xe8];
    *(undefined8 *)(param_1[0xe8] + 0x18) = param_1[0xe8];
    puVar4 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xed] = 0;
    param_1[0xec] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xec] + 8) = 0;
    *(undefined8 *)(param_1[0xec] + 0x10) = param_1[0xec];
    *(undefined8 *)(param_1[0xec] + 0x18) = param_1[0xec];
    puVar4 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0xf2] = 0;
    param_1[0xf1] = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0xf1] + 8) = 0;
    *(undefined8 *)(param_1[0xf1] + 0x10) = param_1[0xf1];
    *(undefined8 *)(param_1[0xf1] + 0x18) = param_1[0xf1];
    FUN_1405662d0(param_1 + 0xf4);
    param_1[0xf9] = 0;
    param_1[0xfa] = 0;
    param_1[0xfb] = 0;
    param_1[0xfd] = 0;
    param_1[0xfc] = 0;
    param_1[0xff] = 0;
    param_1[0xfe] = 0;
    param_1[0x101] = 0;
    param_1[0x100] = 0;
    puVar5 = (undefined8 *)FUN_14018b280(0x28,0);
    uVar2 = 0;
    puVar9 = puVar10;
    if (puVar5 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            uVar1 = uVar2;
            if ((_DAT_140c64d94 == 0) && (iVar3 = FUN_140236320(), -1 < iVar3)) {
                uVar1 = (**(code **)(*DAT_140c653f0 + 0x28))();
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4_140a6d0a8,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar1);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar5[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar5[1] << 3);
        puVar5[3] = &LAB_1400522d0;
        puVar5[4] = &LAB_1400522e0;
        puVar9 = puVar5;
    }
    param_1[0xa8] = puVar9;
    puVar5 = (undefined8 *)FUN_14018b280(0x28);
    puVar9 = puVar10;
    if (puVar5 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            uVar1 = uVar2;
            if ((_DAT_140c64d94 == 0) && (iVar3 = FUN_140236320(), -1 < iVar3)) {
                uVar1 = (**(code **)(*DAT_140c653f0 + 0x28))();
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4_140a6d0a8,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar1);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar5[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar5[1] << 3);
        puVar5[3] = &LAB_1400522d0;
        puVar5[4] = &LAB_1400522e0;
        puVar9 = puVar5;
    }
    param_1[0xa9] = puVar9;
    puVar5 = (undefined8 *)FUN_14018b280(0x28);
    puVar9 = puVar10;
    if (puVar5 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            uVar1 = uVar2;
            if ((_DAT_140c64d94 == 0) && (iVar3 = FUN_140236320(), -1 < iVar3)) {
                uVar1 = (**(code **)(*DAT_140c653f0 + 0x28))();
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4_140a6d0a8,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar1);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar5[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar5[1] << 3);
        puVar5[3] = &LAB_1400522d0;
        puVar5[4] = &LAB_1400522e0;
        puVar9 = puVar5;
    }
    param_1[0xaa] = puVar9;
    puVar5 = (undefined8 *)FUN_14018b280(0x28);
    puVar9 = puVar10;
    if (puVar5 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            uVar1 = uVar2;
            if ((_DAT_140c64d94 == 0) && (iVar3 = FUN_140236320(), -1 < iVar3)) {
                uVar1 = (**(code **)(*DAT_140c653f0 + 0x28))();
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4_140a6d0a8,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar1);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar5[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar5[1] << 3);
        puVar5[3] = &LAB_1400522d0;
        puVar5[4] = &LAB_1400522e0;
        puVar9 = puVar5;
    }
    param_1[0xab] = puVar9;
    puVar5 = (undefined8 *)FUN_14018b280(0x28);
    puVar9 = puVar10;
    if (puVar5 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            uVar1 = uVar2;
            if ((_DAT_140c64d94 == 0) && (iVar3 = FUN_140236320(), -1 < iVar3)) {
                uVar1 = (**(code **)(*DAT_140c653f0 + 0x28))();
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4_140a6d0a8,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar1);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar5[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar5[1] << 3);
        puVar5[3] = &LAB_1400522d0;
        puVar5[4] = &LAB_1400522e0;
        puVar9 = puVar5;
    }
    param_1[0xac] = puVar9;
    puVar5 = (undefined8 *)FUN_14018b280(0x28);
    puVar9 = puVar10;
    if (puVar5 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            uVar1 = uVar2;
            if ((_DAT_140c64d94 == 0) && (iVar3 = FUN_140236320(), -1 < iVar3)) {
                uVar1 = (**(code **)(*DAT_140c653f0 + 0x28))();
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4_140a6d0a8,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar1);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar5[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar5[1] << 3);
        puVar5[3] = &LAB_1400522d0;
        puVar5[4] = &LAB_1400522e0;
        puVar9 = puVar5;
    }
    param_1[0xad] = puVar9;
    lVar8 = FUN_14018b280(0x28);
    puVar9 = puVar10;
    if (lVar8 != 0) {
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c64d94 == 0) {
                iVar3 = FUN_140236320();
                if (iVar3 < 0) {
                    puVar9 = (undefined8 *)FUN_1400b6000(lVar8,0);
                }
                else {
                    uVar1 = (**(code **)(*DAT_140c653f0 + 0x28))();
                    puVar9 = (undefined8 *)FUN_1400b6000(lVar8,uVar1);
                }
            }
            else {
                puVar9 = (undefined8 *)FUN_1400b6000(lVar8,0);
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4_140a6d0a8,DAT_140c63858);
            puVar9 = (undefined8 *)FUN_1400b6000(lVar8,uVar1);
        }
    }
    param_1[0xae] = puVar9;
    puVar5 = (undefined8 *)FUN_14018b280(0x28);
    puVar9 = puVar10;
    if (puVar5 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            uVar1 = uVar2;
            if ((_DAT_140c644e4 == 0) && (iVar3 = FUN_140238520(), -1 < iVar3)) {
                uVar1 = (**(code **)(*DAT_140c63ba0 + 0x28))();
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4Effects_140a6d268,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar1);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar5[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar5[1] << 3);
        puVar5[3] = &LAB_1400522d0;
        puVar5[4] = &LAB_1400522e0;
        puVar9 = puVar5;
    }
    param_1[0xaf] = puVar9;
    puVar5 = (undefined8 *)FUN_14018b280(0x28);
    puVar9 = puVar10;
    if (puVar5 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            uVar1 = uVar2;
            if ((_DAT_140c64c94 == 0) && (iVar3 = FUN_14023d1a0(), -1 < iVar3)) {
                uVar1 = (**(code **)(*DAT_140c64fe8 + 0x28))();
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4Visual_140a6d658,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar1);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar5[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar5[1] << 3);
        puVar5[3] = &LAB_1400522d0;
        puVar5[4] = &LAB_1400522e0;
        puVar9 = puVar5;
    }
    param_1[0xef] = puVar9;
    puVar5 = (undefined8 *)FUN_14018b280(0x28);
    puVar9 = puVar10;
    if (puVar5 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            uVar1 = uVar2;
            if ((_DAT_140c64510 == 0) && (iVar3 = FUN_140236ba0(), -1 < iVar3)) {
                uVar1 = (**(code **)(*DAT_140c654e0 + 0x28))();
            }
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Spell4Base_140a6d118,DAT_140c63858);
        }
        *puVar5 = 0;
        uVar6 = FUN_1401a40c0(uVar1);
        puVar5[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar5[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar5[1] << 3);
        puVar5[3] = &LAB_1400522d0;
        puVar5[4] = &LAB_1400522e0;
        puVar9 = puVar5;
    }
    param_1[0xc3] = puVar9;
    puVar9 = (undefined8 *)FUN_14018b280(0x28);
    if (puVar9 != (undefined8 *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64920 == 0) && (iVar3 = FUN_1401fc880(), -1 < iVar3)) {
                uVar2 = (**(code **)(*DAT_140c65540 + 0x28))();
            }
        }
        else {
            uVar2 = (*DAT_140c63838)(&PTR_u_DistanceDamageModifier_140a6a130,DAT_140c63858);
        }
        *puVar9 = 0;
        uVar6 = FUN_1401a40c0(uVar2);
        puVar9[1] = uVar6;
        uVar7 = SUB168(ZEXT816(8) * ZEXT816(uVar6),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar6) >> 0x40,0) != 0) {
            uVar7 = 0xffffffffffffffff;
        }
        uVar7 = FUN_14018b280(uVar7,0);
        puVar9[2] = uVar7;
        FUN_1407e4830(uVar7,0,puVar9[1] << 3);
        puVar9[3] = &LAB_1400522d0;
        puVar9[4] = &LAB_1400522e0;
        puVar10 = puVar9;
    }
    param_1[0xb1] = puVar10;
    FUN_1407e4830(param_1 + 0x9e,0,0x2c);
    return param_1;
}



void FUN_14055d420(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    *param_1 = &PTR_LAB_140b6c720;
    FUN_140549ab0();
    lVar5 = param_1[0xf9];
    while (lVar5 != 0) {
        FUN_140561ad0(param_1,param_1[0xf9]);
        lVar5 = param_1[0xf9];
    }
    lVar5 = param_1[0xfa];
    lVar3 = DAT_140c65b70;
    while (DAT_140c65b70 = lVar3, lVar5 != 0) {
        lVar5 = param_1[0xfa];
        if (lVar5 != 0) {
            FUN_140569980(lVar5);
            FUN_14018b900(lVar5,0);
        }
        lVar3 = DAT_140c65b70;
        lVar5 = param_1[0xfa];
    }
    uVar7 = 0;
    if (param_1[0xf5] != 0) {
        do {
            lVar5 = *(longlong *)(param_1[0xf6] + uVar7 * 8);
            while (lVar2 = lVar5, lVar2 != 0) {
                lVar5 = *(longlong *)(lVar2 + 8);
                if (lVar3 != 0) {
                    FUN_140561ad0(lVar3,*(undefined8 *)(lVar2 + 0x18));
                    lVar3 = DAT_140c65b70;
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong)param_1[0xf5]);
    }
    lVar5 = param_1[0xef];
    if (lVar5 != 0) {
        FUN_140019490(lVar5);
        FUN_14018b900(*(undefined8 *)(lVar5 + 0x10),0);
        *(undefined8 *)(lVar5 + 0x10) = 0;
        FUN_14018b900(lVar5,0);
    }
    lVar5 = param_1[0xc9];
    if (lVar5 != 0) {
        iVar6 = *(int *)(lVar5 + -0x10) + -1;
        if (-1 < iVar6) {
            puVar4 = (undefined8 *)((longlong)*(int *)(lVar5 + -0x10) * 0xa0 + 0x90 + lVar5);
            do {
                FUN_14018b900(puVar4[-0x1f],0);
                FUN_14018b900(puVar4[-0x14]);
                iVar6 = iVar6 + -1;
                puVar4 = puVar4 + -0x14;
            } while (-1 < iVar6);
        }
        FUN_14018b900(lVar5 + -0x10,0);
    }
    if (param_1[3] != 0) {
        FUN_14055ddf0();
    }
    FUN_1405665e0(param_1 + 0xdb);
    FUN_1405665e0(param_1 + 0xdf);
    lVar5 = *(longlong *)(param_1[0xe4] + 0x10);
    if (lVar5 != param_1[0xe4]) {
        do {
            lVar3 = *(longlong *)(lVar5 + 0x28);
            if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 8) != 0) {
                    FUN_14018b900(*(longlong *)(lVar3 + 8),0);
                }
                FUN_14018b900(lVar3,0);
            }
            lVar3 = *(longlong *)(lVar5 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar5 = lVar3;
                        lVar3 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar3) {
                    lVar5 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar5 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar5 != param_1[0xe4]);
    }
    FUN_140008410();
    lVar5 = *(longlong *)(param_1[0xe8] + 0x10);
    if (lVar5 != param_1[0xe8]) {
        do {
            lVar3 = *(longlong *)(lVar5 + 0x28);
            if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 8) != 0) {
                    FUN_14018b900(*(longlong *)(lVar3 + 8),0);
                }
                FUN_14018b900(lVar3,0);
            }
            lVar3 = *(longlong *)(lVar5 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar5 = lVar3;
                        lVar3 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar3) {
                    lVar5 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar5 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar5 != param_1[0xe8]);
    }
    if (param_1[0xe9] != 0) {
        lVar5 = *(longlong *)(param_1[0xe8] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xe7,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xe8] + 0x10) = param_1[0xe8];
        *(undefined8 *)(param_1[0xe8] + 8) = 0;
        *(undefined8 *)(param_1[0xe8] + 0x18) = param_1[0xe8];
        param_1[0xe9] = 0;
    }
    lVar5 = *(longlong *)(param_1[0xf1] + 0x10);
    if (lVar5 != param_1[0xf1]) {
        do {
            uVar8 = 0;
            uVar7 = *(ulonglong *)(*(longlong *)(lVar5 + 0x28) + 8);
            if (uVar7 != 0) {
                do {
                    FUN_14018b900(*(undefined8 *)(**(longlong **)(lVar5 + 0x28) + uVar8 * 8),0);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < uVar7);
            }
            *(undefined8 *)(*(longlong *)(lVar5 + 0x28) + 8) = 0;
            plVar1 = *(longlong **)(lVar5 + 0x28);
            if (plVar1 != (longlong *)0x0) {
                lVar3 = *plVar1;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(plVar1,0);
            }
            lVar3 = *(longlong *)(lVar5 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        lVar5 = lVar3;
                        lVar3 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar3) {
                    lVar5 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); lVar5 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (lVar5 != param_1[0xf1]);
    }
    if (param_1[0xf2] != 0) {
        lVar5 = *(longlong *)(param_1[0xf1] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xf0,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xf1] + 0x10) = param_1[0xf1];
        *(undefined8 *)(param_1[0xf1] + 8) = 0;
        *(undefined8 *)(param_1[0xf1] + 0x18) = param_1[0xf1];
        param_1[0xf2] = 0;
    }
    FUN_14018b900(param_1[0xfb],0);
    FUN_14018b900(param_1[9],0);
    lVar5 = param_1[0x100];
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    lVar5 = param_1[0xfe];
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    lVar5 = param_1[0xfc];
    if (lVar5 != 0) {
        (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    if (param_1[0xfa] != 0) {
        FUN_1401a4a00(param_1 + 0xfa);
    }
    if (param_1[0xf9] != 0) {
        FUN_1401a4a00(param_1 + 0xf9);
    }
    uVar8 = 0;
    uVar7 = uVar8;
    if (param_1[0xf5] != 0) {
        do {
            plVar1 = (longlong *)(param_1[0xf6] + uVar7 * 8);
            lVar5 = *(longlong *)(param_1[0xf6] + uVar7 * 8);
            while (lVar5 != 0) {
                lVar5 = *plVar1;
                *plVar1 = *(longlong *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *plVar1;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong)param_1[0xf5]);
    }
    param_1[0xf4] = 0;
    FUN_14018b900(param_1[0xf6],0);
    param_1[0xf6] = 0;
    if (param_1[0xf2] != 0) {
        lVar5 = *(longlong *)(param_1[0xf1] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xf0,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xf1] + 0x10) = param_1[0xf1];
        *(undefined8 *)(param_1[0xf1] + 8) = 0;
        *(undefined8 *)(param_1[0xf1] + 0x18) = param_1[0xf1];
        param_1[0xf2] = 0;
    }
    FUN_14018b900(param_1[0xf1],0);
    if (param_1[0xed] != 0) {
        lVar5 = *(longlong *)(param_1[0xec] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xeb,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xec] + 0x10) = param_1[0xec];
        *(undefined8 *)(param_1[0xec] + 8) = 0;
        *(undefined8 *)(param_1[0xec] + 0x18) = param_1[0xec];
        param_1[0xed] = 0;
    }
    FUN_14018b900(param_1[0xec],0);
    if (param_1[0xe9] != 0) {
        lVar5 = *(longlong *)(param_1[0xe8] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xe7,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xe8] + 0x10) = param_1[0xe8];
        *(undefined8 *)(param_1[0xe8] + 8) = 0;
        *(undefined8 *)(param_1[0xe8] + 0x18) = param_1[0xe8];
        param_1[0xe9] = 0;
    }
    FUN_14018b900(param_1[0xe8],0);
    if (param_1[0xe5] != 0) {
        lVar5 = *(longlong *)(param_1[0xe4] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xe3,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xe4] + 0x10) = param_1[0xe4];
        *(undefined8 *)(param_1[0xe4] + 8) = 0;
        *(undefined8 *)(param_1[0xe4] + 0x18) = param_1[0xe4];
        param_1[0xe5] = 0;
    }
    FUN_14018b900(param_1[0xe4],0);
    if (param_1[0xe1] != 0) {
        lVar5 = *(longlong *)(param_1[0xe0] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xdf,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xe0] + 0x10) = param_1[0xe0];
        *(undefined8 *)(param_1[0xe0] + 8) = 0;
        *(undefined8 *)(param_1[0xe0] + 0x18) = param_1[0xe0];
        param_1[0xe1] = 0;
    }
    FUN_14018b900(param_1[0xe0],0);
    if (param_1[0xdd] != 0) {
        lVar5 = *(longlong *)(param_1[0xdc] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xdb,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xdc] + 0x10) = param_1[0xdc];
        *(undefined8 *)(param_1[0xdc] + 8) = 0;
        *(undefined8 *)(param_1[0xdc] + 0x18) = param_1[0xdc];
        param_1[0xdd] = 0;
    }
    FUN_14018b900(param_1[0xdc],0);
    uVar7 = uVar8;
    if (param_1[0xd7] != 0) {
        do {
            plVar1 = (longlong *)(param_1[0xd8] + uVar7 * 8);
            lVar5 = *(longlong *)(param_1[0xd8] + uVar7 * 8);
            while (lVar5 != 0) {
                lVar5 = *plVar1;
                *plVar1 = *(longlong *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *plVar1;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < (ulonglong)param_1[0xd7]);
    }
    param_1[0xd6] = 0;
    FUN_14018b900(param_1[0xd8],0);
    param_1[0xd8] = 0;
    if (param_1[0xd4] != 0) {
        lVar5 = *(longlong *)(param_1[0xd3] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xd2,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xd3] + 0x10) = param_1[0xd3];
        *(undefined8 *)(param_1[0xd3] + 8) = 0;
        *(undefined8 *)(param_1[0xd3] + 0x18) = param_1[0xd3];
        param_1[0xd4] = 0;
    }
    FUN_14018b900(param_1[0xd3],0);
    if (param_1[0xd0] != 0) {
        lVar5 = *(longlong *)(param_1[0xcf] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xce,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xcf] + 0x10) = param_1[0xcf];
        *(undefined8 *)(param_1[0xcf] + 8) = 0;
        *(undefined8 *)(param_1[0xcf] + 0x18) = param_1[0xcf];
        param_1[0xd0] = 0;
    }
    FUN_14018b900(param_1[0xcf],0);
    if (param_1[0xcc] != 0) {
        lVar5 = *(longlong *)(param_1[0xcb] + 8);
        while (lVar5 != 0) {
            FUN_1400083b0(param_1 + 0xca,*(undefined8 *)(lVar5 + 0x18));
            lVar3 = *(longlong *)(lVar5 + 0x10);
            FUN_14018b900(lVar5,0);
            lVar5 = lVar3;
        }
        *(undefined8 *)(param_1[0xcb] + 0x10) = param_1[0xcb];
        *(undefined8 *)(param_1[0xcb] + 8) = 0;
        *(undefined8 *)(param_1[0xcb] + 0x18) = param_1[0xcb];
        param_1[0xcc] = 0;
    }
    FUN_14018b900(param_1[0xcb],0);
    if (param_1[0xc5] != 0) {
        do {
            plVar1 = (longlong *)(param_1[0xc6] + uVar8 * 8);
            lVar5 = *(longlong *)(param_1[0xc6] + uVar8 * 8);
            while (lVar5 != 0) {
                lVar5 = *plVar1;
                *plVar1 = *(longlong *)(lVar5 + 8);
                FUN_14018b900(lVar5,0);
                lVar5 = *plVar1;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (ulonglong)param_1[0xc5]);
    }
    param_1[0xc4] = 0;
    FUN_14018b900(param_1[0xc6],0);
    param_1[0xc6] = 0;
    FUN_1407a0bc0(param_1);
    return;
}



longlong FUN_14055ddf0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;

    iVar3 = *(int *)(param_1 + -8) + -1;
    if (-1 < iVar3) {
        plVar2 = (longlong *)((longlong)*(int *)(param_1 + -8) * 0x70 + 8 + param_1);
        do {
            FUN_14018b900(plVar2[-7],0);
            lVar1 = plVar2[-0xe];
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            lVar1 = plVar2[-0xf];
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            iVar3 = iVar3 + -1;
            plVar2 = plVar2 + -0xe;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



longlong * FUN_14055de80(longlong *param_1,uint param_2,undefined4 param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong *plVar3;
    ulonglong **ppuVar4;
    longlong *plVar5;
    longlong lVar6;
    int iVar7;
    int iVar8;
    ulonglong *puVar9;
    ulonglong *puVar10;
    longlong *local_res8;
    undefined4 local_res18 [2];
    ulonglong local_res20;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;

    lVar6 = DAT_140c65b70;
    pplVar2 = (longlong **)(DAT_140c65b70 + 0x7c8);
    plVar5 = *pplVar2;
    do {
        local_res8 = param_1;
        local_res18[0] = param_3;
        if (plVar5 == (longlong *)0x0) {
            LAB_14055ded2:
            local_78 = &PTR_LAB_140b5e648;
            local_70 = 0;
            local_68 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_78);
            local_res20 = 0x141e19140;
            local_58 = local_78;
            local_50 = local_70;
            local_48 = local_68;
            iVar7 = FUN_1401971e0(&DAT_140c8af28,0x18,&local_res20,param_2,local_res18[0],&local_58);
            local_78 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_68);
            if (iVar7 != 0) {
                DebugBreak();
            }
            return (longlong *)0x0;
        }
        if (*(uint *)(plVar5 + 0xc) == param_2) {
            if (plVar5 != (longlong *)0x0) {
                if ((longlong *)plVar5[7] != (longlong *)0x0) {
                    *(longlong *)plVar5[7] = plVar5[8];
                }
                if (plVar5[8] != 0) {
                    *(longlong *)(plVar5[8] + 0x38) = plVar5[7];
                }
                puVar10 = (ulonglong *)0x0;
                plVar3 = (longlong *)(lVar6 + 0x7a0);
                plVar5[7] = 0;
                plVar5[8] = 0;
                *(undefined4 *)((longlong)plVar5 + 0x5c) = param_3;
                if (*plVar3 == *(longlong *)(lVar6 + 0x7a8)) {
                    FUN_1400290d0(plVar3);
                }
                local_res20 = (**(code **)(lVar6 + 0x7b8))(local_res18);
                ppuVar4 = (ulonglong **)
                        (*(longlong *)(lVar6 + 0x7b0) + (local_res20 % *(ulonglong *)(lVar6 + 0x7a8)) * 8)
                        ;
                puVar9 = (ulonglong *)FUN_14018b280(0x20);
                if (puVar9 != (ulonglong *)0x0) {
                    puVar10 = *ppuVar4;
                    *puVar9 = local_res20;
                    puVar9[1] = (ulonglong)puVar10;
                    *(undefined4 *)(puVar9 + 2) = local_res18[0];
                    puVar9[3] = (ulonglong)plVar5;
                    puVar10 = puVar9;
                }
                *ppuVar4 = puVar10;
                *plVar3 = *plVar3 + 1;
                local_res8 = *pplVar2;
                *pplVar2 = (longlong *)0x0;
                if (local_res8 == (longlong *)0x0) {
                    return plVar5;
                }
                local_res8[7] = (longlong)&local_res8;
                while (plVar3 = local_res8, plVar3 != (longlong *)0x0) {
                    if ((longlong *)plVar3[7] != (longlong *)0x0) {
                        *(longlong *)plVar3[7] = plVar3[8];
                    }
                    pplVar1 = (longlong **)(plVar3 + 8);
                    if (plVar3[8] != 0) {
                        *(longlong *)(plVar3[8] + 0x38) = plVar3[7];
                    }
                    *pplVar1 = (longlong *)0x0;
                    plVar3[7] = (longlong)pplVar2;
                    *pplVar1 = *pplVar2;
                    *pplVar2 = plVar3;
                    if (*pplVar1 != (longlong *)0x0) {
                        (*pplVar1)[7] = (longlong)pplVar1;
                    }
                    local_res8 = plVar3;
                    iVar7 = (**(code **)(*plVar5 + 8))(plVar5);
                    iVar8 = (**(code **)(*plVar3 + 8))(plVar3);
                    if ((iVar8 == iVar7) && (*(uint *)(plVar5 + 0xc) < param_2)) {
                        FUN_140561ad0(lVar6,plVar3);
                    }
                }
                return plVar5;
            }
            goto LAB_14055ded2;
        }
        plVar5 = (longlong *)plVar5[8];
    } while( true );
}



void FUN_14055e0e0(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar3 = DAT_140c65b70;
    lVar1 = *(longlong *)(DAT_140c65b70 + 0x7c8);
    lVar4 = DAT_140c65b70;
    while (DAT_140c65b70 = lVar4, lVar1 != 0) {
        FUN_140561ad0(lVar3,lVar1);
        lVar4 = DAT_140c65b70;
        lVar1 = *(longlong *)(lVar3 + 0x7c8);
    }
    uVar5 = 0;
    if (*(longlong *)(lVar3 + 0x7a8) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x7b0) + uVar5 * 8);
            while (lVar2 = lVar1, lVar2 != 0) {
                lVar1 = *(longlong *)(lVar2 + 8);
                if (lVar4 != 0) {
                    FUN_140561ad0(lVar4,*(undefined8 *)(lVar2 + 0x18));
                    lVar4 = DAT_140c65b70;
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(lVar3 + 0x7a8));
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_14055e180(ulonglong param_1)

{
    int **ppiVar1;
    longlong *plVar2;
    short sVar3;
    undefined4 uVar4;
    int *piVar5;
    char *pcVar6;
    undefined auVar7 [16];
    char *pcVar8;
    undefined4 *puVar9;
    int iVar10;
    int iVar11;
    uint uVar12;
    undefined4 *puVar13;
    ulonglong *puVar14;
    ulonglong uVar15;
    longlong lVar16;
    undefined8 *puVar17;
    int **ppiVar18;
    longlong lVar19;
    longlong lVar20;
    longlong lVar21;
    int *piVar22;
    int **ppiVar23;
    ulonglong uVar24;
    undefined8 uVar25;
    int **ppiVar26;
    float *pfVar27;
    ulonglong *puVar28;
    undefined4 *puVar29;
    undefined4 *puVar30;
    uint *puVar31;
    undefined4 *puVar32;
    undefined8 *puVar33;
    ulonglong *puVar34;
    char *pcVar35;
    char *pcVar36;
    ulonglong uVar37;
    undefined8 *puVar38;
    ulonglong uVar39;
    undefined4 *puVar40;
    int **ppiVar41;
    uint uVar42;
    short *psVar43;
    undefined4 *puVar44;
    uint uVar45;
    short *psVar46;
    bool bVar47;
    float fVar48;
    ulonglong local_res8;
    undefined8 local_res10;
    int *local_res18;
    ulonglong local_res20;
    int **local_1a8;
    longlong local_1a0;
    ulonglong local_198;
    undefined **local_190;
    undefined8 local_188;
    LPVOID local_180;
    longlong local_178;
    int **local_170;
    int **local_168;
    longlong local_160;
    ulonglong local_158;
    longlong local_150;
    ulonglong local_148;
    int **local_140;
    longlong local_138;
    longlong local_130;
    longlong local_128;
    int **local_120;
    ulonglong local_118 [2];
    undefined **local_108;
    undefined8 local_100;
    LPVOID local_f8;
    undefined **local_e8 [3];
    longlong local_d0;
    longlong local_88;
    longlong local_78;
    int local_70;

    uVar15 = 0;
    local_1a0 = 0;
    local_res8 = param_1;
    if (DAT_140c63838 == (code *)0x0) {
        iVar10 = 0;
        if (_DAT_140c64c94 == 0) {
            iVar10 = FUN_14023d1a0();
            if (iVar10 < 0) {
                iVar10 = 0;
            }
            else {
                iVar10 = (**(code **)(*DAT_140c64fe8 + 0x28))();
            }
        }
    }
    else {
        iVar10 = (*DAT_140c63838)(&PTR_u_Spell4Visual_140a6d658);
    }
    local_res10 = CONCAT44(local_res10._4_4_,iVar10);
    uVar24 = uVar15;
    if (iVar10 != 0) {
        do {
            puVar13 = (undefined4 *)0x0;
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64c94 == 0) {
                    iVar10 = FUN_14023d1a0();
                    if (iVar10 < 0) {
                        puVar13 = (undefined4 *)0x0;
                    }
                    else {
                        puVar13 = (undefined4 *)(**(code **)(*DAT_140c64fe8 + 0x20))();
                    }
                }
            }
            else {
                puVar13 = (undefined4 *)(*DAT_140c63848)(&PTR_u_Spell4Visual_140a6d658,uVar15,DAT_140c63858)
                        ;
            }
            if (((uint)puVar13[2] < 2) || (puVar13[1] != 0)) {
                if (puVar13[4] == 0) {
                    LAB_14055e32c:
                    iVar10 = 0x4e;
                    goto LAB_14055e331;
                }
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64c04 != 0) || (iVar10 = FUN_140248ca0(), iVar10 < 0)) goto LAB_14055e32c;
                    lVar16 = (**(code **)(*DAT_140c63b40 + 0x18))();
                }
                else {
                    lVar16 = (*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8,puVar13[4],DAT_140c63858);
                }
                if (lVar16 == 0) goto LAB_14055e32c;
                lVar19 = FUN_14018db00(local_1a0,uVar24 + 1,8);
                *(undefined4 **)(lVar19 + uVar24 * 8) = puVar13;
                lVar16 = local_1a0;
                if ((local_1a0 != lVar19) && (FUN_1407db590(lVar19), lVar16 = lVar19, local_1a0 != 0)) {
                    (**(code **)(*(longlong *)(local_1a0 + -0x10) + 8))(local_1a0 + -0x10);
                }
                local_1a0 = lVar16;
                uVar24 = uVar24 + 1;
            }
            else {
                iVar10 = 0x50;
                LAB_14055e331:
                plVar2 = (longlong *)(param_1 + 0x6b0);
                if (*plVar2 == *(longlong *)(param_1 + 0x6b8)) {
                    FUN_1400290d0(plVar2);
                }
                local_res18 = (int *)(**(code **)(param_1 + 0x6c8))(puVar13);
                lVar16 = *(longlong *)(param_1 + 0x6c0);
                uVar37 = (ulonglong)local_res18 % *(ulonglong *)(param_1 + 0x6b8);
                puVar14 = (ulonglong *)FUN_14018b280(0x18);
                if (puVar14 == (ulonglong *)0x0) {
                    puVar14 = (ulonglong *)0x0;
                }
                else {
                    uVar39 = *(ulonglong *)(lVar16 + uVar37 * 8);
                    *puVar14 = (ulonglong)local_res18;
                    puVar14[1] = uVar39;
                    *(undefined4 *)(puVar14 + 2) = *puVar13;
                    *(int *)((longlong)puVar14 + 0x14) = iVar10;
                }
                *(ulonglong **)(lVar16 + uVar37 * 8) = puVar14;
                *plVar2 = *plVar2 + 1;
                if (iVar10 == 0x4e) {
                    FUN_14018d540(&local_res20,&DAT_140b4f534,0x4e);
                    uVar37 = local_res20;
                }
                else {
                    FUN_14018d540(&local_198,&DAT_140b4f534,iVar10);
                    uVar37 = local_198;
                }
                param_1 = local_res8;
                if (uVar37 != 0) {
                    (**(code **)(*(longlong *)(uVar37 - 0x10) + 8))(uVar37 - 0x10);
                    param_1 = local_res8;
                }
            }
            uVar45 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar45;
        } while (uVar45 < (uint)local_res10);
    }
    uVar37 = 0;
    uVar15 = SUB168(ZEXT816(0xa0) * ZEXT816(uVar24),0);
    if (SUB168(ZEXT816(0xa0) * ZEXT816(uVar24) >> 0x40,0) != 0) {
        uVar15 = 0xffffffffffffffff;
    }
    lVar16 = uVar15 + 0x10;
    if (0xffffffffffffffef < uVar15) {
        lVar16 = -1;
    }
    puVar17 = (undefined8 *)FUN_14018b280(lVar16,0);
    if (puVar17 == (undefined8 *)0x0) {
        puVar38 = (undefined8 *)0x0;
    }
    else {
        iVar10 = (int)uVar24;
        *(int *)puVar17 = iVar10;
        puVar38 = puVar17 + 2;
        while (iVar10 = iVar10 + -1, -1 < iVar10) {
            puVar17[9] = 0;
            puVar17[0x14] = 0;
            puVar17 = puVar17 + 0x14;
        }
    }
    *(undefined8 **)(param_1 + 0x648) = puVar38;
    uVar15 = uVar37;
    if (uVar24 != 0) {
        do {
            puVar13 = *(undefined4 **)(local_1a0 + uVar37 * 8);
            local_res18 = (int *)(*(longlong *)(param_1 + 0x648) + uVar15);
            FUN_1405620a0(local_res18,local_res18,puVar13,puVar13[4],puVar13[5]);
            plVar2 = *(longlong **)(param_1 + 0x778);
            if (*plVar2 == plVar2[1]) {
                FUN_1400290d0(plVar2);
            }
            local_res10 = (*(code *)plVar2[3])(puVar13);
            lVar16 = plVar2[2];
            uVar39 = local_res10 % (ulonglong)plVar2[1];
            puVar14 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar14 == (ulonglong *)0x0) {
                puVar14 = (ulonglong *)0x0;
            }
            else {
                puVar14[1] = *(ulonglong *)(lVar16 + uVar39 * 8);
                *puVar14 = local_res10;
                *(undefined4 *)(puVar14 + 2) = *puVar13;
                puVar14[3] = (ulonglong)local_res18;
            }
            *(ulonglong **)(lVar16 + uVar39 * 8) = puVar14;
            *plVar2 = *plVar2 + 1;
            uVar37 = uVar37 + 1;
            param_1 = local_res8;
            uVar15 = uVar15 + 0xa0;
        } while (uVar37 < uVar24);
    }
    ppiVar41 = (int **)0x0;
    uVar45 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64d94 == 0) {
            iVar10 = FUN_140236320();
            if (iVar10 < 0) {
                uVar45 = 0;
            }
            else {
                uVar45 = (**(code **)(*DAT_140c653f0 + 0x28))();
            }
        }
    }
    else {
        uVar45 = (*DAT_140c63838)(&PTR_u_Spell4_140a6d0a8);
    }
    local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)uVar45;
    local_178 = 0;
    local_1a8 = (int **)0x0;
    local_res20 = 0;
    local_170 = (int **)0x0;
    local_160 = 0;
    local_198 = 0;
    local_168 = (int **)0x0;
    local_128 = 0;
    local_140 = (int **)0x0;
    local_150 = 0;
    local_158 = 0;
    local_130 = 0;
    local_res18 = (int *)((ulonglong)local_res18 & 0xffffffff00000000);
    ppiVar18 = ppiVar41;
    if (uVar45 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                ppiVar18 = ppiVar41;
                if (_DAT_140c64d94 == 0) {
                    iVar10 = FUN_140236320();
                    if (iVar10 < 0) {
                        ppiVar18 = (int **)0x0;
                    }
                    else {
                        ppiVar18 = (int **)(**(code **)(*DAT_140c653f0 + 0x20))();
                    }
                }
            }
            else {
                ppiVar18 = (int **)(*DAT_140c63848)(&PTR_u_Spell4_140a6d0a8,ppiVar18,DAT_140c63858);
            }
            local_120 = ppiVar18;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64510 == 0) && (iVar10 = FUN_140236ba0(), -1 < iVar10)) {
                    lVar16 = (**(code **)(*DAT_140c654e0 + 0x18))();
                    goto LAB_14055e68f;
                }
                LAB_14055ef5b:
                iVar10 = 5;
                LAB_14055ef60:
                plVar2 = *(longlong **)(param_1 + 0x570);
                if (*plVar2 == plVar2[1]) {
                    FUN_1400290d0(plVar2);
                }
                piVar22 = (int *)(*(code *)plVar2[3])(ppiVar18);
                lVar16 = plVar2[2];
                uVar15 = plVar2[1];
                ppiVar23 = (int **)FUN_14018b280(0x18);
                ppiVar18 = ppiVar41;
                if (ppiVar23 != (int **)0x0) {
                    piVar5 = *(int **)(lVar16 + ((ulonglong)piVar22 % uVar15) * 8);
                    *ppiVar23 = piVar22;
                    ppiVar23[1] = piVar5;
                    iVar11 = *(int *)local_120;
                    *(int *)((longlong)ppiVar23 + 0x14) = iVar10;
                    *(int *)(ppiVar23 + 2) = iVar11;
                    ppiVar18 = ppiVar23;
                }
                *(int ***)(lVar16 + ((ulonglong)piVar22 % uVar15) * 8) = ppiVar18;
                *plVar2 = *plVar2 + 1;
                FUN_14018d540(&local_138,&DAT_140b4f534,iVar10);
                if (local_138 != 0) {
                    (**(code **)(*(longlong *)(local_138 + -0x10) + 8))(local_138 + -0x10);
                }
            }
            else {
                lVar16 = (*DAT_140c63840)(&PTR_u_Spell4Base_140a6d118,*(int *)(ppiVar18 + 2),DAT_140c63858);
                LAB_14055e68f:
                if (lVar16 == 0) goto LAB_14055ef5b;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c63fe0 == 0) && (iVar10 = FUN_14023bc60(), -1 < iVar10)) {
                        lVar19 = (**(code **)(*DAT_140c64ce8 + 0x18))();
                        goto LAB_14055e6e7;
                    }
                    LAB_14055ef54:
                    iVar10 = 0x38;
                    goto LAB_14055ef60;
                }
                lVar19 = (*DAT_140c63840)(&PTR_u_Spell4TargetMechanics_140a6d540,
                                          *(undefined4 *)(lVar16 + 0xc),DAT_140c63858);
                LAB_14055e6e7:
                if (lVar19 == 0) goto LAB_14055ef54;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64e68 == 0) && (iVar10 = FUN_14023b820(), -1 < iVar10)) {
                        lVar19 = (**(code **)(*DAT_140c64b98 + 0x18))();
                        goto LAB_14055e73d;
                    }
                    LAB_14055ef4d:
                    iVar10 = 0x39;
                    goto LAB_14055ef60;
                }
                lVar19 = (*DAT_140c63840)(&PTR_u_Spell4TargetAngle_140a6d508,*(undefined4 *)(lVar16 + 0x10),
                                          DAT_140c63858);
                LAB_14055e73d:
                if (lVar19 == 0) goto LAB_14055ef4d;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64680 == 0) && (iVar10 = FUN_14023cd60(), -1 < iVar10)) {
                        lVar19 = (**(code **)(*DAT_140c64558 + 0x18))();
                        goto LAB_14055e793;
                    }
                    LAB_14055ef46:
                    iVar10 = 0x3a;
                    goto LAB_14055ef60;
                }
                lVar19 = (*DAT_140c63840)(&PTR_u_Spell4ValidTargets_140a6d620,*(undefined4 *)(lVar16 + 0x18)
                        ,DAT_140c63858);
                LAB_14055e793:
                if (lVar19 == 0) goto LAB_14055ef46;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64520 == 0) && (iVar10 = FUN_1402391e0(), -1 < iVar10)) {
                        lVar19 = (**(code **)(*DAT_140c651c8 + 0x18))();
                        goto LAB_14055e7e9;
                    }
                    LAB_14055ef3f:
                    iVar10 = 0x3c;
                    goto LAB_14055ef60;
                }
                lVar19 = (*DAT_140c63840)(&PTR_u_Spell4HitResults_140a6d310,*(undefined4 *)(lVar16 + 8),
                                          DAT_140c63858);
                LAB_14055e7e9:
                if (lVar19 == 0) goto LAB_14055ef3f;
                if (*(int *)(lVar16 + 0x14) != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64628 == 0) && (iVar10 = FUN_140239a60(), -1 < iVar10)) {
                            lVar19 = (**(code **)(*DAT_140c64d98 + 0x18))();
                            goto LAB_14055e83b;
                        }
                    }
                    else {
                        lVar19 = (*DAT_140c63840)(&PTR_u_Spell4Prerequisites_140a6d380,*(int *)(lVar16 + 0x14),
                                                  DAT_140c63858);
                        LAB_14055e83b:
                        if (lVar19 != 0) goto LAB_14055e84a;
                    }
                    iVar10 = 0x3b;
                    goto LAB_14055ef60;
                }
                LAB_14055e84a:
                if (*(int *)((longlong)ppiVar18 + 0x114) != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64cc8 == 0) && (iVar10 = FUN_140236760(), -1 < iVar10)) {
                            lVar19 = (**(code **)(*DAT_140c63e80 + 0x18))();
                            goto LAB_14055e896;
                        }
                    }
                    else {
                        lVar19 = (*DAT_140c63840)(&PTR_u_Spell4AoeTargetConstraints_140a6d0e0,
                                                  *(int *)((longlong)ppiVar18 + 0x114),DAT_140c63858);
                        LAB_14055e896:
                        if (lVar19 != 0) goto LAB_14055e8a5;
                    }
                    iVar10 = 0x3d;
                    goto LAB_14055ef60;
                }
                LAB_14055e8a5:
                piVar22 = (int *)((longlong)ppiVar18 + 300);
                ppiVar23 = ppiVar41;
                do {
                    if (*piVar22 == 0) break;
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c65494 == 0) && (iVar10 = FUN_14023da20(), -1 < iVar10)) {
                            lVar19 = (**(code **)(*DAT_140c64d48 + 0x18))();
                            goto LAB_14055e8f7;
                        }
                        LAB_14055e931:
                        iVar10 = 0x43;
                        goto LAB_14055ef60;
                    }
                    lVar19 = (*DAT_140c63840)(&PTR_u_SpellCoolDown_140a6d6c8,*piVar22,DAT_140c63858);
                    LAB_14055e8f7:
                    if (lVar19 == 0) goto LAB_14055e931;
                    ppiVar23 = (int **)((longlong)ppiVar23 + 1);
                    piVar22 = piVar22 + 1;
                } while (ppiVar23 < (int **)0x3);
                if (*(int *)(lVar16 + 0x1c) != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63cd0 != 0) || (iVar10 = FUN_1402408e0(), iVar10 < 0)) goto LAB_14055e97a;
                        lVar19 = (**(code **)(*DAT_140c63908 + 0x18))();
                    }
                    else {
                        lVar19 = (*DAT_140c63840)(&PTR_u_TargetGroup_140a6d930,*(int *)(lVar16 + 0x1c),
                                                  DAT_140c63858);
                    }
                    if (lVar19 != 0) {
                        piVar22 = (int *)(lVar19 + 0xc);
                        ppiVar23 = ppiVar41;
                        do {
                            if (*piVar22 != 0) goto LAB_14055e984;
                            ppiVar23 = (int **)((longlong)ppiVar23 + 1);
                            piVar22 = piVar22 + 1;
                        } while (ppiVar23 < (int **)0x7);
                    }
                    LAB_14055e97a:
                    iVar10 = 0x37;
                    goto LAB_14055ef60;
                }
                LAB_14055e984:
                if (*(int *)(lVar16 + 0x34) != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63cd0 != 0) || (iVar10 = FUN_1402408e0(), iVar10 < 0)) goto LAB_14055e97a;
                        lVar19 = (**(code **)(*DAT_140c63908 + 0x18))();
                    }
                    else {
                        lVar19 = (*DAT_140c63840)(&PTR_u_TargetGroup_140a6d930,*(int *)(lVar16 + 0x34),
                                                  DAT_140c63858);
                    }
                    if (lVar19 != 0) {
                        piVar22 = (int *)(lVar19 + 0xc);
                        ppiVar23 = ppiVar41;
                        do {
                            if (*piVar22 != 0) goto LAB_14055e9fc;
                            ppiVar23 = (int **)((longlong)ppiVar23 + 1);
                            piVar22 = piVar22 + 1;
                        } while (ppiVar23 < (int **)0x7);
                        iVar10 = 0x37;
                        goto LAB_14055ef60;
                    }
                    goto LAB_14055e97a;
                }
                LAB_14055e9fc:
                if (*(int *)(ppiVar18 + 0x2d) != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64980 == 0) && (iVar10 = FUN_14023afa0(), -1 < iVar10)) {
                            lVar19 = (**(code **)(*DAT_140c642f0 + 0x18))();
                            goto LAB_14055ea48;
                        }
                    }
                    else {
                        lVar19 = (*DAT_140c63840)(&PTR_u_Spell4StackGroup_140a6d498,*(int *)(ppiVar18 + 0x2d),
                                                  DAT_140c63858);
                        LAB_14055ea48:
                        if (lVar19 != 0) goto LAB_14055ea57;
                    }
                    iVar10 = 0x56;
                    goto LAB_14055ef60;
                }
                LAB_14055ea57:
                uVar24 = local_res20;
                uVar15 = local_res20 + 1;
                lVar20 = FUN_14018db00(local_178,uVar15,8);
                lVar19 = local_178;
                *(int ***)(lVar20 + uVar24 * 8) = ppiVar18;
                lVar21 = local_178;
                if ((local_178 != lVar20) && (FUN_1407db590(lVar20,local_178), lVar21 = lVar20, lVar19 != 0)
                        ) {
                    (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
                }
                local_178 = lVar21;
                ppiVar23 = (int **)((longlong)local_1a8 + 1);
                local_res20 = uVar15;
                lVar20 = FUN_14018db00(local_160,ppiVar23,8);
                lVar19 = local_160;
                *(int ***)(lVar20 + (longlong)local_1a8 * 8) = ppiVar18;
                lVar21 = local_160;
                if ((local_160 != lVar20) && (FUN_1407db590(lVar20), lVar21 = lVar20, lVar19 != 0)) {
                    (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
                }
                local_160 = lVar21;
                ppiVar1 = local_140;
                lVar19 = local_150;
                ppiVar26 = local_140;
                if ((*(int *)(lVar16 + 0x50) - 1U & 0xfffffffd) == 0) {
                    ppiVar26 = (int **)((longlong)local_140 + 1);
                    lVar20 = FUN_14018db00(local_150,ppiVar26,8);
                    lVar21 = local_150;
                    *(int ***)(lVar20 + (longlong)ppiVar1 * 8) = ppiVar18;
                    lVar19 = local_150;
                    if ((local_150 != lVar20) && (FUN_1407db590(lVar20), lVar19 = lVar20, lVar21 != 0)) {
                        (**(code **)(*(longlong *)(lVar21 + -0x10) + 8))(lVar21 + -0x10);
                    }
                }
                local_140 = ppiVar26;
                local_150 = lVar19;
                lVar19 = local_130;
                uVar24 = local_158;
                uVar15 = local_158;
                lVar21 = local_130;
                if (*(int *)(lVar16 + 0x50) == 8) {
                    uVar15 = local_158 + 1;
                    lVar16 = FUN_14018db00(local_130,uVar15,8);
                    *(int ***)(lVar16 + uVar24 * 8) = ppiVar18;
                    lVar21 = local_130;
                    if ((lVar19 != lVar16) && (FUN_1407db590(lVar16), lVar21 = lVar16, lVar19 != 0)) {
                        (**(code **)(*(longlong *)(lVar19 + -0x10) + 8))(lVar19 + -0x10);
                    }
                }
                local_130 = lVar21;
                local_158 = uVar15;
                ppiVar26 = local_170;
                uVar15 = local_198;
                if (((*(int *)((longlong)ppiVar18 + 0x34) != 0) || (*(int *)(ppiVar18 + 7) != 0)) ||
                    (uVar24 = local_198, ppiVar1 = local_170, *(int *)((longlong)ppiVar18 + 0x4c) != 0)) {
                    ppiVar1 = (int **)((longlong)local_170 + 1);
                    uVar37 = FUN_14018db00(local_198,ppiVar1,8);
                    *(int ***)(uVar37 + (longlong)ppiVar26 * 8) = ppiVar18;
                    uVar24 = local_198;
                    if ((uVar15 != uVar37) && (FUN_1407db590(uVar37), uVar24 = uVar37, uVar15 != 0)) {
                        (**(code **)(*(longlong *)(uVar15 - 0x10) + 8))(uVar15 - 0x10);
                    }
                }
                local_170 = ppiVar1;
                local_198 = uVar24;
                lVar16 = local_128;
                ppiVar1 = local_168;
                ppiVar26 = local_168;
                lVar19 = local_128;
                if (*(int *)((longlong)ppiVar18 + 0x114) != 0) {
                    ppiVar26 = (int **)((longlong)local_168 + 1);
                    lVar21 = FUN_14018db00(local_128,ppiVar26,8);
                    *(int ***)(lVar21 + (longlong)ppiVar1 * 8) = ppiVar18;
                    lVar19 = local_128;
                    if ((lVar16 != lVar21) && (FUN_1407db590(lVar21), lVar19 = lVar21, lVar16 != 0)) {
                        (**(code **)(*(longlong *)(lVar16 + -0x10) + 8))(lVar16 + -0x10);
                    }
                }
                local_128 = lVar19;
                local_168 = ppiVar26;
                local_1a8 = ppiVar23;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c63fa4 == 0) && (iVar10 = FUN_140238da0(), -1 < iVar10)) {
                        puVar31 = (uint *)(**(code **)(*DAT_140c63c48 + 0x18))();
                        goto LAB_14055ece9;
                    }
                }
                else {
                    puVar31 = (uint *)(*DAT_140c63840)(&PTR_u_Spell4GroupList_140a6d2d8);
                    LAB_14055ece9:
                    if (puVar31 != (uint *)0x0) {
                        lVar16 = 0x20;
                        do {
                            puVar31 = puVar31 + 1;
                            uVar45 = *puVar31;
                            if (uVar45 == 0) goto LAB_14055ef09;
                            uVar15 = *(ulonglong *)(param_1 + 0x720);
                            uVar37 = uVar15;
                            uVar24 = *(ulonglong *)(uVar15 + 8);
                            while (uVar24 != 0) {
                                if (*(uint *)(uVar24 + 0x20) < uVar45) {
                                    uVar24 = *(ulonglong *)(uVar24 + 0x18);
                                }
                                else {
                                    uVar37 = uVar24;
                                    uVar24 = *(ulonglong *)(uVar24 + 0x10);
                                }
                            }
                            if ((uVar37 == uVar15) || (uVar45 < *(uint *)(uVar37 + 0x20))) {
                                local_148 = uVar15;
                                puVar14 = &local_148;
                            }
                            else {
                                local_118[0] = uVar37;
                                puVar14 = local_118;
                            }
                            if (*puVar14 == uVar15) {
                                ppiVar26 = (int **)FUN_14018b280(0x20);
                                ppiVar23 = ppiVar41;
                                if (ppiVar26 != (int **)0x0) {
                                    ppiVar26[1] = (int *)0x0;
                                    ppiVar26[2] = (int *)0x0;
                                    ppiVar26[3] = (int *)0x0;
                                    ppiVar23 = ppiVar26;
                                }
                                pcVar6 = *(char **)(param_1 + 0x720);
                                uVar45 = *puVar31;
                                bVar47 = true;
                                local_190 = (undefined **)
                                        ((ulonglong)local_190 & 0xffffffff00000000 | (ulonglong)uVar45);
                                pcVar8 = pcVar6;
                                pcVar36 = *(char **)(pcVar6 + 8);
                                while (pcVar36 != (char *)0x0) {
                                    bVar47 = uVar45 < *(uint *)(pcVar36 + 0x20);
                                    pcVar8 = pcVar36;
                                    if (bVar47) {
                                        pcVar36 = *(char **)(pcVar36 + 0x10);
                                    }
                                    else {
                                        pcVar36 = *(char **)(pcVar36 + 0x18);
                                    }
                                }
                                pcVar36 = pcVar8;
                                if (bVar47) {
                                    if (pcVar8 != *(char **)(pcVar6 + 0x10)) {
                                        if ((*pcVar8 == '\0') && (*(char **)(*(longlong *)(pcVar8 + 8) + 8) == pcVar8))
                                        {
                                            pcVar36 = *(char **)(pcVar8 + 0x18);
                                        }
                                        else {
                                            pcVar36 = *(char **)(pcVar8 + 0x10);
                                            if (pcVar36 == (char *)0x0) {
                                                pcVar36 = *(char **)(pcVar8 + 8);
                                                pcVar35 = pcVar36;
                                                if (pcVar8 == *(char **)(pcVar36 + 0x10)) {
                                                    do {
                                                        pcVar36 = *(char **)(pcVar35 + 8);
                                                        bVar47 = pcVar35 == *(char **)(pcVar36 + 0x10);
                                                        pcVar35 = pcVar36;
                                                    } while (bVar47);
                                                }
                                            }
                                            else {
                                                for (pcVar35 = *(char **)(pcVar36 + 0x18); pcVar35 != (char *)0x0;
                                                     pcVar35 = *(char **)(pcVar35 + 0x18)) {
                                                    pcVar36 = pcVar35;
                                                }
                                            }
                                        }
                                        goto LAB_14055ee1d;
                                    }
                                    LAB_14055ee27:
                                    if ((pcVar8 == pcVar6) || (uVar45 < *(uint *)(pcVar8 + 0x20))) {
                                        lVar19 = FUN_14018b280(0x30);
                                        if ((ulonglong *)(lVar19 + 0x20) != (ulonglong *)0x0) {
                                            *(ulonglong *)(lVar19 + 0x20) = (ulonglong)local_190;
                                            *(int ***)(lVar19 + 0x28) = ppiVar23;
                                        }
                                        *(longlong *)(pcVar8 + 0x10) = lVar19;
                                        pcVar6 = *(char **)(param_1 + 0x720);
                                        if (pcVar8 == pcVar6) {
                                            *(longlong *)(pcVar6 + 8) = lVar19;
                                            *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x18) = lVar19;
                                        }
                                        else if (pcVar8 == *(char **)(pcVar6 + 0x10)) {
                                            *(longlong *)(pcVar6 + 0x10) = lVar19;
                                        }
                                    }
                                    else {
                                        lVar19 = FUN_14018b280(0x30);
                                        if ((ulonglong *)(lVar19 + 0x20) != (ulonglong *)0x0) {
                                            *(ulonglong *)(lVar19 + 0x20) = (ulonglong)local_190;
                                            *(int ***)(lVar19 + 0x28) = ppiVar23;
                                        }
                                        *(longlong *)(pcVar8 + 0x18) = lVar19;
                                        if (pcVar8 == *(char **)(*(longlong *)(param_1 + 0x720) + 0x18)) {
                                            *(longlong *)(*(longlong *)(param_1 + 0x720) + 0x18) = lVar19;
                                        }
                                    }
                                    *(char **)(lVar19 + 8) = pcVar8;
                                    *(undefined8 *)(lVar19 + 0x10) = 0;
                                    *(undefined8 *)(lVar19 + 0x18) = 0;
                                    FUN_1400081c0(lVar19,*(longlong *)(param_1 + 0x720) + 8);
                                    *(longlong *)(param_1 + 0x728) = *(longlong *)(param_1 + 0x728) + 1;
                                }
                                else {
                                    LAB_14055ee1d:
                                    if (*(uint *)(pcVar36 + 0x20) < uVar45) goto LAB_14055ee27;
                                }
                                piVar22 = ppiVar23[2];
                                if (piVar22 == ppiVar23[3]) {
                                    LAB_14055ef01:
                                    FUN_14017b140(ppiVar23);
                                }
                                else {
                                    if (piVar22 != (int *)0x0) {
                                        *piVar22 = *(int *)ppiVar18;
                                    }
                                    ppiVar23[2] = ppiVar23[2] + 1;
                                }
                            }
                            else {
                                ppiVar23 = *(int ***)(*puVar14 + 0x28);
                                piVar22 = ppiVar23[2];
                                if (piVar22[-1] != *(int *)ppiVar18) {
                                    if (piVar22 == ppiVar23[3]) goto LAB_14055ef01;
                                    if (piVar22 != (int *)0x0) {
                                        *piVar22 = *(int *)ppiVar18;
                                    }
                                    ppiVar23[2] = ppiVar23[2] + 1;
                                }
                            }
                            LAB_14055ef09:
                            lVar16 = lVar16 + -1;
                        } while (lVar16 != 0);
                    }
                }
            }
            uVar45 = (int)local_res18 + 1;
            ppiVar18 = (int **)(ulonglong)uVar45;
            local_res18 = (int *)((ulonglong)local_res18 & 0xffffffff00000000 | (ulonglong)uVar45);
        } while (uVar45 < (uint)local_res10);
    }
    uVar15 = local_158;
    ppiVar23 = local_168;
    ppiVar18 = local_170;
    uVar24 = SUB168(ZEXT816(0x80) * ZEXT816(local_res20),0);
    if (SUB168(ZEXT816(0x80) * ZEXT816(local_res20) >> 0x40,0) != 0) {
        uVar24 = 0xffffffffffffffff;
    }
    lVar16 = uVar24 + 8;
    if (0xfffffffffffffff7 < uVar24) {
        lVar16 = -1;
    }
    piVar22 = (int *)FUN_14018b280(lVar16,0);
    if (piVar22 == (int *)0x0) {
        puVar17 = (undefined8 *)0x0;
    }
    else {
        puVar17 = (undefined8 *)(piVar22 + 2);
        *piVar22 = (int)local_res20;
        iVar10 = (int)local_res20 + -1;
        if (-1 < iVar10) {
            puVar38 = (undefined8 *)(piVar22 + 0x1c);
            puVar33 = puVar17;
            do {
                iVar10 = iVar10 + -1;
                puVar38[-9] = 0;
                puVar38[-10] = 0;
                *puVar38 = 0;
                puVar38[-1] = 0;
                *puVar33 = &PTR_FUN_140b667e0;
                puVar38[1] = 0;
                *(undefined4 *)(puVar38 + 2) = 0;
                puVar33 = puVar33 + 0x10;
                puVar38 = puVar38 + 0x10;
            } while (-1 < iVar10);
        }
    }
    *(undefined8 **)(param_1 + 0x10) = puVar17;
    uVar25 = SUB168(ZEXT816(0x1b0) * ZEXT816(local_res20),0);
    if (SUB168(ZEXT816(0x1b0) * ZEXT816(local_res20) >> 0x40,0) != 0) {
        uVar25 = 0xffffffffffffffff;
    }
    uVar25 = FUN_14018b280(uVar25,0);
    *(undefined8 *)(param_1 + 0x7d8) = uVar25;
    uVar25 = SUB168(ZEXT816(0x10) * ZEXT816(local_1a8),0);
    if (SUB168(ZEXT816(0x10) * ZEXT816(local_1a8) >> 0x40,0) != 0) {
        uVar25 = 0xffffffffffffffff;
    }
    uVar25 = FUN_14018b280(uVar25,0);
    *(undefined8 *)(param_1 + 0x20) = uVar25;
    auVar7 = ZEXT816(0x24) * ZEXT816(ppiVar18);
    uVar25 = SUB168(auVar7,0);
    if (SUB168(auVar7 >> 0x40,0) != 0) {
        uVar25 = 0xffffffffffffffff;
    }
    uVar25 = FUN_14018b280(uVar25,0);
    *(undefined8 *)(param_1 + 0x28) = uVar25;
    uVar25 = SUB168(ZEXT816(0x28) * ZEXT816(ppiVar23),0);
    if (SUB168(ZEXT816(0x28) * ZEXT816(ppiVar23) >> 0x40,0) != 0) {
        uVar25 = 0xffffffffffffffff;
    }
    uVar25 = FUN_14018b280(uVar25,0);
    *(undefined8 *)(param_1 + 0x30) = uVar25;
    uVar25 = SUB168(ZEXT816(0x10) * ZEXT816(local_140),0);
    if (SUB168(ZEXT816(0x10) * ZEXT816(local_140) >> 0x40,0) != 0) {
        uVar25 = 0xffffffffffffffff;
    }
    uVar25 = FUN_14018b280(uVar25,0);
    *(undefined8 *)(param_1 + 0x38) = uVar25;
    auVar7 = ZEXT816(0x20) * ZEXT816(uVar15);
    uVar24 = SUB168(auVar7,0);
    if (SUB168(auVar7 >> 0x40,0) != 0) {
        uVar24 = 0xffffffffffffffff;
    }
    lVar16 = uVar24 + 8;
    if (0xfffffffffffffff7 < uVar24) {
        lVar16 = -1;
    }
    piVar22 = (int *)FUN_14018b280(lVar16,0);
    if (piVar22 == (int *)0x0) {
        puVar17 = (undefined8 *)0x0;
    }
    else {
        iVar10 = (int)uVar15;
        puVar17 = (undefined8 *)(piVar22 + 2);
        *piVar22 = iVar10;
        puVar38 = puVar17;
        while (iVar10 = iVar10 + -1, -1 < iVar10) {
            puVar38[1] = 0;
            *puVar38 = 0;
            puVar38[3] = 0;
            puVar38[2] = 0;
            puVar38 = puVar38 + 4;
        }
    }
    *(undefined8 **)(param_1 + 0x40) = puVar17;
    if (local_1a8 != (int **)0x0) {
        local_res10 = 0;
        ppiVar23 = ppiVar41;
        do {
            piVar22 = *(int **)(local_160 + (longlong)ppiVar23 * 8);
            iVar10 = *piVar22;
            puVar17 = (undefined8 *)(*(longlong *)(local_res8 + 0x20) + local_res10);
            *puVar17 = 0;
            puVar17[1] = 0;
            local_res18 = piVar22;
            if (DAT_140c63840 == (code *)0x0) {
                ppiVar18 = ppiVar41;
                if ((_DAT_140c64d94 == 0) && (iVar11 = FUN_140236320(), -1 < iVar11)) {
                    ppiVar18 = (int **)(**(code **)(*DAT_140c653f0 + 0x18))(DAT_140c653f0,iVar10);
                }
            }
            else {
                ppiVar18 = (int **)(*DAT_140c63840)(&PTR_u_Spell4_140a6d0a8,iVar10,DAT_140c63858);
            }
            if ((puVar17 != (undefined8 *)0x0) && (ppiVar18 != (int **)0x0)) {
                *(int *)puVar17 = *(int *)((longlong)ppiVar18 + 0x24);
                bVar47 = *(int *)((longlong)ppiVar18 + 300) != 0;
                if (bVar47) {
                    *(int *)((longlong)puVar17 + 4) = *(int *)((longlong)ppiVar18 + 300);
                }
                uVar15 = (ulonglong)bVar47;
                if (*(int *)(ppiVar18 + 0x26) != 0) {
                    uVar15 = (ulonglong)(bVar47 + 1);
                    *(int *)((longlong)puVar17 + (ulonglong)bVar47 * 4 + 4) = *(int *)(ppiVar18 + 0x26);
                }
                uVar24 = uVar15;
                if (*(int *)((longlong)ppiVar18 + 0x134) != 0) {
                    uVar24 = (ulonglong)((int)uVar15 + 1);
                    *(int *)((longlong)puVar17 + uVar15 * 4 + 4) = *(int *)((longlong)ppiVar18 + 0x134);
                }
                if ((uint)uVar24 < 3) {
                    puVar13 = (undefined4 *)((longlong)puVar17 + (uVar24 + 1) * 4);
                    for (uVar15 = (ulonglong)(3 - (uint)uVar24); uVar15 != 0; uVar15 = uVar15 - 1) {
                        *puVar13 = 0;
                        puVar13 = puVar13 + 1;
                    }
                }
            }
            plVar2 = *(longlong **)(local_res8 + 0x548);
            if (*plVar2 == plVar2[1]) {
                FUN_1400290d0(plVar2);
            }
            piVar22 = (int *)(*(code *)plVar2[3])(piVar22);
            lVar16 = plVar2[2];
            uVar15 = plVar2[1];
            ppiVar26 = (int **)FUN_14018b280(0x20);
            ppiVar18 = ppiVar41;
            if (ppiVar26 != (int **)0x0) {
                piVar5 = *(int **)(lVar16 + ((ulonglong)piVar22 % uVar15) * 8);
                *ppiVar26 = piVar22;
                ppiVar26[1] = piVar5;
                iVar10 = *local_res18;
                ppiVar26[3] = (int *)puVar17;
                *(int *)(ppiVar26 + 2) = iVar10;
                ppiVar18 = ppiVar26;
            }
            *(int ***)(lVar16 + ((ulonglong)piVar22 % uVar15) * 8) = ppiVar18;
            *plVar2 = *plVar2 + 1;
            local_res10 = local_res10 + 0x10;
            ppiVar23 = (int **)((longlong)ppiVar23 + 1);
            ppiVar18 = local_170;
        } while (ppiVar23 < local_1a8);
    }
    if (ppiVar18 != (int **)0x0) {
        local_res10 = 0;
        ppiVar18 = ppiVar41;
        do {
            puVar13 = *(undefined4 **)(local_198 + (longlong)ppiVar18 * 8);
            uVar4 = *puVar13;
            puVar17 = (undefined8 *)(*(longlong *)(local_res8 + 0x28) + local_res10);
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[2] = 0;
            puVar17[3] = 0;
            *(undefined4 *)(puVar17 + 4) = 0;
            if (DAT_140c63840 == (code *)0x0) {
                ppiVar23 = ppiVar41;
                if ((_DAT_140c64d94 == 0) && (iVar10 = FUN_140236320(), -1 < iVar10)) {
                    ppiVar23 = (int **)(**(code **)(*DAT_140c653f0 + 0x18))(DAT_140c653f0,uVar4);
                }
            }
            else {
                ppiVar23 = (int **)(*DAT_140c63840)(&PTR_u_Spell4_140a6d0a8,uVar4,DAT_140c63858);
            }
            if ((puVar17 != (undefined8 *)0x0) && (ppiVar23 != (int **)0x0)) {
                *(undefined4 *)puVar17 = *(undefined4 *)((longlong)ppiVar23 + 0x34);
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)((longlong)ppiVar23 + 0x44);
                *(undefined4 *)(puVar17 + 2) = *(undefined4 *)((longlong)ppiVar23 + 0x3c);
                *(undefined4 *)((longlong)puVar17 + 4) = *(undefined4 *)(ppiVar23 + 7);
                *(undefined4 *)((longlong)puVar17 + 0xc) = *(undefined4 *)(ppiVar23 + 9);
                *(undefined4 *)((longlong)puVar17 + 0x14) = *(undefined4 *)(ppiVar23 + 8);
                *(undefined4 *)(puVar17 + 3) = *(undefined4 *)((longlong)ppiVar23 + 0x4c);
                *(undefined4 *)((longlong)puVar17 + 0x1c) = *(undefined4 *)((longlong)ppiVar23 + 0x54);
                *(undefined4 *)(puVar17 + 4) = *(undefined4 *)(ppiVar23 + 10);
            }
            plVar2 = *(longlong **)(local_res8 + 0x550);
            if (*plVar2 == plVar2[1]) {
                FUN_1400290d0(plVar2);
            }
            local_res18 = (int *)(*(code *)plVar2[3])(puVar13);
            lVar16 = plVar2[2];
            uVar15 = (ulonglong)local_res18 % (ulonglong)plVar2[1];
            ppiVar26 = (int **)FUN_14018b280(0x20);
            ppiVar23 = ppiVar41;
            if (ppiVar26 != (int **)0x0) {
                piVar22 = *(int **)(lVar16 + uVar15 * 8);
                *ppiVar26 = local_res18;
                ppiVar26[1] = piVar22;
                *(undefined4 *)(ppiVar26 + 2) = *puVar13;
                ppiVar26[3] = (int *)puVar17;
                ppiVar23 = ppiVar26;
            }
            *(int ***)(lVar16 + uVar15 * 8) = ppiVar23;
            *plVar2 = *plVar2 + 1;
            local_res10 = local_res10 + 0x24;
            ppiVar18 = (int **)((longlong)ppiVar18 + 1);
        } while (ppiVar18 < local_170);
    }
    if (local_168 != (int **)0x0) {
        local_res10 = 0;
        ppiVar18 = ppiVar41;
        do {
            uVar15 = local_res10;
            puVar13 = *(undefined4 **)(local_128 + (longlong)ppiVar18 * 8);
            uVar4 = puVar13[4];
            if (DAT_140c63840 == (code *)0x0) {
                ppiVar23 = ppiVar41;
                if (_DAT_140c64510 == 0) {
                    iVar10 = FUN_140236ba0();
                    if (iVar10 < 0) {
                        ppiVar23 = (int **)0x0;
                    }
                    else {
                        ppiVar23 = (int **)(**(code **)(*DAT_140c654e0 + 0x18))(DAT_140c654e0,uVar4);
                    }
                }
            }
            else {
                ppiVar23 = (int **)(*DAT_140c63840)(&PTR_u_Spell4Base_140a6d118,uVar4,DAT_140c63858);
            }
            uVar24 = local_res8;
            piVar22 = (int *)(*(longlong *)(local_res8 + 0x30) + uVar15);
            FUN_1405698c0(ppiVar23,piVar22,*(undefined4 *)ppiVar23,puVar13[0x45],
                          *(undefined4 *)(ppiVar23 + 3));
            plVar2 = *(longlong **)(uVar24 + 0x558);
            if (*plVar2 == plVar2[1]) {
                FUN_1400290d0(plVar2);
            }
            local_res18 = (int *)(*(code *)plVar2[3])(puVar13);
            lVar16 = plVar2[2];
            uVar15 = (ulonglong)local_res18 % (ulonglong)plVar2[1];
            ppiVar26 = (int **)FUN_14018b280(0x20);
            ppiVar23 = ppiVar41;
            if (ppiVar26 != (int **)0x0) {
                piVar5 = *(int **)(lVar16 + uVar15 * 8);
                *ppiVar26 = local_res18;
                ppiVar26[1] = piVar5;
                *(undefined4 *)(ppiVar26 + 2) = *puVar13;
                ppiVar26[3] = piVar22;
                ppiVar23 = ppiVar26;
            }
            *(int ***)(lVar16 + uVar15 * 8) = ppiVar23;
            *plVar2 = *plVar2 + 1;
            local_res10 = local_res10 + 0x28;
            ppiVar18 = (int **)((longlong)ppiVar18 + 1);
        } while (ppiVar18 < local_168);
    }
    if (local_140 != (int **)0x0) {
        local_res10 = 0;
        do {
            lVar16 = 0;
            puVar13 = *(undefined4 **)(local_150 + (longlong)ppiVar41 * 8);
            uVar4 = *puVar13;
            puVar17 = (undefined8 *)(*(longlong *)(local_res8 + 0x38) + local_res10);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64d94 == 0) && (iVar10 = FUN_140236320(), -1 < iVar10)) {
                    lVar16 = (**(code **)(*DAT_140c653f0 + 0x18))(DAT_140c653f0,uVar4);
                }
            }
            else {
                lVar16 = (*DAT_140c63840)(&PTR_u_Spell4_140a6d0a8,uVar4,DAT_140c63858);
            }
            if ((puVar17 != (undefined8 *)0x0) && (lVar16 != 0)) {
                *puVar17 = 0;
                puVar17[1] = 0;
                *(undefined4 *)((longlong)puVar17 + 4) = *(undefined4 *)(lVar16 + 0x74);
                *(undefined4 *)puVar17 = *(undefined4 *)(lVar16 + 0x70);
                *(undefined4 *)(puVar17 + 1) = *(undefined4 *)(lVar16 + 0x78);
                *(undefined4 *)((longlong)puVar17 + 0xc) = *(undefined4 *)(lVar16 + 0xd4);
            }
            plVar2 = *(longlong **)(local_res8 + 0x560);
            if (*plVar2 == plVar2[1]) {
                FUN_1400290d0(plVar2);
            }
            uVar24 = (*(code *)plVar2[3])(puVar13);
            lVar16 = plVar2[2];
            uVar15 = plVar2[1];
            puVar14 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar14 == (ulonglong *)0x0) {
                puVar14 = (ulonglong *)0x0;
            }
            else {
                uVar37 = *(ulonglong *)(lVar16 + (uVar24 % uVar15) * 8);
                *puVar14 = uVar24;
                puVar14[1] = uVar37;
                uVar4 = *puVar13;
                puVar14[3] = (ulonglong)puVar17;
                *(undefined4 *)(puVar14 + 2) = uVar4;
            }
            *(ulonglong **)(lVar16 + (uVar24 % uVar15) * 8) = puVar14;
            *plVar2 = *plVar2 + 1;
            local_res10 = local_res10 + 0x10;
            ppiVar41 = (int **)((longlong)ppiVar41 + 1);
        } while (ppiVar41 < local_140);
    }
    uVar24 = 0;
    uVar15 = uVar24;
    if (local_158 != 0) {
        do {
            puVar13 = *(undefined4 **)(local_130 + uVar24 * 8);
            puVar17 = (undefined8 *)(*(longlong *)(local_res8 + 0x40) + uVar15);
            *puVar17 = 0;
            puVar17[1] = 0;
            puVar17[2] = 0;
            puVar17[3] = 0;
            plVar2 = *(longlong **)(local_res8 + 0x568);
            if (*plVar2 == plVar2[1]) {
                FUN_1400290d0(plVar2);
            }
            local_res10 = (*(code *)plVar2[3])(puVar13);
            lVar16 = plVar2[2];
            uVar37 = local_res10 % (ulonglong)plVar2[1];
            puVar14 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar14 == (ulonglong *)0x0) {
                puVar14 = (ulonglong *)0x0;
            }
            else {
                uVar39 = *(ulonglong *)(lVar16 + uVar37 * 8);
                *puVar14 = local_res10;
                puVar14[1] = uVar39;
                uVar4 = *puVar13;
                puVar14[3] = (ulonglong)puVar17;
                *(undefined4 *)(puVar14 + 2) = uVar4;
            }
            uVar24 = uVar24 + 1;
            *(ulonglong **)(lVar16 + uVar37 * 8) = puVar14;
            *plVar2 = *plVar2 + 1;
            uVar15 = uVar15 + 0x20;
        } while (uVar24 < local_158);
    }
    uVar45 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar12 = 0;
        if ((_DAT_140c64c2c == 0) && (iVar10 = FUN_14023e6e0(), -1 < iVar10)) {
            uVar12 = (**(code **)(*DAT_140c64af8 + 0x28))();
        }
    }
    else {
        uVar12 = (*DAT_140c63838)(&PTR_u_SpellPhase_140a6d770);
    }
    local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)uVar12;
    if (uVar12 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64c2c == 0) && (iVar10 = FUN_14023e6e0(), -1 < iVar10)) {
                    lVar16 = (**(code **)(*DAT_140c64af8 + 0x20))();
                    goto LAB_14055f86e;
                }
            }
            else {
                lVar16 = (*DAT_140c63848)(&PTR_u_SpellPhase_140a6d770,uVar45,DAT_140c63858);
                LAB_14055f86e:
                if (lVar16 != 0) {
                    lVar19 = *(longlong *)(local_res8 + 0x568);
                    uVar15 = (**(code **)(lVar19 + 0x18))(lVar16 + 0x10);
                    for (puVar14 = *(ulonglong **)
                            (*(longlong *)(lVar19 + 0x10) + (uVar15 % *(ulonglong *)(lVar19 + 8)) * 8)
                            ; puVar14 != (ulonglong *)0x0; puVar14 = (ulonglong *)puVar14[1]) {
                        if ((uVar15 == *puVar14) &&
                            (iVar10 = (**(code **)(lVar19 + 0x20))(lVar16 + 0x10), iVar10 != 0)) {
                            if (puVar14 + 3 != (ulonglong *)0x0) {
                                uVar15 = puVar14[3];
                                if ((*(uint *)(lVar16 + 0xc) < 0x20) &&
                                    ((*(uint *)(lVar16 + 0xc) == 0 || (*(int *)(lVar16 + 4) != 0)))) {
                                    FUN_140003460(uVar15,lVar16 + 4);
                                    FUN_140003460(uVar15 + 0x10);
                                }
                            }
                            break;
                        }
                    }
                }
            }
            uVar45 = uVar45 + 1;
        } while (uVar45 < (uint)local_res10);
    }
    uVar15 = local_res20;
    uVar24 = SUB168(ZEXT816(0x70) * ZEXT816(local_res20),0);
    if (SUB168(ZEXT816(0x70) * ZEXT816(local_res20) >> 0x40,0) != 0) {
        uVar24 = 0xffffffffffffffff;
    }
    lVar16 = uVar24 + 8;
    if (0xfffffffffffffff7 < uVar24) {
        lVar16 = -1;
    }
    piVar22 = (int *)FUN_14018b280(lVar16);
    if (piVar22 == (int *)0x0) {
        puVar17 = (undefined8 *)0x0;
    }
    else {
        iVar10 = (int)uVar15;
        puVar17 = (undefined8 *)(piVar22 + 2);
        *piVar22 = iVar10;
        puVar38 = puVar17;
        while (iVar10 = iVar10 + -1, -1 < iVar10) {
            *puVar38 = 0;
            puVar38[1] = 0;
            FUN_1407e4830(puVar38 + 2,0,0x60);
            puVar38 = puVar38 + 0xe;
        }
    }
    local_res18 = (int *)0x0;
    *(undefined8 **)(local_res8 + 0x18) = puVar17;
    if (uVar15 != 0) {
        fVar48 = 0.0;
        do {
            uVar24 = (ulonglong)local_res18;
            uVar15 = local_res8;
            lVar16 = 0;
            puVar13 = *(undefined4 **)(local_178 + (longlong)local_res18 * 8);
            uVar4 = puVar13[4];
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64510 == 0) && (iVar10 = FUN_140236ba0(), -1 < iVar10)) {
                    lVar16 = (**(code **)(*DAT_140c654e0 + 0x18))(DAT_140c654e0,uVar4);
                }
            }
            else {
                lVar16 = (*DAT_140c63840)(&PTR_u_Spell4Base_140a6d118,uVar4,DAT_140c63858);
            }
            uVar37 = uVar24 * 0x80 + *(longlong *)(uVar15 + 0x10);
            lVar19 = *(longlong *)(uVar15 + 0x7d8);
            if (*(int *)(uVar37 + 0x78) != 0) {
                FUN_14018b900(*(undefined8 *)(uVar37 + 0x70),0);
            }
            *(ulonglong *)(uVar37 + 0x70) = uVar24 * 0x1b0 + lVar19;
            psVar43 = (short *)0x0;
            *(undefined4 *)(uVar37 + 0x78) = 0;
            FUN_1405697b0(local_e8,uVar37);
            FUN_140569480(uVar15,local_e8,*puVar13);
            FUN_140568540();
            *(undefined8 *)(local_78 + 0x10) = 0;
            local_e8[0] = &PTR_FUN_140b6c708;
            FUN_140569630(local_e8);
            if (local_70 != 0) {
                FUN_14018b900(local_78);
            }
            if (local_88 != 0) {
                (**(code **)(*(longlong *)(local_88 + -0x10) + 8))(local_88 + -0x10);
            }
            if (local_d0 != 0) {
                (**(code **)(*(longlong *)(local_d0 + -0x10) + 8))(local_d0 + -0x10);
            }
            iVar10 = FUN_140568260(uVar37);
            if (iVar10 == 0) {
                lVar19 = uVar24 * 0x70 + *(longlong *)(uVar15 + 0x18);
                *(longlong *)(uVar37 + 8) = lVar19;
                *(undefined4 *)(lVar19 + 0x10) = *(undefined4 *)(lVar16 + 4);
                uVar15 = *(ulonglong *)(lVar16 + 0x48);
                psVar46 = psVar43;
                if ((uVar15 != 0) && (uVar15 <= DAT_140c3fe70)) {
                    psVar46 = (short *)(DAT_140c3fe68 + uVar15);
                }
                plVar2 = *(longlong **)(uVar37 + 8);
                local_res10 = *plVar2;
                if (psVar46 == (short *)0x0) {
                    *plVar2 = 0;
                }
                else {
                    sVar3 = *psVar46;
                    while (sVar3 != 0) {
                        psVar43 = (short *)((longlong)psVar43 + 1);
                        sVar3 = psVar46[(longlong)psVar43];
                    }
                    puVar17 = (undefined8 *)FUN_14018b280((longlong)psVar43 * 2 + 0x12,0);
                    if (puVar17 != (undefined8 *)0x0) {
                        puVar17[1] = psVar43;
                        *puVar17 = &PTR_LAB_140b55060;
                    }
                    puVar17 = puVar17 + 2;
                    FUN_1407db590(puVar17);
                    *(undefined2 *)((longlong)psVar43 * 2 + (longlong)puVar17) = 0;
                    *plVar2 = (longlong)puVar17;
                }
                psVar43 = (short *)0x0;
                if (local_res10 != 0) {
                    (**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
                }
                uVar15 = *(ulonglong *)(lVar16 + 0x48);
                psVar46 = psVar43;
                if ((uVar15 != 0) && (uVar15 <= DAT_140c3fe70)) {
                    psVar46 = (short *)(DAT_140c3fe68 + uVar15);
                }
                lVar19 = *(longlong *)(uVar37 + 8);
                local_res10 = *(ulonglong *)(lVar19 + 8);
                if (psVar46 == (short *)0x0) {
                    *(undefined8 *)(lVar19 + 8) = 0;
                }
                else {
                    sVar3 = *psVar46;
                    while (sVar3 != 0) {
                        psVar43 = (short *)((longlong)psVar43 + 1);
                        sVar3 = psVar46[(longlong)psVar43];
                    }
                    puVar17 = (undefined8 *)FUN_14018b280((longlong)psVar43 * 2 + 0x12,0);
                    if (puVar17 != (undefined8 *)0x0) {
                        puVar17[1] = psVar43;
                        *puVar17 = &PTR_LAB_140b55060;
                    }
                    puVar17 = puVar17 + 2;
                    FUN_1407db590(puVar17);
                    *(undefined2 *)((longlong)psVar43 * 2 + (longlong)puVar17) = 0;
                    *(undefined8 **)(lVar19 + 8) = puVar17;
                }
                uVar15 = 0;
                if (local_res10 != 0) {
                    (**(code **)(*(longlong *)(local_res10 - 0x10) + 8))(local_res10 - 0x10);
                }
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x14) = *(undefined4 *)(lVar16 + 0x6c);
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x18) = *(undefined4 *)(lVar16 + 0x70);
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x20) = puVar13[0x1f];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x24) = puVar13[0x3e];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x28) = puVar13[0x3f];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x2c) = puVar13[0x40];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x30) = *(undefined4 *)(lVar16 + 0x78);
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x34) = puVar13[0x41];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x38) = *(undefined4 *)(lVar16 + 0x84);
                pfVar27 = (float *)(lVar16 + 0x88);
                do {
                    if (fVar48 != *pfVar27) {
                        uVar25 = FUN_14018b280(0x28);
                        *(undefined8 *)(*(longlong *)(uVar37 + 8) + 0x40) = uVar25;
                        **(undefined4 **)(*(longlong *)(uVar37 + 8) + 0x40) = *(undefined4 *)(lVar16 + 0x88);
                        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar37 + 8) + 0x40) + 4) =
                                *(undefined4 *)(lVar16 + 0x8c);
                        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar37 + 8) + 0x40) + 8) =
                                *(undefined4 *)(lVar16 + 0x90);
                        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar37 + 8) + 0x40) + 0xc) =
                                *(undefined4 *)(lVar16 + 0x94);
                        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar37 + 8) + 0x40) + 0x10) =
                                *(undefined4 *)(lVar16 + 0x98);
                        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar37 + 8) + 0x40) + 0x14) =
                                *(undefined4 *)(lVar16 + 0x9c);
                        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar37 + 8) + 0x40) + 0x18) =
                                *(undefined4 *)(lVar16 + 0xa0);
                        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar37 + 8) + 0x40) + 0x1c) =
                                *(undefined4 *)(lVar16 + 0xa4);
                        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar37 + 8) + 0x40) + 0x20) =
                                *(undefined4 *)(lVar16 + 0xa8);
                        *(undefined4 *)(*(longlong *)(*(longlong *)(uVar37 + 8) + 0x40) + 0x24) =
                                *(undefined4 *)(lVar16 + 0xac);
                        break;
                    }
                    uVar15 = uVar15 + 1;
                    pfVar27 = pfVar27 + 1;
                } while (uVar15 < 10);
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x48) = puVar13[0x44];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x4c) = puVar13[0x42];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x50) = puVar13[0x43];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x6c) = *(undefined4 *)(lVar16 + 0x80);
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x54) = puVar13[0x29];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x5c) = puVar13[0x2b];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 100) = puVar13[0x2d];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x58) = puVar13[0x2a];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x60) = puVar13[0x2c];
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x68) = puVar13[0x2e];
                if (puVar13[5] != 0) {
                    lVar19 = *(longlong *)(local_res8 + 0x618);
                    uVar15 = (**(code **)(lVar19 + 0x18))(puVar13 + 4);
                    for (puVar14 = *(ulonglong **)
                            (*(longlong *)(lVar19 + 0x10) + (uVar15 % *(ulonglong *)(lVar19 + 8)) * 8)
                            ; puVar14 != (ulonglong *)0x0; puVar14 = (ulonglong *)puVar14[1]) {
                        if ((uVar15 == *puVar14) &&
                            (iVar10 = (**(code **)(lVar19 + 0x20))(puVar13 + 4), iVar10 != 0)) {
                            if ((ulonglong **)(puVar14 + 3) != (ulonglong **)0x0) {
                                puVar14 = (ulonglong *)puVar14[3];
                                goto LAB_14055ffad;
                            }
                            break;
                        }
                    }
                    puVar28 = (ulonglong *)FUN_14018b280(0x10);
                    puVar34 = (ulonglong *)0x0;
                    puVar14 = puVar34;
                    if (puVar28 != (ulonglong *)0x0) {
                        puVar28[1] = 0;
                        *puVar28 = 0;
                        puVar14 = puVar28;
                    }
                    plVar2 = *(longlong **)(local_res8 + 0x618);
                    if (*plVar2 == plVar2[1]) {
                        FUN_1400290d0(plVar2);
                    }
                    local_148 = (*(code *)plVar2[3])(puVar13 + 4);
                    uVar15 = local_148 % (ulonglong)plVar2[1];
                    local_res10 = plVar2[2];
                    puVar28 = (ulonglong *)FUN_14018b280(0x20);
                    if (puVar28 != (ulonglong *)0x0) {
                        uVar24 = *(ulonglong *)(local_res10 + uVar15 * 8);
                        *puVar28 = local_148;
                        puVar28[1] = uVar24;
                        *(undefined4 *)(puVar28 + 2) = puVar13[4];
                        puVar28[3] = (ulonglong)puVar14;
                        puVar34 = puVar28;
                    }
                    *(ulonglong **)(local_res10 + uVar15 * 8) = puVar34;
                    *plVar2 = *plVar2 + 1;
                    LAB_14055ffad:
                    uVar45 = puVar13[5];
                    uVar15 = (ulonglong)uVar45;
                    if (puVar14[1] < uVar15) {
                        if (puVar14[1] <= uVar15) {
                            uVar39 = FUN_14018db00(*puVar14,uVar15);
                            uVar24 = puVar14[1];
                            if (uVar24 < uVar15) {
                                puVar29 = (undefined4 *)(uVar39 + uVar24 * 4);
                                for (lVar19 = uVar45 - uVar24; lVar19 != 0; lVar19 = lVar19 + -1) {
                                    *puVar29 = 0;
                                    puVar29 = puVar29 + 1;
                                }
                            }
                            if (*puVar14 != uVar39) {
                                FUN_1407db590(uVar39);
                                uVar24 = *puVar14;
                                if (uVar24 != 0) {
                                    (**(code **)(*(longlong *)(uVar24 - 0x10) + 8))(uVar24 - 0x10);
                                }
                                *puVar14 = uVar39;
                            }
                        }
                        puVar14[1] = uVar15;
                    }
                    *(undefined4 *)(*puVar14 + (ulonglong)(puVar13[5] - 1) * 4) = *puVar13;
                }
                uVar15 = local_res8;
                uVar39 = 0;
                piVar22 = (int *)(*(longlong *)(uVar37 + 0x70) + 0x198);
                uVar24 = uVar39;
                do {
                    if (*piVar22 == 10) {
                        FUN_140003460(local_res8 + 0x7e0,lVar16);
                        break;
                    }
                    uVar24 = uVar24 + 1;
                    piVar22 = piVar22 + 1;
                } while (uVar24 < 5);
                piVar22 = (int *)(*(longlong *)(uVar37 + 0x70) + 0x198);
                do {
                    if (*piVar22 == 5) {
                        FUN_140003460(uVar15 + 0x7f0,lVar16);
                        break;
                    }
                    uVar39 = uVar39 + 1;
                    piVar22 = piVar22 + 1;
                } while (uVar39 < 5);
                *(undefined4 *)(*(longlong *)(uVar37 + 8) + 0x1c) = puVar13[0x21];
                FUN_140562560(uVar15);
                plVar2 = *(longlong **)(uVar15 + 0x540);
                if (*plVar2 == plVar2[1]) {
                    FUN_1400290d0(plVar2);
                }
                uVar24 = (*(code *)plVar2[3])(puVar13);
                lVar16 = plVar2[2];
                uVar15 = plVar2[1];
                puVar14 = (ulonglong *)FUN_14018b280(0x20);
                if (puVar14 == (ulonglong *)0x0) {
                    puVar14 = (ulonglong *)0x0;
                }
                else {
                    uVar39 = *(ulonglong *)(lVar16 + (uVar24 % uVar15) * 8);
                    *puVar14 = uVar24;
                    puVar14[1] = uVar39;
                    uVar4 = *puVar13;
                    puVar14[3] = uVar37;
                    *(undefined4 *)(puVar14 + 2) = uVar4;
                }
                *(ulonglong **)(lVar16 + (uVar24 % uVar15) * 8) = puVar14;
                *plVar2 = *plVar2 + 1;
            }
            else {
                plVar2 = *(longlong **)(uVar15 + 0x570);
                if (*plVar2 == plVar2[1]) {
                    FUN_1400290d0(plVar2);
                }
                uVar24 = (*(code *)plVar2[3])(puVar13);
                lVar16 = plVar2[2];
                uVar15 = plVar2[1];
                puVar14 = (ulonglong *)FUN_14018b280(0x18);
                if (puVar14 == (ulonglong *)0x0) {
                    puVar14 = (ulonglong *)0x0;
                }
                else {
                    uVar37 = *(ulonglong *)(lVar16 + (uVar24 % uVar15) * 8);
                    *puVar14 = uVar24;
                    puVar14[1] = uVar37;
                    uVar4 = *puVar13;
                    *(int *)((longlong)puVar14 + 0x14) = iVar10;
                    *(undefined4 *)(puVar14 + 2) = uVar4;
                }
                *(ulonglong **)(lVar16 + (uVar24 % uVar15) * 8) = puVar14;
                *plVar2 = *plVar2 + 1;
                FUN_14018d540(&local_138);
                if (local_138 != 0) {
                    (**(code **)(*(longlong *)(local_138 + -0x10) + 8))(local_138 + -0x10);
                }
            }
            local_res18 = (int *)((longlong)local_res18 + 1);
        } while (local_res18 < local_res20);
    }
    uVar15 = local_res8;
    puVar13 = (undefined4 *)0x0;
    local_1a8 = (int **)0x0;
    local_res18 = (undefined4 *)0x0;
    uVar45 = 0;
    uVar12 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c644e4 == 0) && (iVar10 = FUN_140238520(), uVar45 = uVar12, -1 < iVar10)) {
            uVar45 = (**(code **)(*DAT_140c63ba0 + 0x28))();
        }
    }
    else {
        uVar45 = (*DAT_140c63838)(&PTR_u_Spell4Effects_140a6d268);
    }
    local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar45;
    local_res10 = local_res10 & 0xffffffff00000000;
    puVar29 = puVar13;
    puVar44 = puVar13;
    puVar40 = puVar13;
    if (uVar45 != 0) {
        LAB_1405601d0:
        if (DAT_140c63848 == (code *)0x0) {
            puVar29 = puVar13;
            if (_DAT_140c644e4 == 0) {
                iVar10 = FUN_140238520();
                if (iVar10 < 0) {
                    puVar29 = (undefined4 *)0x0;
                }
                else {
                    puVar29 = (undefined4 *)(**(code **)(*DAT_140c63ba0 + 0x20))();
                }
            }
        }
        else {
            puVar29 = (undefined4 *)(*DAT_140c63848)(&PTR_u_Spell4Effects_140a6d268,puVar44,DAT_140c63858)
                    ;
        }
        iVar10 = FUN_140567af0(uVar15);
        if (iVar10 == 0) {
            lVar16 = *(longlong *)(uVar15 + 0x540);
            uVar24 = (**(code **)(lVar16 + 0x18))(puVar29 + 1);
            for (puVar14 = *(ulonglong **)
                    (*(longlong *)(lVar16 + 0x10) + (uVar24 % *(ulonglong *)(lVar16 + 8)) * 8);
                 puVar40 = local_res18, puVar14 != (ulonglong *)0x0; puVar14 = (ulonglong *)puVar14[1]) {
                if ((uVar24 == *puVar14) &&
                    (iVar10 = (**(code **)(lVar16 + 0x20))(puVar29 + 1), puVar44 = local_res18, iVar10 != 0))
                {
                    puVar40 = local_res18;
                    if (puVar14 + 3 == (ulonglong *)0x0) break;
                    piVar22 = (int *)(puVar14[3] + 0x28);
                    *piVar22 = *piVar22 + 1;
                    puVar32 = (undefined4 *)((longlong)local_1a8 + 1);
                    puVar30 = (undefined4 *)FUN_14018db00(local_res18,puVar32,8);
                    *(undefined4 **)(puVar30 + (longlong)local_1a8 * 2) = puVar29;
                    puVar40 = puVar44;
                    puVar9 = local_res18;
                    if ((puVar44 != puVar30) &&
                        (FUN_1407db590(puVar30), puVar40 = puVar30, puVar9 = puVar30,
                                puVar44 != (undefined4 *)0x0)) {
                        (**(code **)(*(longlong *)(puVar44 + -4) + 8))(puVar44 + -4);
                    }
                    local_res18 = puVar9;
                    local_1a8 = (int **)puVar32;
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c6461c != 0) || (iVar10 = FUN_140238960(), iVar10 < 0)) break;
                        puVar31 = (uint *)(**(code **)(*DAT_140c63f40 + 0x18))();
                    }
                    else {
                        puVar31 = (uint *)(*DAT_140c63840)(&PTR_u_Spell4EffectGroupList_140a6d2a0);
                    }
                    puVar44 = puVar13;
                    if (puVar31 != (uint *)0x0) goto LAB_140560383;
                    break;
                }
            }
        }
        else {
            FUN_14018d540(&local_138,&DAT_140b4f534,iVar10);
            if (local_138 != 0) {
                (**(code **)(*(longlong *)(local_138 + -0x10) + 8))(local_138 + -0x10);
            }
        }
        goto LAB_1405605a3;
    }
    LAB_1405605c6:
    uVar25 = SUB168(ZEXT816(0xa8) * ZEXT816(puVar29),0);
    if (SUB168(ZEXT816(0xa8) * ZEXT816(puVar29) >> 0x40,0) != 0) {
        uVar25 = 0xffffffffffffffff;
    }
    lVar16 = FUN_14018b280(uVar25,0);
    *(longlong *)(uVar15 + 0x48) = lVar16;
    puVar44 = puVar13;
    for (uVar24 = local_res20; uVar24 != 0; uVar24 = uVar24 - 1) {
        lVar19 = *(longlong *)(uVar15 + 0x10);
        uVar45 = *(uint *)((longlong)puVar44 + lVar19 + 0x28);
        if (uVar45 != 0) {
            *(longlong *)((longlong)puVar44 + lVar19 + 0x30) = lVar16;
            *(undefined4 *)((longlong)puVar44 + lVar19 + 0x28) = 0;
            lVar16 = lVar16 + (ulonglong)uVar45 * 0xa8;
        }
        puVar44 = puVar44 + 0x20;
    }
    puVar44 = puVar13;
    if (puVar29 != (undefined4 *)0x0) {
        do {
            puVar32 = *(undefined4 **)(puVar40 + (longlong)puVar44 * 2);
            iVar10 = FUN_1402dd480(*(undefined8 *)(uVar15 + 0x540),puVar32 + 1,&local_res8);
            if (iVar10 == 0) {
                local_188 = 0;
                local_190 = &PTR_LAB_140b5e648;
                local_180 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_190);
                local_108 = local_190;
                local_res8 = 0x141e19050;
                local_f8 = local_180;
                local_100 = local_188;
                iVar10 = FUN_1401971e0(&DAT_140c8af24,0x18,&local_res8,&local_108);
                local_190 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_180);
                if (iVar10 != 0) {
                    DebugBreak();
                }
                puVar13 = (undefined4 *)0x80004005;
                goto LAB_1405608d5;
            }
            local_res10 = (ulonglong)*(uint *)(local_res8 + 0x28) * 0xa8 +
                          *(longlong *)(local_res8 + 0x30);
            *(uint *)(local_res8 + 0x28) = *(uint *)(local_res8 + 0x28) + 1;
            FUN_140567950(local_res8,local_res10,*puVar32);
            FUN_1400b6080(*(undefined8 *)(uVar15 + 0x578),puVar32,&local_res10);
            puVar44 = (undefined4 *)((longlong)puVar44 + 1);
        } while (puVar44 < puVar29);
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar45 = uVar12;
        if ((_DAT_140c654a0 == 0) && (iVar10 = FUN_14023c0a0(), -1 < iVar10)) {
            uVar45 = (**(code **)(*DAT_140c63a88 + 0x28))();
        }
    }
    else {
        uVar45 = (*DAT_140c63838)(&PTR_u_Spell4Telegraph_140a6d578,DAT_140c63858);
    }
    puVar29 = puVar13;
    if (uVar45 != 0) {
        do {
            lVar16 = FUN_14023c360(puVar29);
            if ((((lVar16 != 0) && (local_res10 = FUN_140241c40(), local_res10 != 0)) &&
                 (*(int *)(lVar16 + 4) != 0)) &&
                (iVar10 = FUN_1402dd480(*(undefined8 *)(uVar15 + 0x540),lVar16 + 4,&local_res8),
                        iVar10 != 0)) {
                FUN_140033260(local_res8 + 0x60,&local_res10);
            }
            uVar42 = (int)puVar29 + 1;
            puVar29 = (undefined4 *)(ulonglong)uVar42;
        } while (uVar42 < uVar45);
    }
    FUN_1405677d0();
    uVar45 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        uVar42 = uVar12;
        if ((_DAT_140c63f20 == 0) && (iVar10 = FUN_140239620(), uVar42 = uVar45, -1 < iVar10)) {
            uVar42 = (**(code **)(*DAT_140c63b48 + 0x28))();
        }
    }
    else {
        uVar42 = (*DAT_140c63838)(&PTR_u_Spell4Modification_140a6d348,DAT_140c63858);
    }
    FUN_1405666e0(uVar42,uVar15 + 0x6d8);
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c6428c == 0) && (iVar10 = FUN_1402380e0(), uVar45 = uVar12, -1 < iVar10)) {
            uVar45 = (**(code **)(*DAT_140c65328 + 0x28))();
        }
    }
    else {
        uVar45 = (*DAT_140c63838)(&PTR_u_Spell4EffectModification_140a6d230,DAT_140c63858);
    }
    FUN_140566810(uVar45,uVar15 + 0x6f8);
    FUN_140560b20(uVar15);
    FUN_140560d90(uVar15);
    FUN_140560f80(uVar15);
    FUN_140561340(uVar15);
    FUN_140548db0();
    LAB_1405608d5:
    if (puVar40 != (undefined4 *)0x0) {
        (**(code **)(*(longlong *)(puVar40 + -4) + 8))(puVar40 + -4);
    }
    if (local_130 != 0) {
        (**(code **)(*(longlong *)(local_130 + -0x10) + 8))(local_130 + -0x10);
    }
    if (local_150 != 0) {
        (**(code **)(*(longlong *)(local_150 + -0x10) + 8))(local_150 + -0x10);
    }
    if (local_128 != 0) {
        (**(code **)(*(longlong *)(local_128 + -0x10) + 8))(local_128 + -0x10);
    }
    if (local_198 != 0) {
        (**(code **)(*(longlong *)(local_198 - 0x10) + 8))(local_198 - 0x10);
    }
    if (local_160 != 0) {
        (**(code **)(*(longlong *)(local_160 + -0x10) + 8))(local_160 + -0x10);
    }
    if (local_178 != 0) {
        (**(code **)(*(longlong *)(local_178 + -0x10) + 8))(local_178 + -0x10);
    }
    if (local_1a0 != 0) {
        (**(code **)(*(longlong *)(local_1a0 + -0x10) + 8))(local_1a0 + -0x10);
    }
    return puVar13;
    LAB_140560383:
    do {
        puVar31 = puVar31 + 1;
        uVar45 = *puVar31;
        puVar40 = local_res18;
        if (uVar45 == 0) break;
        uVar24 = *(ulonglong *)(uVar15 + 0x740);
        uVar39 = uVar24;
        uVar37 = *(ulonglong *)(uVar24 + 8);
        while (uVar37 != 0) {
            if (*(uint *)(uVar37 + 0x20) < uVar45) {
                uVar37 = *(ulonglong *)(uVar37 + 0x18);
            }
            else {
                uVar39 = uVar37;
                uVar37 = *(ulonglong *)(uVar37 + 0x10);
            }
        }
        if ((uVar39 == uVar24) || (uVar45 < *(uint *)(uVar39 + 0x20))) {
            local_118[0] = uVar24;
            puVar14 = local_118;
        }
        else {
            local_148 = uVar39;
            puVar14 = &local_148;
        }
        if (*puVar14 == uVar24) {
            puVar32 = (undefined4 *)FUN_14018b280(0x20);
            puVar40 = puVar13;
            if (puVar32 != (undefined4 *)0x0) {
                *(undefined8 *)(puVar32 + 2) = 0;
                *(undefined8 *)(puVar32 + 4) = 0;
                *(undefined8 *)(puVar32 + 6) = 0;
                puVar40 = puVar32;
            }
            pcVar6 = *(char **)(uVar15 + 0x740);
            uVar45 = *puVar31;
            bVar47 = true;
            local_190 = (undefined **)((ulonglong)local_190 & 0xffffffff00000000 | (ulonglong)uVar45);
            pcVar8 = pcVar6;
            pcVar36 = *(char **)(pcVar6 + 8);
            while (pcVar36 != (char *)0x0) {
                bVar47 = uVar45 < *(uint *)(pcVar36 + 0x20);
                pcVar8 = pcVar36;
                if (bVar47) {
                    pcVar36 = *(char **)(pcVar36 + 0x10);
                }
                else {
                    pcVar36 = *(char **)(pcVar36 + 0x18);
                }
            }
            pcVar36 = pcVar8;
            if (bVar47) {
                if (pcVar8 != *(char **)(pcVar6 + 0x10)) {
                    if ((*pcVar8 == '\0') && (*(char **)(*(longlong *)(pcVar8 + 8) + 8) == pcVar8)) {
                        pcVar36 = *(char **)(pcVar8 + 0x18);
                    }
                    else {
                        pcVar36 = *(char **)(pcVar8 + 0x10);
                        if (pcVar36 == (char *)0x0) {
                            pcVar36 = *(char **)(pcVar8 + 8);
                            pcVar35 = pcVar36;
                            if (pcVar8 == *(char **)(pcVar36 + 0x10)) {
                                do {
                                    pcVar36 = *(char **)(pcVar35 + 8);
                                    bVar47 = pcVar35 == *(char **)(pcVar36 + 0x10);
                                    pcVar35 = pcVar36;
                                } while (bVar47);
                            }
                        }
                        else {
                            for (pcVar35 = *(char **)(pcVar36 + 0x18); pcVar35 != (char *)0x0;
                                 pcVar35 = *(char **)(pcVar35 + 0x18)) {
                                pcVar36 = pcVar35;
                            }
                        }
                    }
                    goto LAB_14056049d;
                }
            }
            else {
                LAB_14056049d:
                if (uVar45 <= *(uint *)(pcVar36 + 0x20)) goto LAB_140560564;
            }
            if ((pcVar8 == pcVar6) || (uVar45 < *(uint *)(pcVar8 + 0x20))) {
                lVar16 = FUN_14018b280(0x30);
                if ((ulonglong *)(lVar16 + 0x20) != (ulonglong *)0x0) {
                    *(ulonglong *)(lVar16 + 0x20) = (ulonglong)local_190;
                    *(undefined4 **)(lVar16 + 0x28) = puVar40;
                }
                *(longlong *)(pcVar8 + 0x10) = lVar16;
                pcVar6 = *(char **)(uVar15 + 0x740);
                if (pcVar8 == pcVar6) {
                    *(longlong *)(pcVar6 + 8) = lVar16;
                    *(longlong *)(*(longlong *)(uVar15 + 0x740) + 0x18) = lVar16;
                }
                else if (pcVar8 == *(char **)(pcVar6 + 0x10)) {
                    *(longlong *)(pcVar6 + 0x10) = lVar16;
                }
            }
            else {
                lVar16 = FUN_14018b280(0x30);
                if ((ulonglong *)(lVar16 + 0x20) != (ulonglong *)0x0) {
                    *(ulonglong *)(lVar16 + 0x20) = (ulonglong)local_190;
                    *(undefined4 **)(lVar16 + 0x28) = puVar40;
                }
                *(longlong *)(pcVar8 + 0x18) = lVar16;
                if (pcVar8 == *(char **)(*(longlong *)(uVar15 + 0x740) + 0x18)) {
                    *(longlong *)(*(longlong *)(uVar15 + 0x740) + 0x18) = lVar16;
                }
            }
            *(char **)(lVar16 + 8) = pcVar8;
            *(undefined8 *)(lVar16 + 0x10) = 0;
            *(undefined8 *)(lVar16 + 0x18) = 0;
            FUN_1400081c0(lVar16,*(longlong *)(uVar15 + 0x740) + 8);
            *(longlong *)(uVar15 + 0x748) = *(longlong *)(uVar15 + 0x748) + 1;
        }
        else {
            puVar40 = *(undefined4 **)(*puVar14 + 0x28);
        }
        LAB_140560564:
        puVar32 = *(undefined4 **)(puVar40 + 4);
        if (puVar32 == *(undefined4 **)(puVar40 + 6)) {
            FUN_14017b140(puVar40);
        }
        else {
            if (puVar32 != (undefined4 *)0x0) {
                *puVar32 = *puVar29;
            }
            *(longlong *)(puVar40 + 4) = *(longlong *)(puVar40 + 4) + 4;
        }
        uVar45 = (int)puVar44 + 1;
        puVar44 = (undefined4 *)(ulonglong)uVar45;
        puVar40 = local_res18;
    } while (uVar45 < 0x20);
    LAB_1405605a3:
    local_res10._0_4_ = (uint)local_res10 + 1;
    puVar44 = (undefined4 *)(ulonglong)(uint)local_res10;
    local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)(uint)local_res10;
    puVar29 = (undefined4 *)local_1a8;
    if ((uint)local_res8 <= (uint)local_res10) goto LAB_1405605c6;
    goto LAB_1405601d0;
}



longlong FUN_1405609b0(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;

    if ((param_2 & 2) == 0) {
        FUN_1403d8a90();
        if ((param_2 & 1) != 0) {
            FUN_14018b900(param_1,0);
        }
        return param_1;
    }
    iVar3 = *(int *)(param_1 + -8) + -1;
    if (-1 < iVar3) {
        plVar2 = (longlong *)(param_1 + (longlong)*(int *)(param_1 + -8) * 0x80 + 0x18);
        do {
            plVar2[-0x13] = (longlong)&PTR_FUN_140b667e0;
            if (*(int *)(plVar2 + -4) != 0) {
                FUN_14018b900(plVar2[-5],0);
            }
            lVar1 = plVar2[-7];
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            lVar1 = plVar2[-0x10];
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            iVar3 = iVar3 + -1;
            plVar2 = plVar2 + -0x10;
        } while (-1 < iVar3);
    }
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1 + -8,0);
    }
    return param_1 + -8;
}



longlong FUN_140560aa0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;

    iVar1 = *(int *)(param_1 + -8);
    plVar3 = (longlong *)((longlong)iVar1 * 0x20 + param_1);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
        lVar2 = plVar3[-2];
        plVar3 = plVar3 + -4;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        lVar2 = *plVar3;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140560b20(longlong param_1)

{
    float fVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    uint uVar5;
    int iVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    undefined4 uStack52;

    uVar11 = 0;
    uVar10 = uVar11;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c63b9c != 0) || (iVar6 = FUN_14023e2a0(), iVar6 < 0)) break;
            uVar5 = (**(code **)(*DAT_140c646f0 + 0x28))();
        }
        else {
            uVar5 = (*DAT_140c63838)(&PTR_u_SpellLevel_140a6d738,DAT_140c63858);
        }
        if (uVar5 <= (uint)uVar10) break;
        if (DAT_140c63848 == (code *)0x0) {
            uVar7 = uVar11;
            if (_DAT_140c63b9c == 0) {
                iVar6 = FUN_14023e2a0();
                if (iVar6 < 0) {
                    uVar7 = 0;
                }
                else {
                    uVar7 = (**(code **)(*DAT_140c646f0 + 0x20))();
                }
            }
        }
        else {
            uVar7 = (*DAT_140c63848)(&PTR_u_SpellLevel_140a6d738,uVar10,DAT_140c63858);
        }
        if (((*(uint *)(uVar7 + 4) < 0x17) && (*(uint *)(uVar7 + 8) < 100)) &&
            (lVar8 = FUN_1407a0fd0(), lVar8 != 0)) {
            uVar2 = *(undefined4 *)(uVar7 + 8);
            uVar12 = (ulonglong)*(uint *)(uVar7 + 4);
            uVar3 = *(undefined4 *)(uVar7 + 0xc);
            fVar1 = *(float *)(uVar7 + 0x14);
            lVar4 = *(longlong *)(param_1 + 0x60 + uVar12 * 0x10);
            lVar9 = FUN_14018db00(*(undefined8 *)(param_1 + 0x58 + uVar12 * 0x10),lVar4 + 1,0x18);
            *(longlong *)(lVar9 + lVar4 * 0x18) = lVar8;
            *(ulonglong *)(lVar9 + 8 + lVar4 * 0x18) = CONCAT44((int)(longlong)fVar1,uVar2);
            *(ulonglong *)(lVar9 + 0x10 + lVar4 * 0x18) = CONCAT44(uStack52,uVar3);
            lVar8 = *(longlong *)(param_1 + 0x58 + uVar12 * 0x10);
            if (lVar8 != lVar9) {
                FUN_1407db590(lVar9,lVar8,*(longlong *)(param_1 + 0x60 + uVar12 * 0x10) * 0x18);
                lVar8 = *(longlong *)(param_1 + 0x58 + uVar12 * 0x10);
                if (lVar8 != 0) {
                    (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
                }
                *(longlong *)(param_1 + 0x58 + uVar12 * 0x10) = lVar9;
            }
            *(longlong *)(param_1 + 0x60 + uVar12 * 0x10) = lVar4 + 1;
        }
        uVar10 = (ulonglong)((uint)uVar10 + 1);
    } while( true );
    LAB_140560ce0:
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64f0c != 0) || (iVar6 = FUN_14023c920(), iVar6 < 0)) {
            return 0;
        }
        uVar5 = (**(code **)(*DAT_140c654a8 + 0x28))();
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_Spell4TierRequirements_140a6d5e8,DAT_140c63858);
    }
    if (uVar5 <= (uint)uVar11) {
        return 0;
    }
    if (DAT_140c63848 == (code *)0x0) {
        if ((_DAT_140c64f0c == 0) && (iVar6 = FUN_14023c920(), -1 < iVar6)) {
            lVar8 = (**(code **)(*DAT_140c654a8 + 0x20))(DAT_140c654a8,uVar11);
            goto LAB_140560d5f;
        }
    }
    else {
        lVar8 = (*DAT_140c63848)(&PTR_u_Spell4TierRequirements_140a6d5e8,uVar11,DAT_140c63858);
        LAB_140560d5f:
        if ((lVar8 != 0) && (*(uint *)(lVar8 + 4) < 0xb)) {
            *(undefined4 *)(param_1 + 0x4f0 + (ulonglong)*(uint *)(lVar8 + 4) * 4) =
                    *(undefined4 *)(lVar8 + 8);
        }
    }
    uVar11 = (ulonglong)((uint)uVar11 + 1);
    goto LAB_140560ce0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140560d90(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    int iVar6;
    longlong lVar7;
    undefined4 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    uint uVar11;
    undefined4 *puVar12;

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64920 == 0) {
            iVar6 = FUN_1401fc880();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c65540 + 0x28))();
            }
        }
        else {
            uVar5 = 0;
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_DistanceDamageModifier_140a6a130,DAT_140c63858);
    }
    lVar7 = FUN_14018b280();
    if (lVar7 == 0) {
        lVar7 = 0;
    }
    else if (-1 < (int)(uVar5 - 1)) {
        FUN_1407e4830(lVar7,0,(ulonglong)uVar5 * 0x2c);
    }
    uVar11 = 0;
    *(longlong *)(param_1 + 0x50) = lVar7;
    if (uVar5 != 0) {
        lVar7 = 0;
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c64920 == 0) {
                    iVar6 = FUN_1401fc880();
                    if (iVar6 < 0) {
                        puVar8 = (undefined4 *)0x0;
                    }
                    else {
                        puVar8 = (undefined4 *)(**(code **)(*DAT_140c65540 + 0x20))();
                    }
                }
                else {
                    puVar8 = (undefined4 *)0x0;
                }
            }
            else {
                puVar8 = (undefined4 *)
                        (*DAT_140c63848)(&PTR_u_DistanceDamageModifier_140a6a130,uVar11,DAT_140c63858);
            }
            puVar12 = (undefined4 *)(*(longlong *)(param_1 + 0x50) + lVar7);
            *puVar12 = *puVar8;
            plVar1 = *(longlong **)(param_1 + 0x588);
            puVar12[1] = puVar8[1];
            puVar12[6] = puVar8[6];
            puVar12[2] = puVar8[2];
            puVar12[7] = puVar8[7];
            puVar12[3] = puVar8[3];
            puVar12[8] = puVar8[8];
            puVar12[4] = puVar8[4];
            puVar12[9] = puVar8[9];
            puVar12[5] = puVar8[5];
            puVar12[10] = puVar8[10];
            if (*plVar1 == plVar1[1]) {
                FUN_1400290d0(plVar1);
            }
            uVar9 = (*(code *)plVar1[3])(puVar8);
            lVar2 = plVar1[2];
            uVar3 = plVar1[1];
            puVar10 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar10 != (ulonglong *)0x0) {
                uVar4 = *(ulonglong *)(lVar2 + (uVar9 % uVar3) * 8);
                *puVar10 = uVar9;
                puVar10[1] = uVar4;
                *(undefined4 *)(puVar10 + 2) = *puVar8;
                puVar10[3] = (ulonglong)puVar12;
            }
            *(ulonglong **)(lVar2 + (uVar9 % uVar3) * 8) = puVar10;
            *plVar1 = *plVar1 + 1;
            uVar11 = uVar11 + 1;
            lVar7 = lVar7 + 0x2c;
        } while (uVar11 < uVar5);
    }
    return 0;
}



void FUN_140560f80(longlong param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;
    undefined4 *puVar3;
    char *pcVar4;
    char *pcVar5;
    undefined8 *puVar6;
    uint *puVar7;
    longlong lVar8;
    longlong lVar9;
    char *pcVar10;
    char *pcVar11;
    ulonglong uVar12;
    undefined8 *puVar13;
    bool bVar14;
    undefined auStack216 [32];
    uint *local_b8;
    longlong local_a8;
    uint local_a0;
    undefined4 uStack156;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    ulonglong local_70;
    undefined local_68 [8];
    undefined8 local_60;
    undefined8 local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    ulonglong local_38;
    ulonglong local_30;

    local_30 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    uVar1 = *(ulonglong *)(DAT_140c65918 + 0x10);
    local_a8 = param_1;
    if (uVar1 == 0) {
        puVar13 = (undefined8 *)0x0;
    }
    else {
        puVar6 = (undefined8 *)FUN_14018b280(uVar1 * 4 + 0x10,0);
        if (puVar6 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar6[1] = uVar1;
            puVar13 = puVar6 + 2;
            *puVar6 = &PTR_LAB_140b55060;
        }
    }
    uVar12 = 0;
    FUN_1407db590(puVar13);
    if (uVar1 != 0) {
        do {
            puVar7 = (uint *)FUN_1404835c0();
            if (puVar7 != (uint *)0x0) {
                local_40 = *(undefined8 *)(puVar7 + 0x13);
                uVar2 = *(undefined8 *)(puVar7 + 0x4e);
                local_48 = 0;
                local_38 = (ulonglong)puVar7[0x50];
                puVar3 = *(undefined4 **)(puVar7 + 0x30);
                local_58 = *(undefined8 *)(puVar3 + 1);
                local_60 = CONCAT44(*puVar3,*puVar7);
                local_50 = CONCAT44(puVar7[0x12],puVar3[3]);
                lVar8 = FUN_1407a0fd0(local_a8);
                if (lVar8 != 0) {
                    FUN_140562560(local_a8,lVar8);
                }
                lVar8 = local_a8;
                local_a0 = *puVar7;
                local_98 = local_60;
                local_90 = local_58;
                local_88 = local_50;
                local_78 = local_40;
                local_70 = local_38;
                bVar14 = true;
                pcVar4 = *(char **)(local_a8 + 0x598);
                pcVar5 = pcVar4;
                pcVar11 = *(char **)(pcVar4 + 8);
                while (pcVar11 != (char *)0x0) {
                    bVar14 = local_a0 < *(uint *)(pcVar11 + 0x20);
                    pcVar5 = pcVar11;
                    if (bVar14) {
                        pcVar11 = *(char **)(pcVar11 + 0x10);
                    }
                    else {
                        pcVar11 = *(char **)(pcVar11 + 0x18);
                    }
                }
                pcVar11 = pcVar5;
                local_80 = uVar2;
                if (bVar14) {
                    if (pcVar5 == *(char **)(pcVar4 + 0x10)) {
                        local_b8 = &local_a0;
                        FUN_1405670d0(local_a8 + 0x590,local_68,0,pcVar5);
                        goto LAB_1405612cf;
                    }
                    if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)) {
                        pcVar11 = *(char **)(pcVar5 + 0x18);
                    }
                    else {
                        pcVar11 = *(char **)(pcVar5 + 0x10);
                        if (pcVar11 == (char *)0x0) {
                            pcVar11 = *(char **)(pcVar5 + 8);
                            pcVar10 = pcVar11;
                            if (pcVar5 == *(char **)(pcVar11 + 0x10)) {
                                do {
                                    pcVar11 = *(char **)(pcVar10 + 8);
                                    bVar14 = pcVar10 == *(char **)(pcVar11 + 0x10);
                                    pcVar10 = pcVar11;
                                } while (bVar14);
                            }
                        }
                        else {
                            for (pcVar10 = *(char **)(pcVar11 + 0x18); pcVar10 != (char *)0x0;
                                 pcVar10 = *(char **)(pcVar10 + 0x18)) {
                                pcVar11 = pcVar10;
                            }
                        }
                    }
                }
                if (*(uint *)(pcVar11 + 0x20) < local_a0) {
                    if ((pcVar5 == pcVar4) || (local_a0 < *(uint *)(pcVar5 + 0x20))) {
                        lVar9 = FUN_14018b280(0x58);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack156,local_a0);
                            *(undefined8 *)(lVar9 + 0x28) = local_60;
                            *(undefined8 *)(lVar9 + 0x30) = local_58;
                            *(undefined8 *)(lVar9 + 0x38) = local_50;
                            *(undefined8 *)(lVar9 + 0x40) = uVar2;
                            *(undefined8 *)(lVar9 + 0x48) = local_40;
                            *(ulonglong *)(lVar9 + 0x50) = local_38;
                        }
                        *(longlong *)(pcVar5 + 0x10) = lVar9;
                        pcVar4 = *(char **)(lVar8 + 0x598);
                        if (pcVar5 == pcVar4) {
                            *(longlong *)(pcVar4 + 8) = lVar9;
                            *(longlong *)(*(longlong *)(lVar8 + 0x598) + 0x18) = lVar9;
                        }
                        else if (pcVar5 == *(char **)(pcVar4 + 0x10)) {
                            *(longlong *)(pcVar4 + 0x10) = lVar9;
                        }
                    }
                    else {
                        lVar9 = FUN_14018b280(0x58);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack156,local_a0);
                            *(undefined8 *)(lVar9 + 0x28) = local_60;
                            *(undefined8 *)(lVar9 + 0x30) = local_58;
                            *(undefined8 *)(lVar9 + 0x38) = local_50;
                            *(undefined8 *)(lVar9 + 0x40) = uVar2;
                            *(undefined8 *)(lVar9 + 0x48) = local_40;
                            *(ulonglong *)(lVar9 + 0x50) = local_38;
                        }
                        *(longlong *)(pcVar5 + 0x18) = lVar9;
                        if (pcVar5 == *(char **)(*(longlong *)(lVar8 + 0x598) + 0x18)) {
                            *(longlong *)(*(longlong *)(lVar8 + 0x598) + 0x18) = lVar9;
                        }
                    }
                    *(char **)(lVar9 + 8) = pcVar5;
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(lVar8 + 0x5a0) = *(longlong *)(lVar8 + 0x5a0) + 1;
                }
            }
            LAB_1405612cf:
            uVar12 = uVar12 + 1;
        } while (uVar12 < uVar1);
    }
    if (puVar13 != (undefined8 *)0x0) {
        (**(code **)(puVar13[-2] + 8))(puVar13 + -2);
    }
    FUN_1407db4f0(local_30 ^ (ulonglong)auStack216);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140561340(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    char *pcVar3;
    char *pcVar4;
    uint uVar5;
    int iVar6;
    longlong lVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    char *pcVar12;
    char *pcVar13;
    uint uVar14;
    longlong *plVar15;
    longlong *plVar16;
    bool bVar17;
    longlong local_res10;
    longlong local_res18;
    undefined local_res20 [8];
    uint local_48;
    undefined4 uStack68;
    longlong *local_40;

    uVar14 = 0;
    uVar5 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c65130 == 0) {
            iVar6 = FUN_14023c4e0();
            if (iVar6 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(*DAT_140c63bd8 + 0x28))();
            }
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_Spell4Thresholds_140a6d5b0);
    }
    if (uVar5 != 0) {
        do {
            plVar15 = (longlong *)0x0;
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c65130 == 0) && (iVar6 = FUN_14023c4e0(), -1 < iVar6)) {
                    lVar7 = (**(code **)(*DAT_140c63bd8 + 0x20))();
                    goto LAB_140561409;
                }
            }
            else {
                lVar7 = (*DAT_140c63848)(&PTR_u_Spell4Thresholds_140a6d5b0,uVar14,DAT_140c63858);
                LAB_140561409:
                if (lVar7 != 0) {
                    plVar8 = (longlong *)FUN_14018b280(0x38);
                    plVar16 = plVar15;
                    if (plVar8 != (longlong *)0x0) {
                        *plVar8 = 0;
                        plVar8[1] = 0;
                        plVar8[2] = 0;
                        plVar8[3] = 0;
                        *(undefined4 *)(plVar8 + 4) = 0;
                        plVar16 = plVar8;
                    }
                    *(undefined4 *)plVar16 = *(undefined4 *)(lVar7 + 4);
                    *(undefined4 *)((longlong)plVar16 + 4) = *(undefined4 *)(lVar7 + 8);
                    *(undefined4 *)((longlong)plVar16 + 0xc) = *(undefined4 *)(lVar7 + 0xc);
                    *(undefined4 *)(plVar16 + 2) = *(undefined4 *)(lVar7 + 0x10);
                    *(undefined4 *)((longlong)plVar16 + 0x14) = *(undefined4 *)(lVar7 + 0x14);
                    *(undefined4 *)((longlong)plVar16 + 0x1c) = *(undefined4 *)(lVar7 + 0x1c);
                    *(undefined4 *)(plVar16 + 3) = *(undefined4 *)(lVar7 + 0x18);
                    *(undefined4 *)(plVar16 + 4) = *(undefined4 *)(lVar7 + 0x20);
                    *(undefined4 *)((longlong)plVar16 + 0x24) = *(undefined4 *)(lVar7 + 0x24);
                    uVar1 = *(ulonglong *)(lVar7 + 0x28);
                    plVar8 = plVar15;
                    if ((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) {
                        plVar8 = (longlong *)(DAT_140c3fe68 + uVar1);
                    }
                    plVar16[5] = (longlong)plVar8;
                    *(undefined4 *)(plVar16 + 6) = *(undefined4 *)(lVar7 + 0x30);
                    lVar2 = *(longlong *)(param_1 + 0x788);
                    lVar11 = lVar2;
                    if (*(longlong *)(lVar2 + 8) != 0) {
                        lVar9 = *(longlong *)(lVar2 + 8);
                        do {
                            if (*(uint *)(lVar9 + 0x20) < *(uint *)(lVar7 + 4)) {
                                lVar10 = *(longlong *)(lVar9 + 0x18);
                            }
                            else {
                                lVar10 = *(longlong *)(lVar9 + 0x10);
                                lVar11 = lVar9;
                            }
                            lVar9 = lVar10;
                        } while (lVar10 != 0);
                    }
                    if ((lVar11 == lVar2) || (*(uint *)(lVar7 + 4) < *(uint *)(lVar11 + 0x20))) {
                        local_res18 = lVar2;
                        plVar8 = &local_res18;
                    }
                    else {
                        local_res10 = lVar11;
                        plVar8 = &local_res10;
                    }
                    if (*plVar8 == *(longlong *)(param_1 + 0x788)) {
                        plVar8 = (longlong *)FUN_14018b280(0x10);
                        if (plVar8 != (longlong *)0x0) {
                            plVar8[1] = 0;
                            *plVar8 = 0;
                            plVar15 = plVar8;
                        }
                        pcVar3 = *(char **)(param_1 + 0x788);
                        local_48 = *(uint *)(lVar7 + 4);
                        bVar17 = true;
                        pcVar4 = pcVar3;
                        pcVar13 = *(char **)(pcVar3 + 8);
                        while (pcVar13 != (char *)0x0) {
                            bVar17 = local_48 < *(uint *)(pcVar13 + 0x20);
                            pcVar4 = pcVar13;
                            if (bVar17) {
                                pcVar13 = *(char **)(pcVar13 + 0x10);
                            }
                            else {
                                pcVar13 = *(char **)(pcVar13 + 0x18);
                            }
                        }
                        pcVar13 = pcVar4;
                        local_40 = plVar15;
                        if (bVar17) {
                            if (pcVar4 == *(char **)(pcVar3 + 0x10)) {
                                FUN_140055e80(param_1 + 0x780,local_res20,0,pcVar4,&local_48);
                                goto LAB_1405616d7;
                            }
                            if ((*pcVar4 == '\0') && (*(char **)(*(longlong *)(pcVar4 + 8) + 8) == pcVar4)) {
                                pcVar13 = *(char **)(pcVar4 + 0x18);
                            }
                            else {
                                pcVar13 = *(char **)(pcVar4 + 0x10);
                                if (pcVar13 == (char *)0x0) {
                                    pcVar13 = *(char **)(pcVar4 + 8);
                                    pcVar12 = pcVar13;
                                    if (pcVar4 == *(char **)(pcVar13 + 0x10)) {
                                        do {
                                            pcVar13 = *(char **)(pcVar12 + 8);
                                            bVar17 = pcVar12 == *(char **)(pcVar13 + 0x10);
                                            pcVar12 = pcVar13;
                                        } while (bVar17);
                                    }
                                }
                                else {
                                    for (pcVar12 = *(char **)(pcVar13 + 0x18); pcVar12 != (char *)0x0;
                                         pcVar12 = *(char **)(pcVar12 + 0x18)) {
                                        pcVar13 = pcVar12;
                                    }
                                }
                            }
                        }
                        if (*(uint *)(pcVar13 + 0x20) < local_48) {
                            if ((pcVar4 == pcVar3) || (local_48 < *(uint *)(pcVar4 + 0x20))) {
                                lVar7 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar7 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar7 + 0x20) = CONCAT44(uStack68,local_48);
                                    *(longlong **)(lVar7 + 0x28) = plVar15;
                                }
                                *(longlong *)(pcVar4 + 0x10) = lVar7;
                                pcVar3 = *(char **)(param_1 + 0x788);
                                if (pcVar4 == pcVar3) {
                                    *(longlong *)(pcVar3 + 8) = lVar7;
                                    *(longlong *)(*(longlong *)(param_1 + 0x788) + 0x18) = lVar7;
                                }
                                else if (pcVar4 == *(char **)(pcVar3 + 0x10)) {
                                    *(longlong *)(pcVar3 + 0x10) = lVar7;
                                }
                            }
                            else {
                                lVar7 = FUN_14018b280(0x30);
                                if ((undefined8 *)(lVar7 + 0x20) != (undefined8 *)0x0) {
                                    *(undefined8 *)(lVar7 + 0x20) = CONCAT44(uStack68,local_48);
                                    *(longlong **)(lVar7 + 0x28) = plVar15;
                                }
                                *(longlong *)(pcVar4 + 0x18) = lVar7;
                                if (pcVar4 == *(char **)(*(longlong *)(param_1 + 0x788) + 0x18)) {
                                    *(longlong *)(*(longlong *)(param_1 + 0x788) + 0x18) = lVar7;
                                }
                            }
                            *(char **)(lVar7 + 8) = pcVar4;
                            *(undefined8 *)(lVar7 + 0x10) = 0;
                            *(undefined8 *)(lVar7 + 0x18) = 0;
                            FUN_1400081c0(lVar7,*(longlong *)(param_1 + 0x788) + 8);
                            *(longlong *)(param_1 + 0x790) = *(longlong *)(param_1 + 0x790) + 1;
                        }
                    }
                    else {
                        plVar15 = *(longlong **)(*plVar8 + 0x28);
                    }
                    LAB_1405616d7:
                    lVar2 = plVar15[1];
                    lVar7 = lVar2 + 1;
                    lVar11 = FUN_14018db00(*plVar15,lVar7,8);
                    *(longlong **)(lVar11 + lVar2 * 8) = plVar16;
                    if (*plVar15 != lVar11) {
                        FUN_1407db590(lVar11,*plVar15,plVar15[1] << 3);
                        lVar2 = *plVar15;
                        if (lVar2 != 0) {
                            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                        }
                        *plVar15 = lVar11;
                    }
                    plVar15[1] = lVar7;
                    FUN_140566940();
                }
            }
            uVar14 = uVar14 + 1;
        } while (uVar14 < uVar5);
    }
    return 0;
}



int FUN_140561780(longlong *param_1,longlong param_2,uint param_3,longlong **param_4)

{
    longlong **pplVar1;
    longlong **pplVar2;
    ulonglong *puVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    int iVar8;
    uint uVar9;
    ulonglong uVar10;
    longlong lVar11;
    undefined8 uVar12;
    undefined8 *puVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    longlong *local_res8;
    uint local_res18 [4];

    lVar7 = DAT_140c65b70;
    lVar11 = *(longlong *)(DAT_140c65b70 + 0x570);
    local_res8 = param_1;
    local_res18[0] = param_3;
    uVar10 = (**(code **)(lVar11 + 0x18))(local_res18);
    puVar3 = *(ulonglong **)(*(longlong *)(lVar11 + 0x10) + (uVar10 % *(ulonglong *)(lVar11 + 8)) * 8)
            ;
    do {
        if (puVar3 == (ulonglong *)0x0) {
            LAB_1405617f1:
            if ((*(int *)(param_2 + 0x18) == 0) || (lVar11 = FUN_140561c30(lVar7), lVar11 == 0)) {
                lVar11 = FUN_1403d90d0(DAT_140c65898);
                puVar16 = (undefined8 *)0x0;
                if ((lVar11 != 0) &&
                    ((*(longlong *)(DAT_140c65898 + 0x78) == lVar11 &&
                      (plVar4 = *(longlong **)(DAT_140c65898 + 0x6d90), plVar4 != (longlong *)0x0)))) {
                    lVar5 = *plVar4;
                    uVar12 = FUN_1403d90d0();
                    local_res18[0] = (**(code **)(lVar5 + 0x10))(plVar4,local_res18[0],lVar11,uVar12,0);
                }
                if (lVar11 == 0) {
                    puVar13 = (undefined8 *)FUN_1407a0fd0(lVar7);
                }
                else {
                    puVar13 = (undefined8 *)FUN_1403acd90(lVar7,local_res18[0],lVar11);
                }
                if (puVar13 == (undefined8 *)0x0) {
                    iVar8 = 4;
                }
                else {
                    plVar4 = *(longlong **)(DAT_140c65898 + 0x7d18);
                    local_res8 = plVar4;
                    plVar6 = (longlong *)plVar4[1];
                    while (plVar6 != (longlong *)0x0) {
                        if (*(uint *)(plVar6 + 4) < local_res18[0]) {
                            plVar6 = (longlong *)plVar6[3];
                        }
                        else {
                            local_res8 = plVar6;
                            plVar6 = (longlong *)plVar6[2];
                        }
                    }
                    if ((local_res8 == plVar4) || (local_res18[0] < *(uint *)(local_res8 + 4))) {
                        local_res8 = plVar4;
                    }
                    puVar15 = puVar16;
                    if (local_res8 != plVar4) {
                        puVar14 = (undefined8 *)FUN_14018b280(0x88,0);
                        if (puVar14 != (undefined8 *)0x0) {
                            puVar14[4] = 0;
                            puVar14[3] = 0;
                            puVar14[0xd] = 0;
                            puVar14[0xc] = 0;
                            puVar14[0xe] = 0;
                            *(undefined4 *)(puVar14 + 0xf) = 0;
                            *(undefined4 *)(puVar14 + 0x10) = 0;
                            *puVar14 = &PTR_FUN_140b667d0;
                            puVar15 = puVar14;
                        }
                        FUN_1403d8810(puVar15,puVar13);
                        puVar13 = puVar15;
                        puVar15 = (undefined8 *)0x1;
                    }
                    lVar11 = FUN_14018b280(0x390,0);
                    if (lVar11 == 0) {
                        local_res8 = (longlong *)0x0;
                    }
                    else {
                        local_res8 = (longlong *)FUN_14053c500(lVar11);
                    }
                    plVar4 = local_res8;
                    iVar8 = FUN_14053d1f0(local_res8,param_2,puVar13,puVar15);
                    if (iVar8 == 0) {
                        if (*(int *)(param_2 + 0x18) == 0) {
                            lVar11 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_2 + 0x1c));
                            if ((lVar11 == 0) || (*(int *)(lVar11 + 0x80) != 0x18)) {
                                pplVar2 = (longlong **)(lVar7 + 0x7c8);
                                if (plVar4[7] == 0) {
                                    plVar4[7] = (longlong)pplVar2;
                                    pplVar1 = (longlong **)(plVar4 + 8);
                                    *pplVar1 = *pplVar2;
                                    *pplVar2 = plVar4;
                                    if (*pplVar1 != (longlong *)0x0) {
                                        (*pplVar1)[7] = (longlong)pplVar1;
                                    }
                                }
                                if (param_4 != (longlong **)0x0) {
                                    *param_4 = plVar4;
                                }
                                plVar4 = *pplVar2;
                                while ((plVar4 != (longlong *)0x0 &&
                                        ((uVar9 = (**(code **)(*plVar4 + 8))(plVar4), uVar9 != local_res18[0] ||
                                                                                      (uVar9 = (int)puVar16 + 1, puVar16 = (undefined8 *)(ulonglong)uVar9,
                                            uVar9 < 5))))) {
                                    plVar4 = (longlong *)plVar4[8];
                                }
                            }
                        }
                        else {
                            FUN_1400b6080(lVar7 + 0x7a0,param_2 + 0x18,&local_res8);
                        }
                        iVar8 = 0;
                    }
                    else {
                        FUN_14018d540(&local_res8,&DAT_140b4f534,iVar8);
                        if (local_res8 != (longlong *)0x0) {
                            (**(code **)(local_res8[-2] + 8))(local_res8 + -2);
                        }
                        if (plVar4 != (longlong *)0x0) {
                            (**(code **)*plVar4)(plVar4,1);
                        }
                    }
                }
            }
            else {
                FUN_14053fbf0(lVar11);
                FUN_14053d850(lVar11);
                iVar8 = 0;
            }
            return iVar8;
        }
        if ((uVar10 == *puVar3) && (iVar8 = (**(code **)(lVar11 + 0x20))(local_res18), iVar8 != 0)) {
            if (puVar3 != (ulonglong *)0xffffffffffffffec) {
                return 4;
            }
            goto LAB_1405617f1;
        }
        puVar3 = (ulonglong *)puVar3[1];
    } while( true );
}



undefined4 FUN_140561ad0(longlong param_1,longlong *param_2)

{
    ulonglong *puVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong **ppuVar6;
    undefined4 local_res10 [2];

    if (param_2 == (longlong *)0x0) {
        return 4;
    }
    FUN_14053d140(param_2);
    iVar2 = (**(code **)(*param_2 + 8))(param_2);
    iVar3 = FUN_1403982a0(DAT_140c65898);
    if (iVar2 != iVar3) {
        iVar2 = (**(code **)(*param_2 + 8))(param_2);
        iVar3 = FUN_1403982a0();
        if (iVar2 != iVar3) goto LAB_140561b84;
        iVar2 = DAT_140c45de0;
        if (*DAT_140c63750 < DAT_140c45de0) {
            iVar2 = *DAT_140c63750;
        }
        if (*(int *)(&DAT_140c45df0 + (longlong)iVar2 * 4) != 1) goto LAB_140561b84;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SprintStateUpdated",&DAT_1409efb34,0);
    LAB_140561b84:
    if (param_2[7] == 0) {
        local_res10[0] = *(undefined4 *)((longlong)param_2 + 0x5c);
        uVar4 = (**(code **)(param_1 + 0x7b8))(local_res10);
        uVar5 = uVar4 % *(ulonglong *)(param_1 + 0x7a8);
        ppuVar6 = (ulonglong **)(*(longlong *)(param_1 + 0x7b0) + uVar5 * 8);
        puVar1 = *(ulonglong **)(*(longlong *)(param_1 + 0x7b0) + uVar5 * 8);
        while (puVar1 != (ulonglong *)0x0) {
            if ((uVar4 == **ppuVar6) &&
                (iVar2 = (**(code **)(param_1 + 0x7c0))(local_res10,*ppuVar6 + 2), iVar2 != 0)) {
                puVar1 = *ppuVar6;
                *ppuVar6 = (ulonglong *)puVar1[1];
                FUN_14018b900(puVar1,0);
                *(longlong *)(param_1 + 0x7a0) = *(longlong *)(param_1 + 0x7a0) + -1;
                break;
            }
            ppuVar6 = (ulonglong **)(*ppuVar6 + 1);
            puVar1 = *ppuVar6;
        }
    }
    (**(code **)*param_2)(param_2,1);
    return 0;
}



ulonglong FUN_140561c30(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x7b8))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x7b0) + (uVar3 % *(ulonglong *)(param_1 + 0x7a8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x7c0))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



undefined8 FUN_140561cc0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65b70 + 0x700);
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
    return 0;
}



bool FUN_140561e60(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = FUN_1403d90d0(DAT_140c65898);
    lVar2 = FUN_1403d90d0(DAT_140c65898,param_3);
    if ((lVar1 != 0) && (lVar2 != 0)) {
        lVar1 = FUN_14047dca0(lVar1);
        lVar2 = FUN_14047dca0(lVar2);
        if ((lVar1 != 0) && (lVar2 != 0)) {
            if (lVar1 == lVar2) {
                return true;
            }
            if (*(longlong *)(&DAT_000018a0 + lVar2) != 0) {
                return *(longlong *)(&DAT_000018a0 + lVar1) == *(longlong *)(&DAT_000018a0 + lVar2);
            }
        }
    }
    return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405620a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                   undefined4 param_5)

{
    undefined4 uVar1;
    bool bVar2;
    int iVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    float *pfVar6;
    undefined4 *puVar7;
    int *piVar8;
    longlong lVar9;
    ulonglong uVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    FUN_14018b900(*(undefined8 *)(param_2 + 0xe));
    FUN_14018b900(*(undefined8 *)(param_2 + 0x24));
    FUN_1407e4830(param_2,0,0xa0);
    bVar2 = false;
    if (param_3 != (undefined4 *)0x0) {
        uVar10 = 0;
        *param_2 = *param_3;
        param_2[1] = param_3[1];
        param_2[2] = param_3[2];
        param_2[3] = param_3[6];
        param_2[4] = param_3[3];
        piVar8 = param_3 + 0x13;
        do {
            if (((piVar8[-0xc] != 0) || (*piVar8 != 0)) || (piVar8[-6] != 0)) {
                puVar4 = (undefined4 *)FUN_14018b280(0x80);
                if (puVar4 == (undefined4 *)0x0) {
                    puVar4 = (undefined4 *)0x0;
                }
                else {
                    FUN_1407e4830(puVar4,0,0x80);
                }
                *(undefined4 **)(param_2 + 0x24) = puVar4;
                *puVar4 = param_3[7];
                puVar4[1] = param_3[8];
                puVar4[2] = param_3[9];
                puVar4[3] = param_3[10];
                puVar4[4] = param_3[0xb];
                puVar4[5] = param_3[0xc];
                lVar9 = *(longlong *)(param_2 + 0x24);
                *(undefined4 *)(lVar9 + 0x18) = param_3[0x13];
                *(undefined4 *)(lVar9 + 0x1c) = param_3[0x14];
                *(undefined4 *)(lVar9 + 0x20) = param_3[0x15];
                *(undefined4 *)(lVar9 + 0x24) = param_3[0x16];
                *(undefined4 *)(lVar9 + 0x28) = param_3[0x17];
                *(undefined4 *)(lVar9 + 0x2c) = param_3[0x18];
                lVar9 = *(longlong *)(param_2 + 0x24);
                *(undefined4 *)(lVar9 + 0x30) = param_3[0xd];
                *(undefined4 *)(lVar9 + 0x34) = param_3[0xe];
                *(undefined4 *)(lVar9 + 0x38) = param_3[0xf];
                *(undefined4 *)(lVar9 + 0x3c) = param_3[0x10];
                *(undefined4 *)(lVar9 + 0x40) = param_3[0x11];
                *(undefined4 *)(lVar9 + 0x44) = param_3[0x12];
                bVar2 = true;
                break;
            }
            uVar10 = uVar10 + 1;
            piVar8 = piVar8 + 1;
            bVar2 = false;
        } while (uVar10 < 6);
        param_2[0x26] = param_3[0x19];
        param_2[5] = param_3[0x20];
        param_2[0xc] = param_3[0x21];
    }
    if (DAT_140c63840 == (code *)0x0) {
        if (_DAT_140c64c04 != 0) {
            return;
        }
        iVar3 = FUN_140248ca0();
        if (iVar3 < 0) {
            return;
        }
        puVar4 = (undefined4 *)(**(code **)(*DAT_140c63b40 + 0x18))();
    }
    else {
        puVar4 = (undefined4 *)(*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8,param_4,DAT_140c63858);
    }
    if (puVar4 == (undefined4 *)0x0) {
        return;
    }
    if (DAT_140c63840 == (code *)0x0) {
        if (_DAT_140c64c04 == 0) {
            iVar3 = FUN_140248ca0();
            if (iVar3 < 0) {
                puVar5 = (undefined4 *)0x0;
            }
            else {
                puVar5 = (undefined4 *)(**(code **)(*DAT_140c63b40 + 0x18))();
            }
        }
        else {
            puVar5 = (undefined4 *)0x0;
        }
    }
    else {
        puVar5 = (undefined4 *)(*DAT_140c63840)(&PTR_u_VisualEffect_140a6dff8,param_5,DAT_140c63858);
    }
    uVar1 = *puVar4;
    param_2[7] = param_5;
    uVar10 = 0;
    fVar14 = 0.0;
    param_2[6] = uVar1;
    param_2[8] = puVar4[1];
    param_2[9] = puVar4[2];
    param_2[10] = puVar4[3];
    param_2[0xb] = puVar4[0x25];
    param_2[0xd] = puVar4[0x16];
    pfVar6 = (float *)(puVar4 + 0x11);
    do {
        if (*pfVar6 != 0.0) {
            puVar7 = (undefined4 *)FUN_14018b280();
            *(undefined4 **)(param_2 + 0xe) = puVar7;
            *puVar7 = puVar4[0x11];
            *(undefined4 *)(*(longlong *)(param_2 + 0xe) + 4) = puVar4[0x12];
            *(undefined4 *)(*(longlong *)(param_2 + 0xe) + 8) = puVar4[0x13];
            *(undefined4 *)(*(longlong *)(param_2 + 0xe) + 0xc) = puVar4[0x14];
            *(undefined4 *)(*(longlong *)(param_2 + 0xe) + 0x10) = puVar4[0x15];
            break;
        }
        uVar10 = uVar10 + 1;
        pfVar6 = pfVar6 + 1;
    } while (uVar10 < 5);
    param_2[0x10] = puVar4[10];
    param_2[0x11] = puVar4[0xb];
    param_2[0x12] = puVar4[0xc];
    param_2[0x13] = puVar4[4];
    param_2[0x14] = puVar4[5];
    param_2[0x15] = puVar4[8];
    fVar13 = DAT_140c3b438;
    uVar10 = *(ulonglong *)(puVar4 + 6);
    if (uVar10 == 0) {
        lVar9 = 0;
    }
    else if (DAT_140c3fe70 < uVar10) {
        lVar9 = 0;
    }
    else {
        lVar9 = DAT_140c3fe68 + uVar10;
    }
    *(longlong *)(param_2 + 0x16) = lVar9;
    param_2[0x18] = puVar4[0xd];
    fVar13 = fVar13 * 0.005555556;
    fVar11 = fVar13 * (float)puVar4[0xe];
    param_2[0x19] = fVar11;
    fVar12 = fVar13 * (float)puVar4[0xf];
    param_2[0x1a] = fVar12;
    fVar13 = fVar13 * (float)puVar4[0x10];
    param_2[0x1b] = fVar13;
    param_2[0x22] = puVar4[0x26];
    if (param_3 == (undefined4 *)0x0) {
        param_2[0x20] = 0xffffffff;
    }
    else {
        param_2[0x18] = (float)param_3[0x1e] * (float)param_2[0x18];
        fVar12 = (float)param_3[0x1d];
        fVar11 = (float)param_3[0x1c];
        *(undefined (*) [16])(param_2 + 0x1c) = CONCAT412(fVar14,*(undefined (*) [12])(param_3 + 0x1b));
        param_2[0x20] = param_3[0x1a];
        param_2[0x21] = param_3[0x1f];
        fVar13 = fVar14;
    }
    if (puVar5 != (undefined4 *)0x0) {
        puVar4 = puVar5;
    }
    if (!bVar2) {
        if ((puVar4[0x23] == 0) && (puVar4[0x24] == 0)) {
            uVar10 = 0;
            piVar8 = puVar4 + 0x17;
            do {
                if ((piVar8[6] != 0) || (*piVar8 != 0)) goto LAB_14056245d;
                uVar10 = uVar10 + 1;
                piVar8 = piVar8 + 1;
            } while (uVar10 < 6);
            goto LAB_14056250c;
        }
        LAB_14056245d:
        lVar9 = FUN_14018b280(fVar11,fVar12,fVar13,0x80,0);
        if (lVar9 == 0) {
            lVar9 = 0;
        }
        else {
            FUN_1407e4830(lVar9,0,0x80);
        }
        *(longlong *)(param_2 + 0x24) = lVar9;
    }
    lVar9 = *(longlong *)(param_2 + 0x24);
    *(undefined4 *)(lVar9 + 0x48) = puVar4[0x1d];
    *(undefined4 *)(lVar9 + 0x4c) = puVar4[0x1e];
    *(undefined4 *)(lVar9 + 0x50) = puVar4[0x1f];
    *(undefined4 *)(lVar9 + 0x54) = puVar4[0x20];
    *(undefined4 *)(lVar9 + 0x58) = puVar4[0x21];
    *(undefined4 *)(lVar9 + 0x5c) = puVar4[0x22];
    lVar9 = *(longlong *)(param_2 + 0x24);
    *(undefined4 *)(lVar9 + 0x60) = puVar4[0x17];
    *(undefined4 *)(lVar9 + 100) = puVar4[0x18];
    *(undefined4 *)(lVar9 + 0x68) = puVar4[0x19];
    *(undefined4 *)(lVar9 + 0x6c) = puVar4[0x1a];
    *(undefined4 *)(lVar9 + 0x70) = puVar4[0x1b];
    *(undefined4 *)(lVar9 + 0x74) = puVar4[0x1c];
    *(undefined4 *)(*(longlong *)(param_2 + 0x24) + 0x78) = puVar4[0x23];
    *(undefined4 *)(*(longlong *)(param_2 + 0x24) + 0x7c) = puVar4[0x24];
    LAB_14056250c:
    if (puVar5 != (undefined4 *)0x0) {
        param_2[0xd] = param_2[0xd] & 0xffffdff7;
        param_2[0xd] = param_2[0xd] | puVar5[0x16] & 0x2008;
    }
    if (param_3 != (undefined4 *)0x0) {
        if ((*(byte *)(param_3 + 3) & 8) != 0) {
            param_2[0xd] = param_2[0xd] | 1;
        }
        if ((param_3[3] & 0x800) != 0) {
            param_2[0xd] = param_2[0xd] | 0x200;
        }
    }
    return;
}



void FUN_140562560(longlong param_1,longlong param_2,uint param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    longlong lVar4;
    byte bVar5;
    undefined8 uVar6;
    int iVar7;
    uint uVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint local_res18 [2];
    undefined auStack360 [32];
    undefined8 *local_148;
    uint local_138;
    uint local_130;
    uint uStack300;
    undefined4 local_128;
    uint uStack292;
    undefined8 local_118;
    longlong local_110;
    uint local_108;
    undefined4 uStack260;
    ulonglong local_100;
    uint local_f8;
    ulonglong local_f0;
    uint local_e8;
    int local_e4;
    longlong local_e0;
    longlong local_d8;
    longlong local_d0;
    undefined local_c8 [144];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack360;
    local_res18[0] = param_3;
    local_d8 = param_2;
    if (param_3 != 0) {
        iVar7 = 0;
        local_e4 = 0;
        lVar9 = FUN_14023d840(param_3);
        local_e0 = lVar9;
        if (lVar9 != 0) {
            local_138 = (uint)(*(int *)(*(longlong *)(param_2 + 0x70) + 0x18) == 8);
            if (local_138 == 0) {
                uVar11 = *(ulonglong *)(param_1 + 0x678);
                local_f0 = uVar11;
                uVar2 = *(ulonglong *)(uVar11 + 8);
                while (uVar2 != 0) {
                    if (*(uint *)(uVar2 + 0x20) < param_3) {
                        uVar2 = *(ulonglong *)(uVar2 + 0x18);
                    }
                    else {
                        local_f0 = uVar2;
                        uVar2 = *(ulonglong *)(uVar2 + 0x10);
                    }
                }
            }
            else {
                uVar11 = *(ulonglong *)(param_1 + 0x698);
                local_f0 = uVar11;
                uVar2 = *(ulonglong *)(uVar11 + 8);
                while (uVar2 != 0) {
                    if (*(uint *)(uVar2 + 0x20) < param_3) {
                        uVar2 = *(ulonglong *)(uVar2 + 0x18);
                    }
                    else {
                        local_f0 = uVar2;
                        uVar2 = *(ulonglong *)(uVar2 + 0x10);
                    }
                }
            }
            if ((local_f0 == uVar11) || (param_3 < *(uint *)(local_f0 + 0x20))) {
                local_f0 = uVar11;
            }
            if (local_f0 == uVar11) {
                local_d0 = (longlong)(int)local_138;
                local_f0 = 0;
                local_130 = local_138;
                uStack300 = param_3;
                LAB_1405626a0:
                lVar1 = lVar9 + local_f0 * 4;
                if ((*(int *)(lVar9 + 4 + local_f0 * 4) != 0) &&
                    (lVar10 = FUN_14023d400(), lVar9 = local_e0, lVar10 != 0)) {
                    lVar9 = *(longlong *)(param_1 + 0x778);
                    uVar11 = (**(code **)(lVar9 + 0x18))(lVar1 + 4);
                    for (puVar3 = *(ulonglong **)
                            (*(longlong *)(lVar9 + 0x10) + (uVar11 % *(ulonglong *)(lVar9 + 8)) * 8);
                         puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[1]) {
                        if ((uVar11 == *puVar3) && (iVar7 = (**(code **)(lVar9 + 0x20))(), iVar7 != 0)) {
                            if (puVar3 + 3 != (ulonglong *)0x0) {
                                uVar11 = puVar3[3];
                                lVar9 = local_e0;
                                iVar7 = local_e4;
                                if (7 < *(uint *)(lVar10 + 8)) goto LAB_140563674;
                                uVar13 = 0;
                                local_f8 = 0;
                                if (((local_d0 == 0) || (*(longlong *)(local_d8 + 0x58) == 0)) ||
                                    ((*(uint *)(lVar10 + 8) - 2 & 0xfffffffd) != 0)) goto LAB_1405627d2;
                                uVar8 = *(uint *)(lVar10 + 0x68);
                                uVar12 = *(int *)(*(longlong *)(local_d8 + 0x58) + 8) - 1;
                                local_f8 = uVar12;
                                if (uVar8 == 0xffffffff) goto LAB_1405627d2;
                                if (uVar8 == 0) {
                                    uVar14 = 0xff;
                                }
                                else {
                                    uVar14 = 0;
                                    uVar13 = uVar8;
                                    if ((short)uVar8 == 0) {
                                        uVar14 = 0x10;
                                        uVar13 = uVar8 >> 0x10;
                                    }
                                    if ((char)uVar13 == '\0') {
                                        uVar14 = (uint)(byte)((char)uVar14 + 8);
                                        uVar13 = uVar13 >> 8;
                                    }
                                    if ((uVar13 & 0xf) == 0) {
                                        uVar14 = (uint)(byte)((char)uVar14 + 4);
                                        uVar13 = uVar13 >> 4;
                                    }
                                    if ((uVar13 & 3) == 0) {
                                        uVar14 = (uint)(byte)((char)uVar14 + 2);
                                        uVar13 = uVar13 >> 2;
                                    }
                                    if ((uVar13 & 1) == 0) {
                                        uVar14 = (uint)(byte)((char)uVar14 + 1);
                                    }
                                }
                                uVar13 = uVar12;
                                if (uVar14 < uVar12) {
                                    uVar13 = uVar14;
                                }
                                local_f8 = uVar13;
                                if (uVar12 <= uVar13) goto LAB_1405627d2;
                                goto LAB_1405627c0;
                            }
                            break;
                        }
                    }
                    local_e4 = 0x4e;
                    lVar9 = local_e0;
                    iVar7 = 0x4e;
                }
                goto LAB_140563674;
            }
        }
    }
    goto LAB_140563911;
    while (uVar12 = uVar12 - 1, local_f8 = uVar13, uVar13 < uVar12) {
        LAB_1405627c0:
        local_f8 = uVar12;
        if ((uVar8 >> (uVar12 & 0x1f) & 1) != 0) break;
    }
    LAB_1405627d2:
    bVar5 = (byte)uVar13 & 0x1f;
    uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
    uVar8 = local_f8;
    local_e8 = uVar12;
    if (uVar13 <= local_f8) {
        LAB_1405627f0:
        if ((*(uint *)(lVar10 + 0x68) & uVar12) != 0) {
            uVar8 = *(uint *)(lVar10 + 8);
            local_e8 = uVar12;
            if (uVar8 != 2) {
                uVar6 = CONCAT44(uStack300,local_130);
                if ((*(byte *)(lVar10 + 4) & 1) != 0) {
                    local_128 = 0;
                    local_110 = (ulonglong)uVar8 << 0x20;
                    uStack292 = uVar8;
                    local_118 = uVar6;
                    local_108 = uVar13;
                    local_100 = uVar11;
                    FUN_140566350();
                }
                if ((*(byte *)(lVar10 + 4) & 2) != 0) {
                    uStack292 = *(uint *)(lVar10 + 8);
                    local_128 = 1;
                    local_110 = CONCAT44(uStack292,1);
                    local_118 = uVar6;
                    local_108 = uVar13;
                    local_100 = uVar11;
                    FUN_140566350();
                }
                if ((*(byte *)(lVar10 + 4) & 4) != 0) {
                    uStack292 = *(uint *)(lVar10 + 8);
                    local_128 = 2;
                    local_110 = CONCAT44(uStack292,2);
                    local_118 = uVar6;
                    local_108 = uVar13;
                    local_100 = uVar11;
                    FUN_140566350();
                }
                if ((*(byte *)(lVar10 + 4) & 8) != 0) {
                    uStack292 = *(uint *)(lVar10 + 8);
                    local_128 = 3;
                    local_110 = CONCAT44(uStack292,3);
                    local_118 = uVar6;
                    local_108 = uVar13;
                    local_100 = uVar11;
                    FUN_140566350();
                }
                if ((*(byte *)(lVar10 + 4) & 0x20) != 0) {
                    uStack292 = *(uint *)(lVar10 + 8);
                    local_128 = 5;
                    local_110 = CONCAT44(uStack292,5);
                    local_118 = uVar6;
                    local_108 = uVar13;
                    local_100 = uVar11;
                    FUN_140566350();
                }
                if ((*(byte *)(lVar10 + 4) & 0x40) != 0) {
                    uStack292 = *(uint *)(lVar10 + 8);
                    local_128 = 6;
                    local_110 = CONCAT44(uStack292,6);
                    local_118 = uVar6;
                    local_108 = uVar13;
                    local_100 = uVar11;
                    FUN_140566350();
                }
                uVar8 = local_f8;
                if ((*(byte *)(lVar10 + 4) & 0x80) != 0) {
                    uStack292 = *(uint *)(lVar10 + 8);
                    local_128 = 7;
                    local_110 = CONCAT44(uStack292,7);
                    local_118 = uVar6;
                    local_108 = uVar13;
                    local_100 = uVar11;
                    FUN_140566350();
                    uVar8 = local_f8;
                }
                goto LAB_14056365e;
            }
            if ((*(byte *)(lVar10 + 4) & 1) != 0) {
                local_128 = 0;
                if ((*(byte *)(lVar10 + 0xc) & 1) == 0) {
                    lVar9 = *(longlong *)(param_1 + 0x658);
                    lVar1 = lVar9;
                    lVar4 = *(longlong *)(lVar9 + 8);
                    while (lVar4 != 0) {
                        lVar1 = lVar4;
                        if (local_138 == 0) {
                            if (*(int *)(lVar4 + 0x20) == 0) {
                                LAB_140562866:
                                if ((*(uint *)(lVar4 + 0x24) <= param_3) &&
                                    ((*(uint *)(lVar4 + 0x24) < param_3 ||
                                      ((*(int *)(lVar4 + 0x28) < 1 &&
                                        ((*(int *)(lVar4 + 0x28) < 0 ||
                                          ((*(int *)(lVar4 + 0x2c) < 3 &&
                                            ((*(int *)(lVar4 + 0x2c) < 2 || (*(uint *)(lVar4 + 0x30) <= uVar13)))))))))))
                                        ) goto LAB_14056288e;
                            }
                            lVar4 = *(longlong *)(lVar4 + 0x10);
                        }
                        else {
                            if (*(int *)(lVar4 + 0x20) != 0) goto LAB_140562866;
                            LAB_14056288e:
                            lVar4 = *(longlong *)(lVar4 + 0x18);
                        }
                    }
                    if (lVar1 == lVar9) {
                        LAB_1405628ac:
                        uStack292 = uVar8;
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = 0x200000000;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x10) = lVar9;
                        lVar4 = *(longlong *)(param_1 + 0x658);
                        if (lVar1 == lVar4) {
                            *(longlong *)(lVar4 + 8) = lVar9;
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                        else if (lVar1 == *(longlong *)(lVar4 + 0x10)) {
                            *(longlong *)(lVar4 + 0x10) = lVar9;
                        }
                    }
                    else {
                        if (local_138 == 0) {
                            if (*(int *)(lVar1 + 0x20) == 0) goto LAB_140562908;
                            goto LAB_1405628ac;
                        }
                        if (*(int *)(lVar1 + 0x20) != 0) {
                            LAB_140562908:
                            if ((param_3 < *(uint *)(lVar1 + 0x24)) ||
                                ((param_3 <= *(uint *)(lVar1 + 0x24) &&
                                  ((0 < *(int *)(lVar1 + 0x28) ||
                                    ((-1 < *(int *)(lVar1 + 0x28) &&
                                      ((2 < *(int *)(lVar1 + 0x2c) ||
                                        ((1 < *(int *)(lVar1 + 0x2c) && (uVar13 < *(uint *)(lVar1 + 0x30)))))))))))))
                                goto LAB_1405628ac;
                        }
                        uStack292 = uVar8;
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = 0x200000000;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x18) = lVar9;
                        if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18)) {
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                    }
                    *(longlong *)(lVar9 + 8) = lVar1;
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(param_1 + 0x660) = *(longlong *)(param_1 + 0x660) + 1;
                }
                if ((*(byte *)(lVar10 + 0xc) & 2) == 0) {
                    lVar9 = *(longlong *)(param_1 + 0x658);
                    uStack292 = 4;
                    uVar6 = CONCAT44(4,local_128);
                    lVar1 = lVar9;
                    lVar4 = *(longlong *)(lVar9 + 8);
                    while (lVar4 != 0) {
                        lVar1 = lVar4;
                        if (local_138 == 0) {
                            if (*(int *)(lVar4 + 0x20) == 0) {
                                LAB_1405629f6:
                                if ((*(uint *)(lVar4 + 0x24) <= param_3) &&
                                    ((*(uint *)(lVar4 + 0x24) < param_3 ||
                                      ((*(int *)(lVar4 + 0x28) < 1 &&
                                        ((*(int *)(lVar4 + 0x28) < 0 ||
                                          ((*(int *)(lVar4 + 0x2c) < 5 &&
                                            ((*(int *)(lVar4 + 0x2c) < 4 || (*(uint *)(lVar4 + 0x30) <= uVar13)))))))))))
                                        ) goto LAB_140562a1e;
                            }
                            lVar4 = *(longlong *)(lVar4 + 0x10);
                        }
                        else {
                            if (*(int *)(lVar4 + 0x20) != 0) goto LAB_1405629f6;
                            LAB_140562a1e:
                            lVar4 = *(longlong *)(lVar4 + 0x18);
                        }
                    }
                    if (lVar1 == lVar9) {
                        LAB_140562a3c:
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x10) = lVar9;
                        lVar4 = *(longlong *)(param_1 + 0x658);
                        if (lVar1 == lVar4) {
                            *(longlong *)(lVar4 + 8) = lVar9;
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                        else if (lVar1 == *(longlong *)(lVar4 + 0x10)) {
                            *(longlong *)(lVar4 + 0x10) = lVar9;
                        }
                    }
                    else {
                        if (local_138 == 0) {
                            if (*(int *)(lVar1 + 0x20) == 0) goto LAB_140562a98;
                            goto LAB_140562a3c;
                        }
                        if (*(int *)(lVar1 + 0x20) != 0) {
                            LAB_140562a98:
                            if ((param_3 < *(uint *)(lVar1 + 0x24)) ||
                                ((param_3 <= *(uint *)(lVar1 + 0x24) &&
                                  ((0 < *(int *)(lVar1 + 0x28) ||
                                    ((-1 < *(int *)(lVar1 + 0x28) &&
                                      ((4 < *(int *)(lVar1 + 0x2c) ||
                                        ((3 < *(int *)(lVar1 + 0x2c) && (uVar13 < *(uint *)(lVar1 + 0x30)))))))))))))
                                goto LAB_140562a3c;
                        }
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x18) = lVar9;
                        if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18)) {
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                    }
                    *(longlong *)(lVar9 + 8) = lVar1;
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(param_1 + 0x660) = *(longlong *)(param_1 + 0x660) + 1;
                }
            }
            if ((*(byte *)(lVar10 + 4) & 2) != 0) {
                local_128 = 1;
                if ((*(byte *)(lVar10 + 0xc) & 1) == 0) {
                    lVar9 = *(longlong *)(param_1 + 0x658);
                    uStack292 = *(uint *)(lVar10 + 8);
                    uVar6 = CONCAT44(uStack292,1);
                    lVar1 = lVar9;
                    lVar4 = *(longlong *)(lVar9 + 8);
                    while (lVar4 != 0) {
                        lVar1 = lVar4;
                        if (local_138 == 0) {
                            if (*(int *)(lVar4 + 0x20) == 0) {
                                LAB_140562b96:
                                if ((*(uint *)(lVar4 + 0x24) <= param_3) &&
                                    ((*(uint *)(lVar4 + 0x24) < param_3 ||
                                      ((*(int *)(lVar4 + 0x28) < 2 &&
                                        ((*(int *)(lVar4 + 0x28) < 1 ||
                                          ((*(int *)(lVar4 + 0x2c) <= (int)uStack292 &&
                                            ((*(int *)(lVar4 + 0x2c) < (int)uStack292 ||
                                              (*(uint *)(lVar4 + 0x30) <= uVar13)))))))))))) goto LAB_140562bbe;
                            }
                            lVar4 = *(longlong *)(lVar4 + 0x10);
                        }
                        else {
                            if (*(int *)(lVar4 + 0x20) != 0) goto LAB_140562b96;
                            LAB_140562bbe:
                            lVar4 = *(longlong *)(lVar4 + 0x18);
                        }
                    }
                    if (lVar1 == lVar9) {
                        LAB_140562bdc:
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x10) = lVar9;
                        lVar4 = *(longlong *)(param_1 + 0x658);
                        if (lVar1 == lVar4) {
                            *(longlong *)(lVar4 + 8) = lVar9;
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                        else if (lVar1 == *(longlong *)(lVar4 + 0x10)) {
                            *(longlong *)(lVar4 + 0x10) = lVar9;
                        }
                    }
                    else {
                        if (local_138 == 0) {
                            if (*(int *)(lVar1 + 0x20) == 0) goto LAB_140562c38;
                            goto LAB_140562bdc;
                        }
                        if (*(int *)(lVar1 + 0x20) != 0) {
                            LAB_140562c38:
                            if ((param_3 < *(uint *)(lVar1 + 0x24)) ||
                                ((param_3 <= *(uint *)(lVar1 + 0x24) &&
                                  ((1 < *(int *)(lVar1 + 0x28) ||
                                    ((0 < *(int *)(lVar1 + 0x28) &&
                                      (((int)uStack292 < *(int *)(lVar1 + 0x2c) ||
                                        (((int)uStack292 <= *(int *)(lVar1 + 0x2c) &&
                                          (uVar13 < *(uint *)(lVar1 + 0x30))))))))))))) goto LAB_140562bdc;
                        }
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x18) = lVar9;
                        if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18)) {
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                    }
                    *(longlong *)(lVar9 + 8) = lVar1;
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(param_1 + 0x660) = *(longlong *)(param_1 + 0x660) + 1;
                }
                if ((*(byte *)(lVar10 + 0xc) & 2) == 0) {
                    lVar9 = *(longlong *)(param_1 + 0x658);
                    uStack292 = 4;
                    uVar6 = CONCAT44(4,local_128);
                    lVar1 = lVar9;
                    lVar4 = *(longlong *)(lVar9 + 8);
                    while (lVar4 != 0) {
                        lVar1 = lVar4;
                        if (local_138 == 0) {
                            if (*(int *)(lVar4 + 0x20) == 0) {
                                LAB_140562d1d:
                                if ((*(uint *)(lVar4 + 0x24) <= param_3) &&
                                    ((*(uint *)(lVar4 + 0x24) < param_3 ||
                                      ((*(int *)(lVar4 + 0x28) < 2 &&
                                        ((*(int *)(lVar4 + 0x28) < 1 ||
                                          ((*(int *)(lVar4 + 0x2c) < 5 &&
                                            ((*(int *)(lVar4 + 0x2c) < 4 || (*(uint *)(lVar4 + 0x30) <= uVar13)))))))))))
                                        ) goto LAB_140562d46;
                            }
                            lVar4 = *(longlong *)(lVar4 + 0x10);
                        }
                        else {
                            if (*(int *)(lVar4 + 0x20) != 0) goto LAB_140562d1d;
                            LAB_140562d46:
                            lVar4 = *(longlong *)(lVar4 + 0x18);
                        }
                    }
                    if (lVar1 == lVar9) {
                        LAB_140562d64:
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x10) = lVar9;
                        lVar4 = *(longlong *)(param_1 + 0x658);
                        if (lVar1 == lVar4) {
                            *(longlong *)(lVar4 + 8) = lVar9;
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                        else if (lVar1 == *(longlong *)(lVar4 + 0x10)) {
                            *(longlong *)(lVar4 + 0x10) = lVar9;
                        }
                    }
                    else {
                        if (local_138 == 0) {
                            if (*(int *)(lVar1 + 0x20) == 0) goto LAB_140562dc0;
                            goto LAB_140562d64;
                        }
                        if (*(int *)(lVar1 + 0x20) != 0) {
                            LAB_140562dc0:
                            if ((param_3 < *(uint *)(lVar1 + 0x24)) ||
                                ((param_3 <= *(uint *)(lVar1 + 0x24) &&
                                  ((1 < *(int *)(lVar1 + 0x28) ||
                                    ((0 < *(int *)(lVar1 + 0x28) &&
                                      ((4 < *(int *)(lVar1 + 0x2c) ||
                                        ((3 < *(int *)(lVar1 + 0x2c) && (uVar13 < *(uint *)(lVar1 + 0x30)))))))))))))
                                goto LAB_140562d64;
                        }
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x18) = lVar9;
                        if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18)) {
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                    }
                    *(longlong *)(lVar9 + 8) = lVar1;
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(param_1 + 0x660) = *(longlong *)(param_1 + 0x660) + 1;
                }
            }
            if ((*(byte *)(lVar10 + 4) & 4) != 0) {
                local_128 = 2;
                if ((*(byte *)(lVar10 + 0xc) & 1) == 0) {
                    lVar9 = *(longlong *)(param_1 + 0x658);
                    uStack292 = *(uint *)(lVar10 + 8);
                    uVar6 = CONCAT44(uStack292,2);
                    lVar1 = lVar9;
                    lVar4 = *(longlong *)(lVar9 + 8);
                    while (lVar4 != 0) {
                        lVar1 = lVar4;
                        if (local_138 == 0) {
                            if (*(int *)(lVar4 + 0x20) == 0) {
                                LAB_140562eb9:
                                if ((*(uint *)(lVar4 + 0x24) <= param_3) &&
                                    ((*(uint *)(lVar4 + 0x24) < param_3 ||
                                      ((*(int *)(lVar4 + 0x28) < 3 &&
                                        ((*(int *)(lVar4 + 0x28) < 2 ||
                                          ((*(int *)(lVar4 + 0x2c) <= (int)uStack292 &&
                                            ((*(int *)(lVar4 + 0x2c) < (int)uStack292 ||
                                              (*(uint *)(lVar4 + 0x30) <= uVar13)))))))))))) goto LAB_140562ee1;
                            }
                            lVar4 = *(longlong *)(lVar4 + 0x10);
                        }
                        else {
                            if (*(int *)(lVar4 + 0x20) != 0) goto LAB_140562eb9;
                            LAB_140562ee1:
                            lVar4 = *(longlong *)(lVar4 + 0x18);
                        }
                    }
                    if (lVar1 == lVar9) {
                        LAB_140562eff:
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x10) = lVar9;
                        lVar4 = *(longlong *)(param_1 + 0x658);
                        if (lVar1 == lVar4) {
                            *(longlong *)(lVar4 + 8) = lVar9;
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                        else if (lVar1 == *(longlong *)(lVar4 + 0x10)) {
                            *(longlong *)(lVar4 + 0x10) = lVar9;
                        }
                    }
                    else {
                        if (local_138 == 0) {
                            if (*(int *)(lVar1 + 0x20) == 0) goto LAB_140562f5b;
                            goto LAB_140562eff;
                        }
                        if (*(int *)(lVar1 + 0x20) != 0) {
                            LAB_140562f5b:
                            if ((param_3 < *(uint *)(lVar1 + 0x24)) ||
                                ((param_3 <= *(uint *)(lVar1 + 0x24) &&
                                  ((2 < *(int *)(lVar1 + 0x28) ||
                                    ((1 < *(int *)(lVar1 + 0x28) &&
                                      (((int)uStack292 < *(int *)(lVar1 + 0x2c) ||
                                        (((int)uStack292 <= *(int *)(lVar1 + 0x2c) &&
                                          (uVar13 < *(uint *)(lVar1 + 0x30))))))))))))) goto LAB_140562eff;
                        }
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x18) = lVar9;
                        if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18)) {
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                    }
                    *(longlong *)(lVar9 + 8) = lVar1;
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(param_1 + 0x660) = *(longlong *)(param_1 + 0x660) + 1;
                }
                if ((*(byte *)(lVar10 + 0xc) & 2) == 0) {
                    lVar9 = *(longlong *)(param_1 + 0x658);
                    uStack292 = 4;
                    uVar6 = CONCAT44(4,local_128);
                    lVar1 = lVar9;
                    lVar4 = *(longlong *)(lVar9 + 8);
                    while (lVar4 != 0) {
                        lVar1 = lVar4;
                        if (local_138 == 0) {
                            if (*(int *)(lVar4 + 0x20) == 0) {
                                LAB_140563046:
                                if ((*(uint *)(lVar4 + 0x24) <= param_3) &&
                                    ((*(uint *)(lVar4 + 0x24) < param_3 ||
                                      ((*(int *)(lVar4 + 0x28) < 3 &&
                                        ((*(int *)(lVar4 + 0x28) < 2 ||
                                          ((*(int *)(lVar4 + 0x2c) < 5 &&
                                            ((*(int *)(lVar4 + 0x2c) < 4 || (*(uint *)(lVar4 + 0x30) <= uVar13)))))))))))
                                        ) goto LAB_14056306f;
                            }
                            lVar4 = *(longlong *)(lVar4 + 0x10);
                        }
                        else {
                            if (*(int *)(lVar4 + 0x20) != 0) goto LAB_140563046;
                            LAB_14056306f:
                            lVar4 = *(longlong *)(lVar4 + 0x18);
                        }
                    }
                    if (lVar1 == lVar9) {
                        LAB_14056308d:
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x10) = lVar9;
                        lVar4 = *(longlong *)(param_1 + 0x658);
                        if (lVar1 == lVar4) {
                            *(longlong *)(lVar4 + 8) = lVar9;
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                        else if (lVar1 == *(longlong *)(lVar4 + 0x10)) {
                            *(longlong *)(lVar4 + 0x10) = lVar9;
                        }
                    }
                    else {
                        if (local_138 == 0) {
                            if (*(int *)(lVar1 + 0x20) == 0) goto LAB_1405630e9;
                            goto LAB_14056308d;
                        }
                        if (*(int *)(lVar1 + 0x20) != 0) {
                            LAB_1405630e9:
                            if ((param_3 < *(uint *)(lVar1 + 0x24)) ||
                                ((param_3 <= *(uint *)(lVar1 + 0x24) &&
                                  ((2 < *(int *)(lVar1 + 0x28) ||
                                    ((1 < *(int *)(lVar1 + 0x28) &&
                                      ((4 < *(int *)(lVar1 + 0x2c) ||
                                        ((3 < *(int *)(lVar1 + 0x2c) && (uVar13 < *(uint *)(lVar1 + 0x30)))))))))))))
                                goto LAB_14056308d;
                        }
                        local_108 = uVar13;
                        lVar9 = FUN_14018b280(0x40);
                        if ((undefined8 *)(lVar9 + 0x20) != (undefined8 *)0x0) {
                            *(undefined8 *)(lVar9 + 0x20) = CONCAT44(uStack300,local_130);
                            *(undefined8 *)(lVar9 + 0x28) = uVar6;
                            *(ulonglong *)(lVar9 + 0x30) = CONCAT44(uStack260,local_108);
                            *(ulonglong *)(lVar9 + 0x38) = uVar11;
                        }
                        *(longlong *)(lVar1 + 0x18) = lVar9;
                        if (lVar1 == *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18)) {
                            *(longlong *)(*(longlong *)(param_1 + 0x658) + 0x18) = lVar9;
                        }
                    }
                    *(longlong *)(lVar9 + 8) = lVar1;
                    *(undefined8 *)(lVar9 + 0x10) = 0;
                    *(undefined8 *)(lVar9 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(param_1 + 0x660) = *(longlong *)(param_1 + 0x660) + 1;
                }
            }
            if ((*(byte *)(lVar10 + 4) & 8) != 0) {
                uVar6 = CONCAT44(uStack300,local_130);
                local_128 = 3;
                if ((*(byte *)(lVar10 + 0xc) & 1) == 0) {
                    uStack292 = *(uint *)(lVar10 + 8);
                    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x658) + 8);
                    local_110 = CONCAT44(uStack292,3);
                    joined_r0x0001405631d6:
                    do {
                        if (lVar9 == 0) goto LAB_14056323d;
                        if (local_138 != 0) {
                            if (*(int *)(lVar9 + 0x20) != 0) goto LAB_1405631f6;
                            goto LAB_140563234;
                        }
                        if (*(int *)(lVar9 + 0x20) != 0) {
                            LAB_14056322a:
                            lVar9 = *(longlong *)(lVar9 + 0x10);
                            goto joined_r0x0001405631d6;
                        }
                        LAB_1405631f6:
                        if (param_3 < *(uint *)(lVar9 + 0x24)) goto LAB_14056322a;
                        if (param_3 <= *(uint *)(lVar9 + 0x24)) {
                            if (3 < *(int *)(lVar9 + 0x28)) goto LAB_14056322a;
                            if (2 < *(int *)(lVar9 + 0x28)) {
                                if ((int)uStack292 < *(int *)(lVar9 + 0x2c)) goto LAB_14056322a;
                                if (((int)uStack292 <= *(int *)(lVar9 + 0x2c)) && (uVar13 < *(uint *)(lVar9 + 0x30))
                                        ) {
                                    lVar9 = *(longlong *)(lVar9 + 0x10);
                                    goto joined_r0x0001405631d6;
                                }
                            }
                        }
                        LAB_140563234:
                        lVar9 = *(longlong *)(lVar9 + 0x18);
                    } while( true );
                }
                goto LAB_140563258;
            }
            goto LAB_140563311;
        }
        goto LAB_14056365e;
    }
    LAB_140563674:
    local_f0 = local_f0 + 1;
    if (0x23 < local_f0) goto code_r0x00014056368b;
    goto LAB_1405626a0;
    LAB_14056323d:
    local_148 = &local_118;
    local_118 = uVar6;
    local_108 = uVar13;
    local_100 = uVar11;
    FUN_140566eb0();
    LAB_140563258:
    if ((*(byte *)(lVar10 + 0xc) & 2) == 0) {
        uStack292 = 4;
        local_110 = CONCAT44(4,local_128);
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x658) + 8);
        joined_r0x000140563296:
        do {
            if (lVar9 == 0) goto LAB_1405632fe;
            if (local_138 != 0) {
                if (*(int *)(lVar9 + 0x20) != 0) goto LAB_1405632b6;
                goto LAB_1405632f5;
            }
            if (*(int *)(lVar9 + 0x20) != 0) {
                LAB_1405632eb:
                lVar9 = *(longlong *)(lVar9 + 0x10);
                goto joined_r0x000140563296;
            }
            LAB_1405632b6:
            if (param_3 < *(uint *)(lVar9 + 0x24)) goto LAB_1405632eb;
            if (param_3 <= *(uint *)(lVar9 + 0x24)) {
                if (3 < *(int *)(lVar9 + 0x28)) goto LAB_1405632eb;
                if (2 < *(int *)(lVar9 + 0x28)) {
                    if (4 < *(int *)(lVar9 + 0x2c)) goto LAB_1405632eb;
                    if ((3 < *(int *)(lVar9 + 0x2c)) && (uVar13 < *(uint *)(lVar9 + 0x30))) {
                        lVar9 = *(longlong *)(lVar9 + 0x10);
                        goto joined_r0x000140563296;
                    }
                }
            }
            LAB_1405632f5:
            lVar9 = *(longlong *)(lVar9 + 0x18);
        } while( true );
    }
    LAB_140563311:
    if ((*(byte *)(lVar10 + 4) & 0x10) != 0) {
        uVar6 = CONCAT44(uStack300,local_130);
        local_128 = 4;
        if ((*(byte *)(lVar10 + 0xc) & 1) == 0) {
            uStack292 = *(uint *)(lVar10 + 8);
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x658) + 8);
            local_110 = CONCAT44(uStack292,4);
            joined_r0x000140563363:
            do {
                if (lVar9 == 0) goto LAB_1405633cd;
                if (local_138 != 0) {
                    if (*(int *)(lVar9 + 0x20) != 0) goto LAB_140563386;
                    goto LAB_1405633c4;
                }
                if (*(int *)(lVar9 + 0x20) != 0) {
                    LAB_1405633ba:
                    lVar9 = *(longlong *)(lVar9 + 0x10);
                    goto joined_r0x000140563363;
                }
                LAB_140563386:
                if (param_3 < *(uint *)(lVar9 + 0x24)) goto LAB_1405633ba;
                if (param_3 <= *(uint *)(lVar9 + 0x24)) {
                    if (4 < *(int *)(lVar9 + 0x28)) goto LAB_1405633ba;
                    if (3 < *(int *)(lVar9 + 0x28)) {
                        if ((int)uStack292 < *(int *)(lVar9 + 0x2c)) goto LAB_1405633ba;
                        if (((int)uStack292 <= *(int *)(lVar9 + 0x2c)) && (uVar13 < *(uint *)(lVar9 + 0x30))) {
                            lVar9 = *(longlong *)(lVar9 + 0x10);
                            goto joined_r0x000140563363;
                        }
                    }
                }
                LAB_1405633c4:
                lVar9 = *(longlong *)(lVar9 + 0x18);
            } while( true );
        }
        LAB_1405633e8:
        if ((*(byte *)(lVar10 + 0xc) & 2) == 0) {
            uStack292 = 4;
            local_110 = CONCAT44(4,local_128);
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x658) + 8);
            joined_r0x000140563426:
            do {
                if (lVar9 == 0) goto LAB_14056348e;
                if (local_138 != 0) {
                    if (*(int *)(lVar9 + 0x20) != 0) goto LAB_140563446;
                    goto LAB_140563485;
                }
                if (*(int *)(lVar9 + 0x20) != 0) {
                    LAB_14056347b:
                    lVar9 = *(longlong *)(lVar9 + 0x10);
                    goto joined_r0x000140563426;
                }
                LAB_140563446:
                if (param_3 < *(uint *)(lVar9 + 0x24)) goto LAB_14056347b;
                if (param_3 <= *(uint *)(lVar9 + 0x24)) {
                    if (4 < *(int *)(lVar9 + 0x28)) goto LAB_14056347b;
                    if (3 < *(int *)(lVar9 + 0x28)) {
                        if (4 < *(int *)(lVar9 + 0x2c)) goto LAB_14056347b;
                        if ((3 < *(int *)(lVar9 + 0x2c)) && (uVar13 < *(uint *)(lVar9 + 0x30))) {
                            lVar9 = *(longlong *)(lVar9 + 0x10);
                            goto joined_r0x000140563426;
                        }
                    }
                }
                LAB_140563485:
                lVar9 = *(longlong *)(lVar9 + 0x18);
            } while( true );
        }
    }
    LAB_1405634a1:
    if ((*(byte *)(lVar10 + 4) & 0x20) != 0) {
        uVar6 = CONCAT44(uStack300,local_130);
        local_128 = 5;
        if ((*(byte *)(lVar10 + 0xc) & 1) == 0) {
            uStack292 = *(uint *)(lVar10 + 8);
            local_110 = CONCAT44(uStack292,5);
            local_118 = uVar6;
            local_108 = uVar13;
            local_100 = uVar11;
            FUN_140566350();
        }
        if ((*(byte *)(lVar10 + 0xc) & 2) == 0) {
            uStack292 = 4;
            local_110 = CONCAT44(4,local_128);
            local_118 = uVar6;
            local_108 = uVar13;
            local_100 = uVar11;
            FUN_140566350();
        }
    }
    if ((*(byte *)(lVar10 + 4) & 0x40) != 0) {
        uVar6 = CONCAT44(uStack300,local_130);
        local_128 = 6;
        if ((*(byte *)(lVar10 + 0xc) & 1) == 0) {
            uStack292 = *(uint *)(lVar10 + 8);
            local_110 = CONCAT44(uStack292,6);
            local_118 = uVar6;
            local_108 = uVar13;
            local_100 = uVar11;
            FUN_140566350();
        }
        if ((*(byte *)(lVar10 + 0xc) & 2) == 0) {
            uStack292 = 4;
            local_110 = CONCAT44(4,local_128);
            local_118 = uVar6;
            local_108 = uVar13;
            local_100 = uVar11;
            FUN_140566350();
        }
    }
    uVar8 = local_f8;
    uVar12 = local_e8;
    if ((*(byte *)(lVar10 + 4) & 0x80) != 0) {
        uVar6 = CONCAT44(uStack300,local_130);
        local_128 = 7;
        if ((*(byte *)(lVar10 + 0xc) & 1) == 0) {
            uStack292 = *(uint *)(lVar10 + 8);
            local_110 = CONCAT44(uStack292,7);
            local_118 = uVar6;
            local_108 = uVar13;
            local_100 = uVar11;
            FUN_140566350();
        }
        uVar8 = local_f8;
        uVar12 = local_e8;
        if ((*(byte *)(lVar10 + 0xc) & 2) == 0) {
            uStack292 = 4;
            local_110 = CONCAT44(4,local_128);
            local_118 = uVar6;
            local_108 = uVar13;
            local_100 = uVar11;
            FUN_140566350();
            uVar8 = local_f8;
            uVar12 = local_e8;
        }
    }
    LAB_14056365e:
    uVar12 = uVar12 << 1 | (uint)((int)uVar12 < 0);
    uVar13 = uVar13 + 1;
    lVar9 = local_e0;
    local_e8 = uVar12;
    iVar7 = local_e4;
    if (uVar8 < uVar13) goto LAB_140563674;
    goto LAB_1405627f0;
    LAB_1405632fe:
    local_148 = &local_118;
    local_118 = uVar6;
    local_108 = uVar13;
    local_100 = uVar11;
    FUN_140566eb0();
    goto LAB_140563311;
    LAB_1405633cd:
    local_148 = &local_118;
    local_118 = uVar6;
    local_108 = uVar13;
    local_100 = uVar11;
    FUN_140566eb0();
    goto LAB_1405633e8;
    LAB_14056348e:
    local_148 = &local_118;
    local_118 = uVar6;
    local_108 = uVar13;
    local_100 = uVar11;
    FUN_140566eb0();
    goto LAB_1405634a1;
    code_r0x00014056368b:
    if ((*(int *)(lVar9 + 0x94) == 0) || (lVar9 = FUN_140248f00(), lVar9 != 0)) {
        if (iVar7 != 0) goto LAB_1405638b1;
    }
    else {
        iVar7 = 0x4e;
        LAB_1405638b1:
        FUN_14018d540(&local_d8,&DAT_140b4f534,iVar7);
        if (local_d8 != 0) {
            (**(code **)(*(longlong *)(local_d8 + -0x10) + 8))(local_d8 + -0x10);
        }
    }
    lVar9 = param_1 + 0x690;
    if (local_138 == 0) {
        lVar9 = param_1 + 0x670;
    }
    FUN_1400293c0(lVar9,local_c8,local_res18);
    LAB_140563911:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack360);
    return;
}



void FUN_140563930(undefined8 param_1,int param_2,undefined8 param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    longlong local_10;

    local_20 = DAT_140c65b70;
    lVar3 = FUN_14018b280(0xc0);
    if (lVar3 == 0) {
        local_10 = 0;
    }
    else {
        local_10 = FUN_140567380(lVar3,param_3);
    }
    plVar2 = (longlong *)(local_20 + 2000);
    if (*(longlong *)(local_10 + 0x68) == 0) {
        *(longlong **)(local_10 + 0x68) = plVar2;
        plVar1 = (longlong *)(local_10 + 0x70);
        *plVar1 = *plVar2;
        *plVar2 = local_10;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x68) = plVar1;
        }
    }
    if (param_2 != 0) {
        local_18 = FUN_140563ad0;
        local_28[0] = 1;
        FUN_140195960(local_10 + 0x78,param_2,local_28,4);
        return;
    }
    FUN_140563ad0(local_20);
    return;
}



void FUN_140563a00(undefined8 param_1,int param_2,undefined8 param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    longlong local_10;

    local_20 = DAT_140c65b70;
    lVar3 = FUN_14018b280(0xc0);
    if (lVar3 == 0) {
        local_10 = 0;
    }
    else {
        local_10 = FUN_140567380(lVar3,param_3);
    }
    plVar2 = (longlong *)(local_20 + 2000);
    if (*(longlong *)(local_10 + 0x68) == 0) {
        *(longlong **)(local_10 + 0x68) = plVar2;
        plVar1 = (longlong *)(local_10 + 0x70);
        *plVar1 = *plVar2;
        *plVar2 = local_10;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x68) = plVar1;
        }
    }
    if (param_2 != 0) {
        local_18 = FUN_140563dc0;
        local_28[0] = 1;
        FUN_140195960(local_10 + 0x78,param_2,local_28,4);
        return;
    }
    FUN_140563dc0(local_20);
    return;
}



void FUN_140563ad0(undefined8 param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined8 uVar5;
    int *piVar6;
    int *piVar7;
    longlong lVar8;
    float fVar9;
    undefined local_28 [8];
    longlong local_20;
    longlong local_18;

    lVar8 = FUN_1403d90d0(DAT_140c65898);
    FUN_1403d90d0();
    iVar1 = *(int *)(param_2 + 8);
    if ((iVar1 == 10) || (iVar1 == 0x76)) {
        if ((iVar1 == 0x76) && ((lVar8 != 0 && (*(int *)(lVar8 + 0x1604) != 0)))) {
            uVar3 = *(undefined4 *)(param_2 + 4);
            puVar4 = *(undefined4 **)(DAT_140c7df98 + 0xcbc8);
            uVar5 = *(undefined8 *)(param_2 + 0x50);
            if (puVar4 != (undefined4 *)0x0) {
                FUN_1405648a0(*(undefined4 *)(param_2 + 0x48),local_28,0x146,uVar3,
                              *(undefined4 *)(param_2 + 0x48));
                if (local_20 != local_18) {
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SpellCastFailed","iiUUSS",puVar4[4]
                            ,*puVar4,uVar3,uVar3,local_20,uVar5);
                }
                if (local_20 != 0) {
                    FUN_14018b900(local_20,0);
                }
            }
        }
        else {
            piVar7 = *(int **)(DAT_140c65898 + 0x6cc0);
            while (piVar7 != (int *)0x0) {
                piVar6 = *(int **)(piVar7 + 10);
                *(longlong *)(piVar7 + 0xc) = lVar8;
                *(longlong *)(piVar7 + 0xe) = param_2;
                if (*piVar7 == 0) {
                    (**(code **)(piVar7 + 4))();
                }
                else if (*piVar7 == 1) {
                    (**(code **)(piVar7 + 4))(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar7 + 6));
                }
                *(undefined8 *)(piVar7 + 0xc) = 0;
                *(undefined8 *)(piVar7 + 0xe) = 0;
                piVar7 = piVar6;
            }
        }
    }
    else {
        iVar2 = *DAT_140c63750;
        if (iVar1 == 0x8a) {
            iVar1 = DAT_140c4e040;
            if (iVar2 < DAT_140c4e040) {
                iVar1 = iVar2;
            }
            if (((((&DAT_140c4e050)[iVar1] == '\0') && (*(uint *)(param_2 + 0x14) != 0)) && (lVar8 != 0))
                && ((*(byte *)(lVar8 + 0x24) & 8) != 0)) {
                fVar9 = (float)(ulonglong)*(uint *)(param_2 + 0x10) /
                        (float)(ulonglong)*(uint *)(param_2 + 0x14);
                *(int *)(param_2 + 0x20) =
                        (int)(longlong)((float)(ulonglong)*(uint *)(param_2 + 0x20) * fVar9);
                *(int *)(param_2 + 0x1c) =
                        (int)(longlong)((float)(ulonglong)*(uint *)(param_2 + 0x1c) * fVar9);
                *(int *)(param_2 + 0x18) =
                        (int)(longlong)((float)(ulonglong)*(uint *)(param_2 + 0x18) * fVar9);
            }
            *(undefined4 *)(param_2 + 0x20) = 0;
            FUN_1405a5bf0(0,lVar8,param_2);
        }
        else {
            iVar1 = DAT_140c4e040;
            if (iVar2 < DAT_140c4e040) {
                iVar1 = iVar2;
            }
            if ((((&DAT_140c4e050)[iVar1] == '\0') && (*(uint *)(param_2 + 0x14) != 0)) &&
                ((lVar8 != 0 && ((*(byte *)(lVar8 + 0x24) & 8) != 0)))) {
                fVar9 = (float)(ulonglong)*(uint *)(param_2 + 0x10) /
                        (float)(ulonglong)*(uint *)(param_2 + 0x14);
                *(int *)(param_2 + 0x20) =
                        (int)(longlong)((float)(ulonglong)*(uint *)(param_2 + 0x20) * fVar9);
                *(int *)(param_2 + 0x1c) =
                        (int)(longlong)((float)(ulonglong)*(uint *)(param_2 + 0x1c) * fVar9);
                *(int *)(param_2 + 0x18) =
                        (int)(longlong)((float)(ulonglong)*(uint *)(param_2 + 0x18) * fVar9);
            }
            FUN_1405a5bf0(0,lVar8,param_2);
        }
    }
    FUN_140569980(param_2);
    FUN_14018b900(param_2,0);
    return;
}



void FUN_140563dc0(undefined8 param_1,undefined4 *param_2)

{
    int iVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined ***pppuVar5;
    undefined4 uVar6;
    float fVar7;
    undefined **local_d8;
    undefined4 local_d0;
    undefined4 local_cc;
    undefined4 local_c8;
    undefined4 local_c4;
    undefined4 local_c0;
    undefined8 local_b8;
    undefined8 local_b0;
    undefined4 local_a8;
    undefined4 local_a4;
    undefined4 uStack160;
    undefined4 local_9c;
    undefined4 uStack152;
    undefined4 local_94;
    undefined **local_88;
    undefined4 local_80;
    undefined4 local_7c;
    undefined4 local_78;
    undefined4 local_74;
    undefined4 local_70;
    undefined4 local_68;
    undefined4 local_64;
    undefined4 local_60;
    int local_5c;
    undefined **local_58;
    undefined4 local_50;
    undefined4 local_4c;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    int local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    int local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;

    lVar4 = FUN_1403d90d0(DAT_140c65898);
    FUN_1403d90d0();
    iVar1 = param_2[2];
    if (iVar1 == 10) {
        LAB_1405641c8:
        local_80 = param_2[1];
        local_7c = 0xc;
        local_78 = *param_2;
        local_88 = &PTR_FUN_140b6f880;
        local_74 = param_2[0x12];
        local_70 = param_2[0xc];
        local_68 = param_2[8];
        local_64 = param_2[9];
        local_60 = param_2[6];
        local_5c = iVar1;
        FUN_14060b2b0();
        if (*(char *)(param_2 + 0xe) == '\0') goto LAB_14056429a;
        lVar4 = *(longlong *)(param_2 + 0x10);
        local_c0 = 0;
        if (*(int *)(lVar4 + 0x1c) == 2) {
            local_c0 = 2;
        }
        else if (*(int *)(lVar4 + 0x1c) == 3) {
            local_c0 = 1;
        }
        local_d0 = param_2[1];
        local_c8 = *param_2;
        local_cc = 0xd;
        pppuVar5 = &local_d8;
        local_d8 = &PTR_FUN_140b6f5b0;
        local_c4 = param_2[0x12];
        local_b8 = *(undefined8 *)(lVar4 + 4);
        local_a8 = param_2[2];
        local_b0 = CONCAT44(param_2[0x16],*(undefined4 *)(lVar4 + 0xc));
    }
    else {
        if (iVar1 == 0x76) goto LAB_1405641c8;
        iVar2 = *DAT_140c63750;
        if (iVar1 == 0x8a) {
            iVar1 = DAT_140c4e040;
            if (iVar2 < DAT_140c4e040) {
                iVar1 = iVar2;
            }
            if (((((&DAT_140c4e050)[iVar1] == '\0') && (param_2[5] != 0)) && (lVar4 != 0)) &&
                ((*(byte *)(lVar4 + 0x24) & 8) != 0)) {
                fVar7 = (float)(ulonglong)(uint)param_2[4] / (float)(ulonglong)(uint)param_2[5];
                param_2[8] = (int)(longlong)((float)(ulonglong)(uint)param_2[8] * fVar7);
                param_2[7] = (int)(longlong)((float)(ulonglong)(uint)param_2[7] * fVar7);
                param_2[6] = (int)(longlong)((float)(ulonglong)(uint)param_2[6] * fVar7);
            }
            local_50 = param_2[1];
            local_4c = 4;
            local_48 = *param_2;
            local_58 = &PTR_FUN_140b6f9a0;
            local_44 = param_2[0x12];
            local_40 = param_2[0xc];
            local_38 = param_2[8];
            local_34 = param_2[4];
            local_24 = param_2[10];
            local_30 = param_2[7];
            local_2c = param_2[6];
            local_28 = param_2[9];
            local_20 = param_2[0x18];
            local_1c = param_2[0xb];
            local_18 = param_2[0x16];
            local_14 = param_2[0xd];
            local_10 = param_2[2];
            FUN_14060b2b0();
            if (*(char *)(param_2 + 0xe) == '\0') goto LAB_14056429a;
            puVar3 = *(undefined4 **)(param_2 + 0x10);
            uVar6 = 0;
            if (puVar3[7] == 2) {
                uVar6 = 2;
            }
            else if (puVar3[7] == 3) {
                local_80 = param_2[1];
                local_7c = 0x11;
                local_78 = *param_2;
                local_70 = 1;
                local_68 = 1;
                local_88 = &PTR_FUN_140b6f670;
                local_74 = param_2[0x12];
                pppuVar5 = &local_88;
                goto LAB_140564295;
            }
            local_d0 = param_2[1];
            local_c8 = *param_2;
            local_cc = 7;
            uStack160 = 0;
            local_9c = 0;
            local_d8 = &PTR_FUN_140b6f790;
            local_c4 = param_2[0x12];
            pppuVar5 = &local_d8;
            local_b8 = CONCAT44(*puVar3,puVar3[1]);
            local_a8 = puVar3[3];
            local_a4 = puVar3[5];
            uStack152 = param_2[0x16];
            local_b0 = CONCAT44(puVar3[6],puVar3[4]);
            local_94 = param_2[0xd];
            local_c0 = uVar6;
        }
        else {
            iVar1 = DAT_140c4e040;
            if (iVar2 < DAT_140c4e040) {
                iVar1 = iVar2;
            }
            if ((((&DAT_140c4e050)[iVar1] == '\0') && (param_2[5] != 0)) &&
                ((lVar4 != 0 && ((*(byte *)(lVar4 + 0x24) & 8) != 0)))) {
                fVar7 = (float)(ulonglong)(uint)param_2[4] / (float)(ulonglong)(uint)param_2[5];
                param_2[8] = (int)(longlong)((float)(ulonglong)(uint)param_2[8] * fVar7);
                param_2[7] = (int)(longlong)((float)(ulonglong)(uint)param_2[7] * fVar7);
                param_2[6] = (int)(longlong)((float)(ulonglong)(uint)param_2[6] * fVar7);
            }
            local_50 = param_2[1];
            local_28 = param_2[9];
            local_4c = 3;
            local_48 = *param_2;
            local_58 = &PTR_FUN_140b6f970;
            local_44 = param_2[0x12];
            local_40 = param_2[0xc];
            local_38 = param_2[8] - local_28;
            local_34 = param_2[4];
            local_24 = param_2[10];
            local_30 = param_2[7];
            local_2c = param_2[6];
            local_20 = param_2[0x18];
            local_1c = param_2[0xb];
            local_18 = param_2[0x16];
            local_14 = param_2[0xd];
            local_10 = param_2[2];
            FUN_14060b2b0();
            if (*(char *)(param_2 + 0xe) == '\0') goto LAB_14056429a;
            puVar3 = *(undefined4 **)(param_2 + 0x10);
            if (puVar3[7] == 2) {
                uVar6 = 2;
            }
            else {
                uVar6 = 1;
                if (puVar3[7] != 3) {
                    local_80 = param_2[1];
                    local_68 = 1;
                    local_78 = *param_2;
                    local_7c = 0x11;
                    local_70 = 0;
                    local_88 = &PTR_FUN_140b6f670;
                    local_74 = param_2[0x12];
                    pppuVar5 = &local_88;
                    goto LAB_140564295;
                }
            }
            local_d0 = param_2[1];
            local_c8 = *param_2;
            local_cc = 6;
            local_d8 = &PTR_FUN_140b6f760;
            local_c4 = param_2[0x12];
            uStack160 = 0;
            local_9c = 0;
            pppuVar5 = &local_d8;
            local_b8 = CONCAT44(*puVar3,puVar3[1]);
            local_a8 = puVar3[3];
            local_a4 = puVar3[5];
            uStack152 = param_2[0x16];
            local_b0 = CONCAT44(puVar3[6],puVar3[4]);
            local_94 = param_2[0xd];
            local_c0 = uVar6;
        }
    }
    LAB_140564295:
    FUN_14060b2b0(pppuVar5);
    LAB_14056429a:
    FUN_140569980(param_2);
    FUN_14018b900(param_2,0);
    return;
}



void FUN_1405642c0(undefined8 param_1,int param_2,undefined8 param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined4 *local_10;

    local_20 = DAT_140c65b70;
    lVar3 = FUN_14018b280(0xc0,0);
    if (lVar3 == 0) {
        local_10 = (undefined4 *)0x0;
    }
    else {
        local_10 = (undefined4 *)FUN_140567380(lVar3,param_3);
    }
    plVar2 = (longlong *)(local_20 + 2000);
    if (*(longlong *)(local_10 + 0x1a) == 0) {
        *(longlong **)(local_10 + 0x1a) = plVar2;
        plVar1 = (longlong *)(local_10 + 0x1c);
        *plVar1 = *plVar2;
        *plVar2 = (longlong)local_10;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x68) = plVar1;
        }
    }
    if (param_2 != 0) {
        local_28[0] = 1;
        local_18 = FUN_1405643c0;
        FUN_140195960(local_10 + 0x1e,param_2,local_28,4);
        return;
    }
    lVar3 = FUN_1403d90d0(DAT_140c65898,*local_10);
    if (lVar3 != 0) {
        FUN_14045e9e0(lVar3,local_10[4],local_10[1]);
    }
    FUN_140569980(local_10);
    FUN_14018b900(local_10,0);
    return;
}



void FUN_1405643c0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(DAT_140c65898,*param_2);
    if (lVar1 != 0) {
        FUN_14045e9e0(lVar1,param_2[4],param_2[1]);
    }
    FUN_140569980(param_2);
    FUN_14018b900(param_2,0);
    return;
}



void FUN_140564410(undefined8 param_1,undefined8 param_2,short *param_3)

{
    short sVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;

    lVar3 = FUN_1407a0fd0(DAT_140c65b70);
    if (lVar3 != 0) {
        plVar2 = *(longlong **)(lVar3 + 8);
        puVar5 = (undefined8 *)0x0;
        lVar3 = *plVar2;
        if (param_3 == (short *)0x0) {
            *plVar2 = 0;
        }
        else {
            sVar1 = *param_3;
            puVar6 = puVar5;
            while (sVar1 != 0) {
                puVar6 = (undefined8 *)((longlong)puVar6 + 1);
                sVar1 = param_3[(longlong)puVar6];
            }
            puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar6 * 2 + 0x12,0);
            if (puVar4 != (undefined8 *)0x0) {
                puVar4[1] = puVar6;
                *puVar4 = &PTR_LAB_140b55060;
                puVar5 = puVar4;
            }
            puVar5 = puVar5 + 2;
            FUN_1407db590(puVar5,param_3,(longlong)puVar6 * 2);
            *(undefined2 *)((longlong)puVar6 * 2 + (longlong)puVar5) = 0;
            *plVar2 = (longlong)puVar5;
        }
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
    }
    return;
}



void FUN_1405644e0(void)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    lVar3 = FUN_1407a0fd0(DAT_140c65b70);
    if (lVar3 != 0) {
        plVar1 = *(longlong **)(lVar3 + 8);
        lVar3 = *plVar1;
        if (plVar1[1] == 0) {
            *plVar1 = 0;
        }
        else {
            lVar2 = *(longlong *)(plVar1[1] + -8);
            puVar4 = (undefined8 *)FUN_14018b280(lVar2 * 2 + 0x12,0);
            puVar5 = (undefined8 *)0x0;
            if (puVar4 != (undefined8 *)0x0) {
                puVar4[1] = lVar2;
                *puVar4 = &PTR_LAB_140b55060;
                puVar5 = puVar4;
            }
            puVar5 = puVar5 + 2;
            FUN_1407db590(puVar5,plVar1[1],lVar2 * 2);
            *(undefined2 *)(lVar2 * 2 + (longlong)puVar5) = 0;
            *plVar1 = (longlong)puVar5;
        }
        if (lVar3 != 0) {
            // WARNING: Could not recover jumptable at 0x00014056459d. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            return;
        }
    }
    return;
}



short * FUN_1405645b0(undefined8 param_1,uint param_2,int param_3)

{
    longlong *plVar1;
    short *psVar2;
    undefined8 uVar3;
    uint uVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    short *psVar10;
    longlong local_res8;

    uVar3 = DAT_140c65b70;
    if ((param_3 != 0) && (plVar1 = *(longlong **)(DAT_140c65898 + 0x6d90), plVar1 != (longlong *)0x0)
            ) {
        if ((*(longlong *)(DAT_140c65898 + 0x6490) == 0) ||
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108) == 0)) {
            uVar6 = 0;
        }
        else {
            uVar6 = FUN_1403d90d0(DAT_140c65898);
        }
        uVar4 = (**(code **)(*plVar1 + 0x10))
                (plVar1,param_2,*(undefined8 *)(DAT_140c65898 + 0x78),uVar6,0);
        if ((uVar4 != 0) && (uVar4 != param_2)) {
            param_2 = uVar4;
        }
    }
    if (param_2 != 0) {
        if (((*(longlong *)(DAT_140c65898 + 0x6490) == 0) || (DAT_140c65898 == 0)) ||
            (lVar9 = DAT_140c65898, lVar7 = FUN_1405a5b90(DAT_140c65898,param_2), lVar7 == 0)) {
            lVar7 = FUN_1407a0fd0(uVar3,param_2);
            lVar9 = DAT_140c65898;
        }
        if (lVar7 != 0) {
            if (((*(int *)(*(longlong *)(lVar7 + 0x70) + 0x194) != 0) &&
                 (iVar5 = FUN_1403a8000(), iVar5 != 0)) &&
                (lVar8 = FUN_140565020(), lVar9 = DAT_140c65898, lVar8 != 0)) {
                param_2 = **(uint **)(lVar8 + 0x70);
                lVar7 = lVar8;
            }
            lVar8 = *(longlong *)(lVar9 + 0x1588);
            psVar10 = **(short ***)(lVar7 + 8);
            local_res8 = lVar8;
            lVar7 = *(longlong *)(lVar8 + 8);
            while (lVar7 != 0) {
                if (*(uint *)(lVar7 + 0x20) < param_2) {
                    lVar7 = *(longlong *)(lVar7 + 0x18);
                }
                else {
                    local_res8 = lVar7;
                    lVar7 = *(longlong *)(lVar7 + 0x10);
                }
            }
            if ((local_res8 == lVar8) || (param_2 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar8;
            }
            if (local_res8 != lVar8) {
                FUN_1403bfb00(lVar9,param_2);
                lVar7 = FUN_140564f40(uVar3);
                if (((lVar7 != 0) && (psVar2 = *(short **)(lVar7 + 0x28), psVar2 != (short *)0x0)) &&
                    (*psVar2 != 0)) {
                    psVar10 = psVar2;
                }
            }
            return psVar10;
        }
    }
    return (short *)0x0;
}



ulonglong FUN_140564760(undefined8 param_1,uint param_2)

{
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    longlong local_res8;

    uVar1 = DAT_140c65b70;
    if (param_2 != 0) {
        if (((*(longlong *)(DAT_140c65898 + 0x6490) == 0) || (DAT_140c65898 == 0)) ||
            (lVar5 = DAT_140c65898, lVar3 = FUN_1405a5b90(DAT_140c65898), lVar3 == 0)) {
            lVar3 = FUN_1407a0fd0(uVar1);
            lVar5 = DAT_140c65898;
        }
        if (lVar3 != 0) {
            if (((*(int *)(*(longlong *)(lVar3 + 0x70) + 0x194) != 0) &&
                 (iVar2 = FUN_1403a8000(), iVar2 != 0)) &&
                (lVar4 = FUN_140565020(), lVar5 = DAT_140c65898, lVar4 != 0)) {
                param_2 = **(uint **)(lVar4 + 0x70);
                lVar3 = lVar4;
            }
            lVar4 = *(longlong *)(lVar5 + 0x1588);
            uVar6 = (ulonglong)*(uint *)(*(longlong *)(lVar3 + 8) + 0x20);
            local_res8 = lVar4;
            lVar3 = *(longlong *)(lVar4 + 8);
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < param_2) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    local_res8 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((local_res8 == lVar4) || (param_2 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = lVar4;
            }
            if (local_res8 != lVar4) {
                FUN_1403bfb00(lVar5,param_2);
                lVar3 = FUN_140564f40(uVar1);
                if (lVar3 != 0) {
                    uVar6 = uVar6 & 0xffffffff;
                    if (*(uint *)(lVar3 + 0x24) != 0) {
                        uVar6 = (ulonglong)*(uint *)(lVar3 + 0x24);
                    }
                }
            }
            return uVar6 & 0xffffffff;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405648a0(undefined8 param_1,longlong param_2,int param_3)

{
    ulonglong uVar1;
    short sVar2;
    undefined2 *puVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong lVar6;
    short *psVar7;
    longlong *plVar8;
    int iVar9;
    longlong lVar10;
    undefined local_138 [8];
    longlong local_130;
    undefined2 *local_128;
    longlong local_120;
    undefined **local_118;
    undefined local_110 [8];
    undefined2 *local_108;
    undefined2 *local_100;
    undefined local_58 [16];
    undefined2 *local_48;

    if (0x14b < param_3) {
        lVar10 = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        sVar2 = _DAT_00000000;
        while (sVar2 != 0) {
            lVar10 = lVar10 + 1;
            sVar2 = *(short *)(lVar10 * 2);
        }
        FUN_14001c1b0(param_2,0,lVar10 * 2);
        return param_2;
    }
    lVar10 = FUN_140237240(param_3);
    if (lVar10 == 0) {
        lVar10 = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        *(undefined8 *)(param_2 + 0x18) = 0;
        sVar2 = _DAT_00000000;
        while (sVar2 != 0) {
            lVar10 = lVar10 + 1;
            sVar2 = *(short *)(lVar10 * 2);
        }
        FUN_14001c1b0(param_2,0,lVar10 * 2);
        return param_2;
    }
    FUN_1400b6f30(&local_118);
    plVar8 = (longlong *)0x0;
    local_58 = ZEXT816(0);
    local_118 = &PTR_FUN_140b69230;
    local_48 = (undefined2 *)0x0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    local_48 = puVar3 + 8;
    local_58 = CONCAT88(puVar3,puVar3);
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    if (*(longlong *)(DAT_140c65898 + 0x6490) != 0) {
        lVar10 = FUN_14018b280(0x60);
        plVar4 = plVar8;
        if (lVar10 != 0) {
            plVar4 = (longlong *)FUN_1404db7e0(lVar10,*(undefined8 *)(DAT_140c65898 + 0x6490));
        }
        local_130 = 0;
        local_128 = (undefined2 *)0x0;
        local_120 = 0;
        plVar5 = plVar8;
        do {
            plVar5 = (longlong *)((longlong)plVar5 + 1);
        } while (*(short *)(&DAT_140b0a7c8 + (longlong)plVar5 * 2) != 0);
        lVar10 = (longlong)plVar5 * 2 >> 1;
        uVar1 = lVar10 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar6 = uVar1 * 2;
            local_128 = (undefined2 *)FUN_14018b280(lVar6,0);
            local_120 = lVar6 + (longlong)local_128;
        }
        lVar6 = (longlong)local_128;
        lVar10 = lVar10 * 2;
        local_130 = (longlong)local_128;
        FUN_1407db590(local_128,&DAT_140b0a7c8,lVar10);
        local_128 = (undefined2 *)(lVar10 + lVar6);
        if (local_128 != (undefined2 *)0x0) {
            *local_128 = 0;
        }
        FUN_1400b7480(&local_118,plVar4);
        (**(code **)(*plVar4 + 0x48))(plVar4);
        if (local_130 != 0) {
            FUN_14018b900();
        }
    }
    lVar10 = FUN_1403d90d0(DAT_140c65898);
    if (lVar10 == 0) goto LAB_140564d59;
    lVar6 = FUN_1403acd90(DAT_140c65b70);
    iVar9 = *(int *)(lVar10 + 0xdc);
    switch(param_3) {
        case 0x32:
            if (iVar9 != 0) {
                FUN_1401f31e0(iVar9);
            }
            break;
        case 0x33:
            if (iVar9 != 0) {
                FUN_1401f31e0(iVar9);
            }
            break;
        case 0x34:
            if (iVar9 != 0) {
                FUN_1401f31e0(iVar9);
            }
            break;
        case 0x35:
            if (iVar9 != 0) {
                FUN_1401f31e0(iVar9);
            }
            break;
        case 0x36:
            if (iVar9 != 0) {
                FUN_1401f31e0(iVar9);
            }
            break;
        case 0x37:
            if (iVar9 != 0) {
                FUN_1401f31e0(iVar9);
            }
            break;
        case 0x38:
            if (iVar9 != 0) {
                FUN_1401f31e0(iVar9);
            }
            break;
        case 0x97:
            if (lVar6 != 0) {
                iVar9 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0x168);
                LAB_140564c53:
                if (iVar9 != 0) {
                    FUN_1402259c0();
                }
            }
            break;
        case 0xb1:
            if (iVar9 != 0) {
                FUN_1401f31e0(iVar9);
            }
            break;
        case 0x119:
            if (lVar6 != 0) {
                iVar9 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0x16c);
                goto LAB_140564c53;
            }
            break;
        case 0x11a:
            if (lVar6 != 0) {
                iVar9 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0x170);
                goto LAB_140564c53;
            }
            break;
        case 0x11b:
            if (lVar6 != 0) {
                iVar9 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0x174);
                goto LAB_140564c53;
            }
    }
    lVar6 = FUN_14018b280(0x60);
    plVar4 = plVar8;
    if (lVar6 != 0) {
        plVar4 = (longlong *)FUN_1404db7e0(lVar6,lVar10);
    }
    local_130 = 0;
    local_128 = (undefined2 *)0x0;
    local_120 = 0;
    plVar5 = plVar8;
    do {
        plVar5 = (longlong *)((longlong)plVar5 + 1);
    } while (L"target"[(longlong)plVar5] != L'\0');
    lVar10 = (longlong)plVar5 * 2 >> 1;
    uVar1 = lVar10 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar6 = uVar1 * 2;
        local_128 = (undefined2 *)FUN_14018b280(lVar6,0);
        local_120 = (longlong)local_128 + lVar6;
    }
    lVar6 = (longlong)local_128;
    lVar10 = lVar10 * 2;
    local_130 = (longlong)local_128;
    FUN_1407db590(local_128,L"target",lVar10);
    local_128 = (undefined2 *)(lVar10 + lVar6);
    if (local_128 != (undefined2 *)0x0) {
        *local_128 = 0;
    }
    FUN_1400b7480(&local_118,plVar4);
    (**(code **)(*plVar4 + 0x48))(plVar4,local_138);
    if (local_130 != 0) {
        FUN_14018b900(local_130,0);
    }
    LAB_140564d59:
    psVar7 = (short *)FUN_14034bdd0();
    if (psVar7 == (short *)0x0) {
        if (local_108 != local_100) {
            *local_108 = 0;
            local_100 = local_108;
        }
    }
    else {
        sVar2 = *psVar7;
        while (sVar2 != 0) {
            plVar8 = (longlong *)((longlong)plVar8 + 1);
            sVar2 = psVar7[(longlong)plVar8];
        }
        FUN_14001c480(local_110,psVar7,psVar7 + (longlong)plVar8);
    }
    lVar10 = FUN_1400b7660(&local_118);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    FUN_14001c1b0(param_2,*(undefined8 *)(lVar10 + 8),*(undefined8 *)(lVar10 + 0x10));
    if (local_58._0_8_ != 0) {
        FUN_14018b900(local_58._0_8_,0);
    }
    FUN_1400b7390(&local_118);
    return param_2;
}



undefined8 FUN_140564f40(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x788);
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
    if (((local_res8 != lVar1) && (param_3 != -1)) &&
        (param_3 < *(int *)(*(longlong **)(local_res8 + 0x28) + 1))) {
        return *(undefined8 *)(**(longlong **)(local_res8 + 0x28) + (longlong)param_3 * 8);
    }
    return 0;
}



undefined4 FUN_140564fb0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65b70 + 0x788);
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
    return *(undefined4 *)(*(longlong *)(local_res8 + 0x28) + 8);
}



undefined8 FUN_140565020(undefined8 param_1,longlong param_2,longlong param_3)

{
    ulonglong uVar1;
    undefined8 uVar2;

    if ((param_2 != 0) && (param_3 != 0)) {
        uVar1 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x194));
        if (uVar1 != 0) {
            uVar1 = FUN_1403bad30(DAT_140c65898,*(undefined4 *)(*(longlong *)(uVar1 + 0x70) + 4),
                                  *(undefined *)(DAT_140c65898 + 0x6dec));
        }
        uVar2 = FUN_1403acd90(DAT_140c65b70,uVar1 & 0xffffffff,param_3);
        return uVar2;
    }
    return 0;
}



undefined8 FUN_140565090(undefined8 param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    undefined8 uVar2;

    if ((param_2 != 0) && (param_3 != 0)) {
        lVar1 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x98));
        if (lVar1 != 0) {
            uVar2 = FUN_1403bad30(DAT_140c65898,*(undefined4 *)(*(longlong *)(lVar1 + 0x70) + 4),
                                  *(undefined *)(DAT_140c65898 + 0x6dec));
            return uVar2;
        }
    }
    return 0;
}



void FUN_1405650e0(longlong param_1,longlong param_2,float *param_3,undefined4 *param_4,
                   uint *param_5)

{
    int *piVar1;
    longlong *plVar2;
    int iVar3;
    uint uVar4;
    uint uVar5;
    longlong lVar6;
    int *piVar7;
    longlong lVar8;
    int *piVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    uint uVar12;

    if (param_1 != 0) {
        uVar4 = 0;
        lVar8 = *(longlong *)(param_2 + 0x50);
        uVar12 = 0x5dc;
        lVar6 = FUN_140561c30();
        if (((lVar6 == 0) && (*(longlong *)(DAT_140c65898 + 0x78) == param_1)) &&
            (lVar6 = FUN_14039df50(), lVar6 != 0)) {
            lVar6 = FUN_1404695e0();
        }
        if (lVar8 != 0) {
            if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x138) == param_2)) {
                LAB_1405652a4:
                *param_3 = 1.0;
                return;
            }
            piVar9 = *(int **)(param_2 + 0x38);
            if ((piVar9 != (int *)0x0) &&
                ((lVar6 != 0 &&
                  (piVar1 = *(int **)(*(longlong *)(lVar6 + 0x138) + 0x38), piVar1 != (int *)0x0)))) {
                uVar11 = 0;
                do {
                    piVar9 = piVar9 + 1;
                    if (*piVar9 != 0) {
                        uVar10 = 0;
                        piVar7 = piVar1;
                        do {
                            piVar7 = piVar7 + 1;
                            if (*piVar7 == *piVar9) goto LAB_1405652a4;
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < 3);
                    }
                    uVar11 = uVar11 + 1;
                } while (uVar11 < 3);
            }
        }
        iVar3 = FUN_1403bd2f0();
        if (iVar3 != 0) {
            *param_4 = 1;
            for (lVar8 = *(longlong *)(param_1 + 0x1608); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x88))
            {
                if (((*(int *)(lVar8 + 4) == 0) && (*(longlong *)(lVar8 + 0x20) != 0)) &&
                    (uVar4 = FUN_140195f70(), uVar4 != 0)) goto LAB_140565211;
            }
            uVar4 = 0;
            LAB_140565211:
            for (lVar8 = *(longlong *)(param_1 + 0x1608); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x88))
            {
                if (*(int *)(lVar8 + 4) == 0) {
                    uVar12 = *(uint *)(lVar8 + 0x58);
                    goto LAB_140565239;
                }
            }
            uVar12 = 0;
        }
        LAB_140565239:
        if ((*(longlong *)(DAT_140c65898 + 0x78) == param_1) &&
            (plVar2 = *(longlong **)(DAT_140c65898 + 0x6d90), plVar2 != (longlong *)0x0)) {
            param_2 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2,param_1,0);
        }
        iVar3 = **(int **)(param_2 + 0x70);
        for (lVar8 = *(longlong *)(param_1 + 0x1608); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x88)) {
            if (((*(int *)(lVar8 + 4) == 1) && (iVar3 == *(int *)(lVar8 + 0xc))) &&
                ((*(longlong *)(lVar8 + 0x20) != 0 && (uVar5 = FUN_140195f70(), uVar5 != 0)))) {
                if (uVar4 < uVar5) {
                    *param_4 = 0;
                    lVar8 = FUN_14046a5f0(param_1,**(undefined4 **)(param_2 + 0x70));
                    uVar4 = uVar5;
                    if (lVar8 == 0) {
                        uVar12 = 0;
                    }
                    else {
                        uVar12 = *(uint *)(lVar8 + 0x58);
                    }
                }
                break;
            }
        }
        if (*(longlong *)(param_2 + 0x38) != 0) {
            uVar11 = 0;
            do {
                if ((*(int *)(uVar11 + 4 + *(longlong *)(param_2 + 0x38)) != 0) &&
                    (piVar9 = (int *)FUN_14023dc80(), piVar9 != (int *)0x0)) {
                    iVar3 = *piVar9;
                    for (lVar8 = *(longlong *)(param_1 + 0x1608); lVar8 != 0;
                         lVar8 = *(longlong *)(lVar8 + 0x88)) {
                        if ((((*(int *)(lVar8 + 4) == 2) && (iVar3 == *(int *)(lVar8 + 0xc))) &&
                             (*(longlong *)(lVar8 + 0x20) != 0)) && (uVar5 = FUN_140195f70(), uVar5 != 0)) {
                            if (uVar4 < uVar5) {
                                *param_4 = 0;
                                uVar12 = piVar9[1];
                                uVar4 = uVar5;
                                if (uVar12 == 0) {
                                    uVar12 = **(uint **)(param_2 + 0x38);
                                }
                            }
                            break;
                        }
                    }
                }
                uVar11 = uVar11 + 4;
            } while (uVar11 < 0xc);
        }
        if (uVar4 == 0) {
            *param_5 = 0;
            *param_3 = 0.0;
        }
        else {
            *param_5 = uVar4;
            *param_3 = 1.0 - (float)(ulonglong)uVar4 / (float)(ulonglong)uVar12;
        }
    }
    return;
}



void FUN_140565410(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;
    uint local_28 [2];
    longlong local_20;
    undefined local_18 [24];

    if (param_2 != 0) {
        local_28[0] = *(uint *)(param_2 + 0x10);
        lVar1 = *(longlong *)(DAT_140c65b70 + 0x760);
        local_res8 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < local_28[0]) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res8 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res8 == lVar1) || (local_28[0] < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar1;
        }
        if (local_res8 == lVar1) {
            local_20 = param_2;
            FUN_140055f80(DAT_140c65b70 + 0x758,local_18,local_28);
        }
    }
    return;
}



undefined8 FUN_1405654a0(undefined8 param_1,uint param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    float fVar6;
    undefined8 uVar7;
    undefined4 in_XMM3_Da;
    float fVar8;
    undefined4 uVar9;
    longlong local_res8;

    lVar1 = DAT_140c65b70;
    if (param_3 == 0) {
        return 0;
    }
    fVar8 = 0.0;
    uVar9 = 0;
    uVar3 = FUN_1403c2300(param_1,*(undefined4 *)(param_3 + 4));
    uVar7 = CONCAT44(uVar9,fVar8);
    lVar1 = *(longlong *)(lVar1 + 0x760);
    local_res8 = lVar1;
    lVar4 = *(longlong *)(lVar1 + 8);
    while (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x20) < param_2) {
            lVar4 = *(longlong *)(lVar4 + 0x18);
        }
        else {
            local_res8 = lVar4;
            lVar4 = *(longlong *)(lVar4 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if ((local_res8 == lVar1) || (lVar1 = *(longlong *)(local_res8 + 0x28), lVar1 == 0)) {
        uVar7 = FUN_140565600(0,uVar3,uVar3,param_3,in_XMM3_Da);
    }
    else {
        uVar2 = *(ulonglong *)(lVar1 + 0x48);
        uVar5 = 0;
        if (uVar2 != 0) {
            do {
                lVar4 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(*(longlong *)(lVar1 + 0x40) + uVar5 * 4)
                );
                if (lVar4 != 0) {
                    FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar4 + 0x154));
                    FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar1 + 0x54));
                    fVar6 = (float)FUN_140565600();
                    fVar8 = fVar8 + fVar6;
                }
                uVar7 = CONCAT44(uVar9,fVar8);
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar2);
        }
    }
    return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_140565600(undefined4 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
              undefined8 param_5_00,longlong param_6,undefined4 param_5)

{
    int iVar1;
    short sVar2;
    uint uVar3;
    int *piVar4;
    ulonglong uVar5;
    longlong lVar6;
    ulonglong uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined4 uVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined4 uVar17;

    fVar8 = (float)FUN_140566ad0(param_1,param_2,param_5,param_4,param_5_00,param_5_00,param_6 + 0x88,
                                 (float *)(param_6 + 0x98));
    sVar2 = FUN_140566d40(param_4);
    uVar7 = 0;
    lVar6 = 4;
    piVar4 = (int *)(param_6 + 0x88);
    uVar5 = uVar7;
    do {
        iVar1 = *piVar4;
        if ((0 < iVar1) && ((iVar1 < 6 || (iVar1 - 0xbU < 3)))) {
            uVar5 = (ulonglong)((int)uVar5 + 1);
        }
        piVar4 = piVar4 + 1;
        lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    iVar1 = *(int *)(param_6 + 0x88);
    fVar12 = 0.0;
    uVar13 = 0;
    fVar14 = 0.0;
    if ((0 < iVar1) && ((iVar1 < 6 || (iVar1 - 0xbU < 3)))) {
        fVar14 = *(float *)(param_6 + 0x98);
    }
    iVar1 = *(int *)(param_6 + 0x8c);
    if ((0 < iVar1) && ((iVar1 < 6 || (iVar1 - 0xbU < 3)))) {
        fVar14 = fVar14 + *(float *)(param_6 + 0x9c);
    }
    iVar1 = *(int *)(param_6 + 0x90);
    if ((0 < iVar1) && ((iVar1 < 6 || (iVar1 - 0xbU < 3)))) {
        fVar14 = fVar14 + *(float *)(param_6 + 0xa0);
    }
    iVar1 = *(int *)(param_6 + 0x94);
    if ((0 < iVar1) && ((iVar1 < 6 || (iVar1 - 0xbU < 3)))) {
        fVar14 = fVar14 + *(float *)(param_6 + 0xa4);
    }
    fVar16 = 1.0;
    uVar17 = 0;
    fVar9 = 1.0;
    switch(*(undefined4 *)(param_6 + 0x10)) {
        case 5:
            fVar9 = *(float *)(param_6 + 0x48);
            uVar7 = (ulonglong)*(uint *)(param_6 + 0x4c);
            break;
        case 8:
        case 10:
        case 0xc:
        case 0x21:
        case 0x76:
        case 0x8a:
            fVar9 = *(float *)(param_6 + 0x40);
            uVar7 = (ulonglong)*(uint *)(param_6 + 0x44);
    }
    fVar9 = ((float)uVar7 + fVar8) * fVar9;
    fVar10 = (float)(int)sVar2;
    fVar8 = fVar9;
    if (((param_4 != 0) && (*(int *)(param_4 + 0x80) != 0x14)) && (*(int *)(param_4 + 0x80) != 0x17))
    {
        if ((int)uVar5 == 0) {
            fVar8 = 0.0;
        }
        else {
            fVar8 = (float)((uint)(fVar14 / (float)uVar5) & 0x7fffffff);
        }
        fVar14 = fVar10;
        if ((DAT_140dc33d8 & 1) == 0) {
            DAT_140dc33d8 = DAT_140dc33d8 | 1;
            lVar6 = FUN_140200220(0x2c8);
            if (lVar6 == 0) {
                _DAT_140dc33dc = 70.0;
            }
            else {
                _DAT_140dc33dc = *(float *)(lVar6 + 0x18);
            }
        }
        if ((DAT_140dc33d8 & 2) == 0) {
            DAT_140dc33d8 = DAT_140dc33d8 | 2;
            lVar6 = FUN_140200220(0x2c8);
            if (lVar6 == 0) {
                _DAT_140dc33e0 = 100.0;
            }
            else {
                _DAT_140dc33e0 = *(float *)(lVar6 + 0x1c);
            }
        }
        if ((DAT_140dc33d8 & 4) == 0) {
            DAT_140dc33d8 = DAT_140dc33d8 | 4;
            lVar6 = FUN_140200220(0x2c8);
            _DAT_140dc33e4 = fVar16;
            if (lVar6 != 0) {
                _DAT_140dc33e4 = *(float *)(lVar6 + 0x20);
            }
        }
        if ((DAT_140dc33d8 & 8) == 0) {
            DAT_140dc33d8 = DAT_140dc33d8 | 8;
            lVar6 = FUN_140200220(0x2c8);
            if (lVar6 == 0) {
                DAT_140dc33e8 = 2.0;
            }
            else {
                DAT_140dc33e8 = *(float *)(lVar6 + 0x24);
            }
        }
        uVar3 = *(uint *)(param_4 + 0x3c);
        if (uVar3 == 0) {
            uVar3 = *(uint *)(param_4 + 0x38);
        }
        fVar8 = ((float)(ulonglong)uVar3 * _DAT_140dc33dc + _DAT_140dc33e0) * fVar8;
        fVar15 = DAT_140dc33e8;
        if (fVar14 <= fVar8) {
            fVar10 = fVar12;
            if (DAT_140dc33e8 != fVar12) {
                fVar10 = fVar14 / DAT_140dc33e8;
            }
        }
        else {
            fVar10 = fVar12;
            if (DAT_140dc33e8 != fVar12) {
                fVar10 = fVar8 / DAT_140dc33e8;
            }
            fVar11 = fVar12;
            if (fVar8 != fVar12) {
                fVar11 = (float)((uint)((fVar14 - fVar8) / fVar8) ^ 0x80000000);
            }
            fVar8 = (float)FUN_1408fc7f0(fVar11);
            fVar10 = ((fVar16 - fVar8) * _DAT_140dc33e4 + fVar16) * fVar10;
        }
        fVar8 = fVar12;
        if (fVar15 != fVar12) {
            fVar8 = fVar9 / fVar15;
        }
    }
    iVar1 = *(int *)(param_6 + 0x10);
    if (((iVar1 == 8) || (iVar1 == 5)) || (fVar14 = fVar16, iVar1 == 0x8a)) {
        fVar14 = fVar12;
        uVar17 = uVar13;
    }
    if ((param_4 != 0) && (uVar3 = *(int *)(param_6 + 0x14) + 0x8c, fVar16 = fVar12, uVar3 < 0xc5)) {
        fVar16 = *(float *)(param_4 + 0x5c4 + (longlong)(int)uVar3 * 8);
    }
    if (fVar14 <= fVar16) {
        fVar14 = fVar16;
    }
    return CONCAT44(uVar17,fVar14 * (fVar10 + fVar8));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_140565aa0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
              float param_5)

{
    uint uVar1;
    longlong lVar2;
    float fVar3;
    float in_XMM3_Da;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    float fVar8;
    undefined4 uVar9;
    float fVar10;
    undefined4 uVar11;

    if (param_2 != 0) {
        fVar5 = *(float *)(param_2 + 0x6dc);
        lVar2 = FUN_140200220(0x4f2);
        fVar4 = 0.25;
        if (lVar2 == 0) {
            fVar8 = 0.25;
        }
        else {
            fVar8 = *(float *)(lVar2 + 0x18);
        }
        fVar10 = *(float *)(param_2 + 0x6e4);
        uVar9 = 0;
        in_XMM3_Da = fVar5 * fVar8 * in_XMM3_Da;
        lVar2 = FUN_140200220(0x4f2);
        if (lVar2 != 0) {
            fVar4 = *(float *)(lVar2 + 0x1c);
        }
        param_5 = fVar10 * fVar4 * param_5;
        fVar5 = param_5 + in_XMM3_Da;
        uVar7 = uVar9;
        if ((*(int *)(param_2 + 0x80) != 0x14) && (*(int *)(param_2 + 0x80) != 0x17)) {
            fVar8 = 2.0;
            fVar4 = 0.0;
            uVar7 = 0;
            fVar10 = 1.0;
            uVar11 = 0;
            if ((in_XMM3_Da == 0.0) || (param_5 == 0.0)) {
                fVar3 = 1.0;
            }
            else {
                fVar3 = 2.0;
            }
            fVar3 = fVar5 / fVar3;
            fVar6 = fVar5;
            if ((DAT_140dc33ec & 1) == 0) {
                DAT_140dc33ec = DAT_140dc33ec | 1;
                lVar2 = FUN_140200220(0x2c8);
                fVar6 = fVar5;
                if (lVar2 == 0) {
                    _DAT_140dc33f0 = 70.0;
                }
                else {
                    _DAT_140dc33f0 = *(float *)(lVar2 + 0x18);
                }
            }
            fVar5 = fVar4;
            if ((DAT_140dc33ec & 2) == 0) {
                DAT_140dc33ec = DAT_140dc33ec | 2;
                lVar2 = FUN_140200220(0x2c8);
                if (lVar2 == 0) {
                    _DAT_140dc33f4 = 100.0;
                }
                else {
                    _DAT_140dc33f4 = *(float *)(lVar2 + 0x1c);
                }
            }
            if ((DAT_140dc33ec & 4) == 0) {
                DAT_140dc33ec = DAT_140dc33ec | 4;
                lVar2 = FUN_140200220(0x2c8);
                _DAT_140dc33f8 = fVar10;
                if (lVar2 != 0) {
                    _DAT_140dc33f8 = *(float *)(lVar2 + 0x20);
                }
            }
            if ((DAT_140dc33ec & 8) == 0) {
                DAT_140dc33ec = DAT_140dc33ec | 8;
                lVar2 = FUN_140200220(0x2c8);
                DAT_140dc33fc = fVar8;
                if (lVar2 != 0) {
                    DAT_140dc33fc = *(float *)(lVar2 + 0x24);
                }
            }
            uVar1 = *(uint *)(param_2 + 0x3c);
            if (uVar1 == 0) {
                uVar1 = *(uint *)(param_2 + 0x38);
            }
            fVar3 = ((float)(ulonglong)uVar1 * _DAT_140dc33f0 + _DAT_140dc33f4) * fVar3;
            if (fVar6 <= fVar3) {
                if (DAT_140dc33fc != fVar5) {
                    fVar5 = fVar6 / DAT_140dc33fc;
                    uVar7 = uVar9;
                }
            }
            else {
                fVar4 = fVar5;
                if (DAT_140dc33fc != fVar5) {
                    fVar4 = fVar3 / DAT_140dc33fc;
                }
                if (fVar3 != fVar5) {
                    fVar5 = (float)((uint)((fVar6 - fVar3) / fVar3) ^ 0x80000000);
                }
                fVar5 = (float)FUN_1408fc7f0(fVar5);
                fVar5 = ((fVar10 - fVar5) * _DAT_140dc33f8 + fVar10) * fVar4;
                uVar7 = uVar11;
            }
        }
        return CONCAT44(uVar7,fVar5);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140565d40(undefined8 param_1,longlong param_2,float *param_3,undefined8 param_4)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    float fVar5;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar6 [16];

    uVar4 = 0;
    auVar6 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if (*(int *)(param_2 + 0x28) != 0) {
        do {
            if (*(int *)((ulonglong)uVar4 * 0xa8 + 0x10 + *(longlong *)(param_2 + 0x30)) == 0x69) {
                if ((DAT_140dc3400 & 1) == 0) {
                    DAT_140dc3400 = DAT_140dc3400 | 1;
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c638ac == 0) && (iVar2 = FUN_1401fffc0(), -1 < iVar2)) {
                            lVar3 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x22d);
                            goto LAB_140565de4;
                        }
                        LAB_140565df0:
                        fVar5 = 0.0;
                    }
                    else {
                        lVar3 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x22d,DAT_140c63858,param_4,auVar6
                        );
                        LAB_140565de4:
                        if (lVar3 == 0) goto LAB_140565df0;
                        fVar5 = *(float *)(lVar3 + 0x18);
                    }
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c638ac == 0) && (iVar2 = FUN_1401fffc0(), -1 < iVar2)) {
                            lVar3 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x22d);
                            goto LAB_140565e3a;
                        }
                        LAB_140565e46:
                        _DAT_140dc3404 = 0.0;
                    }
                    else {
                        lVar3 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x22d,DAT_140c63858);
                        LAB_140565e3a:
                        if (lVar3 == 0) goto LAB_140565e46;
                        _DAT_140dc3404 = *(float *)(lVar3 + 0x18);
                    }
                    _DAT_140dc3404 = _DAT_140dc3404 * fVar5;
                }
                if ((DAT_140dc3400 & 2) == 0) {
                    DAT_140dc3400 = DAT_140dc3400 | 2;
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c638ac == 0) && (iVar2 = FUN_1401fffc0(), -1 < iVar2)) {
                            lVar3 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x22a);
                            goto LAB_140565eb1;
                        }
                        LAB_140565ebb:
                        _DAT_140c8af18 = 0;
                    }
                    else {
                        lVar3 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x22a,DAT_140c63858);
                        LAB_140565eb1:
                        if (lVar3 == 0) goto LAB_140565ebb;
                        _DAT_140c8af18 = *(int *)(lVar3 + 4);
                    }
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c638ac == 0) && (iVar2 = FUN_1401fffc0(), -1 < iVar2)) {
                            lVar3 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x22b);
                            goto LAB_140565f0a;
                        }
                        LAB_140565f14:
                        _DAT_140c8af1c = 0;
                    }
                    else {
                        lVar3 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x22b,DAT_140c63858);
                        LAB_140565f0a:
                        if (lVar3 == 0) goto LAB_140565f14;
                        _DAT_140c8af1c = *(int *)(lVar3 + 4);
                    }
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c638ac == 0) && (iVar2 = FUN_1401fffc0(), -1 < iVar2)) {
                            lVar3 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x22c);
                            goto LAB_140565f63;
                        }
                    }
                    else {
                        lVar3 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x22c,DAT_140c63858);
                        LAB_140565f63:
                        if (lVar3 != 0) {
                            _DAT_140c8af20 = *(int *)(lVar3 + 4);
                            goto LAB_140565f75;
                        }
                    }
                    _DAT_140c8af20 = 0;
                }
                LAB_140565f75:
                for (plVar1 = *(longlong **)(DAT_140c65898 + 0x6f30); plVar1 != (longlong *)0x0;
                     plVar1 = (longlong *)plVar1[0xc]) {
                    iVar2 = (**(code **)(*plVar1 + 8))();
                    if ((((iVar2 == _DAT_140c8af18) || (iVar2 == _DAT_140c8af1c)) || (iVar2 == _DAT_140c8af20)
                        ) && (fVar5 = param_3[1] - *(float *)((longlong)plVar1 + 0x11e4),
                            (*param_3 - *(float *)(plVar1 + 0x23c)) * (*param_3 - *(float *)(plVar1 + 0x23c))
                            + fVar5 * fVar5 + 0.0 <= _DAT_140dc3404)) {
                        return 0;
                    }
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_2 + 0x28));
    }
    return 1;
}



void FUN_1405660e0(undefined8 param_1,longlong param_2)

{
    ulonglong uVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong *plVar7;

    lVar2 = DAT_140c65b70;
    uVar4 = 0;
    uVar1 = *(ulonglong *)(DAT_140c65b70 + 0x808);
    if (uVar1 == 0) {
        return;
    }
    plVar7 = *(longlong **)(DAT_140c65b70 + 0x800);
    while (*plVar7 != param_2) {
        uVar4 = uVar4 + 1;
        plVar7 = plVar7 + 1;
        if (uVar1 <= uVar4) {
            return;
        }
    }
    plVar7 = *(longlong **)(DAT_140c65b70 + 0x800) + uVar4;
    uVar1 = uVar1 - 1;
    FUN_1407db590(plVar7,plVar7 + 1,(uVar1 - uVar4) * 8);
    puVar6 = *(undefined8 **)(lVar2 + 0x800);
    if (uVar1 == 0) goto LAB_1405661e6;
    if (puVar6 == (undefined8 *)0x0) {
        lVar5 = uVar1 * 8 + 0x10;
        uVar4 = uVar1;
    }
    else {
        if (uVar1 < (ulonglong)puVar6[-1] || uVar1 == puVar6[-1]) goto LAB_1405661e6;
        lVar5 = FUN_14018a3e0(uVar1 * 8 + 0x10);
        uVar4 = lVar5 - 0x10U >> 3;
        lVar5 = (lVar5 - 0x10U & 0xfffffffffffffff8) + 0x10;
        iVar3 = (**(code **)puVar6[-2])(puVar6 + -2,lVar5);
        if (iVar3 != 0) {
            puVar6[-1] = uVar4;
            goto LAB_1405661e6;
        }
    }
    puVar6 = (undefined8 *)FUN_14018b280(lVar5,0);
    if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = uVar4;
        *puVar6 = &PTR_LAB_140b55060;
    }
    puVar6 = puVar6 + 2;
    LAB_1405661e6:
    if (*(undefined8 **)(lVar2 + 0x800) != puVar6) {
        FUN_1407db590(puVar6,*(undefined8 **)(lVar2 + 0x800),uVar1 * 8);
        lVar5 = *(longlong *)(lVar2 + 0x800);
        if (lVar5 != 0) {
            (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
        }
        *(undefined8 **)(lVar2 + 0x800) = puVar6;
    }
    *(ulonglong *)(lVar2 + 0x808) = uVar1;
    return;
}



undefined8 FUN_140566240(longlong param_1,code *param_2,undefined8 param_3)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4 * 8);
            while (lVar2 != 0) {
                lVar1 = *(longlong *)(lVar2 + 8);
                iVar3 = (*param_2)(lVar2 + 0x18,param_3);
                lVar2 = lVar1;
                if (iVar3 == 0) {
                    return 0;
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(param_1 + 8));
    }
    return 1;
}



undefined8 * FUN_1405662d0(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0xfff1);
    param_1[1] = uVar1;
    uVar2 = SUB168(ZEXT816(8) * ZEXT816(uVar1),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar1) >> 0x40,0) != 0) {
        uVar2 = 0xffffffffffffffff;
    }
    uVar2 = FUN_14018b280(uVar2,0);
    param_1[2] = uVar2;
    FUN_1407e4830(uVar2,0,param_1[1] << 3);
    param_1[3] = &LAB_1400522d0;
    param_1[4] = &LAB_1400522e0;
    return param_1;
}



undefined8 FUN_140566350(longlong param_1,undefined8 param_2,int *param_3)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = *(longlong *)(param_1 + 8);
    lVar1 = *(longlong *)(lVar2 + 8);
    if (lVar1 != 0) {
        do {
            lVar2 = lVar1;
            if (*param_3 != 0) {
                if (*(int *)(lVar2 + 0x20) != 0) goto LAB_14056638e;
                goto LAB_1405663c8;
            }
            if (*(int *)(lVar2 + 0x20) == 0) {
                LAB_14056638e:
                if ((uint)param_3[1] < *(uint *)(lVar2 + 0x24)) {
                    LAB_1405663c2:
                    lVar1 = *(longlong *)(lVar2 + 0x10);
                }
                else {
                    if ((uint)param_3[1] <= *(uint *)(lVar2 + 0x24)) {
                        if (param_3[2] < *(int *)(lVar2 + 0x28)) goto LAB_1405663c2;
                        if (param_3[2] <= *(int *)(lVar2 + 0x28)) {
                            if ((param_3[3] < *(int *)(lVar2 + 0x2c)) ||
                                ((param_3[3] <= *(int *)(lVar2 + 0x2c) &&
                                  ((uint)param_3[4] < *(uint *)(lVar2 + 0x30))))) goto LAB_1405663c2;
                        }
                    }
                    LAB_1405663c8:
                    lVar1 = *(longlong *)(lVar2 + 0x18);
                }
            }
            else {
                lVar1 = *(longlong *)(lVar2 + 0x10);
            }
        } while (lVar1 != 0);
    }
    FUN_140566eb0(param_1,param_2,lVar1,lVar2,param_3);
    return param_2;
}



longlong * FUN_1405663f0(longlong param_1,longlong *param_2,int *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar5 = *(longlong *)(param_1 + 8);
    lVar1 = *(longlong *)(lVar5 + 8);
    lVar2 = lVar5;
    if (lVar1 == 0) {
        LAB_1405664d6:
        *param_2 = lVar5;
        param_2[1] = lVar2;
        return param_2;
    }
    lVar3 = lVar1;
    do {
        if (*param_3 != 0) {
            if (*(int *)(lVar3 + 0x20) != 0) goto LAB_140566432;
            goto LAB_14056646f;
        }
        if (*(int *)(lVar3 + 0x20) == 0) {
            LAB_140566432:
            if ((uint)param_3[1] < *(uint *)(lVar3 + 0x24)) {
                LAB_140566466:
                lVar4 = *(longlong *)(lVar3 + 0x10);
                lVar2 = lVar3;
            }
            else {
                if ((uint)param_3[1] <= *(uint *)(lVar3 + 0x24)) {
                    if (param_3[2] < *(int *)(lVar3 + 0x28)) goto LAB_140566466;
                    if (param_3[2] <= *(int *)(lVar3 + 0x28)) {
                        if ((param_3[3] < *(int *)(lVar3 + 0x2c)) ||
                            ((param_3[3] <= *(int *)(lVar3 + 0x2c) &&
                              ((uint)param_3[4] < *(uint *)(lVar3 + 0x30))))) goto LAB_140566466;
                    }
                }
                LAB_14056646f:
                lVar4 = *(longlong *)(lVar3 + 0x18);
            }
        }
        else {
            lVar4 = *(longlong *)(lVar3 + 0x10);
            lVar2 = lVar3;
        }
        lVar3 = lVar4;
    } while (lVar4 != 0);
    joined_r0x00014056647b:
    do {
        if (lVar1 == 0) goto LAB_1405664d6;
        if (*(int *)(lVar1 + 0x20) != 0) {
            if (*param_3 != 0) goto LAB_140566494;
            goto LAB_1405664ca;
        }
        if (*param_3 == 0) {
            LAB_140566494:
            if ((uint)param_3[1] <= *(uint *)(lVar1 + 0x24)) {
                if (*(uint *)(lVar1 + 0x24) <= (uint)param_3[1]) {
                    if (*(int *)(lVar1 + 0x28) < param_3[2]) goto LAB_1405664c4;
                    if (*(int *)(lVar1 + 0x28) <= param_3[2]) {
                        if ((*(int *)(lVar1 + 0x2c) < param_3[3]) ||
                            ((*(int *)(lVar1 + 0x2c) <= param_3[3] &&
                              (*(uint *)(lVar1 + 0x30) < (uint)param_3[4])))) goto LAB_1405664c4;
                    }
                }
                LAB_1405664ca:
                lVar5 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
                goto joined_r0x00014056647b;
            }
        }
        LAB_1405664c4:
        lVar1 = *(longlong *)(lVar1 + 0x18);
    } while( true );
}



longlong FUN_1405664f0(longlong param_1,uint *param_2)

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
    FUN_140566ff0(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_1405665e0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 8)) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                plVar5 = (longlong *)**(longlong **)(lVar3 + 8);
                if (plVar5 != *(longlong **)(lVar3 + 8)) {
                    do {
                        plVar1 = (longlong *)*plVar5;
                        FUN_14018b900(plVar5,0);
                        plVar5 = plVar1;
                    } while (plVar1 != (longlong *)*(longlong *)(lVar3 + 8));
                }
                *(undefined8 *)*(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar3 + 8);
                *(longlong *)(*(longlong *)(lVar3 + 8) + 8) = *(longlong *)(lVar3 + 8);
                FUN_14018b900(*(undefined8 *)(lVar3 + 8),0);
                FUN_14018b900(lVar3);
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
        } while (lVar4 != *(longlong *)(param_1 + 8));
    }
    FUN_140008410(param_1);
    return;
}



void FUN_1405666e0(uint param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    longlong local_res18;
    longlong local_res20;
    undefined local_28 [16];

    if (param_1 != 0) {
        uVar8 = 0;
        local_res18 = param_3;
        do {
            lVar1 = FUN_1402398e0(uVar8);
            lVar2 = *(longlong *)(param_2 + 8);
            lVar7 = lVar2;
            if (*(longlong *)(lVar2 + 8) != 0) {
                lVar5 = *(longlong *)(lVar2 + 8);
                do {
                    if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar1 + 4)) {
                        lVar6 = *(longlong *)(lVar5 + 0x18);
                    }
                    else {
                        lVar6 = *(longlong *)(lVar5 + 0x10);
                        lVar7 = lVar5;
                    }
                    lVar5 = lVar6;
                } while (lVar6 != 0);
            }
            if ((lVar7 == lVar2) || (*(uint *)(lVar1 + 4) < *(uint *)(lVar7 + 0x20))) {
                local_res20 = lVar2;
                plVar4 = &local_res20;
            }
            else {
                local_res18 = lVar7;
                plVar4 = &local_res18;
            }
            if (*plVar4 == lVar2) {
                lVar2 = FUN_14018b280(0x10);
                if (lVar2 == 0) {
                    lVar2 = 0;
                }
                else {
                    uVar3 = FUN_14018b280(0x18);
                    *(undefined8 *)(lVar2 + 8) = uVar3;
                    *(undefined8 *)uVar3 = uVar3;
                    *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = *(longlong *)(lVar2 + 8);
                }
                FUN_140055f80(param_2,local_28);
            }
            else {
                lVar2 = *(longlong *)(*plVar4 + 0x28);
            }
            lVar2 = *(longlong *)(lVar2 + 8);
            plVar4 = (longlong *)FUN_14018b280(0x18);
            if (plVar4 + 2 != (longlong *)0x0) {
                plVar4[2] = lVar1;
            }
            *plVar4 = lVar2;
            uVar8 = uVar8 + 1;
            plVar4[1] = *(longlong *)(lVar2 + 8);
            **(longlong ***)(lVar2 + 8) = plVar4;
            *(longlong **)(lVar2 + 8) = plVar4;
        } while (uVar8 < param_1);
    }
    return;
}



void FUN_140566810(uint param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong *plVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    longlong local_res18;
    longlong local_res20;
    undefined local_28 [16];

    if (param_1 != 0) {
        uVar8 = 0;
        local_res18 = param_3;
        do {
            lVar1 = FUN_1402383a0(uVar8);
            lVar2 = *(longlong *)(param_2 + 8);
            lVar7 = lVar2;
            if (*(longlong *)(lVar2 + 8) != 0) {
                lVar5 = *(longlong *)(lVar2 + 8);
                do {
                    if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar1 + 4)) {
                        lVar6 = *(longlong *)(lVar5 + 0x18);
                    }
                    else {
                        lVar6 = *(longlong *)(lVar5 + 0x10);
                        lVar7 = lVar5;
                    }
                    lVar5 = lVar6;
                } while (lVar6 != 0);
            }
            if ((lVar7 == lVar2) || (*(uint *)(lVar1 + 4) < *(uint *)(lVar7 + 0x20))) {
                local_res20 = lVar2;
                plVar4 = &local_res20;
            }
            else {
                local_res18 = lVar7;
                plVar4 = &local_res18;
            }
            if (*plVar4 == lVar2) {
                lVar2 = FUN_14018b280(0x10);
                if (lVar2 == 0) {
                    lVar2 = 0;
                }
                else {
                    uVar3 = FUN_14018b280(0x18);
                    *(undefined8 *)(lVar2 + 8) = uVar3;
                    *(undefined8 *)uVar3 = uVar3;
                    *(longlong *)(*(longlong *)(lVar2 + 8) + 8) = *(longlong *)(lVar2 + 8);
                }
                FUN_140055f80(param_2,local_28);
            }
            else {
                lVar2 = *(longlong *)(*plVar4 + 0x28);
            }
            lVar2 = *(longlong *)(lVar2 + 8);
            plVar4 = (longlong *)FUN_14018b280(0x18);
            if (plVar4 + 2 != (longlong *)0x0) {
                plVar4[2] = lVar1;
            }
            *plVar4 = lVar2;
            uVar8 = uVar8 + 1;
            plVar4[1] = *(longlong *)(lVar2 + 8);
            **(longlong ***)(lVar2 + 8) = plVar4;
            *(longlong **)(lVar2 + 8) = plVar4;
        } while (uVar8 < param_1);
    }
    return;
}



void FUN_140566940(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    if (param_3 == 2) {
        lVar1 = *param_2;
        if (*(uint *)(param_2[1] + 0xc) < *(uint *)(lVar1 + 0xc)) {
            *param_2 = param_2[1];
            param_2[1] = lVar1;
            return;
        }
    }
    else if (1 < param_3) {
        uVar7 = param_3 >> 1;
        if (uVar7 != 0) {
            uVar9 = (param_3 & 0xfffffffffffffffe) + 1;
            do {
                uVar2 = param_2[uVar7 - 1];
                uVar7 = uVar7 - 1;
                uVar9 = uVar9 - 2;
                uVar4 = uVar7;
                uVar8 = uVar9;
                while (uVar8 < param_3) {
                    uVar3 = param_2[uVar8];
                    uVar6 = uVar8 + 1;
                    uVar5 = uVar8;
                    if (uVar6 < param_3) {
                        uVar8 = param_2[uVar6];
                        if ((*(uint *)(uVar3 + 0xc) <= *(uint *)(uVar8 + 0xc)) &&
                            ((*(uint *)(uVar3 + 0xc) < *(uint *)(uVar8 + 0xc) || (uVar3 < uVar8)))) {
                            uVar3 = uVar8;
                            uVar5 = uVar6;
                        }
                    }
                    if ((*(uint *)(uVar3 + 0xc) < *(uint *)(uVar2 + 0xc)) ||
                        ((*(uint *)(uVar3 + 0xc) <= *(uint *)(uVar2 + 0xc) && (uVar3 <= uVar2)))) break;
                    param_2[uVar4] = uVar3;
                    uVar4 = uVar5;
                    uVar8 = uVar5 * 2 + 1;
                }
                param_2[uVar4] = uVar2;
            } while (uVar7 != 0);
        }
        for (param_3 = param_3 - 1; param_3 != 0; param_3 = param_3 - 1) {
            uVar9 = param_2[param_3];
            uVar7 = 1;
            uVar8 = 0;
            param_2[param_3] = *param_2;
            if (1 < param_3) {
                do {
                    uVar4 = param_2[uVar7];
                    uVar2 = uVar7 + 1;
                    uVar6 = uVar7;
                    if (uVar2 < param_3) {
                        uVar7 = param_2[uVar2];
                        if ((*(uint *)(uVar4 + 0xc) <= *(uint *)(uVar7 + 0xc)) &&
                            ((*(uint *)(uVar4 + 0xc) < *(uint *)(uVar7 + 0xc) || (uVar4 < uVar7)))) {
                            uVar4 = uVar7;
                            uVar6 = uVar2;
                        }
                    }
                    if ((*(uint *)(uVar4 + 0xc) < *(uint *)(uVar9 + 0xc)) ||
                        ((*(uint *)(uVar4 + 0xc) <= *(uint *)(uVar9 + 0xc) && (uVar4 <= uVar9)))) break;
                    param_2[uVar8] = uVar4;
                    uVar7 = uVar6 * 2 + 1;
                    uVar8 = uVar6;
                } while (uVar7 < param_3);
            }
            param_2[uVar8] = uVar9;
        }
    }
    return;
}



undefined8
FUN_140566ad0(undefined8 param_1,undefined8 param_2,float param_3,longlong *param_4,
              longlong *param_5_00,undefined8 param_6,longlong param_7,float *param_5)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    float fVar7;
    undefined4 uVar8;

    fVar7 = 0.0;
    uVar8 = 0;
    lVar6 = 4;
    param_7 = param_7 - (longlong)param_5;
    do {
        switch(*(undefined4 *)(param_7 + (longlong)param_5)) {
            case 7:
                if (param_5_00 != (longlong *)0x0) {
                    lVar4 = *param_5_00;
                    LAB_140566b4e:
                    uVar1 = (**(code **)(lVar4 + 0x48))();
                    LAB_140566b51:
                    uVar5 = (ulonglong)uVar1;
                    LAB_140566b53:
                    fVar7 = fVar7 + (float)uVar5 * *param_5;
                }
                break;
            case 8:
                if (param_4 != (longlong *)0x0) {
                    lVar4 = *param_4;
                    goto LAB_140566b4e;
                }
                break;
            case 10:
                if (param_4 != (longlong *)0x0) {
                    uVar1 = FUN_1403b5030();
                    goto LAB_140566b51;
                }
                break;
            case 0xe:
                if (param_4 != (longlong *)0x0) {
                    uVar1 = (**(code **)(*param_4 + 0x70))();
                    goto LAB_140566b51;
                }
                break;
            case 0xf:
                if (param_5_00 != (longlong *)0x0) {
                    uVar1 = (**(code **)(*param_5_00 + 0x70))();
                    goto LAB_140566b51;
                }
                break;
            case 0x10:
                if (param_4 != (longlong *)0x0) {
                    uVar1 = (**(code **)(*param_4 + 0x78))();
                    goto LAB_140566b51;
                }
                break;
            case 0x11:
                if (param_5_00 != (longlong *)0x0) {
                    uVar1 = (**(code **)(*param_5_00 + 0x78))();
                    goto LAB_140566b51;
                }
                break;
            case 0x12:
                fVar7 = fVar7 + param_3 * *param_5;
                break;
            case 0x13:
                if (param_5_00 != (longlong *)0x0) {
                    uVar1 = (**(code **)(*param_5_00 + 0x40))();
                    goto LAB_140566b51;
                }
                break;
            case 0x15:
                if (param_5_00 != (longlong *)0x0) {
                    iVar2 = (**(code **)(*param_5_00 + 0x48))(param_5_00);
                    iVar3 = (**(code **)(*param_5_00 + 0x40))();
                    uVar5 = (ulonglong)(uint)(iVar2 - iVar3);
                    goto LAB_140566b53;
                }
                break;
            case 0x16:
                if (param_5_00 != (longlong *)0x0) {
                    iVar2 = (**(code **)(*param_5_00 + 0x78))(param_5_00);
                    iVar3 = (**(code **)(*param_5_00 + 0x70))();
                    uVar5 = (ulonglong)(uint)(iVar2 - iVar3);
                    goto LAB_140566b53;
                }
                break;
            case 0x17:
                if (param_4 != (longlong *)0x0) {
                    uVar1 = (**(code **)(*param_4 + 0x40))();
                    goto LAB_140566b51;
                }
                break;
            case 0x19:
                if (param_4 != (longlong *)0x0) {
                    iVar2 = (**(code **)(*param_4 + 0x48))(param_4);
                    iVar3 = (**(code **)(*param_4 + 0x40))();
                    uVar5 = (ulonglong)(uint)(iVar2 - iVar3);
                    goto LAB_140566b53;
                }
                break;
            case 0x1a:
                if (param_4 != (longlong *)0x0) {
                    iVar2 = (**(code **)(*param_4 + 0x78))(param_4);
                    iVar3 = (**(code **)(*param_4 + 0x70))();
                    fVar7 = fVar7 + (float)(ulonglong)(uint)(iVar2 - iVar3) * *param_5;
                }
        }
        param_5 = param_5 + 1;
        lVar6 = lVar6 + -1;
        if (lVar6 == 0) {
            return CONCAT44(uVar8,fVar7);
        }
    } while( true );
}



ulonglong FUN_140566d40(longlong param_1,longlong param_2,float *param_3)

{
    int iVar1;
    ulonglong uVar2;
    longlong lVar3;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    float fVar4;
    float fVar5;
    float fVar6;

    if (param_1 == 0) {
        return 0;
    }
    param_2 = param_2 - (longlong)param_3;
    lVar3 = 4;
    fVar6 = 0.0;
    fVar5 = 0.0;
    do {
        iVar1 = *(int *)(param_2 + (longlong)param_3);
        uVar2 = (ulonglong)(iVar1 + -1);
        switch(iVar1) {
            case 1:
                uVar2 = FUN_140466a70(param_1,0);
                fVar4 = extraout_XMM0_Da;
                break;
            case 2:
                uVar2 = FUN_140466a70(param_1,1);
                fVar4 = extraout_XMM0_Da_00;
                break;
            case 3:
                uVar2 = FUN_140466a70(param_1,2);
                fVar4 = extraout_XMM0_Da_01;
                break;
            case 4:
                uVar2 = FUN_140466a70(param_1,3);
                fVar4 = extraout_XMM0_Da_02;
                break;
            case 5:
                uVar2 = FUN_140466a70(param_1,4);
                fVar4 = extraout_XMM0_Da_03;
                break;
            default:
                goto switchD_140566db7_caseD_6;
            case 0xb:
                uVar2 = FUN_140466a70(param_1,0x28);
                fVar4 = extraout_XMM0_Da_04;
                break;
            case 0xc:
                uVar2 = FUN_140462930();
                fVar4 = extraout_XMM0_Da_05;
                break;
            case 0xd:
                uVar2 = FUN_140462980();
                fVar4 = extraout_XMM0_Da_06;
        }
        fVar5 = fVar5 + fVar4 * *param_3;
        switchD_140566db7_caseD_6:
        param_3 = param_3 + 1;
        lVar3 = lVar3 + -1;
        if (lVar3 == 0) {
            if (fVar6 <= fVar5) {
                fVar5 = fVar5 + 0.5;
            }
            else {
                fVar5 = fVar5 - 0.5;
            }
            return uVar2 & 0xffffffff00000000 | (ulonglong)(uint)(int)fVar5;
        }
    } while( true );
}



longlong *
FUN_140566eb0(ulonglong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    if ((param_4 != *(longlong *)(param_1 + 8)) && (param_3 == 0)) {
        if (*(int *)param_5 != (int)param_3) {
            uVar4 = param_1;
            if (*(int *)(param_4 + 0x20) != 0) goto LAB_140566f44;
            goto LAB_140566f78;
        }
        if (*(int *)(param_4 + 0x20) == (int)param_3) {
            LAB_140566f44:
            uVar1 = *(uint *)(param_4 + 0x24);
            if (uVar1 <= *(uint *)((longlong)param_5 + 4)) {
                uVar4 = (ulonglong)uVar1;
                if (*(uint *)((longlong)param_5 + 4) <= uVar1) {
                    uVar1 = *(uint *)(param_4 + 0x28);
                    if (*(int *)(param_5 + 1) < (int)uVar1) goto LAB_140566eee;
                    uVar4 = (ulonglong)uVar1;
                    if (*(int *)(param_5 + 1) <= (int)uVar1) {
                        uVar1 = *(uint *)(param_4 + 0x2c);
                        if ((*(int *)((longlong)param_5 + 0xc) < (int)uVar1) ||
                            ((uVar4 = (ulonglong)uVar1, *(int *)((longlong)param_5 + 0xc) <= (int)uVar1 &&
                                                        (*(uint *)(param_5 + 2) < *(uint *)(param_4 + 0x30))))) goto LAB_140566eee;
                    }
                }
                LAB_140566f78:
                lVar3 = FUN_140567240(uVar4,param_5);
                *(longlong *)(param_4 + 0x18) = lVar3;
                if (param_4 == *(longlong *)(*(longlong *)(param_1 + 8) + 0x18)) {
                    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
                }
                goto LAB_140566fa1;
            }
        }
    }
    LAB_140566eee:
    lVar3 = FUN_14018b280(0x40);
    if ((undefined8 *)(lVar3 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar3 + 0x20) = *param_5;
        *(undefined8 *)(lVar3 + 0x28) = param_5[1];
        *(undefined8 *)(lVar3 + 0x30) = param_5[2];
        *(undefined8 *)(lVar3 + 0x38) = param_5[3];
    }
    *(longlong *)(param_4 + 0x10) = lVar3;
    lVar2 = *(longlong *)(param_1 + 8);
    if (param_4 == lVar2) {
        *(longlong *)(lVar2 + 8) = lVar3;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = lVar3;
    }
    else if (param_4 == *(longlong *)(lVar2 + 0x10)) {
        *(longlong *)(lVar2 + 0x10) = lVar3;
    }
    LAB_140566fa1:
    *(longlong *)(lVar3 + 8) = param_4;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    FUN_1400081c0(lVar3,*(longlong *)(param_1 + 8) + 8);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    *param_2 = lVar3;
    return param_2;
}



void FUN_140566ff0(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_140567280(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



longlong *
FUN_1405670d0(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
              undefined8 *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*(uint *)param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0x58);
        if ((undefined8 *)(lVar2 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar2 + 0x20) = *param_5;
            *(undefined8 *)(lVar2 + 0x28) = param_5[1];
            *(undefined8 *)(lVar2 + 0x30) = param_5[2];
            *(undefined8 *)(lVar2 + 0x38) = param_5[3];
            *(undefined8 *)(lVar2 + 0x40) = param_5[4];
            *(undefined8 *)(lVar2 + 0x48) = param_5[5];
            *(undefined8 *)(lVar2 + 0x50) = param_5[6];
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
        lVar2 = FUN_1405671e0(param_1,param_5);
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



longlong FUN_1405671e0(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x58);
    if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x20) = *param_2;
        *(undefined8 *)(lVar1 + 0x28) = param_2[1];
        *(undefined8 *)(lVar1 + 0x30) = param_2[2];
        *(undefined8 *)(lVar1 + 0x38) = param_2[3];
        *(undefined8 *)(lVar1 + 0x40) = param_2[4];
        *(undefined8 *)(lVar1 + 0x48) = param_2[5];
        *(undefined8 *)(lVar1 + 0x50) = param_2[6];
    }
    return lVar1;
}



void FUN_140567240(undefined8 param_1,undefined8 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280(0x40);
    if ((undefined8 *)(lVar1 + 0x20) != (undefined8 *)0x0) {
        *(undefined8 *)(lVar1 + 0x20) = *param_2;
        *(undefined8 *)(lVar1 + 0x28) = param_2[1];
        *(undefined8 *)(lVar1 + 0x30) = param_2[2];
        *(undefined8 *)(lVar1 + 0x38) = param_2[3];
    }
    return;
}



void FUN_140567280(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8af14,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x000140567346. Too many branches
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



undefined8 * FUN_140567380(undefined8 *param_1,undefined8 *param_2)

{
    longlong lVar1;

    *(undefined4 *)((longlong)param_1 + 0x34) = 1;
    *(undefined4 *)(param_1 + 6) = 8;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined *)(param_1 + 7) = 0;
    *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    if (*(char *)(param_1 + 7) != '\0') {
        lVar1 = FUN_14018b280(0x20);
        param_1[8] = lVar1;
        *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(param_2[8] + 8);
        *(undefined4 *)(param_1[8] + 0xc) = *(undefined4 *)(param_2[8] + 0xc);
        *(undefined4 *)(param_1[8] + 4) = *(undefined4 *)(param_2[8] + 4);
        *(undefined4 *)(param_1[8] + 0x14) = *(undefined4 *)(param_2[8] + 0x14);
        *(undefined4 *)param_1[8] = *(undefined4 *)param_2[8];
        *(undefined4 *)(param_1[8] + 0x1c) = *(undefined4 *)(param_2[8] + 0x1c);
        *(undefined4 *)(param_1[8] + 0x10) = *(undefined4 *)(param_2[8] + 0x10);
    }
    return param_1;
}



longlong FUN_1405674d0(undefined8 param_1,undefined4 *param_2)

{
    longlong lVar1;

    lVar1 = FUN_14018b280();
    if ((undefined4 *)(lVar1 + 0x20) != (undefined4 *)0x0) {
        *(undefined4 *)(lVar1 + 0x20) = *param_2;
        *(undefined4 *)(lVar1 + 0x24) = param_2[1];
        *(undefined4 *)(lVar1 + 0x28) = param_2[2];
        *(undefined4 *)(lVar1 + 0x2c) = param_2[3];
        *(undefined4 *)(lVar1 + 0x30) = param_2[4];
        *(undefined4 *)(lVar1 + 0x34) = param_2[5];
        *(undefined4 *)(lVar1 + 0x38) = param_2[6];
        *(undefined4 *)(lVar1 + 0x3c) = param_2[7];
        *(undefined4 *)(lVar1 + 0x40) = param_2[8];
        *(undefined4 *)(lVar1 + 0x44) = param_2[9];
        *(undefined4 *)(lVar1 + 0x48) = param_2[10];
        *(undefined4 *)(lVar1 + 0x4c) = param_2[0xb];
    }
    return lVar1;
}



longlong *
FUN_140567550(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,uint *param_5)

{
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *)(param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *)(param_4 + 0x20))) {
        lVar2 = FUN_1405674d0();
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
        lVar2 = FUN_1405674d0();
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



char ** FUN_140567610(longlong param_1,char **param_2,uint *param_3)

{
    char *pcVar1;
    char **ppcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    bool bVar7;
    undefined local_res8 [8];

    pcVar1 = *(char **)(param_1 + 8);
    pcVar3 = *(char **)(pcVar1 + 8);
    bVar7 = true;
    pcVar6 = pcVar1;
    if (pcVar3 != (char *)0x0) {
        do {
            pcVar6 = pcVar3;
            bVar7 = *param_3 < *(uint *)(pcVar6 + 0x20);
            if (bVar7) {
                pcVar3 = *(char **)(pcVar6 + 0x10);
            }
            else {
                pcVar3 = *(char **)(pcVar6 + 0x18);
            }
        } while (pcVar3 != (char *)0x0);
    }
    pcVar5 = pcVar6;
    if (bVar7) {
        if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
            ppcVar2 = (char **)FUN_140567550(param_1,local_res8,pcVar3,pcVar6,param_3);
            *param_2 = *ppcVar2;
            *(undefined *)(param_2 + 1) = 1;
            return param_2;
        }
        if ((*pcVar6 == '\0') && (*(char **)(*(longlong *)(pcVar6 + 8) + 8) == pcVar6)) {
            pcVar5 = *(char **)(pcVar6 + 0x18);
        }
        else {
            pcVar5 = *(char **)(pcVar6 + 0x10);
            if (pcVar5 == (char *)0x0) {
                pcVar5 = *(char **)(pcVar6 + 8);
                pcVar4 = pcVar5;
                if (pcVar6 == *(char **)(pcVar5 + 0x10)) {
                    do {
                        pcVar5 = *(char **)(pcVar4 + 8);
                        bVar7 = pcVar4 == *(char **)(pcVar5 + 0x10);
                        pcVar4 = pcVar5;
                    } while (bVar7);
                }
            }
            else {
                for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
                     pcVar4 = *(char **)(pcVar4 + 0x18)) {
                    pcVar5 = pcVar4;
                }
            }
        }
    }
    if (*(uint *)(pcVar5 + 0x20) < *param_3) {
        if (((pcVar6 == pcVar1) || (pcVar3 != (char *)0x0)) || (*param_3 < *(uint *)(pcVar6 + 0x20))) {
            pcVar3 = (char *)FUN_1405674d0(pcVar5,param_3);
            *(char **)(pcVar6 + 0x10) = pcVar3;
            pcVar1 = *(char **)(param_1 + 8);
            if (pcVar6 == pcVar1) {
                *(char **)(pcVar1 + 8) = pcVar3;
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
            else if (pcVar6 == *(char **)(pcVar1 + 0x10)) {
                *(char **)(pcVar1 + 0x10) = pcVar3;
            }
        }
        else {
            pcVar3 = (char *)FUN_1405674d0(pcVar5,param_3);
            *(char **)(pcVar6 + 0x18) = pcVar3;
            if (pcVar6 == *(char **)(*(longlong *)(param_1 + 8) + 0x18)) {
                *(char **)(*(longlong *)(param_1 + 8) + 0x18) = pcVar3;
            }
        }
        *(char **)(pcVar3 + 8) = pcVar6;
        *(undefined8 *)(pcVar3 + 0x10) = 0;
        *(undefined8 *)(pcVar3 + 0x18) = 0;
        FUN_1400081c0(pcVar3,*(longlong *)(param_1 + 8) + 8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 1;
        return param_2;
    }
    *param_2 = pcVar5;
    *(undefined *)(param_2 + 1) = 0;
    return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405677d0(void)

{
    uint uVar1;
    int iVar2;
    undefined4 *puVar3;
    uint uVar4;
    undefined auStack120 [32];
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
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    uVar4 = 0;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c63fc8 != 0) {
                LAB_14056791a:
                FUN_1407db4f0(local_18 ^ (ulonglong)auStack120);
                return;
            }
            iVar2 = FUN_14023de60();
            if (iVar2 < 0) goto LAB_14056791a;
            uVar1 = (**(code **)(*DAT_140c64dd8 + 0x28))();
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_SpellEffectType_140a6d700);
        }
        if (uVar1 <= uVar4) goto LAB_14056791a;
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c63fc8 == 0) {
                iVar2 = FUN_14023de60();
                if (-1 < iVar2) {
                    puVar3 = (undefined4 *)(**(code **)(*DAT_140c64dd8 + 0x20))();
                    goto LAB_140567896;
                }
            }
        }
        else {
            puVar3 = (undefined4 *)(*DAT_140c63848)();
            LAB_140567896:
            if (puVar3 != (undefined4 *)0x0) {
                local_50 = puVar3[2];
                local_4c = puVar3[3];
                local_48 = puVar3[4];
                local_44 = puVar3[5];
                local_40 = puVar3[6];
                local_3c = puVar3[7];
                local_38 = puVar3[8];
                local_34 = puVar3[9];
                local_30 = puVar3[10];
                local_58 = *puVar3;
                local_2c = puVar3[0xb];
                local_54 = local_58;
                FUN_140567610(&DAT_140c7f7b0);
            }
        }
        uVar4 = uVar4 + 1;
    } while( true );
}



void FUN_140567950(undefined8 param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    longlong lVar2;

    FUN_1407e4830(param_2,0,0xa8);
    puVar1 = (undefined4 *)FUN_140238780();
    if ((param_2 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)0x0)) {
        lVar2 = FUN_14023e0c0();
        if ((lVar2 != 0) && ((*(byte *)(lVar2 + 4) & 1) != 0)) {
            *param_2 = *puVar1;
            param_2[1] = puVar1[1];
            param_2[3] = puVar1[2];
            param_2[4] = puVar1[3];
            param_2[5] = puVar1[4];
            param_2[6] = *(undefined4 *)(lVar2 + 4);
            param_2[8] = puVar1[5];
            param_2[9] = puVar1[6];
            param_2[7] = puVar1[0x28];
            param_2[10] = puVar1[0x13];
            param_2[0xb] = puVar1[0x14];
            param_2[0xc] = puVar1[0x15];
            param_2[0xd] = puVar1[0x16];
            param_2[0xe] = puVar1[7];
            param_2[0xf] = puVar1[8];
            param_2[0x10] = puVar1[9];
            param_2[0x11] = puVar1[10];
            param_2[0x12] = puVar1[0xb];
            param_2[0x13] = puVar1[0xc];
            param_2[0x14] = puVar1[0xd];
            param_2[0x15] = puVar1[0xe];
            param_2[0x16] = puVar1[0xf];
            param_2[0x17] = puVar1[0x10];
            param_2[0x18] = puVar1[0x11];
            param_2[0x19] = puVar1[0x12];
            param_2[0x1a] = puVar1[0x17];
            param_2[0x1b] = puVar1[0x18];
            param_2[0x1c] = puVar1[0x19];
            param_2[0x1d] = puVar1[0x1b];
            param_2[0x1e] = puVar1[0x1c];
            param_2[0x1f] = puVar1[0x1d];
            param_2[0x20] = puVar1[0x1e];
            param_2[0x21] = puVar1[0x1f];
            param_2[0x22] = puVar1[0x20];
            param_2[0x26] = puVar1[0x24];
            param_2[0x23] = puVar1[0x21];
            param_2[0x27] = puVar1[0x25];
            param_2[0x24] = puVar1[0x22];
            param_2[0x28] = puVar1[0x26];
            param_2[0x25] = puVar1[0x23];
            param_2[0x29] = puVar1[0x27];
        }
    }
    return;
}



undefined4 FUN_140567af0(undefined8 param_1)

{
    float fVar1;
    float fVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    bool bVar6;
    float fVar7;
    longlong lVar8;
    longlong lVar9;
    float *pfVar10;
    uint uVar11;
    ulonglong uVar12;
    uint uVar13;

    lVar8 = FUN_140238780();
    lVar9 = FUN_14023e0c0();
    if ((lVar9 == 0) || (uVar11 = *(uint *)(lVar9 + 4), (uVar11 & 1) == 0)) {
        return 0x67;
    }
    if (*(int *)(lVar8 + 8) == 0) {
        return 7;
    }
    if (3600000 < *(uint *)(lVar8 + 0x14)) {
        return 8;
    }
    uVar3 = *(uint *)(lVar8 + 0x1c);
    if (0x240c8400 < uVar3) {
        return 0xb;
    }
    uVar4 = *(uint *)(lVar8 + 0x18);
    if ((uVar4 != 0) && ((uVar11 & 4) == 0)) {
        return 0x69;
    }
    uVar13 = *(uint *)(lVar8 + 0x20) & 2;
    if (uVar13 == 0) {
        if (((uVar3 != 0) && ((uVar11 & 8) == 0)) && (uVar4 == 0)) {
            return 0x6a;
        }
        if (uVar3 < uVar4) {
            return 9;
        }
    }
    else {
        if ((uVar11 & 0x10) == 0) {
            return 0x6b;
        }
        if (uVar3 != 0) {
            return 0xb;
        }
    }
    if ((((*(uint *)(lVar8 + 0x14) != 0) || ((uVar3 != 0 && (*(int *)(lVar8 + 0xc) != 4)))) ||
         (uVar13 != 0)) &&
        ((lVar9 = FUN_1407a0fd0(param_1,*(undefined4 *)(lVar8 + 4)), lVar9 != 0 &&
                                                                     (*(int *)(*(longlong *)(lVar9 + 0x70) + 0x120) == 0)))) {
        return 0xc;
    }
    if ((*(int *)(lVar8 + 0x18) - 1U < 0xf9) && (*(int *)(lVar8 + 0x1c) != 0)) {
        return 9;
    }
    if (((*(int *)(lVar8 + 0x54) != 0) && (0x1f < *(uint *)(lVar8 + 0x4c))) ||
        ((*(int *)(lVar8 + 0x58) != 0 && (0x1f < *(uint *)(lVar8 + 0x50))))) {
        return 10;
    }
    switch(*(undefined4 *)(lVar8 + 0xc)) {
        case 1:
            if (0x1d < *(int *)(lVar8 + 0x24) - 1U) {
                return 0x11;
            }
            if (*(int *)(lVar8 + 0x28) <= *(int *)(lVar8 + 0x2c)) {
                if (*(int *)(lVar8 + 0x30) <= *(int *)(lVar8 + 0x34)) {
                    uVar12 = 0;
                    pfVar10 = (float *)(lVar8 + 0x90);
                    bVar6 = false;
                    while ((pfVar10[-4] == 0.0 || (*pfVar10 == 0.0))) {
                        uVar12 = uVar12 + 1;
                        pfVar10 = pfVar10 + 1;
                        if (3 < uVar12) {
                            LAB_140567d82:
                            if (*(int *)(lVar8 + 0x28) != 0) {
                                return 0;
                            }
                            if (*(int *)(lVar8 + 0x2c) != 0) {
                                return 0;
                            }
                            if (*(int *)(lVar8 + 0x30) != 0) {
                                return 0;
                            }
                            if (*(int *)(lVar8 + 0x34) != 0) {
                                return 0;
                            }
                            uVar11 = *(uint *)(lVar8 + 0x38);
                            if ((int)uVar11 < 0) {
                                uVar11 = 0x80000000 - uVar11;
                            }
                            if (0x54 < (int)((uVar11 ^ (int)uVar11 >> 0x1f) - ((int)uVar11 >> 0x1f))) {
                                return 0;
                            }
                            if (bVar6) {
                                return 0;
                            }
                            return 0x13;
                        }
                    }
                    bVar6 = true;
                    goto LAB_140567d82;
                }
            }
            return 0x12;
        case 2:
            if (*(int *)(lVar8 + 0x30) == 0) {
                return 0x10;
            }
            break;
        case 3:
            iVar5 = *(int *)(lVar8 + 0x24);
            fVar1 = *(float *)(lVar8 + 0x28);
            fVar2 = *(float *)(lVar8 + 0x2c);
            if (0xf < iVar5) {
                return 0x16;
            }
            if ((2 < iVar5 - 8U) && (iVar5 != 0xf)) {
                fVar7 = fVar1;
                if ((int)fVar1 < 0) {
                    fVar7 = (float)(-0x80000000 - (int)fVar1);
                }
                if ((int)(((uint)fVar7 ^ (int)fVar7 >> 0x1f) - ((int)fVar7 >> 0x1f)) < 0x55) {
                    fVar7 = fVar2;
                    if ((int)fVar2 < 0) {
                        fVar7 = (float)(-0x80000000 - (int)fVar2);
                    }
                    if ((int)(((uint)fVar7 ^ (int)fVar7 >> 0x1f) - ((int)fVar7 >> 0x1f)) < 0x55) {
                        return 0x17;
                    }
                }
            }
            if (fVar2 < fVar1) {
                return 0x18;
            }
            break;
        case 4:
            if (0x1b < *(uint *)(lVar8 + 0x24)) {
                return 0x24;
            }
            break;
        case 5:
        case 8:
        case 0xc:
        case 0x21:
        case 0x8a:
            if (2 < *(int *)(lVar8 + 0x10) - 1U) {
                return 0x15;
            }
            break;
        case 7:
            lVar8 = FUN_1407a0fd0(param_1,*(undefined4 *)(lVar8 + 4));
            if ((((lVar8 != 0) && (*(uint **)(lVar8 + 0x38) != (uint *)0x0)) &&
                 (**(uint **)(lVar8 + 0x38) < 1000)) &&
                ((iVar5 = *(int *)(*(longlong *)(lVar8 + 0x70) + 0x7c), iVar5 - 2U < 4 || (iVar5 - 7U < 2))))
            {
                return 0x51;
            }
            break;
        case 0xb:
            if (((*(byte *)(lVar8 + 0x20) & 2) == 0) && (*(uint *)(lVar8 + 0x1c) < 200)) {
                return 0xd;
            }
            lVar9 = FUN_1402479c0(*(undefined4 *)(lVar8 + 0x24));
            if ((lVar9 == 0) || ((*(byte *)(lVar9 + 0x24) & 4) == 0)) {
                return 0xe;
            }
            goto LAB_140567cb7;
        case 0xe:
            if (0x10a < *(uint *)(lVar8 + 0x24)) {
                return 0x1f;
            }
            if (*(int *)(lVar8 + 0x28) == *(int *)(lVar8 + 4)) {
                return 0x21;
            }
            if (*(float *)(lVar8 + 0x2c) <= 0.0) {
                return 0x1d;
            }
            if (1.0 < *(float *)(lVar8 + 0x2c)) {
                return 0x1e;
            }
            if (1000 < *(uint *)(lVar8 + 0x38)) {
                return 0x22;
            }
            break;
        case 0xf:
            if (0x17 < *(uint *)(lVar8 + 0x24)) {
                return 0x23;
            }
            break;
        case 0x12:
            if (*(float *)(lVar8 + 0x24) <= 0.0) {
                return 0x54;
            }
            if ((((*(int *)(lVar8 + 0x28) < 1) || (*(int *)(lVar8 + 0x2c) < 1)) &&
                 ((*(byte *)(lVar8 + 0x20) & 2) == 0)) && (*(int *)(lVar8 + 0x1c) == *(int *)(lVar8 + 0x14)))
            {
                return 0x55;
            }
            break;
        case 0x14:
            if (3 < *(byte *)(lVar8 + 0x24)) {
                return 0x65;
            }
            break;
        case 0x18:
            if (1000 < *(int *)(lVar8 + 0x28) + 1U) {
                return 0x5c;
            }
            if ((*(float *)(lVar8 + 0x30) < 0.0) || (1.0 < *(float *)(lVar8 + 0x30))) {
                return 0x5d;
            }
            break;
        case 0x1d:
            if (*(int *)(lVar8 + 0x34) == 0) {
                return 0x66;
            }
            break;
        case 0x1e:
            if (0x1d < *(int *)(lVar8 + 0x24) - 1U) {
                return 0x14;
            }
            break;
        case 0x26:
        case 0x2b:
        case 0x2c:
            if (*(int *)(lVar8 + 0x24) == 0) {
                return 0x10;
            }
            break;
        case 0x2d:
            if (*(int *)(lVar8 + 0x24) == 0) {
                return 0x10;
            }
            if (1 < *(uint *)(lVar8 + 0x28)) {
                return 0x10;
            }
            break;
        case 0x32:
            if (((*(byte *)(lVar8 + 0x20) & 2) == 0) && (*(uint *)(lVar8 + 0x1c) < 200)) {
                return 0xd;
            }
            lVar8 = FUN_14022f2c0(*(undefined4 *)(lVar8 + 0x24));
            if (lVar8 == 0) {
                return 0xe;
            }
            break;
        case 0x34:
            if (0x3e6 < *(int *)(lVar8 + 0x24) - 1U) {
                return 0x5b;
            }
            break;
        case 0x97:
            if (((*(byte *)(lVar8 + 0x20) & 2) == 0) && (*(uint *)(lVar8 + 0x1c) < 200)) {
                return 0xd;
            }
        LAB_140567cb7:
            if (*(int *)(lVar8 + 0x28) == 0) {
                return 0xf;
            }
    }
    return 0;
}



undefined4 FUN_140568260(longlong param_1)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    float *pfVar4;
    uint *puVar5;
    uint **ppuVar6;
    uint *puVar7;
    uint *puVar8;

    lVar3 = *(longlong *)(param_1 + 0x70);
    if (((*(uint *)(lVar3 + 0x110) & 4) != 0) && ((*(uint *)(lVar3 + 0x110) & 8) != 0)) {
        return 0x30;
    }
    if (((*(uint *)(lVar3 + 0x10c) & 0x10000000) != 0) &&
        ((6 < *(uint *)(lVar3 + 0x7c) || ((0x6aU >> (*(uint *)(lVar3 + 0x7c) & 0x1f) & 1) == 0)))) {
        return 0x31;
    }
    iVar1 = *(int *)(lVar3 + 0x18);
    if (10 < iVar1) {
        return 0x32;
    }
    if (iVar1 == 3) {
        iVar1 = *(int *)(lVar3 + 0x7c);
        if (((iVar1 == 6) || (iVar1 < 2)) || (8 < iVar1)) {
            return 0x33;
        }
    }
    else if (iVar1 == 10) {
        iVar1 = *(int *)(lVar3 + 0x7c);
        if (((iVar1 == 6) || (iVar1 < 2)) || (8 < iVar1)) {
            return 0x5e;
        }
        pfVar4 = *(float **)(param_1 + 0x48);
        if (pfVar4 == (float *)0x0) {
            return 0x5f;
        }
        if (pfVar4[1] < *pfVar4) {
            return 0x60;
        }
    }
    if (600000 < *(uint *)(lVar3 + 0x1c)) {
        return 0x34;
    }
    if (5 < *(int *)(lVar3 + 0xf4)) {
        return 0x35;
    }
    if (3 < *(int *)(lVar3 + 0x100)) {
        return 0x36;
    }
    if ((*(int *)(lVar3 + 0x7c) == 4) && (*(int *)(lVar3 + 0x128) != 0)) {
        return 0x3e;
    }
    if (*(int *)(lVar3 + 0x7c) - 7U < 2) {
        if (*(int *)(lVar3 + 0x128) != 0) {
            return 0x3e;
        }
        if ((*(float *)(lVar3 + 0x88) <= *(float *)(lVar3 + 0x6c) &&
             *(float *)(lVar3 + 0x6c) != *(float *)(lVar3 + 0x88)) ||
            (*(float *)(lVar3 + 0x70) < *(float *)(lVar3 + 0x8c))) {
            return 0x3f;
        }
    }
    if (*(float *)(lVar3 + 0x70) < *(float *)(lVar3 + 0x6c)) {
        return 0x40;
    }
    if (360.0 < *(float *)(lVar3 + 0x78)) {
        return 0x41;
    }
    if ((*(uint **)(param_1 + 0x38) != (uint *)0x0) && (0x240c8400 < **(uint **)(param_1 + 0x38))) {
        return 0x42;
    }
    pfVar4 = *(float **)(param_1 + 0x48);
    if (pfVar4 != (float *)0x0) {
        if (pfVar4[3] == 0.0) {
            return 0x44;
        }
        if (1000 < (uint)pfVar4[3]) {
            return 0x45;
        }
        if (pfVar4[1] < *pfVar4 || pfVar4[1] == *pfVar4) {
            return 0x46;
        }
        if (360.0 < pfVar4[2]) {
            return 0x47;
        }
        if ((pfVar4[4] == 0.0) || (5 < (int)pfVar4[4])) {
            return 0x48;
        }
    }
    if (3000 < *(uint *)(lVar3 + 0xa0)) {
        return 0x49;
    }
    puVar5 = *(uint **)(param_1 + 0x50);
    if (puVar5 != (uint *)0x0) {
        uVar2 = puVar5[1];
        if (600000 < uVar2) {
            return 0x4a;
        }
        if (uVar2 <= *puVar5) {
            return 0x4b;
        }
        if (uVar2 <= puVar5[2]) {
            return 0x4c;
        }
    }
    ppuVar6 = *(uint ***)(param_1 + 0x58);
    if (ppuVar6 != (uint **)0x0) {
        puVar5 = ppuVar6[1];
        if ((puVar5 == (uint *)0x0) || (puVar8 = *ppuVar6, 600000 < *puVar8)) {
            return 0x59;
        }
        puVar7 = (uint *)0x1;
        if ((uint *)0x1 < puVar5) {
            do {
                puVar8 = puVar8 + 1;
                if (599999 < *puVar8 - 1) {
                    return 0x59;
                }
                puVar7 = (uint *)((longlong)puVar7 + 1);
            } while (puVar7 < puVar5);
        }
    }
    return 0;
}



void FUN_1405684a0(longlong param_1,undefined4 param_2)

{
    undefined4 *puVar1;

    puVar1 = (undefined4 *)FUN_140237ac0(param_2);
    if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x130) = *puVar1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x134) = puVar1[1];
        *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x138) = puVar1[2];
    }
    return;
}



void FUN_1405684f0(longlong param_1,undefined4 param_2)

{
    undefined4 *puVar1;

    puVar1 = (undefined4 *)FUN_140237ac0(param_2);
    if (puVar1 != (undefined4 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x13c) = *puVar1;
        *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x140) = puVar1[1];
        *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x144) = puVar1[2];
    }
    return;
}



void FUN_140568540(undefined8 param_1,longlong param_2,undefined4 param_3)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined4 *puVar9;
    undefined4 *puVar10;
    longlong lVar11;
    undefined4 *puVar12;
    ulonglong uVar13;

    FUN_1407e4830(*(undefined8 *)(param_2 + 0x70),0,0x1b0);
    puVar2 = (undefined4 *)FUN_140236580(param_3);
    if ((puVar2 != (undefined4 *)0x0) && (lVar3 = FUN_140236e00(puVar2[4]), lVar3 != 0)) {
        lVar4 = FUN_140239cc0(*(undefined4 *)(lVar3 + 0x14));
        lVar5 = FUN_14023ba80(*(undefined4 *)(lVar3 + 0x10));
        lVar6 = FUN_140239440(*(undefined4 *)(lVar3 + 8));
        lVar7 = FUN_14023cfc0(*(undefined4 *)(lVar3 + 0x18));
        lVar8 = FUN_14023bec0(*(undefined4 *)(lVar3 + 0xc));
        puVar9 = (undefined4 *)FUN_140237f00(puVar2[0x48]);
        puVar10 = (undefined4 *)FUN_140237f00(puVar2[0x49]);
        FUN_14023b200(puVar2[0x5a]);
        if ((lVar5 != 0) && (((lVar6 != 0 && (lVar7 != 0)) && (lVar8 != 0)))) {
            **(undefined4 **)(param_2 + 0x70) = *puVar2;
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 4) = puVar2[4];
            *(undefined *)(*(longlong *)(param_2 + 0x70) + 8) = *(undefined *)(puVar2 + 5);
            uVar13 = *(ulonglong *)(puVar2 + 2);
            lVar11 = 0;
            if (uVar13 != 0) {
                if (DAT_140c3fe70 < uVar13) {
                    lVar11 = 0;
                }
                else {
                    lVar11 = uVar13 + DAT_140c3fe68;
                }
            }
            uVar13 = 0xc4;
            *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x10) = lVar11;
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x1c) = puVar2[7];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x20) = puVar2[8];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xa8) = puVar2[0x16];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xac) = puVar2[0x17];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xb0) = puVar2[0x18];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xb4) = puVar2[0x19];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xb8) = puVar2[0x1a];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xbc) = puVar2[0x1b];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x98) = puVar2[0x37];
            do {
                if ((*(int *)((longlong)puVar2 + (uVar13 - 0x2c)) != 0) &&
                    (lVar11 = FUN_14023a100(), lVar11 != 0)) {
                    *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xc0) = 1;
                    *(undefined4 *)(uVar13 + *(longlong *)(param_2 + 0x70)) = *(undefined4 *)(lVar11 + 4);
                    *(undefined4 *)(uVar13 + 0xc + *(longlong *)(param_2 + 0x70)) =
                            *(undefined4 *)(lVar11 + 8);
                    *(undefined4 *)(uVar13 + 0x18 + *(longlong *)(param_2 + 0x70)) =
                            *(undefined4 *)(lVar11 + 0xc);
                    *(undefined4 *)(uVar13 + 0x24 + *(longlong *)(param_2 + 0x70)) =
                            *(undefined4 *)(lVar11 + 0x10);
                }
                uVar13 = uVar13 + 4;
            } while (uVar13 < 0xd0);
            uVar13 = 0x38;
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xa0) = puVar2[0x4f];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xa4) = puVar2[0x50];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x90) = *(undefined4 *)(lVar3 + 100);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x94) = *(undefined4 *)(lVar3 + 0x68);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xf4) = *(undefined4 *)(lVar3 + 0x54);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xf8) = *(undefined4 *)(lVar3 + 0x58);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0xfc) = *(undefined4 *)(lVar3 + 0x40);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x100) = *(undefined4 *)(lVar3 + 0x5c);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x128) = *(undefined4 *)(lVar3 + 0x1c);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x164) = *(undefined4 *)(lVar3 + 0x3c);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 300) = puVar2[0x4e];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x11c) = *(undefined4 *)(lVar3 + 0x38);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x18) = *(undefined4 *)(lVar3 + 0x50);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x24) = puVar2[0x57];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x28) = puVar2[0x4a];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x9c) = *(undefined4 *)(lVar3 + 0x20);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x80) = *(undefined4 *)(lVar3 + 0x24);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x84) = *(undefined4 *)(lVar3 + 0x28);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x88) = *(undefined4 *)(lVar3 + 0x2c);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x8c) = *(undefined4 *)(lVar3 + 0x30);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x104) = *(undefined4 *)(lVar3 + 0x74);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x2c) = *(undefined4 *)(lVar3 + 0x60);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x30) = puVar2[0x67];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x120) = puVar2[0x5a];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x124) = puVar2[0x20];
            do {
                if ((*(int *)((longlong)puVar2 + uVar13 + 0x10c) != 0) &&
                    (puVar12 = (undefined4 *)FUN_140237680(), puVar12 != (undefined4 *)0x0)) {
                    if (puVar12[1] == 0) {
                        *(undefined4 *)(uVar13 + *(longlong *)(param_2 + 0x70)) = *puVar12;
                        *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x34) = 1;
                    }
                    else {
                        *(undefined4 *)(uVar13 + 0x1c + *(longlong *)(param_2 + 0x70)) = *puVar12;
                        *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x50) = 1;
                    }
                }
                uVar13 = uVar13 + 4;
            } while (uVar13 < 0x50);
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((uint)puVar2[0x58] >> 1 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 1;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 2) * 2 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 2;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (puVar2[0x58] << 2 ^ *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 4
                    ;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 4) << 3 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 8;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 8) << 4 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x10;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 6) << 5 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x20;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 9) << 6 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x40;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 10) << 7 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x80;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0xb) << 8 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x100;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0xc) << 9 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x200;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 3) << 10 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x400;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 5) << 0xb ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x800;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0xf) << 0xc ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x1000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x11) << 0xd ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x2000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x12) << 0xe ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x4000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x13) << 0xf ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x8000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x14) << 0x10 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x10000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x15) << 0x11 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x20000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x16) << 0x12 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x40000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x17) << 0x13 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x80000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((uint)*(byte *)((longlong)puVar2 + 0x163) << 0x14 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x100000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x19) << 0x15 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x200000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x1a) << 0x16 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x400000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x1b) << 0x17 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x800000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x1c) << 0x18 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x1000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x1d) << 0x19 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x2000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0x1e) << 0x1a ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x4000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 7) << 0x1b ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x8000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x58] >> 0xd) << 0x1c ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x10000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ ((uint)((puVar2[0x58] & 0x80000000) != 0) << 0x1d ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108)) & 0x20000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x108);
            *puVar1 = *puVar1 ^ (puVar2[0x59] << 0x1e ^ *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108))
                                & 0x40000000;
            *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108) =
                    ((uint)puVar2[0x59] >> 1) << 0x1f |
                    *(uint *)(*(longlong *)(param_2 + 0x70) + 0x108) & 0x7fffffff;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((uint)puVar2[0x59] >> 2 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 1;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x59] >> 5) * 2 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 2;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x59] >> 6) << 2 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 4;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x59] >> 7) << 3 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 8;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (puVar2[0x59] & 0xfffffff0 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x10;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x59] >> 8) << 5 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x20;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x59] >> 3) << 6 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x40;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x59] >> 9) << 7 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x80;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x59] >> 10) << 8 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x100;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x59] >> 0xb) << 9 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x200;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (((uint)puVar2[0x59] >> 0xc) << 10 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x400;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (*(int *)(lVar3 + 0x7c) << 0xb ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x800;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar3 + 0x7c) >> 1) << 0xc ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x1000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar3 + 0x7c) >> 2) << 0xd ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x2000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar3 + 0x7c) >> 3) << 0xe ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x4000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar3 + 0x7c) >> 4) << 0xf ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x8000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar3 + 0x7c) >> 5) << 0x10 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x10000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar3 + 0x7c) >> 6) << 0x11 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x20000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar3 + 0x7c) >> 7) << 0x12 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x40000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar3 + 0x7c) >> 8) << 0x13 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x80000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar3 + 0x7c) >> 9) << 0x14 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x100000;
            if (lVar4 != 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x118) = *(undefined4 *)(lVar4 + 4);
            }
            puVar12 = (undefined4 *)FUN_140237ac0();
            if (puVar12 != (undefined4 *)0x0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x130) = *puVar12;
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x134) = puVar12[1];
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x138) = puVar12[2];
            }
            puVar12 = (undefined4 *)FUN_140237ac0();
            if (puVar12 != (undefined4 *)0x0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x13c) = *puVar12;
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x140) = puVar12[1];
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x144) = puVar12[2];
            }
            if (puVar9 != (undefined4 *)0x0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x148) = *puVar9;
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x14c) = puVar9[1];
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x150) = puVar9[2];
            }
            if (puVar10 != (undefined4 *)0x0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x154) = *puVar10;
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x158) = puVar10[1];
                *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x15c) = puVar10[2];
            }
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x78) = *(undefined4 *)(lVar5 + 4);
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x6c) = puVar2[10];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x70) = puVar2[0xb];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x74) = puVar2[0xc];
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar6 + 4) >> 4) << 0x15 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x200000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar6 + 4) >> 5) << 0x16 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x400000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar6 + 4) >> 3) << 0x17 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x800000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar6 + 4) >> 1) << 0x18 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x1000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar6 + 4) >> 2) << 0x19 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x2000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x110);
            *puVar1 = *puVar1 ^ (*(int *)(lVar7 + 4) << 2 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x110)) & 4;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x110);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar7 + 4) >> 2) << 3 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x110)) & 8;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x110);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar7 + 4) >> 1) << 4 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x110)) & 0x10;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x110);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar7 + 4) >> 4) << 5 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x110)) & 0x20;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x110);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar7 + 4) >> 8) << 6 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x110)) & 0x40;
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x7c) = *(undefined4 *)(lVar8 + 4);
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ (*(int *)(lVar8 + 8) << 0x1a ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x4000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar8 + 8) >> 6) << 0x1b ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x8000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar8 + 8) >> 1) << 0x1c ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x10000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar8 + 8) >> 5) << 0x1d ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x20000000;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x10c);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar8 + 8) >> 2) << 0x1e ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c)) & 0x40000000;
            *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c) =
                    (*(uint *)(lVar8 + 8) >> 3) << 0x1f |
                    *(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c) & 0x7fffffff;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x110);
            *puVar1 = *puVar1 ^ (*(uint *)(lVar8 + 8) >> 4 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x110)) & 1;
            puVar1 = (uint *)(*(longlong *)(param_2 + 0x70) + 0x110);
            *puVar1 = *puVar1 ^ ((*(uint *)(lVar8 + 8) >> 7) * 2 ^
                                 *(uint *)(*(longlong *)(param_2 + 0x70) + 0x110)) & 2;
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x168) = puVar2[0x5b];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x16c) = puVar2[0x5c];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x170) = puVar2[0x5d];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x174) = puVar2[0x5e];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x17c) = puVar2[0x68];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x180) = puVar2[0x69];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x184) = puVar2[0x32];
            uVar13 = 0x198;
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x188) = puVar2[0x36];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x18c) = puVar2[0x33];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 400) = puVar2[0x34];
            *(undefined4 *)(*(longlong *)(param_2 + 0x70) + 0x194) = puVar2[0x38];
            do {
                if ((*(int *)((longlong)puVar2 + (uVar13 - 0xb4)) != 0) &&
                    (puVar9 = (undefined4 *)FUN_14023b640(), puVar9 != (undefined4 *)0x0)) {
                    *(undefined4 *)(uVar13 + *(longlong *)(param_2 + 0x70)) = *puVar9;
                }
                uVar13 = uVar13 + 4;
            } while (uVar13 < 0x1ac);
        }
    }
    return;
}



void FUN_1405693b0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res18;
    uint local_28;
    int local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined local_18 [16];

    lVar3 = FUN_140236580(param_2);
    if (lVar3 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x5b8);
        local_res18 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res18 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res18 == lVar1) || (param_2 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar1;
        }
        if ((local_res18 == lVar1) &&
            (((local_24 = *(int *)(lVar3 + 0xbc), local_24 != 0 || (*(int *)(lVar3 + 0xc0) != 0)) ||
              (*(int *)(lVar3 + 0xc4) != 0)))) {
            local_20 = *(undefined4 *)(lVar3 + 0xc0);
            local_1c = *(undefined4 *)(lVar3 + 0xc4);
            local_28 = param_2;
            FUN_1403af840(param_1 + 0x5b0,local_18,&local_28);
        }
    }
    return;
}



void FUN_140569480(longlong param_1,longlong param_2,undefined4 param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    int *piVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong local_res10;
    undefined4 local_48 [2];
    undefined8 *local_40;
    undefined local_38 [16];

    puVar7 = (undefined8 *)0x0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    lVar1 = FUN_140236580(param_3);
    if (lVar1 != 0) {
        uVar2 = FUN_1407a1120(param_1,param_3);
        *(undefined8 *)(param_2 + 0x38) = uVar2;
        uVar2 = FUN_1407a11c0(param_1,param_3);
        *(undefined8 *)(param_2 + 0x40) = uVar2;
        uVar2 = FUN_1407a1260(param_1,param_3);
        *(undefined8 *)(param_2 + 0x48) = uVar2;
        uVar2 = FUN_1407a1300(param_1,param_3);
        *(undefined8 *)(param_2 + 0x50) = uVar2;
        uVar2 = FUN_1407a13a0(param_1,param_3);
        *(undefined8 *)(param_2 + 0x58) = uVar2;
        piVar3 = (int *)FUN_140239000(*(undefined4 *)(lVar1 + 0x138));
        lVar8 = *(longlong *)(param_1 + 0x528);
        local_res10 = lVar8;
        if (*(longlong *)(lVar8 + 8) != 0) {
            lVar5 = *(longlong *)(lVar8 + 8);
            do {
                if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar1 + 0x138)) {
                    lVar6 = *(longlong *)(lVar5 + 0x18);
                }
                else {
                    lVar6 = *(longlong *)(lVar5 + 0x10);
                    local_res10 = lVar5;
                }
                lVar5 = lVar6;
            } while (lVar6 != 0);
        }
        if ((local_res10 == lVar8) || (*(uint *)(lVar1 + 0x138) < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar8;
        }
        if ((piVar3 != (int *)0x0) && (local_res10 == lVar8)) {
            puVar4 = (undefined8 *)FUN_14018b280(0x10);
            if (puVar4 != (undefined8 *)0x0) {
                puVar4[1] = 0;
                *puVar4 = 0;
                puVar7 = puVar4;
            }
            lVar8 = 0x20;
            do {
                piVar3 = piVar3 + 1;
                if (*piVar3 != 0) {
                    FUN_140003460(puVar7,piVar3);
                }
                lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
            local_48[0] = *(undefined4 *)(lVar1 + 0x138);
            local_40 = puVar7;
            FUN_140055f80(param_1 + 0x520,local_38,local_48);
        }
        FUN_1405693b0(param_1,param_3);
    }
    return;
}



void FUN_140569630(longlong param_1)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined4 *puVar7;
    longlong lVar8;
    undefined4 *puVar9;

    lVar6 = 0;
    lVar8 = param_1 + 8;
    if (param_1 == 0) {
        lVar8 = lVar6;
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x80) + 8;
    }
    FUN_1403d8790(lVar6,lVar8);
    puVar1 = *(undefined4 **)(param_1 + 0x70);
    puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 0x80) + 0x70);
    if ((((uint)puVar1 | (uint)puVar2) & 0xf) == 0) {
        lVar6 = 3;
        do {
            puVar9 = puVar1;
            puVar7 = puVar2;
            uVar3 = puVar9[1];
            uVar4 = puVar9[2];
            uVar5 = puVar9[3];
            *puVar7 = *puVar9;
            puVar7[1] = uVar3;
            puVar7[2] = uVar4;
            puVar7[3] = uVar5;
            uVar3 = puVar9[5];
            uVar4 = puVar9[6];
            uVar5 = puVar9[7];
            puVar7[4] = puVar9[4];
            puVar7[5] = uVar3;
            puVar7[6] = uVar4;
            puVar7[7] = uVar5;
            uVar3 = puVar9[9];
            uVar4 = puVar9[10];
            uVar5 = puVar9[0xb];
            puVar7[8] = puVar9[8];
            puVar7[9] = uVar3;
            puVar7[10] = uVar4;
            puVar7[0xb] = uVar5;
            uVar3 = puVar9[0xd];
            uVar4 = puVar9[0xe];
            uVar5 = puVar9[0xf];
            puVar7[0xc] = puVar9[0xc];
            puVar7[0xd] = uVar3;
            puVar7[0xe] = uVar4;
            puVar7[0xf] = uVar5;
            uVar3 = puVar9[0x11];
            uVar4 = puVar9[0x12];
            uVar5 = puVar9[0x13];
            puVar7[0x10] = puVar9[0x10];
            puVar7[0x11] = uVar3;
            puVar7[0x12] = uVar4;
            puVar7[0x13] = uVar5;
            uVar3 = puVar9[0x15];
            uVar4 = puVar9[0x16];
            uVar5 = puVar9[0x17];
            puVar7[0x14] = puVar9[0x14];
            puVar7[0x15] = uVar3;
            puVar7[0x16] = uVar4;
            puVar7[0x17] = uVar5;
            uVar3 = puVar9[0x19];
            uVar4 = puVar9[0x1a];
            uVar5 = puVar9[0x1b];
            puVar7[0x18] = puVar9[0x18];
            puVar7[0x19] = uVar3;
            puVar7[0x1a] = uVar4;
            puVar7[0x1b] = uVar5;
            uVar3 = puVar9[0x1d];
            uVar4 = puVar9[0x1e];
            uVar5 = puVar9[0x1f];
            puVar7[0x1c] = puVar9[0x1c];
            puVar7[0x1d] = uVar3;
            puVar7[0x1e] = uVar4;
            puVar7[0x1f] = uVar5;
            lVar6 = lVar6 + -1;
            puVar2 = puVar7 + 0x20;
            puVar1 = puVar9 + 0x20;
        } while (lVar6 != 0);
        uVar3 = puVar9[0x21];
        uVar4 = puVar9[0x22];
        uVar5 = puVar9[0x23];
        puVar7[0x20] = puVar9[0x20];
        puVar7[0x21] = uVar3;
        puVar7[0x22] = uVar4;
        puVar7[0x23] = uVar5;
        uVar3 = puVar9[0x25];
        uVar4 = puVar9[0x26];
        uVar5 = puVar9[0x27];
        puVar7[0x24] = puVar9[0x24];
        puVar7[0x25] = uVar3;
        puVar7[0x26] = uVar4;
        puVar7[0x27] = uVar5;
        uVar3 = puVar9[0x29];
        uVar4 = puVar9[0x2a];
        uVar5 = puVar9[0x2b];
        puVar7[0x28] = puVar9[0x28];
        puVar7[0x29] = uVar3;
        puVar7[0x2a] = uVar4;
        puVar7[0x2b] = uVar5;
        return;
    }
    FUN_1407db590(puVar2,puVar1,0x1b0);
    return;
}



void FUN_140569700(undefined8 *param_1)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6c708;
    FUN_140569630();
    *param_1 = &PTR_FUN_140b667e0;
    if (*(int *)(param_1 + 0xf) != 0) {
        FUN_14018b900(param_1[0xe],0);
    }
    lVar1 = param_1[0xc];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x00014056975d. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



undefined8 FUN_140569770(undefined8 param_1,ulonglong param_2)

{
    FUN_140569700();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1405697b0(undefined8 *param_1,longlong param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    longlong lVar7;
    undefined4 *puVar8;

    lVar7 = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    *param_1 = &PTR_FUN_140b6c708;
    param_1[0x10] = param_2;
    if (param_2 != 0) {
        lVar7 = param_2 + 8;
    }
    FUN_1403d8790(param_1 + 1,lVar7);
    puVar5 = (undefined4 *)FUN_14018b280(0x1b0,8);
    *(undefined4 *)(param_1 + 0xf) = 1;
    param_1[0xe] = puVar5;
    puVar1 = *(undefined4 **)(param_1[0x10] + 0x70);
    if ((((uint)puVar1 | (uint)puVar5) & 0xf) == 0) {
        lVar7 = 3;
        do {
            puVar8 = puVar1;
            puVar6 = puVar5;
            uVar2 = puVar8[1];
            uVar3 = puVar8[2];
            uVar4 = puVar8[3];
            *puVar6 = *puVar8;
            puVar6[1] = uVar2;
            puVar6[2] = uVar3;
            puVar6[3] = uVar4;
            uVar2 = puVar8[5];
            uVar3 = puVar8[6];
            uVar4 = puVar8[7];
            puVar6[4] = puVar8[4];
            puVar6[5] = uVar2;
            puVar6[6] = uVar3;
            puVar6[7] = uVar4;
            uVar2 = puVar8[9];
            uVar3 = puVar8[10];
            uVar4 = puVar8[0xb];
            puVar6[8] = puVar8[8];
            puVar6[9] = uVar2;
            puVar6[10] = uVar3;
            puVar6[0xb] = uVar4;
            uVar2 = puVar8[0xd];
            uVar3 = puVar8[0xe];
            uVar4 = puVar8[0xf];
            puVar6[0xc] = puVar8[0xc];
            puVar6[0xd] = uVar2;
            puVar6[0xe] = uVar3;
            puVar6[0xf] = uVar4;
            uVar2 = puVar8[0x11];
            uVar3 = puVar8[0x12];
            uVar4 = puVar8[0x13];
            puVar6[0x10] = puVar8[0x10];
            puVar6[0x11] = uVar2;
            puVar6[0x12] = uVar3;
            puVar6[0x13] = uVar4;
            uVar2 = puVar8[0x15];
            uVar3 = puVar8[0x16];
            uVar4 = puVar8[0x17];
            puVar6[0x14] = puVar8[0x14];
            puVar6[0x15] = uVar2;
            puVar6[0x16] = uVar3;
            puVar6[0x17] = uVar4;
            uVar2 = puVar8[0x19];
            uVar3 = puVar8[0x1a];
            uVar4 = puVar8[0x1b];
            puVar6[0x18] = puVar8[0x18];
            puVar6[0x19] = uVar2;
            puVar6[0x1a] = uVar3;
            puVar6[0x1b] = uVar4;
            uVar2 = puVar8[0x1d];
            uVar3 = puVar8[0x1e];
            uVar4 = puVar8[0x1f];
            puVar6[0x1c] = puVar8[0x1c];
            puVar6[0x1d] = uVar2;
            puVar6[0x1e] = uVar3;
            puVar6[0x1f] = uVar4;
            lVar7 = lVar7 + -1;
            puVar5 = puVar6 + 0x20;
            puVar1 = puVar8 + 0x20;
        } while (lVar7 != 0);
        uVar2 = puVar8[0x21];
        uVar3 = puVar8[0x22];
        uVar4 = puVar8[0x23];
        puVar6[0x20] = puVar8[0x20];
        puVar6[0x21] = uVar2;
        puVar6[0x22] = uVar3;
        puVar6[0x23] = uVar4;
        uVar2 = puVar8[0x25];
        uVar3 = puVar8[0x26];
        uVar4 = puVar8[0x27];
        puVar6[0x24] = puVar8[0x24];
        puVar6[0x25] = uVar2;
        puVar6[0x26] = uVar3;
        puVar6[0x27] = uVar4;
        uVar2 = puVar8[0x29];
        uVar3 = puVar8[0x2a];
        uVar4 = puVar8[0x2b];
        puVar6[0x28] = puVar8[0x28];
        puVar6[0x29] = uVar2;
        puVar6[0x2a] = uVar3;
        puVar6[0x2b] = uVar4;
        return param_1;
    }
    FUN_1407db590(puVar5,puVar1,0x1b0);
    return param_1;
}
