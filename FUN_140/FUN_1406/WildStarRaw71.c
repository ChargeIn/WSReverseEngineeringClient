//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140606150(longlong *param_1,longlong param_2)

{
    byte bVar1;
    uint uVar2;
    undefined4 uVar3;
    double *pdVar4;
    uint *puVar5;
    undefined4 uVar6;
    int iVar7;
    undefined8 uVar8;
    undefined8 *puVar9;
    longlong lVar10;
    undefined8 *puVar11;
    longlong lVar12;
    undefined8 *puVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    undefined **local_78;
    uint local_70;
    longlong local_68;
    undefined4 local_60;
    undefined local_58 [8];
    longlong local_50;

    if (*param_1 == 0) {
        return 0;
    }
    local_78 = &PTR_FUN_140b569f0;
    local_60 = 1;
    local_68 = param_2;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar13 = *(undefined8 **)(param_2 + 0x10);
    uVar8 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar13 + 1) = 5;
    *puVar13 = uVar8;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    local_70 = FUN_1400578c0(param_2);
    uVar15 = 0;
    lVar10 = param_2;
    if (*(int *)(param_1 + 2) != 0) {
        do {
            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_2);
            }
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            uVar8 = FUN_14005c1b0(param_2,0,0);
            *(undefined4 *)(puVar13 + 1) = 5;
            *puVar13 = uVar8;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar6 = FUN_1400578c0();
            uVar2 = *(uint *)(param_1 + 1);
            if (uVar2 < *(uint *)(param_1 + 2)) {
                if (uVar15 == 0) {
                    uVar14 = (ulonglong)uVar2;
                }
                else {
                    uVar14 = uVar15 - 1;
                    if (uVar2 < uVar15) goto LAB_140606260;
                }
            }
            else {
                LAB_140606260:
                uVar14 = uVar15;
            }
            puVar11 = (undefined8 *)(uVar14 * 0xa8 + param_1[3]);
            uVar8 = *puVar11;
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            *puVar13 = *puVar9;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0870(param_2,puVar13,L"strCharacterName",uVar8);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            iVar7 = *(int *)(puVar11 + 1);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar13 = *puVar9;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar10 = FUN_14018f0e0(local_58,L"nFactionId");
            lVar10 = *(longlong *)(lVar10 + 8);
            if (lVar10 == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar10 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_2);
                }
                puVar13 = *(undefined8 **)(param_2 + 0x10);
                uVar8 = FUN_140062650(param_2,lVar10,lVar12);
                *(undefined4 *)(puVar13 + 1) = 4;
                *puVar13 = uVar8;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if (local_50 != 0) {
                FUN_14018b900(local_50,0);
            }
            pdVar4 = *(double **)(param_2 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar7;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar8,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            iVar7 = *(int *)((longlong)puVar11 + 0xc);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar13 = *puVar9;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar10 = FUN_14018f0e0(local_58,L"eRaceId");
            lVar10 = *(longlong *)(lVar10 + 8);
            if (lVar10 == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar10 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_2);
                }
                puVar13 = *(undefined8 **)(param_2 + 0x10);
                uVar8 = FUN_140062650(param_2,lVar10,lVar12);
                *(undefined4 *)(puVar13 + 1) = 4;
                *puVar13 = uVar8;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if (local_50 != 0) {
                FUN_14018b900(local_50,0);
            }
            pdVar4 = *(double **)(param_2 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar7;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar8,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            iVar7 = *(int *)(puVar11 + 2);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar13 = *puVar9;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar10 = FUN_14018f0e0(local_58,L"eClassId");
            lVar10 = *(longlong *)(lVar10 + 8);
            if (lVar10 == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar10 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_2);
                }
                puVar13 = *(undefined8 **)(param_2 + 0x10);
                uVar8 = FUN_140062650(param_2,lVar10,lVar12);
                *(undefined4 *)(puVar13 + 1) = 4;
                *puVar13 = uVar8;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if (local_50 != 0) {
                FUN_14018b900(local_50,0);
            }
            pdVar4 = *(double **)(param_2 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar7;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar8,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            iVar7 = *(int *)((longlong)puVar11 + 0x1c);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar13 = *puVar9;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar10 = FUN_14018f0e0(local_58,L"ePathType");
            lVar10 = *(longlong *)(lVar10 + 8);
            if (lVar10 == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar10 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_2);
                }
                puVar13 = *(undefined8 **)(param_2 + 0x10);
                uVar8 = FUN_140062650(param_2,lVar10,lVar12);
                *(undefined4 *)(puVar13 + 1) = 4;
                *puVar13 = uVar8;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if (local_50 != 0) {
                FUN_14018b900(local_50,0);
            }
            pdVar4 = *(double **)(param_2 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)iVar7;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar8,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            bVar1 = *(byte *)(puVar11 + 3);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar13 = *puVar9;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar10 = FUN_14018f0e0(local_58,L"nLevel");
            lVar10 = *(longlong *)(lVar10 + 8);
            if (lVar10 == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar10 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_2);
                }
                puVar13 = *(undefined8 **)(param_2 + 0x10);
                uVar8 = FUN_140062650(param_2,lVar10,lVar12);
                *(undefined4 *)(puVar13 + 1) = 4;
                *puVar13 = uVar8;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if (local_50 != 0) {
                FUN_14018b900(local_50,0);
            }
            pdVar4 = *(double **)(param_2 + 0x10);
            *(undefined4 *)(pdVar4 + 1) = 3;
            *pdVar4 = (double)(uint)bVar1;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar8,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            uVar2 = *(uint *)(param_1 + 1);
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar13 = *puVar9;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar10 = FUN_14018f0e0(local_58,L"bIsLeader");
            lVar10 = *(longlong *)(lVar10 + 8);
            if (lVar10 == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar10 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_2);
                }
                puVar13 = *(undefined8 **)(param_2 + 0x10);
                uVar8 = FUN_140062650(param_2,lVar10,lVar12);
                *(undefined4 *)(puVar13 + 1) = 4;
                *puVar13 = uVar8;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if (local_50 != 0) {
                FUN_14018b900(local_50,0);
            }
            puVar5 = *(uint **)(param_2 + 0x10);
            puVar5[2] = 1;
            *puVar5 = (uint)(uVar14 == uVar2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar8 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar8,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            uVar3 = *(undefined4 *)(puVar11 + 2);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c65254 == 0) && (iVar7 = FUN_1401f2f80(), -1 < iVar7)) {
                    (**(code **)(*DAT_140c63c28 + 0x18))(DAT_140c63c28,uVar3);
                }
            }
            else {
                (*DAT_140c63840)(&PTR_u_Class_140a69950,uVar3,DAT_140c63858);
            }
            uVar8 = FUN_14034bdd0();
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            puVar13 = *(undefined8 **)(param_2 + 0x10);
            *puVar13 = *puVar9;
            *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0870(param_2,puVar13,L"strClassName",uVar8);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            FUN_1400fb1d0(&local_78);
            FUN_1400579e0(param_2);
            uVar15 = uVar15 + 1;
            lVar10 = local_68;
        } while (uVar15 < *(uint *)(param_1 + 2));
    }
    uVar15 = (ulonglong)local_70;
    puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),uVar15);
    puVar13 = *(undefined8 **)(lVar10 + 0x10);
    *puVar13 = *puVar9;
    uVar6 = *(undefined4 *)(puVar9 + 1);
    *(undefined4 *)(puVar13 + 1) = uVar6;
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    FUN_1400579e0(lVar10,uVar6,uVar15 & 0xffffffff);
    return 1;
}



bool FUN_1406069b0(longlong param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    undefined4 uVar8;
    undefined8 uVar9;
    longlong *plVar10;
    longlong lVar11;
    undefined8 *puVar12;
    ulonglong uVar13;
    longlong lVar14;
    ulonglong uVar15;
    longlong lVar16;
    bool bVar17;
    int local_res8;
    undefined4 uStackX12;
    longlong local_res18;
    longlong local_res20;
    undefined **local_80;
    uint local_78;
    longlong local_70;
    undefined4 local_68;
    undefined **local_60;
    undefined4 local_58;
    longlong local_50;
    undefined4 local_48;

    lVar2 = *(longlong *)(param_1 + 0x40);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x60) != 0)) {
        iVar7 = FUN_14079ee60(lVar2,param_1 + 0x50,&local_res8);
        if ((iVar7 == 0) ||
            (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x58) + CONCAT44(uStackX12,local_res8) * 8),
                    lVar2 == 0)) {
            bVar17 = false;
        }
        else {
            uVar15 = 0;
            local_80 = &PTR_FUN_140b569f0;
            iVar7 = 0;
            local_res8 = 0;
            local_68 = 1;
            local_70 = param_2;
            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_2);
            }
            puVar3 = *(undefined8 **)(param_2 + 0x10);
            uVar9 = FUN_14005c1b0(param_2,0,0);
            *(undefined4 *)(puVar3 + 1) = 5;
            *puVar3 = uVar9;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            local_78 = FUN_1400578c0(param_2);
            uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x40) + 0x60);
            lVar14 = param_2;
            lVar16 = DAT_140c65898;
            if (uVar4 != 0) {
                do {
                    lVar14 = *(longlong *)(param_1 + 0x40);
                    if ((lVar14 == 0) || (*(ulonglong *)(lVar14 + 0x60) <= uVar15)) {
                        lVar14 = 0;
                    }
                    else if (uVar15 == 0) {
                        lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x58) + *(longlong *)(lVar14 + 0x68) * 8);
                    }
                    else {
                        uVar13 = uVar15;
                        if (uVar15 < *(ulonglong *)(lVar14 + 0x68) || uVar15 == *(ulonglong *)(lVar14 + 0x68)) {
                            uVar13 = uVar15 - 1;
                        }
                        lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x58) + uVar13 * 8);
                    }
                    uVar1 = *(uint *)(lVar14 + 0x10);
                    iVar7 = local_res8;
                    if (((((uVar1 != *(uint *)(param_1 + 0x50)) ||
                           (*(longlong *)(lVar14 + 0x18) != *(longlong *)(param_1 + 0x58))) &&
                          ((uVar1 != *(uint *)(lVar2 + 0x110) ||
                            (*(longlong *)(lVar14 + 0x18) != *(longlong *)(lVar2 + 0x118))))) &&
                         (*(uint *)(lVar14 + 0x78) < *(uint *)(lVar2 + 0x78) ||
                          *(uint *)(lVar14 + 0x78) == *(uint *)(lVar2 + 0x78))) &&
                        ((((*(int *)(lVar14 + 0x110) == 0 || (*(longlong *)(lVar14 + 0x118) == 0)) &&
                           (uVar1 != 0)) && (uVar13 = *(ulonglong *)(lVar14 + 0x18), uVar13 != 0)))) {
                        lVar11 = *(longlong *)(lVar16 + 0x6f60);
                        lVar6 = lVar11;
                        lVar5 = *(longlong *)(lVar11 + 8);
                        while (lVar5 != 0) {
                            if ((*(uint *)(lVar5 + 0x20) < uVar1) ||
                                ((*(uint *)(lVar5 + 0x20) <= uVar1 && (*(ulonglong *)(lVar5 + 0x28) < uVar13)))) {
                                lVar5 = *(longlong *)(lVar5 + 0x18);
                            }
                            else {
                                lVar6 = lVar5;
                                lVar5 = *(longlong *)(lVar5 + 0x10);
                            }
                        }
                        if (((lVar6 == lVar11) || (uVar1 < *(uint *)(lVar6 + 0x20))) ||
                            ((uVar1 <= *(uint *)(lVar6 + 0x20) && (uVar13 < *(ulonglong *)(lVar6 + 0x28))))) {
                            local_res20 = lVar11;
                            plVar10 = &local_res20;
                        }
                        else {
                            local_res18 = lVar6;
                            plVar10 = &local_res18;
                        }
                        if ((*plVar10 != lVar11) &&
                            (lVar11 = FUN_1403d90d0(lVar16), lVar16 = DAT_140c65898, iVar7 = local_res8,
                                    lVar11 != 0)) {
                            local_60 = &PTR_FUN_140b569f0;
                            local_48 = 1;
                            local_50 = param_2;
                            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_2);
                            }
                            puVar3 = *(undefined8 **)(param_2 + 0x10);
                            uVar9 = FUN_14005c1b0(param_2,0,0);
                            *(undefined4 *)(puVar3 + 1) = 5;
                            *puVar3 = uVar9;
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                            local_58 = FUN_1400578c0(param_2);
                            uVar8 = FUN_1403d9500(DAT_140c65898,lVar14 + 0x10);
                            FUN_140649870(param_2,uVar8);
                            FUN_1400fb540(&local_60,L"unitMentee");
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                            FUN_1406054d0(param_1,param_2,uVar15);
                            FUN_1400fb540(&local_60);
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                            FUN_1400fb1d0(&local_80);
                            iVar7 = local_res8 + 1;
                            local_res8 = iVar7;
                            FUN_1400579e0(param_2);
                            lVar16 = DAT_140c65898;
                        }
                    }
                    uVar15 = uVar15 + 1;
                    lVar14 = local_70;
                } while (uVar15 < uVar4);
            }
            uVar15 = (ulonglong)local_78;
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar14 + 0x20) + 0xa0),uVar15);
            puVar3 = *(undefined8 **)(lVar14 + 0x10);
            *puVar3 = *puVar12;
            uVar8 = *(undefined4 *)(puVar12 + 1);
            *(undefined4 *)(puVar3 + 1) = uVar8;
            *(longlong *)(lVar14 + 0x10) = *(longlong *)(lVar14 + 0x10) + 0x10;
            bVar17 = iVar7 != 0;
            FUN_1400579e0(lVar14,uVar8,uVar15 & 0xffffffff);
        }
        return bVar17;
    }
    return false;
}



void FUN_140606d90(undefined8 *param_1,undefined8 *param_2)

{
    short sVar1;
    uint uVar2;
    short *psVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    short *psVar6;
    undefined8 *puVar7;
    int iVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    longlong lVar14;

    FUN_1406070a0();
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    uVar2 = *(uint *)(param_1 + 2);
    if (uVar2 == 0) {
        param_1[3] = 0;
        return;
    }
    uVar4 = SUB168(ZEXT816(0xa8) * ZEXT416(uVar2),0);
    if (SUB168(ZEXT816(0xa8) * ZEXT416(uVar2) >> 0x40,0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    uVar5 = FUN_14018b280(uVar4);
    uVar13 = 0;
    uVar12 = uVar13;
    if ((uVar5 != 0) && (iVar8 = uVar2 - 1, uVar12 = uVar5, -1 < iVar8)) {
        puVar7 = (undefined8 *)(uVar5 + 0x78);
        do {
            iVar8 = iVar8 + -1;
            *(undefined4 *)(puVar7 + -7) = 0;
            puVar7[-6] = 0;
            *puVar7 = 0;
            *(undefined4 *)(puVar7 + 1) = 0;
            puVar7[-1] = &PTR_LAB_140b6f2d0;
            *(undefined4 *)(puVar7 + 2) = 0;
            puVar7 = puVar7 + 0x15;
        } while (-1 < iVar8);
    }
    param_1[3] = uVar12;
    uVar12 = uVar13;
    uVar5 = uVar13;
    if (*(int *)(param_1 + 2) != 0) {
        do {
            FUN_140606f60(param_1[3] + uVar5,param_2[3] + uVar5);
            psVar6 = *(short **)(uVar5 + param_1[3]);
            sVar1 = *psVar6;
            uVar10 = uVar13;
            while (sVar1 != 0) {
                psVar6 = psVar6 + 1;
                uVar10 = uVar10 + 1;
                sVar1 = *psVar6;
            }
            uVar11 = uVar10 + 1;
            uVar4 = SUB168(ZEXT816(2) * ZEXT816(uVar11),0);
            if (SUB168(ZEXT816(2) * ZEXT816(uVar11) >> 0x40,0) != 0) {
                uVar4 = 0xffffffffffffffff;
            }
            uVar4 = FUN_14018b280(uVar4,0);
            *(undefined8 *)(uVar5 + param_1[3]) = uVar4;
            psVar6 = *(short **)(uVar5 + param_1[3]);
            if (uVar10 < 0x7fffffff) {
                lVar9 = 0x7ffffffe - uVar11;
                lVar14 = *(longlong *)(uVar5 + param_2[3]) - (longlong)psVar6;
                psVar3 = psVar6;
                do {
                    psVar6 = psVar3;
                    if ((lVar9 + uVar11 == 0) || (sVar1 = *(short *)(lVar14 + (longlong)psVar6), sVar1 == 0))
                    {
                        if (uVar11 == 0) {
                            psVar6 = psVar6 + -1;
                        }
                        break;
                    }
                    *psVar6 = sVar1;
                    uVar11 = uVar11 - 1;
                    psVar3 = psVar6 + 1;
                } while (uVar11 != 0);
                LAB_140606f1b:
                *psVar6 = 0;
            }
            else if (uVar11 != 0) goto LAB_140606f1b;
            uVar12 = uVar12 + 1;
            uVar5 = uVar5 + 0xa8;
        } while (uVar12 < *(uint *)(param_1 + 2));
    }
    return;
}



undefined8 * FUN_140606f60(undefined8 *param_1,undefined8 *param_2)

{
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined *)(param_1 + 3) = *(undefined *)(param_2 + 3);
    *(undefined *)((longlong)param_1 + 0x19) = *(undefined *)((longlong)param_2 + 0x19);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined2 *)((longlong)param_1 + 0x24) = *(undefined2 *)((longlong)param_2 + 0x24);
    *(undefined4 *)((longlong)param_1 + 0x26) = *(undefined4 *)((longlong)param_2 + 0x26);
    *(undefined4 *)((longlong)param_1 + 0x2a) = *(undefined4 *)((longlong)param_2 + 0x2a);
    *(undefined4 *)((longlong)param_1 + 0x2e) = *(undefined4 *)((longlong)param_2 + 0x2e);
    *(undefined4 *)((longlong)param_1 + 0x32) = *(undefined4 *)((longlong)param_2 + 0x32);
    *(undefined4 *)((longlong)param_1 + 0x36) = *(undefined4 *)((longlong)param_2 + 0x36);
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    *(undefined2 *)((longlong)param_1 + 0x54) = *(undefined2 *)((longlong)param_2 + 0x54);
    *(undefined2 *)((longlong)param_1 + 0x56) = *(undefined2 *)((longlong)param_2 + 0x56);
    *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(param_2 + 0xb);
    *(undefined2 *)((longlong)param_1 + 0x5a) = *(undefined2 *)((longlong)param_2 + 0x5a);
    *(undefined2 *)((longlong)param_1 + 0x5c) = *(undefined2 *)((longlong)param_2 + 0x5c);
    *(undefined2 *)((longlong)param_1 + 0x5e) = *(undefined2 *)((longlong)param_2 + 0x5e);
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
    *(undefined2 *)((longlong)param_1 + 0x62) = *(undefined2 *)((longlong)param_2 + 0x62);
    *(undefined2 *)((longlong)param_1 + 100) = *(undefined2 *)((longlong)param_2 + 100);
    *(undefined2 *)((longlong)param_1 + 0x66) = *(undefined2 *)((longlong)param_2 + 0x66);
    *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_2 + 0xd);
    *(undefined2 *)((longlong)param_1 + 0x6a) = *(undefined2 *)((longlong)param_2 + 0x6a);
    *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
    *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    *(undefined4 *)((longlong)param_1 + 0x94) = *(undefined4 *)((longlong)param_2 + 0x94);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
    param_1[0x14] = param_2[0x14];
    return param_1;
}



void FUN_1406070a0(undefined8 *param_1)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(int *)(param_1 + 2) != 0) {
        lVar1 = 0;
        do {
            if (*(longlong *)(lVar1 + param_1[3]) != 0) {
                FUN_14018b900(*(longlong *)(lVar1 + param_1[3]),0);
            }
            uVar2 = uVar2 + 1;
            lVar1 = lVar1 + 0xa8;
        } while (uVar2 < *(uint *)(param_1 + 2));
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3],0);
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = 0;
    return;
}



void FUN_140607120(undefined8 param_1,longlong param_2,longlong *param_3)

{
    byte bVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong lVar5;
    short *psVar6;

    if (param_2 != 0) {
        plVar3 = (longlong *)FUN_14018b280(0x178,0);
        if (plVar3 == (longlong *)0x0) {
            plVar3 = (longlong *)0x0;
        }
        else {
            FUN_14079e980(plVar3);
            *plVar3 = (longlong)&PTR_LAB_140b6f2f8;
            *(undefined4 *)(plVar3 + 0x26) = 0;
            FUN_1407e4830((longlong)plVar3 + 0x134,0,0x40);
        }
        psVar6 = (short *)param_3[3];
        plVar4 = plVar3 + 4;
        lVar5 = 0x21;
        do {
            if ((lVar5 == -0x7fffffdd) || (*psVar6 == 0)) {
                if (lVar5 != 0) goto LAB_1406071d0;
                break;
            }
            *(short *)plVar4 = *psVar6;
            plVar4 = (longlong *)((longlong)plVar4 + 2);
            psVar6 = psVar6 + 1;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        plVar4 = (longlong *)((longlong)plVar4 + -2);
        LAB_1406071d0:
        *(short *)plVar4 = 0;
        plVar3[2] = *param_3;
        plVar3[3] = param_3[1];
        *(undefined4 *)((longlong)plVar3 + 100) = *(undefined4 *)(param_3 + 4);
        *(undefined4 *)(plVar3 + 0xd) = *(undefined4 *)((longlong)param_3 + 0x24);
        *(undefined4 *)((longlong)plVar3 + 0x6c) = *(undefined4 *)(param_3 + 5);
        *(undefined4 *)(plVar3 + 0xe) = *(undefined4 *)((longlong)param_3 + 0x34);
        *(uint *)(plVar3 + 0xf) = (uint)*(byte *)(param_3 + 6);
        plVar3[0x22] = param_3[0xb];
        plVar3[0x23] = param_3[0xc];
        *(undefined4 *)(plVar3 + 0x13) = *(undefined4 *)(param_3 + 7);
        *(undefined4 *)(plVar3 + 0x1a) = *(undefined4 *)(param_3 + 0x12);
        *(undefined4 *)((longlong)plVar3 + 0xd4) = *(undefined4 *)((longlong)param_3 + 0x94);
        *(undefined4 *)(plVar3 + 0x1b) = *(undefined4 *)(param_3 + 0x13);
        *(undefined4 *)(plVar3 + 0x1c) = *(undefined4 *)(param_3 + 0x14);
        *(undefined4 *)(plVar3 + 0x1d) = *(undefined4 *)(param_3 + 0x15);
        plVar3[0x21] = 0;
        FUN_1403705b0(plVar3 + 0x20,param_3[0x17],*(undefined4 *)((longlong)param_3 + 0xb4));
        *(undefined4 *)(plVar3 + 1) = *(undefined4 *)(param_3 + 2);
        *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)(param_3 + 0x18);
        if ((*(int *)(param_2 + 0x10) == *(int *)(plVar3 + 2)) &&
            (*(longlong *)(param_2 + 0x18) == plVar3[3])) {
            bVar1 = 1;
        }
        else {
            bVar1 = 0;
        }
        *(uint *)(plVar3 + 0x26) = (uint)bVar1;
        (**(code **)(*plVar3 + 0x10))(plVar3,param_2);
        iVar2 = FUN_14079ec20(param_2,plVar3);
        if (iVar2 < 0) {
            (**(code **)*plVar3)(plVar3,1);
            FUN_1400035b0(0x1e,0,0,param_3[1],*(undefined4 *)param_3,param_3[3]);
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140607310(longlong param_1,uint *param_2)

{
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    int iVar6;
    longlong lVar7;
    uint uVar8;
    ulonglong uVar9;

    uVar9 = 0;
    if (*param_2 != 0) {
        do {
            lVar3 = *(longlong *)(param_1 + 0x40);
            iVar1 = *(int *)(*(longlong *)(param_2 + 2) + 4 + uVar9 * 8);
            uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 2) + uVar9 * 8);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c642c0 == 0) && (iVar6 = FUN_140240d20(), -1 < iVar6)) {
                    lVar7 = (**(code **)(*DAT_140c64b30 + 0x18))(DAT_140c64b30,uVar2);
                    goto LAB_14060739f;
                }
            }
            else {
                lVar7 = (*DAT_140c63840)(&PTR_u_TargetMarker_140a6d968,uVar2,DAT_140c63858);
                LAB_14060739f:
                if (lVar7 != 0) {
                    lVar7 = FUN_1406017b0(lVar3);
                    if (lVar7 != 0) {
                        for (plVar4 = *(longlong **)(lVar3 + 0x80); plVar4 != (longlong *)0x0;
                             plVar4 = (longlong *)plVar4[2]) {
                            iVar6 = (**(code **)(*plVar4 + 0x38))(plVar4);
                            if (iVar6 == *(int *)(lVar7 + 4)) {
                                (**(code **)(*plVar4 + 0x20))(plVar4);
                                break;
                            }
                        }
                    }
                    lVar5 = DAT_140c65898;
                    *(int *)(lVar7 + 4) = iVar1;
                    lVar7 = FUN_1403d90d0(lVar5);
                    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x16e8) != 0)) {
                        FUN_140601880(lVar3,uVar2,iVar1);
                    }
                    if (((iVar1 == 0) || ((lVar7 != 0 && (*(longlong *)(lVar7 + 0x16e8) != 0)))) &&
                        (lVar3 == *(longlong *)(DAT_140c65898 + 0x6c50))) {
                        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Group_SetMark",&DAT_1409ea434,
                                      uVar2,iVar1);
                    }
                }
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
        } while (uVar8 < *param_2);
    }
    return;
}



void FUN_140607490(longlong param_1,longlong param_2)

{
    undefined4 uVar1;
    float fVar2;

    *(uint *)(param_1 + 0x78) = (uint)*(byte *)(param_2 + 0x18);
    *(uint *)(param_1 + 0x7c) = (uint)*(byte *)(param_2 + 0x19);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x1c);
    uVar1 = FUN_1401c9770(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    FUN_1407e15b8(param_1 + 0x84,0x14,param_2 + 0x22,0x14);
    fVar2 = (float)FUN_1401c9770(param_2 + 0x36);
    *(int *)(param_1 + 0xa0) = (int)(longlong)fVar2;
    fVar2 = (float)FUN_1401c9770(param_2 + 0x38);
    *(int *)(param_1 + 0xa4) = (int)(longlong)fVar2;
    fVar2 = (float)FUN_1401c9770(param_2 + 0x3a);
    *(int *)(param_1 + 0xa8) = (int)(longlong)fVar2;
    fVar2 = (float)FUN_1401c9770(param_2 + 0x3c);
    *(int *)(param_1 + 0xac) = (int)(longlong)fVar2;
    fVar2 = (float)FUN_1401c9770(param_2 + 0x3e);
    *(int *)(param_1 + 0xb0) = (int)(longlong)fVar2;
    fVar2 = (float)FUN_1401c9770(param_2 + 0x40);
    *(int *)(param_1 + 0xb4) = (int)(longlong)fVar2;
    fVar2 = (float)FUN_1401c9770(param_2 + 0x42);
    *(int *)(param_1 + 0xb8) = (int)(longlong)fVar2;
    fVar2 = (float)FUN_1401c9770(param_2 + 0x44);
    *(int *)(param_1 + 0xbc) = (int)(longlong)fVar2;
    uVar1 = FUN_1401c9770(param_2 + 0x46);
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
    uVar1 = FUN_1401c9770(param_2 + 0x48);
    *(undefined4 *)(param_1 + 0xc4) = uVar1;
    *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x54);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x58);
    fVar2 = (float)FUN_1401c9770(param_2 + 0x4a);
    *(int *)(param_1 + 0xf4) = (int)(longlong)fVar2;
    fVar2 = (float)FUN_1401c9770(param_2 + 0x4c);
    *(int *)(param_1 + 0xf8) = (int)(longlong)fVar2;
    return;
}



undefined8 FUN_1406075f0(int **param_1,int *param_2)

{
    int *piVar1;
    int *piVar2;

    piVar1 = (int *)0x0;
    if (param_1[1] != (int *)0x0) {
        piVar2 = *param_1;
        do {
            if ((*piVar2 == *param_2) && (*(longlong *)(piVar2 + 2) == *(longlong *)(param_2 + 2))) {
                FUN_140607640();
                return 1;
            }
            piVar1 = (int *)((longlong)piVar1 + 1);
            piVar2 = piVar2 + 4;
        } while (piVar1 < param_1[1]);
    }
    return 0;
}



void FUN_140607640(longlong *param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar2 = param_1[1];
    uVar5 = lVar2 - 1;
    lVar4 = param_2 * 0x10 + *param_1;
    FUN_1407db590(lVar4,lVar4 + 0x10,(uVar5 - param_2) * 0x10);
    puVar3 = (undefined8 *)*param_1;
    if (uVar5 == 0) goto LAB_140607705;
    if (puVar3 == (undefined8 *)0x0) {
        lVar2 = lVar2 << 4;
        uVar6 = uVar5;
    }
    else {
        if (uVar5 < (ulonglong)puVar3[-1] || uVar5 == puVar3[-1]) goto LAB_140607705;
        lVar2 = FUN_14018a3e0(lVar2 << 4);
        uVar6 = lVar2 - 0x10U >> 4;
        lVar2 = (uVar6 + 1) * 0x10;
        iVar1 = (**(code **)puVar3[-2])(puVar3 + -2,lVar2);
        if (iVar1 != 0) {
            puVar3[-1] = uVar6;
            goto LAB_140607705;
        }
    }
    puVar3 = (undefined8 *)FUN_14018b280(lVar2,0);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = uVar6;
        *puVar3 = &PTR_LAB_140b55060;
    }
    puVar3 = puVar3 + 2;
    LAB_140607705:
    if ((undefined8 *)*param_1 != puVar3) {
        FUN_1407db590(puVar3,(undefined8 *)*param_1,uVar5 * 0x10);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = uVar5;
    return;
}



undefined4 *
FUN_1406077d0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
    short *psVar1;
    undefined4 local_28 [2];
    undefined4 *local_20;
    code *local_18;
    undefined8 local_10;

    *param_1 = param_4;
    *(undefined8 *)(param_1 + 1) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    local_28[0] = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1[0x15] = 0;
    param_1[4] = 0x544e5645;
    local_10 = 0;
    param_1[0x16] = param_2;
    param_1[0x17] = 1000;
    local_18 = FUN_1406078a0;
    local_20 = param_1;
    FUN_140195960(param_1 + 4,1000,local_28,4);
    psVar1 = (short *)FUN_14034bdd0();
    if ((psVar1 != (short *)0x0) && (*psVar1 != 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CountdownTick",&DAT_1409eed2c,psVar1);
        return param_1;
    }
    FUN_140607990();
    return param_1;
}



void FUN_1406078a0(longlong param_1)

{
    int iVar1;
    short *psVar2;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (0 < *(int *)(param_1 + 0x58)) {
        iVar1 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x5c);
        *(int *)(param_1 + 0x58) = iVar1;
        if (iVar1 < 1) {
            psVar2 = (short *)FUN_14034bdd0(param_1,*(undefined4 *)(param_1 + 8));
            if ((psVar2 != (short *)0x0) && (*psVar2 != 0)) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CountdownTick",&DAT_1409eed2c,psVar2)
                        ;
                return;
            }
            FUN_140607990();
            return;
        }
        psVar2 = (short *)FUN_14034bdd0(param_1,*(undefined4 *)(param_1 + 4));
        if ((psVar2 == (short *)0x0) || (*psVar2 == 0)) {
            FUN_140607990();
        }
        else {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CountdownTick",&DAT_1409eed2c,psVar2);
        }
        local_28[0] = 0;
        local_10 = 0;
        local_18 = FUN_1406078a0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x10,*(undefined4 *)(param_1 + 0x5c),local_28,4);
    }
    return;
}



void FUN_140607990(undefined8 param_1,undefined4 param_2)

{
    undefined auStack120 [32];
    undefined local_58 [64];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    FUN_14034bf80(local_58,0x20,&DAT_140b24364,param_2);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CountdownTick",&DAT_1409eed2c,local_58);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack120);
    return;
}



longlong FUN_1406080e0(longlong param_1,uint param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res8;
    longlong local_res18;
    uint local_18 [2];
    undefined8 local_10;

    lVar5 = *(longlong *)(param_1 + 0x70);
    if (lVar5 == 0) {
        lVar5 = FUN_14018b280(0x1c0,0);
        if (lVar5 == 0) {
            lVar5 = 0;
        }
        else {
            lVar5 = FUN_140609470(lVar5,param_1,*(undefined8 *)(param_1 + 0x50));
        }
    }
    else {
        if (*(undefined8 **)(lVar5 + 0x1b0) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar5 + 0x1b0) = *(undefined8 *)(lVar5 + 0x1b8);
        }
        if (*(longlong *)(lVar5 + 0x1b8) != 0) {
            *(undefined8 *)(*(longlong *)(lVar5 + 0x1b8) + 0x1b0) = *(undefined8 *)(lVar5 + 0x1b0);
        }
        *(undefined8 *)(lVar5 + 0x1b0) = 0;
        *(undefined8 *)(lVar5 + 0x1b8) = 0;
    }
    plVar1 = (longlong *)(param_1 + 0x68);
    if (*(longlong *)(lVar5 + 0x1b0) == 0) {
        *(longlong **)(lVar5 + 0x1b0) = plVar1;
        plVar2 = (longlong *)(lVar5 + 0x1b8);
        *plVar2 = *plVar1;
        *plVar1 = lVar5;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x1b0) = plVar2;
        }
    }
    FUN_140609670(lVar5,param_2);
    lVar3 = *(longlong *)(param_1 + 0x80);
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
        local_10 = 0;
        local_18[0] = param_2;
        FUN_140055c60(param_1 + 0x78,&local_res18,&local_res8,local_18);
        local_res8 = local_res18;
    }
    *(longlong *)(local_res8 + 0x28) = lVar5;
    return lVar5;
}



bool FUN_140608230(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x80);
    local_res8 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x20) < *(uint *)(param_2 + 0xe8)) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            local_res8 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    if ((local_res8 == lVar1) || (*(uint *)(param_2 + 0xe8) < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar1;
    }
    if (local_res8 != lVar1) {
        return *(longlong *)(local_res8 + 0x28) == param_2;
    }
    return param_2 == 0;
}



void FUN_1406082c0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    undefined4 local_res8 [8];

    if (*(undefined8 **)(param_2 + 0x1b0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_2 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b8);
    }
    plVar1 = (longlong *)(param_2 + 0x1b8);
    if (*plVar1 != 0) {
        *(undefined8 *)(*plVar1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
    }
    plVar2 = (longlong *)(param_1 + 0x70);
    *plVar1 = 0;
    *(longlong **)(param_2 + 0x1b0) = plVar2;
    *plVar1 = *plVar2;
    *plVar2 = param_2;
    if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 0x1b0) = plVar1;
    }
    local_res8[0] = *(undefined4 *)(param_2 + 0xe8);
    FUN_14060ab50(param_1 + 0x78,local_res8);
    return;
}



void FUN_140608350(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined4 local_res8 [2];

    lVar3 = *(longlong *)(param_1 + 0x68);
    if (lVar3 != 0) {
        plVar1 = (longlong *)(param_1 + 0x70);
        do {
            if (*(undefined8 **)(lVar3 + 0x1b0) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar3 + 0x1b0) = *(undefined8 *)(lVar3 + 0x1b8);
            }
            plVar2 = (longlong *)(lVar3 + 0x1b8);
            if (*plVar2 != 0) {
                *(undefined8 *)(*plVar2 + 0x1b0) = *(undefined8 *)(lVar3 + 0x1b0);
            }
            *plVar2 = 0;
            *(longlong **)(lVar3 + 0x1b0) = plVar1;
            *plVar2 = *plVar1;
            *plVar1 = lVar3;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0x1b0) = plVar2;
            }
            local_res8[0] = *(undefined4 *)(lVar3 + 0xe8);
            FUN_14060ab50(param_1 + 0x78,local_res8);
            lVar3 = *(longlong *)(param_1 + 0x68);
        } while (lVar3 != 0);
    }
    lVar3 = *(longlong *)(param_1 + 0x70);
    while (lVar3 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x70);
        if (*(undefined8 **)(lVar3 + 0x1b0) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar3 + 0x1b0) = *(undefined8 *)(lVar3 + 0x1b8);
        }
        if (*(longlong *)(lVar3 + 0x1b8) != 0) {
            *(undefined8 *)(*(longlong *)(lVar3 + 0x1b8) + 0x1b0) = *(undefined8 *)(lVar3 + 0x1b0);
        }
        *(undefined8 *)(lVar3 + 0x1b0) = 0;
        *(undefined8 *)(lVar3 + 0x1b8) = 0;
        if (lVar3 != 0) {
            FUN_140608480(lVar3);
            FUN_14018b900(lVar3,0);
        }
        lVar3 = *(longlong *)(param_1 + 0x70);
    }
    return;
}



void FUN_140608480(longlong param_1)

{
    longlong **pplVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;

    if (*(undefined8 **)(param_1 + 0x1b0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1b8);
    }
    if (*(longlong *)(param_1 + 0x1b8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x1b8) + 0x1b0) = *(undefined8 *)(param_1 + 0x1b0);
    }
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    if (*(longlong **)(param_1 + 0x170) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x170) + 8))();
    }
    if (*(longlong **)(param_1 + 0x168) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x168) + 8))();
    }
    if (*(longlong **)(param_1 + 0x160) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x160) + 8))();
    }
    if (*(longlong **)(param_1 + 0x138) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x138) + 8))();
    }
    if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x130) + 8))();
    }
    if (*(longlong **)(param_1 + 0x128) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x128) + 8))();
    }
    if (*(longlong **)(param_1 + 0x100) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x100) + 8))();
    }
    if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xf8) + 8))();
    }
    if (*(longlong **)(param_1 + 0xf0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xf0) + 8))();
    }
    iVar3 = 0xc;
    lVar4 = param_1 + 0xe0;
    iVar2 = 0xc;
    do {
        pplVar1 = (longlong **)(lVar4 + -8);
        lVar4 = lVar4 + -8;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    param_1 = param_1 + 0x70;
    do {
        pplVar1 = (longlong **)(param_1 + -8);
        param_1 = param_1 + -8;
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    return;
}



ulonglong FUN_1406085e0(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;

    uVar3 = FUN_1402ec590(param_1,param_1 + 0x50);
    uVar5 = uVar3 & 0xffffffff;
    if (-1 < (int)uVar3) {
        lVar4 = FUN_14018b280(0x1c0,0);
        if (lVar4 == 0) {
            lVar4 = 0;
        }
        else {
            lVar4 = FUN_140609470(lVar4,param_1,*(undefined8 *)(param_1 + 0x50));
        }
        plVar1 = (longlong *)(param_1 + 0x70);
        uVar3 = uVar5;
        if (*(longlong *)(lVar4 + 0x1b0) == 0) {
            *(longlong **)(lVar4 + 0x1b0) = plVar1;
            plVar2 = (longlong *)(lVar4 + 0x1b8);
            *plVar2 = *plVar1;
            *plVar1 = lVar4;
            if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0x1b0) = plVar2;
            }
        }
    }
    return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 * FUN_140608670(undefined4 *param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined *puVar4;
    undefined8 *puVar5;
    int iVar6;

    *param_1 = 0;
    uVar3 = uRam0000000140c7839c;
    uVar2 = uRam0000000140c78398;
    uVar1 = uRam0000000140c78394;
    param_1[4] = _DAT_140c78390;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar3 = uRam0000000140c783ac;
    uVar2 = uRam0000000140c783a8;
    uVar1 = uRam0000000140c783a4;
    param_1[8] = _DAT_140c783a0;
    param_1[9] = uVar1;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    uVar3 = uRam0000000140c783bc;
    uVar2 = uRam0000000140c783b8;
    uVar1 = uRam0000000140c783b4;
    param_1[0xc] = _DAT_140c783b0;
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
    uVar3 = uRam0000000140c783cc;
    uVar2 = uRam0000000140c783c8;
    uVar1 = uRam0000000140c783c4;
    param_1[0x10] = _DAT_140c783c0;
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    puVar4 = (undefined *)FUN_14018b280(0x30,0);
    *(undefined8 *)(param_1 + 0x22) = 0;
    iVar6 = 0xc;
    *(undefined **)(param_1 + 0x20) = puVar4;
    *puVar4 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) = *(longlong *)(param_1 + 0x20);
    *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x42) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    puVar5 = (undefined8 *)(param_1 + 0x48);
    do {
        iVar6 = iVar6 + -1;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = puVar5 + 4;
    } while (-1 < iVar6);
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    param_1[0x32] = 0;
    return param_1;
}



void FUN_140608780(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;

    FUN_140608350();
    iVar3 = 0xc;
    lVar2 = param_1 + 0x2b8;
    do {
        plVar1 = (longlong *)(lVar2 + -0x20);
        lVar2 = lVar2 + -0x20;
        if (*plVar1 != 0) {
            FUN_14018b900(*plVar1,0);
        }
        iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    FUN_140008410(param_1 + 0x78);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x80),0);
    if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_1401a4a00(param_1 + 0x70);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_1401a4a00(param_1 + 0x68);
    }
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
    }
    if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x58) + 8))();
    }
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
    }
    return;
}



void FUN_140608850(longlong param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x80);
    local_res8 = lVar2;
    lVar1 = *(longlong *)(lVar2 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if (local_res8 == lVar2) {
        lVar2 = 0;
    }
    else {
        lVar2 = *(longlong *)(local_res8 + 0x28);
    }
    if (param_3 != 0) {
        if (lVar2 != 0) goto LAB_1406088d0;
        lVar2 = FUN_1406080e0();
    }
    if (lVar2 == 0) {
        return;
    }
    LAB_1406088d0:
    FUN_140609810(lVar2,param_3,param_4);
    *(undefined4 *)(lVar2 + 0x1a8) = param_5;
    return;
}



void FUN_140608900(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined8 uVar5;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x80);
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
    if (((local_res8 != lVar1) &&
         (puVar3 = *(undefined8 **)(local_res8 + 0x28), puVar3 != (undefined8 *)0x0)) &&
        (*(char *)((longlong)puVar3 + 0x19c) != '\0')) {
        uVar5 = *puVar3;
        iVar4 = FUN_140608230(uVar5,puVar3);
        if (iVar4 != 0) {
            FUN_1406082c0(uVar5,puVar3);
            *(undefined *)((longlong)puVar3 + 0x19c) = 0;
        }
    }
    return;
}



void FUN_1406089a0(longlong param_1,uint param_2,longlong param_3)

{
    longlong *plVar1;
    uint *puVar2;
    longlong lVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;
    uint *puVar7;
    uint *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    uint local_res10 [2];
    uint *local_38;
    uint *local_30;

    uVar9 = (ulonglong)param_2;
    local_res10[0] = param_2;
    if (*(ulonglong *)(param_1 + 0x108) < uVar9 || *(ulonglong *)(param_1 + 0x108) == uVar9) {
        do {
            lVar6 = *(longlong *)(param_1 + 0x108);
            uVar5 = lVar6 + 1;
            lVar3 = FUN_14018db00(*(undefined8 *)(param_1 + 0x100),uVar5);
            *(undefined8 *)(lVar3 + lVar6 * 8) = 0;
            if (*(longlong *)(param_1 + 0x100) != lVar3) {
                FUN_1407db590(lVar3);
                if (*(longlong *)(param_1 + 0x100) != 0) {
                    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x100) + -0x10) + 8))();
                }
                *(longlong *)(param_1 + 0x100) = lVar3;
            }
            *(ulonglong *)(param_1 + 0x108) = uVar5;
        } while (uVar5 <= uVar9);
    }
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x100) + uVar9 * 8);
    if (lVar6 == 0) goto LAB_140608b76;
    uVar5 = (ulonglong)((~*(uint *)(*(longlong *)(lVar6 + 0x70) + 0x10c) & 0x4000000) >> 0x1a);
    lVar6 = uVar5 * 0x20 + param_1;
    lVar10 = (uVar5 + 9) * 0x20;
    FUN_14060ad20(&local_38,*(undefined8 *)(lVar6 + 0x118),*(undefined8 *)(lVar10 + param_1),
                  local_res10);
    for (lVar3 = (longlong)local_30 - (longlong)local_38 >> 4; puVar7 = local_38, 0 < lVar3;
         lVar3 = lVar3 + -1) {
        if ((((*local_38 == param_2) || (puVar7 = local_38 + 1, local_38[1] == param_2)) ||
             (puVar7 = local_38 + 2, local_38[2] == param_2)) ||
            (puVar7 = local_38 + 3, local_38[3] == param_2)) goto LAB_140608b16;
        local_38 = local_38 + 4;
    }
    lVar3 = (longlong)local_30 - (longlong)local_38 >> 2;
    puVar8 = local_30;
    if (lVar3 == 1) {
        LAB_140608b12:
        puVar7 = local_38;
        if (*local_38 == param_2) goto LAB_140608b16;
    }
    else {
        if (lVar3 == 2) {
            LAB_140608b0a:
            puVar7 = local_38;
            if (*local_38 != param_2) {
                local_38 = local_38 + 1;
                goto LAB_140608b12;
            }
        }
        else {
            if (lVar3 != 3) goto LAB_140608b44;
            if (*local_38 != param_2) {
                local_38 = local_38 + 1;
                goto LAB_140608b0a;
            }
        }
        LAB_140608b16:
        puVar8 = puVar7;
        puVar2 = puVar7;
        if (puVar7 != local_30) {
            while (puVar2 = puVar2 + 1, puVar8 = puVar7, puVar2 != local_30) {
                if (*puVar2 != param_2) {
                    *puVar7 = *puVar2;
                    puVar7 = puVar7 + 1;
                }
            }
        }
    }
    LAB_140608b44:
    lVar3 = *(longlong *)(lVar10 + param_1);
    FUN_1407db590(puVar8,lVar3);
    plVar1 = (longlong *)(lVar6 + 0x120);
    *plVar1 = *plVar1 + (lVar3 - (longlong)puVar8 >> 2) * -4;
    LAB_140608b76:
    *(longlong *)(*(longlong *)(param_1 + 0x100) + uVar9 * 8) = param_3;
    if (param_3 != 0) {
        uVar4 = (~*(uint *)(*(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x100) + uVar9 * 8) + 0x70) + 0x10c)
                 & 0x4000000) >> 0x1a;
        lVar3 = (ulonglong)uVar4 * 0x20;
        puVar7 = *(uint **)(lVar3 + 0x118 + param_1);
        lVar6 = *(longlong *)(((ulonglong)uVar4 + 9) * 0x20 + param_1) - (longlong)puVar7 >> 2;
        while (lVar10 = lVar6, 0 < lVar10) {
            lVar6 = lVar10 >> 1;
            if (puVar7[lVar6] < param_2) {
                puVar7 = puVar7 + lVar6 + 1;
                lVar6 = lVar10 + (-1 - lVar6);
            }
        }
        lVar3 = param_1 + 0x110 + lVar3;
        puVar8 = *(uint **)(lVar3 + 0x10);
        if ((puVar8 != *(uint **)(lVar3 + 0x18)) && (puVar7 == puVar8)) {
            if (puVar8 != (uint *)0x0) {
                *puVar8 = param_2;
            }
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 4;
            return;
        }
        FUN_14017b140(lVar3,puVar7,local_res10);
    }
    return;
}



void FUN_140608c60(undefined8 param_1,ulonglong param_2,int param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    longlong *plVar4;

    FUN_1406089a0(param_1,param_2,0);
    if (param_3 != 0) {
        uVar2 = 0;
        if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
            plVar4 = *(longlong **)(DAT_140c65898 + 0xa90);
            while ((lVar1 = *plVar4, lVar1 == 0 || (*(int *)(lVar1 + 0x40) != param_3))) {
                uVar2 = uVar2 + 1;
                plVar4 = plVar4 + 1;
                if (*(ulonglong *)(DAT_140c65898 + 0xa98) <= uVar2) {
                    return;
                }
            }
            uVar3 = FUN_1405a4b80(lVar1,1);
            FUN_1406089a0(param_1,param_2 & 0xffffffff,uVar3);
        }
    }
    return;
}



undefined8 FUN_140608d00(longlong param_1)

{
    *(uint *)(param_1 + 0xa0) = (uint)(*(int *)(param_1 + 0xa0) == 0);
    *(uint *)(param_1 + 0xa4) = (uint)(*(int *)(param_1 + 0xa4) == 0);
    *(uint *)(param_1 + 0xa8) = (uint)(*(int *)(param_1 + 0xa8) == 0);
    *(uint *)(param_1 + 0xac) = (uint)(*(int *)(param_1 + 0xac) == 0);
    *(uint *)(param_1 + 0xb0) = (uint)(*(int *)(param_1 + 0xb0) == 0);
    *(uint *)(param_1 + 0xb4) = (uint)(*(int *)(param_1 + 0xb4) == 0);
    *(uint *)(param_1 + 0xb8) = (uint)(*(int *)(param_1 + 0xb8) == 0);
    *(uint *)(param_1 + 0xbc) = (uint)(*(int *)(param_1 + 0xbc) == 0);
    *(uint *)(param_1 + 0xc0) = (uint)(*(int *)(param_1 + 0xc0) == 0);
    *(uint *)(param_1 + 0xc4) = (uint)(*(int *)(param_1 + 0xc4) == 0);
    *(uint *)(param_1 + 200) = (uint)(*(int *)(param_1 + 200) == 0);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"QuestCalloutToggle",
                  (longlong)L"bKillingSpree" + 0x1d);
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140608df0(uint *param_1,uint *param_2,float *param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    float fVar8;
    float fVar9;
    undefined auVar10 [16];
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    undefined auStack408 [32];
    float local_178;
    undefined local_168 [12];
    float fStack348;
    undefined local_158 [16];
    float local_148;
    float local_144;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    float local_124;
    undefined8 local_120;
    undefined4 local_118;
    undefined4 uStack276;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined *local_f8 [10];
    ulonglong local_a8;

    uVar4 = DAT_140c636a8;
    local_a8 = DAT_140c0f7b0 ^ (ulonglong)auStack408;
    fVar15 = 1.0;
    local_148 = param_3[0xe] / param_3[10] - 1e-05;
    local_144 = param_3[0xe] / (param_3[10] + 1.0);
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    param_1[4] = *param_2;
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    param_1[8] = param_2[4];
    param_1[9] = uVar1;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    uVar1 = param_2[9];
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[8];
    param_1[0xd] = uVar1;
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar3;
    uVar1 = param_2[0xd];
    uVar2 = param_2[0xe];
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0xc];
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    uVar1 = *param_1;
    lVar5 = *(longlong *)(param_1 + 0x1a);
    *param_1 = uVar4;
    fVar16 = (float)(ulonglong)(uVar4 - uVar1) * 0.001;
    for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x1b8)) {
        local_178 = fVar16;
        FUN_140609d70(lVar5);
        uVar4 = DAT_140c636a8;
    }
    uVar7 = (ulonglong)uVar4;
    if ((DAT_140dc3598 & 1) == 0) {
        DAT_140dc3598 = DAT_140dc3598 | 1;
        _DAT_140dc35a0 = 0.0;
        _DAT_140dc35b0 = 0.0;
        _DAT_140dc35c0 = 0.0;
        fVar16 = 0.0;
        _DAT_140dc35a8 = _DAT_140c77880 - 0.0;
        _DAT_140dc35b8 = fRam0000000140c77884 - 0.0;
        local_168._8_4_ = fRam0000000140c77888 - 0.0;
        fVar11 = (fRam0000000140c7788c - 0.0) * (fRam0000000140c7788c - 0.0);
        _local_168 = CONCAT412(fVar11,CONCAT48(local_168._8_4_ * local_168._8_4_,
                                               CONCAT44(_DAT_140dc35b8 * _DAT_140dc35b8,
                                                        _DAT_140dc35a8 * _DAT_140dc35a8)));
        uVar6 = (ulonglong)(_DAT_140dc35a8 * _DAT_140dc35a8 < _DAT_140dc35b8 * _DAT_140dc35b8);
        lVar5 = 1 - uVar6;
        if (*(float *)(local_168 + uVar6 * 4) <= 0.0 && *(float *)(local_168 + uVar6 * 4) != 0.0) {
            uVar6 = 2;
        }
        auVar10 = ZEXT416((uint)((&fStack348)[-(lVar5 + uVar6)] + *(float *)(local_168 + lVar5 * 4))) &
                  (undefined  [16])0xffffffffffffffff;
        fVar8 = SUB164(auVar10,0) + *(float *)(local_168 + uVar6 * 4);
        auVar10 = CONCAT124(SUB1612(auVar10 >> 0x20,0),fVar8);
        if (fVar8 <= DAT_140c3d7d8) {
            fVar11 = 0.0;
            local_168._8_4_ = 0.0;
            _DAT_140dc35b8 = 0.0;
            _DAT_140dc35a8 = 0.0;
        }
        else {
            auVar10 = sqrtps(auVar10,auVar10);
            fVar8 = fVar15 / SUB164(auVar10,0);
            _DAT_140dc35a8 = _DAT_140dc35a8 * fVar8;
            _DAT_140dc35b8 = _DAT_140dc35b8 * fVar8;
            local_168._8_4_ = local_168._8_4_ * fVar8;
        }
        fVar8 = fRam0000000140c77874 * 0.0 - _DAT_140dc35b8 * fRam0000000140c77878;
        fVar12 = _DAT_140dc35a8 * 0.0 - _DAT_140c77870 * 0.0;
        fVar13 = _DAT_140dc35b8 * _DAT_140c77870 - _DAT_140dc35a8 * fRam0000000140c77874;
        fVar14 = fVar11 * fRam0000000140c7787c - fVar11 * fRam0000000140c7787c;
        local_158 = CONCAT412(fVar14,CONCAT48(fVar13,CONCAT44(fVar12,fVar8)));
        _local_168 = CONCAT412(fVar14 * fVar14,
                               CONCAT48(fVar13 * fVar13,CONCAT44(fVar12 * fVar12,fVar8 * fVar8)));
        uVar6 = (ulonglong)(fVar8 * fVar8 < fVar12 * fVar12);
        lVar5 = 1 - uVar6;
        if (*(float *)(local_168 + uVar6 * 4) <= 0.0 && *(float *)(local_168 + uVar6 * 4) != 0.0) {
            uVar6 = 2;
        }
        auVar10 = ZEXT416((uint)((&fStack348)[-(lVar5 + uVar6)] + *(float *)(local_168 + lVar5 * 4))) &
                  (undefined  [16])0xffffffffffffffff;
        fVar9 = SUB164(auVar10,0) + *(float *)(local_168 + uVar6 * 4);
        auVar10 = CONCAT124(SUB1612(auVar10 >> 0x20,0),fVar9);
        if (DAT_140c3d7d8 < fVar9) {
            auVar10 = sqrtps(auVar10,auVar10);
            fVar15 = fVar15 / SUB164(auVar10,0);
            _DAT_140dc35a0 = fVar8 * fVar15;
            _DAT_140dc35b0 = fVar12 * fVar15;
            _DAT_140dc35c0 = fVar13 * fVar15;
            fVar16 = fVar14 * fVar14;
        }
        _DAT_140dc35ac = 0;
        _DAT_140dc35bc = 0;
        _DAT_140dc35cc = 0;
        _DAT_140dc35a4 = _DAT_140dc35b8 * 0.0 - _DAT_140dc35b0 * local_168._8_4_;
        _DAT_140dc35b4 = _DAT_140dc35a0 * local_168._8_4_ - _DAT_140dc35a8 * 0.0;
        _DAT_140dc35c4 = _DAT_140dc35b0 * _DAT_140dc35a8 - _DAT_140dc35a0 * _DAT_140dc35b8;
        _local_168 = CONCAT412(fRam0000000140c7788c * fVar16,
                               CONCAT48(fRam0000000140c77888 * _DAT_140dc35c0,
                                        CONCAT44(fRam0000000140c77884 * _DAT_140dc35b0,
                                                 _DAT_140c77880 * _DAT_140dc35a0)));
        uVar6 = (ulonglong)(_DAT_140c77880 * _DAT_140dc35a0 < fRam0000000140c77884 * _DAT_140dc35b0);
        lVar5 = 1 - uVar6;
        if (*(float *)(local_168 + uVar6 * 4) <= 0.0 && *(float *)(local_168 + uVar6 * 4) != 0.0) {
            uVar6 = 2;
        }
        _local_168 = CONCAT412((fVar16 * fVar11 - fVar16 * fVar11) * fRam0000000140c7788c,
                               CONCAT48(_DAT_140dc35c4 * fRam0000000140c77888,
                                        CONCAT44(_DAT_140dc35b4 * fRam0000000140c77884,
                                                 _DAT_140dc35a4 * _DAT_140c77880)));
        _DAT_140dc35d0 =
                (uint)((&fStack348)[-(lVar5 + uVar6)] + *(float *)(local_168 + lVar5 * 4) +
                       *(float *)(local_168 + uVar6 * 4)) ^ 0x80000000;
        uVar6 = (ulonglong)(_DAT_140dc35a4 * _DAT_140c77880 < _DAT_140dc35b4 * fRam0000000140c77884);
        lVar5 = 1 - uVar6;
        if (*(float *)(local_168 + uVar6 * 4) <= 0.0 && *(float *)(local_168 + uVar6 * 4) != 0.0) {
            uVar6 = 2;
        }
        _local_168 = CONCAT412(fRam0000000140c7788c * fVar11,
                               CONCAT48(fRam0000000140c77888 * local_168._8_4_,
                                        CONCAT44(fRam0000000140c77884 * _DAT_140dc35b8,
                                                 _DAT_140c77880 * _DAT_140dc35a8)));
        _DAT_140dc35d4 =
                (uint)((&fStack348)[-(lVar5 + uVar6)] + *(float *)(local_168 + lVar5 * 4) +
                       *(float *)(local_168 + uVar6 * 4)) ^ 0x80000000;
        uVar6 = (ulonglong)(_DAT_140c77880 * _DAT_140dc35a8 < fRam0000000140c77884 * _DAT_140dc35b8);
        lVar5 = 1 - uVar6;
        if (*(float *)(local_168 + uVar6 * 4) <= 0.0 && *(float *)(local_168 + uVar6 * 4) != 0.0) {
            uVar6 = 2;
        }
        _DAT_140dc35dc = 0x3f800000;
        _DAT_140dc35d8 =
                (uint)((&fStack348)[-(lVar5 + uVar6)] + *(float *)(local_168 + lVar5 * 4) +
                       *(float *)(local_168 + uVar6 * 4)) ^ 0x80000000;
        _DAT_140dc35c8 = local_168._8_4_;
    }
    if ((DAT_140dc3598 & 2) == 0) {
        DAT_140dc3598 = DAT_140dc3598 | 2;
        local_f8[0] = &DAT_140dc35a0;
        FUN_1401afc20(local_f8,&DAT_140dc35e0);
    }
    (**(code **)(**(longlong **)(param_1 + 0x14) + 0x30))
            (*(longlong **)(param_1 + 0x14),uVar7 & 0xffffffff,0);
    local_178 = 0.0;
    (**(code **)(**(longlong **)(param_1 + 0x14) + 0x50))
            (*(longlong **)(param_1 + 0x14),&DAT_140dc35a0,&DAT_140dc35e0,&local_148);
    local_138 = 0x3f800000;
    uStack308 = 0;
    uStack304 = 0;
    uStack300 = 0;
    local_118 = 0;
    uStack276 = 0;
    uStack272 = 0xbba3d70a;
    uStack268 = 0;
    local_128 = 0;
    local_120 = 0;
    local_124 = 2.0 / ((*param_3 * 2.0) / param_3[5]);
    local_108 = 0;
    uStack260 = 0;
    uStack256 = 0x3f000000;
    uStack252 = 0x3f800000;
    if ((DAT_140dc3598 & 4) == 0) {
        DAT_140dc3598 = DAT_140dc3598 | 4;
        FUN_1407e4830(&DAT_140dc3620,0,0x310);
    }
    (**(code **)(**(longlong **)(param_1 + 0x14) + 0x88))
            (*(longlong **)(param_1 + 0x14),&local_138,&DAT_140dc3620);
    FUN_1407db4f0(local_a8 ^ (ulonglong)auStack408);
    return;
}



undefined8 FUN_140609400(longlong **param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;

    iVar3 = 0;
    do {
        plVar1 = *param_1;
        if (plVar1 != (longlong *)0x0) {
            iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,1);
            if (iVar2 == 0) {
                return 0;
            }
        }
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 1;
    } while (iVar3 < 0xd);
    return 1;
}



undefined8 * FUN_140609470(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong lVar4;
    longlong **pplVar5;
    undefined **ppuVar6;
    longlong **pplVar7;
    longlong lVar8;
    longlong lVar9;

    pplVar5 = (longlong **)(param_1 + 1);
    *param_1 = param_2;
    lVar4 = 0xd;
    lVar8 = 0xd;
    pplVar3 = pplVar5;
    for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *pplVar3 = (longlong *)0x0;
        pplVar3 = pplVar3 + 1;
    }
    *(undefined4 *)(param_1 + 0xe) = 2;
    ppuVar6 = &PTR_u_UI_Interface_Targeting_Reticle_O_140c391a0;
    lVar2 = 0;
    do {
        (**(code **)(*param_3 + 0x28))(param_3,*ppuVar6,lVar2 + (longlong)pplVar5,0);
        lVar2 = lVar2 + 8;
        ppuVar6 = ppuVar6 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    pplVar3 = (longlong **)(param_1 + 0xf);
    lVar9 = 0xd;
    pplVar7 = pplVar3;
    for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
        *pplVar7 = (longlong *)0x0;
        pplVar7 = pplVar7 + 1;
    }
    *(undefined4 *)(param_1 + 0x1c) = 2;
    ppuVar6 = &PTR_u_UI_Interface_Targeting_Bracket_R_140c39210;
    do {
        (**(code **)(*param_3 + 0x28))(param_3,*ppuVar6,lVar8 + (longlong)pplVar3,0);
        lVar8 = lVar8 + 8;
        ppuVar6 = ppuVar6 + 1;
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    FUN_14060a500(param_1 + 0x1e,param_3);
    FUN_14060a500(param_1 + 0x25,param_3);
    FUN_14060a500(param_1 + 0x2c,param_3);
    *(undefined4 *)(param_1 + 0x35) = 0x7f7fffff;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    lVar8 = 0xd;
    do {
        plVar1 = *pplVar5;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x288))(plVar1,&LAB_140607a00,param_1);
        }
        pplVar5 = pplVar5 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    do {
        plVar1 = *pplVar3;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x288))(plVar1,&DAT_140607d10,param_1);
        }
        pplVar3 = pplVar3 + 1;
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return param_1;
}



bool FUN_1406095e0(longlong param_1,undefined8 param_2)

{
    int iVar1;

    iVar1 = FUN_140609400(param_1 + 8);
    if (iVar1 != 0) {
        iVar1 = FUN_140609400(param_1 + 0x78,param_2);
        if (iVar1 != 0) {
            iVar1 = FUN_14060a650(param_1 + 0xf0,param_2);
            if (iVar1 != 0) {
                iVar1 = FUN_14060a650(param_1 + 0x128,param_2);
                if (iVar1 != 0) {
                    iVar1 = FUN_14060a650(param_1 + 0x160,param_2);
                    return iVar1 != 0;
                }
            }
        }
    }
    return false;
}



void FUN_140609670(longlong param_1,undefined4 param_2)

{
    longlong **pplVar1;
    float fVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong *plVar5;
    longlong **pplVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    *(undefined *)(param_1 + 0x19c) = 0;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined *)(param_1 + 0x1a4) = 0;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0xe8) = param_2;
    plVar5 = (longlong *)FUN_1403d90d0(DAT_140c65898);
    if (plVar5 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar5 + 0x40))(plVar5);
        uVar4 = (**(code **)(*plVar5 + 0x48))(plVar5);
        *(undefined4 *)(param_1 + 0x110) = uVar3;
        *(undefined4 *)(param_1 + 0x118) = uVar4;
        *(undefined4 *)(param_1 + 0x114) = uVar3;
        *(undefined8 *)(param_1 + 0x108) = 0;
        fVar2 = *(float *)((longlong)plVar5 + 0x60c);
        uVar3 = (undefined4)(longlong)*(float *)((longlong)plVar5 + 0x21c);
        *(undefined4 *)(param_1 + 0x148) = uVar3;
        *(undefined4 *)(param_1 + 0x14c) = uVar3;
        *(undefined8 *)(param_1 + 0x140) = 0;
        *(int *)(param_1 + 0x150) = (int)(longlong)fVar2;
    }
    FUN_140609980(param_1,2);
    pplVar1 = (longlong **)(param_1 + 8);
    lVar8 = 0xd;
    local_38 = 0x96;
    local_30 = 0x3f800000;
    local_28 = 0;
    local_20 = 0;
    lVar7 = 0xd;
    pplVar6 = pplVar1;
    do {
        plVar5 = *pplVar6;
        if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x248))(plVar5,0,&local_38);
        }
        pplVar6 = pplVar6 + 1;
        lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    local_38 = 0x96;
    local_30 = 0x3f800000;
    local_28 = 0;
    local_20 = 0;
    pplVar6 = (longlong **)(param_1 + 0x78);
    do {
        plVar5 = *pplVar6;
        if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x248))(plVar5,0,&local_38);
        }
        pplVar6 = pplVar6 + 1;
        lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(longlong ***)(param_1 + 0x120) = pplVar1;
    *(undefined4 *)(param_1 + 0x11c) = 0x15;
    *(longlong ***)(param_1 + 0x158) = pplVar1;
    *(undefined4 *)(param_1 + 0x154) = 0x16;
    *(longlong ***)(param_1 + 400) = pplVar1;
    *(undefined4 *)(param_1 + 0x18c) = 0x17;
    return;
}



void FUN_140609810(longlong param_1,int param_2,int param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong **pplVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if (param_2 != *(int *)(param_1 + 0x198)) {
        local_1c = 0;
        local_14 = 0;
        local_20 = 0x3f800000;
        pplVar3 = (longlong **)(param_1 + 8);
        lVar2 = 0xd;
        local_c = 0;
        if (param_2 == 0) {
            *(undefined *)(param_1 + 0x19c) = 1;
            local_28 = 0x4cf;
            do {
                plVar1 = *pplVar3;
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_28);
                }
                pplVar3 = pplVar3 + 1;
                lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
        }
        else {
            local_28 = 0x4c9;
            do {
                plVar1 = *pplVar3;
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_28);
                }
                pplVar3 = pplVar3 + 1;
                lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
        }
        *(int *)(param_1 + 0x198) = param_2;
    }
    if ((param_2 != 0) && (*(int *)(param_1 + 0xec) != param_3)) {
        FUN_140609980(param_1,param_3);
    }
    return;
}



void FUN_140609900(longlong param_1)

{
    longlong *plVar1;
    longlong **pplVar2;
    longlong lVar3;
    undefined8 local_28;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if ((*(char *)(param_1 + 0x19c) == '\0') && (*(int *)(param_1 + 0x198) != 0)) {
        local_28 = 0x4c9;
        pplVar2 = (longlong **)(param_1 + 8);
        local_20 = 0x3f800000;
        local_1c = 0;
        local_14 = 0;
        local_c = 0;
        lVar3 = 0xd;
        do {
            plVar1 = *pplVar2;
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x248))(plVar1,0,&local_28);
            }
            pplVar2 = pplVar2 + 1;
            lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140609980(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;
    uint uVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined local_28 [12];
    undefined4 uStack28;

    uVar2 = DAT_140dc3930;
    *(undefined4 *)(param_1 + 0xec) = param_2;
    *(undefined4 *)(param_1 + 0x70) = param_2;
    *(undefined4 *)(param_1 + 0xe0) = param_2;
    if ((uVar2 & 1) == 0) {
        uVar2 = uVar2 | 1;
        _DAT_140dc3940 = 0x3dcccccd;
        uRam0000000140dc3944 = 0x3e800000;
        uRam0000000140dc3948 = 0x3dcccccd;
        uRam0000000140dc394c = 0x3f400000;
        _DAT_140dc3950 = 0x3e800000;
        uRam0000000140dc3954 = 0x3dcccccd;
        uRam0000000140dc3958 = 0x3dcccccd;
        uRam0000000140dc395c = 0x3f400000;
        _DAT_140dc3960 = 0x3e800000;
        uRam0000000140dc3964 = 0x3e800000;
        uRam0000000140dc3968 = 0x3e800000;
        uRam0000000140dc396c = 0x3f400000;
        _DAT_140dc3970 = 0x3dcccccd;
        uRam0000000140dc3974 = 0x3e800000;
        uRam0000000140dc3978 = 0x3dcccccd;
        uRam0000000140dc397c = 0x3f400000;
        _DAT_140dc3980 = 0x3dcccccd;
        uRam0000000140dc3984 = 0x3e800000;
        uRam0000000140dc3988 = 0x3dcccccd;
        uRam0000000140dc398c = 0x3f400000;
        _DAT_140dc3990 = 0x3dcccccd;
        uRam0000000140dc3994 = 0x3e800000;
        uRam0000000140dc3998 = 0x3dcccccd;
        uRam0000000140dc399c = 0x3f400000;
        _DAT_140dc39a0 = 0x3dcccccd;
        uRam0000000140dc39a4 = 0x3e800000;
        uRam0000000140dc39a8 = 0x3dcccccd;
        uRam0000000140dc39ac = 0x3f400000;
        _DAT_140dc39b0 = 0x3dcccccd;
        uRam0000000140dc39b4 = 0x3e800000;
        uRam0000000140dc39b8 = 0x3dcccccd;
        uRam0000000140dc39bc = 0x3f400000;
        _DAT_140dc39c0 = 0x3dcccccd;
        uRam0000000140dc39c4 = 0x3e800000;
        uRam0000000140dc39c8 = 0x3dcccccd;
        uRam0000000140dc39cc = 0x3f400000;
        _DAT_140dc39d0 = 0x3dcccccd;
        uRam0000000140dc39d4 = 0x3e800000;
        uRam0000000140dc39d8 = 0x3dcccccd;
        uRam0000000140dc39dc = 0x3f400000;
        _DAT_140dc39e0 = 0x3dcccccd;
        uRam0000000140dc39e4 = 0x3e800000;
        uRam0000000140dc39e8 = 0x3dcccccd;
        uRam0000000140dc39ec = 0x3f400000;
        _DAT_140dc39f0 = 0x3dcccccd;
        uRam0000000140dc39f4 = 0x3e800000;
        uRam0000000140dc39f8 = 0x3dcccccd;
        uRam0000000140dc39fc = 0x3f400000;
        _DAT_140dc3a00 = 0x3dcccccd;
        uRam0000000140dc3a04 = 0x3e800000;
        uRam0000000140dc3a08 = 0x3dcccccd;
        uRam0000000140dc3a0c = 0x3f400000;
        DAT_140dc3930 = uVar2;
    }
    if ((uVar2 & 2) == 0) {
        DAT_140dc3930 = uVar2 | 2;
        _DAT_140dc3a10 = 0x3dcccccd;
        uRam0000000140dc3a14 = 0x3f800000;
        uRam0000000140dc3a18 = 0;
        uRam0000000140dc3a1c = 0x3f800000;
        _DAT_140dc3a20 = 0x3f800000;
        uRam0000000140dc3a24 = 0x3dcccccd;
        uRam0000000140dc3a28 = 0;
        uRam0000000140dc3a2c = 0x3f800000;
        _DAT_140dc3a30 = 0x3f800000;
        uRam0000000140dc3a34 = 0x3f800000;
        uRam0000000140dc3a38 = 0x3f800000;
        uRam0000000140dc3a3c = 0x3f800000;
        _DAT_140dc3a40 = 0x3dcccccd;
        uRam0000000140dc3a44 = 0x3f800000;
        uRam0000000140dc3a48 = 0;
        uRam0000000140dc3a4c = 0x3f800000;
        _DAT_140dc3a50 = 0x3dcccccd;
        uRam0000000140dc3a54 = 0x3f800000;
        uRam0000000140dc3a58 = 0;
        uRam0000000140dc3a5c = 0x3f800000;
        _DAT_140dc3a60 = 0x3dcccccd;
        uRam0000000140dc3a64 = 0x3f800000;
        uRam0000000140dc3a68 = 0;
        uRam0000000140dc3a6c = 0x3f800000;
        _DAT_140dc3a70 = 0x3dcccccd;
        uRam0000000140dc3a74 = 0x3f800000;
        uRam0000000140dc3a78 = 0;
        uRam0000000140dc3a7c = 0x3f800000;
        _DAT_140dc3a80 = 0x3dcccccd;
        uRam0000000140dc3a84 = 0x3f800000;
        uRam0000000140dc3a88 = 0;
        uRam0000000140dc3a8c = 0x3f800000;
        _DAT_140dc3a90 = 0x3dcccccd;
        uRam0000000140dc3a94 = 0x3f800000;
        uRam0000000140dc3a98 = 0;
        uRam0000000140dc3a9c = 0x3f800000;
        _DAT_140dc3aa0 = 0x3dcccccd;
        uRam0000000140dc3aa4 = 0x3f800000;
        uRam0000000140dc3aa8 = 0;
        uRam0000000140dc3aac = 0x3f800000;
        _DAT_140dc3ab0 = 0x3dcccccd;
        uRam0000000140dc3ab4 = 0x3f800000;
        uRam0000000140dc3ab8 = 0;
        uRam0000000140dc3abc = 0x3f800000;
        _DAT_140dc3ac0 = 0x3dcccccd;
        uRam0000000140dc3ac4 = 0x3f800000;
        uRam0000000140dc3ac8 = 0;
        uRam0000000140dc3acc = 0x3f800000;
        _DAT_140dc3ad0 = 0x3dcccccd;
        uRam0000000140dc3ad4 = 0x3f800000;
        uRam0000000140dc3ad8 = 0;
        uRam0000000140dc3adc = 0x3f800000;
    }
    lVar3 = (longlong)*(int *)(param_1 + 0xec) * 0x10;
    FUN_14060a6d0(param_1 + 0xf0,&DAT_140dc3940 + lVar3,&DAT_140dc3a10 + lVar3);
    plVar1 = *(longlong **)(param_1 + 0x128);
    uVar5 = 0x3e800000;
    uVar6 = 0x3e800000;
    uVar7 = 0x3e800000;
    uVar8 = 0x3f400000;
    local_38 = 0x3f666666;
    uStack52 = 0x3f666666;
    uStack48 = 0;
    uStack44 = 0x3f800000;
    local_28 = CONCAT48(0x3e800000,0x3e8000003e800000);
    uStack28 = 0x3f400000;
    if (plVar1 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_28);
        (**(code **)(**(longlong **)(param_1 + 0x128) + 0x70))(uVar4,uStack28);
    }
    plVar1 = *(longlong **)(param_1 + 0x130);
    if (plVar1 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,&local_38);
        (**(code **)(**(longlong **)(param_1 + 0x130) + 0x70))(uVar4,uStack44);
    }
    plVar1 = *(longlong **)(param_1 + 0x138);
    if (plVar1 != (longlong *)0x0) {
        uVar4 = (**(code **)(*plVar1 + 0xb0))(plVar1,&local_38);
        (**(code **)(**(longlong **)(param_1 + 0x138) + 0x70))(uVar4,0x3f800000);
    }
    plVar1 = *(longlong **)(param_1 + 0x160);
    local_28 = CONCAT48(uVar7,CONCAT44(uVar6,uVar5));
    local_38 = 0x3f4ccccd;
    uStack52 = 0x3ecccccd;
    uStack48 = 0x3dcccccd;
    uStack44 = 0x3f800000;
    uStack28 = uVar8;
    if (plVar1 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_28);
        (**(code **)(**(longlong **)(param_1 + 0x160) + 0x70))(uVar5,uStack28);
    }
    plVar1 = *(longlong **)(param_1 + 0x168);
    if (plVar1 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar1 + 0xb0))(plVar1,&local_38);
        (**(code **)(**(longlong **)(param_1 + 0x168) + 0x70))(uVar5,uStack44);
    }
    plVar1 = *(longlong **)(param_1 + 0x170);
    if (plVar1 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar1 + 0xb0))(plVar1,&local_38);
        (**(code **)(**(longlong **)(param_1 + 0x170) + 0x70))(uVar5,0x3f800000);
    }
    return;
}



void FUN_140609c20(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
    int iVar1;
    int iVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    uint uVar6;
    longlong lVar7;
    float fVar8;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar9 [16];

    auVar9 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
    iVar5 = *DAT_140c63750;
    iVar1 = DAT_140c45990;
    if (iVar5 < DAT_140c45990) {
        iVar1 = iVar5;
    }
    if (((&DAT_140c459a0)[iVar1] != '\0') && (iVar1 = *(int *)(param_1 + 0xec), iVar1 != 2)) {
        if (iVar1 == 0) {
            iVar2 = DAT_140c459d0;
            if (iVar5 < DAT_140c459d0) {
                iVar2 = iVar5;
            }
            if ((&DAT_140c459e0)[iVar2] == '\0') {
                return;
            }
        }
        if (iVar1 == 1) {
            iVar1 = DAT_140c45a10;
            if (iVar5 < DAT_140c45a10) {
                iVar1 = iVar5;
            }
            if ((&DAT_140c45a20)[iVar1] == '\0') {
                return;
            }
        }
        uVar3 = (**(code **)(*param_2 + 0x48))(param_2);
        uVar4 = (**(code **)(*param_2 + 0x40))(param_2);
        FUN_14060a770(param_1 + 0xf0,uVar4,uVar3,param_4,auVar9);
        FUN_14060a770(param_1 + 0x128,(longlong)*(float *)((longlong)param_2 + 0x21c),
                      (longlong)*(float *)((longlong)param_2 + 0x60c));
        lVar7 = FUN_1404695e0(param_2);
        if ((lVar7 != 0) && (iVar5 = FUN_140469530(param_2), iVar5 != 0)) {
            fVar8 = (float)FUN_14053da10(lVar7);
            uVar6 = (uint)(longlong)fVar8;
            if (uVar6 < 100) {
                *(uint *)(param_1 + 0x180) = uVar6;
                FUN_14060a770(param_1 + 0x160,(longlong)fVar8 & 0xffffffff,100);
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140609d70(longlong *param_1,float *param_2,float *param_3)

{
    int iVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    bool bVar5;
    bool bVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    longlong lVar10;
    undefined (*pauVar11) [16];
    float *pfVar12;
    longlong *plVar13;
    longlong **pplVar14;
    longlong lVar15;
    longlong *plVar16;
    longlong lVar17;
    float extraout_XMM0_Da;
    undefined auVar18 [16];
    undefined auVar19 [12];
    float fVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    undefined auStack392 [32];
    undefined8 local_168;
    undefined8 uStack352;
    undefined8 local_158;
    undefined8 uStack336;
    undefined local_148 [8];
    uint uStack320;
    float local_138;
    float local_134;
    float local_130;
    undefined local_128 [16];
    undefined local_118 [64];
    float local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    ulonglong local_78;

    local_78 = DAT_140c0f7b0 ^ (ulonglong)auStack392;
    if ((*(int *)(*(longlong *)(DAT_140c65898 + 0x7198) + 0x18) != 0) ||
        (lVar10 = FUN_1403d90d0(), lVar10 == 0)) goto LAB_14060a49e;
    if (*(int *)(lVar10 + 0x250) != 0) {
        bVar6 = false;
        bVar5 = false;
        if (((*(char *)(*(int **)(lVar10 + 0x1908) + 1) != '\0') &&
             (bVar5 = bVar6, **(int **)(lVar10 + 0x1908) - 0x59U < 2)) &&
            (((*(int *)(lVar10 + 0x130) != 0 ||
               ((lVar15 = *(longlong *)(DAT_140c65898 + 0x78), lVar15 != 0 &&
                                                               ((*(int *)(lVar10 + 0x124) == *(int *)(lVar15 + 8) ||
                                                                 ((*(longlong *)(lVar10 + 0x128) != 0 &&
                                                                   (*(longlong *)(&DAT_000018a0 + lVar15) == *(longlong *)(lVar10 + 0x128))))))))) ||
              ((*(longlong *)(lVar10 + 0x18) != 0 &&
                ((iVar7 = FUN_14045bd30(lVar10), iVar7 == 0 &&
                                                 ((*(int *)(lVar10 + 0x124) != 0 || (*(longlong *)(lVar10 + 0x128) != 0)))))))))) {
            bVar5 = true;
        }
        if (((((*(char *)(*(int **)(lVar10 + 0x1908) + 1) == '\0') ||
               (lVar10 == *(longlong *)(DAT_140c65898 + 0x78))) ||
              ((*(longlong *)(DAT_140c65898 + 0x6490) != 0 &&
                (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x2ac) != 0)))) ||
             (((**(int **)(lVar10 + 0x1908) != 0x4d || ((*(byte *)(DAT_140c65898 + 0x1b6c) & 4) == 0)) ||
               (*(int *)(DAT_140c65898 + 0x1b84) != 0)))) && (!bVar5)) goto LAB_14060a49e;
    }
    iVar7 = *(int *)((longlong)param_1 + 0xec);
    iVar8 = *(int *)(param_1 + 0x34);
    iVar1 = *(int *)(*param_1 + 0x98 + (longlong)iVar7 * 4);
    *(int *)(param_1 + 0x34) = iVar1;
    if (iVar1 != 0) goto LAB_14060a49e;
    if ((2 < iVar7) &&
        (iVar7 = *(int *)(*param_1 + 0xcc + (longlong)iVar7 * 4), *(int *)(param_1 + 0x34) = iVar7,
                iVar7 != 0)) {
        plVar13 = *(longlong **)(lVar10 + 0x16f0);
        if (((plVar13 == (longlong *)0x0) &&
             (plVar13 = *(longlong **)(lVar10 + 0x16f8), plVar13 == (longlong *)0x0)) ||
            (iVar7 = (**(code **)(*plVar13 + 0x108))(), iVar7 == 1)) goto LAB_14060a49e;
        *(undefined4 *)(param_1 + 0x34) = 0;
    }
    if (iVar8 != 0) {
        FUN_140609900(param_1);
    }
    if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) goto LAB_14060a49e;
    plVar13 = *(longlong **)(lVar10 + 0x16e8);
    if (plVar13 == (longlong *)0x0) {
        LAB_14060a0a5:
        fVar21 = *(float *)(lVar10 + 0x11e0);
        fVar23 = *(float *)(lVar10 + 0x11e4);
        _local_148 = CONCAT412(fVar23 * param_2[7] + fVar21 * param_2[3] + param_2[0xb] * 0.0 +
                               param_2[0xf],
                               CONCAT48(fVar23 * param_2[6] + fVar21 * param_2[2] + param_2[10] * 0.0 +
                                        param_2[0xe],
                                        CONCAT44(fVar23 * param_2[5] + fVar21 * param_2[1] +
                                                 param_2[9] * 0.0 + param_2[0xd],
                                                 fVar23 * param_2[4] + fVar21 * *param_2 +
                                                 param_2[8] * 0.0 + param_2[0xc])));
    }
    else {
        iVar7 = (**(code **)(*plVar13 + 0x350))(plVar13,0xa9);
        if (iVar7 == 0) {
            iVar7 = (**(code **)(*plVar13 + 0x350))(plVar13);
            if (iVar7 == 0) {
                plVar16 = *(longlong **)(lVar10 + 0x16f0);
                if ((plVar16 == (longlong *)0x0) &&
                    (plVar16 = *(longlong **)(lVar10 + 0x16f8), plVar16 == (longlong *)0x0))
                    goto LAB_14060a0a5;
                lVar15 = (**(code **)(*plVar13 + 0x1a8))(plVar13);
                fVar20 = (*(float *)(lVar15 + 0x50) + *(float *)(lVar15 + 0x40)) * 0.5;
                fVar22 = (*(float *)(lVar15 + 0x54) + *(float *)(lVar15 + 0x44)) * 0.5;
                pfVar12 = (float *)(**(code **)(*plVar16 + 0x38))(plVar16);
                fVar21 = fVar22 * pfVar12[4] + fVar20 * *pfVar12 + pfVar12[8] * 0.0 + pfVar12[0xc];
                fVar23 = fVar22 * pfVar12[5] + fVar20 * pfVar12[1] + pfVar12[9] * 0.0 + pfVar12[0xd];
                fVar20 = fVar22 * pfVar12[6] + fVar20 * pfVar12[2] + pfVar12[10] * 0.0 + pfVar12[0xe];
                auVar19 = CONCAT48(fVar20,CONCAT44(fVar23,fVar21));
                if (*(int *)((longlong)param_1 + 0xec) == 7) {
                    auVar19 = CONCAT48(fVar20 + 0.0,CONCAT44(fVar23 + 1.0,fVar21 + 0.0));
                }
                fVar23 = SUB124(auVar19 >> 0x20,0);
                fVar20 = SUB124(auVar19 >> 0x40,0);
                fVar21 = SUB124(auVar19,0);
                _local_148 = CONCAT412(fVar23 * param_2[7] + fVar21 * param_2[3] + fVar20 * param_2[0xb] +
                                       param_2[0xf],
                                       CONCAT48(fVar23 * param_2[6] + fVar21 * param_2[2] +
                                                fVar20 * param_2[10] + param_2[0xe],
                                                CONCAT44(fVar23 * param_2[5] + fVar21 * param_2[1] +
                                                         fVar20 * param_2[9] + param_2[0xd],
                                                         fVar23 * param_2[4] + fVar21 * *param_2 +
                                                         fVar20 * param_2[8] + param_2[0xc])));
            }
            else {
                pauVar11 = (undefined (*) [16])(**(code **)(*plVar13 + 0x358))(plVar13);
                _local_148 = *pauVar11;
            }
        }
        else {
            pauVar11 = (undefined (*) [16])(**(code **)(*plVar13 + 0x358))();
            _local_148 = *pauVar11;
        }
    }
    lVar15 = *(longlong *)(DAT_140c65898 + 0x71a8);
    if (lVar15 == 0) {
        lVar15 = *(longlong *)(DAT_140c65898 + 0x71a0);
    }
    if (*(float *)(lVar15 + 0x18) <= (float)(uStack320 ^ 0x80000000)) {
        iVar7 = *DAT_140c63750;
        iVar8 = DAT_140c45630;
        if (iVar7 < DAT_140c45630) {
            iVar8 = iVar7;
        }
        iVar1 = DAT_140c45690;
        if (iVar7 < DAT_140c45690) {
            iVar1 = iVar7;
        }
        iVar2 = DAT_140c45630;
        if (iVar7 < DAT_140c45630) {
            iVar2 = iVar7;
        }
        iVar9 = DAT_140c456f0;
        if (iVar7 < DAT_140c456f0) {
            iVar9 = iVar7;
        }
        fVar21 = ((float)(uStack320 ^ 0x80000000) - *(float *)(&DAT_140c45640 + (longlong)iVar8 * 4)) /
                 (*(float *)(&DAT_140c456a0 + (longlong)iVar1 * 4) -
                  *(float *)(&DAT_140c45640 + (longlong)iVar2 * 4));
        if (1.0 <= fVar21) {
            fVar21 = 1.0;
        }
        fVar23 = 0.0;
        if (0.0 <= fVar21) {
            fVar23 = fVar21;
        }
        fVar23 = (*(float *)(&DAT_140c45700 + (longlong)iVar9 * 4) - 1.0) * fVar23 + 1.0;
        fVar21 = local_148._4_4_ * param_3[7] + local_148._0_4_ * param_3[3] + param_3[0xb] * 0.0 +
                 param_3[0xf] * 1.0;
        if (1e-05 <= (float)((uint)fVar21 & 0x7fffffff)) {
            lVar15 = 0xd;
            local_168 = 0x4c3;
            uStack352 = 0x3f800000;
            local_158 = (float *)0x0;
            _local_148 = divps(CONCAT412(fVar21,CONCAT48(local_148._4_4_ * param_3[6] +
                                                         local_148._0_4_ * param_3[2] + param_3[10] * 0.0
                                                         + param_3[0xe] * 1.0,
                                                         CONCAT44(local_148._4_4_ * param_3[5] +
                                                                  local_148._0_4_ * param_3[1] +
                                                                  param_3[9] * 0.0 + param_3[0xd] * 1.0,
                                                                  local_148._4_4_ * param_3[4] +
                                                                  local_148._0_4_ * *param_3 +
                                                                  param_3[8] * 0.0 + param_3[0xc] * 1.0)))
                    ,CONCAT412(fVar21,CONCAT48(fVar21,CONCAT44(fVar21,fVar21))));
            uStack336 = (undefined *)0x0;
            pplVar14 = (longlong **)(param_1 + 0xf);
            lVar17 = 0xd;
            do {
                plVar13 = *pplVar14;
                if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 0x248))(plVar13,0,&local_168);
                }
                pplVar14 = pplVar14 + 1;
                lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            if (*(char *)((longlong)param_1 + 0x19c) == '\0') {
                local_168 = 0x4c3;
                uStack352 = 0x3f800000;
                local_158 = (float *)0x0;
                uStack336 = (undefined *)0x0;
                pplVar14 = (longlong **)(param_1 + 1);
                lVar17 = 0xd;
                do {
                    plVar13 = *pplVar14;
                    if (plVar13 != (longlong *)0x0) {
                        (**(code **)(*plVar13 + 0x248))(plVar13,0,&local_168);
                    }
                    pplVar14 = pplVar14 + 1;
                    lVar17 = lVar17 + -1;
                } while (lVar17 != 0);
            }
            fVar21 = fRam0000000140c77884 * fRam0000000140c77884;
            local_128 = ZEXT816(CONCAT44(local_148._4_4_ / (param_3[5] / *param_3),local_148._0_4_));
            uVar3 = SUB128(CONCAT84(SUB168((ZEXT816(0) << 0x20) >> 0x40,0),fVar21),0);
            uVar4 = uVar3 & 0xffffffff;
            fVar20 = _DAT_140c77880 * _DAT_140c77880 + (float)uVar4 + 0.0;
            auVar18 = rsqrtss(CONCAT412(fVar21,CONCAT48(fVar21,uVar3 << 0x20 | uVar4)),
                              CONCAT412(fRam0000000140c7788c * fRam0000000140c7788c,
                                        CONCAT48(fRam0000000140c77888 * fRam0000000140c77888,
                                                 CONCAT44(fVar21,fVar20))));
            local_134 = SUB164(auVar18,0);
            local_134 = (3.0 - fVar20 * local_134 * local_134) * 0.5 * local_134;
            if (local_134 <= 0.0) {
                local_134 = 0.0;
            }
            local_138 = local_134 * _DAT_140c77880;
            local_134 = local_134 * fRam0000000140c77884;
            FUN_1408fe3d0();
            local_130 = extraout_XMM0_Da;
            FUN_1408fc950();
            local_158 = &local_138;
            uVar3 = local_168 & 0xffffffff00000000;
            local_168 = uVar3 | (uint)fVar23;
            uStack352 = 0;
            local_138 = local_138 * local_130;
            uStack336 = local_128;
            local_168._4_4_ = (undefined4)(uVar3 >> 0x20);
            uStack212 = local_168._4_4_;
            uStack208 = 0;
            uStack204 = 0;
            local_134 = local_134 * local_130;
            local_130 = local_130 * 0.0;
            local_158._4_4_ = (undefined4)((ulonglong)local_158 >> 0x20);
            uStack336._4_4_ = (undefined4)((ulonglong)uStack336 >> 0x20);
            local_c8 = (undefined4)local_158;
            uStack196 = local_158._4_4_;
            uStack192 = (undefined4)uStack336;
            uStack188 = uStack336._4_4_;
            local_d8 = fVar23;
            FUN_1401b0590(&local_d8,local_118);
            pplVar14 = (longlong **)(param_1 + 1);
            do {
                plVar13 = *pplVar14;
                if (plVar13 != (longlong *)0x0) {
                    (**(code **)(*plVar13 + 0x48))(plVar13,local_118);
                }
                pplVar14 = pplVar14 + 1;
                lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
            plVar13 = (longlong *)param_1[(longlong)*(int *)(param_1 + 0xe) + 1];
            if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x128))(plVar13,1);
            }
            plVar13 = (longlong *)param_1[(longlong)*(int *)(param_1 + 0xe) + 1];
            if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 0x140))(plVar13,1);
            }
            *(undefined *)((longlong)param_1 + 0x1a4) = 0;
            FUN_140609c20(param_1,lVar10);
        }
    }
    LAB_14060a49e:
    FUN_1407db4f0(local_78 ^ (ulonglong)auStack392);
    return;
}



void FUN_14060a4c0(undefined8 *param_1)

{
    int iVar1;
    undefined8 uVar2;

    if (*(char *)((longlong)param_1 + 0x19c) != '\0') {
        uVar2 = *param_1;
        iVar1 = FUN_140608230(uVar2,param_1);
        if (iVar1 != 0) {
            FUN_1406082c0(uVar2,param_1);
            *(undefined *)((longlong)param_1 + 0x19c) = 0;
        }
    }
    return;
}



longlong ** FUN_14060a500(longlong **param_1,longlong *param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;

    *param_1 = (longlong *)0x0;
    param_1[1] = (longlong *)0x0;
    param_1[2] = (longlong *)0x0;
    param_1[4] = (longlong *)0x0;
    param_1[5] = (longlong *)0x0;
    param_1[6] = (longlong *)0x0;
    iVar2 = (**(code **)(*param_2 + 0x28))
            (param_2,L"UI\\Interface\\Targeting\\Bar_Health_BnW\\Bar_Health_BnW.m3",param_1,
             0);
    if (-1 < iVar2) {
        local_38 = 0x96;
        local_30 = 0x3f800000;
        local_28 = 0;
        local_20 = 0;
        (**(code **)(**param_1 + 0x248))(*param_1,0,&local_38);
    }
    iVar2 = (**(code **)(*param_2 + 0x28))
            (param_2,L"UI\\Interface\\Targeting\\Bar_Health_BnW\\Bar_Health_BnW.m3",
             param_1 + 1,0);
    if (-1 < iVar2) {
        local_38 = 0x96;
        local_30 = 0x3f800000;
        local_28 = 0;
        local_20 = 0;
        (**(code **)(*param_1[1] + 0x248))(param_1[1],0,&local_38);
    }
    iVar2 = (**(code **)(*param_2 + 0x28))
            (param_2,L"UI\\Interface\\Targeting\\Bar_Health_BnW\\Bar_GlowTip_BnW.m3",
             param_1 + 2,0);
    if (-1 < iVar2) {
        local_38 = 0x96;
        local_30 = 0x3f800000;
        local_28 = 0;
        local_20 = 0;
        (**(code **)(*param_1[2] + 0x248))(param_1[2],0,&local_38);
    }
    plVar1 = param_1[1];
    if ((plVar1 != (longlong *)0x0) && (param_1[2] != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x380))(plVar1,0x18);
    }
    return param_1;
}



undefined8 FUN_14060a650(longlong **param_1,undefined8 param_2)

{
    longlong *plVar1;
    int iVar2;

    plVar1 = *param_1;
    if ((plVar1 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,1), iVar2 == 0)) {
        return 0;
    }
    plVar1 = param_1[1];
    if ((plVar1 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,1), iVar2 == 0)) {
        return 0;
    }
    plVar1 = param_1[2];
    if ((plVar1 != (longlong *)0x0) &&
        (iVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,1), iVar2 == 0)) {
        return 0;
    }
    return 1;
}



void FUN_14060a6d0(longlong **param_1,longlong param_2,longlong param_3)

{
    longlong *plVar1;
    undefined8 uVar2;

    if (*param_1 != (longlong *)0x0) {
        uVar2 = (**(code **)(**param_1 + 0xb0))();
        (**(code **)(**param_1 + 0x70))(uVar2,*(undefined4 *)(param_2 + 0xc));
    }
    plVar1 = param_1[1];
    if (plVar1 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_3);
        (**(code **)(*param_1[1] + 0x70))(uVar2,*(undefined4 *)(param_3 + 0xc));
    }
    plVar1 = param_1[2];
    if (plVar1 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_3);
        (**(code **)(*param_1[2] + 0x70))(uVar2,0x3f800000);
    }
    return;
}



void FUN_14060a770(longlong **param_1,int param_2,uint param_3)

{
    longlong *plVar1;
    int iVar2;
    uint uVar3;
    undefined *puVar4;
    float *pfVar5;
    longlong lVar6;
    int *piVar7;
    float fVar8;
    float in_XMM3_Da;
    float fVar9;
    float fVar10;
    float local_res18 [2];
    float local_res20 [2];
    float local_88 [2];
    undefined8 local_80;
    undefined4 local_78;
    undefined4 local_74;
    undefined4 local_70;
    undefined8 local_6c;
    undefined4 local_64;

    if ((((1 < param_3) && (plVar1 = param_1[6], plVar1 != (longlong *)0x0)) &&
         ((longlong *)plVar1[*(int *)(plVar1 + 0xd)] != (longlong *)0x0)) &&
        (local_res20[0] = in_XMM3_Da,
         iVar2 = (**(code **)(*(longlong *)plVar1[*(int *)(plVar1 + 0xd)] + 0x350))(),
         piVar7 = DAT_140c63750, iVar2 != 0)) {
        fVar9 = 0.0;
        if ((*(int *)((longlong)param_1 + 0x24) != param_2) &&
            (*(undefined4 *)(param_1 + 3) = 0, *(float *)((longlong)param_1 + 0x1c) == 0.0)) {
            iVar2 = DAT_140c45930;
            if (*piVar7 < DAT_140c45930) {
                iVar2 = *piVar7;
            }
            *(undefined4 *)((longlong)param_1 + 0x1c) =
                    *(undefined4 *)(&DAT_140c45940 + (longlong)iVar2 * 4);
        }
        *(int *)((longlong)param_1 + 0x24) = param_2;
        *(uint *)(param_1 + 5) = param_3;
        plVar1 = (longlong *)param_1[6][*(int *)(param_1[6] + 0xd)];
        if (plVar1 == (longlong *)0x0) {
            puVar4 = &DAT_140c78390;
        }
        else {
            puVar4 = (undefined *)
                    (**(code **)(*plVar1 + 0x370))(plVar1,*(undefined4 *)((longlong)param_1 + 0x2c),0);
            piVar7 = DAT_140c63750;
        }
        uVar3 = *(uint *)((longlong)param_1 + 0x24);
        fVar10 = 1.0;
        if (*(uint *)(param_1 + 4) < uVar3 || *(uint *)(param_1 + 4) == uVar3) {
            plVar1 = *param_1;
            *(uint *)(param_1 + 4) = uVar3;
            *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x140))(plVar1,0);
            }
            plVar1 = param_1[2];
        }
        else {
            pfVar5 = local_res20;
            if (*(float *)((longlong)param_1 + 0x1c) <= in_XMM3_Da) {
                pfVar5 = (float *)((longlong)param_1 + 0x1c);
            }
            fVar8 = *(float *)((longlong)param_1 + 0x1c) - *pfVar5;
            *(float *)((longlong)param_1 + 0x1c) = fVar8;
            if (fVar8 == fVar9) {
                iVar2 = DAT_140c458d0;
                if (*piVar7 < DAT_140c458d0) {
                    iVar2 = *piVar7;
                }
                fVar9 = 1.0 / (float)(ulonglong)*(uint *)(param_1 + 5);
                local_res18[0] = in_XMM3_Da * *(float *)(&DAT_140c458e0 + (longlong)iVar2 * 4);
                local_88[0] = (float)(ulonglong)*(uint *)(param_1 + 4) * fVar9 -
                              (float)(ulonglong)*(uint *)((longlong)param_1 + 0x24) * fVar9;
                pfVar5 = local_res18;
                if (local_88[0] <= local_res18[0]) {
                    pfVar5 = local_88;
                }
                fVar8 = (float)(ulonglong)*(uint *)(param_1 + 5) * *pfVar5 + *(float *)(param_1 + 3);
                iVar2 = (int)fVar8;
                fVar9 = fVar8;
                if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar8)) {
                    uVar3 = movmskps((int)pfVar5,ZEXT816(CONCAT44(fVar8,fVar8)));
                    fVar9 = (float)(iVar2 - (uVar3 & 1));
                }
                *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) - (int)(longlong)fVar9;
                *(float *)(param_1 + 3) = fVar8 - (float)((longlong)fVar9 & 0xffffffff);
            }
            plVar1 = *param_1;
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x128))(plVar1,1);
                (**(code **)(**param_1 + 0x140))(*param_1,1);
                (**(code **)(**param_1 + 0x70))();
                (**(code **)(**param_1 + 0x48))(*param_1,puVar4);
                lVar6 = (**(code **)(**param_1 + 0x1a8))(*param_1,0x96,0);
                local_80 = 0x96;
                local_78 = 0;
                local_70 = 0;
                local_6c = 3;
                local_64 = 0;
                local_74 = (undefined4)
                        (longlong)
                        ((fVar10 - (float)(ulonglong)*(uint *)(param_1 + 4) /
                                   (float)(ulonglong)*(uint *)(param_1 + 5)) *
                         (float)(ulonglong)*(uint *)(lVar6 + 0x14));
                (**(code **)(**param_1 + 0x248))(*param_1,0,&local_80);
            }
            plVar1 = param_1[2];
        }
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x70))();
        }
        plVar1 = param_1[1];
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x128))(plVar1,1);
            (**(code **)(*param_1[1] + 0x140))(param_1[1],1);
            (**(code **)(*param_1[1] + 0x70))();
            (**(code **)(*param_1[1] + 0x48))(param_1[1],puVar4);
            lVar6 = (**(code **)(*param_1[1] + 0x1a8))(param_1[1],0x96,0);
            local_80 = 0x96;
            local_78 = 0;
            local_70 = 0;
            local_6c = 3;
            local_64 = 0;
            local_74 = (undefined4)
                    (longlong)
                    ((fVar10 - (float)(ulonglong)*(uint *)((longlong)param_1 + 0x24) /
                               (float)(ulonglong)*(uint *)(param_1 + 5)) *
                     (float)(ulonglong)*(uint *)(lVar6 + 0x14));
            (**(code **)(*param_1[1] + 0x248))(param_1[1],0,&local_80);
        }
    }
    return;
}



longlong FUN_14060ab50(longlong param_1,uint *param_2)

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
    FUN_14060ac40(param_1,local_res18,&local_res8);
    return lVar4;
}



void FUN_14060ac40(longlong param_1,longlong *param_2,longlong *param_3)

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
            FUN_14060ae20(param_1,&local_res8);
        } while (*param_2 != *param_3);
    }
    return;
}



uint ** FUN_14060ad20(uint **param_1,uint *param_2,longlong param_3,uint *param_4)

{
    uint uVar1;
    longlong lVar2;
    uint *puVar3;
    longlong lVar4;
    longlong lVar5;
    uint *puVar6;

    lVar5 = param_3 - (longlong)param_2 >> 2;
    if (0 < lVar5) {
        uVar1 = *param_4;
        do {
            lVar4 = lVar5 >> 1;
            puVar6 = param_2 + lVar4;
            if (*puVar6 < uVar1) {
                param_2 = puVar6 + 1;
                lVar4 = lVar5 + (-1 - lVar4);
            }
            else if (*puVar6 <= uVar1) {
                lVar4 = (longlong)puVar6 - (longlong)param_2 >> 2;
                puVar3 = param_2;
                while (lVar2 = lVar4, 0 < lVar2) {
                    lVar4 = lVar2 >> 1;
                    if (puVar3[lVar4] < uVar1) {
                        puVar3 = puVar3 + lVar4 + 1;
                        lVar4 = lVar2 + (-1 - lVar4);
                    }
                }
                puVar6 = puVar6 + 1;
                lVar5 = (lVar5 * 4 - (longlong)puVar6) + (longlong)param_2 >> 2;
                while (lVar4 = lVar5, 0 < lVar4) {
                    lVar5 = lVar4 >> 1;
                    if (puVar6[lVar5] <= uVar1) {
                        puVar6 = puVar6 + lVar5 + 1;
                        lVar5 = lVar4 + (-1 - lVar5);
                    }
                }
                *param_1 = puVar3;
                param_1[1] = puVar6;
                return param_1;
            }
            lVar5 = lVar4;
        } while (0 < lVar4);
    }
    *param_1 = param_2;
    param_1[1] = param_2;
    return param_1;
}



void FUN_14060ae20(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8afdc,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x00014060aee6. Too many branches
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



undefined8 FUN_14060af20(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 8));
    if (lVar1 != 0) {
        if ((*(int *)(lVar1 + 0x80) != 0x14) && (*(int *)(lVar1 + 0x80) != 0x17)) {
            lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar1 + 0x2b0));
            if (lVar1 == 0) {
                return 0;
            }
            if ((*(int *)(lVar1 + 0x80) != 0x14) && (*(int *)(lVar1 + 0x80) != 0x17)) {
                return 0;
            }
        }
        if (lVar1 != 0) {
            return 1;
        }
    }
    return 0;
}



void FUN_14060af90(longlong *param_1)

{
    int iVar1;
    longlong lVar2;

    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 1));
        if (lVar2 != 0) {
            lVar2 = FUN_14047dca0(lVar2);
            if (lVar2 != 0) {
                FUN_14060afe0(param_1,*(undefined4 *)(param_1 + 1));
                return;
            }
        }
    }
    return;
}



void FUN_14060afe0(longlong *param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_1403d90d0(DAT_140c65898);
    if ((lVar3 == 0) ||
        (((*(int *)(lVar3 + 0x80) != 0x14 && (*(int *)(lVar3 + 0x80) != 0x17)) &&
          ((lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar3 + 0x2b0)), lVar3 == 0 ||
                                                                                 ((*(int *)(lVar3 + 0x80) != 0x14 && (*(int *)(lVar3 + 0x80) != 0x17)))))))) {
        lVar3 = 0;
    }
    if (((lVar3 != 0) && (lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 != 0)) &&
        (((lVar3 == lVar1 ||
           (((iVar2 = (**(code **)(*param_1 + 0x10))(param_1), iVar2 != 0 &&
                                                               (*(longlong *)(&DAT_000018a0 + lVar1) != 0)) &&
             (*(longlong *)(&DAT_000018a0 + lVar3) == *(longlong *)(&DAT_000018a0 + lVar1))))) &&
          (iVar2 = FUN_1403c2ee0(), iVar2 != 0)))) {
        (**(code **)(*param_1 + 0x18))(param_1);
    }
    return;
}



void FUN_14060b0c0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;

    if (param_2 != 0) {
        iVar2 = FUN_140649870(*(undefined8 *)(param_2 + 0x10));
        if (iVar2 != 0) {
            FUN_1400fb540(param_2);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        lVar3 = FUN_1403d90d0(DAT_140c65898);
        if ((((lVar3 != 0) && (lVar3 = FUN_14047dca0(lVar3), lVar3 != 0)) &&
             (*(int *)(lVar3 + 8) != *(int *)(param_1 + 8))) &&
            (iVar2 = FUN_140649870(*(undefined8 *)(param_2 + 0x10)), iVar2 != 0)) {
            FUN_1400fb540(param_2,L"unitCasterOwner");
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
    }
    return;
}



undefined8 FUN_14060b170(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 8));
    if (lVar1 == 0) {
        LAB_14060b1ce:
        lVar1 = 0;
    }
    else if ((*(int *)(lVar1 + 0x80) != 0x14) && (*(int *)(lVar1 + 0x80) != 0x17)) {
        lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar1 + 0x2b0));
        if ((lVar1 == 0) || ((*(int *)(lVar1 + 0x80) != 0x14 && (*(int *)(lVar1 + 0x80) != 0x17))))
            goto LAB_14060b1ce;
    }
    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x10));
    if (lVar2 != 0) {
        if ((*(int *)(lVar2 + 0x80) == 0x14) || (*(int *)(lVar2 + 0x80) == 0x17)) goto LAB_14060b21d;
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar2 + 0x2b0));
        if ((lVar2 != 0) && ((*(int *)(lVar2 + 0x80) == 0x14 || (*(int *)(lVar2 + 0x80) == 0x17))))
            goto LAB_14060b21d;
    }
    lVar2 = 0;
    LAB_14060b21d:
    if ((lVar1 == 0) && (lVar2 == 0)) {
        return 0;
    }
    return 1;
}



undefined8 FUN_14060b250(longlong param_1)

{
    int iVar1;
    longlong lVar2;

    iVar1 = FUN_1403c2ee0(param_1,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
    if (iVar1 == 0) {
        return 0;
    }
    if (((*(int *)(param_1 + 0x14) != 0) && (lVar2 = FUN_1407a0fd0(DAT_140c65b70), lVar2 != 0)) &&
        ((*(uint *)(*(longlong *)(lVar2 + 0x70) + 0x108) & 0x80000000) != 0)) {
        return 0;
    }
    return 1;
}



void FUN_14060b2b0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    iVar1 = FUN_14060b170();
    if ((iVar1 != 0) && (iVar1 = FUN_14060b250(param_1), iVar1 != 0)) {
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 8));
        lVar4 = 0;
        lVar3 = lVar4;
        if (lVar2 != 0) {
            lVar3 = FUN_14047dca0(lVar2);
        }
        lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x10));
        if (lVar2 != 0) {
            lVar4 = FUN_14047dca0(lVar2);
        }
        if (lVar3 != 0) {
            FUN_14060afe0(param_1,*(undefined4 *)(param_1 + 8));
        }
        if (((lVar4 != 0) && (lVar3 != lVar4)) &&
            ((*(longlong *)(&DAT_000018a0 + lVar4) == 0 ||
              ((lVar3 == 0 ||
                (*(longlong *)(&DAT_000018a0 + lVar3) != *(longlong *)(&DAT_000018a0 + lVar4))))))) {
            FUN_14060afe0(param_1,*(undefined4 *)(param_1 + 0x10));
        }
    }
    return;
}



void FUN_14060b380(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    undefined4 local_res10 [6];

    if (param_2 != 0) {
        iVar3 = FUN_140649870(*(undefined8 *)(param_2 + 0x10));
        if (iVar3 != 0) {
            FUN_1400fb540(param_2);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if ((((lVar4 != 0) && (lVar4 = FUN_14047dca0(lVar4), lVar4 != 0)) &&
             (*(int *)(lVar4 + 8) != *(int *)(param_1 + 8))) &&
            (iVar3 = FUN_140649870(*(undefined8 *)(param_2 + 0x10)), iVar3 != 0)) {
            FUN_1400fb540(param_2);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        iVar3 = FUN_140649870(*(undefined8 *)(param_2 + 0x10));
        if (iVar3 != 0) {
            FUN_1400fb540(param_2);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        lVar4 = FUN_1403d90d0(DAT_140c65898);
        if (((lVar4 != 0) && (lVar4 = FUN_14047dca0(lVar4), lVar4 != 0)) &&
            ((*(int *)(lVar4 + 8) != *(int *)(param_1 + 0x10) &&
              (iVar3 = FUN_140649870(*(undefined8 *)(param_2 + 0x10)), iVar3 != 0)))) {
            FUN_1400fb540(param_2,L"unitTargetOwner");
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        lVar4 = *(longlong *)(param_2 + 0x10);
        uVar6 = (ulonglong)*(uint *)(param_1 + 0x18);
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar4 + 0x10);
        *puVar2 = *puVar5;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar5 + 1);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"eCombatResult",uVar6 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        local_res10[0] = *(undefined4 *)(param_1 + 0x14);
        iVar3 = FUN_1403d3470(*(undefined8 *)(param_2 + 0x10),local_res10);
        if (iVar3 != 0) {
            FUN_1400fb540(param_2,L"splCallingSpell");
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
    }
    return;
}



void FUN_14060b510(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar1);
    local_20 = uVar4;
    FUN_14060b380(param_1,&local_28);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar2,L"nAmount",uVar7 & 0xffffffff);
    lVar3 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"CombatLogAbsorption",&DAT_1409eaf04,uVar4);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060b630(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar1);
    local_20 = uVar4;
    FUN_14060b380(param_1,&local_28);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar2,L"nAmount",uVar7 & 0xffffffff);
    lVar3 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"CombatLogHealingAbsorption",&DAT_1409eaebc,uVar4);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060b750(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    undefined4 *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    int iVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined8 *puVar12;
    undefined **local_38;
    undefined4 local_30;
    undefined4 uStack44;
    longlong local_28;
    undefined4 local_20;

    if (0x1b < *(int *)(param_1 + 0x20)) {
        return;
    }
    if (*(longlong *)(DAT_140c65a08 + 0x28 + (longlong)*(int *)(param_1 + 0x20) * 8) == 0) {
        return;
    }
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_28 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar12 + 1) = 5;
    *puVar12 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar1);
    local_30 = uVar4;
    FUN_14060b380(param_1,&local_38);
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    *puVar12 = *puVar6;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar12,L"eState",uVar11 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    *puVar12 = *puVar6;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    *puVar12 = *puVar6;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    iVar8 = *(int *)(param_1 + 0x24);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    *puVar12 = *puVar6;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(&local_38,L"bRemoved");
    lVar9 = -1;
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar10) != '\0');
        FUN_140058710(lVar1);
    }
    if (CONCAT44(uStack44,local_30) != 0) {
        FUN_14018b900(CONCAT44(uStack44,local_30),0);
    }
    puVar2 = *(uint **)(lVar1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar8 != 0);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar5,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    uVar5 = FUN_14034bdd0();
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar12 = *(undefined8 **)(lVar1 + 0x10);
    *puVar12 = *puVar6;
    *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f0870(lVar1,puVar12,L"strState",uVar5);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    if ((0 < *(int *)(param_1 + 0x30)) && (lVar7 = FUN_1401eede0(), lVar7 != 0)) {
        uVar5 = FUN_14034bdd0();
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
        puVar12 = *(undefined8 **)(lVar1 + 0x10);
        *puVar12 = *puVar6;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f0870(lVar1,puVar12,L"strTriggerCapCategory",uVar5);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar7 = FUN_1403d90d0(DAT_140c65898);
    if (lVar7 != 0) {
        lVar7 = FUN_14047dca0(lVar7);
    }
    if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) {
        iVar8 = 0;
    }
    else {
        iVar8 = *(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8);
    }
    if ((lVar7 == 0) || (*(int *)(lVar7 + 8) != iVar8)) {
        if (1 < *(int *)(param_1 + 0x2c) - 3U) {
            iVar8 = DAT_140c4e000;
            if (*DAT_140c63750 < DAT_140c4e000) {
                iVar8 = *DAT_140c63750;
            }
            if ((&DAT_140c4e010)[iVar8] == '\0') goto LAB_14060bb7b;
        }
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
        puVar12 = *(undefined8 **)(lVar1 + 0x10);
        *puVar12 = *puVar6;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bHideFloater");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        }
        else {
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(lVar7 + lVar9) != '\0');
            FUN_140058710(lVar1,lVar7,lVar9);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(undefined4 **)(lVar1 + 0x10);
        *puVar3 = 1;
        puVar3[2] = 1;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar1,0xfffffffd);
        FUN_14005ea50(lVar1,uVar5,*(longlong *)(lVar1 + 0x10) + -0x20,
                      *(longlong *)(lVar1 + 0x10) + -0x10);
        *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    }
    LAB_14060bb7b:
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogCCState",&DAT_1409eb25c,uVar4);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060bbc0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if ((*(int *)(param_1 + 0x10) < 0x1c) &&
        (*(longlong *)(DAT_140c65a08 + 0x28 + (longlong)*(int *)(param_1 + 0x10) * 8) != 0)) {
        local_10 = 1;
        lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
        local_28 = &PTR_FUN_140b569f0;
        local_18 = lVar2;
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar2);
        }
        puVar3 = *(undefined8 **)(lVar2 + 0x10);
        uVar6 = FUN_14005c1b0(lVar2,0,0);
        *(undefined4 *)(puVar3 + 1) = 5;
        *puVar3 = uVar6;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400578c0(lVar2);
        local_20 = uVar5;
        FUN_14060b0c0(param_1,&local_28);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x10);
        puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar5);
        puVar3 = *(undefined8 **)(lVar2 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2,puVar3,L"eState",uVar8 & 0xffffffff);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        uVar6 = FUN_14034bdd0();
        puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
        puVar3 = *(undefined8 **)(lVar2 + 0x10);
        *puVar3 = *puVar7;
        uVar1 = *(undefined4 *)(puVar7 + 1);
        *(undefined4 *)(puVar3 + 1) = uVar1;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f0870(lVar2,uVar1,L"strState",uVar6);
        lVar4 = DAT_140c65898;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        FUN_1400ea3e0(*(undefined8 *)(lVar4 + 0x7340),"CombatLogCCStateBreak",&DAT_1409eb20c,uVar5);
        FUN_1400579e0(lVar2);
    }
    return;
}



void FUN_14060bd50(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined8 *puVar11;
    undefined **local_38;
    undefined4 local_30;
    undefined4 uStack44;
    longlong local_28;
    undefined4 local_20;

    if (*(int *)(param_1 + 0x18) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
        local_38 = &PTR_FUN_140b569f0;
        local_20 = 1;
        local_28 = lVar2;
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar2);
        }
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        uVar5 = FUN_14005c1b0(lVar2,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar5;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar2);
        local_30 = uVar4;
        FUN_14060b380(param_1,&local_38);
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x20);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2,puVar11,L"nDamageAmount",uVar10 & 0xffffffff);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x38);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bTargetVulnerable");
        lVar8 = -1;
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(lVar2);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x3c);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bTargetKilled");
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(lVar2);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x40);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bPeriodic");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(lVar7 + lVar8) != '\0');
            FUN_140058710(lVar2,lVar7,lVar8);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        lVar7 = DAT_140c65898;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogDamage",&DAT_1409eb1ec,uVar4);
        FUN_1400579e0(lVar2);
    }
    return;
}



void FUN_14060c2b0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined8 *puVar11;
    undefined **local_38;
    undefined4 local_30;
    undefined4 uStack44;
    longlong local_28;
    undefined4 local_20;

    if (*(int *)(param_1 + 0x18) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
        local_38 = &PTR_FUN_140b569f0;
        local_20 = 1;
        local_28 = lVar2;
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar2);
        }
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        uVar5 = FUN_14005c1b0(lVar2,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar5;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar2);
        local_30 = uVar4;
        FUN_14060b380(param_1,&local_38);
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x20);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2,puVar11,L"nDamageAmount",uVar10 & 0xffffffff);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x38);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bTargetVulnerable");
        lVar8 = -1;
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(lVar2);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x3c);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bTargetKilled");
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(lVar2);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x40);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bPeriodic");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(lVar7 + lVar8) != '\0');
            FUN_140058710(lVar2,lVar7,lVar8);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        lVar7 = DAT_140c65898;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogDamageShields",&DAT_1409eb1d4,uVar4);
        FUN_1400579e0(lVar2);
    }
    return;
}



void FUN_14060c810(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    uVar5 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar2);
    local_20 = uVar4;
    FUN_14060b380(param_1,&local_28);
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2,puVar10,L"nDamageAmount",uVar9 & 0xffffffff);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(param_1 + 0x38);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(&local_28,L"bTargetKilled");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(lVar2);
    }
    if (CONCAT44(uStack28,local_20) != 0) {
        FUN_14018b900(CONCAT44(uStack28,local_20),0);
    }
    puVar3 = *(uint **)(lVar2 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,*(longlong *)(lVar2 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2);
    lVar7 = DAT_140c65898;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogReflect",&DAT_1409eb3d4,uVar4);
    FUN_1400579e0(lVar2);
    return;
}



void FUN_14060cbd0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined8 *puVar11;
    undefined **local_38;
    undefined4 local_30;
    undefined4 uStack44;
    longlong local_28;
    undefined4 local_20;

    if (*(int *)(param_1 + 0x18) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
        local_38 = &PTR_FUN_140b569f0;
        local_20 = 1;
        local_28 = lVar2;
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar2);
        }
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        uVar5 = FUN_14005c1b0(lVar2,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar5;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar2);
        local_30 = uVar4;
        FUN_14060b380(param_1,&local_38);
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x20);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2,puVar11,L"nDamageAmount",uVar10 & 0xffffffff);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x3c);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bTargetKilled");
        lVar8 = -1;
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(lVar2);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x40);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bPeriodic");
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(lVar2);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x38);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"btargetVulnerable");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(lVar7 + lVar8) != '\0');
            FUN_140058710(lVar2,lVar7,lVar8);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        lVar7 = DAT_140c65898;
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogMultiHit",&DAT_1409eb394,uVar4);
        iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8);
        if ((iVar1 == *(int *)(param_1 + 8)) || (iVar1 == *(int *)(param_1 + 0x10))) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FloaterMultiHit",&DAT_1409eb35c,uVar4);
        }
        FUN_1400579e0(lVar2);
    }
    return;
}



void FUN_14060d120(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined8 *puVar11;
    undefined **local_38;
    undefined4 local_30;
    undefined4 uStack44;
    longlong local_28;
    undefined4 local_20;

    if (*(int *)(param_1 + 0x18) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
        local_38 = &PTR_FUN_140b569f0;
        local_20 = 1;
        local_28 = lVar2;
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar2);
        }
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        uVar5 = FUN_14005c1b0(lVar2,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar5;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar2);
        local_30 = uVar4;
        FUN_14060b380(param_1,&local_38);
        uVar10 = (ulonglong)*(uint *)(param_1 + 0x20);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2,puVar11,L"nDamageAmount",uVar10 & 0xffffffff);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x3c);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bTargetKilled");
        lVar8 = -1;
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(lVar2);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x40);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"bPeriodic");
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
            FUN_140058710(lVar2);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar11 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x38);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar11 = *puVar6;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_38,L"btargetVulnerable");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(lVar7 + lVar8) != '\0');
            FUN_140058710(lVar2,lVar7,lVar8);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        lVar7 = DAT_140c65898;
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogMultiHitShields",&DAT_1409eb0c4,uVar4);
        FUN_1400579e0(lVar2);
    }
    return;
}



void FUN_14060d630(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    uint *puVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar6 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar1);
    local_20 = uVar4;
    iVar5 = FUN_140649870(lVar1);
    if (iVar5 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar7 = FUN_1403d90d0(DAT_140c65898);
    if (lVar7 != 0) {
        lVar7 = FUN_14047dca0(lVar7);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 8) != *(int *)(param_1 + 8))) {
            iVar5 = FUN_140649870(lVar1);
            if (iVar5 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    uVar10 = (ulonglong)*(uint *)(param_1 + 0x10);
    puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar2,L"nDamageAmount",uVar10 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    lVar7 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 8));
    iVar5 = *(int *)(lVar7 + 0x250);
    puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(&local_28,L"bTargetKilled");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
        FUN_140058710(lVar1);
    }
    if (CONCAT44(uStack28,local_20) != 0) {
        FUN_14018b900(CONCAT44(uStack28,local_20),0);
    }
    puVar3 = *(uint **)(lVar1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar5 != 0);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar6,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    lVar7 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogFallingDamage",&DAT_1409eb0ac,uVar4);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060d880(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(lVar1);
    local_20 = uVar2;
    iVar3 = FUN_140649870(lVar1);
    if (iVar3 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar5 = FUN_1403d90d0(DAT_140c65898);
    if (lVar5 != 0) {
        lVar5 = FUN_14047dca0(lVar5);
        if ((lVar5 != 0) && (*(int *)(lVar5 + 8) != *(int *)(param_1 + 8))) {
            iVar3 = FUN_140649870(lVar1);
            if (iVar3 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    *puVar8 = *puVar6;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar8,L"nHealthStolen",uVar7 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    *puVar8 = *puVar6;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    lVar5 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400ea3e0(*(undefined8 *)(lVar5 + 0x7340),"CombatLogLifeSteal",&DAT_1409eb094,uVar2);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060da40(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    FUN_14060b380(param_1,&local_28);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogDelayDeath",&DAT_1409eb06c,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060db10(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined4 local_res8 [2];
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined local_38 [8];
    longlong local_30;

    local_40 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_58 = &PTR_FUN_140b569f0;
    local_48 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_50 = uVar3;
    FUN_14060b380(param_1,&local_58);
    iVar4 = *(int *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(local_38,L"bRemovesSingleInstance");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(lVar1);
    }
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar2 = *(uint **)(lVar1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar4 != 0);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar5,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar6;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    local_res8[0] = *(undefined4 *)(param_1 + 0x28);
    iVar4 = FUN_1403d3470(lVar1,local_res8);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_58,L"splRemovedSpell");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogDispel",&DAT_1409eb1bc,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060dd20(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(int *)(param_1 + 0x18) != 0) {
        local_10 = 1;
        lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
        local_28 = &PTR_FUN_140b569f0;
        local_18 = lVar1;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar1);
        }
        puVar6 = *(undefined8 **)(lVar1 + 0x10);
        uVar3 = FUN_14005c1b0(lVar1,0,0);
        *(undefined4 *)(puVar6 + 1) = 5;
        *puVar6 = uVar3;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        uVar2 = FUN_1400578c0(lVar1);
        local_20 = uVar2;
        FUN_14060b380(param_1,&local_28);
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x20);
        puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
        puVar6 = *(undefined8 **)(lVar1 + 0x10);
        *puVar6 = *puVar4;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1,puVar6,L"nHealAmount",uVar5 & 0xffffffff);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        puVar6 = *(undefined8 **)(lVar1 + 0x10);
        puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
        *puVar6 = *puVar4;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        puVar6 = *(undefined8 **)(lVar1 + 0x10);
        puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
        *puVar6 = *puVar4;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        puVar6 = *(undefined8 **)(lVar1 + 0x10);
        puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
        *puVar6 = *puVar4;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogHeal",&DAT_1409eb144,uVar2);
        FUN_1400579e0(lVar1);
    }
    return;
}



void FUN_14060df10(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    if (*(int *)(param_1 + 0x18) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
        local_18 = lVar2;
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar2);
        }
        puVar10 = *(undefined8 **)(lVar2 + 0x10);
        uVar5 = FUN_14005c1b0(lVar2,0,0);
        *(undefined4 *)(puVar10 + 1) = 5;
        *puVar10 = uVar5;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar2);
        local_20 = uVar4;
        FUN_14060b380(param_1,&local_28);
        uVar9 = (ulonglong)*(uint *)(param_1 + 0x20);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        puVar10 = *(undefined8 **)(lVar2 + 0x10);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2,puVar10,L"nHealAmount",uVar9 & 0xffffffff);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar10 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar10 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        puVar10 = *(undefined8 **)(lVar2 + 0x10);
        iVar1 = *(int *)(param_1 + 0x2c);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(&local_28,L"bPeriodic");
        if (*(longlong *)(lVar7 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        }
        else {
            lVar8 = -1;
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
            FUN_140058710(lVar2);
        }
        if (CONCAT44(uStack28,local_20) != 0) {
            FUN_14018b900(CONCAT44(uStack28,local_20),0);
        }
        puVar3 = *(uint **)(lVar2 + 0x10);
        puVar3[2] = 1;
        *puVar3 = (uint)(iVar1 != 0);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        puVar10 = *(undefined8 **)(lVar2 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
        *puVar10 = *puVar6;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        FUN_1400f06f0(lVar2);
        lVar7 = DAT_140c65898;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogMultiHeal",&DAT_1409eb11c,uVar4);
        iVar1 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8);
        if ((iVar1 == *(int *)(param_1 + 8)) || (iVar1 == *(int *)(param_1 + 0x10))) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FloaterMultiHeal",&DAT_1409eb2fc,uVar4)
                    ;
        }
        FUN_1400579e0(lVar2);
    }
    return;
}



void FUN_14060e210(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar1);
    local_20 = uVar4;
    FUN_14060b380(param_1,&local_28);
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar2,L"nAmount",uVar7 & 0xffffffff);
    lVar3 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"CombatLogModifyInterruptArmor",&DAT_1409eb0f4,uVar4
    );
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060e330(longlong param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;
    longlong lVar9;
    ulonglong local_res18;
    longlong local_res20;

    iVar8 = FUN_14060b170();
    if (iVar8 != 0) {
        if (param_2 != (undefined4 *)0xffffffffffffffd8) {
            *(undefined4 *)(param_1 + 0x10) = param_2[0xb];
            *(undefined4 *)(param_1 + 0x14) = param_2[0xc];
            *(undefined4 *)(param_1 + 0x18) = param_2[0xd];
        }
        *(undefined4 *)(param_1 + 0x20) = *param_2;
        *(undefined4 *)(param_1 + 0x24) = param_2[1];
        *(undefined4 *)(param_1 + 0x28) = param_2[2];
        *(undefined4 *)(param_1 + 0x34) = param_2[5];
        *(undefined4 *)(param_1 + 0x2c) = param_2[3];
        *(undefined4 *)(param_1 + 0x30) = param_2[4];
        *(undefined4 *)(param_1 + 0x38) = param_2[6];
        local_res18 = 0;
        if (param_2[7] != 0) {
            local_res20 = 0;
            do {
                lVar9 = *(longlong *)(param_2 + 8);
                lVar6 = *(longlong *)(param_1 + 0x48);
                uVar1 = *(undefined4 *)(lVar9 + local_res20);
                uVar2 = *(undefined4 *)(lVar9 + 4 + local_res20);
                uVar3 = *(undefined4 *)(lVar9 + 8 + local_res20);
                uVar4 = *(undefined4 *)(lVar9 + 0xc + local_res20);
                uVar5 = *(undefined4 *)(lVar9 + 0x10 + local_res20);
                lVar9 = FUN_14018db00(*(undefined8 *)(param_1 + 0x40),lVar6 + 1,0x14);
                *(undefined4 *)(lVar9 + lVar6 * 0x14) = uVar1;
                *(undefined4 *)(lVar9 + 4 + lVar6 * 0x14) = uVar2;
                *(undefined4 *)(lVar9 + 8 + lVar6 * 0x14) = uVar3;
                *(undefined4 *)(lVar9 + 0xc + lVar6 * 0x14) = uVar4;
                *(undefined4 *)(lVar9 + 0x10 + lVar6 * 0x14) = uVar5;
                if (*(longlong *)(param_1 + 0x40) != lVar9) {
                    FUN_1407db590(lVar9,*(longlong *)(param_1 + 0x40),*(longlong *)(param_1 + 0x48) * 0x14);
                    lVar7 = *(longlong *)(param_1 + 0x40);
                    if (lVar7 != 0) {
                        (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
                    }
                    *(longlong *)(param_1 + 0x40) = lVar9;
                }
                local_res18 = local_res18 + 1;
                local_res20 = local_res20 + 0x14;
                *(longlong *)(param_1 + 0x48) = lVar6 + 1;
            } while (local_res18 < (uint)param_2[7]);
        }
        FUN_14060e4e0(param_1);
    }
    return;
}



void FUN_14060e4e0(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    double *pdVar3;
    int iVar4;
    int iVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    undefined8 *puVar11;
    longlong lVar12;
    ulonglong uVar13;
    longlong lVar14;
    double dVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    int local_res10;
    int iStackX20;
    int local_res18;
    int iStackX28;
    ulonglong local_res20;
    int local_c8;
    int iStack196;
    undefined **local_b8;
    int local_b0;
    longlong local_a8;
    undefined4 local_a0;
    undefined **local_98;
    int local_90;
    longlong local_88;
    undefined4 local_80;
    undefined **local_78;
    int local_70;
    undefined4 uStack108;
    longlong local_68;
    undefined4 local_60;

    local_80 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_98 = &PTR_FUN_140b569f0;
    local_88 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar11 = *(undefined8 **)(lVar1 + 0x10);
    uVar6 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar6;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    iVar4 = FUN_1400578c0(lVar1);
    local_90 = iVar4;
    FUN_14060b380(param_1,&local_98);
    uVar10 = (int)*(uint *)(param_1 + 0x20) >> 0x1f;
    uVar13 = (ulonglong)((*(uint *)(param_1 + 0x20) ^ uVar10) - uVar10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),iVar4);
    puVar11 = *(undefined8 **)(lVar1 + 0x10);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar11,L"nDamageAmount",uVar13 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar1 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),iVar4);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar1 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),iVar4);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar1 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),iVar4);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar1 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),iVar4);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar1 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),iVar4);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar11 = *(undefined8 **)(lVar1 + 0x10);
    iVar5 = *(int *)(param_1 + 0x38);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),iVar4);
    *puVar11 = *puVar7;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(&local_78,L"bTargetVulnerable");
    lVar14 = -1;
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar9) != '\0');
        FUN_140058710(lVar1);
    }
    if (CONCAT44(uStack108,local_70) != 0) {
        FUN_14018b900(CONCAT44(uStack108,local_70),0);
    }
    puVar2 = *(uint **)(lVar1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar5 != 0);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar6,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    local_b8 = &PTR_FUN_140b569f0;
    local_a0 = 1;
    lVar8 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_a8 = lVar8;
    if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar8);
    }
    puVar11 = *(undefined8 **)(lVar8 + 0x10);
    uVar6 = FUN_14005c1b0(lVar8,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar6;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    local_b0 = FUN_1400578c0();
    uVar16 = 0;
    uVar17 = 0;
    local_res20 = 0;
    if (*(longlong *)(param_1 + 0x48) != 0) {
        do {
            local_60 = 1;
            lVar8 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
            local_78 = &PTR_FUN_140b569f0;
            local_68 = lVar8;
            if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar8);
            }
            puVar11 = *(undefined8 **)(lVar8 + 0x10);
            uVar6 = FUN_14005c1b0(lVar8,0,0);
            *(undefined4 *)(puVar11 + 1) = 5;
            *puVar11 = uVar6;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            iVar5 = FUN_1400578c0(lVar8);
            local_70 = iVar5;
            iVar4 = FUN_140649870(lVar8,*(undefined4 *)
                    (*(longlong *)(param_1 + 0x40) + local_res20 * 0x14));
            if (iVar4 != 0) {
                FUN_1400fb540(&local_78,L"unitHealed");
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x10;
            }
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + 4 + local_res20 * 0x14);
            lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar9 + 0x38)) {
                puVar11 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
            }
            else {
                dVar15 = (double)iVar5;
                if (dVar15 == (double)CONCAT44(uVar17,uVar16)) {
                    puVar11 = *(undefined8 **)(lVar9 + 0x20);
                }
                else {
                    iStack196 = (int)((ulonglong)dVar15 >> 0x20);
                    local_c8 = SUB84(dVar15,0);
                    puVar11 = (undefined8 *)
                            (*(longlong *)(lVar9 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack196 + local_c8) %
                              (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar11 + 3) == 3) && (dVar15 == (double)puVar11[2])) goto LAB_14060e993;
                    puVar11 = (undefined8 *)puVar11[4];
                } while (puVar11 != (undefined8 *)0x0);
                puVar11 = &DAT_140a12138;
            }
            LAB_14060e993:
            puVar7 = *(undefined8 **)(lVar8 + 0x10);
            *puVar7 = *puVar11;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar11 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            lVar9 = FUN_14018f0e0(&local_78,L"nHealAmount");
            lVar9 = *(longlong *)(lVar9 + 8);
            if (lVar9 == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar9 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar8);
                }
                puVar11 = *(undefined8 **)(lVar8 + 0x10);
                uVar6 = FUN_140062650(lVar8,lVar9,lVar12);
                *(undefined4 *)(puVar11 + 1) = 4;
                *puVar11 = uVar6;
            }
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            if (CONCAT44(uStack108,local_70) != 0) {
                FUN_14018b900(CONCAT44(uStack108,local_70),0);
            }
            pdVar3 = *(double **)(lVar8 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar4;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(lVar8,0xfffffffd);
            FUN_14005ea50(lVar8,uVar6,*(longlong *)(lVar8 + 0x10) + -0x20,
                          *(longlong *)(lVar8 + 0x10) + -0x10);
            *(longlong *)(lVar8 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar8 + 0x10));
            puVar11 = *(undefined8 **)(lVar8 + 0x10);
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + 8 + local_res20 * 0x14);
            lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar9 + 0x38)) {
                puVar7 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
            }
            else {
                dVar15 = (double)iVar5;
                if (dVar15 == (double)CONCAT44(uVar17,uVar16)) {
                    puVar7 = *(undefined8 **)(lVar9 + 0x20);
                }
                else {
                    iStack196 = (int)((ulonglong)dVar15 >> 0x20);
                    local_c8 = SUB84(dVar15,0);
                    puVar7 = (undefined8 *)
                            (*(longlong *)(lVar9 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack196 + local_c8) %
                              (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar7 + 3) == 3) && (dVar15 == (double)puVar7[2])) goto LAB_14060eb05;
                    puVar7 = (undefined8 *)puVar7[4];
                } while (puVar7 != (undefined8 *)0x0);
                puVar7 = &DAT_140a12138;
            }
            LAB_14060eb05:
            *puVar11 = *puVar7;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            lVar9 = FUN_14018f0e0(&local_78,L"eVitalType");
            lVar9 = *(longlong *)(lVar9 + 8);
            if (lVar9 == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar9 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar8);
                }
                puVar11 = *(undefined8 **)(lVar8 + 0x10);
                uVar6 = FUN_140062650(lVar8,lVar9,lVar12);
                *(undefined4 *)(puVar11 + 1) = 4;
                *puVar11 = uVar6;
            }
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            if (CONCAT44(uStack108,local_70) != 0) {
                FUN_14018b900(CONCAT44(uStack108,local_70),0);
            }
            pdVar3 = *(double **)(lVar8 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar4;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(lVar8,0xfffffffd);
            FUN_14005ea50(lVar8,uVar6,*(longlong *)(lVar8 + 0x10) + -0x20,
                          *(longlong *)(lVar8 + 0x10) + -0x10);
            *(longlong *)(lVar8 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar8 + 0x10));
            puVar11 = *(undefined8 **)(lVar8 + 0x10);
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + 0xc + local_res20 * 0x14);
            lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar9 + 0x38)) {
                puVar7 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
            }
            else {
                dVar15 = (double)iVar5;
                if (dVar15 == (double)CONCAT44(uVar17,uVar16)) {
                    puVar7 = *(undefined8 **)(lVar9 + 0x20);
                }
                else {
                    iStack196 = (int)((ulonglong)dVar15 >> 0x20);
                    local_c8 = SUB84(dVar15,0);
                    puVar7 = (undefined8 *)
                            (*(longlong *)(lVar9 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack196 + local_c8) %
                              (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar7 + 3) == 3) && (dVar15 == (double)puVar7[2])) goto LAB_14060ec75;
                    puVar7 = (undefined8 *)puVar7[4];
                } while (puVar7 != (undefined8 *)0x0);
                puVar7 = &DAT_140a12138;
            }
            LAB_14060ec75:
            *puVar11 = *puVar7;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            lVar9 = FUN_14018f0e0(&local_78,L"nOverheal");
            lVar9 = *(longlong *)(lVar9 + 8);
            if (lVar9 == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar9 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar8);
                }
                puVar11 = *(undefined8 **)(lVar8 + 0x10);
                uVar6 = FUN_140062650(lVar8,lVar9,lVar12);
                *(undefined4 *)(puVar11 + 1) = 4;
                *puVar11 = uVar6;
            }
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            if (CONCAT44(uStack108,local_70) != 0) {
                FUN_14018b900(CONCAT44(uStack108,local_70),0);
            }
            pdVar3 = *(double **)(lVar8 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar4;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(lVar8,0xfffffffd);
            FUN_14005ea50(lVar8,uVar6,*(longlong *)(lVar8 + 0x10) + -0x20,
                          *(longlong *)(lVar8 + 0x10) + -0x10);
            *(longlong *)(lVar8 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar8 + 0x10));
            puVar11 = *(undefined8 **)(lVar8 + 0x10);
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x10 + local_res20 * 0x14);
            lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x20) + 0xa0);
            if (iVar5 - 1U < *(uint *)(lVar9 + 0x38)) {
                puVar7 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
            }
            else {
                dVar15 = (double)iVar5;
                if (dVar15 == (double)CONCAT44(uVar17,uVar16)) {
                    puVar7 = *(undefined8 **)(lVar9 + 0x20);
                }
                else {
                    iStackX28 = (int)((ulonglong)dVar15 >> 0x20);
                    local_res18 = SUB84(dVar15,0);
                    puVar7 = (undefined8 *)
                            (*(longlong *)(lVar9 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                              (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar7 + 3) == 3) && (dVar15 == (double)puVar7[2])) goto LAB_14060ede5;
                    puVar7 = (undefined8 *)puVar7[4];
                } while (puVar7 != (undefined8 *)0x0);
                puVar7 = &DAT_140a12138;
            }
            LAB_14060ede5:
            *puVar11 = *puVar7;
            *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            lVar9 = FUN_14018f0e0(&local_78,L"nAbsorption");
            lVar9 = *(longlong *)(lVar9 + 8);
            if (lVar9 == 0) {
                *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(lVar9 + lVar12) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar8);
                }
                puVar11 = *(undefined8 **)(lVar8 + 0x10);
                uVar6 = FUN_140062650(lVar8,lVar9,lVar12);
                *(undefined4 *)(puVar11 + 1) = 4;
                *puVar11 = uVar6;
            }
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            if (CONCAT44(uStack108,local_70) != 0) {
                FUN_14018b900(CONCAT44(uStack108,local_70),0);
            }
            pdVar3 = *(double **)(lVar8 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar4;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(lVar8,0xfffffffd);
            FUN_14005ea50(lVar8,uVar6,*(longlong *)(lVar8 + 0x10) + -0x20,
                          *(longlong *)(lVar8 + 0x10) + -0x10);
            *(longlong *)(lVar8 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar8 + 0x10));
            FUN_1400fb1d0(&local_b8);
            FUN_1400579e0();
            local_res20 = local_res20 + 1;
            lVar8 = local_a8;
        } while (local_res20 < *(ulonglong *)(param_1 + 0x48));
    }
    iVar4 = local_90;
    iVar5 = local_b0;
    lVar9 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xa0);
    if (local_90 - 1U < *(uint *)(lVar9 + 0x38)) {
        puVar11 = (undefined8 *)((longlong)(local_90 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
    }
    else {
        dVar15 = (double)local_90;
        if (dVar15 == (double)CONCAT44(uVar17,uVar16)) {
            puVar11 = *(undefined8 **)(lVar9 + 0x20);
        }
        else {
            iStackX20 = (int)((ulonglong)dVar15 >> 0x20);
            local_res10 = SUB84(dVar15,0);
            puVar11 = (undefined8 *)
                    (*(longlong *)(lVar9 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                      (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar11 + 3) == 3) && (dVar15 == (double)puVar11[2])) goto LAB_14060ef81;
            puVar11 = (undefined8 *)puVar11[4];
        } while (puVar11 != (undefined8 *)0x0);
        puVar11 = &DAT_140a12138;
    }
    LAB_14060ef81:
    puVar7 = *(undefined8 **)(lVar1 + 0x10);
    *puVar7 = *puVar11;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar9 = FUN_14018f0e0(&local_78,L"tHealData");
    lVar9 = *(longlong *)(lVar9 + 8);
    if (lVar9 == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
    }
    else {
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(lVar9 + lVar14) != '\0');
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar1);
        }
        puVar11 = *(undefined8 **)(lVar1 + 0x10);
        uVar6 = FUN_140062650(lVar1,lVar9,lVar14);
        *(undefined4 *)(puVar11 + 1) = 4;
        *puVar11 = uVar6;
        iVar4 = local_90;
    }
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    if (CONCAT44(uStack108,local_70) != 0) {
        FUN_14018b900(CONCAT44(uStack108,local_70),0);
    }
    lVar14 = *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0xa0);
    if (iVar5 - 1U < *(uint *)(lVar14 + 0x38)) {
        puVar11 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
    }
    else {
        dVar15 = (double)iVar5;
        if (dVar15 == (double)CONCAT44(uVar17,uVar16)) {
            puVar11 = *(undefined8 **)(lVar14 + 0x20);
        }
        else {
            iStackX20 = (int)((ulonglong)dVar15 >> 0x20);
            local_res10 = SUB84(dVar15,0);
            puVar11 = (undefined8 *)
                    (*(longlong *)(lVar14 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                      (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar11 + 3) == 3) && (dVar15 == (double)puVar11[2])) goto LAB_14060f09d;
            puVar11 = (undefined8 *)puVar11[4];
        } while (puVar11 != (undefined8 *)0x0);
        puVar11 = &DAT_140a12138;
    }
    LAB_14060f09d:
    puVar7 = *(undefined8 **)(lVar1 + 0x10);
    *puVar7 = *puVar11;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar1 + 0x10);
    FUN_14005ea50(lVar1,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
    lVar14 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(lVar14 + 0x7340),"CombatLogTransference",&DAT_1409eb614,iVar4);
    iVar5 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8);
    if ((iVar5 == *(int *)(param_1 + 8)) || (iVar5 == *(int *)(param_1 + 0x10))) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FloaterTransference",&DAT_1409eb5bc,iVar4
        );
    }
    if (lVar8 != 0) {
        FUN_1400579e0(lVar8);
    }
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060f170(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    uVar5 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar2);
    local_20 = uVar4;
    FUN_14060b380(param_1,&local_28);
    uVar9 = (ulonglong)(uint)(int)*(float *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2,puVar10,L"nAmount",uVar9 & 0xffffffff);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    FUN_1400f06f0(lVar2);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(param_1 + 0x28);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(&local_28,L"bShowCombatLog");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar8) != '\0');
        FUN_140058710(lVar2);
    }
    if (CONCAT44(uStack28,local_20) != 0) {
        FUN_14018b900(CONCAT44(uStack28,local_20),0);
    }
    puVar3 = *(uint **)(lVar2 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,*(longlong *)(lVar2 + 0x10) + -0x10)
            ;
    lVar7 = DAT_140c65898;
    *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogVitalModifier",&DAT_1409eb594,uVar4);
    FUN_1400579e0(lVar2);
    return;
}



void FUN_14060f390(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    uint *puVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    uVar6 = FUN_14005c1b0(lVar2,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    *puVar3 = uVar6;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(lVar2);
    local_20 = uVar5;
    FUN_14060b380(param_1,&local_28);
    iVar1 = *(int *)(param_1 + 0x20);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar5);
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(&local_28,L"bMultiHit");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar9) != '\0');
        FUN_140058710(lVar2);
    }
    if (CONCAT44(uStack28,local_20) != 0) {
        FUN_14018b900(CONCAT44(uStack28,local_20),0);
    }
    puVar4 = *(uint **)(lVar2 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar1 != 0);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar2,0xfffffffd);
    FUN_14005ea50(lVar2,uVar6,*(longlong *)(lVar2 + 0x10) + -0x20,*(longlong *)(lVar2 + 0x10) + -0x10)
            ;
    lVar8 = DAT_140c65898;
    *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(lVar8 + 0x7340),"CombatLogDeflect",&DAT_1409eb55c,uVar5);
    FUN_1400579e0(lVar2);
    return;
}



void FUN_14060f530(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    FUN_14060b380(param_1,&local_28);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogImmunity",&DAT_1409eb6bc,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060f600(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    ulonglong uVar8;
    undefined4 local_res8 [2];
    undefined4 uVar9;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    FUN_14060b380(param_1,&local_28);
    local_res8[0] = *(undefined4 *)(param_1 + 0x20);
    iVar4 = FUN_1403d3470(lVar1,local_res8);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28,L"splInterruptingSpell");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x24);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar2,L"eCastResult",uVar8 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    uVar9 = *(undefined4 *)(param_1 + 0x14);
    lVar7 = FUN_1405648a0();
    uVar5 = *(undefined8 *)(lVar7 + 8);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f0870(lVar1,puVar2,L"strCastResult",uVar5,uVar9);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    if (CONCAT44(uStack28,local_20) != 0) {
        FUN_14018b900(CONCAT44(uStack28,local_20),0);
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogInterrupted",&DAT_1409eb6a4,uVar3)
            ;
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060f7b0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(lVar1);
    local_20 = uVar2;
    iVar3 = FUN_140649870(lVar1);
    if (iVar3 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar5 = FUN_1403d90d0(DAT_140c65898);
    if (lVar5 != 0) {
        lVar5 = FUN_14047dca0(lVar5);
        if ((lVar5 != 0) && (*(int *)(lVar5 + 8) != *(int *)(param_1 + 8))) {
            iVar3 = FUN_140649870(lVar1);
            if (iVar3 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    uVar7 = (ulonglong)*(uint *)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    *puVar8 = *puVar6;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar8,L"eStatType",uVar7 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar8 = *(undefined8 **)(lVar1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    *puVar8 = *puVar6;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    lVar5 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400ea3e0(*(undefined8 *)(lVar5 + 0x7340),"CombatLogKillStreak",&DAT_1409eb68c,uVar2);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060f970(undefined8 param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    FUN_14060b380(param_1,&local_28);
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogKillPVP",&DAT_1409eb62c,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060fa40(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    iVar4 = FUN_140649870(lVar1);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if (lVar6 != 0) {
        lVar6 = FUN_14047dca0(lVar6);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 8) != *(int *)(param_1 + 8))) {
            iVar4 = FUN_140649870(lVar1);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogDeath",&DAT_1409eb474,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060fb80(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    iVar4 = FUN_140649870(lVar1);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if (lVar6 != 0) {
        lVar6 = FUN_14047dca0(lVar6);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 8) != *(int *)(param_1 + 8))) {
            iVar4 = FUN_140649870(lVar1);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogResurrect",&DAT_1409eb444,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060fcc0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    uint *puVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar6 = FUN_14005c1b0(lVar1);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar1);
    local_20 = uVar4;
    iVar5 = FUN_140649870(lVar1);
    if (iVar5 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar7 = FUN_1403d90d0(DAT_140c65898);
    if (lVar7 != 0) {
        lVar7 = FUN_14047dca0(lVar7);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 8) != *(int *)(param_1 + 8))) {
            iVar5 = FUN_140649870(lVar1);
            if (iVar5 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    iVar5 = *(int *)(param_1 + 0x10);
    puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(&local_28,L"bExiting");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
        FUN_140058710(lVar1);
    }
    if (CONCAT44(uStack28,local_20) != 0) {
        FUN_14018b900(CONCAT44(uStack28,local_20),0);
    }
    puVar3 = *(uint **)(lVar1 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar5 != 0);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar6,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    lVar7 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogStealth",&DAT_1409eb42c,uVar4);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14060fec0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    uint *puVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    undefined8 *puVar7;
    longlong lVar8;
    longlong lVar9;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    uVar6 = FUN_14005c1b0(lVar2,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    *puVar3 = uVar6;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(lVar2);
    local_20 = uVar5;
    FUN_14060b380(param_1,&local_28);
    iVar1 = *(int *)(param_1 + 0x20);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar5);
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar8 = FUN_14018f0e0(&local_28,L"bDismounted");
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar9) != '\0');
        FUN_140058710(lVar2);
    }
    if (CONCAT44(uStack28,local_20) != 0) {
        FUN_14018b900(CONCAT44(uStack28,local_20),0);
    }
    puVar4 = *(uint **)(lVar2 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar1 != 0);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar2,0xfffffffd);
    FUN_14005ea50(lVar2,uVar6,*(longlong *)(lVar2 + 0x10) + -0x20,*(longlong *)(lVar2 + 0x10) + -0x10)
            ;
    lVar8 = DAT_140c65898;
    *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(lVar8 + 0x7340),"CombatLogMount",&DAT_1409eb3fc,uVar5);
    FUN_1400579e0(lVar2);
    return;
}



void FUN_140610060(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint *puVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined **local_38;
    undefined4 local_30;
    undefined4 uStack44;
    longlong local_28;
    undefined4 local_20;

    local_20 = 1;
    lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_38 = &PTR_FUN_140b569f0;
    local_28 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    uVar5 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar2);
    local_30 = uVar4;
    FUN_14060b380(param_1,&local_38);
    iVar1 = *(int *)(param_1 + 0x20);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(&local_38,L"bDismissed");
    lVar8 = -1;
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
        FUN_140058710(lVar2);
    }
    if (CONCAT44(uStack44,local_30) != 0) {
        FUN_14018b900(CONCAT44(uStack44,local_30),0);
    }
    puVar3 = *(uint **)(lVar2 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,*(longlong *)(lVar2 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
    puVar10 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(param_1 + 0x24);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
    *puVar10 = *puVar6;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(&local_38,L"bKilled");
    lVar7 = *(longlong *)(lVar7 + 8);
    if (lVar7 == 0) {
        *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    }
    else {
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(lVar7 + lVar8) != '\0');
        FUN_140058710(lVar2,lVar7,lVar8);
    }
    if (CONCAT44(uStack44,local_30) != 0) {
        FUN_14018b900(CONCAT44(uStack44,local_30),0);
    }
    puVar3 = *(uint **)(lVar2 + 0x10);
    puVar3[2] = 1;
    *puVar3 = (uint)(iVar1 != 0);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
    FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,*(longlong *)(lVar2 + 0x10) + -0x10)
            ;
    lVar7 = DAT_140c65898;
    *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogPet",&DAT_1409eb504,uVar4);
    FUN_1400579e0(lVar2);
    return;
}



void FUN_1406102d0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if ((((*(int *)(param_1 + 0x10) != 0) || (*(int *)(param_1 + 0x14) != 0)) ||
         (*(int *)(param_1 + 0x18) != 0)) || (*(int *)(param_1 + 0x1c) != 0)) {
        local_10 = 1;
        lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
        local_28 = &PTR_FUN_140b569f0;
        local_18 = lVar1;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar1);
        }
        puVar8 = *(undefined8 **)(lVar1 + 0x10);
        uVar4 = FUN_14005c1b0(lVar1,0,0);
        *(undefined4 *)(puVar8 + 1) = 5;
        *puVar8 = uVar4;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        uVar2 = FUN_1400578c0(lVar1);
        local_20 = uVar2;
        iVar3 = FUN_140649870(lVar1);
        if (iVar3 != 0) {
            FUN_1400fb540(&local_28);
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        lVar5 = FUN_1403d90d0(DAT_140c65898);
        if (lVar5 != 0) {
            lVar5 = FUN_14047dca0(lVar5);
            if ((lVar5 != 0) && (*(int *)(lVar5 + 8) != *(int *)(param_1 + 8))) {
                iVar3 = FUN_140649870(lVar1);
                if (iVar3 != 0) {
                    FUN_1400fb540(&local_28,L"unitCasterOwner");
                    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
                }
            }
        }
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
        puVar8 = *(undefined8 **)(lVar1 + 0x10);
        *puVar8 = *puVar6;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1,puVar8,&DAT_140b26cd8,uVar7 & 0xffffffff);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(lVar1 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
        *puVar8 = *puVar6;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(lVar1 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
        *puVar8 = *puVar6;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        puVar8 = *(undefined8 **)(lVar1 + 0x10);
        puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
        *puVar8 = *puVar6;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        FUN_1400f06f0(lVar1);
        lVar5 = DAT_140c65898;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        FUN_1400ea3e0(*(undefined8 *)(lVar5 + 0x7340),"CombatLogExperience",&DAT_1409eb4e4,uVar2);
        FUN_1400579e0(lVar1);
    }
    return;
}



void FUN_140610530(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    iVar4 = FUN_140649870(lVar1);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if (lVar6 != 0) {
        lVar6 = FUN_14047dca0(lVar6);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 8) != *(int *)(param_1 + 8))) {
            iVar4 = FUN_140649870(lVar1);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogElderPointsLimitReached",
                  &DAT_1409eb4a4,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140610670(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    iVar4 = FUN_140649870(lVar1);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if (lVar6 != 0) {
        lVar6 = FUN_14047dca0(lVar6);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 8) != *(int *)(param_1 + 8))) {
            iVar4 = FUN_140649870(lVar1);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    uVar5 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0x10),0);
    iVar4 = FUN_140415c70(lVar1,uVar5);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28,L"itemHost");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    uVar5 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0x18),0);
    iVar4 = FUN_140415c70(lVar1,uVar5);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28,L"itemRemoved");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    uVar5 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0x14),0);
    iVar4 = FUN_140415c70(lVar1,uVar5);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28,L"itemAdded");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogModifying",&DAT_1409eb48c,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140610850(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined4 uVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong lVar9;
    float fVar10;
    undefined **local_38;
    undefined4 local_30;
    undefined4 uStack44;
    longlong local_28;
    undefined4 local_20;

    local_20 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_38 = &PTR_FUN_140b569f0;
    local_28 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar6 = FUN_14005c1b0(lVar1);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar1);
    local_30 = uVar4;
    iVar5 = FUN_140649870(lVar1);
    if (iVar5 != 0) {
        FUN_1400fb540(&local_38);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar7 = FUN_1403d90d0(DAT_140c65898);
    if (lVar7 != 0) {
        lVar7 = FUN_14047dca0(lVar7);
        if ((lVar7 != 0) && (*(int *)(lVar7 + 8) != *(int *)(param_1 + 8))) {
            iVar5 = FUN_140649870(lVar1);
            if (iVar5 != 0) {
                FUN_1400fb540(&local_38,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    fVar10 = *(float *)(param_1 + 0x10);
    puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(&local_38,L"nAmount");
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar9) != '\0');
        FUN_140058710(lVar1);
    }
    if (CONCAT44(uStack44,local_30) != 0) {
        FUN_14018b900(CONCAT44(uStack44,local_30),0);
    }
    pdVar3 = *(double **)(lVar1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar10;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar6,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    lVar7 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(lVar7 + 0x7340),"CombatLogDurabilityLoss",&DAT_1409eb814,uVar4);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140610a50(longlong param_1)

{
    undefined8 uVar1;
    undefined auStack2584 [32];
    undefined4 local_9f8 [2];
    longlong *local_9f0 [96];
    longlong local_6f0;
    undefined8 local_530;
    undefined8 local_528;
    undefined8 local_520;
    undefined8 local_518;
    undefined8 local_510;
    undefined8 local_508;
    undefined8 local_500;
    undefined8 local_4f8;
    undefined8 local_4f0;
    undefined8 local_4e8;
    longlong *local_4d8 [96];
    longlong local_1d8;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack2584;
    FUN_14040fae0(local_4d8);
    uVar1 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(param_1 + 0x10),0);
    FUN_140412470(local_4d8,uVar1,1);
    local_9f8[0] = 3;
    FUN_14040fc60(local_9f0,local_4d8);
    local_520 = 1;
    local_508 = 1;
    local_4f0 = 1;
    local_530 = 0;
    local_528 = 0;
    local_518 = 0;
    local_510 = 0;
    local_500 = 0;
    local_4f8 = 0;
    local_4e8 = 0;
    FUN_140427fa0(*(undefined8 *)(DAT_140c65898 + 0x7340),local_9f8);
    if (local_9f0[0] != (longlong *)0x0) {
        (**(code **)(*local_9f0[0] + 8))();
        local_9f0[0] = (longlong *)0x0;
    }
    if (local_6f0 != 0) {
        FUN_14018b900(local_6f0,0);
    }
    if (local_4d8[0] != (longlong *)0x0) {
        (**(code **)(*local_4d8[0] + 8))();
        local_4d8[0] = (longlong *)0x0;
    }
    if (local_1d8 != 0) {
        FUN_14018b900(local_1d8,0);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack2584);
    return;
}



void FUN_140610bb0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    iVar4 = FUN_140649870(lVar1);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if (lVar6 != 0) {
        lVar6 = FUN_14047dca0(lVar6);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 8) != *(int *)(param_1 + 8))) {
            iVar4 = FUN_140649870(lVar1);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CombatLogLAS",&DAT_1409eb804,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140610cf0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    iVar4 = FUN_140649870(lVar1);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if (lVar6 != 0) {
        lVar6 = FUN_14047dca0(lVar6);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 8) != *(int *)(param_1 + 8))) {
            iVar4 = FUN_140649870(lVar1);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    iVar4 = *(int *)(param_1 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar7;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar2,L"nNewSpecIndex",iVar4 + 1);
    lVar6 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400ea3e0(*(undefined8 *)(lVar6 + 0x7340),"CombatLogBuildSwitch",&DAT_1409eb7e4,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140610e70(longlong param_1)

{
    longlong lVar1;
    uint *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    undefined **local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;
    undefined4 local_10;

    local_10 = 1;
    lVar1 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_18 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar10 = *(undefined8 **)(lVar1 + 0x10);
    uVar5 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar5;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    local_20 = uVar3;
    iVar4 = FUN_140649870(lVar1);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_28);
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    lVar6 = FUN_1403d90d0(DAT_140c65898);
    if (lVar6 != 0) {
        lVar6 = FUN_14047dca0(lVar6);
        if ((lVar6 != 0) && (*(int *)(lVar6 + 8) != *(int *)(param_1 + 8))) {
            iVar4 = FUN_140649870(lVar1);
            if (iVar4 != 0) {
                FUN_1400fb540(&local_28,L"unitCasterOwner");
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
            }
        }
    }
    uVar9 = (ulonglong)*(uint *)(param_1 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    puVar10 = *(undefined8 **)(lVar1 + 0x10);
    *puVar10 = *puVar7;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar10,L"eDatacubeType",uVar9 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar10 = *(undefined8 **)(lVar1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x14);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    *puVar10 = *puVar7;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(&local_28,L"bHasPieces");
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar8 = -1;
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar8) != '\0');
        FUN_140058710(lVar1);
    }
    if (CONCAT44(uStack28,local_20) != 0) {
        FUN_14018b900(CONCAT44(uStack28,local_20),0);
    }
    puVar2 = *(uint **)(lVar1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar4 != 0);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar5,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    lVar6 = DAT_140c65898;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    FUN_1400ea3e0(*(undefined8 *)(lVar6 + 0x7340),"CombatLogDatacube",&DAT_1409eb774,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



undefined8 * FUN_1406110b0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b6f9d0;
    FUN_140575b00();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



bool FUN_1406110f0(longlong param_1)

{
    longlong lVar1;

    if (*(int *)(param_1 + 0x30) - 0x1bU < 2) {
        lVar1 = FUN_140223380(*(undefined4 *)(param_1 + 0x34));
        if (lVar1 != 0) {
            return *(int *)(lVar1 + 0x10) - 1U < 2;
        }
    }
    return false;
}



void FUN_140611130(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong *plVar2;

    lVar1 = *(longlong *)(param_1 + 0x10);
    plVar2 = (longlong *)FUN_14018b280(0x18);
    if ((longlong **)(plVar2 + 2) != (longlong **)0x0) {
        plVar2[2] = (longlong)param_2;
    }
    *plVar2 = lVar1;
    plVar2[1] = *(longlong *)(lVar1 + 8);
    **(longlong ***)(lVar1 + 8) = plVar2;
    *(longlong **)(lVar1 + 8) = plVar2;
    // WARNING: Could not recover jumptable at 0x00014061118d. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_2 + 0x10))(param_2,param_1);
    return;
}



void FUN_1406111a0(longlong *param_1,longlong param_2,int param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    int iVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    uint uVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;

    puVar9 = (undefined8 *)0x0;
    *param_1 = param_2;
    puVar10 = puVar9;
    if (*(int *)(param_2 + 0x10) != 0) {
        do {
            uVar8 = (uint)puVar10;
            if ((uVar8 < *(uint *)(param_2 + 0x10) || uVar8 == *(uint *)(param_2 + 0x10)) &&
                (lVar4 = *(longlong *)(param_2 + 0x18 + (longlong)puVar10 * 8), lVar4 != 0)) {
                puVar6 = (undefined8 *)FUN_14018b280();
                puVar11 = puVar9;
                if (puVar6 != (undefined8 *)0x0) {
                    uVar1 = *(undefined4 *)(lVar4 + 0xc);
                    uVar2 = *(undefined4 *)(lVar4 + 4);
                    uVar3 = **(undefined4 **)(*param_1 + 8);
                    *puVar6 = &PTR_FUN_140b6cbd0;
                    uVar7 = FUN_14018b280(0x18);
                    puVar6[2] = uVar7;
                    *(undefined8 *)uVar7 = uVar7;
                    *(undefined8 *)(puVar6[2] + 8) = puVar6[2];
                    puVar6[3] = 0;
                    puVar6[4] = 0;
                    *(undefined4 *)(puVar6 + 5) = uVar3;
                    *puVar6 = &PTR_FUN_140b6f9d0;
                    *(undefined4 *)(puVar6 + 6) = uVar2;
                    *(undefined4 *)((longlong)puVar6 + 0x34) = uVar1;
                    *(undefined4 *)(puVar6 + 7) = 0;
                    puVar11 = puVar6;
                }
                param_1[(longlong)puVar10 + 2] = (longlong)puVar11;
            }
            puVar10 = (undefined8 *)(ulonglong)(uVar8 + 1);
        } while (uVar8 + 1 < *(uint *)(*param_1 + 0x10));
    }
    if ((*(int *)(param_1 + 1) != param_3) &&
        (*(int *)(param_1 + 1) = param_3, iVar5 = DAT_140c636a8, param_3 == 1)) {
        *(int *)((longlong)param_1 + 0x4c) = DAT_140c636a8;
        *(int *)(param_1 + 9) = iVar5 + 10000;
        if (*(int *)(*param_1 + 0x10) != 0) {
            do {
                iVar5 = FUN_140553790(*param_1,puVar9);
                if (iVar5 != 0) {
                    *(int *)((longlong)param_1 + (longlong)puVar9 * 4 + 0x50) = DAT_140c636a8;
                }
                uVar8 = (int)puVar9 + 1;
                puVar9 = (undefined8 *)(ulonglong)uVar8;
            } while (uVar8 < *(uint *)(*param_1 + 0x10));
        }
    }
    FUN_140611710(param_1);
    return;
}



void FUN_140611310(longlong *param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;

    if ((*(int *)(param_1 + 1) != param_2) && (*(int *)(param_1 + 1) = param_2, param_2 == 1)) {
        uVar3 = 0;
        iVar1 = DAT_140c636a8 + 10000;
        *(int *)((longlong)param_1 + 0x4c) = DAT_140c636a8;
        *(int *)(param_1 + 9) = iVar1;
        if (*(int *)(*param_1 + 0x10) != 0) {
            do {
                iVar1 = FUN_140553790(*param_1,uVar3);
                if (iVar1 != 0) {
                    *(int *)((longlong)param_1 + uVar3 * 4 + 0x50) = DAT_140c636a8;
                }
                uVar2 = (int)uVar3 + 1;
                uVar3 = (ulonglong)uVar2;
            } while (uVar2 < *(uint *)(*param_1 + 0x10));
        }
    }
    FUN_140611710(param_1);
    return;
}



uint FUN_140611390(longlong param_1,uint param_2)

{
    uint uVar1;

    if ((param_2 < 6) && (uVar1 = 1 << ((char)param_2 + 2U & 0x1f), uVar1 != 0)) {
        return *(uint *)(param_1 + 0x44) & uVar1;
    }
    return 0;
}



ulonglong FUN_1406113b0(longlong *param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    lVar1 = *param_1;
    uVar5 = (ulonglong)param_2;
    if (((lVar1 != 0) && (param_2 != *(uint *)(lVar1 + 0x10))) && (param_2 <= *(uint *)(lVar1 + 0x10))
            ) {
        iVar3 = FUN_1405517a0(lVar1,uVar5);
        if (iVar3 == 0) {
            uVar4 = (**(code **)(*(longlong *)param_1[uVar5 + 2] + 0x40))();
        }
        else {
            uVar4 = (**(code **)(*(longlong *)param_1[uVar5 + 2] + 0x48))();
        }
        uVar6 = (ulonglong)uVar4;
        if ((((1 < uVar4) && (lVar1 = *param_1, param_2 < *(uint *)(lVar1 + 0x10))) &&
             ((lVar2 = *(longlong *)(lVar1 + 0x18 + uVar5 * 8), lVar2 != 0 &&
                                                                ((uVar4 = *(uint *)(lVar2 + 4), uVar4 < 0x2f &&
                                                                                                ((0x400000018104U >> ((ulonglong)uVar4 & 0x3f) & 1) != 0)))))) &&
            ((*(uint *)(lVar1 + 0x10) <= param_2 ||
              ((*(uint *)(*(longlong *)(lVar1 + 0x18 + uVar5 * 8) + 8) & 0x200) == 0)))) {
            uVar4 = FUN_140551840(lVar1,param_2);
            uVar6 = (ulonglong)((float)(ulonglong)uVar4 * (float)(uVar6 & 0xffffffff) * 0.001);
        }
        return uVar6 & 0xffffffff;
    }
    return 0;
}



void FUN_1406115a0(longlong *param_1,uint param_2,undefined8 param_3)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    uint uVar6;

    uVar5 = (ulonglong)param_2;
    if ((*param_1 != 0) && (param_2 < *(uint *)(*param_1 + 0x10))) {
        FUN_14079d700(param_1[uVar5 + 2],1,param_3,0,0);
        iVar2 = FUN_1405517a0(*param_1,param_2);
        if (iVar2 != 0) {
            (**(code **)(*(longlong *)param_1[uVar5 + 2] + 0x48))();
        }
        uVar3 = FUN_140551840(*param_1,uVar5);
        uVar4 = FUN_1405515c0(*param_1,param_2);
        if ((param_2 < 6) && (uVar6 = 1 << ((char)param_2 + 2U & 0x1f), uVar6 != 0)) {
            uVar1 = *(uint *)((longlong)param_1 + 0x44);
            if (uVar4 < uVar3) {
                if ((uVar6 & uVar1) != 0) {
                    *(uint *)((longlong)param_1 + 0x44) = ~uVar6 & uVar1;
                }
            }
            else if ((uVar6 & uVar1) == 0) {
                *(uint *)((longlong)param_1 + 0x44) = uVar1 | uVar6;
            }
        }
        FUN_140611710(param_1);
    }
    return;
}



uint FUN_140611680(longlong *param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    int iVar2;
    uint uVar3;

    lVar1 = *param_1;
    if (lVar1 != 0) {
        uVar3 = *(uint *)(lVar1 + 0x10);
        if ((param_2 != uVar3) && (param_2 <= uVar3)) {
            if ((param_2 != uVar3) &&
                ((param_2 <= uVar3 && (*(longlong *)(lVar1 + 0x18 + (ulonglong)param_2 * 8) != 0)))) {
                iVar2 = FUN_1405517a0();
                if ((iVar2 != 0) && (param_3 < 0x20)) {
                    uVar3 = (**(code **)(*(longlong *)param_1[(ulonglong)param_2 + 2] + 0x40))();
                    return uVar3 & 1 << ((byte)param_3 & 0x1f);
                }
            }
            return 0;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140611710(longlong *param_1)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined4 *puVar4;
    uint uVar5;
    longlong lVar6;
    longlong lVar7;

    uVar5 = 0;
    lVar7 = 0x18;
    do {
        if (((uVar5 < *(uint *)(*param_1 + 0x10)) &&
             (lVar6 = *(longlong *)(lVar7 + *param_1), lVar6 != 0)) &&
            (puVar4 = (undefined4 *)(lVar6 + 0x18), puVar4 != (undefined4 *)0x0)) {
            lVar6 = 4;
            do {
                uVar1 = *puVar4;
                if (DAT_140c63840 == (code *)0x0) {
                    if (_DAT_140c63e98 == 0) {
                        iVar2 = FUN_14024b720();
                        if (-1 < iVar2) {
                            lVar3 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,uVar1);
                            goto LAB_140611795;
                        }
                    }
                }
                else {
                    lVar3 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,uVar1,DAT_140c63858);
                    LAB_140611795:
                    if ((lVar3 != 0) && (*(int *)(param_1 + 1) == 1)) {
                        iVar2 = FUN_140611390(param_1);
                        if (iVar2 == 0) {
                            FUN_140553790(*param_1);
                        }
                    }
                }
                puVar4 = puVar4 + 1;
                lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 8;
        if (5 < uVar5) {
            return;
        }
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406117f0(longlong *param_1)

{
    undefined4 uVar1;
    int iVar2;
    undefined4 *puVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;

    uVar4 = 0;
    lVar6 = 0x18;
    do {
        if (((uVar4 < *(uint *)(*param_1 + 0x10)) &&
             (lVar5 = *(longlong *)(lVar6 + *param_1), lVar5 != 0)) &&
            (puVar3 = (undefined4 *)(lVar5 + 0x18), puVar3 != (undefined4 *)0x0)) {
            lVar5 = 4;
            do {
                uVar1 = *puVar3;
                if (DAT_140c63840 == (code *)0x0) {
                    if (_DAT_140c63e98 == 0) {
                        iVar2 = FUN_14024b720();
                        if (-1 < iVar2) {
                            (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,uVar1);
                        }
                    }
                }
                else {
                    (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,uVar1,DAT_140c63858);
                }
                puVar3 = puVar3 + 1;
                lVar5 = lVar5 + -1;
            } while (lVar5 != 0);
        }
        uVar4 = uVar4 + 1;
        lVar6 = lVar6 + 8;
    } while (uVar4 < 6);
    return;
}



void FUN_1406118a0(longlong *param_1,int param_2,int *param_3,uint param_4)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    longlong lVar6;
    int *piVar7;

    iVar4 = DAT_140c636a8;
    if (*param_1 != 0) {
        if ((param_2 != 0) && (iVar1 = *(int *)(*(longlong *)(*param_1 + 8) + 0x120), iVar1 != 0)) {
            *(int *)((longlong)param_1 + 0x4c) = (DAT_140c636a8 - iVar1) + param_2;
        }
        uVar5 = 0;
        if (param_4 != 0) {
            lVar6 = 0x18;
            piVar7 = param_3;
            do {
                uVar2 = *(uint *)(*param_1 + 0x10);
                if ((((uVar5 != uVar2) && (uVar5 <= uVar2)) &&
                     (lVar3 = *(longlong *)(lVar6 + *param_1), lVar3 != 0)) &&
                    ((iVar1 = *(int *)(lVar3 + 0x28), iVar1 != 0 && (*piVar7 != 0)))) {
                    *(int *)((longlong)param_1 + (0x50 - (longlong)param_3) + (longlong)piVar7) =
                            (*piVar7 - iVar1) + iVar4;
                }
                uVar5 = uVar5 + 1;
                lVar6 = lVar6 + 8;
                piVar7 = piVar7 + 1;
            } while (uVar5 < param_4);
        }
    }
    return;
}



void FUN_140611940(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
            if (lVar1 != 0) {
                puVar2 = *(undefined8 **)(lVar1 + 0x10);
                if (puVar2 != (undefined8 *)0x0) {
                    (**(code **)*puVar2)(puVar2,1);
                }
                *(undefined8 *)(lVar1 + 0x10) = 0;
                FUN_14018b900(lVar1,0);
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(param_1 + 0x10));
    }
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x0001406119d1. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    return;
}



void FUN_1406119e0(ulonglong *param_1)

{
    char *pcVar1;
    undefined8 *puVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong local_28;
    ulonglong local_20;

    uVar5 = 0;
    uVar4 = uVar5;
    if (param_1[2] != 0) {
        do {
            uVar6 = (ulonglong)((int)uVar4 + 1);
            **(undefined **)(param_1[1] + uVar4 * 8) = 0;
            uVar4 = uVar6;
        } while (uVar6 < param_1[2]);
    }
    lVar3 = DAT_140c65898;
    local_20 = 0;
    local_28 = 0;
    FUN_1403d6710(DAT_140c65898 + 0xa0,&local_28);
    FUN_1403d6710(lVar3 + 0xb8,&local_28);
    FUN_1403d6710(lVar3 + 0x118,&local_28);
    FUN_1403d6710(lVar3 + 0x130,&local_28);
    uVar4 = local_20;
    lVar3 = local_28;
    uVar6 = uVar5;
    if (local_20 != 0) {
        do {
            FUN_140611b80(param_1,*(undefined8 *)(lVar3 + uVar6 * 8));
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
    }
    if (param_1[2] != 0) {
        do {
            pcVar1 = *(char **)(param_1[1] + uVar5 * 8);
            if (*pcVar1 == '\0') {
                if (pcVar1 != (char *)0x0) {
                    puVar2 = *(undefined8 **)(pcVar1 + 0x10);
                    if (puVar2 != (undefined8 *)0x0) {
                        (**(code **)*puVar2)(puVar2,1);
                    }
                    *(undefined8 *)(pcVar1 + 0x10) = 0;
                    FUN_14018b900(pcVar1,0);
                }
                FUN_140007270(param_1 + 1);
                *(undefined *)(param_1 + 3) = 1;
            }
            else {
                uVar5 = (ulonglong)((int)uVar5 + 1);
            }
        } while (uVar5 < param_1[2]);
    }
    uVar4 = *param_1;
    if (param_1[2] == 0) {
        *param_1 = 0xffffffffffffffff;
    }
    else if (param_1[2] <= uVar4) {
        *param_1 = 0;
    }
    if (uVar4 != *param_1) {
        *(undefined *)(param_1 + 3) = 1;
    }
    if (lVar3 == 0) {
        return;
    }
    // WARNING: Could not recover jumptable at 0x000140611b68. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    return;
}



void FUN_140611b80(longlong *param_1,longlong *param_2)

{
    undefined4 uVar1;
    undefined8 uVar2;
    longlong lVar3;
    int iVar4;
    undefined8 *puVar5;
    undefined *puVar6;
    undefined4 *puVar7;
    longlong lVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined local_res10 [8];

    if ((param_2 != (longlong *)0x0) && ((*(byte *)(param_2[8] + 0x14c) & 2) != 0)) {
        uVar10 = 0;
        if (param_1[2] != 0) {
            do {
                iVar4 = *(int *)param_2[8];
                lVar8 = param_1[1];
                puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
                puVar6 = *(undefined **)(lVar8 + uVar10 * 8);
                if (*(int *)(puVar6 + 0xc) == iVar4) {
                    uVar2 = *puVar5;
                    *puVar6 = 1;
                    *(undefined8 *)(puVar6 + 4) = uVar2;
                    return;
                }
                uVar10 = (ulonglong)((int)uVar10 + 1);
            } while (uVar10 < (ulonglong)param_1[2]);
        }
        puVar6 = (undefined *)FUN_14018b280(0x18);
        if (puVar6 == (undefined *)0x0) {
            puVar6 = (undefined *)0x0;
        }
        else {
            uVar1 = *(undefined4 *)param_2[8];
            puVar7 = (undefined4 *)(**(code **)(*param_2 + 0x20))(param_2,local_res10);
            *puVar6 = 1;
            *(undefined4 *)(puVar6 + 4) = *puVar7;
            lVar8 = DAT_140c65898;
            *(undefined4 *)(puVar6 + 8) = puVar7[1];
            *(undefined4 *)(puVar6 + 0xc) = uVar1;
            *(undefined8 *)(puVar6 + 0x10) = 0;
            lVar8 = FUN_1403ac780(lVar8 + 0xa0);
            if (lVar8 != 0) {
                lVar8 = FUN_14018b280(0x210,0);
                if (lVar8 != 0) {
                    lVar8 = FUN_1405c7150(lVar8,0xe);
                }
                *(longlong *)(puVar6 + 0x10) = lVar8;
                iVar4 = FUN_1405c7ad0(lVar8,uVar1,0);
                if (iVar4 < 0) {
                    puVar5 = *(undefined8 **)(puVar6 + 0x10);
                    if (puVar5 != (undefined8 *)0x0) {
                        (**(code **)*puVar5)(puVar5,1);
                    }
                    *(undefined8 *)(puVar6 + 0x10) = 0;
                }
            }
        }
        lVar8 = param_1[2];
        lVar9 = FUN_14018db00(param_1[1],lVar8 + 1,8);
        *(undefined **)(lVar9 + lVar8 * 8) = puVar6;
        if (param_1[1] != lVar9) {
            FUN_1407db590(lVar9,param_1[1],param_1[2] << 3);
            lVar3 = param_1[1];
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            param_1[1] = lVar9;
        }
        param_1[2] = lVar8 + 1;
        *param_1 = lVar8;
        *(undefined *)(param_1 + 3) = 1;
    }
    return;
}



undefined4 FUN_140611d30(longlong param_1,int param_2,int param_3)

{
    ulonglong uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    ulonglong uVar6;

    FUN_1406119e0();
    lVar3 = DAT_140c65898;
    uVar1 = *(ulonglong *)(param_1 + 0x10);
    uVar5 = 0;
    if (uVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 8);
        uVar6 = 0;
        do {
            lVar4 = FUN_1403ac780(lVar3 + 0xa0,*(longlong *)(lVar2 + uVar6 * 8) + 4);
            if (((lVar4 != 0) && (*(int *)(*(longlong *)(lVar4 + 0x40) + 0x1b4) == param_2)) &&
                (*(int *)(*(longlong *)(lVar4 + 0x40) + 0x1b8) == param_3)) {
                return *(undefined4 *)(*(longlong *)(lVar2 + (ulonglong)uVar5 * 8) + 0xc);
            }
            uVar5 = uVar5 + 1;
            uVar6 = (ulonglong)uVar5;
        } while (uVar6 < uVar1);
    }
    return 0;
}



void FUN_140611dd0(ulonglong *param_1,int *param_2)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (param_1[2] != 0) {
        while( true ) {
            lVar1 = *(longlong *)(param_1[1] + uVar2 * 8);
            if ((*(int *)(lVar1 + 4) == *param_2) && (*(int *)(lVar1 + 8) == param_2[1])) break;
            uVar2 = (ulonglong)((int)uVar2 + 1);
            if (param_1[2] <= uVar2) {
                return;
            }
        }
        *(undefined *)(param_1 + 3) = 1;
        *param_1 = uVar2;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140611e30(undefined8 param_1,longlong *param_2)

{
    uint uVar1;

    if (*param_2 != _DAT_140c65938) {
        _DAT_140c65938 = *param_2;
        FUN_140489aa0();
        uVar1 = *(uint *)(param_2 + 1);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"QuestPeriodicReset",&DAT_140b00884,
                      uVar1 & 1,uVar1 & 2,uVar1 & 4,uVar1 & 8);
    }
    return 0;
}



undefined8 FUN_140611eb0(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;

    if ((DAT_140c65960 != 0) && (param_2 != (undefined4 *)0x0)) {
        lVar1 = FUN_140432960(DAT_140c65960,*param_2);
        if (lVar1 != 0) {
            *(undefined4 *)(lVar1 + 0x60) = param_2[1];
            *(undefined4 *)(lVar1 + 100) = param_2[2];
            *(undefined4 *)(lVar1 + 0x68) = param_2[3];
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"SettlerHubUpdated",0x1409d1147);
    return 0;
}



undefined8 FUN_140611f20(longlong param_1,undefined4 *param_2)

{
    undefined4 *puVar1;
    ulonglong *puVar2;
    longlong lVar3;
    int iVar4;
    ulonglong uVar5;
    longlong *plVar6;
    undefined8 uVar7;
    uint uVar8;
    undefined4 local_res10 [2];

    uVar8 = 0;
    if (param_2[1] != 0) {
        do {
            lVar3 = DAT_140c65c28;
            puVar1 = (undefined4 *)(*(longlong *)(param_2 + 2) + (ulonglong)uVar8 * 0x18);
            local_res10[0] = *puVar1;
            uVar5 = (**(code **)(DAT_140c65c28 + 0x38))(local_res10);
            puVar2 = *(ulonglong **)
                    (*(longlong *)(lVar3 + 0x30) + (uVar5 % *(ulonglong *)(lVar3 + 0x28)) * 8);
            while( true ) {
                if (puVar2 == (ulonglong *)0x0) {
                    return 0;
                }
                if ((uVar5 == *puVar2) && (iVar4 = (**(code **)(lVar3 + 0x40))(local_res10), iVar4 != 0))
                    break;
                puVar2 = (ulonglong *)puVar2[1];
            }
            if (puVar2 + 3 == (ulonglong *)0x0) {
                return 0;
            }
            if (puVar2[3] == 0) {
                return 0;
            }
            FUN_140643f00(DAT_140c65c28,*puVar1,puVar1[1],puVar1[2],*(undefined8 *)(puVar1 + 4),0,*param_2
            );
            plVar6 = (longlong *)FUN_140643e20(DAT_140c65c28);
            if ((((plVar6 == (longlong *)0x0) || ((*(byte *)(*plVar6 + 0xc) & 2) != 0)) ||
                 (iVar4 = FUN_140644d30(), iVar4 == 5)) || (iVar4 == 0x2e)) {
                plVar6 = (longlong *)FUN_140643e20(DAT_140c65c28);
                if ((plVar6 != (longlong *)0x0) && ((*(byte *)(*plVar6 + 0xc) & 2) == 0)) {
                    uVar7 = *(undefined8 *)(DAT_140c65898 + 0x7340);
                    goto LAB_140612074;
                }
            }
            else {
                uVar7 = *(undefined8 *)(param_1 + 0x7340);
                LAB_140612074:
                FUN_1400ea3e0(uVar7);
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)param_2[1]);
    }
    return 0;
}



undefined8 FUN_1406120b0(undefined8 param_1,int *param_2)

{
    int iVar1;
    longlong lVar2;

    lVar2 = DAT_140c65970;
    if (DAT_140c65970 != 0) {
        if (*(int *)(DAT_140c65970 + 8) != 2) {
            return 0x80004005;
        }
        iVar1 = param_2[1];
        *(int *)(DAT_140c65970 + 0xc0) = *param_2;
        if (iVar1 != 0) {
            *(int *)(lVar2 + 0xc4) = iVar1 + DAT_140c636a8;
        }
        if (*param_2 != 0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathScientistScanBotDeployed","")
                    ;
            return 0;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathScientistScanBotDespawned","");
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathScientistScanBotCooldown",
                      &DAT_1409ed7a4,(double)((float)(ulonglong)(uint)param_2[1] * 0.001));
    }
    return 0;
}



undefined8 FUN_140612180(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res18;

    if (DAT_140c65970 == 0) {
        return 0;
    }
    lVar3 = FUN_140617410(param_1,*param_2);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x98) != 0)) {
        *(undefined4 *)(param_1 + 0x6f98) = 1;
        FUN_140570b90();
        lVar1 = *(longlong *)(lVar3 + 0x78);
        local_res18 = lVar1;
        if (*(longlong *)(lVar1 + 8) != 0) {
            lVar4 = *(longlong *)(lVar1 + 8);
            do {
                if (*(uint *)(lVar4 + 0x20) < (uint)param_2[8]) {
                    lVar5 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar5 = *(longlong *)(lVar4 + 0x10);
                    local_res18 = lVar4;
                }
                lVar4 = lVar5;
            } while (lVar5 != 0);
        }
        if ((local_res18 == lVar1) || ((uint)param_2[8] < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar1;
        }
        if (local_res18 != lVar1) {
            iVar2 = *(int *)(*(longlong *)(local_res18 + 0x28) + 0xc);
            if (iVar2 == 0) {
                iVar2 = FUN_1400518a0(DAT_140c63628,0x83,6,0);
            }
            *(int *)(param_1 + 0x79f0) = iVar2;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SoldierHoldoutStatus",&DAT_1409ed854,
                      *(undefined8 *)(lVar3 + 0x98));
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_140612610(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res18;

    if (DAT_140c65970 == 0) {
        return 0;
    }
    lVar2 = FUN_140617410(param_1,*param_2);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x98) != 0)) {
        *(undefined4 *)(param_1 + 0x6f98) = 1;
        FUN_140570c10();
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SoldierHoldoutNextWave",&DAT_1409ed834,
                      *(undefined8 *)(lVar2 + 0x98));
        lVar2 = *(longlong *)(lVar2 + 0x78);
        local_res18 = lVar2;
        if (*(longlong *)(lVar2 + 8) != 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            do {
                if (*(uint *)(lVar3 + 0x20) < (uint)param_2[1]) {
                    lVar4 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    lVar4 = *(longlong *)(lVar3 + 0x10);
                    local_res18 = lVar3;
                }
                lVar3 = lVar4;
            } while (lVar4 != 0);
        }
        if ((local_res18 == lVar2) || ((uint)param_2[1] < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar2;
        }
        if (local_res18 != lVar2) {
            iVar1 = *(int *)(*(longlong *)(local_res18 + 0x28) + 0xc);
            if (iVar1 == 0) {
                iVar1 = FUN_1400518a0(DAT_140c63628,0x83,6,0);
            }
            *(int *)(param_1 + 0x79f0) = iVar1;
        }
        return 0;
    }
    return 0x80004005;
}



undefined8 FUN_140612850(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;

    *(undefined4 *)(param_1 + 0x79f0) = 0;
    lVar1 = FUN_140617410(param_1,*param_2);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x98) != 0)) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"SoldierHoldoutDeath",&DAT_1409ed6a4);
        return 0;
    }
    return 1;
}



bool FUN_140612cb0(undefined8 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
    switch(param_2) {
        case 1:
            return param_3 == 0;
        case 2:
            return param_3 == 1;
        case 3:
            return param_3 == 2;
        case 4:
            return param_5 == 1;
        case 5:
            return param_5 == 2;
        case 6:
            return param_5 == 3;
        case 7:
            return param_5 == 4;
        case 8:
            return param_5 == 5;
        case 9:
            return param_5 == 0xc;
        case 10:
            return param_5 == 0xd;
        case 0xb:
            return param_4 == 1;
        case 0xc:
            return param_4 == 2;
        case 0xd:
            return param_4 == 3;
        case 0xe:
            return param_4 == 4;
        case 0xf:
            return param_4 == 5;
        case 0x10:
            return param_4 == 6;
        case 0x11:
            return param_4 == 7;
        case 0x12:
            return param_4 == 8;
        default:
            return true;
    }
}



void FUN_140612de0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    if (param_3 != 0) {
        FUN_140612e30(param_1,param_2,*(undefined4 *)(param_3 + 0x34),*(undefined4 *)(param_3 + 0xdc),
                      *(undefined4 *)(param_3 + 0xd8));
        return;
    }
    FUN_140612e30(param_1,param_2,3,0x17,0x11);
    return;
}



int FUN_140612e30(undefined8 param_1,undefined4 param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    int *piVar5;
    uint uVar6;
    ulonglong uVar7;
    int *piVar8;

    lVar4 = FUN_14022d940(param_2);
    if (lVar4 == 0) {
        return 0;
    }
    piVar5 = (int *)FUN_14022dd80(*(undefined4 *)(lVar4 + 8));
    if (piVar5 != (int *)0x0) {
        uVar7 = 0;
        piVar8 = piVar5;
        do {
            piVar8 = piVar8 + 1;
            iVar1 = *piVar8;
            iVar2 = FUN_140612cb0();
            if (iVar2 != 0) {
                iVar2 = piVar8[0xf];
                iVar3 = FUN_140612cb0();
                if ((iVar3 != 0) && ((iVar1 != 0 || (iVar2 != 0)))) {
                    return piVar5[uVar7 + 0x1f];
                }
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
        } while (uVar6 < 0xf);
    }
    return *(int *)(lVar4 + 4);
}



void FUN_140612f00(void)

{
    longlong in_stack_00000028;

    if (in_stack_00000028 != 0) {
        FUN_140612f70(DAT_140c65898);
        return;
    }
    FUN_140612f70(DAT_140c65898);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_140612f70(longlong param_1,uint *param_2,longlong param_3,uint param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong *plVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    longlong local_res10;
    longlong local_res18;
    uint local_res20;
    longlong local_68;
    undefined local_60 [8];
    uint local_58;
    undefined4 uStack84;

    if ((param_2 == (uint *)0x0) || (param_3 == 0)) {
        return 0;
    }
    uVar13 = 0;
    local_res18 = param_3;
    local_res20 = param_4;
    uVar6 = FUN_14018dbc0(0,param_3,0x10);
    uVar11 = uVar13;
    if (uVar6 != 0) {
        uVar11 = uVar6;
    }
    uVar7 = FUN_14018dbc0(0,param_3,0x10);
    uVar6 = uVar13;
    if (uVar7 != 0) {
        uVar6 = uVar7;
    }
    uVar7 = uVar11;
    uVar14 = uVar13;
    uVar16 = uVar6;
    if (param_3 != 0) {
        do {
            FUN_140612e30();
            uVar11 = uVar7;
            uVar12 = uVar13;
            uVar15 = uVar14;
            uVar16 = uVar6;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64af4 == 0) && (iVar4 = FUN_140211020(), -1 < iVar4)) {
                    lVar8 = (**(code **)(*DAT_140c64188 + 0x18))();
                    goto LAB_14061306f;
                }
            }
            else {
                lVar8 = (*DAT_140c63840)(&PTR_u_LocalizedText_140a6b208);
                LAB_14061306f:
                if (lVar8 != 0) {
                    local_58 = *param_2;
                    uVar15 = uVar14 + 1;
                    uVar9 = FUN_14018db00(uVar6);
                    *(longlong *)(uVar14 * 0x10 + uVar9) = lVar8;
                    *(ulonglong *)(uVar14 * 0x10 + 8 + uVar9) = CONCAT44(uStack84,local_58);
                    if ((uVar6 != uVar9) && (FUN_1407db590(uVar9), uVar16 = uVar9, uVar6 != 0)) {
                        (**(code **)(*(longlong *)(uVar6 - 0x10) + 8))(uVar6 - 0x10);
                    }
                    uVar5 = *param_2;
                    if (uVar5 != local_res20) {
                        lVar1 = *(longlong *)(param_1 + 0x7b30);
                        lVar3 = lVar1;
                        lVar2 = *(longlong *)(lVar1 + 8);
                        while (lVar2 != 0) {
                            if (*(uint *)(lVar2 + 0x20) < uVar5) {
                                lVar2 = *(longlong *)(lVar2 + 0x18);
                            }
                            else {
                                lVar3 = lVar2;
                                lVar2 = *(longlong *)(lVar2 + 0x10);
                            }
                        }
                        if ((lVar3 == lVar1) || (uVar5 < *(uint *)(lVar3 + 0x20))) {
                            local_68 = lVar1;
                            plVar10 = &local_68;
                        }
                        else {
                            plVar10 = &local_res10;
                            local_res10 = lVar3;
                        }
                        if (*plVar10 == lVar1) {
                            uVar12 = uVar13 + 1;
                            uVar6 = FUN_14018db00(uVar7);
                            *(longlong *)(uVar13 * 0x10 + uVar6) = lVar8;
                            *(ulonglong *)(uVar13 * 0x10 + 8 + uVar6) = CONCAT44(uStack84,local_58);
                            if ((uVar7 != uVar6) && (FUN_1407db590(uVar6), uVar11 = uVar6, uVar7 != 0)) {
                                (**(code **)(*(longlong *)(uVar7 - 0x10) + 8))(uVar7 - 0x10);
                            }
                        }
                    }
                }
            }
            param_2 = param_2 + 1;
            local_res18 = local_res18 + -1;
            uVar7 = uVar11;
            uVar13 = uVar12;
            uVar14 = uVar15;
            uVar6 = uVar16;
        } while (local_res18 != 0);
        if (uVar15 == 0) {
            uVar13 = 0;
        }
        else {
            if (uVar12 == 0) {
                if (uVar15 != 0) {
                    lVar8 = uVar16 + 8;
                    uVar13 = uVar15;
                    do {
                        FUN_1400ee810(param_1 + 0x7b28,lVar8);
                        lVar8 = lVar8 + 0x10;
                        uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                }
                if (uVar11 != 0) {
                    (**(code **)(*(longlong *)(uVar11 - 0x10) + 8))(uVar11 - 0x10);
                }
                uVar6 = 0;
                uVar11 = uVar16;
                uVar12 = uVar15;
            }
            if (uVar12 < 2) {
                uVar5 = 0;
            }
            else {
                uVar5 = (**(code **)(DAT_140c77890 + 0x18))();
                uVar5 = (uint)(longlong)
                        ((double)(ulonglong)uVar5 * 2.328306436538696e-10 *
                         ((double)(ulonglong)((int)uVar12 - 1) + 1.0));
            }
            FUN_1400293c0(param_1 + 0x7b28,local_60,uVar11 + 8 + (ulonglong)uVar5 * 0x10);
            uVar13 = (ulonglong)**(uint **)((ulonglong)uVar5 * 0x10 + uVar11);
            uVar16 = uVar6;
        }
    }
    if (uVar16 != 0) {
        (**(code **)(*(longlong *)(uVar16 - 0x10) + 8))(uVar16 - 0x10);
    }
    if (uVar11 != 0) {
        (**(code **)(*(longlong *)(uVar11 - 0x10) + 8))(uVar11 - 0x10);
    }
    return uVar13;
}



int FUN_1406132e0(void)

{
    int iVar1;
    longlong lVar2;

    lVar2 = FUN_140211280();
    if (lVar2 == 0) {
        return 0;
    }
    if ((((*(uint *)(lVar2 + 0x18) & *(uint *)(DAT_140c63628 + 0x5f4)) == 0) ||
         (*(int *)(DAT_140c635f0 + 0x1698) != 1)) || (iVar1 = *(int *)(lVar2 + 8), iVar1 == 0)) {
        iVar1 = *(int *)(lVar2 + 4);
    }
    return iVar1;
}



void FUN_140613330(longlong param_1,undefined param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong *puVar4;
    longlong lVar5;
    undefined *puVar6;
    ulonglong local_res8;
    ulonglong local_res18 [2];

    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 + 1 == *(longlong *)(param_1 + 0x18)) {
        local_res8 = 1;
        local_res8 = lVar1 - *(longlong *)(param_1 + 8);
        local_res18[0] = local_res8;
        puVar4 = &local_res8;
        if (local_res8 != 0) {
            puVar4 = local_res18;
        }
        local_res18[0] = (*puVar4 - *(longlong *)(param_1 + 8)) + lVar1;
        puVar4 = &local_res8;
        if (local_res8 <= local_res18[0]) {
            puVar4 = local_res18;
        }
        uVar2 = *puVar4;
        lVar5 = FUN_14018b280(uVar2 + 1,0);
        lVar1 = *(longlong *)(param_1 + 8);
        lVar3 = *(longlong *)(param_1 + 0x10);
        FUN_1407db590(lVar5,lVar1,lVar3 - lVar1);
        puVar6 = (undefined *)((lVar3 - lVar1) + lVar5);
        if (puVar6 != (undefined *)0x0) {
            *puVar6 = 0;
        }
        if (*(longlong *)(param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *)(param_1 + 8),0);
        }
        *(longlong *)(param_1 + 8) = lVar5;
        *(undefined **)(param_1 + 0x10) = puVar6;
        *(ulonglong *)(param_1 + 0x18) = lVar5 + uVar2 + 1;
    }
    puVar6 = (undefined *)(*(longlong *)(param_1 + 0x10) + 1);
    if (puVar6 != (undefined *)0x0) {
        *puVar6 = 0;
    }
    **(undefined **)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    return;
}



undefined8 * FUN_140613450(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_LAB_140b6faa8;
    if ((undefined8 *)param_1[2] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(undefined8 *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_LAB_140b55048;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



longlong * FUN_140613750(undefined8 param_1,longlong **param_2,int param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    longlong *plVar6;

    lVar3 = DAT_140c65898;
    if (param_2 != (longlong **)0x0) {
        plVar4 = (longlong *)FUN_14018b280(0x28);
        plVar5 = (longlong *)0x0;
        plVar6 = plVar5;
        if (plVar4 != (longlong *)0x0) {
            *plVar4 = (longlong)&PTR_LAB_140b55048;
            *(undefined4 *)(plVar4 + 1) = 1;
            *plVar4 = (longlong)&PTR_LAB_140b6faa8;
            plVar4[2] = 0;
            plVar4[3] = 0;
            *(undefined4 *)(plVar4 + 4) = 0;
            plVar6 = plVar4;
        }
        if (param_3 == 0) {
            plVar5 = (longlong *)0x80004005;
            if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x10))(plVar6,1);
            }
        }
        else {
            *(int *)(plVar6 + 4) = param_3;
            pplVar2 = (longlong **)(lVar3 + 0x7a18);
            if (plVar6[2] == 0) {
                plVar6[2] = (longlong)pplVar2;
                pplVar1 = (longlong **)(plVar6 + 3);
                *pplVar1 = *pplVar2;
                *pplVar2 = plVar6;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[2] = (longlong)pplVar1;
                }
            }
            *param_2 = plVar6;
        }
        return plVar5;
    }
    return (longlong *)0x80070057;
}



undefined8 FUN_140613840(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined4 uVar3;

    *(undefined4 *)(param_1 + 0x7a10) = 10;
    uVar3 = FUN_14018cdf0();
    *(undefined4 *)(param_1 + 0x79d0) = uVar3;
    FUN_140198d60();
    FUN_140615630(param_1);
    (**(code **)(*DAT_140c65848 + 0x28))(DAT_140c65848,param_1 + 0x79a8,0);
    FUN_14062dc90(param_1 + 0x7a48);
    lVar2 = DAT_140c63628;
    *(undefined (*) [16])(param_1 + 0x7a00) = ZEXT816(0);
    *(undefined8 *)(param_1 + 0x79e0) = 0;
    if (lVar2 != 0) {
        iVar1 = DAT_140c4e620;
        if (*DAT_140c63750 < DAT_140c4e620) {
            iVar1 = *DAT_140c63750;
        }
        FUN_140051cc0(lVar2,1,0x95 - (uint)((&DAT_140c4e630)[iVar1] != '\0'));
    }
    return 0;
}



undefined8 FUN_140613930(longlong param_1)

{
    longlong lVar1;

    FUN_140615630();
    if (*(longlong **)(param_1 + 0x79b0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x79b0) + 8))();
        *(undefined8 *)(param_1 + 0x79b0) = 0;
    }
    if (*(longlong **)(param_1 + 0x79a8) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x79a8) + 8))();
        *(undefined8 *)(param_1 + 0x79a8) = 0;
    }
    FUN_14062e340(param_1 + 0x7a48);
    FUN_140198f50();
    lVar1 = DAT_140c63628;
    if (*(longlong **)(DAT_140c63628 + 0x2f0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(DAT_140c63628 + 0x2f0) + 8))();
        *(undefined8 *)(lVar1 + 0x2f0) = 0;
    }
    return 0;
}



// WARNING: Removing unreachable block (ram,0x000140613e3d)
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406139c0(undefined8 param_1,float param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    longlong lVar3;
    int iVar4;
    undefined4 uVar5;
    uint uVar6;
    undefined4 uVar7;
    int iVar8;
    DWORD DVar9;
    longlong lVar10;
    ulonglong uVar11;
    longlong *plVar12;
    longlong lVar13;
    HANDLE hObject;
    short *psVar14;
    undefined4 *puVar15;
    int iVar16;
    longlong *plVar17;
    undefined8 uVar18;
    longlong *plVar19;
    longlong *plVar20;
    bool bVar21;
    undefined4 extraout_XMM0_Da;
    undefined4 extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float fVar22;
    float fVar23;
    float fVar24;
    undefined4 uVar25;
    undefined4 uVar26;
    float fVar27;
    undefined4 uVar28;
    float fVar29;
    undefined4 uVar30;
    float fVar31;
    undefined4 uVar32;
    float fVar33;
    undefined4 uVar34;
    float fVar35;
    undefined4 uVar36;
    float in_xmmTmp2_Dd;
    undefined auStack1336 [32];
    undefined8 local_518;
    undefined8 local_510;
    undefined8 local_508;
    int local_4f8;
    int local_4f4;
    uint local_4f0;
    undefined4 local_4ec;
    undefined4 local_4e8 [2];
    longlong *local_4e0;
    longlong *local_4d8;
    undefined8 local_4d0;
    undefined4 local_4c8 [2];
    longlong local_4c0;
    longlong *local_4b8;
    undefined8 local_4b0;
    int local_4a8;
    float local_498;
    float fStack1172;
    float fStack1168;
    float fStack1164;
    undefined4 local_488;
    undefined4 local_484;
    code *local_480;
    undefined *local_478;
    undefined4 *local_470;
    undefined4 local_468;
    undefined4 local_458;
    undefined4 uStack1108;
    undefined4 uStack1104;
    undefined4 uStack1100;
    undefined4 local_448;
    undefined4 uStack1092;
    undefined4 uStack1088;
    undefined4 uStack1084;
    undefined4 local_438;
    undefined4 uStack1076;
    undefined4 uStack1072;
    undefined4 uStack1068;
    undefined4 local_428;
    undefined4 uStack1060;
    undefined4 uStack1056;
    undefined4 uStack1052;
    undefined4 local_418;
    float fStack1044;
    undefined4 uStack1040;
    undefined4 uStack1036;
    code *local_408;
    undefined *local_400;
    undefined4 local_3f8 [4];
    undefined4 local_3e8;
    undefined4 uStack996;
    undefined4 uStack992;
    undefined4 uStack988;
    undefined4 local_3d8;
    undefined4 uStack980;
    undefined4 uStack976;
    undefined4 uStack972;
    undefined4 local_3c8;
    undefined4 uStack964;
    undefined4 uStack960;
    undefined4 uStack956;
    undefined4 local_3b8;
    undefined4 uStack948;
    undefined4 uStack944;
    undefined4 uStack940;
    undefined4 local_3a8;
    undefined4 uStack932;
    undefined4 uStack928;
    undefined4 uStack924;
    undefined4 local_398;
    undefined4 uStack916;
    undefined4 uStack912;
    undefined4 uStack908;
    undefined4 local_388;
    undefined local_378 [16];
    undefined local_368 [16];
    float local_358;
    float fStack852;
    float fStack848;
    float fStack844;
    undefined local_348 [16];
    undefined local_338 [16];
    undefined local_328 [16];
    undefined4 local_318;
    undefined4 uStack788;
    undefined4 uStack784;
    undefined4 uStack780;
    undefined4 local_308;
    undefined4 uStack772;
    undefined4 uStack768;
    undefined4 uStack764;
    undefined4 local_2f8;
    undefined4 uStack756;
    undefined4 uStack752;
    undefined4 uStack748;
    undefined local_2e8 [16];
    undefined local_2d8 [16];
    undefined local_2c8 [16];
    undefined4 local_2b8;
    undefined4 uStack692;
    undefined4 uStack688;
    undefined4 uStack684;
    undefined4 local_2a8;
    undefined4 uStack676;
    undefined4 uStack672;
    undefined4 uStack668;
    undefined4 local_204;
    uint local_1b8;
    undefined4 local_1b4;
    int local_1b0;
    uint local_1a8;
    undefined4 local_1a4;
    int local_1a0;
    undefined4 local_198;
    undefined4 local_194;
    undefined4 local_190;
    uint local_188;
    undefined4 local_184;
    int local_180;
    undefined4 local_174;
    float local_d8;
    ulonglong local_88;

    local_88 = DAT_140c0f7b0 ^ (ulonglong)auStack1336;
    uVar5 = FUN_14018cdf0();
    lVar10 = *(longlong *)(param_3 + 0x71a8);
    if (lVar10 == 0) {
        lVar10 = *(longlong *)(param_3 + 0x71a0);
    }
    local_3d8 = *(undefined4 *)(lVar10 + 0xa0);
    uStack980 = *(undefined4 *)(lVar10 + 0xa4);
    uStack976 = *(undefined4 *)(lVar10 + 0xa8);
    uStack972 = *(undefined4 *)(lVar10 + 0xac);
    lVar1 = *(longlong *)(param_3 + 0x6490);
    local_3c8 = *(undefined4 *)(lVar10 + 0xb0);
    uStack964 = *(undefined4 *)(lVar10 + 0xb4);
    uStack960 = *(undefined4 *)(lVar10 + 0xb8);
    uStack956 = *(undefined4 *)(lVar10 + 0xbc);
    local_3b8 = *(undefined4 *)(lVar10 + 0xc0);
    uStack948 = *(undefined4 *)(lVar10 + 0xc4);
    uStack944 = *(undefined4 *)(lVar10 + 200);
    uStack940 = *(undefined4 *)(lVar10 + 0xcc);
    local_3a8 = *(undefined4 *)(lVar10 + 0xd0);
    uStack932 = *(undefined4 *)(lVar10 + 0xd4);
    uStack928 = *(undefined4 *)(lVar10 + 0xd8);
    uStack924 = *(undefined4 *)(lVar10 + 0xdc);
    if (lVar1 == 0) {
        local_378 = ZEXT816(0);
        *(undefined (*) [16])(param_3 + 0x7a00) = ZEXT816(0);
        local_458 = local_3d8;
        uStack1108 = uStack980;
        uStack1104 = uStack976;
        uStack1100 = uStack972;
        local_448 = local_3c8;
        uStack1092 = uStack964;
        uStack1088 = uStack960;
        uStack1084 = uStack956;
        local_438 = local_3b8;
        uStack1076 = uStack948;
        uStack1072 = uStack944;
        uStack1068 = uStack940;
        local_428 = local_3a8;
        uStack1060 = uStack932;
        uStack1056 = uStack928;
        uStack1052 = uStack924;
    }
    else {
        uVar7 = *(undefined4 *)(lVar1 + 0x1124);
        uVar25 = *(undefined4 *)(lVar1 + 0x1128);
        uVar26 = *(undefined4 *)(lVar1 + 0x112c);
        *(undefined4 *)(param_3 + 0x7a00) = *(undefined4 *)(lVar1 + 0x1120);
        *(undefined4 *)(param_3 + 0x7a04) = uVar7;
        *(undefined4 *)(param_3 + 0x7a08) = uVar25;
        *(undefined4 *)(param_3 + 0x7a0c) = uVar26;
        lVar10 = *(longlong *)(param_3 + 0x6490);
        local_458 = *(undefined4 *)(lVar10 + 0x11b0);
        uStack1108 = *(undefined4 *)(lVar10 + 0x11b4);
        uStack1104 = *(undefined4 *)(lVar10 + 0x11b8);
        uStack1100 = *(undefined4 *)(lVar10 + 0x11bc);
        local_448 = *(undefined4 *)(lVar10 + 0x11c0);
        uStack1092 = *(undefined4 *)(lVar10 + 0x11c4);
        uStack1088 = *(undefined4 *)(lVar10 + 0x11c8);
        uStack1084 = *(undefined4 *)(lVar10 + 0x11cc);
        local_438 = *(undefined4 *)(lVar10 + 0x11d0);
        uStack1076 = *(undefined4 *)(lVar10 + 0x11d4);
        uStack1072 = *(undefined4 *)(lVar10 + 0x11d8);
        uStack1068 = *(undefined4 *)(lVar10 + 0x11dc);
        local_428 = *(undefined4 *)(lVar10 + 0x11e0);
        uStack1060 = *(undefined4 *)(lVar10 + 0x11e4);
        uStack1056 = *(undefined4 *)(lVar10 + 0x11e8);
        uStack1052 = *(undefined4 *)(lVar10 + 0x11ec);
    }
    lVar10 = (**(code **)(*DAT_140c65848 + 0x68))();
    fVar22 = *(float *)(lVar10 + 0x20);
    fVar24 = *(float *)(lVar10 + 0x24);
    fVar23 = *(float *)(lVar10 + 0x28);
    fVar27 = *(float *)(lVar10 + 0x2c);
    iVar8 = *DAT_140c63750;
    iVar16 = DAT_140c4e440;
    if (iVar8 < DAT_140c4e440) {
        iVar16 = iVar8;
    }
    local_358 = fVar22;
    fStack852 = fVar24;
    fStack848 = fVar23;
    fStack844 = fVar27;
    if (((&DAT_140c4e450)[iVar16] == '\0') && (*(int *)(param_3 + 0x79a0) == 0)) {
        puVar15 = &local_458;
        iVar16 = DAT_140c4e5a0;
        if (iVar8 < DAT_140c4e5a0) {
            iVar16 = iVar8;
        }
        lVar10 = *DAT_140c65848;
        if ((&DAT_140c4e5b0)[iVar16] == '\0') goto LAB_140613b58;
        (**(code **)(lVar10 + 0x48))(DAT_140c65848,puVar15,&local_3d8);
    }
    else {
        puVar15 = &local_3d8;
        lVar10 = *DAT_140c65848;
        LAB_140613b58:
        (**(code **)(lVar10 + 0x50))(DAT_140c65848,puVar15);
    }
    fVar29 = 0.0;
    fVar31 = 0.0;
    fVar33 = 0.0;
    fVar35 = 0.0;
    local_2e8 = ZEXT816(0);
    lVar10 = (**(code **)(*DAT_140c65848 + 0x68))();
    fVar22 = fVar22 - *(float *)(lVar10 + 0x20);
    fVar24 = fVar24 - *(float *)(lVar10 + 0x24);
    fVar27 = fVar27 - *(float *)(lVar10 + 0x2c);
    local_338 = CONCAT412(fVar27,CONCAT48(fVar23 - *(float *)(lVar10 + 0x28),CONCAT44(fVar24,fVar22)))
            ;
    uVar6 = movmskps((int)lVar10,
                     CONCAT412(-(uint)(fVar35 != in_xmmTmp2_Dd),
                               CONCAT48(-(uint)(fVar33 != fVar27),
                                        CONCAT44(-(uint)(fVar31 != fVar24),-(uint)(fVar29 != fVar22)))
                     ));
    if ((uVar6 & 7) == 0) {
        lVar10 = *(longlong *)(param_3 + 0x78);
        if (lVar10 != 0) {
            local_2c8 = CONCAT412(fVar35,CONCAT48(fVar33,CONCAT44(fVar31,fVar29)));
            uVar6 = movmskps((int)lVar10,
                             CONCAT412(-(uint)(*(float *)(lVar10 + 0x112c) != in_xmmTmp2_Dd),
                                       CONCAT48(-(uint)(*(float *)(lVar10 + 0x1128) != fVar35),
                                                CONCAT44(-(uint)(*(float *)(lVar10 + 0x1124) != fVar31),
                                                         -(uint)(*(float *)(lVar10 + 0x1120) != fVar29))))
            );
            if ((uVar6 & 7) != 0) goto LAB_140613bb3;
        }
    }
    else {
        LAB_140613bb3:
        *(undefined4 *)(param_3 + 0x79d0) = uVar5;
    }
    uVar5 = FUN_1400518a0(DAT_140c63628,0x76,2);
    (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,uVar5);
    plVar19 = (longlong *)0x0;
    uVar5 = 0;
    if (*(longlong *)(param_3 + 0x6760) == 0) {
        LAB_140613c3b:
        if (((*(int *)(param_3 + 0x79dc) != 0) && (*(longlong *)(DAT_140c63628 + 0x2d0) != 0)) &&
            (*(longlong *)(DAT_140c63628 + 0x2e8) != 0)) {
            uVar18 = 0x72;
            LAB_140613c62:
            plVar20 = *(longlong **)(DAT_140c63628 + 0x2d0);
            lVar10 = *plVar20;
            uVar7 = FUN_1400518a0(DAT_140c63628,uVar18);
            local_508 = 0;
            local_510 = 0;
            local_518 = (longlong **)0x0;
            (**(code **)(lVar10 + 0x10))(plVar20,uVar7);
        }
    }
    else if (*(int *)(param_3 + 0x79dc) == 0) {
        if ((*(longlong *)(DAT_140c63628 + 0x2d0) != 0) && (*(longlong *)(DAT_140c63628 + 0x2e8) != 0))
        {
            uVar18 = 0x70;
            goto LAB_140613c62;
        }
    }
    else if (*(longlong *)(param_3 + 0x6760) == 0) goto LAB_140613c3b;
    plVar20 = *(longlong **)(param_3 + 0x7248);
    *(uint *)(param_3 + 0x79dc) = (uint)(*(longlong *)(param_3 + 0x6760) != 0);
    if (plVar20 == (longlong *)0x0) {
        LAB_140613d1a:
        iVar8 = 0;
    }
    else {
        lVar10 = *(longlong *)(param_3 + 0x71a8);
        if (lVar10 == 0) {
            lVar10 = *(longlong *)(param_3 + 0x71a0);
        }
        local_518 = (longlong **)0x0;
        iVar8 = (**(code **)(*plVar20 + 0x1b8))(plVar20,lVar10 + 0xd0);
        if (iVar8 == 0) goto LAB_140613d1a;
        lVar10 = *(longlong *)(param_3 + 0x71a8);
        if (lVar10 == 0) {
            lVar10 = *(longlong *)(param_3 + 0x71a0);
        }
        iVar8 = 1;
        if (local_d8 < *(float *)(lVar10 + 0xd4) || local_d8 == *(float *)(lVar10 + 0xd4))
            goto LAB_140613d1a;
    }
    iVar16 = 0xa1 - (uint)(iVar8 != 0);
    local_4f4 = iVar8;
    if ((*(int *)(param_3 + 0x79d8) != 0xb0) && (*(int *)(param_3 + 0x79d8) != iVar16)) {
        uVar7 = 0x57;
        if (iVar16 != 0xa1) {
            uVar7 = 0x56;
        }
        FUN_140051af0(2,uVar7);
    }
    lVar10 = DAT_140c63628;
    *(int *)(param_3 + 0x79d8) = iVar16;
    FUN_140051cc0(lVar10);
    iVar16 = FUN_1400518a0(DAT_140c63628);
    uVar7 = 0x3f800000;
    fVar22 = 0.0;
    if (iVar16 != 0) {
        local_4b8 = (longlong *)0x0;
        local_4c0 = 0;
        local_4b0 = 0;
        iVar4 = DAT_140c4e480;
        if (*DAT_140c63750 < DAT_140c4e480) {
            iVar4 = *DAT_140c63750;
        }
        local_4d8 = (longlong *)0x0;
        local_4c8[0] = *(undefined4 *)(&DAT_140c4e490 + (longlong)iVar4 * 4);
        local_4a8 = iVar16;
        iVar16 = (**(code **)(*DAT_140c65848 + 0x90))(DAT_140c65848,FUN_140615c30,local_4c8);
        plVar20 = plVar19;
        if (-1 < iVar16) {
            if (DAT_140c63758 != 0) {
                uVar5 = *(undefined4 *)(DAT_140c63758 + 0xb8);
            }
            local_408 = FUN_140615b80;
            local_480 = FUN_140615b80;
            local_400 = &LAB_1401c8b60;
            local_478 = &LAB_1401c8b60;
            local_470 = local_4c8;
            local_488 = 4;
            local_484 = 8;
            local_468 = uVar5;
            iVar16 = FUN_14019dca0(&local_488,0,0,&local_4d8);
            plVar20 = local_4d8;
            if (-1 < iVar16) {
                local_3f8[0] = 0xffffffff;
                (**(code **)(*local_4d8 + 0x20))(local_4d8,local_3f8);
            }
        }
        plVar17 = plVar19;
        if (local_4b8 != (longlong *)0x0) {
            do {
                plVar12 = *(longlong **)(*(longlong *)(local_4c0 + (longlong)plVar17 * 8) + 0x10);
                (**(code **)(*plVar12 + 0x50))(plVar12,local_4a8);
                plVar17 = (longlong *)((longlong)plVar17 + 1);
            } while (plVar17 < local_4b8);
        }
        if (plVar20 != (longlong *)0x0) {
            (**(code **)(*plVar20 + 8))(plVar20);
        }
        if (local_4c0 != 0) {
            (**(code **)(*(longlong *)(local_4c0 + -0x10) + 8))(local_4c0 + -0x10);
        }
    }
    if (((*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) &&
         (iVar16 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar16 == 0xa7)) ||
        ((*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0 &&
          (iVar16 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar16 == 0xa6))))
    {
        FUN_140051cc0(DAT_140c63628,2,iVar16 + -0x1b);
    }
    uVar18 = 0x97;
    if (*(int *)(DAT_140c635f0 + 0x1698) != 0) {
        uVar18 = 0x96;
    }
    FUN_140051cc0(DAT_140c63628,3,uVar18);
    lVar10 = DAT_140c63628;
    if (*(int *)(param_3 + 0x79e0) == 0) {
        if (((*(longlong *)(param_3 + 0x71a8) != 0) && (*(longlong *)(param_3 + 0x7198) != 0)) &&
            (*(int *)(*(longlong *)(param_3 + 0x7198) + 0x50) == 0)) {
            if ((*(longlong *)(DAT_140c63628 + 0x2e0) != 0) && (*(longlong *)(DAT_140c63628 + 0x2e8) != 0)
                    ) {
                plVar20 = *(longlong **)(DAT_140c63628 + 0x2e0);
                lVar10 = *plVar20;
                uVar5 = FUN_1400518a0(DAT_140c63628,0x87,1,0);
                local_508 = 0;
                local_510 = 0;
                local_518 = (longlong **)0x0;
                (**(code **)(lVar10 + 0x10))(plVar20,uVar5,0,0);
            }
            lVar10 = DAT_140c63628;
            *(undefined4 *)(param_3 + 0x79e0) = 1;
        }
    }
    else if ((*(longlong *)(param_3 + 0x71a8) == 0) ||
             ((*(longlong *)(param_3 + 0x7198) != 0 &&
               (*(int *)(*(longlong *)(param_3 + 0x7198) + 0x50) != 0)))) {
        if ((*(longlong *)(DAT_140c63628 + 0x2e0) != 0) && (*(longlong *)(DAT_140c63628 + 0x2e8) != 0))
        {
            plVar20 = *(longlong **)(DAT_140c63628 + 0x2e0);
            lVar10 = *plVar20;
            uVar5 = FUN_1400518a0(DAT_140c63628,0x88,1,0);
            local_508 = 0;
            local_510 = 0;
            local_518 = (longlong **)0x0;
            (**(code **)(lVar10 + 0x10))(plVar20,uVar5,0,0);
        }
        lVar10 = DAT_140c63628;
        *(undefined4 *)(param_3 + 0x79e0) = 0;
    }
    if (*(int *)(param_3 + 0x79e4) == 0) {
        lVar1 = *(longlong *)(param_3 + 0x7198);
        if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 0x78) & 0xfffffffc) == 0)) &&
             (*(uint *)(lVar1 + 0x78) != 1)) && (*(int *)(lVar1 + 0x50) == 0)) {
            if ((*(longlong *)(lVar10 + 0x2e0) != 0) && (*(longlong *)(lVar10 + 0x2e8) != 0)) {
                plVar20 = *(longlong **)(lVar10 + 0x2e0);
                lVar1 = *plVar20;
                uVar5 = FUN_1400518a0(lVar10,0x85,1,0);
                local_508 = 0;
                local_510 = 0;
                local_518 = (longlong **)0x0;
                (**(code **)(lVar1 + 0x10))(plVar20,uVar5,0,0);
                lVar10 = DAT_140c63628;
            }
            *(undefined4 *)(param_3 + 0x79e4) = 1;
        }
    }
    else {
        lVar1 = *(longlong *)(param_3 + 0x7198);
        if (((lVar1 == 0) || ((*(uint *)(lVar1 + 0x78) & 0xfffffffc) != 0)) ||
            ((*(uint *)(lVar1 + 0x78) == 1 || (*(int *)(lVar1 + 0x50) != 0)))) {
            if ((*(longlong *)(lVar10 + 0x2e0) != 0) && (*(longlong *)(lVar10 + 0x2e8) != 0)) {
                plVar20 = *(longlong **)(lVar10 + 0x2e0);
                lVar1 = *plVar20;
                uVar5 = FUN_1400518a0(lVar10,0x86,1,0);
                local_508 = 0;
                local_510 = 0;
                local_518 = (longlong **)0x0;
                (**(code **)(lVar1 + 0x10))(plVar20,uVar5,0,0);
                lVar10 = DAT_140c63628;
            }
            *(undefined4 *)(param_3 + 0x79e4) = 0;
        }
    }
    if (*(longlong **)(param_3 + 0x7248) == (longlong *)0x0) {
        local_4f8 = 0x82;
        uVar11 = (**(code **)(lVar10 + 0x298))(&local_4f8);
        for (puVar2 = *(ulonglong **)
                (*(longlong *)(lVar10 + 0x290) + (uVar11 % *(ulonglong *)(lVar10 + 0x288)) * 8);
             puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
            if ((uVar11 == *puVar2) && (iVar16 = (**(code **)(lVar10 + 0x2a0))(&local_4f8), iVar16 != 0))
            {
                if ((uint *)((longlong)puVar2 + 0x14) != (uint *)0x0) {
                    local_184 = *(undefined4 *)(puVar2 + 3);
                    local_188 = *(uint *)((longlong)puVar2 + 0x14);
                    plVar20 = (longlong *)(ulonglong)local_188;
                    local_180 = *(int *)((longlong)puVar2 + 0x1c);
                    if (local_180 == 2) goto LAB_140614808;
                }
                break;
            }
        }
        plVar20 = plVar19;
        LAB_140614808:
        (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,plVar20);
        iVar16 = 1;
    }
    else {
        (**(code **)(**(longlong **)(param_3 + 0x7248) + 0x68))();
        lVar10 = DAT_140c63628;
        local_4e8[0] = 0x54;
        uVar11 = (**(code **)(DAT_140c63628 + 0x298))
                ((float)(ulonglong)*(uint *)(param_3 + 0x72c8),local_4e8);
        for (puVar2 = *(ulonglong **)
                (*(longlong *)(lVar10 + 0x290) + (uVar11 % *(ulonglong *)(lVar10 + 0x288)) * 8);
             puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
            if ((uVar11 == *puVar2) && (iVar16 = (**(code **)(lVar10 + 0x2a0))(local_4e8), iVar16 != 0)) {
                if ((uint *)((longlong)puVar2 + 0x14) != (uint *)0x0) {
                    local_1a4 = *(undefined4 *)(puVar2 + 3);
                    local_1a8 = *(uint *)((longlong)puVar2 + 0x14);
                    plVar20 = (longlong *)(ulonglong)local_1a8;
                    local_1a0 = *(int *)((longlong)puVar2 + 0x1c);
                    if (local_1a0 == 2) goto LAB_140614280;
                }
                break;
            }
        }
        plVar20 = plVar19;
        LAB_140614280:
        (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,plVar20);
        uVar6 = (**(code **)(**(longlong **)(param_3 + 0x7248) + 0x68))();
        if (uVar6 < 20000) {
            LAB_1406142bd:
            local_4f8 = 0;
        }
        else {
            uVar6 = (**(code **)(**(longlong **)(param_3 + 0x7248) + 0x68))();
            local_4f8 = 1;
            if (0x12750 < uVar6) goto LAB_1406142bd;
        }
        lVar10 = (**(code **)(*DAT_140c65848 + 0x68))();
        local_518 = &local_4e0;
        local_398 = *(undefined4 *)(lVar10 + 0x20);
        uStack916 = *(undefined4 *)(lVar10 + 0x24);
        uStack912 = *(undefined4 *)(lVar10 + 0x28);
        uStack908 = *(undefined4 *)(lVar10 + 0x2c);
        local_388 = 0x43800000;
        iVar16 = (**(code **)(**(longlong **)(param_3 + 0x7248) + 0x178))
                (*(longlong **)(param_3 + 0x7248),&local_398,4);
        if (-1 < iVar16) {
            plVar17 = (longlong *)(**(code **)(*local_4e0 + 0x10))();
            plVar20 = plVar19;
            if (plVar17 != (longlong *)0x0) {
                do {
                    plVar12 = (longlong *)(**(code **)(*local_4e0 + 0x18))(local_4e0,plVar20);
                    iVar8 = (**(code **)(*plVar12 + 0x18))(plVar12);
                    if (iVar8 == 2) {
                        (**(code **)(*DAT_140c65848 + 0x68))();
                        local_518 = (longlong **)CONCAT44(local_518._4_4_,0x700);
                        (**(code **)(*plVar12 + 0x90))(plVar12,&local_3e8);
                        uVar5 = local_204;
                        if (DAT_140c63840 == (code *)0x0) {
                            plVar12 = plVar19;
                            if (_DAT_140c650c0 == 0) {
                                iVar8 = FUN_14024cc60();
                                if (iVar8 < 0) {
                                    plVar12 = (longlong *)0x0;
                                }
                                else {
                                    plVar12 = (longlong *)(**(code **)(*DAT_140c643c0 + 0x18))(DAT_140c643c0,uVar5);
                                }
                            }
                        }
                        else {
                            plVar12 = (longlong *)(*DAT_140c63840)(&PTR_u_WorldWaterType_140a6e340,local_204);
                        }
                        uVar5 = 0;
                        uVar25 = 0x3f800000;
                        uVar26 = 0;
                        uVar28 = 0;
                        iVar8 = *DAT_140c63750;
                        local_2a8 = 0;
                        uStack676 = 0x3f800000;
                        uStack672 = 0;
                        uStack668 = 0;
                        local_308 = 0;
                        uStack772 = 0x3f800000;
                        uStack768 = 0;
                        uStack764 = 0;
                        local_2f8 = local_3e8;
                        uStack756 = uStack996;
                        uStack752 = uStack992;
                        uStack748 = uStack988;
                        iVar16 = DAT_140c4e4e0;
                        if (iVar8 < DAT_140c4e4e0) {
                            iVar16 = iVar8;
                        }
                        if (*(int *)(&DAT_140c4e4f0 + (longlong)iVar16 * 4) == 0) {
                            if (plVar12 == (longlong *)0x0) goto LAB_140614494;
                            iVar8 = *(int *)(plVar12 + 3);
                        }
                        else {
                            iVar16 = DAT_140c4e4e0;
                            if (iVar8 < DAT_140c4e4e0) {
                                iVar16 = iVar8;
                            }
                            iVar8 = *(int *)(&DAT_140c4e4f0 + (longlong)iVar16 * 4);
                        }
                        if (iVar8 != 0) {
                            lVar10 = *(longlong *)(param_3 + 0x7a50);
                            uVar30 = local_3e8;
                            uVar32 = uStack996;
                            uVar34 = uStack992;
                            uVar36 = uStack988;
                            FUN_14062e3e0(param_3 + 0x7a48,lVar10 + 1);
                            *(int *)(*(longlong *)(param_3 + 0x7a48) + lVar10 * 0x30) = iVar8;
                            lVar1 = *(longlong *)(param_3 + 0x7a48);
                            *(undefined (*) [16])(lVar1 + 0x10 + lVar10 * 0x30) =
                                    CONCAT412(uVar28,CONCAT48(uVar26,CONCAT44(uVar25,uVar5)));
                            *(undefined (*) [16])(lVar1 + 0x20 + lVar10 * 0x30) =
                                    CONCAT412(uVar36,CONCAT48(uVar34,CONCAT44(uVar32,uVar30)));
                        }
                    }
                    LAB_140614494:
                    plVar20 = (longlong *)((longlong)plVar20 + 1);
                } while (plVar20 < plVar17);
            }
            iVar8 = local_4f4;
            if (local_4e0 != (longlong *)0x0) {
                (**(code **)(*local_4e0 + 8))();
                local_4e0 = (longlong *)0x0;
                iVar8 = local_4f4;
            }
        }
        lVar10 = (**(code **)(*DAT_140c65848 + 0x68))();
        (**(code **)(**(longlong **)(param_3 + 0x7248) + 0x1c0))
                (*(longlong **)(param_3 + 0x7248),lVar10 + 0x20,&local_498,3);
        lVar10 = DAT_140c63628;
        local_4f4 = 0x82;
        uVar11 = (**(code **)(DAT_140c63628 + 0x298))(fStack1172 * fStack1172,0,&local_4f4);
        for (puVar2 = *(ulonglong **)
                (*(longlong *)(lVar10 + 0x290) + (uVar11 % *(ulonglong *)(lVar10 + 0x288)) * 8);
             puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
            if ((uVar11 == *puVar2) && (iVar16 = (**(code **)(lVar10 + 0x2a0))(&local_4f4), iVar16 != 0))
            {
                if ((uint *)((longlong)puVar2 + 0x14) != (uint *)0x0) {
                    local_1b4 = *(undefined4 *)(puVar2 + 3);
                    local_1b8 = *(uint *)((longlong)puVar2 + 0x14);
                    plVar20 = (longlong *)(ulonglong)local_1b8;
                    local_1b0 = *(int *)((longlong)puVar2 + 0x1c);
                    if (local_1b0 == 2) goto LAB_140614591;
                }
                break;
            }
        }
        plVar20 = plVar19;
        LAB_140614591:
        (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,plVar20);
        iVar4 = DAT_140c4e5e0;
        if (*DAT_140c63750 < DAT_140c4e5e0) {
            iVar4 = *DAT_140c63750;
        }
        iVar16 = local_4f8;
        if ((&DAT_140c4e5f0)[iVar4] != '\0') {
            fVar24 = 0.0;
            fVar23 = 2.0;
            fVar27 = 0.0;
            fVar29 = 0.0;
            local_318 = _DAT_140c77820;
            uStack788 = uRam0000000140c77824;
            uStack784 = uRam0000000140c77828;
            uStack780 = uRam0000000140c7782c;
            local_2b8 = 0;
            uStack692 = 0x40000000;
            uStack688 = 0;
            uStack684 = 0;
            lVar10 = (**(code **)(*DAT_140c65848 + 0x68))();
            local_368 = CONCAT412(fVar29,CONCAT48(fVar27,CONCAT44(fVar23,fVar24)));
            local_498 = *(float *)(lVar10 + 0x20) + local_498;
            fStack1172 = *(float *)(lVar10 + 0x24) + fStack1172;
            fStack1168 = *(float *)(lVar10 + 0x28) + fStack1168;
            fStack1164 = *(float *)(lVar10 + 0x2c) + fStack1164;
            local_2d8 = CONCAT412(fStack1164,CONCAT48(fStack1168,CONCAT44(fStack1172,local_498)));
            local_328 = CONCAT412(fVar29 + fStack1164,
                                  CONCAT48(fVar27 + fStack1168,
                                           CONCAT44(fVar23 + fStack1172,fVar24 + local_498)));
            lVar10 = (**(code **)(*DAT_140c65848 + 0x68))();
            local_348 = CONCAT412(*(float *)(lVar10 + 0x2c) + fVar29,
                                  CONCAT48(*(float *)(lVar10 + 0x28) + fVar27,
                                           CONCAT44(*(float *)(lVar10 + 0x24) + fVar23,
                                                    *(float *)(lVar10 + 0x20) + fVar24)));
            iVar16 = local_4f8;
        }
    }
    uVar18 = (**(code **)(*DAT_140c65848 + 0x68))();
    FUN_14062ddc0(param_3 + 0x7a48,uVar18);
    lVar10 = DAT_140c63628;
    if (*(longlong *)(DAT_140c63628 + 0x128) != 0) {
        FUN_1407e4830(*(undefined8 *)(DAT_140c63628 + 0x120),0,*(longlong *)(DAT_140c63628 + 0x128) * 8)
                ;
    }
    local_4f0 = (uint)(iVar16 == 0);
    if (iVar8 != 0) {
        local_4f0 = local_4f0 | 2;
    }
    uVar6 = *(uint *)(param_3 + 0x79e8);
    uVar11 = (ulonglong)uVar6;
    if ((DAT_140c8cd58 & 2) == 0) {
        DAT_140c8cd58 = DAT_140c8cd58 | 2;
        FUN_1401ad620(&DAT_140c8ce80,L"ZoneKit 1 HousingMusic");
    }
    FUN_1401ada40(&DAT_140c8ce80,uVar11);
    lVar1 = *(longlong *)(lVar10 + 0x128);
    while (lVar1 < 2) {
        lVar3 = *(longlong *)(lVar10 + 0x128);
        lVar1 = lVar3 + 1;
        lVar13 = FUN_14018db00(*(undefined8 *)(lVar10 + 0x120),lVar1,8);
        *(undefined8 *)(lVar13 + lVar3 * 8) = 0;
        if (*(longlong *)(lVar10 + 0x120) != lVar13) {
            FUN_1407db590(lVar13,*(longlong *)(lVar10 + 0x120),*(longlong *)(lVar10 + 0x128) << 3);
            lVar3 = *(longlong *)(lVar10 + 0x120);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            *(longlong *)(lVar10 + 0x120) = lVar13;
        }
        *(longlong *)(lVar10 + 0x128) = lVar1;
    }
    plVar20 = plVar19;
    if ((uVar6 != 0) && (uVar11 < *(ulonglong *)(lVar10 + 0xc0))) {
        plVar20 = *(longlong **)(*(longlong *)(lVar10 + 0xb8) + uVar11 * 8);
    }
    *(longlong **)(*(longlong *)(lVar10 + 0x120) + 8) = plVar20;
    lVar10 = DAT_140c63628;
    uVar6 = *(uint *)(param_3 + 0x79ec);
    uVar11 = (ulonglong)uVar6;
    if ((DAT_140c8cd58 & 4) == 0) {
        DAT_140c8cd58 = DAT_140c8cd58 | 4;
        FUN_1401ad620(&DAT_140c8cfa0,L"ZoneKit 2 ClientEvent");
    }
    FUN_1401ada40(&DAT_140c8cfa0,uVar11);
    lVar1 = *(longlong *)(lVar10 + 0x128);
    while (lVar1 < 3) {
        lVar3 = *(longlong *)(lVar10 + 0x128);
        lVar1 = lVar3 + 1;
        lVar13 = FUN_14018db00(*(undefined8 *)(lVar10 + 0x120),lVar1,8);
        *(undefined8 *)(lVar13 + lVar3 * 8) = 0;
        if (*(longlong *)(lVar10 + 0x120) != lVar13) {
            FUN_1407db590(lVar13,*(longlong *)(lVar10 + 0x120),*(longlong *)(lVar10 + 0x128) << 3);
            lVar3 = *(longlong *)(lVar10 + 0x120);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            *(longlong *)(lVar10 + 0x120) = lVar13;
        }
        *(longlong *)(lVar10 + 0x128) = lVar1;
    }
    plVar20 = plVar19;
    if ((uVar6 != 0) && (uVar11 < *(ulonglong *)(lVar10 + 0xc0))) {
        plVar20 = *(longlong **)(*(longlong *)(lVar10 + 0xb8) + uVar11 * 8);
    }
    *(longlong **)(*(longlong *)(lVar10 + 0x120) + 0x10) = plVar20;
    lVar10 = DAT_140c63628;
    uVar6 = *(uint *)(param_3 + 0x79f0);
    uVar11 = (ulonglong)uVar6;
    if ((DAT_140c8cd58 & 0x10) == 0) {
        DAT_140c8cd58 = DAT_140c8cd58 | 0x10;
        FUN_1401ad620(&DAT_140c8d1e0,L"ZoneKit 4 PlayerPath");
    }
    FUN_1401ada40(&DAT_140c8d1e0,uVar11);
    lVar1 = *(longlong *)(lVar10 + 0x128);
    while (lVar1 < 5) {
        lVar3 = *(longlong *)(lVar10 + 0x128);
        lVar1 = lVar3 + 1;
        lVar13 = FUN_14018db00(*(undefined8 *)(lVar10 + 0x120),lVar1,8);
        *(undefined8 *)(lVar13 + lVar3 * 8) = 0;
        if (*(longlong *)(lVar10 + 0x120) != lVar13) {
            FUN_1407db590(lVar13,*(longlong *)(lVar10 + 0x120),*(longlong *)(lVar10 + 0x128) << 3);
            lVar3 = *(longlong *)(lVar10 + 0x120);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            *(longlong *)(lVar10 + 0x120) = lVar13;
        }
        *(longlong *)(lVar10 + 0x128) = lVar1;
    }
    plVar20 = plVar19;
    if ((uVar6 != 0) && (uVar11 < *(ulonglong *)(lVar10 + 0xc0))) {
        plVar20 = *(longlong **)(*(longlong *)(lVar10 + 0xb8) + uVar11 * 8);
    }
    *(longlong **)(*(longlong *)(lVar10 + 0x120) + 0x20) = plVar20;
    lVar10 = DAT_140c63628;
    *(uint *)(DAT_140c63628 + 0x240) = local_4f0;
    if (*(longlong *)(param_3 + 0x6490) == 0) {
        if (*(float *)(param_3 + 0x79b8) != -3.402823e+38) {
            FUN_140615630(param_3);
            lVar10 = DAT_140c63628;
        }
        uVar5 = FUN_1400518a0(lVar10,0x59,2);
        (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,uVar5);
        uVar5 = FUN_1400518a0(DAT_140c63628,0x7b,2);
        (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,uVar5);
        uVar5 = FUN_140051cc0(DAT_140c63628,0,0x6c);
        FUN_1400bc8b0(uVar5,uVar7,DAT_140c63628 + 0x10);
        goto LAB_140615454;
    }
    iVar8 = *(int *)(param_3 + 0x74ec);
    if ((iVar8 == 0) && (*(int *)(param_3 + 0x74f4) != 0)) {
        iVar8 = *(int *)(*(longlong *)(param_3 + 0x6490) + 0x17e8);
    }
    if ((DAT_140dc3ae0 & 1) == 0) {
        DAT_140dc3ae0 = DAT_140dc3ae0 | 1;
        FUN_1401ad620(&DAT_140dc3af0);
    }
    FUN_1401ada40(&DAT_140dc3af0);
    lVar1 = DAT_140c63628;
    lVar10 = *(longlong *)(param_3 + 0x6490);
    local_418 = *(undefined4 *)(lVar10 + 0x11e0);
    fStack1044 = *(float *)(lVar10 + 0x11e4);
    uStack1040 = *(undefined4 *)(lVar10 + 0x11e8);
    uStack1036 = *(undefined4 *)(lVar10 + 0x11ec);
    local_4f0 = 0x81;
    uVar11 = (**(code **)(DAT_140c63628 + 0x298))
            (*(float *)(lVar10 + 0x1124) * *(float *)(lVar10 + 0x1124),0,&local_4f0);
    for (puVar2 = *(ulonglong **)
            (*(longlong *)(lVar1 + 0x290) + (uVar11 % *(ulonglong *)(lVar1 + 0x288)) * 8);
         puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
        if ((uVar11 == *puVar2) && (iVar16 = (**(code **)(lVar1 + 0x2a0))(&local_4f0), iVar16 != 0)) {
            if ((undefined4 *)((longlong)puVar2 + 0x14) != (undefined4 *)0x0) {
                local_194 = *(undefined4 *)(puVar2 + 3);
                local_198 = *(undefined4 *)((longlong)puVar2 + 0x14);
                local_190 = *(undefined4 *)((longlong)puVar2 + 0x1c);
            }
            break;
        }
    }
    uVar5 = (**(code **)(*DAT_140c65848 + 0x38))();
    fVar24 = *(float *)(*(longlong *)(param_3 + 0x6490) + 0x17d0) - fStack1044;
    if ((DAT_140dc3ae0 & 2) == 0) {
        DAT_140dc3ae0 = DAT_140dc3ae0 | 2;
        DVar9 = GetCurrentThreadId();
        plVar20 = plVar19;
        uVar5 = extraout_XMM0_Da;
        if (DAT_140c77840 == DVar9) {
            DAT_140c77848 = DAT_140c77848 + 1;
            DVar9 = DAT_140c77840;
        }
        else {
            do {
                LOCK();
                bVar21 = DAT_140c77848 == 0;
                DAT_140c77848 = DAT_140c77848 ^ (ulonglong)bVar21 * (DAT_140c77848 ^ 1);
                if (bVar21) goto LAB_140614bd5;
                plVar20 = (longlong *)((longlong)plVar20 + 1);
            } while (plVar20 < &DAT_00000400);
            uVar5 = FUN_14019fb60(&DAT_140c77840);
            DVar9 = DAT_140c77840;
        }
        LAB_140614bd5:
        DAT_140c77840 = DVar9;
        _DAT_140dc3d20 = DAT_140c63768;
        psVar14 = &DAT_140dc3ca0;
        DAT_140c63768 = &DAT_140dc3c10;
        _DAT_140dc3c9c = 0x61;
        _DAT_140dc3c94 = 0;
        lVar10 = 0x40;
        do {
            if ((lVar10 == -0x7fffffbe) || (psVar14[-0x14e584] == 0)) {
                if (lVar10 != 0) goto LAB_140614c3e;
                break;
            }
            *psVar14 = psVar14[-0x14e584];
            psVar14 = psVar14 + 1;
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        psVar14 = psVar14 + -1;
        LAB_140614c3e:
        uVar11 = DAT_140c77848;
        *psVar14 = 0;
        _DAT_140dc3c90 = 1;
        if (uVar11 < 2) {
            DAT_140c77840 = 0;
            DAT_140c77848 = 0;
            if (DAT_140c77850 != 0) {
                if (DAT_140c77858 == (HANDLE)0x0) {
                    hObject = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
                    LOCK();
                    bVar21 = DAT_140c77858 == (HANDLE)0x0;
                    DAT_140c77858 =
                            (HANDLE)((ulonglong)DAT_140c77858 ^
                                     (ulonglong)bVar21 * ((ulonglong)DAT_140c77858 ^ (ulonglong)hObject));
                    if (!bVar21) {
                        CloseHandle(hObject);
                    }
                }
                SetEvent(DAT_140c77858);
                uVar5 = extraout_XMM0_Da_00;
            }
        }
        else {
            DAT_140c77848 = DAT_140c77848 - 1;
        }
    }
    FUN_1401ad8f0(uVar5,fVar24,&DAT_140dc3c10);
    lVar10 = DAT_140c63628;
    local_4ec = 0x59;
    uVar11 = (**(code **)(DAT_140c63628 + 0x298))(&local_4ec);
    for (puVar2 = *(ulonglong **)
            (*(longlong *)(lVar10 + 0x290) + (uVar11 % *(ulonglong *)(lVar10 + 0x288)) * 8);
         puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
        if ((uVar11 == *puVar2) && (iVar16 = (**(code **)(lVar10 + 0x2a0))(&local_4ec), iVar16 != 0)) {
            if (puVar2 != (ulonglong *)0xffffffffffffffec) {
                local_174 = *(undefined4 *)(puVar2 + 3);
            }
            break;
        }
    }
    (**(code **)(*DAT_140c65848 + 0x38))();
    plVar17 = (longlong *)0x0;
    plVar20 = plVar17;
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c64634 == 0) && (iVar8 = FUN_14024d920(), -1 < iVar8)) {
            lVar10 = (**(code **)(*DAT_140c64270 + 0x18))();
            goto LAB_140614da0;
        }
    }
    else {
        lVar10 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,iVar8,DAT_140c63858);
        LAB_140614da0:
        plVar20 = plVar19;
        if (lVar10 != 0) {
            while (*(int *)(lVar10 + 0x14) == 0) {
                if (DAT_140c63840 == (code *)0x0) {
                    plVar20 = plVar17;
                    if ((_DAT_140c64634 != 0) || (iVar8 = FUN_14024d920(), iVar8 < 0)) goto LAB_140614e3c;
                    lVar10 = (**(code **)(*DAT_140c64270 + 0x18))();
                }
                else {
                    lVar10 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,*(undefined4 *)(lVar10 + 8),
                                              DAT_140c63858);
                }
                plVar20 = plVar17;
                if (lVar10 == 0) goto LAB_140614e3c;
            }
            uVar6 = *(uint *)(lVar10 + 0x14);
            if ((DAT_140dc3ae0 & 4) == 0) {
                DAT_140dc3ae0 = DAT_140dc3ae0 | 4;
                FUN_1401ad620(&DAT_140dc3d30);
            }
            FUN_1401ada40();
            plVar20 = (longlong *)(ulonglong)uVar6;
        }
    }
    LAB_140614e3c:
    lVar10 = DAT_140c63628;
    if (*(int *)(DAT_140c63628 + 0x130) != (int)plVar20) {
        iVar8 = DAT_140c3bf70;
        if (*DAT_140c63750 < DAT_140c3bf70) {
            iVar8 = *DAT_140c63750;
        }
        FUN_14001a770(&PTR_PTR_LAB_140c3bf60,iVar8,0);
        *(int *)(lVar10 + 0x130) = (int)plVar20;
    }
    iVar8 = *DAT_140c63750;
    iVar16 = DAT_140c3bf70;
    if (iVar8 < DAT_140c3bf70) {
        iVar16 = iVar8;
    }
    if (*(int *)(&DAT_140c3bf80 + (longlong)iVar16 * 4) != 0) {
        iVar16 = DAT_140c3bf70;
        if (iVar8 < DAT_140c3bf70) {
            iVar16 = iVar8;
        }
        plVar20 = (longlong *)(ulonglong)*(uint *)(&DAT_140c3bf80 + (longlong)iVar16 * 4);
    }
    if ((DAT_140c8cd58 & 1) == 0) {
        DAT_140c8cd58 = DAT_140c8cd58 | 1;
        FUN_1401ad620(&DAT_140c8cd60,L"ZoneKit 0 World");
    }
    FUN_1401ada40(&DAT_140c8cd60,plVar20);
    lVar1 = *(longlong *)(lVar10 + 0x128);
    while (lVar1 < 1) {
        lVar3 = *(longlong *)(lVar10 + 0x128);
        lVar1 = lVar3 + 1;
        lVar13 = FUN_14018db00(*(undefined8 *)(lVar10 + 0x120),lVar1,8);
        *(undefined8 *)(lVar13 + lVar3 * 8) = 0;
        if (*(longlong *)(lVar10 + 0x120) != lVar13) {
            FUN_1407db590(lVar13,*(longlong *)(lVar10 + 0x120),*(longlong *)(lVar10 + 0x128) << 3);
            if (*(longlong *)(lVar10 + 0x120) != 0) {
                (**(code **)(*(longlong *)(*(longlong *)(lVar10 + 0x120) + -0x10) + 8))();
            }
            *(longlong *)(lVar10 + 0x120) = lVar13;
        }
        *(longlong *)(lVar10 + 0x128) = lVar1;
    }
    plVar17 = plVar19;
    if (((int)plVar20 != 0) && (plVar20 < *(longlong **)(lVar10 + 0xc0))) {
        plVar17 = *(longlong **)(*(longlong *)(lVar10 + 0xb8) + (longlong)plVar20 * 8);
    }
    **(longlong ***)(lVar10 + 0x120) = plVar17;
    lVar10 = DAT_140c63628;
    plVar20 = plVar19;
    if (*(longlong *)(param_3 + 0x7a18) != 0) {
        plVar20 = (longlong *)(ulonglong)*(uint *)(*(longlong *)(param_3 + 0x7a18) + 0x20);
    }
    if ((DAT_140c8cd58 & 0x40) == 0) {
        DAT_140c8cd58 = DAT_140c8cd58 | 0x40;
        FUN_1401ad620(&DAT_140c8d420,L"ZoneKit 6 Visuals");
    }
    FUN_1401ada40(&DAT_140c8d420,plVar20);
    lVar1 = *(longlong *)(lVar10 + 0x128);
    while (lVar1 < 7) {
        lVar3 = *(longlong *)(lVar10 + 0x128);
        lVar1 = lVar3 + 1;
        lVar13 = FUN_14018db00(*(undefined8 *)(lVar10 + 0x120),lVar1,8);
        *(undefined8 *)(lVar13 + lVar3 * 8) = 0;
        if (*(longlong *)(lVar10 + 0x120) != lVar13) {
            FUN_1407db590(lVar13,*(longlong *)(lVar10 + 0x120),*(longlong *)(lVar10 + 0x128) << 3);
            if (*(longlong *)(lVar10 + 0x120) != 0) {
                (**(code **)(*(longlong *)(*(longlong *)(lVar10 + 0x120) + -0x10) + 8))();
            }
            *(longlong *)(lVar10 + 0x120) = lVar13;
        }
        *(longlong *)(lVar10 + 0x128) = lVar1;
    }
    plVar17 = plVar19;
    if (((int)plVar20 != 0) && (plVar20 < *(longlong **)(lVar10 + 0xc0))) {
        plVar17 = *(longlong **)(*(longlong *)(lVar10 + 0xb8) + (longlong)plVar20 * 8);
    }
    local_4d0 = (ulonglong)local_4d0._4_4_ << 0x20;
    *(longlong **)(*(longlong *)(lVar10 + 0x120) + 0x30) = plVar17;
    lVar10 = *(longlong *)(param_3 + 0x7a28);
    if (lVar10 != 0) {
        plVar20 = *(longlong **)(param_3 + 0x7a30);
        plVar17 = plVar19;
        do {
            lVar1 = *plVar20;
            while (lVar3 = lVar1, lVar3 != 0) {
                lVar1 = *(longlong *)(lVar3 + 8);
                if ((uint)plVar17 <= *(uint *)(lVar3 + 0x18) && *(uint *)(lVar3 + 0x18) != (uint)plVar17) {
                    local_4d0 = *(ulonglong *)(lVar3 + 0x14);
                    plVar17 = (longlong *)(local_4d0 >> 0x20);
                }
            }
            plVar20 = plVar20 + 1;
            lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if ((int)local_4d0 != 0) {
            FUN_1400bc580(DAT_140c63628 + 0x10,3);
        }
    }
    if ((*(longlong *)(param_3 + 0x6490) != *(longlong *)(param_3 + 0x6488)) &&
        (*(longlong **)(param_3 + 0x79b0) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(param_3 + 0x79b0) + 8))();
        *(undefined8 *)(param_3 + 0x79b0) = 0;
    }
    if ((((*(longlong *)(param_3 + 0x79a8) != 0) && (*(longlong *)(param_3 + 0x79b0) == 0)) &&
         (*(int *)(*(longlong *)(param_3 + 0x6490) + 0xd8) != 0)) &&
        (lVar10 = FUN_14022d500(), lVar10 != 0)) {
        plVar20 = *(longlong **)(param_3 + 0x79a8);
        if (*(int *)(*(longlong *)(param_3 + 0x6490) + 0x34) == 1) {
            (**(code **)(*plVar20 + 0x20))
                    (plVar20,param_3 + 0x79b0,*(undefined4 *)(lVar10 + 0x50),
                     *(undefined4 *)(lVar10 + 0x58));
        }
        else {
            (**(code **)(*plVar20 + 0x20))
                    (plVar20,param_3 + 0x79b0,*(undefined4 *)(lVar10 + 0x4c),
                     *(undefined4 *)(lVar10 + 0x54));
        }
    }
    plVar20 = *(longlong **)(param_3 + 0x78);
    if ((plVar20 == (longlong *)0x0) || (*(int *)(plVar20 + 0x4a) != 0)) {
        if (*(longlong **)(param_3 + 0x79b0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_3 + 0x79b0) + 0x48))();
        }
        if (*(int *)(param_3 + 0x79d4) != 1) {
            FUN_140051af0(2);
        }
        lVar10 = DAT_140c63628;
        *(undefined4 *)(param_3 + 0x79d4) = 1;
        uVar5 = FUN_1400518a0(lVar10,0x47,2,0);
        (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,uVar5);
        lVar10 = DAT_140c63628;
        uVar5 = FUN_1400518a0(DAT_140c63628,0x61,6);
    }
    else {
        fVar23 = 100.0;
        iVar8 = (**(code **)(*plVar20 + 0x48))();
        fVar24 = extraout_XMM0_Da_01;
        if (iVar8 != 0) {
            uVar6 = (**(code **)(**(longlong **)(param_3 + 0x78) + 0x48))();
            uVar6 = (**(code **)(**(longlong **)(param_3 + 0x78) + 0x40))((float)(ulonglong)uVar6);
            fVar24 = (float)(ulonglong)uVar6 * fVar23;
        }
        uVar5 = FUN_1400518a0(fVar24,DAT_140c63628,0x47,2);
        (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,uVar5);
        if (*(longlong **)(param_3 + 0x79b0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_3 + 0x79b0) + 0x40))();
        }
        if (*(int *)(param_3 + 0x79d4) != 0) {
            FUN_140051af0(2);
        }
        lVar10 = DAT_140c63628;
        *(undefined4 *)(param_3 + 0x79d4) = 0;
        uVar5 = 0;
    }
    FUN_1400bc580(lVar10 + 0x10,5,uVar5);
    if (*(float *)(param_3 + 0x79b8) == -3.402823e+38) {
        lVar10 = *(longlong *)(param_3 + 0x6490);
        uVar5 = *(undefined4 *)(lVar10 + 0x11e4);
        uVar7 = *(undefined4 *)(lVar10 + 0x11e8);
        uVar25 = *(undefined4 *)(lVar10 + 0x11ec);
        *(undefined4 *)(param_3 + 0x79c0) = *(undefined4 *)(lVar10 + 0x11e0);
        *(undefined4 *)(param_3 + 0x79c4) = uVar5;
        *(undefined4 *)(param_3 + 0x79c8) = uVar7;
        *(undefined4 *)(param_3 + 0x79cc) = uVar25;
    }
    param_2 = *(float *)(param_3 + 0x79b8) - param_2;
    *(float *)(param_3 + 0x79b8) = param_2;
    if (param_2 <= fVar22) {
        lVar10 = *(longlong *)(param_3 + 0x6490);
        *(undefined4 *)(param_3 + 0x79b8) = 0x3dcccccd;
        fVar22 = *(float *)(param_3 + 0x79c0);
        param_2 = *(float *)(param_3 + 0x79c4);
        fVar24 = *(float *)(lVar10 + 0x11e0);
        fVar23 = *(float *)(lVar10 + 0x11e4);
        uVar5 = *(undefined4 *)(lVar10 + 0x11e8);
        uVar7 = *(undefined4 *)(lVar10 + 0x11ec);
        *(float *)(param_3 + 0x79c0) = fVar24;
        *(float *)(param_3 + 0x79c4) = fVar23;
        *(undefined4 *)(param_3 + 0x79c8) = uVar5;
        *(undefined4 *)(param_3 + 0x79cc) = uVar7;
        fVar22 = fVar22 - fVar24;
        param_2 = param_2 - fVar23;
        param_2 = param_2 * param_2;
        fVar22 = SQRT(fVar22 * fVar22 + param_2 + 0.0) * 0.1;
    }
    FUN_1400bc8b0(param_2,fVar22,DAT_140c63628 + 0x10);
    if ((*(longlong *)(param_3 + 0x78) == 0) || (*(int *)(*(longlong *)(param_3 + 0x78) + 0x2ac) == 0)
            ) {
        FUN_140051cc0(DAT_140c63628,0,0x6c);
    }
    else {
        FUN_140051cc0(DAT_140c63628,0,0x6b);
    }
    LAB_140615454:
    uVar5 = FUN_1400518a0(DAT_140c63628,0x7b,2);
    (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,uVar5);
    plVar20 = plVar19;
    if (*(longlong *)(param_3 + 0x6490) != 0) {
        plVar20 = (longlong *)(ulonglong)*(uint *)(*(longlong *)(param_3 + 0x6490) + 8);
    }
    if (*(longlong *)(param_3 + 0x78) != 0) {
        plVar19 = (longlong *)(ulonglong)*(uint *)(*(longlong *)(param_3 + 0x78) + 8);
    }
    FUN_14062d5c0(param_3 + 0x7968,plVar19,plVar20);
    plVar19 = *(longlong **)(param_3 + 0x7188);
    uVar5 = FUN_1400518a0(DAT_140c63628,0x73,2);
    if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x38))(plVar19);
    }
    (**(code **)(*DAT_140c65848 + 0x38))(DAT_140c65848,uVar5);
    switch(*(undefined4 *)(param_3 + 0x7a10)) {
        case 1:
        case 2:
            uVar18 = 0x99;
            break;
        case 3:
        case 4:
            uVar18 = 0x9a;
            break;
        case 5:
        case 6:
            uVar18 = 0x9b;
            break;
        case 7:
        case 8:
            uVar18 = 0x9c;
            break;
        case 9:
            uVar18 = 0x9d;
            break;
        default:
            uVar18 = 0x98;
    }
    FUN_140051cc0(DAT_140c63628,4,uVar18);
    if ((*(longlong *)(param_3 + 0x6490) == 0) ||
        (*(int *)(*(longlong *)(param_3 + 0x6490) + 0x2ac) == 0)) {
        *(undefined4 *)(param_3 + 0x7a10) = 10;
    }
    FUN_1407db4f0(local_88 ^ (ulonglong)auStack1336);
    return;
}



void FUN_140615630(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined4 uVar1;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined8 extraout_XMM0_Qa_01;
    undefined8 extraout_XMM0_Qa_02;

    *(undefined4 *)(param_3 + 0x79b8) = 0xff7fffff;
    uVar1 = FUN_1400518a0(DAT_140c63628,0x47,2);
    (**(code **)(*DAT_140c65848 + 0x38))(extraout_XMM0_Qa,param_2,0x42c80000,DAT_140c65848,uVar1);
    uVar1 = FUN_1400518a0(DAT_140c63628,0x26,2);
    (**(code **)(*DAT_140c65848 + 0x38))(extraout_XMM0_Qa_00,param_2,0,DAT_140c65848,uVar1);
    uVar1 = FUN_1400518a0(DAT_140c63628,0x59,2);
    (**(code **)(*DAT_140c65848 + 0x38))(extraout_XMM0_Qa_01,param_2,0,DAT_140c65848,uVar1);
    uVar1 = FUN_1400518a0(DAT_140c63628,0x73,2);
    // WARNING: Could not recover jumptable at 0x0001406156eb. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*DAT_140c65848 + 0x38))(extraout_XMM0_Qa_02,param_2,0,DAT_140c65848,uVar1);
    return;
}



void FUN_140615ab0(longlong param_1,longlong param_2)

{
    float fVar1;
    longlong *plVar2;
    int iVar3;
    undefined auStack296 [32];
    undefined8 local_108;
    undefined local_f8 [144];
    float local_68;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack296;
    plVar2 = *(longlong **)(DAT_140c65898 + 0x7248);
    if (plVar2 != (longlong *)0x0) {
        local_108 = 0;
        iVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,param_1 + 0x10,local_f8,0x40000040);
        if (iVar3 != 0) {
            fVar1 = *(float *)(param_2 + 0x18);
            local_68 = *(float *)(param_1 + 0x14) - local_68;
            if (fVar1 != 3.402823e+38) {
                if (local_68 < 0.0) {
                    LAB_140615b3b:
                    if (fVar1 < 0.0) goto LAB_140615b47;
                }
                else if (0.0 <= fVar1) {
                    if (0.0 <= local_68) goto LAB_140615b47;
                    goto LAB_140615b3b;
                }
                *(undefined4 *)(param_2 + 0x1c) = 1;
            }
            LAB_140615b47:
            *(float *)(param_2 + 0x18) = local_68;
            goto LAB_140615b55;
        }
    }
    *(undefined4 *)(param_2 + 0x18) = 0;
    LAB_140615b55:
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack296);
    return;
}



undefined8 FUN_140615b80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    ulonglong *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 in_XMM6_Da;
    float fVar4;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar5 [16];

    LOCK();
    puVar1 = (ulonglong *)(param_1 + 0x18);
    uVar3 = *puVar1;
    *puVar1 = *puVar1 + 1;
    if (uVar3 < *(ulonglong *)(param_1 + 0x10)) {
        auVar5 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        fVar4 = 3.402823e+38;
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + uVar3 * 8);
            *(undefined8 *)(lVar2 + 0x18) = 0x7f7fffff;
            (**(code **)(**(longlong **)(lVar2 + 0x10) + 0xe0))
                    (*(longlong **)(lVar2 + 0x10),FUN_140615ab0,lVar2,param_4,auVar5);
            (**(code **)(**(longlong **)(lVar2 + 0x10) + 0xd8))();
            if (fVar4 == *(float *)(lVar2 + 0x18)) {
                *(undefined4 *)(lVar2 + 0x18) = 0;
            }
            LOCK();
            puVar1 = (ulonglong *)(param_1 + 0x18);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 0x10));
    }
    return 0;
}



undefined8 FUN_140615c30(longlong *param_1,float *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;
    longlong **pplVar5;
    longlong lVar6;
    longlong *plVar7;
    uint uVar8;
    uint uVar9;
    float fVar10;

    plVar7 = (longlong *)0x0;
    uVar9 = 0;
    plVar3 = (longlong *)(**(code **)(*param_1 + 0xc0))();
    if (plVar3 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_14018b280(0x28,0);
        uVar9 = 1;
        plVar3 = plVar7;
        if (plVar4 != (longlong *)0x0) {
            *plVar4 = (longlong)&PTR_LAB_140b6fa98;
            *(undefined4 *)(plVar4 + 1) = 1;
            plVar3 = plVar4;
        }
        plVar3[2] = (longlong)param_1;
        *(undefined4 *)(plVar3 + 3) = 0;
        (**(code **)(*param_1 + 200))(param_1,plVar3);
        (**(code **)(*plVar3 + 8))(plVar3);
        pplVar5 = (longlong **)(DAT_140c63628 + 0x2d0);
        do {
            uVar8 = uVar9;
            if (*pplVar5 == param_1) goto LAB_140615ceb;
            plVar7 = (longlong *)((longlong)plVar7 + 1);
            pplVar5 = pplVar5 + 1;
        } while (plVar7 < (longlong *)0x3);
        if (*(longlong **)(DAT_140c63628 + 0x18) != param_1) {
            uVar8 = (uint)(*(longlong **)(DAT_140c63628 + 0x60) == param_1);
        }
        LAB_140615ceb:
        *(uint *)(plVar3 + 4) = uVar8;
    }
    if ((*(int *)(plVar3 + 4) == 0) &&
        ((fVar10 = (float)(**(code **)(*param_1 + 0xd0))(param_1),
                *param_2 <= fVar10 && fVar10 != *param_2 || (uVar9 != 0)))) {
        lVar2 = *(longlong *)(param_2 + 4);
        lVar1 = lVar2 + 1;
        lVar6 = FUN_14018db00(*(undefined8 *)(param_2 + 2),lVar1,8);
        *(longlong **)(lVar6 + lVar2 * 8) = plVar3;
        if (*(longlong *)(param_2 + 2) != lVar6) {
            FUN_1407db590(lVar6,*(longlong *)(param_2 + 2),*(longlong *)(param_2 + 4) << 3);
            lVar2 = *(longlong *)(param_2 + 2);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *(longlong *)(param_2 + 2) = lVar6;
        }
        *(longlong *)(param_2 + 4) = lVar1;
    }
    return 0;
}



void FUN_140615dd0(undefined8 param_1,ulonglong param_2,int param_3)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    undefined8 uVar5;

    if (param_3 == 0) {
        lVar2 = FUN_1400b5df0(DAT_140c658f0,param_2,0);
        if (lVar2 == 0) {
            uVar4 = 0;
        }
        else {
            if (*(int *)(lVar2 + 0x1b0) != 0) {
                uVar5 = 0x32;
                goto LAB_140615eed;
            }
            if ((*(byte *)(lVar2 + 0x14c) & 4) != 0) {
                uVar5 = 0x33;
                goto LAB_140615eed;
            }
            uVar4 = *(undefined4 *)(lVar2 + 0x144);
        }
        lVar2 = FUN_14020a3a0(uVar4);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc) != 0)) {
            return;
        }
    }
    else {
        if (param_3 == 2) {
            LAB_140615e13:
            uVar5 = 0x2f;
            goto LAB_140615eed;
        }
        if (param_3 == 6) {
            lVar2 = FUN_140248ac0(param_2 & 0xffffffff);
            if (((lVar2 != 0) && (lVar2 = FUN_14020a3a0(*(undefined4 *)(lVar2 + 0x10)), lVar2 != 0)) &&
                (*(int *)(lVar2 + 0xc) != 0)) {
                return;
            }
        }
        else if (param_3 == 8) {
            lVar2 = FUN_1401e8c20(param_2 & 0xffffffff);
            if (lVar2 != 0) {
                lVar3 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar2 + 8),0);
                if (lVar3 == 0) {
                    uVar4 = 0;
                }
                else {
                    uVar4 = *(undefined4 *)(lVar3 + 0x144);
                }
                lVar3 = FUN_14020a3a0(uVar4);
                if ((lVar3 != 0) && (*(int *)(lVar3 + 0xc) != 0)) {
                    return;
                }
                if (*(int *)(lVar2 + 0x1c) != 0) {
                    uVar5 = 0x2f;
                    goto LAB_140615eed;
                }
            }
        }
        else if (param_3 == 9) {
            iVar1 = (**(code **)(*DAT_140c658f0 + 0x18))();
            if (iVar1 != 0) {
                return;
            }
            goto LAB_140615e13;
        }
    }
    uVar5 = 0x36;
    LAB_140615eed:
    FUN_1400518a0(DAT_140c63628,uVar5,1);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140615f20(longlong param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    undefined4 uVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong lVar11;
    uint uVar12;
    uint *puVar13;
    longlong local_res18;
    longlong local_res20;
    undefined8 local_58;

    FUN_140008410(param_1 + 8);
    if (param_2 == (uint *)0x0) {
        return 0x80004005;
    }
    uVar12 = 0;
    if (*param_2 != 0) {
        do {
            lVar7 = *(longlong *)(param_1 + 0x10);
            puVar13 = (uint *)((ulonglong)uVar12 * 0x10 + *(longlong *)(param_2 + 2));
            lVar11 = lVar7;
            if (*(longlong *)(lVar7 + 8) != 0) {
                lVar8 = *(longlong *)(lVar7 + 8);
                do {
                    if (*(uint *)(lVar8 + 0x20) < *puVar13) {
                        lVar9 = *(longlong *)(lVar8 + 0x18);
                    }
                    else {
                        lVar9 = *(longlong *)(lVar8 + 0x10);
                        lVar11 = lVar8;
                    }
                    lVar8 = lVar9;
                } while (lVar9 != 0);
            }
            if ((lVar11 == lVar7) || (*puVar13 < *(uint *)(lVar11 + 0x20))) {
                local_res20 = lVar7;
                plVar10 = &local_res20;
            }
            else {
                local_res18 = lVar11;
                plVar10 = &local_res18;
            }
            if (*plVar10 == *(longlong *)(param_1 + 0x10)) {
                uVar1 = *puVar13;
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c63aa8 != 0) || (iVar6 = FUN_1401f1600(), iVar6 < 0)) goto LAB_140616099;
                    lVar7 = (**(code **)(*DAT_140c653d0 + 0x18))(DAT_140c653d0,uVar1);
                }
                else {
                    lVar7 = (*DAT_140c63840)(&PTR_u_CharacterTitle_140a69800,uVar1);
                }
                uVar5 = DAT_140c636a8;
                if (lVar7 != 0) {
                    uVar1 = *puVar13;
                    uVar2 = puVar13[3];
                    uVar3 = puVar13[1];
                    uVar4 = puVar13[2];
                    lVar7 = FUN_1403d61d0(param_1 + 8,puVar13);
                    *(undefined4 *)(lVar7 + 0xc) = uVar5;
                    *(uint *)(lVar7 + 8) = uVar1;
                    *(uint *)(lVar7 + 0x10) = uVar2;
                    *(uint *)(lVar7 + 0x14) = uVar3;
                    *(uint *)(lVar7 + 0x18) = uVar4;
                    *(undefined8 *)(lVar7 + 0x20) = local_58;
                }
            }
            LAB_140616099:
            uVar12 = uVar12 + 1;
        } while (uVar12 < *param_2);
    }
    return 0;
}



longlong * FUN_1406160d0(longlong *param_1)

{
    FUN_140019490(param_1 + 1);
    if (*param_1 != 0) {
        FUN_140716a40();
    }
    *param_1 = 0;
    FUN_140019490(param_1 + 1);
    FUN_14018b900(param_1[3],0);
    param_1[3] = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



undefined8 FUN_140616130(uint param_1)

{
    undefined8 uVar1;
    char *pcVar2;

    if (param_1 < 0xb) {
        pcVar2 = IMAGE_DOS_HEADER_140000000.e_magic +
                 (&switchD_14061614d::switchdataD_1406161c0)[(int)param_1];
        switch(param_1) {
            case 0:
                uVar1 = FUN_14034bdd0(pcVar2,0x3039);
                return uVar1;
            case 1:
                uVar1 = FUN_14034bdd0(pcVar2,0x303a);
                return uVar1;
            case 2:
                uVar1 = FUN_14034bdd0(pcVar2,0x303b);
                return uVar1;
            case 3:
                uVar1 = FUN_14034bdd0(pcVar2,0x303c);
                return uVar1;
            case 4:
                uVar1 = FUN_14034bdd0(pcVar2,0x303d);
                return uVar1;
            case 5:
                uVar1 = FUN_14034bdd0(pcVar2,0x303e);
                return uVar1;
            case 6:
                uVar1 = FUN_14034bdd0(pcVar2,0x303f);
                return uVar1;
            case 7:
                uVar1 = FUN_14034bdd0(pcVar2,0x3040);
                return uVar1;
            case 8:
                uVar1 = FUN_14034bdd0(pcVar2,0x3041);
                return uVar1;
            case 9:
                uVar1 = FUN_14034bdd0(pcVar2,0x3042);
                return uVar1;
            case 10:
                uVar1 = FUN_14034bdd0(pcVar2,0x3043);
                return uVar1;
        }
    }
    return 0;
}



undefined4 * FUN_1406161f0(undefined4 *param_1,uint *param_2)

{
    longlong lVar1;
    undefined *puVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;

    puVar2 = (undefined *)FUN_14018b280(0x28);
    *(undefined **)(param_1 + 0xc) = puVar2;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0xc) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0xc) + 0x10) = *(longlong *)(param_1 + 0xc);
    *(longlong *)(*(longlong *)(param_1 + 0xc) + 0x18) = *(longlong *)(param_1 + 0xc);
    puVar2 = (undefined *)FUN_14018b280(0x28);
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined **)(param_1 + 0x14) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x14) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x14) + 0x10) = *(longlong *)(param_1 + 0x14);
    *(longlong *)(*(longlong *)(param_1 + 0x14) + 0x18) = *(longlong *)(param_1 + 0x14);
    puVar2 = (undefined *)FUN_14018b280(0x30);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined **)(param_1 + 0x1e) = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x1e) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x1e) + 0x10) = *(longlong *)(param_1 + 0x1e);
    *(longlong *)(*(longlong *)(param_1 + 0x1e) + 0x18) = *(longlong *)(param_1 + 0x1e);
    lVar5 = DAT_140c65968;
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    *(uint **)(param_1 + 0x26) = param_2;
    param_1[0x24] = 0;
    lVar5 = *(longlong *)(lVar5 + 0x110);
    lVar1 = *(longlong *)(lVar5 + 8);
    lVar3 = lVar1;
    lVar6 = lVar5;
    if (lVar1 != 0) {
        do {
            if (*(int *)(lVar3 + 0x20) == 0) {
                bVar7 = *param_2 < *(uint *)(lVar3 + 0x24);
            }
            else {
                bVar7 = 0 < *(int *)(lVar3 + 0x20);
            }
            if (bVar7) {
                lVar4 = *(longlong *)(lVar3 + 0x10);
                lVar6 = lVar3;
            }
            else {
                lVar4 = *(longlong *)(lVar3 + 0x18);
            }
            lVar3 = lVar4;
        } while (lVar4 != 0);
        while (lVar1 != 0) {
            bVar7 = *(int *)(lVar1 + 0x20) < 0;
            if (*(int *)(lVar1 + 0x20) == 0) {
                bVar7 = *(uint *)(lVar1 + 0x24) < *param_2;
            }
            if (bVar7) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                lVar5 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
    }
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[8] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[0x1a] = 0;
    param_1[0x28] = (uint)(lVar5 != lVar6);
    FUN_140008410(param_1 + 10);
    FUN_140008410(param_1 + 0x12);
    *(undefined8 *)(param_1 + 1) = 0;
    param_1[3] = 0;
    return param_1;
}



undefined8 FUN_1406163a0(int *param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    int iVar6;
    undefined2 *puVar7;
    undefined4 local_res8;
    undefined4 local_resc;
    undefined local_28 [16];

    iVar6 = 0;
    param_1[6] = *(int *)(param_2 + 0x10);
    param_1[7] = *(int *)(param_2 + 0x24);
    param_1[8] = *(int *)(param_2 + 0x28);
    param_1[5] = *(int *)(param_2 + 0x14);
    param_1[4] = *(int *)(param_2 + 0x20);
    iVar2 = *(int *)(param_2 + 0x18);
    param_1[0x1a] = 0;
    *param_1 = iVar2;
    FUN_140008410();
    FUN_140008410();
    iVar2 = DAT_140c636a8;
    if (param_1[3] == 0) {
        param_1[3] = DAT_140c636a8 - *(int *)(param_2 + 0x2c);
    }
    if (((*(uint *)(*(longlong *)(param_1 + 0x26) + 4) < 9) &&
         ((0x14cU >> (*(uint *)(*(longlong *)(param_1 + 0x26) + 4) & 0x1f) & 1) != 0)) &&
        (*param_1 == 3)) {
        iVar1 = *(int *)(param_2 + 0x1c);
        param_1[1] = 0;
        param_1[2] = iVar2 - iVar1;
    }
    else {
        param_1[2] = iVar2;
        param_1[1] = *(int *)(param_2 + 0x1c);
    }
    uVar5 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        do {
            local_res8 = *(undefined4 *)(*(longlong *)(param_2 + 8) + (ulonglong)uVar5 * 8);
            local_resc = *(undefined4 *)(*(longlong *)(param_2 + 8) + 4 + (ulonglong)uVar5 * 8);
            FUN_140617d30(param_1 + 10,local_28,&local_res8);
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_2 + 4));
    }
    if (param_1[0x28] == 0) {
        return 0;
    }
    lVar3 = FUN_1403d90d0(DAT_140c65898,param_1[6]);
    if (lVar3 == 0) {
        return 0;
    }
    if (*param_1 == 3) {
        switch(*(undefined4 *)(*(longlong *)(param_1 + 0x26) + 4)) {
            case 0:
            case 2:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                    (iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar2 != 0xa6)) {
                    uVar5 = FUN_1401ae6f0(0,4);
                    iVar6 = *(int *)(&DAT_140b274c0 + (ulonglong)uVar5 * 4);
                    FUN_1406177c0(param_1);
                }
                else {
                    uVar5 = FUN_1401ae6f0(0,4);
                    iVar6 = *(int *)(&DAT_140b277e0 + (ulonglong)uVar5 * 4);
                    FUN_1406177c0(param_1);
                }
                break;
            case 1:
            case 3:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                    (iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar2 != 0xa6)) {
                    uVar5 = FUN_1401ae6f0(0,4);
                    iVar6 = *(int *)(&DAT_140b27548 + (ulonglong)uVar5 * 4);
                    FUN_1406177c0(param_1);
                }
                else {
                    uVar5 = FUN_1401ae6f0(0,4);
                    iVar6 = *(int *)(&DAT_140b276a0 + (ulonglong)uVar5 * 4);
                    FUN_1406177c0(param_1);
                }
                break;
            case 4:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) &&
                    (iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar2 == 0xa6)) {
                    uVar5 = FUN_1401ae6f0(0,9);
                    iVar6 = *(int *)(&DAT_140b27618 + (ulonglong)uVar5 * 4);
                    FUN_1406177c0(param_1);
                    break;
                }
                uVar5 = FUN_1401ae6f0(0,9);
                iVar6 = *(int *)(&DAT_140b27520 + (ulonglong)uVar5 * 4);
            default:
                FUN_1406177c0(param_1);
                break;
            case 5:
            case 6:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                    (iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar2 != 0xa6)) {
                    uVar5 = FUN_1401ae6f0(0,4);
                    iVar6 = *(int *)(&DAT_140b275c0 + (ulonglong)uVar5 * 4);
                    FUN_1406177c0(param_1);
                }
                else {
                    uVar5 = FUN_1401ae6f0(0,4);
                    iVar6 = *(int *)(&DAT_140b276b8 + (ulonglong)uVar5 * 4);
                    FUN_1406177c0(param_1);
                }
                break;
            case 7:
            case 8:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                    (iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar2 != 0xa6)) {
                    uVar5 = FUN_1401ae6f0(0,4);
                    iVar6 = *(int *)(&DAT_140b27438 + (ulonglong)uVar5 * 4);
                    FUN_1406177c0(param_1);
                }
                else {
                    uVar5 = FUN_1401ae6f0(0,4);
                    iVar6 = *(int *)(&DAT_140b277c8 + (ulonglong)uVar5 * 4);
                    FUN_1406177c0(param_1);
                }
        }
    }
    else {
        if (*(int *)(*(longlong *)(param_1 + 0x26) + 4) != 4) {
            return 0;
        }
        if (*param_1 != 1) {
            return 0;
        }
        if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
            (iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar2 != 0xa6)) {
            uVar5 = FUN_1401ae6f0(0,4);
            iVar6 = *(int *)(&DAT_140b274d8 + (ulonglong)uVar5 * 4);
        }
        else {
            uVar5 = FUN_1401ae6f0(0,4);
            iVar6 = *(int *)(&DAT_140b27640 + (ulonglong)uVar5 * 4);
        }
    }
    if (iVar6 != 0) {
        lVar4 = FUN_14034bdd0();
        if (lVar4 != 0) {
            puVar7 = &DAT_140b7b704;
            if (*(undefined2 **)(lVar3 + 0x10) != (undefined2 *)0x0) {
                puVar7 = *(undefined2 **)(lVar3 + 0x10);
            }
            FUN_140003890(DAT_140c658a0,0x14,0,lVar4,*(undefined4 *)(lVar3 + 8),puVar7);
        }
        FUN_140472ed0(lVar3,iVar6);
    }
    return 0;
}



undefined8 FUN_1406167b0(longlong param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 uVar4;

    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x98) + 4);
    if ((8 < uVar2) || ((0x14cU >> (uVar2 & 0x1f) & 1) == 0)) {
        *(undefined4 *)(param_1 + 8) = DAT_140c636a8;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
    iVar1 = *(int *)(param_2 + 4);
    *(undefined4 *)(param_1 + 4) = 0;
    *(int *)(param_1 + 0x10) = iVar1;
    if (((*(int *)(param_1 + 0xa0) != 0) && (iVar1 != 0)) &&
        (lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x18)), lVar3 != 0)) {
        if (*(int *)(param_1 + 0x14) == 0) {
            if ((*(longlong *)(param_1 + 0xb0) == 0) && (iVar1 = FUN_1406177c0(param_1), iVar1 < 0)) {
                return 0;
            }
            iVar1 = **(int **)(param_1 + 0xa8);
            FUN_1401c2f20((int **)(param_1 + 0xa8),0);
        }
        else if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                 (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)
                ) {
            uVar2 = FUN_1401ae6f0(0,4);
            iVar1 = *(int *)(&DAT_140b27450 + (ulonglong)uVar2 * 4);
        }
        else {
            uVar2 = FUN_1401ae6f0(0,4);
            iVar1 = *(int *)(&DAT_140b27798 + (ulonglong)uVar2 * 4);
        }
        if (iVar1 != 0) {
            uVar4 = FUN_14034bdd0();
            FUN_140474b80(lVar3,0x14,uVar4);
            FUN_140472ed0(lVar3,iVar1);
        }
    }
    return 0;
}



undefined8 FUN_1406168f0(undefined4 *param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 uVar4;

    if ((param_1[0x28] != 0) && (param_2 == 9)) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,param_1[6]);
        if (lVar3 == 0) {
            return 0;
        }
        switch(*(undefined4 *)(*(longlong *)(param_1 + 0x26) + 4)) {
            case 0:
            case 2:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                    (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b274f0 + (ulonglong)uVar2 * 4);
                }
                else {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b275d8 + (ulonglong)uVar2 * 4);
                }
                break;
            case 1:
            case 3:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                    (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b27578 + (ulonglong)uVar2 * 4);
                }
                else {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b276d0 + (ulonglong)uVar2 * 4);
                }
                break;
            case 4:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                    (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b27508 + (ulonglong)uVar2 * 4);
                }
                else {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b27670 + (ulonglong)uVar2 * 4);
                }
                break;
            case 5:
            case 6:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                    (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b273c8 + (ulonglong)uVar2 * 4);
                }
                else {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b276e8 + (ulonglong)uVar2 * 4);
                }
                break;
            case 7:
            case 8:
                if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                    (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b27468 + (ulonglong)uVar2 * 4);
                }
                else {
                    uVar2 = FUN_1401ae6f0(0,4);
                    iVar1 = *(int *)(&DAT_140b277f8 + (ulonglong)uVar2 * 4);
                }
                break;
            default:
                goto switchD_140616958_caseD_9;
        }
        if (iVar1 != 0) {
            uVar4 = FUN_14034bdd0();
            FUN_140474b80(lVar3,0x14,uVar4);
            FUN_140472ed0(lVar3,iVar1);
        }
    }
    switchD_140616958_caseD_9:
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[8] = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[0x1a] = 0;
    FUN_140008410(param_1 + 10);
    FUN_140008410(param_1 + 0x12);
    *(undefined8 *)(param_1 + 1) = 0;
    param_1[3] = 0;
    return 0;
}



undefined4 FUN_140616b80(int *param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(param_1 + 0x26);
    uVar1 = *(uint *)(lVar3 + 4);
    if ((uVar1 == 4) && (*param_1 == 1)) {
        return *(undefined4 *)(lVar3 + 0x14);
    }
    if ((8 < uVar1) || ((0x14cU >> (uVar1 & 0x1f) & 1) == 0)) {
        iVar2 = FUN_140616cf0();
        if (((iVar2 != param_1[0x24]) || ((uVar1 & 0xfffffffa) != 0)) || (uVar1 == 4)) {
            if (*param_1 == 2) {
                return *(undefined4 *)(lVar3 + 0x18);
            }
            return *(undefined4 *)(lVar3 + 8);
        }
    }
    return *(undefined4 *)(lVar3 + 0xc);
}



float FUN_140616c10(longlong param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    longlong lVar4;
    longlong lVar5;
    uint uVar6;

    uVar6 = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10);
    if (lVar5 != *(longlong *)(param_1 + 0x30)) {
        do {
            if ((*(int *)(lVar5 + 0x24) == param_2) &&
                (plVar3 = (longlong *)FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar5 + 0x20)),
                        plVar3 != (longlong *)0x0)) {
                if (param_2 == 0) {
                    iVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
                    uVar6 = uVar6 + iVar2;
                }
                else if (param_2 == 1) {
                    uVar6 = uVar6 + 1;
                }
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
                for (lVar1 = *(longlong *)(lVar4 + 0x10); lVar5 = lVar4, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar4 = lVar1;
                }
            }
        } while (lVar5 != *(longlong *)(param_1 + 0x30));
    }
    return (float)(ulonglong)uVar6;
}



int FUN_140616cf0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    uint uVar7;

    lVar2 = *(longlong *)(param_1 + 0x78);
    iVar6 = 0;
    uVar7 = 0xffffffff;
    lVar4 = *(longlong *)(lVar2 + 0x10);
    if (lVar4 != lVar2) {
        do {
            uVar1 = *(uint *)(lVar4 + 0x20);
            if (*(uint *)(param_1 + 0x10) < uVar1) {
                return iVar6;
            }
            if ((uVar1 != uVar7) && (iVar6 = iVar6 + 1, uVar7 = uVar1, uVar1 == *(uint *)(param_1 + 0x10))
                    ) {
                return iVar6;
            }
            lVar5 = *(longlong *)(lVar4 + 0x18);
            if (lVar5 == 0) {
                lVar5 = *(longlong *)(lVar4 + 8);
                if (lVar4 == *(longlong *)(lVar5 + 0x18)) {
                    do {
                        lVar4 = lVar5;
                        lVar5 = *(longlong *)(lVar4 + 8);
                    } while (lVar4 == *(longlong *)(lVar5 + 0x18));
                }
                if (*(longlong *)(lVar4 + 0x18) != lVar5) {
                    lVar4 = lVar5;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar4 = lVar5, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar5 = lVar3;
                }
            }
        } while (lVar4 != lVar2);
    }
    return iVar6;
}



void FUN_140616d70(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x28)) {
        do {
            if (*(longlong *)(lVar3 + 0x28) != 0) {
                FUN_140616e30();
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
        } while (lVar3 != *(longlong *)(param_1 + 0x28));
    }
    FUN_140008410(param_1 + 0x20);
    FUN_140008410(param_1 + 0x20);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x28),0);
    FUN_140008410(param_1);
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



longlong FUN_140616e30(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140008410(param_1 + 0x70);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x78),0);
    FUN_140008410(param_1 + 0x48);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x50),0);
    FUN_140008410(param_1 + 0x28);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x30),0);
    FUN_14018b900(param_1,0);
    return param_1;
}



undefined8 FUN_140616eb0(void)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    lVar3 = DAT_140c65958;
    lVar5 = *(longlong *)(*(longlong *)(DAT_140c65958 + 0x28) + 0x10);
    if (lVar5 != *(longlong *)(DAT_140c65958 + 0x28)) {
        do {
            puVar1 = *(undefined4 **)(lVar5 + 0x28);
            *(undefined8 *)(puVar1 + 6) = 0;
            puVar1[8] = 0;
            *(undefined8 *)(puVar1 + 4) = 0;
            *puVar1 = 0;
            puVar1[0x1a] = 0;
            FUN_140008410(puVar1 + 10);
            FUN_140008410(puVar1 + 0x12);
            *(undefined8 *)(puVar1 + 1) = 0;
            puVar1[3] = 0;
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
        } while (lVar5 != *(longlong *)(lVar3 + 0x28));
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140616f80(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    undefined4 *puVar5;
    longlong lVar6;
    uint *puVar7;
    ulonglong uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    longlong *plVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    uint uVar16;
    longlong local_res8;
    longlong local_res10;
    longlong local_res18;
    longlong local_res20;
    uint local_48 [2];
    undefined8 local_40;

    lVar1 = DAT_140c65958;
    uVar14 = 0;
    uVar2 = 0;
    uVar3 = 0;
    local_res8 = param_1;
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64284 == 0) && (iVar4 = FUN_140224660(), uVar2 = uVar3, -1 < iVar4)) {
            uVar2 = (**(code **)(*DAT_140c63b28 + 0x28))();
        }
    }
    else {
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSoldierTowerDefense_140a6c200,DAT_140c63858);
    }
    uVar15 = uVar14;
    if (uVar2 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64284 == 0) && (iVar4 = FUN_140224660(), -1 < iVar4)) {
                    puVar5 = (undefined4 *)(**(code **)(*DAT_140c63b28 + 0x20))(DAT_140c63b28,uVar15);
                    goto LAB_140617048;
                }
            }
            else {
                puVar5 = (undefined4 *)(*DAT_140c63848)();
                LAB_140617048:
                if (puVar5 != (undefined4 *)0x0) {
                    uVar16 = puVar5[1];
                    lVar6 = *(longlong *)(lVar1 + 8);
                    local_res8 = CONCAT44(*puVar5,uVar16);
                    lVar9 = lVar6;
                    lVar12 = *(longlong *)(lVar6 + 8);
                    while (lVar12 != 0) {
                        lVar9 = lVar12;
                        if (uVar16 < *(uint *)(lVar12 + 0x20)) {
                            lVar12 = *(longlong *)(lVar12 + 0x10);
                        }
                        else {
                            lVar12 = *(longlong *)(lVar12 + 0x18);
                        }
                    }
                    if ((lVar9 == lVar6) || (uVar16 < *(uint *)(lVar9 + 0x20))) {
                        lVar6 = FUN_14018b280(0x28);
                        if ((longlong *)(lVar6 + 0x20) != (longlong *)0x0) {
                            *(longlong *)(lVar6 + 0x20) = local_res8;
                        }
                        *(longlong *)(lVar9 + 0x10) = lVar6;
                        lVar12 = *(longlong *)(lVar1 + 8);
                        if (lVar9 == lVar12) {
                            *(longlong *)(lVar12 + 8) = lVar6;
                            *(longlong *)(*(longlong *)(lVar1 + 8) + 0x18) = lVar6;
                        }
                        else if (lVar9 == *(longlong *)(lVar12 + 0x10)) {
                            *(longlong *)(lVar12 + 0x10) = lVar6;
                        }
                    }
                    else {
                        lVar6 = FUN_14018b280(0x28,0);
                        if ((longlong *)(lVar6 + 0x20) != (longlong *)0x0) {
                            *(longlong *)(lVar6 + 0x20) = local_res8;
                        }
                        *(longlong *)(lVar9 + 0x18) = lVar6;
                        if (lVar9 == *(longlong *)(*(longlong *)(lVar1 + 8) + 0x18)) {
                            *(longlong *)(*(longlong *)(lVar1 + 8) + 0x18) = lVar6;
                        }
                    }
                    *(longlong *)(lVar6 + 8) = lVar9;
                    *(undefined8 *)(lVar6 + 0x10) = 0;
                    *(undefined8 *)(lVar6 + 0x18) = 0;
                    FUN_1400081c0();
                    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 1;
                }
            }
            uVar16 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar16;
        } while (uVar16 < uVar2);
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar2 = uVar3;
        if ((_DAT_140c63a10 == 0) && (iVar4 = FUN_1402239a0(), -1 < iVar4)) {
            uVar2 = (**(code **)(*DAT_140c652d8 + 0x28))();
        }
    }
    else {
        uVar2 = (*DAT_140c63838)(&PTR_u_PathSoldierEvent_140a6c158,DAT_140c63858);
    }
    uVar15 = uVar14;
    if (uVar2 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63a10 == 0) && (iVar4 = FUN_1402239a0(), -1 < iVar4)) {
                    puVar7 = (uint *)(**(code **)(*DAT_140c652d8 + 0x20))(DAT_140c652d8,uVar15);
                    goto LAB_1406171d8;
                }
            }
            else {
                puVar7 = (uint *)(*DAT_140c63848)(&PTR_u_PathSoldierEvent_140a6c158);
                LAB_1406171d8:
                if (puVar7 != (uint *)0x0) {
                    lVar6 = *(longlong *)(lVar1 + 0x28);
                    lVar9 = lVar6;
                    if (*(longlong *)(lVar6 + 8) != 0) {
                        lVar12 = *(longlong *)(lVar6 + 8);
                        do {
                            if (*(uint *)(lVar12 + 0x20) < *puVar7) {
                                lVar10 = *(longlong *)(lVar12 + 0x18);
                            }
                            else {
                                lVar10 = *(longlong *)(lVar12 + 0x10);
                                lVar9 = lVar12;
                            }
                            lVar12 = lVar10;
                        } while (lVar10 != 0);
                    }
                    if ((lVar9 == lVar6) || (*puVar7 < *(uint *)(lVar9 + 0x20))) {
                        local_res10 = lVar6;
                        plVar13 = &local_res10;
                    }
                    else {
                        local_res8 = lVar9;
                        plVar13 = &local_res8;
                    }
                    if (*plVar13 == lVar6) {
                        lVar6 = FUN_14018b280(0xb8);
                        uVar8 = uVar14;
                        if (lVar6 != 0) {
                            uVar8 = FUN_1406161f0(lVar6);
                        }
                        lVar6 = *(longlong *)(lVar1 + 0x28);
                        lVar9 = lVar6;
                        if (*(longlong *)(lVar6 + 8) != 0) {
                            lVar12 = *(longlong *)(lVar6 + 8);
                            do {
                                if (*(uint *)(lVar12 + 0x20) < *puVar7) {
                                    lVar10 = *(longlong *)(lVar12 + 0x18);
                                }
                                else {
                                    lVar10 = *(longlong *)(lVar12 + 0x10);
                                    lVar9 = lVar12;
                                }
                                lVar12 = lVar10;
                            } while (lVar10 != 0);
                        }
                        if ((lVar9 == lVar6) || (*puVar7 < *(uint *)(lVar9 + 0x20))) {
                            local_48[0] = *puVar7;
                            local_40 = 0;
                            local_res18 = lVar9;
                            FUN_140055c60(lVar1 + 0x20,&local_res20,&local_res18,local_48);
                            lVar9 = local_res20;
                        }
                        *(ulonglong *)(lVar9 + 0x28) = uVar8;
                    }
                }
            }
            uVar16 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar16;
        } while (uVar16 < uVar2);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c648d8 == 0) && (iVar4 = FUN_140223de0(), -1 < iVar4)) {
            uVar3 = (**(code **)(*DAT_140c64548 + 0x28))();
        }
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_PathSoldierEventWave_140a6c190,DAT_140c63858);
    }
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c648d8 == 0) && (iVar4 = FUN_140223de0(), -1 < iVar4)) {
                    lVar6 = (**(code **)(*DAT_140c64548 + 0x20))(DAT_140c64548,uVar14);
                    goto LAB_140617385;
                }
            }
            else {
                lVar6 = (*DAT_140c63848)(&PTR_u_PathSoldierEventWave_140a6c190,uVar14);
                LAB_140617385:
                if (lVar6 != 0) {
                    lVar9 = *(longlong *)(lVar1 + 0x28);
                    lVar12 = lVar9;
                    if (*(longlong *)(lVar9 + 8) != 0) {
                        lVar10 = *(longlong *)(lVar9 + 8);
                        do {
                            if (*(uint *)(lVar10 + 0x20) < *(uint *)(lVar6 + 4)) {
                                lVar11 = *(longlong *)(lVar10 + 0x18);
                            }
                            else {
                                lVar11 = *(longlong *)(lVar10 + 0x10);
                                lVar12 = lVar10;
                            }
                            lVar10 = lVar11;
                        } while (lVar11 != 0);
                    }
                    if ((lVar12 == lVar9) || (*(uint *)(lVar6 + 4) < *(uint *)(lVar12 + 0x20))) {
                        local_res10 = lVar9;
                        plVar13 = &local_res10;
                    }
                    else {
                        local_res8 = lVar12;
                        plVar13 = &local_res8;
                    }
                    if (*plVar13 != lVar9) {
                        FUN_140617640(*(undefined8 *)(*plVar13 + 0x28));
                    }
                }
            }
            uVar2 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar2;
        } while (uVar2 < uVar3);
    }
    return 0;
}



undefined8 FUN_140617410(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65958 + 0x28);
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



undefined4 FUN_140617470(undefined8 param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;

    iVar1 = *(int *)(param_2 + 0xc);
    uVar3 = 0;
    if (iVar1 == 4) {
        if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
            iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
            if (iVar1 == 0xa6) {
                uVar2 = FUN_1401ae6f0(0,9);
                return *(undefined4 *)(&DAT_140b27730 + (ulonglong)uVar2 * 4);
            }
        }
        uVar2 = FUN_1401ae6f0(0,9);
        uVar3 = *(undefined4 *)(&DAT_140b27308 + (ulonglong)uVar2 * 4);
    }
    else {
        if (iVar1 == 5) {
            if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
                iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
                if (iVar1 == 0xa6) {
                    uVar2 = FUN_1401ae6f0(0,4);
                    return *(undefined4 *)(&DAT_140b27718 + (ulonglong)uVar2 * 4);
                }
            }
            uVar2 = FUN_1401ae6f0(0,4);
            return *(undefined4 *)(&DAT_140b273f8 + (ulonglong)uVar2 * 4);
        }
        if (iVar1 == 6) {
            if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
                iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
                if (iVar1 == 0xa6) {
                    uVar2 = FUN_1401ae6f0(0,4);
                    return *(undefined4 *)(&DAT_140b27780 + (ulonglong)uVar2 * 4);
                }
            }
            uVar2 = FUN_1401ae6f0(0,4);
            return *(undefined4 *)(&DAT_140b273e0 + (ulonglong)uVar2 * 4);
        }
        if (iVar1 == 7) {
            if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
                iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
                if (iVar1 == 0xa6) {
                    uVar2 = FUN_1401ae6f0(0,9);
                    return *(undefined4 *)(&DAT_140b27758 + (ulonglong)uVar2 * 4);
                }
            }
            uVar2 = FUN_1401ae6f0(0,9);
            return *(undefined4 *)(&DAT_140b27410 + (ulonglong)uVar2 * 4);
        }
    }
    return uVar3;
}



void FUN_140617640(longlong param_1,longlong param_2)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    int iVar6;
    undefined4 uStack20;

    uVar1 = *(uint *)(param_2 + 8);
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar5 = lVar4;
    lVar3 = *(longlong *)(lVar4 + 8);
    while (lVar3 != 0) {
        lVar5 = lVar3;
        if (uVar1 < *(uint *)(lVar3 + 0x20)) {
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
        else {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
    }
    if ((lVar5 == lVar4) || (uVar1 < *(uint *)(lVar5 + 0x20))) {
        lVar4 = FUN_14018b280(0x30);
        if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar4 + 0x20) = CONCAT44(uStack20,uVar1);
            *(longlong *)(lVar4 + 0x28) = param_2;
        }
        *(longlong *)(lVar5 + 0x10) = lVar4;
        lVar3 = *(longlong *)(param_1 + 0x78);
        if (lVar5 == lVar3) {
            *(longlong *)(lVar3 + 8) = lVar4;
            *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) = lVar4;
        }
        else if (lVar5 == *(longlong *)(lVar3 + 0x10)) {
            *(longlong *)(lVar3 + 0x10) = lVar4;
        }
    }
    else {
        lVar4 = FUN_14018b280(0x30,0);
        if ((undefined8 *)(lVar4 + 0x20) != (undefined8 *)0x0) {
            *(undefined8 *)(lVar4 + 0x20) = CONCAT44(uStack20,uVar1);
            *(longlong *)(lVar4 + 0x28) = param_2;
        }
        *(longlong *)(lVar5 + 0x18) = lVar4;
        if (lVar5 == *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18)) {
            *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18) = lVar4;
        }
    }
    *(longlong *)(lVar4 + 8) = lVar5;
    *(undefined8 *)(lVar4 + 0x10) = 0;
    *(undefined8 *)(lVar4 + 0x18) = 0;
    FUN_1400081c0();
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x80) + 1;
    *(undefined4 *)(param_1 + 0x90) = 0;
    iVar6 = -1;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10);
    while (lVar4 != *(longlong *)(param_1 + 0x78)) {
        iVar2 = *(int *)(lVar4 + 0x20);
        if (iVar2 != iVar6) {
            *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
            iVar6 = iVar2;
        }
        lVar5 = *(longlong *)(lVar4 + 0x18);
        if (lVar5 == 0) {
            lVar5 = *(longlong *)(lVar4 + 8);
            if (lVar4 == *(longlong *)(lVar5 + 0x18)) {
                do {
                    lVar4 = lVar5;
                    lVar5 = *(longlong *)(lVar4 + 8);
                } while (lVar4 == *(longlong *)(lVar5 + 0x18));
            }
            if (*(longlong *)(lVar4 + 0x18) != lVar5) {
                lVar4 = lVar5;
            }
        }
        else {
            for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar4 = lVar5, lVar3 != 0;
                 lVar3 = *(longlong *)(lVar3 + 0x10)) {
                lVar5 = lVar3;
            }
        }
    }
    return;
}



undefined8 FUN_1406177c0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined4 uVar3;
    longlong lVar4;
    longlong lVar5;

    *(undefined8 *)(param_1 + 0xb0) = 0;
    switch(*(undefined4 *)(*(longlong *)(param_1 + 0x98) + 4)) {
        case 0:
        case 2:
            if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                lVar5 = lVar4 + 10;
                lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
                *(undefined4 *)(lVar2 + lVar4 * 4) = 0x556f8;
                *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x556f9;
                *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x556fa;
                *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x556fb;
                *(undefined4 *)(lVar2 + 0x10 + lVar4 * 4) = 0x556fc;
                *(undefined4 *)(lVar2 + 0x14 + lVar4 * 4) = 0x556fd;
                *(undefined4 *)(lVar2 + 0x18 + lVar4 * 4) = 0x556fe;
                *(undefined4 *)(lVar2 + 0x1c + lVar4 * 4) = 0x556ff;
                *(undefined4 *)(lVar2 + 0x20 + lVar4 * 4) = 0x55700;
                *(undefined4 *)(lVar2 + 0x24 + lVar4 * 4) = 0x55701;
                lVar4 = *(longlong *)(param_1 + 0xa8);
                if (lVar4 == lVar2) goto LAB_140617cbd;
                goto LAB_140617c8f;
            }
            lVar4 = *(longlong *)(param_1 + 0xb0);
            lVar5 = lVar4 + 10;
            lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
            *(undefined4 *)(lVar2 + lVar4 * 4) = 0x44502;
            *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x44503;
            *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x44504;
            *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x44505;
            *(undefined4 *)(lVar2 + 0x10 + lVar4 * 4) = 0x44506;
            *(undefined4 *)(lVar2 + 0x14 + lVar4 * 4) = 0x44507;
            *(undefined4 *)(lVar2 + 0x18 + lVar4 * 4) = 0x44508;
            *(undefined4 *)(lVar2 + 0x1c + lVar4 * 4) = 0x4450a;
            *(undefined4 *)(lVar2 + 0x20 + lVar4 * 4) = 0x4450b;
            *(undefined4 *)(lVar2 + 0x24 + lVar4 * 4) = 0x4450c;
            lVar4 = *(longlong *)(param_1 + 0xa8);
            if (lVar4 != lVar2) goto LAB_140617c8f;
            goto LAB_140617cbd;
        case 1:
        case 3:
            if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                lVar5 = lVar4 + 5;
                lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
                *(undefined4 *)(lVar2 + lVar4 * 4) = 0x5573f;
                *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x55740;
                *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x55741;
                *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x55742;
                uVar3 = 0x55743;
            }
            else {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                lVar5 = lVar4 + 5;
                lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
                *(undefined4 *)(lVar2 + lVar4 * 4) = 0x4453d;
                *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x4453e;
                *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x4453f;
                *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x44540;
                uVar3 = 0x44541;
            }
            break;
        case 4:
            if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                lVar5 = lVar4 + 5;
                lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
                *(undefined4 *)(lVar2 + lVar4 * 4) = 0x557ca;
                *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x557cd;
                *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x557ce;
                *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x557d0;
                uVar3 = 0x557d1;
            }
            else {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                lVar5 = lVar4 + 5;
                lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
                *(undefined4 *)(lVar2 + lVar4 * 4) = 0x44532;
                *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x44533;
                *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x44535;
                *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x44536;
                uVar3 = 0x44537;
            }
            break;
        case 5:
        case 6:
            if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                lVar5 = lVar4 + 5;
                lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
                *(undefined4 *)(lVar2 + lVar4 * 4) = 0x557fb;
                *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x557fc;
                *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x557fd;
                *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x557fe;
                uVar3 = 0x557ff;
            }
            else {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                lVar5 = lVar4 + 5;
                lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
                *(undefined4 *)(lVar2 + lVar4 * 4) = 0x44550;
                *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x44551;
                *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x44552;
                *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x44553;
                uVar3 = 0x44554;
            }
            break;
        case 7:
        case 8:
            if ((*(longlong **)(DAT_140c65898 + 0x1bf0) == (longlong *)0x0) ||
                (iVar1 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))(), iVar1 != 0xa6)) {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                lVar5 = lVar4 + 5;
                lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
                *(undefined4 *)(lVar2 + lVar4 * 4) = 0x557dd;
                *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x557de;
                *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x557de;
                *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x557e3;
                uVar3 = 0x557e5;
            }
            else {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                lVar5 = lVar4 + 5;
                lVar2 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa8),lVar5,4);
                *(undefined4 *)(lVar2 + lVar4 * 4) = 0x444f3;
                *(undefined4 *)(lVar2 + 4 + lVar4 * 4) = 0x444f4;
                *(undefined4 *)(lVar2 + 8 + lVar4 * 4) = 0x444f4;
                *(undefined4 *)(lVar2 + 0xc + lVar4 * 4) = 0x444f6;
                uVar3 = 0x444f7;
            }
            break;
        default:
            goto switchD_14061780b_caseD_9;
    }
    *(undefined4 *)(lVar2 + 0x10 + lVar4 * 4) = uVar3;
    lVar4 = *(longlong *)(param_1 + 0xa8);
    if (lVar4 != lVar2) {
        LAB_140617c8f:
        FUN_1407db590(lVar2,lVar4,*(longlong *)(param_1 + 0xb0) << 2);
        lVar4 = *(longlong *)(param_1 + 0xa8);
        if (lVar4 != 0) {
            (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
        }
        *(longlong *)(param_1 + 0xa8) = lVar2;
    }
    LAB_140617cbd:
    *(longlong *)(param_1 + 0xb0) = lVar5;
    switchD_14061780b_caseD_9:
    if (*(longlong *)(param_1 + 0xb0) == 0) {
        return 0x80004005;
    }
    FUN_140617f70(*(longlong *)(param_1 + 0xa8),
                  *(longlong *)(param_1 + 0xa8) + *(longlong *)(param_1 + 0xb0) * 4);
    return 0;
}



char ** FUN_140617d30(longlong param_1,char **param_2,uint *param_3)

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
            if (*param_3 == *(uint *)(pcVar5 + 0x20)) {
                bVar6 = param_3[1] < *(uint *)(pcVar5 + 0x24);
            }
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
        if (pcVar5 == *(char **)(pcVar2 + 0x10)) goto LAB_140617d9b;
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
    bVar6 = *(uint *)(pcVar3 + 0x20) < *param_3;
    if (*(uint *)(pcVar3 + 0x20) == *param_3) {
        bVar6 = *(uint *)(pcVar3 + 0x24) < param_3[1];
    }
    if (!bVar6) {
        *param_2 = pcVar3;
        *(undefined *)(param_2 + 1) = 0;
        return param_2;
    }
    LAB_140617d9b:
    ppcVar1 = (char **)FUN_140618020(param_1,local_res8,pcVar4,pcVar5,param_3);
    *param_2 = *ppcVar1;
    *(undefined *)(param_2 + 1) = 1;
    return param_2;
}



longlong FUN_140617e50(longlong param_1,uint *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    bool bVar5;
    longlong local_res8;
    longlong local_res18;

    local_res18 = *(longlong *)(param_1 + 8);
    lVar4 = *(longlong *)(local_res18 + 8);
    local_res8 = local_res18;
    if (lVar4 != 0) {
        lVar2 = lVar4;
        do {
            bVar5 = *param_2 < *(uint *)(lVar2 + 0x20);
            if (*param_2 == *(uint *)(lVar2 + 0x20)) {
                bVar5 = param_2[1] < *(uint *)(lVar2 + 0x24);
            }
            if (bVar5) {
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
                bVar5 = *(uint *)(lVar4 + 0x20) < *param_2;
                if (*(uint *)(lVar4 + 0x20) == *param_2) {
                    bVar5 = *(uint *)(lVar4 + 0x24) < param_2[1];
                }
                if (bVar5) {
                    lVar2 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    lVar2 = *(longlong *)(lVar4 + 0x10);
                    local_res18 = lVar4;
                }
                lVar4 = lVar2;
            } while (lVar2 != 0);
        }
    }
    lVar4 = 0;
    lVar2 = local_res18;
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
    FUN_140618120(param_1,&local_res18,&local_res8);
    return lVar4;
}



void FUN_140617f70(undefined4 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    longlong lVar6;
    double dVar7;
    undefined4 uVar8;
    undefined4 uVar9;

    if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
        uVar8 = 0;
        uVar9 = 0x3ff00000;
        lVar6 = (longlong)puVar4 - (longlong)param_1;
        do {
            dVar7 = (double)(**(code **)(DAT_140c77890 + 0x30))();
            uVar1 = *puVar4;
            lVar3 = lVar6 >> 2;
            puVar5 = puVar4 + 1;
            lVar6 = lVar6 + 4;
            iVar2 = (int)(dVar7 * ((double)(int)lVar3 + (double)CONCAT44(uVar9,uVar8)));
            *puVar4 = param_1[iVar2];
            param_1[iVar2] = uVar1;
            puVar4 = puVar5;
        } while (puVar5 != param_2);
    }
    return;
}