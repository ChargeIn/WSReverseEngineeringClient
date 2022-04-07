//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1407bfff0(uint *param_1,uint param_2)

{
    undefined8 uVar1;
    uint uVar2;

    if (param_2 != *param_1) {
        uVar2 = param_2;
        if (param_2 == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = SUB168(ZEXT816(2) * ZEXT416(param_2),0);
            if (SUB168(ZEXT816(2) * ZEXT416(param_2) >> 0x40,0) != 0) {
                uVar1 = 0xffffffffffffffff;
            }
            uVar1 = FUN_14018b280(uVar1,2);
            if (*param_1 < param_2) {
                uVar2 = *param_1;
            }
        }
        FUN_1407db590(uVar1,*(undefined8 *)(param_1 + 2),(ulonglong)uVar2 * 2);
        FUN_1407e4830(*(undefined8 *)(param_1 + 2),0,(ulonglong)uVar2 * 2);
        FUN_14018b900(*(undefined8 *)(param_1 + 2),0);
        *(undefined8 *)(param_1 + 2) = uVar1;
        *param_1 = param_2;
    }
    return;
}



void FUN_1407c0090(uint *param_1,uint param_2)

{
    undefined8 *puVar1;
    uint *puVar2;
    ulonglong uVar3;
    int iVar4;
    undefined8 *puVar5;

    uVar3 = (ulonglong)param_2;
    if (param_2 != *param_1) {
        if (param_2 == 0) {
            puVar5 = (undefined8 *)0x0;
        }
        else {
            puVar2 = (uint *)FUN_14018b280();
            if (puVar2 == (uint *)0x0) {
                puVar5 = (undefined8 *)0x0;
            }
            else {
                puVar5 = (undefined8 *)(puVar2 + 2);
                *puVar2 = param_2;
                puVar1 = puVar5;
                for (iVar4 = param_2 - 1; -1 < iVar4; iVar4 = iVar4 + -1) {
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    puVar1 = puVar1 + 3;
                }
            }
            if (*param_1 < param_2) {
                uVar3 = (ulonglong)*param_1;
            }
        }
        FUN_1407db590(puVar5,*(undefined8 *)(param_1 + 2),uVar3 * 0x18);
        FUN_1407e4830(*(undefined8 *)(param_1 + 2),0,uVar3 * 0x18);
        if (*(longlong *)(param_1 + 2) != 0) {
            FUN_1407c02b0();
        }
        *(undefined8 **)(param_1 + 2) = puVar5;
        *param_1 = param_2;
    }
    return;
}



void FUN_1407c0180(uint *param_1,uint param_2)

{
    undefined8 uVar1;
    uint uVar2;

    if (param_2 != *param_1) {
        uVar2 = param_2;
        if (param_2 == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = FUN_14018b280(param_2,2);
            if (*param_1 < param_2) {
                uVar2 = *param_1;
            }
        }
        FUN_1407db590(uVar1,*(undefined8 *)(param_1 + 2),uVar2);
        FUN_1407e4830(*(undefined8 *)(param_1 + 2),0,uVar2);
        FUN_14018b900(*(undefined8 *)(param_1 + 2),0);
        *(undefined8 *)(param_1 + 2) = uVar1;
        *param_1 = param_2;
    }
    return;
}



void FUN_1407c0210(uint *param_1,uint param_2)

{
    undefined8 uVar1;
    uint uVar2;

    if (param_2 != *param_1) {
        uVar2 = param_2;
        if (param_2 == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = SUB168(ZEXT816(4) * ZEXT416(param_2),0);
            if (SUB168(ZEXT816(4) * ZEXT416(param_2) >> 0x40,0) != 0) {
                uVar1 = 0xffffffffffffffff;
            }
            uVar1 = FUN_14018b280(uVar1,2);
            if (*param_1 < param_2) {
                uVar2 = *param_1;
            }
        }
        FUN_1407db590(uVar1,*(undefined8 *)(param_1 + 2),(ulonglong)uVar2 << 2);
        FUN_1407e4830(*(undefined8 *)(param_1 + 2),0,(ulonglong)uVar2 << 2);
        FUN_14018b900(*(undefined8 *)(param_1 + 2),0);
        *(undefined8 *)(param_1 + 2) = uVar1;
        *param_1 = param_2;
    }
    return;
}



longlong FUN_1407c02b0(longlong param_1)

{
    undefined8 *puVar1;
    undefined *puVar2;
    int iVar3;

    iVar3 = *(int *)(param_1 + -8) + -1;
    if (-1 < iVar3) {
        puVar2 = (undefined *)(param_1 + 8 + (longlong)*(int *)(param_1 + -8) * 0x18);
        do {
            puVar1 = (undefined8 *)(&DAT_ffffffffffffffe8 + (longlong)puVar2);
            puVar2 = &DAT_ffffffffffffffe8 + (longlong)puVar2;
            FUN_14018b900(*puVar1,0);
            iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



undefined8 FUN_1407c0310(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    longlong *local_res10;

    if ((param_2 == 0) || (param_3 == 0)) {
        uVar3 = 0x80070057;
    }
    else {
        uVar3 = FUN_1401b5b50(DAT_140c63788,param_2,2,0,&local_res10);
        if (-1 < (int)uVar3) {
            uVar3 = FUN_1407c04b0(param_1);
            FUN_1407c0770(param_1,uVar3,param_3 + 8);
            FUN_1407c0830(param_1,uVar3,*(undefined8 *)(param_3 + 0x40),*(undefined4 *)(param_3 + 0x38),
                          (undefined8 *)(param_3 + 0x40));
            FUN_1407c0970(param_1,uVar3,*(undefined8 *)(param_3 + 0x50),
                          (ulonglong)*(uint *)(param_3 + 0x48) << 2,(undefined8 *)(param_3 + 0x50));
            for (lVar1 = *(longlong *)(param_1 + 8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
                puVar2 = *(undefined8 **)(lVar1 + 0x18);
                if (puVar2 != (undefined8 *)0x0) {
                    *(undefined8 *)(lVar1 + 0x20) = *puVar2;
                    *puVar2 = *(undefined8 *)(lVar1 + 0x10);
                }
            }
            for (puVar2 = *(undefined8 **)(param_1 + 8); puVar2 != (undefined8 *)0x0;
                 puVar2 = (undefined8 *)puVar2[5]) {
                (**(code **)(*local_res10 + 0x70))(local_res10,*puVar2,puVar2[1],0,0);
                (**(code **)(*local_res10 + 0x70))
                        (local_res10,&DAT_140b720b8,(puVar2[1] + 0xf & 0xfffffffffffffff0) - puVar2[1],0,0
                        );
            }
            for (lVar1 = *(longlong *)(param_1 + 8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x28)) {
                if (*(undefined8 **)(lVar1 + 0x18) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 0x20);
                }
            }
            (**(code **)(*local_res10 + 0x88))(local_res10);
            (**(code **)(*local_res10 + 8))(local_res10);
            return 0;
        }
    }
    return uVar3;
}



// WARNING: Removing unreachable block (ram,0x0001407c0923)

longlong FUN_1407c04b0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined8 uVar13;
    undefined8 uVar14;
    undefined8 *puVar15;

    uVar4 = *param_3;
    uVar5 = param_3[2];
    uVar6 = param_3[4];
    uVar7 = param_3[5];
    uVar8 = param_3[6];
    uVar9 = param_3[8];
    uVar10 = param_3[10];
    uVar11 = param_3[0xb];
    uVar2 = param_3[0xc];
    uVar3 = param_3[0xe];
    uVar13 = *(undefined8 *)(param_3 + 0x10);
    uVar12 = param_3[0x12];
    uVar14 = *(undefined8 *)(param_3 + 0x12);
    uVar1 = *(undefined8 *)(param_3 + 0x14);
    FUN_1407e4830(param_3,0,0x58);
    *param_3 = uVar4;
    param_3[2] = uVar5;
    param_3[4] = uVar6;
    param_3[5] = uVar7;
    param_3[6] = uVar8;
    param_3[8] = uVar9;
    param_3[0xc] = uVar10;
    param_3[0xd] = uVar11;
    param_3[0xc] = uVar2;
    param_3[0xe] = uVar3;
    *(undefined8 *)(param_3 + 0x10) = uVar13;
    param_3[0x12] = uVar12;
    *(undefined8 *)(param_3 + 0x14) = uVar1;
    puVar15 = (undefined8 *)FUN_14018b280(uVar14,0x30);
    *puVar15 = param_3;
    puVar15[1] = 0x58;
    puVar15[2] = *param_1;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar15[3] = 0;
    *(undefined8 **)param_1[2] = puVar15;
    param_1[2] = (longlong)(puVar15 + 5);
    *param_1 = *param_1 + 0x60;
    return *param_1;
}



longlong FUN_1407c05c0(longlong *param_1,longlong param_2,undefined8 *param_3,ulonglong param_4,
                       undefined8 param_5)

{
    undefined8 uVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined2 local_18;

    puVar3 = param_3;
    for (uVar5 = param_4 / 0x18; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar2 = *(undefined4 *)puVar3;
        uVar1 = puVar3[2];
        *puVar3 = 0;
        puVar3[2] = 0;
        *(undefined4 *)puVar3 = uVar2;
        local_18 = (undefined2)uVar1;
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar3 + 1);
        *(undefined4 *)((longlong)puVar3 + 0x14) = *(undefined4 *)((longlong)puVar3 + 0xc);
        *(undefined2 *)(puVar3 + 2) = local_18;
        *(int *)((longlong)puVar3 + 0x14) = (int)((ulonglong)uVar1 >> 0x20);
        puVar3 = puVar3 + 3;
    }
    puVar3 = (undefined8 *)FUN_14018b280(0x30);
    lVar4 = 0;
    *puVar3 = param_3;
    puVar3[1] = param_4;
    if (param_4 != 0) {
        lVar4 = *param_1 - param_2;
    }
    puVar3[2] = lVar4;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[3] = param_5;
    *(undefined8 **)param_1[2] = puVar3;
    param_1[2] = (longlong)(puVar3 + 5);
    *param_1 = *param_1 + (param_4 + 0xf & 0xfffffffffffffff0);
    return *param_1;
}



longlong FUN_1407c06c0(longlong *param_1,longlong param_2,undefined2 *param_3,ulonglong param_4,
                       undefined8 param_5)

{
    undefined2 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    puVar1 = param_3;
    for (uVar4 = param_4 >> 1; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar1 = *puVar1;
        puVar1 = puVar1 + 1;
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x30);
    lVar3 = 0;
    *puVar2 = param_3;
    puVar2[1] = param_4;
    if (param_4 != 0) {
        lVar3 = *param_1 - param_2;
    }
    puVar2[2] = lVar3;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = param_5;
    *(undefined8 **)param_1[2] = puVar2;
    param_1[2] = (longlong)(puVar2 + 5);
    *param_1 = *param_1 + (param_4 + 0xf & 0xfffffffffffffff0);
    return *param_1;
}



void FUN_1407c0770(undefined8 param_1,undefined8 param_2,uint *param_3)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;

    FUN_1407c06c0(param_1,param_2,*(undefined8 *)(param_3 + 2),(ulonglong)*param_3 * 2,param_3 + 2);
    uVar3 = FUN_1407c05c0(param_1,param_2,*(undefined8 *)(param_3 + 8),(ulonglong)param_3[6] * 0x18,
                          param_3 + 8);
    uVar5 = 0;
    if (param_3[6] != 0) {
        do {
            lVar2 = *(longlong *)(param_3 + 8);
            puVar1 = (undefined8 *)(lVar2 + 8 + uVar5 * 0x18);
            FUN_1407c06c0(param_1,uVar3,*puVar1,(ulonglong)*(uint *)(lVar2 + uVar5 * 0x18) * 2,puVar1);
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < param_3[6]);
    }
    return;
}



longlong FUN_1407c0830(longlong *param_1,longlong param_2,undefined *param_3,longlong param_4,
                       undefined8 param_5)

{
    undefined8 *puVar1;
    undefined *puVar2;
    longlong lVar3;

    puVar2 = param_3;
    lVar3 = param_4;
    if (param_4 != 0) {
        do {
            *puVar2 = *puVar2;
            lVar3 = lVar3 + -1;
            puVar2 = puVar2 + 1;
        } while (lVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_14018b280(0x30);
    lVar3 = 0;
    *puVar1 = param_3;
    puVar1[1] = param_4;
    if (param_4 != 0) {
        lVar3 = *param_1 - param_2;
    }
    puVar1[2] = lVar3;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = param_5;
    *(undefined8 **)param_1[2] = puVar1;
    param_1[2] = (longlong)(puVar1 + 5);
    *param_1 = *param_1 + (param_4 + 0xfU & 0xfffffffffffffff0);
    return *param_1;
}



longlong FUN_1407c0970(longlong *param_1,longlong param_2,undefined4 *param_3,ulonglong param_4,
                       undefined8 param_5)

{
    undefined4 *puVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;

    puVar1 = param_3;
    for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar1 = *puVar1;
        puVar1 = puVar1 + 1;
    }
    puVar2 = (undefined8 *)FUN_14018b280(0x30);
    lVar3 = 0;
    *puVar2 = param_3;
    puVar2[1] = param_4;
    if (param_4 != 0) {
        lVar3 = *param_1 - param_2;
    }
    puVar2[2] = lVar3;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[3] = param_5;
    *(undefined8 **)param_1[2] = puVar2;
    param_1[2] = (longlong)(puVar2 + 5);
    *param_1 = *param_1 + (param_4 + 0xf & 0xfffffffffffffff0);
    return *param_1;
}



undefined8 FUN_1407c0a20(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
    uint uVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    uint uVar5;
    short *psVar6;

    iVar2 = FUN_14018e2c0(*param_2,*(longlong *)(param_3 + 8) + param_4);
    if ((iVar2 != 0) || (*(int *)(param_2 + 1) != *(int *)(param_3 + 0x10))) {
        return 0x80004005;
    }
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    if (uVar1 == *(uint *)(param_3 + 0x18)) {
        uVar5 = 0;
        if (uVar1 != 0) {
            puVar4 = (undefined8 *)param_2[2];
            psVar6 = (short *)(param_4 + 0x10 + *(longlong *)(param_3 + 0x20));
            do {
                iVar2 = FUN_14018e2c0(*puVar4,*(longlong *)(psVar6 + -4) + param_4);
                if ((iVar2 != 0) || (*(short *)(puVar4 + 1) != *psVar6)) {
                    return 0x80004005;
                }
                uVar5 = uVar5 + 1;
                psVar6 = psVar6 + 0xc;
                puVar4 = puVar4 + 5;
            } while (uVar5 < uVar1);
        }
        uVar3 = 0;
    }
    else {
        uVar3 = 0x80004005;
    }
    return uVar3;
}



ulonglong FUN_1407c0af0(longlong param_1,ushort *param_2)

{
    ushort uVar1;
    ulonglong uVar2;
    ushort uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ushort *puVar6;
    ulonglong uVar7;
    longlong lVar8;
    ushort uVar9;

    if (1 < *(int *)(param_1 + 0x10)) {
        uVar7 = 0;
        if ((ulonglong)*(uint *)(param_1 + 0x24) != 0) {
            lVar8 = *(longlong *)(param_1 + 0x58) - (longlong)param_2;
            puVar6 = param_2;
            LAB_1407c0b43:
            do {
                uVar1 = *puVar6;
                uVar9 = uVar1;
                if (uVar1 < 0x80) {
                    if ((ushort)(uVar1 - 0x41) < 0x1a) {
                        uVar9 = uVar1 + 0x20;
                    }
                }
                else {
                    uVar4 = 0;
                    uVar5 = 0x3d1;
                    do {
                        uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                        if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar1) {
                            if (uVar1 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                                uVar9 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
                                break;
                            }
                            uVar4 = uVar2 + 1;
                            uVar2 = uVar5;
                        }
                        uVar5 = uVar2;
                    } while (uVar4 < uVar2);
                }
                uVar3 = *(ushort *)(lVar8 + (longlong)puVar6);
                if (uVar3 < 0x80) {
                    if ((ushort)(uVar3 - 0x41) < 0x1a) {
                        uVar3 = uVar3 + 0x20;
                    }
                }
                else {
                    uVar4 = 0;
                    uVar5 = 0x3d1;
                    do {
                        uVar2 = (uVar5 - uVar4 >> 1) + uVar4;
                        if (*(ushort *)(&UNK_140a41a80 + uVar2 * 2) <= uVar3) {
                            if (uVar3 <= *(ushort *)(&UNK_140a41a80 + uVar2 * 2)) {
                                uVar3 = *(ushort *)(&UNK_140a40af0 + uVar2 * 2);
                                break;
                            }
                            uVar4 = uVar2 + 1;
                            uVar2 = uVar5;
                        }
                        uVar5 = uVar2;
                    } while (uVar4 < uVar2);
                }
                if (uVar9 == uVar3) {
                    if (uVar1 == 0) {
                        return uVar7;
                    }
                    puVar6 = puVar6 + 1;
                    goto LAB_1407c0b43;
                }
                uVar7 = uVar7 + 1;
                lVar8 = lVar8 + 0x108;
                puVar6 = param_2;
            } while (uVar7 < *(uint *)(param_1 + 0x24));
        }
    }
    return 0xffffffffffffffff;
}



int * FUN_1407c0c50(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    BOOL BVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    int *piVar8;
    undefined8 local_res10;
    undefined **local_98;
    undefined8 local_90;
    LPVOID local_88;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    wchar_t *local_50;
    LPVOID local_48;
    longlong local_40;
    undefined **local_38;
    wchar_t *local_30;
    LPVOID local_28;
    longlong local_20;

    if (param_2 == (longlong *)0x0) {
        return (int *)0x0;
    }
    lVar1 = *param_2;
    lVar4 = FUN_1407c0af0(param_1,lVar1);
    if (lVar4 == -1) {
        uVar7 = 0;
        if (*(ulonglong *)(param_1 + 0x68) != 0) {
            plVar5 = *(longlong **)(param_1 + 0x60);
            uVar6 = uVar7;
            do {
                if (*plVar5 == lVar1) {
                    return (int *)0x0;
                }
                uVar6 = uVar6 + 1;
                plVar5 = plVar5 + 1;
            } while (uVar6 < *(ulonglong *)(param_1 + 0x68));
        }
        FUN_140033260(param_1 + 0x60,param_2);
        local_res10 = 0x141e73d80;
        FUN_1401a3130(0xc,0,&local_res10);
        local_res10 = 0x141e73dc0;
        FUN_1401a3130(0xc,0,&local_res10,*param_2);
        BVar2 = IsDebuggerPresent();
        if ((BVar2 != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
            do {
                FUN_140059390(L"DbFileTable_%s_PrepShared();",
                              *(undefined8 *)(*(longlong *)(param_1 + 0x60) + uVar7 * 8));
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(ulonglong *)(param_1 + 0x68));
        }
    }
    else {
        piVar8 = (int *)(*(longlong *)(lVar4 * 0x108 + 0x100 + *(longlong *)(param_1 + 0x58)) +
                         *(longlong *)(param_1 + 0x50));
        if (*piVar8 == 0x4454424c) {
            iVar3 = FUN_1407c0a20();
            if (-1 < iVar3) {
                return piVar8;
            }
            local_98 = &PTR_LAB_140b5e648;
            local_90 = 0;
            local_88 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_98);
            local_40 = *param_2;
            local_78 = local_98;
            local_70 = local_90;
            local_58 = &PTR_LAB_140b5e648;
            local_68 = local_88;
            local_50 = L"TableName";
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_58);
            local_res10 = 0x141e73d20;
        }
        else {
            local_98 = &PTR_LAB_140b5e648;
            local_90 = 0;
            local_88 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_98);
            local_40 = *param_2;
            local_78 = local_98;
            local_70 = local_90;
            local_58 = &PTR_LAB_140b5e648;
            local_68 = local_88;
            local_50 = L"TableName";
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_58);
            local_res10 = 0x141e73cf0;
        }
        local_58 = &PTR_LAB_140b5e638;
        local_30 = local_50;
        local_38 = &PTR_LAB_140b5e638;
        local_28 = local_48;
        local_20 = local_40;
        iVar3 = FUN_140197770(0xc,&local_res10,&local_38,&local_78);
        local_58 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_48);
        local_98 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_88);
        if (iVar3 != 0) {
            DebugBreak();
        }
    }
    return (int *)0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407c0f60(void)

{
    longlong *plVar1;
    ulonglong uVar2;

    uVar2 = 0;
    _DAT_140c66690 = 0;
    if (DAT_140c66688 != (longlong *)0x0) {
        (**(code **)(*DAT_140c66688 + 8))();
        DAT_140c66688 = (longlong *)0x0;
    }
    if (DAT_140c66680 != (longlong *)0x0) {
        (**(code **)(*DAT_140c66680 + 0x48))(DAT_140c66680,1);
    }
    DAT_140c66680 = (longlong *)0x0;
    do {
        if (*(longlong **)((longlong)&DAT_140c66670 + uVar2) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&DAT_140c66670 + uVar2) + 8))();
            *(undefined8 *)((longlong)&DAT_140c66670 + uVar2) = 0;
        }
        plVar1 = *(longlong **)((longlong)&DAT_140c66660 + uVar2);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x48))(plVar1,1);
        }
        *(undefined8 *)((longlong)&DAT_140c66660 + uVar2) = 0;
        uVar2 = uVar2 + 8;
    } while (uVar2 < 0x10);
    DAT_140c66658 = 0;
    return;
}



void FUN_1407c1020(undefined8 *param_1)

{
    undefined4 local_18 [4];

    *param_1 = &PTR_LAB_140b798c0;
    if ((longlong *)param_1[3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[3] + 0x68))();
        local_18[0] = 0xffffffff;
        (**(code **)(*(longlong *)param_1[3] + 0x20))((longlong *)param_1[3],local_18);
        (**(code **)(*(longlong *)param_1[3] + 8))();
        param_1[3] = 0;
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
        param_1[4] = 0;
    }
    return;
}



int FUN_1407c1090(longlong param_1)

{
    int *piVar1;
    int iVar2;

    LOCK();
    piVar1 = (int *)(param_1 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
        if (param_1 != 0) {
            FUN_1407c1020();
            FUN_14018b900(param_1,0);
        }
        iVar2 = 0;
    }
    return iVar2;
}



longlong FUN_1407c10d0(longlong *param_1,uint param_2)

{
    uint uVar1;
    longlong lVar2;

    (**(code **)(*param_1 + 0x40))();
    lVar2 = param_1[5];
    if (((lVar2 != 0) && (param_2 < *(uint *)(lVar2 + 0x48))) &&
        (uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x50) + (ulonglong)param_2 * 4),
                uVar1 < *(uint *)(lVar2 + 0x30))) {
        return (ulonglong)(*(int *)(param_1[2] + 8) * uVar1) + *(longlong *)(lVar2 + 0x40);
    }
    return 0;
}



longlong FUN_1407c1140(longlong *param_1,ulonglong param_2)

{
    uint uVar1;
    longlong lVar2;

    (**(code **)(*param_1 + 0x40))();
    lVar2 = param_1[5];
    if (((lVar2 != 0) && (param_2 < *(uint *)(lVar2 + 0x48))) &&
        (uVar1 = *(uint *)(*(longlong *)(lVar2 + 0x50) + param_2 * 4), uVar1 < *(uint *)(lVar2 + 0x30))
            ) {
        return (ulonglong)(*(int *)(param_1[2] + 8) * uVar1) + *(longlong *)(lVar2 + 0x40);
    }
    return 0;
}



longlong FUN_1407c11b0(longlong *param_1,uint param_2)

{
    longlong lVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x40))(param_1,local_18);
    lVar1 = param_1[5];
    if ((lVar1 != 0) && (param_2 < *(uint *)(lVar1 + 0x30))) {
        return (ulonglong)(*(int *)(param_1[2] + 8) * param_2) + *(longlong *)(lVar1 + 0x40);
    }
    return 0;
}



ulonglong FUN_1407c1210(longlong *param_1)

{
    ulonglong uVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x40))(param_1,local_18);
    uVar1 = param_1[5];
    if (uVar1 == 0) {
        return uVar1;
    }
    return (ulonglong)*(uint *)(uVar1 + 0x30);
}



undefined8 FUN_1407c1250(longlong *param_1,uint param_2,undefined4 *param_3)

{
    longlong lVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x40))(param_1,local_18);
    lVar1 = param_1[5];
    if ((lVar1 != 0) && (param_2 < *(uint *)(lVar1 + 0x48))) {
        if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(*(longlong *)(lVar1 + 0x50) + (ulonglong)param_2 * 4);
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_1407c12c0(longlong *param_1,ulonglong param_2,undefined4 *param_3)

{
    longlong lVar1;
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x40))(param_1,local_18);
    lVar1 = param_1[5];
    if ((lVar1 != 0) && (param_2 < *(uint *)(lVar1 + 0x48))) {
        if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(*(longlong *)(lVar1 + 0x50) + param_2 * 4);
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_1407c1340(longlong param_1)

{
    undefined8 uVar1;

    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
        if ((int)uVar1 == 0) {
            return uVar1;
        }
        if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
    }
    return 1;
}



undefined8 FUN_1407c19f0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
    uint uVar1;
    int iVar2;
    short *psVar3;
    uint uVar4;
    undefined8 *puVar5;

    iVar2 = FUN_14018e2c0(*param_2,*(undefined8 *)(param_3 + 8));
    if ((iVar2 != 0) || (*(int *)(param_2 + 1) != *(int *)(param_3 + 0x10))) {
        return 0x80004005;
    }
    uVar1 = *(uint *)((longlong)param_2 + 0xc);
    if (uVar1 != *(uint *)(param_3 + 0x18)) {
        return 0x80004005;
    }
    uVar4 = 0;
    if (uVar1 != 0) {
        puVar5 = (undefined8 *)param_2[2];
        psVar3 = (short *)(*(longlong *)(param_3 + 0x20) + 0x10);
        do {
            iVar2 = FUN_14018e2c0(*puVar5,*(undefined8 *)(psVar3 + -4));
            if ((iVar2 != 0) || (*(short *)(puVar5 + 1) != *psVar3)) {
                return 0x80004005;
            }
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 5;
            psVar3 = psVar3 + 0xc;
        } while (uVar4 < uVar1);
    }
    return 0;
}



longlong FUN_1407c1ab0(longlong param_1,uint param_2)

{
    uint uVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    undefined4 local_18 [4];

    plVar2 = *(longlong **)(param_1 + 0x18);
    local_18[0] = 0xffffffff;
    if (plVar2 != (longlong *)0x0) {
        iVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,local_18);
        if ((iVar4 != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
    if (((lVar3 != 0) && (param_2 < *(uint *)(lVar3 + 0x48))) &&
        (uVar1 = *(uint *)(*(longlong *)(lVar3 + 0x50) + (ulonglong)param_2 * 4 + lVar3),
                uVar1 < *(uint *)(lVar3 + 0x30))) {
        return (ulonglong)(*(int *)(*(longlong *)(param_1 + 0x10) + 8) * uVar1) +
               *(longlong *)(lVar3 + 0x40) + lVar3;
    }
    return 0;
}



longlong FUN_1407c1be0(longlong param_1,uint param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined4 local_18 [4];

    plVar1 = *(longlong **)(param_1 + 0x18);
    local_18[0] = 0xffffffff;
    if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,local_18);
        if ((iVar3 != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    if ((lVar2 != 0) && (param_2 < *(uint *)(lVar2 + 0x30))) {
        return (ulonglong)(*(int *)(*(longlong *)(param_1 + 0x10) + 8) * param_2) +
               *(longlong *)(lVar2 + 0x40) + lVar2;
    }
    return 0;
}



ulonglong FUN_1407c1c60(longlong param_1)

{
    longlong *plVar1;
    ulonglong uVar2;
    int iVar3;
    undefined4 local_18 [4];

    plVar1 = *(longlong **)(param_1 + 0x18);
    local_18[0] = 0xffffffff;
    if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,local_18);
        if ((iVar3 != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
    }
    uVar2 = *(ulonglong *)(param_1 + 0x28);
    if (uVar2 == 0) {
        return uVar2;
    }
    return (ulonglong)*(uint *)(uVar2 + 0x30);
}



undefined8 FUN_1407c1cc0(longlong param_1,uint param_2,undefined4 *param_3)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined4 local_18 [4];

    plVar1 = *(longlong **)(param_1 + 0x18);
    local_18[0] = 0xffffffff;
    if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,local_18);
        if ((iVar3 != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    if ((lVar2 != 0) && (param_2 < *(uint *)(lVar2 + 0x48))) {
        if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + (ulonglong)param_2 * 4 + lVar2);
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_1407c1d60(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined4 local_18 [4];

    plVar1 = *(longlong **)(param_1 + 0x18);
    local_18[0] = 0xffffffff;
    if (plVar1 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,local_18);
        if ((iVar3 != 0) && (*(longlong **)(param_1 + 0x18) != (longlong *)0x0)) {
            (**(code **)(**(longlong **)(param_1 + 0x18) + 8))();
            *(undefined8 *)(param_1 + 0x18) = 0;
        }
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    if ((lVar2 != 0) && (param_2 < *(uint *)(lVar2 + 0x48))) {
        if (param_3 != (undefined4 *)0x0) {
            *param_3 = *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + param_2 * 4 + lVar2);
        }
        return 1;
    }
    return 0;
}



undefined8 FUN_1407c1e00(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1407c0c50((&DAT_140c66660)[DAT_140c66658],*(undefined8 *)(param_1 + 0x10));
    uVar2 = 0;
    *(longlong *)(param_1 + 0x28) = lVar1;
    if (lVar1 == 0) {
        uVar2 = 0x80004005;
    }
    return uVar2;
}



undefined8 FUN_1407c1e40(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    uint *puVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong *)(param_3 + 2) + param_2;
    if (uVar6 < *param_1) {
        return 0x80004005;
    }
    uVar5 = *param_3;
    uVar1 = (ulonglong)uVar5 * 0x18 + *(longlong *)(param_3 + 2) + param_2;
    if (param_1[1] <= uVar1 && uVar1 != param_1[1]) {
        return 0x80004005;
    }
    uVar1 = 0;
    if (uVar5 != 0) {
        uVar1 = uVar6;
    }
    uVar6 = 0;
    *(ulonglong *)(param_3 + 2) = uVar1;
    lVar4 = ((ulonglong)uVar5 * 0x18 + 0xf & 0xfffffffffffffff0) + uVar1;
    if (uVar5 != 0) {
        do {
            puVar3 = (uint *)(param_1[2] + uVar6 * 0x18 + *(longlong *)(param_3 + 2));
            uVar1 = *(longlong *)(puVar3 + 2) + lVar4;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar2 = *(longlong *)(puVar3 + 2) + (ulonglong)*puVar3 * 2 + lVar4;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (*puVar3 != 0) {
                uVar2 = uVar1;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            *(ulonglong *)(puVar3 + 2) = uVar2;
        } while (uVar5 < *param_3);
    }
    return 0;
}



undefined8 FUN_1407c1f00(ulonglong *param_1,longlong param_2,longlong param_3)

{
    undefined8 uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    uVar3 = param_2 + *(longlong *)(param_3 + 0x10);
    if (uVar3 < *param_1) {
        uVar1 = 0x80004005;
    }
    else {
        uVar2 = *(longlong *)(param_3 + 0x10) + (ulonglong)*(uint *)(param_3 + 8) * 2 + param_2;
        if (uVar2 < param_1[1] || uVar2 == param_1[1]) {
            uVar2 = uVar4;
            if (*(uint *)(param_3 + 8) != 0) {
                uVar2 = uVar3;
            }
            *(ulonglong *)(param_3 + 0x10) = uVar2;
            uVar1 = FUN_1407c1e40(param_1,param_2);
            if (-1 < (int)uVar1) goto LAB_1407c1f6e;
        }
        else {
            uVar1 = 0x80004005;
        }
    }
    if ((int)uVar1 < 0) {
        return uVar1;
    }
    LAB_1407c1f6e:
    uVar3 = *(longlong *)(param_3 + 0x40) + param_2;
    if ((*param_1 <= uVar3) &&
        (uVar2 = *(longlong *)(param_3 + 0x40) + (ulonglong)*(uint *)(param_3 + 0x38) + param_2,
                uVar2 < param_1[1] || uVar2 == param_1[1])) {
        uVar2 = uVar4;
        if (*(uint *)(param_3 + 0x38) != 0) {
            uVar2 = uVar3;
        }
        *(ulonglong *)(param_3 + 0x40) = uVar2;
        uVar3 = *(longlong *)(param_3 + 0x50) + param_2;
        if ((*param_1 <= uVar3) &&
            (uVar2 = *(longlong *)(param_3 + 0x50) + (ulonglong)*(uint *)(param_3 + 0x48) * 4 + param_2,
                    uVar2 < param_1[1] || uVar2 == param_1[1])) {
            if (*(uint *)(param_3 + 0x48) != 0) {
                uVar4 = uVar3;
            }
            *(ulonglong *)(param_3 + 0x50) = uVar4;
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 * FUN_1407c1fe0(undefined8 *param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)0x0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    puVar2 = (undefined8 *)FUN_14018b280(0x110,0);
    if (puVar2 != (undefined8 *)0x0) {
        puVar2[1] = 0x20;
        *puVar2 = &PTR_LAB_140b55060;
        puVar3 = puVar2;
    }
    puVar3 = puVar3 + 2;
    if ((undefined8 *)param_1[0xf] != puVar3) {
        FUN_1407db590(puVar3,(undefined8 *)param_1[0xf],param_1[0x10] << 3);
        lVar1 = param_1[0xf];
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        param_1[0xf] = puVar3;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[7] = 0;
    return param_1;
}



void FUN_1407c20b0(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;

    lVar4 = 7;
    plVar3 = param_1;
    do {
        lVar1 = *plVar3;
        while (lVar1 != 0) {
            if (*(undefined8 **)(lVar1 + 0x20) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0x20) = *(undefined8 *)(lVar1 + 0x28);
            }
            if (*(longlong *)(lVar1 + 0x28) != 0) {
                *(undefined8 *)(*(longlong *)(lVar1 + 0x28) + 0x20) = *(undefined8 *)(lVar1 + 0x20);
            }
            *(undefined8 *)(lVar1 + 0x20) = 0;
            *(undefined8 *)(lVar1 + 0x28) = 0;
            lVar1 = *plVar3;
        }
        plVar3 = plVar3 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar4 = param_1[0xf];
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    param_1 = param_1 + 7;
    iVar2 = 6;
    do {
        param_1 = param_1 + -1;
        if (*param_1 != 0) {
            FUN_1401a4a00(param_1);
        }
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    return;
}



undefined8 FUN_1407c2170(longlong param_1,int param_2,uint param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    ulonglong uVar10;
    int local_res10 [2];
    longlong local_res20;
    longlong *local_48;

    uVar10 = (ulonglong)(1 << ((byte)param_2 & 0x1f));
    local_res10[0] = param_2;
    if ((*(ulonglong *)(param_1 + 0x38) & uVar10) == 0) {
        lVar6 = (longlong)param_2;
        FUN_1407c2470(lVar6 * 8 + param_1,&PTR_FUN_140c5f3e0,(&PTR_FUN_140c5f3e0)[lVar6],local_res10,
                      *(undefined8 *)(param_1 + 0x40 + lVar6 * 8));
        *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | uVar10;
    }
    local_res20 = 0;
    local_48 = (longlong *)0x0;
    lVar6 = *(longlong *)(param_1 + (longlong)local_res10[0] * 8);
    do {
        do {
            lVar4 = lVar6;
            if (lVar4 == 0) {
                return 0;
            }
            lVar6 = *(longlong *)(lVar4 + 0x28);
        } while ((*(uint *)(lVar4 + 8) & param_3) == 0);
        plVar1 = (longlong *)(param_1 + 0x78);
        FUN_1400523e0(plVar1);
        lVar2 = *(longlong *)(param_1 + 0x80);
        lVar8 = lVar2 + 1;
        lVar7 = FUN_14018db00(*plVar1,lVar8,8);
        *(longlong *)(lVar7 + lVar2 * 8) = lVar4;
        if (*plVar1 != lVar7) {
            FUN_1407db590(lVar7,*plVar1,*(longlong *)(param_1 + 0x80) << 3);
            lVar2 = *plVar1;
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *plVar1 = lVar7;
        }
        *(longlong *)(param_1 + 0x80) = lVar8;
        plVar3 = *(longlong **)(lVar4 + 0x18);
        for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x28)) {
            if ((*(uint *)(lVar6 + 8) & param_3) != 0) {
                if ((plVar3 != *(longlong **)(lVar6 + 0x18)) ||
                    (iVar5 = (**(code **)(*plVar3 + 0x10))(plVar3,local_res10[0],param_3,lVar4,lVar6),
                            iVar5 == 0)) break;
                lVar2 = *(longlong *)(param_1 + 0x80);
                lVar8 = lVar2 + 1;
                lVar7 = FUN_14018db00(*plVar1,lVar8);
                *(longlong *)(lVar7 + lVar2 * 8) = lVar6;
                if (*plVar1 != lVar7) {
                    FUN_1407db590(lVar7);
                    lVar2 = *plVar1;
                    if (lVar2 != 0) {
                        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                    }
                    *plVar1 = lVar7;
                }
                *(longlong *)(param_1 + 0x80) = lVar8;
            }
        }
        lVar8 = 0;
        if (local_48 == plVar3) {
            lVar8 = local_res20;
        }
        uVar9 = (**(code **)(*plVar3 + 0x18))
                (plVar3,local_res10[0],param_3,*plVar1,*(undefined8 *)(param_1 + 0x80),lVar8);
        local_res20 = lVar4;
        local_48 = plVar3;
        if ((int)uVar9 < 0) {
            return uVar9;
        }
    } while( true );
}



undefined8 FUN_1407c23a0(longlong param_1,longlong param_2,undefined4 *param_3)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 uVar3;

    if (*(uint *)(param_1 + 0xc) < *(uint *)(param_2 + 0xc)) {
        return 0xffffffff;
    }
    if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_2 + 0xc)) {
        plVar1 = *(longlong **)(param_2 + 0x18);
        plVar2 = *(longlong **)(param_1 + 0x18);
        if (*(uint *)(plVar2 + 1) < *(uint *)(plVar1 + 1)) {
            return 0xffffffff;
        }
        if (*(uint *)(plVar2 + 1) <= *(uint *)(plVar1 + 1)) {
            if (plVar2 < plVar1) {
                return 0xffffffff;
            }
            if (plVar2 <= plVar1) {
                // WARNING: Could not recover jumptable at 0x0001407c23fe. Too many branches
                // WARNING: Treating indirect jump as call
                uVar3 = (**(code **)(*plVar2 + 8))(plVar2,*param_3,param_1,param_2);
                return uVar3;
            }
        }
    }
    return 1;
}



void FUN_1407c2470(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   longlong param_5)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong **pplVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong uVar9;
    longlong **pplVar10;
    longlong *plVar11;
    longlong *plVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    longlong local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined4 local_80;
    undefined4 local_7c;
    longlong *local_78;
    undefined *local_70;
    undefined8 local_68;
    undefined4 local_60;
    undefined8 local_58;
    ulonglong local_48;

    lVar3 = *param_1;
    if (lVar3 != 0) {
        local_98 = 0x20;
        if (param_5 == 0) {
            do {
                lVar3 = *(longlong *)(lVar3 + 0x28);
                param_5 = param_5 + 1;
            } while (lVar3 != 0);
        }
        uVar13 = DAT_140c63758;
        if (DAT_140c63758 != 0) {
            uVar13 = (ulonglong)*(uint *)(DAT_140c63758 + 0xb8);
        }
        uVar7 = param_5 + 0x3fU >> 6;
        if (uVar13 < uVar7) {
            uVar7 = uVar13;
        }
        local_90 = param_3;
        local_88 = param_4;
        local_48 = uVar7;
        if (uVar7 == 1) {
            FUN_140370b30(param_1,0x20);
        }
        else {
            uVar13 = uVar7;
            if (uVar7 == 0) {
                plVar11 = (longlong *)0x0;
                plVar12 = plVar11;
            }
            else {
                puVar4 = (undefined8 *)FUN_14018b280(uVar7 * 0x18 + 0x10);
                if (puVar4 == (undefined8 *)0x0) {
                    plVar11 = (longlong *)&DAT_00000010;
                    plVar12 = plVar11;
                }
                else {
                    *puVar4 = &PTR_FUN_140b5f110;
                    plVar11 = puVar4 + 2;
                    plVar12 = plVar11;
                }
            }
            for (; uVar13 != 0; uVar13 = uVar13 - 1) {
                if (plVar11 != (longlong *)0x0) {
                    plVar11[2] = 0;
                }
                plVar11 = plVar11 + 3;
            }
            lVar3 = *param_1;
            if (lVar3 != 0) {
                **(undefined8 **)(lVar3 + local_98) = 0;
                *(undefined8 *)(lVar3 + local_98) = 0;
            }
            uVar13 = 0;
            plVar8 = plVar12;
            plVar11 = local_78;
            while (local_78 = plVar8, lVar3 != 0) {
                if (uVar7 - 1 <= uVar13) {
                    if (lVar3 != 0) {
                        local_78 = plVar12 + uVar13 * 3;
                        *local_78 = lVar3;
                        local_78[1] = (longlong)&local_98;
                        *(longlong **)(lVar3 + local_98) = local_78;
                        uVar13 = uVar13 + 1;
                        local_80 = 4;
                        local_7c = 1;
                        local_70 = &LAB_140370c60;
                        local_68 = 0;
                        local_60 = 1;
                        FUN_14019dca0(&local_80,0,0,local_78 + 2);
                        plVar11 = local_78;
                    }
                    break;
                }
                uVar7 = 0;
                for (lVar1 = lVar3; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8 + local_98)) {
                    if ((param_5 + -1 + uVar7) / uVar7 <= uVar7) {
                        if (lVar1 != 0) {
                            **(undefined8 **)(lVar1 + local_98) = 0;
                            *(undefined8 *)(lVar1 + local_98) = 0;
                        }
                        break;
                    }
                    uVar7 = uVar7 + 1;
                }
                uVar13 = uVar13 + 1;
                plVar8 = local_78 + 3;
                local_78[1] = (longlong)&local_98;
                *local_78 = lVar3;
                if (lVar3 != 0) {
                    *(longlong **)(lVar3 + local_98) = local_78;
                }
                local_80 = 4;
                local_7c = 1;
                local_70 = &LAB_140370c60;
                local_68 = 0;
                local_60 = 1;
                FUN_14019dca0(&local_80,0,0,local_78 + 2);
                lVar3 = lVar1;
                plVar11 = local_78;
            }
            local_78 = plVar11;
            uVar15 = uVar13 + 1 >> 1;
            uVar7 = uVar15;
            uVar14 = uVar15;
            while (1 < uVar7) {
                uVar7 = uVar7 + 1 >> 1;
                uVar14 = uVar14 + uVar7;
            }
            local_58 = uVar14;
            uVar7 = uVar14;
            if (uVar14 == 0) {
                puVar4 = (undefined8 *)0x0;
                puVar5 = puVar4;
            }
            else {
                puVar5 = (undefined8 *)FUN_14018b280(uVar14 * 0x20 + 0x10,0);
                if (puVar5 == (undefined8 *)0x0) {
                    puVar4 = (undefined8 *)&DAT_00000010;
                    puVar5 = puVar4;
                }
                else {
                    puVar4 = puVar5 + 2;
                    *puVar5 = &PTR_FUN_140b5f110;
                    puVar5 = puVar4;
                }
            }
            for (; uVar7 != 0; uVar7 = uVar7 - 1) {
                if (puVar4 != (undefined8 *)0x0) {
                    puVar4[3] = 0;
                }
                puVar4 = puVar4 + 4;
            }
            puVar4 = puVar5;
            if (uVar15 != 0) {
                uVar9 = 1;
                pplVar6 = (longlong **)(puVar5 + 3);
                pplVar10 = (longlong **)(plVar12 + 2);
                uVar7 = uVar15;
                do {
                    if (uVar9 < uVar13) {
                        FUN_140370c80(pplVar6 + -3,pplVar10 + -2,pplVar10 + 1);
                    }
                    else {
                        pplVar6[-3] = (longlong *)0x0;
                        pplVar6[-2] = (longlong *)(pplVar10 + -2);
                        pplVar6[-1] = pplVar10[-1];
                        plVar11 = *pplVar10;
                        if (*pplVar6 != plVar11) {
                            if (plVar11 != (longlong *)0x0) {
                                (**(code **)*plVar11)();
                            }
                            if (*pplVar6 != (longlong *)0x0) {
                                (**(code **)(**pplVar6 + 8))();
                            }
                            *pplVar6 = *pplVar10;
                        }
                    }
                    uVar9 = uVar9 + 2;
                    pplVar10 = pplVar10 + 6;
                    pplVar6 = pplVar6 + 4;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
            }
            while (puVar2 = puVar4, uVar13 = uVar15, 1 < uVar13) {
                puVar4 = puVar2 + uVar13 * 4;
                uVar15 = uVar13 + 1 >> 1;
                uVar14 = local_58;
                if (uVar15 != 0) {
                    uVar9 = 1;
                    pplVar6 = (longlong **)(puVar4 + 3);
                    pplVar10 = (longlong **)(puVar2 + 3);
                    uVar7 = uVar15;
                    do {
                        if (uVar9 < uVar13) {
                            FUN_140370e50(pplVar6 + -3,pplVar10 + -3,pplVar10 + 1);
                        }
                        else {
                            pplVar6[-3] = (longlong *)0x0;
                            pplVar6[-2] = pplVar10[-2];
                            pplVar6[-1] = pplVar10[-1];
                            plVar11 = *pplVar10;
                            if (*pplVar6 != plVar11) {
                                if (plVar11 != (longlong *)0x0) {
                                    (**(code **)*plVar11)();
                                }
                                if (*pplVar6 != (longlong *)0x0) {
                                    (**(code **)(**pplVar6 + 8))();
                                }
                                *pplVar6 = *pplVar10;
                            }
                        }
                        uVar9 = uVar9 + 2;
                        pplVar10 = pplVar10 + 8;
                        pplVar6 = pplVar6 + 4;
                        uVar7 = uVar7 - 1;
                        uVar14 = local_58;
                    } while (uVar7 != 0);
                }
            }
            local_58 = CONCAT44((int)(local_58 >> 0x20),0xffffffff);
            (**(code **)(*(longlong *)puVar2[3] + 0x20))((longlong *)puVar2[3],&local_58);
            lVar3 = *(longlong *)puVar2[1];
            *(longlong **)(lVar3 + local_98) = param_1;
            *param_1 = lVar3;
            if (uVar14 != 0) {
                pplVar6 = (longlong **)(puVar5 + 3);
                do {
                    if (*pplVar6 != (longlong *)0x0) {
                        (**(code **)(**pplVar6 + 8))();
                    }
                    pplVar6 = pplVar6 + 4;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            if (puVar5 != (undefined8 *)0x0) {
                (**(code **)puVar5[-2])(puVar5 + -2);
            }
            if (local_48 != 0) {
                pplVar6 = (longlong **)(plVar12 + 2);
                uVar13 = local_48;
                do {
                    if (*pplVar6 != (longlong *)0x0) {
                        (**(code **)(**pplVar6 + 8))();
                    }
                    pplVar6 = pplVar6 + 3;
                    uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
            }
            if (plVar12 != (longlong *)0x0) {
                (**(code **)plVar12[-2])(plVar12 + -2);
            }
        }
    }
    return;
}



void FUN_1407c2990(longlong *param_1,longlong param_2,int param_3)

{
    longlong lVar1;

    lVar1 = *param_1;
    if (lVar1 != param_2) {
        if (lVar1 != 0) {
            FUN_1407c2b30(lVar1,param_1[2],*(undefined4 *)(param_1 + 1),9);
        }
        *param_1 = param_2;
        if (param_2 != 0) {
            lVar1 = FUN_1407c2a20(param_2);
            param_1[2] = lVar1;
        }
        *(undefined4 *)(param_1 + 1) = 9;
    }
    if (*(int *)(param_1 + 1) != param_3) {
        if (*param_1 != 0) {
            FUN_1407c2b30(*param_1,param_1[2],*(int *)(param_1 + 1),param_3);
        }
        *(int *)(param_1 + 1) = param_3;
    }
    return;
}



longlong FUN_1407c2a20(longlong *param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    uVar1 = param_1[3];
    if ((ulonglong)param_1[0xd] < uVar1) {
        return *(longlong *)(param_1[2] + param_1[0xd] * 8);
    }
    lVar2 = param_1[1];
    lVar4 = FUN_14018db00(*param_1,lVar2 + 1,8);
    *(ulonglong *)(lVar4 + lVar2 * 8) = uVar1;
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] << 3);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar2 + 1;
    lVar3 = param_1[3];
    lVar4 = lVar3 + 1;
    lVar5 = FUN_14018db00(param_1[2],lVar4,8);
    *(longlong *)(lVar5 + lVar3 * 8) = lVar2;
    if (param_1[2] != lVar5) {
        FUN_1407db590(lVar5,param_1[2],param_1[3] << 3);
        lVar3 = param_1[2];
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        param_1[2] = lVar5;
    }
    param_1[3] = lVar4;
    return lVar2;
}



void FUN_1407c2b30(longlong *param_1,longlong param_2,int param_3,int param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong lVar6;

    if (param_3 < param_4) {
        lVar2 = (longlong)param_3;
        if (lVar2 < param_4) {
            lVar6 = param_4 - lVar2;
            plVar3 = param_1 + lVar2 + 5;
            do {
                lVar5 = *plVar3 + -1;
                *plVar3 = lVar5;
                lVar2 = *(longlong *)(*param_1 + param_2 * 8);
                lVar1 = *(longlong *)(param_1[2] + lVar5 * 8);
                *(longlong *)(*param_1 + param_2 * 8) = lVar5;
                *(longlong *)(*param_1 + lVar1 * 8) = lVar2;
                *(longlong *)(param_1[2] + lVar2 * 8) = lVar1;
                *(longlong *)(param_1[2] + lVar5 * 8) = param_2;
                lVar6 = lVar6 + -1;
                plVar3 = plVar3 + 1;
            } while (lVar6 != 0);
            return;
        }
    }
    else if (param_4 < param_3) {
        uVar4 = (ulonglong)(uint)(param_3 - param_4);
        plVar3 = param_1 + (longlong)param_3 + 4;
        do {
            lVar2 = *plVar3;
            *plVar3 = lVar2 + 1;
            lVar6 = *(longlong *)(*param_1 + param_2 * 8);
            lVar1 = *(longlong *)(param_1[2] + lVar2 * 8);
            *(longlong *)(*param_1 + param_2 * 8) = lVar2;
            *(longlong *)(*param_1 + lVar1 * 8) = lVar6;
            *(longlong *)(param_1[2] + lVar6 * 8) = lVar1;
            *(longlong *)(param_1[2] + lVar2 * 8) = param_2;
            uVar4 = uVar4 - 1;
            plVar3 = plVar3 + -1;
        } while (uVar4 != 0);
    }
    return;
}



uint FUN_1407c2c10(longlong param_1,short param_2)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    ushort uVar4;
    uint uVar5;

    uVar4 = param_2 - *(short *)(param_1 + 0x40);
    if ((short)uVar4 < 0) {
        uVar4 = (uVar4 ^ 0x7fff) + 1;
    }
    uVar1 = (uint)uVar4;
    uVar2 = uVar1 & 0xffff7fff;
    uVar5 = (uVar1 & 0xffff8000) << 0x10;
    if ((uVar4 & 0x7c00) == 0) {
        if ((uVar4 & 0x3ff) != 0) {
            iVar3 = 0x71;
            for (uVar1 = (uVar1 & 0x3ff) << 0xd; uVar1 < 0x800000; uVar1 = uVar1 * 2) {
                iVar3 = iVar3 + -1;
            }
            uVar2 = iVar3 << 0x17 | uVar1 & 0x7fffff;
        }
        return uVar2 | uVar5;
    }
    return (uVar2 + 0x1c000) * 0x2000 | uVar5;
}



int FUN_1407c2ca0(longlong **param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;

    plVar4 = (longlong *)0x0;
    if (DAT_140c890f5 == '\0') {
        plVar2 = (longlong *)FUN_14018b280(0x18,0);
        plVar5 = plVar4;
        if (plVar2 != (longlong *)0x0) {
            plVar2[1] = 2;
            plVar2[2] = 0;
            *plVar2 = (longlong)&DAT_140c3acc0;
            plVar5 = plVar2;
        }
        DAT_140c890f5 = '\x01';
        plVar5[2] = (longlong)DAT_140c63770;
        DAT_140c63770 = plVar5;
    }
    lVar3 = FUN_14018b280(0x1a50,0);
    if (lVar3 != 0) {
        plVar4 = (longlong *)FUN_1407c2d70(lVar3);
    }
    iVar1 = FUN_1407c3b60(plVar4);
    if (-1 < iVar1) {
        *param_1 = plVar4;
        return 0;
    }
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x140))(plVar4,1);
    }
    return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407c2d70(undefined8 *param_1)

{
    int *piVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    int iVar6;
    undefined auStack200 [32];
    undefined8 local_a8;
    undefined8 uStack160;
    undefined8 local_98;
    undefined8 uStack144;
    undefined8 local_78;
    undefined8 uStack112;
    undefined8 local_68;
    undefined8 uStack96;
    undefined8 local_48;
    undefined8 uStack64;
    undefined8 local_38;
    undefined8 uStack48;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    *param_1 = &PTR_LAB_140b79930;
    FUN_1407c3170();
    param_1[0x9c] = 0;
    param_1[0x9d] = 0;
    param_1[0x9e] = 0;
    FUN_1402c8db0(param_1 + 0x9f);
    param_1[0xa6] = 0;
    FUN_1407e4830(param_1 + 0xa8,0,0x310);
    *(undefined8 *)((longlong)param_1 + 0xb9c) = 0;
    *(undefined4 *)((longlong)param_1 + 0xba4) = 0;
    FUN_1407e4830();
    iVar6 = 7;
    puVar5 = param_1 + 0x2a8;
    do {
        uVar3 = uRam0000000140c777dc;
        uVar2 = uRam0000000140c777d8;
        uVar4 = uRam0000000140c777d4;
        iVar6 = iVar6 + -1;
        *(undefined4 *)puVar5 = _DAT_140c777d0;
        *(undefined4 *)((longlong)puVar5 + 4) = uVar4;
        *(undefined4 *)(puVar5 + 1) = uVar2;
        *(undefined4 *)((longlong)puVar5 + 0xc) = uVar3;
        *(undefined4 *)(puVar5 + 2) = 0x3f800000;
        *(undefined4 *)((longlong)puVar5 + 0x14) = 0x3f800000;
        *(undefined4 *)(puVar5 + 3) = 0x3f800000;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = 0x3f800000;
        puVar5 = puVar5 + 4;
    } while (-1 < iVar6);
    param_1[0x2cd] = 0;
    param_1[0x2d2] = 0;
    param_1[0x2d3] = 0;
    param_1[0x2d4] = 0;
    param_1[0x301] = 0;
    param_1[0x302] = 0;
    param_1[0x303] = 0;
    param_1[0x316] = 0;
    param_1[0x334] = 0;
    param_1[0x335] = 0;
    param_1[0x336] = 0;
    param_1[0x337] = 0;
    FUN_1400522f0(param_1 + 0x338);
    param_1[0x33d] = 0;
    FUN_1400522f0();
    param_1[0x343] = 0;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[0xa4] = 0;
    *(undefined4 *)(param_1 + 0xa5) = 0;
    param_1[0x172] = 0;
    *(undefined4 *)(param_1 + 0x173) = 0;
    param_1[0x175] = 0;
    param_1[0x176] = 0;
    param_1[0x177] = 0;
    param_1[0x2ce] = 0;
    param_1[0x2cf] = 0;
    param_1[0x2d0] = 0;
    param_1[0x2d1] = 0;
    param_1[0x10a] = 0;
    local_78 = 0x4062dfc5;
    local_a8 = 0x4062dfc5;
    uStack160 = 0;
    local_98 = 0;
    local_48 = 0x4062dfc5;
    uStack144 = 0;
    uStack112 = 0;
    local_68 = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0x4062dfc5;
    *(undefined4 *)((longlong)param_1 + 0x544) = 0;
    *(undefined4 *)(param_1 + 0xa9) = 0;
    *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
    uStack96 = 0;
    uStack64 = 0;
    local_38 = 0;
    *(undefined4 *)(param_1 + 0xaa) = 0;
    *(undefined4 *)((longlong)param_1 + 0x554) = 0;
    *(undefined4 *)(param_1 + 0xab) = 0;
    *(undefined4 *)((longlong)param_1 + 0x55c) = 0;
    *(undefined4 *)(param_1 + 0xae) = 0x4062dfc5;
    *(undefined4 *)((longlong)param_1 + 0x574) = 0;
    *(undefined4 *)(param_1 + 0xaf) = 0;
    *(undefined4 *)((longlong)param_1 + 0x57c) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0;
    uStack48 = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined4 *)((longlong)param_1 + 0x584) = 0;
    *(undefined4 *)(param_1 + 0xb1) = 0;
    *(undefined4 *)((longlong)param_1 + 0x58c) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0x4062dfc5;
    *(undefined4 *)((longlong)param_1 + 0x5a4) = 0;
    *(undefined4 *)(param_1 + 0xb5) = 0;
    *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
    *(undefined4 *)(param_1 + 0xb2) = 0;
    *(undefined4 *)(param_1 + 0xb6) = 0;
    *(undefined4 *)((longlong)param_1 + 0x5b4) = 0;
    *(undefined4 *)(param_1 + 0xb7) = 0;
    *(undefined4 *)((longlong)param_1 + 0x5bc) = 0;
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xff) = 0x461c4000;
    *(undefined4 *)((longlong)param_1 + 0x7fc) = 0x466a6000;
    param_1[0x2f5] = 0;
    param_1[0x2f6] = 0;
    param_1[0x2f7] = 0;
    piVar1 = DAT_140c63750;
    param_1[0x2f8] = 0;
    *(undefined4 *)(param_1 + 0x30c) = 0;
    iVar6 = DAT_140c54e50;
    if (*piVar1 < DAT_140c54e50) {
        iVar6 = *piVar1;
    }
    uVar4 = *(undefined4 *)(&DAT_140c54e60 + (longlong)iVar6 * 4);
    *(undefined4 *)(param_1 + 0x30d) = 1;
    *(undefined4 *)((longlong)param_1 + 0x1864) = uVar4;
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar4 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x30e) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x1874) = uVar4;
    *(undefined4 *)(param_1 + 0x30f) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x187c) = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar4 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x310) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x1884) = uVar4;
    *(undefined4 *)(param_1 + 0x311) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x188c) = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar4 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x312) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x1894) = uVar4;
    *(undefined4 *)(param_1 + 0x313) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x189c) = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar4 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x314) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x18a4) = uVar4;
    *(undefined4 *)(param_1 + 0x315) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x18ac) = uVar3;
    uVar4 = FUN_14018cdf0();
    *(undefined4 *)(param_1 + 0x317) = uVar4;
    param_1[0x31e] = 0;
    param_1[799] = 0;
    param_1[800] = 0;
    param_1[0x321] = 0;
    param_1[0x322] = 0;
    param_1[0x323] = 0;
    param_1[0x324] = 0;
    param_1[0x325] = 0;
    param_1[0x326] = 0;
    param_1[0x327] = 0;
    param_1[0x328] = 0;
    param_1[0x329] = 0;
    param_1[0x32a] = 0;
    FUN_14018cdf0();
    *(undefined4 *)(param_1 + 0x332) = 1;
    *(undefined4 *)((longlong)param_1 + 0x1994) = 2;
    *(undefined4 *)(param_1 + 0x333) = 3;
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack200);
    return;
}



undefined8 FUN_1407c3130(undefined8 param_1,ulonglong param_2)

{
    FUN_1407c3780();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



longlong FUN_1407c3170(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0xf8) = 0;
    *(undefined8 *)(param_1 + 0x100) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    *(undefined8 *)(param_1 + 0x200) = 0;
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined8 *)(param_1 + 0x288) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    *(undefined8 *)(param_1 + 0x2d0) = 0;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 0x330) = 0;
    *(undefined8 *)(param_1 + 0x338) = 0;
    *(undefined8 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x348) = 0;
    *(undefined8 *)(param_1 + 0x350) = 0;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x390) = 0;
    *(undefined8 *)(param_1 + 0x398) = 0;
    *(undefined8 *)(param_1 + 0x3a0) = 0;
    *(undefined8 *)(param_1 + 0x3a8) = 0;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
    *(undefined8 *)(param_1 + 0x3b8) = 0;
    *(undefined8 *)(param_1 + 0x3c0) = 0;
    *(undefined8 *)(param_1 + 0x3c8) = 0;
    *(undefined8 *)(param_1 + 0x3d0) = 0;
    *(undefined8 *)(param_1 + 0x3d8) = 0;
    FUN_1407e4830(param_1 + 0x3e0,0,0xc0);
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    *(undefined8 *)(param_1 + 0x4a8) = 0;
    *(undefined8 *)(param_1 + 0x4b0) = 0;
    *(undefined8 *)(param_1 + 0x4b8) = 0;
    return param_1;
}



void FUN_1407c34d0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;
    int iVar3;

    FUN_14018b900(*(undefined8 *)(param_1 + 0x4b8),0);
    FUN_1407d0cc0(param_1 + 0x4a0);
    iVar3 = 7;
    puVar2 = (undefined8 *)(param_1 + 0x4b0);
    do {
        puVar1 = puVar2 + -4;
        puVar2 = puVar2 + -3;
        FUN_14018b900(*puVar1,0);
        FUN_14018b900(*puVar2);
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x3d0),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x3d8),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x3b8),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x3c0),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x3a0),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x3a8),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x390),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x380),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x368),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x370),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x358),0);
    FUN_1402ed500(param_1 + 0x340);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x330),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x338),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x318),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 800),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x300),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x308),0);
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
        FUN_1407d0d40();
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x2d8),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x2e0),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x2c0),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x2c8),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x2a8),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x2b0),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x290),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x298),0);
    FUN_1407c3700(param_1 + 0x1f0);
    FUN_1407c3700(param_1 + 0x158);
    FUN_1407c3700(param_1 + 0xc0);
    FUN_1407c3700(param_1 + 0x28);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    return;
}



void FUN_1407c3700(longlong param_1)

{
    FUN_14018b900(*(undefined8 *)(param_1 + 0x88),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x90),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x70),0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x78),0);
    FUN_1407d0cc0(param_1 + 0x58);
    FUN_1407d0cc0(param_1 + 0x48);
    FUN_1407d0cc0(param_1 + 0x38);
    FUN_1407d0cc0(param_1 + 0x28);
    FUN_1407d0cc0(param_1 + 0x18);
    FUN_1407d0cc0(param_1 + 8);
    return;
}



void FUN_1407c3780(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    *param_1 = &PTR_LAB_140b79930;
    if ((longlong *)param_1[0x32a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x32a] + 8))();
        param_1[0x32a] = 0;
    }
    plVar1 = param_1 + 0x316;
    lVar2 = *plVar1;
    while (lVar2 != 0) {
        lVar2 = *plVar1;
        plVar3 = *(longlong **)(lVar2 + 0x40);
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))();
            *(undefined8 *)(lVar2 + 0x40) = 0;
        }
        lVar2 = *plVar1;
        if (lVar2 != 0) {
            if (*(undefined8 **)(lVar2 + 0x50) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar2 + 0x50) = *(undefined8 *)(lVar2 + 0x58);
            }
            if (*(longlong *)(lVar2 + 0x58) != 0) {
                *(undefined8 *)(*(longlong *)(lVar2 + 0x58) + 0x50) = *(undefined8 *)(lVar2 + 0x50);
            }
            *(undefined8 *)(lVar2 + 0x50) = 0;
            *(undefined8 *)(lVar2 + 0x58) = 0;
            if (*(longlong **)(lVar2 + 0x48) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(lVar2 + 0x48) + 8))();
            }
            FUN_14018b900(lVar2,0);
        }
        lVar2 = *plVar1;
    }
    FUN_1401981b0(param_1 + 0x9e);
    if ((longlong *)param_1[0x2f5] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2f5] + 8))();
        param_1[0x2f5] = 0;
    }
    if ((longlong *)param_1[0x2f6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2f6] + 8))();
        param_1[0x2f6] = 0;
    }
    if ((longlong *)param_1[0x2f8] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2f8] + 8))();
        param_1[0x2f8] = 0;
    }
    if ((longlong *)param_1[0x175] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x175] + 8))();
        param_1[0x175] = 0;
    }
    if ((longlong *)param_1[0x176] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x176] + 8))();
        param_1[0x176] = 0;
    }
    if ((longlong *)param_1[0x177] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x177] + 8))();
        param_1[0x177] = 0;
    }
    if ((longlong *)param_1[0x2ce] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2ce] + 8))();
        param_1[0x2ce] = 0;
    }
    if ((longlong *)param_1[0x2cf] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2cf] + 8))();
        param_1[0x2cf] = 0;
    }
    if ((longlong *)param_1[0x2d0] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2d0] + 8))();
        param_1[0x2d0] = 0;
    }
    if ((longlong *)param_1[0x2d1] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2d1] + 8))();
        param_1[0x2d1] = 0;
    }
    if ((longlong *)param_1[0x10a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10a] + 8))();
        param_1[0x10a] = 0;
    }
    FUN_1407d0c50(param_1 + 0x338);
    FUN_140019490(param_1 + 0x338);
    FUN_1407d0c50(param_1 + 0x33e);
    FUN_140019490(param_1 + 0x33e);
    if (param_1[0x343] != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0x33e);
    FUN_14018b900(param_1[0x340],0);
    param_1[0x340] = 0;
    if (param_1[0x33d] != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0x338);
    FUN_14018b900(param_1[0x33a],0);
    param_1[0x33a] = 0;
    if ((longlong *)param_1[0x337] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x337] + 8))();
    }
    if ((longlong *)param_1[0x336] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x336] + 8))();
    }
    if ((longlong *)param_1[0x335] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x335] + 8))();
    }
    if ((longlong *)param_1[0x334] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x334] + 8))();
    }
    if (*plVar1 != 0) {
        FUN_1401a4a00(plVar1);
    }
    if ((longlong *)param_1[0x303] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x303] + 8))();
    }
    if ((longlong *)param_1[0x302] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x302] + 8))();
    }
    if ((longlong *)param_1[0x301] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x301] + 8))();
    }
    if ((longlong *)param_1[0x2d4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2d4] + 8))();
    }
    if ((longlong *)param_1[0x2d3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2d3] + 8))();
    }
    if ((longlong *)param_1[0x2d2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2d2] + 8))();
    }
    if ((longlong *)param_1[0x2cd] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2cd] + 8))();
    }
    if (param_1[0xa6] != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0x9f);
    FUN_14018b900(param_1[0xa1],0);
    param_1[0xa1] = 0;
    FUN_1401981b0(param_1 + 0x9e);
    if (param_1[0x9e] != 0) {
        FUN_1401a4a00(param_1 + 0x9e);
    }
    if (param_1[0x9d] != 0) {
        FUN_1401a4a00();
    }
    if (param_1[0x9c] != 0) {
        FUN_1401a4a00();
    }
    FUN_1407c34d0(param_1 + 4);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407c3b60(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    int *piVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined4 *puVar8;
    longlong lVar9;
    uint uVar10;
    float *pfVar12;
    undefined4 uVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    ulonglong local_78;
    undefined4 local_70;
    undefined4 uStack108;
    undefined4 uStack104;
    undefined4 local_64;
    undefined4 uStack96;
    undefined4 local_5c;
    ulonglong uVar11;

    uVar4 = FUN_1402ec590(param_1,param_1 + 0xba8);
    if ((((((-1 < (int)uVar4) && (uVar4 = FUN_1402ec590(), -1 < (int)uVar4)) &&
           (uVar4 = FUN_1402ec590(), -1 < (int)uVar4)) &&
          (((uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                  (DAT_140c65670,L"Shaders\\SimpleVS.sho",param_1 + 0x1668),
                  -1 < (int)uVar4 &&
                  (uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                          (DAT_140c65670,L"Shaders\\SimplePS.sho",param_1 + 0x1670),
                          -1 < (int)uVar4)) &&
            ((uVar4 = (**(code **)(*DAT_140c65670 + 0x90))
                    (DAT_140c65670,L"Shaders\\SkyVS.sho",param_1 + 0x1678), -1 < (int)uVar4
                                                                            && ((uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                    (DAT_140c65670,L"Shaders\\SkyPS.sho",param_1 + 0x1680),
                    -1 < (int)uVar4 &&
                    (uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                            (DAT_140c65670,L"Shaders\\CompositeEnvMapPS.sho",param_1 + 0x1688),
                            -1 < (int)uVar4)))))))) &&
         (uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                 (DAT_140c65670,L"Shaders\\FilterEnvMapPS.sho",param_1 + 0x1690),
                 -1 < (int)uVar4)) &&
        (((uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                (DAT_140c65670,L"Shaders\\DownsampleEnvMapPS.sho",param_1 + 0x1698),
                -1 < (int)uVar4 &&
                (uVar4 = (**(code **)(*DAT_140c65670 + 0x98))
                        (DAT_140c65670,L"Shaders\\CompositeCUBEMapPS.sho",param_1 + 0x16a0),
                        -1 < (int)uVar4)) &&
          (uVar4 = (**(code **)(*DAT_140c65670 + 0x38))(DAT_140c65670,0x1c20,1,param_1 + 0x17a8),
                  -1 < (int)uVar4)))) {
        lVar6 = param_1 + 0x17b0;
        uVar4 = (**(code **)(*DAT_140c65670 + 0x40))(DAT_140c65670,0x1500,0,1,lVar6);
        if (-1 < (int)uVar4) {
            fVar18 = 0.03125;
            uVar7 = 0;
            fVar17 = DAT_140c54ce8 * 2.0;
            puVar8 = (undefined4 *)(param_1 + 0x16ac);
            uVar11 = uVar7;
            fVar14 = DAT_140c54ce8;
            do {
                fVar15 = (float)uVar11 * fVar17 * fVar18;
                uVar13 = FUN_1408fc950(fVar15);
                puVar8[-1] = uVar13;
                uVar13 = FUN_1408fe3d0(fVar15);
                uVar10 = (int)uVar11 + 1;
                uVar11 = (ulonglong)uVar10;
                *puVar8 = uVar13;
                puVar8 = puVar8 + 2;
            } while (uVar10 < 0x20);
            iVar3 = DAT_140c54d00;
            if (*DAT_140c63750 < DAT_140c54d00) {
                iVar3 = *DAT_140c63750;
            }
            fVar16 = DAT_140c3b438 * 0.005555556 * *(float *)(&DAT_140c54d10 + (longlong)iVar3 * 4);
            fVar17 = (float)FUN_1408fe3d0(0);
            fVar18 = (float)FUN_1408fc950(0);
            fVar15 = (float)FUN_1408fe3d0(fVar16);
            fVar16 = (float)FUN_1408fc950(fVar16);
            *(float *)(param_1 + 0x1838) = fVar17;
            *(undefined4 *)(param_1 + 0x182c) = 0;
            *(undefined4 *)(param_1 + 0x183c) = 0;
            *(undefined4 *)(param_1 + 0x184c) = 0;
            *(float *)(param_1 + 0x1820) = fVar18 * fVar16 - fVar17 * fVar17 * fVar15;
            *(float *)(param_1 + 0x1824) = fVar18 * fVar17 * fVar15 + fVar17 * fVar16;
            *(uint *)(param_1 + 0x1830) = (uint)(fVar17 * fVar18) ^ 0x80000000;
            *(float *)(param_1 + 0x1844) = fVar17 * fVar15 - fVar18 * fVar17 * fVar16;
            *(float *)(param_1 + 0x1834) = fVar18 * fVar18;
            *(float *)(param_1 + 0x1848) = fVar16 * fVar18;
            *(uint *)(param_1 + 0x1828) = (uint)(fVar15 * fVar18) ^ 0x80000000;
            *(float *)(param_1 + 0x1840) = fVar18 * fVar15 + fVar17 * fVar17 * fVar16;
            uVar2 = uRam0000000140c7844c;
            uVar1 = uRam0000000140c78448;
            uVar13 = uRam0000000140c78444;
            *(undefined4 *)(param_1 + 0x1850) = _DAT_140c78440;
            *(undefined4 *)(param_1 + 0x1854) = uVar13;
            *(undefined4 *)(param_1 + 0x1858) = uVar1;
            *(undefined4 *)(param_1 + 0x185c) = uVar2;
            fVar17 = (float)FUN_140934e10(0x3dcccccd);
            fVar18 = (float)FUN_140934e10(0xbdcccccd);
            fVar14 = (float)FUN_1408fde98(fVar18 + fVar14,fVar14);
            lVar9 = 6;
            fVar15 = (fVar14 - fVar17) * 0.1666667;
            fVar18 = 200.0;
            pfVar12 = (float *)(param_1 + 0x18bc);
            fVar14 = fVar15 + fVar17;
            do {
                fVar16 = fVar14;
                fVar14 = (float)FUN_1408fc950(fVar17);
                fVar14 = fVar14 * fVar18;
                fVar17 = (float)FUN_1408fe3d0(fVar17);
                pfVar12[1] = fVar14 / fVar17;
                fVar14 = (float)FUN_1408fc950(fVar16);
                fVar14 = fVar14 * fVar18;
                fVar17 = (float)FUN_1408fe3d0(fVar16);
                uVar13 = (undefined4)((ulonglong)lVar6 >> 0x20);
                *pfVar12 = fVar14 / fVar17;
                lVar9 = lVar9 + -1;
                pfVar12 = pfVar12 + 2;
                fVar14 = fVar16 + fVar15;
                fVar17 = fVar16;
            } while (lVar9 != 0);
            (**(code **)(*DAT_140c65670 + 0x2c8))();
            uVar4 = (**(code **)(*DAT_140c65670 + 0x58))();
            if (-1 < (int)uVar4) {
                if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))();
                }
                uVar11 = param_1 + 0x19b0;
                uVar4 = (**(code **)(*DAT_140c65670 + 0x58))();
                if (-1 < (int)uVar4) {
                    piVar5 = (int *)(**(code **)(*DAT_140c65670 + 0x2c8))();
                    uVar4 = (**(code **)(*DAT_140c65670 + 0x68))
                            (DAT_140c65670,0x10,0x10,0x10,CONCAT44(uVar13,1),0,
                             (*piVar5 != 0) + '\x04',1,0,uVar11 & 0xffffffff00000000,
                             param_1 + 0x19b8);
                    if ((-1 < (int)uVar4) &&
                        (uVar4 = (**(code **)(**(longlong **)(param_1 + 0xba8) + 0x28))
                                (*(longlong **)(param_1 + 0xba8),
                                 L"Art\\Sky\\Glare\\Sky_Glare_StandardSunGlare_White.M3",
                                 param_1 + 0x1950,0), -1 < (int)uVar4)) {
                        local_78 = 0x96;
                        uStack108 = 0;
                        uStack104 = 0;
                        local_64 = 0;
                        uStack96 = 0;
                        local_5c = 0;
                        local_70 = 0x3f800000;
                        (**(code **)(**(longlong **)(param_1 + 0x1950) + 0x248))
                                (*(longlong **)(param_1 + 0x1950),0,&local_78);
                        (**(code **)(**(longlong **)(param_1 + 0x1950) + 0x48))
                                (*(longlong **)(param_1 + 0x1950),&DAT_140c78390);
                        uVar4 = (**(code **)(*DAT_140c65670 + 0xc0))(DAT_140c65670,param_1 + 0x850);
                        if (-1 < (int)uVar4) {
                            uStack104 = 0x407c4250;
                            local_64 = 1;
                            local_78 = local_78 & 0xffffffff00000000;
                            local_70 = (undefined4)param_1;
                            uStack108 = (undefined4)((ulonglong)param_1 >> 0x20);
                            uStack96 = 0;
                            local_5c = 0;
                            (**(code **)(**(longlong **)(param_1 + 0x850) + 0x18))
                                    (*(longlong **)(param_1 + 0x850),0,&local_78);
                            puVar8 = (undefined4 *)(param_1 + 0x1a20);
                            do {
                                lVar6 = FUN_14024d360();
                                uVar10 = (int)uVar7 + 1;
                                uVar7 = (ulonglong)uVar10;
                                *puVar8 = *(undefined4 *)(lVar6 + 0x24);
                                puVar8 = puVar8 + 1;
                            } while (uVar10 < 0xc);
                            uVar13 = FUN_14018cdf0();
                            *(undefined4 *)(param_1 + 0x528) = uVar13;
                            uVar4 = 0;
                        }
                    }
                }
            }
        }
    }
    return uVar4;
}



void FUN_1407c4250(longlong param_1)

{
    longlong lVar1;

    for (lVar1 = *(longlong *)(param_1 + 0x4e0); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x68)) {
        *(undefined4 *)(lVar1 + 0x168) = 0xffffffff;
        FUN_1407d20e0(lVar1);
    }
    return;
}



undefined4 FUN_1407c4290(longlong *param_1)

{
    longlong *plVar1;
    undefined4 uVar2;

    plVar1 = param_1 + 1;
    *(int *)plVar1 = *(int *)plVar1 + -1;
    uVar2 = *(undefined4 *)(param_1 + 1);
    if (*(int *)plVar1 == 0) {
        (**(code **)(*param_1 + 0x140))(param_1,1);
        uVar2 = 0;
    }
    return uVar2;
}



undefined8 FUN_1407c42c0(longlong *param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 uVar2;

    param_1[2] = param_2;
    (**(code **)(*(longlong *)param_1[0x175] + 0x10))();
    (**(code **)(*(longlong *)param_1[0x176] + 0x10))((longlong *)param_1[0x176],param_2);
    (**(code **)(*(longlong *)param_1[0x177] + 0x10))((longlong *)param_1[0x177],param_2);
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        lVar1 = *param_1;
        uVar2 = (**(code **)(*(longlong *)param_1[2] + 0x48))();
        (**(code **)(lVar1 + 0x20))(param_1,uVar2);
    }
    return 0;
}



void FUN_1407c4330(longlong param_1,undefined8 param_2,longlong **param_3)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined auStack2152 [32];
    undefined8 local_848;
    undefined8 local_838 [2];
    undefined local_828 [2048];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack2152;
    local_838[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x510))(local_838);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x508) + (uVar3 % *(ulonglong *)(param_1 + 0x500)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1407c43a5:
            lVar4 = FUN_14018b280(0xf00,0);
            if (lVar4 == 0) {
                plVar5 = (longlong *)0x0;
            }
            else {
                plVar5 = (longlong *)FUN_1407d1540(lVar4);
            }
            iVar2 = FUN_1407d1f00(plVar5,param_1,local_838[0]);
            if (iVar2 < 0) {
                local_848 = FUN_1401b3450(local_828,0x400,iVar2);
                iVar2 = 6;
                FUN_1400035b0(6,0,0,local_838[0]);
                if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x78))(plVar5,iVar2 + -5);
                }
            }
            else {
                *param_3 = plVar5;
            }
            LAB_1407c443c:
            FUN_1407db4f0(local_28 ^ (ulonglong)auStack2152);
            return;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x518))(local_838,puVar1 + 2), iVar2 != 0)) {
            if ((longlong **)(puVar1 + 3) != (longlong **)0x0) {
                if (param_3 != (longlong **)0x0) {
                    *param_3 = (longlong *)puVar1[3];
                }
                (**(code **)**param_3)();
                goto LAB_1407c443c;
            }
            goto LAB_1407c43a5;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



void FUN_1407c4f30(longlong param_1)

{
    longlong *plVar1;

    for (plVar1 = *(longlong **)(param_1 + 0x4e0); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[0xd]) {
        (**(code **)(*plVar1 + 0x118))(plVar1);
    }
    return;
}


/*
Unable to decompile 'FUN_1407c4fc0'
Cause: Exception while decompiling 1407c4fc0: process: timeout

*/


undefined8 FUN_1407c8af0(longlong param_1,undefined4 *param_2)

{
    longlong *plVar1;
    int iVar2;
    float *pfVar3;
    ulonglong uVar4;
    float *pfVar5;
    undefined4 *puVar6;
    undefined4 *puVar7;
    longlong lVar8;
    undefined4 *puVar9;
    float *pfVar10;
    ulonglong uVar11;
    longlong lVar12;
    ulonglong uVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined4 in_XMM6_Da;
    float fVar17;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined4 in_XMM7_Da;
    float fVar18;
    undefined4 in_XMM7_Db;
    undefined4 in_XMM7_Dc;
    undefined4 in_XMM7_Dd;

    puVar6 = (undefined4 *)(param_1 + 0xb90);
    *puVar6 = *param_2;
    *(undefined4 *)(param_1 + 0xb94) = param_2[1];
    *(undefined4 *)(param_1 + 0xb98) = param_2[2];
    puVar9 = (undefined4 *)(param_1 + 0xa20);
    lVar12 = 3;
    *puVar6 = 0x3f800000;
    do {
        lVar8 = 3;
        puVar7 = puVar9 + -0x17;
        do {
            puVar7[-1] = *puVar6;
            *puVar7 = *puVar6;
            puVar7[1] = *puVar6;
            puVar7[2] = *puVar6;
            puVar7[3] = *puVar6;
            puVar7[4] = *puVar6;
            puVar7[5] = *puVar6;
            puVar7[6] = *puVar6;
            lVar8 = lVar8 + -1;
            puVar7 = puVar7 + 8;
        } while (lVar8 != 0);
        lVar8 = 5;
        puVar7 = puVar9;
        do {
            *puVar7 = *puVar6;
            lVar8 = lVar8 + -1;
            puVar7 = puVar7 + 1;
        } while (lVar8 != 0);
        puVar6 = puVar6 + 1;
        puVar9 = puVar9 + 0x1d;
        lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    fVar18 = 1.0;
    lVar12 = 2;
    pfVar10 = (float *)(param_1 + 0xb98);
    uVar13 = 0;
    fVar17 = 0.0;
    fVar15 = 1.0;
    fVar14 = 1.0;
    do {
        fVar16 = fVar14;
        if (0.0 < *pfVar10) {
            fVar16 = fVar15 - *pfVar10;
            fVar14 = fVar16 / fVar14;
            uVar4 = uVar13;
            if (3 < lVar12) {
                lVar8 = (lVar12 - 4U >> 2) + 1;
                uVar4 = lVar8 * 4;
                pfVar3 = (float *)(param_1 + 0xb94);
                do {
                    pfVar3[-1] = fVar14 * pfVar3[-1];
                    *pfVar3 = fVar14 * *pfVar3;
                    pfVar3[1] = fVar14 * pfVar3[1];
                    pfVar3[2] = fVar14 * pfVar3[2];
                    lVar8 = lVar8 + -1;
                    pfVar3 = pfVar3 + 4;
                } while (lVar8 != 0);
            }
            fVar15 = fVar16;
            if ((longlong)uVar4 < lVar12) {
                lVar8 = lVar12 - uVar4;
                pfVar3 = (float *)(param_1 + 0xb90 + uVar4 * 4);
                do {
                    *pfVar3 = fVar14 * *pfVar3;
                    lVar8 = lVar8 + -1;
                    pfVar3 = pfVar3 + 1;
                } while (lVar8 != 0);
            }
        }
        lVar12 = lVar12 + -1;
        pfVar10 = pfVar10 + -1;
        fVar14 = fVar16;
    } while (0 < lVar12);
    *(undefined8 *)(param_1 + 0x858) = 0;
    *(undefined4 *)(param_1 + 0x860) = 0;
    FUN_1407e4830(param_1 + 0x864,0,0x15c,pfVar10,
                  CONCAT412(in_XMM7_Dd,CONCAT48(in_XMM7_Dc,CONCAT44(in_XMM7_Db,in_XMM7_Da))),
                  CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da))));
    pfVar10 = (float *)(param_1 + 0xb1c);
    FUN_1407e4830(pfVar10,0,0x74);
    for (plVar1 = *(longlong **)(param_1 + 0x4e8); plVar1 != (longlong *)0x0;
         plVar1 = (longlong *)plVar1[0xf]) {
        iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
        if (iVar2 != 0) {
            *(float *)(param_1 + 0x858) = *(float *)(param_1 + 0x858) + *(float *)(plVar1 + 10);
            *(float *)(param_1 + 0x85c) =
                    *(float *)(param_1 + 0x85c) + *(float *)((longlong)plVar1 + 0x54);
            *(float *)(param_1 + 0x860) = *(float *)(param_1 + 0x860) + *(float *)(plVar1 + 0xb);
            iVar2 = (**(code **)(*plVar1 + 0x120))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x864) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x864);
                *pfVar10 = *(float *)(plVar1 + 10) + *pfVar10;
                *(float *)(param_1 + 0x8d8) =
                        *(float *)(param_1 + 0x8d8) + *(float *)((longlong)plVar1 + 0x54);
                *pfVar10 = *pfVar10 + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x94c) = *(float *)(param_1 + 0x94c) + *(float *)(plVar1 + 0xb);
                *pfVar10 = *(float *)(plVar1 + 0xb) + *pfVar10;
            }
            iVar2 = (**(code **)(*plVar1 + 0x128))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x868) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x868);
                *(float *)(param_1 + 0xb20) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb20);
                *(float *)(param_1 + 0x8dc) =
                        *(float *)(param_1 + 0x8dc) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb20) =
                        *(float *)(param_1 + 0xb20) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x950) = *(float *)(param_1 + 0x950) + *(float *)(plVar1 + 0xb);
                *(float *)(param_1 + 0xb20) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb20);
            }
            iVar2 = (**(code **)(*plVar1 + 0x130))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x86c) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x86c);
                *(float *)(param_1 + 0xb24) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb24);
                *(float *)(param_1 + 0x8e0) =
                        *(float *)(param_1 + 0x8e0) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb24) =
                        *(float *)(param_1 + 0xb24) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x954) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x954);
                *(float *)(param_1 + 0xb24) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb24);
            }
            iVar2 = (**(code **)(*plVar1 + 0x138))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x870) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x870);
                *(float *)(param_1 + 0xb28) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb28);
                *(float *)(param_1 + 0x8e4) =
                        *(float *)((longlong)plVar1 + 0x54) + *(float *)(param_1 + 0x8e4);
                *(float *)(param_1 + 0xb28) =
                        *(float *)(param_1 + 0xb28) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x958) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x958);
                *(float *)(param_1 + 0xb28) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb28);
            }
            iVar2 = (**(code **)(*plVar1 + 0x140))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x874) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x874);
                *(float *)(param_1 + 0xb2c) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb2c);
                *(float *)(param_1 + 0x8e8) =
                        *(float *)(param_1 + 0x8e8) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb2c) =
                        *(float *)(param_1 + 0xb2c) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x95c) = *(float *)(param_1 + 0x95c) + *(float *)(plVar1 + 0xb);
                *(float *)(param_1 + 0xb2c) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb2c);
            }
            iVar2 = (**(code **)(*plVar1 + 0x148))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x878) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x878);
                *(float *)(param_1 + 0xb30) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb30);
                *(float *)(param_1 + 0x8ec) =
                        *(float *)(param_1 + 0x8ec) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb30) =
                        *(float *)(param_1 + 0xb30) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x960) = *(float *)(param_1 + 0x960) + *(float *)(plVar1 + 0xb);
                *(float *)(param_1 + 0xb30) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb30);
            }
            iVar2 = (**(code **)(*plVar1 + 0x150))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x87c) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x87c);
                *(float *)(param_1 + 0xb34) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb34);
                *(float *)(param_1 + 0x8f0) =
                        *(float *)(param_1 + 0x8f0) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb34) =
                        *(float *)(param_1 + 0xb34) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x964) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x964);
                *(float *)(param_1 + 0xb34) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb34);
            }
            iVar2 = (**(code **)(*plVar1 + 0x158))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x880) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x880);
                *(float *)(param_1 + 0xb38) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb38);
                *(float *)(param_1 + 0x8f4) =
                        *(float *)((longlong)plVar1 + 0x54) + *(float *)(param_1 + 0x8f4);
                *(float *)(param_1 + 0xb38) =
                        *(float *)(param_1 + 0xb38) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x968) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x968);
                *(float *)(param_1 + 0xb38) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb38);
            }
            iVar2 = (**(code **)(*plVar1 + 0x160))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x884) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x884);
                *(float *)(param_1 + 0xb3c) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb3c);
                *(float *)(param_1 + 0x8f8) =
                        *(float *)(param_1 + 0x8f8) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb3c) =
                        *(float *)(param_1 + 0xb3c) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x96c) = *(float *)(param_1 + 0x96c) + *(float *)(plVar1 + 0xb);
                *(float *)(param_1 + 0xb3c) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb3c);
            }
            iVar2 = (**(code **)(*plVar1 + 0x168))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x888) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x888);
                *(float *)(param_1 + 0xb40) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb40);
                *(float *)(param_1 + 0x8fc) =
                        *(float *)(param_1 + 0x8fc) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb40) =
                        *(float *)(param_1 + 0xb40) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x970) = *(float *)(param_1 + 0x970) + *(float *)(plVar1 + 0xb);
                *(float *)(param_1 + 0xb40) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb40);
            }
            iVar2 = (**(code **)(*plVar1 + 0x170))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x88c) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x88c);
                *(float *)(param_1 + 0xb44) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb44);
                *(float *)(param_1 + 0x900) =
                        *(float *)(param_1 + 0x900) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb44) =
                        *(float *)(param_1 + 0xb44) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x974) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x974);
                *(float *)(param_1 + 0xb44) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb44);
            }
            iVar2 = (**(code **)(*plVar1 + 0x178))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x890) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x890);
                *(float *)(param_1 + 0xb48) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb48);
                *(float *)(param_1 + 0x904) =
                        *(float *)((longlong)plVar1 + 0x54) + *(float *)(param_1 + 0x904);
                *(float *)(param_1 + 0xb48) =
                        *(float *)(param_1 + 0xb48) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x978) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x978);
                *(float *)(param_1 + 0xb48) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb48);
            }
            iVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x894) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x894);
                *(float *)(param_1 + 0xb4c) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb4c);
                *(float *)(param_1 + 0x908) =
                        *(float *)(param_1 + 0x908) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb4c) =
                        *(float *)(param_1 + 0xb4c) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x97c) = *(float *)(param_1 + 0x97c) + *(float *)(plVar1 + 0xb);
                *(float *)(param_1 + 0xb4c) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb4c);
            }
            uVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1);
            if ((uVar4 & 3) != 0) {
                *(float *)(param_1 + 0x898) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x898);
                *(float *)(param_1 + 0xb50) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb50);
                *(float *)(param_1 + 0x90c) =
                        *(float *)(param_1 + 0x90c) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb50) =
                        *(float *)(param_1 + 0xb50) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x980) = *(float *)(param_1 + 0x980) + *(float *)(plVar1 + 0xb);
                *(float *)(param_1 + 0xb50) = *(float *)(param_1 + 0xb50) + *(float *)(plVar1 + 0xb);
            }
            iVar2 = (**(code **)(*plVar1 + 0x188))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x8a4) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x8a4);
                *(float *)(param_1 + 0xb5c) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb5c);
                *(float *)(param_1 + 0x918) =
                        *(float *)(param_1 + 0x918) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb5c) =
                        *(float *)(param_1 + 0xb5c) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x98c) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x98c);
                *(float *)(param_1 + 0xb5c) = *(float *)(param_1 + 0xb5c) + *(float *)(plVar1 + 0xb);
            }
            iVar2 = (**(code **)(*plVar1 + 400))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x8a8) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x8a8);
                *(float *)(param_1 + 0xb60) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb60);
                *(float *)(param_1 + 0x91c) =
                        *(float *)((longlong)plVar1 + 0x54) + *(float *)(param_1 + 0x91c);
                *(float *)(param_1 + 0xb60) =
                        *(float *)(param_1 + 0xb60) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x990) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x990);
                *(float *)(param_1 + 0xb60) = *(float *)(param_1 + 0xb60) + *(float *)(plVar1 + 0xb);
            }
            iVar2 = (**(code **)(*plVar1 + 0x198))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x8ac) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x8ac);
                *(float *)(param_1 + 0xb64) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb64);
                *(float *)(param_1 + 0x920) =
                        *(float *)(param_1 + 0x920) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb64) =
                        *(float *)(param_1 + 0xb64) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x994) = *(float *)(param_1 + 0x994) + *(float *)(plVar1 + 0xb);
                *(float *)(param_1 + 0xb64) = *(float *)(param_1 + 0xb64) + *(float *)(plVar1 + 0xb);
            }
            pfVar3 = (float *)(param_1 + 0xb68);
            uVar4 = uVar13;
            do {
                iVar2 = (**(code **)(*plVar1 + 0x1a0))(plVar1,uVar4);
                if (iVar2 != 0) {
                    pfVar3[-0xae] = *(float *)(plVar1 + 10) + pfVar3[-0xae];
                    *pfVar3 = *pfVar3 + *(float *)(plVar1 + 10);
                    pfVar3[-0x91] = pfVar3[-0x91] + *(float *)((longlong)plVar1 + 0x54);
                    *pfVar3 = *pfVar3 + *(float *)((longlong)plVar1 + 0x54);
                    pfVar3[-0x74] = *(float *)(plVar1 + 0xb) + pfVar3[-0x74];
                    *pfVar3 = *pfVar3 + *(float *)(plVar1 + 0xb);
                }
                uVar4 = uVar4 + 1;
                pfVar3 = pfVar3 + 1;
            } while (uVar4 < 8);
            iVar2 = (**(code **)(*plVar1 + 0x1a8))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x8d0) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x8d0);
                *(float *)(param_1 + 0xb88) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb88);
                *(float *)(param_1 + 0x944) =
                        *(float *)(param_1 + 0x944) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb88) =
                        *(float *)(param_1 + 0xb88) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x9b8) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x9b8);
                *(float *)(param_1 + 0xb88) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb88);
            }
            iVar2 = (**(code **)(*plVar1 + 0x1b0))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x89c) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x89c);
                *(float *)(param_1 + 0xb54) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb54);
                *(float *)(param_1 + 0x910) =
                        *(float *)(param_1 + 0x910) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb54) =
                        *(float *)(param_1 + 0xb54) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x984) = *(float *)(param_1 + 0x984) + *(float *)(plVar1 + 0xb);
                *(float *)(param_1 + 0xb54) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0xb54);
            }
            iVar2 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x8a0) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x8a0);
                *(float *)(param_1 + 0xb58) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb58);
                *(float *)(param_1 + 0x914) =
                        *(float *)(param_1 + 0x914) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0xb58) =
                        *(float *)(param_1 + 0xb58) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x988) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x988);
                *(float *)(param_1 + 0xb58) = *(float *)(param_1 + 0xb58) + *(float *)(plVar1 + 0xb);
            }
            iVar2 = (**(code **)(*plVar1 + 0x1c0))(plVar1);
            if (iVar2 != 0) {
                *(float *)(param_1 + 0x8d4) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0x8d4);
                *(float *)(param_1 + 0xb8c) = *(float *)(plVar1 + 10) + *(float *)(param_1 + 0xb8c);
                *(float *)(param_1 + 0x948) =
                        *(float *)((longlong)plVar1 + 0x54) + *(float *)(param_1 + 0x948);
                *(float *)(param_1 + 0xb8c) =
                        *(float *)(param_1 + 0xb8c) + *(float *)((longlong)plVar1 + 0x54);
                *(float *)(param_1 + 0x9bc) = *(float *)(plVar1 + 0xb) + *(float *)(param_1 + 0x9bc);
                *(float *)(param_1 + 0xb8c) = *(float *)(param_1 + 0xb8c) + *(float *)(plVar1 + 0xb);
            }
        }
    }
    pfVar10 = (float *)(param_1 + 0xa34);
    uVar4 = uVar13;
    do {
        lVar12 = 2;
        pfVar3 = pfVar10 + 0x1d;
        fVar14 = fVar18;
        fVar15 = fVar18;
        do {
            fVar16 = fVar14;
            if (fVar17 < *pfVar3) {
                if (pfVar3[-0x57] <= fVar17) {
                    *pfVar3 = 0.0;
                }
                else {
                    fVar16 = fVar15 - *pfVar3;
                    fVar14 = fVar16 / fVar14;
                    uVar11 = uVar13;
                    if (3 < lVar12) {
                        lVar8 = (lVar12 - 4U >> 2) + 1;
                        uVar11 = lVar8 * 4;
                        pfVar5 = pfVar10;
                        do {
                            pfVar5[-0x1d] = fVar14 * pfVar5[-0x1d];
                            *pfVar5 = fVar14 * *pfVar5;
                            pfVar5[0x1d] = fVar14 * pfVar5[0x1d];
                            pfVar5[0x3a] = fVar14 * pfVar5[0x3a];
                            lVar8 = lVar8 + -1;
                            pfVar5 = pfVar5 + 0x74;
                        } while (lVar8 != 0);
                    }
                    fVar15 = fVar16;
                    if ((longlong)uVar11 < lVar12) {
                        lVar8 = lVar12 - uVar11;
                        pfVar5 = (float *)(param_1 + (uVar11 * 0x1d + 0x270 + uVar4) * 4);
                        do {
                            *pfVar5 = fVar14 * *pfVar5;
                            lVar8 = lVar8 + -1;
                            pfVar5 = pfVar5 + 0x1d;
                        } while (lVar8 != 0);
                    }
                }
            }
            lVar12 = lVar12 + -1;
            pfVar3 = pfVar3 + -0x1d;
            fVar14 = fVar16;
        } while (0 < lVar12);
        uVar4 = uVar4 + 1;
        pfVar10 = pfVar10 + 1;
    } while (uVar4 < 0x1d);
    return 0;
}



undefined8 FUN_1407c9ad0(longlong param_1)

{
    float *pfVar1;
    float *pfVar2;
    longlong lVar3;
    longlong lVar4;

    pfVar2 = (float *)(param_1 + 0x868);
    lVar4 = 3;
    do {
        if (1e-05 < pfVar2[-1]) {
            pfVar2[-1] = 1.0 / pfVar2[-1];
        }
        else {
            pfVar2[-1] = 0.0;
        }
        if (1e-05 < *pfVar2) {
            *pfVar2 = 1.0 / *pfVar2;
        }
        else {
            *pfVar2 = 0.0;
        }
        if (1e-05 < pfVar2[1]) {
            pfVar2[1] = 1.0 / pfVar2[1];
        }
        else {
            pfVar2[1] = 0.0;
        }
        if (1e-05 < pfVar2[2]) {
            pfVar2[2] = 1.0 / pfVar2[2];
        }
        else {
            pfVar2[2] = 0.0;
        }
        if (1e-05 < pfVar2[3]) {
            pfVar2[3] = 1.0 / pfVar2[3];
        }
        else {
            pfVar2[3] = 0.0;
        }
        if (1e-05 < pfVar2[4]) {
            pfVar2[4] = 1.0 / pfVar2[4];
        }
        else {
            pfVar2[4] = 0.0;
        }
        if (1e-05 < pfVar2[5]) {
            pfVar2[5] = 1.0 / pfVar2[5];
        }
        else {
            pfVar2[5] = 0.0;
        }
        if (1e-05 < pfVar2[6]) {
            pfVar2[6] = 1.0 / pfVar2[6];
        }
        else {
            pfVar2[6] = 0.0;
        }
        if (1e-05 < pfVar2[7]) {
            pfVar2[7] = 1.0 / pfVar2[7];
        }
        else {
            pfVar2[7] = 0.0;
        }
        if (1e-05 < pfVar2[8]) {
            pfVar2[8] = 1.0 / pfVar2[8];
        }
        else {
            pfVar2[8] = 0.0;
        }
        if (1e-05 < pfVar2[9]) {
            pfVar2[9] = 1.0 / pfVar2[9];
        }
        else {
            pfVar2[9] = 0.0;
        }
        if (1e-05 < pfVar2[10]) {
            pfVar2[10] = 1.0 / pfVar2[10];
        }
        else {
            pfVar2[10] = 0.0;
        }
        if (1e-05 < pfVar2[0xb]) {
            pfVar2[0xb] = 1.0 / pfVar2[0xb];
        }
        else {
            pfVar2[0xb] = 0.0;
        }
        if (1e-05 < pfVar2[0xc]) {
            pfVar2[0xc] = 1.0 / pfVar2[0xc];
        }
        else {
            pfVar2[0xc] = 0.0;
        }
        if (1e-05 < pfVar2[0xf]) {
            pfVar2[0xf] = 1.0 / pfVar2[0xf];
        }
        else {
            pfVar2[0xf] = 0.0;
        }
        if (1e-05 < pfVar2[0x10]) {
            pfVar2[0x10] = 1.0 / pfVar2[0x10];
        }
        else {
            pfVar2[0x10] = 0.0;
        }
        if (1e-05 < pfVar2[0x11]) {
            pfVar2[0x11] = 1.0 / pfVar2[0x11];
        }
        else {
            pfVar2[0x11] = 0.0;
        }
        pfVar1 = pfVar2 + 0x12;
        lVar3 = 8;
        do {
            if (1e-05 < *pfVar1) {
                *pfVar1 = 1.0 / *pfVar1;
            }
            else {
                *pfVar1 = 0.0;
            }
            pfVar1 = pfVar1 + 1;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        if (1e-05 < pfVar2[0x1a]) {
            pfVar2[0x1a] = 1.0 / pfVar2[0x1a];
        }
        else {
            pfVar2[0x1a] = 0.0;
        }
        if (1e-05 < pfVar2[0xd]) {
            pfVar2[0xd] = 1.0 / pfVar2[0xd];
        }
        else {
            pfVar2[0xd] = 0.0;
        }
        if (1e-05 < pfVar2[0xe]) {
            pfVar2[0xe] = 1.0 / pfVar2[0xe];
        }
        else {
            pfVar2[0xe] = 0.0;
        }
        if (1e-05 < pfVar2[0x1b]) {
            pfVar2[0x1b] = 1.0 / pfVar2[0x1b];
        }
        else {
            pfVar2[0x1b] = 0.0;
        }
        pfVar2 = pfVar2 + 0x1d;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407c9d80(longlong param_1,undefined4 param_2,float *param_3,undefined4 param_4)

{
    longlong **pplVar1;
    ulonglong *puVar2;
    ulonglong *puVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    longlong *plVar8;
    double dVar9;
    bool bVar10;
    undefined **ppuVar11;
    float *pfVar12;
    uint *puVar13;
    int iVar14;
    int iVar15;
    longlong lVar16;
    uint *puVar17;
    undefined *puVar18;
    longlong *plVar19;
    int iVar20;
    int *piVar21;
    uint *puVar22;
    uint uVar23;
    ulonglong uVar24;
    int *piVar25;
    longlong lVar26;
    uint uVar27;
    float fVar29;
    undefined4 uVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    undefined4 uVar38;
    undefined4 uVar39;
    undefined4 uVar40;
    undefined4 uVar41;
    undefined4 uVar42;
    undefined4 uVar43;
    float fVar44;
    float fVar45;
    undefined auStack792 [32];
    float *local_2f8;
    float *local_2f0;
    undefined *local_2e8;
    longlong local_2d8;
    uint *local_2d0;
    undefined4 local_2c8;
    int local_2c4;
    ulonglong local_2c0;
    longlong local_2b8;
    undefined **local_2b0;
    uint *local_2a8;
    float local_2a0;
    float local_29c;
    float local_298 [2];
    ulonglong local_290;
    undefined **local_288;
    undefined4 local_280;
    longlong local_278;
    undefined *local_270;
    float *local_268;
    undefined8 local_260;
    undefined8 local_258;
    float *local_250;
    ulonglong local_248;
    undefined *local_240;
    longlong local_238;
    ulonglong local_230;
    float local_228;
    undefined4 local_224;
    undefined4 local_220;
    undefined8 local_21c;
    undefined4 local_214;
    undefined8 local_210;
    float local_208;
    undefined4 local_204;
    undefined4 local_200;
    undefined8 local_1fc;
    undefined4 local_1f4;
    undefined8 local_1f0;
    undefined8 local_1e8;
    undefined8 local_1e0;
    undefined8 local_1d8;
    undefined local_1d0 [8];
    float local_1c8;
    float fStack452;
    float fStack448;
    float fStack444;
    float local_1b8;
    float fStack436;
    float fStack432;
    float fStack428;
    float local_1a8;
    float fStack420;
    float fStack416;
    float fStack412;
    undefined local_198 [16];
    float local_188;
    float local_184;
    float local_180;
    undefined local_178 [16];
    undefined local_168 [16];
    undefined local_158 [16];
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined *local_138;
    float *local_130;
    ulonglong local_e8;
    uint *puVar28;

    local_e8 = DAT_140c0f7b0 ^ (ulonglong)auStack792;
    fVar44 = 0.001;
    fVar37 = 0.00025;
    fVar36 = 2000.0;
    fVar32 = 1.0;
    iVar14 = DAT_140c54e50;
    if (*DAT_140c63750 < DAT_140c54e50) {
        iVar14 = *DAT_140c63750;
    }
    local_2c8 = param_4;
    local_280 = param_2;
    local_278 = param_1;
    local_250 = param_3;
    if ((*(float *)(&DAT_140c54e60 + (longlong)iVar14 * 4) == *(float *)(param_1 + 0x1864)) &&
        (*(int *)(param_1 + 0x1868) == 0)) goto LAB_1407c9f6f;
    lVar26 = *(longlong *)(param_1 + 0x18b0);
    bVar10 = true;
    if (lVar26 == 0) {
        LAB_1407c9f42:
        *(undefined4 *)(param_1 + 0x1868) = 0;
    }
    else {
        do {
            local_240 = (undefined *)((ulonglong)local_240 & 0xffffffff00000000);
            iVar14 = (**(code **)(**(longlong **)(lVar26 + 0x40) + 0x10))
                    (*(longlong **)(lVar26 + 0x40),&local_240,0);
            plVar19 = *(longlong **)(lVar26 + 0x40);
            if (iVar14 == 0) {
                local_270 = (undefined *)0x96;
                local_268 = (float *)0x3f800000;
                local_260 = 0;
                local_258 = 0;
                bVar10 = false;
            }
            else {
                lVar16 = (**(code **)(*plVar19 + 0x1a8))(plVar19,0x96,0);
                local_230 = 0x96;
                local_220 = 0;
                local_21c = 3;
                local_214 = 0;
                iVar14 = DAT_140c54e50;
                if (*DAT_140c63750 < DAT_140c54e50) {
                    iVar14 = *DAT_140c63750;
                }
                plVar19 = *(longlong **)(lVar26 + 0x40);
                local_228 = (float)(ulonglong)*(uint *)(lVar16 + 0x14) *
                            *(float *)(&DAT_140c54e60 + (longlong)iVar14 * 4) * fVar44 * fVar37;
                local_224 = (undefined4)
                        (longlong)
                        ((*(float *)(lVar26 + 0x30) + fVar36) * fVar37 *
                         (float)(ulonglong)*(uint *)(lVar16 + 0x14));
            }
            (**(code **)(*plVar19 + 0x248))();
            lVar26 = *(longlong *)(lVar26 + 0x58);
        } while (lVar26 != 0);
        if (bVar10) goto LAB_1407c9f42;
    }
    iVar14 = DAT_140c54e50;
    if (*DAT_140c63750 < DAT_140c54e50) {
        iVar14 = *DAT_140c63750;
    }
    *(undefined4 *)(param_1 + 0x1864) = *(undefined4 *)(&DAT_140c54e60 + (longlong)iVar14 * 4);
    LAB_1407c9f6f:
    if (*(int *)(&DAT_00001860 + param_1) == 1) {
        *(undefined4 *)(&DAT_00001860 + param_1) = 2;
    }
    else if (*(int *)(&DAT_00001860 + param_1) == 2) {
        plVar19 = *(longlong **)(param_1 + 0x4e8);
        *(undefined4 *)(&DAT_00001860 + param_1) = 3;
        if (plVar19 != (longlong *)0x0) {
            uVar42 = 0;
            uVar43 = 0x3ff00000;
            uVar38 = 0;
            uVar39 = 0x40af4000;
            uVar40 = 0;
            uVar41 = 0x3df00000;
            do {
                pfVar12 = local_250;
                puVar22 = (uint *)0x0;
                iVar14 = (**(code **)(*plVar19 + 0x40))(plVar19);
                if ((iVar14 != 0) &&
                    ((**(code **)(*plVar19 + 0x38))(plVar19), *(int *)((longlong)plVar19 + 0x144) != 0)) {
                    fVar29 = (float)(**(code **)(*plVar19 + 0x100))(plVar19);
                    piVar21 = DAT_140c63750;
                    fVar35 = pfVar12[2];
                    fVar33 = pfVar12[1];
                    fVar31 = fVar32 - fVar35;
                    local_2c4 = 1;
                    fVar34 = *(float *)(plVar19 + 0xb);
                    fVar4 = *(float *)((longlong)plVar19 + 0x54);
                    local_290 = 0;
                    local_2d8 = 0;
                    local_2c0 = 0;
                    fVar5 = *(float *)(plVar19 + 10);
                    fVar6 = *pfVar12;
                    local_2d0 = (uint *)0x0;
                    iVar14 = *DAT_140c63750;
                    local_288 = &PTR_PTR_140c3ad70;
                    piVar25 = (int *)(param_1 + 0x1938);
                    iVar15 = *(int *)(PTR_PTR_140c3ada0 + 0x10);
                    if (iVar14 < *(int *)(PTR_PTR_140c3ada0 + 0x10)) {
                        iVar15 = iVar14;
                    }
                    iVar20 = *(int *)(PTR_PTR_140c3ad70 + 0x10);
                    if (iVar14 < *(int *)(PTR_PTR_140c3ad70 + 0x10)) {
                        iVar20 = iVar14;
                    }
                    fVar45 = *(float *)(PTR_PTR_140c3ada0 + (longlong)iVar15 * 4 + 0x20);
                    fVar7 = *(float *)(PTR_PTR_140c3ad70 + (longlong)iVar20 * 4 + 0x20);
                    *(undefined4 *)(param_1 + 0x1868) = 1;
                    local_2b0 = &PTR_PTR_140c3ad78;
                    fVar45 = fVar32 / (fVar45 - fVar7);
                    local_2a0 = (float)((longlong)
                                                ((fVar35 * fVar34 + fVar33 * fVar4 * fVar31 +
                                                  fVar5 * fVar6 * fVar31 * (fVar32 - fVar33)) * fVar29) & 0xffffffff);
                    local_2b8 = param_1 + -0x140c3ad70;
                    puVar28 = puVar22;
                    do {
                        iVar14 = *piVar21;
                        iVar15 = *(int *)(*local_2b0 + 0x10);
                        iVar20 = *(int *)(*local_288 + 0x10);
                        if (iVar14 < iVar15) {
                            iVar15 = iVar14;
                        }
                        if (iVar14 < iVar20) {
                            iVar20 = iVar14;
                        }
                        uVar24 = (ulonglong)
                                ((*(float *)(*local_2b0 + (longlong)iVar15 * 4 + 0x20) -
                                  *(float *)(*local_288 + (longlong)iVar20 * 4 + 0x20)) * local_2a0 * fVar45);
                        uVar27 = (uint)uVar24;
                        uVar24 = uVar24 & 0xffffffff;
                        lVar26 = local_2d8;
                        local_248 = uVar24;
                        if (((local_290 <= uVar24) &&
                             (lVar16 = FUN_14018db00(local_2d8,uVar24,4), lVar26 = local_2d8, local_2d8 != lVar16
                             )) && (FUN_1407db590(lVar16,local_2d8,local_290 * 4), lVar26 = lVar16,
                                local_2d8 != 0)) {
                            (**(code **)(*(longlong *)(local_2d8 + -0x10) + 8))(local_2d8 + -0x10);
                        }
                        local_2d8 = lVar26;
                        puVar13 = local_2d0;
                        local_290 = uVar24;
                        if (((local_2c0 <= uVar24) &&
                             (puVar17 = (uint *)FUN_14018db00(puVar22,uVar24,4), puVar13 = local_2d0,
                                     puVar22 != puVar17)) &&
                            (FUN_1407db590(puVar17,puVar22,local_2c0 * 4), puVar13 = puVar17,
                                    puVar22 != (uint *)0x0)) {
                            (**(code **)(*(longlong *)(puVar22 + -4) + 8))(puVar22 + -4);
                        }
                        local_2d0 = puVar13;
                        uVar23 = 0;
                        local_2c0 = uVar24;
                        if (uVar27 != 0) {
                            lVar26 = local_2d8 - (longlong)local_2d0;
                            puVar22 = local_2d0;
                            do {
                                dVar9 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
                                *(float *)(lVar26 + -4 + (longlong)(puVar22 + 1)) =
                                        (float)(dVar9 * (double)CONCAT44(uVar39,uVar38)) - fVar36;
                                *puVar22 = uVar23;
                                uVar23 = uVar23 + 1;
                                puVar22 = puVar22 + 1;
                            } while (uVar23 < uVar27);
                        }
                        puVar22 = local_2d0;
                        lVar26 = local_2d8;
                        FUN_1401c3280();
                        ppuVar11 = local_288;
                        if (uVar27 != 0) {
                            local_2a8 = puVar22;
                            do {
                                iVar14 = *DAT_140c63750;
                                iVar15 = *(int *)(*local_2b0 + 0x10);
                                if (iVar14 < iVar15) {
                                    iVar15 = iVar14;
                                }
                                fVar32 = *(float *)(*local_2b0 + (longlong)iVar15 * 4 + 0x20);
                                iVar15 = *(int *)(*ppuVar11 + 0x10);
                                if (iVar14 < iVar15) {
                                    iVar15 = iVar14;
                                }
                                fVar35 = *(float *)(*ppuVar11 + (longlong)iVar15 * 4 + 0x20);
                                dVar9 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
                                fVar35 = (float)(dVar9 * (double)(fVar32 - fVar35)) + fVar35;
                                if (*(int *)((longlong)plVar19 + 0x144) == 2) {
                                    dVar9 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
                                    uVar27 = (uint)((float)dVar9 < *(float *)(plVar19 + 0x28));
                                }
                                else {
                                    uVar27 = 0;
                                }
                                iVar14 = (**(code **)(*plVar19 + 0x108))();
                                if (iVar14 != 0) {
                                    iVar14 = (**(code **)(*plVar19 + 0x108))(plVar19);
                                    uVar23 = (**(code **)(DAT_140c77890 + 0x18))(&DAT_140c77890);
                                    iVar14 = (int)(longlong)
                                            ((double)(ulonglong)uVar23 * (double)CONCAT44(uVar41,uVar40) *
                                             ((double)(ulonglong)(iVar14 - 1) + (double)CONCAT44(uVar43,uVar42)))
                                            ;
                                    uVar23 = (**(code **)(*plVar19 + 0x108))(plVar19);
                                    if (((1 < uVar23) &&
                                         (plVar19 == *(longlong **)(local_2b8 + 0x18f0 + (longlong)ppuVar11))) &&
                                        ((uVar27 == piVar25[-6] && (iVar14 == *piVar25)))) {
                                        iVar15 = (**(code **)(*plVar19 + 0x108))(plVar19);
                                        if (iVar14 == iVar15 + -1) {
                                            iVar14 = iVar14 + -1;
                                        }
                                        else {
                                            iVar14 = iVar14 + 1;
                                        }
                                    }
                                    *(longlong **)(local_2b8 + 0x18f0 + (longlong)ppuVar11) = plVar19;
                                    piVar25[-6] = uVar27;
                                    *piVar25 = iVar14;
                                    local_2e8 = local_1d0;
                                    local_2f0 = local_298;
                                    local_2f8 = &local_29c;
                                    iVar14 = (**(code **)(*plVar19 + 0x110))();
                                    if (-1 < iVar14) {
                                        puVar18 = (undefined *)FUN_14018b280(0x60);
                                        lVar26 = local_278;
                                        if (puVar18 == (undefined *)0x0) {
                                            puVar18 = (undefined *)0x0;
                                        }
                                        else {
                                            *(undefined8 *)(puVar18 + 0x48) = 0;
                                            *(undefined8 *)(puVar18 + 0x50) = 0;
                                            *(undefined8 *)(puVar18 + 0x58) = 0;
                                        }
                                        pplVar1 = (longlong **)(puVar18 + 0x40);
                                        iVar14 = (**(code **)(**(longlong **)(local_278 + 0xbb0) + 0x28))();
                                        if (iVar14 < 0) {
                                            if (puVar18 != (undefined *)0x0) {
                                                if (*(undefined8 **)(puVar18 + 0x50) != (undefined8 *)0x0) {
                                                    **(undefined8 **)(puVar18 + 0x50) = *(undefined8 *)(puVar18 + 0x58);
                                                }
                                                if (*(longlong *)(puVar18 + 0x58) != 0) {
                                                    *(undefined8 *)(*(longlong *)(puVar18 + 0x58) + 0x50) =
                                                            *(undefined8 *)(puVar18 + 0x50);
                                                }
                                                *(undefined8 *)(puVar18 + 0x50) = 0;
                                                *(undefined8 *)(puVar18 + 0x58) = 0;
                                                if (*(longlong **)(puVar18 + 0x48) != (longlong *)0x0) {
                                                    (**(code **)(**(longlong **)(puVar18 + 0x48) + 8))();
                                                }
                                                FUN_14018b900();
                                            }
                                        }
                                        else {
                                            fVar33 = local_298[0];
                                            fVar34 = local_29c;
                                            dVar9 = (double)(**(code **)(DAT_140c77890 + 0x28))(&DAT_140c77890);
                                            local_1c8 = _DAT_140c78410;
                                            fStack452 = fRam0000000140c78414;
                                            fStack448 = fRam0000000140c78418;
                                            fStack444 = fRam0000000140c7841c;
                                            local_1b8 = _DAT_140c78420;
                                            fStack436 = fRam0000000140c78424;
                                            fStack432 = fRam0000000140c78428;
                                            fStack428 = fRam0000000140c7842c;
                                            local_1a8 = _DAT_140c78430;
                                            fStack420 = fRam0000000140c78434;
                                            fStack416 = fRam0000000140c78438;
                                            fStack412 = fRam0000000140c7843c;
                                            fVar32 = *(float *)(local_2d8 + (ulonglong)*local_2a8 * 4);
                                            local_188 = (float)(dVar9 * (double)(fVar33 - fVar34)) + fVar34;
                                            local_270 = local_178;
                                            local_268 = &local_1c8;
                                            local_198 = CONCAT412(0x3f800000,CONCAT48(fVar35,CONCAT44(0x43480000,fVar32)))
                                                    ;
                                            local_178 = CONCAT412(fRam0000000140c7841c * local_188,
                                                                  CONCAT48(fRam0000000140c78418 * local_188,
                                                                           CONCAT44(fRam0000000140c78414 * local_188,
                                                                                    _DAT_140c78410 * local_188)));
                                            local_168 = CONCAT412(fRam0000000140c7842c * local_188,
                                                                  CONCAT48(fRam0000000140c78428 * local_188,
                                                                           CONCAT44(fRam0000000140c78424 * local_188,
                                                                                    _DAT_140c78420 * local_188)));
                                            local_148 = _DAT_140c78440;
                                            uStack324 = uRam0000000140c78444;
                                            uStack320 = uRam0000000140c78448;
                                            uStack316 = uRam0000000140c7844c;
                                            local_158 = CONCAT412(fRam0000000140c7843c * local_188,
                                                                  CONCAT48(fRam0000000140c78438 * local_188,
                                                                           CONCAT44(fRam0000000140c78434 * local_188,
                                                                                    _DAT_140c78430 * local_188)));
                                            local_184 = local_188;
                                            local_180 = local_188;
                                            local_138 = local_270;
                                            local_130 = local_268;
                                            uVar30 = FUN_1401afb10(&local_138,puVar18);
                                            puVar3 = (ulonglong *)(lVar26 + 0x18b0);
                                            if (*(longlong *)(puVar18 + 0x50) == 0) {
                                                *(ulonglong **)(puVar18 + 0x50) = puVar3;
                                                puVar2 = (ulonglong *)(puVar18 + 0x58);
                                                *puVar2 = *puVar3;
                                                *puVar3 = (ulonglong)puVar18;
                                                if (*puVar2 != 0) {
                                                    *(ulonglong **)(*puVar2 + 0x50) = puVar2;
                                                }
                                            }
                                            (**(code **)(**pplVar1 + 0x70))(uVar30,0);
                                            local_238 = lVar26 + 0x1820;
                                            local_240 = puVar18;
                                            local_138 = puVar18;
                                            local_130 = (float *)local_238;
                                            FUN_1401afb10(&local_138,&local_1c8);
                                            uVar30 = (**(code **)(**pplVar1 + 0x48))(*pplVar1,&local_1c8);
                                            (**(code **)(**pplVar1 + 0xe0))(uVar30,fVar35);
                                            local_230 = local_230 & 0xffffffff00000000;
                                            iVar14 = (**(code **)(**pplVar1 + 0x10))(*pplVar1,&local_230,0);
                                            plVar8 = *pplVar1;
                                            if (iVar14 == 0) {
                                                local_1f0 = 0x96;
                                                local_1e8 = 0x3f800000;
                                                local_1e0 = 0;
                                                local_1d8 = 0;
                                                local_2c4 = 0;
                                                (**(code **)(*plVar8 + 0x248))();
                                            }
                                            else {
                                                lVar26 = (**(code **)(*plVar8 + 0x1a8))(plVar8,0x96,0);
                                                local_210 = 0x96;
                                                local_200 = 0;
                                                local_1fc = 3;
                                                local_1f4 = 0;
                                                iVar14 = DAT_140c54e50;
                                                if (*DAT_140c63750 < DAT_140c54e50) {
                                                    iVar14 = *DAT_140c63750;
                                                }
                                                local_208 = (float)(ulonglong)*(uint *)(lVar26 + 0x14) *
                                                            *(float *)(&DAT_140c54e60 + (longlong)iVar14 * 4) * fVar44 *
                                                            fVar37;
                                                local_204 = (undefined4)
                                                        (longlong)
                                                        ((fVar32 + fVar36) * fVar37 *
                                                         (float)(ulonglong)*(uint *)(lVar26 + 0x14));
                                                (**(code **)(**pplVar1 + 0x248))();
                                            }
                                        }
                                    }
                                }
                                local_2a8 = local_2a8 + 1;
                                local_248 = local_248 - 1;
                                lVar26 = local_2d8;
                                puVar22 = local_2d0;
                            } while (local_248 != 0);
                        }
                        param_1 = local_278;
                        local_288 = ppuVar11 + 1;
                        uVar27 = (int)puVar28 + 1;
                        puVar28 = (uint *)(ulonglong)uVar27;
                        local_2b0 = local_2b0 + 1;
                        piVar25 = piVar25 + 1;
                        piVar21 = DAT_140c63750;
                    } while (uVar27 < 6);
                    if (local_2c4 != 0) {
                        *(undefined4 *)(local_278 + 0x1868) = 0;
                    }
                    if (puVar22 != (uint *)0x0) {
                        (**(code **)(*(longlong *)(puVar22 + -4) + 8))(puVar22 + -4);
                    }
                    if (lVar26 != 0) {
                        (**(code **)(*(longlong *)(lVar26 + -0x10) + 8))(lVar26 + -0x10);
                    }
                    fVar32 = 1.0;
                }
                plVar19 = (longlong *)plVar19[0xf];
            } while (plVar19 != (longlong *)0x0);
        }
        *(undefined4 *)(param_1 + 0x18b8) = local_280;
    }
    FUN_1407db4f0(local_e8 ^ (ulonglong)auStack792);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407ca8e0(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined (*pauVar6) [16];
    longlong *plVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    undefined auStack328 [32];
    undefined4 local_128;
    undefined4 *local_118;
    undefined8 local_110;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined8 uStack212;
    undefined4 uStack204;
    undefined4 *local_c8;
    undefined8 uStack192;
    float local_b8;
    float fStack180;
    float fStack176;
    undefined4 uStack172;
    float local_a8;
    float fStack164;
    float fStack160;
    uint uStack156;
    undefined4 local_98;
    undefined4 uStack144;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    ulonglong local_78;

    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack328;
    local_128 = 0;
    pauVar6 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x1f0,0,0);
    if (pauVar6 != (undefined (*) [16])0x0) {
        FUN_140262d50(param_1 + 0x178,pauVar6[8]);
        fVar26 = DAT_140c3b438 * 0.005555556 * *(float *)((longlong)param_1 + 0x10e4);
        fVar21 = DAT_140c3b438 * 0.005555556 * *(float *)(param_1 + 0x21c);
        fVar9 = (float)FUN_1408fe3d0(fVar21);
        fStack160 = (float)FUN_1408fc950(fVar21);
        fVar21 = (float)FUN_1408fe3d0(fVar26);
        fStack176 = (float)FUN_1408fc950(fVar26);
        fVar26 = (float)FUN_1408fe3d0(0);
        fVar10 = (float)FUN_1408fc950(0);
        uStack172 = 0;
        fVar12 = fVar26 * fStack176;
        fVar11 = fVar10 * fStack176;
        uStack156 = 0;
        uStack192._4_4_ = 0.0;
        uStack192._0_4_ = (float)((uint)fVar21 ^ 0x80000000);
        local_b8 = fVar10 * fVar21 * fVar9 - fVar26 * fStack160;
        local_a8 = fVar10 * fVar21 * fStack160 + fVar26 * fVar9;
        fStack180 = fVar10 * fStack160 + fVar26 * fVar21 * fVar9;
        fStack164 = fVar26 * fVar21 * fStack160 - fVar10 * fVar9;
        fStack160 = fStack176 * fStack160;
        fStack176 = fStack176 * fVar9;
        if ((*(byte *)(param_1 + 3) & 2) == 0) {
            fVar9 = 0.0;
            fVar21 = 0.0;
            fVar26 = local_b8;
            fVar10 = fStack180;
            fVar27 = fStack176;
            fVar28 = local_a8;
            fVar29 = fStack164;
            fVar30 = fStack160;
            fVar13 = _DAT_140c78440;
            fVar14 = fRam0000000140c78444;
            fVar15 = fRam0000000140c78448;
            fVar16 = fRam0000000140c7844c;
        }
        else {
            fVar22 = _DAT_140c78410 * 1.0;
            fVar23 = fRam0000000140c78414 * 1.0;
            fVar24 = fRam0000000140c78418 * 1.0;
            fVar25 = fRam0000000140c7841c * 1.0;
            fVar17 = _DAT_140c78420 * -1.0;
            fVar18 = fRam0000000140c78424 * -1.0;
            fVar19 = fRam0000000140c78428 * -1.0;
            fVar20 = fRam0000000140c7842c * -1.0;
            fVar13 = _DAT_140c78430 * 1.0;
            fVar14 = fRam0000000140c78434 * 1.0;
            fVar15 = fRam0000000140c78438 * 1.0;
            fVar16 = fRam0000000140c7843c * 1.0;
            fVar9 = fVar11 * fVar23;
            fVar21 = fVar11 * fVar24;
            fVar26 = fVar11 * fVar25;
            fVar10 = fVar12 * fVar19;
            fVar27 = fVar12 * fVar20;
            fVar11 = fVar12 * fVar17 + fVar11 * fVar22 + fVar13 * 0.0 + _DAT_140c78440 * 0.0;
            fVar12 = fVar12 * fVar18 + fVar9 + fVar14 * 0.0 + fRam0000000140c78444 * 0.0;
            uStack192._0_4_ = fVar10 + fVar21 + fVar15 * 0.0 + fRam0000000140c78448 * 0.0;
            uStack192._4_4_ = fVar27 + fVar26 + fVar16 * 0.0 + fRam0000000140c7844c * 0.0;
            fVar21 = local_b8 * fVar25 + fStack180 * fVar20 + fVar16 * 0.0 + fRam0000000140c7844c * 0.0;
            fVar9 = local_a8 * fVar25 + fStack164 * fVar20 + fVar16 * 0.0 + fRam0000000140c7844c * 0.0;
            fVar26 = local_b8 * fVar22 + fStack180 * fVar17 + fVar13 * 0.0 + _DAT_140c78440 * 0.0;
            fVar10 = local_b8 * fVar23 + fStack180 * fVar18 + fVar14 * 0.0 + fRam0000000140c78444 * 0.0;
            fVar27 = local_b8 * fVar24 + fStack180 * fVar19 + fVar15 * 0.0 + fRam0000000140c78448 * 0.0;
            fVar28 = local_a8 * fVar22 + fStack164 * fVar17 + fVar13 * 0.0 + _DAT_140c78440 * 0.0;
            fVar29 = local_a8 * fVar23 + fStack164 * fVar18 + fVar14 * 0.0 + fRam0000000140c78444 * 0.0;
            fVar30 = local_a8 * fVar24 + fStack164 * fVar19 + fVar15 * 0.0 + fRam0000000140c78448 * 0.0;
            fVar13 = _DAT_140c78440 * fVar22 + fRam0000000140c78444 * fVar17 + fVar13 * 0.0 +
                     fRam0000000140c7844c * _DAT_140c78440;
            fVar14 = _DAT_140c78440 * fVar23 + fRam0000000140c78444 * fVar18 + fVar14 * 0.0 +
                     fRam0000000140c7844c * fRam0000000140c78444;
            fVar15 = _DAT_140c78440 * fVar24 + fRam0000000140c78444 * fVar19 + fVar15 * 0.0 +
                     fRam0000000140c7844c * fRam0000000140c78448;
            fVar16 = _DAT_140c78440 * fVar25 + fRam0000000140c78444 * fVar20 + fVar16 * 0.0 +
                     fRam0000000140c7844c * fRam0000000140c7844c;
        }
        *pauVar6 = CONCAT412(uStack192._4_4_,CONCAT48((float)uStack192,CONCAT44(fVar12,fVar11)));
        pauVar6[1] = CONCAT412(fVar21,CONCAT48(fVar27,CONCAT44(fVar10,fVar26)));
        pauVar6[2] = CONCAT412(fVar9,CONCAT48(fVar30,CONCAT44(fVar29,fVar28)));
        local_118 = &local_108;
        pauVar6[3] = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
        local_108 = *param_3;
        uStack260 = param_3[1];
        uStack256 = param_3[2];
        uStack252 = param_3[3];
        local_f8 = param_3[4];
        uStack244 = param_3[5];
        uStack240 = param_3[6];
        uStack236 = param_3[7];
        local_e8 = param_3[8];
        uStack228 = param_3[9];
        uStack224 = param_3[10];
        uStack220 = param_3[0xb];
        uStack204 = param_3[0xf];
        uStack212 = 0;
        local_d8 = 0;
        local_110 = param_2;
        local_c8 = local_118;
        uStack192 = param_2;
        FUN_1401afb10(&local_c8,&local_b8);
        plVar7 = param_1 + 0x21e;
        lVar8 = 0x10;
        pauVar6[4] = CONCAT412(local_88,CONCAT48(local_98,CONCAT44(local_a8,local_b8)));
        pauVar6[5] = CONCAT412(uStack132,ZEXT412((uint)fStack164) << 0x20);
        pauVar6[6] = CONCAT412(uStack128,CONCAT48(uStack144,CONCAT44(fStack160,fStack176)));
        pauVar6[7] = CONCAT412(uStack124,ZEXT412(uStack156) << 0x20);
        do {
            uVar2 = *(undefined4 *)plVar7;
            uVar3 = *(undefined4 *)((longlong)plVar7 + 4);
            uVar4 = *(undefined4 *)(plVar7 + 1);
            uVar5 = *(undefined4 *)((longlong)plVar7 + 0xc);
            plVar7 = plVar7 + 2;
            puVar1 = (undefined4 *)((longlong)pauVar6 + (-0x1010 - (longlong)param_1) + (longlong)plVar7);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
            lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    (**(code **)(*param_1 + 0x138))(param_1,1);
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack328);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407cad20(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined (*pauVar6) [16];
    longlong *plVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    undefined auStack328 [32];
    undefined4 local_128;
    undefined4 *local_118;
    undefined8 local_110;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined8 uStack212;
    undefined4 uStack204;
    undefined4 *local_c8;
    undefined8 uStack192;
    float local_b8;
    float fStack180;
    float fStack176;
    undefined4 uStack172;
    float local_a8;
    float fStack164;
    float fStack160;
    uint uStack156;
    undefined4 local_98;
    undefined4 uStack144;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    ulonglong local_78;

    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack328;
    local_128 = 0;
    pauVar6 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x1f0,0,0);
    if (pauVar6 != (undefined (*) [16])0x0) {
        FUN_140262d50(param_1 + 0x1da,pauVar6[8]);
        fVar26 = DAT_140c3b438 * 0.005555556 * *(float *)((longlong)param_1 + 0x11f4);
        fVar21 = DAT_140c3b438 * 0.005555556 * *(float *)(param_1 + 0x23e);
        fVar9 = (float)FUN_1408fe3d0(fVar21);
        fStack160 = (float)FUN_1408fc950(fVar21);
        fVar21 = (float)FUN_1408fe3d0(fVar26);
        fStack176 = (float)FUN_1408fc950(fVar26);
        fVar26 = (float)FUN_1408fe3d0(0);
        fVar10 = (float)FUN_1408fc950(0);
        uStack172 = 0;
        fVar12 = fVar26 * fStack176;
        fVar11 = fVar10 * fStack176;
        uStack156 = 0;
        uStack192._4_4_ = 0.0;
        uStack192._0_4_ = (float)((uint)fVar21 ^ 0x80000000);
        local_b8 = fVar10 * fVar21 * fVar9 - fVar26 * fStack160;
        local_a8 = fVar10 * fVar21 * fStack160 + fVar26 * fVar9;
        fStack180 = fVar10 * fStack160 + fVar26 * fVar21 * fVar9;
        fStack164 = fVar26 * fVar21 * fStack160 - fVar10 * fVar9;
        fStack160 = fStack176 * fStack160;
        fStack176 = fStack176 * fVar9;
        if ((*(byte *)(param_1 + 3) & 2) == 0) {
            fVar9 = 0.0;
            fVar21 = 0.0;
            fVar26 = local_b8;
            fVar10 = fStack180;
            fVar27 = fStack176;
            fVar28 = local_a8;
            fVar29 = fStack164;
            fVar30 = fStack160;
            fVar13 = _DAT_140c78440;
            fVar14 = fRam0000000140c78444;
            fVar15 = fRam0000000140c78448;
            fVar16 = fRam0000000140c7844c;
        }
        else {
            fVar22 = _DAT_140c78410 * 1.0;
            fVar23 = fRam0000000140c78414 * 1.0;
            fVar24 = fRam0000000140c78418 * 1.0;
            fVar25 = fRam0000000140c7841c * 1.0;
            fVar17 = _DAT_140c78420 * -1.0;
            fVar18 = fRam0000000140c78424 * -1.0;
            fVar19 = fRam0000000140c78428 * -1.0;
            fVar20 = fRam0000000140c7842c * -1.0;
            fVar13 = _DAT_140c78430 * 1.0;
            fVar14 = fRam0000000140c78434 * 1.0;
            fVar15 = fRam0000000140c78438 * 1.0;
            fVar16 = fRam0000000140c7843c * 1.0;
            fVar9 = fVar11 * fVar23;
            fVar21 = fVar11 * fVar24;
            fVar26 = fVar11 * fVar25;
            fVar10 = fVar12 * fVar19;
            fVar27 = fVar12 * fVar20;
            fVar11 = fVar12 * fVar17 + fVar11 * fVar22 + fVar13 * 0.0 + _DAT_140c78440 * 0.0;
            fVar12 = fVar12 * fVar18 + fVar9 + fVar14 * 0.0 + fRam0000000140c78444 * 0.0;
            uStack192._0_4_ = fVar10 + fVar21 + fVar15 * 0.0 + fRam0000000140c78448 * 0.0;
            uStack192._4_4_ = fVar27 + fVar26 + fVar16 * 0.0 + fRam0000000140c7844c * 0.0;
            fVar21 = local_b8 * fVar25 + fStack180 * fVar20 + fVar16 * 0.0 + fRam0000000140c7844c * 0.0;
            fVar9 = local_a8 * fVar25 + fStack164 * fVar20 + fVar16 * 0.0 + fRam0000000140c7844c * 0.0;
            fVar26 = local_b8 * fVar22 + fStack180 * fVar17 + fVar13 * 0.0 + _DAT_140c78440 * 0.0;
            fVar10 = local_b8 * fVar23 + fStack180 * fVar18 + fVar14 * 0.0 + fRam0000000140c78444 * 0.0;
            fVar27 = local_b8 * fVar24 + fStack180 * fVar19 + fVar15 * 0.0 + fRam0000000140c78448 * 0.0;
            fVar28 = local_a8 * fVar22 + fStack164 * fVar17 + fVar13 * 0.0 + _DAT_140c78440 * 0.0;
            fVar29 = local_a8 * fVar23 + fStack164 * fVar18 + fVar14 * 0.0 + fRam0000000140c78444 * 0.0;
            fVar30 = local_a8 * fVar24 + fStack164 * fVar19 + fVar15 * 0.0 + fRam0000000140c78448 * 0.0;
            fVar13 = _DAT_140c78440 * fVar22 + fRam0000000140c78444 * fVar17 + fVar13 * 0.0 +
                     fRam0000000140c7844c * _DAT_140c78440;
            fVar14 = _DAT_140c78440 * fVar23 + fRam0000000140c78444 * fVar18 + fVar14 * 0.0 +
                     fRam0000000140c7844c * fRam0000000140c78444;
            fVar15 = _DAT_140c78440 * fVar24 + fRam0000000140c78444 * fVar19 + fVar15 * 0.0 +
                     fRam0000000140c7844c * fRam0000000140c78448;
            fVar16 = _DAT_140c78440 * fVar25 + fRam0000000140c78444 * fVar20 + fVar16 * 0.0 +
                     fRam0000000140c7844c * fRam0000000140c7844c;
        }
        *pauVar6 = CONCAT412(uStack192._4_4_,CONCAT48((float)uStack192,CONCAT44(fVar12,fVar11)));
        pauVar6[1] = CONCAT412(fVar21,CONCAT48(fVar27,CONCAT44(fVar10,fVar26)));
        pauVar6[2] = CONCAT412(fVar9,CONCAT48(fVar30,CONCAT44(fVar29,fVar28)));
        local_118 = &local_108;
        pauVar6[3] = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
        local_108 = *param_3;
        uStack260 = param_3[1];
        uStack256 = param_3[2];
        uStack252 = param_3[3];
        local_f8 = param_3[4];
        uStack244 = param_3[5];
        uStack240 = param_3[6];
        uStack236 = param_3[7];
        local_e8 = param_3[8];
        uStack228 = param_3[9];
        uStack224 = param_3[10];
        uStack220 = param_3[0xb];
        uStack204 = param_3[0xf];
        uStack212 = 0;
        local_d8 = 0;
        local_110 = param_2;
        local_c8 = local_118;
        uStack192 = param_2;
        FUN_1401afb10(&local_c8,&local_b8);
        plVar7 = param_1 + 0x240;
        lVar8 = 0x10;
        pauVar6[4] = CONCAT412(local_88,CONCAT48(local_98,CONCAT44(local_a8,local_b8)));
        pauVar6[5] = CONCAT412(uStack132,ZEXT412((uint)fStack164) << 0x20);
        pauVar6[6] = CONCAT412(uStack128,CONCAT48(uStack144,CONCAT44(fStack160,fStack176)));
        pauVar6[7] = CONCAT412(uStack124,ZEXT412(uStack156) << 0x20);
        do {
            uVar2 = *(undefined4 *)plVar7;
            uVar3 = *(undefined4 *)((longlong)plVar7 + 4);
            uVar4 = *(undefined4 *)(plVar7 + 1);
            uVar5 = *(undefined4 *)((longlong)plVar7 + 0xc);
            plVar7 = plVar7 + 2;
            puVar1 = (undefined4 *)((longlong)pauVar6 + (-0x1120 - (longlong)param_1) + (longlong)plVar7);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
            lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    (**(code **)(*param_1 + 0x138))(param_1,0,0);
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack328);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407cb160(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined (*pauVar6) [16];
    longlong *plVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    undefined auStack328 [32];
    undefined4 local_128;
    undefined4 *local_118;
    undefined8 local_110;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined8 uStack212;
    undefined4 uStack204;
    undefined4 *local_c8;
    undefined8 uStack192;
    float local_b8;
    float fStack180;
    float fStack176;
    undefined4 uStack172;
    float local_a8;
    float fStack164;
    float fStack160;
    uint uStack156;
    undefined4 local_98;
    undefined4 uStack144;
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    ulonglong local_78;

    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack328;
    local_128 = 0;
    pauVar6 = (undefined (*) [16])(**(code **)(*DAT_140c65670 + 0x100))(DAT_140c65670,0x1f0,0,0);
    if (pauVar6 != (undefined (*) [16])0x0) {
        FUN_140262d50(param_1 + 0x1ec,pauVar6[8]);
        fVar26 = DAT_140c3b438 * 0.005555556 * *(float *)((longlong)param_1 + 0x1304);
        fVar21 = DAT_140c3b438 * 0.005555556 * *(float *)(param_1 + 0x260);
        fVar9 = (float)FUN_1408fe3d0(fVar21);
        fStack160 = (float)FUN_1408fc950(fVar21);
        fVar21 = (float)FUN_1408fe3d0(fVar26);
        fStack176 = (float)FUN_1408fc950(fVar26);
        fVar26 = (float)FUN_1408fe3d0(0);
        fVar10 = (float)FUN_1408fc950(0);
        uStack172 = 0;
        fVar12 = fVar26 * fStack176;
        fVar11 = fVar10 * fStack176;
        uStack156 = 0;
        uStack192._4_4_ = 0.0;
        uStack192._0_4_ = (float)((uint)fVar21 ^ 0x80000000);
        local_b8 = fVar10 * fVar21 * fVar9 - fVar26 * fStack160;
        local_a8 = fVar10 * fVar21 * fStack160 + fVar26 * fVar9;
        fStack180 = fVar10 * fStack160 + fVar26 * fVar21 * fVar9;
        fStack164 = fVar26 * fVar21 * fStack160 - fVar10 * fVar9;
        fStack160 = fStack176 * fStack160;
        fStack176 = fStack176 * fVar9;
        if ((*(byte *)(param_1 + 3) & 2) == 0) {
            fVar9 = 0.0;
            fVar21 = 0.0;
            fVar26 = local_b8;
            fVar10 = fStack180;
            fVar27 = fStack176;
            fVar28 = local_a8;
            fVar29 = fStack164;
            fVar30 = fStack160;
            fVar13 = _DAT_140c78440;
            fVar14 = fRam0000000140c78444;
            fVar15 = fRam0000000140c78448;
            fVar16 = fRam0000000140c7844c;
        }
        else {
            fVar22 = _DAT_140c78410 * 1.0;
            fVar23 = fRam0000000140c78414 * 1.0;
            fVar24 = fRam0000000140c78418 * 1.0;
            fVar25 = fRam0000000140c7841c * 1.0;
            fVar17 = _DAT_140c78420 * -1.0;
            fVar18 = fRam0000000140c78424 * -1.0;
            fVar19 = fRam0000000140c78428 * -1.0;
            fVar20 = fRam0000000140c7842c * -1.0;
            fVar13 = _DAT_140c78430 * 1.0;
            fVar14 = fRam0000000140c78434 * 1.0;
            fVar15 = fRam0000000140c78438 * 1.0;
            fVar16 = fRam0000000140c7843c * 1.0;
            fVar9 = fVar11 * fVar23;
            fVar21 = fVar11 * fVar24;
            fVar26 = fVar11 * fVar25;
            fVar10 = fVar12 * fVar19;
            fVar27 = fVar12 * fVar20;
            fVar11 = fVar12 * fVar17 + fVar11 * fVar22 + fVar13 * 0.0 + _DAT_140c78440 * 0.0;
            fVar12 = fVar12 * fVar18 + fVar9 + fVar14 * 0.0 + fRam0000000140c78444 * 0.0;
            uStack192._0_4_ = fVar10 + fVar21 + fVar15 * 0.0 + fRam0000000140c78448 * 0.0;
            uStack192._4_4_ = fVar27 + fVar26 + fVar16 * 0.0 + fRam0000000140c7844c * 0.0;
            fVar21 = local_b8 * fVar25 + fStack180 * fVar20 + fVar16 * 0.0 + fRam0000000140c7844c * 0.0;
            fVar9 = local_a8 * fVar25 + fStack164 * fVar20 + fVar16 * 0.0 + fRam0000000140c7844c * 0.0;
            fVar26 = local_b8 * fVar22 + fStack180 * fVar17 + fVar13 * 0.0 + _DAT_140c78440 * 0.0;
            fVar10 = local_b8 * fVar23 + fStack180 * fVar18 + fVar14 * 0.0 + fRam0000000140c78444 * 0.0;
            fVar27 = local_b8 * fVar24 + fStack180 * fVar19 + fVar15 * 0.0 + fRam0000000140c78448 * 0.0;
            fVar28 = local_a8 * fVar22 + fStack164 * fVar17 + fVar13 * 0.0 + _DAT_140c78440 * 0.0;
            fVar29 = local_a8 * fVar23 + fStack164 * fVar18 + fVar14 * 0.0 + fRam0000000140c78444 * 0.0;
            fVar30 = local_a8 * fVar24 + fStack164 * fVar19 + fVar15 * 0.0 + fRam0000000140c78448 * 0.0;
            fVar13 = _DAT_140c78440 * fVar22 + fRam0000000140c78444 * fVar17 + fVar13 * 0.0 +
                     fRam0000000140c7844c * _DAT_140c78440;
            fVar14 = _DAT_140c78440 * fVar23 + fRam0000000140c78444 * fVar18 + fVar14 * 0.0 +
                     fRam0000000140c7844c * fRam0000000140c78444;
            fVar15 = _DAT_140c78440 * fVar24 + fRam0000000140c78444 * fVar19 + fVar15 * 0.0 +
                     fRam0000000140c7844c * fRam0000000140c78448;
            fVar16 = _DAT_140c78440 * fVar25 + fRam0000000140c78444 * fVar20 + fVar16 * 0.0 +
                     fRam0000000140c7844c * fRam0000000140c7844c;
        }
        *pauVar6 = CONCAT412(uStack192._4_4_,CONCAT48((float)uStack192,CONCAT44(fVar12,fVar11)));
        pauVar6[1] = CONCAT412(fVar21,CONCAT48(fVar27,CONCAT44(fVar10,fVar26)));
        pauVar6[2] = CONCAT412(fVar9,CONCAT48(fVar30,CONCAT44(fVar29,fVar28)));
        local_118 = &local_108;
        pauVar6[3] = CONCAT412(fVar16,CONCAT48(fVar15,CONCAT44(fVar14,fVar13)));
        local_108 = *param_3;
        uStack260 = param_3[1];
        uStack256 = param_3[2];
        uStack252 = param_3[3];
        local_f8 = param_3[4];
        uStack244 = param_3[5];
        uStack240 = param_3[6];
        uStack236 = param_3[7];
        local_e8 = param_3[8];
        uStack228 = param_3[9];
        uStack224 = param_3[10];
        uStack220 = param_3[0xb];
        uStack204 = param_3[0xf];
        uStack212 = 0;
        local_d8 = 0;
        local_110 = param_2;
        local_c8 = local_118;
        uStack192 = param_2;
        FUN_1401afb10(&local_c8,&local_b8);
        plVar7 = param_1 + 0x262;
        lVar8 = 0x10;
        pauVar6[4] = CONCAT412(local_88,CONCAT48(local_98,CONCAT44(local_a8,local_b8)));
        pauVar6[5] = CONCAT412(uStack132,ZEXT412((uint)fStack164) << 0x20);
        pauVar6[6] = CONCAT412(uStack128,CONCAT48(uStack144,CONCAT44(fStack160,fStack176)));
        pauVar6[7] = CONCAT412(uStack124,ZEXT412(uStack156) << 0x20);
        do {
            uVar2 = *(undefined4 *)plVar7;
            uVar3 = *(undefined4 *)((longlong)plVar7 + 4);
            uVar4 = *(undefined4 *)(plVar7 + 1);
            uVar5 = *(undefined4 *)((longlong)plVar7 + 0xc);
            plVar7 = plVar7 + 2;
            puVar1 = (undefined4 *)((longlong)pauVar6 + (-0x1230 - (longlong)param_1) + (longlong)plVar7);
            *puVar1 = uVar2;
            puVar1[1] = uVar3;
            puVar1[2] = uVar4;
            puVar1[3] = uVar5;
            lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
        (**(code **)(*DAT_140c65670 + 0x108))();
    }
    (**(code **)(*param_1 + 0x138))(param_1,1,1);
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack328);
    return;
}



void FUN_1407cb5a0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
    short sVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    float fVar4;
    int *piVar5;
    short sVar6;
    int iVar7;
    undefined4 *puVar8;
    short *psVar9;
    ushort uVar10;
    undefined4 *puVar11;
    short sVar12;
    uint uVar13;
    longlong lVar14;
    int iVar15;
    short *psVar16;
    uint uVar17;
    undefined4 *puVar18;
    undefined4 *puVar19;
    short sVar20;
    undefined **ppuVar21;
    longlong lVar22;
    float fVar23;

    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x17a8) + 0x28))();
    if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0x17b8) = 0;
        puVar8 = (undefined4 *)
                (**(code **)(**(longlong **)(param_1 + 0x17a8) + 0x38))
                (*(longlong **)(param_1 + 0x17a8),0,0,2);
        piVar5 = DAT_140c63750;
        if (puVar8 != (undefined4 *)0x0) {
            iVar7 = *(int *)(PTR_PTR_140c3acf0 + 0x10);
            ppuVar21 = &PTR_PTR_140c3acf8;
            lVar22 = 0xe;
            if (*DAT_140c63750 < iVar7) {
                iVar7 = *DAT_140c63750;
            }
            puVar18 = puVar8 + 4;
            uVar2 = *(undefined4 *)(PTR_PTR_140c3acf0 + (longlong)iVar7 * 4 + 0x20);
            *puVar8 = 0;
            puVar8[3] = 0;
            iVar15 = 1;
            puVar8[1] = uVar2;
            puVar8[2] = 0;
            *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
            iVar7 = *(int *)(PTR_PTR_140c3acf0 + 0x10);
            if (*piVar5 < iVar7) {
                iVar7 = *piVar5;
            }
            fVar23 = *(float *)(PTR_PTR_140c3acf0 + (longlong)iVar7 * 4 + 0x20);
            do {
                iVar7 = *(int *)(*ppuVar21 + 0x10);
                if (*piVar5 < iVar7) {
                    iVar7 = *piVar5;
                }
                fVar23 = fVar23 - *(float *)(*ppuVar21 + (longlong)iVar7 * 4 + 0x20);
                lVar14 = 4;
                puVar8 = puVar18 + 4;
                puVar11 = (undefined4 *)(param_1 + 0x16ac);
                do {
                    puVar19 = puVar18;
                    uVar2 = puVar11[-1];
                    uVar3 = *puVar11;
                    puVar8[-1] = iVar15;
                    puVar18 = puVar19 + 0x20;
                    *puVar19 = uVar2;
                    puVar19[1] = fVar23;
                    puVar19[2] = uVar3;
                    *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
                    uVar2 = puVar11[1];
                    uVar3 = puVar11[2];
                    puVar8[3] = iVar15;
                    *puVar8 = uVar2;
                    puVar8[1] = fVar23;
                    puVar8[2] = uVar3;
                    *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
                    uVar2 = puVar11[3];
                    uVar3 = puVar11[4];
                    puVar8[7] = iVar15;
                    puVar8[4] = uVar2;
                    puVar8[5] = fVar23;
                    puVar8[6] = uVar3;
                    *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
                    uVar2 = puVar11[5];
                    uVar3 = puVar11[6];
                    puVar8[0xb] = iVar15;
                    puVar8[8] = uVar2;
                    puVar8[9] = fVar23;
                    puVar8[10] = uVar3;
                    *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
                    uVar2 = puVar11[7];
                    uVar3 = puVar11[8];
                    puVar8[0xf] = iVar15;
                    puVar8[0xc] = uVar2;
                    puVar8[0xd] = fVar23;
                    puVar8[0xe] = uVar3;
                    *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
                    uVar2 = puVar11[9];
                    uVar3 = puVar11[10];
                    puVar8[0x13] = iVar15;
                    puVar8[0x10] = uVar2;
                    puVar8[0x11] = fVar23;
                    puVar8[0x12] = uVar3;
                    *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
                    uVar2 = puVar11[0xb];
                    uVar3 = puVar11[0xc];
                    puVar8[0x17] = iVar15;
                    puVar8[0x14] = uVar2;
                    puVar8[0x15] = fVar23;
                    puVar8[0x16] = uVar3;
                    *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
                    uVar2 = puVar11[0xd];
                    uVar3 = puVar11[0xe];
                    puVar8[0x1b] = iVar15;
                    puVar8[0x18] = uVar2;
                    puVar8[0x19] = fVar23;
                    puVar8[0x1a] = uVar3;
                    *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
                    lVar14 = lVar14 + -1;
                    puVar8 = puVar8 + 0x20;
                    puVar11 = puVar11 + 0x10;
                } while (lVar14 != 0);
                iVar15 = iVar15 + 1;
                ppuVar21 = ppuVar21 + 1;
                lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            iVar7 = *(int *)(PTR_PTR_140c3ad68 + 0x10);
            if (*piVar5 < iVar7) {
                iVar7 = *piVar5;
            }
            fVar4 = *(float *)(PTR_PTR_140c3ad68 + (longlong)iVar7 * 4 + 0x20);
            *puVar18 = 0;
            puVar19[0x23] = 0xf;
            puVar19[0x21] = fVar23 - fVar4;
            puVar19[0x22] = 0;
            *(int *)(param_1 + 0x17b8) = *(int *)(param_1 + 0x17b8) + 1;
            (**(code **)(**(longlong **)(param_1 + 0x17a8) + 0x40))();
        }
    }
    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x17b0) + 0x28))();
    if (iVar7 == 0) {
        psVar9 = (short *)(**(code **)(**(longlong **)(param_1 + 0x17b0) + 0x38))
                (*(longlong **)(param_1 + 0x17b0),0,0);
        *(undefined4 *)(param_1 + 0x17bc) = 0;
        if (psVar9 != (short *)0x0) {
            uVar13 = 0;
            do {
                *psVar9 = 0;
                uVar10 = (short)uVar13 + 1;
                uVar13 = uVar13 + 1;
                psVar16 = psVar9 + 3;
                psVar9[1] = (uVar10 & 0x1f) + 1;
                psVar9[2] = uVar10;
                *(int *)(param_1 + 0x17bc) = *(int *)(param_1 + 0x17bc) + 3;
                psVar9 = psVar16;
            } while (uVar13 < 0x20);
            uVar13 = 0;
            do {
                uVar17 = 0;
                sVar20 = (short)uVar13 * 0x20;
                psVar9 = psVar16;
                do {
                    sVar1 = (short)uVar17;
                    psVar16 = psVar9 + 6;
                    *psVar9 = sVar1 + sVar20 + 1;
                    sVar6 = sVar1 + sVar20 + 0x21;
                    sVar12 = (sVar1 + 1U & 0x1f) + sVar20;
                    uVar17 = uVar17 + 1;
                    sVar1 = sVar12 + 1;
                    psVar9[1] = sVar1;
                    psVar9[2] = sVar6;
                    psVar9[3] = sVar6;
                    psVar9[4] = sVar1;
                    psVar9[5] = sVar12 + 0x21;
                    *(int *)(param_1 + 0x17bc) = *(int *)(param_1 + 0x17bc) + 6;
                    psVar9 = psVar16;
                } while (uVar17 < 0x20);
                uVar13 = uVar13 + 1;
            } while (uVar13 < 0xd);
            uVar13 = 0;
            do {
                sVar20 = (short)uVar13;
                *psVar16 = sVar20 + 0x1a1;
                uVar13 = uVar13 + 1;
                psVar16[1] = (sVar20 + 1U & 0x1f) + 0x1a1;
                psVar16[2] = 0x1c1;
                *(int *)(param_1 + 0x17bc) = *(int *)(param_1 + 0x17bc) + 3;
                psVar16 = psVar16 + 3;
            } while (uVar13 < 0x20);
            (**(code **)(**(longlong **)(param_1 + 0x17b0) + 0x40))();
        }
    }
    (**(code **)(*DAT_140c65670 + 0x140))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1678),param_2);
    (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1680),param_3);
    (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(param_1 + 0x17a8),0x15);
    (**(code **)(*DAT_140c65670 + 0x138))(DAT_140c65670,*(undefined8 *)(param_1 + 0x17b0));
    (**(code **)(*DAT_140c65670 + 0x290))
            (DAT_140c65670,3,0,*(undefined4 *)(param_1 + 0x17bc),0,*(undefined4 *)(param_1 + 0x17b8)
                    ,0,1);
    return;
}



void FUN_1407cba20(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined8 uVar1;

    (**(code **)(*DAT_140c65688 + 0xc0))();
    (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,*(undefined8 *)(param_3 + 0x19b0),0,0);
    uVar1 = (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_3 + 0x1670),1);
    (**(code **)(*DAT_140c65670 + 0x298))(uVar1,param_2,0x3f800000,DAT_140c65670,0xffffffff);
    return;
}



void FUN_1407cbac0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
    undefined4 local_28 [2];
    longlong local_20;
    undefined4 local_14;

    (**(code **)(*DAT_140c65670 + 0x1f8))();
    (**(code **)(*DAT_140c65670 + 0x200))();
    if (param_4 == 0) {
        param_4 = param_1[0x336];
    }
    local_28[0] = 1;
    local_14 = 0;
    local_20 = param_4;
    (**(code **)(*DAT_140c65670 + 0x208))
            (DAT_140c65670,local_28,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
    (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
    (**(code **)(*DAT_140c65670 + 0x278))(DAT_140c65670,3);
    (**(code **)(*DAT_140c65670 + 0x120))();
    (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,0);
    (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3);
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    (**(code **)(*DAT_140c65670 + 0x220))();
    // WARNING: Could not recover jumptable at 0x0001407cbbe5. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*DAT_140c65670 + 0x228))();
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407cbbf0(undefined8 param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,
                   undefined4 param_5)

{
    float *pfVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float *pfVar5;
    float *pfVar6;
    longlong lVar7;
    undefined auVar8 [16];
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    undefined auStack520 [32];
    float *local_1e8;
    undefined4 local_1e0;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined4 local_1c8;
    undefined4 uStack452;
    undefined4 uStack448;
    undefined4 uStack444;
    undefined4 local_1b8;
    undefined4 uStack436;
    undefined4 uStack432;
    undefined4 uStack428;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    float local_198;
    float fStack404;
    float fStack400;
    float fStack396;
    float local_188;
    float fStack388;
    float fStack384;
    float fStack380;
    float local_178;
    float fStack372;
    float fStack368;
    float fStack364;
    float local_168;
    float fStack356;
    float fStack352;
    float fStack348;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    float local_128 [4];
    float local_118 [24];
    undefined local_b8 [96];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack520;
    local_1d8 = *param_2;
    uStack468 = param_2[1];
    uStack464 = param_2[2];
    uStack460 = param_2[3];
    local_1c8 = param_2[4];
    uStack452 = param_2[5];
    uStack448 = param_2[6];
    uStack444 = param_2[7];
    fVar17 = *param_3;
    fStack404 = param_3[1];
    fVar21 = param_3[2];
    fStack396 = param_3[3];
    fVar18 = param_3[4];
    fVar14 = param_3[5];
    fVar22 = param_3[6];
    fVar10 = param_3[7];
    fVar19 = param_3[8];
    fStack372 = param_3[9];
    fVar23 = param_3[10];
    fStack364 = param_3[0xb];
    local_1b8 = param_2[8];
    uStack436 = param_2[9];
    uStack428 = param_2[0xb];
    local_1a8 = param_2[0xc];
    uStack420 = param_2[0xd];
    uStack412 = param_2[0xf];
    uStack432 = 0xbf8000a8;
    uStack416 = 0xbdcccdd9;
    local_148 = param_4[4];
    uStack324 = param_4[5];
    uStack320 = param_4[6];
    uStack316 = param_4[7];
    local_158 = *param_4;
    uStack340 = param_4[1];
    uStack336 = param_4[2];
    uStack332 = param_4[3];
    local_138 = param_4[8];
    uStack308 = param_4[9];
    uStack304 = param_4[10];
    uStack300 = param_4[0xb];
    fVar13 = 0.0;
    fVar15 = 0.0;
    fVar9 = 0.0;
    fVar11 = 0.0;
    local_168 = _DAT_140c78440;
    fStack356 = fRam0000000140c78444;
    fStack352 = fRam0000000140c78448;
    fStack348 = fRam0000000140c7844c;
    local_128[0] = _DAT_140c78440;
    local_128[1] = fRam0000000140c78444;
    local_128[2] = fRam0000000140c78448;
    local_128[3] = fRam0000000140c7844c;
    fVar12 = fRam0000000140c7844c;
    fVar16 = fRam0000000140c78444;
    fVar20 = _DAT_140c78440;
    fVar24 = fRam0000000140c78448;
    local_198 = fVar17;
    fStack400 = fVar21;
    local_188 = fVar18;
    fStack388 = fVar14;
    fStack384 = fVar22;
    fStack380 = fVar10;
    local_178 = fVar19;
    fStack368 = fVar23;
    pfVar5 = (float *)FUN_1401b20f0(local_b8,&local_1d8);
    if (pfVar5 < pfVar5 + 0x18) {
        pfVar6 = pfVar5;
        do {
            fVar2 = *pfVar6;
            fVar3 = pfVar6[1];
            fVar4 = pfVar6[3];
            pfVar6 = pfVar6 + 4;
            pfVar1 = (float *)(((longlong)local_128 - (longlong)pfVar5) + (longlong)pfVar6);
            *pfVar1 = fVar3 * fVar13 + fVar2 * fVar17 + fVar21 * 0.0 + fVar4 * fVar9;
            pfVar1[1] = fVar3 * fVar14 + fVar2 * fVar18 + fVar22 * 0.0 + fVar4 * fVar10;
            pfVar1[2] = fVar3 * fVar15 + fVar2 * fVar19 + fVar23 * 0.0 + fVar4 * fVar11;
            pfVar1[3] = fVar3 * fVar16 + fVar2 * fVar20 + fVar24 * 0.0 + fVar4 * fVar12;
        } while (pfVar6 < pfVar5 + 0x18);
    }
    lVar7 = 6;
    pfVar5 = local_118;
    do {
        fVar11 = *pfVar5;
        fVar9 = pfVar5[1];
        fVar13 = pfVar5[2];
        fVar17 = pfVar5[3];
        auVar8 = CONCAT124(SUB1612(CONCAT412(fVar17 * fVar17,
                                             CONCAT48(fVar13 * fVar13,
                                                      CONCAT44(fVar9 * fVar9,fVar11 * fVar11))) >> 0x20,
                                   0),fVar11 * fVar11 + fVar9 * fVar9 + 0.0);
        auVar8 = rsqrtss(auVar8,auVar8);
        fVar15 = SUB164(auVar8,0);
        *pfVar5 = fVar15 * fVar11;
        pfVar5[1] = fVar15 * fVar9;
        pfVar5[2] = fVar15 * fVar13;
        pfVar5[3] = fVar15 * fVar17;
        lVar7 = lVar7 + -1;
        pfVar5 = pfVar5 + 4;
    } while (lVar7 != 0);
    local_1e0 = param_5;
    local_1e8 = local_118;
    FUN_1407cbe00(param_1,&local_1d8,&local_198,&local_158);
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack520);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407cbe00(longlong *param_1,longlong param_2,float *param_3,float **param_4,float *param_5,
                   uint param_6)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined auVar14 [12];
    undefined auVar15 [12];
    bool bVar16;
    uint uVar17;
    undefined4 *puVar18;
    int iVar19;
    float *pfVar20;
    undefined (*pauVar21) [16];
    ulonglong uVar22;
    longlong lVar23;
    float *pfVar24;
    undefined4 *puVar25;
    longlong *plVar26;
    longlong *plVar27;
    longlong lVar28;
    uint uVar29;
    undefined4 uVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    float fVar39;
    float fVar40;
    undefined auVar38 [16];
    float fVar41;
    float fVar42;
    float fVar43;
    undefined auStack1432 [32];
    undefined4 local_578;
    undefined4 local_570;
    longlong local_568;
    undefined8 local_560;
    undefined local_558 [8];
    float *pfStack1360;
    undefined local_548 [8];
    float fStack1344;
    float local_538;
    float local_534;
    uint local_530;
    float **local_528;
    longlong local_520;
    float *local_510;
    float local_508;
    float fStack1284;
    float fStack1280;
    float fStack1276;
    float local_4f8;
    float fStack1268;
    float fStack1264;
    float fStack1260;
    float local_4e8;
    float fStack1252;
    float fStack1248;
    float fStack1244;
    undefined4 local_4d8;
    undefined8 uStack1236;
    float fStack1228;
    undefined4 local_4c8 [4];
    float *local_4b8;
    float *pfStack1200;
    undefined4 local_4a8;
    undefined4 uStack1188;
    undefined4 uStack1184;
    undefined4 uStack1180;
    undefined4 local_498;
    undefined4 uStack1172;
    undefined4 uStack1168;
    undefined4 uStack1164;
    undefined4 local_488;
    undefined8 uStack1156;
    undefined4 uStack1148;
    longlong local_468 [6];
    longlong local_438 [7];
    longlong local_400;
    longlong local_3f0;
    undefined4 local_3d8;
    undefined4 uStack980;
    undefined4 uStack976;
    undefined4 uStack972;
    undefined4 local_3c8;
    undefined4 uStack964;
    undefined4 uStack960;
    undefined4 uStack956;
    undefined4 local_3b8;
    undefined4 local_3a8;
    undefined4 uStack932;
    undefined4 uStack928;
    undefined4 uStack924;
    undefined4 local_398;
    undefined4 uStack916;
    undefined4 uStack912;
    undefined4 uStack908;
    undefined4 local_388;
    undefined4 local_378;
    undefined4 uStack884;
    undefined4 uStack880;
    undefined4 uStack876;
    undefined4 local_368;
    undefined4 uStack868;
    undefined4 uStack864;
    undefined4 uStack860;
    undefined4 local_358;
    undefined local_328 [8];
    float fStack800;
    float local_308;
    float fStack772;
    float fStack768;
    float fStack764;
    float local_168 [40];
    ulonglong local_c8;

    local_c8 = DAT_140c0f7b0 ^ (ulonglong)auStack1432;
    *(uint *)(param_1 + 3) = param_6;
    local_534 = *(float *)(param_2 + 0x38) / (*(float *)(param_2 + 0x28) + 1.0);
    local_538 = *(float *)(param_2 + 0x38) / *(float *)(param_2 + 0x28) - 1e-05;
    if (*(int *)(param_1 + 0x30c) == 0) {
        *(undefined4 *)(param_1 + 0x30c) = 1;
    }
    local_530 = param_6 & 0x20;
    local_528 = param_4;
    local_520 = param_2;
    local_510 = param_3;
    if (local_530 == 0) {
        (**(code **)(*DAT_140c65688 + 0x50))();
    }
    else {
        (**(code **)(*DAT_140c65670 + 0x120))();
        (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,7,1,0);
    }
    uVar30 = (**(code **)(*DAT_140c65670 + 0x150))(DAT_140c65670,0);
    if ((*(byte *)(param_1 + 3) & 4) != 0) {
        uVar30 = (**(code **)(*param_1 + 0x70))(param_1,param_2,param_3);
    }
    fVar43 = 0.0;
    uVar29 = ~(param_6 >> 7) & 1;
    if ((param_6 & 8) != 0) {
        if (uVar29 != 0) {
            uVar30 = (**(code **)(*(longlong *)param_1[0x175] + 0x30))
                    ((longlong *)param_1[0x175],*(undefined4 *)(param_1 + 0xa5),0);
        }
        for (plVar27 = (longlong *)param_1[0xa6]; plVar27 != (longlong *)0x0;
             plVar27 = (longlong *)plVar27[0x11]) {
            uVar30 = (**(code **)(*plVar27 + 0x90))(uVar30,*(undefined4 *)(plVar27 + 0x1f),plVar27);
        }
        if (uVar29 != 0) {
            local_4f8 = param_3[4];
            fStack1268 = param_3[5];
            fStack1264 = param_3[6];
            fStack1260 = param_3[7];
            local_508 = *param_3;
            fStack1284 = param_3[1];
            fStack1280 = param_3[2];
            fStack1276 = param_3[3];
            fStack1228 = param_3[0xf];
            local_578 = 0;
            local_4e8 = param_3[8];
            fStack1252 = param_3[9];
            fStack1248 = param_3[10];
            fStack1244 = param_3[0xb];
            local_4a8 = *(undefined4 *)(local_528 + 2);
            uStack1188 = *(undefined4 *)((longlong)local_528 + 0x14);
            uStack1184 = *(undefined4 *)(local_528 + 3);
            uStack1180 = *(undefined4 *)((longlong)local_528 + 0x1c);
            uStack1236 = 0;
            local_4d8 = 0;
            local_4b8 = *local_528;
            pfStack1200 = local_528[1];
            uStack1148 = *(undefined4 *)((longlong)local_528 + 0x3c);
            local_498 = *(undefined4 *)(local_528 + 4);
            uStack1172 = *(undefined4 *)((longlong)local_528 + 0x24);
            uStack1168 = *(undefined4 *)(local_528 + 5);
            uStack1164 = *(undefined4 *)((longlong)local_528 + 0x2c);
            uStack1156 = 0;
            local_488 = 0;
            (**(code **)(*(longlong *)param_1[0x175] + 0x50))
                    ((longlong *)param_1[0x175],&local_508,&local_4b8,&local_538);
        }
        uVar30 = 0x20;
        if ((param_6 & 0x40) != 0) {
            uVar30 = 0x120;
        }
        FUN_1407c1fe0(local_468);
        local_568 = param_1[0x2f8];
        local_560 = 0;
        local_570 = 3;
        local_578 = uVar30;
        (**(code **)(*(longlong *)param_1[0x175] + 0x78))
                ((longlong *)param_1[0x175],local_468,local_520,param_1 + 0xa8);
        if (local_400 != 0) {
            FUN_1407c2170(local_468,5,0xffffffff);
        }
        FUN_1407c20b0(local_468);
    }
    if ((*(byte *)(param_1 + 3) & 0x10) != 0) {
        if (uVar29 != 0) {
            (**(code **)(*(longlong *)param_1[0x176] + 0x30))
                    ((longlong *)param_1[0x176],*(undefined4 *)(param_1 + 0xa5),0);
        }
        uVar17 = local_530;
        lVar28 = param_1[0x316];
        if (lVar28 != 0) {
            LAB_1407cc110:
            plVar27 = *(longlong **)(lVar28 + 0x40);
            local_4c8[0] = 0;
            iVar19 = (**(code **)(*plVar27 + 0x10))(plVar27,local_4c8,0);
            if (iVar19 != 0) {
                pfVar20 = (float *)(**(code **)(*plVar27 + 0x488))(plVar27);
                pauVar21 = (undefined (*) [16])(**(code **)(*plVar27 + 0x50))(plVar27);
                fVar32 = *(float *)pauVar21[2];
                fVar35 = *(float *)(pauVar21[2] + 4);
                auVar38 = *pauVar21;
                fVar37 = SUB164(auVar38,0);
                fVar39 = SUB164(auVar38 >> 0x20,0);
                fVar40 = SUB164(auVar38 >> 0x40,0);
                fVar36 = *(float *)pauVar21[1];
                fVar31 = *(float *)(pauVar21[1] + 4);
                fVar42 = fVar32 * fVar32 + fVar35 * fVar35 + 0.0;
                fVar41 = fVar36 * fVar36 + fVar31 * fVar31 + 0.0;
                fVar40 = fVar37 * fVar37 + fVar39 * fVar39 + fVar40 * fVar40;
                if (fVar40 <= fVar41) {
                    fVar40 = fVar41;
                }
                if (fVar40 <= fVar42) {
                    fVar40 = fVar42;
                }
                auVar38 = sqrtps(auVar38,ZEXT416((uint)fVar40));
                uVar22 = 0;
                pfVar24 = param_5;
                do {
                    if (SUB164(auVar38,0) * pfVar20[0xc] <
                        (pfVar20[8] * fVar37 + pfVar20[9] * fVar36 + fVar32 * 0.0 + *(float *)pauVar21[3]) *
                        *pfVar24 +
                        (pfVar20[8] * fVar39 + pfVar20[9] * fVar31 + fVar35 * 0.0 +
                         *(float *)(pauVar21[3] + 4)) * pfVar24[1] + 0.0 + pfVar24[3]) goto LAB_1407cc49a;
                    uVar22 = uVar22 + 1;
                    pfVar24 = pfVar24 + 4;
                } while (uVar22 < 6);
                fVar32 = *(float *)*pauVar21;
                auVar15 = *(undefined (*) [12])pauVar21[3];
                auVar14 = *(undefined (*) [12])pauVar21[3];
                fVar35 = *pfVar20;
                fVar36 = pfVar20[4];
                local_548._0_4_ = SUB124(auVar14,0);
                local_558._0_4_ = SUB124(auVar15,0);
                fVar40 = fVar36;
                fVar31 = fVar35;
                if (fVar43 < fVar32) {
                    fVar40 = fVar35;
                    fVar31 = fVar36;
                }
                fVar37 = *(float *)pauVar21[1];
                fVar39 = pfVar20[1];
                fVar41 = pfVar20[5];
                fVar42 = fVar41;
                fVar33 = fVar39;
                if (fVar43 < fVar37) {
                    fVar42 = fVar39;
                    fVar33 = fVar41;
                }
                fVar1 = pfVar20[2];
                fVar2 = pfVar20[6];
                fVar3 = *(float *)pauVar21[2];
                fVar34 = fVar2;
                fVar4 = fVar1;
                if (fVar43 < fVar3) {
                    fVar34 = fVar1;
                    fVar4 = fVar2;
                }
                fVar33 = local_558._0_4_ + fVar32 * fVar31 + fVar37 * fVar33 + fVar3 * fVar4;
                fVar31 = *(float *)(*pauVar21 + 4);
                fVar37 = local_548._0_4_ + fVar32 * fVar40 + fVar37 * fVar42 + fVar3 * fVar34;
                local_558._4_4_ = SUB124(auVar15 >> 0x20,0);
                local_548._4_4_ = SUB124(auVar14 >> 0x20,0);
                fVar32 = fVar36;
                fVar40 = fVar35;
                if (fVar43 < fVar31) {
                    fVar32 = fVar35;
                    fVar40 = fVar36;
                }
                fVar42 = *(float *)(pauVar21[1] + 4);
                fVar3 = fVar41;
                fVar34 = fVar39;
                if (fVar43 < fVar42) {
                    fVar3 = fVar39;
                    fVar34 = fVar41;
                }
                fVar4 = *(float *)(pauVar21[2] + 4);
                fVar5 = fVar2;
                fVar6 = fVar1;
                if (fVar43 < fVar4) {
                    fVar5 = fVar1;
                    fVar6 = fVar2;
                }
                fVar34 = local_558._4_4_ + fVar31 * fVar40 + fVar42 * fVar34 + fVar4 * fVar6;
                fVar40 = *(float *)(*pauVar21 + 8);
                fVar31 = local_548._4_4_ + fVar31 * fVar32 + fVar42 * fVar3 + fVar4 * fVar5;
                local_558 = (undefined4 *)CONCAT44(fVar34,fVar33);
                pfStack1360._0_4_ = SUB124(auVar15 >> 0x40,0);
                fStack1344 = SUB124(auVar14 >> 0x40,0);
                fVar32 = fVar36;
                if (fVar43 < fVar40) {
                    fVar32 = fVar35;
                    fVar35 = fVar36;
                }
                fVar36 = *(float *)(pauVar21[1] + 8);
                fVar42 = fVar41;
                if (fVar43 < fVar36) {
                    fVar42 = fVar39;
                    fVar39 = fVar41;
                }
                fVar41 = *(float *)(pauVar21[2] + 8);
                fVar3 = fVar2;
                if (fVar43 < fVar41) {
                    fVar3 = fVar1;
                    fVar1 = fVar2;
                }
                fVar35 = pfStack1360._0_4_ + fVar40 * fVar35 + fVar36 * fVar39 + fVar41 * fVar1;
                fVar32 = fStack1344 + fVar40 * fVar32 + fVar36 * fVar42 + fVar41 * fVar3;
                uVar22 = 0;
                _local_558 = CONCAT412(fVar43,CONCAT48(fVar35,local_558));
                _local_548 = CONCAT412(fVar43,CONCAT48(fVar32,CONCAT44(fVar31,fVar37)));
                pfVar20 = param_5;
                do {
                    if (0.0 < (float)(~-(uint)(0.0 < *pfVar20) & (uint)fVar33 |
                                      -(uint)(0.0 < *pfVar20) & (uint)fVar37) * *pfVar20 +
                              (float)(~-(uint)(0.0 < pfVar20[1]) & (uint)fVar34 |
                                      -(uint)(0.0 < pfVar20[1]) & (uint)fVar31) * pfVar20[1] +
                              (float)(~-(uint)(0.0 < pfVar20[2]) & (uint)fVar35 |
                                      -(uint)(0.0 < pfVar20[2]) & (uint)fVar32) * pfVar20[2] + pfVar20[3])
                        goto LAB_1407cc49a;
                    uVar22 = uVar22 + 1;
                    pfVar20 = pfVar20 + 4;
                } while (uVar22 < 6);
                bVar16 = true;
                goto LAB_1407cc49c;
            }
            goto LAB_1407cc4d3;
        }
        LAB_1407cc503:
        lVar28 = 7;
        if (uVar29 != 0) {
            local_578 = 0;
            (**(code **)(*(longlong *)param_1[0x176] + 0x50))
                    ((longlong *)param_1[0x176],param_3,local_528,&local_538);
        }
        plVar27 = param_1 + 0x178;
        iVar19 = 6;
        if ((((uint)plVar27 | (uint)&local_3d8) & 0xf) == 0) {
            lVar23 = 6;
            puVar18 = &local_3d8;
            do {
                plVar26 = plVar27;
                puVar25 = puVar18;
                uVar30 = *(undefined4 *)((longlong)plVar26 + 4);
                uVar7 = *(undefined4 *)(plVar26 + 1);
                uVar8 = *(undefined4 *)((longlong)plVar26 + 0xc);
                uVar9 = *(undefined4 *)(plVar26 + 2);
                uVar10 = *(undefined4 *)((longlong)plVar26 + 0x14);
                uVar11 = *(undefined4 *)(plVar26 + 3);
                uVar12 = *(undefined4 *)((longlong)plVar26 + 0x1c);
                *puVar25 = *(undefined4 *)plVar26;
                puVar25[1] = uVar30;
                puVar25[2] = uVar7;
                puVar25[3] = uVar8;
                uVar30 = *(undefined4 *)(plVar26 + 4);
                uVar7 = *(undefined4 *)((longlong)plVar26 + 0x24);
                uVar8 = *(undefined4 *)(plVar26 + 5);
                uVar13 = *(undefined4 *)((longlong)plVar26 + 0x2c);
                puVar25[4] = uVar9;
                puVar25[5] = uVar10;
                puVar25[6] = uVar11;
                puVar25[7] = uVar12;
                uVar9 = *(undefined4 *)(plVar26 + 6);
                uVar10 = *(undefined4 *)((longlong)plVar26 + 0x34);
                uVar11 = *(undefined4 *)(plVar26 + 7);
                uVar12 = *(undefined4 *)((longlong)plVar26 + 0x3c);
                puVar25[8] = uVar30;
                puVar25[9] = uVar7;
                puVar25[10] = uVar8;
                puVar25[0xb] = uVar13;
                uVar30 = *(undefined4 *)(plVar26 + 8);
                uVar7 = *(undefined4 *)((longlong)plVar26 + 0x44);
                uVar8 = *(undefined4 *)(plVar26 + 9);
                uVar13 = *(undefined4 *)((longlong)plVar26 + 0x4c);
                puVar25[0xc] = uVar9;
                puVar25[0xd] = uVar10;
                puVar25[0xe] = uVar11;
                puVar25[0xf] = uVar12;
                uVar9 = *(undefined4 *)(plVar26 + 10);
                uVar10 = *(undefined4 *)((longlong)plVar26 + 0x54);
                uVar11 = *(undefined4 *)(plVar26 + 0xb);
                uVar12 = *(undefined4 *)((longlong)plVar26 + 0x5c);
                puVar25[0x10] = uVar30;
                puVar25[0x11] = uVar7;
                puVar25[0x12] = uVar8;
                puVar25[0x13] = uVar13;
                uVar30 = *(undefined4 *)(plVar26 + 0xc);
                uVar7 = *(undefined4 *)((longlong)plVar26 + 100);
                uVar8 = *(undefined4 *)(plVar26 + 0xd);
                uVar13 = *(undefined4 *)((longlong)plVar26 + 0x6c);
                puVar25[0x14] = uVar9;
                puVar25[0x15] = uVar10;
                puVar25[0x16] = uVar11;
                puVar25[0x17] = uVar12;
                uVar9 = *(undefined4 *)(plVar26 + 0xe);
                uVar10 = *(undefined4 *)((longlong)plVar26 + 0x74);
                uVar11 = *(undefined4 *)(plVar26 + 0xf);
                uVar12 = *(undefined4 *)((longlong)plVar26 + 0x7c);
                puVar25[0x18] = uVar30;
                puVar25[0x19] = uVar7;
                puVar25[0x1a] = uVar8;
                puVar25[0x1b] = uVar13;
                puVar25[0x1c] = uVar9;
                puVar25[0x1d] = uVar10;
                puVar25[0x1e] = uVar11;
                puVar25[0x1f] = uVar12;
                lVar23 = lVar23 + -1;
                puVar18 = puVar25 + 0x20;
                plVar27 = plVar26 + 0x10;
            } while (lVar23 != 0);
            uVar30 = *(undefined4 *)((longlong)plVar26 + 0x84);
            uVar7 = *(undefined4 *)(plVar26 + 0x11);
            uVar8 = *(undefined4 *)((longlong)plVar26 + 0x8c);
            puVar25[0x20] = *(undefined4 *)(plVar26 + 0x10);
            puVar25[0x21] = uVar30;
            puVar25[0x22] = uVar7;
            puVar25[0x23] = uVar8;
        }
        else {
            FUN_1407db590(&local_3d8,plVar27,0x310);
        }
        local_3d8 = *(undefined4 *)(param_1 + 0x1fe);
        uStack980 = *(undefined4 *)((longlong)param_1 + 0xff4);
        uStack976 = *(undefined4 *)(param_1 + 0x1ff);
        uStack972 = *(undefined4 *)((longlong)param_1 + 0xffc);
        local_3c8 = *(undefined4 *)(param_1 + 0x200);
        uStack964 = *(undefined4 *)((longlong)param_1 + 0x1004);
        uStack960 = *(undefined4 *)(param_1 + 0x201);
        uStack956 = *(undefined4 *)((longlong)param_1 + 0x100c);
        local_3b8 = *(undefined4 *)(param_1 + 0x202);
        local_388 = *(undefined4 *)(param_1 + 0x208);
        local_358 = *(undefined4 *)(param_1 + 0x20e);
        local_3a8 = *(undefined4 *)(param_1 + 0x204);
        uStack932 = *(undefined4 *)((longlong)param_1 + 0x1024);
        uStack928 = *(undefined4 *)(param_1 + 0x205);
        uStack924 = *(undefined4 *)((longlong)param_1 + 0x102c);
        local_398 = *(undefined4 *)(param_1 + 0x206);
        uStack916 = *(undefined4 *)((longlong)param_1 + 0x1034);
        uStack912 = *(undefined4 *)(param_1 + 0x207);
        uStack908 = *(undefined4 *)((longlong)param_1 + 0x103c);
        local_378 = *(undefined4 *)(param_1 + 0x20a);
        uStack884 = *(undefined4 *)((longlong)param_1 + 0x1054);
        uStack880 = *(undefined4 *)(param_1 + 0x20b);
        uStack876 = *(undefined4 *)((longlong)param_1 + 0x105c);
        local_368 = *(undefined4 *)(param_1 + 0x20c);
        uStack868 = *(undefined4 *)((longlong)param_1 + 0x1064);
        uStack864 = *(undefined4 *)(param_1 + 0x20d);
        uStack860 = *(undefined4 *)((longlong)param_1 + 0x106c);
        local_4b8 = param_3;
        FUN_1401afc20(&local_4b8,&local_508);
        local_558 = &local_3d8;
        pfStack1360 = param_3;
        FUN_1401ae910(local_558,&local_3d8);
        local_4b8 = &local_508;
        pfStack1200 = local_168;
        _local_558 = CONCAT88(pfStack1200,local_4b8);
        _local_328 = CONCAT412(local_328._0_4_ * param_3[3] + local_328._4_4_ * param_3[7] +
                               fStack800 * param_3[0xb],
                               CONCAT48(local_328._0_4_ * param_3[2] + local_328._4_4_ * param_3[6] +
                                        fStack800 * param_3[10],
                                        CONCAT44(local_328._0_4_ * param_3[1] +
                                                 local_328._4_4_ * param_3[5] + fStack800 * param_3[9],
                                                 local_328._0_4_ * *param_3 +
                                                 local_328._4_4_ * param_3[4] + fStack800 * param_3[8]))
        );
        FUN_1401afb10(&local_4b8,local_168);
        fVar35 = local_308 * param_3[1];
        fVar36 = local_308 * param_3[2];
        fVar31 = local_308 * param_3[3];
        fVar43 = fStack772 * param_3[6];
        fVar32 = fStack772 * param_3[7];
        local_308 = local_308 * *param_3 + fStack772 * param_3[4] + param_3[8] * 0.0 + param_3[0xc];
        fStack772 = fVar35 + fStack772 * param_3[5] + param_3[9] * 0.0 + param_3[0xd];
        fStack768 = fVar36 + fVar43 + param_3[10] * 0.0 + param_3[0xe];
        fStack764 = fVar31 + fVar32 + param_3[0xb] * 0.0 + param_3[0xf];
        FUN_1407c1fe0(local_468);
        local_568 = param_1[0x2f8];
        local_560 = 0;
        local_570 = 3;
        local_578 = 0x60;
        (**(code **)(*(longlong *)param_1[0x176] + 0x78))
                ((longlong *)param_1[0x176],local_468,local_520,&local_3d8);
        if (local_400 != 0) {
            FUN_1407c2170(local_468,5,0xffffffff);
        }
        plVar27 = local_468;
        do {
            lVar23 = *plVar27;
            while (lVar23 != 0) {
                if (*(undefined8 **)(lVar23 + 0x20) != (undefined8 *)0x0) {
                    **(undefined8 **)(lVar23 + 0x20) = *(undefined8 *)(lVar23 + 0x28);
                }
                if (*(longlong *)(lVar23 + 0x28) != 0) {
                    *(undefined8 *)(*(longlong *)(lVar23 + 0x28) + 0x20) = *(undefined8 *)(lVar23 + 0x20);
                }
                *(undefined8 *)(lVar23 + 0x20) = 0;
                *(undefined8 *)(lVar23 + 0x28) = 0;
                lVar23 = *plVar27;
            }
            plVar27 = plVar27 + 1;
            lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        if (local_3f0 != 0) {
            (**(code **)(*(longlong *)(local_3f0 + -0x10) + 8))(local_3f0 + -0x10);
        }
        plVar27 = local_438 + 1;
        do {
            plVar27 = plVar27 + -1;
            if (*plVar27 != 0) {
                FUN_1401a4a00(plVar27);
            }
            iVar19 = iVar19 + -1;
        } while (-1 < iVar19);
    }
    (**(code **)(*DAT_140c65688 + 0xa8))(DAT_140c65688,param_1 + 0x178);
    FUN_1407db4f0(local_c8 ^ (ulonglong)auStack1432);
    return;
    LAB_1407cc49a:
    bVar16 = false;
    LAB_1407cc49c:
    if (uVar29 != 0) {
        if ((!bVar16) && (uVar17 == 0)) goto LAB_1407cc4d3;
        (**(code **)(**(longlong **)(lVar28 + 0x40) + 0x128))(*(longlong **)(lVar28 + 0x40),1);
    }
    if (bVar16) {
        (**(code **)(*plVar27 + 0x140))(plVar27,1);
    }
    LAB_1407cc4d3:
    lVar28 = *(longlong *)(lVar28 + 0x58);
    param_3 = local_510;
    if (lVar28 == 0) goto LAB_1407cc503;
    goto LAB_1407cc110;
}



void FUN_1407cc850(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                   undefined8 param_5_00,undefined8 param_6_00,uint param_7_00,undefined4 param_5,
                   undefined4 param_6,undefined4 param_7)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;

    fVar1 = (float)FUN_1408fe3d0(param_5);
    fVar2 = (float)FUN_1408fc950(param_5);
    fVar3 = (float)FUN_1408fe3d0(param_6);
    fVar4 = (float)FUN_1408fc950(param_6);
    *param_4 = param_2;
    param_4[1] = param_3;
    param_4[2] = 0x3f800000;
    param_4[3] = 0x3f800000;
    param_4[4] = fVar3 * fVar2;
    param_4[5] = fVar3 * fVar1;
    param_4[6] = (float)((uint)fVar4 & 0x7fffffff) * fVar4;
    param_4[7] = (float)(ulonglong)param_7_00;
    param_4[8] = (uint)fVar1 ^ 0x80000000;
    param_4[9] = fVar2;
    param_4[10] = 0;
    param_4[0xb] = param_7;
    param_4[0xc] = fVar4 * fVar2;
    param_4[0xd] = fVar4 * fVar1;
    param_4[0xe] = (uint)fVar3 ^ 0x80000000;
    param_4[0xf] = 0x3f800000;
    return;
}



void FUN_1407cc9a0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined local_68 [16];
    undefined4 local_58 [2];
    undefined8 local_50;
    uint local_48;
    int local_44;

    (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1808),0x16);
    (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1698),0);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    iVar1 = (param_4 + -1) * 0x30;
    do {
        local_58[0] = 2;
        local_50 = param_3;
        local_48 = uVar2;
        local_44 = param_4;
        (**(code **)(*DAT_140c65670 + 0x208))
                (DAT_140c65670,local_58,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
        local_68 = CONCAT412(uVar6,CONCAT48(uVar5,CONCAT44(uVar4,uVar3)));
        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_68);
        uVar7 = 0;
        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,param_2,0,0);
        (**(code **)(*DAT_140c65670 + 0x288))(DAT_140c65670,4,iVar1,4,CONCAT44(uVar7,1));
        (**(code **)(*DAT_140c65670 + 0x2a0))();
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 4;
    } while (uVar2 < 6);
    return;
}



void FUN_1407ccb20(longlong param_1,undefined (*param_2) [16],int param_3)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    int iVar6;
    uint uVar7;
    byte bVar8;
    int iVar9;
    longlong lVar10;
    longlong lVar11;
    undefined (*pauVar12) [16];
    int *piVar13;
    longlong lVar14;
    int iVar15;
    longlong lVar16;
    longlong lVar17;
    undefined (*pauVar18) [16];
    longlong lVar19;
    float *pfVar20;
    int iVar21;
    undefined4 *puVar22;
    float *pfVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    float fVar27;
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    undefined4 uVar38;
    undefined4 uVar39;
    undefined4 uVar40;
    undefined4 uVar41;
    undefined auStack536 [32];
    int local_1f8 [2];
    float local_1f0;
    float local_1ec;
    int local_1e8 [2];
    longlong local_1e0;
    float local_1d8;
    float fStack468;
    float local_1c8;
    float fStack452;
    float local_1b8;
    float fStack436;
    float local_1a8;
    float fStack420;
    undefined local_198 [16];
    undefined local_188 [16];
    float local_178;
    float fStack372;
    float local_168;
    float fStack356;
    float local_158;
    float fStack340;
    float local_148;
    float fStack324;
    float local_138 [6];
    undefined8 local_120;
    float local_118 [8];
    undefined4 local_f8;
    undefined4 local_f4;
    undefined4 local_f0;
    undefined4 local_ec;
    undefined4 local_e8;
    ulonglong local_e0;

    local_e0 = DAT_140c0f7b0 ^ (ulonglong)auStack536;
    local_1e0 = param_1;
    lVar10 = (**(code **)(**(longlong **)(param_1 + 0x19a0) + 0x18))();
    fVar32 = 1.0;
    fVar33 = 0.5;
    fVar34 = 0.5;
    fVar35 = 0.0;
    fVar36 = 0.0;
    local_118[1] = 2.0;
    local_120 = 0x40000000;
    local_138[1] = 1.0;
    piVar13 = &DAT_140c55808;
    bVar8 = (byte)(param_3 - 1U) & 0x1f;
    local_138[3] = (float)(ulonglong)(*(uint *)(lVar10 + 4) >> ((byte)param_3 & 0x1f));
    local_1f0 = (float)(0 >> bVar8);
    local_138[4] = (float)(ulonglong)(*(uint *)(lVar10 + 4) >> bVar8);
    fVar37 = (float)(ulonglong)(param_3 - 1U);
    fVar24 = 0.5 / local_138[4];
    fVar25 = local_138[4] * 0.5;
    local_198 = CONCAT412(fVar24,CONCAT48(fVar24,CONCAT44(fVar24,fVar24)));
    local_138[2] = local_138[3] - 1.0;
    local_1ec = local_138[4] - 2.0;
    fVar24 = fVar25;
    local_138[0] = local_1f0;
    local_138[5] = local_1ec;
    local_118[0] = local_1f0;
    local_118[3] = local_138[4];
    do {
        local_188 = ZEXT816(0);
        local_118[4] = 0.3333333;
        local_118[5] = 0.5;
        local_118[6] = 0.3333333;
        local_118[7] = 0.5;
        local_f8 = 0x3f800000;
        local_f4 = 0x3f000000;
        local_f0 = 0x3eaaaaab;
        local_ec = 0x3f000000;
        local_e8 = 0x3eaaaaab;
        local_118[2] = local_1ec;
        (**(code **)(**(longlong **)(param_1 + 0x19a0) + 0x78))
                (*(longlong **)(param_1 + 0x19a0),local_188);
        lVar11 = 0;
        lVar10 = 0;
        lVar16 = 3;
        do {
            fVar1 = *(float *)((longlong)local_138 + lVar10);
            fVar2 = *(float *)((longlong)local_138 + lVar10 + 0x10);
            lVar17 = 0;
            pauVar12 = param_2[3];
            puVar22 = (undefined4 *)((longlong)local_118 + lVar10 + 0x10);
            lVar19 = 0;
            lVar14 = 3;
            do {
                fVar31 = *(float *)((longlong)local_138 + lVar19);
                fVar27 = *(float *)((longlong)local_118 + lVar19);
                *param_2 = CONCAT412(fVar32 - fVar36,
                                     CONCAT48(0.0 - fVar35,CONCAT44(fVar1 - fVar34,fVar31 - fVar33)));
                fVar26 = fVar27 - fVar25;
                fVar29 = fVar2 - fVar24;
                fVar3 = *(float *)((longlong)local_138 + lVar17 + 4);
                fVar28 = *(float *)((longlong)local_118 + lVar17 + 4);
                uVar38 = *puVar22;
                pauVar12[-2] = CONCAT412(fVar37,ZEXT812(CONCAT44(fVar26 * fStack468 + fVar29 * fStack452 +
                                                                 fStack436 * 0.0 + fStack420,
                                                                 fVar26 * local_1d8 + fVar29 * local_1c8 +
                                                                 local_1b8 * 0.0 + local_1a8)));
                *pauVar12 = CONCAT412(uVar38,ZEXT812(0));
                pauVar12[1] = CONCAT412(fVar32 - fVar36,
                                        CONCAT48(0.0 - fVar35,CONCAT44(fVar1 - fVar34,fVar3 - fVar33)));
                fVar29 = fVar28 - fVar25;
                fVar30 = fVar2 - fVar24;
                fVar26 = *(float *)((longlong)local_138 + lVar11 + 0x14);
                pauVar12[4] = CONCAT412(uVar38,ZEXT812(0));
                pauVar12[8] = CONCAT412(uVar38,ZEXT812(0));
                pauVar12[2] = CONCAT412(fVar37,ZEXT812(CONCAT44(fVar29 * fStack468 + fVar30 * fStack452 +
                                                                fStack436 * 0.0 + fStack420,
                                                                fVar29 * local_1d8 + fVar30 * local_1c8 +
                                                                local_1b8 * 0.0 + local_1a8)));
                pauVar12[5] = CONCAT412(fVar32 - fVar36,
                                        CONCAT48(0.0 - fVar35,
                                                 CONCAT44(*(float *)((longlong)local_138 + lVar11 + 4) -
                                                          fVar34,fVar31 - fVar33)));
                fVar27 = fVar27 - fVar25;
                fVar31 = fVar26 - fVar24;
                pauVar12[6] = CONCAT412(fVar37,ZEXT812(CONCAT44(fVar27 * fStack468 + fVar31 * fStack452 +
                                                                fStack436 * 0.0 + fStack420,
                                                                fVar27 * local_1d8 + fVar31 * local_1c8 +
                                                                local_1b8 * 0.0 + local_1a8)));
                pauVar12[9] = CONCAT412(fVar32 - fVar36,
                                        CONCAT48(0.0 - fVar35,
                                                 CONCAT44(*(float *)((longlong)local_138 + lVar11 + 4) -
                                                          fVar34,fVar3 - fVar33)));
                fVar28 = fVar28 - fVar25;
                fVar26 = fVar26 - fVar24;
                pauVar12[10] = CONCAT412(fVar37,ZEXT812(CONCAT44(fVar28 * fStack468 + fVar26 * fStack452 +
                                                                 fStack436 * 0.0 + fStack420,
                                                                 fVar28 * local_1d8 + fVar26 * local_1c8 +
                                                                 local_1b8 * 0.0 + local_1a8)));
                pauVar12[0xc] = CONCAT412(uVar38,ZEXT812(0));
                pauVar12 = pauVar12[0x10];
                param_2 = param_2[0x10];
                lVar17 = lVar17 + 4;
                lVar19 = lVar19 + 4;
                puVar22 = puVar22 + 3;
                lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            lVar11 = lVar11 + 4;
            lVar10 = lVar10 + 4;
            lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        lVar10 = 4;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        do {
            local_198 = CONCAT412(uVar41,CONCAT48(uVar40,CONCAT44(uVar39,uVar38)));
            (**(code **)(**(longlong **)(param_1 + 0x19a0) + 0x78))();
            fVar29 = fStack324;
            fVar26 = local_148;
            fVar28 = fStack340;
            fVar3 = local_158;
            fVar27 = fStack356;
            fVar31 = local_168;
            fVar2 = fStack372;
            fVar1 = local_178;
            local_1f8[0] = piVar13[5];
            local_1f8[1] = piVar13[6];
            iVar21 = local_1f8[(uint)piVar13[7]];
            param_1 = local_1e0;
            while (local_1e0 = param_1, iVar21 < 3) {
                iVar21 = 0;
                pfVar23 = local_138 + local_1f8[1];
                fVar30 = local_118[(longlong)local_1f8[1] + (longlong)local_1f8[0] * 3 + 4];
                do {
                    fVar4 = *pfVar23;
                    iVar15 = 0;
                    pauVar12 = param_2;
                    pauVar18 = param_2[3];
                    pfVar20 = local_138 + local_1f8[0];
                    do {
                        fVar5 = *pfVar20;
                        iVar9 = local_1f8[0] + iVar15;
                        iVar15 = iVar15 + 1;
                        param_2 = pauVar12[4];
                        pfVar20 = pfVar20 + 1;
                        *pauVar12 = CONCAT412(fVar32 - fVar36,
                                              CONCAT48(0.0 - fVar35,CONCAT44(fVar4 - fVar34,fVar5 - fVar33)));
                        local_1e8[0] = iVar9 * piVar13[-1] + *piVar13;
                        local_1e8[1] = (local_1f8[1] + iVar21) * piVar13[2] + piVar13[3];
                        iVar9 = local_1e8[piVar13[1]];
                        iVar6 = piVar13[4];
                        *pauVar18 = CONCAT412(fVar30,ZEXT812(0));
                        pauVar18[-2] = CONCAT412(fVar37,ZEXT812(CONCAT44((local_118[iVar9] - fVar25) * fVar2 +
                                                                         (local_138[(longlong)local_1e8[iVar6] +
                                                                                    4] - fVar24) * fVar27 +
                                                                         fVar28 * 0.0 + fVar29,
                                                                         (local_118[iVar9] - fVar25) * fVar1 +
                                                                         (local_138[(longlong)local_1e8[iVar6] +
                                                                                    4] - fVar24) * fVar31 +
                                                                         fVar3 * 0.0 + fVar26)));
                        pauVar12 = param_2;
                        pauVar18 = pauVar18[4];
                    } while (iVar15 < 2);
                    iVar21 = iVar21 + 1;
                    pfVar23 = pfVar23 + 1;
                } while (iVar21 < 2);
                uVar7 = piVar13[7];
                local_1f8[uVar7] = local_1f8[uVar7] + 1;
                param_1 = local_1e0;
                iVar21 = local_1f8[uVar7];
            }
            piVar13 = piVar13 + 10;
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        local_1f0 = (float)((int)local_1f0 + 1);
    } while ((int)local_1f0 < 6);
    FUN_1407db4f0(local_e0 ^ (ulonglong)auStack536);
    return;
}



void FUN_1407cd220(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined *puVar8;
    ulonglong uVar9;
    undefined local_78 [16];
    undefined4 local_68 [2];
    undefined8 local_60;
    int local_58;
    int local_54;

    (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1698),0);
    (**(code **)(*DAT_140c65670 + 0x138))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1818));
    (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1810),0x16);
    iVar2 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    iVar3 = (param_4 + -1) * 0x2f4;
    uVar1 = (param_4 + -1) * 0x1f8;
    do {
        local_68[0] = 2;
        puVar8 = &DAT_140c3fe88;
        local_60 = param_3;
        local_58 = iVar2;
        local_54 = param_4;
        (**(code **)(*DAT_140c65670 + 0x208))
                (DAT_140c65670,local_68,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
        local_78 = CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar4)));
        uVar9 = (ulonglong)puVar8 & 0xffffffff00000000;
        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_78);
        (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,1,1,0,uVar9);
        uVar9 = 0;
        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,param_2,0,0);
        (**(code **)(*DAT_140c65670 + 0x290))
                (DAT_140c65670,3,iVar3,0x7e,uVar9 & 0xffffffff00000000 | (ulonglong)uVar1,0x54,0,1);
        (**(code **)(*DAT_140c65670 + 0x2a0))();
        iVar2 = iVar2 + 1;
        uVar1 = uVar1 + 0x54;
        iVar3 = iVar3 + 0x7e;
    } while (iVar2 < 6);
    return;
}



void FUN_1407cd3f0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined local_68 [16];
    undefined4 local_58 [2];
    undefined8 local_50;
    uint local_48;
    int local_44;

    (**(code **)(*DAT_140c65670 + 0x130))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1808),0x16);
    (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1690),0);
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    iVar1 = (param_4 + -1) * 0x30 + 0x18;
    do {
        local_58[0] = 2;
        local_50 = param_3;
        local_48 = uVar2;
        local_44 = param_4;
        (**(code **)(*DAT_140c65670 + 0x208))
                (DAT_140c65670,local_58,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
        local_68 = CONCAT412(uVar6,CONCAT48(uVar5,CONCAT44(uVar4,uVar3)));
        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_68);
        uVar7 = 0;
        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,0,param_2,0,0);
        (**(code **)(*DAT_140c65670 + 0x288))(DAT_140c65670,4,iVar1,4,CONCAT44(uVar7,1));
        (**(code **)(*DAT_140c65670 + 0x2a0))();
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 4;
    } while (uVar2 < 6);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407cdd20(longlong param_1)

{
    uint *puVar1;
    undefined4 uVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    char cVar6;
    short sVar10;
    short sVar11;
    short sVar12;
    short sVar13;
    unkbyte10 Var14;
    undefined auVar15 [14];
    undefined6 uVar16;
    float fVar17;
    undefined2 uVar18;
    undefined2 uVar19;
    undefined2 uVar20;
    ulonglong uVar21;
    int iVar22;
    undefined4 *puVar23;
    uint uVar24;
    ulonglong uVar25;
    ulonglong uVar26;
    uint uVar27;
    longlong **pplVar28;
    ulonglong uVar29;
    undefined4 *puVar30;
    undefined4 *puVar31;
    undefined4 *puVar32;
    uint uVar33;
    ulonglong uVar34;
    uint uVar42;
    undefined8 uVar35;
    uint uVar43;
    int iVar44;
    int iVar45;
    undefined auVar37 [16];
    undefined auVar38 [16];
    undefined auVar39 [16];
    undefined auVar40 [16];
    undefined auVar41 [16];
    int iVar46;
    char in_XMM1_Ba;
    char in_XMM1_Bb;
    char in_XMM1_Bc;
    char in_XMM1_Bd;
    char cVar47;
    char cVar48;
    undefined auVar49 [16];
    undefined auVar50 [16];
    undefined auVar51 [16];
    undefined auVar52 [16];
    undefined in_XMM5_Ba;
    undefined in_XMM5_Bb;
    undefined in_XMM5_Bc;
    undefined in_XMM5_Bd;
    undefined in_XMM5_Be;
    undefined in_XMM5_Bf;
    undefined in_XMM5_Bg;
    undefined in_XMM5_Bh;
    undefined in_XMM6_Ba;
    undefined in_XMM6_Bb;
    undefined uVar53;
    undefined in_XMM6_Bc;
    undefined uVar54;
    undefined in_XMM6_Bd;
    undefined uVar55;
    undefined in_XMM6_Be;
    undefined in_XMM6_Bf;
    undefined uVar56;
    undefined in_XMM6_Bg;
    undefined uVar57;
    undefined in_XMM6_Bh;
    undefined uVar58;
    undefined in_XMM7_Ba;
    byte bVar59;
    undefined in_XMM7_Bb;
    undefined in_XMM7_Bc;
    undefined in_XMM7_Bd;
    undefined in_XMM7_Be;
    undefined in_XMM7_Bf;
    undefined in_XMM7_Bg;
    undefined in_XMM7_Bh;
    undefined uVar60;
    float fVar61;
    undefined in_XMM10_Ba;
    undefined in_XMM10_Bb;
    undefined in_XMM10_Bc;
    undefined in_XMM10_Bd;
    undefined in_XMM10_Be;
    undefined in_XMM10_Bf;
    undefined in_XMM10_Bg;
    undefined in_XMM10_Bh;
    undefined auStack440 [32];
    undefined4 local_198;
    uint local_188;
    uint local_184;
    undefined4 *local_180 [3];
    longlong local_168;
    longlong lStack352;
    undefined4 *local_158 [4];
    longlong *local_138 [3];
    longlong lStack288;
    undefined8 local_118;
    undefined8 local_110;
    undefined4 *local_108;
    longlong local_100;
    uint local_f8 [4];
    uint local_e8 [4];
    ulonglong local_d8;
    char cVar7;
    char cVar8;
    char cVar9;
    undefined auVar36 [12];

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack440;
    plVar3 = *(longlong **)(param_1 + 0x530);
    fVar61 = 1.0;
    uVar34 = 0;
    uVar33 = 0;
    uVar29 = uVar34;
    // WARNING: Read-only address (ram,0x000140b7b240) is written
    // WARNING: Read-only address (ram,0x000140b7b3e0) is written
    while ((plVar3 != (longlong *)0x0 && (uVar33 = (uint)uVar29, uVar33 < 4))) {
        iVar22 = (**(code **)(*plVar3 + 0x1c0))(plVar3);
        if (iVar22 != 0) {
            local_158[0] = (undefined4 *)((ulonglong)local_158[0] & 0xffffffff00000000);
            iVar22 = (**(code **)(*plVar3 + 0x18))(plVar3);
            if (iVar22 != 0) {
                plVar4 = (longlong *)plVar3[0x3d];
                *(undefined4 *)((longlong)&local_118 + uVar29 * 4) = *(undefined4 *)(plVar3 + 0x22);
                lVar5 = *plVar4;
                local_138[uVar29] = plVar3;
                local_198 = 1;
                puVar23 = (undefined4 *)
                        (**(code **)(lVar5 + 0x48))(plVar4,0,local_f8 + uVar29,local_e8 + uVar29);
                local_180[uVar29] = puVar23;
                if (puVar23 != (undefined4 *)0x0) {
                    fVar61 = fVar61 - *(float *)(plVar3 + 0x22);
                    uVar29 = (ulonglong)(uVar33 + 1);
                }
            }
        }
        uVar33 = (uint)uVar29;
        plVar3 = (longlong *)plVar3[0x11];
    }
    local_198 = 6;
    puVar23 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0x19b8) + 0x48))();
    auVar40 = _DAT_140b7b3e0;
    auVar39 = _DAT_140b7b240;
    if (puVar23 != (undefined4 *)0x0) {
        if (uVar33 == 0) {
            uVar29 = uVar34;
            do {
                uVar26 = uVar34;
                puVar31 = puVar23;
                do {
                    uVar25 = uVar34;
                    puVar32 = puVar31;
                    do {
                        uVar24 = (int)uVar25 + 1;
                        auVar49 = divps(CONCAT88(SUB168(CONCAT412(CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))) ^
                                                                  CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))),
                                                                  CONCAT48((float)uVar29,
                                                                           CONCAT44((float)uVar29,(float)uVar25)
                                                                  )) >> 0x40,0),
                                                 CONCAT44((float)uVar26,(float)uVar25)),auVar40);
                        auVar49 = maxps(ZEXT816(CONCAT44(CONCAT13(in_XMM7_Bh,
                                                                  CONCAT12(in_XMM7_Bg,
                                                                           CONCAT11(in_XMM7_Bf,in_XMM7_Be))) ^
                                                         CONCAT13(in_XMM7_Bh,
                                                                  CONCAT12(in_XMM7_Bg,
                                                                           CONCAT11(in_XMM7_Bf,in_XMM7_Be))),
                                                         CONCAT13(in_XMM7_Bd,
                                                                  CONCAT12(in_XMM7_Bc,
                                                                           CONCAT11(in_XMM7_Bb,in_XMM7_Ba))) ^
                                                         CONCAT13(in_XMM7_Bd,
                                                                  CONCAT12(in_XMM7_Bc,
                                                                           CONCAT11(in_XMM7_Bb,in_XMM7_Ba))))),
                                        auVar49);
                        auVar49 = minps(auVar49,auVar39);
                        iVar22 = (int)(SUB164(auVar49,0) * 255.0 + 0.5);
                        uVar42 = (uint)(SUB164(auVar49 >> 0x20,0) * 255.0 + 0.5);
                        iVar44 = (int)(SUB164(auVar49 >> 0x40,0) * 255.0 + 0.5);
                        iVar45 = (int)(SUB164(auVar49 >> 0x60,0) * 255.0 + 0.5);
                        cVar47 = (char)((uint)iVar22 >> 0x10);
                        cVar48 = (char)((uint)iVar45 >> 0x10);
                        uVar21 = (ulonglong)
                                CONCAT16((char)(uVar42 >> 0x10),
                                         CONCAT15((char)(uVar42 >> 8),CONCAT14((char)uVar42,iVar44)));
                        uVar25 = ((ulonglong)uVar42 & 0xff000000) << 0x20 | uVar21;
                        Var14 = CONCAT19((char)((uint)iVar22 >> 8),CONCAT18((char)iVar22,uVar25));
                        auVar36 = CONCAT111((char)((uint)iVar22 >> 0x18),CONCAT110(cVar47,Var14));
                        auVar15 = CONCAT113((char)((uint)iVar45 >> 8),CONCAT112((char)iVar45,auVar36));
                        sVar10 = (short)iVar44;
                        cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char)iVar44 - (0xff < sVar10);
                        sVar10 = (short)(uVar21 >> 0x10);
                        sVar11 = (short)(uVar21 >> 0x20);
                        cVar7 = (0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x20) - (0xff < sVar11);
                        sVar11 = (short)(uVar25 >> 0x30);
                        sVar12 = (short)((unkuint10)Var14 >> 0x40);
                        cVar8 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar22 - (0xff < sVar12);
                        sVar12 = SUB122(auVar36 >> 0x50,0);
                        sVar13 = SUB142(auVar15 >> 0x60,0);
                        cVar9 = (0 < sVar13) * (sVar13 < 0xff) * (char)iVar45 - (0xff < sVar13);
                        sVar13 = SUB162(CONCAT115((char)((uint)iVar45 >> 0x18),CONCAT114(cVar48,auVar15)) >>
                                                                                                          0x70,0);
                        sVar10 = CONCAT11((0 < sVar10) * (sVar10 < 0xff) * (char)(uVar21 >> 0x10) -
                                          (0xff < sVar10),cVar6);
                        uVar2 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x30) -
                                         (0xff < sVar11),CONCAT12(cVar7,sVar10));
                        uVar16 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * cVar47 - (0xff < sVar12),
                                          CONCAT14(cVar8,uVar2));
                        in_XMM1_Ba = (0 < sVar10) * (sVar10 < 0xff) * cVar6 - (0xff < sVar10);
                        sVar10 = (short)((uint)uVar2 >> 0x10);
                        in_XMM1_Bb = (0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10);
                        sVar10 = (short)((uint6)uVar16 >> 0x20);
                        in_XMM1_Bc = (0 < sVar10) * (sVar10 < 0xff) * cVar8 - (0xff < sVar10);
                        sVar10 = (short)(CONCAT17((0 < sVar13) * (sVar13 < 0xff) * cVar48 - (0xff < sVar13),
                                                  CONCAT16(cVar9,uVar16)) >> 0x30);
                        in_XMM1_Bd = (0 < sVar10) * (sVar10 < 0xff) * cVar9 - (0xff < sVar10);
                        *puVar32 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
                        uVar25 = (ulonglong)uVar24;
                        puVar32 = puVar32 + 1;
                    } while (uVar24 < 0x10);
                    uVar24 = (int)uVar26 + 1;
                    uVar26 = (ulonglong)uVar24;
                    puVar31 = (undefined4 *)((longlong)puVar31 + (ulonglong)local_184);
                } while (uVar24 < 0x10);
                uVar24 = (int)uVar29 + 1;
                uVar29 = (ulonglong)uVar24;
                puVar23 = (undefined4 *)((longlong)puVar23 + (ulonglong)local_188);
            } while (uVar24 < 0x10);
        }
        else if (uVar33 == 1) {
            uVar24 = CONCAT13(in_XMM5_Bd,CONCAT12(in_XMM5_Bc,CONCAT11(in_XMM5_Bb,in_XMM5_Ba))) ^
                     CONCAT13(in_XMM5_Bd,CONCAT12(in_XMM5_Bc,CONCAT11(in_XMM5_Bb,in_XMM5_Ba)));
            uVar42 = CONCAT13(in_XMM5_Bh,CONCAT12(in_XMM5_Bg,CONCAT11(in_XMM5_Bf,in_XMM5_Be))) ^
                     CONCAT13(in_XMM5_Bh,CONCAT12(in_XMM5_Bg,CONCAT11(in_XMM5_Bf,in_XMM5_Be)));
            uVar29 = uVar34;
            do {
                puVar31 = local_180[0];
                uVar26 = uVar34;
                puVar32 = puVar23;
                do {
                    uVar25 = uVar34;
                    puVar30 = puVar32;
                    do {
                        uVar2 = *(undefined4 *)(((longlong)puVar31 - (longlong)puVar32) + (longlong)puVar30);
                        uVar27 = (int)uVar25 + 1;
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar37 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                                              CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                                  (CONCAT115((char)(uVar42 >> 0x18),
                                                                                                                                                                             CONCAT114((char)((uint)uVar2 >> 0x18),
                                                                                                                                                                                       SUB1614(CONCAT412(uVar2,
                                                                                                                                                                                                         auVar36),0))) >> 0x70,0),
                                                                                                                                                          CONCAT113((char)(uVar42 >> 0x10),
                                                                                                                                                                    SUB1613(CONCAT412(uVar2,auVar36),0))) >>
                                                                                                                                                                                                          0x68,0),CONCAT112((char)((uint)uVar2 >> 0x10),
                                                                                                                                                                                                                            auVar36)) >> 0x60,0),
                                                                                                                        CONCAT111((char)(uVar42 >> 8),SUB1211(auVar36,0)))
                                                                                                                      >> 0x58,0),
                                                                                                      CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19((char)uVar42,SUB129(auVar36,0))) >> 0x48,
                                                                           0),CONCAT18((char)uVar2,uVar35)) >> 0x40,0),
                                                    (char)(uVar24 >> 0x18)),((uint7)uVar35 >> 0x18) << 0x30);
                        auVar50 = CONCAT115(CONCAT101(SUB1610(auVar37 >> 0x30,0),(char)(uVar24 >> 0x10)),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar49 = CONCAT142(SUB1614(CONCAT133(SUB1613(CONCAT124(SUB1612(auVar50 >> 0x20,0),
                                                                                (uVar24 >> 8) << 0x18) >> 0x18,0
                                            ),((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)(byte)uVar24 << 8);
                        iVar22 = SUB164(CONCAT214((short)(uVar42 >> 0x10),
                                                  CONCAT212(SUB162(auVar37 >> 0x30,0),SUB1612(auVar49,0))) >>
                                                                                                           0x60,0);
                        auVar37 = CONCAT610(SUB166(CONCAT412(iVar22,CONCAT210((short)uVar42,SUB1610(auVar49,0)))
                                                           >> 0x50,0),
                                            CONCAT28(SUB162(auVar50 >> 0x20,0),SUB168(auVar49,0)));
                        auVar50 = divps(CONCAT88(SUB168(CONCAT412(CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))) ^
                                                                  CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))),
                                                                  CONCAT48((float)uVar29,
                                                                           CONCAT44((float)uVar29,(float)uVar25)
                                                                  )) >> 0x40,0),
                                                 CONCAT44((float)uVar26,(float)uVar25)),auVar40);
                        auVar49 = maxps(ZEXT1216(ZEXT812(0) & (undefined  [12])0xffffffffffffffff) << 0x20 &
                                        (undefined  [16])0xffffffff,
                                        CONCAT412((float)iVar22 * 0.003921569 * (float)local_118 +
                                                  SUB164(auVar50 >> 0x60,0) * fVar61,
                                                  CONCAT48((float)(SUB164(auVar49,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * (float)local_118 +
                                                           SUB164(auVar50 >> 0x40,0) * fVar61,
                                                           CONCAT44((float)SUB164(CONCAT106(CONCAT82(SUB168(
                                                                                                    auVar37 >> 0x40,0),(short)(uVar24 >> 0x10)),
                                                                                            (SUB166(auVar49,0) >> 0x10) << 0x20) >> 0x20,0) *
                                                                    0.003921569 * (float)local_118 +
                                                                    SUB164(auVar50 >> 0x20,0) * fVar61,
                                                                    (float)SUB164(auVar37 >> 0x40,0) * 0.003921569 *
                                                                    (float)local_118 + SUB164(auVar50,0) * fVar61))));
                        auVar49 = minps(auVar49,auVar39);
                        iVar22 = (int)(SUB164(auVar49,0) * 255.0 + 0.5);
                        uVar43 = (uint)(SUB164(auVar49 >> 0x20,0) * 255.0 + 0.5);
                        iVar44 = (int)(SUB164(auVar49 >> 0x40,0) * 255.0 + 0.5);
                        iVar45 = (int)(SUB164(auVar49 >> 0x60,0) * 255.0 + 0.5);
                        cVar47 = (char)((uint)iVar22 >> 0x10);
                        cVar48 = (char)((uint)iVar45 >> 0x10);
                        uVar21 = (ulonglong)
                                CONCAT16((char)(uVar43 >> 0x10),
                                         CONCAT15((char)(uVar43 >> 8),CONCAT14((char)uVar43,iVar44)));
                        uVar25 = ((ulonglong)uVar43 & 0xff000000) << 0x20 | uVar21;
                        Var14 = CONCAT19((char)((uint)iVar22 >> 8),CONCAT18((char)iVar22,uVar25));
                        auVar36 = CONCAT111((char)((uint)iVar22 >> 0x18),CONCAT110(cVar47,Var14));
                        auVar15 = CONCAT113((char)((uint)iVar45 >> 8),CONCAT112((char)iVar45,auVar36));
                        sVar10 = (short)iVar44;
                        cVar7 = (0 < sVar10) * (sVar10 < 0xff) * (char)iVar44 - (0xff < sVar10);
                        sVar10 = (short)(uVar21 >> 0x10);
                        sVar11 = (short)(uVar21 >> 0x20);
                        cVar8 = (0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x20) - (0xff < sVar11);
                        sVar11 = (short)(uVar25 >> 0x30);
                        sVar12 = (short)((unkuint10)Var14 >> 0x40);
                        cVar9 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar22 - (0xff < sVar12);
                        sVar12 = SUB122(auVar36 >> 0x50,0);
                        sVar13 = SUB142(auVar15 >> 0x60,0);
                        cVar6 = (0 < sVar13) * (sVar13 < 0xff) * (char)iVar45 - (0xff < sVar13);
                        sVar13 = SUB162(CONCAT115((char)((uint)iVar45 >> 0x18),CONCAT114(cVar48,auVar15)) >>
                                                                                                          0x70,0);
                        sVar10 = CONCAT11((0 < sVar10) * (sVar10 < 0xff) * (char)(uVar21 >> 0x10) -
                                          (0xff < sVar10),cVar7);
                        uVar2 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x30) -
                                         (0xff < sVar11),CONCAT12(cVar8,sVar10));
                        uVar16 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * cVar47 - (0xff < sVar12),
                                          CONCAT14(cVar9,uVar2));
                        in_XMM1_Ba = (0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10);
                        sVar10 = (short)((uint)uVar2 >> 0x10);
                        in_XMM1_Bb = (0 < sVar10) * (sVar10 < 0xff) * cVar8 - (0xff < sVar10);
                        sVar10 = (short)((uint6)uVar16 >> 0x20);
                        in_XMM1_Bc = (0 < sVar10) * (sVar10 < 0xff) * cVar9 - (0xff < sVar10);
                        sVar10 = (short)(CONCAT17((0 < sVar13) * (sVar13 < 0xff) * cVar48 - (0xff < sVar13),
                                                  CONCAT16(cVar6,uVar16)) >> 0x30);
                        in_XMM1_Bd = (0 < sVar10) * (sVar10 < 0xff) * cVar6 - (0xff < sVar10);
                        *puVar30 = CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
                        uVar25 = (ulonglong)uVar27;
                        puVar30 = puVar30 + 1;
                    } while (uVar27 < 0x10);
                    uVar27 = (int)uVar26 + 1;
                    uVar26 = (ulonglong)uVar27;
                    puVar32 = (undefined4 *)((longlong)puVar32 + (ulonglong)local_184);
                    puVar31 = (undefined4 *)((longlong)puVar31 + (ulonglong)local_f8[0]);
                } while (uVar27 < 0x10);
                uVar27 = (int)uVar29 + 1;
                uVar29 = (ulonglong)uVar27;
                puVar23 = (undefined4 *)((longlong)puVar23 + (ulonglong)local_188);
                local_180[0] = (undefined4 *)((longlong)local_180[0] + (ulonglong)local_e8[0]);
            } while (uVar27 < 0x10);
        }
        else if (uVar33 == 2) {
            uVar24 = CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba))) ^
                     CONCAT13(in_XMM6_Bd,CONCAT12(in_XMM6_Bc,CONCAT11(in_XMM6_Bb,in_XMM6_Ba)));
            uVar53 = (undefined)(uVar24 >> 8);
            uVar54 = (undefined)(uVar24 >> 0x10);
            uVar55 = (undefined)(uVar24 >> 0x18);
            uVar42 = CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be))) ^
                     CONCAT13(in_XMM6_Bh,CONCAT12(in_XMM6_Bg,CONCAT11(in_XMM6_Bf,in_XMM6_Be)));
            uVar56 = (undefined)(uVar42 >> 8);
            uVar57 = (undefined)(uVar42 >> 0x10);
            uVar58 = (undefined)(uVar42 >> 0x18);
            uVar29 = uVar34;
            do {
                local_118 = local_180[0];
                local_110 = local_180[1];
                uVar26 = uVar34;
                puVar31 = puVar23;
                do {
                    puVar32 = local_118;
                    uVar25 = uVar34;
                    do {
                        uVar2 = *(undefined4 *)(((longlong)local_110 - (longlong)local_118) + (longlong)puVar32)
                                ;
                        uVar27 = (int)uVar25 + 1;
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar50 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                             CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                 (CONCAT115(uVar58,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     uVar2,auVar36),0))) >> 0x70,0),
                                                                                                                                         CONCAT113(uVar57,SUB1613(CONCAT412(uVar2,auVar36),
                                                                                                                                                                  0))) >> 0x68,0),
                                                                                                                        CONCAT112((char)((uint)uVar2 >> 0x10),auVar36)) >>
                                                                                                                                                                        0x60,0),CONCAT111(uVar56,SUB1211(auVar36,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19((char)uVar42,SUB129(auVar36,0))) >> 0x48,
                                                                           0),CONCAT18((char)uVar2,uVar35)) >> 0x40,0),uVar55
                        ),((uint7)uVar35 >> 0x18) << 0x30);
                        auVar49 = CONCAT115(CONCAT101(SUB1610(auVar50 >> 0x30,0),uVar54),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar37 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar49 >> 0x20,0),uVar53),
                                                              ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)(byte)uVar24 << 8);
                        uVar19 = (undefined2)(uVar42 >> 0x10);
                        iVar22 = SUB164(CONCAT214(uVar19,CONCAT212(SUB162(auVar50 >> 0x30,0),SUB1612(auVar37,0))
                        ) >> 0x60,0);
                        auVar49 = CONCAT610(SUB166(CONCAT412(iVar22,CONCAT210((short)uVar42,SUB1610(auVar37,0)))
                                                           >> 0x50,0),
                                            CONCAT28(SUB162(auVar49 >> 0x20,0),SUB168(auVar37,0)));
                        uVar18 = (undefined2)(uVar24 >> 0x10);
                        uVar2 = *puVar32;
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar50 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                             CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                 (CONCAT115(uVar58,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     uVar2,auVar36),0))) >> 0x70,0),
                                                                                                                                         CONCAT113(uVar57,SUB1613(CONCAT412(uVar2,auVar36),
                                                                                                                                                                  0))) >> 0x68,0),
                                                                                                                        CONCAT112((char)((uint)uVar2 >> 0x10),auVar36)) >>
                                                                                                                                                                        0x60,0),CONCAT111(uVar56,SUB1211(auVar36,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19((char)uVar42,SUB129(auVar36,0))) >> 0x48,
                                                                           0),CONCAT18((char)uVar2,uVar35)) >> 0x40,0),uVar55
                        ),((uint7)uVar35 >> 0x18) << 0x30);
                        auVar51 = CONCAT115(CONCAT101(SUB1610(auVar50 >> 0x30,0),uVar54),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar38 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar51 >> 0x20,0),uVar53),
                                                              ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)(byte)uVar24 << 8);
                        iVar44 = SUB164(CONCAT214(uVar19,CONCAT212(SUB162(auVar50 >> 0x30,0),SUB1612(auVar38,0))
                        ) >> 0x60,0);
                        auVar50 = CONCAT610(SUB166(CONCAT412(iVar44,CONCAT210((short)uVar42,SUB1610(auVar38,0)))
                                                           >> 0x50,0),
                                            CONCAT28(SUB162(auVar51 >> 0x20,0),SUB168(auVar38,0)));
                        auVar51 = divps(CONCAT88(SUB168(CONCAT412(CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))) ^
                                                                  CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))),
                                                                  CONCAT48((float)uVar29,
                                                                           CONCAT44((float)uVar29,(float)uVar25)
                                                                  )) >> 0x40,0),
                                                 CONCAT44((float)uVar26,(float)uVar25)),auVar40);
                        fVar17 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar49 >> 0x40,0),uVar18),
                                                         (SUB166(auVar37,0) >> 0x10) << 0x20) >> 0x20,0) *
                                 0.003921569 * local_118._4_4_ +
                                 (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar50 >> 0x40,0),uVar18),
                                                         (SUB166(auVar38,0) >> 0x10) << 0x20) >> 0x20,0) *
                                 0.003921569 * (float)local_118 + SUB164(auVar51 >> 0x20,0) * fVar61;
                        auVar49 = maxps(ZEXT1216(ZEXT412(0) & (undefined  [12])0xffffffffffffffff) << 0x20 &
                                        (undefined  [16])0xffffffff,
                                        CONCAT412((float)iVar22 * 0.003921569 * local_118._4_4_ +
                                                  (float)iVar44 * 0.003921569 * (float)local_118 +
                                                  SUB164(auVar51 >> 0x60,0) * fVar61,
                                                  CONCAT48((float)(SUB164(auVar37,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * local_118._4_4_ +
                                                           (float)(SUB164(auVar38,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * (float)local_118 +
                                                           SUB164(auVar51 >> 0x40,0) * fVar61,
                                                           CONCAT17((char)((uint)fVar17 >> 0x18),
                                                                    CONCAT16((char)((uint)fVar17 >> 0x10),
                                                                             CONCAT15((char)((uint)fVar17 >> 8),
                                                                                      CONCAT14(SUB41(fVar17,0),
                                                                                               (float)SUB164(
                                                                                                       auVar49 >> 0x40,0) * 0.003921569 * local_118._4_4_
                                                                                               + (float)SUB164(auVar50 >> 0x40,0) * 0.003921569 *
                                                                                                 (float)local_118 + SUB164(auVar51,0) * fVar61)))
                                                           ))));
                        auVar49 = minps(auVar49,auVar39);
                        iVar22 = (int)(SUB164(auVar49,0) * 255.0 + 0.5);
                        uVar43 = (uint)(SUB164(auVar49 >> 0x20,0) * 255.0 + 0.5);
                        iVar44 = (int)(SUB164(auVar49 >> 0x40,0) * 255.0 + 0.5);
                        iVar45 = (int)(SUB164(auVar49 >> 0x60,0) * 255.0 + 0.5);
                        cVar47 = (char)((uint)iVar22 >> 0x10);
                        cVar48 = (char)((uint)iVar45 >> 0x10);
                        uVar21 = (ulonglong)
                                CONCAT16((char)(uVar43 >> 0x10),
                                         CONCAT15((char)(uVar43 >> 8),CONCAT14((char)uVar43,iVar44)));
                        uVar25 = ((ulonglong)uVar43 & 0xff000000) << 0x20 | uVar21;
                        Var14 = CONCAT19((char)((uint)iVar22 >> 8),CONCAT18((char)iVar22,uVar25));
                        auVar36 = CONCAT111((char)((uint)iVar22 >> 0x18),CONCAT110(cVar47,Var14));
                        auVar15 = CONCAT113((char)((uint)iVar45 >> 8),CONCAT112((char)iVar45,auVar36));
                        sVar10 = (short)iVar44;
                        cVar6 = (0 < sVar10) * (sVar10 < 0xff) * (char)iVar44 - (0xff < sVar10);
                        sVar10 = (short)(uVar21 >> 0x10);
                        sVar11 = (short)(uVar21 >> 0x20);
                        cVar9 = (0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x20) - (0xff < sVar11);
                        sVar11 = (short)(uVar25 >> 0x30);
                        sVar12 = (short)((unkuint10)Var14 >> 0x40);
                        cVar8 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar22 - (0xff < sVar12);
                        sVar12 = SUB122(auVar36 >> 0x50,0);
                        sVar13 = SUB142(auVar15 >> 0x60,0);
                        cVar7 = (0 < sVar13) * (sVar13 < 0xff) * (char)iVar45 - (0xff < sVar13);
                        sVar13 = SUB162(CONCAT115((char)((uint)iVar45 >> 0x18),CONCAT114(cVar48,auVar15)) >>
                                                                                                          0x70,0);
                        sVar10 = CONCAT11((0 < sVar10) * (sVar10 < 0xff) * (char)(uVar21 >> 0x10) -
                                          (0xff < sVar10),cVar6);
                        uVar2 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x30) -
                                         (0xff < sVar11),CONCAT12(cVar9,sVar10));
                        uVar16 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * cVar47 - (0xff < sVar12),
                                          CONCAT14(cVar8,uVar2));
                        in_XMM1_Ba = (0 < sVar10) * (sVar10 < 0xff) * cVar6 - (0xff < sVar10);
                        sVar10 = (short)((uint)uVar2 >> 0x10);
                        in_XMM1_Bb = (0 < sVar10) * (sVar10 < 0xff) * cVar9 - (0xff < sVar10);
                        sVar10 = (short)((uint6)uVar16 >> 0x20);
                        in_XMM1_Bc = (0 < sVar10) * (sVar10 < 0xff) * cVar8 - (0xff < sVar10);
                        sVar10 = (short)(CONCAT17((0 < sVar13) * (sVar13 < 0xff) * cVar48 - (0xff < sVar13),
                                                  CONCAT16(cVar7,uVar16)) >> 0x30);
                        in_XMM1_Bd = (0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10);
                        *(uint *)((longlong)puVar31 + (-4 - (longlong)local_118) + (longlong)(puVar32 + 1)) =
                                CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
                        puVar32 = puVar32 + 1;
                        uVar25 = (ulonglong)uVar27;
                    } while (uVar27 < 0x10);
                    puVar31 = (undefined4 *)((longlong)puVar31 + (ulonglong)local_184);
                    uVar25 = uVar34;
                    do {
                        puVar1 = local_f8 + uVar25;
                        uVar25 = uVar25 + 1;
                        (&lStack288)[uVar25] = (&lStack288)[uVar25] + (ulonglong)*puVar1;
                    } while (uVar25 < 2);
                    uVar27 = (int)uVar26 + 1;
                    uVar26 = (ulonglong)uVar27;
                } while (uVar27 < 0x10);
                puVar23 = (undefined4 *)((longlong)puVar23 + (ulonglong)local_188);
                uVar26 = uVar34;
                do {
                    puVar1 = local_e8 + uVar26;
                    uVar26 = uVar26 + 1;
                    *(ulonglong *)(&local_188 + uVar26 * 2) =
                            *(longlong *)(&local_188 + uVar26 * 2) + (ulonglong)*puVar1;
                } while (uVar26 < 2);
                uVar27 = (int)uVar29 + 1;
                uVar29 = (ulonglong)uVar27;
            } while (uVar27 < 0x10);
        }
        else if (uVar33 == 3) {
            uVar24 = CONCAT13(in_XMM7_Bd,CONCAT12(in_XMM7_Bc,CONCAT11(in_XMM7_Bb,in_XMM7_Ba))) ^
                     CONCAT13(in_XMM7_Bd,CONCAT12(in_XMM7_Bc,CONCAT11(in_XMM7_Bb,in_XMM7_Ba)));
            bVar59 = (byte)uVar24;
            uVar53 = (undefined)(uVar24 >> 8);
            uVar54 = (undefined)(uVar24 >> 0x10);
            uVar55 = (undefined)(uVar24 >> 0x18);
            uVar42 = CONCAT13(in_XMM7_Bh,CONCAT12(in_XMM7_Bg,CONCAT11(in_XMM7_Bf,in_XMM7_Be))) ^
                     CONCAT13(in_XMM7_Bh,CONCAT12(in_XMM7_Bg,CONCAT11(in_XMM7_Bf,in_XMM7_Be)));
            uVar56 = (undefined)uVar42;
            uVar57 = (undefined)(uVar42 >> 8);
            uVar58 = (undefined)(uVar42 >> 0x10);
            uVar60 = (undefined)(uVar42 >> 0x18);
            uVar29 = uVar34;
            do {
                local_158[0] = local_180[0];
                local_158[1] = local_180[1];
                local_158[2] = local_180[2];
                puVar31 = puVar23;
                uVar26 = uVar34;
                do {
                    puVar32 = local_158[1];
                    uVar25 = uVar34;
                    do {
                        uVar2 = *(undefined4 *)
                                (((longlong)local_158[2] - (longlong)local_158[1]) + (longlong)puVar32);
                        uVar27 = (int)uVar25 + 1;
                        puVar30 = puVar32 + 1;
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar37 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                             CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                 (CONCAT115(uVar60,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     uVar2,auVar36),0))) >> 0x70,0),
                                                                                                                                         CONCAT113(uVar58,SUB1613(CONCAT412(uVar2,auVar36),
                                                                                                                                                                  0))) >> 0x68,0),
                                                                                                                        CONCAT112((char)((uint)uVar2 >> 0x10),auVar36)) >>
                                                                                                                                                                        0x60,0),CONCAT111(uVar57,SUB1211(auVar36,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19(uVar56,SUB129(auVar36,0))) >> 0x48,0),
                                                                    CONCAT18((char)uVar2,uVar35)) >> 0x40,0),uVar55),
                                           ((uint7)uVar35 >> 0x18) << 0x30);
                        auVar49 = CONCAT115(CONCAT101(SUB1610(auVar37 >> 0x30,0),uVar54),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar39 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar49 >> 0x20,0),uVar53),
                                                              ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)bVar59 << 8);
                        uVar20 = (undefined2)(uVar42 >> 0x10);
                        iVar22 = SUB164(CONCAT214(uVar20,CONCAT212(SUB162(auVar37 >> 0x30,0),SUB1612(auVar39,0))
                        ) >> 0x60,0);
                        uVar19 = (undefined2)uVar42;
                        auVar49 = CONCAT610(SUB166(CONCAT412(iVar22,CONCAT210(uVar19,SUB1610(auVar39,0))) >>
                                                                                                          0x50,0),CONCAT28(SUB162(auVar49 >> 0x20,0),SUB168(auVar39,0))
                        );
                        uVar18 = (undefined2)(uVar24 >> 0x10);
                        uVar2 = *puVar32;
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar37 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                             CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                 (CONCAT115(uVar60,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     uVar2,auVar36),0))) >> 0x70,0),
                                                                                                                                         CONCAT113(uVar58,SUB1613(CONCAT412(uVar2,auVar36),
                                                                                                                                                                  0))) >> 0x68,0),
                                                                                                                        CONCAT112((char)((uint)uVar2 >> 0x10),auVar36)) >>
                                                                                                                                                                        0x60,0),CONCAT111(uVar57,SUB1211(auVar36,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19(uVar56,SUB129(auVar36,0))) >> 0x48,0),
                                                                    CONCAT18((char)uVar2,uVar35)) >> 0x40,0),uVar55),
                                           ((uint7)uVar35 >> 0x18) << 0x30);
                        auVar50 = CONCAT115(CONCAT101(SUB1610(auVar37 >> 0x30,0),uVar54),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar51 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar50 >> 0x20,0),uVar53),
                                                              ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)bVar59 << 8);
                        iVar44 = SUB164(CONCAT214(uVar20,CONCAT212(SUB162(auVar37 >> 0x30,0),SUB1612(auVar51,0))
                        ) >> 0x60,0);
                        auVar37 = CONCAT610(SUB166(CONCAT412(iVar44,CONCAT210(uVar19,SUB1610(auVar51,0))) >>
                                                                                                          0x50,0),CONCAT28(SUB162(auVar50 >> 0x20,0),SUB168(auVar51,0))
                        );
                        uVar2 = *(undefined4 *)
                                ((longlong)local_158[0] + (-4 - (longlong)local_158[1]) + (longlong)puVar30);
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar52 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                             CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                 (CONCAT115(uVar60,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     uVar2,auVar36),0))) >> 0x70,0),
                                                                                                                                         CONCAT113(uVar58,SUB1613(CONCAT412(uVar2,auVar36),
                                                                                                                                                                  0))) >> 0x68,0),
                                                                                                                        CONCAT112((char)((uint)uVar2 >> 0x10),auVar36)) >>
                                                                                                                                                                        0x60,0),CONCAT111(uVar57,SUB1211(auVar36,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19(uVar56,SUB129(auVar36,0))) >> 0x48,0),
                                                                    CONCAT18((char)uVar2,uVar35)) >> 0x40,0),uVar55),
                                           ((uint7)uVar35 >> 0x18) << 0x30);
                        auVar38 = CONCAT115(CONCAT101(SUB1610(auVar52 >> 0x30,0),uVar54),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar50 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar38 >> 0x20,0),uVar53),
                                                              ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)bVar59 << 8);
                        iVar45 = SUB164(CONCAT214(uVar20,CONCAT212(SUB162(auVar52 >> 0x30,0),SUB1612(auVar50,0))
                        ) >> 0x60,0);
                        auVar38 = CONCAT610(SUB166(CONCAT412(iVar45,CONCAT210(uVar19,SUB1610(auVar50,0))) >>
                                                                                                          0x50,0),CONCAT28(SUB162(auVar38 >> 0x20,0),SUB168(auVar50,0))
                        );
                        auVar52 = divps(CONCAT88(SUB168(CONCAT412(CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))) ^
                                                                  CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))),
                                                                  CONCAT48((float)uVar29,
                                                                           CONCAT44((float)uVar29,(float)uVar25)
                                                                  )) >> 0x40,0),
                                                 CONCAT44((float)uVar26,(float)uVar25)),auVar40);
                        fVar17 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar49 >> 0x40,0),uVar18),
                                                         (SUB166(auVar39,0) >> 0x10) << 0x20) >> 0x20,0) *
                                 0.003921569 * (float)local_110 +
                                 (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar37 >> 0x40,0),uVar18),
                                                         (SUB166(auVar51,0) >> 0x10) << 0x20) >> 0x20,0) *
                                 0.003921569 * local_118._4_4_ +
                                 (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar38 >> 0x40,0),uVar18),
                                                         (SUB166(auVar50,0) >> 0x10) << 0x20) >> 0x20,0) *
                                 0.003921569 * (float)local_118 + SUB164(auVar52 >> 0x20,0) * fVar61;
                        auVar39 = maxps(ZEXT416(0) << 0x20 & (undefined  [16])0xffffffff,
                                        CONCAT412((float)iVar22 * 0.003921569 * (float)local_110 +
                                                  (float)iVar44 * 0.003921569 * local_118._4_4_ +
                                                  (float)iVar45 * 0.003921569 * (float)local_118 +
                                                  SUB164(auVar52 >> 0x60,0) * fVar61,
                                                  CONCAT48((float)(SUB164(auVar39,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * (float)local_110 +
                                                           (float)(SUB164(auVar51,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * local_118._4_4_ +
                                                           (float)(SUB164(auVar50,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * (float)local_118 +
                                                           SUB164(auVar52 >> 0x40,0) * fVar61,
                                                           CONCAT17((char)((uint)fVar17 >> 0x18),
                                                                    CONCAT16((char)((uint)fVar17 >> 0x10),
                                                                             CONCAT15((char)((uint)fVar17 >> 8),
                                                                                      CONCAT14(SUB41(fVar17,0),
                                                                                               (float)SUB164(
                                                                                                       auVar49 >> 0x40,0) * 0.003921569 *
                                                                                               (float)local_110 +
                                                                                               (float)SUB164(auVar37 >> 0x40,0) * 0.003921569 *
                                                                                               local_118._4_4_ +
                                                                                               (float)SUB164(auVar38 >> 0x40,0) * 0.003921569 *
                                                                                               (float)local_118 + SUB164(auVar52,0) * fVar61)))))
                                        ));
                        auVar39 = minps(auVar39,_DAT_140b7b240);
                        iVar22 = (int)(SUB164(auVar39,0) * 255.0 + 0.5);
                        uVar43 = (uint)(SUB164(auVar39 >> 0x20,0) * 255.0 + 0.5);
                        iVar44 = (int)(SUB164(auVar39 >> 0x40,0) * 255.0 + 0.5);
                        iVar45 = (int)(SUB164(auVar39 >> 0x60,0) * 255.0 + 0.5);
                        cVar47 = (char)((uint)iVar22 >> 0x10);
                        cVar48 = (char)((uint)iVar45 >> 0x10);
                        uVar21 = (ulonglong)
                                CONCAT16((char)(uVar43 >> 0x10),
                                         CONCAT15((char)(uVar43 >> 8),CONCAT14((char)uVar43,iVar44)));
                        uVar25 = ((ulonglong)uVar43 & 0xff000000) << 0x20 | uVar21;
                        Var14 = CONCAT19((char)((uint)iVar22 >> 8),CONCAT18((char)iVar22,uVar25));
                        auVar36 = CONCAT111((char)((uint)iVar22 >> 0x18),CONCAT110(cVar47,Var14));
                        auVar15 = CONCAT113((char)((uint)iVar45 >> 8),CONCAT112((char)iVar45,auVar36));
                        sVar10 = (short)iVar44;
                        cVar9 = (0 < sVar10) * (sVar10 < 0xff) * (char)iVar44 - (0xff < sVar10);
                        sVar10 = (short)(uVar21 >> 0x10);
                        sVar11 = (short)(uVar21 >> 0x20);
                        cVar6 = (0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x20) - (0xff < sVar11);
                        sVar11 = (short)(uVar25 >> 0x30);
                        sVar12 = (short)((unkuint10)Var14 >> 0x40);
                        cVar7 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar22 - (0xff < sVar12);
                        sVar12 = SUB122(auVar36 >> 0x50,0);
                        sVar13 = SUB142(auVar15 >> 0x60,0);
                        cVar8 = (0 < sVar13) * (sVar13 < 0xff) * (char)iVar45 - (0xff < sVar13);
                        sVar13 = SUB162(CONCAT115((char)((uint)iVar45 >> 0x18),CONCAT114(cVar48,auVar15)) >>
                                                                                                          0x70,0);
                        sVar10 = CONCAT11((0 < sVar10) * (sVar10 < 0xff) * (char)(uVar21 >> 0x10) -
                                          (0xff < sVar10),cVar9);
                        uVar2 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x30) -
                                         (0xff < sVar11),CONCAT12(cVar6,sVar10));
                        uVar16 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * cVar47 - (0xff < sVar12),
                                          CONCAT14(cVar7,uVar2));
                        in_XMM1_Ba = (0 < sVar10) * (sVar10 < 0xff) * cVar9 - (0xff < sVar10);
                        sVar10 = (short)((uint)uVar2 >> 0x10);
                        in_XMM1_Bb = (0 < sVar10) * (sVar10 < 0xff) * cVar6 - (0xff < sVar10);
                        sVar10 = (short)((uint6)uVar16 >> 0x20);
                        in_XMM1_Bc = (0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10);
                        sVar10 = (short)(CONCAT17((0 < sVar13) * (sVar13 < 0xff) * cVar48 - (0xff < sVar13),
                                                  CONCAT16(cVar8,uVar16)) >> 0x30);
                        in_XMM1_Bd = (0 < sVar10) * (sVar10 < 0xff) * cVar8 - (0xff < sVar10);
                        *(uint *)((longlong)puVar31 + (-4 - (longlong)local_158[1]) + (longlong)puVar30) =
                                CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
                        puVar32 = puVar30;
                        uVar25 = (ulonglong)uVar27;
                    } while (uVar27 < 0x10);
                    puVar31 = (undefined4 *)((longlong)puVar31 + (ulonglong)local_184);
                    uVar25 = uVar34;
                    do {
                        puVar1 = local_f8 + uVar25;
                        uVar25 = uVar25 + 1;
                        (&lStack352)[uVar25] = (&lStack352)[uVar25] + (ulonglong)*puVar1;
                    } while (uVar25 < 3);
                    uVar27 = (int)uVar26 + 1;
                    uVar26 = (ulonglong)uVar27;
                } while (uVar27 < 0x10);
                puVar23 = (undefined4 *)((longlong)puVar23 + (ulonglong)local_188);
                uVar26 = uVar34;
                do {
                    puVar1 = local_e8 + uVar26;
                    uVar26 = uVar26 + 1;
                    *(ulonglong *)(&local_188 + uVar26 * 2) =
                            *(longlong *)(&local_188 + uVar26 * 2) + (ulonglong)*puVar1;
                } while (uVar26 < 3);
                uVar27 = (int)uVar29 + 1;
                uVar29 = (ulonglong)uVar27;
            } while (uVar27 < 0x10);
        }
        else if (uVar33 == 4) {
            uVar24 = CONCAT13(in_XMM10_Bd,CONCAT12(in_XMM10_Bc,CONCAT11(in_XMM10_Bb,in_XMM10_Ba))) ^
                     CONCAT13(in_XMM10_Bd,CONCAT12(in_XMM10_Bc,CONCAT11(in_XMM10_Bb,in_XMM10_Ba)));
            bVar59 = (byte)uVar24;
            uVar53 = (undefined)(uVar24 >> 8);
            uVar54 = (undefined)(uVar24 >> 0x10);
            uVar55 = (undefined)(uVar24 >> 0x18);
            uVar42 = CONCAT13(in_XMM10_Bh,CONCAT12(in_XMM10_Bg,CONCAT11(in_XMM10_Bf,in_XMM10_Be))) ^
                     CONCAT13(in_XMM10_Bh,CONCAT12(in_XMM10_Bg,CONCAT11(in_XMM10_Bf,in_XMM10_Be)));
            uVar56 = (undefined)uVar42;
            uVar57 = (undefined)(uVar42 >> 8);
            uVar58 = (undefined)(uVar42 >> 0x10);
            uVar60 = (undefined)(uVar42 >> 0x18);
            local_158[0] = (undefined4 *)CONCAT44(fVar61,fVar61);
            local_158[1] = (undefined4 *)CONCAT44(fVar61,fVar61);
            uVar29 = uVar34;
            do {
                local_118 = local_180[0];
                local_110 = local_180[1];
                local_108 = local_180[2];
                local_100 = local_168;
                uVar26 = uVar34;
                puVar31 = puVar23;
                do {
                    puVar32 = local_108;
                    uVar25 = uVar34;
                    do {
                        uVar2 = *(undefined4 *)((local_100 - (longlong)local_108) + (longlong)puVar32);
                        uVar27 = (int)uVar25 + 1;
                        puVar30 = puVar32 + 1;
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar39 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                             CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                 (CONCAT115(uVar60,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     uVar2,auVar36),0))) >> 0x70,0),
                                                                                                                                         CONCAT113(uVar58,SUB1613(CONCAT412(uVar2,auVar36),
                                                                                                                                                                  0))) >> 0x68,0),
                                                                                                                        CONCAT112((char)((uint)uVar2 >> 0x10),auVar36)) >>
                                                                                                                                                                        0x60,0),CONCAT111(uVar57,SUB1211(auVar36,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19(uVar56,SUB129(auVar36,0))) >> 0x48,0),
                                                                    CONCAT18((char)uVar2,uVar35)) >> 0x40,0),uVar55),
                                           ((uint7)uVar35 >> 0x18) << 0x30);
                        auVar40 = CONCAT115(CONCAT101(SUB1610(auVar39 >> 0x30,0),uVar54),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar49 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar40 >> 0x20,0),uVar53),
                                                              ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)bVar59 << 8);
                        uVar20 = (undefined2)(uVar42 >> 0x10);
                        iVar22 = SUB164(CONCAT214(uVar20,CONCAT212(SUB162(auVar39 >> 0x30,0),SUB1612(auVar49,0))
                        ) >> 0x60,0);
                        uVar19 = (undefined2)uVar42;
                        auVar39 = CONCAT610(SUB166(CONCAT412(iVar22,CONCAT210(uVar19,SUB1610(auVar49,0))) >>
                                                                                                          0x50,0),CONCAT28(SUB162(auVar40 >> 0x20,0),SUB168(auVar49,0))
                        );
                        uVar18 = (undefined2)(uVar24 >> 0x10);
                        uVar2 = *puVar32;
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar37 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                             CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                 (CONCAT115(uVar60,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     uVar2,auVar36),0))) >> 0x70,0),
                                                                                                                                         CONCAT113(uVar58,SUB1613(CONCAT412(uVar2,auVar36),
                                                                                                                                                                  0))) >> 0x68,0),
                                                                                                                        CONCAT112((char)((uint)uVar2 >> 0x10),auVar36)) >>
                                                                                                                                                                        0x60,0),CONCAT111(uVar57,SUB1211(auVar36,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19(uVar56,SUB129(auVar36,0))) >> 0x48,0),
                                                                    CONCAT18((char)uVar2,uVar35)) >> 0x40,0),uVar55),
                                           ((uint7)uVar35 >> 0x18) << 0x30);
                        auVar50 = CONCAT115(CONCAT101(SUB1610(auVar37 >> 0x30,0),uVar54),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar40 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar50 >> 0x20,0),uVar53),
                                                              ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)bVar59 << 8);
                        iVar44 = SUB164(CONCAT214(uVar20,CONCAT212(SUB162(auVar37 >> 0x30,0),SUB1612(auVar40,0))
                        ) >> 0x60,0);
                        auVar37 = CONCAT610(SUB166(CONCAT412(iVar44,CONCAT210(uVar19,SUB1610(auVar40,0))) >>
                                                                                                          0x50,0),CONCAT28(SUB162(auVar50 >> 0x20,0),SUB168(auVar40,0))
                        );
                        uVar2 = *(undefined4 *)
                                ((longlong)local_110 + (-4 - (longlong)local_108) + (longlong)puVar30);
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar50 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                             CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                 (CONCAT115(uVar60,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     uVar2,auVar36),0))) >> 0x70,0),
                                                                                                                                         CONCAT113(uVar58,SUB1613(CONCAT412(uVar2,auVar36),
                                                                                                                                                                  0))) >> 0x68,0),
                                                                                                                        CONCAT112((char)((uint)uVar2 >> 0x10),auVar36)) >>
                                                                                                                                                                        0x60,0),CONCAT111(uVar57,SUB1211(auVar36,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19(uVar56,SUB129(auVar36,0))) >> 0x48,0),
                                                                    CONCAT18((char)uVar2,uVar35)) >> 0x40,0),uVar55),
                                           ((uint7)uVar35 >> 0x18) << 0x30);
                        auVar51 = CONCAT115(CONCAT101(SUB1610(auVar50 >> 0x30,0),uVar54),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar38 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar51 >> 0x20,0),uVar53),
                                                              ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)bVar59 << 8);
                        iVar45 = SUB164(CONCAT214(uVar20,CONCAT212(SUB162(auVar50 >> 0x30,0),SUB1612(auVar38,0))
                        ) >> 0x60,0);
                        auVar50 = CONCAT610(SUB166(CONCAT412(iVar45,CONCAT210(uVar19,SUB1610(auVar38,0))) >>
                                                                                                          0x50,0),CONCAT28(SUB162(auVar51 >> 0x20,0),SUB168(auVar38,0))
                        );
                        uVar2 = *(undefined4 *)
                                ((longlong)local_118 + (-4 - (longlong)local_108) + (longlong)puVar30);
                        uVar35 = CONCAT44(uVar2,uVar2);
                        auVar36 = CONCAT48(uVar2,uVar35);
                        auVar51 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(
                                                                                             CONCAT412(SUB164(CONCAT313(SUB163(CONCAT214(SUB162
                                                                                                                                                 (CONCAT115(uVar60,CONCAT114((char)((uint)uVar2 >>
                                                                                                                                                                                                0x18),
                                                                                                                                                                             SUB1614(CONCAT412(
                                                                                                                                                                                     uVar2,auVar36),0))) >> 0x70,0),
                                                                                                                                         CONCAT113(uVar58,SUB1613(CONCAT412(uVar2,auVar36),
                                                                                                                                                                  0))) >> 0x68,0),
                                                                                                                        CONCAT112((char)((uint)uVar2 >> 0x10),auVar36)) >>
                                                                                                                                                                        0x60,0),CONCAT111(uVar57,SUB1211(auVar36,0))) >>
                                                                                                                                                                                                                      0x58,0),CONCAT110((char)((uint)uVar2 >> 8),
                                                                                                                                                                                                                                        SUB1210(auVar36,0))) >> 0x50,0),
                                                                                     CONCAT19(uVar56,SUB129(auVar36,0))) >> 0x48,0),
                                                                    CONCAT18((char)uVar2,uVar35)) >> 0x40,0),uVar55),
                                           ((uint7)uVar35 >> 0x18) << 0x30);
                        auVar52 = CONCAT115(CONCAT101(SUB1610(auVar51 >> 0x30,0),uVar54),
                                            ((uint5)uVar35 >> 0x10) << 0x20);
                        auVar41 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar52 >> 0x20,0),uVar53),
                                                              ((uint3)uVar2 >> 8) << 0x10) >> 0x10,0),
                                            (ushort)uVar2 & 0xff | (ushort)bVar59 << 8);
                        iVar46 = SUB164(CONCAT214(uVar20,CONCAT212(SUB162(auVar51 >> 0x30,0),SUB1612(auVar41,0))
                        ) >> 0x60,0);
                        auVar51 = CONCAT610(SUB166(CONCAT412(iVar46,CONCAT210(uVar19,SUB1610(auVar41,0))) >>
                                                                                                          0x50,0),CONCAT28(SUB162(auVar52 >> 0x20,0),SUB168(auVar41,0))
                        );
                        auVar52 = divps(CONCAT88(SUB168(CONCAT412(CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))) ^
                                                                  CONCAT13(in_XMM1_Bd,
                                                                           CONCAT12(in_XMM1_Bc,
                                                                                    CONCAT11(in_XMM1_Bb,
                                                                                             in_XMM1_Ba))),
                                                                  CONCAT48((float)uVar29,
                                                                           CONCAT44((float)uVar29,(float)uVar25)
                                                                  )) >> 0x40,0),
                                                 CONCAT44((float)uVar26,(float)uVar25)),_DAT_140b7b3e0);
                        fVar17 = (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar39 >> 0x40,0),uVar18),
                                                         (SUB166(auVar49,0) >> 0x10) << 0x20) >> 0x20,0) *
                                 0.003921569 * local_110._4_4_ +
                                 (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar37 >> 0x40,0),uVar18),
                                                         (SUB166(auVar40,0) >> 0x10) << 0x20) >> 0x20,0) *
                                 0.003921569 * (float)local_110 +
                                 (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar50 >> 0x40,0),uVar18),
                                                         (SUB166(auVar38,0) >> 0x10) << 0x20) >> 0x20,0) *
                                 0.003921569 * local_118._4_4_ +
                                 (float)SUB164(CONCAT106(CONCAT82(SUB168(auVar51 >> 0x40,0),uVar18),
                                                         (SUB166(auVar41,0) >> 0x10) << 0x20) >> 0x20,0) *
                                 0.003921569 * (float)local_118 + SUB164(auVar52 >> 0x20,0) * fVar61;
                        auVar39 = maxps(ZEXT816(0) & (undefined  [16])0xffffffff,
                                        CONCAT412((float)iVar22 * 0.003921569 * local_110._4_4_ +
                                                  (float)iVar44 * 0.003921569 * (float)local_110 +
                                                  (float)iVar45 * 0.003921569 * local_118._4_4_ +
                                                  (float)iVar46 * 0.003921569 * (float)local_118 +
                                                  SUB164(auVar52 >> 0x60,0) * fVar61,
                                                  CONCAT48((float)(SUB164(auVar49,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * local_110._4_4_ +
                                                           (float)(SUB164(auVar40,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * (float)local_110 +
                                                           (float)(SUB164(auVar38,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * local_118._4_4_ +
                                                           (float)(SUB164(auVar41,0) & 0xffff | uVar24 << 0x10)
                                                           * 0.003921569 * (float)local_118 +
                                                           SUB164(auVar52 >> 0x40,0) * fVar61,
                                                           CONCAT17((char)((uint)fVar17 >> 0x18),
                                                                    CONCAT16((char)((uint)fVar17 >> 0x10),
                                                                             CONCAT15((char)((uint)fVar17 >> 8),
                                                                                      CONCAT14(SUB41(fVar17,0),
                                                                                               (float)SUB164(
                                                                                                       auVar39 >> 0x40,0) * 0.003921569 * local_110._4_4_
                                                                                               + (float)SUB164(auVar37 >> 0x40,0) * 0.003921569 *
                                                                                                 (float)local_110 +
                                                                                               (float)SUB164(auVar50 >> 0x40,0) * 0.003921569 *
                                                                                               local_118._4_4_ +
                                                                                               (float)SUB164(auVar51 >> 0x40,0) * 0.003921569 *
                                                                                               (float)local_118 + SUB164(auVar52,0) * fVar61)))
                                                           ))));
                        auVar39 = minps(auVar39,_DAT_140b7b240);
                        iVar22 = (int)(SUB164(auVar39,0) * 255.0 + 0.5);
                        uVar43 = (uint)(SUB164(auVar39 >> 0x20,0) * 255.0 + 0.5);
                        iVar44 = (int)(SUB164(auVar39 >> 0x40,0) * 255.0 + 0.5);
                        iVar45 = (int)(SUB164(auVar39 >> 0x60,0) * 255.0 + 0.5);
                        cVar47 = (char)((uint)iVar22 >> 0x10);
                        cVar48 = (char)((uint)iVar45 >> 0x10);
                        uVar21 = (ulonglong)
                                CONCAT16((char)(uVar43 >> 0x10),
                                         CONCAT15((char)(uVar43 >> 8),CONCAT14((char)uVar43,iVar44)));
                        uVar25 = ((ulonglong)uVar43 & 0xff000000) << 0x20 | uVar21;
                        Var14 = CONCAT19((char)((uint)iVar22 >> 8),CONCAT18((char)iVar22,uVar25));
                        auVar36 = CONCAT111((char)((uint)iVar22 >> 0x18),CONCAT110(cVar47,Var14));
                        auVar15 = CONCAT113((char)((uint)iVar45 >> 8),CONCAT112((char)iVar45,auVar36));
                        sVar10 = (short)iVar44;
                        cVar7 = (0 < sVar10) * (sVar10 < 0xff) * (char)iVar44 - (0xff < sVar10);
                        sVar10 = (short)(uVar21 >> 0x10);
                        sVar11 = (short)(uVar21 >> 0x20);
                        cVar6 = (0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x20) - (0xff < sVar11);
                        sVar11 = (short)(uVar25 >> 0x30);
                        sVar12 = (short)((unkuint10)Var14 >> 0x40);
                        cVar9 = (0 < sVar12) * (sVar12 < 0xff) * (char)iVar22 - (0xff < sVar12);
                        sVar12 = SUB122(auVar36 >> 0x50,0);
                        sVar13 = SUB142(auVar15 >> 0x60,0);
                        cVar8 = (0 < sVar13) * (sVar13 < 0xff) * (char)iVar45 - (0xff < sVar13);
                        sVar13 = SUB162(CONCAT115((char)((uint)iVar45 >> 0x18),CONCAT114(cVar48,auVar15)) >>
                                                                                                          0x70,0);
                        sVar10 = CONCAT11((0 < sVar10) * (sVar10 < 0xff) * (char)(uVar21 >> 0x10) -
                                          (0xff < sVar10),cVar7);
                        uVar2 = CONCAT13((0 < sVar11) * (sVar11 < 0xff) * (char)(uVar21 >> 0x30) -
                                         (0xff < sVar11),CONCAT12(cVar6,sVar10));
                        uVar16 = CONCAT15((0 < sVar12) * (sVar12 < 0xff) * cVar47 - (0xff < sVar12),
                                          CONCAT14(cVar9,uVar2));
                        in_XMM1_Ba = (0 < sVar10) * (sVar10 < 0xff) * cVar7 - (0xff < sVar10);
                        sVar10 = (short)((uint)uVar2 >> 0x10);
                        in_XMM1_Bb = (0 < sVar10) * (sVar10 < 0xff) * cVar6 - (0xff < sVar10);
                        sVar10 = (short)((uint6)uVar16 >> 0x20);
                        in_XMM1_Bc = (0 < sVar10) * (sVar10 < 0xff) * cVar9 - (0xff < sVar10);
                        sVar10 = (short)(CONCAT17((0 < sVar13) * (sVar13 < 0xff) * cVar48 - (0xff < sVar13),
                                                  CONCAT16(cVar8,uVar16)) >> 0x30);
                        in_XMM1_Bd = (0 < sVar10) * (sVar10 < 0xff) * cVar8 - (0xff < sVar10);
                        *(uint *)((longlong)puVar31 + (-4 - (longlong)local_108) + (longlong)puVar30) =
                                CONCAT13(in_XMM1_Bd,CONCAT12(in_XMM1_Bc,CONCAT11(in_XMM1_Bb,in_XMM1_Ba)));
                        puVar32 = puVar30;
                        uVar25 = (ulonglong)uVar27;
                    } while (uVar27 < 0x10);
                    puVar31 = (undefined4 *)((longlong)puVar31 + (ulonglong)local_184);
                    uVar25 = uVar34;
                    do {
                        puVar1 = local_f8 + uVar25;
                        uVar25 = uVar25 + 1;
                        (&lStack288)[uVar25] = (&lStack288)[uVar25] + (ulonglong)*puVar1;
                    } while (uVar25 < 4);
                    uVar27 = (int)uVar26 + 1;
                    uVar26 = (ulonglong)uVar27;
                } while (uVar27 < 0x10);
                puVar23 = (undefined4 *)((longlong)puVar23 + (ulonglong)local_188);
                uVar26 = uVar34;
                do {
                    puVar1 = local_e8 + uVar26;
                    uVar26 = uVar26 + 1;
                    *(ulonglong *)(&local_188 + uVar26 * 2) =
                            *(longlong *)(&local_188 + uVar26 * 2) + (ulonglong)*puVar1;
                } while (uVar26 < 4);
                uVar27 = (int)uVar29 + 1;
                uVar29 = (ulonglong)uVar27;
            } while (uVar27 < 0x10);
        }
        (**(code **)(**(longlong **)(param_1 + 0x19b8) + 0x50))(*(longlong **)(param_1 + 0x19b8),0);
        if (uVar33 != 0) {
            pplVar28 = local_138;
            uVar29 = (ulonglong)uVar33;
            do {
                (**(code **)(*(longlong *)(*pplVar28)[0x3d] + 0x50))((longlong *)(*pplVar28)[0x3d],0);
                pplVar28 = pplVar28 + 1;
                uVar29 = uVar29 - 1;
            } while (uVar29 != 0);
        }
    }
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack440);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407ce760(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    int *piVar3;
    ulonglong uVar4;
    uint uVar5;
    uint uVar6;
    longlong **pplVar7;
    uint uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined auStack424 [32];
    undefined8 local_188;
    undefined8 local_180;
    longlong local_178;
    undefined local_168 [16];
    undefined4 local_158 [2];
    undefined8 local_150;
    uint local_148;
    undefined4 local_144;
    undefined4 local_140 [2];
    undefined8 local_138;
    uint local_130;
    undefined4 local_12c;
    undefined4 local_128 [2];
    undefined8 local_120;
    uint local_118;
    undefined4 local_114;
    undefined4 local_110 [2];
    undefined8 local_108;
    uint local_100;
    undefined4 local_fc;
    undefined local_f8 [16];
    undefined local_e8 [16];
    undefined local_d8 [16];
    undefined local_c8 [16];
    longlong *local_b8 [4];
    float local_98;
    undefined4 uStack148;
    undefined4 uStack144;
    undefined4 uStack140;
    undefined local_88 [16];
    undefined local_78 [16];
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    local_178 = param_1;
    iVar2 = (**(code **)(*DAT_140c65670 + 0x260))();
    if ((iVar2 == 0) && (iVar2 = (**(code **)(*DAT_140c65670 + 600))(), iVar2 != 0)) {
        piVar3 = (int *)(**(code **)(*DAT_140c65670 + 0x2c8))();
        if (*piVar3 == 0) {
            FUN_1407cdd20(param_1);
        }
        else {
            (**(code **)(*DAT_140c65670 + 0x1f8))();
            (**(code **)(*DAT_140c65670 + 0x200))();
            (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
            (**(code **)(*DAT_140c65670 + 0x120))();
            (**(code **)(*DAT_140c65670 + 400))(DAT_140c65670,7);
            (**(code **)(*DAT_140c65670 + 0x198))(DAT_140c65670,0);
            plVar1 = *(longlong **)(param_1 + 0x530);
            uVar9 = 0;
            uVar10 = 0;
            uVar11 = 0;
            uVar12 = 0;
            local_98 = 1.0;
            uStack148 = 0;
            uStack144 = 0;
            uStack140 = 0;
            uVar6 = 0;
            local_88 = ZEXT816(0);
            for (; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[0x11]) {
                local_188._4_4_ = (uint)((ulonglong)local_188 >> 0x20);
                local_180._4_4_ = (uint)(local_180 >> 0x20);
                if (3 < uVar6) break;
                iVar2 = (**(code **)(*plVar1 + 0x1c0))(plVar1);
                if (iVar2 != 0) {
                    local_168 = local_168 & (undefined  [16])0xffffffff00000000;
                    iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_168);
                    if (iVar2 != 0) {
                        uVar4 = (ulonglong)uVar6;
                        uVar6 = uVar6 + 1;
                        *(undefined4 *)(local_88 + uVar4 * 4) = *(undefined4 *)(plVar1 + 0x22);
                        local_b8[uVar4] = plVar1;
                        local_98 = local_98 - *(float *)(plVar1 + 0x22);
                    }
                }
            }
            (**(code **)(*DAT_140c65670 + 0x140))(DAT_140c65670,*(undefined8 *)(param_1 + 0x1668),0);
            local_180 = (ulonglong)local_180._4_4_ << 0x20;
            local_188 = (undefined4 *)((ulonglong)local_188._4_4_ << 0x20);
            local_f8 = CONCAT412(_DAT_140c783c0,
                                 CONCAT48(_DAT_140c783b0,CONCAT44(_DAT_140c783a0,_DAT_140c78390)));
            local_e8 = CONCAT412(uRam0000000140c783c4,ZEXT412(uRam0000000140c783a4) << 0x20);
            local_d8 = CONCAT412(uRam0000000140c783c8,
                                 CONCAT48(uRam0000000140c783b8,
                                          CONCAT44(uRam0000000140c783a8,uRam0000000140c78398)));
            local_c8 = CONCAT412(uRam0000000140c783cc,ZEXT412(uRam0000000140c783ac) << 0x20);
            (**(code **)(*DAT_140c65670 + 0x148))(DAT_140c65670,0x40,local_f8,0);
            (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_1 + 0x16a0),uVar6);
            uVar13 = 0x41700000;
            uVar14 = 0x41700000;
            uVar15 = 0x41700000;
            uVar16 = 0x41700000;
            uVar8 = 2;
            do {
                uVar5 = 0;
                local_150 = *(undefined8 *)(param_1 + 0x19b8);
                local_188 = local_110;
                local_110[0] = 3;
                local_fc = 0;
                local_128[0] = 3;
                local_114 = 0;
                local_158[0] = 3;
                local_144 = 0;
                local_140[0] = 3;
                local_12c = 0;
                local_148 = uVar8 - 1;
                local_138 = local_150;
                local_130 = uVar8 - 2;
                local_120 = local_150;
                local_118 = uVar8;
                local_108 = local_150;
                local_100 = uVar8 + 1;
                (**(code **)(*DAT_140c65670 + 0x208))(DAT_140c65670,local_140,local_158,local_128);
                local_168 = CONCAT412(uVar12,CONCAT48(uVar11,CONCAT44(uVar10,uVar9)));
                local_188 = (undefined4 *)((ulonglong)local_188 & 0xffffffff00000000);
                (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_168);
                if (uVar6 != 0) {
                    pplVar7 = local_b8;
                    do {
                        local_188 = (undefined4 *)0x0;
                        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,uVar5,(*pplVar7)[0x3d],0);
                        uVar5 = uVar5 + 1;
                        pplVar7 = pplVar7 + 1;
                        param_1 = local_178;
                    } while (uVar5 < uVar6);
                }
                local_180 = local_180 & 0xffffffff00000000;
                local_188 = (undefined4 *)((ulonglong)local_188 & 0xffffffff00000000);
                local_78 = CONCAT412((float)(ulonglong)(uVar8 + 1),
                                     CONCAT48((float)(ulonglong)uVar8,
                                              CONCAT44((float)(ulonglong)(uVar8 - 1),
                                                       (float)(ulonglong)(uVar8 - 2))));
                local_78 = divps(local_78,CONCAT412(uVar16,CONCAT48(uVar15,CONCAT44(uVar14,uVar13))));
                (**(code **)(*DAT_140c65670 + 0x180))(SUB168(local_78,0),DAT_140c65670,0x30,&local_98,0);
                local_180 = 0;
                local_188 = (undefined4 *)0x0;
                (**(code **)(*DAT_140c65670 + 0x298))(DAT_140c65670,0xffffffff);
                (**(code **)(*DAT_140c65670 + 0x2a0))();
                uVar5 = uVar8 + 2;
                uVar8 = uVar8 + 4;
            } while (uVar5 < 0x10);
            (**(code **)(*DAT_140c65670 + 0x228))();
            (**(code **)(*DAT_140c65670 + 0x220))();
        }
    }
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack424);
    return;
}



void FUN_1407cfcb0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
    undefined4 *puVar1;
    longlong *plVar2;
    longlong *plVar3;
    float fVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined auStack344 [32];
    undefined4 local_138;
    undefined4 local_130;
    undefined8 local_128;
    undefined8 local_120;
    float local_118;
    float local_114;
    undefined4 local_110;
    undefined4 local_10c;
    undefined4 local_108;
    undefined4 local_104;
    undefined8 local_100;
    undefined local_f8 [104];
    longlong local_90;
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack344;
    local_114 = *(float *)(param_2 + 0x38) / (*(float *)(param_2 + 0x28) + 1.0);
    local_118 = *(float *)(param_2 + 0x38) / *(float *)(param_2 + 0x28) - 1e-05;
    puVar1 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x248))();
    fVar5 = 0.0;
    local_110 = *puVar1;
    local_10c = puVar1[1];
    local_108 = puVar1[2];
    local_104 = puVar1[3];
    uVar6 = puVar1[4];
    uVar7 = puVar1[5];
    local_100 = 0;
    (**(code **)(*DAT_140c65670 + 0x250))(DAT_140c65670,&local_110);
    plVar2 = *(longlong **)(param_1 + 0x530);
    plVar3 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
        do {
            fVar4 = *(float *)((longlong)plVar2 + 0x1d4) * *(float *)(plVar2 + 0x21);
            if (fVar5 < fVar4) {
                plVar3 = plVar2;
                fVar5 = fVar4;
            }
            plVar2 = (longlong *)plVar2[0x11];
        } while (plVar2 != (longlong *)0x0);
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0xa0))(plVar3,param_2,param_3);
        }
    }
    (**(code **)(**(longlong **)(param_1 + 0xba8) + 0x30))
            (*(longlong **)(param_1 + 0xba8),*(undefined4 *)(param_1 + 0x528),0);
    local_138 = 0;
    (**(code **)(**(longlong **)(param_1 + 0xba8) + 0x50))
            (*(longlong **)(param_1 + 0xba8),param_3,param_4,&local_118);
    FUN_1407c1fe0(local_f8);
    local_120 = 0;
    local_128 = 0;
    local_130 = 3;
    local_138 = 0;
    (**(code **)(**(longlong **)(param_1 + 0xba8) + 0x78))
            (*(longlong **)(param_1 + 0xba8),local_f8,param_2,param_1 + 0x540);
    if (local_90 != 0) {
        FUN_1407c2170(local_f8,5,0xffffffff);
    }
    local_100 = CONCAT44(uVar7,uVar6);
    (**(code **)(*DAT_140c65670 + 0x250))(DAT_140c65670,&local_110);
    FUN_1407c20b0(local_f8);
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack344);
    return;
}



void FUN_1407cfed0(longlong param_1,longlong param_2,undefined4 *param_3)

{
    undefined4 *puVar1;
    longlong *plVar2;
    longlong *plVar3;
    float fVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined auStack552 [32];
    undefined4 local_208;
    undefined4 local_200;
    undefined8 local_1f8;
    undefined8 local_1f0;
    float local_1e8;
    float local_1e4;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined4 local_1c8;
    undefined4 uStack452;
    undefined4 uStack448;
    undefined4 uStack444;
    undefined4 local_1b8;
    undefined4 uStack436;
    undefined4 uStack432;
    undefined4 uStack428;
    undefined4 local_1a8;
    undefined8 uStack420;
    undefined4 uStack412;
    undefined local_198 [64];
    undefined4 local_158;
    undefined4 local_154;
    undefined4 local_150;
    undefined4 local_14c;
    undefined8 local_148;
    undefined local_138 [104];
    longlong local_d0;
    undefined4 *local_a8 [10];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack552;
    local_a8[0] = &local_1d8;
    fVar4 = 0.0;
    local_1e4 = *(float *)(param_2 + 0x38) / (*(float *)(param_2 + 0x28) + 1.0);
    local_1e8 = *(float *)(param_2 + 0x38) / *(float *)(param_2 + 0x28) - 1e-05;
    local_1c8 = param_3[4];
    uStack452 = param_3[5];
    uStack448 = param_3[6];
    uStack444 = param_3[7];
    uStack412 = param_3[0xf];
    local_1d8 = *param_3;
    uStack468 = param_3[1];
    uStack464 = param_3[2];
    uStack460 = param_3[3];
    uStack420 = 0;
    local_1a8 = 0;
    local_1b8 = param_3[8];
    uStack436 = param_3[9];
    uStack432 = param_3[10];
    uStack428 = param_3[0xb];
    FUN_1401afc20(local_a8,local_198);
    puVar1 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x248))();
    local_158 = *puVar1;
    local_154 = puVar1[1];
    local_150 = puVar1[2];
    local_14c = puVar1[3];
    uVar5 = puVar1[4];
    uVar6 = puVar1[5];
    local_148 = 0;
    (**(code **)(*DAT_140c65670 + 0x250))(DAT_140c65670,&local_158);
    plVar2 = *(longlong **)(param_1 + 0x530);
    plVar3 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
        do {
            if (fVar4 < *(float *)((longlong)plVar2 + 0x10c)) {
                plVar3 = plVar2;
                fVar4 = *(float *)((longlong)plVar2 + 0x10c);
            }
            plVar2 = (longlong *)plVar2[0x11];
        } while (plVar2 != (longlong *)0x0);
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0xa8))(plVar3,param_2,&local_1d8);
        }
    }
    (**(code **)(**(longlong **)(param_1 + 0xba8) + 0x30))
            (*(longlong **)(param_1 + 0xba8),*(undefined4 *)(param_1 + 0x528),0);
    local_208 = 0;
    (**(code **)(**(longlong **)(param_1 + 0xba8) + 0x50))
            (*(longlong **)(param_1 + 0xba8),&local_1d8,local_198,&local_1e8);
    FUN_1407c1fe0(local_138);
    local_1f0 = 0;
    local_1f8 = 0;
    local_200 = 3;
    local_208 = 0;
    (**(code **)(**(longlong **)(param_1 + 0xba8) + 0x78))
            (*(longlong **)(param_1 + 0xba8),local_138,param_2,param_1 + 0x540);
    if (local_d0 != 0) {
        FUN_1407c2170(local_138,5,0xffffffff);
    }
    local_148 = CONCAT44(uVar6,uVar5);
    (**(code **)(*DAT_140c65670 + 0x250))(DAT_140c65670,&local_158);
    FUN_1407c20b0(local_138);
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack552);
    return;
}



undefined4 * FUN_1407d0500(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    return param_1;
}



void FUN_1407d0750(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined4 *puVar1;
    int iVar2;
    undefined4 *puVar3;
    longlong lVar4;
    undefined4 auStack264 [2];
    undefined8 uStack256;
    undefined auStack248 [28];
    undefined4 auStack220 [5];
    undefined4 local_c8;
    longlong **local_c0;
    longlong *local_b8;
    undefined4 uStack172;
    undefined local_a8 [144];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    local_c0 = &local_b8;
    local_c8 = 0;
    auStack220[3] = 0;
    auStack220[1] = 1;
    uStack256 = 0x1407d07ac;
    iVar2 = (**(code **)(*DAT_140c65670 + 0x70))(DAT_140c65670,param_2,0,0);
    if (-1 < iVar2) {
        uStack256 = 0x1407d07c1;
        iVar2 = (**(code **)(*local_b8 + 0x30))();
        if (iVar2 == 0) {
            uStack256 = 0x1407d07d5;
            FUN_1400035b0(0x1b,0,0,param_2);
        }
        else {
            uStack256 = 0x1407d07e9;
            iVar2 = (**(code **)(*local_b8 + 0x70))(local_b8,local_a8);
            if (local_b8 != (longlong *)0x0) {
                uStack256 = 0x1407d07fb;
                (**(code **)(*local_b8 + 8))();
            }
            if (-1 < iVar2) {
                lVar4 = 9;
                puVar3 = (undefined4 *)(param_3 + 0x60);
                do {
                    puVar1 = puVar3 + 1;
                    puVar3[-0x18] = *(undefined4 *)((longlong)auStack264 + -param_3 + (longlong)puVar3);
                    puVar3[-0xc] = *(undefined4 *)(auStack248 + (0x1c - param_3) + (longlong)puVar1);
                    *puVar3 = *(undefined4 *)(local_a8 + -param_3 + -4 + (longlong)puVar1);
                    lVar4 = lVar4 + -1;
                    puVar3 = puVar1;
                } while (lVar4 != 0);
            }
        }
    }
    uStack256 = 0x1407d0851;
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack248);
    return;
}



undefined8 FUN_1407d0870(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x19d8))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x19d0) + (uVar3 % *(ulonglong *)(param_1 + 0x19c8)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1407d08d1:
            uVar4 = FUN_140232180(local_res10[0]);
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x19e0))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_1407d08d1;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_1407d0910(longlong param_1,undefined4 *param_2)

{
    ulonglong **ppuVar1;
    longlong *plVar2;
    ulonglong **ppuVar3;
    undefined4 uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong *puVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;

    plVar2 = (longlong *)(param_1 + 0x19c0);
    uVar6 = (**(code **)(param_1 + 0x19d8))(param_2);
    puVar9 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x19d0) + (uVar6 % *(ulonglong *)(param_1 + 0x19c8)) * 8);
    do {
        if (puVar9 == (ulonglong *)0x0) {
            LAB_1407d096c:
            puVar7 = (ulonglong *)FUN_14018b280(0x20);
            puVar8 = (ulonglong *)0x0;
            puVar9 = puVar8;
            if (puVar7 != (ulonglong *)0x0) {
                puVar7[2] = 0;
                puVar7[3] = 0;
                puVar7[1] = 0;
                puVar9 = puVar7;
            }
            ppuVar3 = (ulonglong **)(param_1 + 0x19e8);
            if (puVar9[2] == 0) {
                puVar9[2] = (ulonglong)ppuVar3;
                ppuVar1 = (ulonglong **)(puVar9 + 3);
                *ppuVar1 = *ppuVar3;
                *ppuVar3 = puVar9;
                if (*ppuVar1 != (ulonglong *)0x0) {
                    (*ppuVar1)[2] = (ulonglong)ppuVar1;
                }
            }
            if (*plVar2 == *(longlong *)(param_1 + 0x19c8)) {
                FUN_1400290d0(plVar2);
            }
            uVar6 = (**(code **)(param_1 + 0x19d8))(param_2);
            ppuVar3 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x19d0) + (uVar6 % *(ulonglong *)(param_1 + 0x19c8)) * 8);
            puVar7 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar7 != (ulonglong *)0x0) {
                puVar8 = *ppuVar3;
                *puVar7 = uVar6;
                puVar7[1] = (ulonglong)puVar8;
                uVar4 = *param_2;
                puVar7[3] = (ulonglong)puVar9;
                *(undefined4 *)(puVar7 + 2) = uVar4;
                puVar8 = puVar7;
            }
            *ppuVar3 = puVar8;
            *plVar2 = *plVar2 + 1;
            LAB_1407d0a2a:
            FUN_1403514f0(puVar9,param_2,&PTR_u_SkyTrackCloudSet_140ad0898);
            return 0;
        }
        if ((uVar6 == *puVar9) &&
            (iVar5 = (**(code **)(param_1 + 0x19e0))(param_2,puVar9 + 2), iVar5 != 0)) {
            if ((ulonglong **)(puVar9 + 3) != (ulonglong **)0x0) {
                puVar9 = (ulonglong *)puVar9[3];
                goto LAB_1407d0a2a;
            }
            goto LAB_1407d096c;
        }
        puVar9 = (ulonglong *)puVar9[1];
    } while( true );
}



undefined8 FUN_1407d0a60(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x1a08))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1a00) + (uVar3 % *(ulonglong *)(param_1 + 0x19f8)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1407d0ac1:
            uVar4 = FUN_140231d40(local_res10[0]);
            return uVar4;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x1a10))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                return *(undefined8 *)(puVar1[3] + 8);
            }
            goto LAB_1407d0ac1;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_1407d0b00(longlong param_1,undefined4 *param_2)

{
    ulonglong **ppuVar1;
    longlong *plVar2;
    ulonglong **ppuVar3;
    undefined4 uVar4;
    int iVar5;
    ulonglong uVar6;
    ulonglong *puVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;

    plVar2 = (longlong *)(param_1 + 0x19f0);
    uVar6 = (**(code **)(param_1 + 0x1a08))(param_2);
    puVar9 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x1a00) + (uVar6 % *(ulonglong *)(param_1 + 0x19f8)) * 8);
    do {
        if (puVar9 == (ulonglong *)0x0) {
            LAB_1407d0b5c:
            puVar7 = (ulonglong *)FUN_14018b280(0x20);
            puVar8 = (ulonglong *)0x0;
            puVar9 = puVar8;
            if (puVar7 != (ulonglong *)0x0) {
                puVar7[2] = 0;
                puVar7[3] = 0;
                puVar7[1] = 0;
                puVar9 = puVar7;
            }
            ppuVar3 = (ulonglong **)(param_1 + 0x1a18);
            if (puVar9[2] == 0) {
                puVar9[2] = (ulonglong)ppuVar3;
                ppuVar1 = (ulonglong **)(puVar9 + 3);
                *ppuVar1 = *ppuVar3;
                *ppuVar3 = puVar9;
                if (*ppuVar1 != (ulonglong *)0x0) {
                    (*ppuVar1)[2] = (ulonglong)ppuVar1;
                }
            }
            if (*plVar2 == *(longlong *)(param_1 + 0x19f8)) {
                FUN_1400290d0(plVar2);
            }
            uVar6 = (**(code **)(param_1 + 0x1a08))(param_2);
            ppuVar3 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x1a00) + (uVar6 % *(ulonglong *)(param_1 + 0x19f8)) * 8);
            puVar7 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar7 != (ulonglong *)0x0) {
                puVar8 = *ppuVar3;
                *puVar7 = uVar6;
                puVar7[1] = (ulonglong)puVar8;
                uVar4 = *param_2;
                puVar7[3] = (ulonglong)puVar9;
                *(undefined4 *)(puVar7 + 2) = uVar4;
                puVar8 = puVar7;
            }
            *ppuVar3 = puVar8;
            *plVar2 = *plVar2 + 1;
            LAB_1407d0c1a:
            FUN_1403514f0(puVar9,param_2,&PTR_u_SkyCloudSet_140ad5fb8);
            return 0;
        }
        if ((uVar6 == *puVar9) &&
            (iVar5 = (**(code **)(param_1 + 0x1a10))(param_2,puVar9 + 2), iVar5 != 0)) {
            if ((ulonglong **)(puVar9 + 3) != (ulonglong **)0x0) {
                puVar9 = (ulonglong *)puVar9[3];
                goto LAB_1407d0c1a;
            }
            goto LAB_1407d0b5c;
        }
        puVar9 = (ulonglong *)puVar9[1];
    } while( true );
}



undefined8 FUN_1407d0c50(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + uVar3 * 8);
            while (lVar2 != 0) {
                plVar1 = (longlong *)(lVar2 + 0x18);
                lVar2 = *(longlong *)(lVar2 + 8);
                if (*plVar1 != 0) {
                    FUN_14034dc20(*plVar1,1);
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 8));
    }
    return 1;
}



void FUN_1407d0cc0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;

    lVar2 = *(longlong *)(param_1 + 8);
    if (lVar2 != 0) {
        iVar4 = *(int *)(lVar2 + -8) + -1;
        if (-1 < iVar4) {
            puVar3 = (undefined8 *)(lVar2 + 0x10 + (longlong)*(int *)(lVar2 + -8) * 0x18);
            do {
                puVar1 = puVar3 + -4;
                puVar3 = puVar3 + -3;
                FUN_14018b900(*puVar1,0);
                FUN_14018b900(*puVar3);
                iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
        }
        FUN_14018b900(lVar2 + -8,0);
    }
    return;
}



longlong FUN_1407d0d40(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;

    iVar2 = *(int *)(param_1 + -8) + -1;
    if (-1 < iVar2) {
        puVar1 = (undefined8 *)((longlong)*(int *)(param_1 + -8) * 0x30 + 0x28 + param_1);
        do {
            FUN_14018b900(puVar1[-7],0);
            FUN_14018b900(puVar1[-6]);
            FUN_14018b900(puVar1[-9]);
            iVar2 = iVar2 + -1;
            puVar1 = puVar1 + -6;
        } while (-1 < iVar2);
    }
    FUN_14018b900(param_1 + -8,0);
    return param_1 + -8;
}



undefined4 * FUN_1407d0dc0(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 *puVar6;
    longlong lVar7;

    *param_1 = *param_2;
    param_1[1] = param_2[1];
    puVar6 = param_2 + 4;
    lVar7 = 0x10;
    do {
        uVar2 = *puVar6;
        uVar3 = puVar6[1];
        uVar4 = puVar6[2];
        uVar5 = puVar6[3];
        puVar6 = puVar6 + 4;
        puVar1 = (undefined4 *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar6);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    return param_1;
}



void FUN_1407d0e00(longlong *param_1,undefined8 param_2,code *param_3)

{
    longlong **pplVar1;
    longlong lVar2;
    longlong *plVar3;
    bool bVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;

    lVar10 = 1;
    LAB_1407d0e30:
    lVar6 = *param_1;
    bVar4 = true;
    lVar2 = lVar10;
    lVar8 = lVar6;
    do {
        for (; (lVar7 = lVar10, lVar9 = lVar10, lVar6 != 0 && (lVar2 != 0)); lVar2 = lVar2 + -1) {
            lVar6 = *(longlong *)(lVar6 + 0x88);
        }
        while( true ) {
            if (lVar6 == 0) goto LAB_1407d0ee3;
            if (lVar7 == 0) goto LAB_1407d0ef0;
            if (lVar9 == 0) break;
            iVar5 = (*param_3)(lVar8,lVar6,0);
            if (iVar5 < 1) {
                lVar8 = *(longlong *)(lVar8 + 0x88);
                lVar7 = lVar7 + -1;
            }
            else {
                pplVar1 = (longlong **)(lVar6 + 0x80);
                lVar9 = lVar9 + -1;
                **pplVar1 = *(longlong *)(lVar6 + 0x88);
                lVar2 = **pplVar1;
                if (lVar2 != 0) {
                    *(longlong **)(lVar2 + 0x80) = *pplVar1;
                }
                plVar3 = *(longlong **)(lVar8 + 0x80);
                *(longlong *)(lVar6 + 0x88) = lVar8;
                *pplVar1 = plVar3;
                *plVar3 = lVar6;
                *(longlong **)(lVar8 + 0x80) = (longlong *)(lVar6 + 0x88);
                lVar6 = lVar2;
            }
        }
        LAB_1407d0f06:
        bVar4 = false;
        lVar2 = lVar10;
        lVar8 = lVar6;
    } while( true );
    LAB_1407d0ef0:
    if (lVar9 == 0) goto LAB_1407d0f06;
    lVar6 = *(longlong *)(lVar6 + 0x88);
    lVar9 = lVar9 + -1;
    if (lVar6 == 0) goto LAB_1407d0ee3;
    goto LAB_1407d0ef0;
    LAB_1407d0ee3:
    if (bVar4) {
        return;
    }
    lVar10 = lVar10 * 2;
    goto LAB_1407d0e30;
}



undefined8 FUN_1407d0f30(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined8 uVar1;

    uVar1 = FUN_1407d7270(param_1,param_2,param_3 + 8);
    if (-1 < (int)uVar1) {
        uVar1 = FUN_1407d7380(param_1,param_2,param_3 + 0x18);
        if (-1 < (int)uVar1) {
            uVar1 = FUN_1407d7470(param_1,param_2,param_3 + 0x28);
            if (-1 < (int)uVar1) {
                uVar1 = FUN_1407d7470(param_1,param_2,param_3 + 0x38);
                if (-1 < (int)uVar1) {
                    uVar1 = FUN_1407d7470(param_1,param_2,param_3 + 0x48);
                    if (-1 < (int)uVar1) {
                        uVar1 = FUN_1407d7560(param_1,param_2,param_3 + 0x68);
                        if (-1 < (int)uVar1) {
                            uVar1 = FUN_1407d75f0(param_1,param_2,param_3 + 0x80);
                            if (-1 < (int)uVar1) {
                                uVar1 = FUN_1407d7680(param_1,param_2,param_3 + 0x58);
                                if (-1 < (int)uVar1) {
                                    uVar1 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar1;
}



undefined8 FUN_1407d1000(ulonglong *param_1,longlong param_2,int *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    int *piVar6;

    if (*param_3 != 0x58534b59) {
        return 0xa01b0001;
    }
    if (param_3[1] != 0x10) {
        return 0xa01b0002;
    }
    uVar3 = FUN_1402ca420(param_1,param_2,param_3 + 6);
    if ((((((-1 < (int)uVar3) && (uVar3 = FUN_1407d0f30(param_1), -1 < (int)uVar3)) &&
           (uVar3 = FUN_1407d0f30(param_1,param_2,param_3 + 0x30), -1 < (int)uVar3)) &&
          ((uVar3 = FUN_1407d0f30(param_1,param_2,param_3 + 0x56), -1 < (int)uVar3 &&
                                                                   (uVar3 = FUN_1407d0f30(param_1,param_2,param_3 + 0x7c), -1 < (int)uVar3)))) &&
         ((uVar3 = FUN_1407d7800(param_1,param_2,param_3 + 0xa2), -1 < (int)uVar3 &&
                                                                  ((uVar3 = FUN_1407d7770(param_1,param_2,param_3 + 0xa8), -1 < (int)uVar3 &&
                                                                                                                           (uVar3 = FUN_1407d7800(param_1,param_2,param_3 + 0xae), -1 < (int)uVar3)))))) &&
        ((uVar3 = FUN_1407d7890(param_1,param_2,param_3 + 0xb4), -1 < (int)uVar3 &&
                                                                 ((uVar3 = FUN_1407d7920(param_1,param_2,param_3 + 0xba), -1 < (int)uVar3 &&
                                                                                                                          (uVar3 = FUN_1407d7a20(param_1,param_2,param_3 + 0xbe), -1 < (int)uVar3)))))) {
        uVar1 = *(longlong *)(param_3 + 0xc6) + param_2;
        if (*param_1 <= uVar1) {
            uVar2 = param_3[0xc4];
            uVar4 = *(longlong *)(param_3 + 0xc6) + (ulonglong)uVar2 * 4 + param_2;
            if (uVar4 < param_1[1] || uVar4 == param_1[1]) {
                uVar5 = 0;
                uVar4 = uVar5;
                if (uVar2 != 0) {
                    uVar4 = uVar1;
                }
                *(ulonglong *)(param_3 + 0xc6) = uVar4;
                uVar1 = *(longlong *)(param_3 + 200) + param_2;
                if ((*param_1 <= uVar1) &&
                    (uVar4 = *(longlong *)(param_3 + 200) + (ulonglong)uVar2 * 4 + param_2,
                            uVar4 < param_1[1] || uVar4 == param_1[1])) {
                    uVar4 = uVar5;
                    if (uVar2 != 0) {
                        uVar4 = uVar1;
                    }
                    *(ulonglong *)(param_3 + 200) = uVar4;
                    uVar1 = *(longlong *)(param_3 + 0xcc) + param_2;
                    if (*param_1 <= uVar1) {
                        uVar2 = param_3[0xca];
                        uVar4 = *(longlong *)(param_3 + 0xcc) + (ulonglong)uVar2 * 4 + param_2;
                        if (uVar4 < param_1[1] || uVar4 == param_1[1]) {
                            uVar4 = uVar5;
                            if (uVar2 != 0) {
                                uVar4 = uVar1;
                            }
                            *(ulonglong *)(param_3 + 0xcc) = uVar4;
                            uVar1 = *(longlong *)(param_3 + 0xce) + param_2;
                            if ((*param_1 <= uVar1) &&
                                (uVar4 = *(longlong *)(param_3 + 0xce) + (ulonglong)uVar2 * 4 + param_2,
                                        uVar4 < param_1[1] || uVar4 == param_1[1])) {
                                uVar4 = uVar5;
                                if (uVar2 != 0) {
                                    uVar4 = uVar1;
                                }
                                *(ulonglong *)(param_3 + 0xce) = uVar4;
                                uVar3 = FUN_1402d4b30(param_1,param_2,param_3 + 0xd0);
                                if ((int)uVar3 < 0) {
                                    return uVar3;
                                }
                                uVar3 = FUN_1402ca420(param_1,param_2,param_3 + 0xd4);
                                if ((int)uVar3 < 0) {
                                    return uVar3;
                                }
                                uVar3 = FUN_1407d7800(param_1);
                                if ((int)uVar3 < 0) {
                                    return uVar3;
                                }
                                uVar3 = FUN_1402ca420(param_1,param_2,param_3 + 0xde);
                                if ((int)uVar3 < 0) {
                                    return uVar3;
                                }
                                uVar3 = FUN_1402ca420();
                                if ((int)uVar3 < 0) {
                                    return uVar3;
                                }
                                uVar1 = *(longlong *)(param_3 + 0xe8) + param_2;
                                if (*param_1 <= uVar1) {
                                    uVar2 = param_3[0xe6];
                                    uVar4 = *(longlong *)(param_3 + 0xe8) + (ulonglong)uVar2 * 4 + param_2;
                                    if (uVar4 < param_1[1] || uVar4 == param_1[1]) {
                                        uVar4 = uVar5;
                                        if (uVar2 != 0) {
                                            uVar4 = uVar1;
                                        }
                                        *(ulonglong *)(param_3 + 0xe8) = uVar4;
                                        uVar1 = *(longlong *)(param_3 + 0xea) + param_2;
                                        if ((*param_1 <= uVar1) &&
                                            (uVar4 = *(longlong *)(param_3 + 0xea) + (ulonglong)uVar2 * 4 + param_2,
                                                    uVar4 < param_1[1] || uVar4 == param_1[1])) {
                                            uVar4 = uVar5;
                                            if (uVar2 != 0) {
                                                uVar4 = uVar1;
                                            }
                                            *(ulonglong *)(param_3 + 0xea) = uVar4;
                                            uVar3 = FUN_1407d7800(param_1,param_2,param_3 + 0xec);
                                            if ((int)uVar3 < 0) {
                                                return uVar3;
                                            }
                                            uVar3 = FUN_1407d7800(param_1,param_2,param_3 + 0xf2);
                                            if ((int)uVar3 < 0) {
                                                return uVar3;
                                            }
                                            piVar6 = param_3 + 0xf8;
                                            do {
                                                uVar3 = FUN_1407d7770(param_1,param_2,piVar6);
                                                if ((int)uVar3 < 0) {
                                                    return uVar3;
                                                }
                                                uVar5 = uVar5 + 1;
                                                piVar6 = piVar6 + 6;
                                            } while (uVar5 < 8);
                                            uVar3 = FUN_1407d7ab0(param_1,param_2,param_3 + 0x128);
                                            if ((int)uVar3 < 0) {
                                                return uVar3;
                                            }
                                            uVar3 = FUN_1402ca420(param_1,param_2,param_3 + 300);
                                            if ((int)uVar3 < 0) {
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
        uVar3 = 0x80004005;
    }
    return uVar3;
}



void FUN_1407d13d0(uint param_1,uint *param_2,undefined (*param_3) [16])

{
    float *pfVar1;
    float *pfVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 *puVar9;
    uint uVar10;
    ulonglong uVar11;
    uint uVar12;
    float fVar13;

    uVar4 = *param_2;
    if ((uVar4 != 0) && (param_3 != (undefined (*) [16])0x0)) {
        uVar11 = 0;
        if (uVar4 != 0) {
            uVar12 = uVar4;
            do {
                uVar10 = (uVar12 - (int)uVar11 >> 1) + (int)uVar11;
                if (*(uint *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar10 * 4) <= param_1) {
                    uVar11 = (ulonglong)(uVar10 + 1);
                    uVar10 = uVar12;
                }
                uVar12 = uVar10;
            } while ((uint)uVar11 < uVar12);
        }
        uVar12 = (uint)uVar11;
        uVar10 = uVar12 - 1;
        if (uVar12 == 0) {
            puVar9 = *(undefined4 **)(param_2 + 4);
            uVar6 = puVar9[1];
            uVar7 = puVar9[2];
            uVar8 = puVar9[3];
            *(undefined4 *)*param_3 = *puVar9;
            *(undefined4 *)(*param_3 + 4) = uVar6;
            *(undefined4 *)(*param_3 + 8) = uVar7;
            *(undefined4 *)(*param_3 + 0xc) = uVar8;
            uVar6 = puVar9[5];
            uVar7 = puVar9[6];
            uVar8 = puVar9[7];
            *(undefined4 *)param_3[1] = puVar9[4];
            *(undefined4 *)(param_3[1] + 4) = uVar6;
            *(undefined4 *)(param_3[1] + 8) = uVar7;
            *(undefined4 *)(param_3[1] + 0xc) = uVar8;
            return;
        }
        if (uVar4 != uVar12) {
            lVar3 = (ulonglong)uVar10 * 4;
            uVar4 = *(uint *)(lVar3 + *(longlong *)(param_2 + 2));
            if (param_1 != uVar4) {
                pfVar1 = (float *)(*(longlong *)(param_2 + 4) + (ulonglong)uVar10 * 0x20);
                pfVar2 = (float *)(uVar11 * 0x20 + *(longlong *)(param_2 + 4));
                fVar13 = (float)(ulonglong)(param_1 - uVar4) /
                         (float)(ulonglong)(*(int *)(*(longlong *)(param_2 + 2) + uVar11 * 4) - uVar4);
                *param_3 = CONCAT412(fVar13 * (pfVar2[3] - pfVar1[3]) + pfVar1[3],
                                     CONCAT48(fVar13 * (pfVar2[2] - pfVar1[2]) + pfVar1[2],
                                              CONCAT44(fVar13 * (pfVar2[1] - pfVar1[1]) + pfVar1[1],
                                                       fVar13 * (*pfVar2 - *pfVar1) + *pfVar1)));
                pfVar1 = (float *)(uVar11 * 0x20 + 0x10 + *(longlong *)(param_2 + 4));
                pfVar2 = (float *)(*(longlong *)(param_2 + 4) + 0x10 + (ulonglong)uVar10 * 0x20);
                lVar5 = *(longlong *)(param_2 + 2);
                fVar13 = (float)(ulonglong)(param_1 - *(int *)(lVar5 + lVar3)) /
                         (float)(ulonglong)(uint)(*(int *)(lVar5 + uVar11 * 4) - *(int *)(lVar5 + lVar3));
                param_3[1] = CONCAT412(fVar13 * (pfVar1[3] - pfVar2[3]) + pfVar2[3],
                                       CONCAT48(fVar13 * (pfVar1[2] - pfVar2[2]) + pfVar2[2],
                                                CONCAT44(fVar13 * (pfVar1[1] - pfVar2[1]) + pfVar2[1],
                                                         fVar13 * (*pfVar1 - *pfVar2) + *pfVar2)));
                return;
            }
        }
        puVar9 = (undefined4 *)((ulonglong)uVar10 * 0x20 + *(longlong *)(param_2 + 4));
        uVar6 = puVar9[1];
        uVar7 = puVar9[2];
        uVar8 = puVar9[3];
        *(undefined4 *)*param_3 = *puVar9;
        *(undefined4 *)(*param_3 + 4) = uVar6;
        *(undefined4 *)(*param_3 + 8) = uVar7;
        *(undefined4 *)(*param_3 + 0xc) = uVar8;
        uVar6 = puVar9[5];
        uVar7 = puVar9[6];
        uVar8 = puVar9[7];
        *(undefined4 *)param_3[1] = puVar9[4];
        *(undefined4 *)(param_3[1] + 4) = uVar6;
        *(undefined4 *)(param_3[1] + 8) = uVar7;
        *(undefined4 *)(param_3[1] + 0xc) = uVar8;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1407d1540(undefined8 *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    int iVar5;

    *param_1 = &PTR_FUN_140b79a90;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x24] = 0;
    param_1[0x23] = 0;
    param_1[0x26] = 0;
    param_1[0x25] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x3c] = 0;
    param_1[0x3b] = 0;
    param_1[0x3d] = 0;
    param_1[0x3f] = 0;
    param_1[0x3e] = 0;
    param_1[0x41] = 0;
    param_1[0x40] = 0;
    param_1[0x43] = 0;
    param_1[0x42] = 0;
    param_1[0x45] = 0;
    param_1[0x44] = 0;
    param_1[0x47] = 0;
    param_1[0x46] = 0;
    param_1[0x49] = 0;
    param_1[0x48] = 0;
    *(undefined4 *)((longlong)param_1 + 700) = 0;
    FUN_1407e4830(param_1 + 0x4a,0,0x6c);
    *(undefined4 *)(param_1 + 0x7a) = 0;
    FUN_1407e4830(param_1 + 0x58,0,0x110);
    param_1[0x7d] = 0;
    param_1[0x7c] = 0;
    param_1[0x7f] = 0;
    param_1[0x7e] = 0;
    param_1[0x81] = 0;
    param_1[0x80] = 0;
    param_1[0x83] = 0;
    param_1[0x82] = 0;
    param_1[0x85] = 0;
    param_1[0x84] = 0;
    param_1[0x87] = 0;
    param_1[0x86] = 0;
    *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
    FUN_1407e4830(param_1 + 0x88,0,0x6c);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_1407e4830(param_1 + 0x96,0,0x110);
    param_1[0xbb] = 0;
    param_1[0xba] = 0;
    param_1[0xbd] = 0;
    param_1[0xbc] = 0;
    param_1[0xbf] = 0;
    param_1[0xbe] = 0;
    param_1[0xc1] = 0;
    param_1[0xc0] = 0;
    param_1[0xc3] = 0;
    param_1[0xc2] = 0;
    param_1[0xc5] = 0;
    param_1[0xc4] = 0;
    *(undefined4 *)((longlong)param_1 + 0x69c) = 0;
    FUN_1407e4830(param_1 + 0xc6,0,0x6c);
    *(undefined4 *)(param_1 + 0xf6) = 0;
    FUN_1407e4830(param_1 + 0xd4,0,0x110);
    param_1[0xf9] = 0;
    param_1[0xf8] = 0;
    param_1[0xfb] = 0;
    param_1[0xfa] = 0;
    param_1[0xfd] = 0;
    param_1[0xfc] = 0;
    param_1[0xff] = 0;
    param_1[0xfe] = 0;
    param_1[0x101] = 0;
    param_1[0x100] = 0;
    param_1[0x103] = 0;
    param_1[0x102] = 0;
    *(undefined4 *)((longlong)param_1 + 0x88c) = 0;
    FUN_1407e4830(param_1 + 0x104,0,0x6c);
    *(undefined4 *)(param_1 + 0x134) = 0;
    FUN_1407e4830(param_1 + 0x112,0,0x110);
    *(undefined4 *)(param_1 + 0x138) = 0;
    param_1[0x136] = 0;
    param_1[0x137] = 0;
    *(undefined4 *)(param_1 + 0x13e) = 0;
    param_1[0x13a] = 0;
    param_1[0x13b] = 0;
    param_1[0x13c] = 0;
    param_1[0x13d] = 0;
    *(undefined4 *)(param_1 + 0x142) = 0;
    param_1[0x140] = 0;
    param_1[0x141] = 0;
    *(undefined8 *)((longlong)param_1 + 0xa34) = 0;
    param_1[0x144] = 0;
    param_1[0x145] = 0;
    *(undefined4 *)(param_1 + 0x146) = 0;
    *(undefined4 *)(param_1 + 0x154) = 0;
    FUN_1407e4830(param_1 + 0x148,0,0x60);
    *(undefined4 *)(param_1 + 0x158) = 0;
    param_1[0x156] = 0;
    param_1[0x157] = 0;
    param_1[0x15a] = 0;
    *(undefined4 *)(param_1 + 0x15e) = 0;
    param_1[0x15c] = 0;
    param_1[0x15d] = 0;
    puVar4 = param_1 + 0x160;
    iVar5 = 7;
    do {
        uVar3 = uRam0000000140c777dc;
        uVar2 = uRam0000000140c777d8;
        uVar1 = uRam0000000140c777d4;
        iVar5 = iVar5 + -1;
        *(undefined4 *)puVar4 = _DAT_140c777d0;
        *(undefined4 *)((longlong)puVar4 + 4) = uVar1;
        *(undefined4 *)(puVar4 + 1) = uVar2;
        *(undefined4 *)((longlong)puVar4 + 0xc) = uVar3;
        *(undefined4 *)(puVar4 + 2) = 0x3f800000;
        *(undefined4 *)((longlong)puVar4 + 0x14) = 0x3f800000;
        *(undefined4 *)(puVar4 + 3) = 0x3f800000;
        *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x3f800000;
        *(undefined4 *)(puVar4 + 4) = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4 = puVar4 + 6;
    } while (-1 < iVar5);
    param_1[400] = 0;
    *(undefined4 *)(param_1 + 0x194) = 0;
    param_1[0x192] = 0;
    param_1[0x193] = 0;
    *(undefined4 *)(param_1 + 2) = 1;
    param_1[3] = 0;
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x1d) = 0;
    param_1[0x1e] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[1] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    if ((longlong *)param_1[0x2e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2e] + 8))();
        param_1[0x2e] = 0;
    }
    *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x39] = 1;
    param_1[0x37] = 0;
    param_1[0x38] = 0;
    param_1[0x3a] = 0;
    return param_1;
}



undefined8 FUN_1407d1a10(undefined8 param_1,ulonglong param_2)

{
    FUN_1407d1ae0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1407d1a50(longlong *param_1)

{
    longlong lVar1;

    lVar1 = param_1[10];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[8];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[6];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[4];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = param_1[2];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x0001407d1ad2. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



void FUN_1407d1ae0(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    ulonglong uVar3;
    int iVar4;
    longlong **pplVar5;
    longlong **pplVar6;
    ulonglong uVar7;
    undefined4 local_28 [4];

    uVar3 = 0;
    *param_1 = &PTR_FUN_140b79a90;
    if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1b] + 0x68))();
        local_28[0] = 0xffffffff;
        (**(code **)(*(longlong *)param_1[0x1b] + 0x20))((longlong *)param_1[0x1b],local_28);
        (**(code **)(*(longlong *)param_1[0x1b] + 8))();
        param_1[0x1b] = 0;
    }
    pplVar5 = (longlong **)(param_1 + 0x29);
    lVar2 = 4;
    do {
        if (*pplVar5 != (longlong *)0x0) {
            (**(code **)(**pplVar5 + 8))();
            *pplVar5 = (longlong *)0x0;
        }
        pplVar5 = pplVar5 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    pplVar5 = (longlong **)(param_1 + 0x35);
    if (*pplVar5 != (longlong *)0x0) {
        (**(code **)(**pplVar5 + 8))();
        *pplVar5 = (longlong *)0x0;
    }
    if ((longlong *)param_1[0x36] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x36] + 8))();
        param_1[0x36] = 0;
    }
    if ((longlong *)param_1[0x37] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x37] + 8))();
        param_1[0x37] = 0;
    }
    if ((longlong *)param_1[0x38] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x38] + 8))();
        param_1[0x38] = 0;
    }
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1e] + 8))();
        param_1[0x1e] = 0;
    }
    if (*(int *)(param_1 + 0x1d) != 0) {
        FUN_1400b6120(param_1[3] + 0x4f8,param_1 + 0x12);
    }
    FUN_14018b900(param_1[0x12],0);
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x1c] + 8))();
        param_1[0x1c] = 0;
    }
    uVar7 = uVar3;
    if (param_1[0x24] != 0) {
        do {
            pplVar6 = (longlong **)(uVar7 * 0x20 + param_1[0x23]);
            plVar1 = *pplVar6;
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))();
                *pplVar6 = (longlong *)0x0;
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < (ulonglong)param_1[0x24]);
    }
    FUN_1407d7ba0(param_1 + 0x23,0);
    FUN_1407d1a50(param_1 + 0xf8);
    FUN_1407d1a50(param_1 + 0xba);
    FUN_1407d1a50(param_1 + 0x7c);
    FUN_1407d1a50(param_1 + 0x3e);
    if ((longlong *)param_1[0x3d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x3d] + 8))();
    }
    uVar7 = uVar3;
    if (param_1[0x3c] != 0) {
        do {
            lVar2 = *(longlong *)(uVar3 + param_1[0x3b]);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            uVar7 = uVar7 + 1;
            uVar3 = uVar3 + 0x10;
        } while (uVar7 < (ulonglong)param_1[0x3c]);
    }
    lVar2 = param_1[0x3b];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    iVar4 = 5;
    do {
        pplVar6 = pplVar5 + -1;
        pplVar5 = pplVar5 + -1;
        if (*pplVar6 != (longlong *)0x0) {
            (**(code **)(**pplVar6 + 8))();
        }
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    if ((longlong *)param_1[0x2e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x2e] + 8))();
    }
    lVar2 = param_1[0x25];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = param_1[0x23];
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    if ((undefined8 *)param_1[0x10] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x10] = param_1[0x11];
    }
    if (param_1[0x11] != 0) {
        *(undefined8 *)(param_1[0x11] + 0x80) = param_1[0x10];
    }
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    if ((undefined8 *)param_1[0xe] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xe] = param_1[0xf];
    }
    if (param_1[0xf] != 0) {
        *(undefined8 *)(param_1[0xf] + 0x70) = param_1[0xe];
    }
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc] = param_1[0xd];
    }
    if (param_1[0xd] != 0) {
        *(undefined8 *)(param_1[0xd] + 0x60) = param_1[0xc];
    }
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    if ((undefined8 *)param_1[8] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[8] = param_1[9];
    }
    if (param_1[9] != 0) {
        *(undefined8 *)(param_1[9] + 0x20) = param_1[8];
    }
    param_1[8] = 0;
    param_1[9] = 0;
    if ((undefined8 *)param_1[6] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[6] = param_1[7];
    }
    if (param_1[7] != 0) {
        *(undefined8 *)(param_1[7] + 0x10) = param_1[6];
    }
    param_1[7] = 0;
    param_1[6] = 0;
    return;
}



void FUN_1407d1e80(longlong param_1)

{
    if (*(int *)(param_1 + 0x10) == 0) {
        FUN_1401984d0(param_1 + 0x20);
    }
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    return;
}



int FUN_1407d1eb0(longlong *param_1)

{
    int iVar1;

    if (*(int *)(param_1 + 2) == 0) {
        (**(code **)(*param_1 + 0x78))(param_1,1);
        return 0;
    }
    iVar1 = *(int *)(param_1 + 2) + -1;
    *(int *)(param_1 + 2) = iVar1;
    if (iVar1 == 0) {
        FUN_140198370(param_1 + 4,param_1,param_1[3] + 0x4f0);
        iVar1 = 0;
    }
    return iVar1;
}



ulonglong FUN_1407d1f00(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    undefined auVar2 [16];
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong local_res8;

    *(longlong *)(param_1 + 0x18) = param_2;
    plVar8 = (longlong *)(param_2 + 0x4e0);
    if (*(longlong *)(param_1 + 0x60) == 0) {
        *(longlong **)(param_1 + 0x60) = plVar8;
        plVar7 = (longlong *)(param_1 + 0x68);
        *plVar7 = *plVar8;
        *plVar8 = param_1;
        if (*plVar7 != 0) {
            *(longlong **)(*plVar7 + 0x60) = plVar7;
        }
    }
    if (param_3 != 0) {
        lVar4 = -1;
        do {
            lVar1 = lVar4 * 2;
            lVar4 = lVar4 + 1;
        } while (*(short *)(param_3 + 2 + lVar1) != 0);
        uVar6 = (ulonglong)((int)lVar4 + 1);
        auVar2 = ZEXT816(2) * ZEXT816(uVar6);
        uVar5 = SUB168(auVar2,0);
        if (SUB168(auVar2 >> 0x40,0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        uVar5 = FUN_14018b280(uVar5,0);
        *(undefined8 *)(param_1 + 0x90) = uVar5;
        FUN_1407db590(uVar5,param_3,uVar6 * 2);
        uVar6 = FUN_1401b6de0();
        if ((int)uVar6 < 0) {
            return uVar6;
        }
        *(undefined4 *)(param_1 + 0xe8) = 1;
        local_res8 = param_1;
        FUN_14040adf0(*(longlong *)(param_1 + 0x18) + 0x4f8,param_1 + 0x90,&local_res8);
        FUN_1401b6bf0();
    }
    uVar6 = (**(code **)(*DAT_140c65670 + 0xb0))(DAT_140c65670,param_1 + 0x1b8);
    if ((-1 < (int)uVar6) &&
        (uVar3 = (**(code **)(*DAT_140c65670 + 0xb0))(DAT_140c65670,param_1 + 0x1c0), uVar6 = 0,
                (int)uVar3 < 0)) {
        uVar6 = (ulonglong)uVar3;
    }
    return uVar6;
}



void FUN_1407d20e0(longlong *param_1)

{
    float fVar1;
    short *psVar2;
    longlong *plVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    longlong *local_res8;
    undefined4 local_18 [4];

    local_18[0] = 0;
    iVar4 = (**(code **)(*param_1 + 0x10))(param_1,local_18);
    if (((iVar4 != 0) && (psVar2 = *(short **)(param_1[1] + 0x358), psVar2 != (short *)0x0)) &&
        (*psVar2 != 0)) {
        fVar6 = (float)(ulonglong)*(uint *)(param_1[3] + 0xb9c);
        fVar1 = *(float *)(param_1[3] + 0xba0);
        if (fVar6 <= fVar1) {
            fVar6 = fVar1;
        }
        iVar4 = (int)(longlong)fVar6;
        if (iVar4 != *(int *)(param_1 + 0x2d)) {
            local_res8 = (longlong *)0x0;
            iVar5 = (**(code **)(*DAT_140c65670 + 0x70))
                    (DAT_140c65670,psVar2,(longlong)fVar6 & 0xffffffff,0,0,0,0,&local_res8);
            if ((-1 < iVar5) && ((longlong *)param_1[0x2e] != local_res8)) {
                if (local_res8 != (longlong *)0x0) {
                    (**(code **)*local_res8)();
                }
                plVar3 = (longlong *)param_1[0x2e];
                if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 8))(plVar3);
                }
                param_1[0x2e] = (longlong)local_res8;
            }
            *(int *)(param_1 + 0x2d) = iVar4;
            if (local_res8 != (longlong *)0x0) {
                (**(code **)(*local_res8 + 8))();
            }
        }
    }
    return;
}



undefined8 FUN_1407d21f0(longlong param_1,undefined8 *param_2)

{
    (**(code **)**(undefined8 **)(param_1 + 0x18))();
    *param_2 = *(undefined8 *)(param_1 + 0x18);
    return 0;
}



undefined8 FUN_1407d2220(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;

    if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))();
        if ((int)uVar2 == 0) {
            return uVar2;
        }
        iVar1 = FUN_1407d24d0(param_1);
        if (iVar1 == 0) {
            *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 0x18) + 0x20;
        }
        if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0xd8) + 8))();
            *(undefined8 *)(param_1 + 0xd8) = 0;
        }
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1407d24d0(longlong param_1)

{
    undefined4 *puVar1;
    ulonglong *puVar2;
    float fVar3;
    longlong *plVar4;
    short *psVar5;
    int iVar6;
    undefined8 uVar7;
    int *piVar8;
    longlong lVar9;
    uint uVar10;
    longlong lVar11;
    longlong **pplVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    float fVar16;
    undefined auStack2488 [32];
    undefined8 local_998;
    undefined ***local_990;
    undefined4 local_988;
    longlong local_980;
    undefined **local_978;
    undefined8 uStack2416;
    undefined8 local_968;
    undefined8 uStack2400;
    ulonglong local_958;
    undefined **local_950;
    longlong local_948;
    LPVOID local_940;
    undefined **local_938;
    longlong local_930;
    LPVOID local_928;
    undefined **local_918;
    wchar_t *local_910;
    LPVOID local_908;
    undefined8 local_900;
    longlong local_8f8;
    undefined **local_8e8;
    wchar_t *local_8e0;
    LPVOID local_8d8;
    undefined8 local_8d0;
    undefined4 local_8c8;
    undefined4 uStack2244;
    undefined4 uStack2240;
    undefined4 uStack2236;
    undefined4 local_8b8;
    undefined4 uStack2228;
    int iStack2224;
    undefined4 uStack2220;
    undefined4 local_8a8;
    undefined4 uStack2212;
    undefined4 uStack2208;
    undefined4 uStack2204;
    undefined4 local_898;
    undefined4 uStack2196;
    undefined4 uStack2192;
    undefined4 uStack2188;
    undefined4 local_888;
    undefined4 uStack2180;
    undefined4 uStack2176;
    undefined4 uStack2172;
    undefined4 local_878;
    undefined4 uStack2164;
    undefined4 uStack2160;
    undefined4 uStack2156;
    undefined4 local_868;
    undefined4 uStack2148;
    undefined4 uStack2144;
    undefined4 uStack2140;
    undefined4 local_858;
    undefined4 uStack2132;
    undefined4 uStack2128;
    undefined4 uStack2124;
    undefined4 local_848;
    undefined4 uStack2116;
    undefined4 uStack2112;
    undefined4 uStack2108;
    undefined local_838 [2048];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2488;
    iVar6 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8),0);
    if (iVar6 < 0) {
        FUN_1401b3450(local_838,0x400,iVar6);
        local_950 = &PTR_LAB_140b5e648;
        local_948 = 0;
        local_940 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_950);
        local_958 = 0x141e4f268;
        local_990 = &local_938;
        local_938 = local_950;
        local_930 = local_948;
        local_998 = *(undefined4 **)(param_1 + 0x90);
        local_928 = local_940;
        iVar6 = FUN_1401971e0(&DAT_140c8b180,0x1b,&local_958,local_838);
    }
    else {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x20))();
        *(undefined8 *)(param_1 + 8) = uVar7;
        local_930 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
        local_938 = *(undefined ***)(param_1 + 8);
        local_930 = local_930 + (longlong)local_938;
        uVar13 = 0;
        local_928 = (LPVOID)0x0;
        iVar6 = FUN_1407d1000(&local_938);
        if (-1 < iVar6) {
            FUN_1407d7dc0(param_1 + 0x1f0);
            FUN_1407d7ea0(param_1 + 0x200);
            FUN_1407d7fa0(param_1 + 0x210);
            FUN_1407d80b0(param_1 + 0x220);
            FUN_1407d81c0(param_1 + 0x230);
            FUN_1407d82d0(param_1 + 0x240);
            uVar15 = uVar13;
            if (*(int *)(*(longlong *)(param_1 + 8) + 0x80) != 0) {
                do {
                    uStack2108 = 0;
                    FUN_1407e4830();
                    lVar11 = *(longlong *)(param_1 + 0x240);
                    lVar9 = uVar15 * 0x70;
                    uVar10 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar10;
                    puVar1 = (undefined4 *)(lVar9 + lVar11);
                    *puVar1 = local_8a8;
                    puVar1[1] = uStack2212;
                    puVar1[2] = uStack2208;
                    puVar1[3] = uStack2204;
                    puVar1 = (undefined4 *)(lVar9 + 0x10 + lVar11);
                    *puVar1 = local_898;
                    puVar1[1] = uStack2196;
                    puVar1[2] = uStack2192;
                    puVar1[3] = uStack2188;
                    puVar1 = (undefined4 *)(lVar9 + 0x20 + lVar11);
                    *puVar1 = local_888;
                    puVar1[1] = uStack2180;
                    puVar1[2] = uStack2176;
                    puVar1[3] = uStack2172;
                    puVar1 = (undefined4 *)(lVar9 + 0x30 + lVar11);
                    *puVar1 = local_878;
                    puVar1[1] = uStack2164;
                    puVar1[2] = uStack2160;
                    puVar1[3] = uStack2156;
                    puVar1 = (undefined4 *)(lVar9 + 0x40 + lVar11);
                    *puVar1 = local_868;
                    puVar1[1] = uStack2148;
                    puVar1[2] = uStack2144;
                    puVar1[3] = uStack2140;
                    puVar1 = (undefined4 *)(lVar9 + 0x50 + lVar11);
                    *puVar1 = local_858;
                    puVar1[1] = uStack2132;
                    puVar1[2] = uStack2128;
                    puVar1[3] = uStack2124;
                    puVar1 = (undefined4 *)(lVar9 + 0x60 + lVar11);
                    *puVar1 = local_848;
                    puVar1[1] = uStack2116;
                    puVar1[2] = uStack2112;
                    puVar1[3] = uStack2108;
                } while (uVar10 < *(uint *)(*(longlong *)(param_1 + 8) + 0x80));
            }
            FUN_1407d7dc0(param_1 + 0x3e0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 200));
            FUN_1407d7ea0(param_1 + 0x3f0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0xd8));
            FUN_1407d7fa0(param_1 + 0x400,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0xe8));
            FUN_1407d80b0(param_1 + 0x410,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0xf8));
            FUN_1407d81c0(param_1 + 0x420,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x108));
            FUN_1407d7dc0(param_1 + 0x5d0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x160));
            FUN_1407d7ea0(param_1 + 0x5e0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x170));
            FUN_1407d7fa0(param_1 + 0x5f0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x180));
            FUN_1407d80b0(param_1 + 0x600,*(undefined4 *)(*(longlong *)(param_1 + 8) + 400));
            FUN_1407d81c0(param_1 + 0x610,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1a0));
            FUN_1407d7dc0(param_1 + 0x7c0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x1f8));
            FUN_1407d7ea0(param_1 + 2000,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x208));
            FUN_1407d7fa0(param_1 + 0x7e0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x218));
            FUN_1407d80b0(param_1 + 0x7f0,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x228));
            FUN_1407d81c0(param_1 + 0x800,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x238));
            iVar6 = *(int *)(*(longlong *)(param_1 + 8) + 0x2e8);
            if ((iVar6 != 0) &&
                (FUN_1407d7ba0(param_1 + 0x118,iVar6), uVar15 = uVar13,
                        *(int *)(*(longlong *)(param_1 + 8) + 0x2e8) != 0)) {
                do {
                    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0xba8);
                    iVar6 = (**(code **)(*plVar4 + 0x28))
                            (plVar4,*(undefined8 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x2f0) + 0x10 +
                                     uVar15 * 0x30),&local_958,0);
                    lVar11 = uVar15 * 0x20;
                    if (iVar6 < 0) {
                        *(undefined8 *)(lVar11 + *(longlong *)(param_1 + 0x118)) = 0;
                    }
                    else {
                        *(ulonglong *)(lVar11 + *(longlong *)(param_1 + 0x118)) = local_958;
                    }
                    local_978 = (undefined **)0x96;
                    uStack2416 = (wchar_t *)0x3f800000;
                    plVar4 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0x118));
                    local_968 = (LPVOID)0x0;
                    uStack2400 = 0;
                    (**(code **)(*plVar4 + 0x248))(plVar4,0,&local_978);
                    plVar4 = *(longlong **)(lVar11 + *(longlong *)(param_1 + 0x118));
                    (**(code **)(*plVar4 + 0xd0))
                            (plVar4,*(undefined2 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x2f0) + uVar15 * 0x30));
                    uVar10 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar10;
                } while (uVar10 < *(uint *)(*(longlong *)(param_1 + 8) + 0x2e8));
            }
            uVar10 = *(uint *)(*(longlong *)(param_1 + 8) + 0x340);
            if (4 < uVar10) {
                uVar10 = 4;
            }
            uVar15 = (ulonglong)uVar10;
            if (uVar10 != 0) {
                pplVar12 = (longlong **)(param_1 + 0x148);
                uVar14 = uVar13;
                do {
                    lVar11 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x348);
                    psVar5 = *(short **)(lVar11 + 8 + uVar14);
                    if (((psVar5 == (short *)0x0) || (*psVar5 == 0)) ||
                        (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 3000),
                                iVar6 = (**(code **)(*plVar4 + 0x28))
                                        (plVar4,*(undefined8 *)(lVar11 + 8 + uVar14),pplVar12,0), iVar6 < 0))
                    {
                        *pplVar12 = (longlong *)0x0;
                    }
                    else {
                        local_978 = (undefined **)0x96;
                        uStack2416 = (wchar_t *)0x3f800000;
                        local_968 = (LPVOID)0x0;
                        uStack2400 = 0;
                        (**(code **)(**pplVar12 + 0x248))(*pplVar12,0);
                    }
                    pplVar12 = pplVar12 + 1;
                    uVar14 = uVar14 + 0x10;
                    uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
            }
            psVar5 = *(short **)(*(longlong *)(param_1 + 8) + 0x358);
            if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
                fVar16 = (float)(ulonglong)*(uint *)(*(longlong *)(param_1 + 0x18) + 0xb9c);
                local_980 = param_1 + 0x170;
                local_988 = 0;
                local_990 = (undefined ***)((ulonglong)local_990 & 0xffffffff00000000);
                local_998 = (undefined4 *)((ulonglong)local_998 & 0xffffffff00000000);
                fVar3 = *(float *)(*(longlong *)(param_1 + 0x18) + 0xba0);
                if (fVar16 <= fVar3) {
                    fVar16 = fVar3;
                }
                *(int *)(param_1 + 0x168) = (int)(longlong)fVar16;
                (**(code **)(*DAT_140c65670 + 0x70))
                        (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x358),
                         (longlong)fVar16 & 0xffffffff,0);
            }
            psVar5 = *(short **)(*(longlong *)(param_1 + 8) + 0x380);
            if (((psVar5 == (short *)0x0) || (*psVar5 == 0)) ||
                (iVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0xba8) + 0x28))(),
                        iVar6 < 0)) {
                *(undefined8 *)(param_1 + 0x1a8) = 0;
            }
            else {
                local_978 = (undefined **)0x96;
                uStack2416 = (wchar_t *)0x3f800000;
                local_968 = (LPVOID)0x0;
                uStack2400 = 0;
                (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x248))(*(longlong **)(param_1 + 0x1a8),0);
            }
            psVar5 = *(short **)(*(longlong *)(param_1 + 8) + 0x390);
            if (((psVar5 == (short *)0x0) || (*psVar5 == 0)) ||
                (iVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x18) + 0xba8) + 0x28))(),
                        iVar6 < 0)) {
                *(undefined8 *)(param_1 + 0x1b0) = 0;
            }
            else {
                local_978 = (undefined **)0x96;
                uStack2416 = (wchar_t *)0x3f800000;
                local_968 = (LPVOID)0x0;
                uStack2400 = 0;
                (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x248))(*(longlong **)(param_1 + 0x1b0),0);
            }
            FUN_1407d7c90(param_1 + 0x1d8,*(undefined4 *)(*(longlong *)(param_1 + 8) + 0x4a0));
            uVar15 = uVar13;
            if (*(int *)(*(longlong *)(param_1 + 8) + 0x4a0) != 0) {
                do {
                    lVar11 = *(longlong *)(param_1 + 0x1d8);
                    uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x4a8) + uVar15 * 0x18);
                    local_958 = (ulonglong)uVar10;
                    puVar2 = (ulonglong *)(lVar11 + 8 + uVar15 * 0x10);
                    if ((*puVar2 < local_958 || *puVar2 == local_958) &&
                        (local_8f8 = FUN_14018db00(*(undefined8 *)(lVar11 + uVar15 * 0x10),uVar10),
                                *(longlong *)(lVar11 + uVar15 * 0x10) != local_8f8)) {
                        FUN_1407db590(local_8f8);
                        lVar9 = *(longlong *)(lVar11 + uVar15 * 0x10);
                        if (lVar9 != 0) {
                            (**(code **)(*(longlong *)(lVar9 + -0x10) + 8))(lVar9 + -0x10);
                        }
                        *(longlong *)(lVar11 + uVar15 * 0x10) = local_8f8;
                    }
                    *(ulonglong *)(lVar11 + 8 + uVar15 * 0x10) = local_958;
                    uVar14 = uVar13;
                    if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x4a8) + uVar15 * 0x18) != 0) {
                        do {
                            uVar10 = (int)uVar14 + 1;
                            *(undefined8 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar15 * 0x10) + uVar14 * 0xc) =
                                    *(undefined8 *)
                                            (*(longlong *)
                                                    (*(longlong *)(*(longlong *)(param_1 + 8) + 0x4a8) + 0x10 + uVar15 * 0x18) +
                                             uVar14 * 8);
                            *(undefined4 *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + uVar15 * 0x10) + 8 + uVar14 * 0xc) =
                                    *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x528);
                            uVar14 = (ulonglong)uVar10;
                        } while (uVar10 < *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x4a8) +
                                                    uVar15 * 0x18));
                    }
                    uVar10 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar10;
                } while (uVar10 < *(uint *)(*(longlong *)(param_1 + 8) + 0x4a0));
            }
            psVar5 = *(short **)(*(longlong *)(param_1 + 8) + 0x4b8);
            if ((psVar5 != (short *)0x0) && (*psVar5 != 0)) {
                piVar8 = (int *)(**(code **)(*DAT_140c65670 + 0x2c8))();
                local_980 = param_1 + 0x1e8;
                local_988 = 0;
                local_990 = (undefined ***)((ulonglong)local_990 & 0xffffffff00000000);
                local_998 = (undefined4 *)CONCAT44(local_998._4_4_,1);
                (**(code **)(*DAT_140c65670 + 0x60))
                        (DAT_140c65670,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x4b8),0,*piVar8 != 0)
                        ;
            }
            goto LAB_1407d2edf;
        }
        local_948 = 0;
        local_950 = &PTR_LAB_140b5e648;
        local_940 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_950);
        local_938 = local_950;
        local_930 = local_948;
        local_978 = &PTR_LAB_140b5e648;
        uStack2416 = L"Result";
        local_928 = local_940;
        local_968 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_978);
        uStack2400 = CONCAT44(uStack2400._4_4_,iVar6);
        local_900 = *(undefined8 *)(param_1 + 0x90);
        local_918 = &PTR_LAB_140b5e648;
        local_8b8 = (undefined4)local_968;
        uStack2228 = local_968._4_4_;
        uStack2220 = uStack2400._4_4_;
        local_978 = &PTR_LAB_140b5e640;
        local_910 = L"FileName";
        local_8c8 = 0x40b5e640;
        uStack2244 = 1;
        uStack2240 = (undefined4)uStack2416;
        uStack2236 = uStack2416._4_4_;
        iStack2224 = iVar6;
        local_908 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_918);
        local_8e0 = local_910;
        local_918 = &PTR_LAB_140b5e638;
        local_8e8 = &PTR_LAB_140b5e638;
        local_958 = 0x141e4f328;
        local_990 = &local_938;
        local_8d8 = local_908;
        local_998 = &local_8c8;
        local_8d0 = local_900;
        iVar6 = FUN_1401971e0(&DAT_140c8b17c,0x1b,&local_958,&local_8e8);
        local_918 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_908);
        local_978 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_968);
    }
    local_950 = &PTR_LAB_140b5e648;
    TlsSetValue(DAT_140c63720,local_940);
    if (iVar6 != 0) {
        DebugBreak();
    }
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xe0) + 8))();
        *(undefined8 *)(param_1 + 0xe0) = 0;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    LAB_1407d2edf:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2488);
    return;
}



undefined4 FUN_1407d2f00(longlong *param_1)

{
    undefined4 local_18 [4];

    local_18[0] = 0xffffffff;
    (**(code **)(*param_1 + 0x10))(param_1,local_18);
    return *(undefined4 *)(param_1[1] + 0x10);
}



bool FUN_1407d2f30(longlong *param_1)

{
    int iVar1;
    undefined4 local_18 [4];

    local_18[0] = 0;
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_18);
    return iVar1 != 0;
}



void FUN_1407d2f60(longlong param_1,float *param_2)

{
    float *pfVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    float *pfVar7;
    longlong lVar8;
    float fVar9;
    float fVar10;
    undefined4 uVar11;
    float fVar12;
    uint uVar13;
    float fVar14;
    undefined auStack552 [32];
    float local_208;
    float fStack516;
    float fStack512;
    undefined4 uStack508;
    float local_1f8;
    float fStack500;
    float fStack496;
    float fStack492;
    float local_1e8;
    float fStack484;
    float fStack480;
    float fStack476;
    float local_1d8;
    float local_1c8;
    float fStack452;
    float fStack448;
    float fStack444;
    float local_1b8;
    float fStack436;
    float fStack432;
    float fStack428;
    float local_1a8;
    float local_198;
    float fStack404;
    float fStack400;
    float fStack396;
    float local_188;
    float fStack388;
    float fStack384;
    float fStack380;
    float local_178;
    float local_168;
    float fStack356;
    float fStack352;
    float fStack348;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    float local_148;
    float local_138;
    float fStack308;
    float fStack304;
    float fStack300;
    float local_128;
    float fStack292;
    undefined4 uStack288;
    undefined4 uStack284;
    float local_118;
    float local_108;
    float fStack260;
    float fStack256;
    float fStack252;
    float local_f8;
    float fStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    float local_e8;
    ulonglong local_d8;

    piVar3 = DAT_140c63750;
    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack552;
    local_148 = *(float *)(param_1 + 0xcd0);
    local_158 = *(undefined4 *)(param_1 + 0xcc0);
    uStack340 = *(undefined4 *)(param_1 + 0xcc4);
    uStack336 = *(undefined4 *)(param_1 + 0xcc8);
    uStack332 = *(undefined4 *)(param_1 + 0xccc);
    local_118 = *(float *)(param_1 + 0xd00);
    fStack356 = *(float *)(param_1 + 0xcb4);
    fStack352 = *(float *)(param_1 + 0xcb8);
    fStack348 = *(float *)(param_1 + 0xcbc);
    fStack308 = *(float *)(param_1 + 0xce4);
    fStack304 = *(float *)(param_1 + 0xce8);
    fStack300 = *(float *)(param_1 + 0xcec);
    fStack260 = *(float *)(param_1 + 0xd14);
    fStack256 = *(float *)(param_1 + 0xd18);
    fStack252 = *(float *)(param_1 + 0xd1c);
    iVar4 = *DAT_140c63750;
    local_e8 = *(float *)(param_1 + 0xd30);
    local_1b8 = *(float *)(param_1 + 0xcf0);
    fStack436 = *(float *)(param_1 + 0xcf4);
    uStack288 = *(undefined4 *)(param_1 + 0xcf8);
    uStack284 = *(undefined4 *)(param_1 + 0xcfc);
    local_188 = *(float *)(param_1 + 0xd20);
    fStack388 = *(float *)(param_1 + 0xd24);
    uStack240 = *(undefined4 *)(param_1 + 0xd28);
    uStack236 = *(undefined4 *)(param_1 + 0xd2c);
    fVar14 = DAT_140c3b438 * 0.005555556;
    iVar2 = DAT_140c56150;
    if (iVar4 < DAT_140c56150) {
        iVar2 = iVar4;
    }
    fVar12 = fVar14 * *(float *)(param_1 + 0x9d0);
    local_1f8 = *(float *)(param_1 + 0xcb0) +
                *(float *)(&DAT_140c56160 + (longlong)iVar2 * 4) * *(float *)(param_1 + 0xae0) *
                3.544908;
    local_198 = *(float *)(param_1 + 0xd10) + 0.0;
    local_1c8 = *(float *)(param_1 + 0xce0) +
                *(float *)(&DAT_140c56160 + (longlong)iVar2 * 4) * *(float *)(param_1 + 0xae4) *
                3.544908;
    local_168 = local_1f8;
    local_138 = local_1c8;
    local_128 = local_1b8;
    fStack292 = fStack436;
    local_108 = local_198;
    local_f8 = local_188;
    fStack244 = fStack388;
    fVar9 = (float)FUN_1408fc950(fVar12);
    fVar14 = fVar14 * *(float *)(param_1 + 0x9d4);
    fVar10 = (float)FUN_1408fe3d0(fVar14);
    uVar13 = (uint)(fVar10 * fVar9) ^ 0x80000000;
    uVar11 = FUN_1408fe3d0(fVar12);
    fVar14 = (float)FUN_1408fc950(fVar14);
    iVar2 = DAT_140c561b0;
    if (iVar4 < DAT_140c561b0) {
        iVar2 = iVar4;
    }
    local_178 = *(float *)(&DAT_140c561c0 + (longlong)iVar2 * 4);
    local_1f8 = local_1f8 * local_178;
    local_1c8 = local_1c8 * local_178;
    local_198 = local_198 * local_178;
    fStack500 = fStack356 * local_178;
    fStack452 = fStack308 * local_178;
    fStack404 = fStack260 * local_178;
    fStack448 = fStack304 * local_178;
    fStack496 = fStack352 * local_178;
    fStack492 = fStack348 * local_178;
    fStack396 = fStack252 * local_178;
    fStack400 = fStack256 * local_178;
    local_1e8 = *(float *)(param_1 + 0xcc0) * local_178;
    fStack444 = fStack300 * local_178;
    local_188 = local_178 * local_188;
    local_1b8 = local_178 * local_1b8;
    fStack484 = local_178 * *(float *)(param_1 + 0xcc4);
    fStack436 = local_178 * fStack436;
    fStack388 = local_178 * fStack388;
    fStack480 = local_178 * 0.0;
    fStack432 = local_178 * 0.0;
    fStack476 = local_178 * *(float *)(param_1 + 0xccc);
    fStack384 = local_178 * 0.0;
    fStack428 = local_178 * *(float *)(param_1 + 0xcfc);
    fStack380 = local_178 * *(float *)(param_1 + 0xd2c);
    local_1d8 = local_178 * local_148;
    local_1a8 = local_178 * local_118;
    local_178 = local_178 * local_e8;
    lVar8 = 0xc;
    *param_2 = local_1f8;
    param_2[1] = fStack500;
    param_2[2] = fStack496;
    param_2[3] = fStack492;
    param_2[0xc] = local_1c8;
    param_2[0xd] = fStack452;
    param_2[0xe] = fStack448;
    param_2[0xf] = fStack444;
    param_2[4] = local_1e8;
    param_2[5] = fStack484;
    param_2[6] = fStack480;
    param_2[7] = fStack476;
    param_2[8] = local_1d8;
    param_2[0x18] = local_198;
    param_2[0x19] = fStack404;
    param_2[0x1a] = fStack400;
    param_2[0x1b] = fStack396;
    param_2[0x10] = local_1b8;
    param_2[0x11] = fStack436;
    param_2[0x12] = fStack432;
    param_2[0x13] = fStack428;
    param_2[0x14] = local_1a8;
    param_2[0x1c] = local_188;
    param_2[0x1d] = fStack388;
    param_2[0x1e] = fStack384;
    param_2[0x1f] = fStack380;
    param_2[0x20] = local_178;
    iVar4 = DAT_140c56210;
    if (*piVar3 < DAT_140c56210) {
        iVar4 = *piVar3;
    }
    fVar10 = *(float *)(&DAT_140c56220 + (longlong)iVar4 * 4);
    *(undefined (*) [16])(param_2 + 0x24) =
            CONCAT412(fVar10 * *(float *)(param_1 + 0x9bc),
                      CONCAT48(fVar10 * *(float *)(param_1 + 0x9b8),
                               CONCAT44(fVar10 * *(float *)(param_1 + 0x9b4),
                                        fVar10 * *(float *)(param_1 + 0x9b0))));
    iVar4 = DAT_140c56210;
    if (*piVar3 < DAT_140c56210) {
        iVar4 = *piVar3;
    }
    fVar10 = *(float *)(&DAT_140c56220 + (longlong)iVar4 * 4);
    *(undefined (*) [16])(param_2 + 0x28) =
            CONCAT412(fVar10 * *(float *)(param_1 + 0x9ec),
                      CONCAT48(fVar10 * *(float *)(param_1 + 0x9e8),
                               CONCAT44(fVar10 * *(float *)(param_1 + 0x9e4),
                                        fVar10 * *(float *)(param_1 + 0x9e0))));
    param_2[0xac] = 24.0;
    *(undefined (*) [16])(param_2 + 0x2c) =
            ZEXT1216(CONCAT48(fVar14 * fVar9,CONCAT44(uVar11,uVar13)) ^ (undefined  [12])0x80000000);
    param_2[0xae] = *(float *)(param_1 + 0xa20);
    param_2[0xaf] = *(float *)(param_1 + 0xa24);
    local_208 = *(float *)(param_1 + 0xdd0) * 0.2820948;
    fStack512 = *(float *)(param_1 + 0xe30) * 0.2820948;
    fStack516 = *(float *)(param_1 + 0xe00) * 0.2820948;
    uStack508 = 0x3f800000;
    param_2[0x30] = local_208;
    param_2[0x31] = fStack516;
    param_2[0x32] = fStack512;
    param_2[0x33] = 1.0;
    param_2[0xb8] = *(float *)(param_1 + 0xa30);
    iVar4 = DAT_140c56270;
    if (*piVar3 < DAT_140c56270) {
        iVar4 = *piVar3;
    }
    param_2[0xba] = *(float *)(&DAT_140c56280 + (longlong)iVar4 * 4);
    param_2[0xb9] = *(float *)(param_1 + 0xa34);
    fVar14 = *(float *)(param_1 + 0xc94);
    fVar9 = *(float *)(param_1 + 0xc98);
    fVar10 = *(float *)(param_1 + 0xc9c);
    param_2[0x98] = *(float *)(param_1 + 0xc90);
    param_2[0x99] = fVar14;
    param_2[0x9a] = fVar9;
    param_2[0x9b] = fVar10;
    lVar6 = 0x1a20;
    pfVar7 = param_2 + 0x68;
    do {
        uVar5 = (ulonglong)*(uint *)(lVar6 + *(longlong *)(param_1 + 0x18));
        pfVar1 = (float *)(param_1 + 0xb00 + uVar5 * 0x30);
        fVar14 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        pfVar7[-0x30] = *pfVar1;
        pfVar7[-0x2f] = fVar14;
        pfVar7[-0x2e] = fVar9;
        pfVar7[-0x2d] = fVar10;
        pfVar1 = (float *)(param_1 + (uVar5 + 0x3b) * 0x30);
        fVar14 = pfVar1[1];
        fVar9 = pfVar1[2];
        fVar10 = pfVar1[3];
        *pfVar7 = *pfVar1;
        pfVar7[1] = fVar14;
        pfVar7[2] = fVar9;
        pfVar7[3] = fVar10;
        lVar8 = lVar8 + -1;
        lVar6 = lVar6 + 4;
        pfVar7 = pfVar7 + 4;
    } while (lVar8 != 0);
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack552);
    return;
}



float FUN_1407d59c0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x118))
            (*(longlong **)(param_1 + 0x18),
             *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 800) +
                      (longlong)*(int *)(param_1 + 0x138) * 4));
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x118))
            (*(longlong **)(param_1 + 0x18),
             *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 800) +
                      (longlong)*(int *)(param_1 + 0x13c) * 4));
    if ((lVar1 != 0) && (lVar2 != 0)) {
        return (*(float *)(lVar2 + 4) - *(float *)(lVar1 + 4)) * *(float *)(param_1 + 0x140) +
               *(float *)(lVar1 + 4);
    }
    return 0.0;
}



undefined4 FUN_1407d5a60(longlong param_1,uint param_2,ulonglong param_3)

{
    longlong lVar1;

    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x118))
            (*(longlong **)(param_1 + 0x18),
             *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 800) + (ulonglong)param_2 * 4));
    if (lVar1 != 0) {
        lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x108))
                (*(longlong **)(param_1 + 0x18),
                 *(undefined4 *)(lVar1 + 8 + (param_3 & 0xffffffff) * 4));
        if (lVar1 != 0) {
            return *(undefined4 *)(lVar1 + 4);
        }
    }
    return 0;
}



undefined8
FUN_1407d5ad0(longlong param_1,uint param_2,ulonglong param_3,uint param_4,undefined4 *param_5,
              undefined4 *param_6,longlong *param_7)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = (ulonglong)param_4;
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x118))
            (*(longlong **)(param_1 + 0x18),
             *(undefined4 *)
                     (*(longlong *)(*(longlong *)(param_1 + 8) + 800) + (ulonglong)param_2 * 4));
    if (((((lVar1 != 0) &&
           (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x108))
                   (*(longlong **)(param_1 + 0x18),
                    *(undefined4 *)(lVar1 + 8 + (param_3 & 0xffffffff) * 4)), lVar1 != 0))
          && (param_4 < 0xc)) &&
         ((param_2 < *(uint *)(*(longlong *)(param_1 + 8) + 0x310) &&
           ((uint)(param_3 & 0xffffffff) < 6)))) && (param_4 < *(uint *)(lVar1 + 4))) {
        if (param_5 != (undefined4 *)0x0) {
            *param_5 = *(undefined4 *)(lVar1 + 8 + uVar2 * 4);
        }
        if (param_6 != (undefined4 *)0x0) {
            *param_6 = *(undefined4 *)(lVar1 + 0x38 + uVar2 * 4);
        }
        if (param_7 != (longlong *)0x0) {
            uVar2 = *(ulonglong *)(lVar1 + 0x68 + uVar2 * 8);
            if ((uVar2 == 0) || (DAT_140c3fe70 < uVar2)) {
                *param_7 = 0;
                return 0;
            }
            *param_7 = DAT_140c3fe68 + uVar2;
        }
        return 0;
    }
    return 0x80070057;
}



void FUN_1407d5bc0(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong *plVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
        lVar1 = *(longlong *)(param_1 + 0x1d8);
        do {
            uVar4 = 0;
            plVar3 = (longlong *)(lVar1 + uVar2 * 0x10);
            if (*(longlong *)(lVar1 + 8 + uVar2 * 0x10) != 0) {
                do {
                    uVar5 = (ulonglong)((int)uVar4 + 1);
                    *(undefined4 *)(*plVar3 + 8 + uVar4 * 0xc) =
                            *(undefined4 *)(*(longlong *)(param_1 + 0x18) + 0x528);
                    lVar1 = *(longlong *)(param_1 + 0x1d8);
                    plVar3 = (longlong *)(lVar1 + uVar2 * 0x10);
                    uVar4 = uVar5;
                } while (uVar5 < *(ulonglong *)(lVar1 + 8 + uVar2 * 0x10));
            }
            uVar2 = (ulonglong)((int)uVar2 + 1);
        } while (uVar2 < *(ulonglong *)(param_1 + 0x1e0));
    }
    return;
}



undefined8
FUN_1407d5f20(longlong param_1,uint *param_2,uint param_3,uint *param_4,uint *param_5,float *param_6
)

{
    uint uVar1;
    uint uVar2;
    uint *puVar3;
    uint uVar4;
    uint uVar5;
    uint uVar6;

    if (param_3 == 0) {
        return 0;
    }
    if (param_3 == 1) {
        *param_4 = 0;
        *param_5 = 0;
        *param_6 = 0.0;
        return 1;
    }
    uVar5 = 0;
    if (param_3 != 0) {
        uVar4 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x520);
        puVar3 = param_2;
        do {
            if (uVar4 <= *puVar3 && *puVar3 != uVar4) break;
            uVar5 = uVar5 + 1;
            puVar3 = puVar3 + 1;
        } while (uVar5 < param_3);
        if (uVar5 != 0) {
            uVar6 = uVar5 - 1;
            goto LAB_1407d5fb1;
        }
    }
    uVar6 = param_3 - 1;
    uVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x520) + 0x15180;
    LAB_1407d5fb1:
    uVar1 = param_2[uVar6];
    if (uVar5 == param_3) {
        uVar5 = 0;
    }
    uVar2 = param_2[uVar5] - uVar1;
    if (uVar5 < uVar6) {
        uVar2 = uVar2 + 0x15180;
    }
    *param_4 = uVar6;
    *param_5 = uVar5;
    *param_6 = (float)(ulonglong)(uVar4 - uVar1) / (float)(ulonglong)uVar2;
    return 2;
}



void FUN_1407d6010(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
    ulonglong uVar1;

    uVar1 = 0;
    if (*(longlong *)(param_1 + 0x120) != 0) {
        do {
            FUN_1407d6080(param_1,uVar1,param_4);
            uVar1 = (ulonglong)((int)uVar1 + 1);
        } while (uVar1 < *(ulonglong *)(param_1 + 0x120));
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407d6080(longlong *param_1,uint param_2,uint param_3,undefined8 param_4,float *param_5)

{
    float fVar1;
    longlong *plVar2;
    undefined auVar3 [12];
    undefined auVar4 [12];
    bool bVar5;
    int iVar6;
    ulonglong uVar7;
    longlong lVar8;
    float *pfVar9;
    undefined (*pauVar10) [16];
    ulonglong uVar11;
    float *pfVar12;
    longlong **pplVar13;
    uint uVar14;
    float fVar15;
    float fVar16;
    undefined4 uVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    float in_XMM3_Da;
    float fVar23;
    float fVar24;
    float fVar26;
    float fVar27;
    undefined auVar25 [16];
    float fVar28;
    float fVar29;
    float fVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    undefined auStack472 [32];
    undefined local_1b8 [8];
    float fStack432;
    undefined4 local_1a8;
    undefined8 local_1a4;
    undefined4 local_19c;
    undefined local_198 [8];
    float fStack400;
    float local_188;
    float local_184;
    uint local_180;
    undefined4 local_17c;
    float local_178;
    float local_174;
    float local_170;
    undefined4 local_16c;
    float local_168;
    float local_164;
    float local_160;
    undefined4 local_15c;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined local_148 [16];
    undefined local_138 [16];
    undefined local_128 [16];
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    float *local_108;
    undefined *local_100;
    ulonglong local_b8;

    local_b8 = DAT_140c0f7b0 ^ (ulonglong)auStack472;
    uVar7 = (ulonglong)param_2;
    uVar11 = uVar7;
    if (param_1[0x26] != 0) {
        if ((ulonglong)param_1[0x26] < (ulonglong)param_1[0x24]) goto LAB_1407d67ef;
        uVar11 = (ulonglong)*(uint *)(param_1[0x25] + uVar7 * 4);
    }
    pplVar13 = (longlong **)(uVar11 * 0x20 + param_1[0x23]);
    plVar2 = *pplVar13;
    if (plVar2 != (longlong *)0x0) {
        uVar11 = 0;
        bVar5 = false;
        _local_1b8 = _local_1b8 & (undefined  [16])0xffffffff00000000;
        iVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,local_1b8,0);
        if (iVar6 != 0) {
            fVar33 = 0.0;
            uVar14 = ~(param_3 >> 7) & 1;
            if (uVar14 != 0) {
                if (((param_3 & 0x20) == 0) &&
                    (uVar7 = (**(code **)(*param_1 + 0xc0))(param_1,uVar7), (uVar7 & 2) != 0)) {
                    lVar8 = (**(code **)(*plVar2 + 0x1a8))(plVar2,0x96,0);
                    _local_1b8 = ZEXT812(0x96);
                    local_1a8 = 0;
                    local_1a4 = 3;
                    local_19c = 0;
                    _local_1b8 = CONCAT412((uint)(*(int *)(param_1[3] + 0x520) * *(int *)(lVar8 + 0x14)) /
                                           0x15180,_local_1b8);
                    (**(code **)(*plVar2 + 0x248))(plVar2,0,local_1b8);
                }
                fVar31 = DAT_140c3b438 * 0.005555556 * *(float *)((longlong)pplVar13 + 0xc);
                fVar29 = DAT_140c3b438 * 0.005555556 * *(float *)(pplVar13 + 1);
                local_170 = (float)FUN_1408fe3d0(fVar29);
                fVar29 = (float)FUN_1408fc950(fVar29);
                fVar15 = (float)FUN_1408fe3d0(fVar31);
                local_160 = (float)FUN_1408fc950(fVar31);
                fVar31 = (float)FUN_1408fe3d0(fVar33);
                fVar16 = (float)FUN_1408fc950(fVar33);
                local_17c = 0;
                local_16c = 0;
                local_15c = 0;
                local_184 = fVar31 * local_160;
                local_188 = fVar16 * local_160;
                local_180 = (uint)fVar15 ^ 0x80000000;
                local_178 = fVar16 * fVar15 * local_170 - fVar31 * fVar29;
                local_174 = fVar16 * fVar29 + fVar31 * fVar15 * local_170;
                local_168 = fVar16 * fVar15 * fVar29 + fVar31 * local_170;
                local_158 = _DAT_140c78440;
                uStack340 = uRam0000000140c78444;
                uStack336 = uRam0000000140c78448;
                uStack332 = uRam0000000140c7844c;
                local_164 = fVar31 * fVar15 * fVar29 - fVar16 * local_170;
                local_170 = local_160 * local_170;
                local_160 = local_160 * fVar29;
                if ((param_3 & 2) != 0) {
                    local_108 = &local_188;
                    local_100 = local_148;
                    local_118 = _DAT_140c78440;
                    uStack276 = uRam0000000140c78444;
                    uStack272 = uRam0000000140c78448;
                    uStack268 = uRam0000000140c7844c;
                    _local_1b8 = CONCAT88(local_100,local_108);
                    local_148 = CONCAT412(fRam0000000140c7841c * 1.0,
                                          CONCAT48(fRam0000000140c78418 * 1.0,
                                                   CONCAT44(fRam0000000140c78414 * 1.0,_DAT_140c78410 * 1.0)))
                            ;
                    local_138 = CONCAT412(fRam0000000140c7842c * -1.0,
                                          CONCAT48(fRam0000000140c78428 * -1.0,
                                                   CONCAT44(fRam0000000140c78424 * -1.0,_DAT_140c78420 * -1.0)
                                          ));
                    local_128 = CONCAT412(fRam0000000140c7843c * 1.0,
                                          CONCAT48(fRam0000000140c78438 * 1.0,
                                                   CONCAT44(fRam0000000140c78434 * 1.0,_DAT_140c78430 * 1.0)))
                            ;
                    FUN_1401afb10(&local_108,&local_188);
                }
                uVar17 = (**(code **)(*plVar2 + 0x48))(plVar2,&local_188);
                (**(code **)(*plVar2 + 0x70))
                        (uVar17,in_XMM3_Da * *(float *)((longlong)pplVar13 + 0x1c),plVar2);
                (**(code **)(*plVar2 + 0xb0))(plVar2,pplVar13 + 2);
                (**(code **)(*plVar2 + 0xf0))(plVar2,param_1[3] + 0xb9c);
            }
            pfVar9 = (float *)(**(code **)(*plVar2 + 0x488))(plVar2);
            pauVar10 = (undefined (*) [16])(**(code **)(*plVar2 + 0x50))(plVar2);
            fVar29 = *(float *)pauVar10[2];
            fVar15 = *(float *)(pauVar10[2] + 4);
            auVar25 = *pauVar10;
            fVar24 = SUB164(auVar25,0);
            fVar26 = SUB164(auVar25 >> 0x20,0);
            fVar27 = SUB164(auVar25 >> 0x40,0);
            fVar31 = *(float *)pauVar10[1];
            fVar16 = *(float *)(pauVar10[1] + 4);
            fVar32 = fVar29 * fVar29 + fVar15 * fVar15 + 0.0;
            fVar30 = fVar31 * fVar31 + fVar16 * fVar16 + 0.0;
            fVar27 = fVar24 * fVar24 + fVar26 * fVar26 + fVar27 * fVar27;
            if (fVar27 <= fVar30) {
                fVar27 = fVar30;
            }
            if (fVar27 <= fVar32) {
                fVar27 = fVar32;
            }
            auVar25 = sqrtps(auVar25,ZEXT416((uint)fVar27));
            uVar7 = uVar11;
            pfVar12 = param_5;
            do {
                if (SUB164(auVar25,0) * pfVar9[0xc] <
                    (pfVar9[8] * fVar24 + pfVar9[9] * fVar31 + fVar29 * 0.0 + *(float *)pauVar10[3]) *
                    *pfVar12 +
                    (pfVar9[8] * fVar26 + pfVar9[9] * fVar16 + fVar15 * 0.0 + *(float *)(pauVar10[3] + 4)) *
                    pfVar12[1] + 0.0 + pfVar12[3]) goto LAB_1407d676c;
                uVar7 = uVar7 + 1;
                pfVar12 = pfVar12 + 4;
            } while (uVar7 < 6);
            auVar4 = *(undefined (*) [12])pauVar10[3];
            auVar3 = *(undefined (*) [12])pauVar10[3];
            fVar29 = *(float *)*pauVar10;
            fVar15 = *pfVar9;
            fVar31 = pfVar9[4];
            local_198._0_4_ = SUB124(auVar3,0);
            local_1b8._0_4_ = SUB124(auVar4,0);
            fVar16 = fVar31;
            fVar27 = fVar15;
            if (fVar33 < fVar29) {
                fVar16 = fVar15;
                fVar27 = fVar31;
            }
            fVar24 = pfVar9[1];
            fVar26 = pfVar9[5];
            fVar30 = *(float *)pauVar10[1];
            fVar32 = fVar26;
            fVar21 = fVar24;
            if (fVar33 < fVar30) {
                fVar32 = fVar24;
                fVar21 = fVar26;
            }
            fVar28 = pfVar9[2];
            fVar1 = pfVar9[6];
            fVar19 = *(float *)pauVar10[2];
            fVar18 = fVar28;
            fVar23 = fVar1;
            if (fVar33 < fVar19) {
                fVar18 = fVar1;
                fVar23 = fVar28;
            }
            fVar32 = local_198._0_4_ + fVar16 * fVar29 + fVar32 * fVar30 + fVar23 * fVar19;
            local_198._4_4_ = SUB124(auVar3 >> 0x20,0);
            fVar30 = local_1b8._0_4_ + fVar27 * fVar29 + fVar21 * fVar30 + fVar18 * fVar19;
            fVar29 = *(float *)(*pauVar10 + 4);
            fVar16 = fVar31;
            fVar27 = fVar15;
            if (fVar33 < fVar29) {
                fVar16 = fVar15;
                fVar27 = fVar31;
            }
            fVar21 = *(float *)(pauVar10[1] + 4);
            local_1b8._4_4_ = SUB124(auVar4 >> 0x20,0);
            fVar19 = fVar26;
            fVar23 = fVar24;
            if (fVar33 < fVar21) {
                fVar19 = fVar24;
                fVar23 = fVar26;
            }
            fVar18 = *(float *)(pauVar10[2] + 4);
            fVar20 = fVar1;
            fVar22 = fVar28;
            if (fVar33 < fVar18) {
                fVar20 = fVar28;
                fVar22 = fVar1;
            }
            fVar23 = local_1b8._4_4_ + fVar27 * fVar29 + fVar23 * fVar21 + fVar22 * fVar18;
            fVar27 = *(float *)(*pauVar10 + 8);
            fVar16 = local_198._4_4_ + fVar16 * fVar29 + fVar19 * fVar21 + fVar20 * fVar18;
            fVar15 = fVar15 * fVar27;
            fStack400 = SUB124(auVar3 >> 0x40,0);
            fStack432 = SUB124(auVar4 >> 0x40,0);
            fVar29 = fVar31 * fVar27;
            if (fVar33 < fVar27) {
                fVar29 = fVar15;
                fVar15 = fVar31 * fVar27;
            }
            fVar31 = *(float *)(pauVar10[1] + 8);
            fVar24 = fVar24 * fVar31;
            fVar27 = fVar26 * fVar31;
            if (fVar33 < fVar31) {
                fVar27 = fVar24;
                fVar24 = fVar26 * fVar31;
            }
            fVar31 = *(float *)(pauVar10[2] + 8);
            fVar28 = fVar28 * fVar31;
            fVar26 = fVar1 * fVar31;
            if (fVar33 < fVar31) {
                fVar26 = fVar28;
                fVar28 = fVar1 * fVar31;
            }
            fVar28 = fStack432 + fVar15 + fVar24 + fVar28;
            fVar26 = fStack400 + fVar29 + fVar27 + fVar26;
            _local_1b8 = CONCAT48(fVar28,CONCAT44(fVar23,fVar30));
            _local_1b8 = CONCAT412(fVar33,_local_1b8);
            _local_198 = CONCAT412(fVar33,CONCAT48(fVar26,CONCAT44(fVar16,fVar32)));
            do {
                if (0.0 < (float)(~-(uint)(0.0 < *param_5) & (uint)fVar30 |
                                  -(uint)(0.0 < *param_5) & (uint)fVar32) * *param_5 +
                          (float)(~-(uint)(0.0 < param_5[1]) & (uint)fVar23 |
                                  -(uint)(0.0 < param_5[1]) & (uint)fVar16) * param_5[1] +
                          (float)(~-(uint)(0.0 < param_5[2]) & (uint)fVar28 |
                                  -(uint)(0.0 < param_5[2]) & (uint)fVar26) * param_5[2] + param_5[3])
                    goto LAB_1407d676c;
                uVar11 = uVar11 + 1;
                param_5 = param_5 + 4;
            } while (uVar11 < 6);
            bVar5 = true;
            LAB_1407d676c:
            if (uVar14 != 0) {
                if ((!bVar5) && ((param_3 & 0x20) == 0)) goto LAB_1407d67ef;
                (**(code **)(*plVar2 + 0x128))(plVar2,1);
            }
            if (bVar5) {
                (**(code **)(*plVar2 + 0x140))(plVar2,1);
            }
        }
    }
    LAB_1407d67ef:
    FUN_1407db4f0(local_b8 ^ (ulonglong)auStack472);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407d6820(longlong param_1,undefined (*param_2) [12])

{
    longlong *plVar1;
    longlong **pplVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28 [16];

    if (0.0 < *(float *)(param_1 + 0x100)) {
        uVar5 = 0x3f800000;
        pplVar2 = (longlong **)(param_1 + 0x148);
        lVar3 = 4;
        do {
            plVar1 = *pplVar2;
            if (plVar1 != (longlong *)0x0) {
                local_58 = _DAT_140c78410;
                uStack84 = uRam0000000140c78414;
                uStack80 = uRam0000000140c78418;
                uStack76 = uRam0000000140c7841c;
                local_48 = _DAT_140c78420;
                uStack68 = uRam0000000140c78424;
                uStack64 = uRam0000000140c78428;
                uStack60 = uRam0000000140c7842c;
                local_38 = _DAT_140c78430;
                uStack52 = uRam0000000140c78434;
                uStack48 = uRam0000000140c78438;
                uStack44 = uRam0000000140c7843c;
                local_28 = CONCAT412(uVar5,*param_2);
                uVar4 = (**(code **)(*plVar1 + 0x48))
                        (*(undefined4 *)(*param_2 + 4),*(undefined4 *)(*param_2 + 8),uVar5,plVar1,
                         &local_58);
                (**(code **)(**pplVar2 + 0x70))(uVar4,*(undefined4 *)(param_1 + 0x100));
                (**(code **)(**pplVar2 + 0x128))(*pplVar2,1);
                (**(code **)(**pplVar2 + 0x140))(*pplVar2,1);
            }
            pplVar2 = pplVar2 + 1;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407d6da0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    longlong *plVar1;
    ulonglong uVar2;
    uint uVar3;
    int iVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    longlong **pplVar7;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    undefined extraout_var [12];
    undefined auVar8 [16];
    undefined extraout_XMM0 [16];
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined auStack376 [32];
    undefined4 local_158;
    undefined8 local_148;
    float fStack320;
    float fStack316;
    undefined8 local_138;
    float fStack304;
    float fStack300;
    undefined8 local_128;
    float fStack288;
    float fStack284;
    undefined4 local_118;
    undefined8 uStack276;
    undefined4 uStack268;
    undefined local_108 [16];
    undefined local_f8 [64];
    undefined8 local_b8;
    undefined *local_b0;
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack376;
    uVar5 = (**(code **)(*param_1 + 0xb0))();
    if (((((uVar5 & 1) != 0) && (param_1[0x36] != 0)) &&
         (uVar3 = (**(code **)(*param_1 + 0xb8))(param_1), uVar3 != 0xffffffff)) &&
        (uVar5 = (ulonglong)uVar3, uVar5 <= (ulonglong)param_1[0x24] && param_1[0x24] != uVar5)) {
        pplVar7 = (longlong **)(uVar5 * 0x20 + param_1[0x23]);
        plVar1 = *pplVar7;
        iVar4 = (**(code **)(*plVar1 + 0x350))(plVar1,9);
        if (iVar4 == 0) {
            FUN_1408fe3d0();
            fVar10 = extraout_XMM0_Da;
            FUN_1408fc950();
            fVar12 = extraout_XMM0_Da_00;
            FUN_1408fe3d0();
            fVar9 = extraout_XMM0_Da_01;
            FUN_1408fc950();
            fStack288 = extraout_XMM0_Da_02;
            FUN_1408fe3d0();
            fVar11 = extraout_XMM0_Da_03;
            FUN_1408fc950();
            fStack316 = 0.0;
            fStack300 = 0.0;
            fStack284 = 0.0;
            fStack320 = (float)((uint)fVar9 ^ 0x80000000);
            local_148 = CONCAT44(fVar11 * fStack288,extraout_XMM0_Da_04 * fStack288);
            fStack304 = fStack288 * fVar10;
            fStack288 = fStack288 * fVar12;
            local_138 = CONCAT44(extraout_XMM0_Da_04 * fVar12 + fVar11 * fVar9 * fVar10,
                                 extraout_XMM0_Da_04 * fVar9 * fVar10 - fVar11 * fVar12);
            local_118 = _DAT_140c78440;
            uStack276 = CONCAT44(uRam0000000140c78448,uRam0000000140c78444);
            uStack268 = uRam0000000140c7844c;
            local_128 = CONCAT44(fVar11 * fVar9 * fVar12 - extraout_XMM0_Da_04 * fVar10,
                                 extraout_XMM0_Da_04 * fVar9 * fVar12 + fVar11 * fVar10);
        }
        else {
            plVar1 = *pplVar7;
            uVar6 = (**(code **)(*plVar1 + 0x370))(plVar1,9);
            local_b8 = param_3;
            FUN_1401afc20(&local_b8,local_f8);
            local_b0 = local_f8;
            local_108 = CONCAT88(local_b0,uVar6);
            local_b8 = uVar6;
            FUN_1401afb10(&local_b8,&local_148);
            fVar9 = local_148._4_4_ * local_148._4_4_;
            uVar5 = SUB128(CONCAT84(SUB168((ZEXT1216(extraout_var) << 0x20) >> 0x40,0),fVar9),0);
            uVar2 = uVar5 & 0xffffffff;
            fVar10 = (float)local_148 * (float)local_148 + (float)uVar2 + fStack320 * fStack320;
            auVar8 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,uVar5 << 0x20 | uVar2)),
                             CONCAT412(fStack316 * fStack316,
                                       CONCAT48(fStack320 * fStack320,CONCAT44(fVar9,fVar10))));
            fVar9 = SUB164(auVar8,0);
            fVar9 = (3.0 - fVar10 * fVar9 * fVar9) * 0.5 * fVar9;
            if (fVar9 <= 0.0) {
                fVar9 = 0.0;
            }
            local_148 = CONCAT44(fVar9 * local_148._4_4_,fVar9 * (float)local_148);
            fStack320 = fVar9 * fStack320;
            fVar9 = local_138._4_4_ * local_138._4_4_;
            fVar10 = (float)local_138 * (float)local_138 + fVar9 + fStack304 * fStack304;
            auVar8 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))),
                             CONCAT412(fStack300 * fStack300,
                                       CONCAT48(fStack304 * fStack304,CONCAT44(fVar9,fVar10))));
            fVar9 = SUB164(auVar8,0);
            fVar9 = (3.0 - fVar10 * fVar9 * fVar9) * 0.5 * fVar9;
            if (fVar9 <= 0.0) {
                fVar9 = 0.0;
            }
            local_138 = CONCAT44(fVar9 * local_138._4_4_,fVar9 * (float)local_138);
            fStack304 = fVar9 * fStack304;
            fVar9 = local_128._4_4_ * local_128._4_4_;
            fVar10 = (float)local_128 * (float)local_128 + fVar9 + fStack288 * fStack288;
            auVar8 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))),
                             CONCAT412(fStack284 * fStack284,
                                       CONCAT48(fStack288 * fStack288,CONCAT44(fVar9,fVar10))));
            fVar9 = SUB164(auVar8,0);
            fVar9 = (3.0 - fVar10 * fVar9 * fVar9) * 0.5 * fVar9;
            uStack276 = 0;
            local_118 = 0;
            if (fVar9 <= 0.0) {
                fVar9 = 0.0;
            }
            local_128 = CONCAT44(fVar9 * local_128._4_4_,fVar9 * (float)local_128);
            fStack288 = fVar9 * fStack288;
        }
        (**(code **)(*(longlong *)param_1[0x36] + 0x48))((longlong *)param_1[0x36],&local_148);
        local_108 = extraout_XMM0 & (undefined  [16])0x0;
        local_158 = 0;
        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,2,local_108);
        (**(code **)(*(longlong *)param_1[0x36] + 0x70))();
        (**(code **)(*(longlong *)param_1[0x36] + 0x140))((longlong *)param_1[0x36],1);
        (**(code **)(*(longlong *)param_1[0x36] + 0x128))((longlong *)param_1[0x36],1);
        (**(code **)(*(longlong *)param_1[0x36] + 0xb0))((longlong *)param_1[0x36],param_1 + 0x156);
    }
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack376);
    return;
}



undefined8 FUN_1407d7270(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    uint *puVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong *)(param_3 + 2) + param_2;
    if (uVar6 < *param_1) {
        return 0x80004005;
    }
    uVar5 = *param_3;
    uVar1 = (ulonglong)uVar5 * 0x18 + *(longlong *)(param_3 + 2) + param_2;
    if (param_1[1] <= uVar1 && uVar1 != param_1[1]) {
        return 0x80004005;
    }
    uVar1 = 0;
    if (uVar5 != 0) {
        uVar1 = uVar6;
    }
    uVar6 = 0;
    lVar4 = ((ulonglong)uVar5 * 0x18 + 0xf & 0xfffffffffffffff0) + uVar1;
    *(ulonglong *)(param_3 + 2) = uVar1;
    if (uVar5 != 0) {
        do {
            puVar3 = (uint *)(param_1[2] + uVar6 * 0x18 + *(longlong *)(param_3 + 2));
            uVar1 = *(longlong *)(puVar3 + 2) + lVar4;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar5 = *puVar3;
            uVar2 = *(longlong *)(puVar3 + 2) + (ulonglong)uVar5 * 4 + lVar4;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (uVar5 != 0) {
                uVar2 = uVar1;
            }
            uVar1 = *(longlong *)(puVar3 + 4) + lVar4;
            *(ulonglong *)(puVar3 + 2) = uVar2;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar2 = (ulonglong)uVar5 * 0x10 + *(longlong *)(puVar3 + 4) + lVar4;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (uVar5 != 0) {
                uVar2 = uVar1;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            *(ulonglong *)(puVar3 + 4) = uVar2;
        } while (uVar5 < *param_3);
    }
    return 0;
}



undefined8 FUN_1407d7380(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    uint *puVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar6) {
        uVar5 = *param_3;
        uVar1 = *(longlong *)(param_3 + 2) + (ulonglong)uVar5 * 0x18 + param_2;
        if (uVar1 < param_1[1] || uVar1 == param_1[1]) {
            uVar1 = 0;
            if (uVar5 != 0) {
                uVar1 = uVar6;
            }
            uVar6 = 0;
            *(ulonglong *)(param_3 + 2) = uVar1;
            lVar4 = ((ulonglong)uVar5 * 0x18 + 0xf & 0xfffffffffffffff0) + uVar1;
            if (uVar5 != 0) {
                do {
                    puVar3 = (uint *)(param_1[2] + uVar6 * 0x18 + *(longlong *)(param_3 + 2));
                    uVar1 = *(longlong *)(puVar3 + 2) + lVar4;
                    if (uVar1 < *param_1) {
                        return 0x80004005;
                    }
                    uVar5 = *puVar3;
                    uVar2 = *(longlong *)(puVar3 + 2) + (ulonglong)uVar5 * 4 + lVar4;
                    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                        return 0x80004005;
                    }
                    uVar2 = 0;
                    if (uVar5 != 0) {
                        uVar2 = uVar1;
                    }
                    uVar1 = *(longlong *)(puVar3 + 4) + lVar4;
                    *(ulonglong *)(puVar3 + 2) = uVar2;
                    if (uVar1 < *param_1) {
                        return 0x80004005;
                    }
                    uVar2 = (ulonglong)uVar5 * 0x20 + *(longlong *)(puVar3 + 4) + lVar4;
                    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                        return 0x80004005;
                    }
                    uVar2 = 0;
                    if (uVar5 != 0) {
                        uVar2 = uVar1;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                    *(ulonglong *)(puVar3 + 4) = uVar2;
                } while (uVar5 < *param_3);
            }
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1407d7470(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    uint *puVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar6) {
        uVar5 = *param_3;
        uVar1 = *(longlong *)(param_3 + 2) + (ulonglong)uVar5 * 0x18 + param_2;
        if (uVar1 < param_1[1] || uVar1 == param_1[1]) {
            uVar1 = 0;
            if (uVar5 != 0) {
                uVar1 = uVar6;
            }
            uVar6 = 0;
            *(ulonglong *)(param_3 + 2) = uVar1;
            lVar4 = ((ulonglong)uVar5 * 0x18 + 0xf & 0xfffffffffffffff0) + uVar1;
            if (uVar5 != 0) {
                do {
                    puVar3 = (uint *)(param_1[2] + uVar6 * 0x18 + *(longlong *)(param_3 + 2));
                    uVar1 = *(longlong *)(puVar3 + 2) + lVar4;
                    if (uVar1 < *param_1) {
                        return 0x80004005;
                    }
                    uVar5 = *puVar3;
                    uVar2 = *(longlong *)(puVar3 + 2) + (ulonglong)uVar5 * 4 + lVar4;
                    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                        return 0x80004005;
                    }
                    uVar2 = 0;
                    if (uVar5 != 0) {
                        uVar2 = uVar1;
                    }
                    uVar1 = *(longlong *)(puVar3 + 4) + lVar4;
                    *(ulonglong *)(puVar3 + 2) = uVar2;
                    if (uVar1 < *param_1) {
                        return 0x80004005;
                    }
                    uVar2 = (ulonglong)uVar5 * 0x30 + *(longlong *)(puVar3 + 4) + lVar4;
                    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                        return 0x80004005;
                    }
                    uVar2 = 0;
                    if (uVar5 != 0) {
                        uVar2 = uVar1;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                    *(ulonglong *)(puVar3 + 4) = uVar2;
                } while (uVar5 < *param_3);
            }
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1407d7560(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            *(ulonglong *)(param_3 + 2) = uVar3;
            if ((*param_1 <= uVar1) &&
                (uVar3 = (ulonglong)uVar2 * 0x6c + *(longlong *)(param_3 + 4) + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
            return 0x80004005;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1407d75f0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            *(ulonglong *)(param_3 + 2) = uVar3;
            if ((*param_1 <= uVar1) &&
                (uVar3 = (ulonglong)uVar2 * 0x110 + *(longlong *)(param_3 + 4) + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
            return 0x80004005;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1407d7680(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    uint *puVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar6) {
        uVar5 = *param_3;
        uVar1 = *(longlong *)(param_3 + 2) + (ulonglong)uVar5 * 0x18 + param_2;
        if (uVar1 < param_1[1] || uVar1 == param_1[1]) {
            uVar1 = 0;
            if (uVar5 != 0) {
                uVar1 = uVar6;
            }
            uVar6 = 0;
            *(ulonglong *)(param_3 + 2) = uVar1;
            lVar4 = ((ulonglong)uVar5 * 0x18 + 0xf & 0xfffffffffffffff0) + uVar1;
            if (uVar5 != 0) {
                do {
                    puVar3 = (uint *)(param_1[2] + uVar6 * 0x18 + *(longlong *)(param_3 + 2));
                    uVar1 = *(longlong *)(puVar3 + 2) + lVar4;
                    if (uVar1 < *param_1) {
                        return 0x80004005;
                    }
                    uVar5 = *puVar3;
                    uVar2 = *(longlong *)(puVar3 + 2) + (ulonglong)uVar5 * 4 + lVar4;
                    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                        return 0x80004005;
                    }
                    uVar2 = 0;
                    if (uVar5 != 0) {
                        uVar2 = uVar1;
                    }
                    uVar1 = *(longlong *)(puVar3 + 4) + lVar4;
                    *(ulonglong *)(puVar3 + 2) = uVar2;
                    if (uVar1 < *param_1) {
                        return 0x80004005;
                    }
                    uVar2 = (ulonglong)uVar5 * 0x6c + *(longlong *)(puVar3 + 4) + lVar4;
                    if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                        return 0x80004005;
                    }
                    uVar2 = 0;
                    if (uVar5 != 0) {
                        uVar2 = uVar1;
                    }
                    uVar5 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar5;
                    *(ulonglong *)(puVar3 + 4) = uVar2;
                } while (uVar5 < *param_3);
            }
            return 0;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1407d7770(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            *(ulonglong *)(param_3 + 2) = uVar3;
            if ((*param_1 <= uVar1) &&
                (uVar3 = (ulonglong)uVar2 * 0x20 + *(longlong *)(param_3 + 4) + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
            return 0x80004005;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1407d7800(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            *(ulonglong *)(param_3 + 2) = uVar3;
            if ((*param_1 <= uVar1) &&
                (uVar3 = (ulonglong)uVar2 * 0x10 + *(longlong *)(param_3 + 4) + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
            return 0x80004005;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1407d7890(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            *(ulonglong *)(param_3 + 2) = uVar3;
            if ((*param_1 <= uVar1) &&
                (uVar3 = *(longlong *)(param_3 + 4) + (ulonglong)uVar2 * 0x18 + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
            return 0x80004005;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1407d7920(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;

    uVar5 = *(longlong *)(param_3 + 2) + param_2;
    if (uVar5 < *param_1) {
        return 0x80004005;
    }
    uVar4 = *param_3;
    uVar1 = *(longlong *)(param_3 + 2) + (ulonglong)uVar4 * 0x30 + param_2;
    if (param_1[1] <= uVar1 && uVar1 != param_1[1]) {
        return 0x80004005;
    }
    uVar1 = 0;
    if (uVar4 != 0) {
        uVar1 = uVar5;
    }
    uVar5 = 0;
    *(ulonglong *)(param_3 + 2) = uVar1;
    lVar6 = (ulonglong)uVar4 * 0x30 + uVar1;
    if (uVar4 != 0) {
        do {
            lVar7 = uVar5 * 0x30 + param_1[2] + *(longlong *)(param_3 + 2);
            uVar1 = *(longlong *)(lVar7 + 0x10) + lVar6;
            if ((uVar1 < *param_1) ||
                (uVar2 = *(longlong *)(lVar7 + 0x10) + (ulonglong)*(uint *)(lVar7 + 8) * 2 + lVar6,
                        param_1[1] <= uVar2 && uVar2 != param_1[1])) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (*(uint *)(lVar7 + 8) != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong *)(lVar7 + 0x10) = uVar2;
            uVar3 = FUN_1407d7770(param_1,lVar6);
            if ((int)uVar3 < 0) {
                return uVar3;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < *param_3);
    }
    return 0;
}



undefined8 FUN_1407d7a20(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    uint uVar2;
    ulonglong uVar3;

    uVar1 = *(longlong *)(param_3 + 2) + param_2;
    if (*param_1 <= uVar1) {
        uVar2 = *param_3;
        uVar3 = *(longlong *)(param_3 + 2) + (ulonglong)uVar2 * 4 + param_2;
        if (uVar3 < param_1[1] || uVar3 == param_1[1]) {
            uVar3 = 0;
            if (uVar2 != 0) {
                uVar3 = uVar1;
            }
            uVar1 = *(longlong *)(param_3 + 4) + param_2;
            *(ulonglong *)(param_3 + 2) = uVar3;
            if ((*param_1 <= uVar1) &&
                (uVar3 = (ulonglong)uVar2 * 0x60 + *(longlong *)(param_3 + 4) + param_2,
                        uVar3 < param_1[1] || uVar3 == param_1[1])) {
                uVar3 = 0;
                if (uVar2 != 0) {
                    uVar3 = uVar1;
                }
                *(ulonglong *)(param_3 + 4) = uVar3;
                return 0;
            }
            return 0x80004005;
        }
    }
    return 0x80004005;
}



undefined8 FUN_1407d7ab0(ulonglong *param_1,longlong param_2,uint *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    uint *puVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    uVar6 = *(longlong *)(param_3 + 2) + param_2;
    if (uVar6 < *param_1) {
        return 0x80004005;
    }
    uVar5 = *param_3;
    uVar1 = (ulonglong)uVar5 * 0x18 + *(longlong *)(param_3 + 2) + param_2;
    if (param_1[1] <= uVar1 && uVar1 != param_1[1]) {
        return 0x80004005;
    }
    uVar1 = 0;
    if (uVar5 != 0) {
        uVar1 = uVar6;
    }
    uVar6 = 0;
    lVar4 = ((ulonglong)uVar5 * 0x18 + 0xf & 0xfffffffffffffff0) + uVar1;
    *(ulonglong *)(param_3 + 2) = uVar1;
    if (uVar5 != 0) {
        do {
            puVar3 = (uint *)(param_1[2] + uVar6 * 0x18 + *(longlong *)(param_3 + 2));
            uVar1 = *(longlong *)(puVar3 + 2) + lVar4;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar5 = *puVar3;
            uVar2 = *(longlong *)(puVar3 + 2) + (ulonglong)uVar5 * 4 + lVar4;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (uVar5 != 0) {
                uVar2 = uVar1;
            }
            *(ulonglong *)(puVar3 + 2) = uVar2;
            uVar1 = *(longlong *)(puVar3 + 4) + lVar4;
            if (uVar1 < *param_1) {
                return 0x80004005;
            }
            uVar2 = *(longlong *)(puVar3 + 4) + (ulonglong)uVar5 * 8 + lVar4;
            if (param_1[1] <= uVar2 && uVar2 != param_1[1]) {
                return 0x80004005;
            }
            uVar2 = 0;
            if (uVar5 != 0) {
                uVar2 = uVar1;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            *(ulonglong *)(puVar3 + 4) = uVar2;
        } while (uVar5 < *param_3);
    }
    return 0;
}



void FUN_1407d7ba0(longlong *param_1,ulonglong param_2)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined4 *puVar8;
    ulonglong uVar9;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar5 = FUN_14018db00(*param_1);
        uVar9 = 0;
        uVar1 = param_1[1];
        if (uVar1 < param_2) {
            puVar7 = (undefined8 *)(uVar1 * 0x20 + lVar5);
            lVar6 = param_2 - uVar1;
            do {
                if (puVar7 != (undefined8 *)0x0) {
                    *puVar7 = 0;
                }
                puVar7 = puVar7 + 4;
                lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
        }
        if (*param_1 != lVar5) {
            if (param_1[1] != 0) {
                puVar8 = (undefined4 *)(lVar5 + 0xc);
                do {
                    if ((undefined8 *)(puVar8 + -3) != (undefined8 *)0x0) {
                        puVar7 = (undefined8 *)((longlong)puVar8 + *param_1 + (-0xc - lVar5));
                        *(undefined8 *)(puVar8 + -3) = *puVar7;
                        puVar8[-1] = *(undefined4 *)(puVar7 + 1);
                        *puVar8 = *(undefined4 *)((longlong)puVar7 + 0xc);
                        uVar2 = *(undefined4 *)((longlong)puVar7 + 0x14);
                        uVar3 = *(undefined4 *)(puVar7 + 3);
                        uVar4 = *(undefined4 *)((longlong)puVar7 + 0x1c);
                        puVar8[1] = *(undefined4 *)(puVar7 + 2);
                        puVar8[2] = uVar2;
                        puVar8[3] = uVar3;
                        puVar8[4] = uVar4;
                    }
                    uVar9 = uVar9 + 1;
                    puVar8 = puVar8 + 8;
                } while (uVar9 < (ulonglong)param_1[1]);
            }
            lVar6 = *param_1;
            if (lVar6 != 0) {
                (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
            }
            *param_1 = lVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_1407d7c90(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong lVar5;

    if (param_2 < (ulonglong)param_1[1]) {
        if ((ulonglong)param_1[1] <= param_2) {
            param_1[1] = param_2;
            return;
        }
        lVar5 = param_2 << 4;
        uVar3 = param_2;
        do {
            lVar1 = *(longlong *)(lVar5 + *param_1);
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            uVar3 = uVar3 + 1;
            lVar5 = lVar5 + 0x10;
        } while (uVar3 < (ulonglong)param_1[1]);
    }
    else {
        lVar5 = FUN_14018db00(*param_1,param_2,0x10);
        uVar4 = 0;
        uVar3 = param_1[1];
        if (uVar3 < param_2) {
            puVar2 = (undefined8 *)(uVar3 * 0x10 + lVar5);
            lVar1 = param_2 - uVar3;
            do {
                if (puVar2 != (undefined8 *)0x0) {
                    puVar2[1] = 0;
                    *puVar2 = 0;
                }
                puVar2 = puVar2 + 2;
                lVar1 = lVar1 + -1;
            } while (lVar1 != 0);
        }
        if (*param_1 != lVar5) {
            uVar3 = uVar4;
            if (param_1[1] != 0) {
                do {
                    if (uVar4 + lVar5 != 0) {
                        FUN_140776240(uVar4 + lVar5,*param_1 + uVar4);
                    }
                    lVar1 = *(longlong *)(uVar4 + *param_1);
                    if (lVar1 != 0) {
                        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                    }
                    uVar3 = uVar3 + 1;
                    uVar4 = uVar4 + 0x10;
                } while (uVar3 < (ulonglong)param_1[1]);
            }
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar5;
        }
    }
    param_1[1] = param_2;
    return;
}



void FUN_1407d7dc0(longlong *param_1,ulonglong param_2)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    undefined4 *puVar8;
    longlong lVar9;
    ulonglong uVar10;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        puVar5 = (undefined4 *)FUN_14018db00(*param_1);
        uVar1 = param_1[1];
        uVar10 = 0;
        if (uVar1 < param_2) {
            puVar7 = (undefined8 *)(puVar5 + uVar1 * 8);
            lVar9 = param_2 - uVar1;
            do {
                if (puVar7 != (undefined8 *)0x0) {
                    *(undefined4 *)(puVar7 + 2) = 0;
                    *puVar7 = 0;
                    puVar7[1] = 0;
                }
                puVar7 = puVar7 + 4;
                lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
        }
        if ((undefined4 *)*param_1 != puVar5) {
            if (param_1[1] != 0) {
                puVar8 = puVar5;
                do {
                    if (puVar8 != (undefined4 *)0x0) {
                        puVar6 = (undefined4 *)((longlong)puVar8 + (*param_1 - (longlong)puVar5));
                        uVar2 = puVar6[1];
                        uVar3 = puVar6[2];
                        uVar4 = puVar6[3];
                        *puVar8 = *puVar6;
                        puVar8[1] = uVar2;
                        puVar8[2] = uVar3;
                        puVar8[3] = uVar4;
                        puVar8[4] = puVar6[4];
                    }
                    uVar10 = uVar10 + 1;
                    puVar8 = puVar8 + 8;
                } while (uVar10 < (ulonglong)param_1[1]);
            }
            lVar9 = *param_1;
            if (lVar9 != 0) {
                (**(code **)(*(longlong *)(lVar9 + -0x10) + 8))(lVar9 + -0x10);
            }
            *param_1 = (longlong)puVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_1407d7ea0(longlong *param_1,ulonglong param_2)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined8 *puVar8;
    undefined4 *puVar9;
    ulonglong uVar10;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar5 = FUN_14018db00(*param_1);
        uVar1 = param_1[1];
        uVar10 = 0;
        if (uVar1 < param_2) {
            puVar8 = (undefined8 *)(uVar1 * 0x30 + lVar5);
            lVar6 = param_2 - uVar1;
            do {
                if (puVar8 != (undefined8 *)0x0) {
                    *(undefined4 *)(puVar8 + 4) = 0;
                    *puVar8 = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                }
                puVar8 = puVar8 + 6;
                lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
        }
        if (*param_1 != lVar5) {
            if (param_1[1] != 0) {
                puVar9 = (undefined4 *)(lVar5 + 0x10);
                do {
                    if (puVar9 + -4 != (undefined4 *)0x0) {
                        puVar7 = (undefined4 *)((longlong)puVar9 + *param_1 + (-0x10 - lVar5));
                        puVar9[-4] = *puVar7;
                        puVar9[-3] = puVar7[1];
                        uVar2 = puVar7[5];
                        uVar3 = puVar7[6];
                        uVar4 = puVar7[7];
                        *puVar9 = puVar7[4];
                        puVar9[1] = uVar2;
                        puVar9[2] = uVar3;
                        puVar9[3] = uVar4;
                        puVar9[4] = puVar7[8];
                    }
                    uVar10 = uVar10 + 1;
                    puVar9 = puVar9 + 0xc;
                } while (uVar10 < (ulonglong)param_1[1]);
            }
            lVar6 = *param_1;
            if (lVar6 != 0) {
                (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
            }
            *param_1 = lVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_1407d7fa0(longlong *param_1,ulonglong param_2)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined8 *puVar8;
    undefined4 *puVar9;
    ulonglong uVar10;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar5 = FUN_14018db00(*param_1);
        uVar10 = 0;
        uVar1 = param_1[1];
        if (uVar1 < param_2) {
            puVar8 = (undefined8 *)(uVar1 * 0x40 + lVar5);
            lVar6 = param_2 - uVar1;
            do {
                if (puVar8 != (undefined8 *)0x0) {
                    *(undefined4 *)(puVar8 + 6) = 0;
                    *puVar8 = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    puVar8[4] = 0;
                    puVar8[5] = 0;
                }
                puVar8 = puVar8 + 8;
                lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
        }
        if (*param_1 != lVar5) {
            if (param_1[1] != 0) {
                puVar9 = (undefined4 *)(lVar5 + 0x10);
                do {
                    if (puVar9 + -4 != (undefined4 *)0x0) {
                        puVar7 = (undefined4 *)((longlong)puVar9 + *param_1 + (-0x10 - lVar5));
                        puVar9[-4] = *puVar7;
                        puVar9[-3] = puVar7[1];
                        uVar2 = puVar7[5];
                        uVar3 = puVar7[6];
                        uVar4 = puVar7[7];
                        *puVar9 = puVar7[4];
                        puVar9[1] = uVar2;
                        puVar9[2] = uVar3;
                        puVar9[3] = uVar4;
                        uVar2 = puVar7[9];
                        uVar3 = puVar7[10];
                        uVar4 = puVar7[0xb];
                        puVar9[4] = puVar7[8];
                        puVar9[5] = uVar2;
                        puVar9[6] = uVar3;
                        puVar9[7] = uVar4;
                        puVar9[8] = puVar7[0xc];
                    }
                    uVar10 = uVar10 + 1;
                    puVar9 = puVar9 + 0x10;
                } while (uVar10 < (ulonglong)param_1[1]);
            }
            lVar6 = *param_1;
            if (lVar6 != 0) {
                (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
            }
            *param_1 = lVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_1407d80b0(longlong *param_1,ulonglong param_2)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined8 *puVar8;
    undefined4 *puVar9;
    ulonglong uVar10;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar5 = FUN_14018db00(*param_1);
        uVar10 = 0;
        uVar1 = param_1[1];
        if (uVar1 < param_2) {
            puVar8 = (undefined8 *)(uVar1 * 0x40 + lVar5);
            lVar6 = param_2 - uVar1;
            do {
                if (puVar8 != (undefined8 *)0x0) {
                    *(undefined4 *)(puVar8 + 6) = 0;
                    *puVar8 = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    puVar8[4] = 0;
                    puVar8[5] = 0;
                }
                puVar8 = puVar8 + 8;
                lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
        }
        if (*param_1 != lVar5) {
            if (param_1[1] != 0) {
                puVar9 = (undefined4 *)(lVar5 + 0x10);
                do {
                    if (puVar9 + -4 != (undefined4 *)0x0) {
                        puVar7 = (undefined4 *)((longlong)puVar9 + *param_1 + (-0x10 - lVar5));
                        puVar9[-4] = *puVar7;
                        puVar9[-3] = puVar7[1];
                        uVar2 = puVar7[5];
                        uVar3 = puVar7[6];
                        uVar4 = puVar7[7];
                        *puVar9 = puVar7[4];
                        puVar9[1] = uVar2;
                        puVar9[2] = uVar3;
                        puVar9[3] = uVar4;
                        puVar9[4] = puVar7[8];
                        puVar9[8] = puVar7[0xc];
                    }
                    uVar10 = uVar10 + 1;
                    puVar9 = puVar9 + 0x10;
                } while (uVar10 < (ulonglong)param_1[1]);
            }
            lVar6 = *param_1;
            if (lVar6 != 0) {
                (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
            }
            *param_1 = lVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_1407d81c0(longlong *param_1,ulonglong param_2)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined8 *puVar8;
    undefined4 *puVar9;
    ulonglong uVar10;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar5 = FUN_14018db00(*param_1);
        uVar10 = 0;
        uVar1 = param_1[1];
        if (uVar1 < param_2) {
            puVar8 = (undefined8 *)(uVar1 * 0x40 + lVar5);
            lVar6 = param_2 - uVar1;
            do {
                if (puVar8 != (undefined8 *)0x0) {
                    *(undefined4 *)(puVar8 + 6) = 0;
                    *puVar8 = 0;
                    puVar8[1] = 0;
                    puVar8[2] = 0;
                    puVar8[3] = 0;
                    puVar8[4] = 0;
                    puVar8[5] = 0;
                }
                puVar8 = puVar8 + 8;
                lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
        }
        if (*param_1 != lVar5) {
            if (param_1[1] != 0) {
                puVar9 = (undefined4 *)(lVar5 + 0x10);
                do {
                    if (puVar9 + -4 != (undefined4 *)0x0) {
                        puVar7 = (undefined4 *)((longlong)puVar9 + *param_1 + (-0x10 - lVar5));
                        puVar9[-4] = *puVar7;
                        puVar9[-3] = puVar7[1];
                        uVar2 = puVar7[5];
                        uVar3 = puVar7[6];
                        uVar4 = puVar7[7];
                        *puVar9 = puVar7[4];
                        puVar9[1] = uVar2;
                        puVar9[2] = uVar3;
                        puVar9[3] = uVar4;
                        puVar9[4] = puVar7[8];
                        puVar9[5] = puVar7[9];
                        puVar9[8] = puVar7[0xc];
                    }
                    uVar10 = uVar10 + 1;
                    puVar9 = puVar9 + 0x10;
                } while (uVar10 < (ulonglong)param_1[1]);
            }
            lVar6 = *param_1;
            if (lVar6 != 0) {
                (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
            }
            *param_1 = lVar5;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



void FUN_1407d82d0(longlong *param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if ((ulonglong)param_1[1] < param_2 || param_1[1] == param_2) {
        lVar2 = FUN_14018db00(*param_1,param_2,0x70);
        if (*param_1 != lVar2) {
            FUN_1407db590(lVar2,*param_1,param_1[1] * 0x70);
            lVar1 = *param_1;
            if (lVar1 != 0) {
                (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            *param_1 = lVar2;
        }
        param_1[1] = param_2;
        return;
    }
    param_1[1] = param_2;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407d8350(uint *param_1,uint param_2,undefined (*param_3) [16],undefined8 param_4,
                   uint *param_5)

{
    float *pfVar1;
    uint *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 *puVar7;
    float *pfVar8;
    uint uVar9;
    uint uVar10;
    ulonglong uVar11;
    uint uVar12;
    float fVar14;
    uint local_res20 [2];
    ulonglong uVar13;

    uVar6 = uRam0000000140dc4f8c;
    uVar5 = uRam0000000140dc4f88;
    uVar4 = uRam0000000140dc4f84;
    uVar10 = *param_1;
    if (uVar10 == 0) {
        if ((DAT_140dc4f70 & 1) == 0) {
            DAT_140dc4f70 = DAT_140dc4f70 | 1;
        }
        *(undefined4 *)*param_3 = _DAT_140dc4f80;
        *(undefined4 *)(*param_3 + 4) = uVar4;
        *(undefined4 *)(*param_3 + 8) = uVar5;
        *(undefined4 *)(*param_3 + 0xc) = uVar6;
        return;
    }
    if (uVar10 == 1) {
        puVar7 = *(undefined4 **)(param_1 + 4);
        uVar4 = puVar7[1];
        uVar5 = puVar7[2];
        uVar6 = puVar7[3];
        *(undefined4 *)*param_3 = *puVar7;
        *(undefined4 *)(*param_3 + 4) = uVar4;
        *(undefined4 *)(*param_3 + 8) = uVar5;
        *(undefined4 *)(*param_3 + 0xc) = uVar6;
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar9 = *param_5;
        uVar10 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar9 * 4);
        if (uVar10 <= param_2) {
            uVar12 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar9 + 1) * 4);
            if (param_2 < uVar12) {
                pfVar1 = (float *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar9 + 1) * 0x10);
                pfVar8 = (float *)((ulonglong)uVar9 * 0x10 + *(longlong *)(param_1 + 4));
                fVar14 = (float)(ulonglong)(param_2 - uVar10) / (float)(ulonglong)(uVar12 - uVar10);
                *param_3 = CONCAT412(fVar14 * (pfVar1[3] - pfVar8[3]) + pfVar8[3],
                                     CONCAT48(fVar14 * (pfVar1[2] - pfVar8[2]) + pfVar8[2],
                                              CONCAT44(fVar14 * (pfVar1[1] - pfVar8[1]) + pfVar8[1],
                                                       fVar14 * (*pfVar1 - *pfVar8) + *pfVar8)));
                return;
            }
        }
        uVar12 = uVar9 + 1;
        uVar13 = (ulonglong)uVar12;
        *param_5 = uVar12;
        uVar10 = *param_1;
        if (((uVar12 < uVar10 - 1) &&
             (lVar3 = *(longlong *)(param_1 + 2), puVar2 = (uint *)(lVar3 + uVar13 * 4),
                     *puVar2 < param_2 || *puVar2 == param_2)) &&
            (param_2 < *(uint *)(lVar3 + (ulonglong)(uVar9 + 2) * 4))) {
            pfVar1 = (float *)(*(longlong *)(param_1 + 4) + uVar13 * 0x10);
            pfVar8 = (float *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar9 + 2) * 0x10);
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar13 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar3 + (ulonglong)(uVar9 + 2) * 4) -
                                    *(int *)(lVar3 + uVar13 * 4));
            *param_3 = CONCAT412(fVar14 * (pfVar8[3] - pfVar1[3]) + pfVar1[3],
                                 CONCAT48(fVar14 * (pfVar8[2] - pfVar1[2]) + pfVar1[2],
                                          CONCAT44(fVar14 * (pfVar8[1] - pfVar1[1]) + pfVar1[1],
                                                   fVar14 * (*pfVar8 - *pfVar1) + *pfVar1)));
            return;
        }
    }
    uVar13 = 0;
    if (uVar10 != 0) {
        uVar9 = uVar10;
        do {
            uVar12 = (uVar9 - (int)uVar13 >> 1) + (int)uVar13;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar12 * 4) <= param_2) {
                uVar13 = (ulonglong)(uVar12 + 1);
                uVar12 = uVar9;
            }
            uVar9 = uVar12;
        } while ((uint)uVar13 < uVar9);
    }
    uVar9 = (uint)uVar13;
    uVar11 = (ulonglong)(uVar9 - 1);
    if (uVar9 != 0) {
        if (uVar10 != uVar9) {
            pfVar1 = (float *)(*(longlong *)(param_1 + 4) + uVar11 * 0x10);
            pfVar8 = (float *)(*(longlong *)(param_1 + 4) + uVar13 * 0x10);
            lVar3 = *(longlong *)(param_1 + 2);
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar11 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar3 + uVar13 * 4) - *(int *)(lVar3 + uVar11 * 4))
                    ;
            *param_3 = CONCAT412(fVar14 * (pfVar8[3] - pfVar1[3]) + pfVar1[3],
                                 CONCAT48(fVar14 * (pfVar8[2] - pfVar1[2]) + pfVar1[2],
                                          CONCAT44(fVar14 * (pfVar8[1] - pfVar1[1]) + pfVar1[1],
                                                   fVar14 * (*pfVar8 - *pfVar1) + *pfVar1)));
            *param_5 = uVar9 - 1;
            return;
        }
        puVar7 = (undefined4 *)(uVar11 * 0x10 + *(longlong *)(param_1 + 4));
        uVar4 = puVar7[1];
        uVar5 = puVar7[2];
        uVar6 = puVar7[3];
        *(undefined4 *)*param_3 = *puVar7;
        *(undefined4 *)(*param_3 + 4) = uVar4;
        *(undefined4 *)(*param_3 + 8) = uVar5;
        *(undefined4 *)(*param_3 + 0xc) = uVar6;
        *param_5 = *param_1 - 2;
        return;
    }
    puVar7 = *(undefined4 **)(param_1 + 4);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)*param_3 = *puVar7;
    *(undefined4 *)(*param_3 + 4) = uVar4;
    *(undefined4 *)(*param_3 + 8) = uVar5;
    *(undefined4 *)(*param_3 + 0xc) = uVar6;
    *param_5 = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407d8590(uint *param_1,uint param_2,float *param_3,undefined8 param_4,uint *param_5)

{
    uint *puVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;
    float *pfVar5;
    float *pfVar6;
    uint uVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    uint uVar11;
    uint uVar13;
    float fVar14;
    uint local_res20 [2];
    ulonglong uVar12;

    uVar13 = *param_1;
    if (uVar13 == 0) {
        if ((DAT_140dc4f90 & 1) == 0) {
            DAT_140dc4f90 = DAT_140dc4f90 | 1;
        }
        *param_3 = DAT_140dc4fa0;
        param_3[1] = DAT_140dc4fa4;
        fVar4 = fRam0000000140dc4fbc;
        fVar3 = fRam0000000140dc4fb8;
        fVar14 = fRam0000000140dc4fb4;
        param_3[4] = _DAT_140dc4fb0;
        param_3[5] = fVar14;
        param_3[6] = fVar3;
        param_3[7] = fVar4;
        return;
    }
    if (uVar13 == 1) {
        pfVar6 = *(float **)(param_1 + 4);
        *param_3 = *pfVar6;
        param_3[1] = pfVar6[1];
        fVar14 = pfVar6[5];
        fVar3 = pfVar6[6];
        fVar4 = pfVar6[7];
        param_3[4] = pfVar6[4];
        param_3[5] = fVar14;
        param_3[6] = fVar3;
        param_3[7] = fVar4;
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar7 = *param_5;
        uVar13 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar7 * 4);
        if (uVar13 <= param_2) {
            uVar11 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar7 + 1) * 4);
            if (param_2 < uVar11) {
                lVar8 = (ulonglong)(uVar7 + 1) * 0x20;
                lVar2 = *(longlong *)(param_1 + 4);
                pfVar5 = (float *)((ulonglong)uVar7 * 0x20 + lVar2);
                fVar14 = (float)(ulonglong)(param_2 - uVar13) / (float)(ulonglong)(uVar11 - uVar13);
                *param_3 = (*(float *)(lVar8 + lVar2) - *pfVar5) * fVar14 + *pfVar5;
                param_3[1] = (*(float *)(lVar8 + 4 + lVar2) - pfVar5[1]) * fVar14 + pfVar5[1];
                pfVar6 = (float *)(lVar8 + 0x10 + lVar2);
                *(undefined (*) [16])(param_3 + 4) =
                        CONCAT412((pfVar6[3] - pfVar5[7]) * fVar14 + pfVar5[7],
                                  CONCAT48((pfVar6[2] - pfVar5[6]) * fVar14 + pfVar5[6],
                                           CONCAT44((pfVar6[1] - pfVar5[5]) * fVar14 + pfVar5[5],
                                                    (*pfVar6 - pfVar5[4]) * fVar14 + pfVar5[4])));
                return;
            }
        }
        uVar11 = uVar7 + 1;
        uVar12 = (ulonglong)uVar11;
        *param_5 = uVar11;
        uVar13 = *param_1;
        if (((uVar11 < uVar13 - 1) &&
             (lVar2 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar2 + uVar12 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint *)(lVar2 + (ulonglong)(uVar7 + 2) * 4))) {
            lVar8 = *(longlong *)(param_1 + 4);
            lVar9 = (ulonglong)(uVar7 + 2) * 0x20;
            pfVar5 = (float *)((ulonglong)uVar11 * 0x20 + lVar8);
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar12 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar2 + (ulonglong)(uVar7 + 2) * 4) -
                                    *(int *)(lVar2 + uVar12 * 4));
            *param_3 = (*(float *)(lVar9 + lVar8) - *pfVar5) * fVar14 + *pfVar5;
            param_3[1] = (*(float *)(lVar9 + 4 + lVar8) - pfVar5[1]) * fVar14 + pfVar5[1];
            pfVar6 = (float *)(lVar9 + 0x10 + lVar8);
            *(undefined (*) [16])(param_3 + 4) =
                    CONCAT412((pfVar6[3] - pfVar5[7]) * fVar14 + pfVar5[7],
                              CONCAT48((pfVar6[2] - pfVar5[6]) * fVar14 + pfVar5[6],
                                       CONCAT44((pfVar6[1] - pfVar5[5]) * fVar14 + pfVar5[5],
                                                (*pfVar6 - pfVar5[4]) * fVar14 + pfVar5[4])));
            return;
        }
    }
    uVar12 = 0;
    if (uVar13 != 0) {
        uVar7 = uVar13;
        do {
            uVar11 = (uVar7 - (int)uVar12 >> 1) + (int)uVar12;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar11 * 4) <= param_2) {
                uVar12 = (ulonglong)(uVar11 + 1);
                uVar11 = uVar7;
            }
            uVar7 = uVar11;
        } while ((uint)uVar12 < uVar7);
    }
    uVar7 = (uint)uVar12;
    uVar11 = uVar7 - 1;
    uVar10 = (ulonglong)uVar11;
    if (uVar7 != 0) {
        if (uVar13 != uVar7) {
            lVar2 = *(longlong *)(param_1 + 2);
            lVar9 = uVar12 * 0x20;
            lVar8 = *(longlong *)(param_1 + 4);
            pfVar5 = (float *)((ulonglong)uVar11 * 0x20 + lVar8);
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar2 + uVar10 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar2 + uVar12 * 4) - *(int *)(lVar2 + uVar10 * 4))
                    ;
            *param_3 = (*(float *)(lVar9 + lVar8) - *pfVar5) * fVar14 + *pfVar5;
            param_3[1] = (*(float *)(lVar9 + 4 + lVar8) - pfVar5[1]) * fVar14 + pfVar5[1];
            pfVar6 = (float *)(lVar9 + 0x10 + lVar8);
            *(undefined (*) [16])(param_3 + 4) =
                    CONCAT412((pfVar6[3] - pfVar5[7]) * fVar14 + pfVar5[7],
                              CONCAT48((pfVar6[2] - pfVar5[6]) * fVar14 + pfVar5[6],
                                       CONCAT44((pfVar6[1] - pfVar5[5]) * fVar14 + pfVar5[5],
                                                (*pfVar6 - pfVar5[4]) * fVar14 + pfVar5[4])));
            *param_5 = uVar11;
            return;
        }
        pfVar6 = (float *)(uVar10 * 0x20 + *(longlong *)(param_1 + 4));
        *param_3 = *pfVar6;
        param_3[1] = pfVar6[1];
        fVar14 = pfVar6[5];
        fVar3 = pfVar6[6];
        fVar4 = pfVar6[7];
        param_3[4] = pfVar6[4];
        param_3[5] = fVar14;
        param_3[6] = fVar3;
        param_3[7] = fVar4;
        *param_5 = *param_1 - 2;
        return;
    }
    pfVar6 = *(float **)(param_1 + 4);
    *param_3 = *pfVar6;
    param_3[1] = pfVar6[1];
    fVar14 = pfVar6[5];
    fVar3 = pfVar6[6];
    fVar4 = pfVar6[7];
    param_3[4] = pfVar6[4];
    param_3[5] = fVar14;
    param_3[6] = fVar3;
    param_3[7] = fVar4;
    *param_5 = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407d88c0(uint *param_1,uint param_2,undefined (*param_3) [16],undefined8 param_4,
                   uint *param_5)

{
    float *pfVar1;
    uint *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 *puVar7;
    float *pfVar8;
    uint uVar9;
    uint uVar10;
    ulonglong uVar11;
    uint uVar12;
    float fVar14;
    uint local_res20 [2];
    ulonglong uVar13;

    uVar6 = uRam0000000140dc4fdc;
    uVar5 = uRam0000000140dc4fd8;
    uVar4 = uRam0000000140dc4fd4;
    uVar10 = *param_1;
    if (uVar10 == 0) {
        if ((DAT_140dc4fc0 & 1) == 0) {
            DAT_140dc4fc0 = DAT_140dc4fc0 | 1;
        }
        *(undefined4 *)*param_3 = _DAT_140dc4fd0;
        *(undefined4 *)(*param_3 + 4) = uVar4;
        *(undefined4 *)(*param_3 + 8) = uVar5;
        *(undefined4 *)(*param_3 + 0xc) = uVar6;
        return;
    }
    if (uVar10 == 1) {
        puVar7 = *(undefined4 **)(param_1 + 4);
        uVar4 = puVar7[1];
        uVar5 = puVar7[2];
        uVar6 = puVar7[3];
        *(undefined4 *)*param_3 = *puVar7;
        *(undefined4 *)(*param_3 + 4) = uVar4;
        *(undefined4 *)(*param_3 + 8) = uVar5;
        *(undefined4 *)(*param_3 + 0xc) = uVar6;
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar9 = *param_5;
        uVar10 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar9 * 4);
        if (uVar10 <= param_2) {
            uVar12 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar9 + 1) * 4);
            if (param_2 < uVar12) {
                pfVar1 = (float *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar9 + 1) * 0x10);
                pfVar8 = (float *)((ulonglong)uVar9 * 0x10 + *(longlong *)(param_1 + 4));
                fVar14 = (float)(ulonglong)(param_2 - uVar10) / (float)(ulonglong)(uVar12 - uVar10);
                *param_3 = CONCAT412(fVar14 * (pfVar1[3] - pfVar8[3]) + pfVar8[3],
                                     CONCAT48(fVar14 * (pfVar1[2] - pfVar8[2]) + pfVar8[2],
                                              CONCAT44(fVar14 * (pfVar1[1] - pfVar8[1]) + pfVar8[1],
                                                       fVar14 * (*pfVar1 - *pfVar8) + *pfVar8)));
                return;
            }
        }
        uVar12 = uVar9 + 1;
        uVar13 = (ulonglong)uVar12;
        *param_5 = uVar12;
        uVar10 = *param_1;
        if (((uVar12 < uVar10 - 1) &&
             (lVar3 = *(longlong *)(param_1 + 2), puVar2 = (uint *)(lVar3 + uVar13 * 4),
                     *puVar2 < param_2 || *puVar2 == param_2)) &&
            (param_2 < *(uint *)(lVar3 + (ulonglong)(uVar9 + 2) * 4))) {
            pfVar1 = (float *)(*(longlong *)(param_1 + 4) + uVar13 * 0x10);
            pfVar8 = (float *)(*(longlong *)(param_1 + 4) + (ulonglong)(uVar9 + 2) * 0x10);
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar13 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar3 + (ulonglong)(uVar9 + 2) * 4) -
                                    *(int *)(lVar3 + uVar13 * 4));
            *param_3 = CONCAT412(fVar14 * (pfVar8[3] - pfVar1[3]) + pfVar1[3],
                                 CONCAT48(fVar14 * (pfVar8[2] - pfVar1[2]) + pfVar1[2],
                                          CONCAT44(fVar14 * (pfVar8[1] - pfVar1[1]) + pfVar1[1],
                                                   fVar14 * (*pfVar8 - *pfVar1) + *pfVar1)));
            return;
        }
    }
    uVar13 = 0;
    if (uVar10 != 0) {
        uVar9 = uVar10;
        do {
            uVar12 = (uVar9 - (int)uVar13 >> 1) + (int)uVar13;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar12 * 4) <= param_2) {
                uVar13 = (ulonglong)(uVar12 + 1);
                uVar12 = uVar9;
            }
            uVar9 = uVar12;
        } while ((uint)uVar13 < uVar9);
    }
    uVar9 = (uint)uVar13;
    uVar11 = (ulonglong)(uVar9 - 1);
    if (uVar9 != 0) {
        if (uVar10 != uVar9) {
            pfVar1 = (float *)(*(longlong *)(param_1 + 4) + uVar11 * 0x10);
            pfVar8 = (float *)(*(longlong *)(param_1 + 4) + uVar13 * 0x10);
            lVar3 = *(longlong *)(param_1 + 2);
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar11 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar3 + uVar13 * 4) - *(int *)(lVar3 + uVar11 * 4))
                    ;
            *param_3 = CONCAT412(fVar14 * (pfVar8[3] - pfVar1[3]) + pfVar1[3],
                                 CONCAT48(fVar14 * (pfVar8[2] - pfVar1[2]) + pfVar1[2],
                                          CONCAT44(fVar14 * (pfVar8[1] - pfVar1[1]) + pfVar1[1],
                                                   fVar14 * (*pfVar8 - *pfVar1) + *pfVar1)));
            *param_5 = uVar9 - 1;
            return;
        }
        puVar7 = (undefined4 *)(uVar11 * 0x10 + *(longlong *)(param_1 + 4));
        uVar4 = puVar7[1];
        uVar5 = puVar7[2];
        uVar6 = puVar7[3];
        *(undefined4 *)*param_3 = *puVar7;
        *(undefined4 *)(*param_3 + 4) = uVar4;
        *(undefined4 *)(*param_3 + 8) = uVar5;
        *(undefined4 *)(*param_3 + 0xc) = uVar6;
        *param_5 = *param_1 - 2;
        return;
    }
    puVar7 = *(undefined4 **)(param_1 + 4);
    uVar4 = puVar7[1];
    uVar5 = puVar7[2];
    uVar6 = puVar7[3];
    *(undefined4 *)*param_3 = *puVar7;
    *(undefined4 *)(*param_3 + 4) = uVar4;
    *(undefined4 *)(*param_3 + 8) = uVar5;
    *(undefined4 *)(*param_3 + 0xc) = uVar6;
    *param_5 = 0;
    return;
}



void FUN_1407d8b00(uint *param_1,uint param_2,float *param_3,uint *param_4)

{
    uint *puVar1;
    float *pfVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    uint uVar6;
    uint uVar7;
    uint uVar9;
    float fVar10;
    uint local_res8 [2];
    ulonglong uVar8;

    uVar9 = *param_1;
    if (uVar9 == 1) {
        pfVar2 = *(float **)(param_1 + 4);
        *param_3 = *pfVar2;
        param_3[1] = pfVar2[1];
        param_3[2] = pfVar2[2];
        param_3[3] = pfVar2[3];
        param_3[4] = pfVar2[4];
        param_3[5] = pfVar2[5];
        return;
    }
    if (param_4 == (uint *)0x0) {
        param_4 = local_res8;
    }
    else {
        uVar6 = *param_4;
        uVar8 = (ulonglong)uVar6;
        uVar9 = *(uint *)(*(longlong *)(param_1 + 2) + uVar8 * 4);
        if (uVar9 <= param_2) {
            uVar5 = (ulonglong)(uVar6 + 1);
            uVar7 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar6 + 1) * 4);
            if (param_2 < uVar7) {
                lVar3 = *(longlong *)(param_1 + 4);
                fVar10 = (float)(ulonglong)(param_2 - uVar9) / (float)(ulonglong)(uVar7 - uVar9);
                *param_3 = (*(float *)(lVar3 + uVar5 * 0x18) - *(float *)(lVar3 + uVar8 * 0x18)) * fVar10 +
                           *(float *)(lVar3 + uVar8 * 0x18);
                param_3[1] = (*(float *)(lVar3 + 4 + uVar5 * 0x18) - *(float *)(lVar3 + 4 + uVar8 * 0x18)) *
                             fVar10 + *(float *)(lVar3 + 4 + uVar8 * 0x18);
                param_3[2] = (*(float *)(lVar3 + 8 + uVar5 * 0x18) - *(float *)(lVar3 + 8 + uVar8 * 0x18)) *
                             fVar10 + *(float *)(lVar3 + 8 + uVar8 * 0x18);
                param_3[3] = (*(float *)(lVar3 + 0xc + uVar5 * 0x18) -
                              *(float *)(lVar3 + 0xc + uVar8 * 0x18)) * fVar10 +
                             *(float *)(lVar3 + 0xc + uVar8 * 0x18);
                param_3[4] = (*(float *)(lVar3 + 0x10 + uVar5 * 0x18) -
                              *(float *)(lVar3 + 0x10 + uVar8 * 0x18)) * fVar10 +
                             *(float *)(lVar3 + 0x10 + uVar8 * 0x18);
                param_3[5] = (*(float *)(lVar3 + 0x14 + uVar5 * 0x18) -
                              *(float *)(lVar3 + 0x14 + uVar8 * 0x18)) * fVar10 +
                             *(float *)(lVar3 + 0x14 + uVar8 * 0x18);
                return;
            }
        }
        uVar7 = uVar6 + 1;
        uVar8 = (ulonglong)uVar7;
        *param_4 = uVar7;
        uVar9 = *param_1;
        if (((uVar7 < uVar9 - 1) &&
             (lVar3 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar3 + uVar8 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint *)(lVar3 + (ulonglong)(uVar6 + 2) * 4))) {
            lVar4 = *(longlong *)(param_1 + 4);
            uVar5 = (ulonglong)(uVar6 + 2);
            fVar10 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar8 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar3 + (ulonglong)(uVar6 + 2) * 4) -
                                    *(int *)(lVar3 + uVar8 * 4));
            *param_3 = (*(float *)(lVar4 + uVar5 * 0x18) - *(float *)(lVar4 + uVar8 * 0x18)) * fVar10 +
                       *(float *)(lVar4 + uVar8 * 0x18);
            param_3[1] = (*(float *)(lVar4 + 4 + uVar5 * 0x18) - *(float *)(lVar4 + 4 + uVar8 * 0x18)) *
                         fVar10 + *(float *)(lVar4 + 4 + uVar8 * 0x18);
            param_3[2] = (*(float *)(lVar4 + 8 + uVar5 * 0x18) - *(float *)(lVar4 + 8 + uVar8 * 0x18)) *
                         fVar10 + *(float *)(lVar4 + 8 + uVar8 * 0x18);
            param_3[3] = (*(float *)(lVar4 + 0xc + uVar5 * 0x18) - *(float *)(lVar4 + 0xc + uVar8 * 0x18))
                         * fVar10 + *(float *)(lVar4 + 0xc + uVar8 * 0x18);
            param_3[4] = (*(float *)(lVar4 + 0x10 + uVar5 * 0x18) -
                          *(float *)(lVar4 + 0x10 + uVar8 * 0x18)) * fVar10 +
                         *(float *)(lVar4 + 0x10 + uVar8 * 0x18);
            param_3[5] = (*(float *)(lVar4 + 0x14 + uVar5 * 0x18) -
                          *(float *)(lVar4 + 0x14 + uVar8 * 0x18)) * fVar10 +
                         *(float *)(lVar4 + 0x14 + uVar8 * 0x18);
            return;
        }
    }
    uVar8 = 0;
    if (uVar9 != 0) {
        uVar6 = uVar9;
        do {
            uVar7 = (uVar6 - (int)uVar8 >> 1) + (int)uVar8;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar7 * 4) <= param_2) {
                uVar8 = (ulonglong)(uVar7 + 1);
                uVar7 = uVar6;
            }
            uVar6 = uVar7;
        } while ((uint)uVar8 < uVar6);
    }
    uVar6 = (uint)uVar8;
    uVar5 = (ulonglong)(uVar6 - 1);
    if (uVar6 != 0) {
        if (uVar9 != uVar6) {
            lVar3 = *(longlong *)(param_1 + 4);
            lVar4 = *(longlong *)(param_1 + 2);
            fVar10 = (float)(ulonglong)(param_2 - *(int *)(lVar4 + uVar5 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar4 + uVar8 * 4) - *(int *)(lVar4 + uVar5 * 4));
            *param_3 = (*(float *)(lVar3 + uVar8 * 0x18) - *(float *)(lVar3 + uVar5 * 0x18)) * fVar10 +
                       *(float *)(lVar3 + uVar5 * 0x18);
            param_3[1] = (*(float *)(lVar3 + 4 + uVar8 * 0x18) - *(float *)(lVar3 + 4 + uVar5 * 0x18)) *
                         fVar10 + *(float *)(lVar3 + 4 + uVar5 * 0x18);
            param_3[2] = (*(float *)(lVar3 + 8 + uVar8 * 0x18) - *(float *)(lVar3 + 8 + uVar5 * 0x18)) *
                         fVar10 + *(float *)(lVar3 + 8 + uVar5 * 0x18);
            param_3[3] = (*(float *)(lVar3 + 0xc + uVar8 * 0x18) - *(float *)(lVar3 + 0xc + uVar5 * 0x18))
                         * fVar10 + *(float *)(lVar3 + 0xc + uVar5 * 0x18);
            param_3[4] = (*(float *)(lVar3 + 0x10 + uVar8 * 0x18) -
                          *(float *)(lVar3 + 0x10 + uVar5 * 0x18)) * fVar10 +
                         *(float *)(lVar3 + 0x10 + uVar5 * 0x18);
            param_3[5] = (*(float *)(lVar3 + 0x14 + uVar8 * 0x18) -
                          *(float *)(lVar3 + 0x14 + uVar5 * 0x18)) * fVar10 +
                         *(float *)(lVar3 + 0x14 + uVar5 * 0x18);
            *param_4 = uVar6 - 1;
            return;
        }
        lVar3 = *(longlong *)(param_1 + 4);
        *param_3 = *(float *)(lVar3 + uVar5 * 0x18);
        param_3[1] = *(float *)(lVar3 + 4 + uVar5 * 0x18);
        param_3[2] = *(float *)(lVar3 + 8 + uVar5 * 0x18);
        param_3[3] = *(float *)(lVar3 + 0xc + uVar5 * 0x18);
        param_3[4] = *(float *)(lVar3 + 0x10 + uVar5 * 0x18);
        param_3[5] = *(float *)(lVar3 + 0x14 + uVar5 * 0x18);
        *param_4 = *param_1 - 2;
        return;
    }
    pfVar2 = *(float **)(param_1 + 4);
    *param_3 = *pfVar2;
    param_3[1] = pfVar2[1];
    param_3[2] = pfVar2[2];
    param_3[3] = pfVar2[3];
    param_3[4] = pfVar2[4];
    param_3[5] = pfVar2[5];
    *param_4 = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1407d8f40(uint *param_1,uint param_2,undefined (*param_3) [16],undefined8 param_4,
                   uint *param_5)

{
    uint *puVar1;
    undefined4 *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    float *pfVar7;
    uint uVar8;
    float *pfVar9;
    uint uVar10;
    ulonglong uVar12;
    uint uVar13;
    float fVar14;
    uint local_res20 [2];
    ulonglong uVar11;

    uVar6 = uRam0000000140dc4ffc;
    uVar5 = uRam0000000140dc4ff8;
    uVar4 = uRam0000000140dc4ff4;
    uVar13 = *param_1;
    if (uVar13 == 0) {
        if ((DAT_140dc4fe0 & 1) == 0) {
            DAT_140dc4fe0 = DAT_140dc4fe0 | 1;
        }
        *(undefined4 *)*param_3 = _DAT_140dc4ff0;
        *(undefined4 *)(*param_3 + 4) = uVar4;
        *(undefined4 *)(*param_3 + 8) = uVar5;
        *(undefined4 *)(*param_3 + 0xc) = uVar6;
        *(undefined4 *)param_3[1] = DAT_140dc5000;
        *(undefined4 *)(param_3[1] + 4) = DAT_140dc5004;
        *(undefined4 *)(param_3[1] + 8) = DAT_140dc5008;
        *(undefined4 *)(param_3[1] + 0xc) = DAT_140dc500c;
        *(undefined4 *)param_3[2] = DAT_140dc5010;
        *(undefined4 *)(param_3[2] + 4) = DAT_140dc5014;
        *(undefined4 *)(param_3[2] + 8) = DAT_140dc5018;
        *(undefined4 *)(param_3[2] + 0xc) = DAT_140dc501c;
        *(undefined4 *)param_3[3] = DAT_140dc5020;
        *(undefined4 *)(param_3[3] + 4) = DAT_140dc5024;
        *(undefined4 *)(param_3[3] + 8) = DAT_140dc5028;
        *(undefined4 *)(param_3[3] + 0xc) = DAT_140dc502c;
        *(undefined4 *)param_3[4] = DAT_140dc5030;
        *(undefined4 *)(param_3[4] + 4) = DAT_140dc5034;
        *(undefined4 *)(param_3[4] + 8) = DAT_140dc5038;
        *(undefined4 *)(param_3[4] + 0xc) = DAT_140dc503c;
        *(undefined4 *)param_3[5] = DAT_140dc5040;
        *(undefined4 *)(param_3[5] + 4) = DAT_140dc5044;
        return;
    }
    if (uVar13 == 1) {
        puVar2 = *(undefined4 **)(param_1 + 4);
        uVar4 = puVar2[1];
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        *(undefined4 *)*param_3 = *puVar2;
        *(undefined4 *)(*param_3 + 4) = uVar4;
        *(undefined4 *)(*param_3 + 8) = uVar5;
        *(undefined4 *)(*param_3 + 0xc) = uVar6;
        *(undefined4 *)param_3[1] = puVar2[4];
        *(undefined4 *)(param_3[1] + 4) = puVar2[5];
        *(undefined4 *)(param_3[1] + 8) = puVar2[6];
        *(undefined4 *)(param_3[1] + 0xc) = puVar2[7];
        *(undefined4 *)param_3[2] = puVar2[8];
        *(undefined4 *)(param_3[2] + 4) = puVar2[9];
        *(undefined4 *)(param_3[2] + 8) = puVar2[10];
        *(undefined4 *)(param_3[2] + 0xc) = puVar2[0xb];
        *(undefined4 *)param_3[3] = puVar2[0xc];
        *(undefined4 *)(param_3[3] + 4) = puVar2[0xd];
        *(undefined4 *)(param_3[3] + 8) = puVar2[0xe];
        *(undefined4 *)(param_3[3] + 0xc) = puVar2[0xf];
        *(undefined4 *)param_3[4] = puVar2[0x10];
        *(undefined4 *)(param_3[4] + 4) = puVar2[0x11];
        *(undefined4 *)(param_3[4] + 8) = puVar2[0x12];
        *(undefined4 *)(param_3[4] + 0xc) = puVar2[0x13];
        *(undefined4 *)param_3[5] = puVar2[0x14];
        *(undefined4 *)(param_3[5] + 4) = puVar2[0x15];
        return;
    }
    if (param_5 == (uint *)0x0) {
        param_5 = local_res20;
    }
    else {
        uVar8 = *param_5;
        uVar13 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar8 * 4);
        if (uVar13 <= param_2) {
            uVar10 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)(uVar8 + 1) * 4);
            if (param_2 < uVar10) {
                pfVar9 = (float *)((ulonglong)(uVar8 + 1) * 0x60 + *(longlong *)(param_1 + 4));
                pfVar7 = (float *)((ulonglong)uVar8 * 0x60 + *(longlong *)(param_1 + 4));
                fVar14 = (float)(ulonglong)(param_2 - uVar13) / (float)(ulonglong)(uVar10 - uVar13);
                *param_3 = CONCAT412((pfVar9[3] - pfVar7[3]) * fVar14 + pfVar7[3],
                                     CONCAT48((pfVar9[2] - pfVar7[2]) * fVar14 + pfVar7[2],
                                              CONCAT44((pfVar9[1] - pfVar7[1]) * fVar14 + pfVar7[1],
                                                       (*pfVar9 - *pfVar7) * fVar14 + *pfVar7)));
                *(float *)(param_3[1] + 8) = (pfVar9[6] - pfVar7[6]) * fVar14 + pfVar7[6];
                *(float *)(param_3[1] + 0xc) = (pfVar9[7] - pfVar7[7]) * fVar14 + pfVar7[7];
                *(float *)param_3[2] = (pfVar9[8] - pfVar7[8]) * fVar14 + pfVar7[8];
                *(float *)(param_3[2] + 4) = (pfVar9[9] - pfVar7[9]) * fVar14 + pfVar7[9];
                *(float *)(param_3[3] + 0xc) = (pfVar9[0xf] - pfVar7[0xf]) * fVar14 + pfVar7[0xf];
                *(float *)param_3[4] = (pfVar9[0x10] - pfVar7[0x10]) * fVar14 + pfVar7[0x10];
                *(float *)(param_3[4] + 4) = (pfVar9[0x11] - pfVar7[0x11]) * fVar14 + pfVar7[0x11];
                *(float *)(param_3[4] + 8) = (pfVar9[0x12] - pfVar7[0x12]) * fVar14 + pfVar7[0x12];
                *(float *)(param_3[4] + 0xc) = (pfVar9[0x13] - pfVar7[0x13]) * fVar14 + pfVar7[0x13];
                *(float *)param_3[5] = (pfVar9[0x14] - pfVar7[0x14]) * fVar14 + pfVar7[0x14];
                *(float *)(param_3[5] + 4) = (pfVar9[0x15] - pfVar7[0x15]) * fVar14 + pfVar7[0x15];
                return;
            }
        }
        uVar10 = uVar8 + 1;
        uVar11 = (ulonglong)uVar10;
        *param_5 = uVar10;
        uVar13 = *param_1;
        if (((uVar10 < uVar13 - 1) &&
             (lVar3 = *(longlong *)(param_1 + 2), puVar1 = (uint *)(lVar3 + uVar11 * 4),
                     *puVar1 < param_2 || *puVar1 == param_2)) &&
            (param_2 < *(uint *)(lVar3 + (ulonglong)(uVar8 + 2) * 4))) {
            pfVar9 = (float *)((ulonglong)(uVar8 + 2) * 0x60 + *(longlong *)(param_1 + 4));
            pfVar7 = (float *)(uVar11 * 0x60 + *(longlong *)(param_1 + 4));
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar11 * 4)) /
                     (float)(ulonglong)
                             (uint)(*(int *)(lVar3 + (ulonglong)(uVar8 + 2) * 4) -
                                    *(int *)(lVar3 + uVar11 * 4));
            *param_3 = CONCAT412((pfVar9[3] - pfVar7[3]) * fVar14 + pfVar7[3],
                                 CONCAT48((pfVar9[2] - pfVar7[2]) * fVar14 + pfVar7[2],
                                          CONCAT44((pfVar9[1] - pfVar7[1]) * fVar14 + pfVar7[1],
                                                   (*pfVar9 - *pfVar7) * fVar14 + *pfVar7)));
            *(float *)(param_3[1] + 8) = (pfVar9[6] - pfVar7[6]) * fVar14 + pfVar7[6];
            *(float *)(param_3[1] + 0xc) = (pfVar9[7] - pfVar7[7]) * fVar14 + pfVar7[7];
            *(float *)param_3[2] = (pfVar9[8] - pfVar7[8]) * fVar14 + pfVar7[8];
            *(float *)(param_3[2] + 4) = (pfVar9[9] - pfVar7[9]) * fVar14 + pfVar7[9];
            *(float *)(param_3[3] + 0xc) = (pfVar9[0xf] - pfVar7[0xf]) * fVar14 + pfVar7[0xf];
            *(float *)param_3[4] = (pfVar9[0x10] - pfVar7[0x10]) * fVar14 + pfVar7[0x10];
            *(float *)(param_3[4] + 4) = (pfVar9[0x11] - pfVar7[0x11]) * fVar14 + pfVar7[0x11];
            *(float *)(param_3[4] + 8) = (pfVar9[0x12] - pfVar7[0x12]) * fVar14 + pfVar7[0x12];
            *(float *)(param_3[4] + 0xc) = (pfVar9[0x13] - pfVar7[0x13]) * fVar14 + pfVar7[0x13];
            *(float *)param_3[5] = (pfVar9[0x14] - pfVar7[0x14]) * fVar14 + pfVar7[0x14];
            *(float *)(param_3[5] + 4) = (pfVar9[0x15] - pfVar7[0x15]) * fVar14 + pfVar7[0x15];
            return;
        }
    }
    uVar11 = 0;
    if (uVar13 != 0) {
        uVar8 = uVar13;
        do {
            uVar10 = (uVar8 - (int)uVar11 >> 1) + (int)uVar11;
            if (*(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar10 * 4) <= param_2) {
                uVar11 = (ulonglong)(uVar10 + 1);
                uVar10 = uVar8;
            }
            uVar8 = uVar10;
        } while ((uint)uVar11 < uVar8);
    }
    uVar8 = (uint)uVar11;
    uVar12 = (ulonglong)(uVar8 - 1);
    if (uVar8 != 0) {
        if (uVar13 != uVar8) {
            lVar3 = *(longlong *)(param_1 + 2);
            pfVar9 = (float *)(uVar11 * 0x60 + *(longlong *)(param_1 + 4));
            pfVar7 = (float *)(uVar12 * 0x60 + *(longlong *)(param_1 + 4));
            fVar14 = (float)(ulonglong)(param_2 - *(int *)(lVar3 + uVar12 * 4)) /
                     (float)(ulonglong)(uint)(*(int *)(lVar3 + uVar11 * 4) - *(int *)(lVar3 + uVar12 * 4))
                    ;
            *param_3 = CONCAT412((pfVar9[3] - pfVar7[3]) * fVar14 + pfVar7[3],
                                 CONCAT48((pfVar9[2] - pfVar7[2]) * fVar14 + pfVar7[2],
                                          CONCAT44((pfVar9[1] - pfVar7[1]) * fVar14 + pfVar7[1],
                                                   (*pfVar9 - *pfVar7) * fVar14 + *pfVar7)));
            *(float *)(param_3[1] + 8) = (pfVar9[6] - pfVar7[6]) * fVar14 + pfVar7[6];
            *(float *)(param_3[1] + 0xc) = (pfVar9[7] - pfVar7[7]) * fVar14 + pfVar7[7];
            *(float *)param_3[2] = (pfVar9[8] - pfVar7[8]) * fVar14 + pfVar7[8];
            *(float *)(param_3[2] + 4) = (pfVar9[9] - pfVar7[9]) * fVar14 + pfVar7[9];
            *(float *)(param_3[3] + 0xc) = (pfVar9[0xf] - pfVar7[0xf]) * fVar14 + pfVar7[0xf];
            *(float *)param_3[4] = (pfVar9[0x10] - pfVar7[0x10]) * fVar14 + pfVar7[0x10];
            *(float *)(param_3[4] + 4) = (pfVar9[0x11] - pfVar7[0x11]) * fVar14 + pfVar7[0x11];
            *(float *)(param_3[4] + 8) = (pfVar9[0x12] - pfVar7[0x12]) * fVar14 + pfVar7[0x12];
            *(float *)(param_3[4] + 0xc) = (pfVar9[0x13] - pfVar7[0x13]) * fVar14 + pfVar7[0x13];
            *(float *)param_3[5] = (pfVar9[0x14] - pfVar7[0x14]) * fVar14 + pfVar7[0x14];
            *(float *)(param_3[5] + 4) = (pfVar9[0x15] - pfVar7[0x15]) * fVar14 + pfVar7[0x15];
            *param_5 = uVar8 - 1;
            return;
        }
        FUN_1407d0500(param_3,uVar12 * 0x60 + *(longlong *)(param_1 + 4));
        *param_5 = *param_1 - 2;
        return;
    }
    puVar2 = *(undefined4 **)(param_1 + 4);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *(undefined4 *)*param_3 = *puVar2;
    *(undefined4 *)(*param_3 + 4) = uVar4;
    *(undefined4 *)(*param_3 + 8) = uVar5;
    *(undefined4 *)(*param_3 + 0xc) = uVar6;
    *(undefined4 *)param_3[1] = puVar2[4];
    *(undefined4 *)(param_3[1] + 4) = puVar2[5];
    *(undefined4 *)(param_3[1] + 8) = puVar2[6];
    *(undefined4 *)(param_3[1] + 0xc) = puVar2[7];
    *(undefined4 *)param_3[2] = puVar2[8];
    *(undefined4 *)(param_3[2] + 4) = puVar2[9];
    *(undefined4 *)(param_3[2] + 8) = puVar2[10];
    *(undefined4 *)(param_3[2] + 0xc) = puVar2[0xb];
    *(undefined4 *)param_3[3] = puVar2[0xc];
    *(undefined4 *)(param_3[3] + 4) = puVar2[0xd];
    *(undefined4 *)(param_3[3] + 8) = puVar2[0xe];
    *(undefined4 *)(param_3[3] + 0xc) = puVar2[0xf];
    *(undefined4 *)param_3[4] = puVar2[0x10];
    *(undefined4 *)(param_3[4] + 4) = puVar2[0x11];
    *(undefined4 *)(param_3[4] + 8) = puVar2[0x12];
    *(undefined4 *)(param_3[4] + 0xc) = puVar2[0x13];
    *(undefined4 *)param_3[5] = puVar2[0x14];
    *(undefined4 *)(param_3[5] + 4) = puVar2[0x15];
    *param_5 = 0;
    return;
}

