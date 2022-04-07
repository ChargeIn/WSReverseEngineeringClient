//
// Created by flop on 04.04.22.
//
#include "../../include.h"

undefined8 FUN_1404f04f0(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    longlong lVar10;
    double dVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    int local_res8;
    int iStackX12;
    int local_res10;
    int iStackX20;
    ulonglong local_res18;
    undefined **local_98;
    int local_90;
    longlong local_88;
    undefined4 local_80;
    undefined local_78 [8];
    longlong local_70;

    lVar3 = DAT_140c65908;
    local_98 = &PTR_FUN_140b569f0;
    local_80 = 1;
    local_88 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_90 = FUN_1400578c0();
    uVar14 = 0;
    uVar15 = 0;
    local_res18 = 0;
    lVar6 = param_1;
    if (*(longlong *)(lVar3 + 0x40) != 0) {
        do {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar8 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar8 + 1) = 5;
            *puVar8 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            iVar4 = FUN_1400578c0(param_1);
            lVar10 = local_res18 * 0x20;
            iVar1 = *(int *)(lVar10 + *(longlong *)(lVar3 + 0x38));
            lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar4 - 1U < *(uint *)(lVar6 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar6 + 0x18));
            }
            else {
                dVar11 = (double)iVar4;
                if (dVar11 == (double)CONCAT44(uVar15,uVar14)) {
                    puVar8 = *(undefined8 **)(lVar6 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar11 >> 0x20);
                    local_res10 = SUB84(dVar11,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar6 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar6 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_1404f068d;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_1404f068d:
            puVar7 = *(undefined8 **)(param_1 + 0x10);
            *puVar7 = *puVar8;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(local_78,L"nPackageId");
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            }
            else {
                lVar9 = -1;
                do {
                    lVar9 = lVar9 + 1;
                } while (*(char *)(lVar6 + lVar9) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,lVar6,lVar9);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar5;
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            if (local_70 != 0) {
                FUN_14018b900(local_70,0);
            }
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            lVar6 = *(longlong *)(param_1 + 0x10);
            *(undefined **)(param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar6;
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar4 - 1U < *(uint *)(lVar9 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
            }
            else {
                dVar11 = (double)iVar4;
                if (dVar11 == (double)CONCAT44(uVar15,uVar14)) {
                    puVar8 = *(undefined8 **)(lVar9 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar11 >> 0x20);
                    local_res10 = SUB84(dVar11,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar9 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_1404f0804;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_1404f0804:
            *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar6) = *puVar8;
            *(undefined4 *)(lVar6 + -0x28) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f0870();
            lVar9 = DAT_140c65908;
            lVar6 = *(longlong *)(param_1 + 0x10);
            puVar8 = (undefined8 *)(lVar6 + -0x10);
            *(undefined8 **)(param_1 + 0x10) = puVar8;
            iVar1 = *(int *)(lVar9 + 0x30);
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar4 - 1U < *(uint *)(lVar9 + 0x38)) {
                puVar7 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
            }
            else {
                dVar11 = (double)iVar4;
                if (dVar11 == (double)CONCAT44(uVar15,uVar14)) {
                    puVar7 = *(undefined8 **)(lVar9 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar11 >> 0x20);
                    local_res10 = SUB84(dVar11,0);
                    puVar7 = (undefined8 *)
                            (*(longlong *)(lVar9 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar7 + 3) == 3) && (dVar11 == (double)puVar7[2])) goto LAB_1404f08c4;
                    puVar7 = (undefined8 *)puVar7[4];
                } while (puVar7 != (undefined8 *)0x0);
                puVar7 = &DAT_140a12138;
            }
            LAB_1404f08c4:
            *puVar8 = *puVar7;
            *(undefined4 *)(lVar6 + -8) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(local_78,L"eRealCurrency");
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            }
            else {
                lVar9 = -1;
                do {
                    lVar9 = lVar9 + 1;
                } while (*(char *)(lVar6 + lVar9) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,lVar6,lVar9);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar5;
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            if (local_70 != 0) {
                FUN_14018b900(local_70,0);
            }
            pdVar2 = *(double **)(param_1 + 0x10);
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            lVar6 = *(longlong *)(param_1 + 0x10);
            *(undefined **)(param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar6;
            dVar11 = (double)*(float *)(lVar10 + 0x18 + *(longlong *)(lVar3 + 0x38));
            uVar12 = SUB84(dVar11,0);
            uVar13 = (undefined4)((ulonglong)dVar11 >> 0x20);
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar4 - 1U < *(uint *)(lVar9 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
            }
            else {
                dVar11 = (double)iVar4;
                if (dVar11 == (double)CONCAT44(uVar15,uVar14)) {
                    puVar8 = *(undefined8 **)(lVar9 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar11 >> 0x20);
                    local_res10 = SUB84(dVar11,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar9 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_1404f0a3d;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_1404f0a3d:
            *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar6) = *puVar8;
            *(undefined4 *)(lVar6 + -0x28) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(local_78,L"nPrice");
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            }
            else {
                lVar9 = -1;
                do {
                    lVar9 = lVar9 + 1;
                } while (*(char *)(lVar6 + lVar9) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,lVar6,lVar9);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar5;
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            if (local_70 != 0) {
                FUN_14018b900(local_70,0);
            }
            puVar8 = *(undefined8 **)(param_1 + 0x10);
            *(undefined4 *)(puVar8 + 1) = 3;
            *puVar8 = CONCAT44(uVar13,uVar12);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                          *(longlong *)(param_1 + 0x10) + -0x10);
            lVar6 = *(longlong *)(param_1 + 0x10);
            *(undefined **)(param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar6;
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            dVar11 = (double)(ulonglong)*(uint *)(lVar10 + 8 + *(longlong *)(lVar3 + 0x38));
            uVar12 = SUB84(dVar11,0);
            uVar13 = (undefined4)((ulonglong)dVar11 >> 0x20);
            if (iVar4 - 1U < *(uint *)(lVar9 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
            }
            else {
                dVar11 = (double)iVar4;
                if (dVar11 == (double)CONCAT44(uVar15,uVar14)) {
                    puVar8 = *(undefined8 **)(lVar9 + 0x20);
                }
                else {
                    iStackX20 = (int)((ulonglong)dVar11 >> 0x20);
                    local_res10 = SUB84(dVar11,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar9 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                              (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_1404f0bad;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_1404f0bad:
            *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar6) = *puVar8;
            *(undefined4 *)(lVar6 + -0x28) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(local_78,L"nCount");
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) {
                *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            }
            else {
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (*(char *)(lVar6 + lVar10) != '\0');
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar8 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,lVar6,lVar10);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar5;
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            if (local_70 != 0) {
                FUN_14018b900(local_70,0);
            }
            puVar8 = *(undefined8 **)(param_1 + 0x10);
            *(undefined4 *)(puVar8 + 1) = 3;
            *puVar8 = CONCAT44(uVar13,uVar12);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400580e0(param_1,0xfffffffd);
            FUN_14005ea50(param_1);
            *(longlong *)(param_1 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
            FUN_1400fb1d0(&local_98);
            FUN_1400579e0();
            local_res18 = local_res18 + 1;
            lVar6 = local_88;
        } while (local_res18 < *(ulonglong *)(lVar3 + 0x40));
    }
    lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xa0);
    if (local_90 - 1U < *(uint *)(lVar3 + 0x38)) {
        puVar8 = (undefined8 *)((longlong)(local_90 + -1) * 0x10 + *(longlong *)(lVar3 + 0x18));
    }
    else {
        dVar11 = (double)local_90;
        if (dVar11 == (double)CONCAT44(uVar15,uVar14)) {
            puVar8 = *(undefined8 **)(lVar3 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar11 >> 0x20);
            local_res8 = SUB84(dVar11,0);
            puVar8 = (undefined8 *)
                    (*(longlong *)(lVar3 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar3 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_1404f0d6d;
            puVar8 = (undefined8 *)puVar8[4];
        } while (puVar8 != (undefined8 *)0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_1404f0d6d:
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    *puVar7 = *puVar8;
    uVar14 = *(undefined4 *)(puVar8 + 1);
    *(undefined4 *)(puVar7 + 1) = uVar14;
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400579e0(lVar6,uVar14,local_90);
    return 1;
}



undefined8 FUN_1404f0db0(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    double dVar11;
    int local_res8;
    int iStackX12;
    undefined **local_68;
    int local_60;
    longlong local_58;
    undefined4 local_50;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    lVar2 = DAT_140c65908;
    uVar8 = 0;
    uVar10 = uVar8;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar8;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar10 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar6 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    local_68 = &PTR_FUN_140b569f0;
    local_50 = 1;
    local_58 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_60 = FUN_1400578c0();
    lVar9 = param_1;
    if (*(longlong *)(lVar2 + 0x180) != 0) {
        do {
            lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x178) + uVar8 * 8);
            iVar4 = FUN_1404ea830();
            if (iVar4 != 0) {
                local_48 = &PTR_FUN_140b569f0;
                local_30 = 1;
                local_38 = param_1;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar7 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar7 + 1) = 5;
                *puVar7 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                local_40 = FUN_1400578c0(param_1);
                FUN_1404ea950(&local_48);
                FUN_1400fb1d0(&local_68);
                if (*(int *)(lVar9 + 0xc) != 0) {
                    FUN_1404ea4f0(uVar10);
                }
                FUN_1400579e0();
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
            lVar9 = local_58;
        } while (uVar8 < *(ulonglong *)(lVar2 + 0x180));
    }
    lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0xa0);
    if (local_60 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar7 = (undefined8 *)((longlong)(local_60 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar11 = (double)local_60;
        if (dVar11 == 0.0) {
            puVar7 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar11 >> 0x20);
            local_res8 = SUB84(dVar11,0);
            puVar7 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar7 + 3) == 3) && (dVar11 == (double)puVar7[2])) goto LAB_1404f1021;
            puVar7 = (undefined8 *)puVar7[4];
        } while (puVar7 != (undefined8 *)0x0);
        puVar7 = &DAT_140a12138;
    }
    LAB_1404f1021:
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400579e0(lVar9,uVar1,local_60);
    return 1;
}



undefined8 FUN_1404f1550(void)

{
    FUN_140450970();
    return 0;
}



undefined8 FUN_1404f1650(longlong param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;

    if (DAT_140c65898 != 0) {
        uVar1 = 0;
        if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
            uVar2 = uVar1;
            do {
                if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                    param_1) {
                    uVar1 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar2 * 8);
                    break;
                }
                uVar2 = (ulonglong)((int)uVar2 + 1);
            } while (uVar2 < *(ulonglong *)(DAT_140c63650 + 0x300));
        }
        FUN_1400f26a0(uVar1 + 0x180,1);
        FUN_1403fa680();
    }
    return 0;
}



undefined8 FUN_1404f18f0(void)

{
    FUN_140018e60();
    return 0;
}



undefined8 FUN_1404f1930(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;
    LPCWSTR lpFile;

    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                lVar2 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_1404f1978;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar2 = 0;
    LAB_1404f1978:
    lpFile = L"";
    iVar1 = FUN_1400f26a0(lVar2 + 0x180,1);
    if (iVar1 == 0) {
        lpFile = *(LPCWSTR *)(DAT_140c65908 + 0x1d0);
    }
    else if (iVar1 == 1) {
        lpFile = *(LPCWSTR *)(DAT_140c65908 + 0x1d8);
    }
    else if (iVar1 == 2) {
        lpFile = *(LPCWSTR *)(DAT_140c65908 + 0x1e0);
    }
    else if (iVar1 == 3) {
        lpFile = *(LPCWSTR *)(DAT_140c65908 + 0x1e8);
    }
    else if (iVar1 == 4) {
        lpFile = *(LPCWSTR *)(DAT_140c65908 + 0x1f0);
    }
    ShellExecuteW((HWND)0x0,L"open",lpFile,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
    return 0;
}



undefined8 FUN_1404f1a30(longlong param_1)

{
    longlong *plVar1;
    double *pdVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar5 = 0;
    uVar6 = uVar5;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    if ((DAT_140dc3248 & 1) == 0) {
        DAT_140dc3248 = DAT_140dc3248 | 1;
        DAT_140dc3254 = 0;
        uVar4 = uVar5;
    }
    else {
        uVar4 = (ulonglong)DAT_140dc3254;
    }
    if ((DAT_140dc3248 & 2) == 0) {
        DAT_140dc3248 = DAT_140dc3248 | 2;
        DAT_140dc325c = 0;
    }
    else {
        uVar5 = (ulonglong)DAT_140dc325c;
    }
    if ((*(byte *)(*(longlong *)(DAT_140c635f0 + 0x16e8) + 4) & 1) == 0) {
        if ((int)uVar4 == 0) {
            DAT_140dc3254 = 1;
            lVar3 = FUN_140200220(0x528);
            DAT_140dc3250 = 0;
            if (lVar3 != 0) {
                DAT_140dc3250 = *(int *)(lVar3 + 4);
            }
        }
        lVar3 = *(longlong *)(uVar6 + 400);
        pdVar2 = *(double **)(lVar3 + 0x10);
        *pdVar2 = (double)DAT_140dc3250;
        *(undefined4 *)(pdVar2 + 1) = 3;
        plVar1 = (longlong *)(lVar3 + 0x10);
        *plVar1 = *plVar1 + 0x10;
        return 1;
    }
    if ((int)uVar5 == 0) {
        DAT_140dc325c = 1;
        lVar3 = FUN_140200220(0x528);
        DAT_140dc3258 = 0;
        if (lVar3 != 0) {
            DAT_140dc3258 = *(int *)(lVar3 + 8);
        }
    }
    lVar3 = *(longlong *)(uVar6 + 400);
    pdVar2 = *(double **)(lVar3 + 0x10);
    *pdVar2 = (double)DAT_140dc3258;
    *(undefined4 *)(pdVar2 + 1) = 3;
    plVar1 = (longlong *)(lVar3 + 0x10);
    *plVar1 = *plVar1 + 0x10;
    return 1;
}



undefined8 FUN_1404f1ba0(longlong param_1)

{
    int *piVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    uVar8 = 0;
    uVar9 = uVar8;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar8;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                uVar9 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                break;
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    iVar3 = FUN_1400f26a0(uVar9 + 0x180,1);
    if (*(ulonglong *)(DAT_140c65908 + 0x180) != 0) {
        do {
            piVar1 = *(int **)(*(longlong *)(DAT_140c65908 + 0x178) + uVar8 * 8);
            if (*piVar1 == iVar3) {
                iVar3 = FUN_1404ea830(piVar1);
                if (iVar3 == 0) {
                    return 0;
                }
                local_28 = &PTR_FUN_140b569f0;
                local_10 = 1;
                local_18 = param_1;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar2 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar2 + 1) = 5;
                *puVar2 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar4 = FUN_1400578c0(param_1);
                local_20 = uVar4;
                FUN_1404ea950(&local_28,piVar1);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                puVar2 = *(undefined8 **)(param_1 + 0x10);
                *puVar2 = *puVar6;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (piVar1[3] != 0) {
                    FUN_1404ea4f0(uVar9,*(undefined8 *)(piVar1 + 4),*(undefined8 *)(piVar1 + 6),piVar1[1]);
                }
                FUN_1400579e0(param_1);
                return 1;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
        } while (uVar8 < *(ulonglong *)(DAT_140c65908 + 0x180));
    }
    return 0;
}



undefined8 FUN_1404f1d30(void)

{
    FUN_14044e4b0(DAT_140c65908);
    return 0;
}



undefined8 FUN_1404f1d50(void)

{
    undefined local_res10 [24];

    local_res10[0] = 0;
    FUN_1400161d0(DAT_140c635f0,0x82e,local_res10);
    return 0;
}



undefined8 FUN_1404f1db0(undefined8 param_1)

{
    if (DAT_140c63630 != 0) {
        FUN_1400b47c0(param_1,&DAT_140055570);
    }
    return 0;
}



undefined8 FUN_1404f2300(void)

{
    FUN_1404f4a70(DAT_140c65898 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0));
    return 0;
}



undefined8 FUN_1404f2330(void)

{
    FUN_1404f4990(DAT_140c65898 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0));
    return 0;
}



undefined8 FUN_1404f2360(longlong param_1)

{
    undefined8 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar5;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar5 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar1 = *(undefined8 *)(DAT_140c635f0 + 0x16a0);
    uVar2 = FUN_1400f26a0(uVar5 + 0x180,2);
    uVar3 = FUN_1400f26a0(uVar5 + 0x180,1);
    FUN_140400840(DAT_140c65898 + 0x48,uVar1,0,uVar3,uVar2);
    return 0;
}



undefined8 FUN_1404f2420(longlong param_1)

{
    undefined8 uVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar4;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar4 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar1 = *(undefined8 *)(DAT_140c635f0 + 0x16a0);
    iVar2 = FUN_1400f26a0(uVar4 + 0x180,1);
    FUN_1404f48b0(DAT_140c65898 + 0x48,uVar1,(longlong)iVar2);
    return 0;
}



undefined8 FUN_1404f24b0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    uVar6 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar1 = *(longlong *)(uVar6 + 400);
    lVar3 = FUN_14018f0e0(local_48,0);
    uVar4 = *(undefined8 *)(lVar3 + 8);
    puVar2 = *(undefined8 **)(lVar1 + 0x18);
    if (((puVar2 < *(undefined8 **)(lVar1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar2 + 1))) {
        uVar4 = FUN_140056bb0(lVar1,1);
    }
    FUN_14018f2d0(local_28,uVar4);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    FUN_1404f47d0(DAT_140c65898 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0),local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1404f25a0(longlong param_1)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    undefined8 uVar6;
    undefined4 *puVar7;
    uint uVar8;
    longlong lVar9;

    FUN_140057020(param_1,"StorefrontLib",&PTR_s_IsLinkValid_140b69f10);
    FUN_140058710(param_1,"CodeEnumStoreLink",0x11);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Signature",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    lVar9 = 3;
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0xbff0000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    uVar8 = 0;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c63f5c != 0) || (iVar5 = FUN_14023f7e0(), iVar5 < 0)) {
                LAB_1404f2761:
                lVar3 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar6 = FUN_140062650(param_1,"CodeEnumBannerLocation",0x16);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar6;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar6 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                *puVar1 = uVar6;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                do {
                    FUN_1400f06f0(param_1);
                    lVar9 = lVar9 + -1;
                } while (lVar9 != 0);
                uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                return 1;
            }
            uVar4 = (**(code **)(*DAT_140c650e0 + 0x28))();
        }
        else {
            uVar4 = (*DAT_140c63838)(&PTR_u_StoreLink_140a6d850,DAT_140c63858);
        }
        if (uVar4 <= uVar8) goto LAB_1404f2761;
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c63f5c == 0) {
                iVar5 = FUN_14023f7e0();
                if (iVar5 < 0) {
                    puVar7 = (undefined4 *)0x0;
                }
                else {
                    puVar7 = (undefined4 *)(**(code **)(*DAT_140c650e0 + 0x20))(DAT_140c650e0,uVar8);
                }
            }
            else {
                puVar7 = (undefined4 *)0x0;
            }
        }
        else {
            puVar7 = (undefined4 *)(*DAT_140c63848)(&PTR_u_StoreLink_140a6d850,uVar8,DAT_140c63858);
        }
        uVar2 = *(ulonglong *)(puVar7 + 2);
        if (uVar2 == 0) {
            FUN_1400f06f0(param_1,0,0,*puVar7);
            uVar8 = uVar8 + 1;
        }
        else if (DAT_140c3fe70 < uVar2) {
            FUN_1400f06f0(param_1,uVar2,0,*puVar7);
            uVar8 = uVar8 + 1;
        }
        else {
            FUN_1400f06f0(param_1,uVar2,DAT_140c3fe68 + uVar2,*puVar7);
            uVar8 = uVar8 + 1;
        }
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404f2860(longlong param_1)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    uint uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined4 *puVar6;
    uint uVar7;
    undefined4 *puVar8;
    longlong lVar9;
    longlong lVar10;
    undefined8 local_38;
    undefined4 local_30;

    FUN_140057020(param_1,"StorefrontLib",&PTR_s_GetIsPTR_140b69c60);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x406ac00000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar10 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"kSignatureGoodsCategoryId",0x19);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar10 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x406b000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar10 = *(longlong *)(param_1 + 0x10);
    local_38 = FUN_140062650(param_1,"kProtobucksCategoryId",0x15);
    local_30 = 4;
    FUN_14005ea50(param_1,lVar10 + -0x20,&local_38,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    lVar10 = 0x16;
    FUN_140058710(param_1,"CodeEnumClaimItemState",0x16);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"CanClaim",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CharacterMaxed",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"AccountMaxed",0xc);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"AccountMaxedWithPending",0x17);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar9 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar9,lVar9 + -0x20,lVar9 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumStoreDisplayInfoDisplayType",0x23);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar9 = 6;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumBannerLocation",0x16);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar9 = 3;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"BannerPageType",0xe);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Product",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"SearchTerm",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Category",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"BrowserLink",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"OfferGroup",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Signature",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar9 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar9,lVar9 + -0x20,lVar9 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumRealCurrency",0x14);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_1409f0e1c,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_1409f0dac,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_1409f0dc4,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar9 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar9,lVar9 + -0x20,lVar9 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumStoreDisplayFlag",0x18);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_1409f0df4,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Recommended",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Popular",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"LimitedTime",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar9 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar9,lVar9 + -0x20,lVar9 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumStoreDiscountType",0x19);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b0e660,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Fixed",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Percentage",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar9 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar9,lVar9 + -0x20,lVar9 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumStoreError",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumStoreLink",0x11);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Signature",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0xbff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    puVar8 = (undefined4 *)0x0;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c63f5c != 0) || (iVar4 = FUN_14023f7e0(), iVar4 < 0)) {
                LAB_1404f3553:
                lVar10 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar10,lVar10 + -0x20,lVar10 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"CodeEnumModelSequence",0x15);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"APState0Idle",0xc);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4091780000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"APState1Idle",0xc);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4091800000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"APState2Idle",0xc);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4091880000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"PistolsReady",0xc);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4074600000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"ClawsReady",10);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x40920c0000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"HeavyGunReady",0xd);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x40bc0f0000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"TwoHReady",9);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4055800000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"EsperReady",10);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4095d40000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"ShockPaddlesReady",0x11);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4094980000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"PistolsStand",0xc);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x407c400000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"ClawsStand",10);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4091fc0000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"TwoHGunStand",0xc);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4086180000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"TwoHStand",9);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4057800000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"DefaultStand",0xc);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4062c00000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"ShockPaddlesStand",0x11);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4094a80000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"DefaultStartScreenLoop01",0x18);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x40b5ec0000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"DefaultExileStartScreenLoop01",0x1d);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x40be2c0000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"DefaultDominionStartScreenLoop01",0x20);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x40be2b0000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                lVar10 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar10,lVar10 + -0x20,lVar10 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"CodeEnumPurchaseResultDisplayType",0x21);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                lVar10 = 3;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                do {
                    FUN_1400f06f0(param_1);
                    lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"CodeEnumStoreSubscriptionUnit",0x1d);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"Second",6);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x3ff0000000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,"Minute",6);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4000000000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,&DAT_140b0e694,4);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4008000000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,&DAT_1409f0e44,3);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4010000000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_140062650(param_1,&DAT_140b0e69c,4);
                *(undefined4 *)(puVar1 + 1) = 4;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                *puVar1 = 0x4014000000000000;
                *(undefined4 *)(puVar1 + 1) = 3;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                FUN_1400eff50(param_1);
                FUN_1400eff50(param_1);
                lVar10 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar10,lVar10 + -0x20,lVar10 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                FUN_140058710(param_1,"CodeEnumStoreItemType",0x15);
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400eff50(param_1);
                FUN_1400eff50(param_1);
                lVar10 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar10,lVar10 + -0x20,lVar10 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                FUN_1400f0490(param_1);
                FUN_140058710(param_1,"CodeEnumLegalLink",0x11);
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar1 + 1) = 5;
                *puVar1 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400eff50(param_1);
                FUN_1400eff50(param_1);
                FUN_1400eff50(param_1);
                FUN_1400eff50(param_1);
                FUN_1400eff50(param_1);
                lVar10 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar10,lVar10 + -0x20,lVar10 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                return 1;
            }
            uVar3 = (**(code **)(*DAT_140c650e0 + 0x28))();
        }
        else {
            uVar3 = (*DAT_140c63838)(&PTR_u_StoreLink_140a6d850,DAT_140c63858);
        }
        uVar7 = (uint)puVar8;
        if (uVar3 <= uVar7) goto LAB_1404f3553;
        if (DAT_140c63848 == (code *)0x0) {
            puVar6 = (undefined4 *)0x0;
            if (_DAT_140c63f5c == 0) {
                iVar4 = FUN_14023f7e0();
                if (iVar4 < 0) {
                    puVar6 = (undefined4 *)0x0;
                }
                else {
                    puVar6 = (undefined4 *)(**(code **)(*DAT_140c650e0 + 0x20))(DAT_140c650e0,puVar8);
                }
            }
        }
        else {
            puVar6 = (undefined4 *)(*DAT_140c63848)(&PTR_u_StoreLink_140a6d850,puVar8,DAT_140c63858);
        }
        uVar2 = *(ulonglong *)(puVar6 + 2);
        if (uVar2 == 0) {
            FUN_1400f06f0(param_1,0,0,*puVar6);
            puVar8 = (undefined4 *)(ulonglong)(uVar7 + 1);
        }
        else if (DAT_140c3fe70 < uVar2) {
            FUN_1400f06f0(param_1,uVar2,0,*puVar6);
            puVar8 = (undefined4 *)(ulonglong)(uVar7 + 1);
        }
        else {
            FUN_1400f06f0(param_1,uVar2,DAT_140c3fe68 + uVar2,*puVar6);
            puVar8 = (undefined4 *)(ulonglong)(uVar7 + 1);
        }
    } while( true );
}



void FUN_1404f44e0(longlong *param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    longlong local_10;

    local_28 = *param_1;
    uVar8 = param_1[1];
    uVar7 = 0;
    local_20 = &LAB_140450ab0;
    local_18 = 0;
    uVar3 = SUB168(ZEXT816(8) * ZEXT816(uVar8),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar8) >> 0x40,0) != 0) {
        uVar3 = 0xffffffffffffffff;
    }
    local_10 = FUN_14018b280(uVar3,0);
    if (uVar8 != 0) {
        uVar5 = uVar7;
        if (1 < uVar8) {
            uVar4 = uVar7;
            do {
                uVar5 = uVar4 + 2;
                puVar1 = (ulonglong *)(local_10 + -0x10 + uVar5 * 8);
                *puVar1 = uVar4;
                puVar1[1] = uVar4 + 1;
                uVar4 = uVar5;
            } while (uVar5 < uVar8 - ((uint)uVar8 & 1));
        }
        for (; uVar5 < uVar8; uVar5 = uVar5 + 1) {
            *(ulonglong *)(local_10 + uVar5 * 8) = uVar5;
        }
    }
    FUN_14001fec0(&LAB_14004f5f0,local_10,uVar8,&local_28);
    lVar2 = param_1[1];
    if (lVar2 == 0) {
        puVar9 = (undefined8 *)0x0;
    }
    else {
        puVar6 = (undefined8 *)FUN_14018b280(lVar2 * 8 + 0x10,0);
        if (puVar6 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar6[1] = lVar2;
            puVar9 = puVar6 + 2;
            *puVar6 = &PTR_LAB_140b55060;
        }
    }
    if (param_1[1] != 0) {
        do {
            uVar8 = uVar7 + 1;
            puVar9[uVar7] = *(undefined8 *)(*param_1 + *(longlong *)(local_10 + -8 + uVar8 * 8) * 8);
            uVar7 = uVar8;
        } while (uVar8 < (ulonglong)param_1[1]);
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *param_1 = (longlong)puVar9;
    FUN_14018b900(local_10,0);
    return;
}



void FUN_1404f4660(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    ulonglong *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    longlong local_28;
    undefined8 local_20;
    undefined8 local_18;
    longlong local_10;

    local_28 = *param_1;
    uVar8 = param_1[1];
    uVar3 = SUB168(ZEXT816(8) * ZEXT816(uVar8),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar8) >> 0x40,0) != 0) {
        uVar3 = 0xffffffffffffffff;
    }
    local_20 = param_2;
    local_18 = param_3;
    local_10 = FUN_14018b280(uVar3,0);
    uVar7 = 0;
    if (uVar8 != 0) {
        uVar5 = uVar7;
        if (1 < uVar8) {
            uVar4 = uVar7;
            do {
                uVar5 = uVar4 + 2;
                puVar1 = (ulonglong *)(local_10 + -0x10 + uVar5 * 8);
                *puVar1 = uVar4;
                puVar1[1] = uVar4 + 1;
                uVar4 = uVar5;
            } while (uVar5 < uVar8 - ((uint)uVar8 & 1));
        }
        for (; uVar5 < uVar8; uVar5 = uVar5 + 1) {
            *(ulonglong *)(local_10 + uVar5 * 8) = uVar5;
        }
    }
    FUN_14001fec0(&LAB_14004f5f0,local_10,uVar8,&local_28);
    lVar2 = param_1[1];
    if (lVar2 == 0) {
        puVar9 = (undefined8 *)0x0;
    }
    else {
        puVar6 = (undefined8 *)FUN_14018b280(lVar2 * 8 + 0x10,0);
        if (puVar6 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar6[1] = lVar2;
            puVar9 = puVar6 + 2;
            *puVar6 = &PTR_LAB_140b55060;
        }
    }
    if (param_1[1] != 0) {
        do {
            uVar8 = uVar7 + 1;
            puVar9[uVar7] = *(undefined8 *)(*param_1 + *(longlong *)(local_10 + -8 + uVar8 * 8) * 8);
            uVar7 = uVar8;
        } while (uVar8 < (ulonglong)param_1[1]);
    }
    lVar2 = *param_1;
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *param_1 = (longlong)puVar9;
    FUN_14018b900(local_10,0);
    return;
}



void FUN_1404f47d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x1fc,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,0,0,0,0,param_3);
    return;
}



void FUN_1404f48b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x1fb,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,param_3,0,0,0,0);
    return;
}



void FUN_1404f4990(longlong *param_1,undefined8 param_2)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x1f7,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,0,0,0,0,0);
    return;
}



void FUN_1404f4a70(longlong *param_1,undefined8 param_2)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x1f6,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,0,0,0,0,0);
    return;
}



undefined8 FUN_1404f4b50(longlong **param_1)

{
    longlong *plVar1;

    plVar1 = (longlong *)**param_1;
    while (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1,1,1);
        plVar1 = (longlong *)**param_1;
    }
    plVar1 = *param_1;
    if (plVar1 != (longlong *)0x0) {
        if (*plVar1 != 0) {
            FUN_1401a4a00(plVar1);
        }
        FUN_14018b900(plVar1,0);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404f4bc0(undefined8 *param_1)

{
    float fVar1;
    int iVar2;
    undefined *puVar3;
    undefined4 *puVar4;
    undefined8 *puVar5;
    uint uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    ulonglong in_stack_00000028;
    undefined8 in_stack_00000030;
    ulonglong in_stack_00000038;
    undefined auStack648 [32];
    ulonglong local_268;
    undefined8 local_260;
    ulonglong local_258;
    undefined4 local_250;
    undefined4 local_248;
    undefined8 *local_240;
    undefined **local_238;
    undefined4 *local_230;
    undefined4 *local_228;
    undefined8 local_220 [3];
    undefined **local_208;
    undefined8 *local_200;
    code *local_1f8;
    undefined8 local_1f0;
    undefined4 local_1e8;
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
    undefined4 local_198;
    undefined4 uStack404;
    undefined4 uStack400;
    undefined4 uStack396;
    undefined4 local_188;
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    undefined4 local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined4 local_158;
    undefined4 local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined **local_118;
    undefined4 *local_110;
    undefined4 *local_108;
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack648;
    local_258 = in_stack_00000038;
    local_260 = in_stack_00000030;
    local_268 = in_stack_00000028;
    FUN_1400c5920(param_1);
    *param_1 = &PTR_LAB_140b69f70;
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    param_1[0x82] = 1;
    param_1[0x83] = 0x1eb8;
    *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
    *(undefined8 *)((longlong)param_1 + 0x424) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x42c) = 0;
    uVar9 = uRam0000000140c7839c;
    uVar8 = uRam0000000140c78398;
    uVar7 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x88) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x444) = uVar7;
    *(undefined4 *)(param_1 + 0x89) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x44c) = uVar9;
    uVar9 = uRam0000000140c783ac;
    uVar8 = uRam0000000140c783a8;
    uVar7 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x8a) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x454) = uVar7;
    *(undefined4 *)(param_1 + 0x8b) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x45c) = uVar9;
    uVar9 = uRam0000000140c783bc;
    uVar8 = uRam0000000140c783b8;
    uVar7 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x8c) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x464) = uVar7;
    *(undefined4 *)(param_1 + 0x8d) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x46c) = uVar9;
    uVar9 = uRam0000000140c783cc;
    uVar8 = uRam0000000140c783c8;
    uVar7 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x8e) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x474) = uVar7;
    *(undefined4 *)(param_1 + 0x8f) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x47c) = uVar9;
    uVar9 = uRam0000000140c7839c;
    uVar8 = uRam0000000140c78398;
    uVar7 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x90) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x484) = uVar7;
    *(undefined4 *)(param_1 + 0x91) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x48c) = uVar9;
    uVar9 = uRam0000000140c783ac;
    uVar8 = uRam0000000140c783a8;
    uVar7 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x92) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x494) = uVar7;
    *(undefined4 *)(param_1 + 0x93) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x49c) = uVar9;
    uVar9 = uRam0000000140c783bc;
    uVar8 = uRam0000000140c783b8;
    uVar7 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x94) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x4a4) = uVar7;
    *(undefined4 *)(param_1 + 0x95) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x4ac) = uVar9;
    uVar9 = uRam0000000140c783cc;
    uVar8 = uRam0000000140c783c8;
    uVar7 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x96) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x4b4) = uVar7;
    *(undefined4 *)(param_1 + 0x97) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x4bc) = uVar9;
    *(undefined4 *)(param_1 + 0x98) = DAT_140c79888;
    *(undefined4 *)((longlong)param_1 + 0x4c4) = DAT_140c7988c;
    uVar9 = uRam0000000140c7839c;
    uVar8 = uRam0000000140c78398;
    uVar7 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x9a) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x4d4) = uVar7;
    *(undefined4 *)(param_1 + 0x9b) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x4dc) = uVar9;
    uVar9 = uRam0000000140c783ac;
    uVar8 = uRam0000000140c783a8;
    uVar7 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x9c) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x4e4) = uVar7;
    *(undefined4 *)(param_1 + 0x9d) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x4ec) = uVar9;
    uVar9 = uRam0000000140c783bc;
    uVar8 = uRam0000000140c783b8;
    uVar7 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x9e) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x4f4) = uVar7;
    *(undefined4 *)(param_1 + 0x9f) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x4fc) = uVar9;
    uVar9 = uRam0000000140c783cc;
    uVar8 = uRam0000000140c783c8;
    uVar7 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0xa0) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x504) = uVar7;
    *(undefined4 *)(param_1 + 0xa1) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x50c) = uVar9;
    FUN_1407e4830(param_1 + 0xa2,0,0x310);
    *(undefined4 *)(param_1 + 0x104) = 1;
    param_1[0x105] = 0;
    param_1[0x106] = 0;
    *(undefined4 *)(param_1 + 0x107) = 1;
    *(undefined4 *)((longlong)param_1 + 0x83c) = 1;
    *(undefined4 *)(param_1 + 0x108) = 1;
    local_240 = param_1 + 0x109;
    *local_240 = 0;
    param_1[0x10a] = 0;
    param_1[0x10b] = 0;
    param_1[0x10c] = 0;
    param_1[0x10d] = 0;
    param_1[0x10e] = 0;
    param_1[0x10f] = 0;
    param_1[0x110] = 0;
    param_1[0x111] = 0;
    param_1[0x112] = 0;
    *(undefined4 *)(param_1 + 0x113) = 0;
    param_1[0x114] = 0;
    param_1[0x115] = 0;
    *(undefined4 *)(param_1 + 0x116) = 0;
    FUN_1400522f0();
    param_1[0x11c] = 0;
    param_1[0x11d] = 0;
    *(undefined4 *)(param_1 + 0x11e) = 0;
    *(undefined8 *)((longlong)param_1 + 0x8fc) = 0;
    param_1[0x123] = 0;
    FUN_14002e3f0();
    param_1[0x386] = 0;
    param_1[0x387] = 0;
    param_1[0x388] = 0;
    puVar3 = (undefined *)FUN_14018b280();
    param_1[0x38a] = puVar3;
    param_1[0x38b] = 0;
    *puVar3 = 0;
    *(undefined8 *)(param_1[0x38a] + 8) = 0;
    *(undefined8 *)(param_1[0x38a] + 0x10) = param_1[0x38a];
    *(undefined8 *)(param_1[0x38a] + 0x18) = param_1[0x38a];
    param_1[0x38e] = 0;
    param_1[0x38f] = 0;
    param_1[0x390] = 0;
    param_1[0x36] = param_1[0x36] | 0x2000000;
    if ((*(byte *)((longlong)param_1 + 0x1d) & 0x80) == 0) {
        puVar4 = (undefined4 *)FUN_1400cb0e0(param_1,local_220,param_1 + 8);
        *(undefined4 *)((longlong)param_1 + 0x18c) = *puVar4;
        *(undefined4 *)(param_1 + 0x32) = puVar4[1];
        *(undefined4 *)((longlong)param_1 + 0x194) = puVar4[2];
        *(undefined4 *)(param_1 + 0x33) = puVar4[3];
        *(byte *)((longlong)param_1 + 0x1d) = *(byte *)((longlong)param_1 + 0x1d) | 0x80;
        puVar5 = param_1;
        do {
            if (*(int *)(puVar5 + 0x31) == 0) break;
            *(undefined4 *)(puVar5 + 0x31) = 0;
            puVar5 = (undefined8 *)puVar5[2];
        } while (puVar5 != (undefined8 *)0x0);
    }
    uVar7 = 0x3f400000;
    uVar8 = 0x3f400000;
    uVar9 = 0x3f400000;
    uVar10 = 0x3f800000;
    uVar6 = *(int *)((longlong)param_1 + 0x194) - *(int *)((longlong)param_1 + 0x18c);
    uVar11 = 0x3f800000;
    uVar12 = 0x3f666666;
    uVar13 = 0x3f4ccccd;
    uVar14 = 0x3f800000;
    *(uint *)(param_1 + 0x85) = uVar6;
    *(int *)((longlong)param_1 + 0x42c) = *(int *)(param_1 + 0x33) - *(int *)(param_1 + 0x32);
    local_238 = (undefined **)&local_1c8;
    local_230 = &local_1b8;
    local_228 = &local_1d8;
    local_1c8 = 0x3ee4dd2f;
    uStack452 = 0x3ee4dd2f;
    uStack448 = 0x3ee4dd2f;
    uStack444 = 0x3f800000;
    *(float *)(param_1 + 0x86) =
            (float)(ulonglong)uVar6 /
            (float)(ulonglong)(uint)(*(int *)(param_1 + 0x33) - *(int *)(param_1 + 0x32));
    local_1d8 = 0;
    uStack468 = 0x3f800000;
    uStack464 = 0;
    uStack460 = 0;
    local_1b8 = 0x3e8a3d71;
    uStack436 = 0x3e8a3d71;
    uStack432 = 0x3e8a3d71;
    uStack428 = 0x3f800000;
    local_118 = local_238;
    local_110 = local_230;
    local_108 = local_228;
    FUN_1401aefa0(&local_118,&local_1a8);
    *(undefined4 *)(param_1 + 0xa2) = local_1a8;
    *(undefined4 *)((longlong)param_1 + 0x514) = uStack420;
    *(undefined4 *)(param_1 + 0xa3) = uStack416;
    *(undefined4 *)((longlong)param_1 + 0x51c) = uStack412;
    *(undefined4 *)(param_1 + 0xa4) = local_198;
    *(undefined4 *)((longlong)param_1 + 0x524) = uStack404;
    *(undefined4 *)(param_1 + 0xa5) = uStack400;
    *(undefined4 *)((longlong)param_1 + 0x52c) = uStack396;
    *(undefined4 *)(param_1 + 0xa6) = local_188;
    *(undefined4 *)(param_1 + 0xa8) = local_178;
    *(undefined4 *)((longlong)param_1 + 0x544) = uStack372;
    *(undefined4 *)(param_1 + 0xa9) = uStack368;
    *(undefined4 *)((longlong)param_1 + 0x54c) = uStack364;
    *(undefined4 *)(param_1 + 0xaa) = local_168;
    *(undefined4 *)((longlong)param_1 + 0x554) = uStack356;
    *(undefined4 *)(param_1 + 0xab) = uStack352;
    *(undefined4 *)((longlong)param_1 + 0x55c) = uStack348;
    *(undefined4 *)(param_1 + 0xac) = local_158;
    *(undefined4 *)(param_1 + 0xae) = local_148;
    *(undefined4 *)((longlong)param_1 + 0x574) = uStack324;
    *(undefined4 *)(param_1 + 0xaf) = uStack320;
    *(undefined4 *)((longlong)param_1 + 0x57c) = uStack316;
    fVar1 = DAT_140c3b438;
    *(undefined4 *)(param_1 + 0xb0) = local_138;
    *(undefined4 *)((longlong)param_1 + 0x584) = uStack308;
    *(undefined4 *)(param_1 + 0xb1) = uStack304;
    *(undefined4 *)((longlong)param_1 + 0x58c) = uStack300;
    *(undefined4 *)(param_1 + 0xb2) = local_128;
    *(undefined (*) [16])(param_1 + 0xb4) = CONCAT412(uVar10,CONCAT48(uVar9,CONCAT44(uVar8,uVar7)));
    *(undefined (*) [16])(param_1 + 0xb6) = CONCAT412(uVar14,CONCAT48(uVar13,CONCAT44(uVar12,uVar11)))
            ;
    *(undefined4 *)(param_1 + 0xf8) = 0x41800000;
    uVar7 = FUN_1408fe3d0(fVar1 * 0.005555556 * 24.75);
    *(undefined (*) [16])(param_1 + 0xb8) = ZEXT1216(CONCAT48(0x3f000000,CONCAT44(uVar7,0x3f000000)));
    *(undefined4 *)(param_1 + 0xf9) = 0x42c80000;
    *(undefined4 *)((longlong)param_1 + 0x7cc) = 0x43160000;
    iVar2 = (**(code **)(*DAT_140c65670 + 0x98))
            (DAT_140c65670,L"Shaders\\SimplePS.sho",param_1 + 0x114);
    if (iVar2 < 0) {
        local_238 = &PTR_LAB_140b5e648;
        local_230 = (undefined4 *)0x0;
        local_228 = (undefined4 *)TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_238);
        local_208 = local_238;
        local_220[0] = 0x141e08f10;
        local_1f8 = (code *)local_228;
        local_200 = (undefined8 *)local_230;
        iVar2 = FUN_140197770(0xd,local_220,&local_208);
        local_238 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_228);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    iVar2 = (**(code **)(*DAT_140c65670 + 0x98))
            (DAT_140c65670,L"Shaders\\UIOverlayMaskPS.sho",param_1 + 0x115);
    if (iVar2 < 0) {
        local_238 = &PTR_LAB_140b5e648;
        local_230 = (undefined4 *)0x0;
        local_228 = (undefined4 *)TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_238);
        local_208 = local_238;
        local_220[0] = 0x141e09150;
        local_1f8 = (code *)local_228;
        local_200 = (undefined8 *)local_230;
        iVar2 = FUN_140197770(0xd,local_220,&local_208);
        local_238 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_228);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    local_248 = 0;
    local_250 = 0x100;
    local_258 = local_258 & 0xffffffff00000000;
    local_260 = CONCAT44(local_260._4_4_,1);
    local_268 = local_268 & 0xffffffff00000000;
    iVar2 = (**(code **)(*DAT_140c65670 + 0x58))(DAT_140c65670,1,1,1);
    if (iVar2 < 0) {
        local_238 = &PTR_LAB_140b5e648;
        local_230 = (undefined4 *)0x0;
        local_228 = (undefined4 *)TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_238);
        local_208 = local_238;
        local_220[0] = 0x141e09210;
        local_1f8 = (code *)local_228;
        local_200 = (undefined8 *)local_230;
        iVar2 = FUN_140197770(0xd,local_220,&local_208);
        local_238 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_228);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    local_248 = 0;
    local_250 = 0x100;
    local_258 = local_258 & 0xffffffff00000000;
    local_260 = CONCAT44(local_260._4_4_,1);
    local_268 = local_268 & 0xffffffff00000000;
    local_240 = param_1 + 0x10b;
    iVar2 = (**(code **)(*DAT_140c65670 + 0x58))(DAT_140c65670,1,1,1);
    if (iVar2 < 0) {
        local_238 = &PTR_LAB_140b5e648;
        local_230 = (undefined4 *)0x0;
        local_228 = (undefined4 *)TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_238);
        local_208 = local_238;
        local_220[0] = 0x141e091b0;
        local_1f8 = (code *)local_228;
        local_200 = (undefined8 *)local_230;
        iVar2 = FUN_140197770(0xd,local_220,&local_208);
        local_238 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_228);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    local_248 = 0;
    local_250 = 0x100;
    local_258 = local_258 & 0xffffffff00000000;
    local_260 = CONCAT44(local_260._4_4_,1);
    local_268 = local_268 & 0xffffffff00000000;
    local_240 = param_1 + 0x10d;
    iVar2 = (**(code **)(*DAT_140c65670 + 0x58))(DAT_140c65670,1,1,1);
    if (iVar2 < 0) {
        local_238 = &PTR_LAB_140b5e648;
        local_230 = (undefined4 *)0x0;
        local_228 = (undefined4 *)TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_238);
        local_208 = local_238;
        local_220[0] = 0x141e09020;
        local_1f8 = (code *)local_228;
        local_200 = (undefined8 *)local_230;
        iVar2 = FUN_140197770(0xd,local_220,&local_208);
        local_238 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_228);
        if (iVar2 != 0) {
            DebugBreak();
        }
    }
    local_208 = (undefined **)0x500000014;
    local_1f8 = FUN_1404f5aa0;
    local_1f0 = 0;
    local_1e8 = 1;
    local_200 = param_1;
    FUN_14019dca0(&local_208,1,0,param_1 + 0x123);
    FUN_1404f5840(param_1);
    FUN_1404ffa00(param_1);
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack648);
    return;
}



undefined8 FUN_1404f54f0(undefined8 param_1,ulonglong param_2)

{
    FUN_1404f5530();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1404f5530(undefined8 *param_1)

{
    longlong **pplVar1;
    int iVar2;

    pplVar1 = (longlong **)param_1[0x106];
    *param_1 = &PTR_LAB_140b69f70;
    if (pplVar1 != (longlong **)0x0) {
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
            *pplVar1 = (longlong *)0x0;
        }
        if (pplVar1[3] != (longlong *)0x0) {
            FUN_14018b900(pplVar1[3],0);
        }
        FUN_14018b900(pplVar1,0);
    }
    pplVar1 = (longlong **)param_1[0x105];
    if (pplVar1 != (longlong **)0x0) {
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
            *pplVar1 = (longlong *)0x0;
        }
        if (pplVar1[3] != (longlong *)0x0) {
            FUN_14018b900(pplVar1[3],0);
        }
        FUN_14018b900(pplVar1,0);
    }
    if ((undefined8 *)param_1[0x80] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x80] = param_1[0x81];
    }
    if (param_1[0x81] != 0) {
        *(undefined8 *)(param_1[0x81] + 0x400) = param_1[0x80];
    }
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    if ((longlong *)param_1[0x123] != (longlong *)0x0) {
        iVar2 = (**(code **)(*(longlong *)param_1[0x123] + 0x18))();
        if (0 < iVar2) {
            (**(code **)(*(longlong *)param_1[0x123] + 0x70))();
        }
    }
    FUN_1405005b0(param_1 + 0x117);
    FUN_140019490(param_1 + 0x117);
    if (param_1[0x38e] != 0) {
        FUN_14018b900(param_1[0x38e],0);
    }
    FUN_140008410(param_1 + 0x389);
    FUN_14018b900(param_1[0x38a],0);
    if (param_1[0x386] != 0) {
        FUN_14018b900(param_1[0x386],0);
    }
    FUN_14002ea60(param_1 + 0x124);
    if (param_1[0x37f] != 0) {
        FUN_14018b900(param_1[0x37f],0);
    }
    FUN_140008410(param_1 + 0x37a);
    FUN_14018b900(param_1[0x37b],0);
    FUN_14002e4a0(param_1 + 0x36f);
    if ((longlong *)param_1[0x123] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x123] + 8))();
    }
    FUN_140019490(param_1 + 0x117);
    FUN_14018b900(param_1[0x119],0);
    param_1[0x119] = 0;
    if ((longlong *)param_1[0x115] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x115] + 8))();
    }
    if ((longlong *)param_1[0x114] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x114] + 8))();
    }
    if ((longlong *)param_1[0x112] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x112] + 8))();
    }
    if ((longlong *)param_1[0x111] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x111] + 8))();
    }
    if ((longlong *)param_1[0x110] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x110] + 8))();
    }
    if ((longlong *)param_1[0x10f] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10f] + 8))();
    }
    if ((longlong *)param_1[0x10e] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10e] + 8))();
    }
    if ((longlong *)param_1[0x10d] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10d] + 8))();
    }
    if ((longlong *)param_1[0x10c] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10c] + 8))();
    }
    if ((longlong *)param_1[0x10b] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10b] + 8))();
    }
    if ((longlong *)param_1[0x10a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x10a] + 8))();
    }
    if ((longlong *)param_1[0x109] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x109] + 8))();
    }
    if ((undefined8 *)param_1[0x80] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x80] = param_1[0x81];
    }
    if (param_1[0x81] != 0) {
        *(undefined8 *)(param_1[0x81] + 0x400) = param_1[0x80];
    }
    param_1[0x80] = 0;
    param_1[0x81] = 0;
    FUN_1400c6030(param_1);
    return;
}



void FUN_1404f5840(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    undefined local_res8 [32];

    if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))();
        if (0 < iVar1) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x848) + 0x30))();
    if (iVar1 == 0) {
        puVar2 = (undefined4 *)
                (**(code **)(**(longlong **)(param_1 + 0x848) + 0x48))
                (*(longlong **)(param_1 + 0x848),0,local_res8,2);
        if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x848) + 0x50))(*(longlong **)(param_1 + 0x848),0);
        }
        *(undefined4 *)(param_1 + 0x838) = 1;
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x30))();
    if (iVar1 == 0) {
        puVar2 = (undefined4 *)
                (**(code **)(**(longlong **)(param_1 + 0x858) + 0x48))
                (*(longlong **)(param_1 + 0x858),0,local_res8,2);
        if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0xff000000;
            (**(code **)(**(longlong **)(param_1 + 0x858) + 0x50))(*(longlong **)(param_1 + 0x858),0);
        }
        *(undefined4 *)(param_1 + 0x83c) = 1;
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x868) + 0x30))();
    if (iVar1 == 0) {
        puVar2 = (undefined4 *)
                (**(code **)(**(longlong **)(param_1 + 0x868) + 0x48))
                (*(longlong **)(param_1 + 0x868),0,local_res8,2);
        if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
            (**(code **)(**(longlong **)(param_1 + 0x868) + 0x50))(*(longlong **)(param_1 + 0x868),0);
        }
        *(undefined4 *)(param_1 + 0x840) = 1;
    }
    return;
}



void FUN_1404f5960(longlong param_1)

{
    int iVar1;

    if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))();
        if (0 < iVar1) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
    }
    *(undefined4 *)(param_1 + 0x410) = 1;
    return;
}



undefined8 FUN_1404f59a0(longlong param_1)

{
    int iVar1;
    undefined4 *puVar2;
    longlong lVar3;
    uint uVar4;
    uint uVar5;
    undefined local_18 [16];

    if ((*(byte *)(param_1 + 0x1d) & 0x80) == 0) {
        puVar2 = (undefined4 *)FUN_1400cb0e0(param_1,local_18,param_1 + 0x40);
        *(undefined4 *)(param_1 + 0x18c) = *puVar2;
        *(undefined4 *)(param_1 + 400) = puVar2[1];
        *(undefined4 *)(param_1 + 0x194) = puVar2[2];
        *(undefined4 *)(param_1 + 0x198) = puVar2[3];
        *(byte *)(param_1 + 0x1d) = *(byte *)(param_1 + 0x1d) | 0x80;
        lVar3 = param_1;
        do {
            if (*(int *)(lVar3 + 0x188) == 0) break;
            *(undefined4 *)(lVar3 + 0x188) = 0;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        } while (lVar3 != 0);
    }
    uVar4 = *(int *)(param_1 + 0x194) - *(int *)(param_1 + 0x18c);
    uVar5 = *(int *)(param_1 + 0x198) - *(int *)(param_1 + 400);
    if ((*(uint *)(param_1 + 0x428) != uVar4) || (*(uint *)(param_1 + 0x42c) != uVar5)) {
        if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))();
            if (0 < iVar1) {
                (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
            }
        }
        *(uint *)(param_1 + 0x428) = uVar4;
        *(uint *)(param_1 + 0x42c) = uVar5;
        *(float *)(param_1 + 0x430) = (float)(ulonglong)uVar4 / (float)(ulonglong)uVar5;
        FUN_1404ffa00(param_1);
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404f5aa0(longlong param_1)

{
    float *pfVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    float *pfVar5;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    undefined auVar6 [16];
    float fVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    uint uVar13;
    float fVar14;
    float fVar15;
    undefined4 uVar16;
    undefined auStack360 [32];
    undefined8 local_148;
    undefined8 local_140;
    float *local_138;
    longlong local_130;
    uint local_128;
    float *local_118;
    float **ppfStack272;
    undefined4 local_108;
    float *local_f8;
    float local_f0;
    undefined4 local_ec;
    float local_e8;
    float local_e4;
    float local_e0;
    undefined4 local_dc;
    float local_d8;
    float local_d4;
    float local_d0;
    undefined4 local_cc;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    ulonglong local_a8;

    local_a8 = DAT_140c0f7b0 ^ (ulonglong)auStack360;
    fVar15 = 1.0;
    uVar16 = 0;
    if ((*(int *)(param_1 + 0x8e0) != 0) || (*(longlong **)(param_1 + 0x908) == (longlong *)0x0))
        goto LAB_1404f5fe2;
    local_148 = param_1 + 0x4c0;
    local_130 = param_1 + 0x4d0;
    pfVar1 = (float *)(param_1 + 0x480);
    local_140 = 0;
    local_138 = pfVar1;
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x908) + 0x428))();
    if (-1 < iVar2) {
        uVar13 = 0x80000000;
        fVar14 = 0.5;
        if (*(int *)(param_1 + 0x910) == 5) {
            lVar4 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x10))();
            if (*(int *)(lVar4 + 8) != 1) {
                if ((*(byte *)(param_1 + 0x298) >> 1 & 1) != 0) {
                    local_128 = *(uint *)(param_1 + 0x900);
                    local_108 = 0;
                    uVar3 = local_128;
                    if ((int)local_128 < 0) {
                        uVar3 = 0x80000000 - local_128;
                    }
                    if ((int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f)) < 0x55) goto LAB_1404f5d9b;
                }
                pfVar5 = (float *)(param_1 + 0x440);
                local_f8 = pfVar1;
                FUN_1401afc20(&local_f8);
                fVar9 = fRam0000000140c77884 * pfVar5[4] + _DAT_140c77880 * *pfVar5 + pfVar5[8] * 0.0 +
                        pfVar5[0xc];
                fVar10 = fRam0000000140c77884 * pfVar5[5] + _DAT_140c77880 * pfVar5[1] + pfVar5[9] * 0.0 +
                         pfVar5[0xd];
                fVar11 = fRam0000000140c77884 * pfVar5[6] + _DAT_140c77880 * pfVar5[2] + pfVar5[10] * 0.0 +
                         pfVar5[0xe];
                fVar12 = fRam0000000140c77884 * pfVar5[7] + _DAT_140c77880 * pfVar5[3] + pfVar5[0xb] * 0.0 +
                         pfVar5[0xf];
                fVar7 = fVar10 * fVar10;
                fVar8 = fVar9 * fVar9 + fVar7 + 0.0;
                auVar6 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                                 CONCAT124(SUB1612(CONCAT412(fVar12 * fVar12,
                                                             CONCAT48(fVar11 * fVar11,
                                                                      CONCAT44(fVar7,fVar9 * fVar9))) >>
                                                                                                      0x20,0),fVar8));
                fVar7 = SUB164(auVar6,0);
                fVar7 = (3.0 - fVar8 * fVar7 * fVar7) * fVar14 * fVar7;
                if (fVar7 <= 0.0) {
                    fVar7 = 0.0;
                }
                fVar14 = (fVar15 - *(float *)(param_1 + 0x900) * 0.7) *
                         SQRT(*(float *)(param_1 + 0x470) * *(float *)(param_1 + 0x470) +
                              *(float *)(param_1 + 0x474) * *(float *)(param_1 + 0x474) + 0.0);
                *(float *)(param_1 + 0x470) = fVar14 * fVar7 * fVar9;
                *(float *)(param_1 + 0x474) = fVar14 * fVar7 * fVar10;
                *(float *)(param_1 + 0x478) = fVar14 * fVar7 * fVar11;
                fVar14 = (float)((uint)(*(float *)(param_1 + 0x904) * 0.1) ^ uVar13);
                fVar14 = (*(float *)(param_1 + 0x904) - fVar14) * *(float *)(param_1 + 0x900) + fVar14;
                fVar7 = fVar14 * fRam0000000140c77874;
                fVar8 = fVar14 * fRam0000000140c77878;
                *(float *)(param_1 + 0x470) = *(float *)(param_1 + 0x470) - fVar14 * _DAT_140c77870;
                *(float *)(param_1 + 0x474) = *(float *)(param_1 + 0x474) - fVar7;
                *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x478) - fVar8;
                local_f8 = pfVar5;
                FUN_1401afc20(&local_f8,pfVar1);
            }
        }
        LAB_1404f5d9b:
        FUN_1408fe3d0();
        fVar8 = extraout_XMM0_Da;
        FUN_1408fc950();
        fVar7 = extraout_XMM0_Da_00;
        FUN_1408fe3d0();
        fVar14 = extraout_XMM0_Da_01;
        FUN_1408fc950();
        local_ec = 0;
        fVar9 = extraout_XMM0_Da_02 * fVar8 * fVar7 + fVar14 * fVar7 * fVar8;
        fVar10 = fVar14 * fVar7 * fVar7 - extraout_XMM0_Da_02 * fVar8 * fVar8;
        fVar7 = fVar14 * fVar8 * fVar8 + extraout_XMM0_Da_02 * fVar7 * fVar7;
        fVar14 = fVar10 * 2.0;
        local_d4 = fVar7 * fVar9 * 2.0;
        local_e8 = fVar9 * fVar14 - fVar7 * 0.0;
        local_f0 = fVar9 * 0.0 - fVar7 * fVar14;
        local_f8 = (float *)CONCAT44(fVar9 * fVar14 + fVar7 * 0.0,(fVar15 - fVar10 * fVar14) - 0.0);
        fVar15 = fVar15 - fVar9 * fVar9 * 2.0;
        local_e0 = fVar10 * 0.0 + local_d4;
        ppfStack272 = &local_f8;
        local_dc = 0;
        local_cc = 0;
        local_e4 = fVar15 - 0.0;
        local_d0 = fVar15 - fVar10 * fVar14;
        local_d8 = fVar9 * 0.0 + fVar7 * fVar14;
        local_d4 = fVar10 * 0.0 - local_d4;
        local_c8 = 0;
        uStack196 = 0;
        uStack192 = 0;
        uStack188 = 0x3f800000;
        local_118 = pfVar1;
        FUN_1401afb10(&local_118,pfVar1);
        local_f8 = pfVar1;
        FUN_1401afc20(&local_f8,param_1 + 0x440);
    }
    LAB_1404f5fe2:
    local_148 = CONCAT44(local_148._4_4_,uVar16);
    (**(code **)(**(longlong **)(param_1 + 0x878) + 0x30))
            (*(longlong **)(param_1 + 0x878),param_1 + 0x4b0,param_1 + 0x4d0,
             *(undefined4 *)(param_1 + 0x42c));
    (**(code **)(**(longlong **)(param_1 + 0x878) + 0x158))();
    (**(code **)(**(longlong **)(param_1 + 0x878) + 0x160))(*(longlong **)(param_1 + 0x878),0);
    FUN_1407db4f0(local_a8 ^ (ulonglong)auStack360);
    return;
}



void FUN_1404f6060(undefined8 param_1,float param_2,longlong param_3)

{
    longlong **pplVar1;
    float fVar2;
    char cVar3;
    int iVar4;
    undefined4 *puVar5;
    undefined4 uVar6;
    float fVar7;
    float fVar8;
    undefined8 local_res8;
    undefined8 local_res18 [2];
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;

    if ((*(byte *)(param_3 + 0x1c) & 1) == 0) {
        return;
    }
    fVar8 = 0.0;
    if (((*(float *)(param_3 + 0x288) <= 0.0) ||
         ((*(longlong *)(param_3 + 0x10) != 0 && (cVar3 = FUN_1400d1a60(), cVar3 == '\0')))) &&
        (*(int *)(param_3 + 0x410) == 0)) {
        return;
    }
    if ((*(longlong **)(param_3 + 0x918) != (longlong *)0x0) &&
        (iVar4 = (**(code **)(**(longlong **)(param_3 + 0x918) + 0x18))(), 0 < iVar4)) {
        (**(code **)(**(longlong **)(param_3 + 0x918) + 0x70))();
    }
    fVar2 = *(float *)(param_3 + 0x8ec);
    if ((fVar8 < fVar2) &&
        (((*(int *)(param_3 + 0x8e4) != 0 || (*(int *)(param_3 + 0x8e8) != 0)) &&
          (*(longlong *)(param_3 + 0x888) != 0)))) {
        if (*(int *)(param_3 + 0x8e4) == 0) {
            fVar7 = 1.6;
        }
        else {
            fVar7 = -1.6;
        }
        if (fVar8 <= fVar2 - param_2) {
            *(float *)(param_3 + 0x8ec) = fVar2 - param_2;
            fVar8 = *(float *)(param_3 + 0x8f0) - fVar7 * param_2;
        }
        else {
            *(undefined8 *)(param_3 + 0x8e4) = 0;
            *(undefined4 *)(param_3 + 0x8ec) = 0;
            fVar8 = *(float *)(param_3 + 0x8f0) - (param_2 - fVar2) * fVar7;
        }
        fVar2 = DAT_140c460a8;
        *(float *)(param_3 + 0x8f0) = fVar8;
        uVar6 = FUN_1408fde98(fVar8,fVar2 * 2.0);
        *(undefined4 *)(param_3 + 0x8f0) = uVar6;
    }
    if ((((*(byte *)(param_3 + 0x298) >> 2 & 1) != 0) && (*(int *)(param_3 + 0x840) != 0)) &&
        ((*(longlong **)(param_3 + 0x318) != (longlong *)0x0 &&
          ((**(longlong **)(param_3 + 0x318) != 0 && (cVar3 = FUN_1401099e0(), cVar3 != '\0')))))) {
        FUN_1404ff280(param_3 + 0x868,*(undefined8 *)(param_3 + 0x318),*(undefined4 *)(param_3 + 0x428),
                      *(undefined4 *)(param_3 + 0x42c));
        *(undefined4 *)(param_3 + 0x840) = 0;
    }
    if (*(int *)(param_3 + 0x838) != 0) {
        if ((*(longlong **)(param_3 + 0x828) == (longlong *)0x0) ||
            (**(longlong **)(param_3 + 0x828) == 0)) {
            pplVar1 = (longlong **)(param_3 + 0x848);
            if (*pplVar1 != (longlong *)0x0) {
                (**(code **)(**pplVar1 + 8))();
                *pplVar1 = (longlong *)0x0;
            }
            iVar4 = (**(code **)(*DAT_140c65670 + 0x58))(DAT_140c65670,1,1,1,0,1,0,0x100,0,pplVar1);
            if (iVar4 < 0) {
                local_88 = &PTR_LAB_140b5e648;
                local_80 = 0;
                local_78 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_88);
                local_68 = local_88;
                local_res8 = 0x141e090f0;
                local_58 = local_78;
                local_60 = local_80;
                iVar4 = FUN_140197770(0xd,&local_res8,&local_68);
                local_88 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_78);
                if (iVar4 != 0) {
                    DebugBreak();
                }
            }
            iVar4 = (**(code **)(**pplVar1 + 0x30))();
            if ((iVar4 == 0) &&
                (puVar5 = (undefined4 *)(**(code **)(**pplVar1 + 0x48))(*pplVar1,0,&local_res8,2),
                        puVar5 != (undefined4 *)0x0)) {
                *puVar5 = 0;
                (**(code **)(**pplVar1 + 0x50))(*pplVar1,0);
            }
        }
        else {
            cVar3 = FUN_1401099e0();
            if (cVar3 == '\0') goto LAB_1404f637d;
            FUN_1404ff280(param_3 + 0x848,*(undefined8 *)(param_3 + 0x828),
                          *(undefined4 *)(param_3 + 0x428),*(undefined4 *)(param_3 + 0x42c));
        }
        *(undefined4 *)(param_3 + 0x838) = 0;
    }
    LAB_1404f637d:
    if (*(int *)(param_3 + 0x83c) != 0) {
        if ((*(longlong **)(param_3 + 0x830) == (longlong *)0x0) ||
            (**(longlong **)(param_3 + 0x830) == 0)) {
            pplVar1 = (longlong **)(param_3 + 0x858);
            if (*pplVar1 != (longlong *)0x0) {
                (**(code **)(**pplVar1 + 8))();
                *pplVar1 = (longlong *)0x0;
            }
            iVar4 = (**(code **)(*DAT_140c65670 + 0x58))(DAT_140c65670,1,1,1,0,1,0,0x100,0,pplVar1);
            if (iVar4 < 0) {
                local_88 = &PTR_LAB_140b5e648;
                local_80 = 0;
                local_78 = TlsGetValue(DAT_140c63720);
                TlsSetValue(DAT_140c63720,&local_88);
                local_68 = local_88;
                local_res18[0] = 0x141e09090;
                local_58 = local_78;
                local_60 = local_80;
                iVar4 = FUN_140197770(0xd,local_res18,&local_68);
                local_88 = &PTR_LAB_140b5e648;
                TlsSetValue(DAT_140c63720,local_78);
                if (iVar4 != 0) {
                    DebugBreak();
                }
            }
            iVar4 = (**(code **)(**pplVar1 + 0x30))();
            if ((iVar4 == 0) &&
                (puVar5 = (undefined4 *)(**(code **)(**pplVar1 + 0x48))(*pplVar1,0,local_res18,2),
                        puVar5 != (undefined4 *)0x0)) {
                *puVar5 = 0xff000000;
                (**(code **)(**pplVar1 + 0x50))(*pplVar1,0);
            }
        }
        else {
            cVar3 = FUN_1401099e0();
            if (cVar3 == '\0') goto LAB_1404f64ec;
            FUN_1404ff280(param_3 + 0x858,*(undefined8 *)(param_3 + 0x830),
                          *(undefined4 *)(param_3 + 0x428),*(undefined4 *)(param_3 + 0x42c));
        }
        *(undefined4 *)(param_3 + 0x83c) = 0;
    }
    LAB_1404f64ec:
    iVar4 = DAT_140c3c570;
    if (*DAT_140c63750 < DAT_140c3c570) {
        iVar4 = *DAT_140c63750;
    }
    if (((&DAT_140c3c580)[iVar4] != '\0') &&
        ((*(int *)(param_3 + 0x414) != 0 || (*(int *)(param_3 + 0x410) != 0)))) {
        FUN_1404fe4a0(param_3);
        *(undefined4 *)(param_3 + 0x410) = 1;
    }
    if ((*(int *)(param_3 + 0x8b0) == 0) && (*(longlong *)(param_3 + 0x888) != 0)) {
        FUN_1404fe990(param_3);
    }
    return;
}



undefined8 FUN_1404f6670(longlong param_1,undefined8 param_2,int param_3)

{
    int iVar1;
    undefined8 uVar2;
    float fVar3;
    float fVar4;

    if (((*(byte *)(param_1 + 0x1c) & 0x80) == 0) || ((*(byte *)(param_1 + 0x298) >> 1 & 1) != 0)) {
        uVar2 = FUN_1400d2660();
        return uVar2;
    }
    if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))();
        if (0 < iVar1) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
    }
    if (param_3 < 0) {
        fVar3 = *(float *)(param_1 + 0x900) - 0.1;
        *(undefined4 *)(param_1 + 0x410) = 1;
        if (1.0 <= fVar3) {
            fVar3 = 1.0;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar3) {
            fVar4 = fVar3;
        }
        *(float *)(param_1 + 0x900) = fVar4;
        return 0;
    }
    fVar3 = *(float *)(param_1 + 0x900) + 0.1;
    *(undefined4 *)(param_1 + 0x410) = 1;
    if (1.0 <= fVar3) {
        fVar3 = 1.0;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
        fVar4 = fVar3;
    }
    *(float *)(param_1 + 0x900) = fVar4;
    return 0;
}



void FUN_1404f6750(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    float extraout_XMM0_Da;

    if (*(int *)(param_1 + 0x8fc) != 0) {
        if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
            iVar1 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))();
            if (0 < iVar1) {
                (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
            }
        }
        FUN_1408fde98();
        *(float *)(param_1 + 0x8f0) = extraout_XMM0_Da + *(float *)(param_1 + 0x8f0);
        *(undefined4 *)(param_1 + 0x8f4) = *param_2;
        *(undefined4 *)(param_1 + 0x8f8) = param_2[1];
    }
    FUN_1400d23b0(param_1,param_2);
    return;
}



void FUN_1404f6810(longlong param_1,int param_2,undefined4 *param_3,undefined param_4)

{
    undefined4 uVar1;
    ulonglong uVar2;

    uVar2 = (ulonglong)param_2;
    if (((*(byte *)(param_1 + 0x1c) & 0x80) != 0) && ((*(byte *)(param_1 + 0x298) & 1) == 0)) {
        uVar1 = *param_3;
        *(undefined4 *)(param_1 + 0x388) = uVar1;
        *(undefined4 *)(param_1 + 0x38c) = param_3[1];
        *(undefined4 *)(param_1 + 0x360 + uVar2 * 8) = uVar1;
        *(undefined4 *)(param_1 + 0x364 + uVar2 * 8) = *(undefined4 *)(param_1 + 0x38c);
        uVar1 = FUN_14018cdf0();
        *(undefined4 *)(param_1 + 0x3a4) = uVar1;
        *(undefined4 *)(param_1 + 0x390 + uVar2 * 4) = uVar1;
        if (param_2 == 0) {
            *(undefined4 *)(param_1 + 0x8f4) = *param_3;
            *(undefined4 *)(param_1 + 0x8f8) = param_3[1];
        }
        *(undefined4 *)(param_1 + 0x8fc) = 1;
    }
    FUN_1400d2120(param_1,uVar2 & 0xffffffff,param_3,param_4);
    return;
}



undefined8 FUN_1404f68e0(longlong param_1,short *param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    undefined8 uVar3;

    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
        pplVar1 = *(longlong ***)(param_1 + 0x828);
        if ((pplVar1 != (longlong **)0x0) && (*pplVar1 != (longlong *)0x0)) {
            (**(code **)(**pplVar1 + 8))();
            *pplVar1 = (longlong *)0x0;
        }
    }
    else {
        if (*(longlong *)(param_1 + 0x828) == 0) {
            lVar2 = FUN_14018b280(0x30);
            if (lVar2 != 0) {
                lVar2 = FUN_1401095e0(lVar2);
            }
            *(longlong *)(param_1 + 0x828) = lVar2;
        }
        if (*(longlong *)(param_1 + 0x20) == 0) {
            return 0x80004005;
        }
        uVar3 = FUN_140109710(*(undefined8 *)(param_1 + 0x828),*(longlong *)(param_1 + 0x20) + 0xf0,
                              param_2,1);
        if ((int)uVar3 < 0) {
            return uVar3;
        }
    }
    *(undefined4 *)(param_1 + 0x838) = 1;
    *(undefined4 *)(param_1 + 0x410) = 1;
    return 0;
}



void FUN_1404f69b0(longlong param_1,longlong param_2,int param_3)

{
    longlong *plVar1;
    bool bVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong *plVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong **pplVar10;
    ulonglong uVar11;
    undefined auStack408 [32];
    undefined4 local_178;
    longlong *local_168;
    longlong *local_160;
    int local_158;
    int local_154;
    longlong *local_150;
    longlong local_148;
    longlong local_140;
    undefined8 local_138;
    undefined8 local_130;
    undefined8 local_128;
    undefined4 local_120;
    undefined local_11c [64];
    undefined8 local_dc;
    undefined8 local_d4;
    undefined8 local_cc;
    undefined8 local_c0;
    undefined8 local_b8;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined4 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined4 local_50;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack408;
    local_154 = param_3;
    local_140 = param_1;
    if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar3)) {
        (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
    }
    plVar9 = (longlong *)0x0;
    plVar8 = (longlong *)0x0;
    local_168 = (longlong *)0x0;
    local_160 = (longlong *)0x0;
    if (((param_2 == 0) || (*(longlong *)(param_1 + 0x890) == 0)) ||
        (param_2 != *(longlong *)(*(longlong *)(param_1 + 0x890) + 0x10))) {
        bVar2 = false;
        plVar7 = *(longlong **)(param_1 + 0x890);
        local_158 = 0;
        if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 8))();
            *(longlong **)(param_1 + 0x890) = (longlong *)0x0;
        }
        *(undefined4 *)(param_1 + 0x898) = 0;
    }
    else {
        bVar2 = true;
        local_158 = 1;
        if (*(undefined8 **)(param_1 + 0x878) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(param_1 + 0x878))();
            local_160 = *(longlong **)(param_1 + 0x878);
        }
        plVar8 = local_160;
        if (*(undefined8 **)(param_1 + 0x870) != (undefined8 *)0x0) {
            (**(code **)**(undefined8 **)(param_1 + 0x870))();
            plVar9 = *(longlong **)(param_1 + 0x870);
            local_168 = plVar9;
        }
    }
    pplVar10 = (longlong **)(param_1 + 0x890);
    if (param_2 == 0) {
        if (!bVar2) {
            LAB_1404f6d05:
            if (*(undefined8 **)(param_1 + 0x400) != (undefined8 *)0x0) {
                **(undefined8 **)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x408);
            }
            plVar7 = (longlong *)(param_1 + 0x408);
            if (*plVar7 != 0) {
                *(undefined8 *)(*plVar7 + 0x400) = *(undefined8 *)(param_1 + 0x400);
            }
            *(undefined8 *)(param_1 + 0x400) = 0;
            *plVar7 = 0;
            if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
                (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar3)) {
                (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
            }
            FUN_1405005b0(param_1 + 0x8b8);
            FUN_140019490(param_1 + 0x8b8);
            if (*(longlong **)(param_1 + 0x880) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x880) + 8))();
                *(undefined8 *)(param_1 + 0x880) = 0;
            }
            if (*(longlong **)(param_1 + 0x888) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x888) + 8))();
                *(undefined8 *)(param_1 + 0x888) = 0;
            }
            if (*(longlong **)(param_1 + 0x878) != plVar8) {
                if (plVar8 != (longlong *)0x0) {
                    (**(code **)*plVar8)(plVar8);
                }
                if (*(longlong **)(param_1 + 0x878) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 0x878) + 8))();
                }
                *(longlong **)(param_1 + 0x878) = plVar8;
            }
            if (*(longlong **)(param_1 + 0x870) != plVar9) {
                if (plVar9 != (longlong *)0x0) {
                    (**(code **)*plVar9)(plVar9);
                }
                if (*(longlong **)(param_1 + 0x870) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 0x870) + 8))();
                }
                *(longlong **)(param_1 + 0x870) = plVar9;
            }
            *(undefined4 *)(param_1 + 0x410) = 1;
            if (param_2 != 0) {
                FUN_1404fea70(param_1);
                plVar1 = (longlong *)(param_2 + 0x15b8);
                if (*(longlong *)(param_1 + 0x400) == 0) {
                    *(longlong **)(param_1 + 0x400) = plVar1;
                    *plVar7 = *plVar1;
                    *plVar1 = param_1;
                    if (*plVar7 != 0) {
                        *(longlong **)(*plVar7 + 0x400) = plVar7;
                    }
                }
            }
            if (*(longlong *)(param_1 + 0x878) != 0) {
                if (param_3 == 0) {
                    if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
                        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar3)) {
                        (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
                    }
                    plVar7 = *(longlong **)(param_1 + 0x878);
                    if (plVar7 != (longlong *)0x0) {
                        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x40))(plVar7,0x14);
                        if ((*plVar7 != 0) && (*(int *)(*plVar7 + 0x10) == 0x2e)) goto LAB_1404f6ec4;
                    }
                    uVar6 = 0;
                }
                else {
                    LAB_1404f6ec4:
                    uVar6 = 3;
                }
                (**(code **)(**(longlong **)(param_1 + 0x878) + 0xa8))
                        (*(longlong **)(param_1 + 0x878),uVar6,3);
            }
            goto LAB_1404f6edf;
        }
        LAB_1404f6f49:
        uVar4 = 0x17;
    }
    else {
        local_150 = (longlong *)FUN_1404670b0(param_2);
        if (local_150 == (longlong *)0x0) {
            if (!bVar2) {
                local_128 = 2;
                local_120 = 0x3f800000;
                local_138 = 0;
                local_130 = 0;
                FUN_1407e4830(local_11c,0,0x40);
                local_90 = 0;
                local_88 = 0;
                local_80 = 0;
                local_dc = 0;
                local_d4 = 0;
                local_cc = 0;
                local_c0 = 0;
                local_b8 = 0;
                local_b0 = 0;
                local_a8 = 0;
                local_a0 = 0;
                local_98 = 0;
                local_78 = 0;
                local_70 = 0;
                local_68 = 0;
                local_60 = 0;
                local_58 = 0;
                local_50 = 0;
                FUN_140466ec0(param_2,&local_138);
                iVar3 = FUN_1402ec590();
                plVar9 = local_168;
                if ((iVar3 < 0) ||
                    (iVar3 = FUN_1401db2a0(local_168,&local_138,&local_160), plVar8 = local_160, iVar3 < 0))
                    goto LAB_1404f6fd4;
                FUN_140456910(param_2,pplVar10);
                *(undefined4 *)(param_1 + 0x898) = 0;
                plVar8 = local_160;
                goto LAB_1404f6d05;
            }
        }
        else {
            lVar5 = (**(code **)(*local_150 + 0x10))(local_150);
            local_148 = lVar5;
            if ((!bVar2) &&
                ((iVar3 = FUN_1402ec590(), plVar9 = local_168, iVar3 < 0 ||
                                                               (iVar3 = FUN_1401db2a0(local_168,lVar5,&local_160), plVar8 = local_160, iVar3 < 0))))
                goto LAB_1404f6fd4;
            plVar7 = local_150;
            uVar11 = 0;
            do {
                lVar5 = *plVar8;
                uVar6 = (**(code **)(*plVar7 + 0x40))(plVar7,uVar11 & 0xffffffff);
                (**(code **)(lVar5 + 0x48))(plVar8,uVar11 & 0xffffffff,uVar6);
                param_1 = local_140;
                uVar11 = uVar11 + 1;
            } while (uVar11 < 0x48);
            if (*(longlong *)(param_2 + 0xd30) != *(longlong *)(param_2 + 0xd38)) {
                lVar5 = DAT_140c658e8;
                if ((*(uint *)(local_148 + 0xc) < 0x11) && (*(uint *)(local_148 + 0x10) < 3)) {
                    lVar5 = (longlong)(int)*(uint *)(local_148 + 0x10) * 0x50 +
                                           *(longlong *)
                                                   ((longlong)(int)*(uint *)(local_148 + 0xc) * 0x20 + 8 +
                                                                   *(longlong *)(DAT_140c658e8 + 0x58));
                }
                (**(code **)(*plVar8 + 0x138))(plVar8,param_2 + 0xd28,lVar5);
            }
            if (local_158 == 0) {
                if (pplVar10 != (longlong **)0x0) {
                    if (*pplVar10 != (longlong *)0x0) {
                        (**(code **)(**pplVar10 + 8))();
                        *pplVar10 = (longlong *)0x0;
                    }
                    *pplVar10 = *(longlong **)(param_2 + 0x78);
                    if (*(undefined8 **)(param_2 + 0x78) != (undefined8 *)0x0) {
                        (**(code **)**(undefined8 **)(param_2 + 0x78))();
                    }
                }
                uVar4 = (**(code **)(*local_150 + 0x20))();
                *(undefined4 *)(param_1 + 0x898) = uVar4;
                param_3 = local_154;
                goto LAB_1404f6d05;
            }
        }
        LAB_1404f6edf:
        if (param_2 == 0) goto LAB_1404f6f49;
        if (*(longlong **)(param_2 + 0x110) == (longlong *)0x0) {
            uVar4 = 0;
        }
        else {
            uVar4 = (**(code **)(**(longlong **)(param_2 + 0x110) + 0x18))();
        }
        *(undefined4 *)(param_1 + 0x1c1c) = uVar4;
        FUN_140031e80(param_1 + 0x1b78);
        local_178 = *(undefined4 *)(param_1 + 0x1c1c);
        FUN_1400321c0();
        if (*(int *)(param_2 + 0x80) == 0x21) goto LAB_1404f6fd4;
        uVar4 = *(undefined4 *)(param_2 + 0xdc);
    }
    *(undefined4 *)(param_1 + 0x1c20) = uVar4;
    iVar3 = FUN_14002e510(param_1 + 0x920,*(undefined8 *)(param_1 + 0x878),0);
    if (-1 < iVar3) {
        FUN_140500890(param_1 + 0x1c28,param_1 + 0x1bf0);
        FUN_140433a70(param_1 + 0x1c48,param_1 + 0x1b90);
        FUN_140030010(param_1 + 0x920,param_1 + 0x1c68,*(undefined8 *)(param_1 + 0x878));
        *(undefined4 *)(param_1 + 0x1c88) = *(undefined4 *)(param_1 + 0x1c14);
        *(undefined4 *)(param_1 + 0x1c8c) = *(undefined4 *)(param_1 + 0x1c18);
    }
    LAB_1404f6fd4:
    if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 8))(plVar8);
    }
    if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack408);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404f7040(longlong param_1,undefined8 param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    longlong *plVar3;
    longlong *plVar4;
    int iVar5;
    longlong lVar6;
    code *pcVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong *plVar10;
    undefined auStack424 [48];
    longlong *local_178;
    longlong *local_170;
    longlong *local_168 [4];
    undefined local_148 [256];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
        (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar5)) {
        (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
    }
    local_170 = (longlong *)0x0;
    local_178 = (longlong *)0x0;
    iVar5 = FUN_1402ec590();
    plVar4 = local_170;
    plVar9 = (longlong *)0x0;
    if ((-1 < iVar5) &&
        (iVar5 = FUN_1401db2a0(local_170,param_2,&local_178), plVar9 = local_178, -1 < iVar5)) {
        local_170 = (longlong *)0x0;
        local_168[0] = (longlong *)0x0;
        local_168[1] = (longlong *)0x0;
        local_168[2] = (longlong *)0x0;
        local_168[3] = (longlong *)0x0;
        pcVar7 = DAT_140c63840;
        do {
            plVar3 = *(longlong **)((longlong)(local_168 + 2) + (longlong)local_170);
            plVar8 = *(longlong **)((longlong)local_168 + (longlong)local_170);
            plVar10 = (longlong *)0x0;
            local_178 = plVar8;
            if (plVar3 != (longlong *)0x0) {
                do {
                    uVar1 = *(undefined4 *)((longlong)plVar8 + (longlong)plVar10 * 4);
                    if (pcVar7 == (code *)0x0) {
                        if ((_DAT_140c64f64 == 0) &&
                            (iVar5 = FUN_14020bac0(), pcVar7 = DAT_140c63840, plVar8 = local_178, -1 < iVar5)) {
                            lVar6 = (**(code **)(*DAT_140c654e8 + 0x18))(DAT_140c654e8,uVar1);
                            goto LAB_1404f7178;
                        }
                    }
                    else {
                        lVar6 = (*pcVar7)(&PTR_u_ItemDisplay_140a6ada8,uVar1,DAT_140c63858);
                        LAB_1404f7178:
                        pcVar7 = DAT_140c63840;
                        plVar8 = local_178;
                        if (lVar6 != 0) {
                            uVar2 = *(undefined4 *)(lVar6 + 0x10);
                            if (DAT_140c63840 == (code *)0x0) {
                                if ((_DAT_140c650d4 != 0) ||
                                    (iVar5 = FUN_14020a140(), pcVar7 = DAT_140c63840, plVar8 = local_178, iVar5 < 0))
                                    goto LAB_1404f7213;
                                lVar6 = (**(code **)(*DAT_140c64ac8 + 0x18))(DAT_140c64ac8,uVar2);
                            }
                            else {
                                lVar6 = (*DAT_140c63840)(&PTR_u_Item2Type_140a6ac58,uVar2,DAT_140c63858);
                            }
                            pcVar7 = DAT_140c63840;
                            plVar8 = local_178;
                            if ((lVar6 != 0) &&
                                (iVar5 = (**(code **)(*plVar9 + 0x50))(plVar9,*(undefined4 *)(lVar6 + 8),uVar1,0),
                                 pcVar7 = DAT_140c63840, plVar8 = local_178, iVar5 < 0)) {
                                FUN_1401b3450(local_148,0x80);
                                FUN_1400035b0(0x16);
                                pcVar7 = DAT_140c63840;
                                plVar8 = local_178;
                            }
                        }
                    }
                    LAB_1404f7213:
                    plVar10 = (longlong *)((longlong)plVar10 + 1);
                } while (plVar10 < plVar3);
            }
            local_170 = local_170 + 1;
        } while (local_170 < &DAT_00000010);
        if (*(undefined8 **)(param_1 + 0x400) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x408);
        }
        if (*(longlong *)(param_1 + 0x408) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x400) = *(undefined8 *)(param_1 + 0x400);
        }
        *(undefined8 *)(param_1 + 0x400) = 0;
        *(undefined8 *)(param_1 + 0x408) = 0;
        if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
            (iVar5 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar5)) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
        FUN_1405005b0(param_1 + 0x8b8);
        FUN_140019490(param_1 + 0x8b8);
        if (*(longlong **)(param_1 + 0x880) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x880) + 8))();
            *(undefined8 *)(param_1 + 0x880) = 0;
        }
        if (*(longlong **)(param_1 + 0x888) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x888) + 8))();
            *(undefined8 *)(param_1 + 0x888) = 0;
        }
        if (*(longlong **)(param_1 + 0x878) != plVar9) {
            if (plVar9 != (longlong *)0x0) {
                (**(code **)*plVar9)(plVar9);
            }
            if (*(longlong **)(param_1 + 0x878) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x878) + 8))();
            }
            *(longlong **)(param_1 + 0x878) = plVar9;
        }
        if (*(longlong **)(param_1 + 0x870) != plVar4) {
            if (plVar4 != (longlong *)0x0) {
                (**(code **)*plVar4)(plVar4);
            }
            if (*(longlong **)(param_1 + 0x870) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x870) + 8))();
            }
            *(longlong **)(param_1 + 0x870) = plVar4;
        }
        *(undefined4 *)(param_1 + 0x410) = 1;
        if (*(longlong **)(param_1 + 0x890) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x890) + 8))();
            *(undefined8 *)(param_1 + 0x890) = 0;
        }
        *(undefined4 *)(param_1 + 0x898) = 0;
    }
    if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 8))(plVar9);
    }
    if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack424);
    return;
}



longlong * FUN_1404f73e0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong *plVar6;
    longlong *local_res8;
    longlong *local_res10;

    if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
        (iVar2 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar2)) {
        (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
    }
    if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
        lVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
        if (lVar4 != 0) {
            plVar6 = (longlong *)0x0;
            local_res8 = (longlong *)0x0;
            local_res10 = (longlong *)0x0;
            uVar3 = FUN_1402ec590();
            plVar1 = local_res10;
            plVar5 = plVar6;
            if (((((int)uVar3 < 0) ||
                  (uVar3 = FUN_1401db2a0(local_res10,lVar4,&local_res8), plVar5 = local_res8,
                          (int)uVar3 < 0)) ||
                 (uVar3 = FUN_14002f5d0(param_2 + 0x20,local_res8,*(undefined8 *)(param_1 + 0x870)),
                         (int)uVar3 < 0)) || (uVar3 = FUN_140030080(param_2 + 0x20,plVar5), (int)uVar3 < 0)) {
                plVar6 = (longlong *)(ulonglong)uVar3;
            }
            else {
                FUN_140453d40(param_1);
                FUN_1404fe940(param_1);
                if (*(longlong **)(param_1 + 0x880) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 0x880) + 8))();
                    *(undefined8 *)(param_1 + 0x880) = 0;
                }
                if (*(longlong **)(param_1 + 0x888) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 0x888) + 8))();
                    *(undefined8 *)(param_1 + 0x888) = 0;
                }
                if (*(longlong **)(param_1 + 0x878) != plVar5) {
                    if (plVar5 != (longlong *)0x0) {
                        (**(code **)*plVar5)(plVar5);
                    }
                    if (*(longlong **)(param_1 + 0x878) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(param_1 + 0x878) + 8))();
                    }
                    *(longlong **)(param_1 + 0x878) = plVar5;
                }
                if (*(longlong **)(param_1 + 0x870) != plVar1) {
                    if (plVar1 != (longlong *)0x0) {
                        (**(code **)*plVar1)(plVar1);
                    }
                    if (*(longlong **)(param_1 + 0x870) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(param_1 + 0x870) + 8))();
                    }
                    *(longlong **)(param_1 + 0x870) = plVar1;
                }
                *(undefined4 *)(param_1 + 0x410) = 1;
                if (*(longlong **)(param_1 + 0x890) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(param_1 + 0x890) + 8))();
                    *(undefined8 *)(param_1 + 0x890) = 0;
                }
                *(undefined4 *)(param_1 + 0x898) = 0;
            }
            if (plVar5 != (longlong *)0x0) {
                (**(code **)(*plVar5 + 8))(plVar5);
            }
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
            return plVar6;
        }
        return (longlong *)0x80004005;
    }
    return (longlong *)0x80004005;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404f75d0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                   longlong param_5,longlong param_6)

{
    undefined4 uVar1;
    longlong *plVar2;
    int iVar3;
    longlong *plVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong *plVar7;
    undefined auStack424 [48];
    longlong *local_178;
    longlong *local_170;
    undefined4 local_168;
    longlong local_160;
    longlong local_158;
    undefined local_148 [256];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack424;
    local_158 = param_6;
    local_160 = param_2;
    if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar3)) {
        (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
    }
    plVar7 = (longlong *)0x0;
    local_170 = (longlong *)0x0;
    local_178 = (longlong *)0x0;
    iVar3 = FUN_1402ec590();
    plVar2 = local_170;
    if ((-1 < iVar3) &&
        (iVar3 = FUN_1401db2a0(local_170,param_2,&local_178), plVar7 = local_178, -1 < iVar3)) {
        if (param_5 != 0) {
            param_3 = param_3 - (longlong)param_4;
            do {
                uVar1 = *(undefined4 *)(param_3 + (longlong)param_4);
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64f64 == 0) && (iVar3 = FUN_14020bac0(), -1 < iVar3)) {
                        plVar4 = (longlong *)(**(code **)(*DAT_140c654e8 + 0x18))(DAT_140c654e8,uVar1);
                        goto LAB_1404f76f6;
                    }
                }
                else {
                    plVar4 = (longlong *)(*DAT_140c63840)(&PTR_u_ItemDisplay_140a6ada8,uVar1,DAT_140c63858);
                    LAB_1404f76f6:
                    if ((plVar4 != (longlong *)0x0) &&
                        (lVar5 = FUN_14020a3a0(*(undefined4 *)(plVar4 + 2)), lVar5 != 0)) {
                        local_168 = *param_4;
                        local_170 = plVar4;
                        iVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
                        if (iVar3 < 0) {
                            uVar6 = FUN_1401b3450(local_148);
                            FUN_1400035b0(0x16,1,0,uVar6);
                        }
                    }
                }
                param_4 = param_4 + 1;
                param_5 = param_5 + -1;
                param_2 = local_160;
            } while (param_5 != 0);
        }
        if (local_158 != 0) {
            lVar5 = DAT_140c658e8;
            if ((*(uint *)(param_2 + 0xc) < 0x11) && (*(uint *)(param_2 + 0x10) < 3)) {
                lVar5 = (longlong)(int)*(uint *)(param_2 + 0x10) * 0x50 +
                                       *(longlong *)
                                               ((longlong)(int)*(uint *)(param_2 + 0xc) * 0x20 + 8 +
                                                               *(longlong *)(DAT_140c658e8 + 0x58));
            }
            (**(code **)(*plVar7 + 0x138))(plVar7,local_158,lVar5);
        }
        if (*(undefined8 **)(param_1 + 0x400) != (undefined8 *)0x0) {
            **(undefined8 **)(param_1 + 0x400) = *(undefined8 *)(param_1 + 0x408);
        }
        if (*(longlong *)(param_1 + 0x408) != 0) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x400) = *(undefined8 *)(param_1 + 0x400);
        }
        *(undefined8 *)(param_1 + 0x400) = 0;
        *(undefined8 *)(param_1 + 0x408) = 0;
        if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
            (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar3)) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
        FUN_1405005b0(param_1 + 0x8b8);
        FUN_140019490(param_1 + 0x8b8);
        if (*(longlong **)(param_1 + 0x880) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x880) + 8))();
            *(undefined8 *)(param_1 + 0x880) = 0;
        }
        if (*(longlong **)(param_1 + 0x888) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x888) + 8))();
            *(undefined8 *)(param_1 + 0x888) = 0;
        }
        if (*(longlong **)(param_1 + 0x878) != plVar7) {
            if (plVar7 != (longlong *)0x0) {
                (**(code **)*plVar7)(plVar7);
            }
            if (*(longlong **)(param_1 + 0x878) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x878) + 8))();
            }
            *(longlong **)(param_1 + 0x878) = plVar7;
        }
        if (*(longlong **)(param_1 + 0x870) != plVar2) {
            if (plVar2 != (longlong *)0x0) {
                (**(code **)*plVar2)(plVar2);
            }
            if (*(longlong **)(param_1 + 0x870) != (longlong *)0x0) {
                (**(code **)(**(longlong **)(param_1 + 0x870) + 8))();
            }
            *(longlong **)(param_1 + 0x870) = plVar2;
        }
        *(undefined4 *)(param_1 + 0x410) = 1;
        if (*(longlong **)(param_1 + 0x890) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x890) + 8))();
            *(undefined8 *)(param_1 + 0x890) = 0;
        }
        *(undefined4 *)(param_1 + 0x898) = 0;
    }
    if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 8))(plVar7);
    }
    if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack424);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1404f7960(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
    ulonglong uVar1;
    int iVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    int *piVar9;
    longlong lVar10;
    undefined8 *puVar11;
    ulonglong *puVar12;
    ulonglong uVar13;
    longlong *plVar14;
    longlong lVar15;
    ulonglong uVar16;
    int *piVar17;
    uint uVar18;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined auStack392 [32];
    longlong local_168;
    undefined8 local_160;
    ulonglong local_158;
    longlong local_150;
    longlong local_148;
    longlong local_140;
    undefined local_138 [240];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack392;
    local_148 = param_3;
    if ((*(longlong **)(param_3 + 0x918) != (longlong *)0x0) &&
        (iVar2 = (**(code **)(**(longlong **)(param_3 + 0x918) + 0x18))(), 0 < iVar2)) {
        (**(code **)(**(longlong **)(param_3 + 0x918) + 0x70))();
    }
    local_140 = FUN_1404835c0(DAT_140c65918,param_4);
    lVar7 = DAT_140c65918;
    lVar5 = FUN_1404835c0(DAT_140c65918,param_4);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 0x15c) == 0)) {
        lVar7 = 0;
    }
    else {
        uVar6 = FUN_140484600(lVar7 + 0x50);
        lVar7 = FUN_1404846c0(uVar6);
    }
    lVar5 = DAT_140c65918;
    local_150 = lVar7;
    lVar8 = FUN_1404835c0(DAT_140c65918,param_4);
    if ((lVar8 == 0) || (*(int *)(lVar8 + 0x160) == 0)) {
        piVar9 = (int *)0x0;
        uVar6 = extraout_XMM0_Qa;
    }
    else {
        uVar6 = FUN_140484600(lVar5 + 0x70);
        piVar9 = (int *)FUN_1404846c0(uVar6);
        uVar6 = extraout_XMM0_Qa_00;
    }
    if (lVar7 != 0) {
        FUN_1401dab50(uVar6,param_2,0x3f800000,local_138,lVar7);
        local_168 = 0;
        local_158 = 0;
        lVar5 = 0;
        lVar8 = 0;
        if (piVar9 != (int *)0x0) {
            uVar18 = 0;
            lVar15 = 0;
            lVar10 = 0;
            do {
                uVar16 = local_158;
                piVar17 = piVar9 + 1;
                lVar7 = local_150;
                lVar5 = lVar15;
                lVar8 = lVar10;
                if (*piVar17 == 0) break;
                lVar7 = FUN_14018db00(lVar10,local_168 + 1,4);
                *(int *)(local_168 * 4 + lVar7) = *piVar17;
                if ((lVar10 != lVar7) && (FUN_1407db590(lVar7,lVar10), lVar8 = lVar7, lVar10 != 0)) {
                    (**(code **)(*(longlong *)(lVar10 + -0x10) + 8))(lVar10 + -0x10);
                }
                local_168 = local_168 + 1;
                uVar6 = FUN_14020b8e0(piVar9[7]);
                uVar3 = FUN_1401dc0d0(uVar6);
                uVar16 = uVar16 + 1;
                lVar7 = FUN_14018db00(lVar15,uVar16,4);
                *(undefined4 *)(local_158 * 4 + lVar7) = uVar3;
                if ((lVar15 != lVar7) && (FUN_1407db590(lVar7,lVar15), lVar5 = lVar7, lVar15 != 0)) {
                    (**(code **)(*(longlong *)(lVar15 + -0x10) + 8))(lVar15 + -0x10);
                }
                uVar18 = uVar18 + 1;
                lVar7 = local_150;
                lVar15 = lVar5;
                lVar10 = lVar8;
                piVar9 = piVar17;
                local_158 = uVar16;
            } while (uVar18 < 6);
        }
        uVar16 = local_158;
        local_158 = local_158 & 0xffffffff00000000;
        piVar9 = (int *)(lVar7 + 0xc0);
        do {
            lVar7 = lVar5;
            lVar15 = lVar8;
            if (*piVar9 == 0) break;
            lVar10 = FUN_14018db00(lVar8,local_168 + 1,4);
            *(int *)(local_168 * 4 + lVar10) = *piVar9;
            if ((lVar8 != lVar10) && (FUN_1407db590(lVar10,lVar8), lVar15 = lVar10, lVar8 != 0)) {
                (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
            }
            iVar2 = *piVar9;
            local_168 = local_168 + 1;
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64f64 == 0) && (iVar4 = FUN_14020bac0(), -1 < iVar4)) {
                    lVar8 = (**(code **)(*DAT_140c654e8 + 0x18))(DAT_140c654e8,iVar2);
                    goto LAB_1404f7c19;
                }
                LAB_1404f7c34:
                uVar3 = 0;
            }
            else {
                lVar8 = (*DAT_140c63840)(&PTR_u_ItemDisplay_140a6ada8,iVar2,DAT_140c63858);
                LAB_1404f7c19:
                if (lVar8 == 0) goto LAB_1404f7c34;
                uVar3 = *(undefined4 *)(lVar8 + 0xf4);
            }
            if (DAT_140c63840 == (code *)0x0) {
                if (_DAT_140c63da4 == 0) {
                    iVar2 = FUN_14020b680();
                    if (iVar2 < 0) {
                        uVar6 = 0;
                    }
                    else {
                        uVar6 = (**(code **)(*DAT_140c64ba8 + 0x18))(DAT_140c64ba8,uVar3);
                    }
                }
                else {
                    uVar6 = 0;
                }
            }
            else {
                uVar6 = (*DAT_140c63840)(&PTR_u_ItemColorSet_140a6ad70,uVar3,DAT_140c63858);
            }
            uVar3 = FUN_1401dc0d0(uVar6);
            lVar8 = FUN_14018db00(lVar5,uVar16 + 1,4);
            *(undefined4 *)(uVar16 * 4 + lVar8) = uVar3;
            if ((lVar5 != lVar8) && (FUN_1407db590(lVar8,lVar5), lVar7 = lVar8, lVar5 != 0)) {
                (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))();
            }
            uVar16 = uVar16 + 1;
            piVar9 = piVar9 + 1;
            local_158 = local_158 & 0xffffffff00000000 | (ulonglong)((int)local_158 + 1U);
            lVar5 = lVar7;
            lVar8 = lVar15;
        } while ((int)local_158 + 1U < 0x14);
        lVar5 = local_148;
        local_160 = 0;
        FUN_1404f75d0(local_148,local_138,lVar15,lVar7);
        lVar8 = local_140;
        if (*(int *)(local_140 + 0x168) != 0) {
            if (*(undefined8 **)(lVar5 + 0x400) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar5 + 0x400) = *(undefined8 *)(lVar5 + 0x408);
            }
            if (*(longlong *)(lVar5 + 0x408) != 0) {
                *(undefined8 *)(*(longlong *)(lVar5 + 0x408) + 0x400) = *(undefined8 *)(lVar5 + 0x400);
            }
            *(undefined8 *)(lVar5 + 0x400) = 0;
            *(undefined8 *)(lVar5 + 0x408) = 0;
            if ((*(longlong **)(lVar5 + 0x918) != (longlong *)0x0) &&
                (iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x918) + 0x18))(), 0 < iVar2)) {
                (**(code **)(**(longlong **)(lVar5 + 0x918) + 0x70))();
            }
            plVar14 = (longlong *)(lVar5 + 0x8b8);
            FUN_1405005b0(plVar14);
            FUN_140019490(plVar14);
            puVar11 = (undefined8 *)FUN_14018b280(8);
            if (puVar11 == (undefined8 *)0x0) {
                puVar11 = (undefined8 *)0x0;
            }
            else {
                *puVar11 = 0;
            }
            if (*plVar14 == *(longlong *)(lVar5 + 0x8c0)) {
                FUN_1400290d0(plVar14);
            }
            uVar16 = (**(code **)(lVar5 + 0x8d0))(lVar8 + 0x168);
            lVar10 = *(longlong *)(lVar5 + 0x8c8);
            uVar13 = uVar16 % *(ulonglong *)(lVar5 + 0x8c0);
            puVar12 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar12 != (ulonglong *)0x0) {
                uVar1 = *(ulonglong *)(lVar10 + uVar13 * 8);
                *puVar12 = uVar16;
                puVar12[1] = uVar1;
                uVar3 = *(undefined4 *)(lVar8 + 0x168);
                puVar12[3] = (ulonglong)puVar11;
                *(undefined4 *)(puVar12 + 2) = uVar3;
            }
            *(ulonglong **)(lVar10 + uVar13 * 8) = puVar12;
            *plVar14 = *plVar14 + 1;
        }
        if (lVar7 != 0) {
            (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
        }
        if (lVar15 != 0) {
            (**(code **)(*(longlong *)(lVar15 + -0x10) + 8))(lVar15 + -0x10);
        }
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack392);
    return;
}



undefined8 FUN_1404f7e80(longlong param_1,short *param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    undefined8 uVar3;

    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
        pplVar1 = *(longlong ***)(param_1 + 0x830);
        if ((pplVar1 != (longlong **)0x0) && (*pplVar1 != (longlong *)0x0)) {
            (**(code **)(**pplVar1 + 8))();
            *pplVar1 = (longlong *)0x0;
        }
    }
    else {
        if (*(longlong *)(param_1 + 0x830) == 0) {
            lVar2 = FUN_14018b280(0x30);
            if (lVar2 != 0) {
                lVar2 = FUN_1401095e0(lVar2);
            }
            *(longlong *)(param_1 + 0x830) = lVar2;
        }
        if (*(longlong *)(param_1 + 0x20) == 0) {
            return 0x80004005;
        }
        uVar3 = FUN_140109710(*(undefined8 *)(param_1 + 0x830),*(longlong *)(param_1 + 0x20) + 0xf0,
                              param_2,1);
        if ((int)uVar3 < 0) {
            return uVar3;
        }
    }
    *(undefined4 *)(param_1 + 0x83c) = 1;
    *(undefined4 *)(param_1 + 0x410) = 1;
    return 0;
}



void FUN_1404f83d0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.CostumeWindow",0x14);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001404f8781)

void FUN_1404f8440(longlong param_1)

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

    uStack40 = 0x1404f8451;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *)(&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *)(param_1 + 400);
    *(undefined8 *)(&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *)(&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f8492;
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
    lVar14 = (longlong)&PTR_s_GetRaceSliderId_140c59430 +
                        ((longlong)(int)uVar16 * -0x10 - ((longlong)alStackX16 + lVar4));
    puVar8 = (undefined8 *)((longlong)alStackX16 + (longlong)(int)uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar12;
        *puVar8 = *(undefined8 *)(lVar14 + (longlong)puVar8);
        puVar8[1] = *(undefined8 *)(lVar14 + -8 + (longlong)(puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 0x38);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f852f;
    FUN_1400569b0(lVar2,"Apollo.CostumeWindow");
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    iVar1 = *(int *)(puVar8 + -1);
    if (iVar1 == 2) {
        LAB_1404f8551:
        if (*(int *)(puVar8 + -1) == 2) {
            LAB_1404f856d:
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
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_1404f856d;
        if (iVar1 == 7) goto LAB_1404f8551;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_1404f856d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar8 + -1);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f859c;
    uVar5 = FUN_140062650(lVar2,"__index",7);
    lVar11 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f85c2;
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
                *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f860a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f862f;
            lVar6 = FUN_140060ab0(lVar2,0);
            *(undefined8 *)(lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **)(lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *)(plVar3 + 1) = 6;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f8653;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *)(lVar11 + lVar6) != '\0');
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f8674;
            uVar7 = FUN_140062650(lVar2,lVar11);
            lVar11 = *(longlong *)(lVar2 + 0x10);
            *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
            *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f8699;
            FUN_14005ea50(lVar2,uVar5,(longlong)alStackX16 + lVar4 + -0x10,lVar11 + -0x10);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *)(lVar14 + 0x10);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *)(lVar2 + 0x20);
    *(longlong *)(lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f86dc;
    uVar7 = FUN_140062650(lVar2,"Apollo.Window",0xd);
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)((longlong)alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *)((longlong)&pcStackX8 + lVar4) = 4;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f8701;
    FUN_14005e8e0(lVar2,lVar14 + 0xa0,(longlong)alStackX16 + lVar4 + -0x10,uVar5);
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar2 + 0x10);
    iVar1 = *(int *)(lVar14 + -8);
    puVar10 = (ulonglong *)(lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_1404f873c:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_1404f8755;
        }
    }
    else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_1404f873c;
        if (iVar1 != 8) goto LAB_1404f8755;
    }
    uVar15 = *puVar10;
    LAB_1404f8755:
    *(ulonglong **)(lVar2 + 0x10) = puVar10;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f8764;
    FUN_1400ed720(param_1,uVar9,uVar15);
    *(undefined **)((longlong)alStackX16 + lVar4 + -0x10) = &LAB_1404f7f50;
    *(code **)((longlong)&pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f879b;
    FUN_1400f85d0(param_1 + 0xa80,L"CostumeWindow",(longlong)alStackX16 + lVar4 + -0x10);
    *(undefined8 *)((longlong)&uStack40 + lVar4) = 0x1404f87ab;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004010 + lVar4) ^
                  (ulonglong)(&stack0xffffffffffffffe0 + lVar4));
    return;
}



longlong FUN_1404f87c0(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0();
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint *)(lVar1 + 0x1b0) >> 0x19 & 1) == 0) {
        puVar2 = (undefined8 *)FUN_1400580e0(param_1,param_2);
        if ((puVar2 == &DAT_140a12138) || (*(int *)(puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        }
        else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *)(puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,"Window",pcVar4);
        FUN_140056570(param_1,param_2,uVar3);
    }
    return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404f8870(undefined8 param_1)

{
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined4 *puVar6;
    ulonglong uVar7;
    uint uVar8;
    undefined local_28 [8];
    longlong local_20;

    lVar4 = FUN_1404f87c0(param_1,1);
    uVar5 = FUN_140056bb0(param_1,2);
    FUN_14018f2d0(local_28,uVar5);
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c6466c == 0) {
            iVar3 = FUN_140218b60();
            if (iVar3 < 0) {
                uVar2 = 0;
            }
            else {
                uVar2 = (**(code **)(*DAT_140c63eb8 + 0x28))();
            }
        }
        else {
            uVar2 = 0;
        }
    }
    else {
        uVar2 = (*DAT_140c63838)(&PTR_u_ModelCamera_140a6b860,DAT_140c63858);
    }
    uVar8 = 0;
    if (uVar2 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c6466c == 0) {
                    iVar3 = FUN_140218b60();
                    if (iVar3 < 0) {
                        puVar6 = (undefined4 *)0x0;
                    }
                    else {
                        puVar6 = (undefined4 *)(**(code **)(*DAT_140c63eb8 + 0x20))(DAT_140c63eb8,uVar8);
                    }
                }
                else {
                    puVar6 = (undefined4 *)0x0;
                }
            }
            else {
                puVar6 = (undefined4 *)(*DAT_140c63848)(&PTR_u_ModelCamera_140a6b860,uVar8,DAT_140c63858);
            }
            uVar7 = *(ulonglong *)(puVar6 + 2);
            if (uVar7 != 0) {
                if (DAT_140c3fe70 < uVar7) {
                    uVar7 = 0;
                }
                else {
                    uVar7 = uVar7 + DAT_140c3fe68;
                }
            }
            iVar3 = FUN_14018e2c0(uVar7);
            if (iVar3 == 0) {
                uVar1 = *puVar6;
                *(undefined4 *)(lVar4 + 0x410) = 1;
                *(undefined4 *)(lVar4 + 0x820) = uVar1;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_1404f89d0(undefined8 param_1)

{
    undefined8 uVar1;
    undefined8 uVar2;
    undefined local_28 [8];
    longlong local_20;

    uVar1 = FUN_1404f87c0(param_1,1);
    uVar2 = FUN_140056bb0(param_1,2);
    FUN_14018f2d0(local_28,uVar2);
    FUN_1404f68e0(uVar1,local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_1404f8a40(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    undefined8 uVar3;
    undefined4 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 uVar8;

    uVar3 = FUN_1404f87c0(param_1,1);
    puVar4 = (undefined4 *)FUN_1406622c0(param_1);
    uVar8 = 0;
    uVar5 = uVar8;
    if (puVar4 != (undefined4 *)0x0) {
        uVar5 = FUN_1403d90d0(DAT_140c65898,*puVar4);
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    puVar7 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
        puVar7 = puVar6;
    }
    if ((*(int *)(puVar7 + 1) != 0) && ((*(int *)(puVar7 + 1) != 1 || (*(int *)puVar7 != 0)))) {
        uVar8 = 1;
    }
    iVar2 = FUN_1404f69b0(uVar3,uVar5,uVar8);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(-1 < iVar2);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404f8b00(undefined8 param_1)

{
    undefined4 uVar1;
    undefined8 uVar2;

    uVar2 = FUN_1404f87c0(param_1,1);
    uVar1 = FUN_140056d60(param_1,2);
    FUN_1404f7960(uVar2,uVar1);
    return 0;
}



undefined8 FUN_1404f8bb0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined4 uVar4;

    uVar4 = 1;
    lVar1 = FUN_1404f87c0(param_1,1);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 **)(param_1 + 0x10)) {
        puVar2 = puVar3;
    }
    if ((*(int *)(puVar2 + 1) == 0) || ((*(int *)(puVar2 + 1) == 1 && (*(int *)puVar2 == 0)))) {
        uVar4 = 0;
    }
    *(undefined4 *)(lVar1 + 0x414) = uVar4;
    FUN_1404ffdd0(lVar1);
    return 0;
}



undefined8 FUN_1404f8c10(undefined8 param_1)

{
    longlong lVar1;
    double dVar2;

    lVar1 = FUN_1404f87c0(param_1,1);
    dVar2 = (double)FUN_140056c40(param_1,2);
    *(float *)(lVar1 + 0x420) = (float)dVar2;
    FUN_1404ffa00(lVar1);
    return 0;
}



undefined8 FUN_1404f8c60(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = FUN_1404f87c0(param_1,1);
    uVar1 = FUN_140056d60(param_1,2);
    *(undefined4 *)(lVar2 + 0x41c) = uVar1;
    FUN_1404ffdd0(lVar2);
    return 0;
}



undefined8 FUN_1404f8cb0(undefined8 param_1)

{
    longlong lVar1;
    double dVar2;

    lVar1 = FUN_1404f87c0(param_1,1);
    dVar2 = (double)FUN_140056c40(param_1,2);
    *(float *)(lVar1 + 0x424) = (float)dVar2;
    FUN_1404ffdd0(lVar1);
    return 0;
}



undefined8 FUN_1404f8d00(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_1404f87c0(param_1,1);
    pdVar4 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar3 = (double *)&DAT_140a12138;
    if (pdVar4 < *(double **)(param_1 + 0x10)) {
        pdVar3 = pdVar4;
    }
    if (*(int *)(pdVar3 + 1) == 3) {
        LAB_1404f8d6c:
        iVar1 = (int)*pdVar3;
    }
    else {
        if (*(int *)(pdVar3 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong)*pdVar3 + 0x20,local_res10);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar3 = &local_18;
                local_18 = local_res10[0];
                goto LAB_1404f8d6c;
            }
        }
        iVar1 = 0;
    }
    *(int *)(lVar2 + 0x418) = iVar1;
    FUN_1404ffdd0(lVar2);
    return 0;
}



undefined8 FUN_1404f8dc0(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_1404f87c0(param_1,1);
    if (*(int *)(lVar1 + 0x418) == 0x116) {
        *(undefined4 *)(lVar1 + 0x418) = 0x1eb8;
        FUN_1404ffdd0(lVar1);
    }
    return 0;
}



undefined8 FUN_1404f8e00(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 uVar6;

    uVar6 = 1;
    lVar3 = FUN_1404f87c0(param_1,1);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar4 = &DAT_140a12138;
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
        puVar4 = puVar5;
    }
    if ((*(int *)(puVar4 + 1) == 0) || ((*(int *)(puVar4 + 1) == 1 && (*(int *)puVar4 == 0)))) {
        uVar6 = 0;
    }
    if (*(longlong **)(lVar3 + 0x918) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x18))();
        if (0 < iVar2) {
            (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x70))();
        }
    }
    plVar1 = *(longlong **)(lVar3 + 0x878);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0xb0))(plVar1,uVar6);
        FUN_1404ffdd0(lVar3);
    }
    return 0;
}



undefined8 FUN_1404f8f60(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong lVar3;
    bool bVar4;

    lVar3 = FUN_1404f87c0(param_1,1);
    bVar4 = true;
    if (*(longlong **)(lVar3 + 0x918) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x18))();
        if (0 < iVar2) {
            (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x70))();
        }
    }
    if (*(longlong **)(lVar3 + 0x878) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x878) + 0xa0))();
        bVar4 = iVar2 != 0;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404f9000(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_1404f87c0(param_1,1);
    if (lVar2 == 0) {
        return 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *)(pdVar4 + 1) != 3) {
        if ((*(int *)(pdVar4 + 1) != 4) ||
            (iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,local_res10), iVar1 == 0)) {
            iVar1 = 0;
            goto LAB_1404f9079;
        }
        local_10 = 3;
        pdVar4 = &local_18;
        local_18 = local_res10[0];
    }
    iVar1 = (int)*pdVar4;
    LAB_1404f9079:
    *(float *)(lVar2 + 0x8f0) = DAT_140c3b438 * 0.005555556 * (float)iVar1;
    FUN_1404ffdd0(lVar2);
    return 0;
}



undefined8 FUN_1404f90c0(longlong param_1)

{
    bool bVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar2 = FUN_1404f87c0(param_1,1);
    if (lVar2 != 0) {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        bVar1 = false;
        if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 1)) {
            puVar3 = &DAT_140a12138;
            if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
                puVar3 = puVar4;
            }
            bVar1 = false;
            if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
                bVar1 = true;
            }
        }
        *(undefined4 *)(lVar2 + 0x8e8) = 0;
        if (*(int *)(lVar2 + 0x8e4) != 0) {
            *(undefined4 *)(lVar2 + 0x8e4) = 0;
            *(undefined4 *)(lVar2 + 0x8ec) = 0;
            return 0;
        }
        *(undefined4 *)(lVar2 + 0x8e4) = 1;
        if (bVar1) {
            *(undefined4 *)(lVar2 + 0x8ec) = 0x42c60000;
            return 0;
        }
        *(undefined4 *)(lVar2 + 0x8ec) = 0x3e99999a;
    }
    return 0;
}



undefined8 FUN_1404f9190(longlong param_1)

{
    bool bVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    lVar2 = FUN_1404f87c0(param_1,1);
    if (lVar2 != 0) {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        bVar1 = false;
        if (((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (bVar1 = false, puVar4 != &DAT_140a12138))
            && (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) == 1)) {
            puVar3 = &DAT_140a12138;
            if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
                puVar3 = puVar4;
            }
            bVar1 = false;
            if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
                bVar1 = true;
            }
        }
        *(undefined4 *)(lVar2 + 0x8e4) = 0;
        if (*(int *)(lVar2 + 0x8e8) != 0) {
            *(undefined8 *)(lVar2 + 0x8e8) = 0;
            return 0;
        }
        *(undefined4 *)(lVar2 + 0x8e8) = 1;
        if (bVar1) {
            *(undefined4 *)(lVar2 + 0x8ec) = 0x42c60000;
            return 0;
        }
        *(undefined4 *)(lVar2 + 0x8ec) = 0x3e99999a;
    }
    return 0;
}



undefined8 FUN_1404f9260(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_1404f87c0(param_1,1);
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x410) = 1;
        *(undefined8 *)(lVar1 + 0x8e4) = 0;
        *(undefined8 *)(lVar1 + 0x8ec) = 0;
    }
    return 0;
}



undefined8 FUN_1404f92a0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    double *pdVar4;
    double dVar5;
    double dVar6;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    lVar2 = FUN_1404f87c0(param_1,1);
    if (lVar2 == 0) {
        return 0;
    }
    pdVar3 = (double *)(*(longlong *)(param_1 + 0x18) + 0x10);
    pdVar4 = (double *)&DAT_140a12138;
    if (pdVar3 < *(double **)(param_1 + 0x10)) {
        pdVar4 = pdVar3;
    }
    if (*(int *)(pdVar4 + 1) == 3) {
        LAB_1404f9315:
        dVar5 = *pdVar4;
        dVar6 = 0.0;
        if ((dVar5 < 0.0) || (dVar6 = 1.0, 1.0 < dVar5)) goto LAB_1404f9333;
    }
    else {
        if ((*(int *)(pdVar4 + 1) == 4) &&
            (iVar1 = FUN_14005ac80((longlong)*pdVar4 + 0x20,local_res10), iVar1 != 0)) {
            local_10 = 3;
            pdVar4 = &local_18;
            local_18 = local_res10[0];
            goto LAB_1404f9315;
        }
        dVar5 = 0.0;
    }
    dVar6 = dVar5;
    LAB_1404f9333:
    *(undefined4 *)(lVar2 + 0x410) = 1;
    *(float *)(lVar2 + 0x900) = (float)dVar6;
    return 0;
}



undefined8 FUN_1404f9500(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong *plVar3;

    lVar1 = FUN_1404f87c0(param_1,1);
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((*(undefined8 **)(param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
            (*(int *)(*(longlong *)(param_1 + 0x18) + 0x18) != 0)) {
            plVar3 = (longlong *)FUN_140056ab0(param_1,2,"Client.ScreenModelActor");
            if ((plVar3 != (longlong *)0x0) && (*(longlong *)(*plVar3 + 0x10) != 0)) {
                FUN_1404f73e0(lVar1);
            }
        }
    }
    return 0;
}



void FUN_1404f9ca0(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined auStack392 [48];
    undefined **local_158;
    undefined4 local_150;
    longlong local_148;
    undefined4 local_140;
    longlong local_138;
    undefined4 local_130;
    undefined4 local_128 [4];
    undefined local_118 [256];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack392;
    lVar3 = FUN_1404f87c0(param_1,1);
    if (lVar3 != 0) {
        if ((*(longlong **)(lVar3 + 0x918) != (longlong *)0x0) &&
            (iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x18))(), 0 < iVar2)) {
            (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x70))();
        }
        plVar1 = *(longlong **)(lVar3 + 0x878);
        if (plVar1 != (longlong *)0x0) {
            local_158 = &PTR_FUN_140b569f0;
            local_140 = 1;
            local_150 = 0xfffffffe;
            local_148 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar8 = *(undefined8 **)(param_1 + 0x10);
            uVar4 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar8 + 1) = 5;
            *puVar8 = uVar4;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_150 = FUN_1400578c0(param_1);
            puVar8 = (undefined8 *)(*(longlong *)(local_148 + 0x18) + 0x10);
            if (((puVar8 < *(undefined8 **)(local_148 + 0x10)) && (puVar8 != &DAT_140a12138)) &&
                (*(int *)(*(longlong *)(local_148 + 0x18) + 0x18) == 5)) {
                FUN_1400579e0(local_148,puVar8,local_150);
                puVar8 = *(undefined8 **)(local_148 + 0x10);
                puVar5 = (undefined8 *)(*(longlong *)(local_148 + 0x18) + 0x10);
                puVar9 = &DAT_140a12138;
                if (puVar5 < puVar8) {
                    puVar9 = puVar5;
                }
                *puVar8 = *puVar9;
                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(local_148 + 0x10) = *(longlong *)(local_148 + 0x10) + 0x10;
                local_150 = FUN_1400578c0(local_148);
                FUN_14069dd00(local_128,&local_158);
                lVar6 = FUN_140202860(local_128[0]);
                if (((lVar6 != 0) && (lVar6 = FUN_14020bd20(*(undefined4 *)(lVar6 + 0xc)), lVar6 != 0)) &&
                    (lVar7 = FUN_14020a3a0(*(undefined4 *)(lVar6 + 0x10)), lVar7 != 0)) {
                    local_130 = FUN_14057aa00(local_128);
                    local_138 = lVar6;
                    iVar2 = (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined4 *)(lVar7 + 8),&local_138);
                    if (iVar2 < 0) {
                        uVar4 = FUN_1401b3450(local_118,0x80,iVar2);
                        FUN_1400035b0(0x16,1,0,uVar4);
                    }
                    *(undefined4 *)(lVar3 + 0x410) = 1;
                }
            }
            local_158 = &PTR_FUN_140b56a08;
            if (local_148 != 0) {
                FUN_1400579e0(local_148,&PTR_FUN_140b56a08,local_150);
            }
        }
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack392);
    return;
}



undefined8 FUN_1404f9ee0(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined4 *puVar7;

    lVar4 = FUN_1404f87c0(param_1,1);
    if (lVar4 != 0) {
        if ((*(longlong **)(lVar4 + 0x918) != (longlong *)0x0) &&
            (iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x18))(), 0 < iVar2)) {
            (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x70))();
        }
        plVar1 = *(longlong **)(lVar4 + 0x878);
        if (plVar1 != (longlong *)0x0) {
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                uVar3 = FUN_140056d60(param_1,2);
            }
            else {
                uVar3 = 0;
            }
            lVar4 = FUN_1401efee0(uVar3);
            if (lVar4 != 0) {
                puVar7 = (undefined4 *)(lVar4 + 0x18);
                lVar4 = 0x10;
                do {
                    lVar6 = FUN_1400b5df0(DAT_140c658f0,*puVar7,0);
                    if (((lVar6 != 0) && ((*(uint *)(lVar6 + 0x154) & 0x400) != 0)) &&
                        (*(int *)(lVar6 + 0x180) != 0)) {
                        (**(code **)(*plVar1 + 0x50))
                                (plVar1,*(undefined4 *)(lVar6 + 0x17c),*(undefined4 *)(lVar6 + 0x184),0);
                    }
                    puVar7 = puVar7 + 1;
                    lVar4 = lVar4 + -1;
                } while (lVar4 != 0);
            }
        }
    }
    return 0;
}



undefined8 FUN_1404f9ff0(undefined8 param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined8 *local_res10 [3];

    lVar1 = FUN_1404f87c0(param_1,1);
    lVar2 = FUN_140417bf0(param_1);
    if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x878) != 0)) && (lVar2 != 0)) &&
        (*(int *)(lVar2 + 0x11c) != 0)) {
        lVar2 = FUN_1407a0fd0(DAT_140c65b70);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
            FUN_140453d40(lVar1);
            FUN_1404fe940(lVar1);
            local_res10[0] = (undefined8 *)FUN_14018b280(8);
            if (local_res10[0] == (undefined8 *)0x0) {
                local_res10[0] = (undefined8 *)0x0;
            }
            else {
                *local_res10[0] = 0;
            }
            FUN_1400b6080(lVar1 + 0x8b8,*(longlong *)(lVar2 + 8) + 0x1c,local_res10);
        }
    }
    return 0;
}



undefined8 FUN_1404fa760(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    undefined8 *puVar5;

    lVar4 = FUN_1404f87c0(param_1,1);
    if (lVar4 != 0) {
        if ((*(longlong **)(lVar4 + 0x918) != (longlong *)0x0) &&
            (iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x18))(), 0 < iVar2)) {
            (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x70))();
        }
        plVar1 = *(longlong **)(lVar4 + 0x878);
        if (plVar1 != (longlong *)0x0) {
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                iVar2 = FUN_140056d60(param_1,2);
            }
            else {
                iVar2 = -1;
            }
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            iVar3 = -1;
            if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (iVar3 = -1, puVar5 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
                iVar3 = FUN_140056d60(param_1,3);
            }
            if ((-1 < iVar2) && (-1 < iVar3)) {
                (**(code **)(*plVar1 + 0x50))(plVar1,iVar2,iVar3,0);
            }
        }
    }
    return 0;
}



undefined8 FUN_1404fa860(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    float fVar4;

    lVar3 = FUN_1404f87c0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        if (*(longlong **)(lVar3 + 0x918) != (longlong *)0x0) {
            iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x18))();
            if (0 < iVar2) {
                (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x70))();
            }
        }
        if (*(longlong *)(lVar3 + 0x878) == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            iVar2 = FUN_140056d60(param_1,2);
            if ((iVar2 < 0) ||
                ((int)(*(longlong *)(lVar3 + 0x1c00) - *(longlong *)(lVar3 + 0x1bf8) >> 3) <= iVar2)) {
                fVar4 = 0.0;
            }
            else {
                fVar4 = *(float *)(*(longlong *)(lVar3 + 0x1bf8) + 4 + (longlong)iVar2 * 8);
            }
            pdVar1 = *(double **)(param_1 + 0x10);
            *pdVar1 = (double)fVar4;
            *(undefined4 *)(pdVar1 + 1) = 3;
        }
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404fa930(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 *puVar5;

    lVar4 = FUN_1404f87c0(param_1,1);
    if (lVar4 != 0) {
        if ((*(longlong **)(lVar4 + 0x918) != (longlong *)0x0) &&
            (iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x18))(), 0 < iVar2)) {
            (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x70))();
        }
        lVar1 = *(longlong *)(lVar4 + 0x878);
        if (lVar1 != 0) {
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                uVar3 = FUN_140056d60(param_1,2);
            }
            else {
                uVar3 = 0xffffffff;
            }
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
            if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
                FUN_140056c40(param_1,3);
            }
            iVar2 = FUN_14002fa90(lVar4 + 0x920,lVar1,uVar3);
            if (iVar2 != 0) {
                FUN_140030080(lVar4 + 0x920,lVar1);
            }
        }
    }
    return 0;
}



undefined8 FUN_1404faa40(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 *puVar5;

    lVar4 = FUN_1404f87c0(param_1,1);
    if (lVar4 != 0) {
        if ((*(longlong **)(lVar4 + 0x918) != (longlong *)0x0) &&
            (iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x18))(), 0 < iVar2)) {
            (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x70))();
        }
        lVar1 = *(longlong *)(lVar4 + 0x878);
        if (lVar1 != 0) {
            puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
            if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
                (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
                uVar3 = FUN_140056d60(param_1,2);
            }
            else {
                uVar3 = 0xffffffff;
            }
            iVar2 = FUN_14002fa90(lVar4 + 0x920,lVar1,uVar3);
            if (iVar2 != 0) {
                FUN_140030080(lVar4 + 0x920,lVar1);
            }
        }
    }
    return 0;
}



undefined8 FUN_1404fab20(undefined8 param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_1404f87c0(param_1,1);
    if (lVar3 != 0) {
        if ((*(longlong **)(lVar3 + 0x918) != (longlong *)0x0) &&
            (iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x18))(), 0 < iVar2)) {
            (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x70))();
        }
        lVar1 = *(longlong *)(lVar3 + 0x878);
        if (lVar1 != 0) {
            iVar2 = 0;
            if (0 < (int)(*(longlong *)(lVar3 + 0x1c38) - *(longlong *)(lVar3 + 0x1c30) >> 3)) {
                do {
                    FUN_14002fa90(lVar3 + 0x920,lVar1,iVar2);
                    iVar2 = iVar2 + 1;
                } while (iVar2 < (int)(*(longlong *)(lVar3 + 0x1c38) - *(longlong *)(lVar3 + 0x1c30) >> 3));
            }
            FUN_140030080(lVar3 + 0x920,lVar1);
        }
    }
    return 0;
}



undefined4 FUN_1404fac10(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1404f87c0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(lVar3 + 0x1c10);
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404fac70(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_1404f87c0(param_1,1);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar2 = FUN_1404fef30(lVar3);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1404face0(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;

    lVar2 = FUN_1404f87c0(param_1,1);
    if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x918) != (longlong *)0x0) {
            iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x918) + 0x18))();
            if (0 < iVar1) {
                (**(code **)(**(longlong **)(lVar2 + 0x918) + 0x70))();
            }
        }
        if (*(longlong *)(lVar2 + 0x878) != 0) {
            uVar3 = FUN_14002fbe0(lVar2 + 0x920,param_1);
            return uVar3;
        }
    }
    return 0;
}



undefined8 FUN_1404faf40(void)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_1404f87c0();
    if (lVar3 == 0) {
        return 0;
    }
    if (*(longlong **)(lVar3 + 0x918) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x18))();
        if (0 < iVar2) {
            (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x70))();
        }
    }
    lVar1 = *(longlong *)(lVar3 + 0x878);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(int *)(lVar3 + 0x1c88) != *(int *)(lVar3 + 0x1c14)) ||
        (*(int *)(lVar3 + 0x1c8c) != *(int *)(lVar3 + 0x1c18))) {
        FUN_14002eaf0(lVar3 + 0x920);
        FUN_14002ebd0(lVar3 + 0x920,*(undefined4 *)(lVar3 + 0x1c8c));
        FUN_14002f5d0(lVar3 + 0x920,lVar1,*(undefined8 *)(lVar3 + 0x870));
        FUN_14002fe90(lVar3 + 0x920,lVar1);
        FUN_140030080(lVar3 + 0x920,lVar1);
    }
    FUN_1404fee90(lVar3);
    FUN_14002f5d0(lVar3 + 0x920,lVar1,*(undefined8 *)(lVar3 + 0x870));
    FUN_14002fe90(lVar3 + 0x920,lVar1);
    FUN_140030080(lVar3 + 0x920,lVar1);
    return 1;
}



undefined8 FUN_1404fb1d0(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;

    lVar2 = FUN_1404f87c0(param_1,1);
    if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x918) != (longlong *)0x0) {
            iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x918) + 0x18))();
            if (0 < iVar1) {
                (**(code **)(**(longlong **)(lVar2 + 0x918) + 0x70))();
            }
        }
        if (*(longlong *)(lVar2 + 0x878) != 0) {
            uVar3 = FUN_14002ed40(lVar2 + 0x920,param_1);
            return uVar3;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1404fb250(longlong param_1)

{
    uint uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    double *pdVar4;
    longlong lVar5;
    int iVar6;
    undefined8 uVar7;
    uint *puVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    longlong lVar13;
    longlong *plVar14;
    longlong lVar15;
    int iVar16;
    longlong lStackX24;

    lVar12 = FUN_1404f87c0(param_1,1);
    if (lVar12 != 0) {
        if ((*(longlong **)(lVar12 + 0x918) != (longlong *)0x0) &&
            (iVar6 = (**(code **)(**(longlong **)(lVar12 + 0x918) + 0x18))(), 0 < iVar6)) {
            (**(code **)(**(longlong **)(lVar12 + 0x918) + 0x70))();
        }
        if (*(longlong *)(lVar12 + 0x878) != 0) {
            if (*(longlong *)(lVar12 + 0x1b88) == 0) {
                return 0;
            }
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            uVar7 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar7;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar3 = *(longlong *)(*(longlong *)(lVar12 + 0x1b88) + 8);
            lVar15 = *(longlong *)(lVar3 + 0x10);
            do {
                if (lVar15 == lVar3) {
                    return 1;
                }
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c65200 == 0) && (iVar6 = FUN_1401f0940(), -1 < iVar6)) {
                        puVar8 = (uint *)(**(code **)(*DAT_140c63fd8 + 0x18))();
                        goto LAB_14002f36c;
                    }
                }
                else {
                    puVar8 = (uint *)(*DAT_140c63840)(&PTR_u_CharacterCustomizationLabel_140a69758,
                                                      *(undefined4 *)(lVar15 + 0x20),DAT_140c63858);
                    LAB_14002f36c:
                    if ((puVar8 != (uint *)0x0) && (1 < *(ulonglong *)(lVar15 + 0x38))) {
                        lVar11 = *(longlong *)(lVar12 + 0x1b98);
                        iVar16 = 0;
                        iVar6 = 0;
                        lVar13 = lVar11;
                        if (*(longlong *)(lVar11 + 8) != 0) {
                            lVar10 = *(longlong *)(lVar11 + 8);
                            do {
                                if (*(uint *)(lVar10 + 0x20) < *puVar8) {
                                    lVar9 = *(longlong *)(lVar10 + 0x18);
                                }
                                else {
                                    lVar9 = *(longlong *)(lVar10 + 0x10);
                                    lVar13 = lVar10;
                                }
                                lVar10 = lVar9;
                            } while (lVar9 != 0);
                        }
                        if ((lVar13 == lVar11) || (*puVar8 < *(uint *)(lVar13 + 0x20))) {
                            lStackX24 = lVar11;
                            plVar14 = &lStackX24;
                        }
                        else {
                            plVar14 = (longlong *)&stack0x00000008;
                        }
                        lVar13 = *(longlong *)(lVar15 + 0x30);
                        lVar10 = *(longlong *)(lVar13 + 0x10);
                        if (lVar10 != lVar13) {
                            do {
                                iVar16 = iVar16 + 1;
                                if ((*plVar14 != lVar11) && (*(int *)(lVar10 + 0x20) == *(int *)(*plVar14 + 0x24)))
                                {
                                    iVar6 = iVar16;
                                }
                                lVar9 = *(longlong *)(lVar10 + 0x18);
                                if (lVar9 == 0) {
                                    lVar9 = *(longlong *)(lVar10 + 8);
                                    if (lVar10 == *(longlong *)(lVar9 + 0x18)) {
                                        do {
                                            lVar10 = lVar9;
                                            lVar9 = *(longlong *)(lVar10 + 8);
                                        } while (lVar10 == *(longlong *)(lVar9 + 0x18));
                                    }
                                    if (*(longlong *)(lVar10 + 0x18) != lVar9) {
                                        lVar10 = lVar9;
                                    }
                                }
                                else {
                                    for (lVar5 = *(longlong *)(lVar9 + 0x10); lVar10 = lVar9, lVar5 != 0;
                                         lVar5 = *(longlong *)(lVar5 + 0x10)) {
                                        lVar9 = lVar5;
                                    }
                                }
                            } while (lVar10 != lVar13);
                            if (iVar16 != 0) {
                                uVar1 = *puVar8;
                                pdVar4 = *(double **)(param_1 + 0x10);
                                *(undefined4 *)(pdVar4 + 1) = 3;
                                *pdVar4 = (double)uVar1;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                pdVar4 = *(double **)(param_1 + 0x10);
                                *(undefined4 *)(pdVar4 + 1) = 3;
                                *pdVar4 = (double)iVar6;
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10),
                                              *(longlong *)(param_1 + 0x10) + -0x20);
                                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                            }
                        }
                    }
                }
                lVar11 = *(longlong *)(lVar15 + 0x18);
                if (lVar11 == 0) {
                    lVar11 = *(longlong *)(lVar15 + 8);
                    if (lVar15 == *(longlong *)(lVar11 + 0x18)) {
                        do {
                            lVar15 = lVar11;
                            lVar11 = *(longlong *)(lVar15 + 8);
                        } while (lVar15 == *(longlong *)(lVar11 + 0x18));
                    }
                    if (*(longlong *)(lVar15 + 0x18) != lVar11) {
                        lVar15 = lVar11;
                    }
                }
                else {
                    for (lVar13 = *(longlong *)(lVar11 + 0x10); lVar15 = lVar11, lVar13 != 0;
                         lVar13 = *(longlong *)(lVar13 + 0x10)) {
                        lVar11 = lVar13;
                    }
                }
            } while( true );
        }
    }
    return 0;
}



undefined4 FUN_1404fb2d0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong local_res10;
    undefined local_28 [8];
    longlong local_20;

    uVar4 = 1;
    local_res10 = 0;
    lVar2 = FUN_1404f87c0(param_1,1);
    lVar3 = 0;
    if (lVar2 != 0) {
        if (*(longlong **)(lVar2 + 0x918) != (longlong *)0x0) {
            iVar1 = (**(code **)(**(longlong **)(lVar2 + 0x918) + 0x18))();
            if (0 < iVar1) {
                (**(code **)(**(longlong **)(lVar2 + 0x918) + 0x70))();
            }
        }
        if (*(longlong *)(lVar2 + 0x878) != 0) {
            iVar1 = FUN_1400300f0(lVar2 + 0x920,&local_res10);
            lVar3 = local_res10;
            if (-1 < iVar1) {
                lVar2 = FUN_14018f0e0(local_28,local_res10);
                if (*(longlong *)(lVar2 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                }
                else {
                    lVar5 = -1;
                    do {
                        lVar5 = lVar5 + 1;
                    } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar5) != '\0');
                    FUN_140058710(param_1);
                }
                if (local_20 != 0) {
                    FUN_14018b900(local_20,0);
                }
                goto LAB_1404fb39b;
            }
        }
    }
    uVar4 = 0;
    LAB_1404fb39b:
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    return uVar4;
}



undefined8 FUN_1404fbab0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar4 = FUN_1404f87c0(param_1,1);
    if (lVar4 != 0) {
        if (*(longlong **)(lVar4 + 0x918) != (longlong *)0x0) {
            iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x18))();
            if (0 < iVar3) {
                (**(code **)(**(longlong **)(lVar4 + 0x918) + 0x70))();
            }
        }
        if (*(longlong *)(lVar4 + 0x878) != 0) {
            local_28 = &PTR_FUN_140b569f0;
            local_10 = 1;
            local_18 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            uVar5 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_20 = FUN_1400578c0(param_1);
            FUN_1400307c0(lVar4 + 0x920,&local_28);
            lVar4 = local_18;
            puVar6 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_18 + 0x20) + 0xa0),local_20);
            puVar2 = *(undefined8 **)(lVar4 + 0x10);
            *puVar2 = *puVar6;
            uVar1 = *(undefined4 *)(puVar6 + 1);
            *(undefined4 *)(puVar2 + 1) = uVar1;
            *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
            FUN_1400579e0(lVar4,uVar1,local_20);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1404fd050(undefined8 param_1)

{
    int iVar1;
    int iVar2;
    longlong lVar3;

    lVar3 = FUN_1404f87c0(param_1,1);
    if (lVar3 != 0) {
        if (*(longlong **)(lVar3 + 0x918) != (longlong *)0x0) {
            iVar1 = (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x18))();
            if (0 < iVar1) {
                (**(code **)(**(longlong **)(lVar3 + 0x918) + 0x70))();
            }
        }
        if (*(longlong *)(lVar3 + 0x878) != 0) {
            iVar2 = FUN_140056d60(param_1,2);
            iVar1 = FUN_140056d60(param_1,3);
            if (iVar2 == 0xd) {
                iVar1 = 0;
            }
            if ((*(int *)(lVar3 + 0x1c14) != iVar2) || (*(int *)(lVar3 + 0x1c18) != iVar1)) {
                iVar2 = FUN_14002eaf0(lVar3 + 0x920,iVar2);
                if (iVar2 != 0) {
                    iVar1 = FUN_14002ebd0(lVar3 + 0x920,iVar1);
                    if (iVar1 != 0) {
                        FUN_14002f5d0(lVar3 + 0x920,*(undefined8 *)(lVar3 + 0x878),
                                      *(undefined8 *)(lVar3 + 0x870));
                        FUN_14002fe90(lVar3 + 0x920,*(undefined8 *)(lVar3 + 0x878));
                        FUN_140030080(lVar3 + 0x920,*(undefined8 *)(lVar3 + 0x878));
                        if (*(longlong **)(lVar3 + 0x880) != (longlong *)0x0) {
                            (**(code **)(**(longlong **)(lVar3 + 0x880) + 8))();
                            *(undefined8 *)(lVar3 + 0x880) = 0;
                        }
                        if (*(longlong **)(lVar3 + 0x888) != (longlong *)0x0) {
                            (**(code **)(**(longlong **)(lVar3 + 0x888) + 8))();
                            *(undefined8 *)(lVar3 + 0x888) = 0;
                        }
                    }
                }
            }
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1404fd1c0(longlong param_1,uint param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    undefined local_88 [8];
    ulonglong local_80;
    longlong local_78;
    undefined8 local_70;
    undefined8 local_68;
    ulonglong local_60;
    ulonglong local_58;
    ulonglong local_50;
    ulonglong local_48;
    ulonglong local_40;
    ulonglong local_38;

    if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar3)) {
        (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
    }
    if (*(longlong *)(param_1 + 0x878) == 0) {
        return 0;
    }
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_68 = *(undefined8 *)(param_1 + 0x1c14);
    uVar10 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
        (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar3)) {
        (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
    }
    plVar1 = *(longlong **)(param_1 + 0x878);
    if (plVar1 != (longlong *)0x0) {
        lVar9 = DAT_140c658e8;
        if ((*(uint *)(param_1 + 0x1c14) < 0x11) && (*(uint *)(param_1 + 0x1c18) < 3)) {
            lVar9 = (longlong)(int)*(uint *)(param_1 + 0x1c18) * 0x50 +
                                   *(longlong *)
                                           ((longlong)(int)*(uint *)(param_1 + 0x1c14) * 0x20 + 8 +
                                                           *(longlong *)(DAT_140c658e8 + 0x58));
        }
        (**(code **)(*plVar1 + 0x140))(plVar1,local_88,param_1 + 0x1bd0,lVar9);
    }
    uVar8 = (longlong)(local_78 - local_80) >> 2;
    local_48 = local_48 & 0xffffffff00000000 | uVar8 & 0xffffffff;
    local_40 = uVar10;
    if ((int)uVar8 != 0) {
        local_40 = local_80;
    }
    uVar4 = FUN_14018dbc0(0,*(undefined8 *)(param_1 + 0x1ba0),4);
    uVar8 = uVar10;
    if (uVar4 != 0) {
        uVar8 = uVar4;
    }
    uVar5 = FUN_14018dbc0(0,*(undefined8 *)(param_1 + 0x1ba0),4);
    uVar4 = uVar10;
    if (uVar5 != 0) {
        uVar4 = uVar5;
    }
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x1b98) + 0x10);
    uVar5 = uVar4;
    uVar6 = uVar8;
    uVar11 = uVar10;
    if (lVar9 != *(longlong *)(param_1 + 0x1b98)) {
        do {
            uVar4 = FUN_14018db00(uVar6,uVar11 + 1,4);
            *(undefined4 *)(uVar11 * 4 + uVar4) = *(undefined4 *)(lVar9 + 0x20);
            uVar8 = uVar6;
            if ((uVar6 != uVar4) && (FUN_1407db590(uVar4,uVar6), uVar8 = uVar4, uVar6 != 0)) {
                (**(code **)(*(longlong *)(uVar6 - 0x10) + 8))(uVar6 - 0x10);
            }
            uVar11 = uVar11 + 1;
            uVar6 = FUN_14018db00(uVar5,uVar10 + 1,4);
            *(undefined4 *)(uVar10 * 4 + uVar6) = *(undefined4 *)(lVar9 + 0x24);
            uVar4 = uVar5;
            if ((uVar5 != uVar6) && (FUN_1407db590(uVar6,uVar5), uVar4 = uVar6, uVar5 != 0)) {
                (**(code **)(*(longlong *)(uVar5 - 0x10) + 8))(uVar5 - 0x10);
            }
            lVar7 = *(longlong *)(lVar9 + 0x18);
            uVar10 = uVar10 + 1;
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar9 + 8);
                if (lVar9 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar9 = lVar7;
                        lVar7 = *(longlong *)(lVar9 + 8);
                    } while (lVar9 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar9 + 0x18) != lVar7) {
                    lVar9 = lVar7;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar7 + 0x10); lVar9 = lVar7, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar7 = lVar2;
                }
            }
            uVar5 = uVar4;
            uVar6 = uVar8;
        } while (lVar9 != *(longlong *)(param_1 + 0x1b98));
    }
    local_38 = local_38 & 0xffffffff00000000 | (ulonglong)param_2;
    local_60 = local_60 & 0xffffffff00000000 | uVar11 & 0xffffffff;
    local_58 = uVar8;
    local_50 = uVar4;
    FUN_1403f4900(DAT_140c65898,0x144,&local_68);
    if (uVar4 != 0) {
        (**(code **)(*(longlong *)(uVar4 - 0x10) + 8))(uVar4 - 0x10);
    }
    if (uVar8 != 0) {
        (**(code **)(*(longlong *)(uVar8 - 0x10) + 8))(uVar8 - 0x10);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong * FUN_1404fd530(longlong param_1,ulonglong *param_2,int param_3)

{
    uint uVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    uint *puVar12;
    uint uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    ulonglong local_res8;
    ulonglong local_res20;
    undefined local_48 [8];
    uint *local_40;
    longlong local_38;
    undefined8 local_30;

    if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
        (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar4)) {
        (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
    }
    uVar14 = 0;
    if (*(longlong *)(param_1 + 0x878) == 0) {
        *param_2 = 0;
        param_2[1] = 1;
        param_2[2] = 0;
        return param_2;
    }
    if ((*(int *)(param_1 + 0x1c88) == *(int *)(param_1 + 0x1c14)) &&
        (*(int *)(param_1 + 0x1c8c) == *(int *)(param_1 + 0x1c18))) {
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1b98) + 0x10);
        uVar16 = uVar14;
        if (lVar10 != *(longlong *)(param_1 + 0x1b98)) {
            do {
                uVar15 = *(ulonglong *)(param_1 + 0x1c50);
                uVar11 = uVar15;
                if (*(ulonglong *)(uVar15 + 8) != 0) {
                    uVar6 = *(ulonglong *)(uVar15 + 8);
                    do {
                        if (*(uint *)(uVar6 + 0x20) < *(uint *)(lVar10 + 0x20)) {
                            uVar7 = *(ulonglong *)(uVar6 + 0x18);
                        }
                        else {
                            uVar7 = *(ulonglong *)(uVar6 + 0x10);
                            uVar11 = uVar6;
                        }
                        uVar6 = uVar7;
                    } while (uVar7 != 0);
                }
                if ((uVar11 == uVar15) || (*(uint *)(lVar10 + 0x20) < *(uint *)(uVar11 + 0x20))) {
                    local_res20 = uVar15;
                    puVar8 = &local_res20;
                }
                else {
                    local_res8 = uVar11;
                    puVar8 = &local_res8;
                }
                if ((*puVar8 == uVar15) ||
                    (uVar11 = (ulonglong)*(uint *)(lVar10 + 0x24),
                            *(uint *)(*puVar8 + 0x24) != *(uint *)(lVar10 + 0x24))) {
                    lVar9 = FUN_140500700(uVar11,*(undefined4 *)(lVar10 + 0x20),*(undefined4 *)(lVar10 + 0x24)
                    );
                    uVar16 = uVar16 + lVar9;
                }
                lVar9 = *(longlong *)(lVar10 + 0x18);
                if (lVar9 == 0) {
                    lVar9 = *(longlong *)(lVar10 + 8);
                    if (lVar10 == *(longlong *)(lVar9 + 0x18)) {
                        do {
                            lVar10 = lVar9;
                            lVar9 = *(longlong *)(lVar10 + 8);
                        } while (lVar10 == *(longlong *)(lVar9 + 0x18));
                    }
                    if (*(longlong *)(lVar10 + 0x18) != lVar9) {
                        lVar10 = lVar9;
                    }
                }
                else {
                    for (lVar3 = *(longlong *)(lVar9 + 0x10); lVar10 = lVar9, lVar3 != 0;
                         lVar3 = *(longlong *)(lVar3 + 0x10)) {
                        lVar9 = lVar3;
                    }
                }
            } while (lVar10 != *(longlong *)(param_1 + 0x1b98));
        }
        local_40 = (uint *)0x0;
        local_38 = 0;
        local_30 = 0;
        if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
            (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar4)) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
        plVar2 = *(longlong **)(param_1 + 0x878);
        if (plVar2 != (longlong *)0x0) {
            lVar10 = DAT_140c658e8;
            if ((*(uint *)(param_1 + 0x1c14) < 0x11) && (*(uint *)(param_1 + 0x1c18) < 3)) {
                lVar10 = (longlong)(int)*(uint *)(param_1 + 0x1c18) * 0x50 +
                                        *(longlong *)
                                                ((longlong)(int)*(uint *)(param_1 + 0x1c14) * 0x20 + 8 +
                                                                *(longlong *)(DAT_140c658e8 + 0x58));
            }
            (**(code **)(*plVar2 + 0x140))(plVar2,local_48,param_1 + 0x1bd0,lVar10);
        }
        iVar4 = FUN_1404ff150(param_1);
        if ((iVar4 == 0) && (uVar15 = local_38 - (longlong)local_40 >> 2, uVar15 != 0)) {
            puVar12 = local_40;
            do {
                uVar1 = *(uint *)((*(longlong *)(param_1 + 0x1c70) - (longlong)local_40) + (longlong)puVar12
                );
                uVar5 = *puVar12;
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar1;
                local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar5;
                if ((int)(uVar1 ^ uVar5) < 0) {
                    uVar5 = 0x80000000 - uVar5;
                }
                uVar13 = (int)(uVar5 - uVar1) >> 0x1f;
                if (0x54 < (int)((uVar5 - uVar1 ^ uVar13) - uVar13)) {
                    if ((DAT_140dc3260 & 1) == 0) {
                        DAT_140dc3260 = DAT_140dc3260 | 1;
                        LAB_1404fd7fd:
                        _DAT_140dc326c = 1;
                        lVar10 = FUN_140200220(0x497);
                        if (lVar10 == 0) {
                            DAT_140dc3268 = 0;
                        }
                        else {
                            DAT_140dc3268 = *(int *)(lVar10 + 4);
                        }
                    }
                    else if (_DAT_140dc326c == 0) goto LAB_1404fd7fd;
                    uVar16 = uVar16 + (longlong)DAT_140dc3268;
                    break;
                }
                uVar14 = uVar14 + 1;
                puVar12 = puVar12 + 1;
            } while (uVar14 < uVar15);
        }
        if ((uVar16 != 0) && (param_3 != 0)) {
            if ((DAT_140dc3260 & 2) == 0) {
                DAT_140dc3260 = DAT_140dc3260 | 2;
                LAB_1404fd85b:
                _DAT_140dc3274 = 1;
                lVar10 = FUN_140200220(0x498);
                if (lVar10 == 0) {
                    DAT_140dc3270 = 0;
                }
                else {
                    DAT_140dc3270 = *(int *)(lVar10 + 4);
                }
            }
            else if (_DAT_140dc3274 == 0) goto LAB_1404fd85b;
            uVar16 = (ulonglong)DAT_140dc3270;
        }
        if (local_40 != (uint *)0x0) {
            FUN_14018b900(local_40,0);
        }
    }
    else {
        if (param_3 == 0) {
            *param_2 = 0;
            goto LAB_1404fd8e1;
        }
        uVar16 = FUN_140500700();
    }
    if ((uVar16 != 0) && (param_3 != 0)) {
        *param_2 = uVar16;
        param_2[1] = 0xf;
        *(undefined4 *)(param_2 + 2) = 0;
        *(undefined4 *)((longlong)param_2 + 0x14) = 9;
        return param_2;
    }
    *param_2 = uVar16;
    LAB_1404fd8e1:
    param_2[2] = 0;
    param_2[1] = 1;
    return param_2;
}



undefined4 FUN_1404fd910(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 local_58;
    undefined4 local_50;
    undefined4 uStack76;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar2 = FUN_1404f87c0(param_1,1);
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar4 + 1) = 5;
    *puVar4 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_1);
    local_20 = uVar1;
    FUN_1404fd530(lVar2,&local_58,0);
    FUN_1404fd530(lVar2,&local_40,1);
    puVar4 = (undefined8 *)FUN_140059170(param_1,0x18);
    *puVar4 = local_58;
    puVar4[1] = CONCAT44(uStack76,local_50);
    puVar4[2] = local_48;
    lVar2 = *(longlong *)(param_1 + 0x20);
    local_58 = FUN_140062650(param_1,"Game.Money",10);
    local_50 = 4;
    FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_58,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    FUN_1400fb540(&local_28,L"monCost");
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar4 = (undefined8 *)FUN_140059170(param_1,0x18);
    *puVar4 = local_40;
    puVar4[1] = local_38;
    puVar4[2] = local_30;
    lVar2 = *(longlong *)(param_1 + 0x20);
    local_58 = FUN_140062650(param_1,"Game.Money",10);
    local_50 = 4;
    FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_58,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    FUN_1400fb540(&local_28,L"monTokenCost");
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar4 = *puVar5;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1404fe250(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    lVar1 = FUN_1404f87c0(param_1,1);
    if (lVar1 != 0) {
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            FUN_140056d60(param_1,2);
        }
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
        if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
            FUN_140056d60(param_1,3);
        }
        uVar3 = FUN_140500700();
        local_20 = 1;
        local_18 = 0;
        puVar2 = (undefined8 *)FUN_140059170(param_1,0x18);
        *puVar2 = uVar3;
        puVar2[1] = local_20;
        puVar2[2] = local_18;
        lVar1 = *(longlong *)(param_1 + 0x20);
        local_28 = FUN_140062650(param_1,"Game.Money",10);
        local_20 = CONCAT44(local_20._4_4_,4);
        FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
        return 1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1404fe380(longlong param_1)

{
    longlong lVar1;
    ulonglong *puVar2;
    uint uVar3;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;

    lVar1 = FUN_1404f87c0();
    if (lVar1 == 0) {
        return 0;
    }
    lVar1 = FUN_140200220();
    if (lVar1 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(uint *)(lVar1 + 4);
    }
    local_18 = 0;
    local_20 = 1;
    puVar2 = (ulonglong *)FUN_140059170(param_1,0x18);
    *puVar2 = (ulonglong)uVar3;
    puVar2[1] = local_20;
    puVar2[2] = local_18;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_28 = FUN_140062650(param_1,"Game.Money",10);
    local_20 = CONCAT44(local_20._4_4_,4);
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



void FUN_1404fe4a0(longlong param_1)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    int iVar5;
    undefined4 uVar6;
    int iVar7;
    longlong *plVar8;
    undefined4 *puVar9;
    longlong lVar10;
    undefined8 uVar11;
    longlong lVar12;
    undefined4 *puVar13;
    undefined4 *puVar14;
    ulonglong uVar15;
    undefined auStack408 [32];
    undefined local_178 [4];
    undefined4 local_174;
    undefined4 local_168 [12];
    undefined4 local_138;
    undefined4 uStack308;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 local_128;
    undefined4 local_118 [60];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack408;
    if ((*(longlong *)(param_1 + 0x878) != 0) && (*(longlong *)(param_1 + 0x870) != 0)) {
        iVar5 = 0;
        if ((DAT_140c65898 != 0) &&
            ((*(longlong *)(param_1 + 0x890) != 0 &&
              (lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x890) + 0x10), iVar5 = 0, lVar12 != 0)))) {
            plVar8 = (longlong *)FUN_1404670b0(lVar12);
            if ((plVar8 != (longlong *)0x0) &&
                (iVar5 = (**(code **)(*plVar8 + 0x20))(plVar8), iVar5 != *(int *)(param_1 + 0x898))) {
                puVar9 = (undefined4 *)(**(code **)(*plVar8 + 0x10))(plVar8);
                if ((((uint)puVar9 | (uint)local_118) & 0xf) == 0) {
                    lVar10 = 1;
                    puVar4 = local_118;
                    do {
                        puVar14 = puVar9;
                        puVar13 = puVar4;
                        uVar6 = puVar14[1];
                        uVar2 = puVar14[2];
                        uVar3 = puVar14[3];
                        *puVar13 = *puVar14;
                        puVar13[1] = uVar6;
                        puVar13[2] = uVar2;
                        puVar13[3] = uVar3;
                        uVar6 = puVar14[5];
                        uVar2 = puVar14[6];
                        uVar3 = puVar14[7];
                        puVar13[4] = puVar14[4];
                        puVar13[5] = uVar6;
                        puVar13[6] = uVar2;
                        puVar13[7] = uVar3;
                        uVar6 = puVar14[9];
                        uVar2 = puVar14[10];
                        uVar3 = puVar14[0xb];
                        puVar13[8] = puVar14[8];
                        puVar13[9] = uVar6;
                        puVar13[10] = uVar2;
                        puVar13[0xb] = uVar3;
                        uVar6 = puVar14[0xd];
                        uVar2 = puVar14[0xe];
                        uVar3 = puVar14[0xf];
                        puVar13[0xc] = puVar14[0xc];
                        puVar13[0xd] = uVar6;
                        puVar13[0xe] = uVar2;
                        puVar13[0xf] = uVar3;
                        uVar6 = puVar14[0x11];
                        uVar2 = puVar14[0x12];
                        uVar3 = puVar14[0x13];
                        puVar13[0x10] = puVar14[0x10];
                        puVar13[0x11] = uVar6;
                        puVar13[0x12] = uVar2;
                        puVar13[0x13] = uVar3;
                        uVar6 = puVar14[0x15];
                        uVar2 = puVar14[0x16];
                        uVar3 = puVar14[0x17];
                        puVar13[0x14] = puVar14[0x14];
                        puVar13[0x15] = uVar6;
                        puVar13[0x16] = uVar2;
                        puVar13[0x17] = uVar3;
                        uVar6 = puVar14[0x19];
                        uVar2 = puVar14[0x1a];
                        uVar3 = puVar14[0x1b];
                        puVar13[0x18] = puVar14[0x18];
                        puVar13[0x19] = uVar6;
                        puVar13[0x1a] = uVar2;
                        puVar13[0x1b] = uVar3;
                        uVar6 = puVar14[0x1d];
                        uVar2 = puVar14[0x1e];
                        uVar3 = puVar14[0x1f];
                        puVar13[0x1c] = puVar14[0x1c];
                        puVar13[0x1d] = uVar6;
                        puVar13[0x1e] = uVar2;
                        puVar13[0x1f] = uVar3;
                        lVar10 = lVar10 + -1;
                        puVar4 = puVar13 + 0x20;
                        puVar9 = puVar14 + 0x20;
                    } while (lVar10 != 0);
                    uVar6 = puVar14[0x21];
                    uVar2 = puVar14[0x22];
                    uVar3 = puVar14[0x23];
                    puVar13[0x20] = puVar14[0x20];
                    puVar13[0x21] = uVar6;
                    puVar13[0x22] = uVar2;
                    puVar13[0x23] = uVar3;
                    uVar6 = puVar14[0x25];
                    uVar2 = puVar14[0x26];
                    uVar3 = puVar14[0x27];
                    puVar13[0x24] = puVar14[0x24];
                    puVar13[0x25] = uVar6;
                    puVar13[0x26] = uVar2;
                    puVar13[0x27] = uVar3;
                    uVar6 = puVar14[0x29];
                    uVar2 = puVar14[0x2a];
                    uVar3 = puVar14[0x2b];
                    puVar13[0x28] = puVar14[0x28];
                    puVar13[0x29] = uVar6;
                    puVar13[0x2a] = uVar2;
                    puVar13[0x2b] = uVar3;
                    uVar6 = puVar14[0x2d];
                    uVar2 = puVar14[0x2e];
                    uVar3 = puVar14[0x2f];
                    puVar13[0x2c] = puVar14[0x2c];
                    puVar13[0x2d] = uVar6;
                    puVar13[0x2e] = uVar2;
                    puVar13[0x2f] = uVar3;
                    uVar6 = puVar14[0x31];
                    uVar2 = puVar14[0x32];
                    uVar3 = puVar14[0x33];
                    puVar13[0x30] = puVar14[0x30];
                    puVar13[0x31] = uVar6;
                    puVar13[0x32] = uVar2;
                    puVar13[0x33] = uVar3;
                    uVar6 = puVar14[0x35];
                    uVar2 = puVar14[0x36];
                    uVar3 = puVar14[0x37];
                    puVar13[0x34] = puVar14[0x34];
                    puVar13[0x35] = uVar6;
                    puVar13[0x36] = uVar2;
                    puVar13[0x37] = uVar3;
                    uVar6 = puVar14[0x39];
                    uVar2 = puVar14[0x3a];
                    uVar3 = puVar14[0x3b];
                    puVar13[0x38] = puVar14[0x38];
                    puVar13[0x39] = uVar6;
                    puVar13[0x3a] = uVar2;
                    puVar13[0x3b] = uVar3;
                }
                else {
                    FUN_1407db590(local_118,puVar9,0xf0);
                }
                (**(code **)(**(longlong **)(param_1 + 0x878) + 0x18))
                        (*(longlong **)(param_1 + 0x878),*(undefined8 *)(param_1 + 0x870),local_118);
                uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8);
                iVar5 = 0;
                *(undefined4 *)(param_1 + 0x898) = uVar6;
                do {
                    plVar1 = *(longlong **)(param_1 + 0x878);
                    lVar10 = *plVar1;
                    uVar11 = (**(code **)(*plVar8 + 0x40))(plVar8,iVar5);
                    (**(code **)(lVar10 + 0x48))(plVar1,iVar5,uVar11);
                    iVar5 = iVar5 + 1;
                } while (iVar5 < 0x48);
            }
            iVar5 = FUN_14047c060(lVar12);
        }
        local_168[0] = 0;
        iVar7 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x100))
                (*(longlong **)(param_1 + 0x878),local_168);
        if (iVar7 == 0x200a0002) {
            uVar11 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x110))
                    (*(longlong **)(param_1 + 0x878),0);
            FUN_1400035c0(param_1 + 0x880,uVar11);
            (**(code **)(**(longlong **)(param_1 + 0x880) + 0x288))
                    (*(longlong **)(param_1 + 0x880),&LAB_1404fe450,param_1);
            FUN_1404ffdd0(param_1);
            iVar7 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x350))
                    (*(longlong **)(param_1 + 0x880),8);
            lVar12 = **(longlong **)(param_1 + 0x880);
            if (iVar7 == 0) {
                lVar12 = (**(code **)(lVar12 + 0x490))();
                local_138 = *(undefined4 *)(lVar12 + 0x20);
                uStack308 = *(undefined4 *)(lVar12 + 0x24);
                uStack304 = *(undefined4 *)(lVar12 + 0x28);
                uStack300 = *(undefined4 *)(lVar12 + 0x2c);
                local_128 = *(undefined4 *)(lVar12 + 0x30);
                *(float *)(param_1 + 0x904) = (*(float *)(lVar12 + 0x14) - *(float *)(lVar12 + 4)) - 0.5;
            }
            else {
                (**(code **)(lVar12 + 0x358))(*(longlong **)(param_1 + 0x880),local_178,8);
                *(undefined4 *)(param_1 + 0x904) = local_174;
            }
        }
        else if (iVar7 == 0x200a0004) {
            uVar11 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x118))
                    (*(longlong **)(param_1 + 0x878),0);
            FUN_1400035c0(param_1 + 0x888,uVar11);
            *(undefined4 *)(param_1 + 0x8b0) = 0;
            FUN_1400d4070(param_1,0x4f,param_1,"");
        }
        if (*(longlong *)(param_1 + 0x880) != 0) {
            (**(code **)(**(longlong **)(param_1 + 0x870) + 0x30))
                    (*(longlong **)(param_1 + 0x870),DAT_140c636a8,0);
            if (*(int *)(param_1 + 0x8e0) == 0) {
                iVar7 = *(int *)(param_1 + 0x820);
                *(int *)(param_1 + 0x910) = iVar7;
                if (iVar5 != 0) {
                    if (iVar7 == 2) {
                        iVar7 = 0x30;
                    }
                    *(int *)(param_1 + 0x910) = iVar7;
                }
                *(undefined8 *)(param_1 + 0x908) = 0;
                iVar7 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x420))
                        (*(longlong **)(param_1 + 0x880),*(undefined4 *)(param_1 + 0x910));
                while (iVar7 == 0) {
                    uVar15 = 0;
                    do {
                        plVar8 = (longlong *)
                                (**(code **)(**(longlong **)(param_1 + 0x878) + 0x78))
                                (*(longlong **)(param_1 + 0x878),uVar15 & 0xffffffff,0);
                        if (((plVar8 != (longlong *)0x0) &&
                             (iVar7 = (**(code **)(*plVar8 + 0x3b0))(plVar8), iVar7 != 0)) &&
                            (iVar7 = (**(code **)(*plVar8 + 0x420))(plVar8), iVar7 != 0)) {
                            *(longlong **)(param_1 + 0x908) = plVar8;
                            break;
                        }
                        uVar15 = uVar15 + 1;
                    } while (uVar15 < 0x48);
                    if (*(longlong *)(param_1 + 0x908) != 0) goto LAB_1404fe905;
                    iVar7 = *(int *)(param_1 + 0x910);
                    if (iVar7 == 4) {
                        *(undefined4 *)(param_1 + 0x910) = 1;
                    }
                    else {
                        if (iVar5 == 0) goto LAB_1404fe905;
                        if (iVar7 == 0x30) {
                            *(undefined4 *)(param_1 + 0x910) = 5;
                        }
                        else {
                            if (iVar7 != 5) goto LAB_1404fe905;
                            *(undefined4 *)(param_1 + 0x910) = 2;
                        }
                    }
                    iVar7 = (**(code **)(**(longlong **)(param_1 + 0x880) + 0x420))();
                }
                *(undefined8 *)(param_1 + 0x908) = *(undefined8 *)(param_1 + 0x880);
            }
            LAB_1404fe905:
            FUN_1404f5aa0(param_1,0);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack408);
    return;
}



void FUN_1404fe940(longlong param_1)

{
    int iVar1;

    if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))();
        if (0 < iVar1) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
    }
    FUN_1405005b0(param_1 + 0x8b8);
    FUN_140019490(param_1 + 0x8b8);
    return;
}



void FUN_1404fe990(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    ulonglong uVar4;

    if (((*(int *)(param_1 + 0x8b0) == 0) && (*(longlong *)(param_1 + 0x888) != 0)) &&
        (DAT_140c65b78 != 0)) {
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x8b0) = 1;
        uVar3 = 0;
        if ((*(longlong *)(param_1 + 0x890) != 0) &&
            (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x890) + 0x10), lVar1 != 0)) {
            uVar3 = *(undefined4 *)(lVar1 + 8);
        }
        if (*(longlong *)(param_1 + 0x8c0) != 0) {
            do {
                lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x8c8) + uVar4 * 8);
                while (lVar2 = lVar1, lVar2 != 0) {
                    lVar1 = *(longlong *)(lVar2 + 8);
                    if (**(longlong **)(lVar2 + 0x18) == 0) {
                        FUN_1405792a0(*(undefined8 *)(param_1 + 0x878),*(undefined4 *)(lVar2 + 0x10),uVar3,
                                      *(undefined8 *)(param_1 + 0x870),*(undefined8 *)(param_1 + 0x878),
                                      *(longlong **)(lVar2 + 0x18));
                    }
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(ulonglong *)(param_1 + 0x8c0));
        }
    }
    return;
}



void FUN_1404fea70(longlong param_1)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    ulonglong *puVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    ulonglong uVar8;
    undefined8 *puVar9;
    ulonglong *puVar10;
    undefined8 *puVar11;
    undefined8 *puVar12;
    int local_res8 [2];
    undefined8 *local_res10;
    undefined local_res18 [16];

    puVar11 = (undefined8 *)0x0;
    puVar12 = puVar11;
    if (*(longlong *)(param_1 + 0x890) != 0) {
        puVar12 = *(undefined8 **)(*(longlong *)(param_1 + 0x890) + 0x10);
    }
    if (puVar12 != (undefined8 *)0x0) {
        if ((*(longlong **)(param_1 + 0x918) != (longlong *)0x0) &&
            (iVar7 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))(), 0 < iVar7)) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
        plVar1 = (longlong *)(param_1 + 0x8b8);
        FUN_1405005b0(plVar1);
        FUN_140019490(plVar1);
        if (puVar12[3] == 0) {
            local_res8[0] = 0;
        }
        else {
            local_res8[0] = *(int *)(puVar12[3] + 0x168);
            if (local_res8[0] != 0) {
                uVar8 = (**(code **)(param_1 + 0x8d0))(local_res8);
                for (puVar10 = *(ulonglong **)
                        (*(longlong *)(param_1 + 0x8c8) +
                         (uVar8 % *(ulonglong *)(param_1 + 0x8c0)) * 8); puVar10 != (ulonglong *)0x0;
                     puVar10 = (ulonglong *)puVar10[1]) {
                    if ((uVar8 == *puVar10) &&
                        (iVar7 = (**(code **)(param_1 + 0x8d8))(local_res8), iVar7 != 0)) {
                        if (puVar10 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_1404febe0;
                        break;
                    }
                }
                puVar9 = (undefined8 *)FUN_14018b280(8);
                if (puVar9 != (undefined8 *)0x0) {
                    *puVar9 = 0;
                    puVar11 = puVar9;
                }
                if (*plVar1 == *(longlong *)(param_1 + 0x8c0)) {
                    FUN_1400290d0(plVar1);
                }
                uVar8 = (**(code **)(param_1 + 0x8d0))(local_res8);
                ppuVar2 = (ulonglong **)
                        (*(longlong *)(param_1 + 0x8c8) + (uVar8 % *(ulonglong *)(param_1 + 0x8c0)) * 8);
                puVar10 = (ulonglong *)FUN_14018b280(0x20);
                if (puVar10 == (ulonglong *)0x0) {
                    *ppuVar2 = (ulonglong *)0x0;
                    *plVar1 = *plVar1 + 1;
                }
                else {
                    puVar3 = *ppuVar2;
                    *puVar10 = uVar8;
                    puVar10[1] = (ulonglong)puVar3;
                    puVar10[3] = (ulonglong)puVar11;
                    *(int *)(puVar10 + 2) = local_res8[0];
                    *ppuVar2 = puVar10;
                    *plVar1 = *plVar1 + 1;
                }
            }
        }
        LAB_1404febe0:
        for (lVar4 = puVar12[0x2b9]; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
            lVar5 = *(longlong *)(lVar4 + 0x38);
            if ((((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 0x138), lVar6 != 0)) &&
                 (*(longlong *)(lVar6 + 8) != 0)) &&
                (((*(int *)(*(longlong *)(lVar6 + 8) + 0x1c) != 0 &&
                   (iVar7 = FUN_140540360(lVar5,*(undefined4 *)(puVar12 + 1)), iVar7 != 0)) &&
                  (iVar7 = FUN_1402dd480(plVar1,*(longlong *)(lVar6 + 8) + 0x1c,local_res18), iVar7 == 0))))
            {
                local_res10 = (undefined8 *)FUN_14018b280(8,0);
                if (local_res10 == (undefined8 *)0x0) {
                    local_res10 = (undefined8 *)0x0;
                }
                else {
                    *local_res10 = 0;
                }
                FUN_1400b6080(plVar1,*(longlong *)(lVar6 + 8) + 0x1c,&local_res10);
            }
        }
        *(undefined4 *)(param_1 + 0x8b0) = 0;
    }
    return;
}



void FUN_1404feca0(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *local_res8;

    if ((((*(longlong *)(param_1 + 0x890) != 0) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x890) + 0x10) != 0)) &&
         (lVar3 = FUN_1407a0fd0(DAT_140c65b70), lVar3 != 0)) &&
        ((lVar1 = *(longlong *)(lVar3 + 8), lVar1 != 0 && (*(int *)(lVar1 + 0x1c) != 0)))) {
        iVar2 = FUN_1402dd480(param_1 + 0x8b8,lVar1 + 0x1c,&local_res8);
        puVar4 = local_res8;
        if (iVar2 == 0) {
            local_res8 = (undefined8 *)FUN_14018b280(8,0);
            if (local_res8 == (undefined8 *)0x0) {
                local_res8 = (undefined8 *)0x0;
            }
            else {
                *local_res8 = 0;
            }
            puVar4 = local_res8;
            FUN_1400b6080(param_1 + 0x8b8,*(longlong *)(lVar3 + 8) + 0x1c,&local_res8);
        }
        if ((*(longlong *)(param_1 + 0x888) != 0) && (DAT_140c65b78 != 0)) {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x890) + 0x10);
            FUN_1405792a0(lVar1,*(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x1c),
                          *(undefined4 *)(lVar1 + 8),*(undefined8 *)(param_1 + 0x870),
                          *(undefined8 *)(param_1 + 0x878),puVar4);
        }
    }
    return;
}



void FUN_1404fedc0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    longlong **local_res8;

    if ((((*(longlong *)(param_1 + 0x890) != 0) &&
          (*(longlong *)(*(longlong *)(param_1 + 0x890) + 0x10) != 0)) &&
         (lVar4 = FUN_1407a0fd0(DAT_140c65b70), lVar4 != 0)) &&
        ((lVar1 = *(longlong *)(lVar4 + 8), lVar1 != 0 && (*(int *)(lVar1 + 0x1c) != 0)))) {
        iVar3 = FUN_1402dd480(param_1 + 0x8b8,lVar1 + 0x1c,&local_res8);
        if (iVar3 != 0) {
            plVar2 = *local_res8;
            while (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x28))(plVar2,1,1);
                plVar2 = *local_res8;
            }
            FUN_1400b6120(param_1 + 0x8b8,*(longlong *)(lVar4 + 8) + 0x1c);
            if (*local_res8 != (longlong *)0x0) {
                FUN_1401a4a00(local_res8);
            }
            FUN_14018b900(local_res8,0);
        }
    }
    return;
}



void FUN_1404fee90(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1c50) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x1c50)) {
        do {
            FUN_14002ec40(param_1 + 0x920,*(undefined4 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x24));
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
        } while (lVar3 != *(longlong *)(param_1 + 0x1c50));
    }
    return;
}



undefined8 * FUN_1404fef30(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    int *piVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong *puVar10;
    longlong lVar11;
    longlong lVar12;
    undefined8 *puVar13;
    uint uVar14;
    ulonglong uVar15;
    undefined8 *puVar16;
    undefined8 *puVar17;
    undefined8 *puVar18;
    ulonglong local_res8;
    ulonglong local_res10;

    if ((*(int *)(param_1 + 0x1c18) != *(int *)(param_1 + 0x1c8c)) ||
        (*(int *)(param_1 + 0x1c14) != *(int *)(param_1 + 0x1c88))) {
        return (undefined8 *)0x1;
    }
    lVar12 = *(longlong *)(param_1 + 0x1b98);
    lVar5 = *(longlong *)(lVar12 + 0x10);
    if (lVar5 != lVar12) {
        uVar2 = *(ulonglong *)(param_1 + 0x1c50);
        do {
            if (*(ulonglong *)(uVar2 + 8) == 0) {
                LAB_1404fefbf:
                local_res10 = uVar2;
                puVar10 = &local_res10;
            }
            else {
                uVar8 = *(ulonglong *)(uVar2 + 8);
                uVar15 = uVar2;
                do {
                    if (*(uint *)(uVar8 + 0x20) < *(uint *)(lVar5 + 0x20)) {
                        uVar9 = *(ulonglong *)(uVar8 + 0x18);
                    }
                    else {
                        uVar9 = *(ulonglong *)(uVar8 + 0x10);
                        uVar15 = uVar8;
                    }
                    uVar8 = uVar9;
                } while (uVar9 != 0);
                if ((uVar15 == uVar2) || (*(uint *)(lVar5 + 0x20) < *(uint *)(uVar15 + 0x20)))
                    goto LAB_1404fefbf;
                local_res8 = uVar15;
                puVar10 = &local_res8;
            }
            if (*puVar10 == uVar2) {
                return (undefined8 *)0x1;
            }
            if (*(int *)(*puVar10 + 0x24) != *(int *)(lVar5 + 0x24)) {
                return (undefined8 *)0x1;
            }
            lVar11 = *(longlong *)(lVar5 + 0x18);
            if (lVar11 == 0) {
                lVar11 = *(longlong *)(lVar5 + 8);
                if (lVar5 == *(longlong *)(lVar11 + 0x18)) {
                    do {
                        lVar5 = lVar11;
                        lVar11 = *(longlong *)(lVar5 + 8);
                    } while (lVar5 == *(longlong *)(lVar11 + 0x18));
                }
                if (*(longlong *)(lVar5 + 0x18) != lVar11) {
                    lVar5 = lVar11;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar11 + 0x10); lVar5 = lVar11, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar11 = lVar3;
                }
            }
        } while (lVar5 != lVar12);
    }
    puVar16 = (undefined8 *)0x0;
    lVar12 = *(longlong *)(param_1 + 0x1c00) - *(longlong *)(param_1 + 0x1bf8) >> 3;
    puVar6 = puVar16;
    if (lVar12 != 0) {
        puVar6 = (undefined8 *)FUN_14018b280(lVar12 * 8,0);
    }
    puVar18 = *(undefined8 **)(param_1 + 0x1c00);
    puVar17 = puVar6;
    for (puVar13 = *(undefined8 **)(param_1 + 0x1bf8); puVar13 != puVar18; puVar13 = puVar13 + 1) {
        if (puVar17 != (undefined8 *)0x0) {
            *puVar17 = *puVar13;
        }
        puVar17 = puVar17 + 1;
    }
    if (puVar6 != puVar17) {
        puVar18 = puVar6;
        do {
            if (*(int **)(param_1 + 0x1c30) != *(int **)(param_1 + 0x1c38)) {
                piVar7 = *(int **)(param_1 + 0x1c30);
                do {
                    if (*piVar7 == *(int *)puVar18) {
                        uVar4 = piVar7[1];
                        uVar1 = *(uint *)((longlong)puVar18 + 4);
                        local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)uVar1;
                        local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)uVar4;
                        if ((int)(uVar1 ^ uVar4) < 0) {
                            uVar4 = 0x80000000 - uVar4;
                        }
                        uVar14 = (int)(uVar4 - uVar1) >> 0x1f;
                        if (0x54 < (int)((uVar4 - uVar1 ^ uVar14) - uVar14)) {
                            puVar16 = (undefined8 *)0x1;
                            goto LAB_1404ff122;
                        }
                        break;
                    }
                    piVar7 = piVar7 + 2;
                } while (piVar7 != *(int **)(param_1 + 0x1c38));
            }
            puVar18 = puVar18 + 1;
        } while (puVar18 != puVar17);
    }
    LAB_1404ff122:
    if (puVar6 != (undefined8 *)0x0) {
        FUN_14018b900(puVar6,0);
    }
    return puVar16;
}



int FUN_1404ff150(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong lVar5;
    ulonglong uVar6;
    int iVar7;
    longlong local_res8;
    longlong local_res10;

    lVar1 = *(longlong *)(param_1 + 0x1b98);
    iVar7 = 0;
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 == lVar1) {
        return 0;
    }
    do {
        if (iVar7 != 0) {
            return iVar7;
        }
        local_res10 = *(longlong *)(param_1 + 0x1c50);
        local_res8 = local_res10;
        if (*(longlong *)(local_res10 + 8) != 0) {
            lVar5 = *(longlong *)(local_res10 + 8);
            do {
                if (*(uint *)(lVar5 + 0x20) < *(uint *)(lVar2 + 0x20)) {
                    lVar3 = *(longlong *)(lVar5 + 0x18);
                }
                else {
                    lVar3 = *(longlong *)(lVar5 + 0x10);
                    local_res8 = lVar5;
                }
                lVar5 = lVar3;
            } while (lVar3 != 0);
        }
        if ((local_res8 == local_res10) || (*(uint *)(lVar2 + 0x20) < *(uint *)(local_res8 + 0x20))) {
            plVar4 = &local_res10;
        }
        else {
            plVar4 = &local_res8;
        }
        if ((*plVar4 == local_res10) || (*(int *)(*plVar4 + 0x24) != *(int *)(lVar2 + 0x24))) {
            uVar6 = 0;
            do {
                if (iVar7 != 0) break;
                if (*(int *)(lVar2 + 0x20) == *(int *)((longlong)&DAT_140b0fb48 + uVar6)) {
                    iVar7 = 1;
                }
                uVar6 = uVar6 + 4;
            } while (uVar6 < 0xc);
        }
        lVar5 = *(longlong *)(lVar2 + 0x18);
        if (lVar5 == 0) {
            lVar5 = *(longlong *)(lVar2 + 8);
            if (lVar2 == *(longlong *)(lVar5 + 0x18)) {
                do {
                    lVar2 = lVar5;
                    lVar5 = *(longlong *)(lVar2 + 8);
                } while (lVar2 == *(longlong *)(lVar5 + 0x18));
            }
            if (*(longlong *)(lVar2 + 0x18) != lVar5) {
                lVar2 = lVar5;
            }
        }
        else {
            for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar2 = lVar5, lVar3 != 0;
                 lVar3 = *(longlong *)(lVar3 + 0x10)) {
                lVar5 = lVar3;
            }
        }
        if (lVar2 == lVar1) {
            return iVar7;
        }
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404ff280(longlong **param_1,longlong *param_2,undefined4 param_3,uint param_4)

{
    int iVar1;
    undefined8 local_res8;
    undefined8 in_stack_ffffffffffffff28;
    uint uVar4;
    ulonglong uVar2;
    undefined *puVar3;
    undefined8 in_stack_ffffffffffffff30;
    undefined4 uVar5;
    undefined8 in_stack_ffffffffffffff38;
    undefined4 uVar6;
    undefined local_a8 [16];
    LPVOID local_98;
    undefined8 local_88;
    longlong *plStack128;
    LPVOID local_78;
    undefined **local_68;
    undefined8 uStack96;
    undefined8 local_58;
    int iStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    int iStack48;
    undefined4 uStack44;

    uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
    uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
    uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
    if (*param_1 != (longlong *)0x0) {
        (**(code **)(**param_1 + 8))();
        *param_1 = (longlong *)0x0;
    }
    uVar2 = (ulonglong)uVar4 << 0x20;
    iVar1 = (**(code **)(*DAT_140c65670 + 0x58))
            (DAT_140c65670,param_3,param_4,1,uVar2,CONCAT44(uVar5,3),CONCAT44(uVar6,1),0x100
                    ,0,param_1);
    if (iVar1 < 0) {
        local_88 = &PTR_LAB_140b5e648;
        plStack128 = (longlong *)0x0;
        local_78 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_88);
        local_a8 = CONCAT88(plStack128,local_88);
        local_68 = &PTR_LAB_140b5e648;
        uStack96 = L"Result";
        local_98 = local_78;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_68);
        local_68 = &PTR_LAB_140b5e640;
        local_38 = (undefined4)local_58;
        uStack52 = local_58._4_4_;
        uStack44 = uStack76;
        local_res8 = 0x141e09ac0;
        local_48 = 0x40b5e640;
        uStack68 = 1;
        uStack64 = (undefined4)uStack96;
        uStack60 = uStack96._4_4_;
        iStack80 = iVar1;
        iStack48 = iVar1;
        iVar1 = FUN_1401971e0(&DAT_140c8ad5c,0xd,&local_res8,param_3,
                              uVar2 & 0xffffffff00000000 | (ulonglong)param_4,&local_48,local_a8);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_58);
        local_88 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_78);
        if (iVar1 != 0) {
            DebugBreak();
        }
    }
    (**(code **)(*DAT_140c65670 + 0x120))();
    (**(code **)(*DAT_140c65670 + 0x1f8))();
    (**(code **)(*DAT_140c65670 + 0x200))();
    plStack128 = *param_1;
    local_88 = (undefined **)CONCAT44(local_88._4_4_,1);
    local_78 = (LPVOID)((ulonglong)local_78 & 0xffffffff);
    puVar3 = &DAT_140c3fe88;
    (**(code **)(*DAT_140c65670 + 0x208))
            (DAT_140c65670,&local_88,&DAT_140c3fe88,&DAT_140c3fe88,&DAT_140c3fe88);
    (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
    local_a8 = ZEXT816(0);
    uVar2 = (ulonglong)puVar3 & 0xffffffff00000000;
    (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_a8);
    (**(code **)(*DAT_140c65680 + 0x38))();
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,1);
    local_88 = (undefined **)0x3f8000003f800000;
    plStack128 = (longlong *)0x3f8000003f800000;
    local_a8._0_12_ =
            CONCAT48(param_3,SUB168(local_a8,0)) & (undefined  [12])0xffffffffffffffff &
            SUB1612((undefined  [16])0xffffffffffffffff,0);
    local_a8 = CONCAT412(param_4,local_a8._0_12_) & (undefined  [16])0xffffffffffffffff;
    if (*param_2 != 0) {
        FUN_140103cf0(*param_2,local_a8,&local_88,0,
                      uVar2 & 0xffffffff00000000 |
                      (ulonglong)
                              (uint)((DAT_140c63664 - *(float *)(param_2 + 1)) *
                                     *(float *)((longlong)param_2 + 0xc)));
    }
    (**(code **)(*DAT_140c65680 + 0x128))();
    (**(code **)(*DAT_140c65670 + 0x2a0))();
    (**(code **)(*DAT_140c65670 + 0x228))();
    // WARNING: Could not recover jumptable at 0x0001404ff5a8. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*DAT_140c65670 + 0x220))();
    return;
}



// WARNING: Heritage AFTER dead removal. Example location: XMM1_Qa : 0x0001404ff98c
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// WARNING: Restarted to delay deadcode elimination for space: register

void FUN_1404ff5b0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    longlong *plVar1;
    char cVar2;
    short sVar6;
    short sVar7;
    short sVar8;
    short sVar9;
    ulonglong uVar10;
    unkbyte10 Var11;
    undefined auVar12 [12];
    undefined auVar13 [14];
    short sVar14;
    undefined6 uVar15;
    ulonglong uVar16;
    int iVar17;
    undefined4 uVar18;
    uint uVar19;
    int iVar20;
    int iVar21;
    undefined uVar22;
    undefined uVar23;
    undefined in_XMM1_Bh;
    char cVar24;
    char cVar25;
    undefined auVar26 [16];
    undefined4 uVar27;
    undefined local_48 [20];
    undefined4 local_34;
    char cVar3;
    char cVar4;
    char cVar5;

    if ((*(longlong **)(param_3 + 0x918) != (longlong *)0x0) &&
        (iVar17 = (**(code **)(**(longlong **)(param_3 + 0x918) + 0x18))(), 0 < iVar17)) {
        (**(code **)(**(longlong **)(param_3 + 0x918) + 0x70))();
    }
    plVar1 = *(longlong **)(param_3 + 0x888);
    if (plVar1 != (longlong *)0x0) {
        local_48._0_4_ = 0;
        iVar17 = (**(code **)(*plVar1 + 0x18))(plVar1,local_48,1);
        if (iVar17 != 0) {
            local_48._0_4_ = 0;
            iVar17 = (**(code **)(**(longlong **)(param_3 + 0x848) + 0x20))
                    (*(longlong **)(param_3 + 0x848),local_48);
            if (iVar17 != 0) {
                local_48._0_4_ = 0;
                iVar17 = (**(code **)(**(longlong **)(param_3 + 0x858) + 0x20))
                        (*(longlong **)(param_3 + 0x858),local_48);
                if (iVar17 != 0) {
                    local_48._0_16_ = ZEXT1216(local_48._4_12_) << 0x20;
                    iVar17 = (**(code **)(**(longlong **)(param_3 + 0x868) + 0x20))
                            (*(longlong **)(param_3 + 0x868),local_48);
                    if (iVar17 != 0) {
                        (**(code **)(*DAT_140c65670 + 0x1f8))();
                        (**(code **)(*DAT_140c65670 + 0x200))();
                        local_48._0_16_ = CONCAT88(*(undefined8 *)(param_3 + 0x850),local_48._0_8_);
                        local_48._0_16_ = CONCAT124(local_48._4_12_,1);
                        local_34 = 0;
                        (**(code **)(*DAT_140c65670 + 0x208))
                                (DAT_140c65670,local_48,&DAT_140c3fe88,&DAT_140c3fe88);
                        (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
                        (**(code **)(*DAT_140c65670 + 0x278))(DAT_140c65670,3);
                        (**(code **)(**(longlong **)(param_3 + 0x888) + 0x128))
                                (*(longlong **)(param_3 + 0x888),1);
                        (**(code **)(**(longlong **)(param_3 + 0x888) + 0x140))
                                (*(longlong **)(param_3 + 0x888),1);
                        (**(code **)(**(longlong **)(param_3 + 0x870) + 0x50))
                                (*(longlong **)(param_3 + 0x870),param_3 + 0x440,param_3 + 0x480,
                                 param_3 + 0x4c0);
                        uVar27 = 0x3f800000;
                        plVar1 = *(longlong **)(param_3 + 0x870);
                        if ((*(byte *)(param_3 + 0x298) >> 2 & 1) == 0) {
                            (**(code **)(*plVar1 + 0x80))(plVar1,param_3 + 0x4d0,param_3 + 0x4c0,param_3 + 0x510);
                        }
                        else {
                            (**(code **)(*plVar1 + 0x80))();
                        }
                        (**(code **)(*DAT_140c65670 + 0x2a0))();
                        (**(code **)(*DAT_140c65670 + 0x120))();
                        (**(code **)(*DAT_140c65670 + 0x1d0))(DAT_140c65670,4,5);
                        local_48._0_16_ = CONCAT88(*(undefined8 *)(param_3 + 0x860),local_48._0_8_);
                        local_48._0_16_ = CONCAT124(local_48._4_12_,1);
                        local_34 = 0;
                        (**(code **)(*DAT_140c65670 + 0x208))
                                (DAT_140c65670,local_48,&DAT_140c3fe88,&DAT_140c3fe88);
                        (**(code **)(*DAT_140c65670 + 0x210))(DAT_140c65670,&DAT_140c3fe88,1);
                        auVar26 = ZEXT416(0);
                        local_48._0_16_ = auVar26;
                        (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,local_48);
                        (**(code **)(*DAT_140c65670 + 0x160))
                                (DAT_140c65670,0,*(undefined8 *)(param_3 + 0x848),0);
                        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,1,*(undefined8 *)(param_3 + 0x850));
                        (**(code **)(*DAT_140c65670 + 0x160))(DAT_140c65670,2,*(undefined8 *)(param_3 + 0x858));
                        (**(code **)(*DAT_140c65670 + 0x178))(DAT_140c65670,*(undefined8 *)(param_3 + 0x8a8),0);
                        uVar18 = FUN_1400c9c30(*(undefined8 *)(param_3 + 0x10));
                        auVar26 = maxps(auVar26,CONCAT412(uVar18,CONCAT48(0x3f800000,CONCAT44(uVar27,0x3f800000)
                        )));
                        auVar26 = minps(auVar26,_DAT_140b7b240);
                        iVar17 = (int)(SUB164(auVar26,0) * 255.0 + 0.5);
                        uVar19 = (uint)(SUB164(auVar26 >> 0x20,0) * 255.0 + 0.5);
                        iVar20 = (int)(SUB164(auVar26 >> 0x40,0) * 255.0 + 0.5);
                        iVar21 = (int)(SUB164(auVar26 >> 0x60,0) * 255.0 + 0.5);
                        uVar22 = (undefined)(uVar19 >> 8);
                        uVar23 = (undefined)(uVar19 >> 0x10);
                        cVar24 = (char)((uint)iVar17 >> 0x10);
                        cVar25 = (char)((uint)iVar21 >> 0x10);
                        uVar16 = (ulonglong)CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14((char)uVar19,iVar20)));
                        uVar10 = ((ulonglong)uVar19 & 0xff000000) << 0x20 | uVar16;
                        Var11 = CONCAT19((char)((uint)iVar17 >> 8),CONCAT18((char)iVar17,uVar10));
                        auVar12 = CONCAT111((char)((uint)iVar17 >> 0x18),CONCAT110(cVar24,Var11));
                        auVar13 = CONCAT113((char)((uint)iVar21 >> 8),CONCAT112((char)iVar21,auVar12));
                        sVar6 = (short)iVar20;
                        cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char)iVar20 - (0xff < sVar6);
                        sVar6 = (short)(uVar16 >> 0x10);
                        sVar7 = (short)(uVar16 >> 0x20);
                        cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char)(uVar16 >> 0x20) - (0xff < sVar7);
                        sVar7 = (short)(uVar10 >> 0x30);
                        sVar8 = (short)((unkuint10)Var11 >> 0x40);
                        cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char)iVar17 - (0xff < sVar8);
                        sVar8 = SUB122(auVar12 >> 0x50,0);
                        sVar9 = SUB142(auVar13 >> 0x60,0);
                        cVar5 = (0 < sVar9) * (sVar9 < 0xff) * (char)iVar21 - (0xff < sVar9);
                        sVar9 = SUB162(CONCAT115((char)((uint)iVar21 >> 0x18),CONCAT114(cVar25,auVar13)) >> 0x70
                                ,0);
                        sVar14 = CONCAT11((0 < sVar6) * (sVar6 < 0xff) * (char)(uVar16 >> 0x10) - (0xff < sVar6)
                                ,cVar2);
                        uVar18 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char)(uVar16 >> 0x30) - (0xff < sVar7)
                                ,CONCAT12(cVar3,sVar14));
                        uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar24 - (0xff < sVar8),
                                          CONCAT14(cVar4,uVar18));
                        sVar6 = (short)((uint)uVar18 >> 0x10);
                        sVar7 = (short)((uint6)uVar15 >> 0x20);
                        sVar8 = (short)(CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar25 - (0xff < sVar9),
                                                 CONCAT16(cVar5,uVar15)) >> 0x30);
                        (**(code **)(*DAT_140c65670 + 0x298))
                                (iVar17,CONCAT17(in_XMM1_Bh,
                                                 CONCAT16(uVar23,CONCAT15(uVar22,CONCAT14((char)uVar19,param_2
                                                 )))),uVar27,
                                 DAT_140c65670,
                                 CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar5 - (0xff < sVar8),
                                          CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                                   CONCAT11((0 < sVar6) * (sVar6 < 0xff) * cVar3 -
                                                            (0xff < sVar6),
                                                            (0 < sVar14) * (sVar14 < 0xff) * cVar2 -
                                                            (0xff < sVar14)))));
                        (**(code **)(*DAT_140c65670 + 0x2a0))();
                        (**(code **)(*DAT_140c65670 + 0x228))();
                        (**(code **)(*DAT_140c65670 + 0x220))();
                        *(undefined4 *)(param_3 + 0x410) = 0;
                    }
                }
            }
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1404ffa00(longlong param_1)

{
    longlong **pplVar1;
    longlong **pplVar2;
    uint uVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined8 local_res8;
    undefined8 in_stack_ffffffffffffff28;
    uint uVar10;
    undefined4 *puVar9;
    undefined8 in_stack_ffffffffffffff30;
    undefined4 uVar11;
    undefined8 in_stack_ffffffffffffff38;
    undefined4 uVar12;
    undefined **local_a8;
    undefined8 local_a0;
    LPVOID local_98;
    undefined **local_88;
    undefined8 local_80;
    LPVOID local_78;
    undefined **local_68;
    undefined8 uStack96;
    undefined8 local_58;
    int iStack80;
    undefined4 uStack76;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined4 local_38;
    undefined4 uStack52;
    int iStack48;
    undefined4 uStack44;

    uVar10 = (uint)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
    uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff30 >> 0x20);
    uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff38 >> 0x20);
    if ((*(byte *)(param_1 + 0x1c) & 1) != 0) {
        pplVar1 = (longlong **)(param_1 + 0x850);
        if (*pplVar1 != (longlong *)0x0) {
            (**(code **)(**pplVar1 + 8))();
            *pplVar1 = (longlong *)0x0;
        }
        pplVar2 = (longlong **)(param_1 + 0x860);
        if (*pplVar2 != (longlong *)0x0) {
            (**(code **)(**pplVar2 + 8))();
            *pplVar2 = (longlong *)0x0;
        }
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x428);
        if (0x1fff < *(uint *)(param_1 + 0x428) - 1) {
            uVar8 = 1;
        }
        uVar3 = *(uint *)(param_1 + 0x42c);
        if (0x1fff < *(uint *)(param_1 + 0x42c) - 1) {
            uVar3 = 1;
        }
        puVar9 = (undefined4 *)((ulonglong)uVar10 << 0x20);
        uVar5 = (ulonglong)((float)uVar8 * *(float *)(param_1 + 0x420));
        uVar6 = uVar5 & 0xffffffff;
        if (0x1fff < (int)uVar5 - 1U) {
            uVar6 = 1;
        }
        uVar5 = (ulonglong)((float)(ulonglong)uVar3 * *(float *)(param_1 + 0x420));
        uVar7 = uVar5 & 0xffffffff;
        if (0x1fff < (int)uVar5 - 1U) {
            uVar7 = 1;
        }
        iVar4 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,uVar6,uVar7,1,puVar9,CONCAT44(uVar11,5),CONCAT44(uVar12,1),
                 0x100,0,pplVar1);
        if (iVar4 < 0) {
            local_a8 = &PTR_LAB_140b5e648;
            local_a0 = 0;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a8);
            local_88 = local_a8;
            local_80 = local_a0;
            local_68 = &PTR_LAB_140b5e648;
            local_78 = local_98;
            uStack96 = L"Result";
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_68);
            local_68 = &PTR_LAB_140b5e640;
            local_38 = (undefined4)local_58;
            uStack52 = local_58._4_4_;
            uStack44 = uStack76;
            local_res8 = 0x141e09a00;
            local_48 = 0x40b5e640;
            uStack68 = 1;
            uStack64 = (undefined4)uStack96;
            uStack60 = uStack96._4_4_;
            puVar9 = &local_48;
            iStack80 = iVar4;
            iStack48 = iVar4;
            iVar4 = FUN_140197770(0xd,&local_res8,uVar6,uVar7,puVar9,&local_88);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_58);
            local_a8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_98);
            if (iVar4 != 0) {
                DebugBreak();
            }
        }
        uVar5 = (ulonglong)puVar9 & 0xffffffff00000000;
        iVar4 = (**(code **)(*DAT_140c65670 + 0x58))
                (DAT_140c65670,uVar8,uVar3,1,uVar5,3,1,0x100,0,pplVar2);
        if (iVar4 < 0) {
            local_a8 = &PTR_LAB_140b5e648;
            local_a0 = 0;
            local_98 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_a8);
            local_88 = local_a8;
            local_80 = local_a0;
            local_68 = &PTR_LAB_140b5e648;
            uStack96 = L"Result";
            local_78 = local_98;
            local_58 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_68);
            local_68 = &PTR_LAB_140b5e640;
            local_res8 = 0x141e09c40;
            local_48 = 0x40b5e640;
            uStack68 = 1;
            uStack64 = (undefined4)uStack96;
            uStack60 = uStack96._4_4_;
            local_38 = (undefined4)local_58;
            uStack52 = local_58._4_4_;
            uStack44 = uStack76;
            iStack80 = iVar4;
            iStack48 = iVar4;
            iVar4 = FUN_1401971e0(&DAT_140c8ad58,0xd,&local_res8,uVar8,
                                  uVar5 & 0xffffffff00000000 | (ulonglong)uVar3,&local_48,&local_88);
            local_68 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_58);
            local_a8 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_98);
            if (iVar4 != 0) {
                DebugBreak();
            }
        }
        *(undefined4 *)(param_1 + 0x410) = 1;
    }
    return;
}



void FUN_1404ffdd0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong *plVar5;
    double dVar6;
    int local_38;
    int local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined8 local_24;
    undefined4 local_1c;

    if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))();
        if (0 < iVar2) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
    }
    if (*(longlong *)(param_1 + 0x880) != 0) {
        local_38 = *(int *)(param_1 + 0x418);
        if (((local_38 == 0x1eb8) && (local_38 = 0x607, *(int *)(param_1 + 0x820) == 5)) &&
            (*(longlong **)(param_1 + 0x878) != (longlong *)0x0)) {
            lVar3 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x10))();
            if (-1 < *(int *)(lVar3 + 0xc)) {
                lVar3 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0x10))();
                if (*(int *)(lVar3 + 0xc) < 0x11) {
                    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x878) + 0xa0))();
                    if ((uVar4 & 3) == 0) {
                        if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
                            iVar2 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))();
                            if (0 < iVar2) {
                                (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
                            }
                        }
                        plVar5 = *(longlong **)(param_1 + 0x878);
                        if (plVar5 != (longlong *)0x0) {
                            plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5,0x14);
                            if (*plVar5 != 0) {
                                uVar1 = *(uint *)(*plVar5 + 0x10);
                                if (uVar1 < 0x50) {
                                    if (uVar1 == 0x4f) {
                                        local_38 = 0x52a;
                                    }
                                    else if (uVar1 == 0x2d) {
                                        local_38 = 0x1c4;
                                    }
                                    else if (uVar1 == 0x2e) {
                                        local_38 = 0x5af;
                                    }
                                    else if (uVar1 == 0x33) {
                                        local_38 = 0x5e;
                                    }
                                }
                                else if (uVar1 == 0xcc) {
                                    local_38 = 0x1c1e;
                                }
                                else if (uVar1 == 0x15c) {
                                    local_38 = 0x47f;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (*(int *)(param_1 + 0x414) == 0) {
            local_30 = 0;
        }
        else {
            local_30 = *(undefined4 *)(param_1 + 0x424);
        }
        plVar5 = *(longlong **)(param_1 + 0x880);
        dVar6 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
        local_24 = 2;
        local_34 = (int)(dVar6 * 65536.0);
        local_2c = *(undefined4 *)(param_1 + 0x41c);
        local_28 = 0;
        local_1c = 0;
        (**(code **)(*plVar5 + 0x248))(plVar5,0,&local_38);
    }
    return;
}



undefined4 FUN_1404fffb0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;

    if (*(longlong **)(param_1 + 0x918) != (longlong *)0x0) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x918) + 0x18))();
        if (0 < iVar1) {
            (**(code **)(**(longlong **)(param_1 + 0x918) + 0x70))();
        }
    }
    plVar2 = *(longlong **)(param_1 + 0x878);
    if (plVar2 != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2,0x14);
        if (*plVar2 != 0) {
            return *(undefined4 *)(*plVar2 + 0x10);
        }
    }
    return 0x22d;
}

