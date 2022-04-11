//
// Created by flop on 04.04.22.
//
#include "../../include.h"

longlong FUN_1405a77a0(longlong param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14018b280(0x90,0);
    *(undefined **)(param_1 + 8) = puVar1;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined **)(param_1 + 0x28) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(longlong *)(param_1 + 0x28);
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(longlong *)(param_1 + 0x28);
    puVar1 = (undefined *)FUN_14018b280(0x28,0);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined **)(param_1 + 0x48) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_1403fb7c0();
    *(undefined4 *)(param_1 + 0x94) = 0;
    return param_1;
}



void FUN_1405a7870(longlong param_1)

{
    FUN_1403fc230(param_1 + 0x60);
    if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x70),0);
    }
    FUN_140008410(param_1 + 0x40);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    FUN_140008410(param_1 + 0x20);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x28),0);
    if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1405a9660(param_1,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1405a7910(undefined8 *param_1)

{
    code *pcVar1;
    undefined4 uVar2;
    int iVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    undefined *puVar6;

    pcVar1 = DAT_140c63838;
    *param_1 = 0;
    if (pcVar1 == (code *)0x0) {
        uVar2 = 0;
        if ((_DAT_140c64d18 == 0) && (iVar3 = FUN_14022a820(), -1 < iVar3)) {
            uVar2 = (**(code **)(*DAT_140c642a8 + 0x28))();
        }
    }
    else {
        uVar2 = (*pcVar1)(&PTR_u_Quest2_140a6c708,DAT_140c63858);
    }
    param_1[1] = 0;
    uVar4 = FUN_1401a40c0(uVar2);
    param_1[2] = uVar4;
    uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar4),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar4) >> 0x40,0) != 0) {
        uVar5 = 0xffffffffffffffff;
    }
    uVar5 = FUN_14018b280(uVar5,0);
    param_1[3] = uVar5;
    FUN_1407e4830(uVar5,0,param_1[2] << 3);
    param_1[4] = &LAB_1400522d0;
    param_1[5] = &LAB_1400522e0;
    puVar6 = (undefined *)FUN_14018b280(0x30);
    param_1[8] = 0;
    param_1[7] = puVar6;
    *puVar6 = 0;
    *(undefined8 *)(param_1[7] + 8) = 0;
    *(undefined8 *)(param_1[7] + 0x10) = param_1[7];
    *(undefined8 *)(param_1[7] + 0x18) = param_1[7];
    uVar5 = FUN_14018b280(0x18);
    param_1[0xb] = uVar5;
    *(undefined8 *)uVar5 = uVar5;
    *(undefined8 *)(param_1[0xb] + 8) = param_1[0xb];
    FUN_1400522f0(param_1 + 0xc);
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    return param_1;
}



void FUN_1405a7a30(longlong *param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;

    lVar1 = *param_1;
    if (lVar1 != 0) {
        FUN_1405a7870(lVar1);
        FUN_14018b900(lVar1,0);
    }
    *param_1 = 0;
    plVar4 = *(longlong **)(longlong *)param_1[0xb];
    if (plVar4 != (longlong *)param_1[0xb]) {
        do {
            lVar1 = plVar4[2];
            if (lVar1 != 0) {
                FUN_1405a7bf0(lVar1);
                FUN_14018b900(lVar1,0);
            }
            plVar4 = (longlong *)*plVar4;
        } while (plVar4 != (longlong *)param_1[0xb]);
    }
    plVar4 = *(longlong **)(longlong *)param_1[0xb];
    if (plVar4 != (longlong *)param_1[0xb]) {
        do {
            plVar2 = (longlong *)*plVar4;
            FUN_14018b900(plVar4,0);
            plVar4 = plVar2;
        } while (plVar2 != (longlong *)param_1[0xb]);
    }
    uVar5 = 0;
    *(longlong *)param_1[0xb] = param_1[0xb];
    *(longlong *)(param_1[0xb] + 8) = param_1[0xb];
    if (param_1[2] != 0) {
        do {
            lVar1 = *(longlong *)(param_1[3] + uVar5 * 8);
            while (lVar1 != 0) {
                lVar3 = *(longlong *)(lVar1 + 0x18);
                lVar1 = *(longlong *)(lVar1 + 8);
                if (lVar3 != 0) {
                    FUN_1405a95c0(lVar3);
                    FUN_14018b900(lVar3,0);
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong)param_1[2]);
    }
    FUN_140019490(param_1 + 1);
    FUN_140008410(param_1 + 6);
    lVar1 = param_1[0x11];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140019490(param_1 + 0xc);
    FUN_14018b900(param_1[0xe],0);
    param_1[0xe] = 0;
    plVar4 = *(longlong **)(longlong *)param_1[0xb];
    if (plVar4 != (longlong *)param_1[0xb]) {
        do {
            plVar2 = (longlong *)*plVar4;
            FUN_14018b900(plVar4,0);
            plVar4 = plVar2;
        } while (plVar2 != (longlong *)param_1[0xb]);
    }
    *(longlong *)param_1[0xb] = param_1[0xb];
    *(longlong *)(param_1[0xb] + 8) = param_1[0xb];
    FUN_14018b900(param_1[0xb],0);
    FUN_140008410(param_1 + 6);
    FUN_14018b900(param_1[7],0);
    FUN_140019490(param_1 + 1);
    FUN_14018b900(param_1[3],0);
    param_1[3] = 0;
    return;
}



void FUN_1405a7bf0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 0x20);
    if (plVar2 != *(longlong **)(param_1 + 0x20)) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x20));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(longlong *)(*(longlong *)(param_1 + 0x20) + 8) = *(longlong *)(param_1 + 0x20);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    plVar2 = (longlong *)**(longlong **)(param_1 + 0x10);
    if (plVar2 != *(longlong **)(param_1 + 0x10)) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x10));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 8) = *(longlong *)(param_1 + 0x10);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x10),0);
    return;
}



// WARNING: Type propagation algorithm not settling
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405a7c90(undefined4 *param_1)

{
    ulonglong **ppuVar1;
    undefined4 uVar2;
    ulonglong *puVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    longlong *plVar6;
    uint uVar7;
    int iVar8;
    longlong lVar9;
    undefined4 *puVar10;
    undefined8 *puVar11;
    undefined8 uVar12;
    longlong *plVar13;
    ulonglong uVar14;
    ulonglong *puVar15;
    undefined4 *puVar16;
    undefined4 *puVar17;
    undefined *puVar18;
    undefined4 **ppuVar19;
    longlong lVar20;
    ulonglong uVar21;
    longlong lVar22;
    uint *puVar23;
    ulonglong uVar24;
    ulonglong uVar25;
    ulonglong uVar26;
    ulonglong uVar27;
    uint uVar28;
    longlong lVar29;
    undefined4 *local_res8;
    undefined4 *local_res10;
    undefined4 *local_res18;
    undefined4 *local_res20;
    longlong local_88;
    longlong local_80;
    undefined8 local_78;
    undefined4 *local_70;
    uint local_68;
    undefined8 local_60;
    undefined local_58 [24];

    plVar6 = DAT_140c65b80;
    local_res8 = param_1;
    lVar9 = FUN_14018b280(0x98);
    if (lVar9 != 0) {
        lVar9 = FUN_1405a77a0(lVar9);
    }
    *plVar6 = lVar9;
    uVar28 = 0;
    LAB_1405a7cd0:
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c6389c != 0) || (iVar8 = FUN_14022b0a0(), iVar8 < 0)) break;
            uVar7 = (**(code **)(*DAT_140c63d08 + 0x28))();
        }
        else {
            uVar7 = (*DAT_140c63838)(&PTR_u_QuestCategory_140a6c778);
        }
        if (uVar7 <= uVar28) break;
        if (DAT_140c63848 == (code *)0x0) {
            if ((_DAT_140c6389c == 0) && (iVar8 = FUN_14022b0a0(), -1 < iVar8)) {
                puVar10 = (undefined4 *)(**(code **)(*DAT_140c63d08 + 0x20))();
                goto LAB_1405a7d69;
            }
        }
        else {
            puVar10 = (undefined4 *)(*DAT_140c63848)(&PTR_u_QuestCategory_140a6c778,uVar28,DAT_140c63858);
            LAB_1405a7d69:
            if (puVar10 != (undefined4 *)0x0) {
                puVar11 = (undefined8 *)FUN_14018b280(0x28);
                if (puVar11 == (undefined8 *)0x0) {
                    puVar11 = (undefined8 *)0x0;
                }
                else {
                    *puVar11 = 0;
                    uVar12 = FUN_14018b280(0x18);
                    puVar11[2] = uVar12;
                    *(undefined8 *)uVar12 = uVar12;
                    *(undefined8 *)(puVar11[2] + 8) = puVar11[2];
                    uVar12 = FUN_14018b280(0x18);
                    puVar11[4] = uVar12;
                    *(undefined8 *)uVar12 = uVar12;
                    *(undefined8 *)(puVar11[4] + 8) = puVar11[4];
                }
                *puVar11 = puVar10;
                lVar9 = plVar6[0xb];
                plVar13 = (longlong *)FUN_14018b280(0x18);
                if (plVar13 + 2 != (longlong *)0x0) {
                    plVar13[2] = (longlong)puVar11;
                }
                *plVar13 = lVar9;
                plVar13[1] = *(longlong *)(lVar9 + 8);
                **(longlong ***)(lVar9 + 8) = plVar13;
                *(longlong **)(lVar9 + 8) = plVar13;
                if (plVar6[0xc] == plVar6[0xd]) {
                    FUN_1400290d0(plVar6 + 0xc);
                }
                uVar14 = (*(code *)plVar6[0xf])(puVar10);
                ppuVar1 = (ulonglong **)(plVar6[0xe] + (uVar14 % (ulonglong)plVar6[0xd]) * 8);
                puVar15 = (ulonglong *)FUN_14018b280(0x20);
                if (puVar15 != (ulonglong *)0x0) {
                    puVar3 = *ppuVar1;
                    *puVar15 = uVar14;
                    puVar15[1] = (ulonglong)puVar3;
                    uVar2 = *puVar10;
                    puVar15[3] = (ulonglong)puVar11;
                    *(undefined4 *)(puVar15 + 2) = uVar2;
                    *ppuVar1 = puVar15;
                    plVar6[0xc] = plVar6[0xc] + 1;
                    uVar28 = uVar28 + 1;
                    goto LAB_1405a7cd0;
                }
                *ppuVar1 = (ulonglong *)0x0;
                plVar6[0xc] = plVar6[0xc] + 1;
            }
        }
        uVar28 = uVar28 + 1;
    } while( true );
    uVar28 = 0;
    do {
        puVar10 = (undefined4 *)0x0;
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64d18 != 0) || (iVar8 = FUN_14022a820(), iVar8 < 0)) break;
            uVar7 = (**(code **)(*DAT_140c642a8 + 0x28))();
        }
        else {
            uVar7 = (*DAT_140c63838)(&PTR_u_Quest2_140a6c708);
        }
        if (uVar7 <= uVar28) break;
        if (DAT_140c63848 == (code *)0x0) {
            puVar16 = puVar10;
            if ((_DAT_140c64d18 == 0) && (iVar8 = FUN_14022a820(), -1 < iVar8)) {
                puVar16 = (undefined4 *)(**(code **)(*DAT_140c642a8 + 0x20))();
            }
        }
        else {
            puVar16 = (undefined4 *)(*DAT_140c63848)(&PTR_u_Quest2_140a6c708,uVar28,DAT_140c63858);
        }
        puVar17 = (undefined4 *)FUN_14018b280(0xa0);
        if (puVar17 != (undefined4 *)0x0) {
            uVar12 = FUN_14018b280(0x18);
            *(undefined8 *)(puVar17 + 0x14) = uVar12;
            *(undefined8 *)uVar12 = uVar12;
            *(longlong *)(*(longlong *)(puVar17 + 0x14) + 8) = *(longlong *)(puVar17 + 0x14);
            puVar18 = (undefined *)FUN_14018b280(0x30);
            *(undefined8 *)(puVar17 + 0x1a) = 0;
            *(undefined **)(puVar17 + 0x18) = puVar18;
            *puVar18 = 0;
            *(undefined8 *)(*(longlong *)(puVar17 + 0x18) + 8) = 0;
            *(longlong *)(*(longlong *)(puVar17 + 0x18) + 0x10) = *(longlong *)(puVar17 + 0x18);
            *(longlong *)(*(longlong *)(puVar17 + 0x18) + 0x18) = *(longlong *)(puVar17 + 0x18);
            *(undefined8 *)(puVar17 + 0x20) = 0;
            *(undefined8 *)(puVar17 + 0x1e) = 0;
            *(undefined8 *)(puVar17 + 0x24) = 0;
            *(undefined8 *)(puVar17 + 0x22) = 0;
            puVar10 = puVar17;
        }
        iVar8 = FUN_14054f290(puVar10);
        if (iVar8 < 0) {
            LAB_1405a819a:
            uVar28 = uVar28 + 1;
        }
        else {
            if (plVar6[1] == plVar6[2]) {
                FUN_1400290d0(plVar6 + 1);
            }
            uVar14 = (*(code *)plVar6[4])(puVar16);
            ppuVar1 = (ulonglong **)(plVar6[3] + (uVar14 % (ulonglong)plVar6[2]) * 8);
            puVar15 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar15 != (ulonglong *)0x0) {
                puVar3 = *ppuVar1;
                *puVar15 = uVar14;
                puVar15[1] = (ulonglong)puVar3;
                uVar2 = *puVar16;
                puVar15[3] = (ulonglong)puVar10;
                *(undefined4 *)(puVar15 + 2) = uVar2;
            }
            *ppuVar1 = puVar15;
            plVar6[1] = plVar6[1] + 1;
            if (*(int *)(*(longlong *)(puVar10 + 2) + 0x1b4) != 0) {
                uVar7 = puVar16[0x6c];
                if (uVar7 == 0) goto LAB_1405a819a;
                puVar17 = *(undefined4 **)(DAT_140c65930 + 0x70);
                puVar5 = puVar17;
                puVar4 = *(undefined4 **)(puVar17 + 2);
                while (puVar4 != (undefined4 *)0x0) {
                    if ((uint)puVar4[8] < (uint)puVar16[0x6b]) {
                        puVar4 = *(undefined4 **)(puVar4 + 6);
                    }
                    else {
                        puVar5 = puVar4;
                        puVar4 = *(undefined4 **)(puVar4 + 4);
                    }
                }
                if ((puVar5 == puVar17) || ((uint)puVar16[0x6b] < (uint)puVar5[8])) {
                    local_res10 = puVar17;
                    ppuVar19 = &local_res10;
                }
                else {
                    local_res8 = puVar5;
                    ppuVar19 = &local_res8;
                }
                if ((*ppuVar19 == puVar17) || (lVar9 = *(longlong *)(*ppuVar19 + 10), lVar9 == 0)) {
                    puVar5 = puVar17;
                    puVar4 = *(undefined4 **)(puVar17 + 2);
                    while (puVar4 != (undefined4 *)0x0) {
                        if (puVar4[8] == 0) {
                            puVar4 = *(undefined4 **)(puVar4 + 6);
                        }
                        else {
                            puVar5 = puVar4;
                            puVar4 = *(undefined4 **)(puVar4 + 4);
                        }
                    }
                    if ((puVar5 == puVar17) || (1 < (uint)puVar5[8])) {
                        local_res20 = puVar17;
                        ppuVar19 = &local_res20;
                    }
                    else {
                        local_res18 = puVar5;
                        ppuVar19 = &local_res18;
                    }
                    if (*ppuVar19 == puVar17) {
                        lVar9 = 0;
                    }
                    else {
                        lVar9 = *(longlong *)(*ppuVar19 + 10);
                    }
                }
                uVar2 = *puVar16;
                if (lVar9 != 0) {
                    local_70 = (undefined4 *)FUN_14018b280(4);
                    if (local_70 == (undefined4 *)0x0) {
                        local_70 = (undefined4 *)0x0;
                    }
                    else {
                        *local_70 = uVar2;
                    }
                    *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + (ulonglong)uVar7;
                    local_78 = *(undefined8 *)(lVar9 + 8);
                    FUN_1400eedd0(lVar9 + 0x18,local_58,&local_78);
                }
            }
            uVar14 = 0;
            if (puVar10[4] == 0) goto LAB_1405a819a;
            do {
                puVar23 = *(uint **)(puVar10 + uVar14 * 2 + 6);
                if (puVar23 != (uint *)0x0) {
                    lVar9 = plVar6[7];
                    lVar20 = lVar9;
                    if (*(longlong *)(lVar9 + 8) != 0) {
                        lVar22 = *(longlong *)(lVar9 + 8);
                        do {
                            if (*(uint *)(lVar22 + 0x20) < *puVar23) {
                                lVar29 = *(longlong *)(lVar22 + 0x18);
                            }
                            else {
                                lVar29 = *(longlong *)(lVar22 + 0x10);
                                lVar20 = lVar22;
                            }
                            lVar22 = lVar29;
                        } while (lVar29 != 0);
                    }
                    if ((lVar20 == lVar9) || (*puVar23 < *(uint *)(lVar20 + 0x20))) {
                        local_68 = *puVar23;
                        local_60 = 0;
                        local_88 = lVar20;
                        FUN_140055c60(plVar6 + 6,&local_80,&local_88);
                        lVar20 = local_80;
                    }
                    *(undefined4 **)(lVar20 + 0x28) = puVar10;
                }
                uVar7 = (int)uVar14 + 1;
                uVar14 = (ulonglong)uVar7;
            } while (uVar7 < (uint)puVar10[4]);
            uVar28 = uVar28 + 1;
        }
    } while( true );
    LAB_1405a81c0:
    uVar14 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c63a1c != 0) || (iVar8 = FUN_14022c5e0(), iVar8 < 0)) goto LAB_1405a85e4;
        uVar28 = (**(code **)(*DAT_140c64640 + 0x28))();
    }
    else {
        uVar28 = (*DAT_140c63838)();
    }
    uVar7 = (uint)puVar10;
    if (uVar28 <= uVar7) goto LAB_1405a85e4;
    if (DAT_140c63848 == (code *)0x0) {
        if ((_DAT_140c63a1c == 0) && (iVar8 = FUN_14022c5e0(), -1 < iVar8)) {
            uVar14 = (**(code **)(*DAT_140c64640 + 0x20))();
        }
    }
    else {
        uVar14 = (*DAT_140c63848)(&PTR_u_Quest2Reward_140a6c890,puVar10,DAT_140c63858);
    }
    switch(*(undefined4 *)(uVar14 + 8)) {
        case 1:
            if (DAT_140c63840 == (code *)0x0) {
                if ((DAT_140c649fc != 0) || (iVar8 = FUN_140209480(), plVar13 = DAT_140c640e8, iVar8 < 0))
                    break;
                LAB_1405a8533:
                lVar9 = (**(code **)(*plVar13 + 0x18))();
            }
            else {
                lVar9 = (*DAT_140c63840)(&PTR_u_Item2_140a6abb0,*(undefined4 *)(uVar14 + 0xc),DAT_140c63858);
            }
        LAB_1405a853b:
            if (lVar9 != 0) goto switchD_1405a8270_caseD_a;
            break;
        case 2:
            if (DAT_140c63840 != (code *)0x0) {
                lVar9 = (*DAT_140c63840)(&PTR_u_Faction2_140a6a328,*(undefined4 *)(uVar14 + 0xc),DAT_140c63858
                );
                goto LAB_1405a853b;
            }
            if (_DAT_140c6546c == 0) {
                iVar8 = FUN_1401feec0();
                plVar13 = DAT_140c64d20;
                joined_r0x0001405a8526:
                if (-1 < iVar8) goto LAB_1405a8533;
            }
            break;
        case 3:
            if (DAT_140c63840 != (code *)0x0) {
                lVar9 = (*DAT_140c63840)(&PTR_u_CurrencyType_140a69f38,*(undefined4 *)(uVar14 + 0xc),
                                         DAT_140c63858);
                goto LAB_1405a853b;
            }
            if (_DAT_140c64a64 == 0) {
                iVar8 = FUN_1401fa240();
                plVar13 = DAT_140c640d8;
                goto joined_r0x0001405a8526;
            }
            break;
        case 4:
            if (DAT_140c63840 != (code *)0x0) {
                lVar9 = (*DAT_140c63840)(&PTR_u_TradeskillTier_140a6ddc8,*(undefined4 *)(uVar14 + 0xc),
                                         DAT_140c63858);
                goto LAB_1405a853b;
            }
            if (_DAT_140c63e34 == 0) {
                iVar8 = FUN_140246220();
                plVar13 = DAT_140c64160;
                goto joined_r0x0001405a8526;
            }
            break;
        case 5:
            if (DAT_140c63840 != (code *)0x0) {
                lVar9 = (*DAT_140c63840)(&PTR_u_Tradeskill_140a6daf0,*(undefined4 *)(uVar14 + 0xc),
                                         DAT_140c63858);
                goto LAB_1405a853b;
            }
            if (_DAT_140c64d70 == 0) {
                iVar8 = FUN_140242ae0();
                plVar13 = DAT_140c64068;
                goto joined_r0x0001405a8526;
            }
            break;
        case 6:
            if (DAT_140c63840 != (code *)0x0) {
                lVar9 = (*DAT_140c63840)(&PTR_u_AccountItem_140a690c8,*(undefined4 *)(uVar14 + 0xc),
                                         DAT_140c63858);
                goto LAB_1405a853b;
            }
            if (_DAT_140c64170 == 0) {
                iVar8 = FUN_1401e89c0();
                plVar13 = DAT_140c652d0;
                goto joined_r0x0001405a8526;
            }
            break;
        case 7:
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64f2c != 0) || (iVar8 = FUN_1401e8580(), iVar8 < 0)) break;
                lVar9 = (**(code **)(*DAT_140c64a98 + 0x18))();
            }
            else {
                lVar9 = (*DAT_140c63840)(&PTR_u_AccountCurrencyType_140a69090,*(undefined4 *)(uVar14 + 0xc),
                                         DAT_140c63858);
            }
            if (lVar9 == 0) break;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64170 != 0) || (iVar8 = FUN_1401e89c0(), iVar8 < 0)) break;
                lVar9 = (**(code **)(*DAT_140c652d0 + 0x18))();
            }
            else {
                lVar9 = (*DAT_140c63840)(&PTR_u_AccountItem_140a690c8,*(undefined4 *)(lVar9 + 0x10),
                                         DAT_140c63858);
            }
            if (lVar9 != 0) goto switchD_1405a8270_caseD_a;
            puVar10 = (undefined4 *)(ulonglong)(uVar7 + 1);
            goto LAB_1405a81c0;
        case 8:
        case 9:
            if (DAT_140c63840 != (code *)0x0) {
                lVar9 = (*DAT_140c63840)(&PTR_u_GenericUnlockEntry_140a6a4e8,*(undefined4 *)(uVar14 + 0xc),
                                         DAT_140c63858);
                goto LAB_1405a853b;
            }
            if (_DAT_140c64c20 == 0) {
                iVar8 = FUN_1402010c0();
                plVar13 = DAT_140c64e50;
                goto joined_r0x0001405a8526;
            }
            break;
        case 10:
        switchD_1405a8270_caseD_a:
            uVar21 = (*(code *)plVar6[4])(uVar14 + 4);
            puVar15 = *(ulonglong **)(plVar6[3] + (uVar21 % (ulonglong)plVar6[2]) * 8);
            if (puVar15 != (ulonglong *)0x0) {
                do {
                    if ((uVar21 == *puVar15) && (iVar8 = (*(code *)plVar6[5])(uVar14 + 4), iVar8 != 0)) {
                        if (puVar15 + 3 != (ulonglong *)0x0) {
                            lVar9 = *(longlong *)(puVar15[3] + 0x50);
                            plVar13 = (longlong *)FUN_14018b280(0x18);
                            if ((ulonglong *)(plVar13 + 2) != (ulonglong *)0x0) {
                                plVar13[2] = uVar14;
                            }
                            *plVar13 = lVar9;
                            plVar13[1] = *(longlong *)(lVar9 + 8);
                            **(longlong ***)(lVar9 + 8) = plVar13;
                            *(longlong **)(lVar9 + 8) = plVar13;
                        }
                        goto switchD_1405a8270_caseD_a;
                    }
                    puVar15 = (ulonglong *)puVar15[1];
                } while (puVar15 != (ulonglong *)0x0);
                puVar10 = (undefined4 *)(ulonglong)(uVar7 + 1);
                goto LAB_1405a81c0;
            }
    }
    switchD_1405a8270_caseD_a:
    puVar10 = (undefined4 *)(ulonglong)(uVar7 + 1);
    goto LAB_1405a81c0;
    LAB_1405a85e4:
    local_res8 = (undefined4 *)((ulonglong)local_res8 & 0xffffffff00000000);
    lVar9 = DAT_140c66650;
    lVar20 = DAT_140c65918;
    if (*(int *)(DAT_140c65918 + 0x28) != 0) {
        do {
            local_res8._0_4_ = (int)uVar14;
            puVar10 = (undefined4 *)(uVar14 * 0x1e0 + *(longlong *)(lVar20 + 0x20));
            local_res20 = puVar10;
            if (puVar10 != (undefined4 *)0x0) {
                lVar22 = *(longlong *)(puVar10 + 0x18);
                lVar29 = 0;
                if (*(int *)(lVar9 + lVar22 * 4) != 0) {
                    do {
                        local_res10 = (undefined4 *)
                                ((ulonglong)local_res10 & 0xffffffff00000000 |
                                 (ulonglong)*(uint *)(lVar9 + (lVar22 + lVar29) * 4));
                        uVar14 = (*(code *)plVar6[4])(&local_res10);
                        for (puVar15 = *(ulonglong **)(plVar6[3] + (uVar14 % (ulonglong)plVar6[2]) * 8);
                             puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1]) {
                            if ((uVar14 == *puVar15) &&
                                (iVar8 = (*(code *)plVar6[5])(&local_res10,puVar15 + 2), iVar8 != 0)) {
                                if (puVar15 + 3 != (ulonglong *)0x0) {
                                    uVar14 = puVar15[3];
                                    uVar2 = *puVar10;
                                    lVar20 = *(longlong *)(uVar14 + 0x90);
                                    lVar9 = lVar20 + 1;
                                    lVar22 = FUN_14018db00(*(undefined8 *)(uVar14 + 0x88),lVar9,4);
                                    *(undefined4 *)(lVar22 + lVar20 * 4) = uVar2;
                                    if (*(longlong *)(uVar14 + 0x88) != lVar22) {
                                        FUN_1407db590(lVar22,*(longlong *)(uVar14 + 0x88),
                                                      *(longlong *)(uVar14 + 0x90) << 2);
                                        lVar20 = *(longlong *)(uVar14 + 0x88);
                                        if (lVar20 != 0) {
                                            (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
                                        }
                                        *(longlong *)(uVar14 + 0x88) = lVar22;
                                    }
                                    *(longlong *)(uVar14 + 0x90) = lVar9;
                                    puVar10 = local_res20;
                                }
                                break;
                            }
                        }
                        lVar22 = *(longlong *)(puVar10 + 0x18);
                        lVar29 = lVar29 + 1;
                        lVar9 = DAT_140c66650;
                    } while (*(int *)(DAT_140c66650 + (lVar22 + lVar29) * 4) != 0);
                    lVar20 = DAT_140c65918;
                }
                lVar22 = *(longlong *)(puVar10 + 0x16);
                lVar29 = 0;
                if (*(int *)(lVar9 + lVar22 * 4) != 0) {
                    do {
                        local_res18 = (undefined4 *)
                                ((ulonglong)local_res18 & 0xffffffff00000000 |
                                 (ulonglong)*(uint *)(lVar9 + (lVar22 + lVar29) * 4));
                        uVar14 = (*(code *)plVar6[4])(&local_res18);
                        for (puVar15 = *(ulonglong **)(plVar6[3] + (uVar14 % (ulonglong)plVar6[2]) * 8);
                             puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1]) {
                            if ((uVar14 == *puVar15) &&
                                (iVar8 = (*(code *)plVar6[5])(&local_res18,puVar15 + 2), iVar8 != 0)) {
                                if (puVar15 + 3 != (ulonglong *)0x0) {
                                    uVar14 = puVar15[3];
                                    uVar2 = *puVar10;
                                    lVar20 = *(longlong *)(uVar14 + 0x80);
                                    lVar9 = lVar20 + 1;
                                    lVar22 = FUN_14018db00(*(undefined8 *)(uVar14 + 0x78),lVar9,4);
                                    *(undefined4 *)(lVar22 + lVar20 * 4) = uVar2;
                                    if (*(longlong *)(uVar14 + 0x78) != lVar22) {
                                        FUN_1407db590(lVar22,*(longlong *)(uVar14 + 0x78),
                                                      *(longlong *)(uVar14 + 0x80) << 2);
                                        lVar20 = *(longlong *)(uVar14 + 0x78);
                                        if (lVar20 != 0) {
                                            (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
                                        }
                                        *(longlong *)(uVar14 + 0x78) = lVar22;
                                    }
                                    *(longlong *)(uVar14 + 0x80) = lVar9;
                                    puVar10 = local_res20;
                                }
                                break;
                            }
                        }
                        lVar22 = *(longlong *)(puVar10 + 0x16);
                        lVar29 = lVar29 + 1;
                        lVar9 = DAT_140c66650;
                    } while (*(int *)(DAT_140c66650 + (lVar22 + lVar29) * 4) != 0);
                    lVar20 = DAT_140c65918;
                }
            }
            uVar28 = (int)local_res8 + 1;
            uVar14 = (ulonglong)uVar28;
            local_res8 = (undefined4 *)((ulonglong)local_res8 & 0xffffffff00000000 | (ulonglong)uVar28);
        } while (uVar28 < *(uint *)(lVar20 + 0x28));
    }
    uVar21 = 0;
    uVar14 = uVar21;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c638c8 != 0) || (iVar8 = FUN_14020ae00(), iVar8 < 0)) {
                return 0;
            }
            uVar28 = (**(code **)(*DAT_140c65168 + 0x28))();
        }
        else {
            uVar28 = (*DAT_140c63838)(&PTR_u_ItemImbuement_140a6ad00,DAT_140c63858);
        }
        if (uVar28 <= (uint)uVar14) {
            return 0;
        }
        if (DAT_140c63848 == (code *)0x0) {
            if ((_DAT_140c638c8 == 0) && (iVar8 = FUN_14020ae00(), -1 < iVar8)) {
                puVar23 = (uint *)(**(code **)(*DAT_140c65168 + 0x20))(DAT_140c65168,uVar14);
                goto LAB_1405a88ef;
            }
        }
        else {
            puVar23 = (uint *)(*DAT_140c63848)(&PTR_u_ItemImbuement_140a6ad00);
            LAB_1405a88ef:
            uVar27 = uVar21;
            if (puVar23 != (uint *)0x0) {
                do {
                    puVar23 = puVar23 + 1;
                    uVar28 = *puVar23;
                    if (uVar28 == 0) break;
                    if (plVar6[0x12] != 0) {
                        uVar25 = plVar6[0x12];
                        uVar26 = uVar21;
                        do {
                            uVar24 = (uVar25 - uVar26 >> 1) + uVar26;
                            uVar7 = *(uint *)(plVar6[0x11] + uVar24 * 4);
                            if (uVar7 <= uVar28) {
                                if (uVar28 <= uVar7) goto LAB_1405a8954;
                                uVar26 = uVar24 + 1;
                                uVar24 = uVar25;
                            }
                            uVar25 = uVar24;
                        } while (uVar26 < uVar24);
                    }
                    FUN_1401c2e70(plVar6 + 0x11);
                    LAB_1405a8954:
                    uVar27 = uVar27 + 1;
                } while (uVar27 < 0xf);
            }
        }
        uVar14 = (ulonglong)((uint)uVar14 + 1);
    } while( true );
}



undefined8 FUN_1405a89b0(void)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar4 = DAT_140c65b80;
    uVar5 = 0;
    if (*(longlong *)(DAT_140c65b80 + 0x10) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x18) + uVar5 * 8);
            while (lVar1 != 0) {
                lVar1 = *(longlong *)(lVar1 + 8);
                plVar2 = *(longlong **)(DAT_140c65920 + 8);
                while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
                    plVar2 = (longlong *)plVar3[4];
                    if (*(int *)(plVar3 + 7) == 1) {
                        (**(code **)(*plVar3 + 8))();
                    }
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(lVar4 + 0x10));
    }
    return 0;
}



ulonglong FUN_1405a8a40(undefined8 param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c65b80;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c65b80 + 0x20))(local_res10);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x18) + (uVar4 % *(ulonglong *)(lVar2 + 0x10)) * 8)
            ;
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x28))(local_res10,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



undefined8 FUN_1405a8ad0(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65b80 + 0x38);
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



int FUN_1405a8b30(longlong param_1,longlong param_2,int param_3)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    uint uVar7;
    int iVar8;
    longlong local_res8;

    lVar3 = *(longlong *)(param_2 + 0x18);
    if (((lVar3 == 0) || (*(int *)(lVar3 + 0xa0) == 0)) ||
        (local_res8 = param_1,
         iVar6 = FUN_1402dd480(DAT_140c65b80 + 1,(int *)(lVar3 + 0xa0),&local_res8), lVar5 = local_res8,
                iVar6 == 0)) {
        return 0x65;
    }
    if (((*(longlong *)(DAT_140c65898 + 0x6c50) != 0) &&
         ((*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) >> 1 & 1) != 0)) &&
        ((*(uint *)(*(longlong *)(local_res8 + 8) + 0xc) & 0x40000) == 0)) {
        return 0x65;
    }
    uVar1 = *(uint *)(lVar3 + 0xa4);
    uVar2 = *(uint *)(param_2 + 0x35f8);
    iVar8 = 0x65;
    iVar6 = FUN_1405fbc40(*DAT_140c65b80);
    if (iVar6 == 0) {
        return 0x65;
    }
    if (iVar6 == 1) {
        if (uVar1 != 0xffffffff) {
            iVar6 = FUN_140550c00(lVar5);
            if (iVar6 == 0) goto LAB_1405a8ce9;
            iVar6 = FUN_1405517a0(lVar5);
            if (iVar6 != 0) {
                if (uVar1 == *(uint *)(lVar5 + 0x10)) {
                    uVar7 = 0;
                }
                else if (*(uint *)(lVar5 + 0x10) < uVar1) {
                    uVar7 = 0;
                }
                else if (*(longlong *)(lVar5 + 0x18 + (ulonglong)uVar1 * 8) == 0) {
                    uVar7 = 0;
                }
                else {
                    iVar6 = FUN_1405517a0(lVar5);
                    uVar7 = -(uint)(iVar6 != 0) & 0x20;
                }
                lVar3 = *(longlong *)(*DAT_140c65b80 + 8);
                local_res8 = lVar3;
                lVar4 = *(longlong *)(lVar3 + 8);
                while (lVar4 != 0) {
                    if (*(uint *)(lVar4 + 0x20) < **(uint **)(lVar5 + 8)) {
                        lVar4 = *(longlong *)(lVar4 + 0x18);
                    }
                    else {
                        local_res8 = lVar4;
                        lVar4 = *(longlong *)(lVar4 + 0x10);
                    }
                }
                if ((local_res8 == lVar3) || (**(uint **)(lVar5 + 8) < *(uint *)(local_res8 + 0x20))) {
                    local_res8 = lVar3;
                }
                if (((local_res8 != lVar3) && (local_res8 + 0x28 != 0)) &&
                    (iVar6 = FUN_140611680(local_res8 + 0x28,(ulonglong)uVar1,uVar2 & uVar7 - 1), iVar6 != 0)
                        ) goto LAB_1405a8ce9;
            }
        }
        iVar8 = 0x27;
    }
    else if (iVar6 - 4U < 4) {
        return 0x65;
    }
    LAB_1405a8ce9:
    if ((param_3 != 0) && (iVar8 != 0x65)) {
        *(undefined *)(param_2 + 0x1914 + (longlong)iVar8 * 0x48) = 1;
        if (*(uint *)(*(longlong *)(lVar5 + 8) + 300) < 4) {
            *(undefined *)(param_2 + 0x191c + (longlong)iVar8 * 0x48) = 1;
        }
    }
    return iVar8;
}



void FUN_1405a8d40(ulonglong param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    int iVar6;
    ulonglong uVar7;
    longlong *plVar8;
    ulonglong *puVar9;
    longlong lVar10;
    longlong lVar11;
    uint *puVar12;
    longlong lVar13;
    ulonglong local_res8;
    undefined4 local_res10 [2];
    longlong local_res18;
    longlong local_res20;

    plVar4 = DAT_140c65b80;
    lVar2 = *(longlong *)(param_2 + 0x18);
    if (lVar2 != 0) {
        lVar11 = *(longlong *)(lVar2 + 0x60);
        lVar13 = 0;
        local_res8 = param_1;
        if (*(int *)(DAT_140c66650 + lVar11 * 4) != 0) {
            lVar10 = lVar13;
            do {
                local_res8 = local_res8 & 0xffffffff00000000 |
                             (ulonglong)*(uint *)(DAT_140c66650 + (lVar11 + lVar10) * 4);
                uVar7 = (*(code *)plVar4[4])(&local_res8);
                for (puVar9 = *(ulonglong **)(plVar4[3] + (uVar7 % (ulonglong)plVar4[2]) * 8);
                     puVar9 != (ulonglong *)0x0; puVar9 = (ulonglong *)puVar9[1]) {
                    if ((uVar7 == *puVar9) && (iVar5 = (*(code *)plVar4[5])(&local_res8), iVar5 != 0)) {
                        if (puVar9 + 3 != (ulonglong *)0x0) {
                            uVar7 = puVar9[3];
                            iVar5 = FUN_1405fbc40(*DAT_140c65b80);
                            if ((iVar5 == 2) ||
                                (((*(byte *)(*(longlong *)(uVar7 + 8) + 0xc) & 1) != 0 &&
                                  (iVar6 = FUN_140552550(uVar7), iVar6 == 0)))) {
                                *(undefined *)(param_2 + 0x1c2c) = 1;
                                if (*(uint *)(*(longlong *)(uVar7 + 8) + 300) < 4) {
                                    *(undefined *)(param_2 + 0x1c34) = 1;
                                }
                            }
                            else if (iVar5 == 1) {
                                iVar5 = 0x3d;
                                if (*(int *)(*(longlong *)(uVar7 + 8) + 0x14) == 5) {
                                    iVar5 = 0x3f;
                                }
                                *(undefined *)(param_2 + 0x1914 + (longlong)iVar5 * 0x48) = 1;
                                if (*(uint *)(*(longlong *)(uVar7 + 8) + 300) < 4) {
                                    *(undefined *)(param_2 + 0x191c + (longlong)iVar5 * 0x48) = 1;
                                }
                            }
                        }
                        break;
                    }
                }
                lVar11 = *(longlong *)(lVar2 + 0x60);
                lVar10 = lVar10 + 1;
            } while (*(int *)(DAT_140c66650 + (lVar11 + lVar10) * 4) != 0);
        }
        lVar11 = *(longlong *)(lVar2 + 0x58);
        iVar5 = *(int *)(DAT_140c66650 + lVar11 * 4);
        while (iVar5 != 0) {
            local_res10[0] = *(undefined4 *)(DAT_140c66650 + (lVar11 + lVar13) * 4);
            uVar7 = (*(code *)plVar4[4])(local_res10);
            puVar9 = *(ulonglong **)(plVar4[3] + (uVar7 % (ulonglong)plVar4[2]) * 8);
            if (puVar9 != (ulonglong *)0x0) {
                LAB_1405a8f00:
                if ((uVar7 != *puVar9) || (iVar5 = (*(code *)plVar4[5])(local_res10,puVar9 + 2), iVar5 == 0)
                        ) goto LAB_1405a8f15;
                if (puVar9 + 3 != (ulonglong *)0x0) {
                    uVar7 = puVar9[3];
                    iVar5 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(uVar7 + 8));
                    iVar6 = FUN_140552550(uVar7,0xffffdfff);
                    puVar12 = *(uint **)(uVar7 + 8);
                    uVar1 = puVar12[3];
                    if ((uVar1 >> 0xb & 1) == 0) {
                        if ((uVar1 >> 10 & 1) != 0) {
                            lVar11 = *(longlong *)(*DAT_140c65b80 + 0x28);
                            lVar3 = lVar11;
                            lVar10 = *(longlong *)(lVar11 + 8);
                            while (lVar10 != 0) {
                                if (*(uint *)(lVar10 + 0x20) < *puVar12) {
                                    lVar10 = *(longlong *)(lVar10 + 0x18);
                                }
                                else {
                                    lVar3 = lVar10;
                                    lVar10 = *(longlong *)(lVar10 + 0x10);
                                }
                            }
                            if ((lVar3 == lVar11) || (*puVar12 < *(uint *)(lVar3 + 0x20))) {
                                local_res20 = lVar11;
                                plVar8 = &local_res20;
                            }
                            else {
                                local_res18 = lVar3;
                                plVar8 = &local_res18;
                            }
                            if ((*plVar8 == lVar11) && (iVar6 == 0)) goto LAB_1405a927f;
                        }
                        if (iVar5 - 1U < 2) {
                            if (puVar12[5] == 5) {
                                iVar5 = 0x3e;
                            }
                            else if (puVar12[5] == 3) {
                                iVar5 = 0x3c;
                            }
                            else if ((*(longlong *)(uVar7 + 0x68) == 0) || (iVar5 = FUN_1405533c0(), iVar5 != 0))
                            {
                                if ((uVar1 & 0x20) == 0) {
                                    uVar1 = puVar12[0x6d];
                                    if (uVar1 == 0) {
                                        iVar5 = 0x33;
                                    }
                                    else if (uVar1 == 1) {
                                        iVar5 = 0x35;
                                    }
                                    else if (uVar1 == 2) {
                                        iVar5 = 0x36;
                                    }
                                    else if (uVar1 == 3) {
                                        iVar5 = 0x37;
                                    }
                                    else {
                                        if (uVar1 != 4) goto LAB_1405a927f;
                                        iVar5 = 0x38;
                                    }
                                }
                                else {
                                    iVar5 = 0x34;
                                }
                            }
                            else {
                                iVar5 = 0x39;
                                lVar11 = *(longlong *)(*(longlong *)(uVar7 + 0x60) + 0x10);
                                plVar8 = (longlong *)FUN_1407242b0(lVar11,*(undefined4 *)(lVar11 + 0x20));
                                if (plVar8 != (longlong *)0x0) {
                                    iVar6 = (**(code **)(*plVar8 + 0x68))(plVar8);
                                    if (iVar6 == 0) {
                                        iVar6 = (**(code **)(*plVar8 + 0x70))(plVar8);
                                        if (iVar6 != 0) {
                                            iVar5 = 0x3a;
                                        }
                                    }
                                    else {
                                        iVar5 = 0x3b;
                                    }
                                }
                            }
                        }
                        else if (iVar6 == 0) {
                            if (puVar12[5] == 5) {
                                iVar5 = 0x11;
                            }
                            else if (puVar12[5] == 3) {
                                iVar5 = 0x12;
                            }
                            else if ((*(longlong *)(uVar7 + 0x68) == 0) || (iVar5 = FUN_1405533c0(), iVar5 != 0))
                            {
                                if ((uVar1 & 0x20) == 0) {
                                    uVar1 = puVar12[0x6d];
                                    if (uVar1 == 0) {
                                        iVar5 = 0x10;
                                    }
                                    else if (uVar1 == 1) {
                                        iVar5 = 0x14;
                                    }
                                    else if (uVar1 == 2) {
                                        iVar5 = 0x15;
                                    }
                                    else if (uVar1 == 3) {
                                        iVar5 = 0x16;
                                    }
                                    else {
                                        if (uVar1 != 4) goto LAB_1405a927f;
                                        iVar5 = 0x17;
                                    }
                                }
                                else {
                                    iVar5 = 0x13;
                                }
                            }
                            else {
                                iVar5 = 0xd;
                                lVar11 = *(longlong *)(*(longlong *)(uVar7 + 0x60) + 0x10);
                                plVar8 = (longlong *)FUN_1407242b0(lVar11,*(undefined4 *)(lVar11 + 0x20));
                                if (plVar8 != (longlong *)0x0) {
                                    iVar6 = (**(code **)(*plVar8 + 0x68))(plVar8);
                                    if (iVar6 == 0) {
                                        iVar6 = (**(code **)(*plVar8 + 0x70))(plVar8);
                                        if (iVar6 != 0) {
                                            iVar5 = 0xe;
                                        }
                                    }
                                    else {
                                        iVar5 = 0xf;
                                    }
                                }
                            }
                        }
                        else {
                            if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
                                 (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38) + 5U < puVar12[6])) ||
                                (iVar5 = FUN_140552550(uVar7,0xfffffffd), iVar5 != 0)) goto LAB_1405a927f;
                            if (*(int *)(*(longlong *)(uVar7 + 8) + 0x14) == 5) {
                                iVar5 = 0x5d;
                            }
                            else if ((*(longlong *)(uVar7 + 0x68) == 0) ||
                                     (iVar5 = FUN_1405533c0(uVar7), iVar5 != 0)) {
                                iVar5 = 0x5c;
                            }
                            else {
                                iVar5 = 0x5b;
                            }
                        }
                        lVar11 = param_2 + (longlong)iVar5 * 0x48;
                        *(undefined *)(lVar11 + 0x1914) = 1;
                        if (*(uint *)(*(longlong *)(uVar7 + 8) + 300) < 4) {
                            if ((iVar5 == 0x33) || (iVar5 == 0x3e)) {
                                if ((DAT_140c65970 != 0) && (*(int *)(DAT_140c65970 + 8) < 4)) {
                                    *(undefined **)(lVar11 + 0x1928) =
                                            (&PTR_u_UI_Interface_Overheads_UI_CRB_Ov_140b03988)
                                            [*(int *)(DAT_140c65970 + 8)];
                                }
                            }
                            else {
                                *(undefined *)(lVar11 + 0x191c) = 1;
                            }
                        }
                    }
                    else if ((iVar6 == 0) &&
                             (*(undefined *)(param_2 + 0x1c74) = 1,
                                     *(uint *)(*(longlong *)(uVar7 + 8) + 300) < 4)) {
                        *(undefined *)(param_2 + 0x1c7c) = 1;
                    }
                }
            }
            LAB_1405a927f:
            lVar11 = *(longlong *)(lVar2 + 0x58);
            lVar13 = lVar13 + 1;
            iVar5 = *(int *)(DAT_140c66650 + (lVar11 + lVar13) * 4);
        }
    }
    return;
    LAB_1405a8f15:
    puVar9 = (ulonglong *)puVar9[1];
    if (puVar9 == (ulonglong *)0x0) goto LAB_1405a927f;
    goto LAB_1405a8f00;
}



undefined8 FUN_1405a92c0(longlong param_1,undefined8 param_2)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    int iVar4;
    longlong lVar5;
    uint uVar6;
    longlong *plVar7;
    int iVar8;

    if (*(longlong *)(param_1 + 0x18) == 0) {
        return 0;
    }
    lVar3 = *DAT_140c65b80;
    if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x10);
        iVar8 = 0;
        if (0 < iVar1) {
            do {
                lVar5 = FUN_1405fc730(lVar3);
                if ((((lVar5 != 0) && (iVar4 = FUN_140552f50(lVar5), iVar4 != 0)) &&
                     (uVar2 = *(uint *)(*(longlong *)(lVar5 + 8) + 0xc), (uVar2 >> 0x13 & 1) == 0)) &&
                    (((*(longlong *)(DAT_140c65898 + 0x6c50) == 0 ||
                       ((*(uint *)(*(longlong *)(DAT_140c65898 + 0x6c50) + 8) >> 1 & 1) == 0)) ||
                      ((uVar2 >> 0x12 & 1) != 0)))) {
                    uVar2 = *(uint *)(lVar5 + 0x10);
                    uVar6 = 0;
                    if (uVar2 != 0) {
                        plVar7 = (longlong *)(lVar5 + 0x18);
                        do {
                            iVar4 = FUN_1405510d0(lVar5);
                            if (((iVar4 == 0) && (iVar4 = FUN_140553790(lVar5), iVar4 != 0)) &&
                                (((*(byte *)(*plVar7 + 8) & 0x80) != 0 &&
                                  (iVar4 = FUN_140550c50(lVar5,param_1,uVar6,param_2), iVar4 != 0)))) {
                                return 1;
                            }
                            uVar6 = uVar6 + 1;
                            plVar7 = plVar7 + 1;
                        } while (uVar6 < uVar2);
                    }
                }
                iVar8 = iVar8 + 1;
            } while (iVar8 < iVar1);
        }
    }
    return 0;
}



ulonglong FUN_1405a9420(undefined8 param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res10 [2];

    lVar2 = DAT_140c65b80;
    local_res10[0] = param_2;
    uVar4 = (**(code **)(DAT_140c65b80 + 0x78))(local_res10);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x70) + (uVar4 % *(ulonglong *)(lVar2 + 0x68)) * 8)
            ;
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x80))(local_res10,puVar1 + 2), iVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



void FUN_1405a94b0(undefined8 param_1,longlong param_2)

{
    uint uVar1;
    uint **ppuVar2;
    undefined8 *puVar3;
    longlong lVar4;
    uint **ppuVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong *plVar8;

    lVar4 = DAT_140c65b80;
    plVar8 = (longlong *)**(longlong **)(DAT_140c65b80 + 0x58);
    if (plVar8 != *(longlong **)(DAT_140c65b80 + 0x58)) {
        do {
            ppuVar2 = (uint **)((uint **)plVar8[2])[4];
            ppuVar5 = (uint **)*ppuVar2;
            lVar7 = 0;
            if (ppuVar5 != ppuVar2) {
                do {
                    ppuVar5 = (uint **)*ppuVar5;
                    lVar7 = lVar7 + 1;
                } while (ppuVar5 != ppuVar2);
                if (lVar7 != 0) {
                    uVar1 = **(uint **)plVar8[2];
                    FUN_14043f640(param_2);
                    lVar7 = ((ulonglong)uVar1 %
                             (ulonglong)(*(longlong *)(param_2 + 0x18) - *(longlong *)(param_2 + 0x10) >> 3)) *
                            8;
                    puVar3 = *(undefined8 **)(lVar7 + *(longlong *)(param_2 + 0x10));
                    for (puVar6 = puVar3; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
                        if (*(uint *)(puVar6 + 1) == uVar1) goto LAB_1405a9594;
                    }
                    puVar6 = (undefined8 *)FUN_14018b280(0x10);
                    *puVar6 = 0;
                    if (puVar6 + 1 != (undefined8 *)0x0) {
                        *(uint *)(puVar6 + 1) = uVar1;
                    }
                    *puVar6 = puVar3;
                    *(undefined8 **)(lVar7 + *(longlong *)(param_2 + 0x10)) = puVar6;
                    *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
                }
            }
            LAB_1405a9594:
            plVar8 = (longlong *)*plVar8;
        } while (plVar8 != (longlong *)*(longlong *)(lVar4 + 0x58));
    }
    return;
}



void FUN_1405a95c0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong *plVar3;

    lVar1 = *(longlong *)(param_1 + 0x88);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140008410(param_1 + 0x58);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x60),0);
    plVar3 = (longlong *)**(longlong **)(param_1 + 0x50);
    if (plVar3 != *(longlong **)(param_1 + 0x50)) {
        do {
            plVar2 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x50));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x50);
    *(longlong *)(*(longlong *)(param_1 + 0x50) + 8) = *(longlong *)(param_1 + 0x50);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x50),0);
    return;
}



void FUN_1405a9660(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    uint uVar3;
    ulonglong uVar4;

    if (param_2 != 0) {
        do {
            FUN_1405a9660(param_1,*(undefined8 *)(param_2 + 0x18));
            lVar1 = *(longlong *)(param_2 + 0x10);
            if ((*(longlong *)(param_2 + 0x28) != 0) &&
                (uVar4 = 0, *(int *)(*(longlong *)(param_2 + 0x28) + 0x10) != 0)) {
                do {
                    puVar2 = *(undefined8 **)(param_2 + 0x38 + uVar4 * 8);
                    if (puVar2 != (undefined8 *)0x0) {
                        (**(code **)*puVar2)(puVar2,1);
                    }
                    uVar3 = (int)uVar4 + 1;
                    uVar4 = (ulonglong)uVar3;
                } while (uVar3 < *(uint *)(*(longlong *)(param_2 + 0x28) + 0x10));
            }
            FUN_14018b900(param_2,0);
            param_2 = lVar1;
        } while (lVar1 != 0);
    }
    return;
}



undefined8 * FUN_1405a96f0(longlong param_1,undefined8 *param_2,uint *param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 *puVar4;

    lVar1 = ((ulonglong)*param_3 %
             (ulonglong)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3)) * 8;
    puVar2 = *(undefined8 **)(lVar1 + *(longlong *)(param_1 + 0x10));
    puVar4 = puVar2;
    while( true ) {
        if (puVar4 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)FUN_14018b280();
            *puVar4 = 0;
            if (puVar4 + 1 != (undefined8 *)0x0) {
                *(uint *)(puVar4 + 1) = *param_3;
            }
            *puVar4 = puVar2;
            lVar3 = *(longlong *)(param_1 + 0x10);
            *param_2 = puVar4;
            *(undefined8 **)(lVar1 + lVar3) = puVar4;
            *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 1;
            param_2[1] = param_1;
            *(undefined *)(param_2 + 2) = 1;
            return param_2;
        }
        if (*(uint *)(puVar4 + 1) == *param_3) break;
        puVar4 = (undefined8 *)*puVar4;
    }
    *param_2 = puVar4;
    *(undefined *)(param_2 + 2) = 0;
    param_2[1] = param_1;
    return param_2;
}



undefined8 FUN_1405a97c0(undefined4 *param_1,float *param_2,undefined4 param_3)

{
    undefined4 *puVar1;

    puVar1 = (undefined4 *)FUN_14024b980(param_3);
    if (puVar1 == (undefined4 *)0x0) {
        return 0;
    }
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    param_1[3] = puVar1[3];
    param_1[4] = puVar1[4];
    param_1[5] = puVar1[5];
    param_1[6] = puVar1[6];
    param_1[7] = puVar1[7];
    param_1[8] = puVar1[8];
    param_1[9] = puVar1[9];
    param_1[10] = puVar1[10];
    param_1[0xb] = puVar1[0xb];
    param_1[0xc] = puVar1[0xc];
    param_1[3] = (float)param_1[3] + *param_2;
    param_1[4] = param_2[1] + (float)param_1[4];
    param_1[5] = param_2[2] + (float)param_1[5];
    return 1;
}



void FUN_1405a9880(longlong param_1)

{
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
        *(undefined8 *)(param_1 + 0x60) = 0;
    }
    if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
        *(undefined8 *)(param_1 + 0x68) = 0;
    }
    FUN_140195d70(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x88);
    }
    if (*(undefined8 **)(param_1 + 0x88) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x80);
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x40),0);
    }
    return;
}



void FUN_1405a9920(int *param_1)

{
    if (param_1[0x2e] == 5) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingBuildComplete",&DAT_1409f327c,
                      *param_1 + 1);
        param_1[0x2e] = 1;
        return;
    }
    if ((uint)param_1[0x2e] < 2) {
        param_1[0x2e] = 2;
    }
    return;
}



void FUN_1405a9980(longlong param_1)

{
    if (*(int *)(param_1 + 0xb8) == 4) {
        *(undefined4 *)(param_1 + 0xb8) = 5;
        if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
            *(undefined8 *)(param_1 + 0x60) = 0;
        }
        if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x68) + 8))();
            *(undefined8 *)(param_1 + 0x68) = 0;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingBuildComplete",&DAT_1409f3234,1);
        return;
    }
    return;
}



void FUN_1405a9a00(int *param_1,uint param_2,int param_3)

{
    ulonglong uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined4 uVar8;
    undefined8 local_res8;
    undefined8 local_res20;
    int local_88;
    undefined4 local_84;
    undefined4 local_80;
    undefined8 local_7c;
    undefined8 local_74;
    undefined4 local_6c;
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
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    uVar7 = (ulonglong)param_2;
    lVar3 = FUN_1405b15c0(&DAT_140c7dfb0,param_1[1]);
    if (((lVar3 != 0) && (lVar4 = FUN_140206c60(param_1[3]), lVar4 != 0)) &&
        (lVar4 = FUN_140206820(*(undefined4 *)(lVar4 + 0x7c)), lVar4 != 0)) {
        if (param_3 == 0) {
            param_1[0x2e] = 3;
            uVar8 = extraout_XMM0_Da;
            if ((*(longlong **)(param_1 + 0x1a) == (longlong *)0x0) ||
                (plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x1a) + 0x150))(),
                        uVar8 = extraout_XMM0_Da_00, plVar5 == (longlong *)0x0)) {
                if ((*(longlong **)(param_1 + 0x16) != (longlong *)0x0) &&
                    (*(int *)(lVar4 + 0x44 + uVar7 * 4) != 0)) {
                    (**(code **)(**(longlong **)(param_1 + 0x16) + 0x98))(uVar8,0);
                    puVar6 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0x16) + 0x38))();
                    uVar1 = *(ulonglong *)(lVar4 + 0x10);
                    lVar3 = 0;
                    local_68 = *puVar6;
                    uStack100 = puVar6[1];
                    uStack96 = puVar6[2];
                    uStack92 = puVar6[3];
                    local_58 = puVar6[4];
                    uStack84 = puVar6[5];
                    uStack80 = puVar6[6];
                    uStack76 = puVar6[7];
                    local_48 = puVar6[8];
                    uStack68 = puVar6[9];
                    uStack64 = puVar6[10];
                    uStack60 = puVar6[0xb];
                    local_38 = puVar6[0xc];
                    uStack52 = puVar6[0xd];
                    uStack48 = puVar6[0xe];
                    uStack44 = puVar6[0xf];
                    if (uVar1 != 0) {
                        if (DAT_140c3fe70 < uVar1) {
                            lVar3 = 0;
                        }
                        else {
                            lVar3 = DAT_140c3fe68 + uVar1;
                        }
                    }
                    iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7250) + 0x28))
                            (*(longlong **)(DAT_140c65898 + 0x7250),lVar3,param_1 + 0x18,0);
                    if (-1 < iVar2) {
                        local_88 = *(int *)(lVar4 + 0x44 + uVar7 * 4);
                        local_84 = 0;
                        local_7c = 0;
                        local_74 = 0;
                        local_80 = 0x3f800000;
                        local_6c = 0;
                        (**(code **)(**(longlong **)(param_1 + 0x18) + 0x248))
                                (*(longlong **)(param_1 + 0x18),0,&local_88);
                        local_res8 = 0;
                        iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 200))
                                (*(longlong **)(DAT_140c65898 + 0x7248),&local_68,
                                 *(undefined8 *)(param_1 + 0x18),&local_res8,&local_res20,0);
                        if (-1 < iVar2) {
                            *(undefined8 *)(param_1 + 0x1a) = local_res20;
                        }
                    }
                }
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingBuildStarted",&DAT_1409f3264,
                              *param_1 + 1);
            }
            else {
                local_88 = *(int *)(lVar4 + 0x44 + uVar7 * 4);
                if (local_88 != 0) {
                    local_80 = 0x3f800000;
                    local_84 = 0;
                    local_7c = 0;
                    local_74 = 0;
                    local_6c = 0;
                    (**(code **)(*plVar5 + 0x248))(plVar5,0,&local_88);
                }
            }
        }
        else {
            if (*(longlong **)(param_1 + 0x16) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x16) + 0x98))(extraout_XMM0_Da,0x3f800000);
            }
            if (*(int *)(lVar3 + 0xb8) == param_1[2]) {
                param_1[0x2e] = 4;
                FUN_1405abf80(lVar3);
            }
            else {
                param_1[0x2e] = 5;
            }
        }
    }
    return;
}



void FUN_1405a9c70(longlong param_1)

{
    undefined auStack88 [32];
    undefined4 local_38 [2];
    _FILETIME local_30;
    SYSTEMTIME local_28;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack88;
    local_28.wYear = *(WORD *)(param_1 + 0x10);
    local_28.wMonth = *(WORD *)(param_1 + 0x12);
    local_38[0] = 0;
    local_28.wDay = *(WORD *)(param_1 + 0x14);
    local_28.wDayOfWeek = 0;
    local_28.wHour = *(WORD *)(param_1 + 0x16);
    local_28.wMinute = *(WORD *)(param_1 + 0x18);
    local_28.wSecond = *(WORD *)(param_1 + 0x1a);
    local_28.wMilliseconds = (WORD)((ulonglong)*(uint *)(param_1 + 0x1c) / 1000000);
    SystemTimeToFileTime(&local_28,&local_30);
    FUN_1401e83a0(local_38,local_30);
    FUN_1407db4f0(local_38[0],local_18 ^ (ulonglong)auStack88);
    return;
}



void FUN_1405a9d10(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
    int iVar1;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined8 local_res8;
    undefined auVar2 [16];

    auVar2 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    if (param_4 + 0x20 != 0) {
        iVar1 = FUN_1401e82f0(&local_res8);
        if (-1 < iVar1) {
            FUN_1401e8230(param_4 + 0x20,local_res8,param_6,param_7,auVar2);
        }
        *(undefined4 *)(param_4 + 0x30) = param_3;
        return;
    }
    *(undefined4 *)(param_4 + 0x30) = param_3;
    return;
}



void FUN_1405a9d80(longlong param_1)

{
    longlong lVar1;
    _FILETIME *p_Var2;
    float fVar3;
    float fVar4;
    float fVar5;
    undefined auStack120 [32];
    _FILETIME local_58;
    _FILETIME local_50;
    SYSTEMTIME local_48;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    local_48.wYear = *(WORD *)(param_1 + 0x20);
    fVar4 = 0.0;
    local_48.wMonth = *(WORD *)(param_1 + 0x22);
    local_58.dwLowDateTime = 0;
    local_48.wDay = *(WORD *)(param_1 + 0x24);
    local_48.wDayOfWeek = 0;
    local_48.wHour = *(WORD *)(param_1 + 0x26);
    local_48.wMinute = *(WORD *)(param_1 + 0x28);
    local_48.wSecond = *(WORD *)(param_1 + 0x2a);
    local_48.wMilliseconds = (WORD)((ulonglong)*(uint *)(param_1 + 0x2c) / 1000000);
    SystemTimeToFileTime(&local_48,&local_50);
    FUN_1401e83a0(&local_58,CONCAT44(local_50.dwHighDateTime,local_50.dwLowDateTime));
    fVar5 = (float)(local_58.dwLowDateTime & 0x7fffffff);
    lVar1 = FUN_140206c60(*(undefined4 *)(param_1 + 0xc));
    if ((lVar1 != 0) && (lVar1 = FUN_140206820(*(undefined4 *)(lVar1 + 0x7c)), lVar1 != 0)) {
        local_58.dwLowDateTime = 0x3f800000;
        p_Var2 = &local_58;
        if ((float)((_FILETIME *)(param_1 + 0x30))->dwLowDateTime <= 1.0) {
            p_Var2 = (_FILETIME *)(param_1 + 0x30);
        }
        fVar3 = 1.0 - (float)p_Var2->dwLowDateTime;
        local_58.dwLowDateTime = 0;
        local_50.dwLowDateTime =
                (DWORD)((fVar3 * *(float *)(lVar1 + 0x24) +
                         *(float *)(lVar1 + 0x20) * 0.001 * 1.157407e-05 +
                         *(float *)(lVar1 + 0x1c) * 0.001 * 1.157407e-05 + fVar3 * *(float *)(lVar1 + 0x28)
                         + fVar3 * *(float *)(lVar1 + 0x2c) + fVar3 * *(float *)(lVar1 + 0x30) +
                         fVar3 * *(float *)(lVar1 + 0x34) + fVar3 * *(float *)(lVar1 + 0x38) +
                         fVar3 * *(float *)(lVar1 + 0x3c) + fVar3 * *(float *)(lVar1 + 0x40)) - fVar5);
        p_Var2 = &local_58;
        if (fVar4 <= (float)local_50.dwLowDateTime) {
            p_Var2 = &local_50;
        }
        fVar4 = (float)p_Var2->dwLowDateTime;
    }
    FUN_1407db4f0(fVar4,local_38 ^ (ulonglong)auStack120);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1405a9f40(undefined8 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    uint uVar5;
    int iVar6;
    undefined8 uVar7;
    int *piVar8;
    undefined4 *puVar9;
    code *pcVar10;
    undefined4 *puVar11;
    undefined8 *puVar12;
    longlong lVar13;
    uint uVar14;

    uVar14 = 0;
    puVar4 = param_1 + 1;
    *param_1 = &PTR_FUN_140b6d000;
    uVar5 = 0;
    *(undefined4 *)puVar4 = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
    DAT_140c1e744 = DAT_140c1e744 + 1;
    *(int *)((longlong)param_1 + 0xbc) = DAT_140c1e744;
    lVar13 = 1;
    *(undefined4 *)(param_1 + 0x18) = 1;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    FUN_140019600(param_1 + 0x2e);
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    FUN_140019600(param_1 + 0x37);
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    puVar9 = param_2;
    if ((((uint)param_2 | (uint)puVar4) & 0xf) == 0) {
        do {
            puVar12 = puVar4;
            puVar11 = puVar9;
            uVar1 = puVar11[1];
            uVar2 = puVar11[2];
            uVar3 = puVar11[3];
            *(undefined4 *)puVar12 = *puVar11;
            *(undefined4 *)((longlong)puVar12 + 4) = uVar1;
            *(undefined4 *)(puVar12 + 1) = uVar2;
            *(undefined4 *)((longlong)puVar12 + 0xc) = uVar3;
            uVar1 = puVar11[5];
            uVar2 = puVar11[6];
            uVar3 = puVar11[7];
            *(undefined4 *)(puVar12 + 2) = puVar11[4];
            *(undefined4 *)((longlong)puVar12 + 0x14) = uVar1;
            *(undefined4 *)(puVar12 + 3) = uVar2;
            *(undefined4 *)((longlong)puVar12 + 0x1c) = uVar3;
            uVar1 = puVar11[9];
            uVar2 = puVar11[10];
            uVar3 = puVar11[0xb];
            *(undefined4 *)(puVar12 + 4) = puVar11[8];
            *(undefined4 *)((longlong)puVar12 + 0x24) = uVar1;
            *(undefined4 *)(puVar12 + 5) = uVar2;
            *(undefined4 *)((longlong)puVar12 + 0x2c) = uVar3;
            uVar1 = puVar11[0xd];
            uVar2 = puVar11[0xe];
            uVar3 = puVar11[0xf];
            *(undefined4 *)(puVar12 + 6) = puVar11[0xc];
            *(undefined4 *)((longlong)puVar12 + 0x34) = uVar1;
            *(undefined4 *)(puVar12 + 7) = uVar2;
            *(undefined4 *)((longlong)puVar12 + 0x3c) = uVar3;
            uVar1 = puVar11[0x11];
            uVar2 = puVar11[0x12];
            uVar3 = puVar11[0x13];
            *(undefined4 *)(puVar12 + 8) = puVar11[0x10];
            *(undefined4 *)((longlong)puVar12 + 0x44) = uVar1;
            *(undefined4 *)(puVar12 + 9) = uVar2;
            *(undefined4 *)((longlong)puVar12 + 0x4c) = uVar3;
            uVar1 = puVar11[0x15];
            uVar2 = puVar11[0x16];
            uVar3 = puVar11[0x17];
            *(undefined4 *)(puVar12 + 10) = puVar11[0x14];
            *(undefined4 *)((longlong)puVar12 + 0x54) = uVar1;
            *(undefined4 *)(puVar12 + 0xb) = uVar2;
            *(undefined4 *)((longlong)puVar12 + 0x5c) = uVar3;
            uVar1 = puVar11[0x19];
            uVar2 = puVar11[0x1a];
            uVar3 = puVar11[0x1b];
            *(undefined4 *)(puVar12 + 0xc) = puVar11[0x18];
            *(undefined4 *)((longlong)puVar12 + 100) = uVar1;
            *(undefined4 *)(puVar12 + 0xd) = uVar2;
            *(undefined4 *)((longlong)puVar12 + 0x6c) = uVar3;
            uVar1 = puVar11[0x1d];
            uVar2 = puVar11[0x1e];
            uVar3 = puVar11[0x1f];
            *(undefined4 *)(puVar12 + 0xe) = puVar11[0x1c];
            *(undefined4 *)((longlong)puVar12 + 0x74) = uVar1;
            *(undefined4 *)(puVar12 + 0xf) = uVar2;
            *(undefined4 *)((longlong)puVar12 + 0x7c) = uVar3;
            lVar13 = lVar13 + -1;
            puVar9 = puVar11 + 0x20;
            puVar4 = puVar12 + 0x10;
        } while (lVar13 != 0);
        uVar1 = puVar11[0x21];
        uVar2 = puVar11[0x22];
        uVar3 = puVar11[0x23];
        *(undefined4 *)(puVar12 + 0x10) = puVar11[0x20];
        *(undefined4 *)((longlong)puVar12 + 0x84) = uVar1;
        *(undefined4 *)(puVar12 + 0x11) = uVar2;
        *(undefined4 *)((longlong)puVar12 + 0x8c) = uVar3;
        uVar1 = puVar11[0x25];
        uVar2 = puVar11[0x26];
        uVar3 = puVar11[0x27];
        *(undefined4 *)(puVar12 + 0x12) = puVar11[0x24];
        *(undefined4 *)((longlong)puVar12 + 0x94) = uVar1;
        *(undefined4 *)(puVar12 + 0x13) = uVar2;
        *(undefined4 *)((longlong)puVar12 + 0x9c) = uVar3;
        uVar1 = puVar11[0x29];
        uVar2 = puVar11[0x2a];
        uVar3 = puVar11[0x2b];
        *(undefined4 *)(puVar12 + 0x14) = puVar11[0x28];
        *(undefined4 *)((longlong)puVar12 + 0xa4) = uVar1;
        *(undefined4 *)(puVar12 + 0x15) = uVar2;
        *(undefined4 *)((longlong)puVar12 + 0xac) = uVar3;
    }
    else {
        FUN_1407db590(puVar4,param_2,0xb0);
    }
    uVar7 = FUN_14018e9c0(*(undefined8 *)(param_2 + 0xc));
    param_1[7] = uVar7;
    piVar8 = (int *)FUN_1402070a0(*(undefined4 *)(param_1 + 8));
    if (piVar8 != (int *)0x0) {
        if (DAT_140c63838 == (code *)0x0) {
            if (_DAT_140c65340 == 0) {
                iVar6 = FUN_140205d40();
                if (iVar6 < 0) {
                    uVar5 = 0;
                }
                else {
                    uVar5 = (**(code **)(*DAT_140c63c30 + 0x28))();
                }
            }
        }
        else {
            uVar5 = (*DAT_140c63838)(&PTR_u_HousingPlotInfo_140a6a8d8,DAT_140c63858);
        }
        pcVar10 = DAT_140c63848;
        if (uVar5 != 0) {
            do {
                if (pcVar10 == (code *)0x0) {
                    if ((_DAT_140c65340 == 0) &&
                        (iVar6 = FUN_140205d40(), pcVar10 = DAT_140c63848, -1 < iVar6)) {
                        puVar9 = (undefined4 *)(**(code **)(*DAT_140c63c30 + 0x20))(DAT_140c63c30,uVar14);
                        goto LAB_1405aa19a;
                    }
                }
                else {
                    puVar9 = (undefined4 *)(*pcVar10)(&PTR_u_HousingPlotInfo_140a6a8d8,uVar14,DAT_140c63858);
                    LAB_1405aa19a:
                    pcVar10 = DAT_140c63848;
                    if ((((puVar9 != (undefined4 *)0x0) && (puVar9[3] == *piVar8)) && (puVar9[4] == 0)) &&
                        (((uint)puVar9[2] < 0x37 &&
                          ((0x50040000000000U >> ((ulonglong)(uint)puVar9[2] & 0x3f) & 1) != 0)))) {
                        *(undefined4 *)(param_1 + 0x17) = *puVar9;
                        break;
                    }
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 < uVar5);
        }
        FUN_1405aee20(param_1);
    }
    return param_1;
}



undefined8 FUN_1405aa200(undefined8 param_1,ulonglong param_2)

{
    FUN_1405aa240();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405aa240(undefined8 *param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    longlong **pplVar7;
    longlong **pplVar8;

    *param_1 = &PTR_FUN_140b6d000;
    lVar3 = param_1[0x1d];
    if (lVar3 != 0) {
        iVar2 = *(int *)(lVar3 + -8);
        lVar5 = (longlong)iVar2 * 0xc0 + lVar3;
        while (iVar2 = iVar2 + -1, -1 < iVar2) {
            lVar5 = lVar5 + -0xc0;
            FUN_1405a9880(lVar5);
        }
        FUN_14018b900(lVar3 + -8,0);
    }
    puVar6 = (undefined8 *)param_1[0x1f];
    if (puVar6 != (undefined8 *)param_1[0x20]) {
        do {
            FUN_14018b900(*puVar6,0);
            puVar6 = puVar6 + 1;
        } while (puVar6 != (undefined8 *)param_1[0x20]);
    }
    lVar3 = param_1[0x20];
    lVar5 = param_1[0x1f];
    FUN_1407db590(lVar5,lVar3,0);
    param_1[0x20] = param_1[0x20] + (lVar3 - lVar5 >> 3) * -8;
    FUN_1405ae130(param_1);
    uVar4 = 0;
    if ((longlong *)param_1[0x25] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x25] + 8))();
        param_1[0x25] = 0;
    }
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x24] + 8))();
        param_1[0x24] = 0;
    }
    if ((longlong *)param_1[0x23] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x23] + 8))();
        param_1[0x23] = 0;
    }
    pplVar7 = (longlong **)param_1[0x27];
    if (pplVar7 != (longlong **)param_1[0x28]) {
        do {
            if (*pplVar7 != (longlong *)0x0) {
                (**(code **)(**pplVar7 + 8))();
                *pplVar7 = (longlong *)0x0;
            }
            pplVar7 = pplVar7 + 1;
        } while (pplVar7 != (longlong **)param_1[0x28]);
    }
    FUN_1405b1c90(param_1 + 0x26,param_1[0x27],param_1[0x28]);
    pplVar7 = (longlong **)param_1[0x2b];
    if (pplVar7 != (longlong **)param_1[0x2c]) {
        do {
            if (*pplVar7 != (longlong *)0x0) {
                (**(code **)(**pplVar7 + 8))();
                *pplVar7 = (longlong *)0x0;
            }
            pplVar7 = pplVar7 + 1;
        } while (pplVar7 != (longlong **)param_1[0x2c]);
    }
    lVar3 = param_1[0x2c];
    lVar5 = param_1[0x2b];
    FUN_1407db590(lVar5,lVar3,0);
    param_1[0x2c] = param_1[0x2c] + (lVar3 - lVar5 >> 3) * -8;
    FUN_14018b900(param_1[7],0);
    FUN_14018b900(param_1[0x3c],0);
    FUN_14018b900(param_1[0x3d],0);
    FUN_14077da50(param_1 + 0x37);
    if (param_1[0x34] != 0) {
        FUN_14018b900(param_1[0x34],0);
    }
    if (param_1[0x2f] != 0) {
        do {
            plVar1 = (longlong *)(param_1[0x30] + uVar4 * 8);
            lVar3 = *(longlong *)(param_1[0x30] + uVar4 * 8);
            while (lVar3 != 0) {
                lVar3 = *plVar1;
                *plVar1 = *(longlong *)(lVar3 + 8);
                FUN_14018b900(lVar3,0);
                lVar3 = *plVar1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong)param_1[0x2f]);
    }
    param_1[0x2e] = 0;
    FUN_14018b900(param_1[0x30],0);
    param_1[0x30] = 0;
    if (param_1[0x2b] != 0) {
        FUN_14018b900(param_1[0x2b],0);
    }
    pplVar7 = (longlong **)param_1[0x28];
    for (pplVar8 = (longlong **)param_1[0x27]; pplVar8 != pplVar7; pplVar8 = pplVar8 + 1) {
        if (*pplVar8 != (longlong *)0x0) {
            (**(code **)(**pplVar8 + 8))();
        }
    }
    if (param_1[0x27] != 0) {
        FUN_14018b900(param_1[0x27],0);
    }
    if ((longlong *)param_1[0x24] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x24] + 8))();
    }
    if ((longlong *)param_1[0x23] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x23] + 8))();
    }
    if (param_1[0x1f] != 0) {
        FUN_14018b900(param_1[0x1f],0);
    }
    if (param_1[0x1a] != 0) {
        FUN_14018b900(param_1[0x1a],0);
    }
    return;
}



void FUN_1405aa570(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 *puVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined4 *puVar8;
    undefined4 *puVar9;

    FUN_14018b900(*(undefined8 *)(param_1 + 0x38),0);
    puVar1 = (undefined4 *)(param_1 + 8);
    if ((((uint)param_2 | (uint)puVar1) & 0xf) == 0) {
        lVar6 = 1;
        puVar5 = param_2;
        do {
            puVar9 = puVar5;
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
            lVar6 = lVar6 + -1;
            puVar1 = puVar8 + 0x20;
            puVar5 = puVar9 + 0x20;
        } while (lVar6 != 0);
        uVar2 = puVar9[0x21];
        uVar3 = puVar9[0x22];
        uVar4 = puVar9[0x23];
        puVar8[0x20] = puVar9[0x20];
        puVar8[0x21] = uVar2;
        puVar8[0x22] = uVar3;
        puVar8[0x23] = uVar4;
        uVar2 = puVar9[0x25];
        uVar3 = puVar9[0x26];
        uVar4 = puVar9[0x27];
        puVar8[0x24] = puVar9[0x24];
        puVar8[0x25] = uVar2;
        puVar8[0x26] = uVar3;
        puVar8[0x27] = uVar4;
        uVar2 = puVar9[0x29];
        uVar3 = puVar9[0x2a];
        uVar4 = puVar9[0x2b];
        puVar8[0x28] = puVar9[0x28];
        puVar8[0x29] = uVar2;
        puVar8[0x2a] = uVar3;
        puVar8[0x2b] = uVar4;
    }
    else {
        FUN_1407db590(puVar1,param_2,0xb0);
    }
    uVar7 = FUN_14018e9c0(*(undefined8 *)(param_2 + 0xc));
    *(undefined8 *)(param_1 + 0x38) = uVar7;
    return;
}



void FUN_1405aa640(longlong param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   int param_7,int param_8)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined local_c8 [176];

    uVar2 = 0;
    lVar1 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    if (lVar1 != 0) {
        uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    if (param_6 == 0) {
        param_6 = *(int *)(param_1 + 0x58);
    }
    lVar1 = FUN_140207d60(param_6);
    if ((lVar1 == 0) || ((*(byte *)(lVar1 + 0x18) & 0x40) == 0)) {
        if (param_6 == 0) {
            lVar1 = FUN_1405ac9b0(param_1);
            if (lVar1 != 0) {
                FUN_1404c94c0();
            }
        }
    }
    else {
        FUN_1405ac3f0(param_1,4,uVar2,param_6,1);
    }
    if (param_7 == 0) {
        param_7 = *(int *)(param_1 + 0x5c);
    }
    lVar1 = FUN_140207d60(param_7);
    if ((lVar1 == 0) || ((*(uint *)(lVar1 + 0x18) & 0x100) == 0)) {
        if (param_7 == 0) {
            lVar1 = FUN_1405acb80(param_1);
            if (lVar1 != 0) {
                FUN_1404c94c0();
            }
        }
    }
    else {
        FUN_1405ac3f0(param_1,4,uVar2,param_7,1);
    }
    if (param_8 == 0) {
        param_8 = *(int *)(param_1 + 0x60);
    }
    lVar1 = FUN_140207d60(param_8);
    if ((lVar1 == 0) || ((*(uint *)(lVar1 + 0x18) & 0x200) == 0)) {
        if (param_8 == 0) {
            lVar1 = FUN_1405acd50(param_1);
            if (lVar1 != 0) {
                FUN_1404c94c0();
            }
        }
    }
    else {
        FUN_1405ac3f0(param_1,4,uVar2,param_8,1);
    }
    if ((param_2 != 0) || (param_2 = *(int *)(param_1 + 0x50), param_2 != 0)) {
        FUN_1404bcb00(local_c8,param_1 + 8,0,param_2,0,0,0,0,1,0,0,0,0);
        FUN_1404c8e20();
    }
    if (param_3 == 0) {
        param_3 = *(int *)(param_1 + 0x48);
    }
    lVar1 = FUN_140207d60(param_3);
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x18) & 2) != 0)) {
        FUN_1405ac3f0(param_1,4,uVar2,param_3,1);
    }
    if ((param_4 != 0) || (param_4 = *(int *)(param_1 + 0x4c), param_4 != 0)) {
        FUN_1404bcb00(local_c8,param_1 + 8,0,param_4,0,0,0,0,2,0,0,0,0);
        FUN_1404c8e20();
    }
    if ((param_5 != 0) || (param_5 = *(int *)(param_1 + 0x54), param_5 != 0)) {
        FUN_1404bcb00(local_c8,param_1 + 8,0,param_5,0,0,0,0,3,0,0,0,0);
        FUN_1404c8e20();
    }
    return;
}



void FUN_1405aa950(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    int *piVar4;
    undefined auStack392 [32];
    undefined *local_168;
    undefined4 local_160;
    uint local_158;
    undefined4 local_150;
    undefined4 local_148;
    undefined4 local_140;
    undefined8 local_138;
    undefined8 local_130;
    undefined4 local_128;
    undefined local_108 [176];
    undefined4 local_58;
    int local_54 [4];
    undefined4 local_44;
    undefined4 local_40;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack392;
    FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    local_54[2] = param_3;
    local_54[3] = param_4;
    local_54[0] = param_5;
    local_58 = 0;
    local_54[1] = param_6;
    uVar3 = 1;
    local_44 = param_7;
    piVar4 = local_54;
    local_40 = param_8;
    do {
        if (*piVar4 == 0) {
            lVar2 = FUN_1405ac6c0(param_1);
            if ((lVar2 != 0) && (*(int *)(lVar2 + 0x130) != 0)) {
                uVar1 = *(uint *)(lVar2 + 0x1f0) >> 0x18;
                if (uVar1 < *(uint *)(DAT_140c659f8 + 0xd8) || uVar1 == *(uint *)(DAT_140c659f8 + 0xd8)) {
                    for (lVar2 = *(longlong *)(DAT_140c659f8 + 0x70); lVar2 != 0;
                         lVar2 = *(longlong *)(lVar2 + 8)) {
                        if (*(uint *)(lVar2 + 0x98) == uVar1) {
                            if ((lVar2 != 0) && (*(int *)(lVar2 + 0x14) == *(int *)(param_1 + 0xbc))) {
                                FUN_1404c7770();
                            }
                            break;
                        }
                    }
                }
            }
        }
        else {
            local_128 = 0;
            local_130 = 0;
            local_138 = 0;
            local_140 = 0;
            local_148 = 4;
            local_150 = 0;
            local_168 = (undefined *)((ulonglong)local_168 & 0xffffffff00000000);
            local_160 = param_2;
            local_158 = uVar3;
            FUN_1404bcb00(local_108,param_1 + 8);
            local_168 = local_108;
            FUN_1404c91b0();
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
        if (6 < uVar3) {
            FUN_1407db4f0(local_38 ^ (ulonglong)auStack392);
            return;
        }
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405aab20(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
    undefined8 *puVar1;
    undefined4 **ppuVar2;
    undefined4 *puVar3;
    undefined auStack712 [32];
    undefined8 local_2a8;
    undefined4 local_2a0;
    undefined4 local_298;
    int local_290;
    undefined4 local_288;
    undefined4 local_280;
    undefined4 **local_278;
    undefined8 local_270;
    undefined4 local_268;
    undefined4 *local_248;
    undefined *puStack576;
    undefined4 local_238;
    undefined4 uStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined4 local_1f8;
    undefined4 uStack500;
    undefined4 uStack496;
    undefined4 uStack492;
    undefined4 local_1e8;
    undefined4 uStack484;
    undefined4 uStack480;
    undefined4 uStack476;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined local_1c8 [64];
    undefined local_188 [64];
    undefined local_148 [176];
    undefined4 *local_98;
    undefined *local_90;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack712;
    local_290 = FUN_1405b0840(param_1,param_4);
    if ((local_290 == 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
        puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
        local_248 = (undefined4 *)*puVar1;
        puStack576 = (undefined *)puVar1[1];
        local_238 = *(undefined4 *)(puVar1 + 2);
        uStack564 = *(undefined4 *)((longlong)puVar1 + 0x14);
        uStack560 = *(undefined4 *)(puVar1 + 3);
        uStack556 = *(undefined4 *)((longlong)puVar1 + 0x1c);
        local_228 = *(undefined4 *)(puVar1 + 4);
        uStack548 = *(undefined4 *)((longlong)puVar1 + 0x24);
        uStack544 = *(undefined4 *)(puVar1 + 5);
        uStack540 = *(undefined4 *)((longlong)puVar1 + 0x2c);
        ppuVar2 = &local_248;
        local_218 = *(undefined4 *)(puVar1 + 6);
        uStack532 = *(undefined4 *)((longlong)puVar1 + 0x34);
        uStack528 = *(undefined4 *)(puVar1 + 7);
        uStack524 = *(undefined4 *)((longlong)puVar1 + 0x3c);
    }
    else {
        ppuVar2 = (undefined4 **)FUN_1405b0600(param_1,local_1c8);
    }
    local_208 = *(undefined4 *)ppuVar2;
    uStack516 = *(undefined4 *)((longlong)ppuVar2 + 4);
    uStack512 = *(undefined4 *)(ppuVar2 + 1);
    uStack508 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
    local_1f8 = *(undefined4 *)(ppuVar2 + 2);
    uStack500 = *(undefined4 *)((longlong)ppuVar2 + 0x14);
    uStack496 = *(undefined4 *)(ppuVar2 + 3);
    uStack492 = *(undefined4 *)((longlong)ppuVar2 + 0x1c);
    local_1e8 = *(undefined4 *)(ppuVar2 + 4);
    uStack484 = *(undefined4 *)((longlong)ppuVar2 + 0x24);
    uStack480 = *(undefined4 *)(ppuVar2 + 5);
    uStack476 = *(undefined4 *)((longlong)ppuVar2 + 0x2c);
    local_1d8 = *(undefined4 *)(ppuVar2 + 6);
    uStack468 = *(undefined4 *)((longlong)ppuVar2 + 0x34);
    uStack464 = *(undefined4 *)(ppuVar2 + 7);
    uStack460 = *(undefined4 *)((longlong)ppuVar2 + 0x3c);
    local_98 = &local_208;
    FUN_1401afc20(&local_98,local_188);
    puStack576 = local_188;
    local_248 = param_4;
    local_98 = param_4;
    local_90 = puStack576;
    FUN_1401afb10(&local_98,local_1c8);
    FUN_1404bd000(&local_248,local_1c8);
    local_278 = &local_248;
    local_268 = 0;
    local_270 = 0;
    local_280 = 0;
    local_288 = 9;
    local_298 = 0;
    local_2a0 = 0;
    local_2a8 = (undefined *)((ulonglong)local_2a8._4_4_ << 0x20);
    FUN_1404bcb00(local_148,param_1 + 8,0,param_3);
    FUN_140205fa0();
    local_2a8 = local_148;
    puVar3 = (undefined4 *)FUN_1404c91b0();
    *param_2 = *puVar3;
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack712);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405aacd0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 **ppuVar3;
    undefined4 *puVar4;
    undefined auStack712 [32];
    undefined8 local_2a8;
    undefined4 local_2a0;
    undefined4 local_298;
    int local_290;
    undefined4 local_288;
    undefined4 local_280;
    undefined4 **local_278;
    undefined8 local_270;
    undefined4 local_268;
    undefined4 *local_248;
    undefined *puStack576;
    undefined4 local_238;
    undefined4 uStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined4 local_1f8;
    undefined4 uStack500;
    undefined4 uStack496;
    undefined4 uStack492;
    undefined4 local_1e8;
    undefined4 uStack484;
    undefined4 uStack480;
    undefined4 uStack476;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined local_1c8 [64];
    undefined local_188 [64];
    undefined local_148 [176];
    undefined4 *local_98;
    undefined *local_90;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack712;
    lVar1 = FUN_14077dd00(param_1 + 0x1b8,param_3);
    if (lVar1 != 0) {
        local_290 = FUN_1405b0840(param_1,param_4);
        if ((local_290 == 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
            puVar2 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
            local_248 = (undefined4 *)*puVar2;
            puStack576 = (undefined *)puVar2[1];
            local_238 = *(undefined4 *)(puVar2 + 2);
            uStack564 = *(undefined4 *)((longlong)puVar2 + 0x14);
            uStack560 = *(undefined4 *)(puVar2 + 3);
            uStack556 = *(undefined4 *)((longlong)puVar2 + 0x1c);
            local_228 = *(undefined4 *)(puVar2 + 4);
            uStack548 = *(undefined4 *)((longlong)puVar2 + 0x24);
            uStack544 = *(undefined4 *)(puVar2 + 5);
            uStack540 = *(undefined4 *)((longlong)puVar2 + 0x2c);
            ppuVar3 = &local_248;
            local_218 = *(undefined4 *)(puVar2 + 6);
            uStack532 = *(undefined4 *)((longlong)puVar2 + 0x34);
            uStack528 = *(undefined4 *)(puVar2 + 7);
            uStack524 = *(undefined4 *)((longlong)puVar2 + 0x3c);
        }
        else {
            ppuVar3 = (undefined4 **)FUN_1405b0600(param_1,local_1c8);
        }
        local_208 = *(undefined4 *)ppuVar3;
        uStack516 = *(undefined4 *)((longlong)ppuVar3 + 4);
        uStack512 = *(undefined4 *)(ppuVar3 + 1);
        uStack508 = *(undefined4 *)((longlong)ppuVar3 + 0xc);
        local_1f8 = *(undefined4 *)(ppuVar3 + 2);
        uStack500 = *(undefined4 *)((longlong)ppuVar3 + 0x14);
        uStack496 = *(undefined4 *)(ppuVar3 + 3);
        uStack492 = *(undefined4 *)((longlong)ppuVar3 + 0x1c);
        local_1e8 = *(undefined4 *)(ppuVar3 + 4);
        uStack484 = *(undefined4 *)((longlong)ppuVar3 + 0x24);
        uStack480 = *(undefined4 *)(ppuVar3 + 5);
        uStack476 = *(undefined4 *)((longlong)ppuVar3 + 0x2c);
        local_1d8 = *(undefined4 *)(ppuVar3 + 6);
        uStack468 = *(undefined4 *)((longlong)ppuVar3 + 0x34);
        uStack464 = *(undefined4 *)(ppuVar3 + 7);
        uStack460 = *(undefined4 *)((longlong)ppuVar3 + 0x3c);
        local_98 = &local_208;
        FUN_1401afc20(&local_98,local_188);
        puStack576 = local_188;
        local_248 = param_4;
        local_98 = param_4;
        local_90 = puStack576;
        FUN_1401afb10(&local_98,local_1c8);
        FUN_1404bd000(&local_248,local_1c8);
        local_268 = *(undefined4 *)(lVar1 + 0xc);
        local_278 = &local_248;
        local_270 = 0;
        local_280 = 0;
        local_288 = 9;
        local_298 = 0;
        local_2a0 = 0;
        local_2a8 = (undefined *)((ulonglong)local_2a8._4_4_ << 0x20);
        FUN_1404bcb00(local_148,param_1 + 8,param_3,*(undefined4 *)(lVar1 + 8));
        FUN_140205fa0();
        local_2a8 = local_148;
        puVar4 = (undefined4 *)FUN_1404c91b0();
        *param_2 = *puVar4;
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack712);
    return;
}



void FUN_1405aaeb0(void)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong local_18;
    ulonglong local_10;

    plVar1 = *(longlong **)(DAT_140c659f8 + 200);
    if (plVar1 != (longlong *)0x0) {
        uVar5 = 0;
        local_10 = 0;
        local_18 = 0;
        iVar2 = (**(code **)(*plVar1 + 0x88))(plVar1,&local_18);
        if ((-1 < iVar2) && (uVar4 = local_10, local_10 != 0)) {
            do {
                lVar3 = *(longlong *)(local_18 + uVar5 * 8);
                if ((lVar3 != 0) && (*(int *)(lVar3 + 0x130) != 0)) {
                    (**(code **)(*plVar1 + 0x98))(plVar1);
                    FUN_1404c94c0();
                    uVar4 = local_10;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar4);
        }
        lVar3 = DAT_140c659f8;
        local_10 = 0;
        if (*(longlong **)(DAT_140c659f8 + 200) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(DAT_140c659f8 + 200) + 8))();
            *(undefined8 *)(lVar3 + 200) = 0;
        }
        lVar3 = FUN_1405b1510(*(undefined8 *)(DAT_140c659f0 + 0x338));
        if (lVar3 != 0) {
            FUN_1405afe10(lVar3);
        }
        if (local_18 != 0) {
            (**(code **)(*(longlong *)(local_18 + -0x10) + 8))(local_18 + -0x10);
        }
    }
    return;
}



void FUN_1405aafc0(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
    int iVar1;
    undefined8 *puVar2;
    undefined4 **ppuVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined auStack712 [32];
    undefined *local_2a8;
    undefined4 local_2a0;
    undefined4 local_298;
    int local_290;
    undefined4 local_288;
    undefined4 local_280;
    undefined4 **local_278;
    undefined8 local_270;
    undefined4 local_268;
    undefined4 *local_248;
    undefined *puStack576;
    undefined4 local_238;
    undefined4 uStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined4 local_1f8;
    undefined4 uStack500;
    undefined4 uStack496;
    undefined4 uStack492;
    undefined4 local_1e8;
    undefined4 uStack484;
    undefined4 uStack480;
    undefined4 uStack476;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined local_1c8 [64];
    undefined local_188 [64];
    undefined local_148 [176];
    undefined4 *local_98;
    undefined *local_90;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack712;
    iVar1 = FUN_1405b0840(param_1,param_4);
    if ((iVar1 == 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
        puVar2 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
        local_248 = (undefined4 *)*puVar2;
        puStack576 = (undefined *)puVar2[1];
        local_238 = *(undefined4 *)(puVar2 + 2);
        uStack564 = *(undefined4 *)((longlong)puVar2 + 0x14);
        uStack560 = *(undefined4 *)(puVar2 + 3);
        uStack556 = *(undefined4 *)((longlong)puVar2 + 0x1c);
        local_228 = *(undefined4 *)(puVar2 + 4);
        uStack548 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uStack544 = *(undefined4 *)(puVar2 + 5);
        uStack540 = *(undefined4 *)((longlong)puVar2 + 0x2c);
        ppuVar3 = &local_248;
        local_218 = *(undefined4 *)(puVar2 + 6);
        uStack532 = *(undefined4 *)((longlong)puVar2 + 0x34);
        uStack528 = *(undefined4 *)(puVar2 + 7);
        uStack524 = *(undefined4 *)((longlong)puVar2 + 0x3c);
    }
    else {
        ppuVar3 = (undefined4 **)FUN_1405b0600(param_1,local_1c8);
    }
    local_208 = *(undefined4 *)ppuVar3;
    uStack516 = *(undefined4 *)((longlong)ppuVar3 + 4);
    uStack512 = *(undefined4 *)(ppuVar3 + 1);
    uStack508 = *(undefined4 *)((longlong)ppuVar3 + 0xc);
    local_1f8 = *(undefined4 *)(ppuVar3 + 2);
    uStack500 = *(undefined4 *)((longlong)ppuVar3 + 0x14);
    uStack496 = *(undefined4 *)(ppuVar3 + 3);
    uStack492 = *(undefined4 *)((longlong)ppuVar3 + 0x1c);
    local_1e8 = *(undefined4 *)(ppuVar3 + 4);
    uStack484 = *(undefined4 *)((longlong)ppuVar3 + 0x24);
    uStack480 = *(undefined4 *)(ppuVar3 + 5);
    uStack476 = *(undefined4 *)((longlong)ppuVar3 + 0x2c);
    local_1d8 = *(undefined4 *)(ppuVar3 + 6);
    uStack468 = *(undefined4 *)((longlong)ppuVar3 + 0x34);
    uStack464 = *(undefined4 *)(ppuVar3 + 7);
    uStack460 = *(undefined4 *)((longlong)ppuVar3 + 0x3c);
    local_98 = &local_208;
    FUN_1401afc20(&local_98,local_188);
    puStack576 = local_188;
    local_248 = param_4;
    local_98 = param_4;
    local_90 = puStack576;
    FUN_1401afb10(&local_98,local_1c8);
    FUN_1404bd000(&local_248,local_1c8);
    lVar4 = FUN_140203da0(param_3);
    if (lVar4 != 0) {
        local_288 = 5;
        if (*(int *)(lVar4 + 8) == 0x36) {
            local_288 = 10;
        }
        local_278 = &local_248;
        local_268 = 0;
        local_270 = 0;
        local_280 = 0;
        local_298 = 0;
        local_2a0 = 0;
        local_2a8 = (undefined *)((ulonglong)local_2a8 & 0xffffffff00000000);
        local_290 = iVar1;
        FUN_1404bcb00(local_148,param_1 + 8,0,param_3);
        FUN_140205fa0();
        local_2a8 = local_148;
        puVar5 = (undefined4 *)FUN_1404c91b0();
        *param_2 = *puVar5;
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack712);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405ab190(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
    undefined8 *puVar1;
    undefined4 **ppuVar2;
    undefined4 *puVar3;
    undefined auStack712 [32];
    undefined8 local_2a8;
    undefined4 local_2a0;
    undefined4 local_298;
    int local_290;
    undefined4 local_288;
    undefined4 local_280;
    undefined4 **local_278;
    undefined8 local_270;
    undefined4 local_268;
    undefined4 *local_248;
    undefined *puStack576;
    undefined4 local_238;
    undefined4 uStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined4 local_1f8;
    undefined4 uStack500;
    undefined4 uStack496;
    undefined4 uStack492;
    undefined4 local_1e8;
    undefined4 uStack484;
    undefined4 uStack480;
    undefined4 uStack476;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined local_1c8 [64];
    undefined local_188 [64];
    undefined local_148 [176];
    undefined4 *local_98;
    undefined *local_90;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack712;
    local_290 = FUN_1405b0840(param_1,param_4);
    if ((local_290 == 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
        puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
        local_248 = (undefined4 *)*puVar1;
        puStack576 = (undefined *)puVar1[1];
        local_238 = *(undefined4 *)(puVar1 + 2);
        uStack564 = *(undefined4 *)((longlong)puVar1 + 0x14);
        uStack560 = *(undefined4 *)(puVar1 + 3);
        uStack556 = *(undefined4 *)((longlong)puVar1 + 0x1c);
        local_228 = *(undefined4 *)(puVar1 + 4);
        uStack548 = *(undefined4 *)((longlong)puVar1 + 0x24);
        uStack544 = *(undefined4 *)(puVar1 + 5);
        uStack540 = *(undefined4 *)((longlong)puVar1 + 0x2c);
        ppuVar2 = &local_248;
        local_218 = *(undefined4 *)(puVar1 + 6);
        uStack532 = *(undefined4 *)((longlong)puVar1 + 0x34);
        uStack528 = *(undefined4 *)(puVar1 + 7);
        uStack524 = *(undefined4 *)((longlong)puVar1 + 0x3c);
    }
    else {
        ppuVar2 = (undefined4 **)FUN_1405b0600(param_1,local_1c8);
    }
    local_208 = *(undefined4 *)ppuVar2;
    uStack516 = *(undefined4 *)((longlong)ppuVar2 + 4);
    uStack512 = *(undefined4 *)(ppuVar2 + 1);
    uStack508 = *(undefined4 *)((longlong)ppuVar2 + 0xc);
    local_1f8 = *(undefined4 *)(ppuVar2 + 2);
    uStack500 = *(undefined4 *)((longlong)ppuVar2 + 0x14);
    uStack496 = *(undefined4 *)(ppuVar2 + 3);
    uStack492 = *(undefined4 *)((longlong)ppuVar2 + 0x1c);
    local_1e8 = *(undefined4 *)(ppuVar2 + 4);
    uStack484 = *(undefined4 *)((longlong)ppuVar2 + 0x24);
    uStack480 = *(undefined4 *)(ppuVar2 + 5);
    uStack476 = *(undefined4 *)((longlong)ppuVar2 + 0x2c);
    local_1d8 = *(undefined4 *)(ppuVar2 + 6);
    uStack468 = *(undefined4 *)((longlong)ppuVar2 + 0x34);
    uStack464 = *(undefined4 *)(ppuVar2 + 7);
    uStack460 = *(undefined4 *)((longlong)ppuVar2 + 0x3c);
    local_98 = &local_208;
    FUN_1401afc20(&local_98,local_188);
    puStack576 = local_188;
    local_248 = param_4;
    local_98 = param_4;
    local_90 = puStack576;
    FUN_1401afb10(&local_98,local_1c8);
    FUN_1404bd000(&local_248,local_1c8);
    local_278 = &local_248;
    local_268 = 0;
    local_270 = 0;
    local_280 = 0;
    local_288 = 6;
    local_298 = 0;
    local_2a0 = 0;
    local_2a8 = (undefined *)((ulonglong)local_2a8._4_4_ << 0x20);
    FUN_1404bcb00(local_148,param_1 + 8,0,param_3);
    FUN_140205fa0();
    local_2a8 = local_148;
    puVar3 = (undefined4 *)FUN_1404c91b0();
    *param_2 = *puVar3;
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack712);
    return;
}



void FUN_1405ab340(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
    int iVar1;
    undefined8 *puVar2;
    undefined4 **ppuVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 *puVar6;
    undefined auStack712 [32];
    undefined *local_2a8;
    undefined4 local_2a0;
    undefined4 local_298;
    int local_290;
    undefined4 local_288;
    undefined4 local_280;
    undefined4 **local_278;
    undefined8 local_270;
    undefined4 local_268;
    undefined4 *local_248;
    undefined *puStack576;
    undefined4 local_238;
    undefined4 uStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined4 local_1f8;
    undefined4 uStack500;
    undefined4 uStack496;
    undefined4 uStack492;
    undefined4 local_1e8;
    undefined4 uStack484;
    undefined4 uStack480;
    undefined4 uStack476;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined local_1c8 [64];
    undefined local_188 [64];
    undefined local_148 [176];
    undefined4 *local_98;
    undefined *local_90;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack712;
    iVar1 = FUN_1405b0840(param_1,param_4);
    if ((iVar1 == 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
        puVar2 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
        local_248 = (undefined4 *)*puVar2;
        puStack576 = (undefined *)puVar2[1];
        local_238 = *(undefined4 *)(puVar2 + 2);
        uStack564 = *(undefined4 *)((longlong)puVar2 + 0x14);
        uStack560 = *(undefined4 *)(puVar2 + 3);
        uStack556 = *(undefined4 *)((longlong)puVar2 + 0x1c);
        local_228 = *(undefined4 *)(puVar2 + 4);
        uStack548 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uStack544 = *(undefined4 *)(puVar2 + 5);
        uStack540 = *(undefined4 *)((longlong)puVar2 + 0x2c);
        ppuVar3 = &local_248;
        local_218 = *(undefined4 *)(puVar2 + 6);
        uStack532 = *(undefined4 *)((longlong)puVar2 + 0x34);
        uStack528 = *(undefined4 *)(puVar2 + 7);
        uStack524 = *(undefined4 *)((longlong)puVar2 + 0x3c);
    }
    else {
        ppuVar3 = (undefined4 **)FUN_1405b0600(param_1,local_1c8);
    }
    local_208 = *(undefined4 *)ppuVar3;
    uStack516 = *(undefined4 *)((longlong)ppuVar3 + 4);
    uStack512 = *(undefined4 *)(ppuVar3 + 1);
    uStack508 = *(undefined4 *)((longlong)ppuVar3 + 0xc);
    local_1f8 = *(undefined4 *)(ppuVar3 + 2);
    uStack500 = *(undefined4 *)((longlong)ppuVar3 + 0x14);
    uStack496 = *(undefined4 *)(ppuVar3 + 3);
    uStack492 = *(undefined4 *)((longlong)ppuVar3 + 0x1c);
    local_1e8 = *(undefined4 *)(ppuVar3 + 4);
    uStack484 = *(undefined4 *)((longlong)ppuVar3 + 0x24);
    uStack480 = *(undefined4 *)(ppuVar3 + 5);
    uStack476 = *(undefined4 *)((longlong)ppuVar3 + 0x2c);
    local_1d8 = *(undefined4 *)(ppuVar3 + 6);
    uStack468 = *(undefined4 *)((longlong)ppuVar3 + 0x34);
    uStack464 = *(undefined4 *)(ppuVar3 + 7);
    uStack460 = *(undefined4 *)((longlong)ppuVar3 + 0x3c);
    local_98 = &local_208;
    FUN_1401afc20(&local_98,local_188);
    puStack576 = local_188;
    local_248 = param_4;
    local_98 = param_4;
    local_90 = puStack576;
    FUN_1401afb10(&local_98,local_1c8);
    FUN_1404bd000(&local_248,local_1c8);
    lVar4 = FUN_14077dd00(param_1 + 0x1b8,param_3);
    if ((lVar4 != 0) && (lVar5 = FUN_140203da0(*(undefined4 *)(lVar4 + 8)), lVar5 != 0)) {
        local_268 = *(undefined4 *)(lVar4 + 0xc);
        local_288 = 5;
        if (*(int *)(lVar5 + 8) == 0x36) {
            local_288 = 10;
        }
        local_278 = &local_248;
        local_270 = 0;
        local_280 = 0;
        local_298 = 0;
        local_2a0 = 0;
        local_2a8 = (undefined *)((ulonglong)local_2a8 & 0xffffffff00000000);
        local_290 = iVar1;
        FUN_1404bcb00(local_148,param_1 + 8,param_3,*(undefined4 *)(lVar4 + 8));
        FUN_140205fa0();
        local_2a8 = local_148;
        puVar6 = (undefined4 *)FUN_1404c91b0();
        *param_2 = *puVar6;
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack712);
    return;
}



void FUN_1405ab530(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
    int iVar1;
    undefined8 *puVar2;
    undefined4 **ppuVar3;
    longlong lVar4;
    undefined4 *puVar5;
    undefined auStack712 [32];
    undefined *local_2a8;
    undefined4 local_2a0;
    undefined4 local_298;
    int local_290;
    undefined4 local_288;
    undefined4 local_280;
    undefined4 **local_278;
    undefined8 local_270;
    undefined4 local_268;
    undefined4 *local_248;
    undefined *puStack576;
    undefined4 local_238;
    undefined4 uStack564;
    undefined4 uStack560;
    undefined4 uStack556;
    undefined4 local_228;
    undefined4 uStack548;
    undefined4 uStack544;
    undefined4 uStack540;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined4 local_1f8;
    undefined4 uStack500;
    undefined4 uStack496;
    undefined4 uStack492;
    undefined4 local_1e8;
    undefined4 uStack484;
    undefined4 uStack480;
    undefined4 uStack476;
    undefined4 local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined local_1c8 [64];
    undefined local_188 [64];
    undefined local_148 [176];
    undefined4 *local_98;
    undefined *local_90;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack712;
    iVar1 = FUN_1405b0840(param_1,param_4);
    if ((iVar1 == 0) && (*(longlong **)(param_1 + 0x118) != (longlong *)0x0)) {
        puVar2 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
        local_248 = (undefined4 *)*puVar2;
        puStack576 = (undefined *)puVar2[1];
        local_238 = *(undefined4 *)(puVar2 + 2);
        uStack564 = *(undefined4 *)((longlong)puVar2 + 0x14);
        uStack560 = *(undefined4 *)(puVar2 + 3);
        uStack556 = *(undefined4 *)((longlong)puVar2 + 0x1c);
        local_228 = *(undefined4 *)(puVar2 + 4);
        uStack548 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uStack544 = *(undefined4 *)(puVar2 + 5);
        uStack540 = *(undefined4 *)((longlong)puVar2 + 0x2c);
        ppuVar3 = &local_248;
        local_218 = *(undefined4 *)(puVar2 + 6);
        uStack532 = *(undefined4 *)((longlong)puVar2 + 0x34);
        uStack528 = *(undefined4 *)(puVar2 + 7);
        uStack524 = *(undefined4 *)((longlong)puVar2 + 0x3c);
    }
    else {
        ppuVar3 = (undefined4 **)FUN_1405b0600(param_1,local_1c8);
    }
    local_208 = *(undefined4 *)ppuVar3;
    uStack516 = *(undefined4 *)((longlong)ppuVar3 + 4);
    uStack512 = *(undefined4 *)(ppuVar3 + 1);
    uStack508 = *(undefined4 *)((longlong)ppuVar3 + 0xc);
    local_1f8 = *(undefined4 *)(ppuVar3 + 2);
    uStack500 = *(undefined4 *)((longlong)ppuVar3 + 0x14);
    uStack496 = *(undefined4 *)(ppuVar3 + 3);
    uStack492 = *(undefined4 *)((longlong)ppuVar3 + 0x1c);
    local_1e8 = *(undefined4 *)(ppuVar3 + 4);
    uStack484 = *(undefined4 *)((longlong)ppuVar3 + 0x24);
    uStack480 = *(undefined4 *)(ppuVar3 + 5);
    uStack476 = *(undefined4 *)((longlong)ppuVar3 + 0x2c);
    local_1d8 = *(undefined4 *)(ppuVar3 + 6);
    uStack468 = *(undefined4 *)((longlong)ppuVar3 + 0x34);
    uStack464 = *(undefined4 *)(ppuVar3 + 7);
    uStack460 = *(undefined4 *)((longlong)ppuVar3 + 0x3c);
    local_98 = &local_208;
    FUN_1401afc20(&local_98,local_188);
    puStack576 = local_188;
    local_248 = param_4;
    local_98 = param_4;
    local_90 = puStack576;
    FUN_1401afb10(&local_98,local_1c8);
    FUN_1404bd000(&local_248,local_1c8);
    lVar4 = FUN_14077dd00(param_1 + 0x1b8,param_3);
    if (lVar4 != 0) {
        local_268 = *(undefined4 *)(lVar4 + 0xc);
        local_270 = 0;
        local_278 = &local_248;
        local_280 = 0;
        local_288 = 6;
        local_298 = 0;
        local_2a0 = 0;
        local_2a8 = (undefined *)((ulonglong)local_2a8 & 0xffffffff00000000);
        local_290 = iVar1;
        FUN_1404bcb00(local_148,param_1 + 8,param_3,*(undefined4 *)(lVar4 + 8));
        FUN_140205fa0();
        local_2a8 = local_148;
        puVar5 = (undefined4 *)FUN_1404c91b0();
        *param_2 = *puVar5;
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack712);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405ab700(undefined8 param_1,undefined4 *param_2)

{
    longlong *plVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined local_b8 [16];
    float local_a8;
    float local_a4;
    uint local_a0;
    undefined4 local_9c;
    float local_98;
    float local_94;
    float local_90;
    undefined4 local_8c;
    float local_88;
    float local_84;
    float local_80;
    undefined4 local_7c;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;

    plVar1 = *(longlong **)(DAT_140c659f8 + 200);
    if (plVar1 != (longlong *)0x0) {
        uVar7 = *param_2;
        uVar8 = param_2[1];
        uVar9 = param_2[2];
        fVar2 = (float)FUN_1408fe3d0(uVar7);
        fVar3 = (float)FUN_1408fc950(uVar7);
        fVar4 = (float)FUN_1408fe3d0(uVar8);
        local_80 = (float)FUN_1408fc950(uVar8);
        fVar5 = (float)FUN_1408fe3d0(uVar9);
        fVar6 = (float)FUN_1408fc950(uVar9);
        local_9c = 0;
        local_a4 = fVar5 * local_80;
        local_8c = 0;
        local_7c = 0;
        local_a8 = fVar6 * local_80;
        local_a0 = (uint)fVar4 ^ 0x80000000;
        local_98 = fVar6 * fVar4 * fVar2 - fVar5 * fVar3;
        local_94 = fVar5 * fVar4 * fVar2 + fVar6 * fVar3;
        local_90 = local_80 * fVar2;
        local_88 = fVar5 * fVar2 + fVar6 * fVar4 * fVar3;
        local_78 = _DAT_140c78440;
        uStack116 = uRam0000000140c78444;
        uStack112 = uRam0000000140c78448;
        uStack108 = uRam0000000140c7844c;
        local_84 = fVar5 * fVar4 * fVar3 - fVar6 * fVar2;
        local_80 = local_80 * fVar3;
        FUN_1401b1d60(local_b8,&local_a8);
        (**(code **)(*plVar1 + 0x18))(plVar1,local_b8);
    }
    return;
}



void FUN_1405ab8c0(longlong param_1,longlong param_2,undefined4 param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    int iVar4;
    longlong lVar5;
    ulonglong *puVar6;
    ulonglong *puVar7;
    ulonglong uVar8;
    undefined8 *local_res10;
    undefined local_f8 [16];
    undefined4 local_e8;
    undefined4 local_e4;
    undefined4 local_e0;
    undefined4 local_dc;
    undefined local_d8 [176];

    if (param_2 == 0) {
        return;
    }
    local_f8 = *(undefined (*) [16])(param_2 + 0x3c);
    local_e8 = *(undefined4 *)(param_2 + 0x30);
    local_e4 = *(undefined4 *)(param_2 + 0x34);
    local_dc = *(undefined4 *)(param_2 + 0x2c);
    local_e0 = 0;
    FUN_1404c9e20(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined8 *)(param_2 + 0x10));
    FUN_1404bcb00(local_d8,param_1 + 8,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x4c)
            ,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),
                  *(undefined4 *)(param_2 + 0x24),*(undefined4 *)(param_2 + 0x28),param_3,
                  *(undefined4 *)(param_2 + 0x50),local_f8,*(undefined8 *)(param_2 + 0x58),
                  *(undefined4 *)(param_2 + 0x60));
    puVar7 = (ulonglong *)0x0;
    FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    iVar4 = FUN_1404c8e20();
    if (iVar4 == 0) {
        return;
    }
    lVar5 = FUN_140203da0(*(undefined4 *)(param_2 + 0x4c));
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x20) != 0)) {
        plVar1 = (longlong *)(param_1 + 0x170);
        iVar4 = FUN_1402dd480(plVar1,param_2 + 0x10,&local_res10);
        if (iVar4 == 0) {
            local_res10 = (undefined8 *)FUN_14018b280(0x18,0);
            *local_res10 = *(undefined8 *)(param_2 + 0x10);
            *(undefined4 *)((longlong)local_res10 + 0xc) = 1;
            puVar2 = *(undefined8 **)(param_1 + 0x1a8);
            if (puVar2 == *(undefined8 **)(param_1 + 0x1b0)) {
                FUN_14010a1c0(param_1 + 0x198,puVar2,&local_res10);
            }
            else {
                if (puVar2 != (undefined8 *)0x0) {
                    *puVar2 = local_res10;
                }
                *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + 8;
            }
            puVar2 = local_res10;
            if (*plVar1 == *(longlong *)(param_1 + 0x178)) {
                FUN_1400290d0(plVar1);
            }
            local_res10 = (undefined8 *)(**(code **)(param_1 + 0x188))(param_2 + 0x10);
            lVar5 = *(longlong *)(param_1 + 0x180);
            uVar8 = (ulonglong)local_res10 % *(ulonglong *)(param_1 + 0x178);
            puVar6 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar6 != (ulonglong *)0x0) {
                uVar3 = *(ulonglong *)(lVar5 + uVar8 * 8);
                *puVar6 = (ulonglong)local_res10;
                puVar6[1] = uVar3;
                puVar6[2] = *(ulonglong *)(param_2 + 0x10);
                puVar6[3] = (ulonglong)puVar2;
                puVar7 = puVar6;
            }
            *(ulonglong **)(lVar5 + uVar8 * 8) = puVar7;
            *plVar1 = *plVar1 + 1;
            if (*(int *)(param_2 + 0x50) == 0) goto LAB_1405abb69;
            *(uint *)(puVar2 + 2) = (uint)(*DAT_140c659f0 == 0);
        }
        else {
            *(undefined4 *)((longlong)local_res10 + 0xc) = 0;
            if ((*(int *)(local_res10 + 2) != 0) || (*(int *)(param_2 + 0x50) == 0)) goto LAB_1405abb69;
            *(uint *)(local_res10 + 2) = (uint)(*DAT_140c659f0 == 0);
        }
        FUN_1405ae900(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x50));
    }
    LAB_1405abb69:
    lVar5 = FUN_1405b1510(&DAT_140c7dfb0);
    if (param_1 == lVar5) {
        FUN_14077dc00(param_1 + 0x1b8,*(undefined8 *)(param_2 + 0x10));
        lVar5 = FUN_1404c9e20();
        if (lVar5 != 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingMyResidenceDecorChanged",
                          &DAT_1409ebf4c,*(undefined4 *)(lVar5 + 0x1f0));
        }
    }
    return;
}



void FUN_1405abbf0(longlong param_1,longlong param_2,int param_3)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong **pplVar4;
    undefined4 local_res10;
    undefined local_res20 [8];
    undefined local_138 [32];
    undefined local_118 [64];
    undefined local_d8 [176];

    if ((param_2 != 0) && (2 < param_3 - 1U)) {
        lVar2 = FUN_1404c9e20(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined8 *)(param_2 + 0x10));
        if (lVar2 == 0) {
            local_res10 = 0;
        }
        else {
            local_res10 = *(undefined4 *)(lVar2 + 0x1f0);
        }
        FUN_14077dc00(param_1 + 0x1b8,*(undefined8 *)(param_2 + 0x10));
        uVar3 = FUN_1404bd000(local_138,local_118);
        FUN_1404bcb00(local_d8,param_1 + 8,*(undefined8 *)(param_2 + 0x10),
                      *(undefined4 *)(param_2 + 0x4c),*(undefined4 *)(param_2 + 0x1c),
                      *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                      *(undefined4 *)(param_2 + 0x28),param_3,0,uVar3,0,0);
        FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
        iVar1 = FUN_1404c90c0();
        if ((iVar1 != 0) &&
            (iVar1 = FUN_1402dd480(param_1 + 0x170,param_2 + 0x10,local_res20), iVar1 != 0)) {
            FUN_1405aeb20(param_1,*(undefined8 *)(param_2 + 0x10));
            FUN_1400b6120(param_1 + 0x170,param_2 + 0x10);
            pplVar4 = *(longlong ***)(param_1 + 0x1a0);
            if (pplVar4 != *(longlong ***)(param_1 + 0x1a8)) {
                do {
                    if (**pplVar4 == *(longlong *)(param_2 + 0x10)) {
                        FUN_14018b900(*pplVar4,0);
                        FUN_1405b1c30(param_1 + 0x198,pplVar4);
                        break;
                    }
                    pplVar4 = pplVar4 + 1;
                } while (pplVar4 != *(longlong ***)(param_1 + 0x1a8));
            }
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingMyResidenceDecorChanged",
                      &DAT_1409ebf4c,local_res10);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405abdc0(longlong param_1,longlong param_2)

{
    longlong **pplVar1;
    undefined4 uVar2;
    ulonglong *puVar3;
    int iVar4;
    ulonglong uVar5;
    longlong **pplVar6;

    if (param_2 == 0) {
        return;
    }
    FUN_1404c9e20(param_1,*(undefined4 *)(param_1 + 0xbc),*(undefined8 *)(param_2 + 0x10));
    uVar5 = (**(code **)(param_1 + 0x188))(param_2 + 0x10);
    for (puVar3 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x180) + (uVar5 % *(ulonglong *)(param_1 + 0x178)) * 8);
         puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[1]) {
        if ((uVar5 == *puVar3) &&
            (iVar4 = (**(code **)(param_1 + 400))(param_2 + 0x10,puVar3 + 2), iVar4 != 0)) {
            if (puVar3 != (ulonglong *)&DAT_ffffffffffffffe8) {
                FUN_1400b6120(param_1 + 0x170,param_2 + 0x10);
                pplVar6 = *(longlong ***)(param_1 + 0x1a0);
                if (pplVar6 != *(longlong ***)(param_1 + 0x1a8)) {
                    goto LAB_1405abe72;
                }
            }
            break;
        }
    }
    goto LAB_1405abeb6;
    while (pplVar6 = pplVar6 + 1, pplVar6 != *(longlong ***)(param_1 + 0x1a8)) {
        LAB_1405abe72:
        if (**pplVar6 == *(longlong *)(param_2 + 0x10)) {
            FUN_14018b900(*pplVar6,0);
            pplVar1 = pplVar6 + 1;
            if (pplVar1 != *(longlong ***)(param_1 + 0x1a8)) {
                FUN_1407db590(pplVar6,pplVar1,
                              (longlong)*(longlong ***)(param_1 + 0x1a8) - (longlong)pplVar1 &
                              0xfffffffffffffff8);
            }
            *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + -8;
            break;
        }
    }
    LAB_1405abeb6:
    uVar2 = *(undefined4 *)(param_1 + 0xb8);
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c65340 == 0) && (iVar4 = FUN_140205d40(), -1 < iVar4)) {
            (**(code **)(*DAT_140c63c30 + 0x18))(DAT_140c63c30,uVar2);
        }
    }
    else {
        (*DAT_140c63840)(&PTR_u_HousingPlotInfo_140a6a8d8,uVar2,DAT_140c63858);
    }
    FUN_1404c9e20();
    FUN_1404c9c70();
    FUN_14077db00(param_1 + 0x1b8,*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x4c),
                  *(undefined4 *)(param_2 + 0x60));
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingMyResidenceDecorChanged",
                  &DAT_1409ebf4c,0);
    return;
}



void FUN_1405abf80(longlong param_1)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    uint uVar5;
    int *piVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined local_b8 [176];
    ulonglong uVar4;

    uVar7 = 0;
    lVar3 = FUN_140205fa0();
    uVar8 = uVar7;
    if (lVar3 != 0) {
        uVar8 = (ulonglong)*(uint *)(lVar3 + 4);
    }
    iVar1 = *(int *)(param_1 + 0x58);
    if ((iVar1 != 0) && (lVar3 = FUN_140207d60(), lVar3 != 0)) {
        uVar5 = 0;
        if ((*(uint *)(lVar3 + 0x18) & 0x340) != 0) {
            uVar5 = *(uint *)(lVar3 + 0x18);
        }
        FUN_1404bcb00(local_b8,param_1 + 8,0,iVar1,0,uVar5,0,0,4,0,0,0,0);
        FUN_1404c8e20();
    }
    iVar1 = *(int *)(param_1 + 0x5c);
    uVar5 = 0;
    if ((iVar1 != 0) && (lVar3 = FUN_140207d60(), lVar3 != 0)) {
        uVar2 = uVar5;
        if ((*(uint *)(lVar3 + 0x18) & 0x340) != 0) {
            uVar2 = *(uint *)(lVar3 + 0x18);
        }
        FUN_1404bcb00(local_b8,param_1 + 8,0,iVar1,0,uVar2,0,0,4,0,0,0,0);
        FUN_1404c8e20();
    }
    iVar1 = *(int *)(param_1 + 0x60);
    if ((iVar1 != 0) && (lVar3 = FUN_140207d60(), lVar3 != 0)) {
        uVar2 = uVar5;
        if ((*(uint *)(lVar3 + 0x18) & 0x340) != 0) {
            uVar2 = *(uint *)(lVar3 + 0x18);
        }
        FUN_1404bcb00(local_b8,param_1 + 8,0,iVar1,0,uVar2,0,0,4,0,0,0,0);
        FUN_1404c8e20();
    }
    lVar3 = *(longlong *)(param_1 + 0xe8);
    if ((lVar3 != 0) && (*(uint *)(param_1 + 0x110) != 0)) {
        piVar6 = (int *)(lVar3 + 4);
        uVar4 = uVar7;
        do {
            if (*piVar6 == (int)uVar8) {
                uVar7 = uVar4 * 0xc0 + lVar3;
                break;
            }
            uVar2 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar2;
            piVar6 = piVar6 + 0x30;
        } while (uVar2 < *(uint *)(param_1 + 0x110));
    }
    iVar1 = *(int *)(param_1 + 0x50);
    if (((((iVar1 == 0) && (*(int *)(param_1 + 0x4c) == 0)) && (*(int *)(param_1 + 0x48) == 0)) &&
         (*(int *)(param_1 + 0x54) == 0)) || ((uVar7 != 0 && (*(int *)(uVar7 + 0xb8) - 2U < 2)))) {
        FUN_1405a9980();
    }
    else {
        if (iVar1 != 0) {
            FUN_1404bcb00(local_b8,param_1 + 8,0,iVar1,0,0,0,0,1,0,0,0,0);
            FUN_1404c8e20();
        }
        if (*(int *)(param_1 + 0x4c) != 0) {
            FUN_1404bcb00(local_b8,param_1 + 8,0,*(int *)(param_1 + 0x4c),0,0,0,0,2,0,0,0,0);
            FUN_1404c8e20();
        }
        iVar1 = *(int *)(param_1 + 0x48);
        if ((iVar1 != 0) && (lVar3 = FUN_140207d60(), lVar3 != 0)) {
            if ((*(uint *)(lVar3 + 0x18) & 0x340) != 0) {
                uVar5 = *(uint *)(lVar3 + 0x18);
            }
            FUN_1404bcb00(local_b8,param_1 + 8,0,iVar1,0,uVar5,0,0,4,0,0,0,0);
            FUN_1404c8e20();
        }
        if (*(int *)(param_1 + 0x54) != 0) {
            FUN_1404bcb00(local_b8,param_1 + 8,0,*(int *)(param_1 + 0x54),0,0,0,0,3,0,0,0,0);
            FUN_1404c8e20();
        }
    }
    return;
}



void FUN_1405ac330(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    uVar3 = 0;
    uVar2 = 0;
    lVar1 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    if (lVar1 != 0) {
        uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    FUN_1405ac4d0(param_1,1,uVar2);
    uVar2 = 0;
    lVar1 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    if (lVar1 != 0) {
        uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    FUN_1405ac4d0(param_1,2,uVar2);
    uVar2 = 0;
    lVar1 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    if (lVar1 != 0) {
        uVar2 = *(undefined4 *)(lVar1 + 4);
    }
    FUN_1405ac4d0(param_1,4,uVar2);
    lVar1 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    if (lVar1 != 0) {
        uVar3 = *(undefined4 *)(lVar1 + 4);
    }
    FUN_1405ac4d0(param_1,3,uVar3);
    return;
}



void FUN_1405ac3f0(longlong param_1,int param_2,undefined8 param_3,int param_4)

{
    longlong lVar1;
    uint uVar2;
    undefined local_c8 [176];

    if (param_4 != 0) {
        uVar2 = 0;
        if (param_2 == 4) {
            lVar1 = FUN_140207d60(param_4);
            if (lVar1 == 0) {
                return;
            }
            uVar2 = 0;
            if ((*(uint *)(lVar1 + 0x18) & 0x340) != 0) {
                uVar2 = *(uint *)(lVar1 + 0x18);
            }
        }
        FUN_1404bcb00(local_c8,param_1 + 8,0,param_4,0,uVar2,0,0,param_2,0,0,0,0);
        FUN_1404c8e20();
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1405ac4d0(longlong param_1,undefined4 param_2)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong *puVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    undefined4 local_res8 [2];
    undefined local_58 [8];
    longlong *local_50;
    longlong *local_48;
    undefined8 local_40;

    plVar11 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_res8[0] = 0;
    lVar6 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    lVar4 = DAT_140c659f8;
    if (lVar6 != 0) {
        local_res8[0] = *(undefined4 *)(lVar6 + 4);
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar7 = (**(code **)(DAT_140c659f8 + 0x38))(local_res8);
    uVar8 = uVar7 / *(ulonglong *)(lVar4 + 0x28);
    for (puVar3 = *(ulonglong **)
            (*(longlong *)(lVar4 + 0x30) + (uVar7 % *(ulonglong *)(lVar4 + 0x28)) * 8);
         plVar12 = plVar11, plVar10 = (longlong *)0x0, puVar3 != (ulonglong *)0x0;
         puVar3 = (ulonglong *)puVar3[1]) {
        if ((uVar7 == *puVar3) &&
            (uVar8 = (**(code **)(lVar4 + 0x40))(local_res8,puVar3 + 2), (int)uVar8 != 0)) {
            plVar10 = (longlong *)0x0;
            if ((puVar3 + 3 != (ulonglong *)0x0) &&
                (uVar7 = puVar3[3], plVar11 = (longlong *)0x0, plVar12 = (longlong *)0x0,
                        *(int *)(uVar7 + 0x14) == iVar5)) {
                uVar8 = FUN_1404c7cf0(uVar7,local_58,param_2);
                plVar11 = local_50;
                plVar12 = local_50;
                plVar10 = local_48;
            }
            break;
        }
    }
    do {
        if (plVar11 == plVar10) {
            if (plVar12 != (longlong *)0x0) {
                uVar8 = FUN_14018b900(plVar12,0);
            }
            return uVar8;
        }
        lVar4 = *plVar11;
        uVar1 = *(undefined4 *)(lVar4 + 0x6c);
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a64 == 0) && (iVar5 = FUN_140207b00(), -1 < iVar5)) {
                lVar6 = (**(code **)(*DAT_140c63e68 + 0x18))(DAT_140c63e68,uVar1);
                goto LAB_1405ac5ff;
            }
            LAB_1405ac679:
            uVar8 = FUN_1404c9c70();
        }
        else {
            lVar6 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,uVar1,DAT_140c63858);
            LAB_1405ac5ff:
            if (lVar6 == 0) goto LAB_1405ac679;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c63a64 != 0) || (iVar5 = FUN_140207b00(), iVar5 < 0)) goto LAB_1405ac679;
                lVar9 = (**(code **)(*DAT_140c63e68 + 0x18))();
            }
            else {
                lVar9 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,*(undefined4 *)(lVar4 + 0x6c)
                        ,DAT_140c63858);
            }
            if ((lVar9 == 0) ||
                (((uVar2 = *(uint *)(lVar9 + 0x18), (uVar2 & 0x340) != 0 &&
                                                    (uVar2 != *(uint *)(lVar4 + 0x74))) || ((uVar2 & 0x342) == 0)))) goto LAB_1405ac679;
            uVar2 = *(uint *)(lVar6 + 0x18);
            uVar8 = (ulonglong)uVar2;
            if ((((uVar2 & 0x40) == 0) && ((uVar2 >> 9 & 1) == 0)) && ((uVar2 >> 8 & 1) == 0))
                goto LAB_1405ac679;
        }
        plVar11 = plVar11 + 1;
    } while( true );
}



longlong FUN_1405ac6c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    ulonglong *puVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined4 uVar7;
    undefined4 local_res10 [2];
    undefined local_c8 [48];
    int local_98;

    uVar7 = 0;
    local_res10[0] = param_2;
    FUN_1404bcb00(local_c8,param_1 + 8,0,0,0,param_4,param_3,0,4,0,0,0,0);
    lVar4 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    lVar6 = DAT_140c659f8;
    if (lVar4 != 0) {
        uVar7 = *(undefined4 *)(lVar4 + 4);
    }
    iVar1 = *(int *)(param_1 + 0xbc);
    local_res10[0] = uVar7;
    uVar5 = (**(code **)(DAT_140c659f8 + 0x38))(local_res10);
    puVar2 = *(ulonglong **)(*(longlong *)(lVar6 + 0x30) + (uVar5 % *(ulonglong *)(lVar6 + 0x28)) * 8)
            ;
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar5 == *puVar2) &&
            (iVar3 = (**(code **)(lVar6 + 0x40))(local_res10,puVar2 + 2), iVar3 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    uVar5 = puVar2[3];
    if (*(int *)(uVar5 + 0x14) != iVar1) {
        return 0;
    }
    lVar6 = FUN_1404c7ac0(uVar5,local_c8);
    if (lVar6 == 0) {
        return 0;
    }
    if (*(int *)(lVar6 + 0x80) != local_98) {
        return 0;
    }
    return lVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405ac7e0(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong *puVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    undefined4 local_res8 [2];
    undefined local_38 [8];
    longlong *local_30;
    longlong *local_28;
    undefined8 local_20;

    plVar11 = (longlong *)0x0;
    local_res8[0] = 0;
    local_28 = (longlong *)0x0;
    local_30 = (longlong *)0x0;
    local_20 = 0;
    lVar6 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    lVar9 = DAT_140c659f8;
    if (lVar6 != 0) {
        local_res8[0] = *(undefined4 *)(lVar6 + 4);
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar7 = (**(code **)(DAT_140c659f8 + 0x38))(local_res8);
    for (puVar3 = *(ulonglong **)
            (*(longlong *)(lVar9 + 0x30) + (uVar7 % *(ulonglong *)(lVar9 + 0x28)) * 8);
         plVar12 = plVar11, plVar10 = (longlong *)0x0, puVar3 != (ulonglong *)0x0;
         puVar3 = (ulonglong *)puVar3[1]) {
        if ((uVar7 == *puVar3) &&
            (iVar4 = (**(code **)(lVar9 + 0x40))(local_res8,puVar3 + 2), iVar4 != 0)) {
            if ((puVar3 + 3 != (ulonglong *)0x0) &&
                (uVar7 = puVar3[3], plVar11 = (longlong *)0x0, plVar12 = (longlong *)0x0,
                 plVar10 = (longlong *)0x0, *(int *)(uVar7 + 0x14) == iVar5)) {
                FUN_1404c7cf0(uVar7,local_38,4);
                plVar11 = local_30;
                plVar12 = local_30;
                plVar10 = local_28;
            }
            break;
        }
    }
    do {
        if (plVar11 == plVar10) {
            LAB_1405ac979:
            lVar9 = 0;
            LAB_1405ac97b:
            if (plVar12 != (longlong *)0x0) {
                FUN_14018b900(plVar12,0);
            }
            return lVar9;
        }
        lVar9 = *plVar11;
        uVar1 = *(undefined4 *)(lVar9 + 0x6c);
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a64 != 0) || (iVar5 = FUN_140207b00(), iVar5 < 0)) goto LAB_1405ac979;
            lVar6 = (**(code **)(*DAT_140c63e68 + 0x18))(DAT_140c63e68,uVar1);
        }
        else {
            lVar6 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,uVar1,DAT_140c63858);
        }
        if (lVar6 == 0) goto LAB_1405ac979;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a64 == 0) && (iVar5 = FUN_140207b00(), -1 < iVar5)) {
                lVar8 = (**(code **)(*DAT_140c63e68 + 0x18))();
                goto LAB_1405ac944;
            }
        }
        else {
            lVar8 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,*(undefined4 *)(lVar9 + 0x6c),
                                     DAT_140c63858);
            LAB_1405ac944:
            if (((lVar8 != 0) &&
                 (((uVar2 = *(uint *)(lVar8 + 0x18), (uVar2 & 0x340) == 0 ||
                                                     (uVar2 == *(uint *)(lVar9 + 0x74))) && ((uVar2 & 0x342) != 0)))) &&
                ((*(byte *)(lVar6 + 0x18) & 0x40) == 0)) goto LAB_1405ac97b;
        }
        plVar11 = plVar11 + 1;
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405ac9b0(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong *puVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    undefined4 local_res8 [2];
    undefined local_38 [8];
    longlong *local_30;
    longlong *local_28;
    undefined8 local_20;

    plVar11 = (longlong *)0x0;
    local_res8[0] = 0;
    local_28 = (longlong *)0x0;
    local_30 = (longlong *)0x0;
    local_20 = 0;
    lVar6 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    lVar9 = DAT_140c659f8;
    if (lVar6 != 0) {
        local_res8[0] = *(undefined4 *)(lVar6 + 4);
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar7 = (**(code **)(DAT_140c659f8 + 0x38))(local_res8);
    for (puVar3 = *(ulonglong **)
            (*(longlong *)(lVar9 + 0x30) + (uVar7 % *(ulonglong *)(lVar9 + 0x28)) * 8);
         plVar12 = plVar11, plVar10 = (longlong *)0x0, puVar3 != (ulonglong *)0x0;
         puVar3 = (ulonglong *)puVar3[1]) {
        if ((uVar7 == *puVar3) &&
            (iVar4 = (**(code **)(lVar9 + 0x40))(local_res8,puVar3 + 2), iVar4 != 0)) {
            if ((puVar3 + 3 != (ulonglong *)0x0) &&
                (uVar7 = puVar3[3], plVar11 = (longlong *)0x0, plVar12 = (longlong *)0x0,
                 plVar10 = (longlong *)0x0, *(int *)(uVar7 + 0x14) == iVar5)) {
                FUN_1404c7cf0(uVar7,local_38,4);
                plVar11 = local_30;
                plVar12 = local_30;
                plVar10 = local_28;
            }
            break;
        }
    }
    do {
        if (plVar11 == plVar10) {
            LAB_1405acb49:
            lVar9 = 0;
            LAB_1405acb4b:
            if (plVar12 != (longlong *)0x0) {
                FUN_14018b900(plVar12,0);
            }
            return lVar9;
        }
        lVar9 = *plVar11;
        uVar1 = *(undefined4 *)(lVar9 + 0x6c);
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a64 != 0) || (iVar5 = FUN_140207b00(), iVar5 < 0)) goto LAB_1405acb49;
            lVar6 = (**(code **)(*DAT_140c63e68 + 0x18))(DAT_140c63e68,uVar1);
        }
        else {
            lVar6 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,uVar1,DAT_140c63858);
        }
        if (lVar6 == 0) goto LAB_1405acb49;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a64 == 0) && (iVar5 = FUN_140207b00(), -1 < iVar5)) {
                lVar8 = (**(code **)(*DAT_140c63e68 + 0x18))();
                goto LAB_1405acb14;
            }
        }
        else {
            lVar8 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,*(undefined4 *)(lVar9 + 0x6c),
                                     DAT_140c63858);
            LAB_1405acb14:
            if (((lVar8 != 0) &&
                 (((uVar2 = *(uint *)(lVar8 + 0x18), (uVar2 & 0x340) == 0 ||
                                                     (uVar2 == *(uint *)(lVar9 + 0x74))) && ((uVar2 & 0x342) != 0)))) &&
                ((*(byte *)(lVar6 + 0x18) & 0x40) != 0)) goto LAB_1405acb4b;
        }
        plVar11 = plVar11 + 1;
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405acb80(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong *puVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    undefined4 local_res8 [2];
    undefined local_38 [8];
    longlong *local_30;
    longlong *local_28;
    undefined8 local_20;

    plVar11 = (longlong *)0x0;
    local_res8[0] = 0;
    local_28 = (longlong *)0x0;
    local_30 = (longlong *)0x0;
    local_20 = 0;
    lVar6 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    lVar9 = DAT_140c659f8;
    if (lVar6 != 0) {
        local_res8[0] = *(undefined4 *)(lVar6 + 4);
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar7 = (**(code **)(DAT_140c659f8 + 0x38))(local_res8);
    for (puVar3 = *(ulonglong **)
            (*(longlong *)(lVar9 + 0x30) + (uVar7 % *(ulonglong *)(lVar9 + 0x28)) * 8);
         plVar12 = plVar11, plVar10 = (longlong *)0x0, puVar3 != (ulonglong *)0x0;
         puVar3 = (ulonglong *)puVar3[1]) {
        if ((uVar7 == *puVar3) &&
            (iVar4 = (**(code **)(lVar9 + 0x40))(local_res8,puVar3 + 2), iVar4 != 0)) {
            if ((puVar3 + 3 != (ulonglong *)0x0) &&
                (uVar7 = puVar3[3], plVar11 = (longlong *)0x0, plVar12 = (longlong *)0x0,
                 plVar10 = (longlong *)0x0, *(int *)(uVar7 + 0x14) == iVar5)) {
                FUN_1404c7cf0(uVar7,local_38,4);
                plVar11 = local_30;
                plVar12 = local_30;
                plVar10 = local_28;
            }
            break;
        }
    }
    do {
        if (plVar11 == plVar10) {
            LAB_1405acd1c:
            lVar9 = 0;
            LAB_1405acd1e:
            if (plVar12 != (longlong *)0x0) {
                FUN_14018b900(plVar12,0);
            }
            return lVar9;
        }
        lVar9 = *plVar11;
        uVar1 = *(undefined4 *)(lVar9 + 0x6c);
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a64 != 0) || (iVar5 = FUN_140207b00(), iVar5 < 0)) goto LAB_1405acd1c;
            lVar6 = (**(code **)(*DAT_140c63e68 + 0x18))(DAT_140c63e68,uVar1);
        }
        else {
            lVar6 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,uVar1,DAT_140c63858);
        }
        if (lVar6 == 0) goto LAB_1405acd1c;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a64 == 0) && (iVar5 = FUN_140207b00(), -1 < iVar5)) {
                lVar8 = (**(code **)(*DAT_140c63e68 + 0x18))();
                goto LAB_1405acce4;
            }
        }
        else {
            lVar8 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,*(undefined4 *)(lVar9 + 0x6c),
                                     DAT_140c63858);
            LAB_1405acce4:
            if (((lVar8 != 0) &&
                 (((uVar2 = *(uint *)(lVar8 + 0x18), (uVar2 & 0x340) == 0 ||
                                                     (uVar2 == *(uint *)(lVar9 + 0x74))) && ((uVar2 & 0x342) != 0)))) &&
                ((*(uint *)(lVar6 + 0x18) & 0x100) != 0)) goto LAB_1405acd1e;
        }
        plVar11 = plVar11 + 1;
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405acd50(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    ulonglong *puVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    undefined4 local_res8 [2];
    undefined local_38 [8];
    longlong *local_30;
    longlong *local_28;
    undefined8 local_20;

    plVar11 = (longlong *)0x0;
    local_res8[0] = 0;
    local_28 = (longlong *)0x0;
    local_30 = (longlong *)0x0;
    local_20 = 0;
    lVar6 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    lVar9 = DAT_140c659f8;
    if (lVar6 != 0) {
        local_res8[0] = *(undefined4 *)(lVar6 + 4);
    }
    iVar5 = *(int *)(param_1 + 0xbc);
    uVar7 = (**(code **)(DAT_140c659f8 + 0x38))(local_res8);
    for (puVar3 = *(ulonglong **)
            (*(longlong *)(lVar9 + 0x30) + (uVar7 % *(ulonglong *)(lVar9 + 0x28)) * 8);
         plVar12 = plVar11, plVar10 = (longlong *)0x0, puVar3 != (ulonglong *)0x0;
         puVar3 = (ulonglong *)puVar3[1]) {
        if ((uVar7 == *puVar3) &&
            (iVar4 = (**(code **)(lVar9 + 0x40))(local_res8,puVar3 + 2), iVar4 != 0)) {
            if ((puVar3 + 3 != (ulonglong *)0x0) &&
                (uVar7 = puVar3[3], plVar11 = (longlong *)0x0, plVar12 = (longlong *)0x0,
                 plVar10 = (longlong *)0x0, *(int *)(uVar7 + 0x14) == iVar5)) {
                FUN_1404c7cf0(uVar7,local_38,4);
                plVar11 = local_30;
                plVar12 = local_30;
                plVar10 = local_28;
            }
            break;
        }
    }
    do {
        if (plVar11 == plVar10) {
            LAB_1405aceec:
            lVar9 = 0;
            LAB_1405aceee:
            if (plVar12 != (longlong *)0x0) {
                FUN_14018b900(plVar12,0);
            }
            return lVar9;
        }
        lVar9 = *plVar11;
        uVar1 = *(undefined4 *)(lVar9 + 0x6c);
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a64 != 0) || (iVar5 = FUN_140207b00(), iVar5 < 0)) goto LAB_1405aceec;
            lVar6 = (**(code **)(*DAT_140c63e68 + 0x18))(DAT_140c63e68,uVar1);
        }
        else {
            lVar6 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,uVar1,DAT_140c63858);
        }
        if (lVar6 == 0) goto LAB_1405aceec;
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c63a64 == 0) && (iVar5 = FUN_140207b00(), -1 < iVar5)) {
                lVar8 = (**(code **)(*DAT_140c63e68 + 0x18))();
                goto LAB_1405aceb4;
            }
        }
        else {
            lVar8 = (*DAT_140c63840)(&PTR_u_HousingWallpaperInfo_140a6aa60,*(undefined4 *)(lVar9 + 0x6c),
                                     DAT_140c63858);
            LAB_1405aceb4:
            if (((lVar8 != 0) &&
                 (((uVar2 = *(uint *)(lVar8 + 0x18), (uVar2 & 0x340) == 0 ||
                                                     (uVar2 == *(uint *)(lVar9 + 0x74))) && ((uVar2 & 0x342) != 0)))) &&
                ((*(uint *)(lVar6 + 0x18) & 0x200) != 0)) goto LAB_1405aceee;
        }
        plVar11 = plVar11 + 1;
    } while( true );
}



void FUN_1405acf20(longlong param_1,longlong param_2,undefined4 param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    int iVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    ulonglong *puVar17;
    longlong lVar18;
    undefined4 *puVar19;
    longlong *plVar20;
    int iVar21;
    ulonglong uVar22;
    longlong *plVar23;
    longlong *plVar24;
    undefined4 local_res20 [2];
    uint local_d8;
    undefined4 uStack196;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack172;
    undefined4 local_78;
    undefined4 uStack116;
    undefined4 uStack112;
    undefined4 uStack108;
    undefined4 uStack100;
    undefined local_58 [8];
    longlong *local_50;
    longlong *local_48;
    undefined8 local_40;

    uVar22 = 0;
    plVar24 = (longlong *)0x0;
    local_50 = (longlong *)0x0;
    local_48 = (longlong *)0x0;
    local_40 = 0;
    local_d8 = 0;
    if (*(int *)(param_1 + 0x110) != 0) {
        do {
            plVar23 = local_48;
            lVar18 = DAT_140c659f8;
            iVar9 = *(int *)(param_1 + 0xbc);
            local_res20[0] = *(undefined4 *)(uVar22 * 0xc0 + 4 + *(longlong *)(param_1 + 0xe8));
            uVar22 = (**(code **)(DAT_140c659f8 + 0x38))(local_res20);
            for (puVar17 = *(ulonglong **)
                    (*(longlong *)(lVar18 + 0x30) + (uVar22 % *(ulonglong *)(lVar18 + 0x28)) * 8);
                 plVar20 = plVar24, puVar17 != (ulonglong *)0x0; puVar17 = (ulonglong *)puVar17[1]) {
                if ((uVar22 == *puVar17) &&
                    (iVar21 = (**(code **)(lVar18 + 0x40))(local_res20,puVar17 + 2), iVar21 != 0)) {
                    if ((puVar17 + 3 != (ulonglong *)0x0) &&
                        (uVar22 = puVar17[3], *(int *)(uVar22 + 0x14) == iVar9)) {
                        FUN_1404c7cf0(uVar22,local_58,param_3);
                        plVar20 = local_50;
                        plVar24 = local_50;
                        plVar23 = local_48;
                    }
                    break;
                }
            }
            for (; plVar20 != plVar23; plVar20 = plVar20 + 1) {
                lVar18 = *plVar20;
                puVar19 = *(undefined4 **)(param_2 + 0x10);
                uVar1 = *(undefined4 *)(lVar18 + 0xa0);
                uVar2 = *(undefined4 *)(lVar18 + 0xa4);
                uVar10 = *(undefined4 *)(lVar18 + 0x60);
                uVar3 = *(undefined4 *)(lVar18 + 0xa8);
                uVar4 = *(undefined4 *)(lVar18 + 0x90);
                uVar11 = *(undefined4 *)(lVar18 + 0x80);
                uVar5 = *(undefined4 *)(lVar18 + 0x94);
                uVar12 = *(undefined4 *)(lVar18 + 0x74);
                uVar6 = *(undefined4 *)(lVar18 + 0x98);
                uVar7 = *(undefined4 *)(lVar18 + 0x9c);
                uVar13 = *(undefined4 *)(lVar18 + 0x78);
                uVar8 = *(undefined4 *)(lVar18 + 0xac);
                uVar14 = *(undefined4 *)(lVar18 + 0x7c);
                uVar15 = *(undefined4 *)(param_1 + 0xbc);
                uVar16 = *(undefined4 *)(lVar18 + 0xf8);
                if (puVar19 == *(undefined4 **)(param_2 + 0x18)) {
                    FUN_1405b1f40(param_2);
                }
                else {
                    if (puVar19 != (undefined4 *)0x0) {
                        local_b8 = (undefined4)*(undefined8 *)(lVar18 + 0x58);
                        uStack180 = (undefined4)((ulonglong)*(undefined8 *)(lVar18 + 0x58) >> 0x20);
                        *puVar19 = 0;
                        puVar19[1] = uStack196;
                        puVar19[2] = uVar15;
                        puVar19[3] = 0;
                        puVar19[4] = local_b8;
                        puVar19[5] = uStack180;
                        puVar19[6] = uVar11;
                        puVar19[7] = uStack172;
                        puVar19[8] = uVar12;
                        puVar19[9] = uVar13;
                        puVar19[10] = uVar14;
                        puVar19[0xb] = uVar8;
                        puVar19[0xc] = uVar1;
                        puVar19[0xd] = uVar2;
                        puVar19[0xe] = uVar3;
                        puVar19[0xf] = uVar4;
                        puVar19[0x10] = uVar5;
                        puVar19[0x11] = uVar6;
                        puVar19[0x12] = uVar7;
                        puVar19[0x13] = uVar10;
                        puVar19[0x14] = local_78;
                        puVar19[0x15] = uStack116;
                        puVar19[0x16] = uStack112;
                        puVar19[0x17] = uStack108;
                        *(ulonglong *)(puVar19 + 0x18) = CONCAT44(uStack100,uVar16);
                    }
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x68;
                }
            }
            FUN_1407db590(plVar24,plVar23);
            local_48 = plVar23 + -((longlong)plVar23 - (longlong)plVar24 >> 3);
            local_d8 = local_d8 + 1;
            uVar22 = (ulonglong)local_d8;
        } while (local_d8 < *(uint *)(param_1 + 0x110));
        if (plVar24 != (longlong *)0x0) {
            FUN_14018b900(plVar24,0);
        }
    }
    return;
}



int FUN_1405ad1b0(longlong param_1,int param_2)

{
    ulonglong *puVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;
    int iVar9;
    uint uVar10;
    ulonglong uVar11;
    undefined4 local_res8 [2];

    iVar9 = 0;
    uVar11 = 0;
    if (*(int *)(param_1 + 0x110) != 0) {
        do {
            lVar2 = DAT_140c659f8;
            iVar8 = *(int *)(param_1 + 0xbc);
            local_res8[0] = *(undefined4 *)(uVar11 * 0xc0 + 4 + *(longlong *)(param_1 + 0xe8));
            uVar5 = (**(code **)(DAT_140c659f8 + 0x38))(local_res8);
            puVar1 = *(ulonglong **)
                    (*(longlong *)(lVar2 + 0x30) + (uVar5 % *(ulonglong *)(lVar2 + 0x28)) * 8);
            joined_r0x0001405ad231:
            if (puVar1 != (ulonglong *)0x0) {
                if ((uVar5 != *puVar1) || (iVar4 = (**(code **)(lVar2 + 0x40))(local_res8), iVar4 == 0))
                    goto LAB_1405ad248;
                if ((puVar1 + 3 != (ulonglong *)0x0) && (uVar5 = puVar1[3], *(int *)(uVar5 + 0x14) == iVar8)
                        ) {
                    lVar2 = *(longlong *)(uVar5 + 0x58);
                    iVar8 = 0;
                    lVar6 = *(longlong *)(lVar2 + 0x10);
                    while (lVar6 != lVar2) {
                        if (*(int *)(*(longlong *)(lVar6 + 0x28) + 0x80) == param_2) {
                            iVar8 = iVar8 + 1;
                        }
                        lVar7 = *(longlong *)(lVar6 + 0x18);
                        if (lVar7 == 0) {
                            lVar7 = *(longlong *)(lVar6 + 8);
                            if (lVar6 == *(longlong *)(lVar7 + 0x18)) {
                                do {
                                    lVar6 = lVar7;
                                    lVar7 = *(longlong *)(lVar6 + 8);
                                } while (lVar6 == *(longlong *)(lVar7 + 0x18));
                            }
                            if (*(longlong *)(lVar6 + 0x18) != lVar7) {
                                lVar6 = lVar7;
                            }
                        }
                        else {
                            for (lVar3 = *(longlong *)(lVar7 + 0x10); lVar6 = lVar7, lVar3 != 0;
                                 lVar3 = *(longlong *)(lVar3 + 0x10)) {
                                lVar7 = lVar3;
                            }
                        }
                    }
                    goto LAB_1405ad253;
                }
            }
            iVar8 = 0;
            LAB_1405ad253:
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            iVar9 = iVar9 + iVar8;
        } while (uVar10 < *(uint *)(param_1 + 0x110));
    }
    return iVar9;
    LAB_1405ad248:
    puVar1 = (ulonglong *)puVar1[1];
    goto joined_r0x0001405ad231;
}



void FUN_1405ad310(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    undefined8 uVar5;

    lVar2 = DAT_140c659f8;
    *(undefined4 *)(param_1 + 0xc0) = param_2;
    plVar1 = *(longlong **)(lVar2 + 200);
    if (plVar1 == (longlong *)0x0) {
        return;
    }
    lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
    if ((lVar2 == 0) || (*(int *)(lVar2 + 0xc0) != 4)) {
        lVar2 = FUN_1405b1510(&DAT_140c7dfb0);
        if ((lVar2 == 0) || (*(int *)(lVar2 + 0xc0) != 3)) goto LAB_1405ad38b;
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x70))(plVar1);
        uVar5 = 0xfe;
    }
    else {
        plVar3 = (longlong *)(**(code **)(*plVar1 + 0x70))(plVar1);
        uVar5 = 0x20;
    }
    (**(code **)(*plVar3 + 0x78))(plVar3,uVar5);
    LAB_1405ad38b:
    puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x70))(plVar1);
    // WARNING: Could not recover jumptable at 0x0001405ad39f. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)*puVar4)(puVar4);
    return;
}



void FUN_1405ad3b0(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;

    if ((param_2 == 0) && (*(int *)(param_1 + 0xc0) == 1)) {
        return;
    }
    lVar2 = FUN_1404cb280();
    if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x130) != 0) {
            return;
        }
        if ((2 < *(int *)(lVar2 + 0x80) - 1U) &&
            ((*(int *)(lVar2 + 0x80) != 4 || (iVar1 = FUN_140724910(lVar2), iVar1 == 0)))) {
            FUN_1404c9520();
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingFreePlaceDecorSelected",
                          &DAT_1409ebda4,*(undefined4 *)(lVar2 + 0x1f0));
            return;
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingFreePlaceDecorQuery","");
    return;
}



void FUN_1405ad480(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    int *piVar5;
    int *piVar6;
    uint uVar7;
    ulonglong uVar8;
    longlong lVar9;
    undefined8 extraout_XMM0_Qa;

    if (param_2 != (longlong *)0x0) {
        if (*(longlong *)(param_1 + 0x118) == 0) {
            (**(code **)*param_2)(param_2);
            if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x118) + 8))();
            }
            *(longlong **)(param_1 + 0x118) = param_2;
        }
        plVar2 = (longlong *)(**(code **)(*param_2 + 0x148))(param_2);
        if (plVar2 != (longlong *)0x0) {
            plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
            puVar3 = (undefined4 *)FUN_14018b280(0x20);
            uVar8 = 0;
            lVar9 = DAT_140c659f0;
            if (puVar3 != (undefined4 *)0x0) {
                puVar4 = (undefined4 *)(**(code **)(*plVar2 + 0x20))();
                *puVar3 = *puVar4;
                *(longlong **)(puVar3 + 2) = param_2;
                (**(code **)*param_2)(param_2);
                lVar9 = DAT_140c659f0;
                *(undefined8 *)(puVar3 + 6) = 0;
                plVar1 = (longlong *)(lVar9 + 0x280);
                plVar2 = (longlong *)(puVar3 + 6);
                *(longlong **)(puVar3 + 4) = plVar1;
                *plVar2 = *plVar1;
                *plVar1 = (longlong)puVar3;
                if (*plVar2 != 0) {
                    *(longlong **)(*plVar2 + 0x10) = plVar2;
                }
            }
            FUN_1404bc3c0(lVar9);
            plVar2 = (longlong *)(**(code **)(*param_2 + 0x148))(param_2);
            plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
            piVar5 = (int *)(**(code **)(*plVar2 + 0x20))();
            lVar9 = *(longlong *)(param_1 + 0xe8);
            if ((lVar9 != 0) && (*(uint *)(param_1 + 0x110) != 0)) {
                piVar6 = (int *)(lVar9 + 4);
                while (*piVar6 != *piVar5) {
                    uVar7 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar7;
                    piVar6 = piVar6 + 0x30;
                    if (*(uint *)(param_1 + 0x110) <= uVar7) {
                        return;
                    }
                }
                lVar9 = uVar8 * 0xc0 + lVar9;
                if ((lVar9 != 0) &&
                    (*(longlong **)(lVar9 + 0x58) = param_2, *(int *)(lVar9 + 0xb8) - 2U < 2)) {
                    (**(code **)(*param_2 + 0x98))(extraout_XMM0_Qa,0,param_2);
                    *(undefined4 *)(lVar9 + 0xb8) = 3;
                }
            }
        }
    }
    return;
}



void FUN_1405ad620(longlong param_1,longlong *param_2)

{
    uint uVar1;
    longlong *plVar2;
    int *piVar3;
    ulonglong uVar4;
    int *piVar5;
    longlong lVar6;

    if (param_2 != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(*param_2 + 0x148))(param_2);
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
        piVar3 = (int *)(**(code **)(*plVar2 + 0x20))(plVar2);
        lVar6 = *(longlong *)(param_1 + 0xe8);
        if (lVar6 != 0) {
            uVar4 = 0;
            if (*(uint *)(param_1 + 0x110) != 0) {
                piVar5 = (int *)(lVar6 + 4);
                while (*piVar5 != *piVar3) {
                    uVar1 = (int)uVar4 + 1;
                    uVar4 = (ulonglong)uVar1;
                    piVar5 = piVar5 + 0x30;
                    if (*(uint *)(param_1 + 0x110) <= uVar1) {
                        return;
                    }
                }
                lVar6 = uVar4 * 0xc0 + lVar6;
                if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x58) = 0;
                    if (*(longlong **)(lVar6 + 0x60) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(lVar6 + 0x60) + 8))();
                        *(undefined8 *)(lVar6 + 0x60) = 0;
                    }
                    if (*(longlong **)(lVar6 + 0x68) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(lVar6 + 0x68) + 8))();
                        *(undefined8 *)(lVar6 + 0x68) = 0;
                    }
                }
            }
        }
    }
    return;
}



void FUN_1405ad6e0(longlong param_1,longlong *param_2)

{
    longlong **pplVar1;
    uint uVar2;
    longlong *plVar3;
    int *piVar4;
    ulonglong uVar5;
    int *piVar6;
    longlong lVar7;
    longlong *local_res10 [3];

    if (param_2 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*param_2 + 0x148))(param_2);
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3);
        piVar4 = (int *)(**(code **)(*plVar3 + 0x20))(plVar3);
        lVar7 = *(longlong *)(param_1 + 0xe8);
        if (lVar7 != 0) {
            uVar5 = 0;
            if (*(uint *)(param_1 + 0x110) != 0) {
                piVar6 = (int *)(lVar7 + 4);
                while (*piVar6 != *piVar4) {
                    uVar2 = (int)uVar5 + 1;
                    uVar5 = (ulonglong)uVar2;
                    piVar6 = piVar6 + 0x30;
                    if (*(uint *)(param_1 + 0x110) <= uVar2) {
                        return;
                    }
                }
                lVar7 = uVar5 * 0xc0 + lVar7;
                if (lVar7 != 0) {
                    pplVar1 = *(longlong ***)(lVar7 + 0x48);
                    if (pplVar1 != *(longlong ***)(lVar7 + 0x50)) {
                        if (pplVar1 != (longlong **)0x0) {
                            *pplVar1 = param_2;
                        }
                        *(longlong *)(lVar7 + 0x48) = *(longlong *)(lVar7 + 0x48) + 8;
                        return;
                    }
                    local_res10[0] = param_2;
                    FUN_1400b9430(lVar7 + 0x38,pplVar1,local_res10);
                }
            }
        }
    }
    return;
}



void FUN_1405ad7b0(longlong param_1,longlong *param_2)

{
    longlong **pplVar1;
    longlong **pplVar2;
    uint uVar3;
    longlong *plVar4;
    int *piVar5;
    ulonglong uVar6;
    int *piVar7;
    longlong **pplVar8;
    longlong lVar9;

    if (param_2 != (longlong *)0x0) {
        plVar4 = (longlong *)(**(code **)(*param_2 + 0x148))(param_2);
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x20))(plVar4);
        piVar5 = (int *)(**(code **)(*plVar4 + 0x20))(plVar4);
        lVar9 = *(longlong *)(param_1 + 0xe8);
        if (lVar9 != 0) {
            uVar6 = 0;
            if (*(uint *)(param_1 + 0x110) != 0) {
                piVar7 = (int *)(lVar9 + 4);
                while (*piVar7 != *piVar5) {
                    uVar3 = (int)uVar6 + 1;
                    uVar6 = (ulonglong)uVar3;
                    piVar7 = piVar7 + 0x30;
                    if (*(uint *)(param_1 + 0x110) <= uVar3) {
                        return;
                    }
                }
                lVar9 = uVar6 * 0xc0 + lVar9;
                if (lVar9 != 0) {
                    pplVar8 = *(longlong ***)(lVar9 + 0x40);
                    pplVar2 = *(longlong ***)(lVar9 + 0x48);
                    if (pplVar8 != pplVar2) {
                        while (*pplVar8 != param_2) {
                            pplVar8 = pplVar8 + 1;
                            if (pplVar8 == pplVar2) {
                                return;
                            }
                        }
                        pplVar1 = pplVar8 + 1;
                        if (pplVar1 != pplVar2) {
                            FUN_1407db590(pplVar8,pplVar1,
                                          (longlong)pplVar2 - (longlong)pplVar1 & 0xfffffffffffffff8);
                        }
                        *(longlong *)(lVar9 + 0x48) = *(longlong *)(lVar9 + 0x48) + -8;
                    }
                }
            }
        }
    }
    return;
}



void FUN_1405ad890(longlong param_1,uint param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
    undefined4 *puVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 extraout_XMM0_Qa;
    undefined8 uVar5;
    undefined8 extraout_XMM0_Qa_00;
    undefined8 local_28 [2];

    if ((param_2 < *(uint *)(param_1 + 0x110)) && (lVar3 = FUN_140205fa0(param_3), lVar3 != 0)) {
        uVar5 = extraout_XMM0_Qa;
        if ((param_2 == 0) && (param_5[0x10] == 0)) {
            uVar5 = FUN_1401e4300(param_1 + 200);
        }
        lVar4 = (ulonglong)param_2 * 0xc0;
        *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 8 + lVar4) = param_3;
        *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 4 + lVar4) = *(undefined4 *)(lVar3 + 4);
        lVar3 = *(longlong *)(param_1 + 0xe8) + 0x10 + lVar4;
        if ((lVar3 != 0) &&
            (iVar2 = FUN_1401e82f0(uVar5,param_5[0xf],local_28), uVar5 = extraout_XMM0_Qa_00, -1 < iVar2)
                ) {
            uVar5 = FUN_1401e8230(lVar3,local_28[0]);
        }
        FUN_1405a9d10(uVar5,param_5[0x13],param_5[0x12],*(longlong *)(param_1 + 0xe8) + lVar4);
        if ((param_4 != *(int *)(*(longlong *)(param_1 + 0xe8) + lVar4 + 0xc)) && (param_4 != 0)) {
            FUN_1405a9920();
        }
        *(int *)(*(longlong *)(param_1 + 0xe8) + 0xc + lVar4) = param_4;
        puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0xf8) + (ulonglong)param_2 * 8);
        *puVar1 = *param_5;
        puVar1[1] = param_5[1];
        puVar1[2] = param_5[2];
        puVar1[3] = param_5[3];
        puVar1[4] = param_5[4];
        puVar1[5] = param_5[5];
        puVar1[6] = param_5[6];
        puVar1[7] = param_5[7];
        puVar1[8] = param_5[8];
        puVar1[9] = param_5[9];
        puVar1[10] = param_5[10];
        puVar1[0xb] = param_5[0xb];
        puVar1[0xc] = param_5[0xc];
        puVar1[0xd] = param_5[0xd];
        puVar1[0xe] = param_5[0xe];
        puVar1[0xf] = param_5[0xf];
        puVar1[0x10] = param_5[0x10];
        puVar1[0x11] = param_5[0x11];
        puVar1[0x12] = param_5[0x12];
        puVar1[0x13] = param_5[0x13];
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405ada30(longlong param_1,int *param_2)

{
    undefined4 uVar1;
    undefined4 *puVar2;
    int iVar3;
    int *piVar4;
    undefined8 *puVar5;
    longlong lVar6;
    int iVar7;
    int *piVar8;
    uint uVar9;
    longlong lVar11;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined8 extraout_XMM0_Qa_01;
    undefined8 uVar12;
    undefined4 *local_res8;
    undefined local_res18 [8];
    ulonglong uVar10;

    if ((*(longlong *)(param_1 + 0xe8) == 0) &&
        ((*(longlong *)(param_1 + 0x100) - *(longlong *)(param_1 + 0xf8) & 0xfffffffffffffff8U) == 0))
    {
        iVar3 = *param_2;
        *(int *)(param_1 + 0x110) = iVar3;
        piVar4 = (int *)FUN_14018b280();
        if (piVar4 == (int *)0x0) {
            piVar8 = (int *)0x0;
        }
        else {
            iVar7 = iVar3 + -1;
            *piVar4 = iVar3;
            piVar8 = piVar4 + 2;
            if (-1 < iVar7) {
                puVar5 = (undefined8 *)(piVar4 + 0x2a);
                do {
                    iVar7 = iVar7 + -1;
                    puVar5[-0xc] = 0;
                    puVar5[-0xb] = 0;
                    puVar5[-10] = 0;
                    puVar5[-9] = 0;
                    puVar5[-8] = 0;
                    puVar5[-7] = 0;
                    puVar5[-4] = 0;
                    puVar5[-3] = 0;
                    puVar5[-1] = 0;
                    *puVar5 = 0;
                    *(undefined4 *)(puVar5 + -6) = 0x544e5645;
                    *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
                    *(undefined4 *)((longlong)puVar5 + 0x1c) = 0;
                    puVar5 = puVar5 + 0x18;
                } while (-1 < iVar7);
            }
        }
        uVar10 = 0;
        *(int **)(param_1 + 0xe8) = piVar8;
        if (*(int *)(param_1 + 0x110) != 0) {
            do {
                local_res8 = (undefined4 *)FUN_14018b280();
                lVar6 = *(longlong *)(param_2 + 2);
                *local_res8 = *(undefined4 *)(lVar6 + uVar10 * 0x50);
                local_res8[1] = *(undefined4 *)(lVar6 + 4 + uVar10 * 0x50);
                local_res8[2] = *(undefined4 *)(lVar6 + 8 + uVar10 * 0x50);
                local_res8[3] = *(undefined4 *)(lVar6 + 0xc + uVar10 * 0x50);
                local_res8[4] = *(undefined4 *)(lVar6 + 0x10 + uVar10 * 0x50);
                local_res8[5] = *(undefined4 *)(lVar6 + 0x14 + uVar10 * 0x50);
                local_res8[6] = *(undefined4 *)(lVar6 + 0x18 + uVar10 * 0x50);
                local_res8[7] = *(undefined4 *)(lVar6 + 0x1c + uVar10 * 0x50);
                local_res8[8] = *(undefined4 *)(lVar6 + 0x20 + uVar10 * 0x50);
                local_res8[9] = *(undefined4 *)(lVar6 + 0x24 + uVar10 * 0x50);
                local_res8[10] = *(undefined4 *)(lVar6 + 0x28 + uVar10 * 0x50);
                local_res8[0xb] = *(undefined4 *)(lVar6 + 0x2c + uVar10 * 0x50);
                local_res8[0xc] = *(undefined4 *)(lVar6 + 0x30 + uVar10 * 0x50);
                local_res8[0xd] = *(undefined4 *)(lVar6 + 0x34 + uVar10 * 0x50);
                local_res8[0xe] = *(undefined4 *)(lVar6 + 0x38 + uVar10 * 0x50);
                local_res8[0xf] = *(undefined4 *)(lVar6 + 0x3c + uVar10 * 0x50);
                local_res8[0x10] = *(undefined4 *)(lVar6 + 0x40 + uVar10 * 0x50);
                local_res8[0x11] = *(undefined4 *)(lVar6 + 0x44 + uVar10 * 0x50);
                local_res8[0x12] = *(undefined4 *)(lVar6 + 0x48 + uVar10 * 0x50);
                local_res8[0x13] = *(undefined4 *)(lVar6 + 0x4c + uVar10 * 0x50);
                puVar5 = *(undefined8 **)(param_1 + 0x100);
                if (puVar5 == *(undefined8 **)(param_1 + 0x108)) {
                    FUN_14010a1c0(param_1 + 0xf0,puVar5,&local_res8);
                }
                else {
                    if (puVar5 != (undefined8 *)0x0) {
                        *puVar5 = local_res8;
                    }
                    *(longlong *)(param_1 + 0x100) = *(longlong *)(param_1 + 0x100) + 8;
                }
                puVar2 = local_res8;
                uVar1 = local_res8[3];
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c65340 == 0) && (iVar3 = FUN_140205d40(), -1 < iVar3)) {
                        lVar6 = (**(code **)(*DAT_140c63c30 + 0x18))(DAT_140c63c30,uVar1);
                        uVar12 = extraout_XMM0_Qa_00;
                        goto LAB_1405adc66;
                    }
                }
                else {
                    lVar6 = (*DAT_140c63840)(&PTR_u_HousingPlotInfo_140a6a8d8,uVar1,DAT_140c63858);
                    uVar12 = extraout_XMM0_Qa;
                    LAB_1405adc66:
                    if (lVar6 != 0) {
                        lVar11 = uVar10 * 0xc0;
                        *(int *)(lVar11 + *(longlong *)(param_1 + 0xe8)) = (int)uVar10;
                        *(undefined4 *)(lVar11 + 8 + *(longlong *)(param_1 + 0xe8)) = puVar2[3];
                        *(undefined4 *)(lVar11 + 4 + *(longlong *)(param_1 + 0xe8)) = *(undefined4 *)(lVar6 + 4)
                                ;
                        lVar6 = *(longlong *)(param_1 + 0xe8) + 0x10 + lVar11;
                        if ((lVar6 != 0) &&
                            (iVar3 = FUN_1401e82f0(uVar12,puVar2[0xf],local_res18), uVar12 = extraout_XMM0_Qa_01,
                                    -1 < iVar3)) {
                            uVar12 = FUN_1401e8230(lVar6);
                        }
                        FUN_1405a9d10(uVar12,puVar2[0x13],puVar2[0x12],*(longlong *)(param_1 + 0xe8) + lVar11);
                        if (puVar2[1] != 0) {
                            FUN_1405a9920(*(longlong *)(param_1 + 0xe8) + lVar11);
                        }
                        *(undefined4 *)(lVar11 + 0xc + *(longlong *)(param_1 + 0xe8)) = puVar2[1];
                    }
                }
                uVar9 = (int)uVar10 + 1;
                uVar10 = (ulonglong)uVar9;
            } while (uVar9 < *(uint *)(param_1 + 0x110));
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405add40(longlong param_1,undefined4 param_2)

{
    longlong **pplVar1;
    undefined4 uVar2;
    ulonglong *puVar3;
    longlong *plVar4;
    longlong *plVar5;
    int iVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong **pplVar9;
    longlong *plVar10;
    longlong local_res8;
    undefined local_48 [8];
    longlong *local_40;
    longlong *local_38;
    undefined8 local_30;

    if ((*(longlong *)(param_1 + 0xe8) != 0) && (*(int *)(param_1 + 0x110) != 0)) {
        lVar8 = *(longlong *)(DAT_140c659f8 + 0x70);
        if (lVar8 != 0) {
            while ((*(int *)(lVar8 + 0x10) != *(int *)(*(longlong *)(param_1 + 0xe8) + 4) ||
                    (*(int *)(lVar8 + 0x14) != *(int *)(param_1 + 0xbc)))) {
                lVar8 = *(longlong *)(lVar8 + 8);
                if (lVar8 == 0) {
                    return;
                }
            }
            local_40 = (longlong *)0x0;
            local_38 = (longlong *)0x0;
            local_30 = 0;
            FUN_1404c7c30(lVar8,local_48,param_2);
            plVar5 = local_38;
            plVar4 = local_40;
            for (plVar10 = local_40; local_40 = plVar4, plVar10 != plVar5; plVar10 = plVar10 + 1) {
                lVar8 = *plVar10;
                if ((2 < *(int *)(lVar8 + 0x80) - 1U) &&
                    (((*(int *)(lVar8 + 0x80) != 4 || (iVar6 = FUN_140724910(), iVar6 == 0)) &&
                      (*(int *)(lVar8 + 0x80) != 4)))) {
                    local_res8 = *(longlong *)(lVar8 + 0x58);
                    uVar7 = (**(code **)(param_1 + 0x188))(&local_res8);
                    for (puVar3 = *(ulonglong **)
                            (*(longlong *)(param_1 + 0x180) +
                             (uVar7 % *(ulonglong *)(param_1 + 0x178)) * 8); puVar3 != (ulonglong *)0x0;
                         puVar3 = (ulonglong *)puVar3[1]) {
                        if ((uVar7 == *puVar3) &&
                            (iVar6 = (**(code **)(param_1 + 400))(&local_res8,puVar3 + 2), iVar6 != 0)) {
                            if (puVar3 != (ulonglong *)&DAT_ffffffffffffffe8) {
                                FUN_1400b6120(param_1 + 0x170,&local_res8);
                                pplVar9 = *(longlong ***)(param_1 + 0x1a0);
                                goto joined_r0x0001405adebc;
                            }
                            break;
                        }
                    }
                    LAB_1405adf07:
                    uVar2 = *(undefined4 *)(param_1 + 0xb8);
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c65340 == 0) && (iVar6 = FUN_140205d40(), -1 < iVar6)) {
                            (**(code **)(*DAT_140c63c30 + 0x18))(DAT_140c63c30,uVar2);
                        }
                    }
                    else {
                        (*DAT_140c63840)(&PTR_u_HousingPlotInfo_140a6a8d8,uVar2,DAT_140c63858);
                    }
                    FUN_1404c9c70();
                    FUN_14077db00();
                }
                plVar4 = local_40;
            }
            if (*DAT_140c659f0 == 0) {
                FUN_1405aec80(param_1);
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingMyResidenceDecorChanged",
                          &DAT_1409ebf4c,0);
            if (plVar4 != (longlong *)0x0) {
                FUN_14018b900(plVar4,0);
            }
        }
    }
    return;
    joined_r0x0001405adebc:
    if (pplVar9 == *(longlong ***)(param_1 + 0x1a8)) goto LAB_1405adf07;
    if (**pplVar9 == local_res8) {
        FUN_14018b900(*pplVar9,0);
        pplVar1 = pplVar9 + 1;
        if (pplVar1 != *(longlong ***)(param_1 + 0x1a8)) {
            FUN_1407db590(pplVar9,pplVar1,
                          (longlong)*(longlong ***)(param_1 + 0x1a8) - (longlong)pplVar1 &
                          0xfffffffffffffff8);
        }
        *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + -8;
        goto LAB_1405adf07;
    }
    pplVar9 = pplVar9 + 1;
    goto joined_r0x0001405adebc;
}



void FUN_1405ae010(longlong param_1,int param_2)

{
    uint uVar1;
    longlong lVar2;
    int *piVar4;
    ulonglong uVar5;
    int iVar6;
    ulonglong uVar3;

    uVar5 = 0;
    iVar6 = 0;
    lVar2 = FUN_140205fa0(*(undefined4 *)(param_1 + 0xb8));
    if (lVar2 != 0) {
        iVar6 = *(int *)(lVar2 + 4);
    }
    lVar2 = *(longlong *)(param_1 + 0xe8);
    if ((lVar2 != 0) && (*(uint *)(param_1 + 0x110) != 0)) {
        piVar4 = (int *)(lVar2 + 4);
        uVar3 = uVar5;
        do {
            if (*piVar4 == iVar6) {
                uVar5 = uVar3 * 0xc0 + lVar2;
                if ((uVar5 != 0) && (param_2 == 1)) goto LAB_1405ae090;
                break;
            }
            uVar1 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar1;
            piVar4 = piVar4 + 0x30;
        } while (uVar1 < *(uint *)(param_1 + 0x110));
    }
    if ((param_2 == 3) && (*(int *)(param_1 + 0x50) == 0)) {
        LAB_1405ae090:
        FUN_1405a9980(uVar5);
    }
    return;
}



void FUN_1405ae0b0(longlong param_1,int param_2)

{
    undefined8 *puVar1;

    if ((*(longlong *)(param_1 + 0x1a8) - *(longlong *)(param_1 + 0x1a0) & 0xfffffffffffffff8U) != 0)
    {
        if (param_2 == 0) {
            if (*DAT_140c659f0 == 0) {
                FUN_1405aec80();
                return;
            }
        }
        else {
            puVar1 = *(undefined8 **)(param_1 + 0x1a0);
            if (puVar1 != *(undefined8 **)(param_1 + 0x1a8)) {
                do {
                    FUN_1405aea60(param_1,*puVar1);
                    puVar1 = puVar1 + 1;
                } while (puVar1 != *(undefined8 **)(param_1 + 0x1a8));
            }
        }
    }
    return;
}



void FUN_1405ae130(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;

    FUN_140019490(param_1 + 0x170);
    puVar3 = *(undefined8 **)(param_1 + 0x1a0);
    if (puVar3 != *(undefined8 **)(param_1 + 0x1a8)) {
        do {
            FUN_14018b900(*puVar3,0);
            puVar3 = puVar3 + 1;
        } while (puVar3 != *(undefined8 **)(param_1 + 0x1a8));
    }
    lVar1 = *(longlong *)(param_1 + 0x1a8);
    lVar2 = *(longlong *)(param_1 + 0x1a0);
    FUN_1407db590(lVar2,lVar1,0);
    *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x1a8) + (lVar1 - lVar2 >> 3) * -8;
    return;
}


/*
Unable to decompile 'FUN_1405ae1c0'
Cause:
Low-level Error: Overlapping input varnodes
*/


// WARNING: Could not reconcile some variable overlaps

void FUN_1405ae580(longlong param_1,undefined8 param_2,uint param_3,float *param_4,uint param_5)

{
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined auVar7 [16];
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined8 local_e8;
    undefined8 uStack224;
    undefined8 local_d8;
    ulonglong local_d0;
    undefined8 local_c8;
    undefined8 local_c0;
    undefined8 local_b8;
    ulonglong local_b0;
    undefined4 local_a8 [3];
    uint local_9c;
    float local_98;
    float fStack148;
    float fStack144;
    float fStack140;
    undefined local_88 [16];
    undefined local_78 [16];
    undefined local_68 [16];
    undefined8 local_58;
    undefined8 uStack80;

    fVar8 = param_4[0xc];
    fVar1 = param_4[0xd];
    fVar9 = fVar1 * fVar1;
    local_e8 = 0;
    uStack224 = 0;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    fVar13 = fVar8 * fVar8 + fVar9 + 0.0;
    local_b8 = 0;
    local_b0 = 0;
    auVar7 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))),
                     CONCAT412(param_4[0xf] * param_4[0xf],
                               CONCAT48(param_4[0xe] * param_4[0xe],CONCAT44(fVar9,fVar13))));
    fVar9 = SUB164(auVar7,0);
    fVar9 = (3.0 - fVar13 * fVar9 * fVar9) * 0.5 * fVar9;
    if (fVar9 <= 0.0) {
        fVar9 = 0.0;
    }
    fVar13 = param_4[8];
    fVar2 = param_4[9];
    fVar10 = fVar2 * fVar2;
    fVar14 = fVar13 * fVar13 + fVar10 + 0.0;
    auVar7 = rsqrtss(CONCAT412(fVar10,CONCAT48(fVar10,CONCAT44(fVar10,fVar10))),
                     CONCAT412(param_4[0xb] * param_4[0xb],
                               CONCAT48(param_4[10] * param_4[10],CONCAT44(fVar10,fVar14))));
    fVar10 = SUB164(auVar7,0);
    fVar10 = (3.0 - fVar14 * fVar10 * fVar10) * 0.5 * fVar10;
    if (fVar10 <= 0.0) {
        fVar10 = 0.0;
    }
    fVar14 = param_4[4];
    fVar3 = param_4[5];
    fVar11 = fVar3 * fVar3;
    fVar15 = fVar14 * fVar14 + fVar11 + 0.0;
    auVar7 = rsqrtss(CONCAT412(fVar11,CONCAT48(fVar11,CONCAT44(fVar11,fVar11))),
                     CONCAT412(param_4[7] * param_4[7],
                               CONCAT48(param_4[6] * param_4[6],CONCAT44(fVar11,fVar15))));
    fVar11 = SUB164(auVar7,0);
    fVar11 = (3.0 - fVar15 * fVar11 * fVar11) * 0.5 * fVar11;
    if (fVar11 <= 0.0) {
        fVar11 = 0.0;
    }
    fVar15 = *param_4;
    fVar4 = param_4[1];
    fVar12 = fVar4 * fVar4;
    fVar16 = fVar15 * fVar15 + fVar12 + 0.0;
    auVar7 = rsqrtss(CONCAT412(fVar12,CONCAT48(fVar12,CONCAT44(fVar12,fVar12))),
                     CONCAT412(param_4[3] * param_4[3],
                               CONCAT48(param_4[2] * param_4[2],CONCAT44(fVar12,fVar16))));
    fVar12 = SUB164(auVar7,0);
    fVar12 = (3.0 - fVar16 * fVar12 * fVar12) * 0.5 * fVar12;
    if (fVar12 <= 0.0) {
        fVar12 = 0.0;
    }
    local_88 = ZEXT816(CONCAT44(fVar12 * fVar4,fVar12 * fVar15));
    local_78 = ZEXT816(CONCAT44(fVar11 * fVar3,fVar11 * fVar14));
    local_68 = ZEXT816(CONCAT44(fVar10 * fVar2,fVar10 * fVar13));
    uStack80 = SUB168(CONCAT412(0x3f800000,ZEXT812(0)) >> 0x40,0);
    local_58 = CONCAT44(fVar9 * fVar1,fVar9 * fVar8);
    local_d8 = param_2;
    FUN_1401b1d60(local_a8,local_88);
    local_98 = param_4[0xc];
    fStack148 = param_4[0xd];
    fStack144 = param_4[0xe];
    fStack140 = param_4[0xf];
    lVar5 = FUN_140203da0(param_3);
    if (lVar5 != 0) {
        local_d0 = local_d0 & 0xffffffff00000000 | (ulonglong)param_3;
        if ((*(byte *)(lVar5 + 0x10) & 4) != 0) {
            plVar6 = (longlong *)FUN_1404c9e20();
            if (plVar6 != (longlong *)0x0) {
                lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(plVar6 + 0xd));
                if (lVar5 != 0) {
                    (**(code **)(*plVar6 + 0x90))(plVar6,local_88,0);
                    *(undefined4 *)(lVar5 + 0xea0) = 0;
                    fVar8 = SQRT(local_88._0_4_ * local_88._0_4_ + local_88._4_4_ * local_88._4_4_ + 0.0);
                    *(float *)(lVar5 + 0xe94) = fVar8;
                    *(float *)(lVar5 + 0xe8c) = fVar8;
                }
            }
        }
        local_e8 = *(undefined8 *)(param_1 + 8);
        uStack224 = *(undefined8 *)(param_1 + 0x10);
        local_d0 = local_d0 & 0xffffffff | (ulonglong)param_5 << 0x20;
        local_c8 = CONCAT44(fStack148,local_98);
        local_c0 = CONCAT44(local_a8[0],fStack144);
        local_b0 = local_b0 & 0xffffffff00000000 | (ulonglong)local_9c;
        FUN_1403f4900(DAT_140c65898,0x4e6,&local_e8);
    }
    return;
}



ulonglong FUN_1405ae900(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    ulonglong *puVar2;
    undefined8 uVar3;
    int *piVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 local_res10;

    local_res10 = param_2;
    uVar5 = FUN_1404c9e20(param_1,*(undefined4 *)(param_1 + 0xbc),param_2);
    uVar7 = uVar5;
    if (uVar5 != 0) {
        FUN_1404c0700(uVar5);
        uVar6 = (**(code **)(param_1 + 0x188))(&local_res10);
        uVar7 = uVar6 / *(ulonglong *)(param_1 + 0x178);
        for (puVar2 = *(ulonglong **)
                (*(longlong *)(param_1 + 0x180) + (uVar6 % *(ulonglong *)(param_1 + 0x178)) * 8);
             puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
            if ((uVar6 == *puVar2) &&
                (uVar7 = (**(code **)(param_1 + 400))(&local_res10,puVar2 + 2), piVar4 = DAT_140c659f0,
                 uVar3 = DAT_140c65898, (int)uVar7 != 0)) {
                if (puVar2 + 3 == (ulonglong *)0x0) {
                    return uVar7;
                }
                uVar7 = puVar2[3];
                *(undefined4 *)(uVar7 + 0xc) = 1;
                iVar1 = *piVar4;
                uVar6 = FUN_1403d90d0(uVar3,param_3);
                if ((uVar6 == 0) || ((*(uint *)(uVar6 + 0x2c) & 0x200000) == 0)) {
                    LAB_1405ae9e4:
                    if (iVar1 == 0) goto LAB_1405ae9f3;
                }
                else {
                    *(undefined4 *)(uVar5 + 0x28c) = 1;
                    uVar6 = FUN_1404c3b50(uVar5);
                    if (*(int *)(uVar5 + 0x290) != 0) goto LAB_1405ae9e4;
                }
                uVar6 = FUN_1405aea60(param_1,uVar7);
                LAB_1405ae9f3:
                *(undefined4 *)(uVar7 + 0xc) = 0;
                return uVar6;
            }
        }
    }
    return uVar7;
}



longlong FUN_1405aea10(longlong param_1,int param_2)

{
    longlong lVar1;
    uint uVar2;
    ulonglong uVar3;
    int *piVar4;

    lVar1 = *(longlong *)(param_1 + 0xe8);
    if (lVar1 != 0) {
        uVar3 = 0;
        if (*(uint *)(param_1 + 0x110) != 0) {
            piVar4 = (int *)(lVar1 + 4);
            do {
                if (*piVar4 == param_2) {
                    return uVar3 * 0xc0 + lVar1;
                }
                uVar2 = (int)uVar3 + 1;
                uVar3 = (ulonglong)uVar2;
                piVar4 = piVar4 + 0x30;
            } while (uVar2 < *(uint *)(param_1 + 0x110));
        }
    }
    return 0;
}



undefined4 FUN_1405aea60(longlong param_1,undefined8 *param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;

    if ((*(int *)(param_2 + 2) == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        return 1;
    }
    lVar2 = FUN_1404c9e20(param_1,*(undefined4 *)(param_1 + 0xbc),*param_2);
    if (lVar2 == 0) {
        return 1;
    }
    lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar2 + 0x68));
    if (lVar3 != 0) {
        if ((*(uint *)(lVar3 + 0x2c) & 0x200000) != 0) {
            *(undefined4 *)(lVar2 + 0x28c) = 1;
        }
        *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar3 + 0x28);
        uVar1 = *(uint *)(lVar3 + 0x28);
        *(undefined4 *)(lVar3 + 0x28) = 0x40a3;
        if ((uVar1 & 0x100) != 0) {
            *(undefined4 *)(lVar3 + 0x1348) = 0;
        }
        FUN_14046c300(lVar3,1);
        *(undefined4 *)(param_2 + 2) = 0;
    }
    return 0;
}



undefined8 FUN_1405aeb20(longlong param_1,undefined8 param_2)

{
    uint uVar1;
    uint uVar2;
    ulonglong *puVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    undefined8 local_res10;

    local_res10 = param_2;
    lVar5 = FUN_1404c9e20(param_1,*(undefined4 *)(param_1 + 0xbc),param_2);
    if (lVar5 == 0) {
        return 1;
    }
    uVar6 = (**(code **)(param_1 + 0x188))(&local_res10);
    puVar3 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x180) + (uVar6 % *(ulonglong *)(param_1 + 0x178)) * 8);
    while( true ) {
        if (puVar3 == (ulonglong *)0x0) {
            return 0x80004005;
        }
        if ((uVar6 == *puVar3) && (iVar4 = (**(code **)(param_1 + 400))(&local_res10), iVar4 != 0))
            break;
        puVar3 = (ulonglong *)puVar3[1];
    }
    if (puVar3 + 3 == (ulonglong *)0x0) {
        return 0x80004005;
    }
    uVar6 = puVar3[3];
    if (*(int *)(lVar5 + 0x28c) != 0) {
        FUN_1404c3b50(lVar5);
    }
    if (*(int *)(lVar5 + 0x290) == 0) {
        *(undefined4 *)(uVar6 + 0xc) = 1;
        uVar7 = FUN_1405aea60(param_1,uVar6);
        return uVar7;
    }
    if ((*(int *)(uVar6 + 0x10) != 0) && (*(int *)(uVar6 + 0xc) == 0)) {
        return 1;
    }
    lVar5 = FUN_1403d90d0();
    if (lVar5 != 0) {
        uVar1 = *(uint *)(uVar6 + 8);
        uVar2 = *(uint *)(lVar5 + 0x28);
        *(uint *)(lVar5 + 0x28) = uVar1;
        if (((uVar2 ^ uVar1) & 0x100) != 0) {
            FUN_14045ba00(lVar5);
        }
        FUN_14046c300(lVar5,1);
        *(undefined4 *)(uVar6 + 0x10) = 1;
    }
    return 0;
}



undefined8 FUN_1405aec80(longlong param_1)

{
    uint uVar1;
    uint uVar2;
    ulonglong *puVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    undefined8 local_res10;

    puVar7 = *(undefined8 **)(param_1 + 0x1a0);
    if (puVar7 != *(undefined8 **)(param_1 + 0x1a8)) {
        do {
            local_res10 = *(undefined8 *)*puVar7;
            lVar5 = FUN_1404c9e20();
            if (lVar5 != 0) {
                uVar6 = (**(code **)(param_1 + 0x188))(&local_res10);
                puVar3 = *(ulonglong **)
                        (*(longlong *)(param_1 + 0x180) + (uVar6 % *(ulonglong *)(param_1 + 0x178)) * 8);
                while( true ) {
                    if (puVar3 == (ulonglong *)0x0) {
                        return 0x80004005;
                    }
                    if ((uVar6 == *puVar3) && (iVar4 = (**(code **)(param_1 + 400))(&local_res10), iVar4 != 0)
                            ) break;
                    puVar3 = (ulonglong *)puVar3[1];
                }
                if (puVar3 + 3 == (ulonglong *)0x0) {
                    return 0x80004005;
                }
                uVar6 = puVar3[3];
                if (*(int *)(lVar5 + 0x28c) != 0) {
                    FUN_1404c3b50(lVar5);
                }
                if (*(int *)(lVar5 + 0x290) == 0) {
                    *(undefined4 *)(uVar6 + 0xc) = 1;
                    iVar4 = FUN_1405aea60(param_1);
                    if (iVar4 < 0) {
                        return 0x80004005;
                    }
                }
                else if (((*(int *)(uVar6 + 0x10) == 0) || (*(int *)(uVar6 + 0xc) != 0)) &&
                         (lVar5 = FUN_1403d90d0(), lVar5 != 0)) {
                    uVar1 = *(uint *)(uVar6 + 8);
                    uVar2 = *(uint *)(lVar5 + 0x28);
                    *(uint *)(lVar5 + 0x28) = uVar1;
                    if (((uVar2 ^ uVar1) & 0x100) != 0) {
                        if ((uVar1 >> 8 & 1) == 0) {
                            *(undefined4 *)(lVar5 + 0x1348) = 0;
                        }
                        else {
                            *(undefined4 *)(lVar5 + 0x1348) = 1;
                            *(undefined4 *)(lVar5 + 0x40) = 0;
                            FUN_1407e4830(lVar5 + 0x21c);
                        }
                    }
                    FUN_14046c300(lVar5);
                    *(undefined4 *)(uVar6 + 0x10) = 1;
                }
            }
            puVar7 = puVar7 + 1;
        } while (puVar7 != *(undefined8 **)(param_1 + 0x1a8));
    }
    return 0;
}



void FUN_1405aee20(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    uint uVar5;
    int *piVar6;
    undefined auStack200 [32];
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
    undefined4 auStack100 [4];
    undefined4 uStack84;
    undefined4 uStack80;
    undefined4 uStack76;
    undefined8 local_48;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    lVar1 = FUN_1402070a0(*(undefined4 *)(param_1 + 0x40));
    if (lVar1 != 0) {
        lVar2 = FUN_1405acd50();
        if ((lVar2 == 0) || (lVar2 = FUN_140207d60(), lVar2 == 0)) {
            piVar6 = (int *)(lVar1 + 0x24);
            lVar1 = 4;
            do {
                if ((*piVar6 != 0) && (puVar3 = (undefined4 *)FUN_14024b540(), puVar3 != (undefined4 *)0x0))
                {
                    if ((*(byte *)(param_1 + 100) & 1) != 0) {
                        local_a8 = *puVar3;
                        uStack164 = puVar3[1];
                        uStack160 = puVar3[2];
                        uStack156 = puVar3[3];
                        local_98 = puVar3[4];
                        uStack148 = puVar3[5];
                        uStack144 = puVar3[6];
                        uStack140 = puVar3[7];
                        local_88 = puVar3[8];
                        uStack132 = puVar3[9];
                        uStack128 = puVar3[10];
                        uStack124 = puVar3[0xb];
                        local_78 = puVar3[0xc];
                        uStack116 = puVar3[0xd];
                        uStack112 = puVar3[0xe];
                        uStack108 = puVar3[0xf];
                        local_68 = puVar3[0x10];
                        auStack100[0] = puVar3[0x11];
                        auStack100[1] = puVar3[0x12];
                        auStack100[2] = puVar3[0x13];
                        auStack100[3] = puVar3[0x14];
                        uStack84 = puVar3[0x15];
                        uStack80 = puVar3[0x16];
                        uStack76 = puVar3[0x17];
                        local_48 = *(undefined8 *)(puVar3 + 0x18);
                        puVar3 = auStack100;
                        uVar5 = 0;
                        do {
                            uVar5 = uVar5 + 1;
                            *puVar3 = 0;
                            puVar3 = puVar3 + 1;
                        } while (uVar5 < 4);
                    }
                    if (DAT_140c65878 != 0) {
                        FUN_140350d70();
                    }
                }
                piVar6 = piVar6 + 1;
                lVar1 = lVar1 + -1;
            } while (lVar1 != 0);
        }
        else {
            piVar6 = (int *)(lVar2 + 0x2c);
            lVar1 = 4;
            do {
                if (*piVar6 != 0) {
                    puVar3 = (undefined4 *)FUN_14024b540();
                    puVar4 = (undefined4 *)FUN_14024b540();
                    if (puVar4 == (undefined4 *)0x0) {
                        if (puVar3 != (undefined4 *)0x0) {
                            local_a8 = *puVar3;
                            uStack164 = puVar3[1];
                            uStack160 = puVar3[2];
                            uStack156 = puVar3[3];
                            local_98 = puVar3[4];
                            uStack148 = puVar3[5];
                            uStack144 = puVar3[6];
                            uStack140 = puVar3[7];
                            local_88 = puVar3[8];
                            uStack132 = puVar3[9];
                            uStack128 = puVar3[10];
                            uStack124 = puVar3[0xb];
                            local_78 = puVar3[0xc];
                            uStack116 = puVar3[0xd];
                            uStack112 = puVar3[0xe];
                            uStack108 = puVar3[0xf];
                            local_68 = puVar3[0x10];
                            auStack100[0] = puVar3[0x11];
                            auStack100[1] = puVar3[0x12];
                            auStack100[2] = puVar3[0x13];
                            auStack100[3] = puVar3[0x14];
                            uStack84 = puVar3[0x15];
                            uStack80 = puVar3[0x16];
                            uStack76 = puVar3[0x17];
                            local_48 = *(undefined8 *)(puVar3 + 0x18);
                        }
                    }
                    else {
                        local_a8 = *puVar4;
                        uStack164 = puVar4[1];
                        uStack160 = puVar4[2];
                        uStack156 = puVar4[3];
                        local_98 = puVar4[4];
                        uStack148 = puVar4[5];
                        uStack144 = puVar4[6];
                        uStack140 = puVar4[7];
                        local_88 = puVar4[8];
                        uStack132 = puVar4[9];
                        uStack128 = puVar4[10];
                        uStack124 = puVar4[0xb];
                        local_78 = puVar4[0xc];
                        uStack116 = puVar4[0xd];
                        uStack112 = puVar4[0xe];
                        uStack108 = puVar4[0xf];
                        local_68 = puVar4[0x10];
                        auStack100[0] = puVar4[0x11];
                        auStack100[1] = puVar4[0x12];
                        auStack100[2] = puVar4[0x13];
                        auStack100[3] = puVar4[0x14];
                        uStack84 = puVar4[0x15];
                        uStack80 = puVar4[0x16];
                        uStack76 = puVar4[0x17];
                        local_48 = *(undefined8 *)(puVar4 + 0x18);
                        if (puVar3 != (undefined4 *)0x0) {
                            local_a8 = *puVar3;
                        }
                    }
                    if ((*(byte *)(param_1 + 100) & 1) != 0) {
                        puVar3 = auStack100;
                        uVar5 = 0;
                        do {
                            uVar5 = uVar5 + 1;
                            *puVar3 = 0;
                            puVar3 = puVar3 + 1;
                        } while (uVar5 < 4);
                    }
                    if (DAT_140c65878 != 0) {
                        FUN_140350d70();
                    }
                }
                piVar6 = piVar6 + 1;
                lVar1 = lVar1 + -1;
            } while (lVar1 != 0);
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack200);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1405af080(longlong param_1,undefined8 param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined auVar7 [16];
    undefined auVar8 [16];
    undefined local_38 [16];

    lVar3 = FUN_1402074e0(*(undefined4 *)(param_1 + 0x44));
    if (lVar3 == 0) {
        return 0;
    }
    lVar4 = FUN_1402070a0(*(undefined4 *)(param_1 + 0x40));
    if (lVar4 != 0) {
        uVar1 = FUN_1404bc060(DAT_140c659f0,0);
        lVar5 = FUN_140205fa0(uVar1);
        if (lVar5 != 0) {
            uVar6 = FUN_14024c200(*(undefined4 *)(lVar5 + 4));
            if (uVar6 != 0) {
                lVar5 = 0;
                if (*(longlong *)(param_1 + 0x100) - *(longlong *)(param_1 + 0xf8) >> 3 != 0) {
                    lVar5 = **(longlong **)(param_1 + 0xf8);
                }
                lVar5 = FUN_140206c60(*(undefined4 *)(lVar5 + 4));
                if ((lVar5 == 0) ||
                    (lVar5 = FUN_14024acc0(*(undefined4 *)
                            (lVar5 + 0x10 + (ulonglong)*(uint *)(lVar4 + 0x14) * 4)),
                            lVar5 == 0)) {
                    uVar6 = 0;
                }
                else {
                    auVar8 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar5 + 0x2c),
                                                    (float)(int)*(undefined8 *)(lVar5 + 0x28))),_DAT_140b7b490
                    );
                    auVar7 = divps(ZEXT816(CONCAT44((float)*(int *)(uVar6 + 0xc),
                                                    (float)(int)*(undefined8 *)(uVar6 + 8))),_DAT_140b7b490);
                    local_38._0_8_ =
                            CONCAT44((float)(*(int *)(uVar6 + 0x18) - *(int *)(lVar5 + 0x38)) * _DAT_140c4a0e8 +
                                     0.0,(SUB164(auVar7,0) - 0.5) * 65536.0 - (SUB164(auVar8,0) - 0.5) * 65536.0)
                            ;
                    local_38 = ZEXT1216(CONCAT48((SUB164(auVar7 >> 0x20,0) - 0.5) * 65536.0 -
                                                 (SUB164(auVar8 >> 0x20,0) - 0.5) * 65536.0,local_38._0_8_));
                    iVar2 = FUN_1405a97c0(param_2,local_38,
                                          *(undefined4 *)
                                                  (lVar3 + 0x14 + (ulonglong)*(uint *)(lVar4 + 0x14) * 4));
                    uVar6 = (ulonglong)(iVar2 != 0);
                }
            }
            return uVar6;
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405af260(longlong param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong *plVar3;
    int iVar4;
    undefined4 uVar5;
    longlong *plVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong **pplVar10;
    ulonglong uVar11;
    int iVar12;
    int iVar13;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    undefined auVar14 [16];
    float fVar15;
    float fVar16;
    undefined4 uVar17;
    float fVar18;
    undefined4 uVar19;
    float fVar20;
    undefined4 uVar21;
    float fVar22;
    float fVar23;
    uint uVar24;
    float fVar25;
    undefined auStack904 [32];
    longlong **local_368;
    undefined8 local_360;
    longlong *local_358 [2];
    undefined8 local_348;
    undefined8 uStack832;
    int local_338;
    uint local_334;
    int local_330;
    int local_32c;
    int local_328;
    longlong *local_320;
    float local_318;
    float fStack788;
    float fStack784;
    undefined4 uStack780;
    float local_308;
    float fStack772;
    float fStack768;
    undefined4 uStack764;
    float local_2f8;
    float fStack756;
    float fStack752;
    undefined4 uStack748;
    undefined local_2e8 [16];
    float local_2d8;
    float fStack724;
    float fStack720;
    float fStack716;
    float fStack712;
    float fStack708;
    float fStack704;
    float fStack700;
    float local_2b8;
    float fStack692;
    float fStack688;
    float fStack684;
    ulonglong local_2a8;
    undefined8 uStack672;
    undefined *local_298;
    float *local_290;
    undefined8 local_288;
    undefined8 local_280;
    float *local_278;
    float *local_270;
    longlong *local_268;
    undefined8 local_260;
    undefined local_258 [64];
    float *local_218;
    float *local_210;
    float local_208;
    float fStack516;
    float fStack512;
    float fStack508;
    undefined local_1f8 [16];
    undefined local_1e8 [16];
    undefined local_1d8 [16];
    undefined4 local_1c8;
    undefined4 local_1c4;
    undefined4 local_1c0;
    undefined local_1b8 [16];
    undefined local_1a8 [16];
    undefined local_198 [16];
    undefined4 local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    float *local_178;
    float *local_170;
    undefined local_168 [64];
    undefined *local_128;
    float *local_120;
    ulonglong local_d8;

    local_d8 = DAT_140c0f7b0 ^ (ulonglong)auStack904;
    plVar2 = *(longlong **)(DAT_140c65898 + 0x7248);
    local_268 = plVar2;
    plVar6 = (longlong *)(**(code **)(*plVar2 + 0x20))(plVar2);
    pplVar10 = (longlong **)(param_1 + 0x120);
    plVar3 = *pplVar10;
    if ((plVar3 == (longlong *)0x0) &&
        (pplVar1 = (longlong **)(param_1 + 0x128), *pplVar1 == (longlong *)0x0)) {
        iVar4 = (**(code **)(*plVar6 + 0x28))
                (plVar6,
                 L"Art\\FX\\Model\\Props\\CylinderForcefield_AQU\\CylinderForcefield_100_AQU.m3"
                        ,pplVar10,0);
        if (-1 < iVar4) {
            plVar3 = *pplVar10;
            uVar11 = 0;
            fVar25 = 1.0;
            if (plVar3 != (longlong *)0x0) {
                (**(code **)(*plVar3 + 0x288))(plVar3,&LAB_1405b0190,param_1);
                plVar3 = *pplVar10;
                uVar5 = FUN_1401ae6f0(0,0xffffffff);
                local_290 = (float *)0x3f800000;
                local_288 = 0;
                local_280 = 0;
                local_298 = (undefined *)CONCAT44(uVar5,0x536);
                (**(code **)(*plVar3 + 0x248))(plVar3,0,&local_298);
            }
            lVar7 = FUN_1402070a0();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x18) != 0)) && (lVar7 = FUN_14024b980(), lVar7 != 0))
            {
                uStack780 = 0;
                fVar15 = *(float *)(lVar7 + 0xc) - 0.0;
                fVar16 = *(float *)(lVar7 + 0x14) - 0.0;
                uStack672 = SUB168(CONCAT412(fVar25,CONCAT48(fVar16,CONCAT44(fVar16,fVar15))) >> 0x40,0);
                local_2a8 = (ulonglong)(uint)fVar15 |
                                             SUB128(CONCAT84(SUB168((ZEXT1216(ZEXT412(0) &
                                                                              (undefined  [12])0xffffffffffffffff) << 0x20)
                                                                            >> 0x40,0),*(float *)(lVar7 + 0x10) - 6.0),0) << 0x20;
                fVar16 = fRam0000000140c78454 * 2.0;
                fVar15 = fRam0000000140c78458 * 2.0;
                local_2d8 = _DAT_140c78410;
                fStack724 = fRam0000000140c78414;
                fStack720 = fRam0000000140c78418;
                fStack716 = fRam0000000140c7841c;
                fStack712 = _DAT_140c78420;
                fStack708 = fRam0000000140c78424;
                fStack704 = fRam0000000140c78428;
                fStack700 = fRam0000000140c7842c;
                fStack756 = _DAT_140c78450 * 2.0 * fRam0000000140c7845c;
                local_2b8 = _DAT_140c78430;
                fStack692 = fRam0000000140c78434;
                fStack688 = fRam0000000140c78438;
                fStack684 = fRam0000000140c7843c;
                fStack784 = fVar15 * _DAT_140c78450 - fVar16 * fRam0000000140c7845c;
                local_318 = (fVar25 - fVar16 * fRam0000000140c78454) - fVar15 * fRam0000000140c78458;
                fStack768 = fVar15 * fRam0000000140c78454 + fStack756;
                local_308 = fVar16 * _DAT_140c78450 - fVar15 * fRam0000000140c7845c;
                fStack788 = fVar16 * _DAT_140c78450 + fVar15 * fRam0000000140c7845c;
                fStack752 = fVar25 - _DAT_140c78450 * 2.0 * _DAT_140c78450;
                fStack772 = fStack752 - fVar15 * fRam0000000140c78458;
                local_2e8._0_12_ = ZEXT412(0);
                local_2e8 = CONCAT412(0x3f800000,local_2e8._0_12_);
                local_348 = (float *)local_1b8;
                fStack756 = fVar15 * fRam0000000140c78454 - fStack756;
                uStack832 = &local_318;
                local_1c8 = 0x3f99999a;
                local_1c0 = 0x3f99999a;
                local_1b8 = CONCAT412(fRam0000000140c7841c * 1.2,
                                      CONCAT48(fRam0000000140c78418 * 1.2,
                                               CONCAT44(fRam0000000140c78414 * 1.2,_DAT_140c78410 * 1.2)));
                uStack764 = 0;
                local_1c4 = 0x3f4ccccd;
                fStack752 = fStack752 - fVar16 * fRam0000000140c78454;
                local_2f8 = fVar15 * _DAT_140c78450 + fVar16 * fRam0000000140c7845c;
                uStack748 = 0;
                local_1a8 = CONCAT412(fRam0000000140c7842c * 0.8,
                                      CONCAT48(fRam0000000140c78428 * 0.8,
                                               CONCAT44(fRam0000000140c78424 * 0.8,_DAT_140c78420 * 0.8)));
                local_188 = _DAT_140c78440;
                uStack388 = uRam0000000140c78444;
                uStack384 = uRam0000000140c78448;
                uStack380 = uRam0000000140c7844c;
                local_198 = CONCAT412(fRam0000000140c7843c * 1.2,
                                      CONCAT48(fRam0000000140c78438 * 1.2,
                                               CONCAT44(fRam0000000140c78434 * 1.2,_DAT_140c78430 * 1.2)));
                local_218 = local_348;
                local_210 = uStack832;
                FUN_1401afb10(&local_218,&local_208);
                local_348 = &local_208;
                uStack832 = &local_2d8;
                local_178 = local_348;
                local_170 = uStack832;
                FUN_1401afb10(&local_178,local_258);
                local_360 = 0;
                local_320 = (longlong *)0x0;
                local_368 = pplVar1;
                iVar4 = (**(code **)(*plVar2 + 200))(plVar2,local_258,*pplVar10,&local_320);
                if (-1 < iVar4) {
                    (**(code **)(**pplVar1 + 0x128))(*pplVar1,0);
                    local_334 = 0;
                    if (*(int *)(param_1 + 0x110) != 0) {
                        uVar24 = 0x80000000;
                        fVar15 = 0.5;
                        local_32c = uStack832._4_4_;
                        local_338 = (int)(float)local_348;
                        local_330 = (int)(float)uStack832;
                        local_328 = (int)local_348._4_4_;
                        uVar8 = uVar11;
                        do {
                            uVar9 = uVar11;
                            if (uVar8 < (ulonglong)
                                    (*(longlong *)(param_1 + 0x100) - *(longlong *)(param_1 + 0xf8) >> 3)) {
                                uVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0xf8) + uVar8 * 8);
                            }
                            lVar7 = FUN_140206c60(*(undefined4 *)(uVar9 + 4));
                            if ((lVar7 != 0) && (*(int *)(lVar7 + 0xd0) == 2)) {
                                lVar7 = FUN_140205fa0();
                                uVar8 = uVar11;
                                if ((lVar7 != 0) && (lVar7 = FUN_14024c200(), lVar7 != 0)) {
                                    local_328 = *(int *)(lVar7 + 0xc);
                                    local_348._0_4_ = *(float *)(lVar7 + 8);
                                    local_32c = *(int *)(lVar7 + 0x14);
                                    local_330 = *(int *)(lVar7 + 0x10);
                                    local_338 = (int)(float)local_348;
                                }
                                do {
                                    local_358[0] = (longlong *)0x0;
                                    iVar4 = (**(code **)(*plVar6 + 0x28))
                                            (plVar6,
                                             L"Art\\FX\\Model\\Props\\Forcefield_AQU\\Forcefield_01_AQU.m3",
                                             local_358,0);
                                    if (iVar4 < 0) {
                                        LAB_1405afcb3:
                                        if (local_358[0] != (longlong *)0x0) {
                                            (**(code **)(*local_358[0] + 8))();
                                        }
                                        goto LAB_1405afc79;
                                    }
                                    if (local_358[0] != (longlong *)0x0) {
                                        (**(code **)(*local_358[0] + 0x288))(local_358[0],&LAB_1405b0190,param_1);
                                        plVar2 = local_358[0];
                                        fStack724 = (float)FUN_1401ae6f0(0,0xffffffff);
                                        local_2d8 = 1.869332e-42;
                                        fStack720 = 1.0;
                                        fStack716 = 0.0;
                                        fStack712 = 0.0;
                                        fStack708 = 0.0;
                                        fStack704 = 0.0;
                                        fStack700 = 0.0;
                                        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_2d8);
                                        pplVar10 = *(longlong ***)(param_1 + 0x140);
                                        if (pplVar10 == *(longlong ***)(param_1 + 0x148)) {
                                            FUN_1405b1d60(param_1 + 0x130,pplVar10,local_358);
                                        }
                                        else {
                                            if ((pplVar10 != (longlong **)0x0) &&
                                                (*pplVar10 = local_358[0], local_358[0] != (longlong *)0x0)) {
                                                (**(code **)*local_358[0])(local_358[0]);
                                            }
                                            *(longlong *)(param_1 + 0x140) = *(longlong *)(param_1 + 0x140) + 8;
                                        }
                                    }
                                    plVar2 = local_358[0];
                                    iVar13 = local_330 - (int)(float)local_348;
                                    iVar12 = local_32c - local_328;
                                    auVar14 = divps(ZEXT816(CONCAT44((float)local_328,(float)local_338)),
                                                    _DAT_140b7b490);
                                    fVar16 = (float)iVar12 * _DAT_140c4a148 * fVar15;
                                    fVar23 = 0.0;
                                    local_318 = _DAT_140c78390;
                                    fStack788 = fRam0000000140c78394;
                                    fStack784 = fRam0000000140c78398;
                                    uStack780 = uRam0000000140c7839c;
                                    local_308 = _DAT_140c783a0;
                                    fStack772 = fRam0000000140c783a4;
                                    fStack768 = fRam0000000140c783a8;
                                    uStack764 = uRam0000000140c783ac;
                                    fVar18 = (float)iVar13 * _DAT_140c4a148 * fVar15 +
                                             (SUB164(auVar14,0) - 0.5) * 65536.0;
                                    fVar20 = -714.0;
                                    fVar22 = fVar16 + (SUB164(auVar14 >> 0x20,0) - 0.5) * 65536.0;
                                    local_2f8 = _DAT_140c783b0;
                                    fStack756 = fRam0000000140c783b4;
                                    fStack752 = fRam0000000140c783b8;
                                    uStack748 = uRam0000000140c783bc;
                                    local_348 = (float *)0x3f8000003fa66666;
                                    uStack832 = (float *)0x3fa66666;
                                    local_2e8._0_12_ =
                                            CONCAT48(uRam0000000140c783c8,CONCAT44(uRam0000000140c783c4,_DAT_140c783c0));
                                    local_2e8 = CONCAT412(uRam0000000140c783cc,local_2e8._0_12_);
                                    iVar4 = (int)uVar8;
                                    uVar5 = _DAT_140c78440;
                                    uVar17 = uRam0000000140c78444;
                                    uVar19 = uRam0000000140c78448;
                                    uVar21 = uRam0000000140c7844c;
                                    if (iVar4 == 0) {
                                        FUN_1408fe3d0();
                                        fVar16 = extraout_XMM0_Da;
                                        FUN_1408fc950();
                                        fStack788 = 0.0;
                                        uStack780 = 0;
                                        fStack756 = 0.0;
                                        uStack748 = 0;
                                        fStack784 = (float)((uint)fVar16 ^ uVar24);
                                        local_2e8 = CONCAT412(uVar21,CONCAT48(uVar19,CONCAT44(uVar17,uVar5)));
                                        local_308 = 0.0;
                                        fStack772 = 1.0;
                                        fStack768 = 0.0;
                                        uStack764 = 0;
                                        fVar18 = fVar18 - fVar23;
                                        fVar20 = fVar20 - 0.0;
                                        fVar22 = fVar22 - 0.0;
                                        local_318 = extraout_XMM0_Da_00;
                                        local_2f8 = fVar16;
                                        fStack752 = extraout_XMM0_Da_00;
                                        if (iVar13 != iVar12) {
                                            local_348 = (float *)0x3f80000040266666;
                                            uStack832 = (float *)0x40266666;
                                        }
                                    }
                                    else if (iVar4 == 1) {
                                        fVar18 = fVar18 - 0.0;
                                        fVar20 = -714.0;
                                        fVar22 = fVar22 - fVar16;
                                    }
                                    else if (iVar4 == 2) {
                                        FUN_1408fe3d0();
                                        fVar16 = extraout_XMM0_Da_01;
                                        FUN_1408fc950();
                                        fStack788 = 0.0;
                                        uStack780 = 0;
                                        fStack756 = 0.0;
                                        uStack748 = 0;
                                        fStack784 = (float)((uint)fVar16 ^ uVar24);
                                        local_2e8 = CONCAT412(uVar21,CONCAT48(uVar19,CONCAT44(uVar17,uVar5)));
                                        local_308 = 0.0;
                                        fStack772 = 1.0;
                                        fStack768 = 0.0;
                                        uStack764 = 0;
                                        fVar18 = fVar23 + fVar18;
                                        fVar20 = fVar20 + 0.0;
                                        fVar22 = fVar22 + 0.0;
                                        local_318 = extraout_XMM0_Da_02;
                                        local_2f8 = fVar16;
                                        fStack752 = extraout_XMM0_Da_02;
                                        if (iVar13 != iVar12) {
                                            local_348 = (float *)0x3f80000040266666;
                                            uStack832 = (float *)0x40266666;
                                        }
                                    }
                                    else if (iVar4 == 3) {
                                        fVar18 = fVar18 + 0.0;
                                        fVar20 = -714.0;
                                        fVar22 = fVar16 + fVar22;
                                    }
                                    local_278 = &local_208;
                                    local_270 = &local_318;
                                    local_2d8 = _DAT_140c78410;
                                    fStack724 = fRam0000000140c78414;
                                    fStack720 = fRam0000000140c78418;
                                    fStack716 = fRam0000000140c7841c;
                                    fStack712 = _DAT_140c78420;
                                    fStack708 = fRam0000000140c78424;
                                    fStack704 = fRam0000000140c78428;
                                    fStack700 = fRam0000000140c7842c;
                                    local_2b8 = _DAT_140c78430;
                                    fStack692 = fRam0000000140c78434;
                                    fStack688 = fRam0000000140c78438;
                                    fStack684 = fRam0000000140c7843c;
                                    local_1d8 = CONCAT412(uVar21,CONCAT48(uVar19,CONCAT44(uVar17,uVar5)));
                                    uStack672 = SUB168(CONCAT412(fVar25,CONCAT48(fVar22 - 0.0,
                                                                                 CONCAT44(fVar22 - 0.0,fVar18 - 0.0)))
                                                               >> 0x40,0);
                                    local_2a8 = CONCAT44(fVar20 - 2.0,fVar18 - 0.0);
                                    local_218 = local_348;
                                    local_208 = _DAT_140c78410 * (float)local_348;
                                    fStack516 = fRam0000000140c78414 * (float)local_348;
                                    fStack512 = fRam0000000140c78418 * (float)local_348;
                                    fStack508 = fRam0000000140c7841c * (float)local_348;
                                    local_210 = (float *)((ulonglong)local_210 & 0xffffffff00000000 |
                                                          (ulonglong)uStack832 & 0xffffffff);
                                    local_1f8 = CONCAT412(fRam0000000140c7842c * local_348._4_4_,
                                                          CONCAT48(fRam0000000140c78428 * local_348._4_4_,
                                                                   CONCAT44(fRam0000000140c78424 * local_348._4_4_,
                                                                            _DAT_140c78420 * local_348._4_4_)));
                                    local_1e8 = CONCAT412(fRam0000000140c7843c * (float)uStack832,
                                                          CONCAT48(fRam0000000140c78438 * (float)uStack832,
                                                                   CONCAT44(fRam0000000140c78434 * (float)uStack832,
                                                                            _DAT_140c78430 * (float)uStack832)));
                                    local_178 = local_278;
                                    local_170 = local_270;
                                    FUN_1401afb10(&local_178,local_168);
                                    local_298 = local_168;
                                    local_290 = &local_2d8;
                                    local_128 = local_298;
                                    local_120 = local_290;
                                    FUN_1401afb10(&local_128,&local_1c8);
                                    local_368 = &local_320;
                                    local_360 = 0;
                                    local_260 = 0;
                                    iVar12 = (**(code **)(*local_268 + 200))(local_268,&local_1c8,plVar2);
                                    if (iVar12 < 0) goto LAB_1405afcb3;
                                    pplVar10 = *(longlong ***)(param_1 + 0x160);
                                    if (pplVar10 == *(longlong ***)(param_1 + 0x168)) {
                                        FUN_1400b9430(param_1 + 0x150,pplVar10,&local_320);
                                    }
                                    else {
                                        if (pplVar10 != (longlong **)0x0) {
                                            *pplVar10 = local_320;
                                        }
                                        *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + 8;
                                    }
                                    if (local_358[0] != (longlong *)0x0) {
                                        (**(code **)(*local_358[0] + 8))();
                                    }
                                    uVar8 = (ulonglong)(iVar4 + 1U);
                                    local_348._0_4_ = (float)local_338;
                                } while (iVar4 + 1U < 4);
                            }
                            local_334 = local_334 + 1;
                            uVar8 = (ulonglong)local_334;
                        } while (local_334 < *(uint *)(param_1 + 0x110));
                    }
                }
            }
        }
    }
    else {
        (**(code **)(*plVar3 + 0x288))(plVar3,&LAB_1405b0190,param_1);
        plVar2 = *pplVar10;
        uVar24 = (**(code **)(DAT_140c77890 + 0x18))(&DAT_140c77890);
        local_2d8 = 1.869332e-42;
        uVar5 = 0;
        uVar17 = 0x3df00000;
        uVar19 = 0;
        uVar21 = 0x41f00000;
        fStack716 = 0.0;
        fStack712 = 0.0;
        fStack708 = 0.0;
        fStack704 = 0.0;
        fStack700 = 0.0;
        fStack724 = (float)(longlong)((double)(ulonglong)uVar24 * 2.328306436538696e-10 * 4294967296.0);
        fStack720 = 1.0;
        (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_2d8);
        pplVar10 = *(longlong ***)(param_1 + 0x138);
        if (pplVar10 != *(longlong ***)(param_1 + 0x140)) {
            do {
                plVar2 = *pplVar10;
                if (plVar2 != (longlong *)0x0) {
                    (**(code **)*plVar2)(plVar2);
                }
                (**(code **)(*plVar2 + 0x288))(plVar2,&LAB_1405b0190,param_1);
                uVar24 = (**(code **)(DAT_140c77890 + 0x18))(&DAT_140c77890);
                local_2d8 = 1.869332e-42;
                fStack720 = 2.0;
                fStack716 = 0.0;
                fStack712 = 0.0;
                fStack708 = 0.0;
                fStack704 = 0.0;
                fStack700 = 0.0;
                fStack724 = (float)(longlong)
                        ((double)(ulonglong)uVar24 * (double)CONCAT44(uVar17,uVar5) *
                         (double)CONCAT44(uVar21,uVar19));
                (**(code **)(*plVar2 + 0x248))(plVar2,0,&local_2d8);
                (**(code **)(*plVar2 + 8))(plVar2);
                pplVar10 = pplVar10 + 1;
            } while (pplVar10 != *(longlong ***)(param_1 + 0x140));
        }
    }
    LAB_1405afc79:
    FUN_1407db4f0(local_d8 ^ (ulonglong)auStack904);
    return;
}



void FUN_1405afe10(longlong param_1)

{
    longlong *plVar1;
    uint uVar2;
    longlong **pplVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 local_48;
    undefined4 local_44;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;

    uVar4 = 0;
    uVar5 = 0x3df00000;
    plVar1 = *(longlong **)(param_1 + 0x120);
    uVar6 = 0;
    uVar7 = 0x41f00000;
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x288))(plVar1,&LAB_1405b0220,param_1);
        plVar1 = *(longlong **)(param_1 + 0x120);
        uVar2 = (**(code **)(DAT_140c77890 + 0x18))(&DAT_140c77890);
        local_48 = 0x455;
        local_40 = 0x40000000;
        local_38 = 0;
        local_30 = 0;
        local_44 = (undefined4)
                (longlong)
                ((double)(ulonglong)uVar2 * (double)CONCAT44(uVar5,uVar4) *
                 (double)CONCAT44(uVar7,uVar6));
        (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_48);
    }
    pplVar3 = *(longlong ***)(param_1 + 0x138);
    if (pplVar3 != *(longlong ***)(param_1 + 0x140)) {
        do {
            plVar1 = *pplVar3;
            if (plVar1 != (longlong *)0x0) {
                (**(code **)*plVar1)(plVar1);
            }
            (**(code **)(*plVar1 + 0x288))(plVar1,0,param_1);
            uVar2 = (**(code **)(DAT_140c77890 + 0x18))(&DAT_140c77890);
            local_48 = 0x457;
            local_40 = 0x40000000;
            local_38 = 0;
            local_30 = 0;
            local_44 = (undefined4)
                    (longlong)
                    ((double)(ulonglong)uVar2 * (double)CONCAT44(uVar5,uVar4) *
                     (double)CONCAT44(uVar7,uVar6));
            (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_48);
            (**(code **)(*plVar1 + 8))(plVar1);
            pplVar3 = pplVar3 + 1;
        } while (pplVar3 != *(longlong ***)(param_1 + 0x140));
    }
    return;
}



undefined8 FUN_1405aff90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    float fVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    float fVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
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
    undefined local_58 [80];

    if (*(int *)(param_1 + 0x30) != 3) {
        lVar2 = *(longlong *)(DAT_140c65898 + 0x78);
        uVar6 = *(undefined4 *)(lVar2 + 0x11e0);
        fVar1 = *(float *)(lVar2 + 0x11e4);
        uVar7 = *(undefined4 *)(lVar2 + 0x11e8);
        lVar2 = FUN_140200220(1099);
        if (lVar2 == 0) {
            fVar5 = -300.0;
        }
        else {
            fVar5 = *(float *)(lVar2 + 0x1c);
        }
        if (*(longlong **)(param_1 + 0x118) == (longlong *)0x0) {
            puVar3 = (undefined4 *)FUN_1405b0600(param_1,local_58,param_3,param_4,uVar6,uVar7);
        }
        else {
            puVar4 = (undefined4 *)(**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
            local_d8 = *puVar4;
            uStack212 = puVar4[1];
            uStack208 = puVar4[2];
            uStack204 = puVar4[3];
            local_c8 = puVar4[4];
            uStack196 = puVar4[5];
            uStack192 = puVar4[6];
            uStack188 = puVar4[7];
            local_b8 = puVar4[8];
            uStack180 = puVar4[9];
            uStack176 = puVar4[10];
            uStack172 = puVar4[0xb];
            puVar3 = &local_d8;
            local_a8 = puVar4[0xc];
            uStack164 = puVar4[0xd];
            uStack160 = puVar4[0xe];
            uStack156 = puVar4[0xf];
        }
        local_98 = *puVar3;
        uStack148 = puVar3[1];
        uStack144 = puVar3[2];
        uStack140 = puVar3[3];
        local_88 = puVar3[4];
        uStack132 = puVar3[5];
        uStack128 = puVar3[6];
        uStack124 = puVar3[7];
        if (fVar1 <= (float)puVar3[0xd] + fVar5) {
            return 1;
        }
    }
    return 0;
}



void FUN_1405b0090(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong **pplVar3;

    if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x128) + 8))();
        *(undefined8 *)(param_1 + 0x128) = 0;
    }
    if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x120) + 8))();
        *(undefined8 *)(param_1 + 0x120) = 0;
    }
    pplVar3 = *(longlong ***)(param_1 + 0x138);
    if (pplVar3 != *(longlong ***)(param_1 + 0x140)) {
        do {
            if (*pplVar3 != (longlong *)0x0) {
                (**(code **)(**pplVar3 + 8))();
                *pplVar3 = (longlong *)0x0;
            }
            pplVar3 = pplVar3 + 1;
        } while (pplVar3 != *(longlong ***)(param_1 + 0x140));
    }
    FUN_1405b1c90(param_1 + 0x130,*(undefined8 *)(param_1 + 0x138),*(undefined8 *)(param_1 + 0x140));
    pplVar3 = *(longlong ***)(param_1 + 0x158);
    if (pplVar3 != *(longlong ***)(param_1 + 0x160)) {
        do {
            if (*pplVar3 != (longlong *)0x0) {
                (**(code **)(**pplVar3 + 8))();
                *pplVar3 = (longlong *)0x0;
            }
            pplVar3 = pplVar3 + 1;
        } while (pplVar3 != *(longlong ***)(param_1 + 0x160));
    }
    lVar1 = *(longlong *)(param_1 + 0x160);
    lVar2 = *(longlong *)(param_1 + 0x158);
    FUN_1407db590(lVar2,lVar1,0);
    *(longlong *)(param_1 + 0x160) = *(longlong *)(param_1 + 0x160) + (lVar1 - lVar2 >> 3) * -8;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405b0240(longlong param_1)

{
    int iVar1;
    undefined2 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 uVar5;
    undefined auStack424 [32];
    undefined4 local_188;
    longlong *local_180;
    undefined8 local_178;
    undefined4 local_168 [2];
    undefined8 local_160;
    longlong local_158;
    undefined *local_150;
    undefined **local_148 [24];
    undefined local_88 [16];
    undefined2 *local_78;
    undefined local_68 [80];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    if (((*(int *)(param_1 + 8) != *(int *)(DAT_140c65898 + 0x7500)) ||
         (*(longlong *)(param_1 + 0x10) != *(longlong *)(DAT_140c65898 + 0x7508))) &&
        (*(longlong *)(param_1 + 0x1e8) == 0)) {
        if (*(longlong *)(param_1 + 0x1e0) == 0) {
            uVar5 = 0;
            local_168[0] = *(undefined4 *)(DAT_140c635f0 + 0x1680);
            local_160 = *(undefined8 *)(param_1 + 0x20);
            local_178 = 0;
            local_150 = &DAT_1405b0b60;
            local_180 = &local_158;
            local_188 = 0x21;
            local_158 = param_1;
            iVar1 = FUN_1403f82f0(DAT_140c65898,4,local_168,local_68);
            if (iVar1 == 0) goto LAB_1405b04bb;
            FUN_1400b7090(local_148,0x856d0);
            local_148[0] = &PTR_FUN_140b69230;
            local_88 = ZEXT816(0);
            local_78 = (undefined2 *)0x0;
            puVar2 = (undefined2 *)FUN_14018b280(0x10,0);
            local_78 = puVar2 + 8;
            local_88 = CONCAT88(puVar2,puVar2);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            lVar3 = FUN_14018b280(0x60);
            uVar4 = uVar5;
            if (lVar3 != 0) {
                uVar4 = FUN_1404ddb40(lVar3,*(undefined8 *)(param_1 + 0x38));
            }
            FUN_1400b7480(local_148,uVar4);
            lVar3 = FUN_14018b280(0x60);
            if (lVar3 != 0) {
                uVar5 = FUN_1404ddb40(lVar3,local_68);
            }
            FUN_1400b7480(local_148,uVar5);
            uVar5 = FUN_14018e9c0(local_68);
            *(undefined8 *)(param_1 + 0x1e0) = uVar5;
        }
        else {
            FUN_1400b7090(local_148,0x856d0);
            uVar5 = 0;
            local_78 = (undefined2 *)0x0;
            local_88 = ZEXT816(0);
            local_148[0] = &PTR_FUN_140b69230;
            puVar2 = (undefined2 *)FUN_14018b280(0x10,0);
            local_78 = puVar2 + 8;
            local_88 = CONCAT88(puVar2,puVar2);
            if (puVar2 != (undefined2 *)0x0) {
                *puVar2 = 0;
            }
            lVar3 = FUN_14018b280(0x60);
            uVar4 = uVar5;
            if (lVar3 != 0) {
                uVar4 = FUN_1404ddb40(lVar3,*(undefined8 *)(param_1 + 0x38));
            }
            FUN_1400b7480(local_148,uVar4);
            lVar3 = FUN_14018b280(0x60);
            if (lVar3 != 0) {
                uVar5 = FUN_1404ddb40(lVar3,*(undefined8 *)(param_1 + 0x1e0));
            }
            FUN_1400b7480(local_148,uVar5);
        }
        lVar3 = FUN_1400b7660(local_148);
        uVar5 = FUN_14018e9c0(*(undefined8 *)(lVar3 + 8));
        *(undefined8 *)(param_1 + 0x1e8) = uVar5;
        if (local_88._0_8_ != 0) {
            FUN_14018b900(local_88._0_8_,0);
        }
        FUN_1400b7390(local_148);
    }
    LAB_1405b04bb:
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack424);
    return;
}



void FUN_1405b04e0(longlong param_1)

{
    undefined auVar1 [16];
    int iVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined auStack200 [32];
    undefined4 local_a8;
    longlong *local_a0;
    undefined8 local_98;
    undefined4 local_88 [2];
    undefined8 local_80;
    longlong local_78;
    undefined *local_70;
    short local_68 [40];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
        lVar4 = 0;
        local_88[0] = *(undefined4 *)(DAT_140c635f0 + 0x1680);
        local_80 = *(undefined8 *)(param_1 + 0x20);
        local_98 = 0;
        local_70 = &DAT_1405b0b60;
        local_a0 = &local_78;
        local_a8 = 0x21;
        local_78 = param_1;
        iVar2 = FUN_1403f82f0(DAT_140c65898,4,local_88,local_68);
        if (iVar2 != 0) {
            while (local_68[0] != 0) {
                lVar4 = lVar4 + 1;
                local_68[0] = local_68[lVar4];
            }
            auVar1 = ZEXT816(2) * ZEXT816(lVar4 + 1U);
            uVar3 = SUB168(auVar1,0);
            if (SUB168(auVar1 >> 0x40,0) != 0) {
                uVar3 = 0xffffffffffffffff;
            }
            uVar3 = FUN_14018b280(uVar3,0);
            FUN_1407db590(uVar3,local_68,(lVar4 + 1U) * 2);
            *(undefined8 *)(param_1 + 0x1e0) = uVar3;
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack200);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_1405b0600(undefined8 param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    uint extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    undefined auVar5 [16];
    undefined auVar6 [16];
    uint uVar7;

    lVar4 = FUN_140205fa0();
    if ((lVar4 == 0) || (lVar4 = FUN_14024c200(), lVar4 == 0)) {
        uVar3 = uRam0000000140c7839c;
        uVar2 = uRam0000000140c78398;
        uVar1 = uRam0000000140c78394;
        *param_2 = _DAT_140c78390;
        param_2[1] = uVar1;
        param_2[2] = uVar2;
        param_2[3] = uVar3;
        uVar3 = uRam0000000140c783ac;
        uVar2 = uRam0000000140c783a8;
        uVar1 = uRam0000000140c783a4;
        param_2[4] = _DAT_140c783a0;
        param_2[5] = uVar1;
        param_2[6] = uVar2;
        param_2[7] = uVar3;
        uVar3 = uRam0000000140c783bc;
        uVar2 = uRam0000000140c783b8;
        uVar1 = uRam0000000140c783b4;
        param_2[8] = _DAT_140c783b0;
        param_2[9] = uVar1;
        param_2[10] = uVar2;
        param_2[0xb] = uVar3;
        uVar3 = uRam0000000140c783cc;
        uVar2 = uRam0000000140c783c8;
        uVar1 = uRam0000000140c783c4;
        param_2[0xc] = _DAT_140c783c0;
        param_2[0xd] = uVar1;
        param_2[0xe] = uVar2;
        param_2[0xf] = uVar3;
    }
    else {
        auVar6 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar4 + 0xc),
                                        (float)(int)*(undefined8 *)(lVar4 + 8))),_DAT_140b7b490);
        auVar5 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar4 + 0x14),(float)*(int *)(lVar4 + 0x10))),
                       _DAT_140b7b490);
        lVar4 = FUN_1402070a0();
        uVar3 = uRam0000000140c7839c;
        uVar2 = uRam0000000140c78398;
        uVar1 = uRam0000000140c78394;
        if (lVar4 == 0) {
            *param_2 = _DAT_140c78390;
            param_2[1] = uVar1;
            param_2[2] = uVar2;
            param_2[3] = uVar3;
            uVar3 = uRam0000000140c783ac;
            uVar2 = uRam0000000140c783a8;
            uVar1 = uRam0000000140c783a4;
            param_2[4] = _DAT_140c783a0;
            param_2[5] = uVar1;
            param_2[6] = uVar2;
            param_2[7] = uVar3;
            uVar3 = uRam0000000140c783bc;
            uVar2 = uRam0000000140c783b8;
            uVar1 = uRam0000000140c783b4;
            param_2[8] = _DAT_140c783b0;
            param_2[9] = uVar1;
            param_2[10] = uVar2;
            param_2[0xb] = uVar3;
            uVar3 = uRam0000000140c783cc;
            uVar2 = uRam0000000140c783c8;
            uVar1 = uRam0000000140c783c4;
            param_2[0xc] = _DAT_140c783c0;
            param_2[0xd] = uVar1;
            param_2[0xe] = uVar2;
            param_2[0xf] = uVar3;
        }
        else {
            FUN_1408fe3d0();
            uVar7 = extraout_XMM0_Da;
            FUN_1408fc950();
            uVar1 = uRam0000000140c7844c;
            *param_2 = extraout_XMM0_Da_00;
            param_2[1] = 0;
            param_2[2] = uVar7 ^ 0x80000000;
            param_2[3] = 0;
            param_2[4] = 0;
            param_2[5] = 0x3f800000;
            param_2[6] = 0;
            param_2[7] = 0;
            param_2[8] = uVar7;
            param_2[9] = 0;
            param_2[10] = extraout_XMM0_Da_00;
            param_2[0xb] = 0;
            param_2[0xc] = ((SUB164(auVar5,0) - 0.5) * 65536.0 + (SUB164(auVar6,0) - 0.5) * 65536.0) * 0.5
                    ;
            param_2[0xd] = 0xc432c000;
            param_2[0xe] = ((SUB164(auVar5 >> 0x20,0) - 0.5) * 65536.0 +
                            (SUB164(auVar6 >> 0x20,0) - 0.5) * 65536.0) * 0.5;
            param_2[0xf] = uVar1;
        }
    }
    return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405b0840(longlong param_1,longlong param_2)

{
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    code *pcVar7;
    float fVar8;
    undefined auStack456 [32];
    longlong local_1a8;
    undefined *local_1a0;
    undefined local_198 [64];
    undefined local_158 [64];
    undefined local_118 [64];
    undefined local_d8 [64];
    longlong local_98;
    undefined *local_90;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack456;
    fVar8 = *(float *)(param_2 + 0x30);
    uVar6 = 0;
    pcVar7 = DAT_140c63840;
    iVar4 = 0x7fffffff;
    if (*(int *)(param_1 + 0x110) != 0) {
        do {
            uVar3 = 0;
            if (uVar6 < (ulonglong)(*(longlong *)(param_1 + 0x100) - *(longlong *)(param_1 + 0xf8) >> 3))
            {
                uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0xf8) + uVar6 * 8);
            }
            if (pcVar7 == (code *)0x0) {
                if ((_DAT_140c65340 == 0) && (iVar4 = FUN_140205d40(), pcVar7 = DAT_140c63840, -1 < iVar4))
                {
                    lVar1 = (**(code **)(*DAT_140c63c30 + 0x18))();
                    goto LAB_1405b091f;
                }
            }
            else {
                lVar1 = (*pcVar7)(&PTR_u_HousingPlotInfo_140a6a8d8,*(undefined4 *)(uVar3 + 0xc),
                                  DAT_140c63858);
                LAB_1405b091f:
                pcVar7 = DAT_140c63840;
                if (lVar1 != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63ab4 != 0) ||
                            (iVar4 = FUN_14024bfa0(), pcVar7 = DAT_140c63840, iVar4 < 0)) goto LAB_1405b09c0;
                        lVar1 = (**(code **)(*DAT_140c643c8 + 0x18))();
                    }
                    else {
                        lVar1 = (*DAT_140c63840)(&PTR_u_WorldSocket_140a6e298,*(undefined4 *)(lVar1 + 4),
                                                 DAT_140c63858);
                    }
                    pcVar7 = DAT_140c63840;
                    if (lVar1 != 0) {
                        iVar4 = (int)((fVar8 * DAT_140c43fb8 + 0.5) * 2048.0);
                        iVar2 = (int)((DAT_140c43fb8 * 0.0 + 0.5) * 2048.0);
                        if ((((*(int *)(lVar1 + 8) <= iVar4) && (iVar4 < *(int *)(lVar1 + 0x10))) &&
                             (*(int *)(lVar1 + 0xc) <= iVar2)) &&
                            (iVar4 = (int)uVar6, iVar2 < *(int *)(lVar1 + 0x14))) break;
                    }
                }
            }
            LAB_1405b09c0:
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            iVar4 = 0x7fffffff;
        } while (uVar5 < *(uint *)(param_1 + 0x110));
    }
    if (*(int *)(param_1 + 0x30) != 3) {
        if (iVar4 == 0) {
            local_98 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x38))();
            FUN_1401afc20(&local_98,local_198);
            local_1a0 = local_198;
        }
        else {
            local_98 = FUN_1405b0600(param_1,local_d8);
            FUN_1401afc20(&local_98,local_118);
            local_1a0 = local_118;
        }
        local_1a8 = param_2;
        local_98 = param_2;
        local_90 = local_1a0;
        FUN_1401afb10(&local_98,local_158);
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c638ac == 0) && (iVar4 = FUN_1401fffc0(), -1 < iVar4)) {
                (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,1099);
            }
        }
        else {
            (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,1099,DAT_140c63858);
        }
        if (DAT_140c63840 == (code *)0x0) {
            if ((_DAT_140c638ac == 0) && (iVar4 = FUN_1401fffc0(), -1 < iVar4)) {
                (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,1099);
            }
        }
        else {
            (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,1099,DAT_140c63858);
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack456);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_1405b0db0(void)

{
    longlong lVar1;

    DAT_140c7dfe0 = 0;
    _DAT_140c7dfb0 = &PTR_LAB_140b6cff8;
    _DAT_140c7dfc0 = ZEXT816(0);
    _DAT_140c7dfd0 = ZEXT816(0);
    FUN_140019600(&DAT_140c7dfe8);
    lVar1 = DAT_140c7dfc8;
    FUN_1407db590(DAT_140c7dfc0,DAT_140c7dfc8,0);
    lVar1 = lVar1 - DAT_140c7dfc0;
    _DAT_140c7dfc0 = CONCAT88(DAT_140c7dfc8 + (lVar1 >> 3) * -8,DAT_140c7dfc0);
    return &DAT_140c7dfb0;
}



void FUN_1405b0ec0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined8 *puVar3;

    FUN_140019490(param_1 + 0x38);
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != *(longlong **)(param_1 + 0x18)) {
        plVar1 = plVar2 + 1;
        do {
            puVar3 = (undefined8 *)*plVar2;
            if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
            }
            if (plVar1 != *(longlong **)(param_1 + 0x18)) {
                FUN_1407db590(plVar2,plVar1,
                              (longlong)*(longlong **)(param_1 + 0x18) - (longlong)plVar1 &
                              0xfffffffffffffff8);
            }
            *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -8;
        } while (plVar2 != *(longlong **)(param_1 + 0x18));
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    return;
}



void FUN_1405b0f50(longlong param_1,int *param_2)

{
    uint uVar1;
    int iVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong *puVar11;
    ulonglong *puVar12;
    ulonglong *puVar13;
    ulonglong uVar14;
    ulonglong **ppuVar15;
    ulonglong uVar16;
    ulonglong local_res10;

    if ((param_2 != (int *)0x0) && (lVar8 = FUN_1402070a0(), lVar8 != 0)) {
        puVar11 = (ulonglong *)0x0;
        bVar6 = false;
        bVar5 = bVar6;
        if ((*(longlong *)(param_2 + 6) == *(longlong *)(DAT_140c635f0 + 0x16a0)) &&
            (*param_2 == *(int *)(DAT_140c635f0 + 0x1680))) {
            bVar5 = true;
        }
        puVar12 = puVar11;
        if (DAT_140c7de20 != (ulonglong *)0x0) {
            do {
                plVar3 = *(longlong **)(DAT_140c7de18 + (longlong)puVar12 * 8);
                if (*(int *)(plVar3 + 2) == 3) {
                    if (((plVar3 != (longlong *)0x0) && (*(longlong *)(param_2 + 8) == *plVar3)) &&
                        (*param_2 == *(int *)(DAT_140c635f0 + 0x1680))) {
                        bVar6 = true;
                    }
                    break;
                }
                puVar12 = (ulonglong *)((longlong)puVar12 + 1);
            } while (puVar12 < DAT_140c7de20);
        }
        puVar12 = *(ulonglong **)(param_1 + 0x18);
        if (param_2[0x2a] == 0) {
            puVar13 = *(ulonglong **)(param_1 + 0x10);
            if (puVar13 != puVar12) {
                do {
                    uVar16 = *puVar13;
                    if ((*(int *)(uVar16 + 8) == *param_2) &&
                        (*(longlong *)(uVar16 + 0x10) == *(longlong *)(param_2 + 2))) {
                        iVar7 = param_2[0x17];
                        iVar2 = *(int *)(uVar16 + 100);
                        FUN_1405aa570(uVar16);
                        if (iVar2 == iVar7) {
                            FUN_1405abf80(uVar16);
                        }
                        else {
                            FUN_1405aee20();
                        }
                        goto LAB_1405b11d2;
                    }
                    puVar13 = puVar13 + 1;
                } while (puVar13 != puVar12);
            }
            lVar9 = FUN_14018b280(0x1f8,0);
            if (lVar9 == 0) {
                local_res10 = 0;
            }
            else {
                local_res10 = FUN_1405a9f40(lVar9,param_2);
            }
            puVar12 = *(ulonglong **)(param_1 + 0x18);
            if (puVar12 == *(ulonglong **)(param_1 + 0x20)) {
                FUN_14010a1c0(param_1 + 8,puVar12,&local_res10);
                uVar16 = local_res10;
            }
            else {
                if (puVar12 != (ulonglong *)0x0) {
                    *puVar12 = local_res10;
                }
                *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + 8;
                uVar16 = local_res10;
            }
            LAB_1405b11d2:
            lVar9 = FUN_140205fa0(*(undefined4 *)(uVar16 + 0xb8));
            puVar12 = puVar11;
            if (lVar9 != 0) {
                puVar12 = (ulonglong *)(ulonglong)*(uint *)(lVar9 + 4);
            }
            if (bVar5) {
                *(ulonglong *)(param_1 + 0x28) = uVar16;
                *(undefined4 *)(uVar16 + 0x1f0) = 2;
            }
            if (bVar6) {
                *(ulonglong *)(param_1 + 0x30) = uVar16;
            }
            lVar9 = DAT_140c65898;
            if ((bVar5) || (bVar6)) {
                *(undefined4 *)(DAT_140c65898 + 0x74f4) = *(undefined4 *)(lVar8 + 0x1c);
                if (*(int *)(lVar9 + 0x74f8) != (int)puVar12) {
                    *(int *)(lVar9 + 0x74f8) = (int)puVar12;
                    FUN_14053adc0();
                }
            }
            local_res10 = (ulonglong)*(uint *)(lVar8 + 0x1c);
            uVar10 = (**(code **)(param_1 + 0x50))(&local_res10);
            for (puVar12 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x48) + (uVar10 % *(ulonglong *)(param_1 + 0x40)) * 8
                    ); puVar12 != (ulonglong *)0x0; puVar12 = (ulonglong *)puVar12[1]) {
                if ((uVar10 == *puVar12) &&
                    (iVar7 = (**(code **)(param_1 + 0x58))(&local_res10), iVar7 != 0)) {
                    if (puVar12 != (ulonglong *)&DAT_ffffffffffffffe8) {
                        local_res10 = (ulonglong)*(uint *)(lVar8 + 0x1c);
                        uVar10 = (**(code **)(param_1 + 0x50))(&local_res10);
                        uVar14 = uVar10 % *(ulonglong *)(param_1 + 0x40);
                        puVar12 = *(ulonglong **)(*(longlong *)(param_1 + 0x48) + uVar14 * 8);
                        ppuVar15 = (ulonglong **)(*(longlong *)(param_1 + 0x48) + uVar14 * 8);
                        goto joined_r0x0001405b12af;
                    }
                    break;
                }
            }
            LAB_1405b12ec:
            local_res10 = (ulonglong)*(uint *)(lVar8 + 0x1c);
            if (*(longlong *)(param_1 + 0x38) == *(longlong *)(param_1 + 0x40)) {
                FUN_1400290d0(param_1 + 0x38);
            }
            uVar10 = (**(code **)(param_1 + 0x50))(&local_res10);
            ppuVar15 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x48) + (uVar10 % *(ulonglong *)(param_1 + 0x40)) * 8);
            puVar12 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar12 != (ulonglong *)0x0) {
                puVar11 = *ppuVar15;
                *puVar12 = uVar10;
                puVar12[1] = (ulonglong)puVar11;
                puVar12[3] = uVar16;
                puVar12[2] = local_res10;
                puVar11 = puVar12;
            }
            *ppuVar15 = puVar11;
            *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
            FUN_1405b13d0();
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingPlotsRecieved","");
        }
        else {
            puVar11 = *(ulonglong **)(param_1 + 0x10);
            if (puVar11 != puVar12) {
                do {
                    if ((*(int *)(*puVar11 + 8) == *param_2) &&
                        (*(longlong *)(*puVar11 + 0x10) == *(longlong *)(param_2 + 2))) {
                        if (bVar5) {
                            *(undefined8 *)(param_1 + 0x28) = 0;
                        }
                        if (bVar6) {
                            *(undefined8 *)(param_1 + 0x30) = 0;
                        }
                        lVar9 = DAT_140c65898;
                        if ((bVar5) || (bVar6)) {
                            uVar1 = *(uint *)(DAT_140c65898 + 0x7518);
                            *(undefined8 *)(DAT_140c65898 + 0x7508) = 0;
                            *(undefined8 *)(lVar9 + 0x7510) = 0;
                            *(undefined4 *)(lVar9 + 0x7518) = 0;
                            if ((uVar1 & 1) != 0) {
                                FUN_1400ea3e0(*(undefined8 *)(lVar9 + 0x7340),"HousingPrivacyUpdated",&DAT_1409ec064
                                        ,0);
                            }
                        }
                        local_res10 = (ulonglong)*(uint *)(lVar8 + 0x1c);
                        FUN_1400b6120(param_1 + 0x38,&local_res10);
                        FUN_1405b13d0();
                        FUN_1405ae130(*puVar11);
                        FUN_140205fa0(*(undefined4 *)(*puVar11 + 0xb8));
                        FUN_1404c9d20();
                        puVar4 = (undefined8 *)*puVar11;
                        if (puVar4 != (undefined8 *)0x0) {
                            (**(code **)*puVar4)(puVar4,1);
                        }
                        FUN_1405b1c30(param_1 + 8,puVar11);
                        break;
                    }
                    puVar11 = puVar11 + 1;
                } while (puVar11 != puVar12);
            }
        }
        if (bVar5) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingOwnershipRecieved",
                          &DAT_1409d0f76);
        }
    }
    return;
    joined_r0x0001405b12af:
    if (puVar12 == (ulonglong *)0x0) goto LAB_1405b12ec;
    if ((uVar10 == **ppuVar15) && (iVar7 = (**(code **)(param_1 + 0x58))(&local_res10), iVar7 != 0)) {
        *ppuVar15 = (ulonglong *)(*ppuVar15)[1];
        FUN_14018b900();
        *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -1;
        goto LAB_1405b12ec;
    }
    ppuVar15 = (ulonglong **)(*ppuVar15 + 1);
    puVar12 = *ppuVar15;
    goto joined_r0x0001405b12af;
}



ulonglong FUN_1405b13d0(undefined8 param_1,uint param_2,longlong param_3)

{
    longlong **pplVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong **pplVar5;
    longlong **pplVar6;
    uint local_18 [2];
    undefined8 local_10;

    uVar4 = *(longlong *)(DAT_140c65898 + 0x7568) - *(longlong *)(DAT_140c65898 + 0x7560) >> 3;
    uVar2 = param_2 / uVar4;
    pplVar6 = *(longlong ***)
            (*(longlong *)(DAT_140c65898 + 0x7560) + ((ulonglong)param_2 % uVar4) * 8);
    if (pplVar6 != (longlong **)0x0) {
        do {
            if (*(uint *)(pplVar6 + 1) == param_2) break;
            pplVar6 = (longlong **)*pplVar6;
        } while (pplVar6 != (longlong **)0x0);
        if (pplVar6 != (longlong **)0x0) {
            FUN_14018b900(pplVar6[2]);
            lVar3 = DAT_140c65898;
            uVar4 = (ulonglong)*(uint *)(pplVar6 + 1) %
                    (ulonglong)
                            (*(longlong *)(DAT_140c65898 + 0x7568) - *(longlong *)(DAT_140c65898 + 0x7560) >> 3);
            uVar2 = *(ulonglong *)(DAT_140c65898 + 0x7560);
            pplVar5 = *(longlong ***)(uVar2 + uVar4 * 8);
            if (pplVar5 == pplVar6) {
                *(longlong **)(uVar2 + uVar4 * 8) = *pplVar5;
                LAB_1405b14a8:
                uVar2 = FUN_14018b900(pplVar5,0);
                *(longlong *)(lVar3 + 0x7578) = *(longlong *)(lVar3 + 0x7578) + -1;
            }
            else {
                pplVar1 = pplVar5;
                for (pplVar5 = (longlong **)*pplVar5; pplVar5 != (longlong **)0x0;
                     pplVar5 = (longlong **)*pplVar5) {
                    if (pplVar5 == pplVar6) {
                        *pplVar1 = *pplVar5;
                        goto LAB_1405b14a8;
                    }
                    pplVar1 = pplVar5;
                }
            }
        }
    }
    lVar3 = DAT_140c65898;
    *(undefined4 *)(DAT_140c65898 + 0x7580) = 1;
    if (param_3 != 0) {
        local_10 = 0;
        local_18[0] = param_2;
        lVar3 = FUN_1404bc890(lVar3 + 0x7550,local_18);
        uVar2 = FUN_14018e9c0(param_3);
        *(ulonglong *)(lVar3 + 8) = uVar2;
    }
    return uVar2;
}



longlong FUN_1405b1510(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = *(longlong *)(param_1 + 0x30);
    if ((lVar2 == 0) &&
        ((lVar1 = *(longlong *)(DAT_140c65898 + 0x6490), lVar1 == 0 ||
                                                         ((lVar2 = FUN_1405b16c0(&DAT_140c7dfb0,*(undefined4 *)(lVar1 + 0x17e8),1), lVar2 == 0 &&
                                                                                                                                    (lVar2 = FUN_1405b15c0(&DAT_140c7dfb0,*(undefined4 *)(lVar1 + 0x17ec)), lVar2 == 0)))))) {
        for (plVar3 = *(longlong **)(param_1 + 0x10); plVar3 != *(longlong **)(param_1 + 0x18);
             plVar3 = plVar3 + 1) {
            if (*(int *)(*plVar3 + 0x30) == 5) {
                if (*plVar3 != 0) {
                    return 0;
                }
                break;
            }
        }
        lVar2 = *(longlong *)(param_1 + 0x28);
    }
    return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405b15c0(longlong param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    undefined4 uVar6;
    code *pcVar7;

    if ((param_2 != 0) &&
        (plVar5 = *(longlong **)(param_1 + 0x10), pcVar7 = DAT_140c63840,
                plVar5 != *(longlong **)(param_1 + 0x18))) {
        do {
            lVar2 = *plVar5;
            uVar4 = 0;
            if (*(int *)(lVar2 + 0x110) != 0) {
                do {
                    uVar6 = 0;
                    if ((*(longlong *)(lVar2 + 0xe8) != 0) && ((uint)uVar4 < *(uint *)(lVar2 + 0x110))) {
                        uVar6 = *(undefined4 *)(uVar4 * 0xc0 + 8 + *(longlong *)(lVar2 + 0xe8));
                    }
                    if (pcVar7 == (code *)0x0) {
                        if ((_DAT_140c65340 == 0) &&
                            (iVar1 = FUN_140205d40(), pcVar7 = DAT_140c63840, -1 < iVar1)) {
                            lVar2 = (**(code **)(*DAT_140c63c30 + 0x18))(DAT_140c63c30,uVar6);
                            goto LAB_1405b166d;
                        }
                    }
                    else {
                        lVar2 = (*pcVar7)(&PTR_u_HousingPlotInfo_140a6a8d8,uVar6,DAT_140c63858);
                        LAB_1405b166d:
                        pcVar7 = DAT_140c63840;
                        if ((lVar2 != 0) && (*(int *)(lVar2 + 4) == param_2)) {
                            return *plVar5;
                        }
                    }
                    lVar2 = *plVar5;
                    uVar3 = (uint)uVar4 + 1;
                    uVar4 = (ulonglong)uVar3;
                } while (uVar3 < *(uint *)(lVar2 + 0x110));
            }
            plVar5 = plVar5 + 1;
        } while (plVar5 != *(longlong **)(param_1 + 0x18));
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405b16c0(longlong param_1,undefined8 param_2,int param_3)

{
    ulonglong *puVar1;
    uint uVar2;
    int iVar3;
    ulonglong uVar4;
    undefined auStack232 [32];
    undefined local_c8 [16];
    undefined local_b8 [76];
    uint local_6c;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    local_c8 = CONCAT88(local_c8._0_8_,param_2) & (undefined  [16])0xffffffffffffffff;
    uVar4 = (**(code **)(param_1 + 0x50))(local_c8);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x48) + (uVar4 % *(ulonglong *)(param_1 + 0x40)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1405b1732:
            if (param_3 != 0) {
                uVar2 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x11e0);
                local_c8 = ZEXT1216(CONCAT48(uVar2,(ulonglong)uVar2));
                iVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x7240) + 0xe0))
                        (*(longlong **)(DAT_140c65898 + 0x7240),local_c8,local_b8,0x80);
                if (iVar3 != 0) {
                    local_c8 = CONCAT88(local_c8._8_8_,(ulonglong)local_6c);
                    uVar4 = (**(code **)(param_1 + 0x50))(local_c8);
                    puVar1 = *(ulonglong **)
                            (*(longlong *)(param_1 + 0x48) + (uVar4 % *(ulonglong *)(param_1 + 0x40)) * 8);
                    while ((puVar1 != (ulonglong *)0x0 &&
                            ((uVar4 != *puVar1 ||
                              (iVar3 = (**(code **)(param_1 + 0x58))(local_c8,puVar1 + 2), iVar3 == 0))))) {
                        puVar1 = (ulonglong *)puVar1[1];
                    }
                }
            }
            LAB_1405b17dd:
            FUN_1407db4f0(local_28 ^ (ulonglong)auStack232);
            return;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(param_1 + 0x58))(local_c8,puVar1 + 2), iVar3 != 0)) {
            if (puVar1 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_1405b17dd;
            goto LAB_1405b1732;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_1405b1800(longlong param_1,int *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;

    if (*(longlong *)(param_2 + 2) != 0) {
        plVar3 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
        plVar1 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18);
        if (plVar3 != plVar1) {
            do {
                lVar2 = *plVar3;
                if ((*(int *)(lVar2 + 8) == *param_2) &&
                    (*(longlong *)(lVar2 + 0x10) == *(longlong *)(param_2 + 2))) {
                    if (lVar2 == 0) {
                        return 0;
                    }
                    *(int *)(lVar2 + 0x1f0) = param_2[4];
                    if (param_2[4] - 1U < 2) {
                        lVar4 = FUN_1402070a0(*(undefined4 *)(lVar2 + 0x40));
                        lVar6 = DAT_140c65898;
                        if (lVar4 != 0) {
                            lVar5 = FUN_140205fa0(*(undefined4 *)(lVar2 + 0xb8));
                            lVar6 = DAT_140c65898;
                            if (lVar5 == 0) {
                                iVar7 = 0;
                            }
                            else {
                                iVar7 = *(int *)(lVar5 + 4);
                            }
                            *(undefined4 *)(DAT_140c65898 + 0x74f4) = *(undefined4 *)(lVar4 + 0x1c);
                            if (*(int *)(lVar6 + 0x74f8) != iVar7) {
                                *(int *)(lVar6 + 0x74f8) = iVar7;
                                FUN_14053adc0();
                                lVar6 = DAT_140c65898;
                            }
                        }
                        FUN_1400ea3e0(*(undefined8 *)(lVar6 + 0x7340),"HousingOwnershipRecieved",&DAT_1409d0f76)
                                ;
                        lVar6 = DAT_140c65898;
                    }
                    else {
                        lVar4 = FUN_1405b1510(param_1);
                        lVar6 = DAT_140c65898;
                        if (lVar4 == lVar2) {
                            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HousingPanelControlClose");
                            lVar6 = DAT_140c65898;
                            *(undefined4 *)(DAT_140c65898 + 0x74f4) = 0;
                            if (*(int *)(lVar6 + 0x74f8) != 0) {
                                *(undefined4 *)(lVar6 + 0x74f8) = 0;
                                FUN_14053adc0(lVar6);
                                lVar6 = DAT_140c65898;
                            }
                        }
                    }
                    plVar3 = *(longlong **)(param_1 + 0x10);
                    if (plVar3 != *(longlong **)(param_1 + 0x18)) goto LAB_1405b1962;
                    goto LAB_1405b1993;
                }
                plVar3 = plVar3 + 1;
            } while (plVar3 != plVar1);
        }
    }
    return 0;
    LAB_1405b1962:
    while (lVar4 = *plVar3, *(int *)(lVar4 + 0x30) != 5) {
        plVar3 = plVar3 + 1;
        if (plVar3 == *(longlong **)(param_1 + 0x18)) {
            FUN_14053adc0(lVar6);
            return 0;
        }
    }
    if ((lVar4 == 0) || (lVar4 == lVar2)) {
        LAB_1405b1993:
        FUN_14053adc0(lVar6);
    }
    return 0;
}



undefined8 FUN_1405b19b0(void)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong *plVar7;

    plVar7 = DAT_140c7dfc0;
    do {
        if (plVar7 == DAT_140c7dfc8) {
            return 0;
        }
        lVar6 = *plVar7;
        if ((((*(int *)(lVar6 + 500) != 0) || (lVar3 = *(longlong *)(lVar6 + 0xe8), lVar3 == 0)) ||
             (uVar1 = *(uint *)(lVar6 + 0x110), uVar1 == 0)) ||
            ((*(int *)(lVar3 + 0xb8) == 0 || (uVar5 = 0, uVar1 == 0)))) {
            return 1;
        }
        do {
            lVar6 = uVar5 * 0xc0 + lVar3;
            if (lVar6 == 0) {
                return 1;
            }
            iVar2 = *(int *)(lVar6 + 0xb8);
            if ((iVar2 != 0) && (1 < iVar2 - 4U)) {
                return 1;
            }
            uVar4 = (int)uVar5 + 1;
            uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar1);
        plVar7 = plVar7 + 1;
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405b1a30(undefined8 param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    bool bVar3;
    uint uVar4;
    int iVar5;
    int *piVar6;
    int *piVar7;
    longlong lVar8;
    longlong *plVar9;
    uint uVar10;

    plVar9 = DAT_140c7dfc0;
    if (DAT_140c7dfc0 != DAT_140c7dfc8) {
        while (lVar1 = *plVar9, *(int *)(lVar1 + 0x30) != 5) {
            plVar9 = plVar9 + 1;
            if (plVar9 == DAT_140c7dfc8) {
                return;
            }
        }
        if ((lVar1 != 0) &&
            (piVar6 = (int *)FUN_1402070a0(*(undefined4 *)(lVar1 + 0x40)), piVar6 != (int *)0x0)) {
            uVar10 = 0;
            do {
                if (DAT_140c63838 == (code *)0x0) {
                    if (_DAT_140c64b88 != 0) {
                        return;
                    }
                    iVar5 = FUN_140206e40();
                    if (iVar5 < 0) {
                        return;
                    }
                    uVar4 = (**(code **)(*DAT_140c64de8 + 0x28))();
                }
                else {
                    uVar4 = (*DAT_140c63838)(&PTR_u_HousingPropertyInfo_140a6a9b8,DAT_140c63858);
                }
                if (uVar4 <= uVar10) {
                    return;
                }
                if (DAT_140c63848 == (code *)0x0) {
                    if ((_DAT_140c64b88 == 0) && (iVar5 = FUN_140206e40(), -1 < iVar5)) {
                        piVar7 = (int *)(**(code **)(*DAT_140c64de8 + 0x20))(DAT_140c64de8,uVar10);
                        goto LAB_1405b1b47;
                    }
                }
                else {
                    piVar7 = (int *)(*DAT_140c63848)(&PTR_u_HousingPropertyInfo_140a6a9b8);
                    LAB_1405b1b47:
                    if (((piVar7 != (int *)0x0) && (*piVar7 != *piVar6)) && (piVar7[3] == piVar6[3])) {
                        bVar3 = false;
                        plVar9 = DAT_140c7dfc0;
                        if (DAT_140c7dfc0 != DAT_140c7dfc8) {
                            do {
                                if (bVar3) goto LAB_1405b1bf0;
                                if (*(int *)(*plVar9 + 0x40) == *piVar7) {
                                    bVar3 = true;
                                }
                                plVar9 = plVar9 + 1;
                            } while (plVar9 != DAT_140c7dfc8);
                            if (bVar3) goto LAB_1405b1bf0;
                        }
                        lVar2 = param_2[1];
                        lVar1 = lVar2 + 1;
                        lVar8 = FUN_14018db00(*param_2,lVar1,8);
                        *(int **)(lVar8 + lVar2 * 8) = piVar7;
                        if (*param_2 != lVar8) {
                            FUN_1407db590(lVar8,*param_2,param_2[1] << 3);
                            lVar2 = *param_2;
                            if (lVar2 != 0) {
                                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                            }
                            *param_2 = lVar8;
                        }
                        param_2[1] = lVar1;
                    }
                }
                LAB_1405b1bf0:
                uVar10 = uVar10 + 1;
            } while( true );
        }
    }
    return;
}



longlong FUN_1405b1c30(longlong param_1,longlong param_2)

{
    longlong lVar1;

    lVar1 = param_2 + 8;
    if (lVar1 != *(longlong *)(param_1 + 0x10)) {
        FUN_1407db590(param_2,lVar1,*(longlong *)(param_1 + 0x10) - lVar1 & 0xfffffffffffffff8);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
        return param_2;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -8;
    return param_2;
}



longlong ** FUN_1405b1c90(longlong param_1,longlong **param_2,longlong param_3)

{
    longlong *plVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(param_1 + 0x10) - param_3 >> 3;
    pplVar3 = param_2;
    if (0 < lVar4) {
        do {
            plVar1 = *(longlong **)((param_3 - (longlong)param_2) + (longlong)pplVar3);
            if (*pplVar3 != plVar1) {
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)*plVar1)();
                }
                if (*pplVar3 != (longlong *)0x0) {
                    (**(code **)(**pplVar3 + 8))();
                }
                *pplVar3 = *(longlong **)((param_3 - (longlong)param_2) + (longlong)pplVar3);
            }
            lVar4 = lVar4 + -1;
            pplVar3 = pplVar3 + 1;
        } while (0 < lVar4);
    }
    pplVar2 = *(longlong ***)(param_1 + 0x10);
    for (; pplVar3 != pplVar2; pplVar3 = pplVar3 + 1) {
        if (*pplVar3 != (longlong *)0x0) {
            (**(code **)(**pplVar3 + 8))();
        }
    }
    *(longlong *)(param_1 + 0x10) =
            *(longlong *)(param_1 + 0x10) + (param_3 - (longlong)param_2 >> 3) * -8;
    return param_2;
}



void FUN_1405b1d60(longlong param_1,longlong **param_2,longlong **param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong **pplVar5;
    longlong lVar6;
    longlong **pplVar7;
    longlong **pplVar8;
    longlong **pplVar9;

    plVar1 = *(longlong **)(param_1 + 0x10);
    if (plVar1 == *(longlong **)(param_1 + 0x18)) {
        lVar3 = (longlong)plVar1 - *(longlong *)(param_1 + 8) >> 3;
        lVar6 = lVar3 * 2;
        if (lVar3 == 0) {
            lVar6 = 1;
        }
        uVar4 = FUN_14018a3e0(lVar6 * 8);
        pplVar5 = (longlong **)FUN_14018b280(uVar4 & 0xfffffffffffffff8,0);
        pplVar7 = pplVar5;
        for (pplVar9 = *(longlong ***)(param_1 + 8); pplVar9 != param_2; pplVar9 = pplVar9 + 1) {
            if (pplVar7 != (longlong **)0x0) {
                plVar1 = *pplVar9;
                *pplVar7 = plVar1;
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)*plVar1)();
                }
            }
            pplVar7 = pplVar7 + 1;
        }
        if (pplVar7 != (longlong **)0x0) {
            plVar1 = *param_3;
            *pplVar7 = plVar1;
            if (plVar1 != (longlong *)0x0) {
                (**(code **)*plVar1)();
            }
        }
        pplVar8 = *(longlong ***)(param_1 + 0x10);
        pplVar9 = pplVar7 + 1;
        if (param_2 != pplVar8) {
            param_2 = (longlong **)((longlong)param_2 + (longlong)pplVar9 + (-8 - (longlong)pplVar7));
            do {
                if (pplVar9 != (longlong **)0x0) {
                    plVar1 = *param_2;
                    *pplVar9 = plVar1;
                    if (plVar1 != (longlong *)0x0) {
                        (**(code **)*plVar1)();
                    }
                }
                param_2 = param_2 + 1;
                pplVar9 = pplVar9 + 1;
            } while (param_2 != pplVar8);
        }
        pplVar7 = *(longlong ***)(param_1 + 0x10);
        for (pplVar8 = *(longlong ***)(param_1 + 8); pplVar8 != pplVar7; pplVar8 = pplVar8 + 1) {
            if (*pplVar8 != (longlong *)0x0) {
                (**(code **)(**pplVar8 + 8))();
            }
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong ***)(param_1 + 8) = pplVar5;
        *(longlong ***)(param_1 + 0x10) = pplVar9;
        *(ulonglong *)(param_1 + 0x18) = (longlong)pplVar5 + (uVar4 & 0xfffffffffffffff8);
    }
    else {
        if (plVar1 != (longlong *)0x0) {
            puVar2 = (undefined8 *)plVar1[-1];
            *plVar1 = (longlong)puVar2;
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)();
            }
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 8;
        plVar1 = *param_3;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)*plVar1)(plVar1);
        }
        FUN_1405b2180(param_2,*(longlong *)(param_1 + 0x10) + -0x10,*(longlong *)(param_1 + 0x10) + -8);
        if (*param_2 != plVar1) {
            if (plVar1 != (longlong *)0x0) {
                (**(code **)*plVar1)(plVar1);
            }
            if (*param_2 != (longlong *)0x0) {
                (**(code **)(**param_2 + 8))();
            }
            *param_2 = plVar1;
        }
        if (plVar1 != (longlong *)0x0) {
            // WARNING: Could not recover jumptable at 0x0001405b1df9. Too many branches
            // WARNING: Treating indirect jump as call
            (**(code **)(*plVar1 + 8))(plVar1);
            return;
        }
    }
    return;
}



void FUN_1405b1f40(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
    undefined4 uVar1;
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
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    ulonglong uVar25;
    longlong lVar26;
    undefined8 uVar27;
    longlong lVar28;
    ulonglong uVar29;
    longlong lVar30;

    lVar26 = *(longlong *)(param_1 + 0x10);
    if (lVar26 != *(longlong *)(param_1 + 0x18)) {
        FUN_1405b2110(lVar26,lVar26 + -0x68);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x68;
        uVar1 = *param_3;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        uVar5 = param_3[4];
        uVar6 = param_3[5];
        uVar7 = param_3[6];
        uVar8 = param_3[7];
        uVar9 = param_3[8];
        uVar10 = param_3[9];
        uVar11 = param_3[10];
        uVar12 = param_3[0xb];
        uVar13 = param_3[0xc];
        uVar14 = param_3[0xd];
        uVar15 = param_3[0xe];
        uVar16 = param_3[0xf];
        uVar17 = param_3[0x10];
        uVar18 = param_3[0x11];
        uVar19 = param_3[0x12];
        uVar20 = param_3[0x13];
        uVar21 = param_3[0x14];
        uVar22 = param_3[0x15];
        uVar23 = param_3[0x16];
        uVar24 = param_3[0x17];
        uVar27 = *(undefined8 *)(param_3 + 0x18);
        FUN_1405b2200(param_2,*(longlong *)(param_1 + 0x10) + -0xd0,
                      *(longlong *)(param_1 + 0x10) + -0x68);
        *param_2 = uVar1;
        param_2[1] = uVar2;
        param_2[2] = uVar3;
        param_2[3] = uVar4;
        param_2[4] = uVar5;
        param_2[5] = uVar6;
        param_2[6] = uVar7;
        param_2[7] = uVar8;
        param_2[8] = uVar9;
        param_2[9] = uVar10;
        param_2[10] = uVar11;
        param_2[0xb] = uVar12;
        param_2[0xc] = uVar13;
        param_2[0xd] = uVar14;
        param_2[0xe] = uVar15;
        param_2[0xf] = uVar16;
        param_2[0x10] = uVar17;
        param_2[0x11] = uVar18;
        param_2[0x12] = uVar19;
        param_2[0x13] = uVar20;
        param_2[0x14] = uVar21;
        param_2[0x15] = uVar22;
        param_2[0x16] = uVar23;
        param_2[0x17] = uVar24;
        *(undefined8 *)(param_2 + 0x18) = uVar27;
        return;
    }
    uVar29 = 0x4ec4ec4ec4ec4ec5;
    lVar26 = (lVar26 - *(longlong *)(param_1 + 8)) / 0x68;
    lVar28 = lVar26 * 2;
    if (lVar26 == 0) {
        lVar28 = 1;
    }
    uVar25 = FUN_14018a3e0(lVar28 * 0x68);
    lVar30 = SUB168(ZEXT816(uVar29) * ZEXT816(uVar25) >> 0x45,0) * 0x68;
    lVar26 = FUN_14018b280(lVar30,0);
    lVar28 = FUN_1405b22b0(*(undefined8 *)(param_1 + 8),param_2,lVar26);
    FUN_1405b2110(lVar28,param_3);
    uVar27 = FUN_1405b22b0(param_2,*(undefined8 *)(param_1 + 0x10),lVar28 + 0x68);
    if (*(longlong *)(param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 8),0);
    }
    *(longlong *)(param_1 + 8) = lVar26;
    *(undefined8 *)(param_1 + 0x10) = uVar27;
    *(longlong *)(param_1 + 0x18) = lVar30 + lVar26;
    return;
}



void FUN_1405b2110(undefined8 *param_1,undefined8 *param_2)

{
    if (param_1 != (undefined8 *)0x0) {
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
    }
    return;
}



longlong ** FUN_1405b2180(longlong param_1,longlong param_2,longlong **param_3)

{
    longlong *plVar1;
    longlong lVar2;

    lVar2 = param_2 - param_1 >> 3;
    if (0 < lVar2) {
        param_2 = param_2 - (longlong)param_3;
        do {
            plVar1 = *(longlong **)(param_2 + -8 + (longlong)param_3);
            param_3 = param_3 + -1;
            if (*param_3 != plVar1) {
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)*plVar1)();
                }
                if (*param_3 != (longlong *)0x0) {
                    (**(code **)(**param_3 + 8))();
                }
                *param_3 = *(longlong **)(param_2 + (longlong)param_3);
            }
            lVar2 = lVar2 + -1;
        } while (0 < lVar2);
    }
    return param_3;
}



undefined8 * FUN_1405b2200(longlong param_1,longlong param_2,undefined8 *param_3)

{
    longlong lVar1;

    lVar1 = (param_2 - param_1) / 0x68;
    for (; 0 < lVar1; lVar1 = lVar1 + -1) {
        param_3[-0xd] = *(undefined8 *)(param_2 + -0x68);
        param_3[-0xc] = *(undefined8 *)(&DAT_ffffffffffffffa0 + param_2);
        param_3[-0xb] = *(undefined8 *)(param_2 + -0x58);
        param_3[-10] = *(undefined8 *)(&DAT_ffffffffffffffb0 + param_2);
        param_3[-9] = *(undefined8 *)(param_2 + -0x48);
        param_3[-8] = *(undefined8 *)(param_2 + -0x40);
        param_3[-7] = *(undefined8 *)(param_2 + -0x38);
        param_3[-6] = *(undefined8 *)(&DAT_ffffffffffffffd0 + param_2);
        param_3[-5] = *(undefined8 *)(param_2 + -0x28);
        param_3[-4] = *(undefined8 *)(param_2 + -0x20);
        param_3[-3] = *(undefined8 *)(&DAT_ffffffffffffffe8 + param_2);
        param_3[-2] = *(undefined8 *)(param_2 + -0x10);
        param_3[-1] = *(undefined8 *)(param_2 + -8);
        param_2 = param_2 + -0x68;
        param_3 = param_3 + -0xd;
    }
    return param_3;
}



undefined8 * FUN_1405b22b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
    if (param_1 != param_2) {
        do {
            if (param_3 != (undefined8 *)0x0) {
                *param_3 = *param_1;
                param_3[1] = param_1[1];
                param_3[2] = param_1[2];
                param_3[3] = param_1[3];
                param_3[4] = param_1[4];
                param_3[5] = param_1[5];
                param_3[6] = param_1[6];
                param_3[7] = param_1[7];
                param_3[8] = param_1[8];
                param_3[9] = param_1[9];
                param_3[10] = param_1[10];
                param_3[0xb] = param_1[0xb];
                param_3[0xc] = param_1[0xc];
            }
            param_1 = param_1 + 0xd;
            param_3 = param_3 + 0xd;
        } while (param_1 != param_2);
    }
    return param_3;
}



undefined8 * FUN_1405b2340(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b6d010;
    FUN_1404c0410();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405b2390(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined8 local_18;
    undefined8 local_10;

    puVar1 = *(undefined8 **)(param_1 + 0x50);
    if (puVar1 != (undefined8 *)0x0) {
        local_18 = *puVar1;
        local_10 = puVar1[1];
        FUN_1403f4740(DAT_140c65898,0x52f,&local_18);
        lVar3 = DAT_140c63628;
        if ((*(longlong **)(DAT_140c63628 + 0x2d0) != (longlong *)0x0) &&
            (*(longlong *)(DAT_140c63628 + 0x2e8) != 0)) {
            lVar2 = **(longlong **)(DAT_140c63628 + 0x2d0);
            uVar4 = FUN_1400518a0(DAT_140c63628,0x8a - (uint)(param_2 != 0),1);
            (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar3 + 0x2d0),uVar4,0,0,0,0,0);
        }
    }
    return;
}



void FUN_1405b2930(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    FUN_1405b2e60(param_1,*(undefined8 *)(param_1 + 0x350));
    FUN_1404c80a0(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x350));
    if (*(longlong **)(param_1 + 0x350) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x350) + 8))();
        *(undefined8 *)(param_1 + 0x350) = 0;
    }
    *(undefined8 *)(param_1 + 0x350) = 0;
    FUN_1405b2e60();
    FUN_1404c80a0(*(undefined8 *)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x358));
    if (*(longlong **)(param_1 + 0x358) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x358) + 8))();
        *(undefined8 *)(param_1 + 0x358) = 0;
    }
    *(undefined8 *)(param_1 + 0x358) = 0;
    plVar3 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    plVar1 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18);
    if (plVar3 != plVar1) {
        while (lVar2 = *plVar3,
                *(int *)(lVar2 + 0xbc) != *(int *)(*(longlong *)(param_1 + 0x128) + 0x14)) {
            plVar3 = plVar3 + 1;
            if (plVar3 == plVar1) {
                return;
            }
        }
        if (lVar2 != 0) {
            FUN_1405ae580(lVar2,*(ulonglong *)(lVar2 + 0x10) & 0xfffffffffffffff,
                          *(undefined4 *)(param_1 + 0x60),&DAT_140c78390,2);
            FUN_1405ae580(lVar2,*(ulonglong *)(lVar2 + 0x10) & 0xfffffffffffffff | 0x8000000000000000,
                          *(undefined4 *)(param_1 + 0x60),&DAT_140c78390,2);
        }
    }
    return;
}



undefined8 FUN_1405b2a90(undefined8 param_1,undefined4 *param_2,float *param_3,undefined4 param_4)

{
    undefined4 *puVar1;

    puVar1 = (undefined4 *)FUN_14024b980(param_4);
    if (puVar1 == (undefined4 *)0x0) {
        return 0;
    }
    *param_2 = *puVar1;
    param_2[1] = puVar1[1];
    param_2[2] = puVar1[2];
    param_2[3] = puVar1[3];
    param_2[4] = puVar1[4];
    param_2[5] = puVar1[5];
    param_2[6] = puVar1[6];
    param_2[7] = puVar1[7];
    param_2[8] = puVar1[8];
    param_2[9] = puVar1[9];
    param_2[10] = puVar1[10];
    param_2[0xb] = puVar1[0xb];
    param_2[0xc] = puVar1[0xc];
    param_2[3] = (float)param_2[3] + *param_3;
    param_2[4] = param_3[1] + (float)param_2[4];
    param_2[5] = param_3[2] + (float)param_2[5];
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1405b2b50(longlong param_1,undefined8 param_2)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong *plVar9;
    undefined auVar10 [16];
    undefined auVar11 [16];
    undefined local_38 [16];

    plVar9 = *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x10);
    while( true ) {
        if (plVar9 == *(longlong **)(*(longlong *)(DAT_140c659f0 + 0x338) + 0x18)) {
            return 0;
        }
        lVar8 = *plVar9;
        if (*(int *)(lVar8 + 0xbc) == *(int *)(*(longlong *)(param_1 + 0x128) + 0x14)) break;
        plVar9 = plVar9 + 1;
    }
    if (lVar8 == 0) {
        return 0;
    }
    lVar3 = FUN_1402074e0(*(undefined4 *)(lVar8 + 0x44));
    if ((lVar3 != 0) && (lVar4 = FUN_1402070a0(*(undefined4 *)(lVar8 + 0x40)), lVar4 != 0)) {
        lVar4 = 0;
        if ((*(longlong *)(lVar8 + 0xe8) == 0) ||
            (lVar6 = *(longlong *)(lVar8 + 0xe8), *(int *)(lVar8 + 0x110) == 0)) {
            lVar6 = lVar4;
        }
        uVar5 = FUN_140205fa0(*(undefined4 *)(lVar6 + 8));
        if (uVar5 != 0) {
            lVar6 = FUN_14024c200(*(undefined4 *)(uVar5 + 4));
            if (lVar6 != 0) {
                if ((*(longlong *)(lVar8 + 0xe8) == 0) ||
                    (lVar7 = *(longlong *)(lVar8 + 0xe8), *(int *)(lVar8 + 0x110) == 0)) {
                    lVar7 = lVar4;
                }
                lVar7 = FUN_140206c60(*(undefined4 *)(lVar7 + 0xc));
                if (lVar7 != 0) {
                    if (*(longlong *)(lVar8 + 0x100) - *(longlong *)(lVar8 + 0xf8) >> 3 != 0) {
                        lVar4 = **(longlong **)(lVar8 + 0xf8);
                    }
                    uVar1 = *(uint *)(lVar4 + 8);
                    lVar8 = FUN_14024acc0(*(undefined4 *)(lVar7 + 0x10 + (ulonglong)uVar1 * 4));
                    if (lVar8 != 0) {
                        auVar11 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar8 + 0x2c),
                                                         (float)(int)*(undefined8 *)(lVar8 + 0x28))),
                                        _DAT_140b7b490);
                        auVar10 = divps(ZEXT816(CONCAT44((float)*(int *)(lVar6 + 0xc),
                                                         (float)(int)*(undefined8 *)(lVar6 + 8))),_DAT_140b7b490
                        );
                        local_38._0_8_ =
                                CONCAT44((float)(*(int *)(lVar6 + 0x18) - *(int *)(lVar8 + 0x38)) * _DAT_140c4a348
                                         + 0.0,(SUB164(auVar10,0) - 0.5) * 65536.0 -
                                               (SUB164(auVar11,0) - 0.5) * 65536.0);
                        local_38 = ZEXT1216(CONCAT48((SUB164(auVar10 >> 0x20,0) - 0.5) * 65536.0 -
                                                     (SUB164(auVar11 >> 0x20,0) - 0.5) * 65536.0,local_38._0_8_)
                        );
                        iVar2 = FUN_1405b2a90(lVar8,param_2,local_38,
                                              *(undefined4 *)(lVar3 + 0x14 + (ulonglong)uVar1 * 4));
                        if (iVar2 != 0) {
                            iVar2 = FUN_1405b2a90();
                            return (ulonglong)(iVar2 != 0);
                        }
                    }
                }
            }
            uVar5 = 0;
        }
        // WARNING: Read-only address (ram,0x000140b7b490) is written
        return uVar5;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405b2db0(undefined8 param_1,ulonglong param_2,ulonglong param_3)

{
    ulonglong **ppuVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    ulonglong local_res8;

    if ((param_2 != 0) && (param_3 != 0)) {
        local_res8 = param_2;
        if (_DAT_140c4a3a8 == DAT_140c4a3b0) {
            FUN_1400290d0(&DAT_140c4a3a8);
        }
        uVar3 = (*DAT_140c4a3c0)(&local_res8);
        ppuVar1 = (ulonglong **)(DAT_140c4a3b8 + (uVar3 % DAT_140c4a3b0) * 8);
        puVar4 = (ulonglong *)FUN_14018b280(0x20);
        if (puVar4 != (ulonglong *)0x0) {
            puVar2 = *ppuVar1;
            *puVar4 = uVar3;
            puVar4[1] = (ulonglong)puVar2;
            puVar4[3] = param_3;
            puVar4[2] = local_res8;
        }
        *ppuVar1 = puVar4;
        _DAT_140c4a3a8 = _DAT_140c4a3a8 + 1;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1405b2e60(undefined8 param_1,longlong param_2)

{
    ulonglong *puVar1;
    ulonglong in_RAX;
    ulonglong uVar2;
    ulonglong **ppuVar3;
    longlong local_res8;

    if (param_2 != 0) {
        local_res8 = param_2;
        uVar2 = (*DAT_140c4a3c0)(&local_res8);
        in_RAX = uVar2 / DAT_140c4a3b0;
        ppuVar3 = (ulonglong **)(DAT_140c4a3b8 + (uVar2 % DAT_140c4a3b0) * 8);
        if (*(longlong *)(DAT_140c4a3b8 + (uVar2 % DAT_140c4a3b0) * 8) != 0) {
            while ((uVar2 != **ppuVar3 ||
                    (in_RAX = (*DAT_140c4a3c8)(&local_res8,*ppuVar3 + 2), (int)in_RAX == 0))) {
                ppuVar3 = (ulonglong **)(*ppuVar3 + 1);
                if (*ppuVar3 == (ulonglong *)0x0) {
                    return in_RAX;
                }
            }
            puVar1 = *ppuVar3;
            *ppuVar3 = (ulonglong *)puVar1[1];
            in_RAX = FUN_14018b900(puVar1,0);
            _DAT_140c4a3a8 = _DAT_140c4a3a8 + -1;
        }
    }
    return in_RAX;
}



ulonglong FUN_1405b2f10(undefined8 param_1,longlong param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    longlong local_res8;

    if (param_2 == 0) {
        return 0;
    }
    local_res8 = param_2;
    uVar3 = (*DAT_140c4a3c0)(&local_res8);
    puVar1 = *(ulonglong **)(DAT_140c4a3b8 + (uVar3 % DAT_140c4a3b0) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) && (iVar2 = (*DAT_140c4a3c8)(&local_res8,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



void FUN_1405b2fe0(int param_1)

{
    // WARNING: Could not recover jumptable at 0x0001405b2ff4. Too many branches
    // WARNING: Treating indirect jump as call
    (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_1405b3158 + (longlong)param_1 * 4))
    )(IMAGE_DOS_HEADER_140000000.e_magic + *(uint *)(&DAT_1405b3158 + (longlong)param_1 * 4));
    return;
}



void FUN_1405b31f0(longlong param_1,longlong *param_2)

{
    wchar_t *pwVar1;

    if (*(int *)(param_1 + 0x114) == 0) {
        if (*(uint *)(param_1 + 0x210) < 0x24) {
            pwVar1 = (wchar_t *)FUN_1405b2fe0();
        }
        else {
            pwVar1 = L"Unknown game command";
        }
        (**(code **)(*param_2 + 0x78))(param_2,&DAT_1409f3394,5,*(undefined4 *)(param_1 + 0x210),pwVar1)
                ;
        return;
    }
    FUN_1405c8bb0();
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405b3270(void)

{
    short sVar1;
    undefined8 uVar2;
    undefined4 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    short *psVar7;
    longlong *plVar8;
    undefined8 *puVar9;
    longlong **pplVar10;
    uint uVar11;
    longlong lVar12;

    pplVar10 = &DAT_140c89d80;
    lVar12 = 0x24;
    puVar9 = (undefined8 *)0x0;
    plVar8 = (longlong *)&DAT_140c89d80;
    do {
        puVar4 = (undefined8 *)*plVar8;
        if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
        }
        *plVar8 = 0;
        plVar8 = plVar8 + 1;
        lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar12 = FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (lVar12 != 0) {
        puVar4 = (undefined8 *)FUN_14077e0c0(lVar12);
    }
    DAT_140c89d80 = puVar4;
    lVar12 = FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (lVar12 != 0) {
        puVar4 = (undefined8 *)FUN_14077dd90(lVar12);
    }
    DAT_140c89d88 = puVar4;
    lVar12 = FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (lVar12 != 0) {
        puVar4 = (undefined8 *)FUN_14077dfa0(lVar12);
    }
    DAT_140c89d90 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b6d510;
        puVar4 = puVar5;
    }
    DAT_140c89d98 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b6d5d0;
        puVar4 = puVar5;
    }
    DAT_140c89da0 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        uVar2 = DAT_140c65898;
        *puVar5 = &PTR_FUN_140b77c70;
        uVar3 = FUN_1403982a0(uVar2,1);
        *(undefined4 *)((longlong)puVar5 + 0x114) = uVar3;
        puVar4 = puVar5;
    }
    _DAT_140c89da8 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b6d690;
        puVar4 = puVar5;
    }
    DAT_140c89dc8 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b6d150;
        puVar4 = puVar5;
    }
    DAT_140c89dd0 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b6d210;
        puVar4 = puVar5;
    }
    DAT_140c89e00 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b6d2d0;
        puVar4 = puVar5;
    }
    DAT_140c89dd8 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b6d390;
        puVar4 = puVar5;
    }
    DAT_140c89db0 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b6d450;
        puVar4 = puVar5;
    }
    DAT_140c89dc0 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b77730;
        puVar4 = puVar5;
    }
    _DAT_140c89de0 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b777f0;
        puVar4 = puVar5;
    }
    _DAT_140c89de8 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b778b0;
        puVar4 = puVar5;
    }
    _DAT_140c89df0 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b77970;
        puVar4 = puVar5;
    }
    _DAT_140c89df8 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b772b0;
        puVar4 = puVar5;
    }
    _DAT_140c89e08 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b77370;
        puVar4 = puVar5;
    }
    _DAT_140c89e10 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b77430;
        puVar4 = puVar5;
    }
    _DAT_140c89e18 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b775b0;
        puVar4 = puVar5;
    }
    _DAT_140c89e20 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b774f0;
        puVar4 = puVar5;
    }
    _DAT_140c89e28 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b77670;
        puVar4 = puVar5;
    }
    _DAT_140c89e38 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b76e30;
        puVar4 = puVar5;
    }
    DAT_140c89e50 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b76ef0;
        puVar4 = puVar5;
    }
    DAT_140c89e58 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b76fb0;
        puVar4 = puVar5;
    }
    _DAT_140c89e60 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x220,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *puVar5 = &PTR_FUN_140b77070;
        puVar4 = puVar5;
    }
    _DAT_140c89e68 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x230,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *(undefined4 *)(puVar5 + 0x44) = 0;
        *puVar5 = &PTR_FUN_140b77130;
        puVar4 = puVar5;
    }
    _DAT_140c89e70 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x230,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *(undefined4 *)(puVar5 + 0x44) = 0;
        *puVar5 = &PTR_FUN_140b771f0;
        puVar4 = puVar5;
    }
    _DAT_140c89e78 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x230,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *(undefined4 *)(puVar5 + 0x44) = 0;
        *puVar5 = &PTR_FUN_140b76b30;
        puVar4 = puVar5;
    }
    _DAT_140c89e80 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x230,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *(undefined4 *)(puVar5 + 0x44) = 0;
        *puVar5 = &PTR_FUN_140b76bf0;
        puVar4 = puVar5;
    }
    _DAT_140c89e88 = puVar4;
    puVar5 = (undefined8 *)FUN_14018b280(0x230,0);
    puVar4 = puVar9;
    if (puVar5 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar5,3);
        *(undefined4 *)(puVar5 + 0x44) = 0;
        *puVar5 = &PTR_FUN_140b76cb0;
        puVar4 = puVar5;
    }
    _DAT_140c89e90 = puVar4;
    puVar6 = (undefined8 *)FUN_14018b280(0x230,0);
    puVar4 = puVar9;
    puVar5 = puVar9;
    if (puVar6 != (undefined8 *)0x0) {
        FUN_1405c7150(puVar6,3);
        *(undefined4 *)(puVar6 + 0x44) = 0;
        *puVar6 = &PTR_FUN_140b76d70;
        puVar5 = puVar6;
    }
    do {
        _DAT_140c89e98 = puVar5;
        plVar8 = *pplVar10;
        if (plVar8 != (longlong *)0x0) {
            *(int *)(plVar8 + 0x42) = (int)puVar4;
            psVar7 = (short *)(**(code **)(*plVar8 + 0xb0))(plVar8);
            sVar1 = *psVar7;
            puVar5 = puVar9;
            while (sVar1 != 0) {
                puVar5 = (undefined8 *)((longlong)puVar5 + 1);
                sVar1 = psVar7[(longlong)puVar5];
            }
            FUN_14001c480(plVar8 + 2,psVar7,psVar7 + (longlong)puVar5);
        }
        uVar11 = (int)puVar4 + 1;
        pplVar10 = pplVar10 + 1;
        puVar4 = (undefined8 *)(ulonglong)uVar11;
        puVar5 = _DAT_140c89e98;
    } while (uVar11 < 0x24);
    return 0;
}



undefined8 * FUN_1405b3a00(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b6d750;
    FUN_1405c72a0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1405b3a40(void)

{
    longlong **pplVar1;
    longlong lVar2;

    pplVar1 = (longlong **)&DAT_140c89d80;
    lVar2 = 0x24;
    do {
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 0x30))();
        }
        pplVar1 = pplVar1 + 1;
        lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    return 0;
}



undefined8 FUN_1405b3a80(void)

{
    short sVar1;
    longlong *plVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    longlong **pplVar6;

    pplVar6 = (longlong **)&DAT_140c89d80;
    lVar5 = 0x24;
    do {
        plVar2 = *pplVar6;
        if (plVar2 != (longlong *)0x0) {
            psVar3 = (short *)(**(code **)(*plVar2 + 0xb0))();
            lVar4 = 0;
            sVar1 = *psVar3;
            while (sVar1 != 0) {
                lVar4 = lVar4 + 1;
                sVar1 = psVar3[lVar4];
            }
            FUN_14001c480(plVar2 + 2,psVar3,psVar3 + lVar4);
        }
        pplVar6 = pplVar6 + 1;
        lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    return 0;
}



undefined8 FUN_1405b3b30(float *param_1)

{
    int iVar1;

    iVar1 = FUN_1407ddb6c((double)*param_1);
    if (iVar1 != 0) {
        iVar1 = FUN_1407ddb6c((double)param_1[1]);
        if (iVar1 != 0) {
            iVar1 = FUN_1407ddb6c((double)param_1[2]);
            if (iVar1 != 0) {
                return 1;
            }
        }
    }
    return 0;
}



undefined8 FUN_1405b3b80(longlong param_1,uint *param_2,undefined4 param_3,int param_4,int *param_5)

{
    longlong lVar1;
    undefined8 uVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined4 local_res18 [2];

    if ((*(int *)(param_1 + 0xd50) == 0) && (*(int *)(param_1 + 0x80) != 0x12)) {
        return 0x80004005;
    }
    local_res18[0] = param_3;
    if ((param_5 != (int *)0x0) && (param_5[1] - 2U < 2)) {
        FUN_14079aaa0(param_5);
    }
    uVar4 = 0;
    if (*param_2 != 0) {
        do {
            uVar2 = FUN_1405b4ab0(param_1,local_res18,*(longlong *)(param_2 + 4) + uVar4 * 0x48,0,param_5)
                    ;
            if ((int)uVar2 < 0) {
                return uVar2;
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
            param_3 = local_res18[0];
        } while (uVar3 < *param_2);
    }
    if (param_5 != (int *)0x0) {
        if (*(longlong *)(param_5 + 0x24) == 0) {
            param_5[1] = 2;
            if ((*(longlong *)(param_5 + 0x16) != 0) || (*(longlong *)(param_5 + 0x18) != 0)) {
                FUN_140195960(param_5 + 2,-(*param_5 != 0) & 0x96,param_5 + 0x14,4);
            }
        }
        else {
            param_5[1] = 1;
        }
    }
    if (param_4 != 0) {
        FUN_1405b4f50(param_1,param_3);
        FUN_1405b5070(param_1,param_3);
        FUN_1405b82a0(param_1,param_3);
        for (lVar1 = *(longlong *)(param_1 + 0xf08); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xf18)) {
            FUN_1405b4ef0(lVar1,param_3);
        }
    }
    return 0;
}



ulonglong FUN_1405b3cf0(longlong param_1,undefined4 param_2)

{
    undefined4 *puVar1;
    ushort uVar2;
    uint uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    uint local_res8;
    undefined2 local_resc;
    undefined4 local_res10 [2];
    undefined4 local_48;
    undefined8 local_44;
    undefined4 *local_38;

    uVar5 = 0;
    uVar6 = *(undefined4 *)(param_1 + 0xf60);
    uVar7 = *(undefined4 *)(param_1 + 0xf64);
    local_44 = 8;
    local_res10[0] = param_2;
    puVar1 = (undefined4 *)FUN_14018c320(0,0x240);
    *puVar1 = 2;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    puVar1[4] = 0;
    puVar1[5] = 0;
    local_38 = puVar1;
    FUN_1401c9800(&local_res8,param_1 + 0xff0);
    puVar1[0x12] = 8;
    puVar1[0x14] = local_res8;
    *(undefined2 *)(puVar1 + 0x15) = local_resc;
    puVar1[0x16] = 0;
    FUN_1401c9800(&local_res8);
    puVar1[0x24] = 0xb;
    puVar1[0x26] = local_res8;
    *(undefined2 *)(puVar1 + 0x27) = local_resc;
    puVar1[0x28] = 0;
    uVar6 = *(undefined4 *)(param_1 + 0x1070);
    puVar1[0x36] = 0x18;
    puVar1[0x38] = uVar6;
    uVar6 = *(undefined4 *)(param_1 + 0x1088);
    puVar1[0x48] = 0x1b;
    puVar1[0x4a] = uVar6;
    puVar1[0x5a] = 0xe;
    puVar1[0x5c] = *(undefined4 *)(param_1 + 0x10a0);
    puVar1[0x5d] = *(undefined4 *)(param_1 + 0x10a4);
    puVar1[0x5e] = *(undefined4 *)(param_1 + 0x10a8);
    puVar1[0x5f] = 0;
    local_res8 = *(uint *)(param_1 + 0x10e0);
    uVar3 = local_res8 & 0x7fffffff;
    if (uVar3 < 0x33800000) {
        uVar2 = 0;
    }
    else if (uVar3 < 0x387ff000) {
        uVar2 = (ushort)(((local_res8 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar3 >> 0x17) & 0x1f))
                         + 0x1000 >> 0xd);
    }
    else if (uVar3 < 0x47fff000) {
        uVar2 = (ushort)(uVar3 + 0xc8001000 >> 0xd);
    }
    else {
        uVar2 = 0x43ff;
    }
    puVar1[0x6c] = 0x16;
    local_48 = 7;
    *(ushort *)(puVar1 + 0x6e) = uVar2 | (ushort)(local_res8 >> 0x10) & 0x8000;
    puVar1[0x6f] = 0;
    uVar4 = uVar5;
    do {
        uVar3 = FUN_1405b4ab0(param_1,local_res10,puVar1 + uVar4 * 0x12,0,0);
        if ((int)uVar3 < 0) {
            uVar5 = (ulonglong)uVar3;
            break;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
    } while (uVar3 < 7);
    FUN_14079a4f0(&local_48);
    FUN_14018b900(local_38,0);
    return uVar5;
}



longlong FUN_1405b3f30(longlong param_1)

{
    longlong lVar1;

    if (*(longlong *)(param_1 + 0xf28) != -1) {
        return *(longlong *)(param_1 + 0xf28);
    }
    if (*(longlong *)(param_1 + 0xf00) != 0) {
        lVar1 = FUN_1405b3f30();
        *(longlong *)(param_1 + 0xf28) = lVar1 + 1;
        return lVar1 + 1;
    }
    *(undefined8 *)(param_1 + 0xf28) = 0;
    return *(longlong *)(param_1 + 0xf28);
}



longlong FUN_1405b3f90(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0xf00);
    if (((lVar1 == 0) || ((*(int *)(lVar1 + 0x80) - 3U & 0xfffffff9) != 0)) ||
        (*(int *)(lVar1 + 0x80) == 5)) {
        lVar1 = param_1;
    }
    return lVar1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405b3fc0(longlong param_1,longlong param_2)

{
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
    float fVar12;
    float fVar13;
    float fVar14;
    undefined4 *puVar15;
    undefined4 uVar16;
    float fVar17;
    float fVar18;
    undefined4 local_res8;
    undefined2 local_resc;
    undefined4 local_88;
    undefined4 local_84;
    undefined4 local_80;
    undefined local_78 [8];
    undefined4 uStack112;
    undefined local_68 [16];
    undefined local_58 [16];
    undefined local_48 [16];
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 *local_28;

    if ((param_1 == *(longlong *)(DAT_140c65898 + 0x6490)) && (*(int *)(param_1 + 0xd50) != 0)) {
        fVar17 = *(float *)*(undefined (*) [16])(param_1 + 0x11e0);
        fVar18 = *(float *)(param_1 + 0x11e4);
        _local_78 = *(undefined (*) [16])(param_1 + 0x11e0);
        local_58 = *(undefined (*) [16])(param_1 + 0x1130);
        local_48 = *(undefined (*) [16])(param_1 + 0x1120);
        local_30 = 0;
        uVar16 = 0;
        fVar1 = *(float *)*(undefined (*) [16])(param_1 + 0x1140);
        fVar2 = *(float *)(param_1 + 0x1144);
        local_68 = *(undefined (*) [16])(param_1 + 0x1140);
        if (param_2 != 0) {
            fVar3 = *(float *)(param_2 + 0x1200);
            fVar4 = *(float *)(param_2 + 0x1204);
            fVar5 = *(float *)(param_2 + 0x1208);
            fVar6 = *(float *)(param_2 + 0x120c);
            fVar7 = *(float *)(param_2 + 0x11f0);
            fVar8 = *(float *)(param_2 + 0x11f4);
            fVar9 = *(float *)(param_2 + 0x11f8);
            fVar10 = *(float *)(param_2 + 0x11fc);
            fVar11 = *(float *)(param_2 + 0x1210);
            fVar12 = *(float *)(param_2 + 0x1214);
            fVar13 = *(float *)(param_2 + 0x1218);
            fVar14 = *(float *)(param_2 + 0x121c);
            uVar16 = *(undefined4 *)(param_2 + 8);
            _local_78 = CONCAT412(fVar17 * fVar10 + fVar18 * fVar6 + fVar14 * 0.0 +
                                  *(float *)(param_2 + 0x122c),
                                  CONCAT48(fVar17 * fVar9 + fVar18 * fVar5 + fVar13 * 0.0 +
                                           *(float *)(param_2 + 0x1228),
                                           CONCAT44(fVar17 * fVar8 + fVar18 * fVar4 + fVar12 * 0.0 +
                                                    *(float *)(param_2 + 0x1224),
                                                    fVar17 * fVar7 + fVar18 * fVar3 + fVar11 * 0.0 +
                                                    *(float *)(param_2 + 0x1220))));
            local_68 = CONCAT412(fVar1 * fVar10 + fVar2 * fVar6 + fVar14 * 0.0,
                                 CONCAT48(fVar1 * fVar9 + fVar2 * fVar5 + fVar13 * 0.0,
                                          CONCAT44(fVar1 * fVar8 + fVar2 * fVar4 + fVar12 * 0.0,
                                                   fVar1 * fVar7 + fVar2 * fVar3 + fVar11 * 0.0)));
            fVar17 = *(float *)(param_1 + 0x1030);
            fVar18 = *(float *)(param_1 + 0x1034);
            local_58 = CONCAT412(fVar17 * fVar10 + fVar18 * fVar6 + fVar14 * 0.0,
                                 CONCAT48(fVar17 * fVar9 + fVar18 * fVar5 + fVar13 * 0.0,
                                          CONCAT44(fVar17 * fVar8 + fVar18 * fVar4 + fVar12 * 0.0,
                                                   fVar17 * fVar7 + fVar18 * fVar3 + fVar11 * 0.0)));
            fVar17 = *(float *)(param_1 + 0xff0) - *(float *)(param_2 + 0x1120);
            fVar18 = *(float *)(param_1 + 0xff4) - *(float *)(param_2 + 0x1124);
            local_48 = CONCAT412(fVar17 * fVar10 + fVar18 * fVar6 + fVar14 * 0.0,
                                 CONCAT48(fVar17 * fVar9 + fVar18 * fVar5 + fVar13 * 0.0,
                                          CONCAT44(fVar17 * fVar8 + fVar18 * fVar4 + fVar12 * 0.0,
                                                   fVar17 * fVar7 + fVar18 * fVar3 + fVar11 * 0.0)));
        }
        FUN_1401b3170(&local_88,local_68);
        local_34 = 8;
        puVar15 = (undefined4 *)FUN_14018c320(0,0x240,8);
        *puVar15 = 1;
        puVar15[2] = uVar16;
        puVar15[0x12] = 2;
        puVar15[0x14] = local_78._0_4_;
        puVar15[0x15] = local_78._4_4_;
        puVar15[0x16] = uStack112;
        puVar15[0x17] = 0;
        puVar15[0x24] = 0xe;
        puVar15[0x26] = local_88;
        puVar15[0x27] = local_84;
        puVar15[0x28] = local_80;
        puVar15[0x29] = 0;
        local_28 = puVar15;
        FUN_1401c9800(&local_res8,local_58);
        puVar15[0x36] = 0xb;
        puVar15[0x38] = local_res8;
        *(undefined2 *)(puVar15 + 0x39) = local_resc;
        puVar15[0x3a] = 0;
        FUN_1401c9800(&local_res8,local_48);
        uVar16 = DAT_140c636a8;
        puVar15[0x48] = 8;
        puVar15[0x4a] = local_res8;
        *(undefined2 *)(puVar15 + 0x4b) = local_resc;
        puVar15[0x4c] = 0;
        local_38 = 5;
        FUN_1405b3b80(param_1,&local_38,uVar16,0,param_1 + 0xdf0);
        FUN_14057a190(DAT_140c65898,&local_38);
        FUN_1405b4e90(param_1,DAT_140c636a8);
        FUN_14079a4f0(&local_38);
        FUN_14018b900(local_28,0);
    }
    else {
        *(undefined8 *)(param_1 + 0xf00) = 0;
        if (*(undefined8 **)(param_1 + 0xf10) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0xf10) = *(undefined8 *)(param_1 + 0xf18);
        }
        if (*(longlong *)(param_1 + 0xf18) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0xf18) + 0xf10) = *(undefined8 *)(param_1 + 0xf10);
        }
        *(undefined8 *)(param_1 + 0xf10) = 0;
        *(undefined8 *)(param_1 + 0xf18) = 0;
    }
    return;
}



float * FUN_1405b42d0(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    float *in_RAX;
    float *pfVar3;
    int iVar4;
    undefined8 extraout_XMM0_Qa;
    undefined4 uVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    undefined4 uVar9;

    fVar7 = *(float *)(param_1 + 0x12c0);
    uVar9 = 0;
    if (*(int *)(param_1 + 0x135c) == 0) {
        return in_RAX;
    }
    uVar1 = FUN_1408fd190();
    uVar5 = (undefined4)((ulonglong)extraout_XMM0_Qa >> 0x20);
    fVar8 = (((float)extraout_XMM0_Qa - fVar7) + 3.141593) * 0.1591549;
    iVar4 = (int)fVar8;
    fVar6 = fVar8;
    if ((iVar4 != -0x80000000) && ((float)iVar4 != fVar8)) {
        uVar2 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar5,CONCAT48(uVar5,extraout_XMM0_Qa)) >> 0x40
                ,0),CONCAT44(fVar8,fVar8)) &
                               (undefined  [16])0xffffffffffffffff);
        fVar6 = (float)(iVar4 - (uVar2 & 1));
    }
    pfVar3 = *(float **)(param_1 + 0x18);
    fVar8 = 3.141593;
    fVar6 = (fVar8 - fVar6) * 6.283185 - 3.141593;
    if (pfVar3 != (float *)0x0) {
        pfVar3 = *(float **)(pfVar3 + 0x32);
        if (*pfVar3 != 0.0) {
            fVar8 = DAT_140c3b438 * 0.005555556 * *pfVar3;
        }
    }
    if (fVar8 < fVar6) {
        fVar7 = (fVar8 + fVar7 + 3.141593) * 0.1591549;
        if (((int)fVar7 != -0x80000000) && ((float)(int)fVar7 != fVar7)) {
            uVar2 = movmskps((int)pfVar3,ZEXT816(CONCAT44(fVar7,fVar7)));
            pfVar3 = (float *)(ulonglong)(uVar2 & 1);
        }
        return pfVar3;
    }
    if (fVar6 < (float)((uint)fVar8 ^ 0x80000000)) {
        fVar7 = ((fVar7 - fVar8) + 3.141593) * 0.1591549;
        if (((int)fVar7 != -0x80000000) && ((float)(int)fVar7 != fVar7)) {
            uVar2 = movmskps((int)pfVar3,
                             CONCAT88(SUB168(CONCAT412(uVar9,CONCAT48(uVar9,CONCAT44(uVar9,fVar7))) >>
                                                                                                    0x40,0),
                                      (ulonglong)(uint)fVar7 | CONCAT44(uVar9,fVar7) << 0x20));
            pfVar3 = (float *)(ulonglong)(uVar2 & 1);
        }
        return pfVar3;
    }
    return pfVar3;
}



undefined (*) [16] FUN_1405b44a0(longlong param_1,undefined (*param_2) [16])

{
undefined4 uVar1;
undefined4 uVar2;
undefined4 uVar3;
uint uVar4;

if (*(int *)(param_1 + 0x135c) != 0) {
uVar3 = FUN_1405b42d0();
uVar4 = FUN_1408fe3d0();
uVar4 = uVar4 ^ 0x80000000;
uVar3 = FUN_1408fc950(uVar3);
*param_2 = ZEXT1216(CONCAT48(uVar3,(ulonglong)uVar4) ^ (undefined  [12])0x80000000);
return param_2;
}
uVar3 = *(undefined4 *)(param_1 + 0x1144);
uVar1 = *(undefined4 *)(param_1 + 0x1148);
uVar2 = *(undefined4 *)(param_1 + 0x114c);
*(undefined4 *)*param_2 = *(undefined4 *)(param_1 + 0x1140);
*(undefined4 *)(*param_2 + 4) = uVar3;
*(undefined4 *)(*param_2 + 8) = uVar1;
*(undefined4 *)(*param_2 + 0xc) = uVar2;
return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_1405b4520(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    uint uVar4;

    if (*(int *)(param_1 + 0x135c) != 0) {
        uVar3 = FUN_1405b42d0();
        uVar4 = FUN_1408fe3d0();
        uVar3 = FUN_1408fc950(uVar3);
        param_2[8] = uVar4;
        param_2[1] = 0;
        *(undefined8 *)(param_2 + 3) = 0;
        *param_2 = uVar3;
        param_2[10] = uVar3;
        param_2[7] = 0;
        param_2[9] = 0;
        param_2[0xb] = 0;
        param_2[2] = uVar4 ^ 0x80000000;
        *(undefined8 *)(param_2 + 5) = 0x3f800000;
        uVar2 = uRam0000000140c7844c;
        uVar1 = uRam0000000140c78448;
        uVar3 = uRam0000000140c78444;
        param_2[0xc] = _DAT_140c78440;
        param_2[0xd] = uVar3;
        param_2[0xe] = uVar1;
        param_2[0xf] = uVar2;
        return param_2;
    }
    uVar3 = *(undefined4 *)(param_1 + 0x11b4);
    uVar1 = *(undefined4 *)(param_1 + 0x11b8);
    uVar2 = *(undefined4 *)(param_1 + 0x11bc);
    *param_2 = *(undefined4 *)(param_1 + 0x11b0);
    param_2[1] = uVar3;
    param_2[2] = uVar1;
    param_2[3] = uVar2;
    uVar3 = *(undefined4 *)(param_1 + 0x11c4);
    uVar1 = *(undefined4 *)(param_1 + 0x11c8);
    uVar2 = *(undefined4 *)(param_1 + 0x11cc);
    param_2[4] = *(undefined4 *)(param_1 + 0x11c0);
    param_2[5] = uVar3;
    param_2[6] = uVar1;
    param_2[7] = uVar2;
    uVar3 = *(undefined4 *)(param_1 + 0x11d4);
    uVar1 = *(undefined4 *)(param_1 + 0x11d8);
    uVar2 = *(undefined4 *)(param_1 + 0x11dc);
    param_2[8] = *(undefined4 *)(param_1 + 0x11d0);
    param_2[9] = uVar3;
    param_2[10] = uVar1;
    param_2[0xb] = uVar2;
    uVar3 = *(undefined4 *)(param_1 + 0x11e4);
    uVar1 = *(undefined4 *)(param_1 + 0x11e8);
    uVar2 = *(undefined4 *)(param_1 + 0x11ec);
    param_2[0xc] = *(undefined4 *)(param_1 + 0x11e0);
    param_2[0xd] = uVar3;
    param_2[0xe] = uVar1;
    param_2[0xf] = uVar2;
    return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

float FUN_1405b45e0(longlong param_1,undefined4 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    int *piVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    float fVar6;
    float fVar7;

    if (param_3 == 5) {
        param_3 = 4;
    }
    if (((*(int *)(param_1 + 0x80) - 0x18U < 2) && (*(int *)(param_1 + 0x2b0) != 0)) &&
        (lVar1 = FUN_1403d90d0(), lVar1 != 0)) {
        param_2 = *(undefined4 *)(lVar1 + 0x1088);
        if (*(int *)(lVar1 + 0x1320) != 2) {
            param_3 = *(int *)(lVar1 + 0x1320);
        }
        if ((*(int *)(param_1 + 0x2ac) == 0) && ((param_3 == 0 || (param_3 - 4U < 2)))) {
            if ((DAT_140dc34a8 & 1) == 0) {
                DAT_140dc34a8 = DAT_140dc34a8 | 1;
                lVar2 = FUN_140200220(0x4ff);
                if (lVar2 == 0) {
                    _DAT_140dc34ac = 1.0;
                }
                else {
                    _DAT_140dc34ac = *(float *)(lVar2 + 0x18);
                }
            }
            fVar6 = (float)FUN_1405b45e0(lVar1,param_2);
            if (0.0 < fVar6 * _DAT_140dc34ac) {
                return fVar6 * _DAT_140dc34ac;
            }
        }
    }
    if ((*(longlong *)(param_1 + 0x18) != 0) && (*(int *)(*(longlong *)(param_1 + 0x18) + 4) == 7)) {
        uVar5 = 0;
        if (*(ulonglong *)(param_1 + 0x198) != 0) {
            piVar3 = *(int **)(param_1 + 400);
            uVar4 = uVar5;
            do {
                if ((*piVar3 == 0) && (*(char *)(piVar3 + 1) == '\0')) {
                    uVar5 = (ulonglong)(uint)(*(int **)(param_1 + 400))[uVar4 * 3 + 2];
                    break;
                }
                uVar4 = uVar4 + 1;
                piVar3 = piVar3 + 3;
            } while (uVar4 < *(ulonglong *)(param_1 + 0x198));
        }
        lVar1 = FUN_1403d90d0(DAT_140c65898,uVar5);
        if (lVar1 != 0) {
            fVar7 = *(float *)(lVar1 + 0xbbc);
            fVar6 = (float)FUN_1405b4780(param_1,param_2,param_3);
            fVar6 = fVar6 * fVar7;
            goto LAB_1405b4758;
        }
    }
    fVar6 = (float)FUN_1405b4780(param_1,param_2,param_3);
    LAB_1405b4758:
    return fVar6 * *(float *)(param_1 + 0x8e4);
}



undefined8 FUN_1405b4780(longlong param_1,int param_2,int param_3)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    float fVar4;
    undefined4 uVar5;
    float fVar6;
    undefined4 uVar7;
    float fVar8;
    undefined4 uVar9;
    float local_res18;

    lVar1 = *(longlong *)(param_1 + 0xd08);
    fVar8 = 0.0;
    uVar9 = 0;
    if (lVar1 == 0) {
        fVar4 = *(float *)(&DAT_140b21328 + (longlong)param_2 * 4);
        uVar5 = 0;
        local_res18 = *(float *)(&DAT_140b21338 + (longlong)param_2 * 4);
        uVar3 = 0;
        if (1 < *(int *)(param_1 + 0x54)) {
            if ((DAT_140dc34b0 & 4) == 0) {
                DAT_140dc34b0 = DAT_140dc34b0 | 4;
                lVar1 = FUN_140200220(0x2eb);
                if (lVar1 == 0) {
                    DAT_140dc34bc = 0.9;
                }
                else {
                    DAT_140dc34bc = *(float *)(lVar1 + 0x18);
                }
            }
            if ((DAT_140dc34b0 & 8) == 0) {
                DAT_140dc34b0 = DAT_140dc34b0 | 8;
                lVar1 = FUN_140200220(0x2eb);
                if (lVar1 == 0) {
                    DAT_140dc34c0 = 0.6;
                }
                else {
                    DAT_140dc34c0 = *(float *)(lVar1 + 0x1c);
                }
            }
            if ((*(int *)(param_1 + 0x80) == 0x14) || (*(int *)(param_1 + 0x80) == 0x17)) {
                fVar4 = fVar4 * DAT_140dc34bc;
                local_res18 = local_res18 * DAT_140dc34bc;
            }
            else {
                fVar4 = fVar4 * DAT_140dc34c0;
                local_res18 = local_res18 * DAT_140dc34c0;
            }
        }
        lVar1 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
        if (lVar1 != 0) {
            if (param_2 == 0) {
                local_res18 = *(float *)(lVar1 + 0x34);
                uVar3 = 0;
            }
            else if (param_2 == 1) {
                local_res18 = *(float *)(lVar1 + 0x3c);
                uVar3 = 0;
            }
            else if (param_2 == 2) {
                local_res18 = *(float *)(lVar1 + 0x40);
                uVar3 = 0;
            }
            else if (param_2 == 3) {
                local_res18 = *(float *)(lVar1 + 0x38);
                uVar3 = 0;
            }
        }
    }
    else {
        if (param_2 == 0) {
            local_res18 = *(float *)(lVar1 + 0x90);
            fVar4 = *(float *)(lVar1 + 0xa0);
        }
        else if (param_2 == 1) {
            local_res18 = *(float *)(lVar1 + 0x98);
            fVar4 = *(float *)(lVar1 + 0xa8);
        }
        else if (param_2 == 2) {
            local_res18 = *(float *)(lVar1 + 0x9c);
            fVar4 = *(float *)(lVar1 + 0xac);
        }
        else {
            fVar4 = local_res18;
            if (param_2 == 3) {
                local_res18 = *(float *)(lVar1 + 0x94);
                fVar4 = *(float *)(lVar1 + 0xa4);
            }
        }
        uVar5 = 0;
        uVar3 = 0;
        if ((((*(int *)(param_1 + 0x80) - 0x18U < 2) && (*(int *)(param_1 + 0x2ac) != 0)) &&
             (*(int *)(param_1 + 0x2b0) != 0)) && (lVar1 = FUN_1403d90d0(DAT_140c65898), lVar1 != 0)) {
            fVar6 = 1.0;
            uVar7 = 0;
            if ((DAT_140dc34b0 & 1) == 0) {
                DAT_140dc34b0 = DAT_140dc34b0 | 1;
                lVar1 = FUN_140200220(0x4ff);
                uVar2 = uVar7;
                DAT_140dc34b4 = fVar6;
                if (lVar1 != 0) {
                    uVar2 = 0;
                    DAT_140dc34b4 = *(float *)(lVar1 + 0x1c);
                }
            }
            else {
                uVar2 = 0;
            }
            if ((DAT_140dc34b0 & 2) == 0) {
                DAT_140dc34b0 = DAT_140dc34b0 | 2;
                lVar1 = FUN_140200220(0x4ff);
                if (lVar1 != 0) {
                    fVar6 = *(float *)(lVar1 + 0x20);
                    uVar7 = 0;
                }
                uVar2 = 0;
                DAT_140dc34b8 = fVar6;
            }
            else {
                uVar7 = 0;
            }
            if (fVar8 < DAT_140dc34b8) {
                fVar4 = DAT_140dc34b8;
                uVar5 = uVar7;
            }
            if (fVar8 < DAT_140dc34b4) {
                local_res18 = DAT_140dc34b4;
                uVar3 = uVar2;
            }
        }
    }
    fVar6 = local_res18;
    if (param_3 == 0) {
        fVar4 = fVar4 * 0.5;
    }
    else {
        if ((param_3 == 1) || (param_3 == 3)) goto LAB_1405b4a8c;
        if (param_3 != 4) {
            fVar6 = fVar8;
            uVar3 = uVar9;
            if (param_3 != 5) goto LAB_1405b4a8c;
            fVar4 = fVar4 * 1.5;
        }
    }
    fVar6 = fVar4;
    uVar3 = uVar5;
    if (fVar4 <= local_res18) {
        fVar6 = local_res18;
    }
    LAB_1405b4a8c:
    return CONCAT44(uVar3,fVar6);
}



ulonglong FUN_1405b4ab0(longlong param_1,int *param_2,undefined4 *param_3,longlong param_4,
                        undefined4 *param_5)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    undefined8 *puVar9;
    longlong *plVar10;
    longlong **pplVar11;
    undefined8 *puVar12;

    switch(*param_3) {
        case 0:
            if (param_4 != 0) {
                *param_2 = (int)(longlong)
                        ((float)(ulonglong)
                                (uint)(param_3[2] -
                                       *(int *)(param_4 + 0x10 + (ulonglong)*(uint *)(param_4 + 4) * 8)
                        ) * *(float *)(param_4 + 8) + *(float *)(param_4 + 0xc)) +
                           *(int *)(param_4 + 0x14 + (ulonglong)*(uint *)(param_4 + 4) * 8);
            }
            return 0;
        case 1:
            uVar6 = FUN_1407135f0(param_1 + 0xf40,*param_2,param_3 + 2);
            return uVar6;
        case 2:
            uVar6 = FUN_1407138f0(param_1 + 0xf60,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 3:
            uVar6 = FUN_140713ab0(param_1 + 0xf60,*param_2,param_3 + 2);
            return uVar6;
        case 4:
            uVar6 = FUN_140713c00(param_1 + 0xf60,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 5:
            uVar6 = FUN_140713cf0(param_1 + 0xf60,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 6:
            uVar6 = FUN_140713e80(param_1 + 0xf60,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 7:
            iVar1 = *param_2;
            puVar7 = (undefined8 *)FUN_14018b280(0x70);
            puVar12 = (undefined8 *)0x0;
            puVar9 = puVar12;
            if (puVar7 != (undefined8 *)0x0) {
                puVar7[3] = 0;
                puVar7[4] = 0;
                puVar7[5] = 0;
                puVar7[6] = 0;
                *puVar7 = &PTR_LAB_140b73cb8;
                puVar9 = puVar7;
            }
            uVar5 = FUN_1407820a0(puVar9,iVar1,param_3 + 2,param_5);
            uVar6 = (ulonglong)uVar5;
            if ((int)uVar5 < 0) {
                if (puVar9 != (undefined8 *)0x0) {
                    (**(code **)*puVar9)();
                }
            }
            else {
                if (puVar9[5] == 0) {
                    plVar8 = (longlong *)(param_1 + 0xfe8);
                    lVar3 = *plVar8;
                    while (lVar3 != 0) {
                        plVar8 = (longlong *)(*plVar8 + 0x30);
                        lVar3 = *plVar8;
                    }
                    puVar9[5] = plVar8;
                    puVar9[6] = puVar12;
                    *plVar8 = (longlong)puVar9;
                }
                uVar6 = 0;
            }
            return uVar6;
        case 8:
            iVar1 = *param_2;
            plVar8 = *(longlong **)(param_1 + 0x1020);
            plVar10 = *(longlong **)(param_1 + 0x1018);
            pplVar11 = (longlong **)(param_1 + 0x1020);
            if (plVar8 != (longlong *)0x0) {
        plVar10 = plVar8;
        for (plVar8 = (longlong *)plVar8[6]; plVar8 != (longlong *)0x0; plVar8 = (longlong *)plVar8[6]
        ) {
            plVar10 = plVar8;
        }
    }
            if (((param_3[4] == 0) || (plVar10 == (longlong *)0x0)) ||
            (iVar4 = (**(code **)(*plVar10 + 8))(), iVar4 != 7)) {
        plVar8 = (longlong *)FUN_14018b280();
        plVar10 = (longlong *)0x0;
        if (plVar8 != (longlong *)0x0) {
            plVar8[3] = 0;
            plVar8[4] = 0;
            plVar8[5] = 0;
            plVar8[6] = 0;
            *plVar8 = (longlong)&PTR_FUN_140b73ca0;
            plVar8[7] = 0;
            *(undefined4 *)(plVar8 + 8) = 0;
            plVar8[9] = 0;
            plVar8[10] = 0;
            plVar10 = plVar8;
        }
        uVar2 = param_3[4];
        *(int *)(plVar10 + 1) = iVar1;
        *(undefined4 *)((longlong)plVar10 + 0xc) = uVar2;
        plVar10[2] = 0;
        if (plVar10[5] == 0) {
            plVar8 = *pplVar11;
            while (plVar8 != (longlong *)0x0) {
                pplVar11 = (longlong **)(*pplVar11 + 6);
                plVar8 = *pplVar11;
            }
            plVar10[5] = (longlong)pplVar11;
            plVar10[6] = 0;
            *pplVar11 = plVar10;
        }
    }
            FUN_1401c9770(param_3 + 2);
            FUN_1401c9770((longlong)param_3 + 10);
            FUN_1401c9770(param_3 + 3);
            FUN_1407834b0(plVar10 + 7,iVar1,&stack0xffffffffffffffe8);
            if ((param_5 != (undefined4 *)0x0) && (param_3[4] != 0)) {
                *param_5 = 1;
            }
            return 0;
        case 9:
            uVar6 = FUN_140714be0(param_1 + 0xff0,*param_2,param_3 + 2);
            return uVar6;
        case 10:
            uVar6 = FUN_140714ce0(param_1 + 0xff0,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 0xb:
            uVar6 = FUN_140715020(param_1 + 0x1030,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 0xc:
            uVar6 = FUN_140715170(param_1 + 0x1030,*param_2,param_3 + 2);
            return uVar6;
        case 0xd:
            uVar6 = FUN_140715270(param_1 + 0x1030,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 0xe:
            uVar6 = FUN_140715350(param_1 + 0x10a0,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 0xf:
            uVar6 = FUN_140715470(param_1 + 0x10a0,*param_2,param_3 + 2);
            return uVar6;
        case 0x10:
            uVar6 = FUN_140715570(param_1 + 0x10a0,*param_2,param_3 + 2);
            return uVar6;
        case 0x11:
            iVar1 = *param_2;
            puVar7 = (undefined8 *)FUN_14018b280(0x68);
            puVar9 = (undefined8 *)0x0;
            if (puVar7 != (undefined8 *)0x0) {
                puVar7[3] = 0;
                puVar7[4] = 0;
                puVar7[5] = 0;
                puVar7[6] = 0;
                puVar7[7] = 0;
                *puVar7 = &PTR_LAB_140b77d50;
                puVar9 = puVar7;
            }
            uVar5 = FUN_140782830(puVar9,iVar1,param_3 + 2);
            uVar6 = (ulonglong)uVar5;
            if ((int)uVar5 < 0) {
                if (puVar9 != (undefined8 *)0x0) {
                    (**(code **)*puVar9)(puVar9,1);
                }
            }
            else {
                if (puVar9[5] == 0) {
                    plVar8 = (longlong *)(param_1 + 0x10d0);
                    lVar3 = *(longlong *)(param_1 + 0x10d0);
                    while (lVar3 != 0) {
                        plVar8 = (longlong *)(*plVar8 + 0x30);
                        lVar3 = *plVar8;
                    }
                    puVar9[5] = plVar8;
                    puVar9[6] = 0;
                    *plVar8 = (longlong)puVar9;
                }
                uVar6 = 0;
            }
            return uVar6;
        case 0x12:
            iVar1 = *param_2;
            puVar7 = (undefined8 *)FUN_14018b280(0x40);
            puVar9 = (undefined8 *)0x0;
            if (puVar7 != (undefined8 *)0x0) {
                puVar7[3] = 0;
                puVar7[4] = 0;
                puVar7[5] = 0;
                puVar7[6] = 0;
                *puVar7 = &PTR_LAB_140b73b98;
                puVar9 = puVar7;
            }
            uVar2 = param_3[3];
            *(int *)(puVar9 + 1) = iVar1;
            puVar9[2] = 0;
            *(undefined4 *)((longlong)puVar9 + 0xc) = uVar2;
            if ((param_5 != (undefined4 *)0x0) && (param_3[3] != 0)) {
                *param_5 = 1;
            }
            *(undefined4 *)(puVar9 + 7) = param_3[2];
            if (puVar9[5] == 0) {
                plVar8 = (longlong *)(param_1 + 0x10d0);
                lVar3 = *(longlong *)(param_1 + 0x10d0);
                while (lVar3 != 0) {
                    plVar8 = (longlong *)(*plVar8 + 0x30);
                    lVar3 = *plVar8;
                }
                puVar9[5] = plVar8;
                puVar9[6] = 0;
                *plVar8 = (longlong)puVar9;
            }
            return 0;
        case 0x13:
            iVar1 = *param_2;
            puVar7 = (undefined8 *)FUN_14018b280(0x50);
            puVar9 = (undefined8 *)0x0;
            if (puVar7 != (undefined8 *)0x0) {
                puVar7[3] = 0;
                puVar7[4] = 0;
                puVar7[5] = 0;
                puVar7[6] = 0;
                *puVar7 = &PTR_LAB_140b73bb0;
                puVar9 = puVar7;
            }
            uVar2 = param_3[5];
            *(int *)(puVar9 + 1) = iVar1;
            puVar9[2] = 0;
            *(undefined4 *)((longlong)puVar9 + 0xc) = uVar2;
            if ((param_5 != (undefined4 *)0x0) && (param_3[5] != 0)) {
                *param_5 = 1;
            }
            *(undefined (*) [16])(puVar9 + 8) = ZEXT1216(*(undefined (*) [12])(param_3 + 2));
            if (puVar9[5] == 0) {
                plVar8 = (longlong *)(param_1 + 0x10d0);
                lVar3 = *(longlong *)(param_1 + 0x10d0);
                while (lVar3 != 0) {
                    plVar8 = (longlong *)(*plVar8 + 0x30);
                    lVar3 = *plVar8;
                }
                puVar9[5] = plVar8;
                puVar9[6] = 0;
                *plVar8 = (longlong)puVar9;
            }
            return 0;
        case 0x14:
            break;
        case 0x15:
            uVar6 = FUN_1407159b0(param_1 + 0x10a0,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 0x16:
            uVar6 = FUN_140715f60(param_1 + 0x10e0,*param_2,param_3 + 2,param_5);
            return uVar6;
        case 0x17:
            iVar1 = *param_2;
            puVar7 = (undefined8 *)FUN_14018b280(0x70);
            puVar9 = (undefined8 *)0x0;
            if (puVar7 != (undefined8 *)0x0) {
                puVar7[3] = 0;
                puVar7[4] = 0;
                puVar7[5] = 0;
                puVar7[6] = 0;
                *puVar7 = &PTR_FUN_140b73b68;
                puVar7[7] = 0;
                puVar7[8] = 0;
                puVar7[9] = 0;
                puVar7[10] = 0;
                puVar7[0xb] = 0;
                puVar9 = puVar7;
            }
            uVar5 = FUN_140783090(puVar9,iVar1,param_3 + 2,param_4,param_5);
            if ((int)uVar5 < 0) {
                if (puVar9 != (undefined8 *)0x0) {
                    (**(code **)*puVar9)(puVar9,1);
                }
                return (ulonglong)uVar5;
            }
            if (puVar9[5] == 0) {
                plVar8 = (longlong *)(param_1 + 0x10f8);
                lVar3 = *(longlong *)(param_1 + 0x10f8);
                while (lVar3 != 0) {
                    plVar8 = (longlong *)(*plVar8 + 0x30);
                    lVar3 = *plVar8;
                }
                puVar9[5] = plVar8;
                puVar9[6] = 0;
                *plVar8 = (longlong)puVar9;
            }
            return 0;
        case 0x18:
            uVar6 = FUN_1407163d0(param_1 + 0x1070,*param_2,param_3 + 2);
            return uVar6;
        case 0x19:
            uVar6 = FUN_1407164d0(param_1 + 0x1070,*param_2,param_3 + 2);
            return uVar6;
        case 0x1a:
            uVar6 = FUN_140716610(param_1 + 0x1070,*param_2,param_3 + 2);
            return uVar6;
        case 0x1b:
            uVar6 = FUN_1407166b0(param_1 + 0x1088,*param_2,param_3 + 2);
            return uVar6;
        case 0x1c:
            uVar6 = FUN_1407167b0(param_1 + 0x1088,*param_2,param_3 + 2);
            return uVar6;
        case 0x1d:
            uVar6 = FUN_1407168f0(param_1 + 0x1088,*param_2);
            return uVar6;
        default:
            FUN_1401a3130(5,2,&stack0x00000018,*param_3);
            return 0x80004005;
    }
    iVar1 = *param_2;
    puVar7 = (undefined8 *)FUN_14018b280(0x50);
    puVar9 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
        puVar7[3] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = 0;
        *puVar7 = &PTR_LAB_140b73bc8;
        puVar9 = puVar7;
    }
    uVar5 = FUN_140782ea0(puVar9,iVar1,param_3 + 2,param_5);
    if ((int)uVar5 < 0) {
        if (puVar9 != (undefined8 *)0x0) {
            (**(code **)*puVar9)(puVar9,1);
        }
        return (ulonglong)uVar5;
    }
    if (puVar9[5] == 0) {
        plVar8 = (longlong *)(param_1 + 0x10d0);
        lVar3 = *(longlong *)(param_1 + 0x10d0);
        while (lVar3 != 0) {
            plVar8 = (longlong *)(*plVar8 + 0x30);
            lVar3 = *plVar8;
        }
        puVar9[5] = plVar8;
        puVar9[6] = 0;
        *plVar8 = (longlong)puVar9;
    }
    return 0;
}



void FUN_1405b4e90(longlong param_1,undefined4 param_2)

{
    longlong lVar1;

    FUN_1405b4f50();
    FUN_1405b5070(param_1,param_2);
    FUN_1405b82a0(param_1,param_2);
    for (lVar1 = *(longlong *)(param_1 + 0xf08); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xf18)) {
        FUN_1405b4ef0(lVar1,param_2);
    }
    return;
}



void FUN_1405b4ef0(longlong param_1,undefined4 param_2)

{
    longlong lVar1;

    FUN_1405b5070();
    FUN_1405b82a0(param_1,param_2);
    for (lVar1 = *(longlong *)(param_1 + 0xf08); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xf18)) {
        FUN_1405b4ef0(lVar1,param_2);
    }
    return;
}



void FUN_1405b4f50(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;

    FUN_1407137c0(param_1 + 0xf40,param_1,param_2);
    if ((*(int *)(param_1 + 0xf30) == 0) && (*(int *)(param_1 + 0xf40) == 0)) {
        lVar3 = 0;
        *(undefined4 *)(param_1 + 0xf20) = 1;
    }
    else {
        lVar3 = FUN_1403d90d0();
        *(uint *)(param_1 + 0xf20) = (uint)(lVar3 != 0);
    }
    uVar2 = (uint)(lVar3 != *(longlong *)(param_1 + 0xf00));
    *(uint *)(param_1 + 0xf24) = uVar2;
    if (uVar2 != 0) {
        if (*(longlong *)(param_1 + 0xf00) != 0) {
            if (*(undefined8 **)(param_1 + 0xf10) != (undefined8 *)0x0) {
                **(undefined8 **)(param_1 + 0xf10) = *(undefined8 *)(param_1 + 0xf18);
            }
            if (*(longlong *)(param_1 + 0xf18) != 0) {
                *(undefined8 *)(*(longlong *)(param_1 + 0xf18) + 0xf10) = *(undefined8 *)(param_1 + 0xf10);
            }
            *(undefined8 *)(param_1 + 0xf10) = 0;
            *(undefined8 *)(param_1 + 0xf18) = 0;
        }
        *(longlong *)(param_1 + 0xf00) = lVar3;
        if ((lVar3 != 0) && (plVar4 = (longlong *)(lVar3 + 0xf08), *(longlong *)(param_1 + 0xf10) == 0))
        {
            *(longlong **)(param_1 + 0xf10) = plVar4;
            plVar1 = (longlong *)(param_1 + 0xf18);
            *plVar1 = *plVar4;
            *plVar4 = param_1;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0xf10) = plVar1;
            }
        }
    }
    return;
}


/*
Unable to decompile 'FUN_1405b5070'
Cause: Exception while decompiling 1405b5070: process: timeout

*/


// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405b82a0(longlong param_1,int param_2)

{
    undefined (*pauVar1) [16];
    float fVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 uVar11;
    uint uVar12;
    int *piVar14;
    float fVar15;
    undefined4 uVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    undefined auStack424 [32];
    ulonglong local_188;
    undefined8 local_180;
    undefined8 local_178;
    undefined local_168 [16];
    undefined local_158 [64];
    undefined8 local_118;
    undefined local_108 [4];
    undefined auStack260 [12];
    undefined local_f8 [8];
    undefined8 uStack240;
    undefined local_e8 [12];
    undefined4 uStack220;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined *local_b8;
    longlong local_b0;
    ulonglong local_68;
    longlong *plVar13;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    plVar8 = *(longlong **)(param_1 + 0x16f0);
    plVar13 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
        uVar16 = 0x40490fdb;
        _local_108 = CONCAT124(auStack260,0x40490fdb);
        local_d8 = FUN_1408fe3d0(0x40490fdb);
        uStack208 = FUN_1408fc950(uVar16);
        local_b8 = local_f8;
        local_b0 = param_1 + 0x1240;
        _local_f8 = CONCAT124(stack0xffffffffffffff0c,uStack208);
        local_c8 = _DAT_140c78440;
        uStack196 = uRam0000000140c78444;
        uStack192 = uRam0000000140c78448;
        uStack188 = uRam0000000140c7844c;
        _local_f8 = CONCAT412(uStack240._4_4_,CONCAT48(local_d8,local_f8)) ^ (undefined  [16])0x80000000
                ;
        local_168 = CONCAT88(local_b0,local_b8);
        local_f8 = (ulonglong)local_f8._0_4_;
        _local_e8 = ZEXT816(0x3f80000000000000);
        _local_f8 = _local_f8 & (undefined  [16])0xffffffffffffffff;
        uStack212 = 0;
        uStack204 = 0;
        FUN_1401afb10(&local_b8,local_158);
        local_118 = 0;
        (**(code **)(*plVar8 + 0x140))(plVar8);
    }
    fVar17 = 1.0;
    if ((*(longlong *)(param_1 + 0xf00) != 0) && (*(longlong **)(param_1 + 0x16e8) != (longlong *)0x0)
    ) {
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x3b0))();
        if (iVar4 != 0) {
            fVar18 = fVar17;
            if (*(longlong *)(param_1 + 0xf00) != 0) {
                fVar18 = fVar17 / *(float *)(*(longlong *)(param_1 + 0xf00) + 0x12c4);
            }
            fVar15 = (float)FUN_14047a940(param_1);
            fVar18 = fVar15 * *(float *)(param_1 + 0xe8c) * fVar18;
            _local_108 = CONCAT412(fRam0000000140c7841c * fVar18,
                                   CONCAT48(fRam0000000140c78418 * fVar18,
                                            CONCAT44(fRam0000000140c78414 * fVar18,_DAT_140c78410 * fVar18
                                            )));
            _local_f8 = CONCAT412(fRam0000000140c7842c * fVar18,
                                  CONCAT48(fRam0000000140c78428 * fVar18,
                                           CONCAT44(fRam0000000140c78424 * fVar18,_DAT_140c78420 * fVar18)
                                  ));
            _local_e8 = CONCAT412(fRam0000000140c7843c * fVar18,
                                  CONCAT48(fRam0000000140c78438 * fVar18,
                                           CONCAT44(fRam0000000140c78434 * fVar18,_DAT_140c78430 * fVar18)
                                  ));
            local_d8 = _DAT_140c78440;
            uStack212 = uRam0000000140c78444;
            uStack208 = uRam0000000140c78448;
            uStack204 = uRam0000000140c7844c;
            (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x48))();
        }
    }
    if (*(longlong **)(param_1 + 0x1588) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x1588) + 0x58))();
    }
    if ((*(longlong *)(param_1 + 0x1598) != 0) &&
        (plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x1598) + 0x10), plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x58))();
    }
    pauVar1 = (undefined (*) [16])(param_1 + 0x11e0);
    fVar18 = *(float *)*pauVar1;
    fVar15 = *(float *)(param_1 + 0x11e4);
    fVar19 = *(float *)(param_1 + 0x11e8);
    fVar20 = *(float *)(param_1 + 0x11ec);
    _local_108 = *pauVar1;
    fVar21 = 0.5;
    if (((*(uint *)(param_1 + 0x1070) & 0x200) == 0) ||
        (auStack260._0_4_ = SUB124(*(undefined (*) [12])*pauVar1 >> 0x20,0), iVar4 = 1,
                *(float *)(param_1 + 0x17d0) <=
                *(float *)(param_1 + 0x12c4) * *(float *)(param_1 + 0x570) * 0.5 + auStack260._0_4_)) {
        iVar4 = 0;
    }
    local_168 = CONCAT412(fVar20 + 0.0,
                          CONCAT48(fVar19 + 0.0,
                                   CONCAT44(*(float *)(param_1 + 0x570) * *(float *)(param_1 + 0x12c4)
                                            + fVar15,fVar18 + 0.0)));
    iVar5 = FUN_14047bf60();
    if (iVar4 == 0) {
        if ((iVar5 != 0) &&
            (fVar2 = *(float *)(param_1 + 0x17d0),
                    *(float *)(param_1 + 0x1760) <= fVar2 && fVar2 != *(float *)(param_1 + 0x1760))) {
            local_168 = CONCAT412(fVar20,CONCAT48(fVar19,CONCAT44(fVar15,fVar18)));
            if (auStack260._0_4_ <
                *(float *)(param_1 + 0x570) * *(float *)(param_1 + 0x12c4) * fVar21 + fVar2) {
                iVar4 = 1;
            }
            if (iVar4 != 0) goto LAB_1405b8569;
        }
        goto LAB_1405b86ea;
    }
    LAB_1405b8569:
    plVar8 = (longlong *)FUN_1403d90d0();
    if (plVar8 == (longlong *)0x0) {
        LAB_1405b85e0:
        fVar18 = *(float *)(param_1 + 0xff0) * *(float *)(param_1 + 0xff0) +
                 *(float *)(param_1 + 0xff4) * *(float *)(param_1 + 0xff4);
    }
    else {
        iVar6 = (**(code **)(*plVar8 + 0x20))();
        if (iVar6 == 0) goto LAB_1405b85e0;
        plVar8 = (longlong *)FUN_1403d90d0();
        if (plVar8 == (longlong *)0x0) {
            LAB_1405b85b4:
            plVar8 = plVar13;
        }
        else {
            iVar6 = (**(code **)(*plVar8 + 0x20))();
            if (iVar6 == 0) goto LAB_1405b85b4;
        }
        fVar18 = *(float *)(plVar8 + 0x1fe) * *(float *)(plVar8 + 0x1fe) +
                 *(float *)((longlong)plVar8 + 0xff4) * *(float *)((longlong)plVar8 + 0xff4);
    }
    iVar6 = DAT_140c4d520;
    if (*DAT_140c63750 < DAT_140c4d520) {
        iVar6 = *DAT_140c63750;
    }
    if (fVar18 + 0.0 < *(float *)(&DAT_140c4d530 + (longlong)iVar6 * 4) ||
    fVar18 + 0.0 == *(float *)(&DAT_140c4d530 + (longlong)iVar6 * 4)) {
        if (iVar5 == 0) {
            uVar16 = 1;
        }
        else {
            uVar16 = FUN_14047d430(param_1);
        }
        LAB_1405b86d4:
        local_188 = local_188 & 0xffffffff00000000 | (ulonglong)(uint)fVar17;
        FUN_1405b8bd0(param_1,param_2,local_168,uVar16);
    }
    else {
        if (iVar5 != 0) {
            uVar16 = FUN_14047d3d0(param_1);
            goto LAB_1405b86d4;
        }
        if (*(int *)(param_1 + 0x1088) == 1) {
            uVar16 = 6;
            goto LAB_1405b86d4;
        }
        if (*(int *)(param_1 + 0x1320) == 3) {
            if (*(float *)(param_1 + 0x570) * *(float *)(param_1 + 0x12c4) * fVar21 <
                *(float *)(param_1 + 0x17d0) - *(float *)(param_1 + 0x1760)) {
                uVar16 = 3;
                goto LAB_1405b86d4;
            }
        }
        else if ((*(int *)(param_1 + 0x1320) == 4) &&
                 (*(float *)(param_1 + 0x570) * *(float *)(param_1 + 0x12c4) * fVar21 <
                  *(float *)(param_1 + 0x17d0) - *(float *)(param_1 + 0x1760))) {
            uVar16 = 5;
            goto LAB_1405b86d4;
        }
    }
    LAB_1405b86ea:
    if (*(int *)(param_1 + 0x57c) == 0) {
        LAB_1405b8805:
        if (iVar4 == 0) goto LAB_1405b893b;
        plVar8 = (longlong *)FUN_1403d90d0(DAT_140c65898);
        if (plVar8 == (longlong *)0x0) {
            LAB_1405b8843:
            uVar12 = *(uint *)(param_1 + 0xff4);
        }
        else {
            iVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
            if (iVar6 == 0) goto LAB_1405b8843;
            lVar9 = FUN_14047b6d0(param_1);
            uVar12 = *(uint *)(lVar9 + 0xff4);
        }
        iVar6 = *DAT_140c63750;
        iVar7 = DAT_140c4d580;
        if (iVar6 < DAT_140c4d580) {
            iVar7 = iVar6;
        }
        iVar3 = DAT_140c4d5e0;
        if (iVar6 < DAT_140c4d5e0) {
            iVar3 = iVar6;
        }
        fVar18 = (fVar17 / *(float *)(&DAT_140c4d5f0 + (longlong)iVar3 * 4)) *
                ((float)(uVar12 & 0x7fffffff) - *(float *)(&DAT_140c4d590 + (longlong)iVar7 * 4));
        if (fVar17 <= fVar18) {
            fVar18 = fVar17;
        }
        fVar15 = 0.0;
        if (0.0 <= fVar18) {
            fVar15 = fVar18;
        }
        if (iVar5 == 0) {
            uVar16 = 7;
        }
        else {
            uVar16 = FUN_14047d490();
        }
        local_188 = local_188 & 0xffffffff00000000 | (ulonglong)(uint)fVar15;
        FUN_1405b8bd0(param_1,param_2,local_168,uVar16);
        plVar8 = *(longlong **)(param_1 + 0x1588);
        if (plVar8 == (longlong *)0x0) goto LAB_1405b893b;
        uVar16 = FUN_1400518a0(DAT_140c63628,0xa4,2);
        (**(code **)(*plVar8 + 0x50))(plVar8,uVar16);
        uVar11 = 0xa2;
    }
    else {
        if (iVar4 != 0) {
            if (*(int *)(param_1 + 0x57c) != 0) goto LAB_1405b893b;
            goto LAB_1405b8805;
        }
        plVar8 = (longlong *)FUN_1403d90d0(DAT_140c65898);
        if (plVar8 == (longlong *)0x0) {
            LAB_1405b8736:
            uVar12 = *(uint *)(param_1 + 0xff4);
        }
        else {
            iVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
            if (iVar6 == 0) goto LAB_1405b8736;
            lVar9 = FUN_14047b6d0(param_1);
            uVar12 = *(uint *)(lVar9 + 0xff4);
        }
        iVar6 = *DAT_140c63750;
        iVar7 = DAT_140c4d580;
        if (iVar6 < DAT_140c4d580) {
            iVar7 = iVar6;
        }
        iVar3 = DAT_140c4d5e0;
        if (iVar6 < DAT_140c4d5e0) {
            iVar3 = iVar6;
        }
        fVar18 = (fVar17 / *(float *)(&DAT_140c4d5f0 + (longlong)iVar3 * 4)) *
                ((float)(uVar12 & 0x7fffffff) - *(float *)(&DAT_140c4d590 + (longlong)iVar7 * 4));
        if (fVar17 <= fVar18) {
            fVar18 = fVar17;
        }
        fVar15 = 0.0;
        if (0.0 <= fVar18) {
            fVar15 = fVar18;
        }
        if (iVar5 == 0) {
            uVar16 = 8;
        }
        else {
            uVar16 = FUN_14047d4f0();
        }
        local_188 = local_188 & 0xffffffff00000000 | (ulonglong)(uint)fVar15;
        FUN_1405b8bd0(param_1,param_2,local_168,uVar16);
        plVar8 = *(longlong **)(param_1 + 0x1588);
        if (plVar8 == (longlong *)0x0) goto LAB_1405b893b;
        uVar16 = FUN_1400518a0(DAT_140c63628,0xa5,2);
        (**(code **)(*plVar8 + 0x50))(plVar8,uVar16);
        uVar11 = 0xa3;
    }
    plVar8 = *(longlong **)(param_1 + 0x1588);
    uVar16 = FUN_1400518a0(DAT_140c63628,uVar11,1,0);
    local_178 = 0;
    local_180 = 0;
    local_188 = 0;
    (**(code **)(*plVar8 + 0x10))(plVar8,uVar16,0,0);
    LAB_1405b893b:
    lVar9 = *(longlong *)(param_1 + 0xf00);
    *(int *)(param_1 + 0x57c) = iVar4;
    if (((lVar9 == 0) || ((*(int *)(lVar9 + 0x80) - 3U & 0xfffffff9) != 0)) ||
        (*(int *)(lVar9 + 0x80) == 5)) {
        lVar9 = param_1;
    }
    if ((*(longlong *)(lVar9 + 0x16e8) != 0) && (*(longlong **)(lVar9 + 0x16f0) != (longlong *)0x0)) {
        iVar4 = (**(code **)(**(longlong **)(lVar9 + 0x16f0) + 0x158))();
        if (((iVar4 != 0) &&
             ((*(int *)(lVar9 + 0x1088) != 3 &&
               (*(float *)(lVar9 + 0x11e4) <= *(float *)(lVar9 + 0x1760) + fVar17)))) &&
            (((3 < *(int *)(lVar9 + 0x1320) && (-1 < (param_2 - *(int *)(param_1 + 0x580)) + -0x7d)) ||
              ((*(int *)(lVar9 + 0x1320) != 2 && (-1 < (param_2 - *(int *)(param_1 + 0x580)) + -0xfa))))))
        {
            lVar10 = (**(code **)(**(longlong **)(lVar9 + 0x16e8) + 0x1a8))
                    (*(longlong **)(lVar9 + 0x16e8),0x96,0);
            piVar14 = DAT_140c63750;
            fVar17 = *(float *)(lVar10 + 0x50) - *(float *)(lVar10 + 0x40);
            if (0.0 <= fVar17) {
                fVar17 = 0.0;
            }
            _local_f8 = *(undefined (*) [16])(lVar9 + 0x11e0);
            iVar4 = *DAT_140c63750;
            iVar5 = DAT_140c4d640;
            if (*DAT_140c63750 < DAT_140c4d640) {
                iVar5 = *DAT_140c63750;
            }
            local_d8 = *(undefined4 *)(&DAT_140c4d650 + (longlong)iVar5 * 4);
            iVar5 = DAT_140c4d760;
            if (*DAT_140c63750 < DAT_140c4d760) {
                iVar5 = *DAT_140c63750;
            }
            iVar6 = DAT_140c4d7c0;
            if (*DAT_140c63750 < DAT_140c4d7c0) {
                iVar6 = *DAT_140c63750;
            }
            _local_108 = CONCAT412(*(undefined4 *)(&DAT_140c4d7d0 + (longlong)iVar6 * 4),
            CONCAT48(*(undefined4 *)(&DAT_140c4d770 + (longlong)iVar5 * 4),
            0x100000001));
            fVar17 = (float)FUN_1408fe170(fVar17);
            fVar17 = (float)FUN_1408fc7f0(fVar17 * 0.3333333);
            iVar5 = DAT_140c4d700;
            if (iVar4 < DAT_140c4d700) {
                iVar5 = iVar4;
            }
            _local_e8 = CONCAT124(stack0xffffffffffffff1c,
                                  fVar17 * fVar21 * *(float *)(&DAT_140c4d710 + (longlong)iVar5 * 4));
            iVar4 = DAT_140c4d820;
            if (*piVar14 < DAT_140c4d820) {
                iVar4 = *piVar14;
            }
            uStack212 = 1;
            uStack208 = *(undefined4 *)(&DAT_140c4d830 + (longlong)iVar4 * 4);
            (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0x110))
                    (*(longlong **)(DAT_140c65898 + 0x7248),local_108);
            *(int *)(param_1 + 0x580) = param_2;
        }
    }
    if ((*(int *)(param_1 + 0x1320) != 2) || ((*(byte *)(param_1 + 0x1070) & 0x40) != 0)) {
        piVar14 = (int *)(param_1 + 0x1e8);
        do {
            if (*piVar14 != 0) {
                if ((int)plVar13 == 0) {
                    FUN_14046cdc0(param_1,1,0);
                }
                else {
                    _local_108 = CONCAT88(0x3f800000,SUB168(_local_108,0));
                    _local_f8 = _local_f8 & (undefined  [16])0xffffffffffffffff;
                    (**(code **)(**(longlong **)(param_1 + 0x16e8) + 0x248))();
                }
                *piVar14 = 0;
            }
            uVar12 = (int)plVar13 + 1;
            plVar13 = (longlong *)(ulonglong)uVar12;
            piVar14 = piVar14 + 1;
        } while (uVar12 < 10);
    }
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack424);
    return;
}



void FUN_1405b8bd0(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;

    lVar1 = FUN_140249780(param_4);
    if ((lVar1 != 0) && ((uint)(*(int *)(lVar1 + 4) + *(int *)(param_1 + 0x578)) <= param_2)) {
        if (*(float *)(param_1 + 0x17d0) <=
            *(float *)(param_1 + 0x12c4) * *(float *)(param_1 + 0x570) * 2.0 +
            *(float *)(param_1 + 0x11e4) + 0.5) {
            puVar3 = (undefined4 *)(lVar1 + 8);
            lVar1 = 2;
            do {
                lVar2 = FUN_14024d740(*puVar3);
                if (lVar2 != 0) {
                    FUN_1405b8cb0(param_1,param_3,lVar2);
                }
                puVar3 = puVar3 + 1;
                lVar1 = lVar1 + -1;
            } while (lVar1 != 0);
        }
        *(uint *)(param_1 + 0x578) = param_2;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405b8cb0(longlong param_1,undefined (*param_2) [16],longlong param_3)

{
    float fVar1;
    int iVar2;
    ulonglong uVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    undefined auVar7 [16];
    float in_XMM3_Da;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined local_e8 [8];
    float fStack224;
    float fStack220;
    undefined local_d8 [12];
    float fStack204;
    longlong local_c8;
    longlong local_c0;
    undefined4 local_b8;
    longlong local_b0;
    undefined4 local_a8;
    undefined4 local_a4;
    undefined4 local_a0;
    undefined local_98 [16];
    uint local_88;
    float local_84;
    float local_80;
    float local_7c;
    float local_78;
    float local_74;
    float local_70;
    float local_6c;

    _local_e8 = *param_2;
    local_b0 = 0;
    uVar3 = *(ulonglong *)(param_3 + 8);
    local_c8 = local_b0;
    if (uVar3 != 0) {
        if (DAT_140c3fe70 < uVar3) {
            local_c8 = 0;
        }
        else {
            local_c8 = uVar3 + DAT_140c3fe68;
        }
    }
    uVar3 = *(ulonglong *)(param_3 + 0x10);
    local_c0 = local_b0;
    if ((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) {
        local_c0 = uVar3 + DAT_140c3fe68;
    }
    uVar4 = FUN_1401ae6f0();
    if ((int)(longlong)((float)(ulonglong)uVar4 * in_XMM3_Da) == 0) {
        local_88 = 1;
    }
    else {
        uVar4 = FUN_1401ae6f0();
        local_88 = (uint)(longlong)((float)(ulonglong)uVar4 * in_XMM3_Da);
    }
    uVar4 = *(uint *)(param_3 + 0x20);
    if (*(uint *)(param_3 + 0x20) == 0) {
        uVar4 = 1;
    }
    lVar6 = *(longlong *)(param_1 + 0xd08);
    local_b8 = 0;
    fVar10 = 0.0;
    fVar11 = (float)(ulonglong)local_88 / (float)(ulonglong)uVar4;
    if (lVar6 == 0) {
        lVar6 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
        fVar8 = fVar10;
        if (lVar6 != 0) {
            fVar8 = *(float *)(lVar6 + 0x28);
        }
    }
    else {
        FUN_14047a940(param_1);
        fVar8 = extraout_XMM0_Da * *(float *)(lVar6 + 0x8c);
    }
    lVar6 = *(longlong *)(param_1 + 0xd08);
    local_80 = fVar8 * *(float *)(param_3 + 0x28) * *(float *)(param_1 + 0x12c4);
    if (lVar6 == 0) {
        lVar6 = FUN_14022d500(*(undefined4 *)(param_1 + 0xd8));
        fVar8 = fVar10;
        if (lVar6 != 0) {
            fVar8 = *(float *)(lVar6 + 0x28);
        }
    }
    else {
        FUN_14047a940(param_1);
        fVar8 = extraout_XMM0_Da_00 * *(float *)(lVar6 + 0x8c);
    }
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    local_7c = ((*(float *)(param_3 + 0x2c) - *(float *)(param_3 + 0x28)) * fVar11 +
                *(float *)(param_3 + 0x28)) * fVar8 * *(float *)(param_1 + 0x12c4);
    local_70 = *(float *)(param_1 + 0x12c4) * *(float *)(param_1 + 0x570);
    local_74 = *(float *)(param_3 + 0x34);
    local_78 = (*(float *)(param_3 + 0x30) - local_74) * fVar11 + local_74;
    local_6c = local_70 + 0.5;
    auVar7 = *(undefined (*) [16])(param_1 + 0x1120);
    local_d8._0_4_ = SUB124(*(undefined (*) [12])*(undefined (*) [16])(param_1 + 0x1120),0);
    local_d8._8_4_ = SUB164(auVar7 >> 0x40,0);
    fStack204 = SUB164(auVar7 >> 0x60,0);
    local_84 = SQRT(local_d8._0_4_ * local_d8._0_4_ + 0.0 + 0.0);
    fVar8 = local_d8._0_4_ * local_d8._0_4_ + 0.0 + 0.0;
    auVar7 = rsqrtss(ZEXT816(0),
                     CONCAT412(fStack204 * fStack204,
                               CONCAT48(local_d8._8_4_ * local_d8._8_4_,(ulonglong)(uint)fVar8)));
    fVar11 = SUB164(auVar7,0);
    fVar11 = (3.0 - fVar8 * fVar11 * fVar11) * 0.5 * fVar11;
    if (fVar11 <= 0.0) {
        fVar11 = 0.0;
    }
    local_d8._0_4_ = fVar11 * local_d8._0_4_;
    fVar8 = fVar11 * 0.0;
    local_d8._8_4_ = fVar11 * local_d8._8_4_;
    fVar11 = fVar11 * fStack204;
    _local_d8 = CONCAT412(fVar11,CONCAT48(local_d8._8_4_,CONCAT44(fVar8,local_d8._0_4_)));
    if ((local_d8._0_4_ == fVar10) && (local_d8._8_4_ == fVar10)) {
        fVar9 = *(float *)(param_1 + 0x12c0);
    }
    else {
        uVar4 = 0x80000000;
        fVar12 = local_d8._8_4_;
        FUN_1408fccb0();
        fVar9 = extraout_XMM0_Da_01;
        if (fVar12 < fVar10) {
            fVar9 = (float)((uint)extraout_XMM0_Da_01 ^ uVar4);
        }
        fVar1 = *(float *)(param_3 + 0x50);
        fVar9 = fVar9 + 1.570796;
        if (fVar1 != fVar10) {
            local_e8._0_4_ = local_d8._0_4_ * fVar1 + local_e8._0_4_;
            local_e8._4_4_ = fVar8 * fVar1 + local_e8._4_4_;
            fStack224 = local_d8._8_4_ * fVar1 + fStack224;
            fStack220 = fVar11 * fVar1 + fStack220;
            _local_e8 = CONCAT412(fStack220,CONCAT48(fStack224,CONCAT44(local_e8._4_4_,local_e8._0_4_)));
        }
        fVar11 = *(float *)(param_3 + 0x4c);
        if (fVar11 != fVar10) {
            _local_e8 = CONCAT412(fVar11 * 0.0 + fStack220,
                                  CONCAT48(local_d8._0_4_ * fVar11 + fStack224,
                                           CONCAT44(fVar11 * 0.0 + local_e8._4_4_,
                                                    (float)((uint)fVar12 ^ uVar4) * fVar11 +
                                                    local_e8._0_4_)));
        }
    }
    if ((*(byte *)(param_3 + 4) & 1) == 0) {
        local_84 = 1.0;
    }
    else {
        iVar2 = *DAT_140c63750;
        iVar5 = DAT_140c4d4c0;
        if (iVar2 < DAT_140c4d4c0) {
            iVar5 = iVar2;
        }
        if (2.0 <= local_84 / *(float *)(&DAT_140c4d4d0 + (longlong)iVar5 * 4)) {
            local_84 = 2.0;
        }
        else {
            iVar5 = DAT_140c4d4c0;
            if (iVar2 < DAT_140c4d4c0) {
                iVar5 = iVar2;
            }
            local_84 = local_84 / *(float *)(&DAT_140c4d4d0 + (longlong)iVar5 * 4);
        }
    }
    uVar3 = *(ulonglong *)(param_3 + 0x18);
    if ((uVar3 != 0) && (uVar3 <= DAT_140c3fe70)) {
        local_b0 = DAT_140c3fe68 + uVar3;
    }
    local_a8 = *(undefined4 *)(param_3 + 0x38);
    local_a4 = *(undefined4 *)(param_3 + 0x3c);
    _local_d8 = CONCAT412(uVar16,CONCAT48(uVar15,CONCAT44(uVar14,uVar13)));
    local_a0 = *(undefined4 *)(param_3 + 0x40);
    local_98 = CONCAT412(fVar10,CONCAT48(fVar10,*(undefined8 *)(param_3 + 0x44)));
    (**(code **)(**(longlong **)(DAT_140c65898 + 0x7248) + 0xf8))
            (*(longlong **)(DAT_140c65898 + 0x7248),*(undefined4 *)(param_1 + 8),local_e8,local_d8,
             fVar9,&local_c8,*(longlong *)(DAT_140c65898 + 0x6490) == param_1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405b9160(undefined8 param_1,float param_2,longlong param_3,undefined8 param_4,int param_5)

{
    undefined4 uVar1;

    if (0.0 < param_2) {
        param_2 = param_2 * *(float *)(param_3 + 0xe94);
        if (param_5 == 0) {
            param_5 = 1;
        }
        *(undefined4 *)(param_3 + 0xe90) = *(undefined4 *)(param_3 + 0xe8c);
        *(float *)(param_3 + 0xe94) = param_2;
        *(float *)(param_3 + 0xe98) = param_2;
        if (10.0 < param_2) {
            *(undefined4 *)(param_3 + 0xe98) = 0x41200000;
        }
        if (*(float *)(param_3 + 0xe98) <= 0.1 && *(float *)(param_3 + 0xe98) != 0.1) {
            *(undefined4 *)(param_3 + 0xe98) = 0x3dcccccd;
        }
        if ((float)((uint)(1.0 - *(float *)(param_3 + 0xe98)) & 0x7fffffff) < _DAT_140c4a5a8) {
            *(undefined4 *)(param_3 + 0xe98) = 0x3f800000;
        }
        uVar1 = DAT_140c636a8;
        *(int *)(param_3 + 0xea0) = param_5;
        *(undefined4 *)(param_3 + 0xe9c) = uVar1;
    }
    return;
}



void FUN_1405b9210(longlong param_1,undefined4 param_2,int param_3)

{
    undefined4 local_28 [2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    *(undefined4 *)(param_1 + 0xea4) = param_2;
    if (*(int *)(param_1 + 0xef0) == 0) {
        *(undefined4 *)(param_1 + 0xef4) = *(undefined4 *)(param_1 + 0x1100);
        *(undefined4 *)(param_1 + 0xef8) = *(undefined4 *)(param_1 + 0x1104);
        *(undefined4 *)(param_1 + 0xefc) = *(undefined4 *)(param_1 + 0x1108);
    }
    *(undefined4 *)(param_1 + 0xef0) = 1;
    if (param_3 != -1) {
        local_28[0] = 0;
        local_10 = 0;
        local_18 = &LAB_1405b92b0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x1628,param_3,local_28,4);
        return;
    }
    FUN_140195d70(param_1 + 0x1628);
    return;
}



longlong FUN_1405b92d0(longlong param_1)

{
    undefined *puVar1;

    puVar1 = (undefined *)FUN_14018b280(0x30);
    *(undefined **)(param_1 + 0x10) = puVar1;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x10) = *(longlong *)(param_1 + 0x10);
    *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18) = *(longlong *)(param_1 + 0x10);
    puVar1 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined **)(param_1 + 0x30) = puVar1;
    *puVar1 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) = *(longlong *)(param_1 + 0x30);
    *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x18) = *(longlong *)(param_1 + 0x30);
    return param_1;
}



undefined8 * FUN_1405b9350(undefined8 *param_1)

{
    undefined2 *puVar1;
    undefined4 in_stack_00000038;

    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b6daa0;
    *(undefined4 *)(param_1 + 0x80) = in_stack_00000038;
    param_1[0x81] = 0;
    FUN_1401095e0(param_1 + 0x82);
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[0x89] = puVar1;
    param_1[0x8a] = puVar1;
    param_1[0x8b] = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0x8d] = puVar1;
    param_1[0x8e] = puVar1;
    param_1[0x8f] = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    param_1[0x92] = 0;
    *(undefined2 *)(param_1 + 0x93) = 0;
    *(undefined *)((longlong)param_1 + 0x49a) = 0;
    *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
    FUN_1401095e0(param_1 + 0x94);
    FUN_1401095e0(param_1 + 0x9a);
    param_1[0x36] = param_1[0x36] | 0x4000000;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x91) = 0;
    return param_1;
}



undefined8 FUN_1405b9490(undefined8 param_1,ulonglong param_2)

{
    FUN_1405b9630();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1405b94d0(undefined8 *param_1)

{
    undefined2 *puVar1;
    undefined8 *in_stack_00000038;

    FUN_1400c5920();
    *param_1 = &PTR_LAB_140b6daa0;
    *(undefined4 *)(param_1 + 0x80) = 0xffffffff;
    param_1[0x81] = 0;
    FUN_1401095e0(param_1 + 0x82);
    param_1[0x89] = 0;
    param_1[0x8a] = 0;
    param_1[0x8b] = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10,0);
    param_1[0x89] = puVar1;
    param_1[0x8a] = puVar1;
    param_1[0x8b] = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    param_1[0x8d] = 0;
    param_1[0x8e] = 0;
    param_1[0x8f] = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0x8d] = puVar1;
    param_1[0x8e] = puVar1;
    param_1[0x8f] = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    param_1[0x92] = 0;
    *(undefined2 *)(param_1 + 0x93) = 0x101;
    *(undefined *)((longlong)param_1 + 0x49a) = 0;
    *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
    FUN_1401095e0(param_1 + 0x94);
    FUN_1401095e0(param_1 + 0x9a);
    if (in_stack_00000038 != (undefined8 *)0x0) {
        (**(code **)*in_stack_00000038)(in_stack_00000038);
    }
    param_1[0x36] = param_1[0x36] | 0x4000000;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined4 *)(param_1 + 0x91) = 0;
    param_1[0x92] = in_stack_00000038;
    return param_1;
}



void FUN_1405b9630(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b6daa0;
    if ((longlong *)param_1[0x81] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x81] + 8))();
        param_1[0x81] = 0;
    }
    if ((longlong *)param_1[0x92] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x92] + 8))();
        param_1[0x92] = 0;
    }
    if ((longlong *)param_1[0x9a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x9a] + 8))();
        param_1[0x9a] = 0;
    }
    if (param_1[0x9d] != 0) {
        FUN_14018b900(param_1[0x9d],0);
    }
    if ((longlong *)param_1[0x94] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x94] + 8))();
        param_1[0x94] = 0;
    }
    if (param_1[0x97] != 0) {
        FUN_14018b900(param_1[0x97],0);
    }
    if (param_1[0x8d] != 0) {
        FUN_14018b900(param_1[0x8d],0);
    }
    if (param_1[0x89] != 0) {
        FUN_14018b900(param_1[0x89],0);
    }
    if ((longlong *)param_1[0x82] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x82] + 8))();
        param_1[0x82] = 0;
    }
    if (param_1[0x85] != 0) {
        FUN_14018b900(param_1[0x85],0);
    }
    FUN_1400c6030(param_1);
    return;
}



void FUN_1405b9740(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined auStack104 [32];
    uint local_48 [10];
    ulonglong local_20;

    local_20 = DAT_140c0f7b0 ^ (ulonglong)auStack104;
    uVar1 = FUN_140453ee0();
    if (uVar1 != 0) {
        uVar3 = 0;
        local_48[0] = 0x240c8400;
        local_48[1] = 0x78724;
        local_48[2] = 86400000;
        local_48[3] = 0x78725;
        local_48[4] = 3600000;
        local_48[5] = 0x78726;
        local_48[6] = 60000;
        local_48[7] = 0x78729;
        local_48[8] = 1000;
        local_48[9] = 0x7872a;
        do {
            if (local_48[uVar3 * 2] <= uVar1) break;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 5);
        if ((param_4 == 0) && (uVar1 < 1000)) {
            uVar3 = 4;
        }
        else if (uVar3 == 5) {
            lVar2 = FUN_14034bdd0();
            if (lVar2 != 0) {
                FUN_14034bf80(param_2,0x10,lVar2,(double)((float)(ulonglong)uVar1 * 0.001));
            }
            goto LAB_1405b9880;
        }
        lVar2 = FUN_14034bdd0();
        if (lVar2 != 0) {
            FUN_14034bf80(param_2,0x10,lVar2,(ulonglong)uVar1 / (ulonglong)local_48[uVar3 * 2]);
        }
    }
    LAB_1405b9880:
    FUN_1407db4f0(local_20 ^ (ulonglong)auStack104);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405b98a0(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    float *pfVar4;
    longlong lVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    uint uVar10;
    undefined auStack232 [32];
    undefined *local_c8;
    undefined4 local_c0;
    ulonglong *local_b8;
    undefined4 local_b0;
    undefined local_a8 [8];
    float fStack160;
    float fStack156;
    undefined local_98 [8];
    float fStack144;
    float fStack140;
    ulonglong local_88;
    undefined8 uStack128;
    float local_78;
    float fStack116;
    float fStack112;
    float fStack108;
    float local_68;
    float fStack100;
    float fStack96;
    float fStack92;
    undefined local_58 [32];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    lVar3 = FUN_1400e58c0(*(undefined8 *)(param_1 + 0x20),L"CRB_Pixel_O");
    plVar1 = *(longlong **)(lVar3 + 0x60);
    _local_98 = ZEXT816(CONCAT44((float)*(int *)(param_1 + 0x2d8),
                                 (float)(int)*(undefined8 *)(param_1 + 0x2d4)));
    _local_a8 = ZEXT816(CONCAT44((float)*(int *)(param_1 + 0x2d0),
                                 (float)(int)*(undefined8 *)(param_1 + 0x2cc)));
    pfVar4 = (float *)(**(code **)(*plVar1 + 0x20))(plVar1);
    lVar3 = FUN_1405ba0b0(param_1);
    local_98._0_4_ = local_98._0_4_ + -2.0;
    local_98._4_4_ = local_98._4_4_ + -2.0;
    fStack144 = fStack144 + -2.0;
    fStack140 = fStack140 + -2.0;
    local_a8._0_4_ = local_a8._0_4_ - -2.0;
    local_a8._4_4_ = local_a8._4_4_ - -2.0;
    fStack160 = fStack160 - -2.0;
    fStack156 = fStack156 - -2.0;
    fVar8 = local_98._0_4_ - local_a8._0_4_;
    fVar6 = local_98._4_4_ - local_a8._4_4_;
    _local_98 = CONCAT412(fStack140,CONCAT48(fStack144,CONCAT44(local_98._4_4_,local_98._0_4_)));
    if (fVar8 <= fVar6) {
        if (fVar8 < fVar6) {
            fVar9 = 0.0;
            fVar7 = (fVar6 - fVar8) * -0.5;
            goto LAB_1405b99c9;
        }
    }
    else {
        fVar7 = 0.0;
        fVar9 = (fVar8 - fVar6) * -0.5;
        LAB_1405b99c9:
        local_98._0_4_ = local_98._0_4_ + fVar9;
        local_98._4_4_ = local_98._4_4_ + fVar7;
        fStack144 = fStack144 + 0.0;
        fStack140 = fStack140 + 0.0;
        local_a8._0_4_ = local_a8._0_4_ - fVar9;
        local_a8._4_4_ = local_a8._4_4_ - fVar7;
        fStack160 = fStack160 - 0.0;
        fStack156 = fStack156 - 0.0;
        _local_98 = CONCAT412(fStack140,CONCAT48(fStack144,CONCAT44(local_98._4_4_,local_98._0_4_)));
    }
    uVar10 = 0x3f800000;
    if (*(char *)(param_1 + 0x498) != '\0') {
        if (0.125 <= *(float *)(param_1 + 0x49c)) {
            if ((*(char *)(param_1 + 0x498) == '\0') || (0.25 <= *(float *)(param_1 + 0x49c)))
                goto LAB_1405b9a5d;
            fVar6 = (1.0 - (*(float *)(param_1 + 0x49c) - 0.125) * 8.0) * *pfVar4;
        }
        else {
            fVar6 = *(float *)(param_1 + 0x49c) * 8.0 * *pfVar4;
        }
        _local_98 = CONCAT412(fStack140 + fVar6,
                              CONCAT48(fStack144 + fVar6,
                                       CONCAT44(local_98._4_4_ + fVar6,local_98._0_4_ + fVar6)));
        local_a8 = CONCAT44(local_a8._4_4_ - fVar6,local_a8._0_4_ - fVar6);
        _local_a8 = CONCAT48(fStack160 - fVar6,local_a8);
        _local_a8 = CONCAT412(fStack156 - fVar6,_local_a8);
    }
    LAB_1405b9a5d:
    fStack116 = *(float *)(param_1 + 0x484);
    local_88 = 0x3f8000003f800000;
    local_78 = 1.0;
    if (*(longlong *)(param_1 + 0x410) != 0) {
        local_c8 = (undefined *)
                ((ulonglong)local_c8 & 0xffffffff00000000 |
                 (ulonglong)
                         (uint)((DAT_140c63664 - *(float *)(param_1 + 0x418)) * *(float *)(param_1 + 0x41c)));
        FUN_140103e60(*(longlong *)(param_1 + 0x410),local_a8,&local_88);
    }
    if (lVar3 != 0) {
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        if ((*(uint *)(param_1 + 0x298) >> 0xb & 1) != 0) {
            if ((*(longlong *)(param_1 + 0x4a0) != 0) && ((*(uint *)(lVar3 + 0x14) & 0x4c) != 0)) {
                local_78 = local_a8._0_4_ - 2.0;
                fStack116 = local_a8._4_4_ - 2.0;
                fStack112 = fStack160 - 2.0;
                fStack108 = fStack156 - 2.0;
                local_68 = local_98._0_4_ + 2.0;
                fStack100 = local_98._4_4_ + 2.0;
                fStack96 = fStack144 + 2.0;
                fStack92 = fStack140 + 2.0;
                uStack128 = SUB168(CONCAT412(*(undefined4 *)(param_1 + 0x484),
                                             CONCAT48(SUB164(_DAT_140b7a4c0 >> 0x20,0),
                                                      SUB168(_DAT_140b7a4c0,0))) >> 0x40,0);
                local_88 = SUB168(_DAT_140b7a4c0,0) & 0xffffffff | (ulonglong)uVar10 << 0x20;
                local_c8 = (undefined *)
                        ((ulonglong)local_c8 & 0xffffffff00000000 |
                         (ulonglong)
                                 (uint)((DAT_140c63664 - *(float *)(param_1 + 0x4a8)) *
                                        *(float *)(param_1 + 0x4ac)));
                FUN_140103e60(*(longlong *)(param_1 + 0x4a0),&local_78,&local_88);
            }
            if ((*(longlong *)(param_1 + 0x4d0) != 0) && ((*(uint *)(lVar3 + 0x14) & 0x30) != 0)) {
                local_78 = local_a8._0_4_ - 2.0;
                fStack116 = local_a8._4_4_ - 2.0;
                fStack112 = fStack160 - 2.0;
                fStack108 = fStack156 - 2.0;
                local_68 = local_98._0_4_ + 2.0;
                fStack100 = local_98._4_4_ + 2.0;
                fStack96 = fStack144 + 2.0;
                fStack92 = fStack140 + 2.0;
                uStack128 = SUB168(CONCAT412(*(undefined4 *)(param_1 + 0x484),
                                             CONCAT48(SUB164(_DAT_140b7a4c0 >> 0x20,0),
                                                      SUB168(_DAT_140b7a4c0,0))) >> 0x40,0);
                local_88 = SUB168(_DAT_140b7a4c0,0) & 0xffffffff | (ulonglong)uVar10 << 0x20;
                local_c8 = (undefined *)
                        ((ulonglong)local_c8 & 0xffffffff00000000 |
                         (ulonglong)
                                 (uint)((DAT_140c63664 - *(float *)(param_1 + 0x4d8)) *
                                        *(float *)(param_1 + 0x4dc)));
                FUN_140103e60(*(longlong *)(param_1 + 0x4d0),&local_78,&local_88);
            }
        }
        (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
        if ((*(ulonglong *)(param_1 + 0x298) >> 9 & 1) == 0) {
            lVar5 = FUN_1405b9740(lVar3,local_58);
            if (lVar5 != 0) {
                local_b0 = 1;
                local_b8 = &local_88;
                local_88 = 0x3f8000003f800000;
                uStack128 = 0x3f8000003f800000;
                local_c8 = local_a8;
                local_c0 = 10;
                (**(code **)(*DAT_140c65680 + 0x108))(DAT_140c65680,plVar1,lVar5);
            }
        }
        if (1 < *(int *)(lVar3 + 0x1c)) {
            iVar2 = FUN_14034bf80(local_58,0x10,&DAT_140b15394);
            if (-1 < iVar2) {
                local_b0 = 1;
                local_b8 = &local_88;
                local_88 = 0x3f8000003f800000;
                uStack128 = 0x3f8000003f800000;
                local_c8 = local_a8;
                local_c0 = 0;
                (**(code **)(*DAT_140c65680 + 0x108))(DAT_140c65680,plVar1,local_58,0xffffffffffffffff);
            }
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



void FUN_1405b9fa0(longlong *param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    if (((*(byte *)((longlong)param_1 + 0x1c) & 0x80) != 0) && (lVar1 = FUN_1405ba0b0(), lVar1 != 0))
    {
        uVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar1 + 0x54));
        lVar1 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar1 + 0x50),uVar2);
        if (lVar1 != 0) {
            (**(code **)(*param_1 + 0x78))(param_1,&DAT_1409f353c,4,lVar1);
        }
    }
    return;
}



void FUN_1405ba010(longlong param_1,int param_2,undefined8 param_3,undefined param_4)

{
    char cVar1;
    longlong lVar2;

    if (((((*(byte *)(param_1 + 0x1c) & 0x80) != 0) && (param_2 == 1)) &&
         (lVar2 = FUN_1405ba0b0(), lVar2 != 0)) &&
        (((cVar1 = FUN_1405bcf50(param_1), cVar1 == '\0' && (*(longlong *)(lVar2 + 0x48) != 0)) &&
          (lVar2 = FUN_140561c30(DAT_140c65b70,
                                 *(undefined4 *)
                                         (*(longlong *)(lVar2 + 0x40) + -4 + *(longlong *)(lVar2 + 0x48) * 4)),
                  lVar2 != 0)))) {
        FUN_14039cda0();
    }
    FUN_1400d2120(param_1,param_2,param_3,param_4);
    return;
}



longlong FUN_1405ba0b0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    bool bVar6;

    if (*(int *)(param_1 + 0x400) < 0) {
        return *(longlong *)(param_1 + 0x490);
    }
    uVar1 = *(ulonglong *)(param_1 + 0x298);
    if (((byte)uVar1 >> 2 & 1) == 0) {
        lVar2 = *(longlong *)(param_1 + 0x408);
        if (lVar2 != 0) {
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    else {
        lVar2 = *(longlong *)(DAT_140c65898 + 0x6490);
    }
    if (lVar2 != 0) {
        bVar6 = (uVar1 & 1) != 0;
        uVar3 = (uint)bVar6;
        if ((uVar1 & 2) != 0) {
            uVar3 = bVar6 | 2;
        }
        if ((uVar1 & 0x10) != 0) {
            uVar3 = uVar3 | 4;
        }
        if ((uVar1 & 0x20) != 0) {
            uVar3 = uVar3 | 8;
        }
        if ((uVar1 & 0x40) != 0) {
            uVar3 = uVar3 | 0x10;
        }
        if ((char)(byte)uVar1 < '\0') {
            uVar3 = uVar3 | 0x20;
        }
        if ((uVar1 >> 8 & 1) != 0) {
            uVar3 = uVar3 | 0x40;
        }
        lVar2 = *(longlong *)(lVar2 + 0x15f0);
        iVar5 = 0;
        if (lVar2 != 0) {
            do {
                uVar4 = *(uint *)(lVar2 + 0x14) & uVar3;
                if ((((uVar3 & 3) == 0) || ((uVar4 & 3) != 0)) &&
                    (((uVar3 & 0x7c) == 0 || ((uVar4 & 0x7c) != 0)))) {
                    if (*(int *)(param_1 + 0x400) == iVar5) {
                        return lVar2;
                    }
                    iVar5 = iVar5 + 1;
                }
                lVar2 = *(longlong *)(lVar2 + 0x30);
            } while (lVar2 != 0);
        }
    }
    return 0;
}



longlong FUN_1405ba190(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint *)(lVar1 + 0x1b0) >> 0x1a & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"Window",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



undefined8 FUN_1405ba240(undefined8 param_1)

{
    longlong lVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong **pplVar4;

    lVar1 = FUN_1405ba190();
    if (lVar1 != 0) {
        puVar2 = (undefined4 *)FUN_1406622c0(param_1,2);
        if ((puVar2 != (undefined4 *)0x0) && (lVar3 = FUN_1403d90d0(DAT_140c65898,*puVar2), lVar3 != 0))
        {
            pplVar4 = (longlong **)(lVar1 + 0x408);
            if (pplVar4 == (longlong **)0x0) {
                return 0;
            }
            if (*pplVar4 != (longlong *)0x0) {
                (**(code **)(**pplVar4 + 8))();
                *pplVar4 = (longlong *)0x0;
            }
            *pplVar4 = *(longlong **)(lVar3 + 0x78);
            if (*(undefined8 **)(lVar3 + 0x78) == (undefined8 *)0x0) {
                return 0;
            }
            (**(code **)**(undefined8 **)(lVar3 + 0x78))();
            return 0;
        }
        if (*(longlong **)(lVar1 + 0x408) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar1 + 0x408) + 8))();
            *(undefined8 *)(lVar1 + 0x408) = 0;
        }
    }
    return 0;
}



void FUN_1405ba600(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.BuffWindow",0x11);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001405ba9b1)

void FUN_1405ba670(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1405ba681;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba6c2;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
        *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_GetBuffTooltip_140c5a460 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 2);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba75f;
    LuaElementLoaderOrSo(lVar2,"Apollo.BuffWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1405ba781:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1405ba79d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1405ba79d;
        if (iVar1 == 7) goto LAB_1405ba781;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1405ba79d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba7cc;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba7f2;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba83a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba85f;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba883;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba8a4;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba8c9;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba90c;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba931;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1405ba96c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1405ba985;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1405ba96c;
        if (iVar1 != 8) goto LAB_1405ba985;
    }
    uVar15 = *puVar10;
    LAB_1405ba985:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba994;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_1405ba9f0;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba9cb;
    FUN_1400f85d0(param_1 + 0xa80,L"BuffWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405ba9db;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



void FUN_1405ba9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    undefined auStack232 [32];
    undefined8 local_c8;
    ulonglong local_c0;
    int local_b8;
    char local_a8 [4];
    int local_a4 [3];
    undefined local_98 [96];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    local_c8 = 0;
    FUN_1400d45e0(local_98,param_1,param_2,param_5);
    uVar4 = 0;
    uVar3 = 0;
    do {
        local_a8[0] = '\0';
        lVar1 = FUN_1401a6b80(param_5,(&PTR_u_BeneficialBuffs_140b21be0)[uVar3]);
        if (lVar1 != 0) {
            uVar2 = FUN_1401a4f40(lVar1 + 0x20);
            FUN_1401a52e0(uVar2,local_a8);
            if (local_a8[0] != '\0') {
                uVar4 = uVar4 | 1 << ((byte)uVar3 & 0x3f);
            }
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0xc);
    local_a4[0] = 0;
    lVar1 = FUN_1401a6b80(param_5,L"BuffIndex");
    if (lVar1 != 0) {
        uVar2 = FUN_1401a4f40(lVar1 + 0x20);
        FUN_1407df428(uVar2,&DAT_1409e4114,local_a4);
    }
    local_a4[0] = local_a4[0] + -1;
    lVar1 = FUN_14018b280(0x500,0);
    if (lVar1 != 0) {
        local_b8 = local_a4[0];
        local_c8 = param_4;
        local_c0 = uVar4;
        FUN_1405b9350(lVar1,param_1,param_2,local_98);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack232);
    return;
}



undefined8 FUN_1405bab40(undefined8 param_1,ulonglong param_2)

{
    FUN_1405bab80();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405bab80(undefined8 *param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    *param_1 = &PTR_LAB_140b6d860;
    if (param_1[0x80] == 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(undefined8 *)(param_1[0x80] + 0x10);
    }
    lVar1 = DAT_140c65b88;
    if ((DAT_140c65b88 == 0) && (lVar1 = FUN_14018b280(0x48,0), lVar1 != 0)) {
        lVar1 = FUN_1405b92d0(lVar1);
    }
    DAT_140c65b88 = lVar1;
    FUN_1405bc5a0(DAT_140c65b88,uVar2,param_1);
    if ((longlong *)param_1[0x80] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x80] + 8))();
        param_1[0x80] = 0;
    }
    if ((longlong *)param_1[0x87] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x87] + 8))();
        param_1[0x87] = 0;
    }
    if (param_1[0x8a] != 0) {
        FUN_14018b900(param_1[0x8a],0);
    }
    if ((longlong *)param_1[0x81] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x81] + 8))();
        param_1[0x81] = 0;
    }
    if (param_1[0x84] != 0) {
        FUN_14018b900(param_1[0x84],0);
    }
    FUN_1400c6030(param_1);
    return;
}



void FUN_1405bac80(longlong param_1,ulonglong param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    longlong *plVar5;
    ulonglong uVar6;
    byte bVar7;
    longlong local_18;
    ulonglong local_10;

    pplVar1 = (longlong **)(param_1 + 0x400);
    uVar6 = 0;
    plVar5 = *pplVar1;
    uVar4 = uVar6;
    if (plVar5 != (longlong *)0x0) {
        uVar4 = plVar5[2];
    }
    if (param_2 != uVar4) {
        uVar4 = uVar6;
        if (plVar5 != (longlong *)0x0) {
            uVar4 = plVar5[2];
        }
        uVar3 = DAT_140c65b88;
        if ((DAT_140c65b88 == 0) && (lVar2 = FUN_14018b280(0x48,0), uVar3 = uVar6, lVar2 != 0)) {
            uVar3 = FUN_1405b92d0(lVar2);
        }
        DAT_140c65b88 = uVar3;
        FUN_1405bc5a0(DAT_140c65b88,uVar4,param_1);
        if (param_2 == 0) {
            if (*pplVar1 != (longlong *)0x0) {
                (**(code **)(**pplVar1 + 8))();
                *pplVar1 = (longlong *)0x0;
            }
        }
        else {
            if (pplVar1 != (longlong **)0x0) {
                if (*pplVar1 != (longlong *)0x0) {
                    (**(code **)(**pplVar1 + 8))();
                    *pplVar1 = (longlong *)0x0;
                }
                *pplVar1 = *(longlong **)(param_2 + 0x78);
                if (*(undefined8 **)(param_2 + 0x78) != (undefined8 *)0x0) {
                    (**(code **)**(undefined8 **)(param_2 + 0x78))();
                }
            }
            uVar4 = DAT_140c65b88;
            if ((DAT_140c65b88 == 0) && (lVar2 = FUN_14018b280(0x48,0), uVar4 = uVar6, lVar2 != 0)) {
                uVar4 = FUN_1405b92d0(lVar2);
            }
            DAT_140c65b88 = uVar4;
            FUN_1405bc390(DAT_140c65b88,param_2,param_1);
        }
        if ((*(uint *)(param_1 + 0x298) >> 0xc & 1) != 0) {
            plVar5 = (longlong *)**(longlong **)(param_1 + 0x230);
            if (plVar5 != *(longlong **)(param_1 + 0x230)) {
                do {
                    if ((*(uint *)(plVar5[2] + 0x1b0) >> 0x1a & 1) != 0) {
                        FUN_1400c6b20();
                    }
                    plVar5 = (longlong *)*plVar5;
                } while (plVar5 != (longlong *)*(longlong *)(param_1 + 0x230));
            }
            if (param_2 != 0) {
                uVar4 = *(ulonglong *)(param_1 + 0x298);
                bVar7 = (uVar4 & 1) != 0;
                if ((uVar4 & 2) != 0) {
                    bVar7 = bVar7 | 2;
                }
                if ((uVar4 & 0x10) != 0) {
                    bVar7 = bVar7 | 4;
                }
                if ((uVar4 & 0x20) != 0) {
                    bVar7 = bVar7 | 8;
                }
                if ((uVar4 & 0x40) != 0) {
                    bVar7 = bVar7 | 0x10;
                }
                if ((char)uVar4 < '\0') {
                    bVar7 = bVar7 | 0x20;
                }
                if ((uVar4 >> 8 & 1) != 0) {
                    bVar7 = bVar7 | 0x40;
                }
                local_10 = 0;
                local_18 = 0;
                FUN_1404692d0(param_2,bVar7,&local_18);
                uVar4 = local_10;
                lVar2 = local_18;
                if (local_10 != 0) {
                    do {
                        FUN_1405bb6c0(param_1,*(undefined8 *)(lVar2 + uVar6 * 8));
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < uVar4);
                }
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
            }
        }
    }
    return;
}



longlong FUN_1405baec0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1,1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint *)(lVar1 + 0x1b0) >> 0x1b & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,1);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"BuffContainerWindow",pcVar4);
        FUN_140056570(param_1,1,uVar3);
    }
    return lVar1;
}



undefined8 FUN_1405baf70(undefined8 param_1)

{
    longlong lVar1;
    undefined4 *puVar2;

    lVar1 = FUN_1405baec0();
    if (lVar1 != 0) {
        puVar2 = (undefined4 *)FUN_1406622c0(param_1,2);
        if (puVar2 != (undefined4 *)0x0) {
            puVar2 = (undefined4 *)FUN_1403d90d0(DAT_140c65898,*puVar2);
        }
        FUN_1405bac80(lVar1,puVar2);
    }
    return 0;
}



void FUN_1405bafd0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.BuffContainerWindow",0x1a);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001405bb381)

void FUN_1405bb040(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16 [3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x1405bb051;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb092;
    FUN_1407e4830((longlong)alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        uVar16 = (int)uVar17 + 1;
        uVar17 = (ulonglong)uVar16;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4) =
        *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *)((longlong)alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong)&PTR_s_SetUnit_140c5a450 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 == 0);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb12f;
    LuaElementLoaderOrSo(lVar2,"Apollo.BuffContainerWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1405bb151:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1405bb16d:
            uVar9 = puVar8[-2];
        }
        else if (*(int *)(puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        }
        else {
            uVar9 = 0;
        }
    }
    else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1405bb16d;
        if (iVar1 == 7) goto LAB_1405bb151;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1405bb16d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb19c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb1c2;
    FUN_14005ea50(lVar2,lVar14 + -0x20,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *)((longlong)alStackX16 + lVar4);
    lVar6 = *(longlong *)(lVar2 + 0x10);
    lVar14 = (longlong)alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *)(&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *)(lVar14 + 8);
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb20a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb22f;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb253;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb274;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb299;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb2dc;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb301;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1405bb33c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1405bb355;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1405bb33c;
        if (iVar1 != 8) goto LAB_1405bb355;
    }
    uVar15 = *puVar10;
    LAB_1405bb355:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb364;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(code **)((longlong)alStackX16 + lVar4 + -0x10) = FUN_1405bb3c0;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb39b;
    FUN_1400f85d0(param_1 + 0xa80,L"BuffContainerWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1405bb3ab;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



void FUN_1405bb3c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    short sVar1;
    longlong lVar2;
    undefined8 uVar3;
    short *psVar4;
    short *psVar5;
    short *psVar6;
    undefined8 *puVar7;
    short *psVar8;
    short *psVar9;
    short *psVar10;
    undefined auStack248 [32];
    undefined *local_d8;
    undefined8 local_d0;
    short *local_c8;
    char local_b8 [8];
    undefined8 local_b0;
    undefined local_a8 [96];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack248;
    psVar4 = (short *)0x0;
    local_d8 = (undefined *)0x0;
    local_b0 = param_4;
    FUN_1400d45e0(local_a8,param_1,param_2,param_5);
    psVar8 = psVar4;
    psVar10 = psVar4;
    do {
        local_b8[0] = '\0';
        lVar2 = FUN_1401a6b80(param_5,(&PTR_u_BeneficialBuffs_140b21630)[(longlong)psVar8]);
        if (lVar2 != 0) {
            uVar3 = FUN_1401a4f40(lVar2 + 0x20);
            FUN_1401a52e0(uVar3,local_b8);
            if (local_b8[0] != '\0') {
                psVar10 = (short *)((ulonglong)psVar10 | 1 << ((byte)psVar8 & 0x3f));
            }
        }
        psVar8 = (short *)((longlong)psVar8 + 1);
    } while (psVar8 < (short *)0xe);
    lVar2 = FUN_1401a6b80(param_5,L"BuffOverlaySprite");
    psVar8 = psVar4;
    if (lVar2 != 0) {
        psVar8 = (short *)FUN_1401a4f40(lVar2 + 0x20);
    }
    psVar6 = (short *)&DAT_1409f3574;
    if (psVar8 != (short *)0x0) {
        psVar6 = psVar8;
    }
    sVar1 = *psVar6;
    psVar8 = psVar4;
    while (sVar1 != 0) {
        psVar8 = (short *)((longlong)psVar8 + 1);
        sVar1 = psVar6[(longlong)psVar8];
    }
    lVar2 = (longlong)psVar8 * 2 >> 1;
    if (lVar2 + 1U < 0x7fffffffffffffff) {
        psVar4 = (short *)FUN_14018b280((lVar2 + 1U) * 2,0);
    }
    FUN_1407db590(psVar4,psVar6,lVar2 * 2);
    psVar8 = psVar4 + lVar2;
    psVar6 = (short *)0x0;
    if (psVar8 != (short *)0x0) {
        *psVar8 = 0;
    }
    lVar2 = FUN_1401a6b80(param_5,L"DebuffOverlaySprite");
    psVar5 = psVar6;
    if (lVar2 != 0) {
        psVar5 = (short *)FUN_1401a4f40(lVar2 + 0x20);
    }
    psVar9 = (short *)&DAT_1409f3554;
    if (psVar5 != (short *)0x0) {
        psVar9 = psVar5;
    }
    sVar1 = *psVar9;
    psVar5 = psVar6;
    while (sVar1 != 0) {
        psVar5 = (short *)((longlong)psVar5 + 1);
        sVar1 = psVar9[(longlong)psVar5];
    }
    lVar2 = (longlong)psVar5 * 2 >> 1;
    if (lVar2 + 1U < 0x7fffffffffffffff) {
        psVar6 = (short *)FUN_14018b280((lVar2 + 1U) * 2,0);
    }
    FUN_1407db590(psVar6,psVar9,lVar2 * 2);
    psVar5 = psVar6 + lVar2;
    if (psVar5 != (short *)0x0) {
        *psVar5 = 0;
    }
    puVar7 = (undefined8 *)FUN_14018b280(0x470,0);
    if (puVar7 != (undefined8 *)0x0) {
        local_d0 = local_b0;
        local_d8 = local_a8;
        local_c8 = psVar10;
        FUN_1400c5920(puVar7,param_1,param_2,0);
        *puVar7 = &PTR_LAB_140b6d860;
        puVar7[0x80] = 0;
        FUN_1401095e0(puVar7 + 0x81);
        FUN_1401095e0(puVar7 + 0x87);
        puVar7[0x36] = puVar7[0x36] | 0x8000000;
        puVar7[0x53] = puVar7[0x53] | 0x1000;
    }
    if ((psVar4 != psVar8) && (puVar7[4] != 0)) {
        FUN_140109710(puVar7 + 0x81,puVar7[4] + 0xf0,psVar4,0);
    }
    if ((psVar6 != psVar5) && (puVar7[4] != 0)) {
        FUN_140109710(puVar7 + 0x87,puVar7[4] + 0xf0,psVar6,0);
    }
    if (psVar6 != (short *)0x0) {
        FUN_14018b900(psVar6,0);
    }
    if (psVar4 != (short *)0x0) {
        FUN_14018b900(psVar4,0);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack248);
    return;
}



void FUN_1405bb6c0(longlong param_1,longlong param_2)

{
    undefined4 uVar1;
    ulonglong uVar2;
    uint uVar3;
    longlong lVar4;
    longlong *plVar5;
    uint uVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    bool bVar10;
    undefined auStack200 [32];
    longlong *local_a8;
    ulonglong local_a0;
    longlong local_98;
    undefined local_88 [16];
    undefined8 local_78 [4];
    undefined local_58 [16];
    int local_48 [4];
    uint local_38;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack200;
    uVar2 = *(ulonglong *)(param_1 + 0x298);
    if ((uVar2 >> 0xc & 1) != 0) {
        plVar9 = (longlong *)0x0;
        bVar10 = (uVar2 & 1) != 0;
        uVar3 = (uint)bVar10;
        if ((uVar2 & 2) != 0) {
            uVar3 = bVar10 | 2;
        }
        if ((uVar2 & 0x10) != 0) {
            uVar3 = uVar3 | 4;
        }
        if ((uVar2 & 0x20) != 0) {
            uVar3 = uVar3 | 8;
        }
        if ((uVar2 & 0x40) != 0) {
            uVar3 = uVar3 | 0x10;
        }
        if ((char)uVar2 < '\0') {
            uVar3 = uVar3 | 0x20;
        }
        if ((uVar2 >> 8 & 1) != 0) {
            uVar3 = uVar3 | 0x40;
        }
        uVar6 = *(uint *)(param_2 + 0x14) & uVar3;
        if ((((uVar3 & 3) == 0) || ((uVar6 & 3) != 0)) &&
            (((uVar3 & 0x7c) == 0 || ((uVar6 & 0x7c) != 0)))) {
            local_48[3] = *(int *)(param_1 + 0x2d8);
            local_48[1] = *(int *)(param_1 + 0x2d0);
            local_48[0] = *(int *)(param_1 + 0x2cc);
            local_38 = 0;
            puVar8 = local_78;
            local_48[2] = local_48[3] - local_48[1];
            plVar7 = plVar9;
            do {
                uVar1 = *(undefined4 *)(plVar7 + 0x281429d2);
                *(undefined4 *)((longlong)local_48 + (longlong)plVar7) = 0;
                plVar7 = (longlong *)((longlong)plVar7 + 4);
                *(undefined4 *)((longlong)local_78 + 0x1c + (longlong)plVar7) = uVar1;
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
            } while ((longlong)plVar7 < 0x10);
            local_38 = local_38 | 0x300;
            local_58 = ZEXT816(0);
            plVar7 = plVar9;
            if ((*(uint *)(param_1 + 0x290) >> 0x1c & 1) != 0) {
                plVar7 = (longlong *)0x10000000;
            }
            lVar4 = FUN_14018b280(0x500,0);
            plVar5 = plVar9;
            if (lVar4 != 0) {
                local_a0 = (ulonglong)(*(uint *)(param_1 + 0x298) & 0xfff);
                local_a8 = plVar7;
                local_98 = param_2;
                plVar5 = (longlong *)FUN_1405b94d0(lVar4,*(undefined8 *)(param_1 + 0x20),param_1,local_88);
            }
            *(undefined4 *)((longlong)plVar5 + 0x2a4) = *(undefined4 *)(param_1 + 0x2a4);
            if (*(undefined8 **)(param_1 + 0x408) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(param_1 + 0x408))();
            }
            if ((longlong *)plVar5[0x94] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar5[0x94] + 8))();
                plVar5[0x94] = 0;
            }
            plVar5[0x94] = *(longlong *)(param_1 + 0x408);
            *(undefined4 *)(plVar5 + 0x95) = *(undefined4 *)(param_1 + 0x410);
            if (*(undefined8 **)(param_1 + 0x438) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(param_1 + 0x438))();
            }
            if ((longlong *)plVar5[0x9a] != (longlong *)0x0) {
                (**(code **)(*(longlong *)plVar5[0x9a] + 8))();
                plVar5[0x9a] = 0;
            }
            plVar5[0x9a] = *(longlong *)(param_1 + 0x438);
            *(undefined4 *)(plVar5 + 0x9b) = *(undefined4 *)(param_1 + 0x440);
            (**(code **)(*plVar5 + 8))(plVar5);
            if ((*(uint *)(param_1 + 0x298) >> 0xd & 1) != 0) {
                plVar9 = (longlong *)0x2;
            }
            FUN_1400cd7a0(param_1,plVar9);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack200);
    return;
}
