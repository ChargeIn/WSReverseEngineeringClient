//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_14042b770(longlong param_1,uint *param_2)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar6 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar6;
    if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar6);
    }
    puVar1 = *(undefined8 **)(lVar6 + 0x10);
    uVar3 = FUN_14005c1b0(lVar6,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(lVar6);
    uVar4 = 0;
    uVar5 = uVar4;
    if (*param_2 != 0) {
        do {
            if ((*(longlong *)(param_2 + 2) + uVar5 != 0) && (iVar2 = FUN_140433750(lVar6), iVar2 != 0)) {
                FUN_1400fb470(&local_28);
                *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                lVar6 = local_18;
            }
            uVar4 = uVar4 + 1;
            uVar5 = uVar5 + 0x70;
        } while (uVar4 < *param_2);
    }
    FUN_1400ea3e0(param_1,"OwnedItemAuctions",&DAT_1409ec3d4,local_20);
    if (lVar6 != 0) {
        FUN_1400579e0(lVar6);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14042b9a0(longlong param_1,uint *param_2)

{
    byte bVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    double *pdVar5;
    code *pcVar6;
    int iVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    undefined8 uVar11;
    undefined8 *puVar12;
    longlong lVar13;
    undefined8 *puVar14;
    undefined8 *puVar15;
    undefined8 uVar16;
    longlong lVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    longlong lVar20;
    double dVar21;
    undefined4 uVar22;
    undefined4 uVar23;
    int local_res18;
    int iStackX28;
    int local_f8;
    int iStack244;
    undefined **local_f0;
    ulonglong local_e8;
    longlong local_e0;
    undefined4 local_d8;
    ulonglong local_d0;
    undefined8 local_c8;
    undefined8 local_c0;
    undefined8 local_b8;
    undefined8 *local_b0;
    undefined4 local_a8;
    undefined **local_a0;
    undefined4 local_98;
    longlong local_90;
    undefined4 local_88;
    undefined **local_80;
    int local_78;
    undefined4 uStack116;
    longlong local_70;
    undefined4 local_68;

    if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
        lVar3 = *(longlong *)(param_1 + 400);
        local_80 = &PTR_FUN_140b569f0;
        local_68 = 1;
        local_70 = lVar3;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar15 = *(undefined8 **)(lVar3 + 0x10);
        uVar11 = FUN_14005c1b0(lVar3,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar11;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        iVar7 = FUN_1400578c0(lVar3);
        uVar18 = (ulonglong)*param_2;
        local_78 = iVar7;
        puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),iVar7)
                ;
        puVar15 = *(undefined8 **)(lVar3 + 0x10);
        *puVar15 = *puVar12;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        FUN_1400f06f0(lVar3,puVar15,L"nBuyOrderCount",uVar18 & 0xffffffff);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
        puVar15 = *(undefined8 **)(lVar3 + 0x10);
        puVar12 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),iVar7)
                ;
        *puVar15 = *puVar12;
        *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        FUN_1400f06f0(lVar3);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
        local_a0 = &PTR_FUN_140b569f0;
        local_88 = 1;
        local_90 = lVar3;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar15 = *(undefined8 **)(lVar3 + 0x10);
        uVar11 = FUN_14005c1b0(lVar3,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar11;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        local_98 = FUN_1400578c0(lVar3);
        puVar15 = (undefined8 *)(param_2 + 2);
        uVar18 = 0;
        do {
            local_f0 = &PTR_FUN_140b569f0;
            local_d8 = 1;
            local_e0 = lVar3;
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar12 = *(undefined8 **)(lVar3 + 0x10);
            uVar11 = FUN_14005c1b0(lVar3,0,0);
            *(undefined4 *)(puVar12 + 1) = 5;
            *puVar12 = uVar11;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            uVar8 = FUN_1400578c0(lVar3);
            uVar11 = *puVar15;
            local_e8 = local_e8 & 0xffffffff00000000 | (ulonglong)uVar8;
            local_c0 = 1;
            local_b8 = 0;
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            if (*(longlong *)(lVar3 + 0x28) == *(longlong *)(lVar3 + 0x50)) {
                uVar16 = *(undefined8 *)(lVar3 + 0x78);
            }
            else {
                uVar16 = *(undefined8 *)(**(longlong **)(*(longlong *)(lVar3 + 0x28) + 8) + 0x18);
            }
            lVar13 = FUN_1400627d0(lVar3,0x18,uVar16);
            plVar4 = *(longlong **)(lVar3 + 0x10);
            *plVar4 = lVar13;
            *(undefined4 *)(plVar4 + 1) = 7;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            *(undefined8 *)(lVar13 + 0x30) = uVar11;
            *(undefined8 *)(lVar13 + 0x38) = local_c0;
            *(undefined8 *)(lVar13 + 0x40) = local_b8;
            lVar13 = *(longlong *)(lVar3 + 0x20);
            local_b0 = (undefined8 *)FUN_140062650(lVar3,"Game.Money",10);
            local_a8 = 4;
            FUN_14005e8e0(lVar3,lVar13 + 0xa0,&local_b0,*(undefined8 *)(lVar3 + 0x10));
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            FUN_140058bf0(lVar3,0xfffffffe);
            FUN_1400fb540(&local_f0,L"monPrice");
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + -0x10;
            puVar12 = *(undefined8 **)(lVar3 + 0x10);
            iVar7 = *(int *)((longlong)&DAT_140afc8c0 + uVar18);
            puVar14 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar3 + 0x20) + 0xa0),uVar8);
            *puVar12 = *puVar14;
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar14 + 1);
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            lVar13 = FUN_14018f0e0(&local_f0,L"nCount");
            lVar13 = *(longlong *)(lVar13 + 8);
            if (lVar13 == 0) {
                *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
                *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            }
            else {
                lVar20 = -1;
                do {
                    lVar20 = lVar20 + 1;
                } while (*(char *)(lVar13 + lVar20) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar3);
                }
                puVar12 = *(undefined8 **)(lVar3 + 0x10);
                uVar11 = FUN_140062650(lVar3,lVar13,lVar20);
                *(undefined4 *)(puVar12 + 1) = 4;
                *puVar12 = uVar11;
                *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            }
            if (local_e8 != 0) {
                FUN_14018b900(local_e8,0);
            }
            pdVar5 = *(double **)(lVar3 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)iVar7;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(lVar3,0xfffffffd);
            FUN_14005ea50(lVar3,uVar11,*(longlong *)(lVar3 + 0x10) + -0x20,
                          *(longlong *)(lVar3 + 0x10) + -0x10);
            *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
            FUN_1400fb1d0(&local_a0);
            FUN_1400579e0(lVar3);
            uVar18 = uVar18 + 4;
            puVar15 = puVar15 + 1;
        } while (uVar18 < 0xc);
        FUN_1400fb2a0(&local_80,L"arBuyOrderPrices",local_98);
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar15 = *(undefined8 **)(lVar3 + 0x10);
        uVar11 = FUN_14005c1b0(lVar3,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar11;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        iVar9 = FUN_1400578c0(lVar3);
        uVar22 = 0;
        uVar23 = 0;
        puVar15 = (undefined8 *)(param_2 + 10);
        uVar18 = 0;
        local_d0 = 0;
        iVar7 = 1;
        do {
            local_b0 = puVar15;
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar12 = *(undefined8 **)(lVar3 + 0x10);
            uVar11 = FUN_14005c1b0(lVar3,0,0);
            *(undefined4 *)(puVar12 + 1) = 5;
            *puVar12 = uVar11;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            iVar10 = FUN_1400578c0(lVar3);
            uVar11 = *puVar15;
            local_e8 = 1;
            local_e0 = 0;
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            if (*(longlong *)(lVar3 + 0x28) == *(longlong *)(lVar3 + 0x50)) {
                uVar16 = *(undefined8 *)(lVar3 + 0x78);
            }
            else {
                uVar16 = *(undefined8 *)(**(longlong **)(*(longlong *)(lVar3 + 0x28) + 8) + 0x18);
            }
            lVar13 = *(longlong *)(lVar3 + 0x20);
            puVar15 = (undefined8 *)(**(code **)(lVar13 + 0x10))(*(undefined8 *)(lVar13 + 0x18),0,0,0x48);
            if (puVar15 == (undefined8 *)0x0) {
                FUN_140061040(lVar3,4);
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
            }
            *(longlong *)(lVar13 + 0x78) = *(longlong *)(lVar13 + 0x78) + 0x48;
            bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x20) + 0x20);
            *(undefined *)(puVar15 + 1) = 7;
            puVar15[4] = 0x18;
            puVar15[2] = 0;
            puVar15[3] = uVar16;
            *(byte *)((longlong)puVar15 + 9) = bVar1 & 3;
            *puVar15 = **(undefined8 **)(*(longlong *)(lVar3 + 0x20) + 0xb0);
            **(undefined8 **)(*(longlong *)(lVar3 + 0x20) + 0xb0) = puVar15;
            puVar12 = *(undefined8 **)(lVar3 + 0x10);
            *puVar12 = puVar15;
            *(undefined4 *)(puVar12 + 1) = 7;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            puVar15[6] = uVar11;
            puVar15[7] = local_e8;
            puVar15[8] = local_e0;
            lVar13 = *(longlong *)(lVar3 + 0x20);
            local_c8 = FUN_140062650(lVar3,"Game.Money",10);
            local_c0 = CONCAT44(local_c0._4_4_,4);
            FUN_14005e8e0(lVar3,lVar13 + 0xa0,&local_c8,*(undefined8 *)(lVar3 + 0x10));
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            FUN_140058bf0(lVar3,0xfffffffe);
            puVar15 = *(undefined8 **)(lVar3 + 0x10);
            lVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
            lVar20 = *(longlong *)(lVar3 + 0x18);
            if (iVar10 - 1U < *(uint *)(lVar13 + 0x38)) {
                puVar12 = (undefined8 *)((longlong)(iVar10 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
            }
            else {
                dVar21 = (double)iVar10;
                if (dVar21 == (double)CONCAT44(uVar23,uVar22)) {
                    puVar12 = *(undefined8 **)(lVar13 + 0x20);
                }
                else {
                    iStack244 = (int)((ulonglong)dVar21 >> 0x20);
                    local_f8 = SUB84(dVar21,0);
                    puVar12 = (undefined8 *)
                            (*(longlong *)(lVar13 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                              (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar12 + 3) == 3) && (dVar21 == (double)puVar12[2])) goto LAB_14042c00f;
                    puVar12 = (undefined8 *)puVar12[4];
                } while (puVar12 != (undefined8 *)0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_14042c00f:
            *puVar15 = *puVar12;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            lVar13 = FUN_14018f0e0(&local_f0,L"monPrice");
            lVar13 = *(longlong *)(lVar13 + 8);
            if (lVar13 == 0) {
                *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
            }
            else {
                lVar17 = -1;
                do {
                    lVar17 = lVar17 + 1;
                } while (*(char *)(lVar13 + lVar17) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar3);
                }
                puVar12 = *(undefined8 **)(lVar3 + 0x10);
                uVar11 = FUN_140062650(lVar3,lVar13,lVar17);
                *(undefined4 *)(puVar12 + 1) = 4;
                *puVar12 = uVar11;
            }
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            if (local_e8 != 0) {
                FUN_14018b900(local_e8,0);
            }
            puVar12 = (undefined8 *)FUN_1400580e0(lVar3,(longlong)puVar15 - lVar20 >> 4 & 0xffffffff);
            puVar15 = *(undefined8 **)(lVar3 + 0x10);
            *puVar15 = *puVar12;
            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar12 + 1);
            lVar13 = *(longlong *)(lVar3 + 0x10);
            *(longlong *)(lVar3 + 0x10) = lVar13 + 0x10;
            FUN_14005ea50(lVar3,lVar13 + -0x20,lVar13 + -0x10,lVar13);
            uVar19 = local_d0;
            lVar13 = *(longlong *)(lVar3 + 0x10);
            puVar15 = (undefined8 *)(lVar13 + -0x40);
            *(undefined8 **)(lVar3 + 0x10) = puVar15;
            iVar2 = *(int *)((longlong)&DAT_140afc8c0 + local_d0);
            lVar20 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
            if (iVar10 - 1U < *(uint *)(lVar20 + 0x38)) {
                puVar12 = (undefined8 *)((longlong)(iVar10 + -1) * 0x10 + *(longlong *)(lVar20 + 0x18));
            }
            else {
                dVar21 = (double)iVar10;
                if (dVar21 == (double)CONCAT44(uVar23,uVar22)) {
                    puVar12 = *(undefined8 **)(lVar20 + 0x20);
                }
                else {
                    iStack244 = (int)((ulonglong)dVar21 >> 0x20);
                    local_f8 = SUB84(dVar21,0);
                    puVar12 = (undefined8 *)
                            (*(longlong *)(lVar20 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                              (longlong)((1 << (*(byte *)(lVar20 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar12 + 3) == 3) && (dVar21 == (double)puVar12[2])) goto LAB_14042c184;
                    puVar12 = (undefined8 *)puVar12[4];
                } while (puVar12 != (undefined8 *)0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_14042c184:
            *puVar15 = *puVar12;
            *(undefined4 *)(lVar13 + -0x38) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            lVar13 = FUN_14018f0e0(&local_f0,L"nCount");
            lVar13 = *(longlong *)(lVar13 + 8);
            if (lVar13 == 0) {
                *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
            }
            else {
                lVar20 = -1;
                do {
                    lVar20 = lVar20 + 1;
                } while (*(char *)(lVar13 + lVar20) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar3);
                }
                puVar15 = *(undefined8 **)(lVar3 + 0x10);
                uVar11 = FUN_140062650(lVar3,lVar13,lVar20);
                *(undefined4 *)(puVar15 + 1) = 4;
                *puVar15 = uVar11;
                uVar19 = local_d0;
            }
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            if (local_e8 != 0) {
                FUN_14018b900(local_e8,0);
            }
            pdVar5 = *(double **)(lVar3 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)iVar2;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(lVar3,0xfffffffd);
            FUN_14005ea50(lVar3,uVar11,*(longlong *)(lVar3 + 0x10) + -0x20,
                          *(longlong *)(lVar3 + 0x10) + -0x10);
            lVar13 = *(longlong *)(lVar3 + 0x10);
            *(undefined **)(lVar3 + 0x10) = &DAT_ffffffffffffffd0 + lVar13;
            lVar20 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
            if (iVar9 - 1U < *(uint *)(lVar20 + 0x38)) {
                puVar15 = (undefined8 *)((longlong)(iVar9 + -1) * 0x10 + *(longlong *)(lVar20 + 0x18));
            }
            else {
                dVar21 = (double)iVar9;
                if (dVar21 == (double)CONCAT44(uVar23,uVar22)) {
                    puVar15 = *(undefined8 **)(lVar20 + 0x20);
                }
                else {
                    iStack244 = (int)((ulonglong)dVar21 >> 0x20);
                    local_f8 = SUB84(dVar21,0);
                    puVar15 = (undefined8 *)
                            (*(longlong *)(lVar20 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                              (longlong)((1 << (*(byte *)(lVar20 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar15 + 3) == 3) && (dVar21 == (double)puVar15[2])) goto LAB_14042c2fd;
                    puVar15 = (undefined8 *)puVar15[4];
                } while (puVar15 != (undefined8 *)0x0);
                puVar15 = &DAT_140a12138;
            }
            LAB_14042c2fd:
            *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar13) = *puVar15;
            *(undefined4 *)(lVar13 + -0x28) = *(undefined4 *)(puVar15 + 1);
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            pdVar5 = *(double **)(lVar3 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)iVar7;
            lVar13 = *(longlong *)(lVar3 + 0x10);
            puVar15 = (undefined8 *)(lVar13 + 0x10);
            *(undefined8 **)(lVar3 + 0x10) = puVar15;
            lVar20 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
            if (iVar10 - 1U < *(uint *)(lVar20 + 0x38)) {
                puVar12 = (undefined8 *)((longlong)(iVar10 + -1) * 0x10 + *(longlong *)(lVar20 + 0x18));
            }
            else {
                dVar21 = (double)iVar10;
                if (dVar21 == (double)CONCAT44(uVar23,uVar22)) {
                    puVar12 = *(undefined8 **)(lVar20 + 0x20);
                }
                else {
                    iStack244 = (int)((ulonglong)dVar21 >> 0x20);
                    local_f8 = SUB84(dVar21,0);
                    puVar12 = (undefined8 *)
                            (*(longlong *)(lVar20 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                              (longlong)((1 << (*(byte *)(lVar20 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar12 + 3) == 3) && (dVar21 == (double)puVar12[2])) goto LAB_14042c3c4;
                    puVar12 = (undefined8 *)puVar12[4];
                } while (puVar12 != (undefined8 *)0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_14042c3c4:
            *puVar15 = *puVar12;
            *(undefined4 *)(lVar13 + 0x18) = *(undefined4 *)(puVar12 + 1);
            lVar13 = *(longlong *)(lVar3 + 0x10);
            *(longlong *)(lVar3 + 0x10) = lVar13 + 0x10;
            FUN_14005ea50(lVar3,lVar13 + -0x20,lVar13 + -0x10,lVar13);
            *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
            FUN_1400579e0();
            iVar10 = local_78;
            local_d0 = uVar19 + 4;
            puVar15 = local_b0 + 1;
            iVar7 = iVar7 + 1;
        } while (local_d0 < 0xc);
        lVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
        if (local_78 - 1U < *(uint *)(lVar13 + 0x38)) {
            puVar12 = (undefined8 *)((longlong)(local_78 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
        }
        else {
            dVar21 = (double)local_78;
            if (dVar21 == (double)CONCAT44(uVar23,uVar22)) {
                puVar12 = *(undefined8 **)(lVar13 + 0x20);
            }
            else {
                iStackX28 = (int)((ulonglong)dVar21 >> 0x20);
                local_res18 = SUB84(dVar21,0);
                puVar12 = (undefined8 *)
                        (*(longlong *)(lVar13 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                          (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar12 + 3) == 3) && (dVar21 == (double)puVar12[2])) goto LAB_14042c4af;
                puVar12 = (undefined8 *)puVar12[4];
            } while (puVar12 != (undefined8 *)0x0);
            puVar12 = &DAT_140a12138;
        }
        LAB_14042c4af:
        puVar14 = *(undefined8 **)(lVar3 + 0x10);
        *puVar14 = *puVar12;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar12 + 1);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        local_b0 = puVar15;
        lVar13 = FUN_14018f0e0(&local_80,L"arSellOrderPrices");
        lVar13 = *(longlong *)(lVar13 + 8);
        if (lVar13 == 0) {
            *(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 8) = 0;
        }
        else {
            lVar20 = -1;
            do {
                lVar20 = lVar20 + 1;
            } while (*(char *)(lVar13 + lVar20) != '\0');
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar15 = *(undefined8 **)(lVar3 + 0x10);
            uVar11 = FUN_140062650(lVar3,lVar13,lVar20);
            *(undefined4 *)(puVar15 + 1) = 4;
            *puVar15 = uVar11;
        }
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        if (CONCAT44(uStack116,local_78) != 0) {
            FUN_14018b900(CONCAT44(uStack116,local_78),0);
        }
        lVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0xa0);
        if (iVar9 - 1U < *(uint *)(lVar13 + 0x38)) {
            puVar15 = (undefined8 *)((longlong)(iVar9 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
        }
        else {
            dVar21 = (double)iVar9;
            if (dVar21 == (double)CONCAT44(uVar23,uVar22)) {
                puVar15 = *(undefined8 **)(lVar13 + 0x20);
            }
            else {
                iStackX28 = (int)((ulonglong)dVar21 >> 0x20);
                local_res18 = SUB84(dVar21,0);
                puVar15 = (undefined8 *)
                        (*(longlong *)(lVar13 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                          (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar15 + 3) == 3) && (dVar21 == (double)puVar15[2])) goto LAB_14042c5cd;
                puVar15 = (undefined8 *)puVar15[4];
            } while (puVar15 != (undefined8 *)0x0);
            puVar15 = &DAT_140a12138;
        }
        LAB_14042c5cd:
        puVar12 = *(undefined8 **)(lVar3 + 0x10);
        *puVar12 = *puVar15;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar15 + 1);
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        lVar13 = *(longlong *)(lVar3 + 0x10);
        FUN_14005ea50(lVar3,&DAT_ffffffffffffffd0 + lVar13,lVar13 + -0x20,lVar13 + -0x10);
        *(longlong *)(lVar3 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar3 + 0x10));
        local_f0 = &PTR_FUN_140b569f0;
        local_d8 = 1;
        local_e0 = lVar3;
        if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar3);
        }
        puVar15 = *(undefined8 **)(lVar3 + 0x10);
        uVar11 = FUN_14005c1b0(lVar3,0,0);
        *(undefined4 *)(puVar15 + 1) = 5;
        *puVar15 = uVar11;
        *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
        local_e8._0_4_ = FUN_1400578c0(lVar3);
        local_e8 = local_e8 & 0xffffffff00000000 | (ulonglong)(uint)local_e8;
        lVar13 = lVar3;
        uVar19 = uVar18;
        if (param_2[0x10] != 0) {
            do {
                if ((*(longlong *)(param_2 + 0x12) + uVar18 != 0) &&
                    (iVar7 = FUN_1404341e0(lVar13), iVar7 != 0)) {
                    FUN_1400fb470(&local_f0);
                    *(longlong *)(local_e0 + 0x10) = *(longlong *)(local_e0 + 0x10) + -0x10;
                    lVar13 = local_e0;
                }
                uVar19 = uVar19 + 1;
                uVar18 = uVar18 + 0x28;
            } while (uVar19 < param_2[0x10]);
        }
        FUN_1400ea3e0(param_1,"CREDDExchangeInfoResults",&DAT_1409ec8a4,iVar10,(uint)local_e8);
        if (lVar13 != 0) {
            FUN_1400579e0(lVar13);
        }
        FUN_1400579e0(lVar3);
        if (local_90 != 0) {
            FUN_1400579e0();
        }
        FUN_1400579e0(lVar3);
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014042cc35)
// WARNING: Removing unreachable block (ram,0x00014042cc50)

void FUN_14042c760(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    longlong *plVar4;
    _FILETIME _Var5;
    undefined4 uVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    ulonglong uVar10;
    uint *puVar11;
    longlong lVar12;
    undefined8 uVar13;
    undefined8 *puVar14;
    longlong lVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    undefined4 uVar19;
    undefined4 uVar20;
    float fVar21;
    longlong local_res18;
    _FILETIME local_res20;
    undefined **local_130;
    undefined4 local_128;
    longlong local_120;
    undefined4 local_118;
    undefined local_110 [8];
    longlong local_108;
    undefined8 local_f0;
    undefined4 local_e8;
    undefined **local_e0;
    undefined4 local_d8;
    longlong local_d0;
    undefined4 local_c8;

    if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
        lVar2 = *(longlong *)(param_1 + 400);
        local_130 = &PTR_FUN_140b569f0;
        local_118 = 1;
        local_120 = lVar2;
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar2);
        }
        puVar14 = *(undefined8 **)(lVar2 + 0x10);
        uVar7 = FUN_14005c1b0(lVar2,0,0);
        *(undefined4 *)(puVar14 + 1) = 5;
        *puVar14 = uVar7;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        local_128 = FUN_1400578c0(lVar2);
        local_res18 = param_2[1];
        lVar9 = lVar2;
        if (local_res18 != 0) {
            lVar15 = 0;
            fVar17 = -1.0;
            fVar18 = 1.0;
            uVar19 = 0xe3bc40b0;
            uVar20 = 0x3d745c7f;
            fVar21 = 1e-06;
            do {
                local_e0 = &PTR_FUN_140b569f0;
                local_c8 = 1;
                local_d0 = lVar2;
                if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar2);
                }
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                uVar7 = FUN_14005c1b0(lVar2,0,0);
                *(undefined4 *)(puVar14 + 1) = 5;
                *puVar14 = uVar7;
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar6 = FUN_1400578c0(lVar2);
                iVar1 = *(int *)(lVar15 + *param_2);
                local_d8 = uVar6;
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar6);
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                *puVar14 = *puVar8;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_110,L"eOperation");
                lVar9 = *(longlong *)(lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                }
                else {
                    lVar12 = -1;
                    do {
                        lVar12 = lVar12 + 1;
                    } while (*(char *)(lVar9 + lVar12) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar2);
                    }
                    puVar14 = *(undefined8 **)(lVar2 + 0x10);
                    uVar7 = FUN_140062650(lVar2,lVar9,lVar12);
                    *(undefined4 *)(puVar14 + 1) = 4;
                    *puVar14 = uVar7;
                }
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                if (local_108 != 0) {
                    FUN_14018b900(local_108,0);
                }
                pdVar3 = *(double **)(lVar2 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)iVar1;
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar7 = FUN_1400580e0(lVar2,0xfffffffd);
                FUN_14005ea50(lVar2,uVar7,*(longlong *)(lVar2 + 0x10) + -0x20,
                              *(longlong *)(lVar2 + 0x10) + -0x10);
                *(longlong *)(lVar2 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                iVar1 = *(int *)(lVar15 + 4 + *param_2);
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar6);
                *puVar14 = *puVar8;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_110,L"bInitiator");
                lVar9 = *(longlong *)(lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                }
                else {
                    lVar12 = -1;
                    do {
                        lVar12 = lVar12 + 1;
                    } while (*(char *)(lVar9 + lVar12) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar2);
                    }
                    puVar14 = *(undefined8 **)(lVar2 + 0x10);
                    uVar7 = FUN_140062650(lVar2,lVar9,lVar12);
                    *(undefined4 *)(puVar14 + 1) = 4;
                    *puVar14 = uVar7;
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    lVar9 = 0;
                }
                if (local_108 != 0) {
                    FUN_14018b900(local_108,0);
                }
                puVar11 = *(uint **)(lVar2 + 0x10);
                puVar11[2] = 1;
                *puVar11 = (uint)lVar9 & 0xffffff00 | (uint)(iVar1 != 0);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar7 = FUN_1400580e0(lVar2,0xfffffffd);
                FUN_14005ea50(lVar2,uVar7,*(longlong *)(lVar2 + 0x10) + -0x20,
                              *(longlong *)(lVar2 + 0x10) + -0x10);
                *(longlong *)(lVar2 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
                uVar7 = *(undefined8 *)(lVar15 + 0x10 + *param_2);
                if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar2);
                }
                if (*(longlong *)(lVar2 + 0x28) == *(longlong *)(lVar2 + 0x50)) {
                    uVar13 = *(undefined8 *)(lVar2 + 0x78);
                }
                else {
                    uVar13 = *(undefined8 *)(**(longlong **)(*(longlong *)(lVar2 + 0x28) + 8) + 0x18);
                }
                lVar9 = FUN_1400627d0(lVar2,0x18,uVar13);
                plVar4 = *(longlong **)(lVar2 + 0x10);
                *plVar4 = lVar9;
                *(undefined4 *)(plVar4 + 1) = 7;
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                *(undefined8 *)(lVar9 + 0x30) = uVar7;
                *(undefined8 *)(lVar9 + 0x38) = 1;
                *(undefined8 *)(lVar9 + 0x40) = 0;
                lVar9 = *(longlong *)(lVar2 + 0x20);
                local_f0 = FUN_140062650(lVar2,"Game.Money",10);
                local_e8 = 4;
                FUN_14005e8e0(lVar2,lVar9 + 0xa0,&local_f0,*(undefined8 *)(lVar2 + 0x10));
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_140058bf0(lVar2,0xfffffffe);
                FUN_1400fb540(&local_e0);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                _Var5 = *(_FILETIME *)(lVar15 + 8 + *param_2);
                fVar16 = 0.0;
                if (_Var5 != (_FILETIME)0x0) {
                    GetSystemTimeAsFileTime(&local_res20);
                    if ((ulonglong)_Var5 < (ulonglong)local_res20) {
                        uVar10 = (longlong)local_res20 - (longlong)_Var5;
                        fVar16 = fVar17;
                    }
                    else {
                        uVar10 = (longlong)_Var5 - (longlong)local_res20;
                        fVar16 = fVar18;
                    }
                    fVar16 = ((float)((double)(uVar10 % 864000000000) * (double)CONCAT44(uVar20,uVar19)) +
                              (float)(uVar10 / 864000000000)) * fVar16;
                    if (fVar16 <= fVar21) {
                        fVar16 = fVar21;
                    }
                }
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar6);
                puVar14 = *(undefined8 **)(lVar2 + 0x10);
                *puVar14 = *puVar8;
                *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_110,L"nLogAge");
                lVar9 = *(longlong *)(lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
                }
                else {
                    lVar12 = -1;
                    do {
                        lVar12 = lVar12 + 1;
                    } while (*(char *)(lVar9 + lVar12) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar2);
                    }
                    puVar14 = *(undefined8 **)(lVar2 + 0x10);
                    uVar7 = FUN_140062650(lVar2,lVar9,lVar12);
                    *(undefined4 *)(puVar14 + 1) = 4;
                    *puVar14 = uVar7;
                }
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                if (local_108 != 0) {
                    FUN_14018b900(local_108,0);
                }
                pdVar3 = *(double **)(lVar2 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)fVar16;
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                uVar7 = FUN_1400580e0(lVar2,0xfffffffd);
                FUN_14005ea50(lVar2,uVar7,*(longlong *)(lVar2 + 0x10) + -0x20,
                              *(longlong *)(lVar2 + 0x10) + -0x10);
                *(longlong *)(lVar2 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
                puVar11 = (uint *)FUN_1405e2120(DAT_140c65898 + 0x6838);
                if (puVar11 != (uint *)0x0) {
                    uVar10 = (ulonglong)*puVar11;
                    puVar8 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar6);
                    puVar14 = *(undefined8 **)(lVar2 + 0x10);
                    *puVar14 = *puVar8;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar8 + 1);
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar2,puVar14,L"nFriendId",uVar10 & 0xffffffff);
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                }
                FUN_1400fb1d0(&local_130);
                FUN_1400579e0(lVar2);
                lVar15 = lVar15 + 0x40;
                local_res18 = local_res18 + -1;
                lVar9 = local_120;
            } while (local_res18 != 0);
        }
        FUN_1400ea3e0(param_1,"CREDDOperationHistoryResults",&DAT_1409ecc8c,local_128);
        if (lVar9 != 0) {
            FUN_1400579e0(lVar9);
        }
    }
    return;
}



void FUN_14042cea0(undefined8 param_1)

{
    longlong lVar1;

    if ((*(int *)(DAT_140c65898 + 0x6ee0) != 0) && (lVar1 = FUN_1403d90d0(DAT_140c65898), lVar1 != 0))
    {
        FUN_1400ea3e0(param_1,"DuelStateChanged",&DAT_1409ecc6c,*(undefined4 *)(DAT_140c65898 + 0x6ee4),
                      *(undefined4 *)(lVar1 + 8));
        return;
    }
    FUN_1400ea3e0(param_1,"DuelStateChanged",&DAT_1409ecaec,*(undefined4 *)(DAT_140c65898 + 0x6ee4));
    return;
}



void FUN_14042cf30(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    if ((DAT_140dc2898 & 1) == 0) {
        DAT_140dc2898 = DAT_140dc2898 | 1;
        lVar2 = FUN_140200220(0x380);
        if (lVar2 == 0) {
            iVar1 = 5000;
        }
        else {
            iVar1 = *(int *)(lVar2 + 4);
        }
        DAT_140dc289c = (float)iVar1 * 0.001;
    }
    FUN_1400ea3e0(param_1,"DuelAccepted",&DAT_1409ecac4,(double)DAT_140dc289c);
    return;
}



void FUN_14042cfb0(undefined8 param_1)

{
    ulonglong uVar1;

    if ((DAT_140dc28a0 & 1) == 0) {
        DAT_140dc28a0 = DAT_140dc28a0 | 1;
        uVar1 = FUN_140200220(0x3b9);
        if (uVar1 != 0) {
            uVar1 = (ulonglong)*(uint *)(uVar1 + 4);
        }
        DAT_140dc28a4 = (float)(int)uVar1 * 0.001;
    }
    FUN_1400ea3e0(param_1,"DuelLeftArea",&DAT_1409eca8c,(double)DAT_140dc28a4);
    return;
}



void FUN_14042d030(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    double *pdVar5;
    int iVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    int iVar10;
    double dVar11;
    undefined4 in_XMM6_Da;
    undefined4 uVar12;
    undefined4 in_XMM6_Db;
    undefined4 uVar13;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    int local_res8;
    int iStackX12;
    undefined auVar14 [16];

    lVar2 = *(longlong *)(param_1 + 400);
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    uVar7 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar7;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    iVar6 = FUN_1400578c0(lVar2);
    uVar9 = 0;
    if (param_2[1] != 0) {
        auVar14 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        uVar12 = 0;
        uVar13 = 0;
        iVar10 = 1;
        do {
            lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            iVar1 = *(int *)(*param_2 + uVar9 * 4);
            if (iVar6 - 1U < *(uint *)(lVar3 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar3 + 0x18));
            }
            else {
                dVar11 = (double)iVar6;
                if (dVar11 == (double)CONCAT44(uVar13,uVar12)) {
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
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_14042d149;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_14042d149:
            puVar4 = *(undefined8 **)(lVar2 + 0x10);
            *puVar4 = *puVar8;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            pdVar5 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)iVar10;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            pdVar5 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)iVar1;
            lVar3 = *(longlong *)(lVar2 + 0x10);
            *(longlong *)(lVar2 + 0x10) = lVar3 + 0x10;
            FUN_14005ea50(lVar2,lVar3 + -0x20,lVar3 + -0x10,lVar3,auVar14);
            *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
            uVar9 = uVar9 + 1;
            iVar10 = iVar10 + 1;
        } while (uVar9 < (ulonglong)param_2[1]);
    }
    FUN_1400ea3e0(param_1,"ScientistExperimentationResult",&DAT_1409ecf9c,iVar6);
    FUN_1400579e0(lVar2);
    return;
}



void FUN_14042d230(longlong param_1,longlong *param_2,longlong param_3,undefined4 param_4)

{
    uint uVar1;
    double *pdVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined8 *puVar12;
    uint local_158;
    undefined **local_150;
    undefined4 local_148;
    longlong local_140;
    undefined4 local_138;
    undefined **local_130;
    undefined4 local_128;
    longlong local_120;
    undefined4 local_118;
    undefined **local_110;
    undefined4 local_108;
    longlong local_100;
    undefined4 local_f8;
    undefined **local_f0;
    undefined4 local_e8;
    longlong local_e0;
    undefined4 local_d8;
    longlong local_d0;
    undefined **local_c8;
    undefined4 local_c0;
    longlong local_b8;
    undefined4 local_b0;
    longlong local_a8;
    undefined **local_a0;
    undefined4 local_98;
    longlong local_90;
    undefined4 local_88;
    undefined **local_80;
    undefined4 local_78;
    longlong local_70;
    undefined4 local_68;
    undefined local_60 [8];
    longlong local_58;

    lVar6 = FUN_140229540(param_4);
    if (lVar6 != 0) {
        lVar6 = *(longlong *)(param_1 + 400);
        local_138 = 1;
        local_150 = &PTR_FUN_140b569f0;
        local_140 = lVar6;
        if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar6);
        }
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        uVar7 = FUN_14005c1b0(lVar6,0,0);
        *(undefined4 *)(puVar12 + 1) = 5;
        *puVar12 = uVar7;
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar6);
        uVar11 = (ulonglong)*(uint *)(param_3 + 8);
        local_148 = uVar4;
        puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        *puVar12 = *puVar8;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        FUN_1400f06f0(lVar6,puVar12,L"nElapsedTime",uVar11 & 0xffffffff);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
        *puVar12 = *puVar8;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        FUN_1400f06f0(lVar6);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
        *puVar12 = *puVar8;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        FUN_1400f06f0(lVar6);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
        local_130 = &PTR_FUN_140b569f0;
        local_118 = 1;
        local_120 = lVar6;
        if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar6);
        }
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        uVar7 = FUN_14005c1b0(lVar6,0,0);
        *(undefined4 *)(puVar12 + 1) = 5;
        *puVar12 = uVar7;
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        local_128 = FUN_1400578c0(lVar6);
        FUN_1400fa9e0(&local_130,*(undefined4 *)(param_3 + 0x58));
        FUN_1400fa9e0(&local_130,*(undefined4 *)(param_3 + 0x5c));
        FUN_1400fa9e0(&local_130,*(undefined4 *)(param_3 + 0x60));
        FUN_1400fb2a0(&local_150,L"arRewardThresholds",local_128);
        local_f0 = &PTR_FUN_140b569f0;
        local_d8 = 1;
        local_e0 = lVar6;
        if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar6);
        }
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        uVar7 = FUN_14005c1b0(lVar6,0,0);
        *(undefined4 *)(puVar12 + 1) = 5;
        *puVar12 = uVar7;
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        local_e8 = FUN_1400578c0(lVar6);
        uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
        FUN_140433b50(&local_f0,*(undefined8 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x20),uVar4,
                      param_4);
        FUN_1400fb2a0(&local_150,L"arTeamStats",local_e8);
        local_c8 = &PTR_FUN_140b569f0;
        local_b0 = 1;
        local_b8 = lVar6;
        if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar6);
        }
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        uVar7 = FUN_14005c1b0(lVar6,0,0);
        *(undefined4 *)(puVar12 + 1) = 5;
        *puVar12 = uVar7;
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        local_c0 = FUN_1400578c0(lVar6);
        uVar4 = (**(code **)(*param_2 + 0x20))(param_2);
        FUN_140433ce0(&local_c8,*(undefined8 *)(param_3 + 0x38),*(undefined4 *)(param_3 + 0x30),uVar4);
        FUN_1400fb2a0(&local_150,L"arParticipantStats",local_c0);
        local_110 = &PTR_FUN_140b569f0;
        local_f8 = 1;
        local_100 = lVar6;
        if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar6);
        }
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        uVar7 = FUN_14005c1b0(lVar6,0,0);
        *(undefined4 *)(puVar12 + 1) = 5;
        *puVar12 = uVar7;
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        uVar4 = FUN_1400578c0(lVar6);
        local_108 = uVar4;
        uVar7 = FUN_14034bdd0();
        puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        *puVar12 = *puVar8;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        FUN_1400f0870(lVar6,puVar12,L"strTeamName",uVar7);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        puVar8 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar4);
        *puVar12 = *puVar8;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        FUN_1400f0870(lVar6);
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
        FUN_1405f0ea0(&local_110,param_3 + 0x10,param_2);
        FUN_1400fb2a0(&local_150,L"arPersonalStats",local_108);
        local_a0 = &PTR_FUN_140b569f0;
        local_88 = 1;
        local_90 = lVar6;
        if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar6);
        }
        puVar12 = *(undefined8 **)(lVar6 + 0x10);
        uVar7 = FUN_14005c1b0(lVar6,0,0);
        *(undefined4 *)(puVar12 + 1) = 5;
        *puVar12 = uVar7;
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
        local_98 = FUN_1400578c0(lVar6);
        uVar11 = 0;
        local_158 = 0;
        lVar9 = lVar6;
        if (*(int *)(param_3 + 0x40) != 0) {
            do {
                local_80 = &PTR_FUN_140b569f0;
                local_68 = 1;
                local_70 = lVar6;
                if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar6);
                }
                puVar12 = *(undefined8 **)(lVar6 + 0x10);
                uVar7 = FUN_14005c1b0(lVar6,0,0);
                *(undefined4 *)(puVar12 + 1) = 5;
                *puVar12 = uVar7;
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                local_78 = FUN_1400578c0(lVar6);
                iVar5 = *(int *)(*(longlong *)(param_3 + 0x48) + 4 + uVar11 * 8);
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),local_78);
                puVar12 = *(undefined8 **)(lVar6 + 0x10);
                *puVar12 = *puVar8;
                *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar8 + 1);
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_60,L"eStatus");
                lVar9 = *(longlong *)(lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                }
                else {
                    lVar10 = -1;
                    do {
                        lVar10 = lVar10 + 1;
                    } while (*(char *)(lVar9 + lVar10) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar6);
                    }
                    puVar12 = *(undefined8 **)(lVar6 + 0x10);
                    uVar7 = FUN_140062650(lVar6,lVar9,lVar10);
                    *(undefined4 *)(puVar12 + 1) = 4;
                    *puVar12 = uVar7;
                }
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                if (local_58 != 0) {
                    FUN_14018b900(local_58,0);
                }
                pdVar2 = *(double **)(lVar6 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar5;
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                uVar7 = FUN_1400580e0(lVar6,0xfffffffd);
                FUN_14005ea50(lVar6,uVar7,*(longlong *)(lVar6 + 0x10) + -0x20,
                              *(longlong *)(lVar6 + 0x10) + -0x10);
                *(longlong *)(lVar6 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                uVar1 = *(uint *)(*(longlong *)(param_3 + 0x48) + uVar11 * 8);
                lVar9 = *(longlong *)(DAT_140c65988 + 0x30);
                lVar3 = lVar9;
                lVar10 = *(longlong *)(lVar9 + 8);
                while (lVar10 != 0) {
                    if (*(uint *)(lVar10 + 0x20) < uVar1) {
                        lVar10 = *(longlong *)(lVar10 + 0x18);
                    }
                    else {
                        lVar3 = lVar10;
                        lVar10 = *(longlong *)(lVar10 + 0x10);
                    }
                }
                if ((lVar3 == lVar9) || (uVar1 < *(uint *)(lVar3 + 0x20))) {
                    local_d0 = lVar9;
                }
                else {
                    local_a8 = lVar3;
                }
                iVar5 = FUN_140432d60(lVar6);
                if (iVar5 != 0) {
                    FUN_1400fb540(&local_80);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                }
                FUN_1400fb1d0(&local_a0);
                FUN_1400579e0(lVar6);
                local_158 = local_158 + 1;
                uVar11 = (ulonglong)local_158;
                lVar9 = local_90;
            } while (local_158 < *(uint *)(param_3 + 0x40));
        }
        FUN_1400fb2a0(&local_150,L"arObjectives",local_98);
        FUN_1400ea3e0(param_1,"PublicEventEnd",&DAT_1409ed244,param_2,*(undefined4 *)(param_3 + 4),
                      local_148);
        if (lVar9 != 0) {
            FUN_1400579e0(lVar9);
        }
        if (local_100 != 0) {
            FUN_1400579e0();
        }
        if (local_b8 != 0) {
            FUN_1400579e0();
        }
        if (local_e0 != 0) {
            FUN_1400579e0();
        }
        if (local_120 != 0) {
            FUN_1400579e0();
        }
        FUN_1400579e0(lVar6);
    }
    return;
}



void FUN_14042d9b0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    lVar1 = *(longlong *)(param_1 + 400);
    lVar7 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
    if (lVar7 != *(longlong *)(param_2 + 8)) {
        do {
            local_48 = &PTR_FUN_140b569f0;
            local_30 = 1;
            local_38 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar5 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar5;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            local_40 = FUN_1400578c0(lVar1);
            uVar8 = 0;
            lVar6 = lVar1;
            if (*(longlong *)(lVar7 + 0x38) - *(longlong *)(lVar7 + 0x30) >> 2 != 0) {
                do {
                    FUN_140491c60(DAT_140c65968,*(undefined4 *)(*(longlong *)(lVar7 + 0x30) + uVar8 * 4));
                    iVar4 = FUN_140432ac0(lVar6);
                    if (iVar4 != 0) {
                        FUN_1400fb470(&local_48);
                        *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + -0x10;
                        lVar6 = local_38;
                    }
                    uVar8 = uVar8 + 1;
                } while (uVar8 < (ulonglong)(*(longlong *)(lVar7 + 0x38) - *(longlong *)(lVar7 + 0x30) >> 2)
                        );
            }
            FUN_1400ea3e0(param_1,"PlayerPathAdd",&DAT_1409ed30c,local_40,*(undefined4 *)(lVar7 + 0x20));
            if (lVar6 != 0) {
                FUN_1400579e0(lVar6);
            }
            lVar6 = *(longlong *)(lVar7 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar7 + 8);
                if (lVar7 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar7 = lVar6;
                        lVar6 = *(longlong *)(lVar7 + 8);
                    } while (lVar7 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar7 + 0x18) != lVar6) {
                    lVar7 = lVar6;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar6 + 0x10); lVar7 = lVar6, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar6 = lVar3;
                }
            }
        } while (lVar7 != *(longlong *)(param_2 + 8));
    }
    return;
}



void FUN_14042db70(longlong param_1,uint *param_2)

{
    undefined8 *puVar1;
    int iVar2;
    undefined8 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong lVar6;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar6 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = lVar6;
    if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar6);
    }
    puVar1 = *(undefined8 **)(lVar6 + 0x10);
    uVar3 = FUN_14005c1b0(lVar6,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(lVar6);
    uVar5 = 0;
    if (param_2[1] != 0) {
        do {
            lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_2 + 2) + uVar5 * 4));
            if ((lVar4 != 0) && (iVar2 = FUN_140649930(lVar6), iVar2 != 0)) {
                FUN_1400fb470(&local_28);
                *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                lVar6 = local_18;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < param_2[1]);
    }
    FUN_1400ea3e0(param_1,"PlayerPathSoldierNewWhackAMoleBurrows",&DAT_1409ed734,
                  (double)((float)(ulonglong)*param_2 * 0.001),local_20);
    if (lVar6 != 0) {
        FUN_1400579e0(lVar6);
    }
    return;
}



void FUN_14042e120(undefined8 param_1,int param_2,int param_3)

{
    FUN_1400ea3e0(param_1,"UnitEnteredCombat",&DAT_1409edc64,param_2,param_3);
    if (param_3 != 0) {
        if ((((*(longlong *)(DAT_140c65898 + 0x6490) != 0) &&
              (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) == param_2)) ||
             ((*(longlong *)(DAT_140c65898 + 0x78) != 0 &&
               (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) == param_2)))) &&
            ((DAT_140c63620 != 0 && (*(longlong *)(DAT_140c63620 + 0x18) != 0)))) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c63620 + 0x58),"EnteredCombat",&DAT_1409d01f7);
        }
    }
    return;
}



void FUN_14042e1b0(undefined8 param_1)

{
    undefined4 uVar1;

    if (*(longlong *)(DAT_140c65898 + 0x6490) == 0) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108);
    }
    FUN_1400ea3e0(param_1,"TargetUnitChanged",&DAT_1409edf14,uVar1);
    return;
}



void FUN_14042e1f0(undefined8 param_1,undefined8 *param_2)

{
    ulonglong uVar1;
    undefined4 *puVar2;
    ulonglong uVar3;
    undefined4 *puVar4;
    ulonglong uVar5;
    undefined auStack184 [32];
    undefined4 local_98;
    undefined4 local_90;
    undefined4 local_88;
    undefined4 local_80;
    undefined4 local_78;
    undefined4 local_70;
    undefined4 local_68;
    undefined4 local_60;
    undefined4 local_58;
    undefined4 auStack76 [5];
    undefined4 local_38;
    undefined4 auStack52 [5];
    undefined4 local_20;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    uVar3 = param_2[1];
    if (5 < uVar3) {
        uVar3 = 5;
    }
    uVar1 = 0;
    if (uVar3 != 0) {
        puVar2 = (undefined4 *)*param_2;
        do {
            uVar1 = uVar1 + 1;
            auStack52[uVar1] = *puVar2;
            auStack76[uVar1] = puVar2[1];
            puVar2 = puVar2 + 2;
        } while (uVar1 < uVar3);
        if (4 < uVar1) goto LAB_14042e284;
    }
    puVar2 = auStack52 + uVar1 + 1;
    uVar5 = 5 - uVar1 & 0x3fffffffffffffff;
    puVar4 = auStack76 + uVar1 + 1;
    for (uVar3 = 5 - uVar1 & 0x3fffffffffffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    LAB_14042e284:
    local_58 = local_38;
    local_60 = local_20;
    local_68 = auStack76[4];
    local_70 = auStack52[4];
    local_78 = auStack76[3];
    local_80 = auStack52[3];
    local_88 = auStack76[2];
    local_90 = auStack52[2];
    local_98 = auStack76[1];
    FUN_1400ea3e0(param_1,"TargetThreatListUpdated","UiUiUiUiUi",auStack52[1]);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack184);
    return;
}



undefined8 FUN_14042e320(undefined8 param_1)

{
    FUN_1400e9d50(*(undefined8 *)(DAT_140c65898 + 0x7340),param_1);
    return 0;
}



undefined8 FUN_14042e350(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ToggleCodex",&DAT_1409d098f);
    return 0;
}



undefined8 FUN_14042e380(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ToggleQuestLog",&DAT_1409d09de);
    return 0;
}



undefined8 FUN_14042e3b0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        uVar2 = FUN_140056d60(param_1,1);
    }
    else {
        uVar2 = 0;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ShowQuestLog",&DAT_1409e90bc,uVar2);
    return 0;
}



undefined8 FUN_14042e410(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HideQuestLog",&DAT_1409d0b5e);
    return 0;
}



undefined8 FUN_14042e440(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ToggleAchievementWindow",&DAT_1409d0bda);
    return 0;
}



undefined8 FUN_14042e470(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CloseVendorWindow",&DAT_1409d0d67);
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x31) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042e4c0(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CloseTradeskillTrainerWindow",
                  &DAT_1409d0dcf);
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x2b) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042e510(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CloseCraftingWindow",&DAT_1409d0dce);
    return 0;
}



undefined8 FUN_14042e540(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HideBank",&DAT_1409d0da7);
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x42) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042e590(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"HideRealmBank","");
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x43) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042e5e0(void)

{
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ToggleMailWindow","");
    return 0;
}



undefined8 FUN_14042e610(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    longlong lVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined4 uVar8;

    uVar1 = FUN_140056d60(param_1,1);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar6 = &DAT_140a12138;
    if (puVar7 < *(undefined8 **)(param_1 + 0x10)) {
        puVar6 = puVar7;
    }
    uVar2 = 0;
    uVar4 = 0;
    uVar8 = uVar4;
    if ((*(int *)(puVar6 + 1) != 0) && ((*(int *)(puVar6 + 1) != 1 || (*(int *)puVar6 != 0)))) {
        uVar8 = 1;
    }
    lVar5 = FUN_1400d6530(param_1,3);
    uVar3 = uVar4;
    if (lVar5 != 0) {
        uVar2 = FUN_140056d60(param_1,4);
        uVar3 = FUN_140056d60(param_1,5);
        puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x50);
        if (((puVar6 < *(undefined8 **)(param_1 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x58))) {
            uVar4 = FUN_140056d60(param_1,6);
        }
        else {
            uVar4 = 1;
        }
    }
    FUN_140437a10(DAT_140c658d8,uVar1,uVar8,lVar5,uVar2,uVar3,uVar4);
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14042e720(longlong param_1,uint *param_2)

{
    short sVar1;
    longlong lVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    longlong lVar7;
    short *psVar8;
    short *psVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    longlong lVar12;
    short *psVar13;
    uint local_res18;
    undefined **local_70;
    undefined4 local_68;
    longlong local_60;
    undefined4 local_58;

    lVar2 = *(longlong *)(param_1 + 400);
    local_70 = &PTR_FUN_140b569f0;
    local_58 = 1;
    local_60 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar11 = *(undefined8 **)(lVar2 + 0x10);
    uVar5 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar5;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    local_68 = FUN_1400578c0(lVar2);
    uVar6 = 0;
    local_res18 = 0;
    lVar12 = lVar2;
    if (*param_2 != 0) {
        do {
            lVar12 = *(longlong *)(param_2 + 2) + uVar6 * 0x30;
            uVar4 = *(undefined4 *)(lVar12 + 0x14);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64c3c == 0) && (iVar3 = FUN_14022d2a0(), -1 < iVar3)) {
                    (**(code **)(*DAT_140c63918 + 0x18))(DAT_140c63918,uVar4);
                }
            }
            else {
                (*DAT_140c63840)(&PTR_u_Race_140a6c938,uVar4,DAT_140c63858);
            }
            uVar4 = *(undefined4 *)(lVar12 + 0x18);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c65254 == 0) && (iVar3 = FUN_1401f2f80(), -1 < iVar3)) {
                    (**(code **)(*DAT_140c63c28 + 0x18))(DAT_140c63c28,uVar4);
                }
            }
            else {
                (*DAT_140c63840)(&PTR_u_Class_140a69950,uVar4,DAT_140c63858);
            }
            uVar4 = *(undefined4 *)(lVar12 + 0x20);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c6546c == 0) && (iVar3 = FUN_1401feec0(), -1 < iVar3)) {
                    (**(code **)(*DAT_140c64d20 + 0x18))(DAT_140c64d20,uVar4);
                }
            }
            else {
                (*DAT_140c63840)(&PTR_u_Faction2_140a6a328,uVar4,DAT_140c63858);
            }
            uVar4 = *(undefined4 *)(lVar12 + 0x28);
            if (DAT_140c63840 == (code *)0x0) {
                if (_DAT_140c64634 == 0) {
                    iVar3 = FUN_14024d920();
                    if (iVar3 < 0) {
                        lVar7 = 0;
                    }
                    else {
                        lVar7 = (**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,uVar4);
                    }
                }
                else {
                    lVar7 = 0;
                }
            }
            else {
                lVar7 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,uVar4,DAT_140c63858);
            }
            iVar3 = *(int *)(lVar12 + 0x24);
            if (iVar3 == 0) {
                uVar5 = 0x1b150;
                LAB_14042e95c:
                lVar12 = FUN_14034bdd0(iVar3,uVar5);
            }
            else {
                if (iVar3 + -1 == 0) {
                    uVar5 = 0x1b151;
                    iVar3 = iVar3 + -1;
                    goto LAB_14042e95c;
                }
                if (iVar3 + -2 == 0) {
                    uVar5 = 0x1b152;
                    iVar3 = iVar3 + -2;
                    goto LAB_14042e95c;
                }
                if (iVar3 + -3 == 0) {
                    uVar5 = 0x1b153;
                    iVar3 = iVar3 + -3;
                    goto LAB_14042e95c;
                }
                lVar12 = 0;
            }
            FUN_14034bdd0();
            FUN_14034bdd0();
            FUN_14034bdd0();
            if (lVar7 == 0) {
                psVar8 = (short *)0x0;
            }
            else {
                psVar8 = (short *)FUN_14034bdd0();
            }
            psVar13 = (short *)0x0;
            if (lVar7 != 0) {
                iVar3 = *(int *)(lVar7 + 8);
                while (iVar3 != 0) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64634 != 0) || (iVar3 = FUN_14024d920(), iVar3 < 0)) break;
                        lVar7 = (**(code **)(*DAT_140c64270 + 0x18))();
                    }
                    else {
                        lVar7 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,iVar3,DAT_140c63858);
                    }
                    if (lVar7 == 0) break;
                    psVar9 = (short *)FUN_14034bdd0();
                    if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
                        psVar13 = psVar9;
                    }
                    iVar3 = *(int *)(lVar7 + 8);
                }
            }
            if ((lVar12 != 0) && (psVar8 != (short *)0x0)) {
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
                uVar5 = *(undefined8 *)(uVar6 * 0x30 + *(longlong *)(param_2 + 2));
                puVar10 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0),uVar4);
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f0870(lVar2,puVar11,L"strName",uVar5);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f06f0(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f06f0(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f06f0(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f06f0(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f06f0(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f06f0(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f0870(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f0870(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f0870(lVar2);
                puVar10 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + -0x10);
                *(undefined8 **)(lVar2 + 0x10) = puVar10;
                puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar10 = *puVar11;
                *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                if (psVar13 == (short *)0x0) {
                    FUN_1400f0870(lVar2);
                    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                    puVar11 = *(undefined8 **)(lVar2 + 0x10);
                    LAB_14042ee46:
                    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0))
                            ;
                }
                else {
                    FUN_1400f0870(lVar2);
                    lVar12 = 0;
                    puVar11 = (undefined8 *)(*(longlong *)(lVar2 + 0x10) + -0x10);
                    *(undefined8 **)(lVar2 + 0x10) = puVar11;
                    sVar1 = *psVar13;
                    if (sVar1 == *psVar8) {
                        do {
                            if (sVar1 == 0) goto LAB_14042ee46;
                            sVar1 = psVar13[lVar12 + 1];
                            lVar7 = lVar12 + 1;
                            lVar12 = lVar12 + 1;
                        } while (sVar1 == psVar8[lVar7]);
                    }
                    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0))
                            ;
                }
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f0870(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                puVar11 = *(undefined8 **)(lVar2 + 0x10);
                puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0xa0));
                *puVar11 = *puVar10;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar10 + 1);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
                FUN_1400f0870(lVar2);
                *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
                FUN_1400fb1d0(&local_70);
                FUN_1400579e0(lVar2);
            }
            local_res18 = local_res18 + 1;
            uVar6 = (ulonglong)local_res18;
            lVar12 = local_60;
        } while (local_res18 < *param_2);
    }
    FUN_1400ea3e0(param_1,"WhoResponse",&DAT_1409ee89c,local_68,param_2[4],
                  *(undefined8 *)(DAT_140c658a0 + 0x108));
    if (lVar12 != 0) {
        FUN_1400579e0(lVar12);
    }
    return;
}



undefined8 FUN_14042ef80(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x31) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042efb0(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x30) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x2e) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f000(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x4f) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f030(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x28) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x29) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f080(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x1d) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f0b0(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x2b) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f0e0(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x2c) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f110(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x42) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f140(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x43) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f170(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x1e) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f1a0(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x2a) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f1d0(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x50) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f200(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x4b) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f230(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x4c) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f260(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x52) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f290(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x45) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f2c0(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x48) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f2f0(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x46) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f320(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x49) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f350(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x44) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f380(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x51) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f3b0(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x55) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f3e0(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x56) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f410(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x57) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



undefined8 FUN_14042f440(void)

{
    if (*(int *)(DAT_140c65898 + 0x6644) == 0x54) {
        FUN_1403a71f0(DAT_140c65898,0,0x65,1);
    }
    return 0;
}



void FUN_14042f470(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    double *pdVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    uint uVar10;
    ulonglong uVar11;
    double dVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    int local_res18;
    int iStackX28;
    undefined **local_88;
    undefined4 local_80;
    longlong local_78;
    undefined4 local_70;
    undefined local_68 [8];
    longlong local_60;

    lVar2 = *(longlong *)(param_1 + 400);
    local_88 = &PTR_FUN_140b569f0;
    local_70 = 1;
    local_78 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    uVar5 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar5;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    local_80 = FUN_1400578c0(lVar2);
    uVar11 = 0;
    lVar6 = lVar2;
    if (param_2[1] != 0) {
        uVar13 = 0;
        uVar14 = 0;
        do {
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar8 = *(undefined8 **)(lVar2 + 0x10);
            uVar5 = FUN_14005c1b0(lVar2,0,0);
            *(undefined4 *)(puVar8 + 1) = 5;
            *puVar8 = uVar5;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            iVar4 = FUN_1400578c0(lVar2);
            uVar10 = iVar4 - 1;
            lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            iVar1 = **(int **)(*param_2 + uVar11 * 8);
            if (uVar10 < *(uint *)(lVar6 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar6 + 0x18));
            }
            else {
                dVar12 = (double)iVar4;
                if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                    puVar8 = *(undefined8 **)(lVar6 + 0x20);
                }
                else {
                    iStackX28 = (int)((ulonglong)dVar12 >> 0x20);
                    local_res18 = SUB84(dVar12,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar6 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                              (longlong)((1 << (*(byte *)(lVar6 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_14042f600;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_14042f600:
            puVar7 = *(undefined8 **)(lVar2 + 0x10);
            *puVar7 = *puVar8;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(local_68,L"idDestination");
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) {
                *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            }
            else {
                lVar9 = -1;
                do {
                    lVar9 = lVar9 + 1;
                } while (*(char *)(lVar9 + lVar6) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar2);
                }
                puVar8 = *(undefined8 **)(lVar2 + 0x10);
                uVar5 = FUN_140062650(lVar2,lVar6,lVar9);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar5;
            }
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            if (local_60 != 0) {
                FUN_14018b900(local_60,0);
            }
            pdVar3 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar1;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
            FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                          *(longlong *)(lVar2 + 0x10) + -0x10);
            *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
            lVar6 = *(longlong *)(*param_2 + uVar11 * 8);
            uVar5 = FUN_14034bdd0(lVar6,*(undefined4 *)(lVar6 + 8));
            lVar6 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            if (uVar10 < *(uint *)(lVar6 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar6 + 0x18));
            }
            else {
                dVar12 = (double)iVar4;
                if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                    puVar8 = *(undefined8 **)(lVar6 + 0x20);
                }
                else {
                    iStackX28 = (int)((ulonglong)dVar12 >> 0x20);
                    local_res18 = SUB84(dVar12,0);
                    puVar8 = (undefined8 *)
                            (*(longlong *)(lVar6 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                              (longlong)((1 << (*(byte *)(lVar6 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_14042f782;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_14042f782:
            puVar7 = *(undefined8 **)(lVar2 + 0x10);
            *puVar7 = *puVar8;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            FUN_1400f0870(lVar2,puVar8,L"strName",uVar5);
            lVar6 = *(longlong *)(lVar2 + 0x10);
            puVar8 = (undefined8 *)(lVar6 + -0x10);
            *(undefined8 **)(lVar2 + 0x10) = puVar8;
            lVar9 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            iVar1 = *(int *)(*(longlong *)(*param_2 + uVar11 * 8) + 4);
            if (uVar10 < *(uint *)(lVar9 + 0x38)) {
                puVar7 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
            }
            else {
                dVar12 = (double)iVar4;
                if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                    puVar7 = *(undefined8 **)(lVar9 + 0x20);
                }
                else {
                    iStackX28 = (int)((ulonglong)dVar12 >> 0x20);
                    local_res18 = SUB84(dVar12,0);
                    puVar7 = (undefined8 *)
                            (*(longlong *)(lVar9 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                              (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar7 + 3) == 3) && (dVar12 == (double)puVar7[2])) goto LAB_14042f851;
                    puVar7 = (undefined8 *)puVar7[4];
                } while (puVar7 != (undefined8 *)0x0);
                puVar7 = &DAT_140a12138;
            }
            LAB_14042f851:
            *puVar8 = *puVar7;
            *(undefined4 *)(lVar6 + -8) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            lVar6 = FUN_14018f0e0(local_68,L"eType");
            lVar6 = *(longlong *)(lVar6 + 8);
            if (lVar6 == 0) {
                *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
            }
            else {
                lVar9 = -1;
                do {
                    lVar9 = lVar9 + 1;
                } while (*(char *)(lVar9 + lVar6) != '\0');
                if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(lVar2);
                }
                puVar8 = *(undefined8 **)(lVar2 + 0x10);
                uVar5 = FUN_140062650(lVar2,lVar6,lVar9);
                *(undefined4 *)(puVar8 + 1) = 4;
                *puVar8 = uVar5;
            }
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            if (local_60 != 0) {
                FUN_14018b900(local_60,0);
            }
            pdVar3 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar3 + 1) = 3;
            *pdVar3 = (double)iVar1;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            uVar5 = FUN_1400580e0(lVar2,0xfffffffd);
            FUN_14005ea50(lVar2,uVar5,*(longlong *)(lVar2 + 0x10) + -0x20,
                          *(longlong *)(lVar2 + 0x10) + -0x10);
            *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
            FUN_1400fb1d0(&local_88);
            FUN_1400579e0(lVar2);
            uVar11 = uVar11 + 1;
            lVar6 = local_78;
        } while (uVar11 < (ulonglong)param_2[1]);
    }
    FUN_1400ea3e0(param_1,"CityDirectionsList",&DAT_1409ee8b4,local_80);
    if (lVar6 != 0) {
        FUN_1400579e0(lVar6);
    }
    return;
}



void FUN_14042f9d0(longlong param_1,uint *param_2,longlong param_3)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    undefined local_58 [16];
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    lVar1 = *(longlong *)(param_1 + 400);
    local_48 = &PTR_FUN_140b569f0;
    local_30 = 1;
    local_38 = lVar1;
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
    uVar5 = (ulonglong)*param_2;
    local_40 = uVar2;
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    puVar6 = *(undefined8 **)(lVar1 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar6,L"idDestination",uVar5 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(lVar1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    uVar3 = FUN_14034bdd0();
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    puVar6 = *(undefined8 **)(lVar1 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f0870(lVar1,puVar6,L"strName",uVar3);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    local_58 = ZEXT1216(*(undefined (*) [12])(param_3 + 0xc));
    FUN_1400fa3c0(local_28,lVar1,local_58);
    FUN_1400fb2a0(&local_48,L"tLoc",local_20);
    FUN_1400ea3e0(param_1,"CityDirectionMarked",&DAT_1409ee974,uVar2);
    if (local_18 != 0) {
        FUN_1400579e0();
    }
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14042fbc0(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    lVar1 = *(longlong *)(param_1 + 400);
    local_48 = &PTR_FUN_140b569f0;
    local_30 = 1;
    local_38 = lVar1;
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar5 = *(undefined8 **)(lVar1 + 0x10);
    uVar3 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar5 + 1) = 5;
    *puVar5 = uVar3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(lVar1);
    local_40 = uVar2;
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    puVar5 = *(undefined8 **)(lVar1 + 0x10);
    *puVar5 = *puVar4;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar5,L"nReason",1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar5 = *(undefined8 **)(lVar1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    *puVar5 = *puVar4;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400fa3c0(local_28,lVar1,param_2);
    FUN_1400fb2a0(&local_48,L"tPosition",local_20);
    FUN_1400ea3e0(param_1,"SetNavPointFailed",&DAT_1409ee91c,uVar2);
    if (local_18 != 0) {
        FUN_1400579e0();
    }
    FUN_1400579e0(lVar1);
    return;
}



void FUN_14042fd40(longlong param_1,longlong *param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    double *pdVar5;
    int iVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    uint uVar9;
    ulonglong uVar10;
    double dVar11;
    undefined4 in_XMM6_Da;
    undefined4 uVar12;
    undefined4 in_XMM6_Db;
    undefined4 uVar13;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    int local_res8;
    int iStackX12;
    undefined auVar14 [16];

    lVar2 = *(longlong *)(param_1 + 400);
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    uVar7 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar7;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    iVar6 = FUN_1400578c0();
    uVar10 = 0;
    if (param_2[1] != 0) {
        auVar14 = CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)));
        uVar12 = 0;
        uVar13 = 0;
        do {
            iVar1 = *(int *)(*param_2 + uVar10 * 4);
            lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
            if (iVar6 - 1U < *(uint *)(lVar3 + 0x38)) {
                puVar8 = (undefined8 *)((longlong)(iVar6 + -1) * 0x10 + *(longlong *)(lVar3 + 0x18));
            }
            else {
                dVar11 = (double)iVar6;
                if (dVar11 == (double)CONCAT44(uVar13,uVar12)) {
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
                    if ((*(int *)(puVar8 + 3) == 3) && (dVar11 == (double)puVar8[2])) goto LAB_14042fe4e;
                    puVar8 = (undefined8 *)puVar8[4];
                } while (puVar8 != (undefined8 *)0x0);
                puVar8 = &DAT_140a12138;
            }
            LAB_14042fe4e:
            puVar4 = *(undefined8 **)(lVar2 + 0x10);
            uVar9 = (int)uVar10 + 1;
            *puVar4 = *puVar8;
            *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar8 + 1);
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            pdVar5 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)uVar9;
            *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
            pdVar5 = *(double **)(lVar2 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)iVar1;
            lVar3 = *(longlong *)(lVar2 + 0x10);
            *(longlong *)(lVar2 + 0x10) = lVar3 + 0x10;
            FUN_14005ea50(lVar2,lVar3 + -0x20,lVar3 + -0x10,lVar3,auVar14);
            *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
            uVar10 = (ulonglong)uVar9;
        } while (uVar10 < (ulonglong)param_2[1]);
    }
    FUN_1400ea3e0(param_1,"MatchingLeaveQueue",&DAT_1409eea54,iVar6);
    FUN_1400579e0(lVar2);
    return;
}



void FUN_14042ff50(longlong param_1,longlong param_2)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    double *pdVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    int *piVar9;
    longlong lVar10;
    uint uVar11;
    double dVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    int local_res20;
    int iStackX36;
    longlong local_98;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined local_70 [8];
    longlong local_68;

    lVar2 = *(longlong *)(param_1 + 400);
    local_90 = &PTR_FUN_140b569f0;
    local_78 = 1;
    local_80 = lVar2;
    if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar2);
    }
    puVar8 = *(undefined8 **)(lVar2 + 0x10);
    uVar6 = FUN_14005c1b0(lVar2,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar6;
    *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
    local_88 = FUN_1400578c0(lVar2);
    uVar13 = 0;
    uVar14 = 0;
    piVar9 = (int *)(param_2 + 8);
    local_98 = 2;
    do {
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar2);
        }
        puVar8 = *(undefined8 **)(lVar2 + 0x10);
        uVar6 = FUN_14005c1b0(lVar2,0,0);
        *(undefined4 *)(puVar8 + 1) = 5;
        *puVar8 = uVar6;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        iVar5 = FUN_1400578c0(lVar2);
        iVar1 = piVar9[-2];
        uVar11 = iVar5 - 1;
        lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
        if (uVar11 < *(uint *)(lVar7 + 0x38)) {
            puVar8 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
        }
        else {
            dVar12 = (double)iVar5;
            if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                puVar8 = *(undefined8 **)(lVar7 + 0x20);
            }
            else {
                iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
                local_res20 = SUB84(dVar12,0);
                puVar8 = (undefined8 *)
                        (*(longlong *)(lVar7 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                          (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_1404300bd;
                puVar8 = (undefined8 *)puVar8[4];
            } while (puVar8 != (undefined8 *)0x0);
            puVar8 = &DAT_140a12138;
        }
        LAB_1404300bd:
        puVar3 = *(undefined8 **)(lVar2 + 0x10);
        *puVar3 = *puVar8;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(local_70,L"nRating");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(lVar7 + lVar10) != '\0');
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar8 = *(undefined8 **)(lVar2 + 0x10);
            uVar6 = FUN_140062650(lVar2,lVar7,lVar10);
            *(undefined4 *)(puVar8 + 1) = 4;
            *puVar8 = uVar6;
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        pdVar4 = *(double **)(lVar2 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)iVar1;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar6 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar6,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        lVar7 = *(longlong *)(lVar2 + 0x10);
        *(undefined **)(lVar2 + 0x10) = &DAT_ffffffffffffffd0 + lVar7;
        lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
        iVar1 = piVar9[-1];
        if (uVar11 < *(uint *)(lVar10 + 0x38)) {
            puVar8 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
        }
        else {
            dVar12 = (double)iVar5;
            if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                puVar8 = *(undefined8 **)(lVar10 + 0x20);
            }
            else {
                iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
                local_res20 = SUB84(dVar12,0);
                puVar8 = (undefined8 *)
                        (*(longlong *)(lVar10 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                          (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_14043022d;
                puVar8 = (undefined8 *)puVar8[4];
            } while (puVar8 != (undefined8 *)0x0);
            puVar8 = &DAT_140a12138;
        }
        LAB_14043022d:
        *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar7) = *puVar8;
        *(undefined4 *)(lVar7 + -0x28) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(local_70,L"nRepairCost");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(lVar7 + lVar10) != '\0');
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar8 = *(undefined8 **)(lVar2 + 0x10);
            uVar6 = FUN_140062650(lVar2,lVar7,lVar10);
            *(undefined4 *)(puVar8 + 1) = 4;
            *puVar8 = uVar6;
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        pdVar4 = *(double **)(lVar2 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)iVar1;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar6 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar6,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        lVar7 = *(longlong *)(lVar2 + 0x10);
        *(undefined **)(lVar2 + 0x10) = &DAT_ffffffffffffffd0 + lVar7;
        lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
        iVar1 = *piVar9;
        if (uVar11 < *(uint *)(lVar10 + 0x38)) {
            puVar8 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
        }
        else {
            dVar12 = (double)iVar5;
            if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                puVar8 = *(undefined8 **)(lVar10 + 0x20);
            }
            else {
                iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
                local_res20 = SUB84(dVar12,0);
                puVar8 = (undefined8 *)
                        (*(longlong *)(lVar10 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                          (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_140430390;
                puVar8 = (undefined8 *)puVar8[4];
            } while (puVar8 != (undefined8 *)0x0);
            puVar8 = &DAT_140a12138;
        }
        LAB_140430390:
        *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar7) = *puVar8;
        *(undefined4 *)(lVar7 + -0x28) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(local_70,L"nDestroyedPlugs");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(lVar7 + lVar10) != '\0');
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar8 = *(undefined8 **)(lVar2 + 0x10);
            uVar6 = FUN_140062650(lVar2,lVar7,lVar10);
            *(undefined4 *)(puVar8 + 1) = 4;
            *puVar8 = uVar6;
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        pdVar4 = *(double **)(lVar2 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)iVar1;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar6 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar6,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        lVar7 = *(longlong *)(lVar2 + 0x10);
        *(undefined **)(lVar2 + 0x10) = &DAT_ffffffffffffffd0 + lVar7;
        lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0xa0);
        iVar1 = piVar9[1];
        if (uVar11 < *(uint *)(lVar10 + 0x38)) {
            puVar8 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
        }
        else {
            dVar12 = (double)iVar5;
            if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
                puVar8 = *(undefined8 **)(lVar10 + 0x20);
            }
            else {
                iStackX36 = (int)((ulonglong)dVar12 >> 0x20);
                local_res20 = SUB84(dVar12,0);
                puVar8 = (undefined8 *)
                        (*(longlong *)(lVar10 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                          (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_1404304fd;
                puVar8 = (undefined8 *)puVar8[4];
            } while (puVar8 != (undefined8 *)0x0);
            puVar8 = &DAT_140a12138;
        }
        LAB_1404304fd:
        *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar7) = *puVar8;
        *(undefined4 *)(lVar7 + -0x28) = *(undefined4 *)(puVar8 + 1);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        lVar7 = FUN_14018f0e0(local_70,L"nWarCoinsEarned");
        lVar7 = *(longlong *)(lVar7 + 8);
        if (lVar7 == 0) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x10) + 8) = 0;
        }
        else {
            lVar10 = -1;
            do {
                lVar10 = lVar10 + 1;
            } while (*(char *)(lVar7 + lVar10) != '\0');
            if (*(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar2 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar2);
            }
            puVar8 = *(undefined8 **)(lVar2 + 0x10);
            uVar6 = FUN_140062650(lVar2,lVar7,lVar10);
            *(undefined4 *)(puVar8 + 1) = 4;
            *puVar8 = uVar6;
        }
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        if (local_68 != 0) {
            FUN_14018b900(local_68,0);
        }
        pdVar4 = *(double **)(lVar2 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)iVar1;
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
        uVar6 = FUN_1400580e0(lVar2,0xfffffffd);
        FUN_14005ea50(lVar2,uVar6,*(longlong *)(lVar2 + 0x10) + -0x20,
                      *(longlong *)(lVar2 + 0x10) + -0x10);
        *(longlong *)(lVar2 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar2 + 0x10));
        FUN_1400fb1d0(&local_90);
        FUN_1400579e0(lVar2);
        piVar9 = piVar9 + 4;
        local_98 = local_98 + -1;
        if (local_98 == 0) {
            FUN_1400ea3e0(param_1,"WarPartyMatchResults",&DAT_1409eed14,local_88);
            if (local_80 != 0) {
                FUN_1400579e0();
            }
            return;
        }
    } while( true );
}



void FUN_140430650(longlong param_1,longlong param_2,ulonglong param_3,int param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    undefined auStack232 [32];
    int local_c8;
    undefined8 local_b8;
    longlong local_b0;
    undefined local_a8 [8];
    longlong local_a0;
    undefined local_88 [64];
    ulonglong local_48;

    if (param_3 != 0) {
        local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
        lVar1 = *(longlong *)(param_1 + 400);
        local_b8 = param_5;
        local_b0 = param_2;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar1);
        }
        puVar2 = *(undefined8 **)(lVar1 + 0x10);
        uVar5 = FUN_14005c1b0(lVar1,0,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        uVar8 = 0;
        *puVar2 = uVar5;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        if (param_3 != 0) {
            do {
                FUN_14001b370(local_88,0x1e,L"%I64u",*(undefined8 *)(param_2 + uVar8 * 8));
                pdVar3 = *(double **)(lVar1 + 0x10);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)((int)uVar8 + 1);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                lVar6 = FUN_14018f0e0(local_a8,local_88);
                lVar6 = *(longlong *)(lVar6 + 8);
                if (lVar6 == 0) {
                    *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
                }
                else {
                    lVar7 = -1;
                    do {
                        lVar7 = lVar7 + 1;
                    } while (*(char *)(lVar7 + lVar6) != '\0');
                    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar1);
                    }
                    puVar2 = *(undefined8 **)(lVar1 + 0x10);
                    uVar5 = FUN_140062650(lVar1,lVar6,lVar7);
                    *(undefined4 *)(puVar2 + 1) = 4;
                    *puVar2 = uVar5;
                    param_2 = local_b0;
                }
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                if (local_a0 != 0) {
                    FUN_14018b900(local_a0,0);
                }
                lVar6 = *(longlong *)(lVar1 + 0x10);
                FUN_14005ea50(lVar1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
                *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x20;
                uVar8 = uVar8 + 1;
                param_5 = local_b8;
            } while (uVar8 < param_3);
        }
        uVar4 = FUN_1400578c0(lVar1);
        local_c8 = param_4;
        FUN_1400ea3e0(param_1,"AvailableMail",&DAT_1409eec64,uVar4);
        FUN_1400579e0(lVar1);
        if ((param_4 != 0) && (lVar6 = FUN_140629af0(DAT_140c65898 + 0x6bc8,param_5), lVar6 != 0)) {
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar5 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar5;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            FUN_1406b33f0(lVar1,lVar6);
            uVar4 = FUN_1400578c0(lVar1);
            FUN_1400ea3e0(param_1,"AlertMailInfo",&DAT_1409eec44,uVar4);
            FUN_1400579e0(lVar1);
        }
        FUN_1407db4f0(local_48 ^ (ulonglong)auStack232);
    }
    return;
}



void FUN_1404308e0(longlong param_1,undefined8 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    undefined auStack168 [32];
    undefined local_88 [8];
    longlong local_80;
    undefined local_68 [64];
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
    lVar1 = *(longlong *)(param_1 + 400);
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_14001b370(local_68,0x1e,L"%I64u",param_2);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar5 = FUN_14018f0e0(local_88,local_68);
    if (*(longlong *)(lVar5 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar6) != '\0');
        FUN_140058710(lVar1);
    }
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    lVar5 = *(longlong *)(lVar1 + 0x10);
    FUN_14005ea50(lVar1,&DAT_ffffffffffffffd0 + lVar5,lVar5 + -0x20,lVar5 + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x20;
    uVar3 = FUN_1400578c0(lVar1);
    FUN_1400ea3e0(param_1,"UnavailableMail",&DAT_1409eecbc,uVar3);
    FUN_1400579e0(lVar1);
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack168);
    return;
}



void FUN_140430a40(undefined8 param_1,undefined8 param_2)

{
    undefined auStack120 [32];
    undefined local_58 [64];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack120;
    FUN_14001b370(local_58,0x1e,L"%I64u",param_2);
    FUN_1400ea3e0(param_1,"RefreshMail",&DAT_1409eec7c,local_58);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack120);
    return;
}



void FUN_140430aa0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 400);
        local_28 = &PTR_FUN_140b569f0;
        local_10 = 1;
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
        iVar4 = FUN_1406b5ed0(lVar1,*(undefined8 *)(param_2 + 8));
        if (iVar4 != 0) {
            FUN_1400fb540(&local_28,L"mailAlert");
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
        }
        FUN_1400ea3e0(param_1,"ItemDeprecationAlert",&DAT_1409eef9c,uVar3);
        FUN_1400579e0(lVar1);
    }
    return;
}



void FUN_140430b90(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
    undefined8 uVar1;

    uVar1 = FUN_1405a8a40(param_1,param_4);
    FUN_1400ea3e0(param_1,"QuestFloater",&DAT_1409ef414,param_2,param_3,uVar1);
    return;
}



void FUN_140430bf0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   int *param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined **local_38;
    undefined4 local_30;
    longlong local_28;
    undefined4 local_20;

    lVar4 = *(longlong *)(param_1 + 400);
    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_28 = lVar4;
    if (*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar4);
    }
    puVar1 = *(undefined8 **)(lVar4 + 0x10);
    uVar2 = FUN_14005c1b0(lVar4,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    local_30 = FUN_1400578c0(lVar4);
    if (param_6 != 0) {
        uVar3 = (ulonglong)param_6;
        do {
            if (*param_5 != 0) {
                FUN_1400fa9e0(&local_38);
            }
            param_5 = param_5 + 1;
            uVar3 = uVar3 - 1;
            lVar4 = local_28;
        } while (uVar3 != 0);
    }
    FUN_1400ea3e0(param_1,"CraftingSchematicComplete","ibiTii",param_2,param_3,param_4,local_30,
                  param_7,param_8);
    if (lVar4 != 0) {
        FUN_1400579e0(lVar4);
    }
    return;
}



void FUN_140430d20(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,longlong param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10)

{
    if (param_7 != 0) {
        FUN_1400ea3e0(param_1,"ShowTutorial","ibSibWiii",param_2,param_3,param_4,param_5,param_6,param_7
                ,param_8,param_9,param_10);
        return;
    }
    FUN_1400ea3e0(param_1,"ShowTutorial","ibSib",param_2);
    return;
}



void FUN_140430e00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong **pplVar7;
    undefined **local_508;
    undefined4 local_500;
    longlong local_4f8;
    undefined4 local_4f0;
    undefined local_4e8 [1216];

    lVar1 = *(longlong *)(param_1 + 400);
    local_508 = &PTR_FUN_140b569f0;
    local_4f0 = 1;
    local_4f8 = lVar1;
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
    local_500 = uVar3;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    pplVar7 = (longlong **)FUN_14040fc60(local_4e8,param_3);
    iVar4 = FUN_140415bb0(lVar1,pplVar7);
    if (iVar4 != 0) {
        FUN_1400fb540(&local_508,L"itemDrop");
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    }
    if (*pplVar7 != (longlong *)0x0) {
        (**(code **)(**pplVar7 + 8))();
        *pplVar7 = (longlong *)0x0;
    }
    if (pplVar7[0x60] != (longlong *)0x0) {
        FUN_14018b900(pplVar7[0x60],0);
    }
    FUN_1400ea3e0(param_1,"LootBindcheck",&DAT_1409ef6ec,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140430f80(longlong param_1,undefined4 param_2,float *param_3)

{
    longlong lVar1;
    double *pdVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 *puVar9;
    float fVar10;
    undefined local_48 [8];
    longlong local_40;

    lVar1 = *(longlong *)(param_1 + 400);
    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar1);
    }
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    uVar4 = FUN_14005c1b0(lVar1,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar4;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(lVar1);
    fVar10 = *param_3;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_48,&DAT_1409ef4b4);
    lVar7 = -1;
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
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    pdVar2 = *(double **)(lVar1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar10;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar4,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    fVar10 = param_3[1];
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_48,&DAT_1409ef474);
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
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    pdVar2 = *(double **)(lVar1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar10;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar4,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    fVar10 = param_3[2];
    puVar9 = *(undefined8 **)(lVar1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar3);
    *puVar9 = *puVar5;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_48,&DAT_1409ef67c);
    lVar6 = *(longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar7 = lVar7 + 1;
        } while (*(char *)(lVar6 + lVar7) != '\0');
        FUN_140058710(lVar1,lVar6,lVar7);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    pdVar2 = *(double **)(lVar1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar10;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(lVar1,0xfffffffd);
    FUN_14005ea50(lVar1,uVar4,*(longlong *)(lVar1 + 0x10) + -0x20,*(longlong *)(lVar1 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
    FUN_1400ea3e0(param_1,"MapTrackedUnitUpdate",&DAT_1409ef644,param_2,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_1404312a0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;

    lVar1 = *(longlong *)(param_1 + 400);
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
    uVar5 = (ulonglong)*(uint *)(param_2 + 8);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    puVar6 = *(undefined8 **)(lVar1 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar6,L"nEntitlementId",uVar5 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(lVar1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400ea3e0(param_1,"AccountEntitlementUpdate",&DAT_1409ef924,uVar2,param_3,param_4);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_1404313e0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;

    lVar1 = *(longlong *)(param_1 + 400);
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
    uVar5 = (ulonglong)*(uint *)(param_2 + 8);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    puVar6 = *(undefined8 **)(lVar1 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar6,L"nEntitlementId",uVar5 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(lVar1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400ea3e0(param_1,"CharacterEntitlementUpdate",&DAT_1409ef81c,uVar2,param_3,param_4);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140431520(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    longlong lVar1;

    lVar1 = FUN_1400b5df0(DAT_140c658f0,param_2,0);
    if (lVar1 != 0) {
        FUN_1400ea3e0(param_1,"CostumeUnlockResult",&DAT_1409ef8bc,lVar1,param_3);
    }
    return;
}



void FUN_140431570(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
    longlong lVar1;

    lVar1 = FUN_1400b5df0(DAT_140c658f0,param_2,0);
    if (lVar1 != 0) {
        FUN_1400ea3e0(param_1,"CostumeForgetResult",&DAT_1409ef8a4,lVar1,param_3);
    }
    return;
}



void FUN_1404315c0(longlong param_1,int *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    uint *puVar3;
    undefined4 uVar4;
    int iVar5;
    int *piVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 *puVar10;
    uint uVar11;
    ulonglong uVar12;
    longlong lVar13;
    undefined **local_98;
    longlong local_90;
    undefined **local_88;
    undefined4 local_80;
    longlong local_78;
    undefined4 local_70;
    undefined **local_68;
    undefined4 local_60;
    longlong local_58;
    undefined4 local_50;
    undefined local_48 [8];
    longlong local_40;

    lVar1 = *(longlong *)(param_1 + 400);
    if ((((*param_2 != 0) && (piVar6 = (int *)FUN_140200660(), piVar6 != (int *)0x0)) &&
         (piVar6[1] != 0)) && ((DAT_140c658f8 != 0 && (lVar7 = FUN_140448420(), lVar7 != 0)))) {
        local_88 = &PTR_FUN_140b569f0;
        local_70 = 1;
        local_78 = lVar1;
        if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
            FUN_14005e2c0(lVar1);
        }
        puVar2 = *(undefined8 **)(lVar1 + 0x10);
        uVar8 = FUN_14005c1b0(lVar1,0);
        *(undefined4 *)(puVar2 + 1) = 5;
        *puVar2 = uVar8;
        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
        local_80 = FUN_1400578c0();
        uVar12 = 0;
        lVar7 = lVar1;
        if (param_2[1] != 0) {
            do {
                lVar7 = *(longlong *)(param_2 + 2);
                lVar9 = FUN_140200aa0();
                if ((lVar9 != 0) && (*(int *)(lVar9 + 4) == *piVar6)) {
                    local_68 = &PTR_FUN_140b569f0;
                    local_50 = 1;
                    local_58 = lVar1;
                    if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar1);
                    }
                    puVar2 = *(undefined8 **)(lVar1 + 0x10);
                    uVar8 = FUN_14005c1b0(lVar1,0);
                    *(undefined4 *)(puVar2 + 1) = 5;
                    *puVar2 = uVar8;
                    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    uVar4 = FUN_1400578c0(lVar1);
                    iVar5 = *(int *)(lVar7 + uVar12 * 8 + 4);
                    local_60 = uVar4;
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar4);
                    puVar2 = *(undefined8 **)(lVar1 + 0x10);
                    *puVar2 = *puVar10;
                    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    lVar7 = FUN_14018f0e0(local_48,L"bEnabled");
                    if (*(longlong *)(lVar7 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar1 + 0x10) + 8) = 0;
                        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    }
                    else {
                        lVar13 = -1;
                        do {
                            lVar13 = lVar13 + 1;
                        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar13) != '\0');
                        FUN_140058710(lVar1);
                    }
                    if (local_40 != 0) {
                        FUN_14018b900(local_40,0);
                    }
                    puVar3 = *(uint **)(lVar1 + 0x10);
                    puVar3[2] = 1;
                    *puVar3 = (uint)(iVar5 != 0);
                    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
                    uVar8 = FUN_1400580e0(lVar1,0xfffffffd);
                    FUN_14005ea50(lVar1,uVar8,*(longlong *)(lVar1 + 0x10) + -0x20,
                                  *(longlong *)(lVar1 + 0x10) + -0x10);
                    *(longlong *)(lVar1 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar1 + 0x10));
                    local_98 = &PTR_FUN_140b6fe30;
                    local_90 = lVar9;
                    iVar5 = FUN_1404343a0(lVar1,&local_98);
                    if (iVar5 != 0) {
                        FUN_1400fb540(&local_68,L"oNode");
                        *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
                    }
                    local_98 = &PTR_FUN_140b567a8;
                    FUN_1400fb1d0(&local_88,uVar4);
                    FUN_1400579e0();
                }
                uVar11 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
                lVar7 = local_78;
            } while (uVar11 < (uint)param_2[1]);
        }
        FUN_1400ea3e0(param_1,"GenericMapShow",&DAT_1409efac4,piVar6[1],local_80);
        if (lVar7 != 0) {
            FUN_1400579e0(lVar7);
        }
    }
    return;
}



void FUN_1404318f0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
    undefined4 uVar1;

    if (param_2 == 0) {
        uVar1 = 5;
    }
    else {
        uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 4);
    }
    FUN_1400ea3e0(param_1,"RewardTrackActive",&DAT_1409ef984,uVar1,param_2,param_3);
    return;
}



void FUN_140431930(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_1 + 400);
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
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
    if (*(longlong *)(DAT_140c635f0 + 0x15d0) != 0) {
        FUN_140003c90(*(longlong *)(DAT_140c635f0 + 0x15d0),&local_28);
    }
    FUN_1400ea3e0(param_1,"DailyLoginUpdate",&DAT_1409ef9bc,uVar3);
    FUN_1400579e0(lVar1);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Restarted to delay deadcode elimination for space: stack

void FUN_140431a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
    short *psVar1;
    short *psVar2;
    short sVar3;
    undefined8 uVar4;
    int iVar5;
    undefined4 uVar6;
    longlong lVar7;
    undefined2 *puVar8;
    undefined2 *puVar9;
    undefined2 *puVar10;
    ulonglong uVar11;
    undefined2 *puVar12;
    undefined2 **ppuVar13;
    undefined2 *puVar14;
    undefined2 *puVar15;
    longlong lVar16;
    undefined2 *local_68;
    undefined2 *local_60;
    undefined2 *local_58;
    undefined8 uStack80;
    undefined8 local_48;
    undefined8 uStack64;
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;

    iVar5 = FUN_14018e2c0(param_3,L"Link");
    if (iVar5 != 0) {
        return;
    }
    lVar7 = FUN_1407df6e0(param_4,L"Archive:");
    if (lVar7 != param_4) {
        lVar7 = FUN_1407df6e0(param_4,L"Location:");
        if (lVar7 != param_4) {
            lVar7 = FUN_1407df6e0(param_4,L"Schematic:");
            if (lVar7 != param_4) {
                return;
            }
            puVar12 = (undefined2 *)0x0;
            puVar8 = puVar12;
            do {
                puVar8 = (undefined2 *)((longlong)puVar8 + 1);
            } while (L"Schematic:"[(longlong)puVar8] != L'\0');
            psVar1 = (short *)(param_4 + (longlong)puVar8 * 2);
            puVar8 = puVar12;
            do {
                psVar2 = &DAT_140b01782 + (longlong)puVar8;
                puVar8 = (undefined2 *)((longlong)puVar8 + 1);
            } while (*psVar2 != 0);
            lVar7 = (longlong)puVar8 * 2 >> 1;
            puVar8 = puVar12;
            if (lVar7 + 1U < 0x7fffffffffffffff) {
                puVar8 = (undefined2 *)FUN_14018b280((lVar7 + 1U) * 2,0);
            }
            FUN_1407db590(puVar8,&DAT_140b01780,lVar7 * 2);
            local_58 = puVar8 + lVar7;
            if (local_58 != (undefined2 *)0x0) {
                *local_58 = 0;
            }
            sVar3 = *psVar1;
            puVar9 = puVar12;
            while (sVar3 != 0) {
                puVar9 = (undefined2 *)((longlong)puVar9 + 1);
                sVar3 = psVar1[(longlong)puVar9];
            }
            lVar7 = (longlong)puVar9 * 2 >> 1;
            puVar9 = puVar12;
            if (lVar7 + 1U < 0x7fffffffffffffff) {
                puVar9 = (undefined2 *)FUN_14018b280((lVar7 + 1U) * 2,0);
            }
            FUN_1407db590(puVar9,psVar1,lVar7 * 2);
            puVar14 = puVar9 + lVar7;
            if (puVar14 != (undefined2 *)0x0) {
                *puVar14 = 0;
            }
            local_60 = (undefined2 *)0xffffffffffffffff;
            lVar7 = (longlong)puVar14 - (longlong)puVar9 >> 1;
            if (lVar7 == 0) {
                LAB_1404322d6:
                puVar12 = (undefined2 *)FUN_14018b280(0x10);
                if (puVar12 != (undefined2 *)0x0) {
                    *puVar12 = 0;
                }
            }
            else {
                local_68 = (undefined2 *)(lVar7 + -1);
                uStack64 = puVar8 + ((longlong)local_58 - (longlong)puVar8 >> 1);
                local_48._0_4_ = SUB84(puVar8,0);
                local_48._4_4_ = (undefined4)((ulonglong)puVar8 >> 0x20);
                uStack64._4_4_ = (undefined4)((ulonglong)uStack64 >> 0x20);
                local_38 = (undefined4)local_48;
                uStack52 = local_48._4_4_;
                uStack48 = (undefined4)uStack64;
                uStack44 = uStack64._4_4_;
                local_60 = puVar9 + lVar7;
                local_58 = puVar9;
                local_48 = puVar8;
                FUN_1400f94d0(&local_68,&local_60,&local_58,&local_38);
                if ((local_68 == puVar9) ||
                    (lVar16 = (longlong)local_68 + (-2 - (longlong)puVar9) >> 1, lVar16 == -1))
                    goto LAB_1404322d6;
                uStack80 = uStack64;
                uStack80._0_4_ = SUB84(uStack64,0);
                uStack80._4_4_ = (undefined4)((ulonglong)uStack64 >> 0x20);
                local_38 = (undefined4)local_48;
                uStack52 = local_48._4_4_;
                uStack48 = (undefined4)uStack80;
                uStack44 = uStack80._4_4_;
                local_58 = puVar8;
                puVar10 = (undefined2 *)FUN_1400f9810(puVar9,puVar14,&local_38);
                if (puVar10 == puVar14) {
                    puVar14 = (undefined2 *)0xffffffffffffffff;
                }
                else {
                    puVar14 = (undefined2 *)((longlong)puVar10 - (longlong)puVar9 >> 1);
                }
                if (puVar14 == (undefined2 *)0xffffffffffffffff) {
                    puVar14 = puVar12;
                }
                local_60 = (undefined2 *)((lVar16 - (longlong)puVar14) + 1);
                local_58 = (undefined2 *)(lVar7 - (longlong)puVar14);
                ppuVar13 = &local_58;
                if (local_60 <= (undefined2 *)(lVar7 - (longlong)puVar14)) {
                    ppuVar13 = &local_60;
                }
                local_58 = (undefined2 *)((longlong)puVar14 * 2);
                puVar10 = puVar9 + (longlong)*ppuVar13 + (longlong)puVar14;
                uVar11 = ((longlong)puVar10 - (longlong)(puVar9 + (longlong)puVar14) >> 1) + 1;
                if (uVar11 < 0x7fffffffffffffff) {
                    puVar12 = (undefined2 *)FUN_14018b280(uVar11 * 2,0);
                }
                puVar15 = puVar12;
                if (puVar9 + (longlong)puVar14 != puVar10) {
                    lVar7 = (longlong)local_58 + ((longlong)puVar9 - (longlong)puVar12);
                    do {
                        if (puVar15 != (undefined2 *)0x0) {
                            *puVar15 = *(undefined2 *)(lVar7 + (longlong)puVar15);
                        }
                        puVar15 = puVar15 + 1;
                    } while ((undefined2 *)(lVar7 + (longlong)puVar15) != puVar10);
                }
                if (puVar15 != (undefined2 *)0x0) {
                    *puVar15 = 0;
                }
            }
            if (puVar9 != (undefined2 *)0x0) {
                FUN_14018b900(puVar9,0);
            }
            if (puVar8 != (undefined2 *)0x0) {
                FUN_14018b900(puVar8,0);
            }
            uVar6 = FUN_1407df510(puVar12);
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"WorkOrderLocate",&DAT_1409e901c,uVar6);
            goto joined_r0x000140432338;
        }
        puVar12 = (undefined2 *)0x0;
        puVar8 = puVar12;
        do {
            puVar8 = (undefined2 *)((longlong)puVar8 + 1);
        } while (L"Location:"[(longlong)puVar8] != L'\0');
        psVar1 = (short *)(param_4 + (longlong)puVar8 * 2);
        puVar8 = puVar12;
        do {
            psVar2 = &DAT_140b0178a + (longlong)puVar8;
            puVar8 = (undefined2 *)((longlong)puVar8 + 1);
        } while (*psVar2 != 0);
        lVar7 = (longlong)puVar8 * 2 >> 1;
        puVar8 = puVar12;
        if (lVar7 + 1U < 0x7fffffffffffffff) {
            puVar8 = (undefined2 *)FUN_14018b280((lVar7 + 1U) * 2,0);
        }
        FUN_1407db590(puVar8,&DAT_140b01788,lVar7 * 2);
        local_58 = puVar8 + lVar7;
        if (local_58 != (undefined2 *)0x0) {
            *local_58 = 0;
        }
        sVar3 = *psVar1;
        puVar9 = puVar12;
        while (sVar3 != 0) {
            puVar9 = (undefined2 *)((longlong)puVar9 + 1);
            sVar3 = psVar1[(longlong)puVar9];
        }
        lVar7 = (longlong)puVar9 * 2 >> 1;
        puVar9 = puVar12;
        if (lVar7 + 1U < 0x7fffffffffffffff) {
            puVar9 = (undefined2 *)FUN_14018b280((lVar7 + 1U) * 2,0);
        }
        FUN_1407db590(puVar9,psVar1,lVar7 * 2);
        puVar14 = puVar9 + lVar7;
        if (puVar14 != (undefined2 *)0x0) {
            *puVar14 = 0;
        }
        local_60 = (undefined2 *)0xffffffffffffffff;
        lVar7 = (longlong)puVar14 - (longlong)puVar9 >> 1;
        if (lVar7 == 0) {
            LAB_140432016:
            puVar12 = (undefined2 *)FUN_14018b280(0x10);
            if (puVar12 != (undefined2 *)0x0) {
                *puVar12 = 0;
            }
        }
        else {
            local_68 = (undefined2 *)(lVar7 + -1);
            uStack64 = puVar8 + ((longlong)local_58 - (longlong)puVar8 >> 1);
            local_48._0_4_ = SUB84(puVar8,0);
            local_48._4_4_ = (undefined4)((ulonglong)puVar8 >> 0x20);
            uStack64._4_4_ = (undefined4)((ulonglong)uStack64 >> 0x20);
            local_38 = (undefined4)local_48;
            uStack52 = local_48._4_4_;
            uStack48 = (undefined4)uStack64;
            uStack44 = uStack64._4_4_;
            local_60 = puVar9 + lVar7;
            local_58 = puVar9;
            local_48 = puVar8;
            FUN_1400f94d0(&local_68,&local_60,&local_58,&local_38);
            if ((local_68 == puVar9) ||
                (lVar16 = (longlong)local_68 + (-2 - (longlong)puVar9) >> 1, lVar16 == -1))
                goto LAB_140432016;
            uStack80 = uStack64;
            uStack80._0_4_ = SUB84(uStack64,0);
            uStack80._4_4_ = (undefined4)((ulonglong)uStack64 >> 0x20);
            local_38 = (undefined4)local_48;
            uStack52 = local_48._4_4_;
            uStack48 = (undefined4)uStack80;
            uStack44 = uStack80._4_4_;
            local_58 = puVar8;
            puVar10 = (undefined2 *)FUN_1400f9810(puVar9,puVar14,&local_38);
            if (puVar10 == puVar14) {
                puVar14 = (undefined2 *)0xffffffffffffffff;
            }
            else {
                puVar14 = (undefined2 *)((longlong)puVar10 - (longlong)puVar9 >> 1);
            }
            if (puVar14 == (undefined2 *)0xffffffffffffffff) {
                puVar14 = puVar12;
            }
            local_60 = (undefined2 *)((lVar16 - (longlong)puVar14) + 1);
            local_58 = (undefined2 *)(lVar7 - (longlong)puVar14);
            ppuVar13 = &local_58;
            if (local_60 <= (undefined2 *)(lVar7 - (longlong)puVar14)) {
                ppuVar13 = &local_60;
            }
            local_58 = (undefined2 *)((longlong)puVar14 * 2);
            puVar10 = puVar9 + (longlong)*ppuVar13 + (longlong)puVar14;
            uVar11 = ((longlong)puVar10 - (longlong)(puVar9 + (longlong)puVar14) >> 1) + 1;
            if (uVar11 < 0x7fffffffffffffff) {
                puVar12 = (undefined2 *)FUN_14018b280(uVar11 * 2,0);
            }
            puVar15 = puVar12;
            if (puVar9 + (longlong)puVar14 != puVar10) {
                lVar7 = (longlong)local_58 + ((longlong)puVar9 - (longlong)puVar12);
                do {
                    if (puVar15 != (undefined2 *)0x0) {
                        *puVar15 = *(undefined2 *)((longlong)puVar15 + lVar7);
                    }
                    puVar15 = puVar15 + 1;
                } while ((undefined2 *)((longlong)puVar15 + lVar7) != puVar10);
            }
            if (puVar15 != (undefined2 *)0x0) {
                *puVar15 = 0;
            }
        }
        if (puVar9 != (undefined2 *)0x0) {
            FUN_14018b900(puVar9,0);
        }
        if (puVar8 != (undefined2 *)0x0) {
            FUN_14018b900(puVar8,0);
        }
        uVar6 = FUN_1407df510(puVar12);
        lVar7 = FUN_14024b980(uVar6);
        if (lVar7 != 0) {
            FUN_140426630(param_1,lVar7);
        }
        goto joined_r0x000140432338;
    }
    puVar12 = (undefined2 *)0x0;
    puVar8 = puVar12;
    do {
        puVar8 = (undefined2 *)((longlong)puVar8 + 1);
    } while (L"Archive:"[(longlong)puVar8] != L'\0');
    psVar1 = (short *)(param_4 + (longlong)puVar8 * 2);
    puVar8 = puVar12;
    do {
        psVar2 = &DAT_140b0168a + (longlong)puVar8;
        puVar8 = (undefined2 *)((longlong)puVar8 + 1);
    } while (*psVar2 != 0);
    lVar7 = (longlong)puVar8 * 2 >> 1;
    puVar8 = puVar12;
    if (lVar7 + 1U < 0x7fffffffffffffff) {
        puVar8 = (undefined2 *)FUN_14018b280((lVar7 + 1U) * 2,0);
    }
    FUN_1407db590(puVar8,&DAT_140b01688,lVar7 * 2);
    local_68 = puVar8 + lVar7;
    if (local_68 != (undefined2 *)0x0) {
        *local_68 = 0;
    }
    sVar3 = *psVar1;
    puVar9 = puVar12;
    while (sVar3 != 0) {
        puVar9 = (undefined2 *)((longlong)puVar9 + 1);
        sVar3 = psVar1[(longlong)puVar9];
    }
    lVar7 = (longlong)puVar9 * 2 >> 1;
    puVar9 = puVar12;
    if (lVar7 + 1U < 0x7fffffffffffffff) {
        puVar9 = (undefined2 *)FUN_14018b280((lVar7 + 1U) * 2,0);
    }
    FUN_1407db590(puVar9,psVar1,lVar7 * 2);
    puVar14 = puVar9 + lVar7;
    if (puVar14 != (undefined2 *)0x0) {
        *puVar14 = 0;
    }
    local_60 = (undefined2 *)0xffffffffffffffff;
    lVar7 = (longlong)puVar14 - (longlong)puVar9 >> 1;
    if (lVar7 == 0) {
        LAB_140431cb9:
        puVar14 = (undefined2 *)FUN_14018b280(0x10);
        puVar12 = puVar14;
        if (puVar14 != (undefined2 *)0x0) {
            *puVar14 = 0;
        }
    }
    else {
        uStack64 = puVar8 + ((longlong)local_68 - (longlong)puVar8 >> 1);
        local_48._0_4_ = SUB84(puVar8,0);
        local_48._4_4_ = (undefined4)((ulonglong)puVar8 >> 0x20);
        uStack64._4_4_ = (undefined4)((ulonglong)uStack64 >> 0x20);
        local_38 = (undefined4)local_48;
        uStack52 = local_48._4_4_;
        uStack48 = (undefined4)uStack64;
        uStack44 = uStack64._4_4_;
        local_60 = puVar9 + lVar7;
        local_58 = puVar9;
        local_48 = puVar8;
        FUN_1400f94d0(&local_68,&local_60,&local_58,&local_38);
        if ((local_68 == puVar9) ||
            (lVar16 = (longlong)local_68 + (-2 - (longlong)puVar9) >> 1, lVar16 == -1))
            goto LAB_140431cb9;
        uStack80 = uStack64;
        uStack80._0_4_ = SUB84(uStack64,0);
        uStack80._4_4_ = (undefined4)((ulonglong)uStack64 >> 0x20);
        local_38 = (undefined4)local_48;
        uStack52 = local_48._4_4_;
        uStack48 = (undefined4)uStack80;
        uStack44 = uStack80._4_4_;
        local_58 = puVar8;
        puVar10 = (undefined2 *)FUN_1400f9810(puVar9,puVar14,&local_38);
        if (puVar10 == puVar14) {
            puVar14 = (undefined2 *)0xffffffffffffffff;
        }
        else {
            puVar14 = (undefined2 *)((longlong)puVar10 - (longlong)puVar9 >> 1);
        }
        if (puVar14 == (undefined2 *)0xffffffffffffffff) {
            puVar14 = puVar12;
        }
        local_60 = (undefined2 *)((lVar16 - (longlong)puVar14) + 1);
        local_58 = (undefined2 *)(lVar7 - (longlong)puVar14);
        local_58 = (undefined2 *)((longlong)puVar14 * 2);
        ppuVar13 = &local_58;
        if (local_60 <= (undefined2 *)(lVar7 - (longlong)puVar14)) {
            ppuVar13 = &local_60;
        }
        local_60 = (undefined2 *)((longlong)local_58 + (longlong)puVar9);
        puVar10 = puVar9 + (longlong)*ppuVar13 + (longlong)puVar14;
        uVar11 = ((longlong)puVar10 - (longlong)local_60 >> 1) + 1;
        if (uVar11 < 0x7fffffffffffffff) {
            puVar12 = (undefined2 *)FUN_14018b280(uVar11 * 2,0);
        }
        puVar14 = puVar12;
        if (local_60 != puVar10) {
            lVar7 = ((longlong)local_58 - (longlong)puVar12) + (longlong)puVar9;
            do {
                if (puVar14 != (undefined2 *)0x0) {
                    *puVar14 = *(undefined2 *)((longlong)puVar14 + lVar7);
                }
                puVar14 = puVar14 + 1;
            } while ((undefined2 *)((longlong)puVar14 + lVar7) != puVar10);
        }
        if (puVar14 != (undefined2 *)0x0) {
            *puVar14 = 0;
        }
    }
    if (puVar9 != (undefined2 *)0x0) {
        FUN_14018b900(puVar9,0);
    }
    if (puVar8 != (undefined2 *)0x0) {
        FUN_14018b900(puVar8,0);
    }
    uVar4 = DAT_140c65990;
    puVar8 = *(undefined2 **)(DAT_140c65998 + 0xd0);
    puVar10 = puVar8;
    puVar9 = *(undefined2 **)(puVar8 + 4);
    while (puVar9 != (undefined2 *)0x0) {
        iVar5 = FUN_1400454d0(*(undefined8 *)(puVar9 + 0x14),*(undefined8 *)(puVar9 + 0x18),puVar12,
                              puVar14);
        if (iVar5 < 0) {
            puVar9 = *(undefined2 **)(puVar9 + 0xc);
        }
        else {
            puVar10 = puVar9;
            puVar9 = *(undefined2 **)(puVar9 + 8);
        }
    }
    if ((puVar10 == puVar8) ||
        (iVar5 = FUN_1400454d0(puVar12,puVar14,*(undefined8 *)(puVar10 + 0x14),
                               *(undefined8 *)(puVar10 + 0x18)), local_58 = puVar10, iVar5 < 0)) {
        local_58 = puVar8;
    }
    puVar9 = local_58;
    if (local_58 != puVar8) {
        uVar6 = (**(code **)(**(longlong **)(local_58 + 0x20) + 0x30))();
        FUN_14049aa10(uVar4,uVar6);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"GalacticArchiveLinkClick",&DAT_1409ee0cc,
                      *(undefined8 *)(puVar9 + 0x20));
    }
    joined_r0x000140432338:
    if (puVar12 != (undefined2 *)0x0) {
        FUN_14018b900(puVar12,0);
    }
    return;
}



// WARNING: Restarted to delay deadcode elimination for space: stack

undefined8 FUN_140432380(undefined8 param_1,longlong param_2)

{
    short *psVar1;
    undefined2 *puVar2;
    short *psVar3;
    short sVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    undefined2 *puVar9;
    ulonglong *puVar10;
    undefined8 uVar11;
    longlong lVar12;
    longlong lVar13;
    ulonglong local_res10;
    ulonglong local_res18;
    ulonglong local_res20;
    ulonglong local_68;
    undefined2 *puStack96;
    undefined2 *local_58;
    undefined2 *local_50;

    lVar5 = FUN_1407df6e0(param_2,L"Archive:");
    if (lVar5 != param_2) {
        return 0;
    }
    uVar8 = 0;
    uVar6 = uVar8;
    do {
        uVar6 = uVar6 + 1;
    } while (L"Archive:"[uVar6] != L'\0');
    psVar1 = (short *)(param_2 + uVar6 * 2);
    uVar6 = uVar8;
    do {
        psVar3 = &DAT_140b01762 + uVar6;
        uVar6 = uVar6 + 1;
    } while (*psVar3 != 0);
    lVar5 = (longlong)(uVar6 * 2) >> 1;
    uVar6 = lVar5 + 1;
    uVar7 = uVar8;
    if (uVar6 < 0x7fffffffffffffff) {
        uVar7 = FUN_14018b280(uVar6 * 2,0);
    }
    lVar5 = lVar5 * 2;
    FUN_1407db590(uVar7,&DAT_140b01760,lVar5);
    puVar9 = (undefined2 *)(lVar5 + uVar7);
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    sVar4 = *psVar1;
    uVar6 = uVar8;
    while (sVar4 != 0) {
        uVar6 = uVar6 + 1;
        sVar4 = psVar1[uVar6];
    }
    lVar5 = (longlong)(uVar6 * 2) >> 1;
    uVar6 = lVar5 + 1;
    if (uVar6 < 0x7fffffffffffffff) {
        uVar8 = FUN_14018b280(uVar6 * 2,0);
    }
    lVar5 = lVar5 * 2;
    FUN_1407db590(uVar8,psVar1,lVar5);
    puVar2 = (undefined2 *)(lVar5 + uVar8);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    local_res10 = 0xffffffffffffffff;
    lVar5 = (longlong)((longlong)puVar2 - uVar8) >> 1;
    if (lVar5 != 0) {
        lVar12 = uVar7 + ((longlong)((longlong)puVar9 - uVar7) >> 1) * 2;
        local_res18 = uVar8 + lVar5 * 2;
        local_res10 = uVar8;
        local_68 = uVar7;
        puStack96 = (undefined2 *)lVar12;
        FUN_1400f94d0(&local_res20,&local_res18,&local_res10,&local_68);
        if ((local_res20 != uVar8) &&
            (lVar13 = (longlong)((local_res20 - uVar8) + -2) >> 1, lVar13 != -1)) {
            local_68 = uVar7;
            puStack96 = (undefined2 *)lVar12;
            puVar9 = (undefined2 *)FUN_1400f9810(uVar8,puVar2,&local_68);
            if (puVar9 == puVar2) {
                lVar12 = -1;
            }
            else {
                lVar12 = (longlong)((longlong)puVar9 - uVar8) >> 1;
            }
            if (lVar12 == -1) {
                lVar12 = 0;
            }
            puStack96 = (undefined2 *)0x0;
            local_res18 = (lVar13 - lVar12) + 1;
            local_res10 = lVar5 - lVar12;
            lVar13 = lVar12 * 2 + uVar8;
            puVar10 = &local_res10;
            if (local_res18 <= (ulonglong)(lVar5 - lVar12)) {
                puVar10 = &local_res18;
            }
            local_50 = (undefined2 *)0x0;
            lVar5 = uVar8 + (*puVar10 + lVar12) * 2;
            uVar6 = (lVar5 - lVar13 >> 1) + 1;
            if (uVar6 < 0x7fffffffffffffff) {
                puStack96 = (undefined2 *)FUN_14018b280(uVar6 * 2,0);
                local_50 = puStack96 + uVar6;
            }
            local_58 = puStack96;
            if (lVar13 != lVar5) {
                lVar12 = (lVar12 * 2 - (longlong)puStack96) + uVar8;
                do {
                    if (local_58 != (undefined2 *)0x0) {
                        *local_58 = *(undefined2 *)((longlong)local_58 + lVar12);
                    }
                    local_58 = local_58 + 1;
                } while ((longlong)local_58 + lVar12 != lVar5);
            }
            if (local_58 != (undefined2 *)0x0) {
                *local_58 = 0;
            }
            goto LAB_140432655;
        }
    }
    puStack96 = (undefined2 *)FUN_14018b280(0x10);
    local_50 = puStack96 + 8;
    local_58 = puStack96;
    if (puStack96 != (undefined2 *)0x0) {
        *puStack96 = 0;
    }
    LAB_140432655:
    puVar9 = puStack96;
    if (uVar8 != 0) {
        FUN_14018b900(uVar8,0);
    }
    if (uVar7 != 0) {
        FUN_14018b900(uVar7,0);
    }
    uVar11 = FUN_14049ac80();
    if (puVar9 != (undefined2 *)0x0) {
        FUN_14018b900(puVar9,0);
    }
    return uVar11;
}



undefined * FUN_1404326c0(undefined *param_1,int param_2)

{
    ulonglong uVar1;
    undefined2 *puVar2;
    undefined2 *puVar3;
    short sVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined2 *puVar9;
    undefined2 *puVar10;
    short *psVar11;
    longlong lVar12;
    undefined local_58 [32];

    psVar11 = (short *)&DAT_1409efc3c;
    if (*(short **)(DAT_140c635f0 + 0x1670) != (short *)0x0) {
        psVar11 = *(short **)(DAT_140c635f0 + 0x1670);
    }
    lVar12 = 0;
    sVar4 = *psVar11;
    lVar5 = lVar12;
    while (sVar4 != 0) {
        lVar5 = lVar5 + 1;
        sVar4 = psVar11[lVar5];
    }
    lVar5 = lVar5 * 2 >> 1;
    uVar1 = lVar5 + 1;
    lVar6 = lVar12;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar6 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar5 = lVar5 * 2;
    FUN_1407db590(lVar6,psVar11,lVar5);
    puVar2 = (undefined2 *)(lVar5 + lVar6);
    if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
    }
    psVar11 = (short *)&DAT_1409efc1c;
    if (*(short **)(DAT_140c635f0 + 0x1678) != (short *)0x0) {
        psVar11 = *(short **)(DAT_140c635f0 + 0x1678);
    }
    sVar4 = *psVar11;
    lVar5 = lVar12;
    while (sVar4 != 0) {
        lVar5 = lVar5 + 1;
        sVar4 = psVar11[lVar5];
    }
    lVar5 = lVar5 * 2 >> 1;
    uVar1 = lVar5 + 1;
    lVar7 = lVar12;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar7 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar5 = lVar5 * 2;
    FUN_1407db590(lVar7,psVar11,lVar5);
    puVar3 = (undefined2 *)(lVar7 + lVar5);
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    if (DAT_140c65898 == 0) {
        psVar11 = &DAT_1409efbb4;
    }
    else {
        psVar11 = (short *)&DAT_1409efbec;
        if (*(short **)(DAT_140c65898 + 0x88) != (short *)0x0) {
            psVar11 = *(short **)(DAT_140c65898 + 0x88);
        }
    }
    sVar4 = *psVar11;
    lVar5 = lVar12;
    while (sVar4 != 0) {
        lVar5 = lVar5 + 1;
        sVar4 = psVar11[lVar5];
    }
    lVar5 = lVar5 * 2 >> 1;
    uVar1 = lVar5 + 1;
    lVar8 = lVar12;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar8 = FUN_14018b280(uVar1 * 2,0);
    }
    lVar5 = lVar5 * 2;
    FUN_1407db590(lVar8,psVar11,lVar5);
    puVar10 = (undefined2 *)(lVar5 + lVar8);
    if (puVar10 != (undefined2 *)0x0) {
        *puVar10 = 0;
    }
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    puVar9 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 8) = puVar9;
    *(undefined2 **)(param_1 + 0x10) = puVar9;
    *(undefined2 **)(param_1 + 0x18) = puVar9 + 8;
    if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
    }
    if ((1 < param_2) && (local_58 != param_1)) {
        FUN_14001c480(param_1,lVar6,puVar2);
    }
    lVar5 = lVar12;
    if (2 < param_2) {
        do {
            psVar11 = &DAT_140b01756 + lVar5;
            lVar5 = lVar5 + 1;
        } while (*psVar11 != 0);
        FUN_14001c310(param_1,&DAT_140b01754,&DAT_140b01754 + lVar5 * 2);
        FUN_14001c310(param_1,lVar7,puVar3);
    }
    if (3 < param_2) {
        do {
            psVar11 = &DAT_140b016d6 + lVar12;
            lVar12 = lVar12 + 1;
        } while (*psVar11 != 0);
        FUN_14001c310(param_1,&DAT_140b016d4,&DAT_140b016d4 + lVar12 * 2);
        FUN_14001c310(param_1,lVar8,puVar10);
    }
    if (lVar8 != 0) {
        FUN_14018b900(lVar8,0);
    }
    if (lVar7 != 0) {
        FUN_14018b900(lVar7,0);
    }
    if (lVar6 != 0) {
        FUN_14018b900(lVar6,0);
    }
    return param_1;
}



undefined8 FUN_140432960(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x10);
    local_res8 = lVar1;
    for (lVar2 = *(longlong *)(lVar1 + 8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
        local_res8 = lVar2;
    }
    if ((local_res8 == lVar1) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar1;
    }
    if ((local_res8 != lVar1) && (local_res8 != -0x28)) {
        lVar1 = *(longlong *)(local_res8 + 0x30);
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



undefined8 FUN_140432a10(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65960 + 0x10);
    local_res8 = lVar1;
    for (lVar2 = *(longlong *)(lVar1 + 8); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x10)) {
        local_res8 = lVar2;
    }
    if ((local_res8 == lVar1) || (*(int *)(local_res8 + 0x20) != 0)) {
        local_res8 = lVar1;
    }
    if ((local_res8 != lVar1) && (local_res8 != -0x28)) {
        lVar1 = *(longlong *)(local_res8 + 0x70);
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



undefined4 FUN_140432ac0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.PathMission",0x10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140432ba0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.PathEpisode",0x10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140432c80(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.PublicEvent",0x10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140432d60(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.PublicEventObjective",0x19);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140432e40(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = (undefined8 *)FUN_140059170(param_1,0x10);
    lVar2 = FUN_14018b280(0x80,0);
    if (lVar2 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = FUN_1406a4060(lVar2,param_2);
    }
    puVar1[1] = uVar3;
    *puVar1 = 0x3950;
    lVar2 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.ICComm",0xb);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140432f20(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.GalacticArchiveArticle",0x1b);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140433000(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.GalacticArchiveEntry",0x19);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_1404330e0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Challenges",0xf);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_1404331c0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.SoldierEvent",0x11);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_1404332a0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Achievement",0x10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140433380(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170();
    puVar3 = (undefined8 *)FUN_14018b280(0x18);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        *puVar3 = &PTR_FUN_140b66e68;
        *(undefined4 *)(puVar3 + 1) = **(undefined4 **)(param_2 + 8);
        puVar3[2] = *(undefined8 *)(param_2 + 0x10);
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.ChatChannel",0x10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140433470(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        *puVar3 = &PTR_FUN_140b6fe30;
        puVar3[1] = *param_2;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Guild",10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140433550(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined4 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170();
    puVar3 = (undefined8 *)FUN_14018b280();
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        *puVar3 = &PTR_FUN_140b66e68;
        *(undefined4 *)(puVar3 + 1) = *param_2;
        *(undefined4 *)((longlong)puVar3 + 0xc) = param_2[1];
        *(undefined4 *)(puVar3 + 2) = param_2[3];
        *(undefined4 *)((longlong)puVar3 + 0x14) = param_2[2];
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.HexGroups",0xe);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140433640(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x40);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        *puVar3 = &PTR_FUN_140b6ffd0;
        puVar3[1] = *param_2;
        puVar3[2] = param_2[1];
        puVar3[3] = param_2[2];
        puVar3[4] = param_2[3];
        puVar3[5] = param_2[4];
        puVar3[6] = param_2[5];
        puVar3[7] = param_2[6];
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.CommodityOrder",0x13);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_140433750(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = (undefined8 *)FUN_140059170(param_1,0x10);
    lVar2 = FUN_14018b280(0x90,0);
    if (lVar2 == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = FUN_1406a0620(lVar2,param_2);
    }
    puVar1[1] = uVar3;
    *puVar1 = 0x3950;
    lVar2 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.ItemAuction",0x10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_140433830(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170();
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 1) = *param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    *puVar2 = 0x3950;
    puVar2[1] = puVar3;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Contract",0xd);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_1404338e0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.RewardTrack",0x10);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1404339c0(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170();
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 1) = *param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    *puVar2 = 0x3950;
    puVar2[1] = puVar3;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.Residence",0xe);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



longlong FUN_140433a70(longlong param_1,longlong param_2)

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
        uVar3 = FUN_140032060(param_1,*(undefined8 *)(*(longlong *)(param_2 + 8) + 8),lVar1);
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



void FUN_140433b50(longlong param_1,undefined4 *param_2,longlong param_3,undefined4 param_4,
                   undefined4 param_5)

{
    longlong lVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined auStack344 [32];
    undefined **local_138;
    undefined4 local_130;
    longlong local_128;
    undefined4 local_120;
    undefined4 local_118;
    undefined local_114 [204];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack344;
    plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,param_4,0);
    if ((plVar4 != (longlong *)0x0) && (param_3 != 0)) {
        do {
            lVar1 = *(longlong *)(param_1 + 0x10);
            local_138 = &PTR_FUN_140b569f0;
            local_120 = 1;
            local_128 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar5 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar5;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            local_130 = FUN_1400578c0(lVar1);
            uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
            FUN_1405f8dc0();
            local_118 = *param_2;
            FUN_1405f8c40(local_114,param_2 + 2);
            iVar3 = FUN_1405f1250(&local_138,&local_118,uVar5,param_5);
            if (iVar3 != 0) {
                FUN_1400fb1d0(param_1);
            }
            FUN_1400579e0(lVar1);
            param_2 = param_2 + 6;
            param_3 = param_3 + -1;
        } while (param_3 != 0);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack344);
    return;
}



void FUN_140433ce0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
    longlong lVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong *plVar4;
    undefined8 uVar5;
    ulonglong *puVar6;
    undefined auStack360 [32];
    undefined **local_148;
    undefined4 local_140;
    longlong local_138;
    undefined4 local_130;
    undefined4 local_128;
    undefined4 local_124;
    ulonglong local_120;
    ulonglong local_118;
    undefined4 local_110;
    undefined4 local_10c;
    undefined local_108 [192];
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong)auStack360;
    plVar4 = (longlong *)FUN_140498a40(DAT_140c65980,param_4,0);
    if ((plVar4 != (longlong *)0x0) && (param_3 != 0)) {
        puVar6 = (ulonglong *)(param_2 + 8);
        do {
            lVar1 = *(longlong *)(param_1 + 0x10);
            local_148 = &PTR_FUN_140b569f0;
            local_130 = 1;
            local_138 = lVar1;
            if (*(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar1 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar1);
            }
            puVar2 = *(undefined8 **)(lVar1 + 0x10);
            uVar5 = FUN_14005c1b0(lVar1,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar5;
            *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
            local_140 = FUN_1400578c0(lVar1);
            uVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
            local_120 = local_120 & 0xffffffff00000000;
            local_118 = 0;
            FUN_1405f8dc0();
            local_128 = *(undefined4 *)(puVar6 + -1);
            local_118 = puVar6[1];
            local_124 = *(undefined4 *)((longlong)puVar6 + -4);
            local_110 = 0x17;
            local_120 = *puVar6;
            local_10c = 4;
            FUN_1405f8c40(local_108,puVar6 + 3);
            local_110 = *(undefined4 *)(puVar6 + 2);
            local_10c = *(undefined4 *)((longlong)puVar6 + 0x14);
            iVar3 = FUN_1405f0f90(&local_148,&local_128,uVar5,1);
            if (iVar3 != 0) {
                FUN_1400fb1d0(param_1);
            }
            FUN_1400579e0(lVar1);
            puVar6 = puVar6 + 6;
            param_3 = param_3 + -1;
        } while (param_3 != 0);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong)auStack360);
    return;
}



undefined8 FUN_140433eb0(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 != (undefined8 *)0x0) {
        puVar3[1] = *param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    *puVar2 = 0x3950;
    puVar2[1] = puVar3;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.RecruitmentGuild",0x15);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



void FUN_140433f70(longlong param_1,longlong param_2,longlong param_3)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;
    char *pcVar4;
    char *pcVar5;
    undefined *puVar6;
    char *pcVar7;
    char *pcVar8;
    bool bVar9;
    longlong local_res10;
    undefined local_res20 [8];
    undefined local_18 [16];

    local_res10 = param_2;
    if (param_2 != param_3) {
        do {
            pcVar4 = *(char **)(param_1 + 8);
            piVar1 = (int *)(local_res10 + 0x20);
            bVar9 = true;
            pcVar7 = *(char **)(pcVar4 + 8);
            pcVar8 = pcVar4;
            if (pcVar7 != (char *)0x0) {
                do {
                    pcVar8 = pcVar7;
                    if ((*piVar1 < *(int *)(pcVar8 + 0x20)) ||
                        ((*piVar1 <= *(int *)(pcVar8 + 0x20) &&
                          (*(uint *)(local_res10 + 0x24) < *(uint *)(pcVar8 + 0x24))))) {
                        pcVar7 = *(char **)(pcVar8 + 0x10);
                        bVar9 = true;
                    }
                    else {
                        pcVar7 = *(char **)(pcVar8 + 0x18);
                        bVar9 = false;
                    }
                } while (pcVar7 != (char *)0x0);
            }
            pcVar5 = pcVar8;
            if (bVar9) {
                if (pcVar8 != *(char **)(pcVar4 + 0x10)) {
                    if ((*pcVar8 == '\0') && (*(char **)(*(longlong *)(pcVar8 + 8) + 8) == pcVar8)) {
                        pcVar5 = *(char **)(pcVar8 + 0x18);
                    }
                    else {
                        pcVar5 = *(char **)(pcVar8 + 0x10);
                        if (pcVar5 == (char *)0x0) {
                            pcVar5 = *(char **)(pcVar8 + 8);
                            pcVar4 = pcVar5;
                            if (pcVar8 == *(char **)(pcVar5 + 0x10)) {
                                do {
                                    pcVar5 = *(char **)(pcVar4 + 8);
                                    bVar9 = pcVar4 == *(char **)(pcVar5 + 0x10);
                                    pcVar4 = pcVar5;
                                } while (bVar9);
                            }
                        }
                        else {
                            for (pcVar4 = *(char **)(pcVar5 + 0x18); pcVar4 != (char *)0x0;
                                 pcVar4 = *(char **)(pcVar4 + 0x18)) {
                                pcVar5 = pcVar4;
                            }
                        }
                    }
                    goto LAB_14043404d;
                }
                puVar6 = local_res20;
                LAB_14043406b:
                FUN_1403af200(param_1,puVar6,pcVar7,pcVar8,piVar1);
            }
            else {
                LAB_14043404d:
                if ((*(int *)(pcVar5 + 0x20) < *piVar1) ||
                    ((*(int *)(pcVar5 + 0x20) <= *piVar1 &&
                      (*(uint *)(pcVar5 + 0x24) < *(uint *)(local_res10 + 0x24))))) {
                    puVar6 = local_18;
                    goto LAB_14043406b;
                }
            }
            lVar3 = *(longlong *)(local_res10 + 0x18);
            if (lVar3 == 0) {
                lVar3 = *(longlong *)(local_res10 + 8);
                if (local_res10 == *(longlong *)(lVar3 + 0x18)) {
                    do {
                        local_res10 = lVar3;
                        lVar3 = *(longlong *)(local_res10 + 8);
                    } while (local_res10 == *(longlong *)(lVar3 + 0x18));
                }
                if (*(longlong *)(local_res10 + 0x18) != lVar3) {
                    local_res10 = lVar3;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar3 + 0x10); local_res10 = lVar3, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar3 = lVar2;
                }
            }
        } while (local_res10 != param_3);
    }
    return;
}



undefined4 FUN_140434100(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar3[1] = param_2;
        *puVar3 = &PTR_FUN_140b6fe30;
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.PetFlair",0xd);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined4 FUN_1404341e0(longlong param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    if (param_2 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x30);
    if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        *puVar3 = &PTR_FUN_140b72590;
        puVar3[1] = *param_2;
        puVar3[2] = param_2[1];
        puVar3[3] = param_2[2];
        puVar3[4] = param_2[3];
        puVar3[5] = param_2[4];
    }
    puVar2[1] = puVar3;
    *puVar2 = 0x3950;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.CREDDExchangeOrder",0x17);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1404342e0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_140b6fe30;
        puVar3[1] = *(undefined8 *)(param_2 + 8);
    }
    *puVar2 = 0x3950;
    puVar2[1] = puVar3;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.SettlerImprovement",0x17);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1404343a0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    undefined8 local_18;
    undefined4 local_10;

    puVar2 = (undefined8 *)FUN_140059170(param_1,0x10);
    puVar3 = (undefined8 *)FUN_14018b280(0x10);
    if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = &PTR_FUN_140b6fe30;
        puVar3[1] = *(undefined8 *)(param_2 + 8);
    }
    *puVar2 = 0x3950;
    puVar2[1] = puVar3;
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_18 = FUN_140062650(param_1,"Game.GenericMapNode",0x13);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



void FUN_140434460(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x200,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,param_3,0,0,0,param_4
    );
    return;
}



undefined8 * FUN_140434560(undefined8 *param_1)

{
    int iVar1;

    *param_1 = &PTR_LAB_140b55048;
    *(undefined4 *)(param_1 + 1) = 1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    DAT_140c658c0 = param_1;
    *param_1 = &PTR_LAB_140b66ea0;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0xe) = 200;
    *(undefined4 *)((longlong)param_1 + 0x74) = 1;
    *(undefined4 *)(param_1 + 0xf) = 200;
    iVar1 = DAT_140c636a8 + -200;
    *(int *)(param_1 + 0xd) = iVar1;
    *(undefined4 *)(param_1 + 0x10) = 0;
    param_1[0x12] = &LAB_140435690;
    param_1[0x11] = param_1;
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x14) = 4;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *(undefined4 *)(param_1 + 0x15) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0xd;
    *(int *)(param_1 + 0x1e) = iVar1;
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
    *(undefined4 *)(param_1 + 0x1f) = 200;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 1;
    *(undefined4 *)(param_1 + 0x20) = 200;
    *(undefined4 *)(param_1 + 0x21) = 0;
    param_1[0x22] = param_1;
    param_1[0x23] = &LAB_1404357f0;
    param_1[0x24] = 0;
    *(undefined4 *)(param_1 + 0x25) = 4;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    *(undefined4 *)(param_1 + 0x26) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x174) = 0xd;
    *(int *)(param_1 + 0x2f) = iVar1;
    *(undefined4 *)((longlong)param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 200;
    *(undefined4 *)((longlong)param_1 + 0x184) = 1;
    *(undefined4 *)(param_1 + 0x31) = 200;
    *(undefined4 *)(param_1 + 0x32) = 0;
    param_1[0x33] = param_1;
    param_1[0x34] = &LAB_140435850;
    param_1[0x35] = 0;
    *(undefined4 *)(param_1 + 0x36) = 4;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    *(undefined4 *)(param_1 + 0x37) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0xd;
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    return param_1;
}



void FUN_1404347c0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b66ea0;
    if ((longlong *)param_1[0xb] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0xb] + 8))();
        param_1[0xb] = 0;
    }
    DAT_140c658c0 = 0;
    FUN_140434900(param_1);
    FUN_140195d70(param_1 + 0x37);
    *(undefined4 *)(param_1 + 0x37) = 0;
    if ((undefined8 *)param_1[0x39] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x39] = param_1[0x3a];
    }
    if ((undefined8 *)param_1[0x3a] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x3a] = param_1[0x39];
    }
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    FUN_140195d70(param_1 + 0x26);
    *(undefined4 *)(param_1 + 0x26) = 0;
    if ((undefined8 *)param_1[0x28] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x28] = param_1[0x29];
    }
    if ((undefined8 *)param_1[0x29] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x29] = param_1[0x28];
    }
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    FUN_140195d70(param_1 + 0x15);
    *(undefined4 *)(param_1 + 0x15) = 0;
    if ((undefined8 *)param_1[0x17] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x17] = param_1[0x18];
    }
    if ((undefined8 *)param_1[0x18] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x18] = param_1[0x17];
    }
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *param_1 = &PTR_LAB_140b559d0;
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    *param_1 = &PTR_LAB_140b55048;
    return;
}



undefined8 FUN_140434900(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;

    plVar1 = *(longlong **)(param_1 + 0x60);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
        *(undefined8 *)(param_1 + 0x60) = 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (lVar2 != 0) {
        if (DAT_140c65c48 == lVar2) {
            DAT_140c65c48 = 0;
        }
        FUN_14018b900(lVar2,0);
        *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong *)(param_1 + 0x208) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x208),0);
    }
    if (*(longlong *)(param_1 + 0x200) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x200),0);
    }
    if (*(longlong *)(param_1 + 0x210) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x210),0);
    }
    if (*(longlong *)(param_1 + 0x218) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x218),0);
    }
    if (*(longlong *)(param_1 + 0x220) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x220),0);
    }
    if (*(longlong *)(param_1 + 0x228) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x228),0);
    }
    if (*(longlong *)(param_1 + 0x230) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x230),0);
    }
    if (*(longlong *)(param_1 + 0x238) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x238),0);
    }
    return 0;
}



undefined8 FUN_140434a00(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 *puVar9;
    undefined8 extraout_XMM0_Qa;

    lVar2 = FUN_14018b280(0xe30,0);
    puVar9 = (undefined8 *)0x0;
    puVar3 = puVar9;
    if (lVar2 != 0) {
        puVar3 = (undefined8 *)
                FUN_1400e2ef0(lVar2,L"UI\\Assets\\Docs\\General\\ApolloFonts.xml",
                              L"UI\\Assets\\Docs\\General\\ApolloCursors.xml",0,0);
    }
    *(undefined8 **)(param_1 + 0x60) = puVar3;
    iVar1 = *(int *)((longlong)puVar3 + 0x3c);
    if (0x556 < iVar1) {
        iVar1 = 0x556;
    }
    *(int *)(puVar3 + 7) = iVar1;
    uVar4 = FUN_1400e4e80(*(undefined8 *)(param_1 + 0x60),0);
    if (-1 < (int)uVar4) {
        FUN_1400e7190(*(undefined8 *)(param_1 + 0x60),L"StoreDialogs",0);
        FUN_1400e7190(*(undefined8 *)(param_1 + 0x60),L"DefaultStratum",0);
        FUN_1400e9c20(*(undefined8 *)(param_1 + 0x60),&PTR_s_String_GetWeaselString_140c59360,7);
        FUN_140508240(*(undefined8 *)(param_1 + 0x60));
        FUN_1404f8440(*(undefined8 *)(param_1 + 0x60));
        lVar8 = *(longlong *)(param_1 + 0x60) + 0x180;
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 400);
        puVar5 = (undefined8 *)FUN_14018b280(8);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_LAB_140b66ce8;
            puVar3 = puVar5;
        }
        FUN_1400f1b30(*(longlong *)(param_1 + 0x60) + 0x180,puVar3);
        puVar5 = (undefined8 *)FUN_14018b280(8);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_LAB_140b66ac0;
            puVar3 = puVar5;
        }
        FUN_1400f1b30(*(longlong *)(param_1 + 0x60) + 0x180,puVar3);
        puVar5 = (undefined8 *)FUN_14018b280(8);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_LAB_140b66da8;
            puVar3 = puVar5;
        }
        FUN_1400f1b30(*(longlong *)(param_1 + 0x60) + 0x180,puVar3);
        puVar5 = (undefined8 *)FUN_14018b280(8);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_LAB_140b66dd8;
            puVar3 = puVar5;
        }
        FUN_1400f1b30(*(longlong *)(param_1 + 0x60) + 0x180,puVar3);
        lVar6 = FUN_14018b280(1);
        puVar3 = puVar9;
        if (lVar6 != 0) {
            puVar3 = (undefined8 *)FUN_1406f26c0(lVar6,lVar8);
        }
        *(undefined8 **)(param_1 + 0x48) = puVar3;
        FUN_140057020(lVar2,"AccountItemLib",&PTR_s_GetPendingAccountItemGroups_140b69660);
        FUN_1404e7f60(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        FUN_1404f2860(lVar2);
        FUN_1406f30a0(lVar2);
        FUN_140057020(lVar2,"LiveEventsLib",&PTR_s_GetVisibleLiveEventList_140b72640);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        FUN_1406f3de0(lVar2);
        *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + -0x10;
        FUN_140709460(lVar2);
        FUN_14070f700(lVar2);
        FUN_1406f1490(lVar2);
        FUN_140711f80(lVar2);
        FUN_140712510(lVar2);
        puVar5 = (undefined8 *)FUN_14018b280(1);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            FUN_1400f2440(lVar8,"PetCustomization",FUN_1406b6b50);
            puVar3 = puVar5;
        }
        *(undefined8 **)(param_1 + 0x200) = puVar3;
        puVar5 = (undefined8 *)FUN_14018b280(1);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            FUN_1400f2440(lVar8,"PetFlair",FUN_1406b63d0);
            puVar3 = puVar5;
        }
        *(undefined8 **)(param_1 + 0x208) = puVar3;
        puVar5 = (undefined8 *)FUN_14018b280(1);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            FUN_1400f2440(lVar8,"RewardTrack",FUN_1406b9550);
            puVar3 = puVar5;
        }
        *(undefined8 **)(param_1 + 0x210) = puVar3;
        puVar5 = (undefined8 *)FUN_14018b280(1);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            FUN_1400f2440(lVar8,&DAT_140af19f4,FUN_140413a20);
            puVar3 = puVar5;
        }
        *(undefined8 **)(param_1 + 0x218) = puVar3;
        puVar5 = (undefined8 *)FUN_14018b280(1);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            FUN_1400f2440(lVar8,"Money",FUN_140500a10);
            puVar3 = puVar5;
        }
        *(undefined8 **)(param_1 + 0x220) = puVar3;
        puVar5 = (undefined8 *)FUN_14018b280(1);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            FUN_1400f2440(lVar8,&DAT_140b29fe8,FUN_1406481d0);
            puVar3 = puVar5;
        }
        *(undefined8 **)(param_1 + 0x228) = puVar3;
        puVar5 = (undefined8 *)FUN_14018b280(4);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            FUN_1400f2440(lVar8,"Quest",&LAB_1406625d0);
            puVar3 = puVar5;
        }
        *(undefined8 **)(param_1 + 0x230) = puVar3;
        puVar5 = (undefined8 *)FUN_14018b280(1);
        puVar3 = puVar9;
        if (puVar5 != (undefined8 *)0x0) {
            FUN_1400f2440(lVar8,"CREDDExchangeOrder",FUN_1406f1c70);
            puVar3 = puVar5;
        }
        lVar2 = *(longlong *)(param_1 + 0x60);
        *(undefined8 **)(param_1 + 0x238) = puVar3;
        *(undefined4 *)(lVar2 + 0xa08) = 0;
        *(longlong *)(lVar2 + 0x9c8) = lVar2;
        FUN_1400e9c20(lVar2,&PTR_s_GetLoadingModuleFolder_140c57760,1);
        lVar2 = *(longlong *)(param_1 + 0x60);
        lVar8 = FUN_14018b280(0xa18,0);
        puVar3 = puVar9;
        if (lVar8 != 0) {
            puVar3 = (undefined8 *)
                    FUN_1401352f0(lVar8,*(undefined8 *)(lVar2 + 0x9c8),*(undefined4 *)(lVar2 + 0xa08),
                                  &DAT_1409efcb4,L"Util",1,2,0,0);
        }
        if (*(char *)(puVar3 + 0x27) == '\0') {
            FUN_1401356f0(puVar3);
            FUN_14018b900(puVar3,0);
        }
        else {
            lVar6 = *(longlong *)(lVar2 + 0x9d8);
            lVar8 = lVar6 + 1;
            lVar7 = FUN_14018db00(*(undefined8 *)(lVar2 + 0x9d0),lVar8,8);
            *(undefined8 **)(lVar7 + lVar6 * 8) = puVar3;
            if (*(longlong *)(lVar2 + 0x9d0) != lVar7) {
                FUN_1407db590(lVar7,*(longlong *)(lVar2 + 0x9d0),*(longlong *)(lVar2 + 0x9d8) << 3);
                lVar6 = *(longlong *)(lVar2 + 0x9d0);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                *(longlong *)(lVar2 + 0x9d0) = lVar7;
            }
            *(longlong *)(lVar2 + 0x9d8) = lVar8;
        }
        lVar2 = *(longlong *)(param_1 + 0x60);
        lVar8 = FUN_14018b280(0xa18,0);
        puVar3 = puVar9;
        if (lVar8 != 0) {
            puVar3 = (undefined8 *)
                    FUN_1401352f0(lVar8,*(undefined8 *)(lVar2 + 0x9c8),*(undefined4 *)(lVar2 + 0xa08),
                                  L"ProtectedAddons",L"Storefront",1,2,0,0);
        }
        if (*(char *)(puVar3 + 0x27) == '\0') {
            FUN_1401356f0(puVar3);
            FUN_14018b900(puVar3,0);
        }
        else {
            lVar6 = *(longlong *)(lVar2 + 0x9d8);
            lVar8 = lVar6 + 1;
            lVar7 = FUN_14018db00(*(undefined8 *)(lVar2 + 0x9d0),lVar8,8);
            *(undefined8 **)(lVar7 + lVar6 * 8) = puVar3;
            if (*(longlong *)(lVar2 + 0x9d0) != lVar7) {
                FUN_1407db590(lVar7,*(longlong *)(lVar2 + 0x9d0),*(longlong *)(lVar2 + 0x9d8) << 3);
                lVar6 = *(longlong *)(lVar2 + 0x9d0);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                *(longlong *)(lVar2 + 0x9d0) = lVar7;
            }
            *(longlong *)(lVar2 + 0x9d8) = lVar8;
        }
        lVar2 = *(longlong *)(param_1 + 0x60);
        lVar8 = FUN_14018b280(0xa18,0);
        puVar3 = puVar9;
        if (lVar8 != 0) {
            puVar3 = (undefined8 *)
                    FUN_1401352f0(lVar8,*(undefined8 *)(lVar2 + 0x9c8),*(undefined4 *)(lVar2 + 0xa08),
                                  L"ProtectedAddons",L"AccountInventory",1,2,0,0);
        }
        if (*(char *)(puVar3 + 0x27) == '\0') {
            FUN_1401356f0(puVar3);
            FUN_14018b900(puVar3,0);
        }
        else {
            lVar6 = *(longlong *)(lVar2 + 0x9d8);
            lVar8 = lVar6 + 1;
            lVar7 = FUN_14018db00(*(undefined8 *)(lVar2 + 0x9d0),lVar8,8);
            *(undefined8 **)(lVar7 + lVar6 * 8) = puVar3;
            if (*(longlong *)(lVar2 + 0x9d0) != lVar7) {
                FUN_1407db590(lVar7,*(longlong *)(lVar2 + 0x9d0),*(longlong *)(lVar2 + 0x9d8) << 3);
                lVar6 = *(longlong *)(lVar2 + 0x9d0);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                *(longlong *)(lVar2 + 0x9d0) = lVar7;
            }
            *(longlong *)(lVar2 + 0x9d8) = lVar8;
        }
        lVar2 = *(longlong *)(param_1 + 0x60);
        lVar8 = FUN_14018b280(0xa18,0);
        puVar3 = puVar9;
        if (lVar8 != 0) {
            puVar3 = (undefined8 *)
                    FUN_1401352f0(lVar8,*(undefined8 *)(lVar2 + 0x9c8),*(undefined4 *)(lVar2 + 0xa08),
                                  &DAT_1409efccc,L"ToolTips",1,2,0,0);
        }
        if (*(char *)(puVar3 + 0x27) == '\0') {
            FUN_1401356f0(puVar3);
            FUN_14018b900(puVar3,0);
        }
        else {
            lVar6 = *(longlong *)(lVar2 + 0x9d8);
            lVar8 = lVar6 + 1;
            lVar7 = FUN_14018db00(*(undefined8 *)(lVar2 + 0x9d0),lVar8,8);
            *(undefined8 **)(lVar7 + lVar6 * 8) = puVar3;
            if (*(longlong *)(lVar2 + 0x9d0) != lVar7) {
                FUN_1407db590(lVar7,*(longlong *)(lVar2 + 0x9d0),*(longlong *)(lVar2 + 0x9d8) << 3);
                lVar6 = *(longlong *)(lVar2 + 0x9d0);
                if (lVar6 != 0) {
                    (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                }
                *(longlong *)(lVar2 + 0x9d0) = lVar7;
            }
            *(longlong *)(lVar2 + 0x9d8) = lVar8;
        }
        FUN_140139ae0(*(longlong *)(param_1 + 0x60) + 0x9c0,0);
        lVar2 = *(longlong *)(param_1 + 0x60);
        lVar8 = *(longlong *)(lVar2 + 0x170);
        puVar3 = *(undefined8 **)(lVar8 + 0x18);
        puVar5 = (undefined8 *)FUN_14010e2e0(*(undefined8 *)(lVar8 + 0x10),puVar3,L"CRB_TooltipBasic");
        if (puVar5 != puVar3) {
            puVar9 = (undefined8 *)*puVar5;
        }
        *(undefined8 **)(lVar2 + 0xb78) = puVar9;
        FUN_1400e74a0(extraout_XMM0_Qa,0,*(undefined8 *)(param_1 + 0x60));
        uVar4 = 0;
    }
    return uVar4;
}



void FUN_1404351e0(longlong param_1)

{
    undefined4 local_res8 [8];
    undefined local_28 [8];
    longlong local_20;
    undefined8 local_18;
    undefined8 local_10;

    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x60),"StoreClosed","");
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    local_res8[0] = 0xcd;
    FUN_14001a500(local_28,0,local_res8);
    (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0x78))
            (*(longlong **)(DAT_140c65898 + 0x7588),local_28);
    (**(code **)(**(longlong **)(DAT_140c65898 + 0x7588) + 0xa0))
            (*(longlong **)(DAT_140c65898 + 0x7588),1);
    FUN_140436230(DAT_140c65898 + 0x48,*(undefined8 *)(DAT_140c635f0 + 0x16a0));
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return;
}



undefined8 FUN_140435290(longlong param_1)

{
    undefined8 uVar1;

    if (*(int *)(param_1 + 0x50) == 0) {
        uVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x20))();
        if ((int)uVar1 == 0) {
            return uVar1;
        }
        *(undefined4 *)(param_1 + 0x50) = 1;
    }
    return 1;
}



undefined8 FUN_1404352d0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;

    FUN_1400e74a0(*(undefined8 *)(param_1 + 0x60));
    lVar3 = DAT_140c63628;
    if (*(int *)(param_1 + 0x28) != 4) {
        for (lVar1 = *(longlong *)(param_1 + 0x20); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
            if (*(int *)(lVar1 + 0x28) != 4) {
                return 0;
            }
        }
        if (*(longlong *)(DAT_140c63628 + 0x128) != 0) {
            FUN_1407e4830(*(undefined8 *)(DAT_140c63628 + 0x120),0,
                          *(longlong *)(DAT_140c63628 + 0x128) * 8);
        }
        uVar6 = 0;
        *(undefined4 *)(lVar3 + 0x240) = 0;
        uVar4 = FUN_1400518a0(lVar3,0xad,6,0);
        uVar7 = (ulonglong)uVar4;
        if (-1 < (char)DAT_140c8cd58) {
            DAT_140c8cd58 = DAT_140c8cd58 | 0x80;
            FUN_1401ad620(&DAT_140c8d540,L"ZoneKit 7 StoreMusic");
        }
        FUN_1401ada40(&DAT_140c8d540,uVar7);
        lVar1 = *(longlong *)(lVar3 + 0x128);
        while (lVar1 < 8) {
            lVar2 = *(longlong *)(lVar3 + 0x128);
            lVar1 = lVar2 + 1;
            lVar5 = FUN_14018db00(*(undefined8 *)(lVar3 + 0x120),lVar1,8);
            *(undefined8 *)(lVar5 + lVar2 * 8) = 0;
            if (*(longlong *)(lVar3 + 0x120) != lVar5) {
                FUN_1407db590(lVar5,*(longlong *)(lVar3 + 0x120),*(longlong *)(lVar3 + 0x128) << 3);
                lVar2 = *(longlong *)(lVar3 + 0x120);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                *(longlong *)(lVar3 + 0x120) = lVar5;
            }
            *(longlong *)(lVar3 + 0x128) = lVar1;
        }
        if ((uVar4 != 0) && (uVar7 < *(ulonglong *)(lVar3 + 0xc0))) {
            uVar6 = *(undefined8 *)(*(longlong *)(lVar3 + 0xb8) + uVar7 * 8);
        }
        *(undefined8 *)(*(longlong *)(lVar3 + 0x120) + 0x38) = uVar6;
    }
    return 0;
}



undefined8 FUN_140435470(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
    longlong lVar1;
    char cVar2;
    undefined4 local_18;
    undefined4 uStack20;
    undefined4 uStack16;
    undefined4 uStack12;

    local_18 = 0;
    uStack20 = 0x3e800000;
    uStack16 = 0x3e800000;
    uStack12 = 0x3f000000;
    (**(code **)(*DAT_140c65670 + 0x270))(DAT_140c65670,1,&local_18,param_4,0);
    (**(code **)(*DAT_140c65670 + 0x120))();
    (**(code **)(*DAT_140c65670 + 400))(DAT_140c65670,7);
    (**(code **)(*DAT_140c65680 + 0x38))();
    FUN_1400e7c40(*(undefined8 *)(param_1 + 0x60));
    (**(code **)(*DAT_140c65680 + 0x128))();
    if (*(int *)(param_1 + 0x28) != 4) {
        for (lVar1 = *(longlong *)(param_1 + 0x20); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
            if (*(int *)(lVar1 + 0x28) != 4) {
                return 0;
            }
        }
        cVar2 = FUN_1400e6e80(*(undefined8 *)(param_1 + 0x60));
        if (cVar2 == '\0') {
            (**(code **)(*DAT_140c65670 + 0x1d8))
                    (DAT_140c65670,*(undefined8 *)(param_1 + 0x58),DAT_140c77760,DAT_140c77764);
        }
        FUN_140252260();
    }
    return 0;
}



void FUN_1404356b0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;

    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 400);
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
    uVar5 = (ulonglong)*(uint *)(param_2 + 8);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    puVar6 = *(undefined8 **)(lVar1 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1,puVar6,L"nEntitlementId",uVar5 & 0xffffffff);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(lVar1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    FUN_1400f06f0(lVar1);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x60),"AccountEntitlementUpdate",&DAT_1409efcec,uVar2,
                  param_3,param_4);
    FUN_1400579e0(lVar1);
    return;
}



void FUN_140435810(longlong param_1,longlong param_2,undefined8 param_3)

{
    undefined4 uVar1;

    if (param_2 == 0) {
        uVar1 = 5;
    }
    else {
        uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 4);
    }
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x60),"RewardTrackActive",&DAT_1409efd5c,uVar1,param_2,
                  param_3);
    return;
}



undefined8 FUN_140435870(void)

{
    *(undefined4 *)(DAT_140c658c0 + 0x28) = 4;
    FUN_1404351e0();
    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"AccountInventoryWindowShow",
                      &DAT_1409d13cf);
    }
    return 0;
}



undefined8 FUN_1404358c0(void)

{
    *(undefined4 *)(DAT_140c658c0 + 0x28) = 4;
    FUN_1404351e0();
    if (DAT_140c65898 != 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ShowInventory","");
    }
    return 0;
}



undefined8 FUN_140435910(void)

{
    *(undefined4 *)(DAT_140c658c0 + 0x28) = 4;
    FUN_1404351e0();
    if (DAT_140c65898 != 0) {
        FUN_1403fa280();
    }
    return 0;
}



longlong * FUN_140435940(longlong param_1,undefined4 param_2)

{
    short sVar1;
    undefined2 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    longlong *plVar7;
    undefined8 uVar8;
    short *psVar9;
    ulonglong uVar10;
    undefined2 *puVar11;
    ulonglong uVar12;
    double dVar13;
    undefined local_98 [8];
    undefined2 *local_90;
    undefined2 *local_88;
    undefined2 *local_80;
    undefined local_78 [8];
    undefined2 *local_70;
    undefined2 *local_68;
    undefined2 *local_60;
    undefined local_58 [8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;

    lVar4 = FUN_14018b280(0x58);
    plVar5 = (longlong *)0x0;
    if (lVar4 != 0) {
        plVar5 = (longlong *)FUN_1400b6390(lVar4);
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        while( true ) {
            puVar6 = (undefined8 *)FUN_1400580e0(param_1,param_2);
            iVar3 = FUN_14005ba70(param_1,*puVar6,*(longlong *)(param_1 + 0x10) + -0x10);
            if (iVar3 == 0) {
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                return plVar5;
            }
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            local_70 = (undefined2 *)0x0;
            local_68 = (undefined2 *)0x0;
            local_60 = (undefined2 *)0x0;
            local_70 = (undefined2 *)FUN_14018b280(0x10);
            local_60 = local_70 + 8;
            if (local_70 != (undefined2 *)0x0) {
                *local_70 = 0;
            }
            plVar7 = (longlong *)(*(longlong *)(param_1 + 0x10) + -0x20);
            local_68 = local_70;
            if ((plVar7 == &DAT_140a12138) ||
                (*(int *)(&DAT_ffffffffffffffe8 + *(longlong *)(param_1 + 0x10)) != 4)) break;
            FUN_14018f2d0(local_58,*plVar7 + 0x20);
            puVar2 = local_70;
            local_68 = local_48;
            local_60 = local_40;
            local_70 = local_50;
            if (puVar2 != (undefined2 *)0x0) {
                FUN_14018b900(puVar2,0);
            }
            puVar2 = local_70;
            iVar3 = FUN_14018e2c0(local_70,&DAT_140b01c30);
            if (iVar3 == 0) {
                uVar8 = FUN_140056bb0(param_1,0xffffffff,0);
                FUN_14018f2d0(local_58,uVar8);
                puVar2 = local_50;
                iVar3 = FUN_14018e2c0(local_50);
                if ((iVar3 == 0) || (iVar3 = FUN_14018e2c0(puVar2), iVar3 == 0)) {
                    (**(code **)(*plVar5 + 0x78))(plVar5);
                }
                joined_r0x000140435c28:
                if (puVar2 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar2);
                }
            }
            else {
                iVar3 = FUN_14018e2c0(puVar2,L"name");
                if (iVar3 == 0) {
                    uVar8 = FUN_140056bb0(param_1,0xffffffff,0);
                    FUN_14018f2d0(local_58,uVar8);
                    (**(code **)(*plVar5 + 0x58))(plVar5);
                    puVar2 = local_50;
                    goto joined_r0x000140435c28;
                }
                iVar3 = FUN_14018e2c0(puVar2,&DAT_140b01bf8);
                if (iVar3 == 0) {
                    uVar8 = FUN_140056bb0(param_1,0xffffffff,0);
                    FUN_14018f2d0(local_58,uVar8);
                    (**(code **)(*plVar5 + 0x48))(plVar5);
                    puVar2 = local_50;
                    goto joined_r0x000140435c28;
                }
                iVar3 = FUN_14018e2c0(puVar2);
                if (iVar3 != 0) {
                    local_90 = (undefined2 *)0x0;
                    local_88 = (undefined2 *)0x0;
                    local_80 = (undefined2 *)0x0;
                    local_90 = (undefined2 *)FUN_14018b280(0x10);
                    local_80 = local_90 + 8;
                    if (local_90 != (undefined2 *)0x0) {
                        *local_90 = 0;
                    }
                    if (*(undefined **)(param_1 + 0x10) == &DAT_140a12148) {
                        iVar3 = -1;
                    }
                    else {
                        iVar3 = *(int *)(*(undefined **)(param_1 + 0x10) + -8);
                    }
                    local_88 = local_90;
                    if (iVar3 == 3) {
                        FUN_1400584e0(param_1);
                        psVar9 = (short *)FUN_14034bdd0();
                        puVar2 = local_90;
                        if (psVar9 != (short *)0x0) {
                            sVar1 = *psVar9;
                            plVar7 = (longlong *)0x0;
                            while (sVar1 != 0) {
                                plVar7 = (longlong *)((longlong)plVar7 + 1);
                                sVar1 = psVar9[(longlong)plVar7];
                            }
                            uVar12 = (longlong)local_88 - (longlong)local_90 >> 1;
                            uVar10 = (longlong)(psVar9 + (longlong)plVar7) - (longlong)psVar9 >> 1;
                            if (uVar12 < uVar10) {
                                FUN_1407db590(local_90,psVar9,uVar12 * 2);
                                FUN_14001c310(local_98,psVar9 + ((longlong)local_88 - (longlong)local_90 >> 1),
                                              psVar9 + (longlong)plVar7);
                            }
                            else {
                                FUN_1407db590(local_90,psVar9,uVar10 * 2);
                                puVar2 = local_88;
                                puVar11 = local_90 + uVar10;
                                if (puVar11 != local_88) {
                                    FUN_1407db590(puVar11,local_88,2);
                                    local_88 = local_88 + -((longlong)puVar2 - (longlong)puVar11 >> 1);
                                }
                            }
                            goto LAB_140435d45;
                        }
                    }
                    else {
                        puVar2 = local_90;
                        if (iVar3 == 4) {
                            uVar8 = FUN_140056bb0(param_1,0xffffffff,0);
                            FUN_14018f2d0(local_58,uVar8);
                            puVar2 = local_90;
                            local_90 = local_50;
                            local_88 = local_48;
                            local_80 = local_40;
                            if (puVar2 != (undefined2 *)0x0) {
                                FUN_14018b900(puVar2,0);
                            }
                            LAB_140435d45:
                            (**(code **)(*plVar5 + 0x98))(plVar5,local_78,local_98);
                            puVar2 = local_90;
                        }
                    }
                    goto joined_r0x000140435c28;
                }
                dVar13 = (double)FUN_140056c40(param_1);
                (**(code **)(*plVar5 + 0x70))(dVar13,(float)dVar13,plVar5);
                (**(code **)(*plVar5 + 0x68))(plVar5);
            }
            if (local_70 == (undefined2 *)0x0) goto LAB_140435d7a;
            FUN_14018b900();
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
        if (local_70 != (undefined2 *)0x0) {
            FUN_14018b900(local_70);
        }
        LAB_140435d7a:
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140435dc0(longlong param_1)

{
    short sVar1;
    longlong lVar2;
    int iVar3;
    undefined2 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    longlong lVar7;
    short **ppsVar8;
    longlong lVar9;
    uint uVar10;
    undefined8 *puVar11;
    uint uVar12;
    longlong lVar13;
    short *psVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    float fVar17;
    short *local_res8;
    short *local_168;
    undefined4 local_160;
    undefined **local_158;
    undefined local_150 [8];
    undefined2 *local_148;
    undefined2 *local_140;
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    undefined local_98 [16];
    undefined2 *local_88;
    undefined local_78 [8];
    longlong local_70;
    undefined local_58 [8];
    short *local_50;

    FUN_1400b6f30(&local_158);
    lVar9 = 0;
    local_158 = &PTR_FUN_140b69230;
    local_98 = ZEXT816(0);
    local_88 = (undefined2 *)0x0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10);
    local_88 = puVar4 + 8;
    local_98 = CONCAT88(puVar4,puVar4);
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar7 = *(longlong *)(param_1 + 0x18);
    uVar5 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(local_58,uVar5);
    psVar14 = local_50;
    if (local_50 == (short *)0x0) {
        if (local_148 != local_140) {
            *local_148 = 0;
            local_140 = local_148;
        }
    }
    else {
        sVar1 = *local_50;
        lVar13 = lVar9;
        while (sVar1 != 0) {
            lVar13 = lVar13 + 1;
            sVar1 = local_50[lVar13];
        }
        FUN_14001c480(local_150,local_50,local_50 + lVar13);
    }
    uVar10 = 2;
    lVar13 = -1;
    uVar12 = (uint)(lVar2 - lVar7 >> 4);
    if (1 < uVar12) {
        puVar11 = &DAT_140a12138;
        do {
            puVar6 = (undefined8 *)FUN_1400580e0(param_1,uVar10);
            iVar3 = -1;
            if (puVar6 != puVar11) {
                iVar3 = *(int *)(puVar6 + 1);
            }
            if (iVar3 == 3) {
                ppsVar8 = (short **)FUN_1400580e0(param_1,uVar10);
                if (*(int *)(ppsVar8 + 1) == 3) {
                    LAB_140435fc2:
                    uVar15 = SUB84(*ppsVar8,0);
                    uVar16 = (undefined4)((ulonglong)*ppsVar8 >> 0x20);
                }
                else {
                    if ((*(int *)(ppsVar8 + 1) == 4) &&
                        (iVar3 = FUN_14005ac80(*ppsVar8 + 0x10,&local_res8), iVar3 != 0)) {
                        local_160 = 3;
                        ppsVar8 = &local_168;
                        local_168 = local_res8;
                        goto LAB_140435fc2;
                    }
                    uVar15 = 0;
                    uVar16 = 0;
                }
                fVar17 = (float)(double)CONCAT44(uVar16,uVar15);
                puVar11 = (undefined8 *)FUN_14018b280(0x58);
                if (puVar11 != (undefined8 *)0x0) {
                    FUN_1400b6390();
                    *puVar11 = &PTR_FUN_140b69300;
                    *(float *)((longlong)puVar11 + 0xc) = fVar17;
                    *(int *)(puVar11 + 1) = (int)fVar17;
                }
                LAB_140436000:
                FUN_1400b7480(&local_158);
                LAB_14043600a:
                puVar11 = &DAT_140a12138;
            }
            else {
                if (iVar3 == 4) {
                    uVar5 = FUN_140056bb0(param_1,uVar10,0);
                    FUN_14018f2d0(local_78,uVar5);
                    lVar7 = FUN_14018b280(0x60);
                    lVar2 = local_70;
                    if (lVar7 != 0) {
                        FUN_1404ddb40(lVar7,local_70);
                    }
                    FUN_1400b7480(&local_158);
                    if (lVar2 != 0) {
                        FUN_14018b900(lVar2);
                    }
                    goto LAB_14043600a;
                }
                if (iVar3 == 5) {
                    FUN_140435940(param_1,uVar10);
                    goto LAB_140436000;
                }
            }
            uVar10 = uVar10 + 1;
            psVar14 = local_50;
        } while (uVar10 <= uVar12);
    }
    if ((local_f8 == local_f0) && (DAT_140c63648 != (undefined8 *)0x0)) {
        local_res8 = (short *)0x0;
        (**(code **)*DAT_140c63648)(DAT_140c63648,local_148,&local_158,&local_res8);
        if (local_res8 == (short *)0x0) {
            if (local_f8 == local_f0) goto LAB_1404360d3;
            *local_f8 = 0;
            local_f0 = local_f8;
        }
        else {
            sVar1 = *local_res8;
            while (sVar1 != 0) {
                lVar9 = lVar9 + 1;
                sVar1 = local_res8[lVar9];
            }
            FUN_14001c480(local_100,local_res8,local_res8 + lVar9);
        }
        if (local_res8 != (short *)0x0) {
            (**(code **)(*(longlong *)(local_res8 + -8) + 8))(local_res8 + -8,local_f8);
        }
    }
    LAB_1404360d3:
    FUN_14018f0e0(local_78,local_f8);
    if (local_70 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar13 = lVar13 + 1;
        } while (*(char *)(local_70 + lVar13) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_140062650(param_1,local_70,lVar13);
        *(undefined4 *)(puVar11 + 1) = 4;
        *puVar11 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_14018b900(local_70,0);
    }
    if (psVar14 != (short *)0x0) {
        FUN_14018b900(psVar14,0);
    }
    if (local_98._0_8_ != 0) {
        FUN_14018b900(local_98._0_8_,0);
    }
    FUN_1400b7390(&local_158);
    return 1;
}



undefined8 FUN_1404361b0(void)

{
    *(undefined4 *)(DAT_140c658c0 + 0x28) = 4;
    FUN_1404351e0();
    return 0;
}



void FUN_140436230(longlong *param_1,undefined8 param_2)

{
    code **ppcVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;

    ppcVar1 = (code **)*param_1;
    uVar2 = (*ppcVar1[3])();
    uVar3 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = (*ppcVar1[2])();
    (**ppcVar1)(param_1,0x23,0x1f8,0,uVar4,uVar3,uVar2,0,0,0,0,0,0,0,0,param_2,0,0,0,0,0,0);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140436310(int *param_1,int param_2)

{
    uint uVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    undefined8 uVar6;
    undefined4 *puVar7;
    uint *puVar8;
    longlong lVar9;
    undefined4 *puVar10;
    uint uVar11;
    undefined4 *puVar12;
    undefined8 local_res8;
    ulonglong in_stack_ffffffffffffff88;
    undefined **local_68;
    undefined8 local_60;
    LPVOID local_58;
    undefined **local_48;
    undefined8 local_40;
    LPVOID local_38;
    undefined4 local_30;
    undefined4 local_2c;

    if (param_2 == 0) {
        iVar4 = 1;
    }
    else if (param_2 == 1) {
        iVar4 = 2;
    }
    else {
        iVar4 = 3;
    }
    *param_1 = iVar4;
    if ((param_2 == 0) || (iVar3 = 0x13, param_2 == 1)) {
        iVar3 = 0xb;
    }
    puVar10 = (undefined4 *)0x0;
    param_1[2] = iVar3;
    if (iVar4 == 3) {
        local_60 = 0;
        local_68 = &PTR_LAB_140b5e648;
        local_58 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_68);
        local_48 = local_68;
        local_res8 = 0x141dfc400;
        local_40 = local_60;
        local_38 = local_58;
        iVar4 = FUN_1401971e0(&DAT_140c8ac50,0x7a,&local_res8,param_2,&local_48);
        local_68 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_58);
        if (iVar4 != 0) {
            DebugBreak();
        }
        uVar6 = 0x80004005;
    }
    else {
        uVar5 = 0;
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c653fc == 0) && (iVar4 = FUN_14022f4a0(), -1 < iVar4)) {
                uVar5 = (**(code **)(*DAT_140c65228 + 0x28))();
            }
        }
        else {
            uVar5 = (*DAT_140c63838)(&PTR_u_RewardPropertyPremiumModifier_140a6caf8,DAT_140c63858);
        }
        puVar12 = puVar10;
        if (uVar5 != 0) {
            do {
                if (DAT_140c63848 == (code *)0x0) {
                    puVar7 = puVar10;
                    if (_DAT_140c653fc == 0) {
                        iVar4 = FUN_14022f4a0();
                        if (iVar4 < 0) {
                            puVar7 = (undefined4 *)0x0;
                        }
                        else {
                            puVar7 = (undefined4 *)(**(code **)(*DAT_140c65228 + 0x20))(DAT_140c65228,puVar12);
                        }
                    }
                }
                else {
                    puVar7 = (undefined4 *)
                            (*DAT_140c63848)(&PTR_u_RewardPropertyPremiumModifier_140a6caf8,puVar12,
                                             DAT_140c63858);
                }
                if (puVar7[1] == *param_1) {
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c651a0 != 0) || (iVar4 = FUN_14022f060(), iVar4 < 0)) goto LAB_140436687;
                        puVar8 = (uint *)(**(code **)(*DAT_140c651a8 + 0x18))();
                    }
                    else {
                        puVar8 = (uint *)(*DAT_140c63840)(&PTR_u_RewardProperty_140a6cac0,puVar7[3],
                                                          DAT_140c63858);
                    }
                    if (puVar8 != (uint *)0x0) {
                        uVar11 = puVar8[2];
                        uVar1 = puVar7[2];
                        if ((uint)param_1[1] <= uVar1 && uVar1 != param_1[1]) {
                            param_1[1] = uVar1;
                        }
                        if (puVar7[7] == 0) {
                            local_2c = 0;
                            local_48 = *(undefined ***)(puVar7 + 3);
                            local_40 = CONCAT44(*puVar7,6);
                            local_30 = puVar7[8];
                            if (uVar11 == 0) {
                                local_38._0_4_ = 0;
                                LAB_140436666:
                                local_38 = (LPVOID)CONCAT44(puVar7[6],local_38._0_4_);
                            }
                            else if (uVar11 == 1) {
                                local_38 = (LPVOID)CONCAT44(puVar7[5],1);
                            }
                            else if (uVar11 == 2) {
                                local_38._0_4_ = 2;
                                goto LAB_140436666;
                            }
                            LAB_140436670:
                            uVar6 = FUN_140436ed0(param_1,puVar7[2]);
                            FUN_140436ca0(uVar6);
                        }
                        else if (uVar11 == 1) {
                            lVar9 = FUN_1401fe020();
                            if (lVar9 != 0) {
                                local_2c = puVar7[7];
                                local_48 = *(undefined ***)(puVar7 + 3);
                                local_30 = puVar7[8];
                                local_40 = CONCAT44(local_2c,5);
                                local_38 = (LPVOID)0x1;
                                uVar6 = FUN_140436ed0(param_1,puVar7[2]);
                                FUN_140436ca0(uVar6,&local_48);
                                local_2c = puVar7[7];
                                local_48 = *(undefined ***)(puVar7 + 3);
                                local_30 = puVar7[8];
                                local_40 = CONCAT44(local_2c,7);
                                local_38 = (LPVOID)0x1;
                                goto LAB_140436670;
                            }
                            local_res8 = 0x141dfc5d0;
                            in_stack_ffffffffffffff88 =
                                    in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong)puVar8[2];
                            FUN_1401a3130(0x7a,0,&local_res8,*puVar7,in_stack_ffffffffffffff88);
                        }
                        else {
                            local_res8 = 0x141dfc670;
                            in_stack_ffffffffffffff88 =
                                    in_stack_ffffffffffffff88 & 0xffffffff00000000 | (ulonglong)*puVar8;
                            FUN_1401a3130(0x7a,0,&local_res8,*puVar7,in_stack_ffffffffffffff88,puVar8[2]);
                        }
                    }
                }
                LAB_140436687:
                uVar11 = (int)puVar12 + 1;
                puVar12 = (undefined4 *)(ulonglong)uVar11;
            } while (uVar11 < uVar5);
        }
        if (*(longlong *)(param_1 + 6) != 0) {
            do {
                lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)puVar10 * 8);
                while (lVar9 != 0) {
                    lVar2 = *(longlong *)(lVar9 + 8);
                    iVar4 = FUN_140436700(lVar9 + 0x10,lVar9 + 0x18,param_1);
                    lVar9 = lVar2;
                    if (iVar4 == 0) goto LAB_1404366e9;
                }
                puVar10 = (undefined4 *)((longlong)puVar10 + 1);
            } while (puVar10 < *(undefined4 **)(param_1 + 6));
        }
        LAB_1404366e9:
        uVar6 = 0;
    }
    return uVar6;
}



undefined8 FUN_140436700(uint *param_1,longlong *param_2,longlong param_3)

{
    uint uVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = 0;
    uVar3 = uVar2;
    if (param_2[1] != 0) {
        do {
            if ((*(byte *)(*param_2 + uVar3 + 0x18) & 1) != 0) {
                if ((*param_1 < *(uint *)(param_3 + 4)) &&
                    (uVar1 = *param_1 + 1, uVar1 <= *(uint *)(param_3 + 4))) {
                    do {
                        FUN_140436ed0(param_3,uVar1);
                        FUN_140436ca0();
                        uVar1 = uVar1 + 1;
                    } while (uVar1 < *(uint *)(param_3 + 4) || uVar1 == *(uint *)(param_3 + 4));
                }
            }
            uVar2 = uVar2 + 1;
            uVar3 = uVar3 + 0x20;
        } while (uVar2 < (ulonglong)param_2[1]);
    }
    return 1;
}



undefined8 FUN_1404367e0(void)

{
    int iVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    puVar3 = (undefined8 *)0x0;
    if (DAT_140c658d0 == (longlong *)0x0) {
        DAT_140c658d0 = (longlong *)FUN_14018b280(0x10,0);
        if (DAT_140c658d0 == (longlong *)0x0) {
            DAT_140c658d0 = (longlong *)0x0;
        }
        else {
            *(undefined *)(DAT_140c658d0 + 1) = 0xff;
            *DAT_140c658d0 = (longlong)&PTR_FUN_140b66f48;
        }
    }
    if (DAT_140c658c8 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)FUN_14018b280(0x88,0);
        if (puVar2 != (undefined8 *)0x0) {
            *puVar2 = 0;
            *(undefined4 *)(puVar2 + 1) = 0x13;
            FUN_1400522f0(puVar2 + 2);
            FUN_1400522f0(puVar2 + 7);
            FUN_1400522f0(puVar2 + 0xc);
            puVar3 = puVar2;
        }
        DAT_140c658c8 = puVar3;
        iVar1 = FUN_140436310(puVar3,*(undefined4 *)(DAT_140c635f0 + 0x1708));
        if (iVar1 < 0) {
            if (DAT_140c658d0 != (longlong *)0x0) {
                (**(code **)(*DAT_140c658d0 + 0x20))(DAT_140c658d0,1);
            }
            DAT_140c658d0 = (longlong *)0x0;
            if (DAT_140c658c8 != (undefined8 *)0x0) {
                FUN_1404368f0();
            }
            DAT_140c658c8 = (undefined8 *)0x0;
            return 0x80004005;
        }
        FUN_140436ad0(puVar3 + 2,FUN_140436970,0);
    }
    return 0;
}



longlong FUN_1404368f0(longlong param_1)

{
    FUN_140436b60(param_1 + 0x60);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x70),0);
    *(undefined8 *)(param_1 + 0x70) = 0;
    FUN_140436b60(param_1 + 0x38);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    *(undefined8 *)(param_1 + 0x48) = 0;
    FUN_140436e20(param_1 + 0x10);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x20),0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



undefined8 FUN_140436970(undefined4 *param_1,undefined8 param_2)

{
    undefined8 uVar1;

    uVar1 = FUN_140436d70(DAT_140c658c8,*param_1);
    FUN_1403aaba0(uVar1,param_2,1);
    uVar1 = FUN_140020690(DAT_140c658c8,*param_1);
    FUN_1403aaba0(uVar1,param_2,0);
    return 1;
}



undefined8 FUN_1404369d0(longlong param_1)

{
    char cVar1;
    int iVar2;
    longlong lVar3;

    cVar1 = *(char *)(*(longlong *)(DAT_140c635f0 + 0x15d0) + 0x208);
    if (cVar1 != *(char *)(param_1 + 8)) {
        *(char *)(param_1 + 8) = cVar1;
        lVar3 = DAT_140c65898;
        if (DAT_140c65898 != 0) {
            if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
                *(char *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x1b2) = cVar1;
            }
            FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x7340),"PremiumTierChanged",&DAT_1409efb1c,
                          *DAT_140c658c8,*(undefined *)(param_1 + 8));
            lVar3 = *(longlong *)(DAT_140c65898 + 0x7fe0);
            if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x18) != 0)) {
                iVar2 = FUN_1400480b0();
                if (iVar2 != 0) {
                    FUN_1400ea3e0(*(undefined8 *)(lVar3 + 0x60),"PremiumTierChanged",&DAT_1409efd3c,
                                  *DAT_140c658c8,*(undefined *)(param_1 + 8));
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_140436ad0(longlong param_1,code *param_2,undefined8 param_3)

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
                iVar3 = (*param_2)(lVar2 + 0x10,lVar2 + 0x18,param_3);
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



void FUN_140436b60(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (param_1[1] == 0) {
        *param_1 = 0;
        return;
    }
    do {
        plVar1 = (longlong *)(param_1[2] + uVar6 * 8);
        lVar2 = *(longlong *)(param_1[2] + uVar6 * 8);
        while (lVar2 != 0) {
            lVar2 = *plVar1;
            *plVar1 = *(longlong *)(lVar2 + 8);
            if (*(longlong *)(lVar2 + 0x28) != 0) {
                lVar5 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 8);
                while (lVar5 != 0) {
                    FUN_1400294c0(lVar2 + 0x18,*(undefined8 *)(lVar5 + 0x18));
                    lVar3 = *(longlong *)(lVar5 + 0x38);
                    lVar4 = *(longlong *)(lVar5 + 0x10);
                    if (lVar3 != 0) {
                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    FUN_14018b900(lVar5,0);
                    lVar5 = lVar4;
                }
                *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x10) = *(longlong *)(lVar2 + 0x20);
                *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 8) = 0;
                *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x18) = *(longlong *)(lVar2 + 0x20);
                *(undefined8 *)(lVar2 + 0x28) = 0;
            }
            FUN_14018b900(*(undefined8 *)(lVar2 + 0x20),0);
            FUN_14018b900(lVar2);
            lVar2 = *plVar1;
        }
        uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_1[1]);
    *param_1 = 0;
    return;
}



longlong FUN_140436ca0(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 *puVar4;

    lVar1 = param_1[1];
    lVar3 = FUN_14018db00(*param_1,lVar1 + 1,0x20);
    puVar4 = (undefined4 *)(lVar1 * 0x20 + lVar3);
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    puVar4[2] = param_2[2];
    puVar4[3] = param_2[3];
    puVar4[4] = param_2[4];
    puVar4[5] = param_2[5];
    puVar4[6] = param_2[6];
    puVar4[7] = param_2[7];
    if (*param_1 != lVar3) {
        FUN_1407db590(lVar3,*param_1,param_1[1] << 5);
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



void FUN_140436d70(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x50))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x48) + (uVar3 % *(ulonglong *)(param_1 + 0x40)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_140436dce:
            FUN_140029000(param_1 + 0x38,local_res10);
            return;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 0x58))(local_res10,puVar1 + 2), iVar2 != 0)) {
            if (puVar1 != (ulonglong *)&DAT_ffffffffffffffe8) {
                return;
            }
            goto LAB_140436dce;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 * FUN_140436df0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b66f20;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140436e20(undefined8 *param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (param_1[1] != 0) {
        do {
            plVar1 = (longlong *)(param_1[2] + uVar4 * 8);
            lVar3 = *(longlong *)(param_1[2] + uVar4 * 8);
            while (lVar3 != 0) {
                lVar3 = *plVar1;
                *plVar1 = *(longlong *)(lVar3 + 8);
                lVar2 = *(longlong *)(lVar3 + 0x18);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                FUN_14018b900(lVar3,0);
                lVar3 = *plVar1;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < (ulonglong)param_1[1]);
        *param_1 = 0;
        return;
    }
    *param_1 = 0;
    return;
}



ulonglong * FUN_140436ed0(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    ulonglong *puVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong *puVar6;
    undefined4 local_res10 [2];

    plVar1 = (longlong *)(param_1 + 0x10);
    local_res10[0] = param_2;
    uVar5 = (**(code **)(param_1 + 0x28))(local_res10);
    puVar6 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x20) + (uVar5 % *(ulonglong *)(param_1 + 0x18)) * 8);
    do {
        if (puVar6 == (ulonglong *)0x0) {
            LAB_140436f2e:
            if (*plVar1 == *(longlong *)(param_1 + 0x18)) {
                FUN_1400290d0(plVar1);
            }
            uVar5 = (**(code **)(param_1 + 0x28))(local_res10);
            ppuVar2 = (ulonglong **)
                    (*(longlong *)(param_1 + 0x20) + (uVar5 % *(ulonglong *)(param_1 + 0x18)) * 8);
            puVar6 = (ulonglong *)FUN_14018b280(0x28);
            if (puVar6 != (ulonglong *)0x0) {
                puVar3 = *ppuVar2;
                *puVar6 = uVar5;
                puVar6[1] = (ulonglong)puVar3;
                *(undefined4 *)(puVar6 + 2) = local_res10[0];
                puVar6[4] = 0;
                puVar6[3] = 0;
            }
            *ppuVar2 = puVar6;
            *plVar1 = *plVar1 + 1;
            return *ppuVar2 + 3;
        }
        if ((uVar5 == *puVar6) && (iVar4 = (**(code **)(param_1 + 0x30))(local_res10), iVar4 != 0)) {
            if (puVar6 + 3 != (ulonglong *)0x0) {
                return puVar6 + 3;
            }
            goto LAB_140436f2e;
        }
        puVar6 = (ulonglong *)puVar6[1];
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140436fb0(longlong param_1)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    longlong lVar4;
    uint uVar5;
    int iVar6;
    undefined4 uVar7;
    undefined *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    uint *puVar11;
    ulonglong *puVar12;
    longlong lVar13;
    uint **ppuVar14;
    longlong *plVar15;
    uint uVar16;
    uint uVar17;
    undefined auStack152 [32];
    undefined8 local_78;
    ulonglong local_70;
    uint local_68 [2];
    uint **local_60;
    undefined local_58 [16];
    ulonglong local_48 [2];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack152;
    puVar8 = (undefined *)FUN_14018b280(0x30);
    uVar17 = 0;
    *(undefined **)(param_1 + 8) = puVar8;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *puVar8 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
    puVar8 = (undefined *)FUN_14018b280(0x28);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined **)(param_1 + 0x28) = puVar8;
    *puVar8 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(longlong *)(param_1 + 0x28);
    *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(longlong *)(param_1 + 0x28);
    puVar8 = (undefined *)FUN_14018b280(0x30);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined **)(param_1 + 0x48) = puVar8;
    *puVar8 = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
    uVar16 = DAT_140dc28a8;
    *(undefined8 *)(param_1 + 0x60) = 0;
    uVar5 = 0;
    if ((uVar16 & 1) == 0) {
        DAT_140dc28a8 = uVar16 | 1;
        _DAT_140dc28b4 = 0;
    }
    if (DAT_140c63838 == (code *)0x0) {
        if ((_DAT_140c64214 == 0) && (iVar6 = FUN_140247320(), -1 < iVar6)) {
            uVar5 = (**(code **)(*DAT_140c64130 + 0x28))();
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_TutorialPage_140a6dea8);
    }
    if (uVar5 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64214 == 0) && (iVar6 = FUN_140247320(), -1 < iVar6)) {
                    uVar9 = (**(code **)(*DAT_140c64130 + 0x20))();
                    goto LAB_14043712b;
                }
            }
            else {
                uVar9 = (*DAT_140c63848)(&PTR_u_TutorialPage_140a6dea8,uVar17,DAT_140c63858);
                LAB_14043712b:
                if (uVar9 != 0) {
                    if (_DAT_140dc28b4 == 0) {
                        _DAT_140dc28b4 = 1;
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c638ac == 0) && (iVar6 = FUN_1401fffc0(), -1 < iVar6)) {
                                lVar10 = (**(code **)(*DAT_140c64c58 + 0x18))();
                                goto LAB_140437191;
                            }
                        }
                        else {
                            lVar10 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x538,DAT_140c63858);
                            LAB_140437191:
                            if (lVar10 != 0) {
                                DAT_140dc28b0 = *(uint *)(lVar10 + 4);
                                goto LAB_1404371bf;
                            }
                        }
                        DAT_140dc28b0 = 0;
                    }
                    LAB_1404371bf:
                    uVar16 = *(uint *)(uVar9 + 4);
                    if (uVar16 != DAT_140dc28b0) {
                        if (DAT_140c63840 == (code *)0x0) {
                            if ((_DAT_140c63a30 != 0) || (iVar6 = FUN_140246660(), iVar6 < 0)) goto LAB_1404372e9;
                            puVar11 = (uint *)(**(code **)(*DAT_140c65608 + 0x18))();
                        }
                        else {
                            puVar11 = (uint *)(*DAT_140c63840)(&PTR_u_Tutorial_140a6de00,uVar16,DAT_140c63858);
                        }
                        if ((puVar11 != (uint *)0x0) &&
                            (lVar10 = FUN_140247140(*(undefined4 *)(uVar9 + 0xc)), lVar10 != 0)) {
                            uVar1 = *(ulonglong *)(param_1 + 8);
                            uVar3 = uVar1;
                            uVar2 = *(ulonglong *)(uVar1 + 8);
                            while (uVar2 != 0) {
                                if (*(uint *)(uVar2 + 0x20) < uVar16) {
                                    uVar2 = *(ulonglong *)(uVar2 + 0x18);
                                }
                                else {
                                    uVar3 = uVar2;
                                    uVar2 = *(ulonglong *)(uVar2 + 0x10);
                                }
                            }
                            if ((uVar3 == uVar1) || (uVar16 < *(uint *)(uVar3 + 0x20))) {
                                local_70 = uVar1;
                                puVar12 = &local_70;
                            }
                            else {
                                local_78 = uVar3;
                                puVar12 = &local_78;
                            }
                            if (*puVar12 == uVar1) {
                                ppuVar14 = (uint **)FUN_14018b280(0x28);
                                if (ppuVar14 == (uint **)0x0) {
                                    ppuVar14 = (uint **)0x0;
                                }
                                else {
                                    *ppuVar14 = puVar11;
                                    ppuVar14[2] = (uint *)0x0;
                                    ppuVar14[3] = (uint *)0x0;
                                    ppuVar14[4] = (uint *)0x0;
                                }
                                local_68[0] = uVar16;
                                local_60 = ppuVar14;
                                FUN_140055f80(param_1,local_58,local_68);
                            }
                            else {
                                ppuVar14 = *(uint ***)(*puVar12 + 0x28);
                            }
                            puVar12 = (ulonglong *)ppuVar14[3];
                            local_48[0] = uVar9;
                            if (puVar12 == (ulonglong *)ppuVar14[4]) {
                                FUN_1400b9430(ppuVar14 + 1,puVar12,local_48);
                            }
                            else {
                                if (puVar12 != (ulonglong *)0x0) {
                                    *puVar12 = uVar9;
                                }
                                ppuVar14[3] = ppuVar14[3] + 2;
                            }
                        }
                    }
                }
            }
            LAB_1404372e9:
            uVar17 = uVar17 + 1;
        } while (uVar17 < uVar5);
    }
    uVar16 = 0;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar10 != *(longlong *)(param_1 + 8)) {
        do {
            FUN_14043a320(*(undefined8 *)(*(longlong *)(lVar10 + 0x28) + 0x10));
            lVar13 = *(longlong *)(lVar10 + 0x18);
            if (lVar13 == 0) {
                lVar13 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar13 + 0x18)) {
                    do {
                        lVar10 = lVar13;
                        lVar13 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar13 + 0x18));
                }
                if (*(longlong *)(lVar10 + 0x18) != lVar13) {
                    lVar10 = lVar13;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar13 + 0x10); lVar10 = lVar13, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar13 = lVar4;
                }
            }
        } while (lVar10 != *(longlong *)(param_1 + 8));
    }
    if (DAT_140c63838 == (code *)0x0) {
        uVar5 = 0;
        if ((_DAT_140c63a30 == 0) && (iVar6 = FUN_140246660(), -1 < iVar6)) {
            uVar5 = (**(code **)(*DAT_140c65608 + 0x28))();
        }
    }
    else {
        uVar5 = (*DAT_140c63838)(&PTR_u_Tutorial_140a6de00);
    }
    if (uVar5 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c63a30 == 0) && (iVar6 = FUN_140246660(), -1 < iVar6)) {
                    puVar11 = (uint *)(**(code **)(*DAT_140c65608 + 0x20))();
                    goto LAB_14043741c;
                }
            }
            else {
                puVar11 = (uint *)(*DAT_140c63848)(&PTR_u_Tutorial_140a6de00,uVar16,DAT_140c63858);
                LAB_14043741c:
                if ((puVar11 != (uint *)0x0) && ((*(byte *)(puVar11 + 1) & 4) != 0)) {
                    uVar9 = *(ulonglong *)(param_1 + 8);
                    uVar17 = *puVar11;
                    uVar2 = uVar9;
                    uVar1 = *(ulonglong *)(uVar9 + 8);
                    while (uVar1 != 0) {
                        if (*(uint *)(uVar1 + 0x20) < uVar17) {
                            uVar1 = *(ulonglong *)(uVar1 + 0x18);
                        }
                        else {
                            uVar2 = uVar1;
                            uVar1 = *(ulonglong *)(uVar1 + 0x10);
                        }
                    }
                    if ((uVar2 == uVar9) || (uVar17 < *(uint *)(uVar2 + 0x20))) {
                        local_70 = uVar9;
                        puVar12 = &local_70;
                    }
                    else {
                        local_48[0] = uVar2;
                        puVar12 = local_48;
                    }
                    if (*puVar12 == uVar9) {
                        ppuVar14 = (uint **)FUN_14018b280();
                        if (ppuVar14 == (uint **)0x0) {
                            ppuVar14 = (uint **)0x0;
                        }
                        else {
                            *ppuVar14 = puVar11;
                            ppuVar14[2] = (uint *)0x0;
                            ppuVar14[3] = (uint *)0x0;
                            ppuVar14[4] = (uint *)0x0;
                        }
                        if (((*ppuVar14)[4] - 1 < 0x48) && ((*ppuVar14)[4] != 0x12)) {
                            plVar15 = (longlong *)FUN_140439fc0(ppuVar14);
                            lVar10 = *plVar15;
                            if (local_78 != 0) {
                                (**(code **)(*(longlong *)(local_78 - 0x10) + 8))(local_78 - 0x10);
                            }
                            if (lVar10 == 0) {
                                if (ppuVar14[2] != (uint *)0x0) {
                                    FUN_14018b900();
                                }
                                FUN_14018b900(ppuVar14);
                            }
                            else {
                                local_68[0] = uVar17;
                                local_60 = ppuVar14;
                                FUN_140055f80(param_1,local_58,local_68);
                            }
                        }
                        else {
                            if (ppuVar14[2] != (uint *)0x0) {
                                FUN_14018b900();
                            }
                            FUN_14018b900(ppuVar14);
                        }
                    }
                }
            }
            uVar16 = uVar16 + 1;
        } while (uVar16 < uVar5);
    }
    FUN_140438480(param_1);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
        *(undefined8 *)(param_1 + 0x60) = 0;
    }
    iVar6 = FUN_1407129a0(param_1 + 0x60);
    if (-1 < iVar6) {
        lVar10 = *(longlong *)(param_1 + 0x60);
        if (*(longlong **)(lVar10 + 0x30) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar10 + 0x30) + 8))();
            *(undefined8 *)(lVar10 + 0x30) = 0;
        }
        lVar13 = DAT_140c63628;
        local_78 = CONCAT44(local_78._4_4_,0xa8);
        uVar9 = (**(code **)(DAT_140c63628 + 0x298))(&local_78);
        for (puVar12 = *(ulonglong **)
                (*(longlong *)(lVar13 + 0x290) + (uVar9 % *(ulonglong *)(lVar13 + 0x288)) * 8);
             puVar12 != (ulonglong *)0x0; puVar12 = (ulonglong *)puVar12[1]) {
            if ((uVar9 == *puVar12) &&
                (iVar6 = (**(code **)(lVar13 + 0x2a0))(&local_78,puVar12 + 2), iVar6 != 0)) {
                if ((undefined4 *)((longlong)puVar12 + 0x14) != (undefined4 *)0x0) {
                    uVar7 = *(undefined4 *)((longlong)puVar12 + 0x14);
                    local_48[0] = local_48[0] & 0xffffffff | (ulonglong)*(uint *)(puVar12 + 3) << 0x20;
                    if (1 < *(uint *)((longlong)puVar12 + 0x1c)) {
                        uVar7 = 0;
                    }
                    goto LAB_1404375c5;
                }
                break;
            }
        }
        uVar7 = 0;
        LAB_1404375c5:
        (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,lVar10 + 0x30,uVar7);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack152);
    return;
}



void FUN_140437660(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 8)) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 0x10) != 0) {
                    FUN_14018b900(*(longlong *)(lVar3 + 0x10),0);
                }
                FUN_14018b900(lVar3,0);
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
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x48)) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 0x10) != 0) {
                    lVar2 = *(longlong *)(*(longlong *)(lVar3 + 8) + 8);
                    while (lVar2 != 0) {
                        FUN_1400083b0(lVar3,*(undefined8 *)(lVar2 + 0x18));
                        lVar1 = *(longlong *)(lVar2 + 0x10);
                        FUN_14018b900(lVar2,0);
                        lVar2 = lVar1;
                    }
                    *(longlong *)(*(longlong *)(lVar3 + 8) + 0x10) = *(longlong *)(lVar3 + 8);
                    *(undefined8 *)(*(longlong *)(lVar3 + 8) + 8) = 0;
                    *(longlong *)(*(longlong *)(lVar3 + 8) + 0x18) = *(longlong *)(lVar3 + 8);
                    *(undefined8 *)(lVar3 + 0x10) = 0;
                }
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
        } while (lVar4 != *(longlong *)(param_1 + 0x48));
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x40,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x60) + 8))();
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x40,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x10) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = *(longlong *)(param_1 + 0x48);
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x48),0);
    if (*(longlong *)(param_1 + 0x30) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1 + 0x20,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10) = *(longlong *)(param_1 + 0x28);
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x18) = *(longlong *)(param_1 + 0x28);
        *(undefined8 *)(param_1 + 0x30) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 0x28),0);
    if (*(longlong *)(param_1 + 0x10) != 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 8);
        while (lVar4 != 0) {
            FUN_1400083b0(param_1,*(undefined8 *)(lVar4 + 0x18));
            lVar3 = *(longlong *)(lVar4 + 0x10);
            FUN_14018b900(lVar4,0);
            lVar4 = lVar3;
        }
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(*(longlong *)(param_1 + 8) + 8) = 0;
        *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) = *(longlong *)(param_1 + 8);
        *(undefined8 *)(param_1 + 0x10) = 0;
    }
    FUN_14018b900(*(undefined8 *)(param_1 + 8),0);
    return;
}



undefined8 FUN_140437990(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 != 0) {
        lVar2 = *(longlong *)(DAT_140c658d8 + 0x48);
        local_res8 = lVar2;
        if (*(longlong *)(lVar2 + 8) != 0) {
            lVar3 = *(longlong *)(lVar2 + 8);
            do {
                if (*(ulonglong *)(lVar3 + 0x20) < *(ulonglong *)(lVar1 + 0x1a8)) {
                    lVar4 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    lVar4 = *(longlong *)(lVar3 + 0x10);
                    local_res8 = lVar3;
                }
                lVar3 = lVar4;
            } while (lVar4 != 0);
        }
        if ((local_res8 == lVar2) || (*(ulonglong *)(lVar1 + 0x1a8) < *(ulonglong *)(local_res8 + 0x20))
                ) {
            local_res8 = lVar2;
        }
        if (local_res8 != lVar2) {
            return *(undefined8 *)(local_res8 + 0x28);
        }
    }
    return 0;
}



undefined8
FUN_140437a10(longlong param_1,uint param_2,int param_3,undefined8 param_4,undefined4 param_5,
              undefined4 param_6,undefined4 param_7)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined8 *puVar11;
    uint local_res10 [2];
    int local_res18;
    undefined8 local_res20;
    ulonglong in_stack_ffffffffffffff78;
    longlong local_58;
    undefined8 local_50;
    undefined local_48 [16];

    if (DAT_140c65898 == 0) {
        return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x28);
    local_58 = lVar3;
    lVar9 = *(longlong *)(lVar3 + 8);
    while (lVar9 != 0) {
        if (*(uint *)(lVar9 + 0x20) < param_2) {
            lVar9 = *(longlong *)(lVar9 + 0x18);
        }
        else {
            local_58 = lVar9;
            lVar9 = *(longlong *)(lVar9 + 0x10);
        }
    }
    if ((local_58 == lVar3) || (param_2 < *(uint *)(local_58 + 0x20))) {
        local_58 = lVar3;
    }
    if (local_58 == lVar3) {
        lVar3 = *(longlong *)(DAT_140c65898 + 0x78);
        if (lVar3 == 0) {
            return 0;
        }
        lVar9 = *(longlong *)(param_1 + 0x48);
        local_58 = lVar9;
        if (*(longlong *)(lVar9 + 8) != 0) {
            lVar6 = *(longlong *)(lVar9 + 8);
            do {
                if (*(ulonglong *)(lVar6 + 0x20) < *(ulonglong *)(lVar3 + 0x1a8)) {
                    lVar7 = *(longlong *)(lVar6 + 0x18);
                }
                else {
                    lVar7 = *(longlong *)(lVar6 + 0x10);
                    local_58 = lVar6;
                }
                lVar6 = lVar7;
            } while (lVar7 != 0);
        }
        if ((local_58 == lVar9) || (*(ulonglong *)(lVar3 + 0x1a8) < *(ulonglong *)(local_58 + 0x20))) {
            local_58 = lVar9;
        }
        lVar6 = local_58;
        if (local_58 != lVar9) {
            lVar9 = *(longlong *)(*(longlong *)(local_58 + 0x28) + 8);
            local_58 = lVar9;
            lVar7 = *(longlong *)(lVar9 + 8);
            while (lVar7 != 0) {
                if (*(uint *)(lVar7 + 0x20) < param_2) {
                    lVar7 = *(longlong *)(lVar7 + 0x18);
                }
                else {
                    local_58 = lVar7;
                    lVar7 = *(longlong *)(lVar7 + 0x10);
                }
            }
            if ((local_58 == lVar9) || (param_2 < *(uint *)(local_58 + 0x20))) {
                local_58 = lVar9;
            }
            if (local_58 != lVar9) {
                return 0;
            }
        }
        lVar9 = *(longlong *)(param_1 + 8);
        local_58 = lVar9;
        lVar7 = *(longlong *)(lVar9 + 8);
        while (lVar7 != 0) {
            if (*(uint *)(lVar7 + 0x20) < param_2) {
                lVar7 = *(longlong *)(lVar7 + 0x18);
            }
            else {
                local_58 = lVar7;
                lVar7 = *(longlong *)(lVar7 + 0x10);
            }
        }
        if ((local_58 == lVar9) || (param_2 < *(uint *)(local_58 + 0x20))) {
            local_58 = lVar9;
        }
        if (local_58 != lVar9) {
            plVar4 = *(longlong **)(local_58 + 0x28);
            lVar9 = *plVar4;
            if ((*(byte *)(lVar9 + 4) & 2) == 0) {
                iVar5 = DAT_140c3b390;
                if (*DAT_140c63750 < DAT_140c3b390) {
                    iVar5 = *DAT_140c63750;
                }
                if ((*(uint *)(&DAT_140c3b3a0 + (longlong)iVar5 * 4) >> (*(uint *)(lVar9 + 8) & 0x1f) & 1)
                    == 0) {
                    return 0;
                }
            }
            if (*(uint *)(lVar3 + 0x38) < *(uint *)(lVar9 + 0x14)) {
                return 0;
            }
            uVar10 = 0;
            local_res10[0] = param_2;
            local_res18 = param_3;
            local_res20 = param_4;
            if (*(int *)(lVar9 + 0x18) != 0) {
                in_stack_ffffffffffffff78 = 0;
                uVar8 = (**(code **)(*DAT_140c659a0 + 0x18))
                        (DAT_140c659a0,lVar3,*(undefined4 *)(lVar9 + 0x18),0,0,0);
                if ((int)uVar8 == 0) {
                    return uVar8;
                }
            }
            if ((local_res18 == 0) && ((*(byte *)(*plVar4 + 4) & 1) == 0)) {
                if (lVar6 == *(longlong *)(param_1 + 0x48)) {
                    lVar9 = FUN_14018b280(0x20);
                    if (lVar9 != 0) {
                        uVar10 = FUN_140028fc0(lVar9);
                    }
                    FUN_1400293c0(uVar10,&local_58,local_res10);
                    local_58 = *(longlong *)(lVar3 + 0x1a8);
                    local_50 = uVar10;
                    FUN_1400eedd0(param_1 + 0x40,local_48,&local_58);
                }
                else {
                    FUN_1400293c0(*(undefined8 *)(lVar6 + 0x28),&local_58,local_res10);
                }
                uVar1 = *(uint *)(*plVar4 + 4);
                uVar2 = *(uint *)(*plVar4 + 0x10);
                puVar11 = (undefined8 *)FUN_140439fc0(plVar4,&local_58);
                FUN_140430d20(*(undefined8 *)(DAT_140c65898 + 0x7340),param_2,0,*puVar11,
                              in_stack_ffffffffffffff78 & 0xffffffff00000000 | (ulonglong)uVar2,uVar1 & 2,
                              local_res20,param_5,param_6,param_7);
                if (local_58 != 0) {
                    (**(code **)(*(longlong *)(local_58 + -0x10) + 8))(local_58 + -0x10);
                }
                FUN_140438f60(param_1);
            }
            else {
                uVar1 = *(uint *)(*plVar4 + 4);
                uVar2 = *(uint *)(*plVar4 + 0x10);
                puVar11 = (undefined8 *)FUN_140439fc0(plVar4,&local_58);
                FUN_140430d20(*(undefined8 *)(DAT_140c65898 + 0x7340),param_2,1,*puVar11,
                              in_stack_ffffffffffffff78 & 0xffffffff00000000 | (ulonglong)uVar2,uVar1 & 2,
                              local_res20,param_5,param_6,param_7);
                if (local_58 != 0) {
                    (**(code **)(*(longlong *)(local_58 + -0x10) + 8))(local_58 + -0x10);
                }
            }
            return 1;
        }
        return 0;
    }
    return 0;
}



void FUN_140437dd0(undefined8 param_1,undefined4 param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong local_res8;
    undefined4 local_res10 [2];
    undefined local_18 [16];

    lVar2 = DAT_140c658d8;
    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 == 0) {
        return;
    }
    lVar5 = DAT_140c658d8 + 0x20;
    local_res10[0] = param_2;
    if (param_3 != 0) {
        FUN_1400293c0(lVar5,local_18,local_res10);
        lVar5 = *(longlong *)(lVar2 + 0x48);
        local_res8 = lVar5;
        if (*(longlong *)(lVar5 + 8) != 0) {
            lVar3 = *(longlong *)(lVar5 + 8);
            do {
                if (*(ulonglong *)(lVar3 + 0x20) < *(ulonglong *)(lVar1 + 0x1a8)) {
                    lVar4 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    lVar4 = *(longlong *)(lVar3 + 0x10);
                    local_res8 = lVar3;
                }
                lVar3 = lVar4;
            } while (lVar4 != 0);
        }
        if ((local_res8 == lVar5) || (*(ulonglong *)(lVar1 + 0x1a8) < *(ulonglong *)(local_res8 + 0x20))
                ) {
            local_res8 = lVar5;
        }
        if (local_res8 == lVar5) goto LAB_140437e7f;
        lVar5 = *(longlong *)(local_res8 + 0x28);
    }
    FUN_1400ee810(lVar5,local_res10);
    LAB_140437e7f:
    FUN_140438f60(lVar2);
    return;
}



undefined8 FUN_140437ea0(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res18;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0x28);
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
        if (local_res18 != lVar1) {
            return 1;
        }
    }
    return 0;
}



void FUN_140437f00(void)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = DAT_140c658d8;
    FUN_140008410(DAT_140c658d8 + 0x20);
    lVar4 = *(longlong *)(*(longlong *)(lVar2 + 0x48) + 0x10);
    if (lVar4 != *(longlong *)(lVar2 + 0x48)) {
        do {
            lVar3 = *(longlong *)(lVar4 + 0x28);
            if (lVar3 != 0) {
                FUN_140008410(lVar3);
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
                for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar4 = lVar3, lVar1 != 0;
                     lVar1 = *(longlong *)(lVar1 + 0x10)) {
                    lVar3 = lVar1;
                }
            }
        } while (lVar4 != *(longlong *)(lVar2 + 0x48));
    }
    FUN_140008410(lVar2 + 0x40);
    FUN_140438f60(lVar2);
    return;
}



void FUN_140437fd0(undefined8 param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    longlong local_res8;

    lVar2 = *(longlong *)(DAT_140c658d8 + 8);
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
    if (local_res8 != lVar2) {
        iVar1 = *DAT_140c63750;
        iVar4 = DAT_140c3b390;
        if (iVar1 < DAT_140c3b390) {
            iVar4 = iVar1;
        }
        iVar5 = DAT_140c3b390;
        if (iVar1 < DAT_140c3b390) {
            iVar5 = iVar1;
        }
        FUN_14001a770(&PTR_PTR_LAB_140c3b380,iVar5,
                      ~(1 << ((byte)*(undefined4 *)(**(longlong **)(local_res8 + 0x28) + 8) & 0x1f)) &
                      *(uint *)(&DAT_140c3b3a0 + (longlong)iVar4 * 4));
        return;
    }
    return;
}



undefined8 FUN_140438080(undefined8 param_1,longlong param_2,int param_3)

{
    undefined4 uVar1;
    longlong *plVar2;
    uint *puVar3;
    longlong lVar4;
    undefined4 uVar5;
    int iVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    longlong lVar11;
    longlong lVar12;
    ulonglong uVar13;
    undefined8 *puVar14;
    undefined **local_68;
    uint local_60;
    longlong local_58;
    undefined4 local_50;
    undefined local_48 [8];
    longlong local_40;
    longlong local_38;

    lVar4 = DAT_140c658d8;
    if (*(longlong *)(DAT_140c658d8 + 0x10) == 0) {
        *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
        return 0;
    }
    local_68 = &PTR_FUN_140b569f0;
    local_50 = 1;
    local_58 = param_2;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar14 = *(undefined8 **)(param_2 + 0x10);
    uVar7 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar14 + 1) = 5;
    *puVar14 = uVar7;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    local_60 = FUN_1400578c0(param_2);
    lVar11 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x10);
    lVar9 = param_2;
    if (lVar11 != *(longlong *)(lVar4 + 8)) {
        do {
            plVar2 = *(longlong **)(lVar11 + 0x28);
            uVar1 = *(undefined4 *)(lVar11 + 0x20);
            if ((plVar2 != (longlong *)0x0) &&
                (((param_3 == 0x1f || (param_3 == *(int *)(*plVar2 + 8))) &&
                  ((*(byte *)(*plVar2 + 4) & 8) == 0)))) {
                FUN_1401ddfd0(local_48,plVar2 + 1);
                lVar9 = local_40;
                if (local_40 == local_38) {
                    if (local_40 != 0) {
                        FUN_14018b900(local_40,0);
                    }
                }
                else {
                    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_2);
                    }
                    puVar14 = *(undefined8 **)(param_2 + 0x10);
                    uVar7 = FUN_14005c1b0(param_2,0,0);
                    *(undefined4 *)(puVar14 + 1) = 5;
                    *puVar14 = uVar7;
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                    uVar5 = FUN_1400578c0(param_2);
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar5);
                    puVar14 = *(undefined8 **)(param_2 + 0x10);
                    *puVar14 = *puVar10;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                    FUN_1400f06f0(param_2,puVar14,&DAT_140b01ef8,uVar1);
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                    uVar7 = FUN_14034bdd0();
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar5);
                    puVar14 = *(undefined8 **)(param_2 + 0x10);
                    *puVar14 = *puVar10;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                    FUN_1400f0870(param_2,puVar14,L"title",uVar7);
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                    puVar14 = *(undefined8 **)(param_2 + 0x10);
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar5);
                    *puVar14 = *puVar10;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                    FUN_1400f06f0(param_2);
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                    puVar14 = *(undefined8 **)(param_2 + 0x10);
                    iVar6 = FUN_140437ea0(lVar4,uVar1);
                    puVar10 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar5);
                    *puVar14 = *puVar10;
                    *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar10 + 1);
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                    lVar8 = FUN_14018f0e0(local_48,L"viewed");
                    if (*(longlong *)(lVar8 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                    }
                    else {
                        lVar12 = -1;
                        do {
                            lVar12 = lVar12 + 1;
                        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar12) != '\0');
                        FUN_140058710(param_2);
                    }
                    if (local_40 != 0) {
                        FUN_14018b900(local_40,0);
                    }
                    puVar3 = *(uint **)(param_2 + 0x10);
                    puVar3[2] = 1;
                    *puVar3 = (uint)(iVar6 != 0);
                    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(param_2,0xfffffffd);
                    FUN_14005ea50(param_2,uVar7);
                    *(longlong *)(param_2 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
                    FUN_1400fb1d0(&local_68,uVar5);
                    FUN_1400579e0(param_2);
                    FUN_14018b900(lVar9,0);
                }
            }
            lVar9 = *(longlong *)(lVar11 + 0x18);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(lVar11 + 8);
                if (lVar11 == *(longlong *)(lVar9 + 0x18)) {
                    do {
                        lVar11 = lVar9;
                        lVar9 = *(longlong *)(lVar11 + 8);
                    } while (lVar11 == *(longlong *)(lVar9 + 0x18));
                }
                if (*(longlong *)(lVar11 + 0x18) != lVar9) {
                    lVar11 = lVar9;
                }
            }
            else {
                for (lVar8 = *(longlong *)(lVar9 + 0x10); lVar11 = lVar9, lVar8 != 0;
                     lVar8 = *(longlong *)(lVar8 + 0x10)) {
                    lVar9 = lVar8;
                }
            }
            lVar9 = local_58;
        } while (lVar11 != *(longlong *)(lVar4 + 8));
    }
    uVar13 = (ulonglong)local_60;
    puVar10 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),uVar13);
    puVar14 = *(undefined8 **)(lVar9 + 0x10);
    *puVar14 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 1);
    *(undefined4 *)(puVar14 + 1) = uVar1;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400579e0(lVar9,uVar1,uVar13 & 0xffffffff);
    return 1;
}



void FUN_140438480(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    char *pcVar3;
    longlong lVar4;
    char *pcVar5;
    int iVar6;
    longlong *plVar7;
    longlong lVar8;
    wchar_t *pwVar9;
    short *psVar10;
    longlong lVar11;
    ulonglong uVar12;
    undefined *puVar13;
    longlong lVar14;
    undefined8 uVar15;
    uint uVar16;
    wchar_t *pwVar18;
    char *pcVar19;
    char *pcVar20;
    undefined8 *puVar21;
    short *psVar22;
    wchar_t *pwVar23;
    bool bVar24;
    undefined auStack1368 [32];
    wchar_t *local_538;
    undefined8 local_530;
    wchar_t *local_528;
    uint local_518;
    undefined4 uStack1300;
    longlong *local_510;
    longlong local_508;
    longlong local_500;
    ulonglong local_4f8;
    longlong local_4f0;
    undefined local_4e8 [16];
    undefined **local_4d8 [2];
    longlong local_4c8;
    uint local_4c0;
    undefined8 local_4b8;
    undefined8 *local_4a8;
    longlong local_498;
    longlong local_490;
    int local_47c;
    longlong local_470;
    undefined8 local_468;
    undefined **local_458;
    undefined *local_450;
    undefined local_448 [84];
    int local_3f4;
    undefined8 local_3f0;
    undefined local_3e8 [16];
    undefined **local_3d8;
    undefined *local_3d0;
    undefined local_3c8 [84];
    int local_374;
    undefined8 local_370;
    undefined local_368 [16];
    undefined **local_358;
    undefined *local_350;
    undefined local_348 [84];
    int local_2f4;
    undefined8 local_2f0;
    undefined local_2e8 [16];
    undefined **local_2d8;
    undefined *local_2d0;
    undefined local_2c8 [84];
    int local_274;
    undefined8 local_270;
    undefined local_268 [16];
    undefined local_258 [16];
    short local_248;
    short local_246 [263];
    ulonglong local_38;
    wchar_t *pwVar17;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1368;
    local_530 = *(undefined8 *)(DAT_140c63788 + 0x1320);
    local_528 = L"Tutorials.xml";
    local_538 = L"NCSOFT";
    iVar6 = FUN_14001b370(&local_248,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xa7c);
    if ((-1 < iVar6) && (local_248 != 0)) {
        psVar10 = &local_248;
        do {
            psVar22 = psVar10 + 1;
            psVar10 = psVar10 + 1;
        } while (*psVar22 != 0);
    }
    FUN_1401a72e0(local_4d8);
    FUN_1401a59a0(local_4d8);
    lVar8 = local_470;
    pwVar23 = (wchar_t *)0x0;
    local_47c = 0;
    local_470 = 0;
    if (lVar8 != 0) {
        (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
    }
    FUN_14018b900(local_468,0);
    local_468 = 0;
    local_510 = (longlong *)0x0;
    iVar6 = FUN_1401b6d00();
    plVar7 = local_510;
    if (iVar6 < 0) {
        if (-1 < local_47c) {
            local_47c = iVar6;
            plVar7 = (longlong *)FUN_14018d540(&local_518,L"%0.8x %s",iVar6,&local_248);
            lVar8 = *plVar7;
            *plVar7 = local_470;
            lVar11 = CONCAT44(uStack1300,local_518);
            local_470 = lVar8;
            if (lVar11 != 0) {
                (**(code **)(*(longlong *)(lVar11 + -0x10) + 8))(lVar11 + -0x10);
            }
        }
        iVar6 = local_47c;
        if (local_510 != (longlong *)0x0) {
            (**(code **)(*local_510 + 8))();
        }
    }
    else {
        iVar6 = FUN_1401a7c70(local_4d8,local_510);
        if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 8))(plVar7);
        }
    }
    if ((-1 < iVar6) && (puVar21 = local_4a8, local_4a8 != (undefined8 *)0x0)) {
        do {
            plVar7 = (longlong *)(**(code **)*puVar21)(puVar21);
            if (plVar7 != (longlong *)0x0) {
                lVar8 = (**(code **)(*plVar7 + 0x30))();
                pwVar9 = pwVar23;
                if (lVar8 == 0) {
                    pwVar9 = (wchar_t *)FUN_1401a4f40();
                }
                pwVar18 = L"ViewedTutorials";
                if (pwVar9 != L"ViewedTutorials") {
                    pwVar17 = pwVar23;
                    if (*pwVar9 != L'\0') {
                        do {
                            uVar16 = (uint)pwVar17;
                            if (((*pwVar18 == L'\0') || (*pwVar9 != *pwVar18)) || (0x7ffffffe < (int)uVar16))
                                break;
                            pwVar9 = pwVar9 + 1;
                            pwVar18 = pwVar18 + 1;
                            uVar16 = uVar16 + 1;
                            pwVar17 = (wchar_t *)(ulonglong)uVar16;
                        } while (*pwVar9 != L'\0');
                        if (uVar16 == 0x7fffffff) goto LAB_1404386be;
                    }
                    if ((*pwVar9 != L'\0') || (*pwVar18 != L'\0')) goto LAB_1404386ac;
                }
                LAB_1404386be:
                if (plVar7 != (longlong *)0x0) {
                    for (lVar8 = FUN_1401a5ae0(plVar7); lVar8 != 0; lVar8 = FUN_1401a5bc0(lVar8)) {
                        lVar11 = *(longlong *)(lVar8 + 0x60);
                        local_518 = 0;
                        for (; lVar11 != 0; lVar11 = *(longlong *)(lVar11 + 0x38)) {
                            psVar22 = &DAT_140b0223c;
                            psVar10 = (short *)FUN_1401a4f40();
                            if (psVar10 == &DAT_140b0223c) {
                                LAB_140438764:
                                if (lVar11 != 0) {
                                    uVar15 = FUN_1401a4f40(lVar11 + 0x20);
                                    FUN_1407df428(uVar15,&DAT_1409e4114,&local_518);
                                }
                                break;
                            }
                            pwVar9 = pwVar23;
                            if (*psVar10 != 0) {
                                do {
                                    uVar16 = (uint)pwVar9;
                                    if (((*psVar22 == 0) || (*psVar10 != *psVar22)) || (0x7ffffffe < (int)uVar16))
                                        break;
                                    psVar10 = psVar10 + 1;
                                    psVar22 = psVar22 + 1;
                                    uVar16 = uVar16 + 1;
                                    pwVar9 = (wchar_t *)(ulonglong)uVar16;
                                } while (*psVar10 != 0);
                                if (uVar16 == 0x7fffffff) goto LAB_140438764;
                            }
                            if ((*psVar10 == 0) && (*psVar22 == 0)) goto LAB_140438764;
                        }
                        local_510 = (longlong *)
                                ((ulonglong)local_510 & 0xffffffff00000000 | (ulonglong)local_518);
                        FUN_1400293c0(param_1 + 0x20,&local_4f8);
                    }
                }
                break;
            }
            LAB_1404386ac:
            puVar1 = puVar21 + 9;
            puVar21 = (undefined8 *)*puVar1;
        } while ((undefined8 *)*puVar1 != (undefined8 *)0x0);
        do {
            if (local_4a8 == (undefined8 *)0x0) break;
            plVar7 = (longlong *)(**(code **)*local_4a8)(local_4a8);
            if (plVar7 != (longlong *)0x0) {
                lVar8 = (**(code **)(*plVar7 + 0x30))();
                pwVar9 = pwVar23;
                if (lVar8 == 0) {
                    pwVar9 = (wchar_t *)FUN_1401a4f40();
                }
                pwVar18 = L"PendingTutorials";
                if (pwVar9 != L"PendingTutorials") {
                    pwVar17 = pwVar23;
                    if (*pwVar9 != L'\0') {
                        do {
                            uVar16 = (uint)pwVar17;
                            if (((*pwVar18 == L'\0') || (*pwVar9 != *pwVar18)) || (0x7ffffffe < (int)uVar16))
                                break;
                            pwVar9 = pwVar9 + 1;
                            pwVar18 = pwVar18 + 1;
                            uVar16 = uVar16 + 1;
                            pwVar17 = (wchar_t *)(ulonglong)uVar16;
                        } while (*pwVar9 != L'\0');
                        if (uVar16 == 0x7fffffff) goto LAB_14043885e;
                    }
                    if ((*pwVar9 != L'\0') || (*pwVar18 != L'\0')) goto LAB_14043884c;
                }
                LAB_14043885e:
                if (plVar7 != (longlong *)0x0) {
                    for (lVar8 = FUN_1401a5ae0(plVar7); lVar8 != 0; lVar8 = FUN_1401a5bc0(lVar8)) {
                        for (lVar11 = *(longlong *)(lVar8 + 0x60); lVar11 != 0;
                             lVar11 = *(longlong *)(lVar11 + 0x38)) {
                            psVar22 = &DAT_140b01f88;
                            psVar10 = (short *)FUN_1401a4f40();
                            if (psVar10 == &DAT_140b01f88) {
                                LAB_1404388ff:
                                if ((lVar11 != 0) &&
                                    ((lVar11 = FUN_1401a4f40(lVar11 + 0x20), lVar11 != 0 &&
                                                                             (uVar12 = FUN_1407df51c(lVar11), uVar12 != 0)))) {
                                    lVar11 = FUN_14018b280(0x20);
                                    if (lVar11 == 0) {
                                        lVar11 = 0;
                                    }
                                    else {
                                        puVar13 = (undefined *)FUN_14018b280(0x28);
                                        *(undefined8 *)(lVar11 + 0x10) = 0;
                                        *(undefined **)(lVar11 + 8) = puVar13;
                                        *puVar13 = 0;
                                        *(undefined8 *)(*(longlong *)(lVar11 + 8) + 8) = 0;
                                        *(longlong *)(*(longlong *)(lVar11 + 8) + 0x10) = *(longlong *)(lVar11 + 8);
                                        *(longlong *)(*(longlong *)(lVar11 + 8) + 0x18) = *(longlong *)(lVar11 + 8);
                                    }
                                    lVar14 = FUN_1401a5ae0();
                                    while (lVar14 != 0) {
                                        lVar14 = *(longlong *)(lVar14 + 0x60);
                                        local_518 = 0;
                                        for (; lVar14 != 0; lVar14 = *(longlong *)(lVar14 + 0x38)) {
                                            psVar22 = &DAT_140b02194;
                                            psVar10 = (short *)FUN_1401a4f40(lVar14 + 8);
                                            if (psVar10 == &DAT_140b02194) {
                                                LAB_140438a27:
                                                if (lVar14 != 0) {
                                                    uVar15 = FUN_1401a4f40(lVar14 + 0x20);
                                                    FUN_1407df428(uVar15,&DAT_1409e4114,&local_518);
                                                }
                                                break;
                                            }
                                            iVar6 = 0;
                                            if (*psVar10 != 0) {
                                                do {
                                                    if (((*psVar22 == 0) || (*psVar10 != *psVar22)) || (0x7ffffffe < iVar6))
                                                        break;
                                                    psVar10 = psVar10 + 1;
                                                    psVar22 = psVar22 + 1;
                                                    iVar6 = iVar6 + 1;
                                                } while (*psVar10 != 0);
                                                if (iVar6 == 0x7fffffff) goto LAB_140438a27;
                                            }
                                            if ((*psVar10 == 0) && (*psVar22 == 0)) goto LAB_140438a27;
                                        }
                                        lVar14 = *(longlong *)(param_1 + 0x28);
                                        lVar4 = lVar14;
                                        lVar2 = *(longlong *)(lVar14 + 8);
                                        while (lVar2 != 0) {
                                            if (*(uint *)(lVar2 + 0x20) < local_518) {
                                                lVar2 = *(longlong *)(lVar2 + 0x18);
                                            }
                                            else {
                                                lVar4 = lVar2;
                                                lVar2 = *(longlong *)(lVar2 + 0x10);
                                            }
                                        }
                                        if ((lVar4 == lVar14) || (local_518 < *(uint *)(lVar4 + 0x20))) {
                                            local_500 = lVar14;
                                            plVar7 = &local_500;
                                        }
                                        else {
                                            local_508 = lVar4;
                                            plVar7 = &local_508;
                                        }
                                        if (*plVar7 == lVar14) {
                                            local_510 = (longlong *)
                                                    ((ulonglong)local_510 & 0xffffffff00000000 | (ulonglong)local_518)
                                                    ;
                                            FUN_1400293c0(lVar11,local_258,&local_510);
                                        }
                                        lVar14 = FUN_1401a5bc0();
                                    }
                                    pcVar3 = *(char **)(param_1 + 0x48);
                                    bVar24 = true;
                                    pcVar5 = pcVar3;
                                    pcVar20 = *(char **)(pcVar3 + 8);
                                    while (pcVar20 != (char *)0x0) {
                                        bVar24 = uVar12 < *(ulonglong *)(pcVar20 + 0x20);
                                        pcVar5 = pcVar20;
                                        if (bVar24) {
                                            pcVar20 = *(char **)(pcVar20 + 0x10);
                                        }
                                        else {
                                            pcVar20 = *(char **)(pcVar20 + 0x18);
                                        }
                                    }
                                    pcVar20 = pcVar5;
                                    local_4f8 = uVar12;
                                    local_4f0 = lVar11;
                                    if (bVar24) {
                                        if (pcVar5 != *(char **)(pcVar3 + 0x10)) {
                                            if ((*pcVar5 == '\0') && (*(char **)(*(longlong *)(pcVar5 + 8) + 8) == pcVar5)
                                                    ) {
                                                pcVar20 = *(char **)(pcVar5 + 0x18);
                                            }
                                            else {
                                                pcVar20 = *(char **)(pcVar5 + 0x10);
                                                if (pcVar20 == (char *)0x0) {
                                                    pcVar20 = *(char **)(pcVar5 + 8);
                                                    pcVar19 = pcVar20;
                                                    if (pcVar5 == *(char **)(pcVar20 + 0x10)) {
                                                        do {
                                                            pcVar20 = *(char **)(pcVar19 + 8);
                                                            bVar24 = pcVar19 == *(char **)(pcVar20 + 0x10);
                                                            pcVar19 = pcVar20;
                                                        } while (bVar24);
                                                    }
                                                }
                                                else {
                                                    for (pcVar19 = *(char **)(pcVar20 + 0x18); pcVar19 != (char *)0x0;
                                                         pcVar19 = *(char **)(pcVar19 + 0x18)) {
                                                        pcVar20 = pcVar19;
                                                    }
                                                }
                                            }
                                            goto LAB_140438b9d;
                                        }
                                        local_538 = (wchar_t *)&local_4f8;
                                        FUN_1400eecd0(param_1 + 0x40,local_4e8,0,pcVar5);
                                    }
                                    else {
                                        LAB_140438b9d:
                                        if (*(ulonglong *)(pcVar20 + 0x20) < uVar12) {
                                            if ((pcVar5 == pcVar3) || (uVar12 < *(ulonglong *)(pcVar5 + 0x20))) {
                                                lVar14 = FUN_14018b280(0x30);
                                                if ((ulonglong *)(lVar14 + 0x20) != (ulonglong *)0x0) {
                                                    *(ulonglong *)(lVar14 + 0x20) = uVar12;
                                                    *(longlong *)(lVar14 + 0x28) = lVar11;
                                                }
                                                *(longlong *)(pcVar5 + 0x10) = lVar14;
                                                pcVar3 = *(char **)(param_1 + 0x48);
                                                if (pcVar5 == pcVar3) {
                                                    *(longlong *)(pcVar3 + 8) = lVar14;
                                                    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar14;
                                                }
                                                else if (pcVar5 == *(char **)(pcVar3 + 0x10)) {
                                                    *(longlong *)(pcVar3 + 0x10) = lVar14;
                                                }
                                            }
                                            else {
                                                lVar14 = FUN_14018b280(0x30);
                                                if ((ulonglong *)(lVar14 + 0x20) != (ulonglong *)0x0) {
                                                    *(ulonglong *)(lVar14 + 0x20) = uVar12;
                                                    *(longlong *)(lVar14 + 0x28) = lVar11;
                                                }
                                                *(longlong *)(pcVar5 + 0x18) = lVar14;
                                                if (pcVar5 == *(char **)(*(longlong *)(param_1 + 0x48) + 0x18)) {
                                                    *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x18) = lVar14;
                                                }
                                            }
                                            *(char **)(lVar14 + 8) = pcVar5;
                                            *(undefined8 *)(lVar14 + 0x10) = 0;
                                            *(undefined8 *)(lVar14 + 0x18) = 0;
                                            FUN_1400081c0(lVar14,*(longlong *)(param_1 + 0x48) + 8);
                                            *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + 1;
                                        }
                                    }
                                }
                                break;
                            }
                            iVar6 = 0;
                            if (*psVar10 != 0) {
                                do {
                                    if (((*psVar22 == 0) || (*psVar10 != *psVar22)) || (0x7ffffffe < iVar6)) break;
                                    psVar10 = psVar10 + 1;
                                    psVar22 = psVar22 + 1;
                                    iVar6 = iVar6 + 1;
                                } while (*psVar10 != 0);
                                if (iVar6 == 0x7fffffff) goto LAB_1404388ff;
                            }
                            if ((*psVar10 == 0) && (*psVar22 == 0)) goto LAB_1404388ff;
                        }
                    }
                }
                break;
            }
            LAB_14043884c:
            local_4a8 = (undefined8 *)local_4a8[9];
        } while( true );
    }
    local_4d8[0] = &PTR_LAB_140b5eb10;
    FUN_1401a59a0(local_4d8);
    lVar8 = local_470;
    local_47c = 0;
    local_470 = 0;
    if (lVar8 != 0) {
        (**(code **)(*(longlong *)(lVar8 + -0x10) + 8))(lVar8 + -0x10);
    }
    FUN_14018b900(local_468,0);
    local_468 = 0;
    local_2d8 = &PTR_FUN_140b5ea18;
    while (local_274 != 0) {
        local_274 = local_274 + -1;
        FUN_14018b900(*(undefined8 *)(local_2d0 + (longlong)local_274 * 8),0);
    }
    local_270 = 0;
    local_268 = ZEXT816(0);
    if (local_2d0 != local_2c8) {
        FUN_14018b900(local_2d0,0);
    }
    local_358 = &PTR_LAB_140b5ea48;
    local_2d8 = &PTR_FUN_140b5ead8;
    while (local_2f4 != 0) {
        local_2f4 = local_2f4 + -1;
        FUN_14018b900(*(undefined8 *)(local_350 + (longlong)local_2f4 * 8),0);
    }
    local_2f0 = 0;
    local_2e8 = ZEXT816(0);
    if (local_350 != local_348) {
        FUN_14018b900(local_350,0);
    }
    local_358 = &PTR_FUN_140b5ead8;
    local_3d8 = &PTR_LAB_140b5ea78;
    while (local_374 != 0) {
        local_374 = local_374 + -1;
        FUN_14018b900(*(undefined8 *)(local_3d0 + (longlong)local_374 * 8),0);
    }
    local_370 = 0;
    local_368 = ZEXT816(0);
    if (local_3d0 != local_3c8) {
        FUN_14018b900(local_3d0,0);
    }
    local_3d8 = &PTR_FUN_140b5ead8;
    local_458 = &PTR_LAB_140b5eaa8;
    while (local_3f4 != 0) {
        local_3f4 = local_3f4 + -1;
        FUN_14018b900(*(undefined8 *)(local_450 + (longlong)local_3f4 * 8),0);
    }
    local_3f0 = 0;
    local_3e8 = ZEXT816(0);
    if (local_450 != local_448) {
        FUN_14018b900(local_450,0);
    }
    local_458 = &PTR_FUN_140b5ead8;
    if (local_470 != 0) {
        (**(code **)(*(longlong *)(local_470 + -0x10) + 8))(local_470 + -0x10);
    }
    local_4d8[0] = &PTR_LAB_140b5ede0;
    FUN_1401a59a0(local_4d8);
    if (local_4c8 != 0) {
        if (local_4d8 == *(undefined ****)(local_4c8 + 0x30)) {
            *(undefined ***)(local_4c8 + 0x30) = (*(undefined ****)(local_4c8 + 0x30))[9];
        }
        if (local_4d8 == *(undefined ****)(local_4c8 + 0x38)) {
            *(undefined ***)(local_4c8 + 0x38) = (*(undefined ****)(local_4c8 + 0x38))[8];
        }
        if (local_498 != 0) {
            *(longlong *)(local_498 + 0x48) = local_490;
        }
        if (local_490 != 0) {
            *(longlong *)(local_490 + 0x40) = local_498;
        }
        local_4c8 = 0;
    }
    if ((local_4c0 & 0x200) != 0) {
        FUN_14018b900(local_4b8,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1368);
    return;
}



void FUN_140438f60(longlong param_1)

{
    short *psVar1;
    short sVar2;
    undefined4 uVar3;
    undefined auVar4 [16];
    longlong lVar5;
    int iVar6;
    short *psVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 uVar10;
    longlong lVar11;
    longlong lVar12;
    longlong lVar13;
    longlong *plVar14;
    undefined8 *puVar15;
    undefined8 *puVar16;
    longlong *plVar17;
    undefined8 *puVar18;
    undefined auStack1768 [32];
    wchar_t *local_6c8;
    undefined8 local_6c0;
    wchar_t *local_6b8;
    longlong *local_6a8;
    undefined8 *local_6a0;
    longlong local_698;
    longlong local_690;
    undefined **local_688;
    longlong local_680;
    longlong local_678;
    uint local_670;
    undefined8 local_668;
    undefined8 *local_658;
    undefined8 *local_650;
    longlong local_648;
    longlong local_640;
    int local_62c;
    longlong local_620;
    undefined8 local_618;
    undefined **local_608;
    undefined *local_600;
    undefined local_5f8 [84];
    int local_5a4;
    undefined8 local_5a0;
    undefined local_598 [16];
    undefined **local_588;
    undefined *local_580;
    undefined local_578 [84];
    int local_524;
    undefined8 local_520;
    undefined local_518 [16];
    undefined **local_508;
    undefined *local_500;
    undefined local_4f8 [84];
    int local_4a4;
    undefined8 local_4a0;
    undefined local_498 [16];
    undefined **local_488;
    undefined *local_480;
    undefined local_478 [84];
    int local_424;
    undefined8 local_420;
    undefined local_418 [16];
    short local_408 [24];
    short local_3d8 [200];
    short local_248;
    short local_246 [263];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack1768;
    local_6c0 = *(undefined8 *)(DAT_140c63788 + 0x1320);
    local_6b8 = L"Tutorials.xml";
    local_6c8 = L"NCSOFT";
    local_698 = param_1;
    iVar6 = FUN_14001b370(&local_248,0x104,L"%s\\%s\\%s\\%s",DAT_140c63788 + 0xa7c);
    if ((-1 < iVar6) && (local_248 != 0)) {
        psVar7 = &local_248;
        do {
            psVar1 = psVar7 + 1;
            psVar7 = psVar7 + 1;
        } while (*psVar1 != 0);
    }
    FUN_1401a72e0(&local_688);
    puVar8 = (undefined8 *)(*(code *)local_488[2])(&local_488);
    puVar18 = (undefined8 *)0x0;
    puVar15 = puVar18;
    if (puVar8 != (undefined8 *)0x0) {
        puVar8[2] = 0;
        puVar8[1] = &local_688;
        *(undefined4 *)(puVar8 + 3) = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        *puVar8 = &PTR_LAB_140b5ed50;
        puVar8[10] = 0;
        puVar15 = puVar8;
    }
    puVar15[10] = &local_488;
    FUN_1401a4c50(puVar15 + 3,L"xml version=\"1.0\" encoding=\"UTF-8\"");
    if (puVar15[1] == local_680) {
        lVar12 = puVar15[2];
        if (lVar12 == 0) {
            (**(code **)(*(longlong *)puVar15[10] + 0x20))();
        }
        else {
            if (puVar15 == *(undefined8 **)(lVar12 + 0x30)) {
                *(undefined8 *)(lVar12 + 0x30) = (*(undefined8 **)(lVar12 + 0x30))[9];
            }
            if (puVar15 == *(undefined8 **)(lVar12 + 0x38)) {
                *(undefined8 *)(lVar12 + 0x38) = (*(undefined8 **)(lVar12 + 0x38))[8];
            }
            if (puVar15[8] != 0) {
                *(undefined8 *)(puVar15[8] + 0x48) = puVar15[9];
            }
            if (puVar15[9] != 0) {
                *(undefined8 *)(puVar15[9] + 0x40) = puVar15[8];
            }
            puVar15[2] = 0;
        }
        if (local_650 == (undefined8 *)0x0) {
            puVar15[8] = 0;
            local_658 = puVar15;
        }
        else {
            local_650[9] = puVar15;
            puVar15[8] = local_650;
        }
        puVar15[9] = 0;
        puVar15[2] = &local_688;
        local_650 = puVar15;
    }
    puVar8 = (undefined8 *)(*(code *)local_608[2])(&local_608);
    puVar15 = puVar18;
    if (puVar8 != (undefined8 *)0x0) {
        puVar8[2] = 0;
        puVar8[1] = &local_688;
        *(undefined4 *)(puVar8 + 3) = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        *puVar8 = &PTR_FUN_140b5eba0;
        *(undefined4 *)(puVar8 + 0xb) = 0;
        puVar8[0xc] = 0;
        puVar15 = puVar8;
    }
    puVar15[10] = &local_608;
    FUN_1401a4c50(puVar15 + 3,L"ViewedTutorials");
    if (puVar15[1] == local_680) {
        lVar12 = puVar15[2];
        if (lVar12 == 0) {
            (**(code **)(*(longlong *)puVar15[10] + 0x20))();
        }
        else {
            if (puVar15 == *(undefined8 **)(lVar12 + 0x30)) {
                *(undefined8 *)(lVar12 + 0x30) = (*(undefined8 **)(lVar12 + 0x30))[9];
            }
            if (puVar15 == *(undefined8 **)(lVar12 + 0x38)) {
                *(undefined8 *)(lVar12 + 0x38) = (*(undefined8 **)(lVar12 + 0x38))[8];
            }
            if (puVar15[8] != 0) {
                *(undefined8 *)(puVar15[8] + 0x48) = puVar15[9];
            }
            if (puVar15[9] != 0) {
                *(undefined8 *)(puVar15[9] + 0x40) = puVar15[8];
            }
            puVar15[2] = 0;
        }
        if (local_650 == (undefined8 *)0x0) {
            puVar15[8] = 0;
            local_658 = puVar15;
        }
        else {
            local_650[9] = puVar15;
            puVar15[8] = local_650;
        }
        puVar15[9] = 0;
        puVar15[2] = &local_688;
        local_650 = puVar15;
    }
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x10);
    if (lVar12 != *(longlong *)(param_1 + 0x28)) {
        do {
            puVar9 = (undefined8 *)(*(code *)local_608[2])(&local_608);
            puVar8 = puVar18;
            if (puVar9 != (undefined8 *)0x0) {
                puVar9[2] = 0;
                puVar9[1] = &local_688;
                *(undefined4 *)(puVar9 + 3) = 0;
                puVar9[4] = 0;
                puVar9[5] = 0;
                puVar9[6] = 0;
                puVar9[7] = 0;
                puVar9[8] = 0;
                puVar9[9] = 0;
                puVar9[10] = 0;
                *puVar9 = &PTR_FUN_140b5eba0;
                *(undefined4 *)(puVar9 + 0xb) = 0;
                puVar9[0xc] = 0;
                puVar8 = puVar9;
            }
            puVar8[10] = &local_608;
            if ((*(uint *)(puVar8 + 3) & 0x200) != 0) {
                FUN_14018b900(puVar8[4],0);
            }
            *(undefined4 *)(puVar8 + 3) = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            puVar9 = puVar18;
            do {
                puVar16 = puVar9;
                puVar9 = (undefined8 *)((longlong)puVar16 + 1);
            } while (L"Tutorial"[(longlong)puVar16 + 1] != L'\0');
            auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar16 + 2);
            uVar10 = SUB168(auVar4,0);
            if (SUB168(auVar4 >> 0x40,0) != 0) {
                uVar10 = 0xffffffffffffffff;
            }
            uVar10 = FUN_14018b280(uVar10,0);
            puVar8[4] = uVar10;
            FUN_1407db590(uVar10,L"Tutorial",(longlong)puVar9 * 2 + 2);
            *(undefined4 *)(puVar8 + 3) = 0x200;
            puVar8[5] = puVar8[4] + (longlong)puVar9 * 2;
            uVar3 = *(undefined4 *)(lVar12 + 0x20);
            lVar11 = FUN_1401a6c70(puVar8,&DAT_140b022c4);
            FUN_1401a4c20(local_3d8,200,&DAT_1409e41b4,uVar3);
            if ((*(uint *)(lVar11 + 0x20) & 0x200) != 0) {
                FUN_14018b900(*(undefined8 *)(lVar11 + 0x28),0);
            }
            *(undefined4 *)(lVar11 + 0x20) = 0;
            *(undefined8 *)(lVar11 + 0x28) = 0;
            *(undefined8 *)(lVar11 + 0x30) = 0;
            puVar9 = puVar18;
            sVar2 = local_3d8[0];
            while (sVar2 != 0) {
                puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                sVar2 = local_3d8[(longlong)puVar9];
            }
            auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar9 + 1);
            uVar10 = SUB168(auVar4,0);
            if (SUB168(auVar4 >> 0x40,0) != 0) {
                uVar10 = 0xffffffffffffffff;
            }
            uVar10 = FUN_14018b280(uVar10,0);
            *(undefined8 *)(lVar11 + 0x28) = uVar10;
            FUN_1407db590(uVar10,local_3d8,(longlong)puVar9 * 2 + 2);
            *(undefined4 *)(lVar11 + 0x20) = 0x200;
            *(longlong *)(lVar11 + 0x30) = *(longlong *)(lVar11 + 0x28) + (longlong)puVar9 * 2;
            if (puVar8[1] == puVar15[1]) {
                lVar11 = puVar8[2];
                if (lVar11 == 0) {
                    (**(code **)(*(longlong *)puVar8[10] + 0x20))();
                }
                else {
                    if (puVar8 == *(undefined8 **)(lVar11 + 0x30)) {
                        *(undefined8 *)(lVar11 + 0x30) = (*(undefined8 **)(lVar11 + 0x30))[9];
                    }
                    if (puVar8 == *(undefined8 **)(lVar11 + 0x38)) {
                        *(undefined8 *)(lVar11 + 0x38) = (*(undefined8 **)(lVar11 + 0x38))[8];
                    }
                    if (puVar8[8] != 0) {
                        *(undefined8 *)(puVar8[8] + 0x48) = puVar8[9];
                    }
                    if (puVar8[9] != 0) {
                        *(undefined8 *)(puVar8[9] + 0x40) = puVar8[8];
                    }
                    puVar8[2] = 0;
                }
                if (puVar15[7] == 0) {
                    puVar15[7] = puVar8;
                    puVar15[6] = puVar8;
                    puVar8[8] = 0;
                }
                else {
                    *(undefined8 **)(puVar15[7] + 0x48) = puVar8;
                    puVar8[8] = puVar15[7];
                    puVar15[7] = puVar8;
                }
                puVar8[9] = 0;
                puVar8[2] = puVar15;
            }
            lVar11 = *(longlong *)(lVar12 + 0x18);
            if (lVar11 == 0) {
                lVar11 = *(longlong *)(lVar12 + 8);
                if (lVar12 == *(longlong *)(lVar11 + 0x18)) {
                    do {
                        lVar12 = lVar11;
                        lVar11 = *(longlong *)(lVar12 + 8);
                    } while (lVar12 == *(longlong *)(lVar11 + 0x18));
                }
                if (*(longlong *)(lVar12 + 0x18) != lVar11) {
                    lVar12 = lVar11;
                }
            }
            else {
                for (lVar13 = *(longlong *)(lVar11 + 0x10); lVar12 = lVar11, lVar13 != 0;
                     lVar13 = *(longlong *)(lVar13 + 0x10)) {
                    lVar11 = lVar13;
                }
            }
        } while (lVar12 != *(longlong *)(param_1 + 0x28));
    }
    local_6a0 = (undefined8 *)(*(code *)local_608[2])(&local_608);
    if (local_6a0 == (undefined8 *)0x0) {
        local_6a0 = (undefined8 *)0x0;
    }
    else {
        local_6a0[2] = 0;
        local_6a0[1] = &local_688;
        *(undefined4 *)(local_6a0 + 3) = 0;
        local_6a0[4] = 0;
        local_6a0[5] = 0;
        local_6a0[6] = 0;
        local_6a0[7] = 0;
        local_6a0[8] = 0;
        local_6a0[9] = 0;
        local_6a0[10] = 0;
        *local_6a0 = &PTR_FUN_140b5eba0;
        *(undefined4 *)(local_6a0 + 0xb) = 0;
        local_6a0[0xc] = 0;
    }
    puVar15 = local_6a0;
    local_6a0[10] = &local_608;
    if ((*(uint *)(local_6a0 + 3) & 0x200) != 0) {
        FUN_14018b900(local_6a0[4],0);
    }
    *(undefined4 *)(puVar15 + 3) = 0;
    puVar15[4] = 0;
    puVar15[5] = 0;
    puVar8 = puVar18;
    do {
        puVar9 = puVar8;
        puVar8 = (undefined8 *)((longlong)puVar9 + 1);
    } while (L"PendingTutorials"[(longlong)puVar9 + 1] != L'\0');
    auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar9 + 2);
    uVar10 = SUB168(auVar4,0);
    if (SUB168(auVar4 >> 0x40,0) != 0) {
        uVar10 = 0xffffffffffffffff;
    }
    uVar10 = FUN_14018b280(uVar10,0);
    puVar15[4] = uVar10;
    FUN_1407db590(uVar10,L"PendingTutorials",(longlong)puVar8 * 2 + 2);
    *(undefined4 *)(puVar15 + 3) = 0x200;
    puVar15[5] = puVar15[4] + (longlong)puVar8 * 2;
    if (puVar15[1] == local_680) {
        lVar12 = puVar15[2];
        if (lVar12 == 0) {
            (**(code **)(*(longlong *)puVar15[10] + 0x20))();
        }
        else {
            if (puVar15 == *(undefined8 **)(lVar12 + 0x30)) {
                *(undefined8 *)(lVar12 + 0x30) = (*(undefined8 **)(lVar12 + 0x30))[9];
            }
            if (puVar15 == *(undefined8 **)(lVar12 + 0x38)) {
                *(undefined8 *)(lVar12 + 0x38) = (*(undefined8 **)(lVar12 + 0x38))[8];
            }
            if (puVar15[8] != 0) {
                *(undefined8 *)(puVar15[8] + 0x48) = puVar15[9];
            }
            if (puVar15[9] != 0) {
                *(undefined8 *)(puVar15[9] + 0x40) = puVar15[8];
            }
            puVar15[2] = 0;
        }
        if (local_650 == (undefined8 *)0x0) {
            puVar15[8] = 0;
            local_658 = puVar15;
        }
        else {
            local_650[9] = puVar15;
            puVar15[8] = local_650;
        }
        puVar15[9] = 0;
        puVar15[2] = &local_688;
        local_650 = puVar15;
    }
    local_6a8 = (longlong *)(*(longlong **)(param_1 + 0x48))[2];
    if (local_6a8 != *(longlong **)(param_1 + 0x48)) {
        do {
            plVar17 = local_6a8;
            iVar6 = FUN_14001b370(local_408,0x18,L"%I64d",local_6a8[4]);
            if (-1 < iVar6) {
                puVar9 = (undefined8 *)(*(code *)local_608[2])(&local_608);
                puVar8 = puVar18;
                if (puVar9 != (undefined8 *)0x0) {
                    puVar9[2] = 0;
                    puVar9[1] = &local_688;
                    *(undefined4 *)(puVar9 + 3) = 0;
                    puVar9[4] = 0;
                    puVar9[5] = 0;
                    puVar9[6] = 0;
                    puVar9[7] = 0;
                    puVar9[8] = 0;
                    puVar9[9] = 0;
                    *puVar9 = &PTR_FUN_140b5eba0;
                    puVar9[10] = 0;
                    *(undefined4 *)(puVar9 + 0xb) = 0;
                    puVar9[0xc] = 0;
                    puVar8 = puVar9;
                }
                puVar8[10] = &local_608;
                if ((*(uint *)(puVar8 + 3) & 0x200) != 0) {
                    FUN_14018b900(puVar8[4],0);
                }
                *(undefined4 *)(puVar8 + 3) = 0;
                puVar8[4] = 0;
                puVar8[5] = 0;
                puVar9 = puVar18;
                do {
                    puVar16 = puVar9;
                    puVar9 = (undefined8 *)((longlong)puVar16 + 1);
                } while (L"Character"[(longlong)puVar16 + 1] != L'\0');
                auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar16 + 2);
                uVar10 = SUB168(auVar4,0);
                if (SUB168(auVar4 >> 0x40,0) != 0) {
                    uVar10 = 0xffffffffffffffff;
                }
                uVar10 = FUN_14018b280(uVar10,0);
                puVar8[4] = uVar10;
                FUN_1407db590(uVar10,L"Character",(longlong)puVar9 * 2 + 2);
                *(undefined4 *)(puVar8 + 3) = 0x200;
                puVar8[5] = puVar8[4] + (longlong)puVar9 * 2;
                lVar12 = FUN_1401a6c70(puVar8,&DAT_140b0231c);
                if ((*(uint *)(lVar12 + 0x20) & 0x200) != 0) {
                    FUN_14018b900(*(undefined8 *)(lVar12 + 0x28),0);
                }
                *(undefined4 *)(lVar12 + 0x20) = 0;
                *(undefined8 *)(lVar12 + 0x28) = 0;
                *(undefined8 *)(lVar12 + 0x30) = 0;
                puVar9 = puVar18;
                sVar2 = local_408[0];
                while (sVar2 != 0) {
                    puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                    sVar2 = local_408[(longlong)puVar9];
                }
                auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar9 + 1);
                uVar10 = SUB168(auVar4,0);
                if (SUB168(auVar4 >> 0x40,0) != 0) {
                    uVar10 = 0xffffffffffffffff;
                }
                uVar10 = FUN_14018b280(uVar10,0);
                *(undefined8 *)(lVar12 + 0x28) = uVar10;
                FUN_1407db590(uVar10,local_408,(longlong)puVar9 * 2 + 2);
                *(undefined4 *)(lVar12 + 0x20) = 0x200;
                *(longlong *)(lVar12 + 0x30) = *(longlong *)(lVar12 + 0x28) + (longlong)puVar9 * 2;
                if (puVar8[1] == puVar15[1]) {
                    lVar12 = puVar8[2];
                    if (lVar12 == 0) {
                        (**(code **)(*(longlong *)puVar8[10] + 0x20))();
                    }
                    else {
                        if (puVar8 == *(undefined8 **)(lVar12 + 0x30)) {
                            *(undefined8 *)(lVar12 + 0x30) = (*(undefined8 **)(lVar12 + 0x30))[9];
                        }
                        if (puVar8 == *(undefined8 **)(lVar12 + 0x38)) {
                            *(undefined8 *)(lVar12 + 0x38) = (*(undefined8 **)(lVar12 + 0x38))[8];
                        }
                        if (puVar8[8] != 0) {
                            *(undefined8 *)(puVar8[8] + 0x48) = puVar8[9];
                        }
                        if (puVar8[9] != 0) {
                            *(undefined8 *)(puVar8[9] + 0x40) = puVar8[8];
                        }
                        puVar8[2] = 0;
                    }
                    if (puVar15[7] == 0) {
                        puVar15[7] = puVar8;
                        puVar15[6] = puVar8;
                        puVar8[8] = 0;
                    }
                    else {
                        *(undefined8 **)(puVar15[7] + 0x48) = puVar8;
                        puVar8[8] = puVar15[7];
                        puVar15[7] = puVar8;
                    }
                    puVar8[9] = 0;
                    puVar8[2] = puVar15;
                }
                lVar12 = plVar17[5];
                lVar11 = *(longlong *)(*(longlong *)(lVar12 + 8) + 0x10);
                param_1 = local_698;
                local_690 = lVar12;
                if (lVar11 != *(longlong *)(lVar12 + 8)) {
                    do {
                        puVar9 = (undefined8 *)(*(code *)local_608[2])(&local_608);
                        puVar15 = puVar18;
                        if (puVar9 != (undefined8 *)0x0) {
                            puVar9[2] = 0;
                            puVar9[1] = &local_688;
                            *(undefined4 *)(puVar9 + 3) = 0;
                            puVar9[4] = 0;
                            puVar9[5] = 0;
                            puVar9[6] = 0;
                            puVar9[7] = 0;
                            puVar9[8] = 0;
                            puVar9[9] = 0;
                            *puVar9 = &PTR_FUN_140b5eba0;
                            puVar9[10] = 0;
                            *(undefined4 *)(puVar9 + 0xb) = 0;
                            puVar9[0xc] = 0;
                            puVar15 = puVar9;
                        }
                        puVar15[10] = &local_608;
                        if ((*(uint *)(puVar15 + 3) & 0x200) != 0) {
                            FUN_14018b900(puVar15[4],0);
                        }
                        *(undefined4 *)(puVar15 + 3) = 0;
                        puVar15[4] = 0;
                        puVar15[5] = 0;
                        puVar9 = puVar18;
                        do {
                            puVar16 = puVar9;
                            puVar9 = (undefined8 *)((longlong)puVar16 + 1);
                        } while (L"Tutorial"[(longlong)puVar16 + 1] != L'\0');
                        auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar16 + 2);
                        uVar10 = SUB168(auVar4,0);
                        if (SUB168(auVar4 >> 0x40,0) != 0) {
                            uVar10 = 0xffffffffffffffff;
                        }
                        uVar10 = FUN_14018b280(uVar10,0);
                        puVar15[4] = uVar10;
                        FUN_1407db590(uVar10,L"Tutorial",(longlong)puVar9 * 2 + 2);
                        *(undefined4 *)(puVar15 + 3) = 0x200;
                        puVar15[5] = puVar15[4] + (longlong)puVar9 * 2;
                        uVar3 = *(undefined4 *)(lVar11 + 0x20);
                        lVar13 = FUN_1401a6c70(puVar15,&DAT_140b02298);
                        FUN_1401a4c20(local_3d8,200,&DAT_1409e41b4,uVar3);
                        if ((*(uint *)(lVar13 + 0x20) & 0x200) != 0) {
                            FUN_14018b900(*(undefined8 *)(lVar13 + 0x28),0);
                        }
                        *(undefined4 *)(lVar13 + 0x20) = 0;
                        *(undefined8 *)(lVar13 + 0x28) = 0;
                        *(undefined8 *)(lVar13 + 0x30) = 0;
                        puVar9 = puVar18;
                        sVar2 = local_3d8[0];
                        while (sVar2 != 0) {
                            puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                            sVar2 = local_3d8[(longlong)puVar9];
                        }
                        auVar4 = ZEXT816(2) * ZEXT816((longlong)puVar9 + 1);
                        uVar10 = SUB168(auVar4,0);
                        if (SUB168(auVar4 >> 0x40,0) != 0) {
                            uVar10 = 0xffffffffffffffff;
                        }
                        uVar10 = FUN_14018b280(uVar10,0);
                        *(undefined8 *)(lVar13 + 0x28) = uVar10;
                        FUN_1407db590(uVar10,local_3d8,(longlong)puVar9 * 2 + 2);
                        *(undefined4 *)(lVar13 + 0x20) = 0x200;
                        *(longlong *)(lVar13 + 0x30) = *(longlong *)(lVar13 + 0x28) + (longlong)puVar9 * 2;
                        if (puVar15[1] == puVar8[1]) {
                            lVar13 = puVar15[2];
                            if (lVar13 == 0) {
                                (**(code **)(*(longlong *)puVar15[10] + 0x20))();
                            }
                            else {
                                if (puVar15 == *(undefined8 **)(lVar13 + 0x30)) {
                                    *(undefined8 *)(lVar13 + 0x30) = (*(undefined8 **)(lVar13 + 0x30))[9];
                                }
                                if (puVar15 == *(undefined8 **)(lVar13 + 0x38)) {
                                    *(undefined8 *)(lVar13 + 0x38) = (*(undefined8 **)(lVar13 + 0x38))[8];
                                }
                                if (puVar15[8] != 0) {
                                    *(undefined8 *)(puVar15[8] + 0x48) = puVar15[9];
                                }
                                if (puVar15[9] != 0) {
                                    *(undefined8 *)(puVar15[9] + 0x40) = puVar15[8];
                                }
                                puVar15[2] = 0;
                            }
                            if (puVar8[7] == 0) {
                                puVar8[7] = puVar15;
                                puVar8[6] = puVar15;
                                puVar15[8] = 0;
                            }
                            else {
                                *(undefined8 **)(puVar8[7] + 0x48) = puVar15;
                                puVar15[8] = puVar8[7];
                                puVar8[7] = puVar15;
                            }
                            puVar15[9] = 0;
                            puVar15[2] = puVar8;
                        }
                        lVar13 = *(longlong *)(lVar11 + 0x18);
                        if (lVar13 == 0) {
                            lVar13 = *(longlong *)(lVar11 + 8);
                            if (lVar11 == *(longlong *)(lVar13 + 0x18)) {
                                do {
                                    lVar11 = lVar13;
                                    lVar13 = *(longlong *)(lVar11 + 8);
                                } while (lVar11 == *(longlong *)(lVar13 + 0x18));
                            }
                            if (*(longlong *)(lVar11 + 0x18) != lVar13) {
                                lVar11 = lVar13;
                            }
                        }
                        else {
                            for (lVar5 = *(longlong *)(lVar13 + 0x10); lVar11 = lVar13, lVar5 != 0;
                                 lVar5 = *(longlong *)(lVar5 + 0x10)) {
                                lVar13 = lVar5;
                            }
                        }
                        plVar17 = local_6a8;
                        param_1 = local_698;
                        puVar15 = local_6a0;
                    } while (lVar11 != *(longlong *)(lVar12 + 8));
                }
            }
            local_6a8 = (longlong *)plVar17[3];
            if (local_6a8 == (longlong *)0x0) {
                plVar14 = (longlong *)plVar17[1];
                if (plVar17 == (longlong *)plVar14[3]) {
                    do {
                        plVar17 = plVar14;
                        plVar14 = (longlong *)plVar17[1];
                    } while (plVar17 == (longlong *)plVar14[3]);
                }
                local_6a8 = plVar17;
                if ((longlong *)plVar17[3] != plVar14) {
                    local_6a8 = plVar14;
                }
            }
            else {
                for (plVar17 = (longlong *)local_6a8[2]; plVar17 != (longlong *)0x0;
                     plVar17 = (longlong *)plVar17[2]) {
                    local_6a8 = plVar17;
                }
            }
        } while (local_6a8 != *(longlong **)(param_1 + 0x48));
    }
    if (local_62c == 0) {
        local_6a8 = (longlong *)0x0;
        iVar6 = FUN_1401a7fc0(&local_688,&local_6a8);
        plVar17 = local_6a8;
        if (iVar6 < 0) {
            if (local_6a8 != (longlong *)0x0) {
                (**(code **)(*local_6a8 + 8))();
            }
        }
        else {
            iVar6 = FUN_1401b6f30();
            if (iVar6 < 0) {
                if (plVar17 != (longlong *)0x0) {
                    (**(code **)(*plVar17 + 8))(plVar17);
                }
            }
            else if (plVar17 != (longlong *)0x0) {
                (**(code **)(*plVar17 + 8))(plVar17);
            }
        }
    }
    local_688 = &PTR_LAB_140b5eb10;
    FUN_1401a59a0(&local_688);
    lVar12 = local_620;
    local_62c = 0;
    local_620 = 0;
    if (lVar12 != 0) {
        (**(code **)(*(longlong *)(lVar12 + -0x10) + 8))(lVar12 + -0x10);
    }
    FUN_14018b900(local_618,0);
    local_618 = 0;
    local_488 = &PTR_FUN_140b5ea18;
    while (local_424 != 0) {
        local_424 = local_424 + -1;
        FUN_14018b900(*(undefined8 *)(local_480 + (longlong)local_424 * 8),0);
    }
    local_420 = 0;
    local_418 = ZEXT816(0);
    if (local_480 != local_478) {
        FUN_14018b900(local_480,0);
    }
    local_508 = &PTR_LAB_140b5ea48;
    local_488 = &PTR_FUN_140b5ead8;
    while (local_4a4 != 0) {
        local_4a4 = local_4a4 + -1;
        FUN_14018b900(*(undefined8 *)(local_500 + (longlong)local_4a4 * 8),0);
    }
    local_4a0 = 0;
    local_498 = ZEXT816(0);
    if (local_500 != local_4f8) {
        FUN_14018b900(local_500,0);
    }
    local_508 = &PTR_FUN_140b5ead8;
    local_588 = &PTR_LAB_140b5ea78;
    while (local_524 != 0) {
        local_524 = local_524 + -1;
        FUN_14018b900(*(undefined8 *)(local_580 + (longlong)local_524 * 8),0);
    }
    local_520 = 0;
    local_518 = ZEXT816(0);
    if (local_580 != local_578) {
        FUN_14018b900(local_580,0);
    }
    local_588 = &PTR_FUN_140b5ead8;
    local_608 = &PTR_LAB_140b5eaa8;
    while (local_5a4 != 0) {
        local_5a4 = local_5a4 + -1;
        FUN_14018b900(*(undefined8 *)(local_600 + (longlong)local_5a4 * 8),0);
    }
    local_5a0 = 0;
    local_598 = ZEXT816(0);
    if (local_600 != local_5f8) {
        FUN_14018b900(local_600,0);
    }
    local_608 = &PTR_FUN_140b5ead8;
    if (local_620 != 0) {
        (**(code **)(*(longlong *)(local_620 + -0x10) + 8))(local_620 + -0x10);
    }
    local_688 = &PTR_LAB_140b5ede0;
    FUN_1401a59a0(&local_688);
    if (local_678 != 0) {
        if (&local_688 == *(undefined ****)(local_678 + 0x30)) {
            *(undefined ***)(local_678 + 0x30) = (*(undefined ****)(local_678 + 0x30))[9];
        }
        if (&local_688 == *(undefined ****)(local_678 + 0x38)) {
            *(undefined ***)(local_678 + 0x38) = (*(undefined ****)(local_678 + 0x38))[8];
        }
        if (local_648 != 0) {
            *(longlong *)(local_648 + 0x48) = local_640;
        }
        if (local_640 != 0) {
            *(longlong *)(local_640 + 0x40) = local_648;
        }
        local_678 = 0;
    }
    if ((local_670 & 0x200) != 0) {
        FUN_14018b900(local_668,0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack1768);
    return;
}



// WARNING: Could not reconcile some variable overlaps

short ** FUN_140439fc0(longlong *param_1,short **param_2)

{
    short sVar1;
    short *psVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined2 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined **local_f8;
    undefined local_f0 [8];
    undefined2 *local_e8;
    undefined2 *local_e0;
    undefined local_38 [16];
    undefined2 *local_28;

    psVar2 = (short *)FUN_14034bdd0(param_1,*(undefined4 *)(*param_1 + 0xc));
    puVar7 = (undefined8 *)0x0;
    puVar4 = puVar7;
    if (psVar2 != (short *)0x0) {
        sVar1 = *psVar2;
        puVar8 = puVar7;
        while (sVar1 != 0) {
            puVar8 = (undefined8 *)((longlong)puVar8 + 1);
            sVar1 = psVar2[(longlong)puVar8];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = &PTR_LAB_140b55060;
            puVar3[1] = puVar8;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,psVar2,(longlong)puVar8 * 2);
        *(short *)((longlong)puVar8 * 2 + (longlong)puVar4) = 0;
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        *param_2 = (short *)puVar4;
    }
    else {
        FUN_1400b6f30(&local_f8);
        local_f8 = &PTR_FUN_140b69230;
        local_28 = (undefined2 *)0x0;
        local_38 = ZEXT816(0);
        puVar5 = (undefined2 *)FUN_14018b280(0x10);
        local_38 = CONCAT88(puVar5,puVar5);
        local_28 = puVar5 + 8;
        if (puVar5 != (undefined2 *)0x0) {
            *puVar5 = 0;
        }
        if (puVar4 == (undefined8 *)0x0) {
            if (local_e8 != local_e0) {
                *local_e8 = 0;
                local_e0 = local_e8;
            }
        }
        else {
            sVar1 = *(short *)puVar4;
            puVar8 = puVar7;
            while (sVar1 != 0) {
                puVar8 = (undefined8 *)((longlong)puVar8 + 1);
                sVar1 = *(short *)((longlong)puVar4 + (longlong)puVar8 * 2);
            }
            FUN_14001c480(local_f0,puVar4,(short *)((longlong)puVar4 + (longlong)puVar8 * 2));
        }
        lVar6 = FUN_14018b280(0x60);
        puVar8 = puVar7;
        if (lVar6 != 0) {
            puVar8 = (undefined8 *)FUN_1404db7e0(lVar6,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        FUN_1400b7480(&local_f8,puVar8);
        lVar6 = FUN_1400b7660(&local_f8);
        lVar9 = *(longlong *)(lVar6 + 0x10) - *(longlong *)(lVar6 + 8) >> 1;
        puVar8 = (undefined8 *)FUN_14018b280(lVar9 * 2 + 0x12,0);
        if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = &PTR_LAB_140b55060;
            puVar8[1] = lVar9;
            puVar7 = puVar8;
        }
        puVar7 = puVar7 + 2;
        FUN_1407db590(puVar7,*(undefined8 *)(lVar6 + 8),lVar9 * 2);
        *(short *)(lVar9 * 2 + (longlong)puVar7) = 0;
        *param_2 = (short *)puVar7;
        if (local_38._0_8_ != 0) {
            FUN_14018b900(local_38._0_8_,0);
        }
        FUN_1400b7390(&local_f8);
        if (puVar4 != (undefined8 *)0x0) {
            (**(code **)(puVar4[-2] + 8))(puVar4 + -2);
        }
    }
    return param_2;
}



undefined8 FUN_14043a1f0(undefined8 param_1,uint param_2,uint param_3)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    int iVar5;
    undefined8 uVar6;
    longlong local_res8;

    lVar2 = *(longlong *)(DAT_140c658d8 + 8);
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
    if ((local_res8 != lVar2) &&
        (plVar4 = *(longlong **)(local_res8 + 0x28), plVar4 != (longlong *)0x0)) {
        if ((ulonglong)param_3 < (ulonglong)(plVar4[3] - plVar4[2] >> 3)) {
            lVar2 = *(longlong *)(plVar4[2] + (ulonglong)param_3 * 8);
            if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x38), iVar1 != 0)) {
                if ((*(byte *)(*plVar4 + 4) & 2) == 0) {
                    iVar5 = DAT_140c3b390;
                    if (*DAT_140c63750 < DAT_140c3b390) {
                        iVar5 = *DAT_140c63750;
                    }
                    if ((*(uint *)(&DAT_140c3b3a0 + (longlong)iVar5 * 4) >> (*(uint *)(*plVar4 + 8) & 0x1f) &
                         1) == 0) {
                        return 0x80004005;
                    }
                }
                if (*(longlong *)(DAT_140c658d8 + 0x60) != 0) {
                    uVar6 = FUN_140712a40(*(longlong *)(DAT_140c658d8 + 0x60),iVar1,&LAB_14043a2f0,
                                          DAT_140c658d8);
                    return uVar6;
                }
            }
            return 0x80004005;
        }
    }
    return 0x80070057;
}



void FUN_14043a320(longlong param_1,longlong param_2)

{
    longlong lVar1;
    longlong lVar2;

    if (param_1 != param_2) {
        lVar2 = param_2 - param_1 >> 3;
        for (lVar1 = lVar2; lVar1 != 1; lVar1 = lVar1 >> 1) {
        }
        FUN_14043a3d0();
        if (lVar2 < 0x11) {
            FUN_14043a560(param_1,param_2,&LAB_140439fb0);
        }
        else {
            FUN_14043a560(param_1,param_1 + 0x80,&LAB_140439fb0);
            FUN_14043a780(param_1 + 0x80,param_2);
        }
    }
    return;
}



void FUN_14043a3d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
                   code *param_5)

{
    undefined8 uVar1;
    undefined8 uVar2;
    char cVar3;
    ulonglong uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    uVar4 = (longlong)param_2 - (longlong)param_1;
    do {
        if ((longlong)(uVar4 & 0xfffffffffffffff8) < 0x81) {
            return;
        }
        if (param_4 == 0) {
            FUN_14043a640(param_1,param_2,param_2,0,param_5);
            return;
        }
        puVar7 = param_2 + -1;
        param_4 = param_4 + -1;
        puVar5 = param_1 + (((longlong)param_2 - (longlong)param_1 >> 3) -
                            ((longlong)param_2 - (longlong)param_1 >> 0x3f) >> 1);
        cVar3 = (*param_5)(*param_1,*puVar5);
        if (cVar3 == '\0') {
            cVar3 = (*param_5)(*param_1,*puVar7);
            puVar6 = param_1;
            if (cVar3 == '\0') {
                cVar3 = (*param_5)(*puVar5,*puVar7);
                goto LAB_14043a479;
            }
        }
        else {
            cVar3 = (*param_5)(*puVar5);
            puVar6 = puVar5;
            if (cVar3 == '\0') {
                cVar3 = (*param_5)(*param_1,*puVar7);
                puVar5 = param_1;
                LAB_14043a479:
                puVar6 = puVar5;
                if (cVar3 != '\0') {
                    puVar6 = puVar7;
                }
            }
        }
        uVar1 = *puVar6;
        puVar5 = param_1;
        puVar7 = param_2;
        while( true ) {
            cVar3 = (*param_5)(*puVar5,uVar1);
            puVar6 = puVar5;
            while (cVar3 != '\0') {
                puVar5 = puVar6 + 1;
                puVar6 = puVar6 + 1;
                cVar3 = (*param_5)(*puVar5,uVar1);
            }
            cVar3 = (*param_5)(uVar1,puVar7[-1]);
            puVar5 = puVar7;
            while (puVar7 = puVar5 + -1, cVar3 != '\0') {
                cVar3 = (*param_5)(uVar1,puVar5[-2]);
                puVar5 = puVar7;
            }
            if (puVar7 <= puVar6) break;
            uVar2 = *puVar6;
            puVar5 = puVar6 + 1;
            *puVar6 = *puVar7;
            *puVar7 = uVar2;
        }
        FUN_14043a3d0(puVar6,param_2,0,param_4,param_5);
        uVar4 = (longlong)puVar6 - (longlong)param_1;
        param_2 = puVar6;
    } while( true );
}



void FUN_14043a560(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
    undefined8 uVar1;
    undefined8 *puVar2;
    char cVar3;
    undefined8 *puVar4;

    if (param_1 != param_2) {
        for (puVar4 = param_1 + 1; puVar4 != param_2; puVar4 = puVar4 + 1) {
            uVar1 = *puVar4;
            cVar3 = (*param_3)(uVar1,*param_1);
            if (cVar3 == '\0') {
                cVar3 = (*param_3)(uVar1,puVar4[-1]);
                puVar2 = puVar4;
                while (cVar3 != '\0') {
                    *puVar2 = puVar2[-1];
                    cVar3 = (*param_3)(uVar1,puVar2[-2]);
                    puVar2 = puVar2 + -1;
                }
                *puVar2 = uVar1;
            }
            else {
                FUN_1407db590(puVar4 + (1 - ((longlong)puVar4 - (longlong)param_1 >> 3)),param_1);
                *param_1 = uVar1;
            }
        }
    }
    return;
}



void FUN_14043a640(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
                   code *param_5)

{
    undefined8 uVar1;
    char cVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 *puVar8;
    bool bVar9;

    FUN_14043a970(param_1,param_2,param_5);
    puVar8 = param_2;
    if (param_2 < param_3) {
        do {
            cVar2 = (*param_5)(*puVar8,*param_1);
            if (cVar2 != '\0') {
                uVar1 = *puVar8;
                lVar3 = 2;
                lVar4 = 0;
                lVar6 = (longlong)param_2 - (longlong)param_1 >> 3;
                *puVar8 = *param_1;
                bVar9 = lVar6 == 2;
                lVar5 = lVar4;
                if (2 < lVar6) {
                    do {
                        cVar2 = (*param_5)(param_1[lVar3],param_1[lVar3 + -1]);
                        lVar4 = lVar3;
                        if (cVar2 != '\0') {
                            lVar4 = lVar3 + -1;
                        }
                        param_1[lVar5] = param_1[lVar4];
                        lVar3 = lVar4 * 2 + 2;
                        bVar9 = lVar3 == lVar6;
                        lVar5 = lVar4;
                    } while (lVar3 < lVar6);
                }
                if (bVar9) {
                    param_1[lVar4] = param_1[lVar3 + -1];
                    lVar4 = lVar3 + -1;
                }
                while (0 < lVar4) {
                    lVar3 = (lVar4 + -1) / 2;
                    cVar2 = (*param_5)(param_1[lVar3],uVar1);
                    if (cVar2 == '\0') break;
                    param_1[lVar4] = param_1[lVar3];
                    lVar4 = lVar3;
                }
                param_1[lVar4] = uVar1;
            }
            puVar8 = puVar8 + 1;
        } while (puVar8 < param_3);
    }
    if (8 < (longlong)((longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff8U)) {
        lVar4 = -(longlong)param_1;
        param_2 = param_2 + -1;
        do {
            uVar1 = *param_2;
            lVar7 = lVar4 + (longlong)param_2 >> 3;
            lVar5 = 2;
            lVar3 = 0;
            *param_2 = *param_1;
            bVar9 = lVar7 == 2;
            lVar6 = lVar3;
            if (2 < lVar7) {
                do {
                    cVar2 = (*param_5)(param_1[lVar5],param_1[lVar5 + -1]);
                    lVar3 = lVar5;
                    if (cVar2 != '\0') {
                        lVar3 = lVar5 + -1;
                    }
                    param_1[lVar6] = param_1[lVar3];
                    lVar5 = lVar3 * 2 + 2;
                    bVar9 = lVar5 == lVar7;
                    lVar6 = lVar3;
                } while (lVar5 < lVar7);
            }
            if (bVar9) {
                param_1[lVar3] = param_1[lVar5 + -1];
                lVar3 = lVar5 + -1;
            }
            while (0 < lVar3) {
                lVar5 = (lVar3 + -1) / 2;
                cVar2 = (*param_5)(param_1[lVar5],uVar1);
                if (cVar2 == '\0') break;
                param_1[lVar3] = param_1[lVar5];
                lVar3 = lVar5;
            }
            param_2 = param_2 + -1;
            param_1[lVar3] = uVar1;
        } while (8 < (longlong)((longlong)param_2 + (8 - (longlong)param_1) & 0xfffffffffffffff8U));
    }
    return;
}



void FUN_14043a780(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
    undefined8 uVar1;
    undefined8 *puVar2;
    char cVar3;

    if (param_1 != param_2) {
        do {
            uVar1 = *param_1;
            cVar3 = (*param_4)(uVar1,param_1[-1]);
            puVar2 = param_1;
            while (cVar3 != '\0') {
                *puVar2 = puVar2[-1];
                cVar3 = (*param_4)(uVar1,puVar2[-2]);
                puVar2 = puVar2 + -1;
            }
            param_1 = param_1 + 1;
            *puVar2 = uVar1;
        } while (param_1 != param_2);
    }
    return;
}



void FUN_14043a970(longlong param_1,longlong param_2,code *param_3)

{
    longlong lVar1;
    undefined8 uVar2;
    char cVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar7 = param_2 - param_1 >> 3;
    if (lVar7 < 2) {
        return;
    }
    lVar4 = (lVar7 + -2) / 2;
    lVar6 = lVar4 * 2 + 2;
    do {
        uVar2 = *(undefined8 *)(param_1 + lVar4 * 8);
        lVar1 = lVar4;
        for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
            cVar3 = (*param_3)(*(undefined8 *)(param_1 + lVar5 * 8),
                               *(undefined8 *)(param_1 + -8 + lVar5 * 8));
            if (cVar3 != '\0') {
                lVar5 = lVar5 + -1;
            }
            *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
            lVar1 = lVar5;
        }
        if (lVar5 == lVar7) {
            *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + -8 + lVar5 * 8);
            lVar1 = lVar5 + -1;
        }
        while (lVar4 < lVar1) {
            lVar5 = (lVar1 + -1) / 2;
            cVar3 = (*param_3)(*(undefined8 *)(param_1 + lVar5 * 8),uVar2);
            if (cVar3 == '\0') break;
            *(undefined8 *)(param_1 + lVar1 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
            lVar1 = lVar5;
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = uVar2;
        if (lVar4 == 0) {
            return;
        }
        lVar4 = lVar4 + -1;
        lVar6 = lVar6 + -2;
    } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined * FUN_14043aaa0(void)

{
    DAT_140c7cc78 = FUN_14018b280(0x68);
    *(longlong *)DAT_140c7cc78 = DAT_140c7cc78;
    *(longlong *)(DAT_140c7cc78 + 8) = DAT_140c7cc78;
    DAT_140c7cc88 = FUN_14018b280(0x68);
    *(longlong *)DAT_140c7cc88 = DAT_140c7cc88;
    *(longlong *)(DAT_140c7cc88 + 8) = DAT_140c7cc88;
    DAT_140c7cc98 = (undefined *)FUN_14018b280(0x28);
    _DAT_140c7cca0 = 0;
    *DAT_140c7cc98 = 0;
    *(undefined8 *)(DAT_140c7cc98 + 8) = 0;
    *(undefined **)(DAT_140c7cc98 + 0x10) = DAT_140c7cc98;
    *(undefined **)(DAT_140c7cc98 + 0x18) = DAT_140c7cc98;
    DAT_140c7ccb8 = (undefined *)FUN_14018b280(0x30,0);
    _DAT_140c7ccc0 = 0;
    *DAT_140c7ccb8 = 0;
    *(undefined8 *)(DAT_140c7ccb8 + 8) = 0;
    *(undefined **)(DAT_140c7ccb8 + 0x10) = DAT_140c7ccb8;
    *(undefined **)(DAT_140c7ccb8 + 0x18) = DAT_140c7ccb8;
    DAT_140c7ccd8 = (undefined *)FUN_14018b280(0x30,0);
    _DAT_140c7cce0 = 0;
    *DAT_140c7ccd8 = 0;
    *(undefined8 *)(DAT_140c7ccd8 + 8) = 0;
    *(undefined **)(DAT_140c7ccd8 + 0x10) = DAT_140c7ccd8;
    *(undefined **)(DAT_140c7ccd8 + 0x18) = DAT_140c7ccd8;
    DAT_140c7ccf8 = (undefined *)FUN_14018b280(0x30,0);
    _DAT_140c7cd00 = 0;
    *DAT_140c7ccf8 = 0;
    *(undefined8 *)(DAT_140c7ccf8 + 8) = 0;
    *(undefined **)(DAT_140c7ccf8 + 0x10) = DAT_140c7ccf8;
    *(undefined **)(DAT_140c7ccf8 + 0x18) = DAT_140c7ccf8;
    DAT_140c7cd18 = (undefined *)FUN_14018b280(0x30,0);
    _DAT_140c7cd20 = 0;
    *DAT_140c7cd18 = 0;
    *(undefined8 *)(DAT_140c7cd18 + 8) = 0;
    *(undefined **)(DAT_140c7cd18 + 0x10) = DAT_140c7cd18;
    *(undefined **)(DAT_140c7cd18 + 0x18) = DAT_140c7cd18;
    DAT_140c7cd38 = (undefined *)FUN_14018b280(0x30,0);
    _DAT_140c7cd40 = 0;
    *DAT_140c7cd38 = 0;
    *(undefined8 *)(DAT_140c7cd38 + 8) = 0;
    *(undefined **)(DAT_140c7cd38 + 0x10) = DAT_140c7cd38;
    *(undefined **)(DAT_140c7cd38 + 0x18) = DAT_140c7cd38;
    DAT_140c7cd58 = FUN_14018b280(0x18,0);
    *(longlong *)DAT_140c7cd58 = DAT_140c7cd58;
    *(longlong *)(DAT_140c7cd58 + 8) = DAT_140c7cd58;
    _DAT_140c7cd60 = 0;
    _DAT_140c7cd68 = 0;
    DAT_140c7cd6c = 0;
    _DAT_140c7cd70 = 0;
    DAT_140c7cd78 = 0;
    return &DAT_140c7cc70;
}



void FUN_14043aca0(void)

{
    longlong **pplVar1;
    longlong **pplVar2;

    FUN_14043af30();
    pplVar2 = (longlong **)*DAT_140c7cd58;
    if (pplVar2 != DAT_140c7cd58) {
        do {
            pplVar1 = (longlong **)*pplVar2;
            FUN_14018b900(pplVar2,0);
            pplVar2 = pplVar1;
        } while (pplVar1 != DAT_140c7cd58);
    }
    *DAT_140c7cd58 = (longlong *)DAT_140c7cd58;
    DAT_140c7cd58[1] = (longlong *)DAT_140c7cd58;
    FUN_14018b900(DAT_140c7cd58,0);
    FUN_140008410(&DAT_140c7cd30);
    FUN_14018b900(DAT_140c7cd38,0);
    FUN_140008410(&DAT_140c7cd10);
    FUN_14018b900(DAT_140c7cd18,0);
    FUN_140008410(&DAT_140c7ccf0);
    FUN_14018b900(DAT_140c7ccf8,0);
    FUN_140008410(&DAT_140c7ccd0);
    FUN_14018b900(DAT_140c7ccd8,0);
    FUN_140008410(&DAT_140c7ccb0);
    FUN_14018b900(DAT_140c7ccb8,0);
    FUN_140008410(&DAT_140c7cc90);
    FUN_14018b900(DAT_140c7cc98,0);
    FUN_14043da00(&DAT_140c7cc80);
    FUN_14018b900(DAT_140c7cc88,0);
    FUN_14043da00(&DAT_140c7cc70);
    FUN_14018b900(DAT_140c7cc78,0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14043add0(void)

{
    uint uVar1;
    int iVar2;
    longlong lVar3;
    uint uVar4;

    uVar4 = 0;
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64e70 == 0) {
            iVar2 = FUN_1401f4d40();
            if (iVar2 < 0) {
                uVar1 = 0;
            }
            else {
                uVar1 = (**(code **)(*DAT_140c64b78 + 0x28))();
            }
        }
        else {
            uVar1 = 0;
        }
    }
    else {
        uVar1 = (*DAT_140c63838)(&PTR_u_CommunicatorMessages_140a69ad8,DAT_140c63858);
    }
    if (uVar1 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64e70 == 0) && (iVar2 = FUN_1401f4d40(), -1 < iVar2)) {
                    lVar3 = (**(code **)(*DAT_140c64b78 + 0x20))(DAT_140c64b78,uVar4);
                    goto LAB_14043ae79;
                }
            }
            else {
                lVar3 = (*DAT_140c63848)(&PTR_u_CommunicatorMessages_140a69ad8);
                LAB_14043ae79:
                if (lVar3 != 0) {
                    if ((*(byte *)(lVar3 + 0xc) & 1) == 0) {
                        FUN_14043b280();
                        FUN_14043b280();
                        FUN_14043b280();
                        FUN_14043b280();
                        FUN_14043b280();
                        FUN_14043b280();
                    }
                    if (*(int *)(lVar3 + 0x54) != 0) {
                        FUN_14043b280();
                    }
                }
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14043af30(void)

{
    longlong *plVar1;

    FUN_14043c620();
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    FUN_14043b6b0();
    plVar1 = DAT_140c7cd78;
    if (DAT_140c7cd78 != (longlong *)0x0) {
        DAT_140c7cd78[8] = 0;
        plVar1[9] = 0;
        plVar1 = DAT_140c7cd78;
        if ((longlong *)DAT_140c7cd78[2] != (longlong *)0x0) {
            (**(code **)(*(longlong *)DAT_140c7cd78[2] + 8))();
            plVar1[2] = 0;
        }
        if (DAT_140c7cd78 != (longlong *)0x0) {
            (**(code **)(*DAT_140c7cd78 + 8))(DAT_140c7cd78);
            DAT_140c7cd78 = (longlong *)0x0;
        }
        _DAT_140c7cd60 = 0;
        return;
    }
    _DAT_140c7cd60 = 0;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14043aff0(void)

{
    undefined4 uVar1;
    longlong *plVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    undefined local_68 [24];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;

    _DAT_140c7cd60 = 1;
    lVar6 = *(longlong *)(DAT_140c7cd38 + 0x10);
    if (lVar6 != DAT_140c7cd38) {
        do {
            lVar5 = *(longlong *)(lVar6 + 0x28);
            plVar2 = *(longlong **)(lVar5 + 8);
            plVar7 = (longlong *)*plVar2;
            if (plVar7 != plVar2) {
                do {
                    uVar1 = *(undefined4 *)(plVar7 + 2);
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c64e70 == 0) && (iVar3 = FUN_1401f4d40(), -1 < iVar3)) {
                            lVar4 = (**(code **)(*DAT_140c64b78 + 0x18))(DAT_140c64b78,uVar1);
                            goto LAB_14043b094;
                        }
                    }
                    else {
                        lVar4 = (*DAT_140c63840)(&PTR_u_CommunicatorMessages_140a69ad8,uVar1,DAT_140c63858);
                        LAB_14043b094:
                        if ((((lVar4 != 0) && ((*(byte *)(lVar4 + 0xc) & 1) == 0)) && (_DAT_140c7cd60 != 0)) &&
                            (iVar3 = FUN_14043d3d0(&DAT_140c7cc70), iVar3 == 0)) {
                            local_50 = (undefined2 *)FUN_14018b280(0x10);
                            local_40 = local_50 + 8;
                            if (local_50 != (undefined2 *)0x0) {
                                *local_50 = 0;
                            }
                            local_48 = local_50;
                            FUN_14043cc10(lVar4,local_68);
                            FUN_14043bf30(&DAT_140c7cc70);
                            if (local_50 != (undefined2 *)0x0) {
                                FUN_14018b900();
                            }
                            break;
                        }
                    }
                    plVar7 = (longlong *)*plVar7;
                } while (plVar7 != (longlong *)*(longlong *)(lVar5 + 8));
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
        } while (lVar6 != DAT_140c7cd38);
    }
    _DAT_140c7cd64 = 1;
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14043b1b0(undefined8 param_1,float param_2)

{
    int iVar1;

    if (0.0 < DAT_140c7cd6c) {
        iVar1 = (int)DAT_140c7cd6c;
        DAT_140c7cd6c = DAT_140c7cd6c - param_2;
        if (DAT_140c7cd6c < 0.0) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Communicator_EndIncoming",
                          &DAT_1409d0b07);
            FUN_140437a10(DAT_140c658d8,0x92,0,0,0,0,1);
            return;
        }
        if ((iVar1 % 5 < (int)DAT_140c7cd6c % 5) && (_DAT_140c7cd70 == 0)) {
            FUN_140051af0(0,0x38);
            return;
        }
    }
    return;
}



void FUN_14043b280(undefined8 param_1,int param_2,uint param_3,longlong param_4)

{
    longlong lVar1;
    longlong lVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong *plVar5;
    undefined8 uVar6;
    longlong local_res8;
    uint local_38 [2];
    longlong local_30;
    undefined local_28 [16];

    if ((param_2 != 0) && (param_3 != 0)) {
        lVar1 = *(longlong *)(param_4 + 8);
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
        if (local_res8 != lVar1) {
            pplVar3 = *(longlong ***)(*(longlong *)(local_res8 + 0x28) + 8);
            pplVar4 = (longlong **)*pplVar3;
            if (pplVar4 != pplVar3) {
                do {
                    if (*(int *)(pplVar4 + 2) == param_2) break;
                    pplVar4 = (longlong **)*pplVar4;
                } while (pplVar4 != pplVar3);
                if (pplVar4 != pplVar3) {
                    return;
                }
            }
            plVar5 = (longlong *)FUN_14018b280(0x18);
            if (plVar5 + 2 != (longlong *)0x0) {
                *(int *)(plVar5 + 2) = param_2;
            }
            *plVar5 = (longlong)pplVar3;
            plVar5[1] = (longlong)pplVar3[1];
            *pplVar3[1] = (longlong)plVar5;
            pplVar3[1] = plVar5;
            return;
        }
        local_30 = FUN_14018b280(0x10);
        if (local_30 == 0) {
            local_30 = 0;
        }
        else {
            uVar6 = FUN_14018b280(0x18);
            *(undefined8 *)(local_30 + 8) = uVar6;
            *(undefined8 *)uVar6 = uVar6;
            *(longlong *)(*(longlong *)(local_30 + 8) + 8) = *(longlong *)(local_30 + 8);
        }
        lVar1 = *(longlong *)(local_30 + 8);
        plVar5 = (longlong *)FUN_14018b280(0x18);
        if (plVar5 + 2 != (longlong *)0x0) {
            *(int *)(plVar5 + 2) = param_2;
        }
        *plVar5 = lVar1;
        plVar5[1] = *(longlong *)(lVar1 + 8);
        **(longlong ***)(lVar1 + 8) = plVar5;
        *(longlong **)(lVar1 + 8) = plVar5;
        local_38[0] = param_3;
        FUN_140055f80(param_4,local_28,local_38);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14043b3f0(undefined8 param_1,int param_2)

{
    int iVar1;
    longlong lVar2;

    FUN_1405fccb0(*DAT_140c65b80);
    if (param_2 != 0) {
        do {
            if (DAT_140c63840 == (code *)0x0) {
                if (_DAT_140c64634 != 0) {
                    return;
                }
                iVar1 = FUN_14024d920();
                if (iVar1 < 0) {
                    return;
                }
                lVar2 = (**(code **)(*DAT_140c64270 + 0x18))(DAT_140c64270,param_2);
            }
            else {
                lVar2 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,param_2,DAT_140c63858);
            }
            if (lVar2 == 0) {
                return;
            }
            FUN_14043b4e0();
            param_2 = *(int *)(lVar2 + 8);
        } while (param_2 != 0);
    }
    return;
}



void FUN_14043b4a0(void)

{
    FUN_1405fccb0(*DAT_140c65b80);
    FUN_14043b4e0();
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14043b4e0(undefined8 param_1,uint param_2,longlong param_3,undefined8 *param_4)

{
    undefined4 uVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong local_res8;
    undefined local_78 [24];
    undefined2 *local_60;
    undefined2 *local_58;
    undefined2 *local_50;

    lVar2 = *(longlong *)(param_3 + 8);
    local_res8 = lVar2;
    lVar5 = *(longlong *)(lVar2 + 8);
    while (lVar5 != 0) {
        if (*(uint *)(lVar5 + 0x20) < param_2) {
            lVar5 = *(longlong *)(lVar5 + 0x18);
        }
        else {
            local_res8 = lVar5;
            lVar5 = *(longlong *)(lVar5 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if (local_res8 != lVar2) {
        lVar2 = *(longlong *)(local_res8 + 0x28);
        plVar3 = *(longlong **)(lVar2 + 8);
        plVar6 = (longlong *)*plVar3;
        if (plVar6 != plVar3) {
            do {
                uVar1 = *(undefined4 *)(plVar6 + 2);
                if (DAT_140c63840 == (code *)0x0) {
                    if (_DAT_140c64e70 == 0) {
                        iVar4 = FUN_1401f4d40();
                        if (-1 < iVar4) {
                            lVar5 = (**(code **)(*DAT_140c64b78 + 0x18))(DAT_140c64b78,uVar1);
                            goto LAB_14043b5cd;
                        }
                        lVar5 = 0;
                    }
                    else {
                        lVar5 = 0;
                    }
                    LAB_14043b5e8:
                    if ((_DAT_140c7cd60 != 0) &&
                        ((lVar5 != 0 && (iVar4 = FUN_14043d3d0(&DAT_140c7cc70), iVar4 == 0)))) {
                        if (*(int *)(lVar5 + 8) == 0) {
                            local_60 = (undefined2 *)FUN_14018b280(0x10);
                            local_50 = local_60 + 8;
                            if (local_60 != (undefined2 *)0x0) {
                                *local_60 = 0;
                            }
                            local_58 = local_60;
                            FUN_14043cc10(lVar5,local_78);
                            FUN_14043bf30(&DAT_140c7cc70);
                            if (local_60 != (undefined2 *)0x0) {
                                FUN_14018b900();
                            }
                        }
                        else {
                            FUN_14043bd20();
                        }
                    }
                }
                else {
                    lVar5 = (*DAT_140c63840)(&PTR_u_CommunicatorMessages_140a69ad8,uVar1,DAT_140c63858);
                    LAB_14043b5cd:
                    if ((lVar5 == 0) || (iVar4 = (**(code **)*param_4)(param_4), iVar4 != 0))
                        goto LAB_14043b5e8;
                }
                plVar6 = (longlong *)*plVar6;
            } while (plVar6 != (longlong *)*(longlong *)(lVar2 + 8));
        }
    }
    return;
}



void FUN_14043b6b0(undefined8 param_1,longlong param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;

    lVar4 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x10);
    if (lVar4 != *(longlong *)(param_2 + 8)) {
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
        } while (lVar4 != *(longlong *)(param_2 + 8));
    }
    FUN_140008410(param_2);
    return;
}



void FUN_14043b7b0(undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
    int iVar1;
    longlong lVar2;
    undefined local_68 [24];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined4 local_2c;

    lVar2 = FUN_1401f4fa0(param_2);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xc) & 1) != 0)) {
        if (*(int *)(lVar2 + 8) != 0) {
            FUN_14043bd20();
            return;
        }
        if ((param_4 != 0) && (iVar1 = FUN_14043d3d0(&DAT_140c7cc70,lVar2), iVar1 != 0)) {
            return;
        }
        local_50 = (undefined2 *)FUN_14018b280(0x10);
        local_40 = local_50 + 8;
        if (local_50 != (undefined2 *)0x0) {
            *local_50 = 0;
        }
        local_48 = local_50;
        FUN_14043cc10(lVar2,local_68);
        local_2c = 0;
        FUN_14043bf30(&DAT_140c7cc70,local_68);
        if (local_50 != (undefined2 *)0x0) {
            FUN_14018b900(local_50,0);
        }
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x00014043b92e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14043b880(undefined8 param_1,longlong param_2,longlong *param_3)

{
    short sVar1;
    short *psVar2;
    undefined2 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 local_68;
    undefined4 local_60;
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;
    undefined8 local_38;
    int local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    _DAT_140c7cd68 = 1;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    lVar5 = 0;
    local_40 = puVar3 + 8;
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    local_60 = *(undefined4 *)(param_2 + 0x18);
    local_68 = 0;
    local_38 = 0;
    local_50 = puVar3;
    local_48 = puVar3;
    lVar4 = (**(code **)(*param_3 + 0xb0))(param_3);
    psVar2 = *(short **)(lVar4 + 8);
    sVar1 = *psVar2;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = psVar2[lVar5];
    }
    if (lVar5 * 2 >> 1 == 0) {
        FUN_1407db590(puVar3,psVar2,0);
    }
    else {
        FUN_14001c310();
    }
    local_30 = 0;
    if (*(int *)(param_2 + 4) != 0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_2 + 0x18));
        if (lVar5 == 0) {
            FUN_140612e30();
        }
        else {
            FUN_140612e30(*(undefined4 *)(lVar5 + 0xd8),*(undefined4 *)(param_2 + 4),
                          *(undefined4 *)(lVar5 + 0x34),*(undefined4 *)(lVar5 + 0xdc),
                          *(undefined4 *)(lVar5 + 0xd8));
        }
    }
    lVar5 = FUN_140211280();
    if ((lVar5 != 0) &&
        ((((*(uint *)(DAT_140c63628 + 0x5f4) & *(uint *)(lVar5 + 0x18)) == 0 ||
           (*(int *)(DAT_140c635f0 + 0x1698) != 1)) || (local_30 = *(int *)(lVar5 + 8), local_30 == 0)))
            ) {
        local_30 = *(int *)(lVar5 + 4);
    }
    local_28 = *(undefined4 *)(param_2 + 0x1c);
    local_20 = *(undefined4 *)(param_2 + 0x28);
    local_1c = *(undefined4 *)(param_2 + 0x20);
    local_2c = 0;
    local_18 = *(undefined4 *)(param_2 + 0x24);
    local_24 = 0;
    _DAT_140c7cd68 = 0;
    FUN_14043bf30(&DAT_140c7cc70,&local_68);
    if (local_50 != (undefined2 *)0x0) {
        FUN_14018b900(local_50,0);
    }
    return;
}



void FUN_14043ba60(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   int param_5)

{
    undefined2 *puVar1;
    longlong lVar2;
    undefined local_88 [8];
    longlong local_80;
    undefined8 local_68;
    undefined4 local_60;
    longlong local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    int local_30;
    undefined8 local_2c;
    undefined8 local_24;
    undefined8 local_1c;

    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_68 = 0;
    local_38 = 0;
    local_60 = param_2;
    FUN_1404835c0(DAT_140c65918,param_2);
    lVar2 = FUN_14054f9e0(local_88,param_3);
    local_50 = *(longlong *)(lVar2 + 8);
    *(undefined2 **)(lVar2 + 8) = puVar1;
    local_48 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined2 **)(lVar2 + 0x10) = puVar1;
    local_40 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined2 **)(lVar2 + 0x18) = puVar1 + 8;
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    if (param_5 == 0) {
        lVar2 = FUN_140211280();
        if (lVar2 == 0) {
            param_5 = 0;
        }
        else if ((((*(uint *)(DAT_140c63628 + 0x5f4) & *(uint *)(lVar2 + 0x18)) == 0) ||
                  (*(int *)(DAT_140c635f0 + 0x1698) != 1)) ||
                 (param_5 = *(int *)(lVar2 + 8), param_5 == 0)) {
            param_5 = *(int *)(lVar2 + 4);
        }
    }
    local_2c = 1;
    local_24 = 0;
    local_1c = 0;
    local_30 = param_5;
    FUN_14043bf30(&DAT_140c7cc70,&local_68);
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    return;
}



void FUN_14043bbc0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined8 param_5,undefined4 param_6)

{
    undefined2 *puVar1;
    longlong lVar2;
    undefined local_88 [8];
    longlong local_80;
    undefined8 local_68;
    undefined4 local_60;
    longlong local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined4 local_38;
    undefined4 local_34;
    int local_30;
    undefined8 local_2c;
    undefined8 local_24;
    undefined8 local_1c;

    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    local_68 = 0;
    local_30 = 0;
    local_38 = 0;
    local_34 = param_6;
    local_60 = param_2;
    FUN_1404835c0(DAT_140c65918,param_2);
    lVar2 = FUN_14054f9e0(local_88,param_3);
    local_50 = *(longlong *)(lVar2 + 8);
    *(undefined2 **)(lVar2 + 8) = puVar1;
    local_48 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined2 **)(lVar2 + 0x10) = puVar1;
    local_40 = *(undefined8 *)(lVar2 + 0x18);
    *(undefined2 **)(lVar2 + 0x18) = puVar1 + 8;
    if (local_80 != 0) {
        FUN_14018b900(local_80,0);
    }
    lVar2 = FUN_140211280();
    if ((lVar2 != 0) &&
        ((((*(uint *)(DAT_140c63628 + 0x5f4) & *(uint *)(lVar2 + 0x18)) == 0 ||
           (*(int *)(DAT_140c635f0 + 0x1698) != 1)) || (local_30 = *(int *)(lVar2 + 8), local_30 == 0)))
            ) {
        local_30 = *(int *)(lVar2 + 4);
    }
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    FUN_14043bf30(&DAT_140c7cc70,&local_68);
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    return;
}



void FUN_14043bd20(undefined8 param_1,longlong param_2)

{
    undefined8 *puVar1;
    undefined4 *puVar2;
    undefined8 *puVar3;
    undefined4 local_28 [2];
    undefined *local_20;
    undefined *local_18;
    longlong local_10;

    if (param_2 != 0) {
        for (puVar1 = (undefined8 *)*DAT_140c7cd58; local_10 = param_2, puVar1 != DAT_140c7cd58;
             puVar1 = (undefined8 *)*puVar1) {
            if (*(longlong *)(puVar1[2] + 0x10) == 0) {
                local_20 = &DAT_140c7cc70;
                local_28[0] = 1;
                local_18 = &LAB_14043c3f0;
                FUN_140195960(puVar1[2],*(undefined4 *)(param_2 + 8),local_28,4);
                return;
            }
        }
        puVar2 = (undefined4 *)FUN_14018b280(0x48);
        if (puVar2 != (undefined4 *)0x0) {
            *(undefined8 *)(puVar2 + 4) = 0;
            *(undefined8 *)(puVar2 + 6) = 0;
            *(undefined8 *)(puVar2 + 10) = 0;
            *(undefined8 *)(puVar2 + 0xc) = 0;
            *puVar2 = 0x544e5645;
            puVar2[0x11] = 0;
        }
        local_20 = &DAT_140c7cc70;
        local_28[0] = 1;
        local_18 = &LAB_14043c3f0;
        FUN_140195960(puVar2,*(undefined4 *)(param_2 + 8),local_28,4);
        puVar1 = DAT_140c7cd58;
        puVar3 = (undefined8 *)FUN_14018b280(0x18);
        if (puVar3 + 2 != (undefined8 *)0x0) {
            puVar3[2] = puVar2;
        }
        *puVar3 = puVar1;
        puVar3[1] = puVar1[1];
        *(undefined8 **)puVar1[1] = puVar3;
        puVar1[1] = puVar3;
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14043be50(void)

{
    int iVar1;
    longlong lVar2;
    undefined local_68 [24];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;

    lVar2 = FUN_14043cf90();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x60) != 0)) &&
         (lVar2 = FUN_1401f4fa0(), _DAT_140c7cd60 != 0)) &&
        ((lVar2 != 0 && (iVar1 = FUN_14043d3d0(&DAT_140c7cc70,lVar2), iVar1 == 0)))) {
        if (*(int *)(lVar2 + 8) != 0) {
            FUN_14043bd20();
            return;
        }
        local_50 = (undefined2 *)FUN_14018b280(0x10);
        local_40 = local_50 + 8;
        if (local_50 != (undefined2 *)0x0) {
            *local_50 = 0;
        }
        local_48 = local_50;
        FUN_14043cc10(lVar2,local_68);
        FUN_14043bf30(&DAT_140c7cc70,local_68);
        if (local_50 != (undefined2 *)0x0) {
            FUN_14018b900(local_50,0);
        }
    }
    return;
}



void FUN_14043bf30(longlong param_1,int *param_2)

{
    undefined8 uVar1;
    undefined8 uVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    int *piVar6;
    ulonglong uVar7;
    undefined8 in_stack_ffffffffffffffd0;
    uint uVar8;
    undefined8 in_stack_ffffffffffffffd8;
    undefined4 uVar9;

    uVar8 = (uint)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
    uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
    if ((*(longlong *)(param_2 + 6) != *(longlong *)(param_2 + 8)) || (param_2[0xc] != 0)) {
        if (param_2[0xc] == 0) {
            FUN_14043c1a0(param_1,param_2);
            if (*param_2 != 0) {
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Communicator_ShowSpamMsg",
                              &DAT_140b0087c,*param_2,param_2[2],*(undefined8 *)(param_2 + 6),
                              CONCAT44(uVar9,param_2[0xf]));
                return;
            }
        }
        else {
            iVar4 = param_2[2];
            lVar5 = FUN_1405a8a40();
            uVar7 = 0;
            if (lVar5 != 0) {
                iVar3 = FUN_140552fd0(lVar5);
                if ((iVar3 != 0) && (*(int *)(param_1 + 0xf4) != 0)) {
                    return;
                }
                if (((*(int *)(param_1 + 0xf4) == 0) && (iVar3 != 0)) &&
                    (iVar3 = FUN_14054f3a0(lVar5), iVar3 == 0)) {
                    return;
                }
                iVar3 = FUN_140552f50(lVar5);
                if (iVar3 == 0) {
                    if (*(ulonglong *)(lVar5 + 0x80) == 0) {
                        return;
                    }
                    piVar6 = *(int **)(lVar5 + 0x78);
                    while (*piVar6 != iVar4) {
                        uVar7 = uVar7 + 1;
                        piVar6 = piVar6 + 1;
                        if (*(ulonglong *)(lVar5 + 0x80) <= uVar7) {
                            return;
                        }
                    }
                    if ((*(byte *)(*(longlong *)(lVar5 + 8) + 0xc) & 4) == 0) {
                        return;
                    }
                    iVar4 = FUN_140552550(lVar5,0xfffffdff);
                    if (iVar4 != 0) {
                        return;
                    }
                }
                else {
                    if (((*(undefined4 **)(lVar5 + 8))[3] & 0x10000) == 0) {
                        return;
                    }
                    if (*(ulonglong *)(lVar5 + 0x90) == 0) {
                        return;
                    }
                    piVar6 = *(int **)(lVar5 + 0x88);
                    while (*piVar6 != iVar4) {
                        uVar7 = uVar7 + 1;
                        piVar6 = piVar6 + 1;
                        if (*(ulonglong *)(lVar5 + 0x90) <= uVar7) {
                            return;
                        }
                    }
                    iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar5 + 8));
                    if (iVar4 == 1) {
                        return;
                    }
                }
            }
            FUN_14043c1a0(param_1,param_2);
            if (*param_2 != 0) {
                FUN_140437a10(DAT_140c658d8,0x3e,0,0,0,(ulonglong)uVar8 << 0x20,CONCAT44(uVar9,1));
                uVar1 = *(undefined8 *)(DAT_140c65898 + 0x7340);
                uVar2 = *(undefined8 *)(param_2 + 6);
                iVar4 = param_2[2];
                iVar3 = *param_2;
                lVar5 = FUN_1405a8a40();
                if (lVar5 != 0) {
                    FUN_1400ea3e0(uVar1,"Communicator_ShowQuestMsg",&DAT_140b00874,iVar3,iVar4,lVar5,uVar2);
                }
                if (DAT_140c7dc68 == 0) {
                    iVar4 = param_2[0x11];
                    *(undefined4 *)(param_1 + 0xfc) = 0x41700000;
                    *(int *)(param_1 + 0x100) = iVar4;
                }
            }
        }
    }
    return;
}



void FUN_14043c1a0(longlong param_1,int *param_2)

{
    longlong **pplVar1;
    longlong lVar2;
    undefined8 *puVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    int *piVar7;
    longlong **pplVar8;
    ulonglong uVar9;
    undefined4 uVar10;
    uint uVar11;
    int local_res10;
    int local_res14;
    undefined local_28 [16];

    if (param_2[0xc] == 0) {
        lVar5 = FUN_1401f4fa0(param_2[1]);
        if (lVar5 == 0) {
            uVar11 = 0;
        }
        else {
            uVar11 = *(uint *)(lVar5 + 0xc) & 2;
        }
        pplVar1 = *(longlong ***)(param_1 + 0x18);
        pplVar8 = (longlong **)*pplVar1;
        if (pplVar8 != pplVar1) {
            do {
                if ((param_2[1] != 0) && (param_2[1] == *(int *)((longlong)pplVar8 + 0x14))) {
                    if (uVar11 == 0) {
                        return;
                    }
                    plVar6 = *pplVar8;
                    pplVar1 = (longlong **)pplVar8[1];
                    *pplVar1 = plVar6;
                    plVar6[1] = (longlong)pplVar1;
                    if (pplVar8[5] != (longlong *)0x0) {
                        FUN_14018b900(pplVar8[5],0);
                    }
                    FUN_14018b900(pplVar8,0);
                    break;
                }
                pplVar8 = (longlong **)*pplVar8;
            } while (pplVar8 != pplVar1);
        }
        DAT_140c658e0 = DAT_140c658e0 + 1;
        *param_2 = DAT_140c658e0;
        lVar5 = **(longlong **)(param_1 + 0x18);
        plVar6 = (longlong *)FUN_14018b280(0x68);
        if (plVar6 + 2 != (longlong *)0x0) {
            FUN_14043da70(plVar6 + 2,param_2);
        }
        *plVar6 = lVar5;
        plVar6[1] = *(longlong *)(lVar5 + 8);
        **(longlong ***)(lVar5 + 8) = plVar6;
        *(longlong **)(lVar5 + 8) = plVar6;
        local_res14 = param_2[0xd];
        if (local_res14 != 0) {
            local_res10 = *param_2;
            FUN_140032f50(param_1 + 0x20,local_28,&local_res10);
            return;
        }
    }
    else {
        lVar5 = FUN_1405a8a40();
        if (lVar5 != 0) {
            pplVar1 = *(longlong ***)(param_1 + 8);
            pplVar8 = (longlong **)*pplVar1;
            if (pplVar8 != pplVar1) {
                do {
                    if (param_2[0xc] == *(int *)(pplVar8 + 8)) {
                        return;
                    }
                    pplVar8 = (longlong **)*pplVar8;
                } while (pplVar8 != pplVar1);
            }
            iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar5 + 8));
            if (iVar4 == 0) {
                FUN_1405fca00(*DAT_140c65b80,**(undefined4 **)(lVar5 + 8));
            }
            DAT_140c658e4 = DAT_140c658e4 + 1;
            *param_2 = DAT_140c658e4;
            lVar2 = **(longlong **)(param_1 + 8);
            plVar6 = (longlong *)FUN_14018b280(0x68);
            if (plVar6 + 2 != (longlong *)0x0) {
                FUN_14043da70(plVar6 + 2,param_2);
            }
            puVar3 = DAT_140c65b80;
            *plVar6 = lVar2;
            plVar6[1] = *(longlong *)(lVar2 + 8);
            **(longlong ***)(lVar2 + 8) = plVar6;
            *(longlong **)(lVar2 + 8) = plVar6;
            uVar9 = 0;
            uVar10 = 0;
            iVar4 = FUN_1405fbc40(*puVar3,**(undefined4 **)(lVar5 + 8));
            if ((iVar4 == 2) && (*(ulonglong *)(lVar5 + 0x90) != 0)) {
                piVar7 = *(int **)(lVar5 + 0x88);
                do {
                    if (param_2[2] == *piVar7) {
                        uVar10 = 1;
                        break;
                    }
                    uVar9 = uVar9 + 1;
                    piVar7 = piVar7 + 1;
                } while (uVar9 < *(ulonglong *)(lVar5 + 0x90));
            }
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Communicator_UpdateCallback",
                          &DAT_1409e9034,1,uVar10);
        }
    }
    return;
}



void FUN_14043c490(undefined8 param_1,uint param_2,int param_3)

{
    longlong *plVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong **pplVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong local_res8;

    for (pplVar4 = (longlong **)*DAT_140c7cc78; pplVar4 != DAT_140c7cc78;
         pplVar4 = (longlong **)*pplVar4) {
        if (param_2 == *(uint *)(pplVar4 + 8)) {
            plVar1 = *pplVar4;
            plVar6 = pplVar4[1];
            *plVar6 = (longlong)plVar1;
            plVar1[1] = (longlong)plVar6;
            if (pplVar4[5] != (longlong *)0x0) {
                FUN_14018b900(pplVar4[5],0);
            }
            FUN_14018b900(pplVar4,0);
            break;
        }
    }
    if (param_3 == 0) goto LAB_14043c5be;
    lVar5 = *(longlong *)(DAT_140c7cd18 + 8);
    local_res8 = DAT_140c7cd18;
    if (*(longlong *)(DAT_140c7cd18 + 8) == 0) {
        LAB_14043c537:
        local_res8 = DAT_140c7cd18;
    }
    else {
        do {
            if (*(uint *)(lVar5 + 0x20) < param_2) {
                lVar3 = *(longlong *)(lVar5 + 0x18);
            }
            else {
                lVar3 = *(longlong *)(lVar5 + 0x10);
                local_res8 = lVar5;
            }
            lVar5 = lVar3;
        } while (lVar3 != 0);
        if ((local_res8 == DAT_140c7cd18) || (param_2 < *(uint *)(local_res8 + 0x20)))
            goto LAB_14043c537;
    }
    if (local_res8 != DAT_140c7cd18) {
        lVar5 = *(longlong *)(local_res8 + 0x28);
        plVar1 = *(longlong **)(lVar5 + 8);
        plVar6 = (longlong *)*plVar1;
        pplVar4 = DAT_140c7cc88;
        if (plVar6 != plVar1) {
            do {
                for (pplVar2 = (longlong **)*pplVar4; pplVar2 != pplVar4; pplVar2 = (longlong **)*pplVar2) {
                    if (*(int *)(plVar6 + 2) == *(int *)((longlong)pplVar2 + 0x14)) {
                        plVar1 = *pplVar2;
                        pplVar4 = (longlong **)pplVar2[1];
                        *pplVar4 = plVar1;
                        plVar1[1] = (longlong)pplVar4;
                        if (pplVar2[5] != (longlong *)0x0) {
                            FUN_14018b900(pplVar2[5],0);
                        }
                        FUN_14018b900(pplVar2,0);
                        pplVar4 = DAT_140c7cc88;
                        break;
                    }
                }
                plVar6 = (longlong *)*plVar6;
            } while (plVar6 != (longlong *)*(longlong *)(lVar5 + 8));
        }
    }
    LAB_14043c5be:
    lVar5 = 0;
    for (pplVar4 = (longlong **)*DAT_140c7cc78; pplVar4 != DAT_140c7cc78;
         pplVar4 = (longlong **)*pplVar4) {
        lVar5 = lVar5 + 1;
    }
    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"Communicator_UpdateCallback",&DAT_1409e9034
            ,lVar5 != 0,0);
    return;
}



undefined8 FUN_14043c620(void)

{
    longlong *plVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong **pplVar4;

    FUN_14043da00(&DAT_140c7cc70);
    FUN_14043da00(&DAT_140c7cc80);
    FUN_140008410(&DAT_140c7cc90);
    pplVar4 = (longlong **)*DAT_140c7cd58;
    pplVar3 = DAT_140c7cd58;
    if (pplVar4 != DAT_140c7cd58) {
        do {
            plVar1 = pplVar4[2];
            if (plVar1 != (longlong *)0x0) {
                FUN_140195d70(plVar1);
                *(undefined4 *)plVar1 = 0;
                if ((longlong *)plVar1[2] != (longlong *)0x0) {
                    *(longlong *)plVar1[2] = plVar1[3];
                }
                if ((longlong *)plVar1[3] != (longlong *)0x0) {
                    *(longlong *)plVar1[3] = plVar1[2];
                }
                plVar1[2] = 0;
                plVar1[3] = 0;
                FUN_14018b900(plVar1,0);
                pplVar3 = DAT_140c7cd58;
            }
            pplVar4 = (longlong **)*pplVar4;
        } while (pplVar4 != pplVar3);
    }
    pplVar4 = (longlong **)*pplVar3;
    if (pplVar4 != pplVar3) {
        do {
            pplVar2 = (longlong **)*pplVar4;
            FUN_14018b900(pplVar4,0);
            pplVar3 = DAT_140c7cd58;
            pplVar4 = pplVar2;
        } while (pplVar2 != DAT_140c7cd58);
    }
    *pplVar3 = (longlong *)pplVar3;
    DAT_140c7cd58[1] = (longlong *)DAT_140c7cd58;
    return 0;
}
