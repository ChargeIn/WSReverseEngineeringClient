//
// Created by flop on 04.04.22.
//
#include "../../include.h"
void FUN_1407469d0(longlong param_1,int *param_2)



        ulonglong FUN_14075e100(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    uVar2 = FUN_140056d60();
    if ((int)uVar2 == 0) {
        return uVar2;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    puVar1 = *(undefined8 **)
            (*(longlong *)(param_2 + 0x88) +
             SUB168((ZEXT816(uVar2) & (undefined  [16])0xffffffffffffffff) %
                    ZEXT816((ulonglong)
                                    (*(longlong *)(param_2 + 0x90) - *(longlong *)(param_2 + 0x88) >> 3)),0)
             * 8);
    do {
        lVar7 = param_1;
        if (puVar1 == (undefined8 *)0x0) {
            LAB_14075e1cf:
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_20);
            puVar1 = *(undefined8 **)(param_1 + 0x10);
            *puVar1 = *puVar4;
            *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
            LAB_14075e1f3:
            *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
            FUN_1400579e0(lVar7);
            return 1;
        }
        if (*(int *)(puVar1 + 1) == (int)uVar2) {
            if ((puVar1 != (undefined8 *)0x0) && (puVar1 != (undefined8 *)&DAT_fffffffffffffff0)) {
                lVar6 = puVar1[3];
                if (lVar6 != puVar1[4]) {
                    do {
                        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar4 = *(undefined8 **)(param_1 + 0x10);
                        uVar3 = FUN_14005c1b0(param_1,0,0);
                        *(undefined4 *)(puVar4 + 1) = 5;
                        *puVar4 = uVar3;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400578c0(param_1);
                        puVar5 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                        puVar4 = *(undefined8 **)(param_1 + 0x10);
                        *puVar4 = *puVar5;
                        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        FUN_14034bdd0();
                        puVar5 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                        puVar4 = *(undefined8 **)(param_1 + 0x10);
                        *puVar4 = *puVar5;
                        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        FUN_1400f0870(param_1);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                        FUN_1400fb1d0(&local_28);
                        FUN_1400579e0(param_1);
                        lVar6 = lVar6 + 8;
                        lVar7 = local_18;
                    } while (lVar6 != puVar1[4]);
                }
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),local_20);
                puVar1 = *(undefined8 **)(lVar7 + 0x10);
                *puVar1 = *puVar4;
                *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
                goto LAB_14075e1f3;
            }
            goto LAB_14075e1cf;
        }
        puVar1 = (undefined8 *)*puVar1;
    } while( true );
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_14075e7d0(longlong param_1,longlong param_2,undefined8 param_3)

{
    uint **ppuVar1;
    longlong *plVar2;
    uint *puVar3;
    char cVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    undefined8 uVar10;
    longlong lVar11;
    undefined8 *puVar12;
    undefined2 *puVar13;
    int iVar14;
    uint uVar15;
    char *pcVar16;
    ulonglong uVar17;
    int iVar18;
    uint uVar19;
    uint **ppuVar20;
    uint local_res8;
    uint local_res20;
    int local_1a8;
    int local_198;
    uint local_194;
    undefined **local_190;
    int local_188;
    longlong local_180;
    longlong local_178;
    undefined **local_170;
    undefined4 local_168;
    undefined4 uStack356;
    longlong local_160;
    undefined4 local_158;
    undefined8 *local_150;
    longlong local_148;
    undefined8 *local_140;
    undefined local_138 [8];
    undefined8 *local_130;
    longlong local_128;
    undefined **local_118 [24];
    undefined local_58 [16];
    undefined2 *local_48;

    ppuVar1 = (uint **)(param_1 + 0x10);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar12 = (undefined8 *)0x0;
    uVar15 = 0;
    if (((puVar7 < *ppuVar1) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        local_res8 = FUN_140056d60(param_1,2);
    }
    else {
        local_res8 = 0;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    if (((puVar7 < *ppuVar1) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x28))) {
        local_194 = FUN_140056d60(param_1,3);
    }
    else {
        local_194 = 0;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
    if (((puVar7 < *ppuVar1) && (puVar7 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x38))) {
        local_res20 = FUN_140056d60(param_1,4);
    }
    else {
        local_res20 = 0;
    }
    local_188 = 0xfffffffe;
    local_190 = &PTR_FUN_140b56a08;
    local_180 = param_1;
    FUN_1400579e0(param_1);
    puVar7 = *(undefined8 **)(local_180 + 0x10);
    puVar8 = (undefined8 *)(*(longlong *)(local_180 + 0x18) + 0x40);
    puVar9 = &DAT_140a12138;
    if (puVar8 < puVar7) {
        puVar9 = puVar8;
    }
    *puVar7 = *puVar9;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
    *(longlong *)(local_180 + 0x10) = *(longlong *)(local_180 + 0x10) + 0x10;
    local_188 = FUN_1400578c0();
    iVar18 = -1;
    if ((local_180 == 0) || (iVar18 = -1, local_188 == -2)) {
        LAB_14075e96d:
        uVar19 = uVar15;
        if ((local_180 != 0) && (local_188 != -2)) {
            lVar11 = local_180;
            puVar9 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_180 + 0x20) + 0xa0),local_188);
            puVar7 = *(undefined8 **)(lVar11 + 0x10);
            *puVar7 = *puVar9;
            *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            puVar7 = (undefined8 *)(*(longlong *)(local_180 + 0x10) + -0x10);
            if (puVar7 != &DAT_140a12138) {
                iVar18 = *(int *)(*(longlong *)(local_180 + 0x10) + -8);
            }
            *(undefined8 **)(local_180 + 0x10) = puVar7;
            uVar19 = 0;
            if (0 < iVar18) {
                puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40);
                if (((puVar7 < *ppuVar1) && (puVar7 != &DAT_140a12138)) &&
                    (iVar18 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x48), iVar18 != -1)) {
                    pcVar16 = (&PTR_DAT_140a123b0)[iVar18];
                }
                else {
                    pcVar16 = s_no_value_140c1dc88;
                }
                uVar10 = FUN_140058780(param_1,s__s_expected__got__s_140c1db70,s_function_140c1e0a8,pcVar16)
                        ;
                uVar6 = FUN_140056570(param_1,5,uVar10);
                goto LAB_14075f034;
            }
        }
    }
    else {
        lVar11 = local_180;
        iVar18 = -1;
        puVar9 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_180 + 0x20) + 0xa0),local_188);
        puVar7 = *(undefined8 **)(lVar11 + 0x10);
        *puVar7 = *puVar9;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar9 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        puVar7 = (undefined8 *)(*(longlong *)(local_180 + 0x10) + -0x10);
        iVar14 = iVar18;
        if (puVar7 != &DAT_140a12138) {
            iVar14 = *(int *)(*(longlong *)(local_180 + 0x10) + -8);
        }
        *(undefined8 **)(local_180 + 0x10) = puVar7;
        if (iVar14 != 6) goto LAB_14075e96d;
        uVar19 = 1;
    }
    local_150 = (undefined8 *)0x0;
    local_178 = 0;
    if (uVar19 != 0) {
        puVar7 = *(undefined8 **)(DAT_140c63650 + 0x300);
        local_150 = puVar12;
        if (puVar7 != (undefined8 *)0x0) {
            puVar9 = puVar12;
            do {
                if (*(longlong *)
                        (*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar9 * 8) + 400) ==
                    local_180) {
                    local_150 = *(undefined8 **)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar9 * 8);
                    break;
                }
                puVar9 = (undefined8 *)(ulonglong)((int)puVar9 + 1);
            } while (puVar9 < puVar7);
        }
        local_150 = local_150 + 0x30;
        puVar9 = puVar12;
        if (puVar7 != (undefined8 *)0x0) {
            puVar8 = puVar12;
            do {
                if (*(longlong *)
                        (*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar8 * 8) + 400) ==
                    param_1) {
                    puVar9 = *(undefined8 **)(*(longlong *)(DAT_140c63650 + 0x2f8) + (longlong)puVar8 * 8);
                    break;
                }
                puVar8 = (undefined8 *)(ulonglong)((int)puVar8 + 1);
            } while (puVar8 < puVar7);
        }
        plVar2 = (longlong *)puVar9[0x136];
        if ((longlong *)*plVar2 == plVar2) {
            local_178 = 0;
        }
        else {
            local_178 = *(longlong *)(plVar2[1] + 0x10);
        }
    }
    FUN_14018f0e0(&local_170,&DAT_1409f9774);
    puVar7 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar7 < *ppuVar1) && (puVar7 != &DAT_140a12138)) && (0 < *(int *)(puVar7 + 1))) {
        FUN_140056bb0(param_1,1);
    }
    FUN_14018f2d0(local_138);
    if (CONCAT44(uStack356,local_168) != 0) {
        FUN_14018b900();
    }
    local_170 = &PTR_FUN_140b569f0;
    local_158 = 1;
    local_160 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar7 = (undefined8 *)*ppuVar1;
    uVar10 = FUN_14005c1b0(param_1);
    *(uint *)(puVar7 + 1) = 5;
    *puVar7 = uVar10;
    *ppuVar1 = *ppuVar1 + 4;
    uVar5 = FUN_1400578c0(param_1);
    local_140 = puVar12;
    if (local_128 - (longlong)local_130 >> 1 != 0) {
        local_140 = local_130;
    }
    local_168 = uVar5;
    if ((DAT_140dc4d70 & 1) == 0) {
        DAT_140dc4d70 = DAT_140dc4d70 | 1;
        lVar11 = FUN_140200220(0x447);
        if (lVar11 == 0) {
            _DAT_140dc4d74 = 0x32;
        }
        else {
            _DAT_140dc4d74 = *(int *)(lVar11 + 4);
        }
    }
    local_1a8 = 0;
    if (local_res20 == 0) {
        puVar7 = (undefined8 *)(param_2 + 8);
    }
    else {
        for (puVar9 = *(undefined8 **)
                (*(longlong *)(param_2 + 0xb8) +
                 ((ulonglong)local_res20 %
                  (ulonglong)(*(longlong *)(param_2 + 0xc0) - *(longlong *)(param_2 + 0xb8) >> 3))
                 * 8); puVar7 = puVar12, puVar9 != (undefined8 *)0x0;
             puVar9 = (undefined8 *)*puVar9) {
            if (*(uint *)(puVar9 + 1) == local_res20) {
                if (puVar9 != (undefined8 *)0x0) {
                    puVar7 = puVar9 + 2;
                }
                break;
            }
        }
    }
    lVar11 = param_1;
    if (puVar7 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
        puVar7 = (undefined8 *)*ppuVar1;
        *puVar7 = *puVar12;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar12 + 1);
        *ppuVar1 = *ppuVar1 + 4;
    }
    else {
        ppuVar20 = (uint **)puVar7[1];
        local_148 = (longlong)(int)uVar19;
        iVar18 = 0;
        if (ppuVar20 != (uint **)puVar7[2]) {
            do {
                puVar3 = *ppuVar20;
                if (((local_res8 == 0) || (puVar3[7] == local_res8)) &&
                    (((local_194 == 0 || (puVar3[8] == local_194)) &&
                      ((local_res20 == 0 || (puVar3[9] == local_res20)))))) {
                    FUN_1400b7210(local_118,&DAT_140b4cce0);
                    local_118[0] = &PTR_FUN_140b69230;
                    local_48 = (undefined2 *)0x0;
                    local_58 = ZEXT816(0);
                    puVar13 = (undefined2 *)FUN_14018b280(0x10);
                    local_58 = CONCAT88(puVar13,puVar13);
                    local_48 = puVar13 + 8;
                    if (puVar13 != (undefined2 *)0x0) {
                        *puVar13 = 0;
                    }
                    puVar8 = (undefined8 *)FUN_14018b280(0x60);
                    puVar9 = puVar12;
                    if (puVar8 != (undefined8 *)0x0) {
                        FUN_1400b6390(puVar8);
                        *puVar8 = &PTR_FUN_140b69170;
                        *(undefined4 *)(puVar8 + 0xb) = 1;
                        FUN_1400b6d70(puVar8,L"name");
                        puVar9 = puVar8;
                    }
                    FUN_1400b7480(local_118,puVar9);
                    lVar11 = FUN_1400b7660(local_118);
                    if ((local_140 == (undefined8 *)0x0) ||
                        (lVar11 = FUN_14018e5e0(*(undefined8 *)(lVar11 + 8),local_140), lVar11 != 0)) {
                        if (local_148 == 0) {
                            LAB_14075ee11:
                            local_1a8 = local_1a8 + 1;
                            if (local_1a8 <= _DAT_140dc4d74) {
                                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                                    FUN_14005e2c0(param_1);
                                }
                                puVar9 = (undefined8 *)*ppuVar1;
                                uVar10 = FUN_14005c1b0(param_1,0,0);
                                *(uint *)(puVar9 + 1) = 5;
                                *puVar9 = uVar10;
                                *ppuVar1 = *ppuVar1 + 4;
                                uVar6 = FUN_1400578c0(param_1);
                                uVar17 = (ulonglong)*puVar3;
                                puVar8 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
                                puVar9 = (undefined8 *)*ppuVar1;
                                *puVar9 = *puVar8;
                                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
                                *ppuVar1 = *ppuVar1 + 4;
                                FUN_1400f06f0(param_1,puVar9,&DAT_140b4ccd8,uVar17 & 0xffffffff);
                                *ppuVar1 = *ppuVar1 + -4;
                                puVar9 = (undefined8 *)*ppuVar1;
                                puVar8 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
                                *puVar9 = *puVar8;
                                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
                                *ppuVar1 = *ppuVar1 + 4;
                                FUN_1400f0870(param_1);
                                puVar8 = (undefined8 *)(*ppuVar1 + -4);
                                *ppuVar1 = (uint *)puVar8;
                                puVar9 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
                                *puVar8 = *puVar9;
                                *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar9 + 1);
                                *ppuVar1 = *ppuVar1 + 4;
                                FUN_1400f0870(param_1);
                                *ppuVar1 = *ppuVar1 + -4;
                                FUN_1400fb1d0(&local_170,uVar6);
                                FUN_1400579e0(param_1);
                                goto LAB_14075ef60;
                            }
                        }
                        else {
                            local_198 = 0;
                            uVar10 = FUN_1400b5df0(DAT_140c658f0,*puVar3,0);
                            cVar4 = FUN_1400f2ad0(local_150,param_3,*(undefined8 *)(local_178 + 0x30),&local_190,
                                                  &DAT_1409f975c,uVar10,&local_198);
                            if (cVar4 != '\0') {
                                if (local_198 == 0) goto LAB_14075ef60;
                                goto LAB_14075ee11;
                            }
                        }
                        if (local_58._0_8_ != 0) {
                            FUN_14018b900(local_58._0_8_,0);
                        }
                        FUN_1400b7390(local_118);
                        lVar11 = local_160;
                        iVar18 = local_1a8;
                        uVar5 = local_168;
                        break;
                    }
                    LAB_14075ef60:
                    if (local_58._0_8_ != 0) {
                        FUN_14018b900(local_58._0_8_,0);
                    }
                    FUN_1400b7390(local_118);
                }
                ppuVar20 = ppuVar20 + 1;
                lVar11 = local_160;
                iVar18 = local_1a8;
                uVar5 = local_168;
            } while (ppuVar20 != (uint **)puVar7[2]);
        }
        puVar12 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar5);
        puVar7 = *(undefined8 **)(lVar11 + 0x10);
        *puVar7 = *puVar12;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar12 + 1);
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
        uVar15 = (uint)(_DAT_140dc4d74 < iVar18);
    }
    puVar3 = *ppuVar1;
    *puVar3 = uVar15;
    puVar3[2] = 1;
    *ppuVar1 = *ppuVar1 + 4;
    uVar6 = 2;
    if (lVar11 != 0) {
        FUN_1400579e0(lVar11,puVar7,uVar5);
    }
    if (local_130 != (undefined8 *)0x0) {
        FUN_14018b900(local_130,0);
    }
    LAB_14075f034:
    local_190 = &PTR_FUN_140b56a08;
    if (local_180 != 0) {
        FUN_1400579e0();
    }
    return uVar6;
}



undefined8 FUN_14075f0d0(undefined8 param_1)

{
    int local_res10 [6];

    local_res10[0] = FUN_140056d60(param_1,1);
    if (local_res10[0] != 0) {
        FUN_1403f4900(DAT_140c65898,0x3e6,local_res10);
    }
    return 0;
}



undefined8 FUN_14075f110(void)

{
    undefined local_res10 [24];

    local_res10[0] = 0;
    FUN_1403f4900(DAT_140c65898,0x3ec,local_res10);
    return 0;
}



undefined8 FUN_14075f140(longlong *param_1,uint *param_2)

{
    undefined8 *puVar1;
    int iVar2;
    uint uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    undefined ***pppuVar8;
    char *pcVar9;
    longlong lVar10;
    uint uVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    uint uVar16;
    bool bVar17;
    undefined **ppuVar18;
    int local_res18;
    undefined4 uStackX28;
    int local_res20;
    undefined4 uStackX36;
    int local_78;
    undefined4 uStack116;
    undefined **local_70;
    undefined4 local_68;
    longlong local_60;
    undefined local_58 [8];
    longlong local_50;

    iVar2 = FUN_1400fb720(param_1,L"nType");
    if (iVar2 < 0) {
        FUN_140056830(param_1[2],"auction filter missing key: \'nType\'");
        return 0x80004005;
    }
    uVar13 = 0;
    uVar12 = 0;
    uVar15 = 0;
    uVar11 = 0;
    iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
    pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
    if (iVar2 == 3) {
        LAB_14075f1ba:
        uVar16 = (int)(double)*pppuVar8;
    }
    else {
        uVar16 = uVar11;
        if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), iVar2 != 0)) {
            local_70 = (undefined **)CONCAT44(uStackX28,local_res18);
            local_68 = 3;
            pppuVar8 = &local_70;
            goto LAB_14075f1ba;
        }
    }
    *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
    if (6 < uVar16) {
        FUN_140056830(param_1[2],"auction filter bad value for \'nType\': %d",uVar16);
        return 0x80004005;
    }
    *param_2 = uVar16;
    if (6 < uVar16) {
        return 0;
    }
    uVar14 = 0;
    switch(uVar16) {
        case 0:
            iVar2 = FUN_1400fb720(param_1,L"eProperty",3);
            if (iVar2 < 0) goto LAB_14075f33a;
            iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
            pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
            if (iVar2 == 3) {
                LAB_14075f281:
                uVar13 = (uint)(double)*pppuVar8;
            }
            else if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), iVar2 != 0)) {
                local_68 = 3;
                pppuVar8 = &local_70;
                goto LAB_14075f281;
            }
            *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
            iVar2 = FUN_1400fb720(param_1,L"fMin",3);
            if (iVar2 < 0) {
                LAB_14075f33a:
                FUN_140056830(param_1[2],"auction filter type %d requires \'eProperty\' and \'fMin\'",0);
                return 0x80004005;
            }
            iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
            pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
            if (iVar2 == 3) {
                LAB_14075f2ed:
                ppuVar18 = *pppuVar8;
            }
            else {
                if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), iVar2 != 0)) {
                    local_68 = 3;
                    pppuVar8 = &local_70;
                    goto LAB_14075f2ed;
                }
                ppuVar18 = (undefined **)0x0;
            }
            *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
            if (0xc4 < uVar13) {
                FUN_140056830(param_1[2],"auction filter type %d bad value for \'eProperty\': %d",0,uVar13);
                return 0x80004005;
            }
        LAB_14075f32b:
            param_2[3] = (uint)(float)(double)ppuVar18;
            param_2[2] = uVar13;
            return 0;
        case 1:
            iVar2 = FUN_1400fb720(param_1,L"eProperty",3);
            if (iVar2 < 0) goto LAB_14075f467;
            iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
            pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
            if (iVar2 == 3) {
                LAB_14075f3b6:
                uVar13 = (uint)(double)*pppuVar8;
            }
            else if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), iVar2 != 0)) {
                local_68 = 3;
                pppuVar8 = &local_70;
                goto LAB_14075f3b6;
            }
            *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
            iVar2 = FUN_1400fb720(param_1,L"fMax",3);
            if (iVar2 < 0) {
                LAB_14075f467:
                FUN_140056830(param_1[2],"auction filter type %d requires \'eProperty\' and \'fMax\'",1);
                return 0x80004005;
            }
            iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
            pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
            if (iVar2 == 3) {
                LAB_14075f422:
                ppuVar18 = *pppuVar8;
            }
            else {
                if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), iVar2 != 0)) {
                    local_68 = 3;
                    pppuVar8 = &local_70;
                    goto LAB_14075f422;
                }
                ppuVar18 = (undefined **)0x0;
            }
            *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
            if (0xc4 < uVar13) {
                FUN_140056830(param_1[2],"auction filter type %d bad value for \'eProperty\': %d",1,uVar13);
                return 0x80004005;
            }
            goto LAB_14075f32b;
        case 2:
            uVar12 = 0x7fffffff;
            uVar13 = FUN_1400fb720(param_1,L"nMin",3);
            uVar16 = uVar11;
            if (-1 < (int)uVar13) {
                iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
                pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
                if (iVar2 == 3) {
                    LAB_14075f4ee:
                    uVar16 = (uint)(double)*pppuVar8;
                }
                else {
                    uVar16 = uVar15;
                    if ((iVar2 == 4) &&
                        (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), uVar16 = 0, iVar2 != 0)) {
                        local_68 = 3;
                        pppuVar8 = &local_70;
                        goto LAB_14075f4ee;
                    }
                }
                *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
                uVar13 = uVar14;
            }
            uVar15 = FUN_1400fb720(param_1,L"nMax",3);
            if ((int)uVar15 < 0) goto LAB_14075f56a;
            iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
            pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
            if (iVar2 == 3) {
                LAB_14075f55a:
                uVar12 = (int)(double)*pppuVar8;
            }
            else {
                uVar12 = uVar11;
                if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), iVar2 != 0)) {
                    local_68 = 3;
                    pppuVar8 = &local_70;
                    goto LAB_14075f55a;
                }
            }
            *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
            uVar15 = uVar14;
        LAB_14075f56a:
            if (((int)uVar13 < 0) && ((int)uVar15 < 0)) {
                FUN_140056830(param_1[2],"auction filter type %d requires \'nMin\' and/or \'nMax\'",2);
                return 0x80004005;
            }
            if ((int)uVar16 <= (int)uVar12) {
                if ((int)uVar16 < 0) {
                    uVar16 = uVar11;
                }
                if ((int)uVar12 < 0) {
                    uVar12 = uVar11;
                }
                param_2[2] = uVar16;
                param_2[3] = uVar12;
                return 0;
            }
            FUN_140056830(param_1[2],"auction filter type %d expects \'nMin\' <= \'nMax\'",2);
            return 0x80004005;
        case 3:
            uVar12 = 7;
            uVar13 = FUN_1400fb720(param_1,L"nMin",3);
            uVar16 = uVar11;
            if (-1 < (int)uVar13) {
                iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
                pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
                if (iVar2 == 3) {
                    LAB_14075f642:
                    uVar16 = (uint)(double)*pppuVar8;
                }
                else {
                    uVar16 = uVar15;
                    if ((iVar2 == 4) &&
                        (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), uVar16 = 0, iVar2 != 0)) {
                        local_68 = 3;
                        pppuVar8 = &local_70;
                        goto LAB_14075f642;
                    }
                }
                *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
                uVar13 = uVar11;
            }
            uVar15 = FUN_1400fb720(param_1,L"nMax",3);
            if (-1 < (int)uVar15) {
                iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
                pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
                if (iVar2 == 3) {
                    LAB_14075f6ae:
                    uVar12 = (int)(double)*pppuVar8;
                }
                else {
                    uVar12 = uVar11;
                    if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), iVar2 != 0)) {
                        local_68 = 3;
                        pppuVar8 = &local_70;
                        goto LAB_14075f6ae;
                    }
                }
                *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
                uVar15 = uVar11;
            }
            if (((int)uVar13 < 0) && ((int)uVar15 < 0)) {
                FUN_140056830(param_1[2],"auction filter type %d requires \'nMin\' and/or \'nMax\'",3);
                return 0x80004005;
            }
            if ((int)uVar12 < (int)uVar16) {
                FUN_140056830(param_1[2],"auction filter type %d expects \'nMin\' <= \'nMax\'",3);
                return 0x80004005;
            }
            if ((-1 < (int)uVar16) && (uVar14 = uVar16, 7 < (int)uVar16)) {
                uVar14 = 7;
            }
            param_2[2] = uVar14;
            if ((-1 < (int)uVar12) && (uVar11 = uVar12, 7 < (int)uVar12)) {
                uVar11 = 7;
            }
            param_2[3] = uVar11;
            if (uVar14 != 0) {
                return 0;
            }
            bVar17 = uVar11 == 7;
            goto LAB_14075f73e;
        case 5:
            local_60 = 0;
            local_68 = 0xfffffffe;
            local_70 = &PTR_FUN_140b56a08;
            iVar2 = (**(code **)(*param_1 + 8))(param_1);
            if (iVar2 == 0) {
                pcVar9 = "auction filter type %d requires \'monMax\'";
            }
            else {
                lVar7 = param_1[2];
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0xa0),
                                      *(undefined4 *)(param_1 + 1));
                puVar1 = *(undefined8 **)(lVar7 + 0x10);
                *puVar1 = *puVar4;
                *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
                lVar7 = param_1[2];
                lVar5 = FUN_14018f0e0(local_58,L"monMax");
                if (*(longlong *)(lVar5 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(lVar7 + 0x10) + 8) = 0;
                    *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
                }
                else {
                    lVar10 = -1;
                    do {
                        lVar10 = lVar10 + 1;
                    } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar10) != '\0');
                    FUN_140058710(lVar7);
                }
                if (local_50 != 0) {
                    FUN_14018b900(local_50,0);
                }
                lVar5 = *(longlong *)(param_1[2] + 0x10);
                lVar7 = lVar5 + -0x10;
                FUN_14005e8e0(param_1[2],lVar5 + -0x20,lVar7,lVar7);
                local_60 = param_1[2];
                (*(code *)local_70[2])(&local_70,0xffffffff);
                *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
                lVar7 = local_60;
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_60 + 0x20) + 0xa0),local_68);
                puVar1 = *(undefined8 **)(lVar7 + 0x10);
                *puVar1 = *puVar4;
                *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
                *(longlong *)(lVar7 + 0x10) = *(longlong *)(lVar7 + 0x10) + 0x10;
                plVar6 = (longlong *)FUN_14069dfe0(param_1[2],0xffffffff);
                if (plVar6 == (longlong *)0x0) {
                    iVar2 = FUN_140056e70(param_1[2],0xffffffff,0x80000000);
                    lVar7 = (longlong)iVar2;
                }
                else {
                    lVar7 = *plVar6;
                }
                *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x10;
                if (0 < lVar7) {
                    *(longlong *)(param_2 + 2) = lVar7;
                    local_70 = &PTR_FUN_140b56a08;
                    if (local_60 == 0) {
                        return 0;
                    }
                    FUN_1400579e0();
                    return 0;
                }
                pcVar9 = "auction filter type %d bad value for \'monMax\': expects positive Money or number";
            }
            FUN_140056830(param_1[2],pcVar9,5);
            local_70 = &PTR_FUN_140b56a08;
            if (local_60 != 0) {
                FUN_1400579e0();
            }
            return 0x80004005;
        case 6:
            local_res18 = FUN_1400fb720(param_1,L"nLevel",3);
            uVar13 = uVar12;
            if (-1 < local_res18) {
                iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
                pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
                if (iVar2 == 3) {
                    LAB_14075fabf:
                    uVar13 = (uint)(double)*pppuVar8;
                }
                else {
                    uVar13 = 0;
                    if ((iVar2 == 4) &&
                        (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), uVar13 = 0, iVar2 != 0)) {
                        local_68 = 3;
                        pppuVar8 = &local_70;
                        local_70 = (undefined **)CONCAT44(uStackX28,local_res18);
                        goto LAB_14075fabf;
                    }
                }
                local_res18 = 0;
                *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
            }
            local_res20 = FUN_1400fb720(param_1,L"eClass",3);
            if (-1 < local_res20) {
                iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
                pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
                if (iVar2 == 3) {
                    LAB_14075fb2e:
                    uVar11 = (uint)(double)*pppuVar8;
                }
                else {
                    uVar11 = 0;
                    if ((iVar2 == 4) &&
                        (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res20), uVar11 = 0, iVar2 != 0)) {
                        local_68 = 3;
                        pppuVar8 = &local_70;
                        local_70 = (undefined **)CONCAT44(uStackX36,local_res20);
                        goto LAB_14075fb2e;
                    }
                }
                local_res20 = 0;
                *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
            }
            local_78 = FUN_1400fb720(param_1,L"eRace",3);
            uVar16 = uVar15;
            if (-1 < local_78) {
                iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
                pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
                if (iVar2 == 3) {
                    LAB_14075fb9d:
                    uVar16 = (uint)(double)*pppuVar8;
                }
                else {
                    uVar16 = uVar12;
                    if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_78), uVar16 = 0, iVar2 != 0)
                            ) {
                        local_68 = 3;
                        pppuVar8 = &local_70;
                        local_70 = (undefined **)CONCAT44(uStack116,local_78);
                        goto LAB_14075fb9d;
                    }
                }
                local_78 = 0;
                *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
            }
            uVar3 = FUN_1400fb720(param_1,L"eFaction",3);
            if (-1 < (int)uVar3) {
                iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
                pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
                if (iVar2 == 3) {
                    LAB_14075fc09:
                    uVar15 = (uint)(double)*pppuVar8;
                }
                else {
                    uVar15 = uVar12;
                    if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_70), uVar15 = 0, iVar2 != 0)
                            ) {
                        local_68 = 3;
                        pppuVar8 = &local_70;
                        goto LAB_14075fc09;
                    }
                }
                *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
                uVar3 = uVar14;
            }
            if ((((local_res18 < 0) && (local_res20 < 0)) && (local_78 < 0)) && ((int)uVar3 < 0)) {
                lVar7 = *(longlong *)(DAT_140c65898 + 0x78);
                if (lVar7 == 0) {
                    uVar11 = 0x17;
                    uVar16 = 0x11;
                    uVar13 = uVar12;
                }
                else {
                    uVar11 = *(uint *)(lVar7 + 0xdc);
                    uVar16 = *(uint *)(lVar7 + 0xd8);
                    uVar13 = *(uint *)(lVar7 + 0x38);
                }
                uVar15 = uVar14;
                if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
                    uVar15 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
                }
            }
            if ((uVar11 != 0) && (lVar7 = FUN_1401f31e0(uVar11), lVar7 == 0)) {
                FUN_140056830(param_1[2],"auction filter type %d bad value for \'eClass\'",6);
                return 0x80004005;
            }
            if ((uVar16 != 0) && (lVar7 = FUN_14022d500(uVar16), lVar7 == 0)) {
                FUN_140056830(param_1[2],"auction filter type %d bad value for \'eRace\'",6);
                return 0x80004005;
            }
            if ((uVar15 != 0) && (lVar7 = FUN_1401ff120(uVar15), lVar7 == 0)) {
                FUN_140056830(param_1[2],"auction filter type %d bad value for \'eFaction\'",6);
                return 0x80004005;
            }
            param_2[3] = uVar11;
            uVar12 = uVar13;
            if ((int)uVar13 < 0) {
                uVar12 = uVar14;
            }
            param_2[2] = uVar16;
            param_2[4] = uVar15;
            param_2[5] = uVar12;
            if (uVar13 != 0) {
                return 0;
            }
            if (uVar11 != 0) {
                return 0;
            }
            if (uVar16 != 0) {
                return 0;
            }
            bVar17 = uVar15 == 0;
            goto LAB_14075f73e;
    }
    iVar2 = FUN_1400fb720(param_1,L"eMicrochipType",3);
    if (iVar2 < 0) {
        FUN_140056830(param_1[2],"auction filter type %d requires \'eMicrochipType\'",4);
        return 0x80004005;
    }
    iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
    pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
    if (iVar2 == 3) {
        LAB_14075f7cf:
        uVar11 = (uint)(double)*pppuVar8;
    }
    else if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), iVar2 != 0)) {
        local_68 = 3;
        pppuVar8 = &local_70;
        goto LAB_14075f7cf;
    }
    *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
    if (0x11 < uVar11) {
        FUN_140056830(param_1[2],"auction filter type %d bad value for \'eMicrochipType\': %d",4,uVar11)
                ;
        return 0x80004005;
    }
    iVar2 = FUN_1400fb720(param_1,L"nMin",3);
    if (iVar2 < 0) {
        uVar15 = 1;
    }
    else {
        iVar2 = *(int *)(*(longlong *)(param_1[2] + 0x10) + -8);
        pppuVar8 = (undefined ***)(*(longlong *)(param_1[2] + 0x10) + -0x10);
        if (iVar2 == 3) {
            LAB_14075f866:
            uVar15 = (uint)(double)*pppuVar8;
        }
        else if ((iVar2 == 4) && (iVar2 = FUN_14005ac80(*pppuVar8 + 4,&local_res18), iVar2 != 0)) {
            local_68 = 3;
            pppuVar8 = &local_70;
            goto LAB_14075f866;
        }
        *(longlong *)(param_1[2] + 0x10) = *(longlong *)(param_1[2] + 0x10) + -0x20;
    }
    param_2[2] = uVar11;
    if (8 < uVar15) {
        uVar15 = 8;
    }
    param_2[3] = uVar15;
    bVar17 = uVar15 == 0;
    LAB_14075f73e:
    if (!bVar17) {
        return 0;
    }
    return 1;
}



undefined4 FUN_14075fd90(longlong param_1,int *param_2)

{
    longlong lVar1;
    int iVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    longlong *plVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong *plVar13;
    ulonglong uVar14;
    longlong local_res10;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined **local_70;
    undefined4 local_68;
    longlong local_60;
    undefined ***local_58;
    undefined **local_50;
    undefined4 local_48;
    longlong local_40;
    undefined4 local_38;

    if ((((*param_2 == 0) && (param_2[1] == 0)) && (param_2[2] == 0)) && (param_2[3] == 0)) {
        return 0;
    }
    iVar2 = FUN_140056d60(param_1,2);
    param_2[0xd] = iVar2;
    iVar2 = FUN_140056d60(param_1,3);
    param_2[0xb] = iVar2;
    if (3 < iVar2) {
        puVar5 = (undefined8 *)FUN_14018ded0(&local_res10,"invalid sort type: %d",iVar2);
        uVar3 = FUN_140056570(param_1,3,*puVar5);
        if (local_res10 == 0) {
            return uVar3;
        }
        (**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
        return uVar3;
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x30);
    puVar5 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
        puVar5 = puVar6;
    }
    if ((*(int *)(puVar5 + 1) != 0) && ((*(int *)(puVar5 + 1) != 1 || (*(int *)puVar5 != 0)))) {
        param_2[10] = param_2[10] | 1;
    }
    uVar14 = 0;
    uVar3 = 0;
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x40);
    uVar11 = uVar14;
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (uVar11 = 0, puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x48))) {
        local_90 = &PTR_FUN_140b569f0;
        local_78 = 1;
        local_88 = 0xfffffffe;
        local_80 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        uVar7 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar5 + 1) = 5;
        *puVar5 = uVar7;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_88 = FUN_1400578c0(param_1);
        puVar5 = (undefined8 *)(*(longlong *)(local_80 + 0x18) + 0x40);
        if (((puVar5 < *(undefined8 **)(local_80 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
            (*(int *)(*(longlong *)(local_80 + 0x18) + 0x48) == 5)) {
            FUN_1400579e0(local_80,puVar5,local_88);
            puVar5 = *(undefined8 **)(local_80 + 0x10);
            puVar8 = (undefined8 *)(*(longlong *)(local_80 + 0x18) + 0x40);
            puVar6 = &DAT_140a12138;
            if (puVar8 < puVar5) {
                puVar6 = puVar8;
            }
            *puVar5 = *puVar6;
            *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
            *(longlong *)(local_80 + 0x10) = *(longlong *)(local_80 + 0x10) + 0x10;
            local_88 = FUN_1400578c0(local_80);
            local_70 = &PTR_FUN_140b56a08;
            local_60 = local_80;
            local_68 = 0xfffffffe;
            local_58 = &local_90;
            *(undefined4 *)(*(longlong *)(local_80 + 0x10) + 8) = 0;
            *(longlong *)(local_80 + 0x10) = *(longlong *)(local_80 + 0x10) + 0x10;
            FUN_1400fa090(&local_70,0xffffffff);
            *(longlong *)(local_80 + 0x10) = *(longlong *)(local_80 + 0x10) + -0x10;
            uVar11 = uVar14;
            while (((iVar2 = (*(code *)(*local_58)[1])(), iVar2 != 0 &&
                                                          (iVar2 = FUN_1400fcba0(&local_70), iVar2 != 0)) && (uVar14 < 6))) {
                local_40 = 0;
                local_38 = 1;
                local_48 = 0xfffffffe;
                local_50 = &PTR_FUN_140b569f0;
                iVar2 = FUN_1400fc6c0(&local_70,&local_50);
                if ((iVar2 < 0) || (iVar2 = FUN_14075f140(&local_50,&local_a8), iVar2 < 0)) {
                    uVar3 = FUN_140056570(param_1,5,"must be a table of filter tables");
                    local_50 = &PTR_FUN_140b56a08;
                    if (local_40 != 0) {
                        FUN_1400579e0();
                    }
                    goto LAB_140760148;
                }
                uVar12 = uVar11;
                if (iVar2 != 1) {
                    uVar9 = FUN_14018db00(uVar11,uVar14 + 1,0x18);
                    lVar1 = uVar14 * 0x18;
                    *(undefined8 *)(lVar1 + uVar9) = local_a8;
                    *(undefined8 *)(lVar1 + 8 + uVar9) = local_a0;
                    *(undefined8 *)(lVar1 + 0x10 + uVar9) = local_98;
                    if ((uVar11 != uVar9) && (FUN_1407db590(uVar9,uVar11), uVar12 = uVar9, uVar11 != 0)) {
                        (**(code **)(*(longlong *)(uVar11 - 0x10) + 8))(uVar11 - 0x10);
                    }
                    uVar14 = uVar14 + 1;
                }
                local_50 = &PTR_FUN_140b56a08;
                uVar11 = uVar12;
                if (local_40 != 0) {
                    FUN_1400579e0();
                }
            }
            iVar2 = (*(code *)(*local_58)[1])();
            if ((iVar2 == 0) || (iVar2 = FUN_1400fcba0(&local_70), iVar2 == 0)) {
                param_2[6] = (int)uVar14;
                if ((int)uVar14 != 0) {
                    *(ulonglong *)(param_2 + 8) = uVar11;
                }
                local_70 = &PTR_FUN_140b56a08;
                if (local_60 != 0) {
                    FUN_1400579e0();
                }
                local_90 = &PTR_FUN_140b56a08;
                if (local_80 != 0) {
                    FUN_1400579e0();
                }
                goto LAB_1407601a7;
            }
            puVar5 = (undefined8 *)FUN_14018ded0(&local_res10,"number of filters may not exceed %d",6);
            uVar3 = FUN_140056570(param_1,5,*puVar5);
            if (local_res10 != 0) {
                (**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
            }
            LAB_140760148:
            local_70 = &PTR_FUN_140b56a08;
            uVar14 = uVar11;
            if (local_60 != 0) {
                FUN_1400579e0();
            }
        }
        else {
            uVar3 = FUN_140056570(param_1,5,"must be a table of filter tables");
        }
        local_90 = &PTR_FUN_140b56a08;
        uVar11 = uVar14;
        if (local_80 != 0) {
            FUN_1400579e0();
        }
        goto LAB_1407602ea;
    }
    LAB_1407601a7:
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x50);
    puVar5 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
        puVar5 = puVar6;
    }
    if ((*(int *)(puVar5 + 1) != 0) && ((*(int *)(puVar5 + 1) != 1 || (*(int *)puVar5 != 0)))) {
        param_2[10] = param_2[10] | 2;
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x60);
    puVar5 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(param_1 + 0x10)) {
        puVar5 = puVar6;
    }
    if ((*(int *)(puVar5 + 1) != 0) && ((*(int *)(puVar5 + 1) != 1 || (*(int *)puVar5 != 0)))) {
        param_2[10] = param_2[10] | 4;
    }
    if (param_2[0xb] == 3) {
        plVar10 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x70);
        plVar13 = &DAT_140a12138;
        if (plVar10 < *(longlong **)(param_1 + 0x10)) {
            plVar13 = plVar10;
        }
        if ((*(int *)(plVar13 + 1) != 3) &&
            ((*(int *)(plVar13 + 1) != 4 ||
              (iVar2 = FUN_14005ac80(*plVar13 + 0x20,&local_res10), iVar2 == 0)))) {
            uVar3 = FUN_140056570(param_1,8,
                                  "sort type \'AuctionSort.Property\' requires a property to sort by");
            goto LAB_1407602ea;
        }
        uVar4 = FUN_140056d60(param_1,8);
        if (0xc4 < uVar4) {
            puVar5 = (undefined8 *)FUN_14018ded0(&local_res10,"invalid sort property type: %d",uVar4);
            uVar3 = FUN_140056570(param_1,8,*puVar5);
            if (local_res10 != 0) {
                (**(code **)(*(longlong *)(local_res10 + -0x10) + 8))(local_res10 + -0x10);
            }
            goto LAB_1407602ea;
        }
        param_2[0xc] = uVar4;
    }
    FUN_1403f4900(DAT_140c65898,0x7dc,param_2);
    LAB_1407602ea:
    if (uVar11 != 0) {
        (**(code **)(*(longlong *)(uVar11 - 0x10) + 8))(uVar11 - 0x10);
    }
    return uVar3;
}



undefined4 FUN_140760460(longlong param_1)

{
    int iVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    undefined4 local_res8;
    undefined4 uStackX12;
    undefined **local_a8;
    undefined4 local_a0;
    longlong local_98;
    undefined4 local_90;
    undefined **local_88;
    undefined4 local_80;
    longlong local_78;
    undefined ***local_70;
    undefined8 local_68;
    ulonglong local_60;
    ulonglong local_58;
    undefined8 local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;

    local_90 = 1;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_a0 = 0xfffffffe;
    local_a8 = &PTR_FUN_140b569f0;
    local_98 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_a0 = FUN_1400578c0(param_1);
    puVar6 = *(undefined8 **)(local_98 + 0x18);
    if (((puVar6 < *(undefined8 **)(local_98 + 0x10)) &&
         (puVar7 = &DAT_140a12138, puVar6 != &DAT_140a12138)) && (*(int *)(puVar6 + 1) == 5)) {
        FUN_1400579e0(local_98,puVar6,local_a0);
        puVar6 = *(undefined8 **)(local_98 + 0x10);
        if (*(undefined8 **)(local_98 + 0x18) < puVar6) {
            puVar7 = *(undefined8 **)(local_98 + 0x18);
        }
        *puVar6 = *puVar7;
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(local_98 + 0x10) = *(longlong *)(local_98 + 0x10) + 0x10;
        local_a0 = FUN_1400578c0(local_98);
        local_88 = &PTR_FUN_140b56a08;
        local_78 = local_98;
        local_80 = 0xfffffffe;
        local_70 = &local_a8;
        *(undefined4 *)(*(longlong *)(local_98 + 0x10) + 8) = 0;
        *(longlong *)(local_98 + 0x10) = *(longlong *)(local_98 + 0x10) + 0x10;
        FUN_1400fa090(&local_88,0xffffffff);
        *(longlong *)(local_98 + 0x10) = *(longlong *)(local_98 + 0x10) + -0x10;
        uVar10 = 0;
        uVar8 = uVar10;
        for (; ((iVar1 = (*(code *)(*local_70)[1])(), iVar1 != 0 &&
                                                      (iVar1 = FUN_1400fcba0(&local_88), iVar1 != 0)) && (uVar10 < 10)); uVar10 = uVar10 + 1)
        {
            iVar1 = FUN_1400fc8e0(&local_88,&local_res8);
            uVar2 = local_res8;
            if (iVar1 < 0) {
                uVar2 = FUN_140056570(param_1,1,"must be a table of item ids");
                goto LAB_140760753;
            }
            lVar4 = FUN_1400b5df0(DAT_140c658f0,local_res8,0);
            if ((lVar4 == 0) ||
                (iVar1 = (**(code **)(*DAT_140c65bc0 + 8))(DAT_140c65bc0,lVar4), iVar1 == 0)) {
                puVar6 = (undefined8 *)FUN_14018ded0(&local_res8,"invalid item id: %d",uVar2);
                uVar2 = FUN_140056570(param_1,1,*puVar6);
                lVar4 = CONCAT44(uStackX12,local_res8);
                if (lVar4 != 0) {
                    (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                }
                goto LAB_140760753;
            }
            uVar5 = FUN_14018db00(uVar8,uVar10 + 1,4);
            *(undefined4 *)(uVar10 * 4 + uVar5) = uVar2;
            uVar9 = uVar8;
            if ((uVar8 != uVar5) && (FUN_1407db590(uVar5,uVar8), uVar9 = uVar5, uVar8 != 0)) {
                (**(code **)(*(longlong *)(uVar8 - 0x10) + 8))(uVar8 - 0x10);
            }
            uVar8 = uVar9;
        }
        iVar1 = (*(code *)(*local_70)[1])();
        if ((iVar1 == 0) || (iVar1 = FUN_1400fcba0(&local_88), iVar1 == 0)) {
            if ((int)uVar10 != 0) {
                local_58 = uVar8;
            }
            local_60 = local_60 & 0xffffffff | uVar10 << 0x20;
            uVar2 = FUN_14075fd90(param_1,&local_68);
        }
        else {
            puVar6 = (undefined8 *)FUN_14018ded0(&local_res8,"number of items may not exceed %d",10);
            uVar2 = FUN_140056570(param_1,1,*puVar6);
            lVar4 = CONCAT44(uStackX12,local_res8);
            if (lVar4 != 0) {
                (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
            }
        }
        LAB_140760753:
        local_88 = &PTR_FUN_140b56a08;
        if (local_78 != 0) {
            FUN_1400579e0();
        }
        if (uVar8 != 0) {
            (**(code **)(*(longlong *)(uVar8 - 0x10) + 8))(uVar8 - 0x10);
        }
    }
    else {
        uVar2 = FUN_140056570(param_1,1,"must be a table of item ids");
    }
    local_a8 = &PTR_FUN_140b56a08;
    if (local_98 != 0) {
        FUN_1400579e0();
    }
    return uVar2;
}



undefined8 FUN_1407607f0(void)

{
    undefined local_res10 [24];

    local_res10[0] = 0;
    FUN_1403f4900(DAT_140c65898,0x3ed,local_res10);
    return 0;
}



undefined8 FUN_140760820(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    longlong **pplVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong *plVar6;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((*(undefined8 **)(param_1 + 0x10) <= puVar1) || (puVar1 == &DAT_140a12138)) ||
        (*(int *)(puVar1 + 1) != 0)) {
        pplVar3 = (longlong **)FUN_140056ab0(param_1,1,"Game.ItemData");
        if (((pplVar3 != (longlong **)0x0) && ((longlong **)*pplVar3 != (longlong **)0x0)) &&
            (plVar6 = (longlong *)**pplVar3, plVar6 != (longlong *)0x0)) {
            iVar2 = (**(code **)(*plVar6 + 0x60))();
            if (iVar2 != 0) {
                if (*pplVar3 == (longlong *)0x0) {
                    lVar4 = 0;
                }
                else {
                    lVar4 = **pplVar3;
                }
                iVar2 = FUN_140569f10(lVar4);
                if (iVar2 == 0) {
                    plVar6 = *pplVar3;
                    if ((plVar6 == (longlong *)0x0) || (*(int *)(plVar6 + 0x94) == 0)) {
                        lVar4 = 0;
                    }
                    else {
                        lVar4 = plVar6[1];
                    }
                    iVar2 = FUN_14041fb40(lVar4);
                    if (iVar2 != 0) {
                        if (plVar6 == (longlong *)0x0) {
                            lVar4 = 0;
                        }
                        else {
                            lVar4 = *plVar6;
                        }
                        iVar2 = 1;
                        if (*(int *)(lVar4 + 0x78) != 0) {
                            iVar2 = *(int *)(lVar4 + 0x78);
                        }
                        if ((plVar6 == (longlong *)0x0) || (*(int *)(plVar6 + 0x93) == 0)) {
                            plVar6 = (longlong *)0x0;
                        }
                        else {
                            plVar6 = plVar6 + 4;
                        }
                        local_28 = FUN_1403e01c0(plVar6,iVar2);
                        local_20 = 1;
                        local_18 = 0;
                        FUN_140501210(param_1,&local_28);
                        return 1;
                    }
                }
            }
            uVar5 = FUN_140056570(param_1,1,"item is not auctionable");
            return uVar5;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140760970(longlong param_1)

{
    uint uVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    uint *puVar5;
    short *psVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    uint uVar11;
    double dVar12;
    int local_res8;
    int iStackX12;
    undefined **local_38;
    int local_30;
    longlong local_28;
    undefined4 local_20;

    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_28 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_30 = FUN_1400578c0();
    uVar11 = 0;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64070 != 0) || (iVar2 = FUN_140247760(), iVar2 < 0)) break;
            uVar1 = (**(code **)(*DAT_140c64930 + 0x28))();
        }
        else {
            uVar1 = (*DAT_140c63838)(&PTR_u_UnitProperty2_140a6dee0,DAT_140c63858);
        }
        if (uVar1 <= uVar11) break;
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c64070 == 0) {
                iVar2 = FUN_140247760();
                if (iVar2 < 0) {
                    puVar5 = (uint *)0x0;
                }
                else {
                    puVar5 = (uint *)(**(code **)(*DAT_140c64930 + 0x20))(DAT_140c64930,uVar11);
                }
            }
            else {
                puVar5 = (uint *)0x0;
            }
        }
        else {
            puVar5 = (uint *)(*DAT_140c63848)();
        }
        if ((((puVar5[10] != 0) && (uVar1 = puVar5[9], (uVar1 & 8) == 0)) && ((uVar1 & 4) != 0)) &&
            ((((uVar1 & 0x10) != 0 && (psVar6 = (short *)FUN_14034bdd0(), psVar6 != (short *)0x0)) &&
              (lVar8 = 0, *psVar6 != 0)))) {
            do {
                lVar8 = lVar8 + 1;
            } while (psVar6[lVar8] != 0);
            if (lVar8 != 0) {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                uVar4 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar9 + 1) = 5;
                *puVar9 = uVar4;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar3 = FUN_1400578c0(param_1);
                uVar10 = (ulonglong)*puVar5;
                puVar7 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                *puVar9 = *puVar7;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1,puVar9,&DAT_140b4d2a0,uVar10 & 0xffffffff);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                *puVar9 = *puVar7;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f0870(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
                *puVar9 = *puVar7;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_1400fb1d0(&local_38);
                FUN_1400579e0();
            }
        }
        uVar11 = uVar11 + 1;
    } while( true );
    lVar8 = *(longlong *)(*(longlong *)(local_28 + 0x20) + 0xa0);
    if (local_30 - 1U < *(uint *)(lVar8 + 0x38)) {
        puVar9 = (undefined8 *)((longlong)(local_30 + -1) * 0x10 + *(longlong *)(lVar8 + 0x18));
    }
    else {
        dVar12 = (double)local_30;
        if (dVar12 == 0.0) {
            puVar9 = *(undefined8 **)(lVar8 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
            local_res8 = SUB84(dVar12,0);
            puVar9 = (undefined8 *)
                    (*(longlong *)(lVar8 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar8 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar9 + 3) == 3) && (dVar12 == (double)puVar9[2])) goto LAB_140760cbd;
            puVar9 = (undefined8 *)puVar9[4];
        } while (puVar9 != (undefined8 *)0x0);
        puVar9 = &DAT_140a12138;
    }
    LAB_140760cbd:
    puVar7 = *(undefined8 **)(local_28 + 0x10);
    *puVar7 = *puVar9;
    uVar3 = *(undefined4 *)(puVar9 + 1);
    *(undefined4 *)(puVar7 + 1) = uVar3;
    *(longlong *)(local_28 + 0x10) = *(longlong *)(local_28 + 0x10) + 0x10;
    FUN_1400579e0(local_28,uVar3,local_30);
    return 1;
}



undefined8 FUN_140760d90(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    int iVar7;
    longlong local_res8;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    uVar5 = *(uint *)(DAT_140c658c8 + 4);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        uVar5 = FUN_140056d60(param_1);
    }
    if (*(uint *)(DAT_140c658c8 + 4) <= uVar5 && uVar5 != *(uint *)(DAT_140c658c8 + 4)) {
        uVar5 = *(uint *)(DAT_140c658c8 + 4);
    }
    lVar6 = FUN_140436d70(DAT_140c658c8,uVar5);
    lVar6 = *(longlong *)(lVar6 + 8);
    lVar4 = lVar6;
    lVar2 = *(longlong *)(lVar6 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 0x11) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar4 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar6;
    if (((lVar4 != lVar6) && (*(int *)(lVar4 + 0x20) < 0x12)) &&
        ((*(int *)(lVar4 + 0x20) < 0x11 || (*(int *)(lVar4 + 0x24) == 0)))) {
        local_res8 = lVar4;
    }
    iVar7 = 0;
    if ((local_res8 != lVar6) && (iVar7 = 0, *(int *)(local_res8 + 0x30) == 1)) {
        iVar7 = *(int *)(local_res8 + 0x34);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140760f10(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    int iVar7;
    longlong local_res8;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    uVar5 = *(uint *)(DAT_140c658c8 + 4);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        uVar5 = FUN_140056d60(param_1);
    }
    if (*(uint *)(DAT_140c658c8 + 4) <= uVar5 && uVar5 != *(uint *)(DAT_140c658c8 + 4)) {
        uVar5 = *(uint *)(DAT_140c658c8 + 4);
    }
    lVar6 = FUN_140436d70(DAT_140c658c8,uVar5);
    lVar6 = *(longlong *)(lVar6 + 8);
    lVar4 = lVar6;
    lVar2 = *(longlong *)(lVar6 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 0x10) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar4 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar6;
    if (((lVar4 != lVar6) && (*(int *)(lVar4 + 0x20) < 0x11)) &&
        ((*(int *)(lVar4 + 0x20) < 0x10 || (*(int *)(lVar4 + 0x24) == 0)))) {
        local_res8 = lVar4;
    }
    iVar7 = 0;
    if ((local_res8 != lVar6) && (iVar7 = 0, *(int *)(local_res8 + 0x30) == 1)) {
        iVar7 = *(int *)(local_res8 + 0x34);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140761090(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    int iVar7;
    longlong local_res8;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    uVar5 = *(uint *)(DAT_140c658c8 + 4);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        uVar5 = FUN_140056d60(param_1);
    }
    if (*(uint *)(DAT_140c658c8 + 4) <= uVar5 && uVar5 != *(uint *)(DAT_140c658c8 + 4)) {
        uVar5 = *(uint *)(DAT_140c658c8 + 4);
    }
    lVar6 = FUN_140436d70(DAT_140c658c8,uVar5);
    lVar6 = *(longlong *)(lVar6 + 8);
    lVar4 = lVar6;
    lVar2 = *(longlong *)(lVar6 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 0xf) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar4 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar6;
    if (((lVar4 != lVar6) && (*(int *)(lVar4 + 0x20) < 0x10)) &&
        ((*(int *)(lVar4 + 0x20) < 0xf || (*(int *)(lVar4 + 0x24) == 0)))) {
        local_res8 = lVar4;
    }
    iVar7 = 0;
    if ((local_res8 != lVar6) && (iVar7 = 0, *(int *)(local_res8 + 0x30) == 1)) {
        iVar7 = *(int *)(local_res8 + 0x34);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1407625f0(undefined8 param_1)

{
    FUN_140057020(param_1,"PublicEventsLib",&PTR_s_GetActivePublicEventList_140b76100);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140762ac0(longlong param_1)

{
    longlong lVar1;
    double *pdVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    int iVar7;
    int iVar8;
    undefined8 uVar9;
    undefined8 *puVar10;
    undefined8 *puVar11;
    ulonglong uVar12;
    longlong lVar13;
    uint uVar14;
    double dVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    int local_res8;
    int iStackX12;
    undefined8 local_res10;
    longlong local_78;
    ulonglong local_70;
    undefined **local_68;
    int local_60;
    longlong local_58;
    undefined4 local_50;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar11 = *(undefined8 **)(param_1 + 0x10);
    uVar9 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar11 + 1) = 5;
    *puVar11 = uVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar7 = FUN_1400578c0(param_1);
    uVar16 = 0;
    uVar17 = 0;
    uVar14 = 1;
    iVar5 = 1;
    do {
        local_68 = &PTR_FUN_140b569f0;
        local_50 = 1;
        local_58 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **)(param_1 + 0x10);
        uVar9 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar11 + 1) = 5;
        *puVar11 = uVar9;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar8 = FUN_1400578c0(param_1);
        local_60 = iVar8;
        FUN_1405fd1d0(*DAT_140c65b80,&local_78,uVar14);
        uVar6 = local_70;
        lVar4 = local_78;
        uVar12 = 0;
        lVar13 = param_1;
        if (local_70 != 0) {
            do {
                local_res10 = (double)((ulonglong)local_res10 & 0xffffffff00000000 |
                                       (ulonglong)*(uint *)(lVar4 + uVar12 * 4));
                iVar8 = FUN_140433830(lVar13,&local_res10);
                if (iVar8 != 0) {
                    FUN_1400fb470();
                    *(longlong *)(local_58 + 0x10) = *(longlong *)(local_58 + 0x10) + -0x10;
                    lVar13 = local_58;
                }
                uVar12 = uVar12 + 1;
                iVar8 = local_60;
            } while (uVar12 < uVar6);
        }
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        if (iVar7 - 1U < *(uint *)(lVar1 + 0x38)) {
            puVar11 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
        }
        else {
            local_res10 = (double)iVar7;
            if (local_res10 == (double)CONCAT44(uVar17,uVar16)) {
                puVar11 = *(undefined8 **)(lVar1 + 0x20);
            }
            else {
                local_res10._4_4_ = (int)((ulonglong)local_res10 >> 0x20);
                puVar11 = (undefined8 *)
                        (*(longlong *)(lVar1 + 0x20) +
                         ((longlong)(ulonglong)(uint)(local_res10._4_4_ + (int)local_res10) %
                          (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar11 + 3) == 3) && (local_res10 == (double)puVar11[2])) goto LAB_140762ca5;
                puVar11 = (undefined8 *)puVar11[4];
            } while (puVar11 != (undefined8 *)0x0);
            puVar11 = &DAT_140a12138;
        }
        LAB_140762ca5:
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        *puVar10 = *puVar11;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar5;
        lVar1 = *(longlong *)(param_1 + 0x10);
        puVar11 = (undefined8 *)(lVar1 + 0x10);
        *(undefined8 **)(param_1 + 0x10) = puVar11;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
        if (iVar8 - 1U < *(uint *)(lVar3 + 0x38)) {
            puVar10 = (undefined8 *)((longlong)(iVar8 + -1) * 0x10 + *(longlong *)(lVar3 + 0x18));
        }
        else {
            local_res10 = (double)iVar8;
            if (local_res10 == (double)CONCAT44(uVar17,uVar16)) {
                puVar10 = *(undefined8 **)(lVar3 + 0x20);
            }
            else {
                local_res10._4_4_ = (int)((ulonglong)local_res10 >> 0x20);
                puVar10 = (undefined8 *)
                        (*(longlong *)(lVar3 + 0x20) +
                         ((longlong)(ulonglong)(uint)(local_res10._4_4_ + (int)local_res10) %
                          (longlong)((1 << (*(byte *)(lVar3 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *)(puVar10 + 3) == 3) && (local_res10 == (double)puVar10[2])) goto LAB_140762d84;
                puVar10 = (undefined8 *)puVar10[4];
            } while (puVar10 != (undefined8 *)0x0);
            puVar10 = &DAT_140a12138;
        }
        LAB_140762d84:
        *puVar11 = *puVar10;
        *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_14005ea50();
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        if (lVar4 != 0) {
            (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))();
        }
        if (lVar13 != 0) {
            FUN_1400579e0();
        }
        uVar14 = uVar14 + 1;
        iVar5 = iVar5 + 1;
    } while (uVar14 < 3);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar7 - 1U < *(uint *)(lVar4 + 0x38)) {
        puVar11 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar4 + 0x18));
    }
    else {
        dVar15 = (double)iVar7;
        if (dVar15 == (double)CONCAT44(uVar17,uVar16)) {
            puVar11 = *(undefined8 **)(lVar4 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar15 >> 0x20);
            local_res8 = SUB84(dVar15,0);
            puVar11 = (undefined8 *)
                    (*(longlong *)(lVar4 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar4 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar11 + 3) == 3) && (dVar15 == (double)puVar11[2])) goto LAB_140762e7f;
            puVar11 = (undefined8 *)puVar11[4];
        } while (puVar11 != (undefined8 *)0x0);
        puVar11 = &DAT_140a12138;
    }
    LAB_140762e7f:
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar11;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar11 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar10,iVar7);
    return 1;
}



undefined8 FUN_140762ed0(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    puVar1 = *(uint **)(param_1 + 0x10);
    iVar2 = FUN_1405a4850();
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_140762fb0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;

    FUN_140057020(param_1,"ContractsLib",&PTR_s_GetPeriodicContracts_140b76120);
    FUN_140058710(param_1,"ContractQuality",0xf);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 5;
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
    FUN_140058710(param_1,"ContractType",0xc);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 3;
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



undefined8 FUN_140763130(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    uint uVar5;
    longlong lVar6;
    longlong local_res8;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    uVar5 = *(uint *)(DAT_140c658c8 + 4);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        uVar5 = FUN_140056d60(param_1);
    }
    if (*(uint *)(DAT_140c658c8 + 4) <= uVar5 && uVar5 != *(uint *)(DAT_140c658c8 + 4)) {
        uVar5 = *(uint *)(DAT_140c658c8 + 4);
    }
    lVar6 = FUN_140436d70(DAT_140c658c8,uVar5);
    lVar6 = *(longlong *)(lVar6 + 8);
    lVar4 = lVar6;
    lVar2 = *(longlong *)(lVar6 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 0xb) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar4 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar6;
    if (((lVar4 != lVar6) && (*(int *)(lVar4 + 0x20) < 0xc)) &&
        ((*(int *)(lVar4 + 0x20) < 0xb || (*(int *)(lVar4 + 0x24) == 0)))) {
        local_res8 = lVar4;
    }
    uVar5 = 0;
    if ((local_res8 != lVar6) && (uVar5 = 0, *(int *)(local_res8 + 0x30) == 1)) {
        uVar5 = *(uint *)(local_res8 + 0x34);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(ulonglong)uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140763300(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar3;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar3 + 0x180,1);
    iVar2 = FUN_1403b8dc0();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



ulonglong FUN_1407633f0(longlong param_1)

{
    uint uVar1;
    int iVar2;
    ulonglong uVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    uVar1 = FUN_140056d60(param_1,1);
    iVar6 = uVar1 - 1;
    if (0xc < uVar1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar5 = 0;
    iVar2 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0xb);
    iVar4 = 0x7fffffff;
    if (iVar2 < 0x7fffffff) {
        iVar4 = iVar2;
    }
    iVar2 = -0x80000000;
    if (-0x80000000 < iVar4) {
        iVar2 = iVar4;
    }
    if (iVar2 <= iVar6) {
        *(int *)(*(longlong *)(param_1 + 0x10) + 8) = iVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return (ulonglong)(iVar5 + 1);
    }
    uVar3 = FUN_1407402b0(param_1,iVar6);
    return uVar3;
}



undefined8 FUN_140763490(longlong param_1)

{
    undefined4 uVar1;
    bool bVar2;
    int iVar3;
    uint uVar4;
    undefined8 *puVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    iVar3 = FUN_140056d60(param_1,1);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    puVar8 = &DAT_140a12138;
    if (puVar5 < *(undefined8 **)(param_1 + 0x10)) {
        puVar8 = puVar5;
    }
    uVar10 = 0;
    bVar2 = false;
    if ((*(int *)(puVar8 + 1) != 0) && ((*(int *)(puVar8 + 1) != 1 || (*(int *)puVar8 != 0)))) {
        bVar2 = true;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    uVar11 = (ulonglong)local_20;
    if (iVar3 - 1U < 6) {
        uVar4 = iVar3 - 1;
        if (6 < uVar4) goto LAB_14076362e;
    }
    else {
        if (iVar3 != 0x14) goto LAB_14076362e;
        uVar4 = 6;
    }
    if ((((ulonglong)uVar4 < *(ulonglong *)(DAT_140c65898 + 0x570)) &&
         (plVar9 = (longlong *)((ulonglong)uVar4 * 0x10 + *(longlong *)(DAT_140c65898 + 0x568)),
                 plVar9 != (longlong *)0x0)) && (plVar9[1] != 0)) {
        do {
            lVar7 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(*plVar9 + uVar10 * 4),0);
            if ((((lVar7 != 0) && (iVar3 = FUN_14041f750(), iVar3 != 6)) && (iVar3 != 0x1f)) &&
                ((bVar2 || (((iVar3 != 0x84 && (iVar3 != 0x29)) && (iVar3 != 0x90)))))) {
                FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(*plVar9 + uVar10 * 4),0);
                iVar3 = FUN_140415c70(param_1);
                if (iVar3 != 0) {
                    FUN_1400fb470(&local_28);
                    *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                    param_1 = local_18;
                }
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < (ulonglong)plVar9[1]);
        uVar11 = (ulonglong)local_20;
    }
    LAB_14076362e:
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar11)
            ;
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    *puVar8 = *puVar5;
    uVar1 = *(undefined4 *)(puVar5 + 1);
    *(undefined4 *)(puVar8 + 1) = uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar1,uVar11 & 0xffffffff);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140763690(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    uint uVar6;
    uint uVar7;
    undefined8 *puVar8;
    int iVar9;
    longlong lVar10;
    longlong lVar11;
    double dVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    int local_res8;
    int iStackX12;
    undefined local_58 [8];
    longlong local_50;

    iVar9 = 0;
    uVar7 = 0;
    do {
        if (uVar7 == 6) {
            LAB_1407636de:
            uVar6 = 6;
            LAB_1407636e3:
            if (((ulonglong)uVar6 < *(ulonglong *)(DAT_140c65898 + 0x570)) &&
                (lVar4 = (ulonglong)uVar6 * 0x10 + *(longlong *)(DAT_140c65898 + 0x568), lVar4 != 0)) {
                iVar9 = iVar9 + *(int *)(lVar4 + 8);
            }
        }
        else if (uVar7 < 6) {
            uVar6 = uVar7;
            if (uVar7 < 7) goto LAB_1407636e3;
        }
        else if (uVar7 == 0x13) goto LAB_1407636de;
        uVar7 = uVar7 + 1;
    } while (uVar7 < 7);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar3 = FUN_1400578c0(param_1);
    uVar13 = 0;
    uVar14 = 0;
    uVar7 = iVar3 - 1;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (uVar7 < *(uint *)(lVar4 + 0x38)) {
        puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar4 + 0x18));
    }
    else {
        dVar12 = (double)iVar3;
        if (dVar12 == 0.0) {
            puVar8 = *(undefined8 **)(lVar4 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
            local_res8 = SUB84(dVar12,0);
            puVar8 = (undefined8 *)
                    (*(longlong *)(lVar4 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar4 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_1407637dd;
            puVar8 = (undefined8 *)puVar8[4];
        } while (puVar8 != (undefined8 *)0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_1407637dd:
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = FUN_14018f0e0(local_58,L"nCurrent");
    lVar11 = -1;
    lVar4 = *(longlong *)(lVar4 + 8);
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(lVar4 + lVar10) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_140062650(param_1,lVar4,lVar10);
        *(undefined4 *)(puVar8 + 1) = 4;
        *puVar8 = uVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    uVar6 = DAT_140dc4d78;
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    if ((uVar6 & 1) != 0) goto LAB_140763926;
    DAT_140dc4d78 = uVar6 | 1;
    if (DAT_140c63840 == (code *)0x0) {
        if ((_DAT_140c638ac == 0) && (iVar9 = FUN_1401fffc0(), -1 < iVar9)) {
            lVar4 = (**(code **)(*DAT_140c64c58 + 0x18))(DAT_140c64c58,0x4b3);
            goto LAB_140763911;
        }
    }
    else {
        lVar4 = (*DAT_140c63840)(&PTR_u_GameFormula_140a6a408,0x4b3,DAT_140c63858);
        LAB_140763911:
        if (lVar4 != 0) {
            DAT_140dc4d7c = *(int *)(lVar4 + 4);
            goto LAB_140763926;
        }
    }
    DAT_140dc4d7c = 1000;
    LAB_140763926:
    iVar9 = FUN_1403d2140(DAT_140c65898,0x24);
    iVar9 = DAT_140dc4d7c + iVar9;
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (uVar7 < *(uint *)(lVar4 + 0x38)) {
        puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar4 + 0x18));
    }
    else {
        dVar12 = (double)iVar3;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar8 = *(undefined8 **)(lVar4 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
            local_res8 = SUB84(dVar12,0);
            puVar8 = (undefined8 *)
                    (*(longlong *)(lVar4 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar4 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_1407639d0;
            puVar8 = (undefined8 *)puVar8[4];
        } while (puVar8 != (undefined8 *)0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_1407639d0:
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar8;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = FUN_14018f0e0(local_58,L"nMax");
    lVar4 = *(longlong *)(lVar4 + 8);
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        do {
            lVar11 = lVar11 + 1;
        } while (*(char *)(lVar4 + lVar11) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_140062650(param_1,lVar4,lVar11);
        *(undefined4 *)(puVar8 + 1) = 4;
        *puVar8 = uVar5;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar9;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    lVar4 = *(longlong *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar4;
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (uVar7 < *(uint *)(lVar11 + 0x38)) {
        puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar11 + 0x18));
    }
    else {
        dVar12 = (double)iVar3;
        if (dVar12 == (double)CONCAT44(uVar14,uVar13)) {
            puVar8 = *(undefined8 **)(lVar11 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
            local_res8 = SUB84(dVar12,0);
            puVar8 = (undefined8 *)
                    (*(longlong *)(lVar11 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar11 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar8 + 3) == 3) && (dVar12 == (double)puVar8[2])) goto LAB_140763b3f;
            puVar8 = (undefined8 *)puVar8[4];
        } while (puVar8 != (undefined8 *)0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_140763b3f:
    *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar4) = *puVar8;
    *(undefined4 *)(lVar4 + -0x28) = *(undefined4 *)(puVar8 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar8,iVar3);
    return 1;
}



undefined4 FUN_140763df0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 local_18;
    undefined4 local_10;

    FUN_140057020(param_1,"ICCommLib",&PTR_s_JoinChannel_140b76210);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    lVar3 = 3;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_18 = FUN_140062650(param_1,"knInvalidICCommMessageId",0x18);
    local_10 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_18,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140058710(param_1,"CodeEnumICCommChannelType",0x19);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    lVar4 = 5;
    *puVar1 = uVar2;
    *(undefined4 *)(puVar1 + 1) = 5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"CodeEnumICCommJoinResult",0x18);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 7;
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
    FUN_140058710(param_1,"CodeEnumICCommMessageResult",0x1b);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140764050(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    longlong local_18;

    uVar3 = FUN_140056bb0(param_1,1);
    FUN_14018f2d0(&local_28,uVar3);
    lVar1 = CONCAT44(uStack28,local_20);
    uVar3 = 0;
    if (4 < (ulonglong)(local_18 - lVar1 >> 1)) {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if ((((puVar4 < *(undefined8 **)(param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
             (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) &&
            (iVar2 = FUN_140056d60(param_1,2), iVar2 == 3)) {
            FUN_140056ab0(param_1,3,"Game.Guild");
        }
        plVar5 = (longlong *)FUN_140631010();
        if (plVar5 != (longlong *)0x0) {
            (**(code **)*plVar5)(plVar5);
        }
        puVar4 = (undefined8 *)FUN_140059170(param_1,0x10);
        lVar6 = FUN_14018b280(0x80,0);
        if (lVar6 != 0) {
            uVar3 = FUN_1406a4060(lVar6,plVar5);
        }
        *puVar4 = 0x3950;
        puVar4[1] = uVar3;
        lVar6 = *(longlong *)(param_1 + 0x20);
        local_28 = FUN_140062650(param_1,"Game.ICComm",0xb);
        local_20 = 4;
        FUN_14005e8e0(param_1,lVar6 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
        uVar3 = 1;
        if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 8))(plVar5);
        }
    }
    if (lVar1 != 0) {
        FUN_14018b900(lVar1,0);
    }
    return uVar3;
}



undefined8 FUN_1407641f0(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        FUN_140056d60(param_1,1);
    }
    iVar3 = FUN_1406304a0();
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140764260(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if ((((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
         (0 < *(int *)(puVar1 + 1))) && (iVar3 = FUN_140056d60(param_1,1), iVar3 == 2)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = FUN_140630510();
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



int FUN_1407642f0(longlong param_1,longlong param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar4 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        iVar5 = 0;
    }
    else {
        iVar5 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
    }
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
    iVar6 = iVar1 - iVar5;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        iVar4 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
    }
    iVar2 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x18))();
    iVar3 = iVar2 - iVar4;
    if ((iVar6 < 0) && (iVar3 < 0)) {
        if (iVar6 < iVar3) {
            return 1;
        }
        if (iVar3 < iVar6) {
            return -1;
        }
    }
    else if ((0 < iVar6) && (0 < iVar3)) {
        if (iVar6 < iVar3) {
            return -1;
        }
        if (iVar3 < iVar6) {
            return 1;
        }
    }
    if (iVar6 != iVar3) {
        if (iVar1 == iVar5) {
            return -1;
        }
        if (iVar2 == iVar4) {
            return 1;
        }
    }
    if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
        return (int)(*(float *)(param_1 + 0x14) - *(float *)(param_2 + 0x14));
    }
    iVar4 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    if (*(int *)(param_1 + 0x10) == iVar4) {
        return -1;
    }
    iVar4 = *(int *)(param_2 + 0x10);
    iVar5 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    if (iVar4 == iVar5) {
        return 1;
    }
    return *(int *)(param_1 + 0x10) - iVar4;
}



int FUN_140764550(longlong *param_1,longlong *param_2)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;

    lVar3 = *param_1;
    lVar4 = *param_2;
    if (lVar3 != lVar4) {
        if (lVar3 == 0) {
            return 1;
        }
        if (lVar4 == 0) {
            return -1;
        }
        if (*(int *)(lVar3 + 0x10) != *(int *)(lVar4 + 0x10)) {
            lVar3 = FUN_140214e00(*(int *)(lVar3 + 0x10));
            lVar4 = FUN_140214e00();
            if (lVar3 == 0) {
                return 1;
            }
            if (lVar4 == 0) {
                return -1;
            }
            iVar5 = 0;
            lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
            if (lVar1 == 0) {
                iVar2 = 0;
            }
            else {
                iVar2 = *(int *)(lVar1 + 0x38);
            }
            iVar2 = iVar2 - *(int *)(lVar3 + 0x18);
            if (lVar1 != 0) {
                iVar5 = *(int *)(lVar1 + 0x38);
            }
            iVar5 = iVar5 - *(int *)(lVar4 + 0x18);
            if (iVar2 == iVar5) {
                if (*(uint *)(lVar3 + 0xc) == *(uint *)(lVar4 + 0xc)) {
                    return 0;
                }
                return *(int *)(&DAT_140b76280 + (ulonglong)*(uint *)(lVar3 + 0xc) * 4) -
                       *(int *)(&DAT_140b76280 + (ulonglong)*(uint *)(lVar4 + 0xc) * 4);
            }
            return iVar2 - iVar5;
        }
    }
    return 0;
}



undefined8 FUN_140764640(undefined (*param_1) [16],uint param_2)

{
    undefined auVar1 [12];
    uint uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 uVar5;
    longlong lVar6;
    longlong lVar7;
    longlong *plVar8;
    undefined8 uVar9;
    float fVar10;
    float fVar11;

    uVar9 = 0;
    if ((DAT_140dc4d80 & 1) == 0) {
        DAT_140dc4d80 = DAT_140dc4d80 | 1;
        lVar6 = FUN_140200220(0x4cc);
        if (lVar6 == 0) {
            DAT_140dc4d84 = 2;
        }
        else {
            DAT_140dc4d84 = *(int *)(lVar6 + 4);
        }
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
    }
    uVar2 = (**(code **)(**(longlong **)param_1[2] + 0x18))();
    if ((uint)(iVar4 - DAT_140dc4d84) <= uVar2) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
        }
        uVar2 = (**(code **)(**(longlong **)param_1[2] + 0x18))();
        lVar6 = DAT_140c65898;
        if (uVar2 <= (uint)(DAT_140dc4d84 + iVar4)) {
            *(undefined4 *)(param_1[1] + 4) = 0x7f7fffff;
            if (*(longlong **)(lVar6 + 0x1bf0) == (longlong *)0x0) {
                uVar3 = 0;
            }
            else {
                uVar3 = (**(code **)(**(longlong **)(lVar6 + 0x1bf0) + 0x18))();
            }
            lVar6 = (**(code **)(**(longlong **)param_1[2] + 0x90))();
            plVar8 = (longlong *)**(longlong **)(lVar6 + 8);
            if (plVar8 != *(longlong **)(lVar6 + 8)) {
                do {
                    iVar4 = (**(code **)(**(longlong **)param_1[2] + 0xc0))();
                    if (((((iVar4 != 2) || (plVar8[2] == 0)) || ((*(uint *)(plVar8[2] + 0x10) & 1) == 0)) &&
                         (param_2 == (*(int *)(*(longlong *)(plVar8[3] + 8) + 0x1b8) == 0))) &&
                        (((iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(plVar8[3] + 8)), iVar4 == 5
                                                                                                   || (iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(plVar8[3] + 8)),
                                iVar4 == 0)) ||
                          (iVar4 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(plVar8[3] + 8)), iVar4 == 1)))
                            ) {
                        if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                             (*(uint *)(*(longlong *)(plVar8[3] + 8) + 0x18) <=
                              (uint)(DAT_140dc4d84 + *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38)))) &&
                            (iVar4 = FUN_140552550(plVar8[3],0xffffddfc), iVar4 == 0)) {
                            uVar5 = (**(code **)(**(longlong **)param_1[2] + 0x80))
                                    (*(longlong **)param_1[2],uVar3);
                            lVar7 = FUN_14022bfc0(uVar5);
                            if ((lVar7 != 0) && (lVar7 = FUN_14024b980(*(undefined4 *)(lVar7 + 4)), lVar7 != 0)) {
                                auVar1 = *(undefined (*) [12])(lVar7 + 0xc);
                                fVar10 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e0) -
                                         *(float *)*(undefined (*) [12])(lVar7 + 0xc);
                                fVar11 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e4) -
                                         *(float *)(lVar7 + 0x10);
                                fVar10 = fVar10 * fVar10 + fVar11 * fVar11 + 0.0;
                                if (fVar10 < *(float *)(param_1[1] + 4)) {
                                    *(undefined4 *)param_1[1] = *(undefined4 *)(lVar7 + 0x28);
                                    *param_1 = ZEXT1216(auVar1);
                                    *(float *)(param_1[1] + 4) = fVar10;
                                    *(undefined4 *)(param_1[1] + 8) = **(undefined4 **)(plVar8[3] + 8);
                                    *(undefined4 *)(param_1[2] + 0xc) =
                                            *(undefined4 *)(*(longlong *)(plVar8[3] + 8) + 0x1bc);
                                    if (((*(byte *)(*(longlong *)(plVar8[3] + 8) + 0xc) & 4) == 0) ||
                                        (iVar4 = FUN_140552fd0(), iVar4 == 0)) {
                                        uVar5 = 0;
                                    }
                                    else {
                                        uVar5 = 1;
                                    }
                                    *(undefined4 *)param_1[3] = uVar5;
                                    iVar4 = (**(code **)(**(longlong **)param_1[2] + 0xc0))();
                                    if ((iVar4 == 2) ||
                                        (iVar4 = (**(code **)(**(longlong **)param_1[2] + 0xc0))(), iVar4 == 1)) {
                                        uVar5 = 1;
                                    }
                                    else {
                                        uVar5 = 0;
                                    }
                                    *(undefined4 *)(param_1[2] + 8) = uVar5;
                                    uVar9 = 1;
                                }
                            }
                        }
                    }
                    plVar8 = (longlong *)*plVar8;
                } while (plVar8 != (longlong *)*(longlong *)(lVar6 + 8));
            }
            return uVar9;
        }
    }
    return 0;
}



void FUN_140764970(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    int iVar1;
    longlong *plVar2;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    longlong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            local_48 = 0;
            local_40 = 0;
            local_38 = 0;
            local_30 = 0;
            local_20 = 0;
            local_18 = 0;
            local_10 = 0;
            local_28 = plVar2[2];
            if (local_28 != 0) {
                iVar1 = FUN_140764640(&local_48,param_3);
                if (iVar1 != 0) {
                    FUN_140765f30(param_2);
                }
            }
            plVar2 = (longlong *)*plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 8));
    }
    return;
}



void FUN_140764a20(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    uint *puVar2;
    uint uVar3;
    int iVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong *plVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    longlong lVar13;
    longlong lVar14;
    undefined4 uVar15;
    undefined8 *puVar16;
    float fVar17;
    int local_res8 [2];
    undefined local_58 [8];
    undefined4 local_50;
    undefined4 uStack76;
    longlong local_48;

    uVar11 = 0;
    if (*(longlong *)(param_2 + 0x20) != 0) {
        uVar12 = uVar11;
        if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
            uVar3 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
            uVar12 = (ulonglong)uVar3;
        }
        iVar4 = (**(code **)(**(longlong **)(param_2 + 0x20) + 0x80))
                (*(longlong **)(param_2 + 0x20),uVar12);
        if ((iVar4 != 0) &&
            (local_res8[0] = iVar4, iVar4 = FUN_1407662a0(*(undefined8 *)(param_1 + 0x10),local_res8),
                    iVar4 != 0)) {
            FUN_1400fb540(param_1,L"hubSuggested");
            plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
    }
    if ((*(longlong *)(param_2 + 0x20) != 0) &&
        (iVar4 = FUN_14072d5b0(*(undefined8 *)(param_1 + 0x10)), iVar4 != 0)) {
        FUN_1400fb540(param_1);
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    if (((*(int *)(param_2 + 0x18) != 0) && (lVar6 = FUN_1405a8a40(), lVar6 != 0)) &&
        (iVar4 = FUN_140663030(uVar9,lVar6), iVar4 != 0)) {
        FUN_1400fb540(param_1,L"queSuggested");
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
    iVar4 = *(int *)(param_2 + 0x30);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar16 = *(undefined8 **)(lVar6 + 0x10);
    *puVar16 = *puVar7;
    *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar8 = FUN_14018f0e0(local_58,L"bCanCall");
    lVar13 = -1;
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    }
    else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar6);
    }
    if (CONCAT44(uStack76,local_50) != 0) {
        FUN_14018b900(CONCAT44(uStack76,local_50),0);
    }
    puVar2 = *(uint **)(lVar6 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar4 != 0);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar6,0xfffffffd);
    FUN_14005ea50(lVar6,uVar9,*(longlong *)(lVar6 + 0x10) + -0x20,*(longlong *)(lVar6 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    iVar4 = *(int *)(param_2 + 0x28);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar16 = *(undefined8 **)(lVar6 + 0x10);
    *puVar16 = *puVar7;
    *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    lVar8 = FUN_14018f0e0(local_58,L"bInProgress");
    lVar8 = *(longlong *)(lVar8 + 8);
    if (lVar8 == 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    }
    else {
        do {
            lVar13 = lVar13 + 1;
        } while (*(char *)(lVar8 + lVar13) != '\0');
        FUN_140058710(lVar6,lVar8,lVar13);
    }
    if (CONCAT44(uStack76,local_50) != 0) {
        FUN_14018b900(CONCAT44(uStack76,local_50),0);
    }
    puVar2 = *(uint **)(lVar6 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar4 != 0);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar6,0xfffffffd);
    FUN_14005ea50(lVar6,uVar9,*(longlong *)(lVar6 + 0x10) + -0x20,*(longlong *)(lVar6 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar6 = *(longlong *)(param_1 + 0x10);
    uVar12 = (ulonglong)*(uint *)(param_2 + 0x2c);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar16 = *(undefined8 **)(lVar6 + 0x10);
    *puVar16 = *puVar7;
    *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_1 + 0x10),puVar16,L"nRecommendedGroupSize",uVar12 & 0xffffffff
    );
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    FUN_1400fa3c0(local_58,*(undefined8 *)(param_1 + 0x10),param_2);
    FUN_1400fb2a0(param_1,L"tLocation",local_50);
    fVar17 = 0.0;
    if (*(int *)(param_2 + 0x34) != 0) {
        plVar1 = *(longlong **)(DAT_140c65898 + 0x1bf0);
        plVar10 = (longlong *)FUN_140717160();
        if ((plVar1 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
            fVar17 = (float)(**(code **)(*plVar1 + 0x20))(plVar1,*(undefined4 *)(param_2 + 0x34));
            FUN_1407a2a00();
            uVar11 = FUN_14034bdd0(*plVar10,*(undefined4 *)(*plVar10 + 0xc));
        }
    }
    uVar15 = 0;
    lVar6 = *(longlong *)(param_1 + 0x10);
    if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar6);
    }
    puVar16 = *(undefined8 **)(lVar6 + 0x10);
    uVar9 = FUN_14005c1b0(lVar6,0,0);
    *(undefined4 *)(puVar16 + 1) = 5;
    *puVar16 = uVar9;
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    uVar5 = FUN_1400578c0(lVar6);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar5);
    puVar16 = *(undefined8 **)(lVar6 + 0x10);
    *puVar16 = *puVar7;
    *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400f0870(lVar6,puVar16,L"strName",uVar11);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
    puVar16 = *(undefined8 **)(lVar6 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar5);
    *puVar16 = *puVar7;
    *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400f06f0(lVar6);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
    puVar16 = *(undefined8 **)(lVar6 + 0x10);
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar5);
    uVar9 = *puVar7;
    *puVar16 = uVar9;
    *(undefined4 *)(puVar16 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400f06f0(lVar6,uVar9,L"nCurrent",CONCAT44(uVar15,(int)fVar17));
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
    FUN_1400fb2a0(param_1,L"tFactionInfo",uVar5);
    FUN_1400579e0(lVar6);
    if (local_48 != 0) {
        FUN_1400579e0();
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140764ee0(int **param_1,undefined8 param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong lVar8;
    longlong lVar9;
    int *piVar10;
    int *piVar11;
    ulonglong uVar12;
    longlong lVar13;
    longlong *plVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    longlong local_res18;

    if ((DAT_140dc4d88 & 1) == 0) {
        DAT_140dc4d88 = DAT_140dc4d88 | 1;
        lVar5 = FUN_140200220(0x4cc);
        if (lVar5 == 0) {
            _DAT_140dc4d8c = 2;
        }
        else {
            _DAT_140dc4d8c = *(int *)(lVar5 + 4);
        }
    }
    if (*(longlong **)(DAT_140c65898 + 0x1bf0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(DAT_140c65898 + 0x1bf0) + 0x18))();
    }
    lVar5 = DAT_140c65930;
    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        plVar14 = (longlong *)0x0;
    }
    else {
        plVar14 = *(longlong **)(*(longlong *)(DAT_140c65898 + 0x78) + 0x118);
    }
    local_res18 = *(longlong *)(*(longlong *)(DAT_140c65930 + 0x10) + 0x10);
    if (local_res18 != *(longlong *)(DAT_140c65930 + 0x10)) {
        fVar17 = 3.402823e+38;
        do {
            plVar1 = *(longlong **)(local_res18 + 0x28);
            lVar9 = *plVar1;
            if ((((*(int *)(lVar9 + 0x14) == 0) || (*(int *)(lVar9 + 0x18) == 0)) &&
                 ((ulonglong)(plVar1[0xb] + plVar1[7]) < (ulonglong)*(uint *)(lVar9 + 0xc))) &&
                (lVar9 = *(longlong *)(plVar1[2] + 0x10), lVar9 != plVar1[2])) {
                LAB_140765030:
                lVar6 = FUN_1405a8a40();
                if (lVar6 != 0) {
                    piVar11 = (int *)0x0;
                    if (param_1[1] != (int *)0x0) {
                        piVar10 = *param_1;
                        do {
                            if (*piVar10 == *(int *)(*(longlong *)(lVar6 + 8) + 0x1b8)) {
                                if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                                     (*(uint *)(*(longlong *)(lVar6 + 8) + 0x18) <=
                                      (uint)(*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38) + _DAT_140dc4d8c)))
                                    && (iVar3 = FUN_140552550(), iVar3 == 0)) {
                                    if (plVar14 == (longlong *)0x0) goto LAB_14076512c;
                                    uVar12 = 0x194;
                                    goto LAB_1407650f0;
                                }
                                break;
                            }
                            piVar11 = (int *)((longlong)piVar11 + 1);
                            piVar10 = piVar10 + 1;
                        } while (piVar11 < param_1[1]);
                    }
                }
                goto LAB_1407652ff;
            }
            LAB_14076535f:
            lVar9 = *(longlong *)(local_res18 + 0x18);
            if (lVar9 == 0) {
                lVar9 = *(longlong *)(local_res18 + 8);
                if (local_res18 == *(longlong *)(lVar9 + 0x18)) {
                    do {
                        local_res18 = lVar9;
                        lVar9 = *(longlong *)(local_res18 + 8);
                    } while (local_res18 == *(longlong *)(lVar9 + 0x18));
                }
                if (*(longlong *)(local_res18 + 0x18) != lVar9) {
                    local_res18 = lVar9;
                }
            }
            else {
                for (lVar6 = *(longlong *)(lVar9 + 0x10); local_res18 = lVar9, lVar6 != 0;
                     lVar6 = *(longlong *)(lVar6 + 0x10)) {
                    lVar9 = lVar6;
                }
            }
        } while (local_res18 != *(longlong *)(lVar5 + 0x10));
    }
    return;
    while (uVar12 = uVar12 + 4, uVar12 < 0x19c) {
        LAB_1407650f0:
        if ((*(int *)(*(longlong *)(lVar6 + 8) + uVar12) != 0) &&
            (iVar3 = (**(code **)(*plVar14 + 0x30))
                    (plVar14,*(undefined4 *)(uVar12 + *(longlong *)(lVar6 + 8))), iVar3 != 0))
            break;
    }
    LAB_14076512c:
    lVar13 = *(longlong *)(*(longlong *)(lVar6 + 0x60) + 0x10);
    fVar18 = fVar17;
    if (lVar13 != *(longlong *)(lVar6 + 0x60)) {
        do {
            plVar7 = (longlong *)FUN_1407242b0();
            if (plVar7 != (longlong *)0x0) {
                uVar4 = (**(code **)(*plVar7 + 0x80))(plVar7);
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c649e4 != 0) || (iVar3 = FUN_14022bd60(), iVar3 < 0)) goto LAB_140765282;
                    lVar8 = (**(code **)(*DAT_140c65188 + 0x18))();
                }
                else {
                    lVar8 = (*DAT_140c63840)(&PTR_u_QuestHub_140a6c820,uVar4,DAT_140c63858);
                }
                if (lVar8 != 0) {
                    uVar4 = *(undefined4 *)(lVar8 + 4);
                    if (DAT_140c63840 == (code *)0x0) {
                        if ((_DAT_140c63e98 != 0) || (iVar3 = FUN_14024b720(), iVar3 < 0)) goto LAB_140765282;
                        lVar8 = (**(code **)(*DAT_140c65388 + 0x18))(DAT_140c65388,uVar4);
                    }
                    else {
                        lVar8 = (*DAT_140c63840)(&PTR_u_WorldLocation2_140a6e228,uVar4,DAT_140c63858);
                    }
                    if ((lVar8 != 0) &&
                        (fVar15 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e0) -
                                  *(float *)(lVar8 + 0xc),
                         fVar16 = *(float *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x11e4) -
                                  *(float *)(lVar8 + 0x10), fVar15 = fVar15 * fVar15 + fVar16 * fVar16 + 0.0,
                                fVar15 < fVar17)) {
                        fVar17 = fVar15;
                    }
                }
            }
            LAB_140765282:
            lVar8 = *(longlong *)(lVar13 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar13 + 8);
                if (lVar13 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar13 = lVar8;
                        lVar8 = *(longlong *)(lVar13 + 8);
                    } while (lVar13 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar13 + 0x18) != lVar8) {
                    lVar13 = lVar8;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar8 + 0x10); lVar13 = lVar8, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar8 = lVar2;
                }
            }
        } while (lVar13 != *(longlong *)(lVar6 + 0x60));
    }
    FUN_140765f30(param_2);
    fVar17 = fVar18;
    LAB_1407652ff:
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
        for (lVar13 = *(longlong *)(lVar6 + 0x10); lVar9 = lVar6, lVar13 != 0;
             lVar13 = *(longlong *)(lVar13 + 0x10)) {
            lVar6 = lVar13;
        }
    }
    if (lVar9 == plVar1[2]) goto LAB_14076535f;
    goto LAB_140765030;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140765410(undefined8 param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    uint uVar5;
    uint uVar6;
    ulonglong uVar7;

    uVar1 = 0;
    uVar5 = uVar1;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        uVar5 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c65558 == 0) {
            iVar2 = FUN_140214fe0();
            if (iVar2 < 0) {
                uVar1 = 0;
            }
            else {
                uVar1 = (**(code **)(*DAT_140c641f0 + 0x28))();
            }
        }
    }
    else {
        uVar1 = (*DAT_140c63838)(&PTR_u_MatchingGameMap_140a6b550,DAT_140c63858);
    }
    uVar7 = 0;
    if (uVar1 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                uVar3 = 0;
                if (_DAT_140c65558 == 0) {
                    iVar2 = FUN_140214fe0();
                    if (iVar2 < 0) {
                        uVar3 = 0;
                    }
                    else {
                        uVar3 = (**(code **)(*DAT_140c641f0 + 0x20))(DAT_140c641f0,uVar7);
                    }
                }
            }
            else {
                uVar3 = (*DAT_140c63848)(&PTR_u_MatchingGameMap_140a6b550);
            }
            if (((uVar3 != 0) &&
                 ((((*(int *)(uVar3 + 0x20) == 0 ||
                     (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))(), iVar2 != 0)) &&
                    (iVar2 = FUN_1405c3960(), iVar2 != 0)) &&
                   (((*(byte *)(uVar3 + 4) & 1) != 0 && (lVar4 = FUN_140214e00(), lVar4 != 0)))))) &&
                ((*(byte *)(lVar4 + 0x10) & 1) != 0)) {
                iVar2 = *(int *)(lVar4 + 0xc);
                if (param_2 == 0) {
                    if ((iVar2 == 0) || (iVar2 - 3U < 5)) goto LAB_140765580;
                }
                else if ((iVar2 - 1U < 2) || (iVar2 == 8)) {
                    LAB_140765580:
                    if ((uVar5 < *(uint *)(lVar4 + 0x1c) || uVar5 == *(uint *)(lVar4 + 0x1c)) &&
                        (*(uint *)(lVar4 + 0x18) <= uVar5)) {
                        FUN_140033260(param_1);
                    }
                }
            }
            uVar6 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar6;
        } while (uVar6 < uVar1);
    }
    return;
}



longlong FUN_140765f30(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    longlong lVar6;
    undefined4 *puVar7;
    undefined4 *puVar8;
    ulonglong uVar9;

    lVar1 = param_1[1];
    lVar6 = FUN_14018db00(*param_1,lVar1 + 1);
    puVar7 = (undefined4 *)(lVar1 * 0x40 + lVar6);
    if (puVar7 != (undefined4 *)0x0) {
        uVar3 = param_2[1];
        uVar4 = param_2[2];
        uVar5 = param_2[3];
        *puVar7 = *param_2;
        puVar7[1] = uVar3;
        puVar7[2] = uVar4;
        puVar7[3] = uVar5;
        puVar7[4] = param_2[4];
        puVar7[5] = param_2[5];
        puVar7[6] = param_2[6];
        *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(param_2 + 8);
        puVar7[10] = param_2[10];
        puVar7[0xb] = param_2[0xb];
        puVar7[0xc] = param_2[0xc];
        puVar7[0xd] = param_2[0xd];
    }
    if (*param_1 != lVar6) {
        uVar9 = 0;
        if (param_1[1] != 0) {
            puVar7 = (undefined4 *)(lVar6 + 0x14);
            do {
                if (puVar7 + -5 != (undefined4 *)0x0) {
                    puVar8 = (undefined4 *)((longlong)puVar7 + *param_1 + (-0x14 - lVar6));
                    uVar3 = puVar8[1];
                    uVar4 = puVar8[2];
                    uVar5 = puVar8[3];
                    puVar7[-5] = *puVar8;
                    puVar7[-4] = uVar3;
                    puVar7[-3] = uVar4;
                    puVar7[-2] = uVar5;
                    puVar7[-1] = puVar8[4];
                    *puVar7 = puVar8[5];
                    puVar7[1] = puVar8[6];
                    *(undefined8 *)(puVar7 + 3) = *(undefined8 *)(puVar8 + 8);
                    puVar7[5] = puVar8[10];
                    puVar7[6] = puVar8[0xb];
                    puVar7[7] = puVar8[0xc];
                    puVar7[8] = puVar8[0xd];
                }
                uVar9 = uVar9 + 1;
                puVar7 = puVar7 + 0x10;
            } while (uVar9 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = lVar6;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



void FUN_140766060(longlong *param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined (*pauVar8) [16];
    undefined4 *puVar9;
    ulonglong uVar10;
    undefined8 *puVar11;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    longlong local_10;

    local_28 = *param_1;
    uVar2 = param_1[1];
    uVar10 = 0;
    local_20 = &LAB_140764400;
    local_18 = 0;
    uVar4 = SUB168(ZEXT816(8) * ZEXT816(uVar2),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar2) >> 0x40,0) != 0) {
        uVar4 = 0xffffffffffffffff;
    }
    local_10 = FUN_14018b280(uVar4,0);
    if (uVar2 != 0) {
        uVar7 = uVar10;
        if (1 < uVar2) {
            uVar6 = uVar10;
            do {
                uVar7 = uVar6 + 2;
                puVar1 = (ulonglong *)(local_10 + -0x10 + uVar7 * 8);
                *puVar1 = uVar6;
                puVar1[1] = uVar6 + 1;
                uVar6 = uVar7;
            } while (uVar7 < uVar2 - ((uint)uVar2 & 1));
        }
        for (; uVar7 < uVar2; uVar7 = uVar7 + 1) {
            *(ulonglong *)(local_10 + uVar7 * 8) = uVar7;
        }
    }
    FUN_14001fec0(&LAB_140766350,local_10,uVar2,&local_28);
    lVar3 = param_1[1];
    if (lVar3 == 0) {
        puVar11 = (undefined8 *)0x0;
    }
    else {
        puVar5 = (undefined8 *)FUN_14018b280(lVar3 * 0x40 + 0x10,0);
        if (puVar5 == (undefined8 *)0x0) {
            puVar11 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar5[1] = lVar3;
            puVar11 = puVar5 + 2;
            *puVar5 = &PTR_LAB_140b55060;
        }
    }
    if (param_1[1] != 0) {
        puVar9 = (undefined4 *)((longlong)puVar11 + 0x14);
        do {
            if ((undefined (*) [16])(puVar9 + -5) != (undefined (*) [16])0x0) {
                pauVar8 = (undefined (*) [16])(*(longlong *)(local_10 + uVar10 * 8) * 0x40 + *param_1);
                *(undefined (*) [16])(puVar9 + -5) = *pauVar8;
                puVar9[-1] = *(undefined4 *)pauVar8[1];
                *puVar9 = *(undefined4 *)(pauVar8[1] + 4);
                puVar9[1] = *(undefined4 *)(pauVar8[1] + 8);
                *(undefined8 *)(puVar9 + 3) = *(undefined8 *)pauVar8[2];
                puVar9[5] = *(undefined4 *)(pauVar8[2] + 8);
                puVar9[6] = *(undefined4 *)(pauVar8[2] + 0xc);
                puVar9[7] = *(undefined4 *)pauVar8[3];
                puVar9[8] = *(undefined4 *)(pauVar8[3] + 4);
            }
            uVar10 = uVar10 + 1;
            puVar9 = puVar9 + 0x10;
        } while (uVar10 < (ulonglong)param_1[1]);
    }
    lVar3 = *param_1;
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    *param_1 = (longlong)puVar11;
    FUN_14018b900(local_10,0);
    return;
}



void FUN_140766220(undefined8 *param_1,undefined8 *param_2)

{
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong lVar6;

    if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
        lVar6 = (longlong)puVar4 - (longlong)param_1;
        do {
            iVar2 = rand();
            puVar5 = puVar4 + 1;
            lVar3 = lVar6 >> 3;
            lVar6 = lVar6 + 8;
            lVar3 = (longlong)iVar2 % (lVar3 + 1);
            uVar1 = *puVar4;
            *puVar4 = param_1[lVar3];
            param_1[lVar3] = uVar1;
            puVar4 = puVar5;
        } while (puVar5 != param_2);
    }
    return;
}



undefined8 FUN_1407662a0(longlong param_1,undefined4 *param_2)

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
    local_18 = FUN_140062650(param_1,"Game.QuestHub",0xd);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_140766a30(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;

    FUN_140057020(param_1,"FortunesLib",&PTR_s_GetFortunesLootList_140b762c0);
    FUN_140058710(param_1,"CodeEnumModelAttachment",0x17);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"FXMisc01",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4035000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FXMisc02",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4036000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FXMisc03",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4037000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FXMisc04",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4038000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FXMisc05",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4051000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FXMisc06",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4051400000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FXMisc07",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4051800000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FXMisc08",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4051c00000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"FXMisc09",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4052000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    CurrencyHandler(param_1);
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_140768e00(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;

    FUN_140057020(param_1,"MatchingGameLib",&PTR_s_CanLookForReplacements_140b76320);
    FUN_140058710(param_1,"PVPGameState",0xc);
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
    FUN_140058710(param_1,"MatchEndReason",0xe);
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
    FUN_140058710(param_1,"PvpDeathReason",0xe);
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
    FUN_140058710(param_1,&DAT_140b4e58c,4);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Team1",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Team2",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Winner",6);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Team1",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Team2",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b4e564,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Rules",5);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Default",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"DeathmatchPool",0xe);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"WaveRespawn",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



undefined8 FUN_140769400(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    iVar2 = FUN_1405c1510(DAT_140c65b98 + 0x108);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_140769500(longlong param_1)

{
    longlong lVar1;
    uint uVar2;
    undefined8 *puVar3;
    undefined8 local_28;
    undefined8 local_20;
    ulonglong local_18;

    lVar1 = DAT_140c65b98;
    puVar3 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar3 = *(undefined8 **)(param_1 + 0x18);
    }
    if ((*(int *)(puVar3 + 1) == 0) || ((*(int *)(puVar3 + 1) == 1 && (*(int *)puVar3 == 0)))) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    if ((*(int *)(DAT_140c65b98 + 0x138) != 0) && (*(longlong *)(DAT_140c65b98 + 0x140) != 0)) {
        local_28 = *(undefined8 *)(DAT_140c65b98 + 0x138);
        local_18 = (ulonglong)uVar2;
        local_20 = *(undefined8 *)(DAT_140c65b98 + 0x140);
        FUN_1403f4900(DAT_140c65898,0x617,&local_28);
        *(undefined4 *)(lVar1 + 0x138) = 0;
        *(undefined8 *)(lVar1 + 0x140) = 0;
    }
    return 0;
}



undefined8 FUN_1407695b0(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 local_res10 [6];

    lVar1 = DAT_140c65b98;
    puVar2 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar2 = *(undefined8 **)(param_1 + 0x18);
    }
    if ((*(int *)(puVar2 + 1) == 0) || ((*(int *)(puVar2 + 1) == 1 && (*(int *)puVar2 == 0)))) {
        local_res10[0] = 0;
    }
    else {
        local_res10[0] = 1;
    }
    if (*(int *)(DAT_140c65b98 + 0x148) != 0) {
        FUN_1403f4900(DAT_140c65898,0x624,local_res10);
        *(undefined4 *)(lVar1 + 0x148) = 0;
    }
    return 0;
}



undefined8 FUN_1407697a0(void)

{
    ulonglong local_18;
    undefined4 local_10;

    local_10 = 0;
    local_18 = (ulonglong)*(uint *)(DAT_140c65b98 + 0x110);
    FUN_1403f4900(DAT_140c65898,0x5b2,&local_18);
    return 0;
}



undefined8 FUN_1407697f0(longlong param_1)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    ulonglong uVar5;
    undefined8 *puVar6;

    lVar1 = DAT_140c65b98;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    uVar5 = (ulonglong)*(uint *)(lVar1 + 0xa8);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar6,L"eMatchType",uVar5 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar4;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_14076a080(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140215240(*(undefined4 *)(DAT_140c65b98 + 0x108));
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    FUN_14073a540(param_1,lVar1,0);
    return 1;
}



undefined8 FUN_14076a7a0(void)

{
    FUN_1405c1480(DAT_140c65b98 + 0x108);
    return 0;
}



undefined8 FUN_14076a8c0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    byte bVar3;
    longlong lVar4;

    lVar4 = FUN_140215240(*(undefined4 *)(DAT_140c65b98 + 0x108));
    if (lVar4 != 0) {
        lVar4 = FUN_140214e00(*(undefined4 *)(lVar4 + 0x10));
        if ((lVar4 != 0) && (DAT_140c65898 != 0)) {
            if ((*(int *)(lVar4 + 0xc) == 0) || (bVar3 = 0, *(int *)(lVar4 + 0xc) - 3U < 5)) {
                bVar3 = 1;
            }
            puVar1 = *(uint **)(param_1 + 0x10);
            puVar1[2] = 1;
            *puVar1 = (uint)bVar3;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *puVar2 = 0;
    puVar2[2] = 1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14076a9f0(void)

{
    undefined local_res10 [24];

    if (*(int *)(DAT_140c65b98 + 0x10c) != 0x10) {
        local_res10[0] = 0;
        FUN_1403f4900(DAT_140c65898,0x5da,local_res10);
    }
    return 0;
}



undefined8 FUN_14076aa30(longlong param_1,undefined8 param_2)

{
    undefined8 *puVar1;
    int iVar2;
    uint uVar3;
    undefined8 *puVar4;
    uint local_res8 [2];
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined ***local_10;

    local_30 = 1;
    local_48 = &PTR_FUN_140b569f0;
    local_40 = 0xfffffffe;
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    local_38 = param_1;
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) &&
         (puVar4 = &DAT_140a12138, puVar1 != &DAT_140a12138)) && (*(int *)(puVar1 + 1) == 5)) {
        FUN_1400579e0(param_1,param_2,0xfffffffe);
        puVar1 = *(undefined8 **)(local_38 + 0x10);
        if (*(undefined8 **)(local_38 + 0x18) < puVar1) {
            puVar4 = *(undefined8 **)(local_38 + 0x18);
        }
        *puVar1 = *puVar4;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + 0x10;
        local_40 = FUN_1400578c0(local_38);
    }
    local_20 = 0xfffffffe;
    local_10 = &local_48;
    uVar3 = 0;
    local_28 = &PTR_FUN_140b56a08;
    *(undefined4 *)(*(longlong *)(local_38 + 0x10) + 8) = 0;
    *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + 0x10;
    local_18 = local_38;
    FUN_1400fa090(&local_28,0xffffffff);
    *(longlong *)(local_38 + 0x10) = *(longlong *)(local_38 + 0x10) + -0x10;
    while( true ) {
        iVar2 = (*(code *)(*local_10)[1])();
        if (iVar2 == 0) break;
        iVar2 = FUN_1400fcba0(&local_28);
        if (iVar2 == 0) break;
        iVar2 = FUN_1400fc8e0(&local_28,local_res8);
        if ((-1 < iVar2) && (local_res8[0] < 3)) {
            uVar3 = uVar3 | 1 << ((byte)local_res8[0] & 0x1f);
        }
    }
    iVar2 = FUN_1405c1510(DAT_140c65b98 + 0x108);
    if (iVar2 != 0) {
        local_res8[0] = uVar3;
        FUN_1403f4900(DAT_140c65898,0x5d5,local_res8);
    }
    local_28 = &PTR_FUN_140b56a08;
    if (local_18 != 0) {
        FUN_1400579e0();
    }
    local_48 = &PTR_FUN_140b56a08;
    if (local_38 != 0) {
        FUN_1400579e0();
    }
    return 0;
}



undefined8 FUN_14076ac30(void)

{
    longlong lVar1;
    undefined *puVar2;
    undefined local_res10 [24];

    lVar1 = FUN_140215240(*(undefined4 *)(DAT_140c65b98 + 0x108));
    if (lVar1 != 0) {
        lVar1 = FUN_140214e00(*(undefined4 *)(lVar1 + 0x10));
        if (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0xc) < 0x10) {
                puVar2 = &DAT_140b51560 + (longlong)(int)*(uint *)(lVar1 + 0xc) * 0x10;
            }
            else {
                puVar2 = &DAT_140b51550;
            }
            if ((puVar2[0xc] & 1) != 0) {
                local_res10[0] = 0;
                FUN_1403f4900(DAT_140c65898,0x606,local_res10);
            }
        }
    }
    return 0;
}



undefined8 FUN_14076acb0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;

    FUN_140057020(param_1,"MatchMakingLib",&PTR_s_CanLeaveQueueAsGroup_140b764c0);
    FUN_140058710(param_1,"MatchType",9);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0x10;
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
    FUN_140058710(param_1,"MatchQueueResult",0x10);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    lVar3 = 0x33;
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
    FUN_140058710(param_1,"Roles",5);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,&DAT_140b4e99c,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Healer",6);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_1409f981c,3);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RatingType",10);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Arena2v2",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Arena3v3",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Arena5v5",8);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RatedBattleground",0x11);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Warplot",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14076b1c0(longlong param_1,ulonglong param_2)

{
    uint *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    uint uVar8;
    ulonglong uVar9;
    undefined local_38 [8];
    longlong local_30;

    lVar3 = FUN_1405bfe80(DAT_140c65b98,param_2,0xffffffff);
    lVar4 = 0;
    if ((lVar3 != 0) && (lVar4 = FUN_1405c2e70(DAT_140c65b98 + 0x1b8,lVar3), lVar4 != 0)) {
        FUN_14034bdd0();
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    uVar8 = 0;
    if (lVar3 == 0) {
        lVar3 = FUN_1405bfe80(DAT_140c65b98,param_2 & 0xffffffff,0xffffffff);
        if (lVar3 == 0) {
            if (_DAT_140c7e0ac == 0) {
                _DAT_140c7e0ac = 1;
                lVar3 = FUN_140200220(0x330);
                if (lVar3 == 0) {
                    uVar9 = 0;
                    DAT_140c7e0a8 = 0;
                }
                else {
                    DAT_140c7e0a8 = *(uint *)(lVar3 + 4);
                    uVar9 = (ulonglong)DAT_140c7e0a8;
                }
            }
            else {
                uVar9 = (ulonglong)DAT_140c7e0a8;
            }
        }
        else {
            uVar9 = (ulonglong)*(uint *)(lVar3 + 4);
        }
    }
    else {
        uVar9 = (ulonglong)*(uint *)(lVar3 + 4);
    }
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    *puVar7 = *puVar6;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar7,L"nRating",uVar9 & 0xffffffff);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar6;
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar7;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar6;
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar7;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar6;
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar7;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar6;
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar6 = *puVar7;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + -0x10);
    *(undefined8 **)(param_1 + 0x10) = puVar7;
    if (lVar4 != 0) {
        uVar8 = *(uint *)(lVar4 + 4) & 1;
    }
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar7 = *puVar6;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = FUN_14018f0e0(local_38,L"bRatingGainOnLoss");
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
    if (local_30 != 0) {
        FUN_14018b900(local_30,0);
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(uVar8 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar7 = *puVar6;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0870(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar7 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar7 = *puVar6;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return;
}



undefined8 FUN_14076b770(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    uint uVar6;
    uint uVar7;
    uint uVar8;
    double dVar9;
    int local_res8;
    int iStackX12;
    undefined **local_28;
    int local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        uVar3 = 0x17;
    }
    else {
        uVar3 = *(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xdc);
    }
    uVar8 = 0;
    switch(uVar3) {
        case 1:
        case 2:
        case 5:
            uVar7 = 5;
            break;
        case 3:
        case 4:
        case 7:
            uVar7 = 6;
            break;
        default:
            uVar7 = 0;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar5 + 1) = 5;
    *puVar5 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0();
    uVar6 = 1;
    do {
        if ((uVar7 & uVar6) != 0) {
            FUN_1400fa9e0(&local_28,uVar8);
        }
        uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
        uVar8 = uVar8 + 1;
    } while (uVar8 < 3);
    lVar1 = *(longlong *)(*(longlong *)(local_18 + 0x20) + 0xa0);
    if (local_20 - 1U < *(uint *)(lVar1 + 0x38)) {
        puVar5 = (undefined8 *)((longlong)(local_20 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar9 = (double)local_20;
        if (dVar9 == 0.0) {
            puVar5 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar9 >> 0x20);
            local_res8 = SUB84(dVar9,0);
            puVar5 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar5 + 3) == 3) && (dVar9 == (double)puVar5[2])) goto LAB_14076b8e4;
            puVar5 = (undefined8 *)puVar5[4];
        } while (puVar5 != (undefined8 *)0x0);
        puVar5 = &DAT_140a12138;
    }
    LAB_14076b8e4:
    puVar2 = *(undefined8 **)(local_18 + 0x10);
    *puVar2 = *puVar5;
    uVar3 = *(undefined4 *)(puVar5 + 1);
    *(undefined4 *)(puVar2 + 1) = uVar3;
    *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + 0x10;
    FUN_1400579e0(local_18,uVar3,local_20);
    return 1;
}



undefined8 FUN_14076c1b0(undefined8 param_1)

{
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1,1);
    FUN_14076b1c0(param_1,uVar1);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14076c1e0(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    ulonglong uVar4;

    if ((DAT_140dc4da0 & 1) == 0) {
        DAT_140dc4da0 = DAT_140dc4da0 | 1;
        uVar4 = FUN_140200220(0x4ba);
        if (uVar4 != 0) {
            uVar4 = (ulonglong)*(uint *)(uVar4 + 4);
        }
        _DAT_140c8b140 = (undefined4)uVar4;
        uVar4 = FUN_140200220(0x4ba);
        if (uVar4 != 0) {
            uVar4 = (ulonglong)*(uint *)(uVar4 + 4);
        }
        _DAT_140c8b144 = (undefined4)uVar4;
        uVar4 = FUN_140200220(0x4ba);
        if (uVar4 != 0) {
            uVar4 = (ulonglong)*(uint *)(uVar4 + 4);
        }
        _DAT_140c8b148 = (undefined4)uVar4;
        uVar4 = FUN_140200220(0x4ba);
        if (uVar4 != 0) {
            uVar4 = (ulonglong)*(uint *)(uVar4 + 4);
        }
        _DAT_140c8b14c = (undefined4)uVar4;
        uVar4 = FUN_140200220(0x4ba);
        if (uVar4 != 0) {
            uVar4 = (ulonglong)*(uint *)(uVar4 + 8);
        }
        _DAT_140c8b150 = (undefined4)uVar4;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        iVar3 = FUN_140056d60(param_1,1);
    }
    else {
        iVar3 = 3;
    }
    if (4 < (ulonglong)(longlong)iVar3) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    iVar3 = *(int *)(&DAT_140c8b140 + (longlong)iVar3 * 4);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14076c300(longlong param_1)

{
    int iVar1;
    uint *puVar2;

    puVar2 = *(uint **)(param_1 + 0x10);
    iVar1 = FUN_1405bfa40(DAT_140c65b98);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14076c340(longlong param_1)

{
    int iVar1;
    uint *puVar2;

    puVar2 = *(uint **)(param_1 + 0x10);
    iVar1 = FUN_1405bfac0(DAT_140c65b98);
    puVar2[2] = 1;
    *puVar2 = (uint)(iVar1 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14076c730(void)

{
    int iVar1;
    undefined local_res10 [24];

    iVar1 = FUN_1405bfa40(DAT_140c65b98);
    if (iVar1 != 0) {
        local_res10[0] = 0;
        FUN_1403f4900(DAT_140c65898,0x5b4,local_res10);
    }
    return 0;
}



undefined8 FUN_14076c770(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    iVar2 = FUN_14076c830(param_1,0);
    if (iVar2 == 6) {
        FUN_1403cc530(DAT_140c65898,0x57);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_14076c7d0(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    iVar2 = FUN_14076c830(param_1,1);
    if (iVar2 == 6) {
        FUN_1403cc530(DAT_140c65898,0x57);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



uint FUN_14076c830(undefined8 param_1,undefined8 param_2)

{
    int iVar1;
    int *piVar2;
    longlong lVar3;
    bool bVar4;
    int iVar5;
    uint uVar6;
    uint uVar7;
    undefined *puVar8;
    undefined *puVar9;
    ulonglong uVar10;
    undefined *puVar11;
    uint uVar12;
    longlong lVar13;
    int iVar14;
    undefined8 uVar15;
    ulonglong uVar16;
    ulonglong uVar17;
    ulonglong *puVar18;
    undefined8 *puVar19;
    longlong lVar20;
    ulonglong uVar21;
    ulonglong uVar22;
    undefined4 uVar23;
    uint local_res18;
    uint local_108;
    uint local_104;
    ulonglong local_100;
    ulonglong local_f8;
    uint local_f0;
    uint local_ec;
    int local_e8;
    int local_e4;
    uint local_e0;
    longlong local_d8;
    ulonglong local_d0;
    undefined8 local_c8;
    ulonglong local_c0;
    undefined8 local_b8;
    undefined8 local_b0;
    ulonglong local_a8;
    uint local_a0;
    undefined8 local_98;
    ulonglong local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    ulonglong local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined local_58 [8];
    undefined *local_50;
    undefined8 local_48;

    iVar14 = (int)param_2;
    local_d0 = 0;
    local_d8 = 0;
    iVar5 = FUN_14073a630(param_1,param_2,&local_d8);
    if ((iVar5 == 0) || (iVar5 = FUN_1405bf1d0(), iVar5 == 0)) {
        uVar12 = 9;
        goto LAB_14076d29c;
    }
    if (1 < local_d0) {
        FUN_14076d3a0();
    }
    uVar16 = local_d0;
    local_50 = (undefined *)FUN_14018b280();
    uVar7 = local_f0;
    local_48 = 0;
    *local_50 = 0;
    *(undefined8 *)(local_50 + 8) = 0;
    *(undefined **)(local_50 + 0x10) = local_50;
    uVar17 = 0;
    *(undefined **)(local_50 + 0x18) = local_50;
    local_104 = 0;
    local_res18 = local_e0;
    uVar21 = (ulonglong)local_e0;
    bVar4 = false;
    lVar20 = local_d8;
    if (uVar16 != 0) {
        do {
            lVar13 = DAT_140c65898;
            uVar22 = 0xe;
            piVar2 = *(int **)(lVar20 + uVar17 * 8);
            if (*(undefined **)(local_50 + 8) == (undefined *)0x0) {
                LAB_14076c96a:
                if ((*(longlong *)(piVar2 + 4) == 0) && (*(longlong *)(piVar2 + 6) == 0)) {
                    local_res18 = piVar2[1];
                    uVar21 = (ulonglong)*piVar2;
                    if (iVar14 == 0) {
                        if ((((*(int *)(DAT_140c65b98 + 0x10c) == 0x10) ||
                              (*(int *)(DAT_140c65b98 + 0x154) != 0)) &&
                             (*(longlong *)(DAT_140c65b98 + 0xd0) == 0)) &&
                            ((*(int *)(DAT_140c65b98 + 0xac) == 0 && (*(int *)(DAT_140c65b98 + 0xb4) == 0)))) {
                            iVar5 = FUN_1405bfb30();
                            if (iVar5 != 0) {
                                uVar21 = uVar22 & 0xffffffff;
                                goto LAB_14076cc7b;
                            }
                            uVar6 = 0x40;
                            if (local_e8 != 0) {
                                uVar6 = 0x20;
                            }
                            uVar6 = uVar6 | -(uint)(local_res18 != 0) & 0x100;
                            if (local_e4 != 0) {
                                uVar6 = uVar6 | 0x80;
                            }
                            if ((uint)uVar21 < 0x10) {
                                puVar11 = &DAT_140b51560 + uVar21 * 0x10;
                            }
                            else {
                                puVar11 = &DAT_140b51550;
                            }
                            local_f8 = local_f8 & 0xffffffff00000000 | (ulonglong)uVar7;
                            local_100 = uVar21 & 0xffffffff | (ulonglong)(*(uint *)(puVar11 + 8) & uVar6) << 0x20;
                            if (((uint)uVar21 - 1 < 2) && (uVar7 == 0)) {
                                uVar21 = 6;
                                local_104 = 6;
                                uVar6 = local_104;
                                goto LAB_14076cbe9;
                            }
                            puVar18 = &local_100;
                            uVar15 = 0x5f8;
                            lVar13 = DAT_140c65898;
                            LAB_14076cbdb:
                            FUN_1403f4900(lVar13,uVar15,puVar18);
                            uVar21 = 0;
                        }
                        else {
                            LAB_14076cc76:
                            uVar21 = 1;
                            LAB_14076cc7b:
                            uVar6 = (uint)uVar21;
                            if ((uint)uVar21 != 0) goto LAB_14076cbe9;
                        }
                        bVar4 = true;
                        uVar6 = local_104;
                    }
                    else if ((((*(int *)(DAT_140c65b98 + 0x10c) == 0x10) ||
                               (*(int *)(DAT_140c65b98 + 0x154) != 0)) &&
                              (lVar20 = *(longlong *)(DAT_140c65898 + 0x6c50), lVar20 != 0)) &&
                             (((*(longlong *)(lVar20 + 0x60) != 0 &&
                                (lVar3 = *(longlong *)
                                        (*(longlong *)(lVar20 + 0x58) + *(longlong *)(lVar20 + 0x68) * 8),
                                        lVar3 != 0)) &&
                               ((*(int *)(lVar3 + 0x10) == *(int *)(lVar20 + 0x10) &&
                                 (*(longlong *)(lVar3 + 0x18) == *(longlong *)(lVar20 + 0x18))))))) {
                        if (((*(int *)(DAT_140c65b98 + 0x10c) != 0x10) && (*(int *)(DAT_140c65b98 + 0x154) == 0)
                            ) || ((*(longlong *)(DAT_140c65b98 + 0xd0) != 0 ||
                                   ((*(int *)(DAT_140c65b98 + 0xac) != 0 || (*(int *)(DAT_140c65b98 + 0xb4) != 0)
                                   ))))) goto LAB_14076cc76;
                        iVar5 = FUN_1405bfb30();
                        if (iVar5 != 0) {
                            uVar21 = 0xe;
                            goto LAB_14076cc7b;
                        }
                        uVar6 = 0x40;
                        if (local_e8 != 0) {
                            uVar6 = 0x20;
                        }
                        uVar6 = uVar6 | -(uint)(local_res18 != 0) & 0x100;
                        if (local_e4 != 0) {
                            uVar6 = uVar6 | 0x80;
                        }
                        if ((uint)uVar21 < 0x10) {
                            puVar11 = &DAT_140b51560 + uVar21 * 0x10;
                        }
                        else {
                            puVar11 = &DAT_140b51550;
                        }
                        local_a0 = uVar7;
                        local_a8 = uVar21 & 0xffffffff | (ulonglong)(*(uint *)(puVar11 + 8) & uVar6) << 0x20;
                        if ((1 < (uint)uVar21 - 1) || (uVar7 != 0)) {
                            puVar18 = &local_a8;
                            uVar15 = 0x5f9;
                            goto LAB_14076cbdb;
                        }
                        uVar21 = 6;
                        local_104 = 6;
                        uVar6 = local_104;
                    }
                    else {
                        uVar21 = 7;
                        local_104 = 7;
                        uVar6 = local_104;
                    }
                    LAB_14076cbe9:
                    local_104 = uVar6;
                    FUN_1403addd0(local_58,&local_98,*(undefined8 *)(local_d8 + uVar17 * 8));
                    lVar20 = local_d8;
                }
            }
            else {
                puVar11 = *(undefined **)(local_50 + 8);
                puVar9 = local_50;
                do {
                    if (*(int *)(puVar11 + 0x20) < *piVar2) {
                        puVar8 = *(undefined **)(puVar11 + 0x18);
                    }
                    else {
                        puVar8 = *(undefined **)(puVar11 + 0x10);
                        puVar9 = puVar11;
                    }
                    puVar11 = puVar8;
                } while (puVar8 != (undefined *)0x0);
                if ((puVar9 == local_50) || (*piVar2 < *(int *)(puVar9 + 0x20))) goto LAB_14076c96a;
            }
            uVar17 = uVar17 + 1;
        } while (uVar17 < uVar16);
    }
    uVar16 = 0;
    uVar17 = 0;
    uVar23 = 0;
    uVar22 = 0;
    iVar5 = 0x10;
    local_f8 = 0;
    local_100 = 0;
    lVar20 = DAT_140c65b98;
    uVar7 = local_104;
    uVar6 = (uint)uVar21;
    if (local_d0 == 0) {
        LAB_14076d22e:
        uVar12 = uVar7;
        if ((!bVar4) && (uVar6 == 0)) {
            uVar12 = 0xe;
        }
    }
    else {
        do {
            piVar2 = *(int **)(local_d8 + uVar22 * 8);
            if (*(undefined **)(local_50 + 8) == (undefined *)0x0) {
                LAB_14076cca5:
                if ((*(longlong *)(piVar2 + 4) != 0) || (*(longlong *)(piVar2 + 6) != 0)) {
                    if ((iVar5 != 0x10) && (iVar5 != *piVar2)) {
                        if (iVar14 == 0) {
                            local_108 = 0x10;
                            uVar6 = FUN_1405c48e0(lVar20,&local_108,uVar23,&local_100,0);
                            uVar7 = local_108;
                            if (uVar6 == 0) {
                                local_60 = 0;
                                uVar6 = 0x40;
                                if (local_e8 != 0) {
                                    uVar6 = 0x20;
                                }
                                local_78 = CONCAT44((int)uVar16,local_108);
                                uVar12 = -(uint)(local_res18 != 0) & 0x100;
                                puVar11 = (undefined *)(ulonglong)uVar12;
                                uVar6 = uVar6 | uVar12;
                                if (local_e4 != 0) {
                                    uVar6 = uVar6 | 0x80;
                                }
                                if (local_108 < 0x10) {
                                    puVar11 = &DAT_140b51560;
                                    puVar9 = &DAT_140b51560 + (longlong)(int)local_108 * 0x10;
                                }
                                else {
                                    puVar9 = &DAT_140b51550;
                                }
                                local_68 = CONCAT44(*(uint *)(puVar9 + 8) & uVar6,uVar23);
                                local_70 = uVar17;
                                uVar12 = FUN_1405c3360(puVar11,&local_100);
                                uVar6 = local_ec;
                                if (uVar12 < local_ec) {
                                    uVar6 = uVar12;
                                }
                                local_60 = CONCAT44(uVar6,local_f0);
                                if ((1 < uVar7 - 1) || (local_f0 != 0)) {
                                    puVar19 = &local_78;
                                    uVar15 = 0x5ef;
                                    goto LAB_14076cf29;
                                }
                                LAB_14076cf0e:
                                uVar21 = 6;
                                local_104 = 6;
                                lVar20 = DAT_140c65b98;
                                uVar6 = local_104;
                            }
                            else {
                                LAB_14076ce56:
                                uVar21 = (ulonglong)uVar6;
                                lVar20 = DAT_140c65b98;
                                if (uVar6 == 0) goto LAB_14076cf37;
                            }
                        }
                        else if ((((*(int *)(lVar20 + 0x10c) == 0x10) || (*(int *)(lVar20 + 0x154) != 0)) &&
                                  (lVar13 = *(longlong *)(DAT_140c65898 + 0x6c50), lVar13 != 0)) &&
                                 (((*(longlong *)(lVar13 + 0x60) != 0 &&
                                    (lVar3 = *(longlong *)
                                            (*(longlong *)(lVar13 + 0x58) + *(longlong *)(lVar13 + 0x68) * 8),
                                            lVar3 != 0)) &&
                                   ((*(int *)(lVar3 + 0x10) == *(int *)(lVar13 + 0x10) &&
                                     (*(longlong *)(lVar3 + 0x18) == *(longlong *)(lVar13 + 0x18))))))) {
                            local_108 = 0x10;
                            uVar6 = FUN_1405c48e0(lVar20,&local_108,uVar23,&local_100,1);
                            uVar7 = local_108;
                            if (uVar6 != 0) goto LAB_14076ce56;
                            local_80 = 0;
                            uVar6 = 0x40;
                            if (local_e8 != 0) {
                                uVar6 = 0x20;
                            }
                            local_98 = CONCAT44((int)uVar16,local_108);
                            uVar12 = -(uint)(local_res18 != 0) & 0x100;
                            puVar11 = (undefined *)(ulonglong)uVar12;
                            uVar6 = uVar6 | uVar12;
                            if (local_e4 != 0) {
                                uVar6 = uVar6 | 0x80;
                            }
                            if (local_108 < 0x10) {
                                puVar11 = &DAT_140b51560;
                                puVar9 = &DAT_140b51560 + (longlong)(int)local_108 * 0x10;
                            }
                            else {
                                puVar9 = &DAT_140b51550;
                            }
                            local_88 = CONCAT44(*(uint *)(puVar9 + 8) & uVar6,uVar23);
                            local_90 = uVar17;
                            uVar12 = FUN_1405c3360(puVar11,&local_100);
                            uVar6 = local_ec;
                            if (uVar12 < local_ec) {
                                uVar6 = uVar12;
                            }
                            local_80 = CONCAT44(uVar6,local_f0);
                            if ((uVar7 - 1 < 2) && (local_f0 == 0)) goto LAB_14076cf0e;
                            puVar19 = &local_98;
                            uVar15 = 0x5f3;
                            LAB_14076cf29:
                            FUN_1403f4900(DAT_140c65898,uVar15,puVar19);
                            uVar21 = 0;
                            LAB_14076cf37:
                            bVar4 = true;
                            lVar20 = DAT_140c65b98;
                            uVar6 = local_104;
                        }
                        else {
                            uVar21 = 7;
                            local_104 = 7;
                            uVar6 = local_104;
                        }
                        local_104 = uVar6;
                        uVar23 = 0;
                        uVar16 = 0;
                        iVar5 = 0x10;
                        local_f8 = 0;
                    }
                    piVar2 = *(int **)(local_d8 + uVar22 * 8);
                    iVar1 = *piVar2;
                    if (((iVar1 - 3U & 0xfffffffc) == 0) && (iVar1 != 5)) {
                        if (*(undefined4 **)(piVar2 + 6) != (undefined4 *)0x0) {
                            uVar23 = **(undefined4 **)(piVar2 + 6);
                            iVar5 = iVar1;
                        }
                    }
                    else if (*(int **)(piVar2 + 4) != (int *)0x0) {
                        uVar10 = 0;
                        if (uVar16 != 0) {
                            do {
                                iVar5 = iVar1;
                                if (*(int *)(uVar17 + uVar10 * 4) == **(int **)(piVar2 + 4)) goto LAB_14076cfbb;
                                uVar10 = uVar10 + 1;
                            } while (uVar10 < uVar16);
                        }
                        FUN_140003460();
                        uVar16 = local_f8;
                        lVar20 = DAT_140c65b98;
                        uVar17 = local_100;
                        iVar5 = iVar1;
                    }
                }
            }
            else {
                puVar11 = *(undefined **)(local_50 + 8);
                puVar9 = local_50;
                do {
                    if (*(int *)(puVar11 + 0x20) < *piVar2) {
                        puVar8 = *(undefined **)(puVar11 + 0x18);
                    }
                    else {
                        puVar8 = *(undefined **)(puVar11 + 0x10);
                        puVar9 = puVar11;
                    }
                    puVar11 = puVar8;
                } while (puVar8 != (undefined *)0x0);
                if ((puVar9 == local_50) || (*piVar2 < *(int *)(puVar9 + 0x20))) goto LAB_14076cca5;
            }
            LAB_14076cfbb:
            uVar22 = uVar22 + 1;
        } while (uVar22 < local_d0);
        uVar7 = local_104;
        uVar6 = (uint)uVar21;
        if (iVar5 == 0x10) goto LAB_14076d22e;
        if (iVar14 == 0) {
            local_108 = 0x10;
            uVar7 = FUN_1405c48e0(lVar20,&local_108,uVar23,&local_100,0);
            uVar6 = local_108;
            if (uVar7 == 0) {
                local_b0 = 0;
                uVar7 = 0x40;
                if (local_e8 != 0) {
                    uVar7 = 0x20;
                }
                local_c8 = CONCAT44((int)uVar16,local_108);
                uVar7 = uVar7 | -(uint)(local_res18 != 0) & 0x100;
                if (local_e4 != 0) {
                    uVar7 = uVar7 | 0x80;
                }
                if (local_108 < 0x10) {
                    puVar11 = &DAT_140b51560 + (longlong)(int)local_108 * 0x10;
                }
                else {
                    puVar11 = &DAT_140b51550;
                }
                local_b8 = CONCAT44(*(uint *)(puVar11 + 8) & uVar7,uVar23);
                local_c0 = uVar17;
                uVar7 = FUN_1405c3360();
                if (uVar7 < local_ec) {
                    local_ec = uVar7;
                }
                local_b0 = CONCAT44(local_ec,local_f0);
                if ((uVar6 - 1 < 2) && (local_f0 == 0)) {
                    uVar7 = 6;
                }
                else {
                    uVar15 = 0x5ef;
                    LAB_14076d20c:
                    FUN_1403f4900(DAT_140c65898,uVar15,&local_c8);
                    uVar7 = 0;
                }
            }
        }
        else if (((((*(int *)(lVar20 + 0x10c) == 0x10) || (*(int *)(lVar20 + 0x154) != 0)) &&
                   (lVar13 = *(longlong *)(DAT_140c65898 + 0x6c50), lVar13 != 0)) &&
                  ((*(longlong *)(lVar13 + 0x60) != 0 &&
                    (lVar3 = *(longlong *)
                            (*(longlong *)(lVar13 + 0x58) + *(longlong *)(lVar13 + 0x68) * 8),
                            lVar3 != 0)))) &&
                 ((*(int *)(lVar3 + 0x10) == *(int *)(lVar13 + 0x10) &&
                   (*(longlong *)(lVar3 + 0x18) == *(longlong *)(lVar13 + 0x18))))) {
            local_108 = 0x10;
            uVar7 = FUN_1405c48e0(lVar20,&local_108,uVar23,&local_100,1);
            uVar6 = local_108;
            if (uVar7 == 0) {
                local_b0 = 0;
                uVar7 = 0x40;
                if (local_e8 != 0) {
                    uVar7 = 0x20;
                }
                local_c8 = CONCAT44((int)uVar16,local_108);
                uVar7 = uVar7 | -(uint)(local_res18 != 0) & 0x100;
                if (local_e4 != 0) {
                    uVar7 = uVar7 | 0x80;
                }
                if (local_108 < 0x10) {
                    puVar11 = &DAT_140b51560 + (longlong)(int)local_108 * 0x10;
                }
                else {
                    puVar11 = &DAT_140b51550;
                }
                local_b8 = CONCAT44(*(uint *)(puVar11 + 8) & uVar7,uVar23);
                local_c0 = uVar17;
                uVar7 = FUN_1405c3360();
                if (uVar7 < local_ec) {
                    local_ec = uVar7;
                }
                local_b0 = CONCAT44(local_ec,local_f0);
                if ((1 < uVar6 - 1) || (local_f0 != 0)) {
                    uVar15 = 0x5f3;
                    goto LAB_14076d20c;
                }
                uVar7 = 6;
            }
        }
        else {
            uVar7 = 7;
        }
        uVar6 = uVar7;
        uVar12 = local_104;
        if (uVar7 != 0) goto LAB_14076d22e;
    }
    if (uVar17 != 0) {
        (**(code **)(*(longlong *)(uVar17 - 0x10) + 8))(uVar17 - 0x10);
    }
    FUN_140008410(local_58);
    FUN_14018b900(local_50,0);
    LAB_14076d29c:
    if (local_d8 != 0) {
        (**(code **)(*(longlong *)(local_d8 + -0x10) + 8))(local_d8 + -0x10);
    }
    return uVar12;
}



undefined8 FUN_14076d2c0(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28 [8];
    longlong local_20;

    iVar1 = FUN_140056d60(param_1,1);
    if (iVar1 != 0) {
        FUN_1405c42c0(iVar1,0);
    }
    uVar2 = FUN_14034bdd0();
    lVar3 = FUN_14018f0e0(local_28,uVar2);
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
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



void FUN_14076d3a0(longlong *param_1)

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
    local_20 = &LAB_14076d340;
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



longlong FUN_14076d520(longlong param_1)

{
    int iVar1;
    char cVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *)FUN_1400580e0(param_1,2);
    if (*(int *)(plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    }
    else {
        if (*(int *)(plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *)FUN_1400580e0(param_1,2);
        iVar1 = *(int *)(plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong *)(*plVar3 + 0x10);
        }
        else {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong **)(param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 *)(plVar3 + 1) = 5;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            lVar4 = *(longlong *)(param_1 + 0x20);
            local_18 = FUN_140062650(param_1,"Game.MatchMakingEntry",0x15);
            local_10 = 4;
            FUN_14005e8e0(param_1,lVar4 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1,0xffffffff);
            uVar6 = FUN_1400586a0(param_1,0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650,uVar6,uVar5);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *)FUN_1400580e0(param_1,2);
                if (*(int *)(plVar3 + 1) == 2) {
                    return *plVar3;
                }
                if (*(int *)(plVar3 + 1) == 7) {
                    return *plVar3 + 0x30;
                }
            }
        }
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

longlong FUN_14076d660(longlong param_1,longlong param_2)

{
    short sVar1;
    int iVar2;
    undefined2 *puVar3;
    short *psVar4;
    undefined8 *puVar5;
    longlong lVar6;
    int iVar7;
    undefined extraout_XMM0 [16];
    _FILETIME local_res8;
    undefined **local_f8;
    undefined local_f0 [8];
    undefined2 *local_e8;
    undefined2 *local_e0;
    undefined local_38 [16];
    undefined2 *local_28;

    FUN_1400b6f30(&local_f8);
    local_38 = extraout_XMM0 & (undefined  [16])0x0;
    lVar6 = 0;
    local_f8 = &PTR_FUN_140b69230;
    local_28 = (undefined2 *)0x0;
    puVar3 = (undefined2 *)FUN_14018b280(0x10);
    local_28 = puVar3 + 8;
    local_38 = CONCAT88(puVar3,puVar3);
    if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
    }
    GetSystemTimeAsFileTime(&local_res8);
    if ((ulonglong)local_res8 < param_2 + 36000000000U) {
        GetSystemTimeAsFileTime(&local_res8);
        iVar7 = (int)(((param_2 - (longlong)local_res8) + 36000000000U) / 10000);
        iVar2 = 0x7fffffff;
        if (iVar7 < 0x7fffffff) {
            iVar2 = iVar7;
        }
        iVar7 = -0x80000000;
        if (-0x80000000 < iVar2) {
            iVar7 = iVar2;
        }
        if (0 < iVar7) {
            psVar4 = (short *)FUN_14034bdd0();
            if (psVar4 == (short *)0x0) {
                if (local_e8 != local_e0) {
                    *local_e8 = 0;
                    local_e0 = local_e8;
                }
            }
            else {
                sVar1 = *psVar4;
                while (sVar1 != 0) {
                    lVar6 = lVar6 + 1;
                    sVar1 = psVar4[lVar6];
                }
                FUN_14001c480(local_f0,psVar4,psVar4 + lVar6);
            }
            puVar5 = (undefined8 *)FUN_14018b280(0x58);
            if (puVar5 == (undefined8 *)0x0) {
                FUN_1400b7480(&local_f8,0);
            }
            else {
                FUN_1400b6390(puVar5);
                *puVar5 = &PTR_FUN_140b69300;
                *(int *)(puVar5 + 1) = iVar7;
                *(float *)((longlong)puVar5 + 0xc) = (float)iVar7;
                FUN_1400b7480(&local_f8,puVar5);
            }
            goto LAB_14076d81a;
        }
    }
    psVar4 = (short *)FUN_14034bdd0();
    if (psVar4 == (short *)0x0) {
        if (local_e8 != local_e0) {
            *local_e8 = 0;
            local_e0 = local_e8;
        }
    }
    else {
        sVar1 = *psVar4;
        while (sVar1 != 0) {
            lVar6 = lVar6 + 1;
            sVar1 = psVar4[lVar6];
        }
        FUN_14001c480(local_f0,psVar4,psVar4 + lVar6);
    }
    LAB_14076d81a:
    lVar6 = FUN_1400b7660(&local_f8);
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    FUN_14001c1b0(param_1,*(undefined8 *)(lVar6 + 8),*(undefined8 *)(lVar6 + 0x10));
    if (local_38._0_8_ != 0) {
        FUN_14018b900(local_38._0_8_,0);
    }
    FUN_1400b7390(&local_f8);
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

ulonglong FUN_14076d880(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;
    ulonglong *puVar2;
    undefined8 *puVar3;
    undefined2 *puVar4;
    longlong lVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    int iVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    int iVar11;
    ulonglong uVar12;
    undefined **local_e8 [24];
    undefined local_28 [16];
    undefined2 *local_18;

    FUN_1400b7090(local_e8,0x6d975);
    uVar7 = 0;
    uVar9 = 0;
    local_18 = (undefined2 *)0x0;
    local_28 = ZEXT816(0);
    local_e8[0] = &PTR_FUN_140b69230;
    puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
    local_18 = puVar4 + 8;
    local_28 = CONCAT88(puVar4,puVar4);
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    lVar5 = FUN_1400b7660();
    uVar12 = *(ulonglong *)(lVar5 + 8);
    uVar10 = uVar7;
    switch(param_2) {
        case 0:
            uVar10 = uVar9;
            if (DAT_140c7de20 != 0) {
                do {
                    puVar2 = *(ulonglong **)(DAT_140c7de18 + uVar7 * 8);
                    if (*(int *)(puVar2 + 2) == 5) {
                        if (puVar2 != (ulonglong *)0x0) {
                            uVar12 = puVar2[1];
                            uVar10 = *puVar2;
                        }
                        break;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 < DAT_140c7de20);
            }
            goto switchD_14076d920_caseD_a;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            iVar8 = 0x17;
            if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
                iVar11 = 0x17;
            }
            else {
                iVar11 = *(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xdc);
            }
            switch(param_2) {
                case 1:
                    iVar8 = 1;
                    break;
                case 2:
                    iVar8 = 2;
                    break;
                case 3:
                    iVar8 = 3;
                    break;
                case 4:
                    iVar8 = 4;
                    break;
                case 5:
                    iVar8 = 5;
                    break;
                case 6:
                    iVar8 = 7;
            }
            if (iVar11 != iVar8) goto switchD_14076d920_caseD_a;
            uVar12 = *(ulonglong *)(DAT_140c65898 + 0x88);
            break;
        case 7:
        case 8:
        case 9:
            uVar12 = *(ulonglong *)(DAT_140c65898 + 0x88);
            break;
        default:
            goto switchD_14076d920_caseD_a;
    }
    uVar10 = *(ulonglong *)(DAT_140c635f0 + 0x16a0);
    switchD_14076d920_caseD_a:
    lVar5 = *(longlong *)(param_1 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),
                          *(undefined4 *)(param_1 + 8));
    puVar3 = *(undefined8 **)(lVar5 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_1 + 0x10),puVar3,L"strName",uVar12);
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (local_28._0_8_ != 0) {
        FUN_14018b900(local_28._0_8_,0);
    }
    FUN_1400b7390(local_e8);
    return uVar10;
}



undefined8 FUN_14076dac0(longlong param_1)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    undefined4 uVar7;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    uVar5 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                goto LAB_14076db18;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar4 = 0;
    LAB_14076db18:
    iVar2 = FUN_1400f26a0(lVar4 + 0x180);
    lVar3 = FUN_14076d520(param_1);
    uVar7 = 0;
    if ((lVar3 != 0) && (uVar7 = 0, *(undefined4 **)(lVar3 + 0x10) != (undefined4 *)0x0)) {
        uVar7 = **(undefined4 **)(lVar3 + 0x10);
    }
    FUN_1400f26a0(lVar4 + 0x180,3);
    if ((iVar2 < 10) &&
        (plVar1 = *(longlong **)(DAT_140c65a40 + (longlong)iVar2 * 8), plVar1 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,uVar7);
        if (lVar4 != 0) {
            uVar6 = *(undefined8 *)(lVar4 + 0x10);
            goto LAB_14076db8f;
        }
    }
    uVar6 = 0;
    LAB_14076db8f:
    lVar4 = FUN_14076d660(local_28,uVar6);
    lVar4 = FUN_14018f0e0(local_48,*(undefined8 *)(lVar4 + 8));
    if (*(longlong *)(lVar4 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar3 = -1;
        do {
            lVar3 = lVar3 + 1;
        } while (*(char *)(*(longlong *)(lVar4 + 8) + lVar3) != '\0');
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



undefined4 FUN_14076edd0(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;

    FUN_140057020(param_1,"LeaderboardLib",&PTR_s_GetNextUpdate_140b765c0);
    FUN_140058710(param_1,"CodeEnumLeaderboardType",0x17);
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
    return 1;
}



undefined8 * FUN_14076eeb0(undefined8 *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
    int *piVar1;
    int iVar2;
    int iVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 *puVar9;
    int iVar10;

    iVar10 = 0;
    param_1[1] = 0;
    *param_1 = 0;
    uVar4 = param_4[1];
    uVar7 = param_4[2];
    uVar8 = param_4[3];
    *(undefined4 *)(param_1 + 2) = *param_4;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
    *(undefined4 *)(param_1 + 3) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar8;
    param_1[5] = 0;
    param_1[4] = 0;
    puVar9 = param_2;
    if (0 < param_3) {
        do {
            piVar1 = param_2 + (longlong)iVar10 * 2;
            FUN_140527690();
            if (iVar10 == 0) {
                uVar4 = *puVar9;
                *(undefined4 *)(param_1 + 7) = uVar4;
                *(undefined4 *)((longlong)param_1 + 0x3c) = puVar9[1];
                *(undefined4 *)(param_1 + 6) = uVar4;
                *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x3c);
            }
            else {
                iVar2 = *(int *)(param_1 + 6);
                iVar5 = *(int *)(param_1 + 7);
                if (*(int *)(param_1 + 7) < *piVar1 + 1) {
                    iVar5 = *piVar1 + 1;
                }
                iVar6 = *(int *)((longlong)param_1 + 0x3c);
                if (*(int *)((longlong)param_1 + 0x3c) < piVar1[1] + 1) {
                    iVar6 = piVar1[1] + 1;
                }
                iVar3 = *(int *)((longlong)param_1 + 0x34);
                if (*piVar1 < iVar2) {
                    iVar2 = *piVar1;
                }
                if (piVar1[1] < iVar3) {
                    iVar3 = piVar1[1];
                }
                *(int *)(param_1 + 6) = iVar2;
                *(int *)((longlong)param_1 + 0x34) = iVar3;
                *(int *)(param_1 + 7) = iVar5;
                *(int *)((longlong)param_1 + 0x3c) = iVar6;
            }
            iVar10 = iVar10 + 1;
            puVar9 = puVar9 + 2;
        } while (iVar10 < param_3);
    }
    return param_1;
}



void FUN_14076eff0(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    int iVar6;
    int iVar7;
    int local_res8;

    uVar4 = 0;
    param_1[1] = 0;
    FUN_1407765a0();
    uVar5 = uVar4;
    iVar6 = local_res8;
    if (param_1[5] != 0) {
        do {
            iVar3 = (int)uVar4;
            if ((*(int *)(param_1[4] + uVar5 * 8) == iVar3) &&
                (iVar7 = iVar6 + 1, *(int *)(param_1[4] + uVar5 * 8 + 4) == iVar7)) {
                if (iVar3 == 0) goto LAB_14076f06b;
            }
            else {
                if (iVar3 != 0) {
                    lVar2 = FUN_1407762d0(param_1);
                    lVar1 = *param_1;
                    *(int *)(lVar1 + lVar2 * 0xc) = iVar3;
                    *(int *)(lVar1 + 4 + lVar2 * 0xc) = local_res8;
                    *(int *)(lVar1 + 8 + lVar2 * 0xc) = iVar6;
                }
                LAB_14076f06b:
                local_res8 = *(int *)(param_1[4] + 4 + uVar5 * 8);
                uVar4 = (ulonglong)*(uint *)(param_1[4] + uVar5 * 8);
                iVar7 = local_res8;
            }
            uVar5 = uVar5 + 1;
            iVar6 = iVar7;
        } while (uVar5 < (ulonglong)param_1[5]);
        if ((int)uVar4 != 0) {
            lVar2 = FUN_1407762d0(param_1);
            lVar1 = *param_1;
            *(int *)(lVar1 + lVar2 * 0xc) = (int)uVar4;
            *(int *)(lVar1 + 4 + lVar2 * 0xc) = local_res8;
            *(int *)(lVar1 + 8 + lVar2 * 0xc) = iVar7;
        }
    }
    return;
}



undefined8 FUN_14076f0f0(longlong param_1,longlong *param_2)

{
    uint uVar1;
    undefined8 uVar2;
    bool bVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    ulonglong uVar9;
    uint *puVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    uint uVar14;
    longlong lVar15;
    int *piVar16;
    uint uVar17;
    uint uVar18;
    int iVar19;
    longlong lVar20;
    uint *puVar21;
    ulonglong uVar22;
    bool bVar23;
    longlong local_70;
    ulonglong local_68;
    longlong *local_60;
    ulonglong local_58;
    longlong local_50;
    ulonglong local_48;

    local_60 = param_2;
    local_50 = param_1;
    if (*(longlong *)(param_1 + 0x28) == 0) {
        lVar15 = *(longlong *)(param_1 + 0x20);
        if (lVar15 != 0) {
            (**(code **)(*(longlong *)(lVar15 + -0x10) + 8))(lVar15 + -0x10);
        }
        *(longlong *)(param_1 + 0x20) = *param_2;
        *(longlong *)(param_1 + 0x28) = param_2[1];
        *param_2 = 0;
        param_2[1] = 0;
        return 1;
    }
    lVar15 = *param_2;
    uVar13 = param_2[1];
    local_70 = 0;
    local_68 = 0;
    if (uVar13 != 0) {
        lVar6 = FUN_14018db00(0,uVar13,0xc);
        FUN_1407db590(lVar6,lVar15,uVar13 * 0xc);
        local_70 = 0;
        local_68 = uVar13;
        if (lVar6 != 0) {
            local_70 = lVar6;
        }
    }
    uVar22 = local_68;
    lVar6 = local_70;
    lVar15 = *(longlong *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar20 = lVar6;
    lVar4 = local_70;
    uVar13 = local_68;
    if (lVar15 != 0) {
        uVar13 = local_68 + lVar15;
        lVar7 = FUN_14018db00(local_70,uVar13,0xc);
        FUN_1407db590(uVar22 * 0xc + lVar7,uVar2,lVar15 * 0xc);
        param_1 = local_50;
        lVar4 = local_70;
        if ((lVar6 != lVar7) &&
            (FUN_1407db590(lVar7,lVar6,uVar22 * 0xc), param_1 = local_50, lVar20 = lVar7, lVar4 = lVar7,
                    lVar6 != 0)) {
            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))();
            param_1 = local_50;
        }
    }
    local_68 = uVar13;
    local_70 = lVar4;
    if (1 < local_68) {
        FUN_140776360();
        lVar20 = local_70;
    }
    uVar13 = 0;
    bVar3 = false;
    if (local_68 != 1) {
        lVar15 = 0;
        uVar22 = local_68;
        bVar3 = false;
        do {
            if ((*(int *)(lVar20 + lVar15) == *(int *)(lVar20 + 0xc + lVar15)) &&
                (*(int *)(lVar20 + 0x10 + lVar15) - 1U <= *(uint *)(lVar20 + 8 + lVar15))) {
                *(undefined4 *)(lVar20 + 0x10 + lVar15) = *(undefined4 *)(lVar20 + 4 + lVar15);
                uVar8 = *(uint *)(lVar20 + 8 + lVar15);
                if (uVar8 < *(uint *)(lVar20 + 0x14 + lVar15)) {
                    uVar8 = *(uint *)(lVar20 + 0x14 + lVar15);
                }
                *(uint *)(lVar20 + 0x14 + lVar15) = uVar8;
                FUN_140480db0(&local_70,uVar13);
                lVar20 = local_70;
                uVar22 = local_68;
                bVar3 = true;
            }
            else {
                uVar13 = uVar13 + 1;
                lVar15 = lVar15 + 0xc;
            }
        } while (uVar13 < uVar22 - 1);
        param_1 = local_50;
        if (bVar3) goto LAB_14076f4bb;
    }
    local_48 = *(ulonglong *)(param_1 + 0x28);
    local_58 = 0;
    if (local_48 != 0) {
        puVar21 = *(uint **)(param_1 + 0x20);
        uVar13 = local_60[1];
        LAB_14076f320:
        uVar8 = *puVar21;
        iVar19 = 0;
        bVar23 = (uVar8 & 1) != 0;
        if (bVar23) {
            iVar19 = -1;
        }
        uVar14 = (uint)!bVar23;
        uVar12 = 0;
        uVar18 = uVar8 + 1;
        uVar22 = local_68;
        if (uVar13 != 0) {
            lVar15 = *local_60;
            uVar11 = uVar13;
            do {
                uVar9 = (uVar11 - uVar12 >> 1) + uVar12;
                uVar17 = *(uint *)(lVar15 + uVar9 * 0xc);
                if (uVar18 == uVar17) {
                    uVar12 = uVar9;
                    if (uVar9 == 0) goto LAB_14076f3a6;
                    puVar10 = (uint *)(lVar15 + uVar9 * 0xc);
                    goto LAB_14076f390;
                }
                if (uVar17 <= uVar18) {
                    uVar12 = uVar9 + 1;
                    uVar9 = uVar11;
                }
                uVar11 = uVar9;
            } while (uVar12 < uVar9);
        }
        goto LAB_14076f44b;
    }
    LAB_14076f5bb:
    if (lVar20 != 0) {
        (**(code **)(*(longlong *)(lVar20 + -0x10) + 8))(lVar20 + -0x10);
    }
    return 0;
    while (uVar12 = uVar11, uVar11 != 0) {
        LAB_14076f390:
        puVar10 = puVar10 + -3;
        uVar11 = uVar12 - 1;
        if (uVar18 != *puVar10) break;
    }
    LAB_14076f3a6:
    uVar9 = uVar9 + 1;
    if (uVar9 < uVar13) {
        puVar10 = (uint *)(lVar15 + uVar9 * 0xc);
        do {
            if (uVar18 != *puVar10) break;
            uVar9 = uVar9 + 1;
            puVar10 = puVar10 + 3;
        } while (uVar9 < uVar13);
    }
    if (uVar12 < uVar9) {
        uVar18 = puVar21[1];
        piVar16 = (int *)(lVar15 + (uVar12 * 3 + 1) * 4);
        do {
            iVar5 = 0;
            if (*piVar16 != 0) {
                iVar5 = iVar19;
            }
            uVar17 = iVar5 + *piVar16;
            if ((((uVar17 <= uVar18) && (uVar18 <= piVar16[1] + uVar14)) ||
                 ((uVar1 = puVar21[2], uVar17 <= uVar1 && (uVar1 <= piVar16[1] + uVar14)))) ||
                ((piVar16[1] + uVar14 <= uVar1 && (uVar18 <= uVar17)))) goto LAB_14076f4bb;
            uVar12 = uVar12 + 1;
            piVar16 = piVar16 + 3;
        } while (uVar12 < uVar9);
    }
    if (bVar3) goto LAB_14076f4bb;
    LAB_14076f44b:
    uVar12 = 0;
    uVar8 = uVar8 - 1;
    if (uVar13 != 0) {
        lVar15 = *local_60;
        uVar11 = uVar13;
        do {
            uVar9 = (uVar11 - uVar12 >> 1) + uVar12;
            uVar18 = *(uint *)(lVar15 + uVar9 * 0xc);
            if (uVar8 == uVar18) {
                uVar12 = uVar9;
                if (uVar9 == 0) goto LAB_14076f516;
                puVar10 = (uint *)(lVar15 + uVar9 * 0xc);
                goto LAB_14076f500;
            }
            if (uVar18 <= uVar8) {
                uVar12 = uVar9 + 1;
                uVar9 = uVar11;
            }
            uVar11 = uVar9;
        } while (uVar12 < uVar9);
    }
    LAB_14076f48d:
    local_58 = local_58 + 1;
    puVar21 = puVar21 + 3;
    if (local_48 <= local_58) goto code_r0x00014076f4ae;
    goto LAB_14076f320;
    while (uVar12 = uVar11, uVar11 != 0) {
        LAB_14076f500:
        puVar10 = puVar10 + -3;
        uVar11 = uVar12 - 1;
        if (uVar8 != *puVar10) break;
    }
    LAB_14076f516:
    uVar9 = uVar9 + 1;
    if (uVar9 < uVar13) {
        puVar10 = (uint *)(lVar15 + uVar9 * 0xc);
        do {
            if (uVar8 != *puVar10) break;
            uVar9 = uVar9 + 1;
            puVar10 = puVar10 + 3;
        } while (uVar9 < uVar13);
    }
    if (uVar12 < uVar9) {
        uVar8 = puVar21[1];
        piVar16 = (int *)(lVar15 + (uVar12 * 3 + 1) * 4);
        do {
            iVar5 = 0;
            if (*piVar16 != 0) {
                iVar5 = iVar19;
            }
            uVar18 = iVar5 + *piVar16;
            if ((((uVar18 <= uVar8) && (uVar8 <= piVar16[1] + uVar14)) ||
                 ((uVar17 = puVar21[2], uVar18 <= uVar17 && (uVar17 <= piVar16[1] + uVar14)))) ||
                ((piVar16[1] + uVar14 <= uVar17 && (uVar8 <= uVar18)))) goto LAB_14076f4bb;
            uVar12 = uVar12 + 1;
            piVar16 = piVar16 + 3;
        } while (uVar12 < uVar9);
    }
    if (bVar3) goto LAB_14076f4bb;
    goto LAB_14076f48d;
    code_r0x00014076f4ae:
    if (bVar3) {
        LAB_14076f4bb:
        lVar6 = local_50;
        lVar15 = *(longlong *)(local_50 + 0x20);
        if (lVar15 != 0) {
            (**(code **)(*(longlong *)(lVar15 + -0x10) + 8))(lVar15 + -0x10);
        }
        *(longlong *)(lVar6 + 0x20) = lVar20;
        *(ulonglong *)(lVar6 + 0x28) = uVar22;
        return 1;
    }
    goto LAB_14076f5bb;
}



int * FUN_14076f600(int *param_1,int param_2,longlong param_3,short *param_4,undefined8 *param_5,
                    undefined8 param_6)

{
    int *piVar1;
    int *piVar2;
    short sVar3;
    undefined2 *puVar4;
    longlong lVar5;
    short *psVar6;
    longlong lVar7;
    longlong lVar8;

    DAT_140c8a07c = DAT_140c8a07c + 1;
    *param_1 = DAT_140c8a07c;
    param_1[1] = param_2;
    FUN_1400f9dd0(param_1 + 2,param_6);
    lVar7 = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    piVar1 = param_1 + 0x1c;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x22) = 0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 0x1e) = puVar4;
    *(undefined2 **)(param_1 + 0x20) = puVar4;
    *(undefined2 **)(param_1 + 0x22) = puVar4 + 8;
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    piVar2 = param_1 + 0x24;
    *(undefined8 *)(param_1 + 0x26) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x2a) = 0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x26) = puVar4;
    *(undefined2 **)(param_1 + 0x28) = puVar4;
    *(undefined2 **)(param_1 + 0x2a) = puVar4 + 8;
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    *(undefined8 *)(param_1 + 0x2e) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x32) = 0;
    puVar4 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x2e) = puVar4;
    *(undefined2 **)(param_1 + 0x30) = puVar4;
    *(undefined2 **)(param_1 + 0x32) = puVar4 + 8;
    if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
    }
    *(undefined8 **)(param_1 + 0x34) = param_5;
    if (param_5 != (undefined8 *)0x0) {
        (**(code **)*param_5)();
    }
    *(undefined8 *)(param_1 + 0x36) = 1;
    if ((int *)(param_3 + 0x20) != piVar1) {
        FUN_14001c480(piVar1,*(undefined8 *)(param_3 + 0x28),*(undefined8 *)(param_3 + 0x30));
    }
    lVar8 = *(longlong *)(param_3 + 0x50);
    lVar5 = *(longlong *)(param_3 + 0x48);
    if (lVar5 == lVar8) {
        if (piVar1 == piVar2) goto LAB_14076f76e;
        lVar8 = *(longlong *)(param_1 + 0x20);
        lVar5 = *(longlong *)(param_1 + 0x1e);
    }
    else if ((int *)(param_3 + 0x40) == piVar2) goto LAB_14076f76e;
    FUN_14001c480(piVar2,lVar5,lVar8);
    LAB_14076f76e:
    psVar6 = (short *)&DAT_1409f988c;
    if (param_4 != (short *)0x0) {
        psVar6 = param_4;
    }
    sVar3 = *psVar6;
    while (sVar3 != 0) {
        lVar7 = lVar7 + 1;
        sVar3 = psVar6[lVar7];
    }
    FUN_14001c480(param_1 + 0x2c,psVar6,psVar6 + lVar7);
    return param_1;
}



void FUN_14076f7c0(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;

    puVar1 = *(undefined8 **)(param_1 + 0x60);
    if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x68);
    if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
    }
    uVar4 = 0;
    if (*(longlong *)(param_1 + 0x38) != 0) {
        do {
            plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + uVar4 * 8);
            if (plVar2 != (longlong *)0x0) {
                lVar3 = plVar2[4];
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                lVar3 = *plVar2;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(plVar2,0);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(ulonglong *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    if (*(longlong **)(param_1 + 0xd0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xd0) + 8))();
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0xb8),0);
    }
    if (*(longlong *)(param_1 + 0x98) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x98),0);
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x78),0);
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    *(undefined ***)(param_1 + 8) = &PTR_FUN_140b56a08;
    if (*(longlong *)(param_1 + 0x18) == 0) {
        return;
    }
    FUN_1400579e0();
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14076f910(longlong param_1,int param_2,undefined8 *param_3,longlong param_4)

{
    short sVar1;
    short *psVar2;
    int iVar3;
    undefined **ppuVar4;
    int iVar5;
    int iVar6;
    undefined **ppuVar7;
    longlong lVar8;
    longlong lVar9;
    undefined2 *puVar10;
    undefined **ppuVar11;
    longlong *plVar12;
    undefined **ppuVar13;
    float fVar14;
    float fVar15;
    undefined4 uVar16;
    undefined **local_188;
    undefined8 local_180;
    undefined8 local_178;
    undefined2 *local_170;
    undefined2 *local_168;
    undefined2 *local_160;
    undefined **local_158;
    undefined local_148 [8];
    undefined8 uStack320;
    int local_138;
    int local_134;
    undefined4 local_130;
    undefined4 local_12c;
    undefined **local_128;
    undefined4 local_120;
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;

    ppuVar11 = (undefined **)0x0;
    if ((*(longlong *)(param_1 + 0x38) == 0) ||
        ((*(int *)(param_1 + 4) == param_2 && (iVar5 = FUN_1400f9cb0(param_1 + 8,param_3), iVar5 != 0))
        )) {
        if ((*(longlong *)(param_4 + 8) == 0) && (*(longlong *)(param_4 + 0x28) != 0)) {
            FUN_14076eff0(param_4);
        }
        iVar5 = FUN_14076f0f0(param_1,param_4);
        if (iVar5 != 0) {
            ppuVar7 = (undefined **)FUN_14018b280(0x40);
            ppuVar13 = ppuVar11;
            if (ppuVar7 != (undefined **)0x0) {
                FUN_140776240(ppuVar7,param_4);
                iVar5 = *(int *)(param_4 + 0x14);
                iVar6 = *(int *)(param_4 + 0x18);
                iVar3 = *(int *)(param_4 + 0x1c);
                *(int *)(ppuVar7 + 2) = *(int *)(param_4 + 0x10);
                *(int *)((longlong)ppuVar7 + 0x14) = iVar5;
                *(int *)(ppuVar7 + 3) = iVar6;
                *(int *)((longlong)ppuVar7 + 0x1c) = iVar3;
                FUN_1407764f0(ppuVar7 + 4,param_4 + 0x20);
                *(int *)(ppuVar7 + 6) = *(int *)(param_4 + 0x30);
                *(int *)((longlong)ppuVar7 + 0x34) = *(int *)(param_4 + 0x34);
                *(int *)(ppuVar7 + 7) = *(int *)(param_4 + 0x38);
                *(int *)((longlong)ppuVar7 + 0x3c) = *(int *)(param_4 + 0x3c);
                ppuVar13 = ppuVar7;
            }
            lVar9 = *(longlong *)(param_1 + 0x38);
            lVar8 = FUN_14018db00(*(undefined8 *)(param_1 + 0x30),lVar9 + 1);
            *(undefined ***)(lVar8 + lVar9 * 8) = ppuVar13;
            if (*(longlong *)(param_1 + 0x30) != lVar8) {
                FUN_1407db590(lVar8);
                if (*(longlong *)(param_1 + 0x30) != 0) {
                    (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x30) + -0x10) + 8))();
                }
                *(longlong *)(param_1 + 0x30) = lVar8;
            }
            *(longlong *)(param_1 + 0x38) = lVar9 + 1;
            if (ppuVar13[5] != (undefined *)0x0) {
                ppuVar7 = ppuVar11;
                do {
                    local_138 = *(int *)(ppuVar13[4] + (longlong)ppuVar7 * 8);
                    local_134 = *(int *)(ppuVar13[4] + (longlong)ppuVar7 * 8 + 4);
                    local_148 = CONCAT44(local_134,local_138);
                    lVar9 = FUN_140776730();
                    if (lVar9 == 0) {
                        *(int *)(param_1 + 0x5c) = local_134;
                        *(int *)(param_1 + 0x58) = local_138;
                        *(int *)(param_1 + 0x50) = local_138;
                        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x5c);
                    }
                    else {
                        local_130 = 1;
                        local_12c = 1;
                        iVar5 = local_138 + 1;
                        iVar6 = local_134 + 1;
                        local_158 = (undefined **)CONCAT44(iVar6,iVar5);
                        iVar3 = *(int *)(param_1 + 0x58);
                        if (*(int *)(param_1 + 0x58) < iVar5) {
                            iVar3 = iVar5;
                        }
                        iVar5 = *(int *)(param_1 + 0x5c);
                        if (*(int *)(param_1 + 0x5c) < iVar6) {
                            iVar5 = iVar6;
                        }
                        iVar6 = *(int *)(param_1 + 0x50);
                        if (local_138 < *(int *)(param_1 + 0x50)) {
                            iVar6 = local_138;
                        }
                        *(int *)(param_1 + 0x50) = iVar6;
                        iVar6 = *(int *)(param_1 + 0x54);
                        if (local_134 < *(int *)(param_1 + 0x54)) {
                            iVar6 = local_134;
                        }
                        *(int *)(param_1 + 0x54) = iVar6;
                        *(int *)(param_1 + 0x58) = iVar3;
                        *(int *)(param_1 + 0x5c) = iVar5;
                    }
                    ppuVar7 = (undefined **)((longlong)ppuVar7 + 1);
                } while (ppuVar7 < ppuVar13[5]);
            }
            fVar15 = 3.402823e+38;
            local_188 = (undefined **)(param_1 + 0x50);
            local_180 = (int *)(param_1 + 0x58);
            local_178 = CONCAT44(local_178._4_4_,*local_180 + *(int *)local_188);
            lVar9 = *(longlong *)(param_1 + 0x38);
            if (lVar9 != 0) {
                plVar12 = *(longlong **)(param_1 + 0x30);
                uVar16 = local_148._0_4_;
                do {
                    lVar8 = *plVar12;
                    local_148._0_4_ = SUB124(*(undefined (*) [12])(lVar8 + 0x10),0);
                    local_148._0_4_ =
                            local_148._0_4_ -
                            ((float)(*local_180 + *(int *)local_188 >> 1) * 1.5 * DAT_140c7ac4c - DAT_140c45098);
                    fVar14 = local_148._0_4_ * local_148._0_4_ + 0.0 + 0.0;
                    local_148._0_4_ = (float)uVar16;
                    if (fVar14 < fVar15) {
                        fVar15 = fVar14;
                        local_148._0_4_ = (float)*(undefined4 *)*(undefined (*) [12])(lVar8 + 0x10);
                        local_148._4_4_ = *(undefined4 *)(lVar8 + 0x14);
                        uStack320._0_4_ = *(undefined4 *)(lVar8 + 0x18);
                        uStack320._4_4_ = *(undefined4 *)(lVar8 + 0x1c);
                    }
                    plVar12 = plVar12 + 1;
                    lVar9 = lVar9 + -1;
                    uVar16 = local_148._0_4_;
                } while (lVar9 != 0);
                _local_148 = CONCAT412(uStack320._4_4_,
                                       CONCAT48((undefined4)uStack320,
                                                CONCAT44(local_148._4_4_,local_148._0_4_)));
                if (fVar15 < 3.402823e+38) {
                    lVar9 = *(longlong *)(param_1 + 0x60);
                    if (lVar9 == 0) {
                        puVar10 = (undefined2 *)FUN_14018b280(0x10);
                        local_160 = puVar10 + 8;
                        if (puVar10 != (undefined2 *)0x0) {
                            *puVar10 = 0;
                        }
                        psVar2 = *(short **)(param_1 + 0x78);
                        local_188 = (undefined **)0x0;
                        local_180 = (int *)CONCAT44(0x3f800000,DAT_140c63664);
                        ppuVar13 = ppuVar11;
                        local_170 = puVar10;
                        local_168 = puVar10;
                        if ((((*(longlong *)(DAT_140c65898 + 0x7340) != 0) && (psVar2 != (short *)0x0)) &&
                             (ppuVar13 = (undefined **)0x0, *psVar2 != 0)) &&
                            (local_158 = (undefined **)
                                    FUN_140108e80(*(longlong *)(DAT_140c65898 + 0x7340) + 0xf0,psVar2),
                                    local_158 != (undefined **)0x0)) {
                            sVar1 = *psVar2;
                            ppuVar13 = ppuVar11;
                            while (sVar1 != 0) {
                                ppuVar13 = (undefined **)((longlong)ppuVar13 + 1);
                                sVar1 = psVar2[(longlong)ppuVar13];
                            }
                            FUN_14001c480(&local_178,psVar2,psVar2 + (longlong)ppuVar13);
                            ppuVar4 = local_158;
                            ppuVar7 = local_188;
                            ppuVar13 = local_188;
                            puVar10 = local_170;
                            if ((local_158 != local_188) &&
                                ((**(code **)*local_158)(local_158), ppuVar13 = ppuVar4, puVar10 = local_170,
                                        ppuVar7 != (undefined **)0x0)) {
                                (**(code **)(*ppuVar7 + 8))(ppuVar7);
                                puVar10 = local_170;
                            }
                        }
                        FUN_140770490(&local_128);
                        local_a8 = 0x3f800000;
                        local_c8 = 0x3f800000;
                        uStack196 = 0x3f800000;
                        uStack192 = 0x3f800000;
                        uStack188 = 0x3f800000;
                        local_b8 = 0x3f800000;
                        uStack180 = 0x3f800000;
                        uStack176 = 0x3f800000;
                        uStack172 = 0x3f800000;
                        if (ppuVar13 != (undefined **)0x0) {
                            (**(code **)*ppuVar13)(ppuVar13);
                        }
                        if (local_128 != (undefined **)0x0) {
                            (**(code **)(*local_128 + 8))();
                        }
                        local_120 = (undefined4)local_180;
                        local_128 = ppuVar13;
                        lVar9 = FUN_14018b280(0x180,0);
                        ppuVar7 = ppuVar11;
                        if (lVar9 != 0) {
                            local_188 = &PTR_FUN_140b56a08;
                            local_178 = 0;
                            local_180 = (int *)CONCAT44(local_180._4_4_,0xfffffffe);
                            ppuVar7 = (undefined **)
                                    FUN_140770b60(lVar9,1,local_148,*(undefined8 *)(param_1 + 0xb8),
                                                  *(undefined8 *)(param_1 + 0xd0),0,&local_128,0x12,&local_188);
                        }
                        *(undefined ***)(param_1 + 0x60) = ppuVar7;
                        if ((lVar9 != 0) && (local_188 = &PTR_FUN_140b56a08, local_178 != 0)) {
                            FUN_1400579e0();
                        }
                        FUN_140532d90(&local_128);
                        if (ppuVar13 != (undefined **)0x0) {
                            (**(code **)(*ppuVar13 + 8))(ppuVar13);
                        }
                        if (puVar10 != (undefined2 *)0x0) {
                            FUN_14018b900(puVar10,0);
                        }
                    }
                    else if (*(int *)(lVar9 + 0xc) != 0) {
                        *(undefined (*) [16])(lVar9 + 0x10) =
                                CONCAT412(uStack320._4_4_,
                                          CONCAT48((undefined4)uStack320,CONCAT44(local_148._4_4_,local_148._0_4_))
                                );
                    }
                    lVar9 = *(longlong *)(param_1 + 0x68);
                    if (lVar9 == 0) {
                        puVar10 = (undefined2 *)FUN_14018b280(0x10,0);
                        local_160 = puVar10 + 8;
                        if (puVar10 != (undefined2 *)0x0) {
                            *puVar10 = 0;
                        }
                        psVar2 = *(short **)(param_1 + 0x98);
                        local_188 = (undefined **)0x0;
                        local_180 = (int *)CONCAT44(0x3f800000,DAT_140c63664);
                        ppuVar13 = ppuVar11;
                        local_170 = puVar10;
                        local_168 = puVar10;
                        if ((((*(longlong *)(DAT_140c65898 + 0x7340) != 0) && (psVar2 != (short *)0x0)) &&
                             (ppuVar13 = (undefined **)0x0, *psVar2 != 0)) &&
                            (local_158 = (undefined **)
                                    FUN_140108e80(*(longlong *)(DAT_140c65898 + 0x7340) + 0xf0,psVar2),
                                    local_158 != (undefined **)0x0)) {
                            sVar1 = *psVar2;
                            ppuVar13 = ppuVar11;
                            while (sVar1 != 0) {
                                ppuVar13 = (undefined **)((longlong)ppuVar13 + 1);
                                sVar1 = psVar2[(longlong)ppuVar13];
                            }
                            FUN_14001c480(&local_178,psVar2,psVar2 + (longlong)ppuVar13);
                            ppuVar4 = local_158;
                            ppuVar7 = local_188;
                            ppuVar13 = local_188;
                            puVar10 = local_170;
                            if ((local_158 != local_188) &&
                                ((**(code **)*local_158)(local_158), ppuVar13 = ppuVar4, puVar10 = local_170,
                                        ppuVar7 != (undefined **)0x0)) {
                                (**(code **)(*ppuVar7 + 8))(ppuVar7);
                                puVar10 = local_170;
                            }
                        }
                        FUN_140770490(&local_128);
                        local_a8 = 0x3f800000;
                        local_c8 = 0x3f800000;
                        uStack196 = 0x3f800000;
                        uStack192 = 0x3f800000;
                        uStack188 = 0x3f800000;
                        local_b8 = 0x3f800000;
                        uStack180 = 0x3f800000;
                        uStack176 = 0x3f800000;
                        uStack172 = 0x3f800000;
                        if (ppuVar13 != (undefined **)0x0) {
                            (**(code **)*ppuVar13)(ppuVar13);
                        }
                        if (local_128 != (undefined **)0x0) {
                            (**(code **)(*local_128 + 8))();
                        }
                        local_120 = (undefined4)local_180;
                        local_128 = ppuVar13;
                        lVar9 = FUN_14018b280(0x180,0);
                        if (lVar9 != 0) {
                            local_188 = &PTR_FUN_140b56a08;
                            local_178 = 0;
                            local_180 = (int *)CONCAT44(local_180._4_4_,0xfffffffe);
                            ppuVar11 = (undefined **)
                                    FUN_140770b60(lVar9,1,local_148,*(undefined8 *)(param_1 + 0xb8),
                                                  *(undefined8 *)(param_1 + 0xd0),0,&local_128,0x12,&local_188)
                                    ;
                        }
                        *(undefined ***)(param_1 + 0x68) = ppuVar11;
                        if ((lVar9 != 0) && (local_188 = &PTR_FUN_140b56a08, local_178 != 0)) {
                            FUN_1400579e0();
                        }
                        FUN_140532d90(&local_128);
                        if (ppuVar13 != (undefined **)0x0) {
                            (**(code **)(*ppuVar13 + 8))(ppuVar13);
                        }
                        if (puVar10 != (undefined2 *)0x0) {
                            FUN_14018b900(puVar10,0);
                        }
                    }
                    else if (*(int *)(lVar9 + 0xc) != 0) {
                        *(undefined (*) [16])(lVar9 + 0x10) =
                                CONCAT412(uStack320._4_4_,
                                          CONCAT48((undefined4)uStack320,CONCAT44(local_148._4_4_,local_148._0_4_))
                                );
                    }
                }
            }
            *param_3 = &PTR_FUN_140b56a08;
            if (param_3[2] != 0) {
                FUN_1400579e0();
            }
            return 1;
        }
    }
    *param_3 = &PTR_FUN_140b56a08;
    if (param_3[2] != 0) {
        FUN_1400579e0();
    }
    return 0;
}



void FUN_140770050(longlong param_1,longlong param_2)

{
    longlong lVar1;
    short sVar2;
    undefined8 *puVar3;
    short *psVar4;
    longlong *plVar5;
    char cVar6;
    undefined2 *puVar7;
    longlong *plVar8;
    longlong lVar9;
    longlong *plVar10;
    longlong *plVar11;
    longlong *plVar12;
    longlong lVar13;
    longlong lVar14;
    undefined **local_178;
    undefined4 local_170;
    longlong local_168;
    longlong *local_160;
    undefined4 local_158;
    undefined4 local_154;
    undefined local_150 [8];
    undefined2 *local_148;
    undefined2 *local_140;
    undefined2 *local_138;
    undefined local_128 [16];
    longlong *local_118;
    undefined4 local_110;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined4 local_a8;
    undefined4 uStack164;
    undefined4 uStack160;
    undefined4 uStack156;
    undefined4 local_98;

    plVar11 = (longlong *)0x0;
    lVar9 = param_1 + 0x70;
    if (param_2 + 0x20 != lVar9) {
        FUN_14001c480(lVar9,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30));
    }
    lVar14 = *(longlong *)(param_2 + 0x50);
    lVar13 = *(longlong *)(param_2 + 0x48);
    lVar1 = param_1 + 0x90;
    if (lVar13 == lVar14) {
        if (lVar9 != lVar1) {
            lVar14 = *(longlong *)(param_1 + 0x80);
            lVar13 = *(longlong *)(param_1 + 0x78);
            LAB_1407700c7:
            FUN_14001c480(lVar1,lVar13,lVar14);
        }
    }
    else if (param_2 + 0x40 != lVar1) goto LAB_1407700c7;
    plVar12 = *(longlong **)(param_1 + 0x60);
    if (plVar12 == (longlong *)0x0) {
        return;
    }
    (**(code **)(*plVar12 + 0x10))(plVar12,local_128);
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x68);
    if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
    }
    puVar7 = (undefined2 *)FUN_14018b280(0x10);
    local_138 = puVar7 + 8;
    if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
    }
    psVar4 = *(short **)(param_1 + 0x78);
    local_154 = 0x3f800000;
    local_158 = DAT_140c63664;
    local_160 = (longlong *)0x0;
    plVar12 = plVar11;
    plVar10 = local_160;
    local_148 = puVar7;
    local_140 = puVar7;
    if ((((*(longlong *)(DAT_140c65898 + 0x7340) != 0) && (psVar4 != (short *)0x0)) &&
         (plVar12 = (longlong *)0x0, *psVar4 != 0)) &&
        (plVar8 = (longlong *)FUN_140108e80(*(longlong *)(DAT_140c65898 + 0x7340) + 0xf0,psVar4),
                plVar10 = local_160, plVar8 != (longlong *)0x0)) {
        sVar2 = *psVar4;
        plVar12 = plVar11;
        while (sVar2 != 0) {
            plVar12 = (longlong *)((longlong)plVar12 + 1);
            sVar2 = psVar4[(longlong)plVar12];
        }
        FUN_14001c480(local_150,psVar4,psVar4 + (longlong)plVar12);
        plVar5 = local_160;
        plVar12 = local_160;
        puVar7 = local_148;
        plVar10 = local_160;
        if ((plVar8 != local_160) &&
            ((**(code **)*plVar8)(plVar8), plVar12 = plVar8, puVar7 = local_148, plVar10 = plVar8,
                    plVar5 != (longlong *)0x0)) {
            (**(code **)(*plVar5 + 8))(plVar5);
            puVar7 = local_148;
        }
    }
    local_160 = plVar10;
    FUN_140770490(&local_118);
    local_98 = 0x3f800000;
    local_b8 = 0x3f800000;
    uStack180 = 0x3f800000;
    uStack176 = 0x3f800000;
    uStack172 = 0x3f800000;
    local_a8 = 0x3f800000;
    uStack164 = 0x3f800000;
    uStack160 = 0x3f800000;
    uStack156 = 0x3f800000;
    if (plVar12 != (longlong *)0x0) {
        (**(code **)*plVar12)(plVar12);
    }
    if (local_118 != (longlong *)0x0) {
        (**(code **)(*local_118 + 8))();
    }
    local_110 = local_158;
    local_118 = plVar12;
    lVar9 = FUN_14018b280(0x180,0);
    plVar10 = plVar11;
    if (lVar9 != 0) {
        local_178 = &PTR_FUN_140b56a08;
        local_168 = 0;
        local_170 = 0xfffffffe;
        plVar10 = (longlong *)
                FUN_140770b60(lVar9,1,local_128,*(undefined8 *)(param_1 + 0xb8),
                              *(undefined8 *)(param_1 + 0xd0),0,&local_118,0x12,&local_178);
    }
    *(longlong **)(param_1 + 0x60) = plVar10;
    if ((lVar9 != 0) && (local_178 = &PTR_FUN_140b56a08, local_168 != 0)) {
        FUN_1400579e0();
    }
    psVar4 = *(short **)(param_1 + 0x98);
    lVar9 = *(longlong *)(DAT_140c65898 + 0x7340);
    if (lVar9 == 0) goto LAB_14077039d;
    if (plVar12 == (longlong *)0x0) {
        LAB_140770317:
        if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
            plVar8 = (longlong *)FUN_140108e80(lVar9 + 0xf0,psVar4);
            plVar10 = plVar12;
            if (plVar8 != (longlong *)0x0) {
                sVar2 = *psVar4;
                plVar12 = plVar11;
                while (sVar2 != 0) {
                    plVar12 = (longlong *)((longlong)plVar12 + 1);
                    sVar2 = psVar4[(longlong)plVar12];
                }
                FUN_14001c480(local_150,psVar4,psVar4 + (longlong)plVar12);
                plVar10 = local_160;
                puVar7 = local_148;
            }
            plVar12 = plVar10;
            if (plVar8 != plVar10) {
                if (plVar8 != (longlong *)0x0) {
                    (**(code **)*plVar8)(plVar8);
                }
                plVar12 = plVar8;
                if (plVar10 != (longlong *)0x0) {
                    (**(code **)(*plVar10 + 8))(plVar10);
                }
            }
            goto LAB_14077039d;
        }
    }
    else if (psVar4 != (short *)0x0) {
        cVar6 = FUN_14002c740(local_150,psVar4);
        if (cVar6 != '\0') goto LAB_14077039d;
        goto LAB_140770317;
    }
    if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 8))(plVar12);
        plVar12 = plVar11;
    }
    LAB_14077039d:
    lVar9 = FUN_14018b280(0x180,0);
    if (lVar9 != 0) {
        local_178 = &PTR_FUN_140b56a08;
        local_168 = 0;
        local_170 = 0xfffffffe;
        plVar11 = (longlong *)
                FUN_140770b60(lVar9,1,local_128,*(undefined8 *)(param_1 + 0xb8),
                              *(undefined8 *)(param_1 + 0xd0),0,&local_118,0x12,&local_178);
    }
    *(longlong **)(param_1 + 0x68) = plVar11;
    if ((lVar9 != 0) && (local_178 = &PTR_FUN_140b56a08, local_168 != 0)) {
        FUN_1400579e0();
    }
    FUN_140532d90(&local_118);
    if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 8))(plVar12);
    }
    if (puVar7 != (undefined2 *)0x0) {
        FUN_14018b900(puVar7,0);
    }
    return;
}



// WARNING: Removing unreachable block (ram,0x000140770579)
// WARNING: Removing unreachable block (ram,0x00014077057e)
// WARNING: Removing unreachable block (ram,0x0001407705fc)
// WARNING: Removing unreachable block (ram,0x000140770601)

longlong * FUN_140770490(longlong *param_1)

{
    char cVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;

    FUN_1401095e0();
    FUN_1401095e0(param_1 + 6);
    lVar5 = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 100) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_1401095e0(param_1 + 0x11);
    FUN_1401095e0(param_1 + 0x17);
    if ((DAT_140c65898 != 0) && (lVar3 = *(longlong *)(DAT_140c65898 + 0x7340), lVar3 != 0)) {
        if ((*param_1 == 0) || (cVar1 = FUN_14002c740(param_1 + 2,L"MiniMapObject"), cVar1 == '\0')) {
            lVar2 = FUN_140108e80(lVar3 + 0xf0,L"MiniMapObject");
            lVar4 = lVar5;
            if (lVar2 != 0) {
                do {
                    lVar4 = lVar4 + 1;
                } while (L"MiniMapObject"[lVar4] != L'\0');
                FUN_14001c480(param_1 + 2,L"MiniMapObject",L"MiniMapObject" + lVar4);
            }
            FUN_1401097f0(param_1,lVar2);
        }
        if ((param_1[6] == 0) ||
            (cVar1 = FUN_14002c740(param_1 + 8,L"MiniMapObjectEdge"), cVar1 == '\0')) {
            lVar3 = FUN_140108e80(lVar3 + 0xf0,L"MiniMapObjectEdge");
            if (lVar3 != 0) {
                do {
                    lVar5 = lVar5 + 1;
                } while (L"MiniMapObjectEdge"[lVar5] != L'\0');
                FUN_14001c480(param_1 + 8,L"MiniMapObjectEdge",L"MiniMapObjectEdge" + lVar5);
            }
            FUN_1401097f0(param_1 + 6,lVar3);
        }
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140770630(longlong param_1,longlong param_2,int param_3)

{
    longlong lVar1;
    bool bVar2;
    undefined2 *puVar3;
    undefined8 *puVar4;
    undefined2 *puVar5;
    undefined2 *puVar6;
    undefined8 uVar7;
    undefined8 uVar8;
    undefined4 *puVar9;
    int iVar10;
    longlong lVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    undefined4 uVar18;
    uint local_res20 [2];
    undefined local_78 [16];
    undefined local_68 [8];
    undefined2 *local_60;

    local_78._12_4_ = (undefined4)((ulonglong)local_78._0_8_ >> 0x20);
    if ((DAT_140c65898 != 0) && (lVar1 = *(longlong *)(DAT_140c65898 + 0x7340), lVar1 != 0)) {
        puVar4 = (undefined8 *)FUN_1400580e0(param_2,param_3);
        if ((puVar4 != &DAT_140a12138) && (*(int *)(puVar4 + 1) == 5)) {
            puVar5 = (undefined2 *)FUN_14018b280(0x10);
            if (puVar5 != (undefined2 *)0x0) {
                *puVar5 = 0;
            }
            puVar6 = (undefined2 *)FUN_14018b280(0x10);
            if (puVar6 != (undefined2 *)0x0) {
                *puVar6 = 0;
            }
            uVar7 = FUN_1400580e0(param_2,param_3);
            uVar8 = FUN_140062650(param_2,"strIcon",7);
            local_78._0_12_ = CONCAT48(4,uVar8);
            FUN_14005e8e0(param_2,uVar7,local_78,*(undefined8 *)(param_2 + 0x10));
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if ((*(undefined **)(param_2 + 0x10) == &DAT_140a12148) ||
                (1 < *(int *)(*(undefined **)(param_2 + 0x10) + -8) - 3U)) {
                bVar2 = false;
            }
            else {
                uVar7 = FUN_140056bb0(param_2,0xffffffff,0);
                FUN_14018f2d0(local_68,uVar7);
                puVar3 = local_60;
                if (puVar5 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar5,0);
                }
                bVar2 = true;
                puVar5 = puVar3;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            if (bVar2) {
                FUN_140109710(param_1,lVar1 + 0xf0,puVar5,0);
            }
            uVar7 = FUN_1400580e0(param_2,param_3);
            uVar8 = FUN_140062650(param_2,"strIconEdge",0xb);
            local_78._0_12_ = CONCAT48(4,uVar8);
            FUN_14005e8e0(param_2,uVar7,local_78,*(undefined8 *)(param_2 + 0x10));
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if ((*(undefined **)(param_2 + 0x10) == &DAT_140a12148) ||
                (1 < *(int *)(*(undefined **)(param_2 + 0x10) + -8) - 3U)) {
                bVar2 = false;
            }
            else {
                uVar7 = FUN_140056bb0(param_2,0xffffffff,0);
                FUN_14018f2d0(local_68,uVar7);
                puVar3 = local_60;
                if (puVar6 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar6,0);
                }
                bVar2 = true;
                puVar6 = puVar3;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            if (bVar2) {
                FUN_140109710(param_1 + 0x30,lVar1 + 0xf0,puVar6,0);
            }
            FUN_140058710(param_2,"crObject",8);
            iVar10 = param_3 + -1;
            if (-1 < param_3) {
                iVar10 = param_3;
            }
            uVar7 = FUN_1400580e0(param_2,iVar10);
            lVar11 = *(longlong *)(param_2 + 0x10) + -0x10;
            FUN_14005e8e0(param_2,uVar7,lVar11,lVar11);
            uVar13 = 0x3f800000;
            uVar15 = 0x3f800000;
            uVar17 = 0x3f800000;
            local_78._12_4_ = 0x3f800000;
            local_78._0_12_ = CONCAT48(0x3f800000,0x3f8000003f800000);
            local_78 = CONCAT412(0x3f800000,local_78._0_12_);
            FUN_140143880(local_res20,param_2,0xffffffff,local_78);
            lVar11 = DAT_140c63678;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            if ((ulonglong)local_res20[0] < *(ulonglong *)(lVar11 + 0x30)) {
                puVar9 = (undefined4 *)((ulonglong)local_res20[0] * 0x20 + *(longlong *)(lVar11 + 0x28));
            }
            else {
                puVar9 = *(undefined4 **)(lVar11 + 0x28);
            }
            uVar12 = *puVar9;
            uVar14 = puVar9[1];
            uVar16 = puVar9[2];
            uVar18 = puVar9[3];
            FUN_1401429a0();
            *(undefined (*) [16])(param_1 + 0x60) =
                    CONCAT412(uVar18,CONCAT48(uVar16,CONCAT44(uVar14,uVar12)));
            FUN_140058710(param_2,"crEdge",6);
            iVar10 = param_3 + -1;
            if (-1 < param_3) {
                iVar10 = param_3;
            }
            uVar7 = FUN_1400580e0(param_2,iVar10);
            lVar11 = *(longlong *)(param_2 + 0x10) + -0x10;
            FUN_14005e8e0(param_2,uVar7,lVar11,lVar11);
            local_78._0_12_ = CONCAT48(uVar17,CONCAT44(uVar15,uVar13));
            FUN_140143880(local_res20,param_2,0xffffffff,local_78);
            lVar11 = DAT_140c63678;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            if ((ulonglong)local_res20[0] < *(ulonglong *)(lVar11 + 0x30)) {
                puVar9 = (undefined4 *)((ulonglong)local_res20[0] * 0x20 + *(longlong *)(lVar11 + 0x28));
            }
            else {
                puVar9 = *(undefined4 **)(lVar11 + 0x28);
            }
            uVar13 = *puVar9;
            uVar15 = puVar9[1];
            uVar17 = puVar9[2];
            uVar12 = puVar9[3];
            FUN_1401429a0();
            *(undefined (*) [16])(param_1 + 0x70) =
                    CONCAT412(uVar12,CONCAT48(uVar17,CONCAT44(uVar15,uVar13)));
            FUN_1400f0a10(param_2,param_3,"fRadius",param_1 + 0x80);
            uVar7 = FUN_1400580e0(param_2,param_3);
            uVar8 = FUN_140062650(param_2,"strIconAbove",0xc);
            local_78._0_12_ = CONCAT48(4,uVar8);
            FUN_14005e8e0(param_2,uVar7,local_78,*(undefined8 *)(param_2 + 0x10));
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if ((*(undefined **)(param_2 + 0x10) == &DAT_140a12148) ||
                (1 < *(int *)(*(undefined **)(param_2 + 0x10) + -8) - 3U)) {
                bVar2 = false;
            }
            else {
                uVar7 = FUN_140056bb0(param_2,0xffffffff,0);
                FUN_14018f2d0(local_68,uVar7);
                puVar3 = local_60;
                if (puVar5 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar5,0);
                }
                bVar2 = true;
                puVar5 = puVar3;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            if (bVar2) {
                FUN_140109710(param_1 + 0x88,lVar1 + 0xf0,puVar5,0);
            }
            uVar7 = FUN_1400580e0(param_2,param_3);
            uVar8 = FUN_140062650(param_2,"strIconBelow",0xc);
            local_78._0_12_ = CONCAT48(4,uVar8);
            FUN_14005e8e0(param_2,uVar7,local_78,*(undefined8 *)(param_2 + 0x10));
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if ((*(undefined **)(param_2 + 0x10) == &DAT_140a12148) ||
                (1 < *(int *)(*(undefined **)(param_2 + 0x10) + -8) - 3U)) {
                bVar2 = false;
            }
            else {
                uVar7 = FUN_140056bb0(param_2,0xffffffff,0);
                FUN_14018f2d0(local_68,uVar7);
                if (puVar5 != (undefined2 *)0x0) {
                    FUN_14018b900(puVar5,0);
                }
                bVar2 = true;
                puVar5 = local_60;
            }
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            if (bVar2) {
                FUN_140109710(param_1 + 0xb8,lVar1 + 0xf0,puVar5,0);
            }
            if (puVar6 != (undefined2 *)0x0) {
                FUN_14018b900(puVar6,0);
            }
            if (puVar5 != (undefined2 *)0x0) {
                FUN_14018b900(puVar5,0);
            }
            return 1;
        }
    }
    return 0;
}



undefined8 *
FUN_140770b60(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,short *param_4,
              undefined8 param_5,short *param_6,longlong *param_7,undefined4 param_8,
              undefined8 param_9)

{
    short sVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined2 *puVar6;
    longlong lVar7;
    short *psVar8;

    *param_1 = &PTR_FUN_140b76620;
    lVar7 = 0;
    DAT_140c8a07c = DAT_140c8a07c + 1;
    *(int *)(param_1 + 1) = DAT_140c8a07c;
    *(undefined4 *)((longlong)param_1 + 0xc) = param_2;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined4 *)(param_1 + 2) = *param_3;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
    *(undefined4 *)(param_1 + 3) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
    param_1[4] = 0;
    FUN_140770490();
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    puVar6 = (undefined2 *)FUN_14018b280(0x10);
    param_1[0x25] = puVar6;
    param_1[0x26] = puVar6;
    param_1[0x27] = puVar6 + 8;
    if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = 0;
    }
    *(undefined (*) [16])(param_1 + 0x28) = ZEXT816(0);
    param_1[0x2a] = 0;
    *(undefined4 *)(param_1 + 0x2b) = param_8;
    FUN_1400f9dd0(param_1 + 0x2c,param_9);
    *(undefined4 *)(param_1 + 0x2f) = 0;
    psVar8 = (short *)&DAT_1409f996c;
    if (param_6 != (short *)0x0) {
        psVar8 = param_6;
    }
    sVar1 = *psVar8;
    while (sVar1 != 0) {
        lVar7 = lVar7 + 1;
        sVar1 = psVar8[lVar7];
    }
    FUN_14001c480(param_1 + 0x24,psVar8,psVar8 + lVar7);
    puVar2 = (undefined8 *)*param_7;
    if (puVar2 != (undefined8 *)param_1[6]) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
        }
        if ((longlong *)param_1[6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[6] + 8))();
            param_1[6] = 0;
        }
        param_1[6] = puVar2;
    }
    puVar2 = (undefined8 *)param_7[6];
    if (puVar2 != (undefined8 *)param_1[0xc]) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
        }
        if ((longlong *)param_1[0xc] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0xc] + 8))();
            param_1[0xc] = 0;
        }
        param_1[0xc] = puVar2;
    }
    uVar3 = *(undefined4 *)((longlong)param_7 + 100);
    uVar4 = *(undefined4 *)(param_7 + 0xd);
    uVar5 = *(undefined4 *)((longlong)param_7 + 0x6c);
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_7 + 0xc);
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
    *(undefined4 *)(param_1 + 0x13) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
    uVar3 = *(undefined4 *)((longlong)param_7 + 0x74);
    uVar4 = *(undefined4 *)(param_7 + 0xf);
    uVar5 = *(undefined4 *)((longlong)param_7 + 0x7c);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_7 + 0xe);
    *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
    *(undefined4 *)(param_1 + 0x15) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar5;
    puVar2 = (undefined8 *)param_7[0x11];
    if (puVar2 != (undefined8 *)param_1[0x17]) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
        }
        if ((longlong *)param_1[0x17] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x17] + 8))();
            param_1[0x17] = 0;
        }
        param_1[0x17] = puVar2;
    }
    puVar2 = (undefined8 *)param_7[0x17];
    if (puVar2 != (undefined8 *)param_1[0x1d]) {
        if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2);
        }
        if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x1d] + 8))();
            param_1[0x1d] = 0;
        }
        param_1[0x1d] = puVar2;
    }
    if ((param_4 != (short *)0x0) && (*param_4 != 0)) {
        (**(code **)(*DAT_140c65680 + 0x28))
                (DAT_140c65680,param_5,param_4,0xffffffffffffffff,param_1 + 4);
    }
    return param_1;
}



undefined8 FUN_140770db0(undefined8 param_1,ulonglong param_2)

{
    FUN_140770df0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_140770df0(undefined8 *param_1)

{
    *param_1 = &PTR_FUN_140b76620;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[4] + 8))();
        param_1[4] = 0;
    }
    param_1[0x2c] = &PTR_FUN_140b56a08;
    if (param_1[0x2e] != 0) {
        FUN_1400579e0();
    }
    if (param_1[0x25] != 0) {
        FUN_14018b900(param_1[0x25],0);
    }
    FUN_140532d90(param_1 + 6);
    return;
}



longlong * FUN_140770e90(longlong *param_1)

{
    longlong lVar1;
    float fVar2;
    undefined local_28 [4];
    float local_24;

    if (*(int *)(param_1 + 0x2a) != 0) {
        return param_1 + 0xc;
    }
    if ((param_1[0x1d] != 0) && (param_1[0x17] != 0)) {
        (**(code **)(*param_1 + 0x10))(param_1,local_28);
        lVar1 = *(longlong *)(DAT_140c65898 + 0x6490);
        if ((lVar1 == 0) && (lVar1 = *(longlong *)(DAT_140c65898 + 0x78), lVar1 == 0)) {
            return param_1 + 6;
        }
        fVar2 = *(float *)(lVar1 + 0x11e4);
        if ((DAT_140dc4da4 & 1) == 0) {
            DAT_140dc4da4 = DAT_140dc4da4 | 1;
            lVar1 = FUN_140200220(0x46e);
            if (lVar1 == 0) {
                DAT_140dc4da8 = 10.0;
            }
            else {
                DAT_140dc4da8 = *(float *)(lVar1 + 0x18);
            }
        }
        if (fVar2 - DAT_140dc4da8 <= local_24) {
            if (local_24 <= DAT_140dc4da8 + fVar2) {
                param_1 = param_1 + 6;
            }
            else {
                param_1 = param_1 + 0x17;
            }
        }
        else {
            param_1 = param_1 + 0x1d;
        }
        return param_1;
    }
    return param_1 + 6;
}



void FUN_140770fc0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 *puVar4;
    undefined8 uVar5;
    undefined4 in_XMM3_Da;
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined4 uStack60;
    undefined local_38 [48];

    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,&local_48);
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *(undefined4 *)(param_1 + 2) = *puVar4;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 3) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    uVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_38);
    FUN_1407711c0(&local_48,uVar5,param_2,param_4,in_XMM3_Da,param_5,param_1 + 0x2a,
                  (longlong)param_1 + 0x154);
    *(undefined4 *)(param_1 + 0x28) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x144) = uStack68;
    *(undefined4 *)(param_1 + 0x29) = uStack64;
    *(undefined4 *)((longlong)param_1 + 0x14c) = uStack60;
    return;
}



undefined (*) [16]
FUN_140771080(undefined (*param_1) [16],float *param_2,float *param_3,undefined8 param_4,
undefined4 param_5,longlong param_6)

{
float extraout_XMM0_Da;
float extraout_XMM0_Da_00;
undefined auVar1 [16];
float fVar2;
float fVar3;
float fVar4;
undefined4 uStack92;

fVar3 = *param_2 - *param_3;
fVar4 = param_2[2] - param_3[2];
FUN_1408fc950();
fVar2 = extraout_XMM0_Da;
FUN_1408fe3d0();
*param_1 = ZEXT816(CONCAT44((float)(*(int *)(param_6 + 0x10) + *(int *)(param_6 + 8) >> 1),
                            (float)(*(int *)(param_6 + 0xc) + *(int *)(param_6 + 4) >> 1)));
if ((0 < *(int *)(param_6 + 0xc) - *(int *)(param_6 + 4)) &&
(0 < *(int *)(param_6 + 0x10) - *(int *)(param_6 + 8))) {
auVar1 = divps(CONCAT412(uStack92,CONCAT48(fVar4 * fVar2 - fVar3 * extraout_XMM0_Da_00,
                                           (ulonglong)
                                                   (uint)(fVar4 * extraout_XMM0_Da_00 + fVar3 * fVar2)))
        ,CONCAT412(param_5,CONCAT48(param_5,CONCAT44(param_5,param_5))));
fVar2 = *(float *)(*param_1 + 4);
*(float *)*param_1 = SUB164(auVar1,0) + *(float *)*param_1;
*(float *)(*param_1 + 4) = SUB164(auVar1 >> 0x40,0) + fVar2;
}
return param_1;
}



// WARNING: Could not reconcile some variable overlaps

undefined (*) [16]
FUN_1407711c0(undefined (*param_1) [16],float *param_2,float *param_3,undefined8 param_4,
undefined4 param_5,int *param_6,undefined4 *param_7,undefined4 *param_8)

{
int *piVar1;
int *piVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
float extraout_XMM0_Da;
float extraout_XMM0_Da_00;
undefined4 extraout_XMM0_Da_01;
float extraout_XMM0_Da_02;
undefined4 extraout_XMM0_Da_03;
undefined auVar7 [16];
float fVar8;
float fVar9;
uint uVar10;
uint uVar11;
float fVar12;
float fVar14;
float fVar15;
undefined auVar13 [16];
float fVar16;
float fVar17;
uint uVar18;
uint uVar19;
uint uVar20;
float fVar21;
undefined local_a8 [8];
float fStack160;

uVar18 = 0x80000000;
uVar19 = 0;
uVar20 = 0;
fVar16 = *param_2 - *param_3;
fVar17 = param_2[2] - param_3[2];
FUN_1408fc950();
fVar8 = extraout_XMM0_Da;
FUN_1408fe3d0();
fVar21 = 0.0;
piVar1 = param_6 + 1;
piVar2 = param_6 + 3;
_local_a8 = ZEXT816(local_a8 & 0xffffffff00000000 |
                    (ulonglong)(uint)(fVar17 * fVar8 - fVar16 * extraout_XMM0_Da_00)) << 0x40;
_local_a8 = CONCAT124(stack0xffffffffffffff5c,fVar17 * extraout_XMM0_Da_00 + fVar16 * fVar8);
*param_1 = ZEXT816(CONCAT44((float)(param_6[2] + param_6[4] >> 1),(float)(*piVar2 + *piVar1 >> 1))
);
*param_7 = 0;
if (*piVar2 - *piVar1 < 1) {
return param_1;
}
if (param_6[4] - param_6[2] < 1) {
return param_1;
}
*param_7 = 0;
auVar13 = divps(_local_a8,CONCAT412(param_5,CONCAT48(param_5,CONCAT44(param_5,param_5))));
if (*param_6 != 0) {
iVar3 = *piVar2;
iVar4 = param_6[2];
iVar5 = param_6[4];
fVar8 = 0.0;
iVar6 = *piVar1;
FUN_1408fd190();
fVar17 = 0.5;
*param_8 = extraout_XMM0_Da_01;
FUN_1408fd8a4();
fVar16 = (float)(iVar3 - iVar6) * (float)param_6[6] * fVar17;
fVar17 = (float)(iVar5 - iVar4) * (float)param_6[6] * fVar17;
auVar7 = ZEXT416((uint)(fVar16 * fVar16 * extraout_XMM0_Da_02 * extraout_XMM0_Da_02 +
                        fVar17 * fVar17)) & (undefined  [16])0xffffffffffffffff;
auVar7 = sqrtps(auVar7,auVar7);
auVar7 = ZEXT416((uint)(1.0 / SUB164(auVar7,0))) & (undefined  [16])0xffffffffffffffff;
fVar12 = SUB164(auVar13,0);
fVar14 = SUB164(auVar13 >> 0x20,0);
fVar15 = SUB164(auVar13 >> 0x40,0);
uVar10 = SUB164(auVar7 >> 0x40,0);
uVar11 = SUB164(auVar7 >> 0x60,0);
fVar9 = SUB164(auVar7,0) * fVar17 * fVar16;
fVar16 = fVar17 * fVar16 * extraout_XMM0_Da_02 * SUB164(auVar7,0);
fStack160 = fVar8;
if (fVar16 * fVar16 + fVar9 * fVar9 <= fVar12 * fVar12 + fVar14 * fVar14 + fVar15 * fVar15) {
*param_7 = 1;
if (fVar12 < fVar21 != fVar9 < fVar21) {
fVar9 = (float)((uint)fVar9 ^ uVar18);
uVar10 = uVar10 ^ uVar19;
uVar11 = uVar11 ^ uVar20;
}
auVar13 = CONCAT412(uVar11,CONCAT48(uVar10,(ulonglong)(uint)fVar9));
fStack160 = fVar16;
if (fVar8 < fVar21 != fVar16 < fVar21) {
fStack160 = (float)((uint)fVar16 ^ uVar18);
}
}
goto LAB_140771544;
}
fStack160 = SUB164(auVar13 >> 0x40,0);
local_a8._0_4_ = SUB164(auVar13,0);
auVar13 = auVar13 & (undefined  [16])0xffffffff;
fVar8 = (float)(param_6[4] - param_6[2]) * 0.5 - 20.0;
fVar16 = (float)(*piVar2 - *piVar1) * 0.5 - 20.0;
if ((float)((uint)fStack160 & 0x7fffffff) <= fVar8) {
LAB_1407714f3:
if ((float)((uint)local_a8._0_4_ & 0x7fffffff) <= fVar16) goto LAB_140771544;
fVar17 = fVar8 / (float)((uint)local_a8._0_4_ & 0x7fffffff);
fVar21 = fVar17 * fStack160;
if (fVar8 < (float)((uint)fVar21 & 0x7fffffff)) goto LAB_140771544;
fVar17 = local_a8._0_4_ * fVar17;
}
else {
fVar21 = fVar8 / (float)((uint)fStack160 & 0x7fffffff);
fVar17 = fVar21 * local_a8._0_4_;
if (fVar16 < (float)((uint)fVar17 & 0x7fffffff)) goto LAB_1407714f3;
fVar21 = fStack160 * fVar21;
}
auVar13 = ZEXT416((uint)fVar17);
*param_7 = 1;
FUN_1408fd190();
*param_8 = extraout_XMM0_Da_03;
fStack160 = fVar21;
LAB_140771544:
fVar8 = *(float *)(*param_1 + 4);
*(float *)*param_1 = SUB164(auVar13,0) + *(float *)*param_1;
*(float *)(*param_1 + 4) = fStack160 + fVar8;
return param_1;
}



undefined8
FUN_140771590(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
              longlong *param_5_00,undefined8 param_6_00,undefined8 param_7,undefined8 param_8,
              int param_5,longlong param_6)

{
    uint uVar1;
    undefined8 uVar2;
    float *pfVar3;
    int extraout_XMM0_Da;
    int iVar4;
    undefined local_38 [48];

    uVar2 = (**(code **)(*param_5_00 + 0x28))();
    if ((int)uVar2 == 0) {
        return uVar2;
    }
    if (param_6 != 0) {
        iVar4 = extraout_XMM0_Da;
        if (param_5 == 0) {
            pfVar3 = (float *)(**(code **)(*param_5_00 + 0x10))(param_5_00,local_38);
            iVar4 = -(uint)(*(float *)(param_5_00 + 2) != *pfVar3);
            uVar1 = movmskps((int)pfVar3,
                             CONCAT412(-(uint)(*(float *)((longlong)param_5_00 + 0x1c) != pfVar3[3]),
            CONCAT48(-(uint)(*(float *)(param_5_00 + 3) != pfVar3[2]),
                     CONCAT44(-(uint)(*(float *)((longlong)param_5_00 + 0x14)
            != pfVar3[1]),iVar4))));
            if ((uVar1 & 7) == 0) {
                return 1;
            }
        }
        FUN_140770fc0(iVar4,param_2,param_3,param_4,param_5_00,param_6_00,param_7,param_8,param_6);
    }
    return 1;
}



undefined8 * FUN_140771630(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b765f0;
    if ((longlong *)param_1[0x30] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x30] + 8))();
        param_1[0x30] = 0;
    }
    FUN_140770df0(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



bool FUN_140771710(longlong *param_1)

{
    int iVar1;
    longlong lVar2;

    iVar1 = FUN_140771590();
    if (iVar1 != 0) {
        lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
        return *(int *)(lVar2 + 0x250) == 0;
    }
    return false;
}



longlong * FUN_140771790(longlong *param_1,longlong param_2)

{
    longlong lVar1;
    char cVar2;
    longlong lVar3;
    undefined *puVar4;
    uint uVar5;
    ulonglong uVar6;
    longlong *plVar7;
    ulonglong uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined local_58 [8];
    longlong local_50;

    *param_1 = param_2;
    uVar6 = 0;
    param_1[1] = 0;
    lVar3 = FUN_14018b280(0x28,0);
    param_1[7] = lVar3;
    *(longlong *)lVar3 = lVar3;
    *(longlong *)(param_1[7] + 8) = param_1[7];
    FUN_140771a30(param_1 + 8);
    FUN_140771a30(param_1 + 0x36);
    param_1[0x65] = 0;
    param_1[100] = 0;
    puVar4 = (undefined *)FUN_14018b280(0x30,0);
    param_1[0x67] = (longlong)puVar4;
    param_1[0x68] = 0;
    *puVar4 = 0;
    *(undefined8 *)(param_1[0x67] + 8) = 0;
    *(longlong *)(param_1[0x67] + 0x10) = param_1[0x67];
    *(longlong *)(param_1[0x67] + 0x18) = param_1[0x67];
    if ((*param_1 == 0) && (DAT_140c65898 != 0)) {
        *param_1 = *(longlong *)(DAT_140c65898 + 0x7340);
    }
    lVar3 = *param_1;
    if ((lVar3 != 0) &&
        ((param_1[0x3a] == 0 || (cVar2 = FUN_14002c740(param_1 + 0x3c,L"HexBlock"), cVar2 == '\0')))) {
        lVar3 = FUN_140108e80(lVar3 + 0xf0,L"HexBlock");
        uVar8 = uVar6;
        if (lVar3 != 0) {
            do {
                lVar1 = uVar8 + 1;
                uVar8 = uVar8 + 1;
            } while (L"HexBlock"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0x3c,L"HexBlock",L"HexBlock" + uVar8);
        }
        FUN_1401097f0(param_1 + 0x3a,lVar3);
    }
    uVar9 = 0x3f800000;
    uVar10 = 0x3f800000;
    uVar11 = 0x3f800000;
    uVar12 = 0x3f800000;
    *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
    *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
    lVar3 = *param_1;
    if ((lVar3 != 0) &&
        ((param_1[0xc] == 0 || (cVar2 = FUN_14002c740(param_1 + 0xe,L"HexBlock"), cVar2 == '\0')))) {
        lVar3 = FUN_140108e80(lVar3 + 0xf0,L"HexBlock");
        uVar8 = uVar6;
        if (lVar3 != 0) {
            do {
                lVar1 = uVar8 + 1;
                uVar8 = uVar8 + 1;
            } while (L"HexBlock"[lVar1] != L'\0');
            FUN_14001c480(param_1 + 0xe,L"HexBlock",L"HexBlock" + uVar8);
        }
        FUN_1401097f0(param_1 + 0xc,lVar3);
    }
    *(undefined (*) [16])(param_1 + 8) = CONCAT412(uVar12,CONCAT48(uVar11,CONCAT44(uVar10,uVar9)));
    *(undefined (*) [16])(param_1 + 10) = CONCAT412(uVar12,CONCAT48(uVar11,CONCAT44(uVar10,uVar9)));
    plVar7 = param_1 + 0x12;
    do {
        lVar3 = FUN_14018efa0(local_58,L"HexEdge%d",uVar6);
        if (param_2 != 0) {
            FUN_140109710(plVar7 + 0x2e,param_2 + 0xf0,*(undefined8 *)(lVar3 + 8),0);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
        lVar3 = FUN_14018efa0(local_58,L"HexEdge%d",uVar6);
        if (param_2 != 0) {
            FUN_140109710(plVar7,param_2 + 0xf0,*(undefined8 *)(lVar3 + 8),0);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50,0);
        }
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        plVar7 = plVar7 + 6;
    } while ((int)uVar5 < 6);
    return param_1;
}



longlong FUN_140771a30(longlong param_1)

{
    undefined4 uVar1;
    undefined2 *puVar2;
    undefined8 *puVar3;
    int iVar4;

    FUN_1401095e0(param_1 + 0x20);
    iVar4 = 5;
    puVar3 = (undefined8 *)(param_1 + 0x70);
    do {
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar2 = (undefined2 *)FUN_14018b280(0x10);
        puVar3[-1] = puVar2;
        *puVar3 = puVar2;
        puVar3[1] = puVar2 + 8;
        if (puVar2 != (undefined2 *)0x0) {
            *puVar2 = 0;
        }
        uVar1 = DAT_140c63664;
        puVar3[-4] = 0;
        *(undefined4 *)((longlong)puVar3 + -0x14) = 0x3f800000;
        *(undefined4 *)(puVar3 + -3) = uVar1;
        puVar3 = puVar3 + 6;
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return param_1;
}



void FUN_140771ad0(longlong param_1)

{
    longlong lVar1;

    FUN_140774790();
    FUN_140772560(param_1);
    FUN_140774990(param_1);
    FUN_140008410(param_1 + 0x330);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x338),0);
    lVar1 = *(longlong *)(param_1 + 800);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_140538480(param_1 + 0x1b0);
    FUN_140538480(param_1 + 0x40);
    FUN_140538520(param_1 + 0x30);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x38),0);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140771b60(longlong param_1,longlong param_2,float *param_3)

{
    int *piVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    double *pdVar4;
    bool bVar5;
    uint uVar6;
    undefined8 uVar7;
    float *pfVar8;
    longlong lVar9;
    int iVar10;
    int iVar11;
    undefined8 *puVar12;
    ulonglong uVar13;
    longlong lVar14;
    undefined4 extraout_XMM0_Da;
    double dVar15;
    undefined auVar16 [16];
    undefined extraout_XMM0 [16];
    undefined auVar18 [16];
    undefined auVar19 [16];
    float fVar20;
    undefined auVar21 [16];
    undefined auVar22 [16];
    float fVar23;
    float fVar24;
    float fVar25;
    undefined4 uVar26;
    undefined4 uVar27;
    float fVar28;
    undefined8 local_res10;
    int local_res18;
    int iStackX28;
    int local_res20;
    int iStackX36;
    int local_f8;
    int iStack244;
    undefined **local_e8;
    uint uStack224;
    undefined4 uStack220;
    longlong local_d8;
    undefined4 uStack208;
    undefined4 uStack204;
    ulonglong local_c8;
    undefined4 local_c0;
    undefined4 uStack188;
    undefined local_b8 [16];
    undefined local_a8 [8];
    longlong local_a0;
    undefined local_88 [16];
    undefined local_78 [56];
    undefined auVar17 [12];

    if (*(longlong **)(param_1 + 8) == (longlong *)0x0) {
        local_e8._0_4_ = _DAT_140c784e0;
        uStack224 = uRam0000000140c784e8;
        uStack220 = uRam0000000140c784ec;
        local_d8._0_4_ = _DAT_140c784f0;
        uStack204 = uRam0000000140c784fc;
    }
    else {
        uVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
        FUN_14044a3b0(&local_e8,uVar7);
    }
    local_e8 = &PTR_FUN_140b569f0;
    uStack208 = 1;
    fVar28 = (((float)local_d8 - local_e8._0_4_) / ((float)local_d8 - local_e8._0_4_)) * 20.0;
    fVar28 = fVar28 * fVar28;
    local_d8 = param_2;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar12 = *(undefined8 **)(param_2 + 0x10);
    uVar7 = FUN_14005c1b0(param_2,0);
    *(undefined4 *)(puVar12 + 1) = 5;
    *puVar12 = uVar7;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    uStack224 = FUN_1400578c0();
    fVar20 = (DAT_140c3b738 + param_3[2]) / _DAT_140c66f48 + 1.0;
    local_b8 = ZEXT1216(CONCAT48(extraout_XMM0_Da,
                                 CONCAT44(fVar20,(DAT_140c3b738 + *param_3) / DAT_140c66f1c + 0.5))) &
               (undefined  [16])0xffffffffffffffff;
    lVar9 = CONCAT44(fVar20,fVar20);
    auVar21 = CONCAT412(fVar20,CONCAT48(fVar20,lVar9));
    iVar10 = (int)fVar20;
    uVar6 = uStack224;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar20)) {
        uVar6 = movmskps(uStack224,
                         CONCAT88(SUB168(CONCAT412(fVar20,CONCAT48(fVar20,lVar9)) >> 0x40,0),
                                  (ulonglong)(uint)fVar20 | lVar9 << 0x20));
        uVar6 = uVar6 & 1;
        auVar21 = ZEXT416((uint)(float)(iVar10 - uVar6));
    }
    fVar25 = fVar20 * 0.5;
    fVar23 = fVar25 + local_b8._0_4_;
    auVar22 = CONCAT124(SUB1612(CONCAT412(fVar20,CONCAT48(fVar20,CONCAT44(fVar20,fVar25))) >> 0x20,0),
                        fVar23);
    iVar10 = (int)fVar23;
    if ((iVar10 != -0x80000000) && ((float)iVar10 != fVar23)) {
        uVar13 = SUB168(auVar22,0);
        uVar6 = movmskps(uVar6,CONCAT88(SUB168(CONCAT412(fVar20,CONCAT48(fVar20,uVar13)) >> 0x40,0),
                                        uVar13 & 0xffffffff | uVar13 << 0x20));
        uVar6 = uVar6 & 1;
        auVar22 = ZEXT416((uint)(float)(iVar10 - uVar6));
    }
    fVar20 = SUB164(auVar21,0);
    auVar17 = SUB1612(auVar21 >> 0x20,0);
    auVar16 = CONCAT124(auVar17,fVar20 * 2.0);
    fVar24 = SUB164(auVar22,0) - fVar20 * 2.0;
    uVar26 = SUB164(auVar22 >> 0x20,0);
    fVar23 = fVar24 * 0.3333333 + 1e-05;
    auVar22 = CONCAT124(SUB1612(CONCAT412(SUB164(auVar22 >> 0x60,0),
                                          CONCAT48(SUB164(auVar22 >> 0x40,0),CONCAT44(uVar26,fVar24)))
                                        >> 0x20,0),fVar23);
    iVar10 = (int)fVar23;
    if ((iVar10 != -0x80000000) && (auVar16 = ZEXT416((uint)(float)iVar10), (float)iVar10 != fVar23))
    {
        uVar13 = SUB168(auVar22,0);
        uVar6 = movmskps(uVar6,CONCAT88(SUB168(CONCAT412(uVar26,CONCAT48(uVar26,uVar13)) >> 0x40,0),
                                        uVar13 & 0xffffffff | uVar13 << 0x20));
        uVar6 = uVar6 & 1;
        auVar22 = ZEXT416((uint)(float)(iVar10 - uVar6));
    }
    auVar18 = ZEXT416((uint)(local_b8._0_4_ - fVar25)) & (undefined  [16])0xffffffffffffffff;
    iVar10 = (int)SUB164(auVar18,0);
    fVar23 = SUB164(auVar22,0) * 3.0;
    if ((iVar10 != -0x80000000) &&
        (auVar16 = ZEXT416((uint)(float)iVar10), (float)iVar10 != SUB164(auVar18,0))) {
        uVar6 = movmskps(uVar6,ZEXT816(SUB168(auVar18,0) | SUB168(auVar18,0) << 0x20));
        uVar6 = uVar6 & 1;
        auVar18 = ZEXT416((uint)(float)(iVar10 - uVar6));
    }
    fVar23 = (((SUB164(auVar18,0) - fVar20) - fVar23) + 1.0 + (fVar24 - fVar23)) * 0.3333333 + 1e-05;
    auVar19 = CONCAT124(SUB1612(auVar18 >> 0x20,0),fVar23);
    iVar10 = (int)fVar23;
    if ((iVar10 != -0x80000000) && (auVar16 = ZEXT416((uint)(float)iVar10), (float)iVar10 != fVar23))
    {
        uVar6 = movmskps(uVar6,CONCAT88(SUB168(auVar18 >> 0x40,0),
                                        SUB168(auVar19,0) | SUB168(auVar19,0) << 0x20) &
                               (undefined  [16])0xffffffffffffffff);
        auVar19 = ZEXT416((uint)(float)(iVar10 - (uVar6 & 1)));
    }
    fVar23 = (fVar20 - SUB164(auVar19,0)) * 0.5;
    auVar18 = CONCAT124(auVar17,fVar23);
    iVar11 = (int)fVar23;
    iVar10 = (int)(SUB164(auVar22,0) * 2.0 + fVar20 + SUB164(auVar19,0));
    if ((iVar11 != -0x80000000) && (auVar16 = ZEXT416((uint)(float)iVar11), (float)iVar11 != fVar23))
    {
        uVar26 = SUB164(auVar21 >> 0x20,0);
        uVar13 = SUB168(auVar18,0);
        uVar6 = movmskps(iVar10,CONCAT88(SUB168(CONCAT412(uVar26,CONCAT48(uVar26,uVar13)) >> 0x40,0),
                                         uVar13 & 0xffffffff | uVar13 << 0x20));
        auVar18 = ZEXT416((uint)(float)(iVar11 - (uVar6 & 1)));
    }
    uVar26 = 0;
    uVar27 = 0;
    local_c8 = 0;
    local_res10 = CONCAT44((int)SUB164(auVar18,0),iVar10);
    lVar9 = param_2;
    if (*(longlong *)(param_1 + 0x328) != 0) {
        do {
            bVar5 = false;
            piVar1 = *(int **)(*(longlong *)(param_1 + 800) + local_c8 * 8);
            plVar2 = *(longlong **)(piVar1 + 0x18);
            if (plVar2 == (longlong *)0x0) {
                pfVar8 = (float *)local_88;
                local_88 = auVar16 & (undefined  [16])0x0;
            }
            else {
                pfVar8 = (float *)(**(code **)(*plVar2 + 0x10))(plVar2,local_78);
            }
            fVar20 = *pfVar8 - *param_3;
            fVar23 = pfVar8[2] - param_3[2];
            local_b8 = CONCAT412(pfVar8[3] - param_3[3],
                                 CONCAT48(fVar23,CONCAT44(pfVar8[1] - param_3[1],fVar20)));
            local_b8 = CONCAT88(local_b8._8_8_,(ulonglong)(uint)fVar20) &
                    (undefined  [16])0xffffffffffffffff;
            auVar16 = ZEXT816(0) & (undefined  [16])0xffffffffffffffff;
            if (fVar20 * fVar20 + 0.0 + fVar23 * fVar23 < fVar28) {
                LAB_140771f1c:
                if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_2);
                }
                puVar12 = *(undefined8 **)(param_2 + 0x10);
                uVar7 = FUN_14005c1b0(param_2,0,0);
                *(undefined4 *)(puVar12 + 1) = 5;
                *puVar12 = uVar7;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                iVar11 = FUN_1400578c0(param_2);
                iVar10 = *piVar1;
                uVar6 = iVar11 - 1;
                lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                if (uVar6 < *(uint *)(lVar9 + 0x38)) {
                    puVar12 = (undefined8 *)((longlong)(iVar11 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
                }
                else {
                    dVar15 = (double)iVar11;
                    if (dVar15 == (double)CONCAT44(uVar27,uVar26)) {
                        puVar12 = *(undefined8 **)(lVar9 + 0x20);
                    }
                    else {
                        iStack244 = (int)((ulonglong)dVar15 >> 0x20);
                        local_f8 = SUB84(dVar15,0);
                        puVar12 = (undefined8 *)
                                (*(longlong *)(lVar9 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                                  (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    do {
                        if ((*(int *)(puVar12 + 3) == 3) && (dVar15 == (double)puVar12[2])) goto LAB_140771fee;
                        puVar12 = (undefined8 *)puVar12[4];
                    } while (puVar12 != (undefined8 *)0x0);
                    puVar12 = &DAT_140a12138;
                }
                LAB_140771fee:
                puVar3 = *(undefined8 **)(param_2 + 0x10);
                *puVar3 = *puVar12;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar12 + 1);
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_a8,&DAT_140b4f0c4);
                lVar9 = *(longlong *)(lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                }
                else {
                    lVar14 = -1;
                    do {
                        lVar14 = lVar14 + 1;
                    } while (*(char *)(lVar9 + lVar14) != '\0');
                    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_2);
                    }
                    puVar12 = *(undefined8 **)(param_2 + 0x10);
                    uVar7 = FUN_140062650(param_2,lVar9,lVar14);
                    *(undefined4 *)(puVar12 + 1) = 4;
                    *puVar12 = uVar7;
                }
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                if (local_a0 != 0) {
                    FUN_14018b900(local_a0,0);
                }
                pdVar4 = *(double **)(param_2 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)iVar10;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                uVar7 = FUN_1400580e0(param_2,0xfffffffd);
                FUN_14005ea50(param_2,uVar7,*(longlong *)(param_2 + 0x10) + -0x20,
                              *(longlong *)(param_2 + 0x10) + -0x10);
                lVar9 = *(longlong *)(param_2 + 0x10);
                *(undefined **)(param_2 + 0x10) = &DAT_ffffffffffffffd0 + lVar9;
                lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                iVar10 = piVar1[1];
                if (uVar6 < *(uint *)(lVar14 + 0x38)) {
                    puVar12 = (undefined8 *)((longlong)(iVar11 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
                }
                else {
                    dVar15 = (double)iVar11;
                    if (dVar15 == (double)CONCAT44(uVar27,uVar26)) {
                        puVar12 = *(undefined8 **)(lVar14 + 0x20);
                    }
                    else {
                        iStack244 = (int)((ulonglong)dVar15 >> 0x20);
                        local_f8 = SUB84(dVar15,0);
                        puVar12 = (undefined8 *)
                                (*(longlong *)(lVar14 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(iStack244 + local_f8) %
                                  (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    do {
                        if ((*(int *)(puVar12 + 3) == 3) && (dVar15 == (double)puVar12[2])) goto LAB_140772161;
                        puVar12 = (undefined8 *)puVar12[4];
                    } while (puVar12 != (undefined8 *)0x0);
                    puVar12 = &DAT_140a12138;
                }
                LAB_140772161:
                *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar9) = *puVar12;
                *(undefined4 *)(lVar9 + -0x28) = *(undefined4 *)(puVar12 + 1);
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_a8,L"eType");
                lVar9 = *(longlong *)(lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                }
                else {
                    lVar14 = -1;
                    do {
                        lVar14 = lVar14 + 1;
                    } while (*(char *)(lVar9 + lVar14) != '\0');
                    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_2);
                    }
                    puVar12 = *(undefined8 **)(param_2 + 0x10);
                    uVar7 = FUN_140062650(param_2,lVar9,lVar14);
                    *(undefined4 *)(puVar12 + 1) = 4;
                    *puVar12 = uVar7;
                }
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                if (local_a0 != 0) {
                    FUN_14018b900(local_a0,0);
                }
                pdVar4 = *(double **)(param_2 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)iVar10;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                uVar7 = FUN_1400580e0(param_2,0xfffffffd);
                FUN_14005ea50(param_2,uVar7,*(longlong *)(param_2 + 0x10) + -0x20,
                              *(longlong *)(param_2 + 0x10) + -0x10);
                lVar9 = *(longlong *)(param_2 + 0x10);
                *(undefined **)(param_2 + 0x10) = &DAT_ffffffffffffffd0 + lVar9;
                lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                iVar10 = piVar1[4];
                if (uVar6 < *(uint *)(lVar14 + 0x38)) {
                    puVar12 = (undefined8 *)((longlong)(iVar11 + -1) * 0x10 + *(longlong *)(lVar14 + 0x18));
                }
                else {
                    dVar15 = (double)iVar11;
                    if (dVar15 == (double)CONCAT44(uVar27,uVar26)) {
                        puVar12 = *(undefined8 **)(lVar14 + 0x20);
                    }
                    else {
                        iStackX36 = (int)((ulonglong)dVar15 >> 0x20);
                        local_res20 = SUB84(dVar15,0);
                        puVar12 = (undefined8 *)
                                (*(longlong *)(lVar14 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(iStackX36 + local_res20) %
                                  (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    do {
                        if ((*(int *)(puVar12 + 3) == 3) && (dVar15 == (double)puVar12[2])) goto LAB_1407722d1;
                        puVar12 = (undefined8 *)puVar12[4];
                    } while (puVar12 != (undefined8 *)0x0);
                    puVar12 = &DAT_140a12138;
                }
                LAB_1407722d1:
                *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar9) = *puVar12;
                *(undefined4 *)(lVar9 + -0x28) = *(undefined4 *)(puVar12 + 1);
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_a8,L"userData");
                lVar9 = *(longlong *)(lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                }
                else {
                    lVar14 = -1;
                    do {
                        lVar14 = lVar14 + 1;
                    } while (*(char *)(lVar9 + lVar14) != '\0');
                    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_2);
                    }
                    puVar12 = *(undefined8 **)(param_2 + 0x10);
                    uVar7 = FUN_140062650(param_2,lVar9,lVar14);
                    *(undefined4 *)(puVar12 + 1) = 4;
                    *puVar12 = uVar7;
                }
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                if (local_a0 != 0) {
                    FUN_14018b900(local_a0,0);
                }
                lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                if (iVar10 - 1U < *(uint *)(lVar9 + 0x38)) {
                    puVar12 = (undefined8 *)((longlong)(iVar10 + -1) * 0x10 + *(longlong *)(lVar9 + 0x18));
                }
                else {
                    dVar15 = (double)iVar10;
                    if (dVar15 == (double)CONCAT44(uVar27,uVar26)) {
                        puVar12 = *(undefined8 **)(lVar9 + 0x20);
                    }
                    else {
                        local_res10._4_4_ = (int)((ulonglong)dVar15 >> 0x20);
                        local_res10._0_4_ = SUB84(dVar15,0);
                        puVar12 = (undefined8 *)
                                (*(longlong *)(lVar9 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(local_res10._4_4_ + (int)local_res10) %
                                  (longlong)((1 << (*(byte *)(lVar9 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    do {
                        if ((*(int *)(puVar12 + 3) == 3) && (dVar15 == (double)puVar12[2])) goto LAB_1407723ee;
                        puVar12 = (undefined8 *)puVar12[4];
                    } while (puVar12 != (undefined8 *)0x0);
                    puVar12 = &DAT_140a12138;
                }
                LAB_1407723ee:
                puVar3 = *(undefined8 **)(param_2 + 0x10);
                *puVar3 = *puVar12;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar12 + 1);
                lVar9 = *(longlong *)(param_2 + 0x10);
                *(longlong *)(param_2 + 0x10) = lVar9 + 0x10;
                FUN_14005ea50(param_2,lVar9 + -0x20,lVar9 + -0x10,lVar9);
                *(longlong *)(param_2 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
                FUN_1400fb1d0(&local_e8);
                FUN_1400579e0(param_2);
                auVar16 = extraout_XMM0;
            }
            else if ((piVar1[0x36] != 0) && (piVar1[0x37] != 0)) {
                uVar13 = 0;
                if (*(ulonglong *)(piVar1 + 0x12) != 0) {
                    do {
                        if (bVar5) goto LAB_140771f1c;
                        local_c0 = *(undefined4 *)(*(longlong *)(piVar1 + 0x10) + (longlong)(int)uVar13 * 0xc);
                        uStack188 = *(undefined4 *)
                                (*(longlong *)(piVar1 + 0x10) + 4 + (longlong)(int)uVar13 * 0xc);
                        if (CONCAT44(uStack188,local_c0) == local_res10) {
                            bVar5 = true;
                        }
                        uVar13 = uVar13 + 1;
                    } while (uVar13 < *(ulonglong *)(piVar1 + 0x12));
                    if (bVar5) goto LAB_140771f1c;
                }
            }
            local_c8 = local_c8 + 1;
            lVar9 = local_d8;
        } while (local_c8 < *(ulonglong *)(param_1 + 0x328));
    }
    lVar14 = *(longlong *)(*(longlong *)(lVar9 + 0x20) + 0xa0);
    if (uStack224 - 1 < *(uint *)(lVar14 + 0x38)) {
        puVar12 = (undefined8 *)((longlong)(int)(uStack224 - 1) * 0x10 + *(longlong *)(lVar14 + 0x18));
    }
    else {
        dVar15 = (double)uStack224;
        if (dVar15 == (double)CONCAT44(uVar27,uVar26)) {
            puVar12 = *(undefined8 **)(lVar14 + 0x20);
        }
        else {
            iStackX28 = (int)((ulonglong)dVar15 >> 0x20);
            local_res18 = SUB84(dVar15,0);
            puVar12 = (undefined8 *)
                    (*(longlong *)(lVar14 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX28 + local_res18) %
                      (longlong)((1 << (*(byte *)(lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar12 + 3) == 3) && (dVar15 == (double)puVar12[2])) goto LAB_140772521;
            puVar12 = (undefined8 *)puVar12[4];
        } while (puVar12 != (undefined8 *)0x0);
        puVar12 = &DAT_140a12138;
    }
    LAB_140772521:
    puVar3 = *(undefined8 **)(lVar9 + 0x10);
    *puVar3 = *puVar12;
    uVar26 = *(undefined4 *)(puVar12 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar26;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400579e0(lVar9,uVar26,uStack224);
    return 1;
}



void FUN_140772560(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x328) == 0) {
        *(undefined8 *)(param_1 + 0x328) = 0;
        return;
    }
    do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 800) + uVar2 * 8);
        if (lVar1 != 0) {
            FUN_14076f7c0(lVar1);
            FUN_14018b900(lVar1,0);
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < *(ulonglong *)(param_1 + 0x328));
    *(undefined8 *)(param_1 + 0x328) = 0;
    return;
}



void FUN_1407725e0(longlong param_1,int param_2)

{
    longlong lVar1;
    ulonglong uVar2;

    uVar2 = 0;
    if (*(longlong *)(param_1 + 0x328) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 800) + uVar2 * 8);
            if (*(int *)(lVar1 + 4) == param_2) {
                FUN_14076f7c0(lVar1);
                FUN_14018b900(lVar1,0);
                FUN_140007270(param_1 + 800);
            }
            else {
                uVar2 = uVar2 + 1;
            }
        } while (uVar2 < *(ulonglong *)(param_1 + 0x328));
    }
    return;
}



void FUN_140772670(longlong param_1,longlong *param_2,undefined4 param_3)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined *puVar4;
    bool bVar5;
    int iVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    longlong lVar9;

    uVar8 = 0;
    if (*(longlong *)(param_1 + 0x328) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 800) + uVar8 * 8);
            iVar6 = (**(code **)(*(longlong *)(lVar2 + 8) + 8))(lVar2 + 8);
            if (((iVar6 != 0) && (iVar6 = (**(code **)(*param_2 + 8))(param_2), iVar6 != 0)) &&
                (lVar9 = *(longlong *)(lVar2 + 0x18), lVar9 == param_2[2])) {
                puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                              *(undefined4 *)(lVar2 + 0x10));
                puVar3 = *(undefined8 **)(lVar9 + 0x10);
                *puVar3 = *puVar7;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                lVar9 = param_2[2];
                puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 1));
                puVar3 = *(undefined8 **)(lVar9 + 0x10);
                *puVar3 = *puVar7;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                puVar4 = *(undefined **)(*(longlong *)(lVar2 + 0x18) + 0x10);
                if (((puVar4 == &DAT_140a12148) || (puVar4 == &UNK_140a12158)) ||
                    ((*(int *)(puVar4 + -8) != *(int *)(&DAT_ffffffffffffffe8 + (longlong)puVar4) ||
                (iVar6 = FUN_14005f0d0(), iVar6 == 0)))) {
                    bVar5 = false;
                }
                else {
                    bVar5 = true;
                }
                plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
                *plVar1 = *plVar1 + -0x20;
                if (bVar5) {
                    *(undefined4 *)(lVar2 + 0xd8) = param_3;
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong *)(param_1 + 0x328));
    }
    return;
}



void FUN_1407727c0(longlong param_1,longlong *param_2,undefined4 param_3)

{
    longlong *plVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined *puVar4;
    bool bVar5;
    int iVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    longlong lVar9;

    uVar8 = 0;
    if (*(longlong *)(param_1 + 0x328) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 800) + uVar8 * 8);
            iVar6 = (**(code **)(*(longlong *)(lVar2 + 8) + 8))(lVar2 + 8);
            if (((iVar6 != 0) && (iVar6 = (**(code **)(*param_2 + 8))(param_2), iVar6 != 0)) &&
                (lVar9 = *(longlong *)(lVar2 + 0x18), lVar9 == param_2[2])) {
                puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                              *(undefined4 *)(lVar2 + 0x10));
                puVar3 = *(undefined8 **)(lVar9 + 0x10);
                *puVar3 = *puVar7;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                lVar9 = param_2[2];
                puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 1));
                puVar3 = *(undefined8 **)(lVar9 + 0x10);
                *puVar3 = *puVar7;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                puVar4 = *(undefined **)(*(longlong *)(lVar2 + 0x18) + 0x10);
                if (((puVar4 == &DAT_140a12148) || (puVar4 == &UNK_140a12158)) ||
                    ((*(int *)(puVar4 + -8) != *(int *)(&DAT_ffffffffffffffe8 + (longlong)puVar4) ||
                (iVar6 = FUN_14005f0d0(), iVar6 == 0)))) {
                    bVar5 = false;
                }
                else {
                    bVar5 = true;
                }
                plVar1 = (longlong *)(*(longlong *)(lVar2 + 0x18) + 0x10);
                *plVar1 = *plVar1 + -0x20;
                if (bVar5) {
                    *(undefined4 *)(lVar2 + 0xdc) = param_3;
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong *)(param_1 + 0x328));
    }
    return;
}



longlong FUN_140772910(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,longlong *param_10)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong local_res20;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;

    lVar5 = FUN_14018b280(0x40);
    if (lVar5 == 0) {
        plVar6 = (longlong *)0x0;
    }
    else {
        plVar6 = (longlong *)FUN_14076eeb0(lVar5,param_5,param_6,param_7);
    }
    lVar5 = 0;
    local_res20 = 0;
    if (*(longlong *)(param_1 + 0x328) != 0) {
        do {
            local_58 = &PTR_FUN_140b56a08;
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 800) + local_res20 * 8);
            local_48 = param_10[2];
            local_50 = 0xfffffffe;
            iVar4 = (**(code **)(*param_10 + 8))(param_10);
            if (iVar4 != 0) {
                lVar8 = param_10[2];
                puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_10 + 1));
                puVar2 = *(undefined8 **)(lVar8 + 0x10);
                *puVar2 = *puVar7;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                local_50 = FUN_1400578c0(local_48);
            }
            iVar4 = FUN_14076f910(lVar1,param_2,&local_58,plVar6);
            lVar8 = lVar5;
            if ((iVar4 != 0) && (lVar8 = lVar1, lVar5 != 0)) {
                uVar11 = 0;
                if (*(longlong *)(lVar1 + 0x38) != 0) {
                    do {
                        plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0x30) + uVar11 * 8);
                        if (plVar3 != plVar6) {
                            local_48 = param_10[2];
                            local_58 = &PTR_FUN_140b56a08;
                            local_50 = 0xfffffffe;
                            iVar4 = (**(code **)(*param_10 + 8))(param_10);
                            if (iVar4 != 0) {
                                lVar8 = param_10[2];
                                puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                                              *(undefined4 *)(param_10 + 1));
                                puVar2 = *(undefined8 **)(lVar8 + 0x10);
                                *puVar2 = *puVar7;
                                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
                                *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                                local_50 = FUN_1400578c0(local_48);
                            }
                            FUN_14076f910(lVar5,param_2,&local_58,plVar3);
                        }
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < *(ulonglong *)(lVar1 + 0x38));
                }
                FUN_14076f7c0(lVar1);
                FUN_14018b900(lVar1,0);
                FUN_140007270(param_1 + 800);
                local_res20 = local_res20 - 1;
                lVar8 = lVar5;
            }
            local_res20 = local_res20 + 1;
            lVar5 = lVar8;
        } while (local_res20 < *(ulonglong *)(param_1 + 0x328));
        if (lVar8 != 0) goto LAB_140772c14;
    }
    lVar5 = FUN_14018b280(0xe0,0);
    if (lVar5 == 0) {
        lVar8 = 0;
    }
    else {
        lVar8 = FUN_14076f600(lVar5,param_2,param_3,param_8,param_9,param_10);
    }
    uVar9 = FUN_1400f9dd0(&local_58,param_10);
    FUN_14076f910(lVar8,param_2,uVar9,plVar6);
    lVar1 = *(longlong *)(param_1 + 0x328);
    lVar5 = lVar1 + 1;
    lVar10 = FUN_14018db00(*(undefined8 *)(param_1 + 800),lVar5,8);
    *(longlong *)(lVar10 + lVar1 * 8) = lVar8;
    if (*(longlong *)(param_1 + 800) != lVar10) {
        FUN_1407db590(lVar10,*(longlong *)(param_1 + 800),*(longlong *)(param_1 + 0x328) << 3);
        lVar1 = *(longlong *)(param_1 + 800);
        if (lVar1 != 0) {
            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        }
        *(longlong *)(param_1 + 800) = lVar10;
    }
    *(longlong *)(param_1 + 0x328) = lVar5;
    LAB_140772c14:
    if (plVar6 != (longlong *)0x0) {
        lVar5 = plVar6[4];
        if (lVar5 != 0) {
            (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
        }
        lVar5 = *plVar6;
        if (lVar5 != 0) {
            (**(code **)(*(longlong *)(lVar5 + -0x10) + 8))(lVar5 + -0x10);
        }
        FUN_14018b900(plVar6,0);
    }
    return lVar8;
}



void FUN_140772c80(longlong param_1,float **param_2,int *param_3)

{
    byte bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    uint uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    undefined4 *puVar11;
    longlong lVar12;
    float *pfVar13;
    longlong lVar14;
    undefined *puVar15;
    undefined *puVar16;
    undefined *puVar17;
    undefined **ppuVar18;
    undefined *puVar19;
    undefined *puVar20;
    ulonglong uVar21;
    uint uVar22;
    ulonglong uVar23;
    undefined local_b8 [8];
    undefined *local_b0;
    longlong local_a8;
    uint local_98;
    undefined4 uStack148;
    ulonglong local_90;
    undefined8 local_88;
    uint local_80;
    uint uStack124;
    undefined *local_78;
    undefined *local_70;
    undefined *local_68;
    undefined *local_60;
    undefined8 local_58;
    undefined8 local_50;

    puVar15 = (undefined *)FUN_14018b280();
    local_a8 = 0;
    *puVar15 = 0;
    *(undefined8 *)(puVar15 + 8) = 0;
    *(undefined **)(puVar15 + 0x10) = puVar15;
    *(undefined **)(puVar15 + 0x18) = puVar15;
    iVar2 = param_3[3];
    iVar3 = param_3[2];
    iVar4 = param_3[1];
    iVar5 = *param_3;
    local_90 = 0;
    local_b0 = puVar15;
    if (*(longlong *)(param_1 + 0x328) != 0) {
        do {
            puVar11 = *(undefined4 **)(*(longlong *)(param_1 + 800) + local_90 * 8);
            if ((puVar11[0x36] != 0) && (puVar11[0x37] != 0)) {
                uVar22 = puVar11[1];
                uVar6 = *puVar11;
                uVar23 = 0;
                if (*(longlong *)(puVar11 + 0xe) != 0) {
                    do {
                        uVar21 = 0;
                        lVar12 = *(longlong *)(*(longlong *)(puVar11 + 0xc) + uVar23 * 8);
                        if (*(longlong *)(lVar12 + 0x28) != 0) {
                            do {
                                uVar7 = *(uint *)(*(longlong *)(lVar12 + 0x20) + uVar21 * 8);
                                uVar8 = *(uint *)(*(longlong *)(lVar12 + 0x20) + 4 + uVar21 * 8);
                                if ((((*param_3 <= (int)uVar7) && ((int)uVar7 < param_3[2])) &&
                                     (param_3[1] <= (int)uVar8)) && ((int)uVar8 < param_3[3])) {
                                    puVar20 = *(undefined **)(puVar15 + 8);
                                    puVar16 = puVar20;
                                    puVar19 = puVar15;
                                    if (puVar20 == (undefined *)0x0) {
                                        LAB_140772e28:
                                        local_68 = puVar15;
                                        ppuVar18 = &local_68;
                                    }
                                    else {
                                        do {
                                            if ((*(uint *)(puVar16 + 0x20) < uVar7) ||
                                                ((*(uint *)(puVar16 + 0x20) <= uVar7 && (*(uint *)(puVar16 + 0x24) < uVar8)
                                                ))) {
                                                puVar17 = *(undefined **)(puVar16 + 0x18);
                                            }
                                            else {
                                                puVar17 = *(undefined **)(puVar16 + 0x10);
                                                puVar19 = puVar16;
                                            }
                                            puVar16 = puVar17;
                                        } while (puVar17 != (undefined *)0x0);
                                        if (((puVar19 == puVar15) || (uVar7 < *(uint *)(puVar19 + 0x20))) ||
                                            ((uVar7 <= *(uint *)(puVar19 + 0x20) && (uVar8 < *(uint *)(puVar19 + 0x24))))
                                                ) goto LAB_140772e28;
                                        local_78 = puVar19;
                                        ppuVar18 = &local_78;
                                    }
                                    puVar16 = *ppuVar18;
                                    puVar19 = puVar15;
                                    local_80 = uVar7;
                                    uStack124 = uVar8;
                                    if (puVar16 == puVar15) {
                                        while (puVar16 = puVar20, puVar16 != (undefined *)0x0) {
                                            if ((*(uint *)(puVar16 + 0x20) < uVar7) ||
                                                ((*(uint *)(puVar16 + 0x20) <= uVar7 && (*(uint *)(puVar16 + 0x24) < uVar8)
                                                ))) {
                                                puVar20 = *(undefined **)(puVar16 + 0x18);
                                            }
                                            else {
                                                puVar20 = *(undefined **)(puVar16 + 0x10);
                                                puVar19 = puVar16;
                                            }
                                        }
                                        local_98 = uVar22;
                                        uStack148 = uVar6;
                                        if (((puVar19 == puVar15) || (uVar7 < *(uint *)(puVar19 + 0x20))) ||
                                            ((uVar7 <= *(uint *)(puVar19 + 0x20) && (uVar8 < *(uint *)(puVar19 + 0x24))))
                                                ) {
                                            local_88 = 0;
                                            local_58 = CONCAT44(uVar8,uVar7);
                                            local_50 = 0;
                                            local_60 = puVar19;
                                            FUN_140776900(local_b8);
                                            puVar19 = local_70;
                                        }
                                        *(ulonglong *)(puVar19 + 0x28) = CONCAT44(uStack148,local_98);
                                        puVar15 = local_b0;
                                    }
                                    else if (uVar22 <= *(uint *)(puVar16 + 0x28)) {
                                        *(uint *)(puVar16 + 0x28) = uVar22;
                                        *(undefined4 *)(puVar16 + 0x2c) = uVar6;
                                        puVar15 = local_b0;
                                    }
                                }
                                uVar21 = uVar21 + 1;
                            } while (uVar21 < *(ulonglong *)(lVar12 + 0x28));
                        }
                        uVar23 = uVar23 + 1;
                    } while (uVar23 < *(ulonglong *)(puVar11 + 0xe));
                }
            }
            local_90 = local_90 + 1;
        } while (local_90 < *(ulonglong *)(param_1 + 0x328));
    }
    uVar22 = 0;
    puVar20 = *(undefined **)(puVar15 + 0x10);
    if (puVar20 != puVar15) {
        do {
            pfVar13 = *param_2;
            uVar22 = uVar22 + 1;
            iVar9 = *(int *)(puVar20 + 0x24);
            iVar10 = param_3[1];
            *pfVar13 = (float)(ulonglong)(uint)(*(int *)(puVar20 + 0x20) - *param_3);
            pfVar13[1] = (float)(ulonglong)(uint)(iVar9 - iVar10);
            pfVar13[2] = 0.0;
            pfVar13[3] = 1.0;
            bVar1 = puVar20[0x2c];
            uVar7 = *(uint *)(puVar20 + 0x28);
            *param_2 = pfVar13 + 7;
            pfVar13[4] = (float)(((uVar7 | 0xffffff00) << 8 | (uint)bVar1) << 8);
            puVar15 = local_b0;
            if ((uint)((iVar2 - iVar4) * (iVar3 - iVar5)) <= uVar22) break;
            puVar15 = *(undefined **)(puVar20 + 0x18);
            if (puVar15 == (undefined *)0x0) {
                puVar15 = *(undefined **)(puVar20 + 8);
                if (puVar20 == *(undefined **)(puVar15 + 0x18)) {
                    do {
                        puVar20 = puVar15;
                        puVar15 = *(undefined **)(puVar20 + 8);
                    } while (puVar20 == *(undefined **)(puVar15 + 0x18));
                }
                if (*(undefined **)(puVar20 + 0x18) != puVar15) {
                    puVar20 = puVar15;
                }
            }
            else {
                for (puVar16 = *(undefined **)(puVar15 + 0x10); puVar20 = puVar15,
                        puVar16 != (undefined *)0x0; puVar16 = *(undefined **)(puVar16 + 0x10)) {
                    puVar15 = puVar16;
                }
            }
            puVar15 = local_b0;
        } while (puVar20 != local_b0);
    }
    if (local_a8 != 0) {
        lVar12 = *(longlong *)(puVar15 + 8);
        puVar20 = puVar15;
        puVar15 = local_b0;
        while (local_b0 = puVar15, lVar12 != 0) {
            FUN_1400083b0(local_b8,*(undefined8 *)(lVar12 + 0x18));
            lVar14 = *(longlong *)(lVar12 + 0x10);
            FUN_14018b900(lVar12,0);
            lVar12 = lVar14;
            puVar20 = local_b0;
            puVar15 = local_b0;
        }
        *(undefined **)(puVar20 + 0x10) = puVar20;
        *(undefined8 *)(puVar15 + 8) = 0;
        *(undefined **)(puVar15 + 0x18) = puVar15;
        local_a8 = 0;
    }
    FUN_14018b900(puVar15,0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140773080(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                   ulonglong param_5)

{
    uint uVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong *plVar8;
    longlong *plVar9;
    ulonglong uVar10;
    undefined4 in_XMM3_Da;
    int local_res18 [2];
    undefined4 local_res20 [2];
    ulonglong uVar11;
    ulonglong uVar12;
    int *piVar13;
    undefined4 *puVar14;
    float local_a8;
    float local_a4;
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
    undefined local_68 [16];
    float local_58;
    float local_54;
    float local_48;
    float local_44;

    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    *(undefined4 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    *(undefined4 *)(param_1 + 0x10) = in_XMM3_Da;
    uVar10 = 0;
    if (*(longlong *)(param_1 + 0x328) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 800) + uVar10 * 8);
            if (*(int *)(lVar2 + 0xd8) != 0) {
                if (*(int *)(lVar2 + 0xdc) == 0) {
                    plVar9 = *(longlong **)(lVar2 + 0x60);
                }
                else {
                    plVar9 = *(longlong **)(lVar2 + 0x68);
                }
                if (plVar9 != (longlong *)0x0) {
                    local_res20[0] = 0;
                    local_res18[0] = 0;
                    uVar11 = param_5;
                    FUN_140770fc0(plVar9,param_2);
                    uVar6 = (**(code **)(*plVar9 + 0x10))(plVar9,local_68);
                    puVar14 = local_res20;
                    piVar13 = local_res18;
                    uVar11 = uVar11 & 0xffffffff00000000;
                    uVar12 = param_5;
                    FUN_1407711c0(&local_a8,uVar6,param_2);
                    if ((local_res18[0] == 0) || ((*(byte *)(plVar9 + 0x2b) & 2) == 0)) {
                        uVar1 = *(uint *)(plVar9 + 0x2b);
                        if ((uVar1 & 0x10) == 0) {
                            if ((uVar1 & 8) == 0) {
                                uVar7 = 0;
                                if ((uVar1 & 4) == 0) goto LAB_1407732db;
                            }
                            else {
                                uVar7 = 1;
                            }
                        }
                        else {
                            uVar7 = 2;
                        }
                        local_48 = (float)(&DAT_140b4f258)[uVar7];
                        plVar8 = plVar9 + 0x14;
                        local_58 = local_a8 - local_48;
                        local_54 = local_a4 - local_48;
                        local_44 = local_48 + local_a4;
                        local_48 = local_48 + local_a8;
                        if (*(int *)(plVar9 + 0x2a) == 0) {
                            plVar8 = plVar9 + 0x12;
                        }
                        local_98 = *(undefined4 *)plVar8;
                        uStack148 = *(undefined4 *)((longlong)plVar8 + 4);
                        uStack144 = *(undefined4 *)(plVar8 + 1);
                        uStack140 = *(undefined4 *)((longlong)plVar8 + 0xc);
                        plVar8 = (longlong *)FUN_140770e90(plVar9);
                        if (*plVar8 != 0) {
                            FUN_140103e60(*plVar8,&local_58,&local_98,0,
                                          uVar11 & 0xffffffff00000000 |
                                          (ulonglong)
                                                  (uint)((DAT_140c63664 - *(float *)(plVar8 + 1)) *
                                                         *(float *)((longlong)plVar8 + 0xc)),uVar12,piVar13,puVar14);
                        }
                        if (plVar9[4] != 0) {
                            local_88 = _DAT_140c777d0;
                            uStack132 = uRam0000000140c777d4;
                            uStack128 = uRam0000000140c777d8;
                            uStack124 = uRam0000000140c777dc;
                            local_78 = 0x3f800000;
                            uStack116 = 0x3f800000;
                            uStack112 = 0x3f800000;
                            uStack108 = 0x3f800000;
                            (**(code **)(*DAT_140c65680 + 0x110))
                                    (DAT_140c65680,plVar9[4],0,0xffffffffffffffff,&local_58,5,&local_78,
                                     &local_88,1);
                        }
                    }
                }
            }
            LAB_1407732db:
            uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulonglong *)(param_1 + 0x328));
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140773320(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                   ulonglong param_5,int param_6)

{
    ulonglong uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    ulonglong uVar4;
    uint uVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    longlong *plVar8;
    longlong *plVar9;
    longlong *plVar10;
    longlong lVar11;
    ulonglong uVar12;
    longlong *plVar13;
    float fVar14;
    float fVar15;
    float in_XMM3_Da;
    undefined4 uVar16;
    float fVar17;
    undefined auStack664 [32];
    float *local_278;
    undefined8 local_270;
    int *local_268;
    float *local_260;
    undefined4 local_258;
    int local_248;
    float local_244;
    longlong local_240;
    float local_238;
    float local_234;
    float local_228;
    float fStack548;
    undefined8 uStack544;
    float local_218;
    float fStack532;
    undefined8 uStack528;
    undefined4 local_208;
    undefined4 uStack516;
    undefined4 uStack512;
    undefined4 uStack508;
    undefined local_1f8 [16];
    int local_1e8;
    int local_1e4;
    ulonglong local_1e0;
    int local_1d8;
    undefined4 uStack468;
    undefined4 uStack464;
    undefined4 uStack460;
    undefined4 local_1c8;
    undefined4 uStack452;
    undefined4 uStack448;
    undefined4 uStack444;
    float local_1b8;
    undefined4 uStack436;
    undefined4 uStack432;
    undefined4 uStack428;
    undefined4 local_1a8;
    undefined4 uStack420;
    undefined4 uStack416;
    undefined4 uStack412;
    int local_198;
    undefined4 uStack404;
    undefined4 uStack400;
    undefined4 uStack396;
    float local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    undefined4 local_178;
    undefined4 uStack372;
    undefined4 uStack368;
    undefined4 uStack364;
    int local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    float local_148;
    undefined4 uStack324;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined local_138 [16];
    undefined local_128 [64];
    undefined4 local_e8;
    float fStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    float local_d8;
    float fStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    ulonglong local_88;

    local_88 = DAT_140c0f7b0 ^ (ulonglong)auStack664;
    uVar16 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    local_1e0 = param_5;
    *(undefined4 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x24) = uVar16;
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    *(float *)(param_1 + 0x10) = in_XMM3_Da;
    plVar13 = (longlong *)**(longlong **)(param_1 + 0x38);
    if (plVar13 != *(longlong **)(param_1 + 0x38)) {
        uVar16 = 0x3f800000;
        fVar17 = 0.5;
        do {
            uVar1 = plVar13[4];
            if (uVar1 == 0) {
                puVar6 = (undefined8 *)0x0;
            }
            else {
                puVar6 = (undefined8 *)FUN_14018b280(uVar1 * 8 + 0x10,0);
                if (puVar6 == (undefined8 *)0x0) {
                    puVar6 = (undefined8 *)&DAT_00000010;
                }
                else {
                    *puVar6 = &PTR_LAB_140b55060;
                    puVar6[1] = uVar1;
                    puVar6 = puVar6 + 2;
                }
            }
            FUN_1407db590(puVar6,plVar13[3],uVar1 * 8);
            uVar4 = local_1e0;
            uVar12 = 0;
            if (uVar1 != 0) {
                do {
                    plVar8 = (longlong *)puVar6[uVar12];
                    if ((*(int *)(plVar8 + 0x2f) == 0) &&
                        (((uVar5 = *(uint *)(plVar8 + 0x2b) >> 5 & 1, uVar5 != 0 && (param_6 != 0)) ||
                          ((uVar5 == 0 && (param_6 == 0)))))) {
                        local_244 = 0.0;
                        local_278 = (float *)local_1e0;
                        local_248 = 0;
                        FUN_140770fc0(plVar8,param_2);
                        uVar7 = (**(code **)(*plVar8 + 0x10))(plVar8,local_138);
                        local_260 = &local_244;
                        local_268 = &local_248;
                        local_270 = uVar4;
                        local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000 |
                                              (ulonglong)(uint)in_XMM3_Da);
                        FUN_1407711c0(&local_238,uVar7,param_2);
                        if (local_248 != 0) {
                            if ((*(byte *)(plVar8 + 0x2b) & 2) == 0) {
                                (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
                                uStack528 = &local_238;
                                local_218 = local_244;
                                local_228 = 1.0;
                                uStack544 = 0;
                                uStack528._4_4_ = (undefined4)((ulonglong)uStack528 >> 0x20);
                                local_d8 = local_244;
                                fStack212 = fStack532;
                                uStack208 = (undefined4)uStack528;
                                uStack204 = uStack528._4_4_;
                                local_e8 = 0x3f800000;
                                fStack228 = fStack548;
                                uStack224 = 0;
                                uStack220 = 0;
                                FUN_1401b0840(&local_e8,local_128);
                                (**(code **)(*DAT_140c65680 + 0x58))();
                                plVar9 = plVar8 + 0x14;
                                if (*(int *)(plVar8 + 0x2a) == 0) {
                                    plVar9 = plVar8 + 0x12;
                                }
                                local_1a8 = *(undefined4 *)plVar9;
                                uStack420 = *(undefined4 *)((longlong)plVar9 + 4);
                                uStack416 = *(undefined4 *)(plVar9 + 1);
                                uStack412 = *(undefined4 *)((longlong)plVar9 + 0xc);
                                plVar8 = (longlong *)FUN_140770e90(plVar8);
                                if (*plVar8 != 0) {
                                    FUN_1401039e0(*plVar8,&DAT_140c77760,&local_1a8);
                                }
                                (**(code **)(*DAT_140c65680 + 0x48))();
                            }
                            break;
                        }
                        uVar5 = *(uint *)(plVar8 + 0x2b);
                        if ((uVar5 & 1) != 0) break;
                        if ((uVar5 & 0x40) == 0) {
                            if ((uVar5 & 0x1c) == 0) {
                                (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
                                plVar9 = (longlong *)FUN_140770e90(plVar8);
                                plVar10 = (longlong *)FUN_140770e90(plVar8);
                                lVar11 = *plVar10;
                                if (lVar11 == 0) {
                                    local_240 = 0;
                                }
                                else {
                                    if (0 < (int)(*(longlong *)(lVar11 + 0x60) - *(longlong *)(lVar11 + 0x58) >> 3)) {
                                        lVar11 = **(longlong **)(lVar11 + 0x58);
                                    }
                                    lVar11 = FUN_140101180(lVar11,plVar10,0);
                                    local_240 = *(longlong *)(lVar11 + 0x48);
                                }
                                if (local_240 == _DAT_140c77760) {
                                    FUN_140109840(plVar9,&local_1e8);
                                    uStack528 = (float *)CONCAT44(uRam0000000140c7842c,uRam0000000140c78428);
                                    uStack544 = CONCAT44(uRam0000000140c7841c,uRam0000000140c78418);
                                    fVar15 = local_238 - (float)local_1e8 * fVar17;
                                    fVar14 = local_234 - (float)local_1e4 * fVar17;
                                }
                                else {
                                    uStack544 = CONCAT44(uRam0000000140c7841c,uRam0000000140c78418);
                                    uStack528 = (float *)CONCAT44(uRam0000000140c7842c,uRam0000000140c78428);
                                    fVar15 = local_238;
                                    fVar14 = local_234;
                                }
                                local_1f8 = CONCAT412(uVar16,ZEXT812(CONCAT44(fVar14,fVar15)));
                                local_228 = _DAT_140c78410;
                                fStack548 = fRam0000000140c78414;
                                local_218 = _DAT_140c78420;
                                fStack532 = fRam0000000140c78424;
                                local_208 = _DAT_140c78430;
                                uStack516 = uRam0000000140c78434;
                                uStack512 = uRam0000000140c78438;
                                uStack508 = uRam0000000140c7843c;
                                (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,&local_228);
                                plVar10 = plVar8 + 0x14;
                                if (*(int *)(plVar8 + 0x2a) == 0) {
                                    plVar10 = plVar8 + 0x12;
                                }
                                local_178 = *(undefined4 *)plVar10;
                                uStack372 = *(undefined4 *)((longlong)plVar10 + 4);
                                uStack368 = *(undefined4 *)(plVar10 + 1);
                                uStack364 = *(undefined4 *)((longlong)plVar10 + 0xc);
                                if (*plVar9 != 0) {
                                    FUN_1401039e0(*plVar9,&DAT_140c77760,&local_178);
                                }
                                if (plVar8[4] != 0) {
                                    local_258 = 1;
                                    local_260 = &local_188;
                                    local_228 = -100.0;
                                    local_188 = _DAT_140c777d0;
                                    uStack388 = uRam0000000140c777d4;
                                    uStack384 = uRam0000000140c777d8;
                                    uStack380 = uRam0000000140c777dc;
                                    local_168 = 0x3f800000;
                                    uStack356 = 0x3f800000;
                                    uStack352 = 0x3f800000;
                                    uStack348 = 0x3f800000;
                                    local_268 = &local_168;
                                    fStack548 = -100.0;
                                    local_278 = &local_228;
                                    local_218 = 100.0;
                                    fStack532 = 100.0;
                                    local_270 = CONCAT44(local_270._4_4_,5);
                                    (**(code **)(*DAT_140c65680 + 0x110))(DAT_140c65680,plVar8[4],0);
                                }
                                (**(code **)(*DAT_140c65680 + 0x48))();
                                break;
                            }
                            if ((uVar5 & 0x10) == 0) {
                                if ((uVar5 & 8) == 0) {
                                    if ((uVar5 & 4) == 0) break;
                                    lVar11 = 0;
                                }
                                else {
                                    lVar11 = 1;
                                }
                            }
                            else {
                                lVar11 = 2;
                            }
                            fStack532 = (float)(&DAT_140b4f258)[lVar11];
                            plVar9 = plVar8 + 0x14;
                            local_228 = local_238 - fStack532;
                            fStack548 = local_234 - fStack532;
                            local_218 = fStack532 + local_238;
                            fStack532 = fStack532 + local_234;
                            if (*(int *)(plVar8 + 0x2a) == 0) {
                                plVar9 = plVar8 + 0x12;
                            }
                            local_1c8 = *(undefined4 *)plVar9;
                            uStack452 = *(undefined4 *)((longlong)plVar9 + 4);
                            uStack448 = *(undefined4 *)(plVar9 + 1);
                            uStack444 = *(undefined4 *)((longlong)plVar9 + 0xc);
                            plVar9 = (longlong *)FUN_140770e90(plVar8);
                            if (*plVar9 != 0) {
                                local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000 |
                                                      (ulonglong)
                                                              (uint)((DAT_140c63664 - *(float *)(plVar9 + 1)) *
                                                                     *(float *)((longlong)plVar9 + 0xc)));
                                FUN_140103e60(*plVar9,&local_228,&local_1c8,0);
                            }
                            lVar11 = plVar8[4];
                            if (lVar11 == 0) break;
                            local_260 = &local_1b8;
                            local_1b8 = _DAT_140c777d0;
                            uStack436 = uRam0000000140c777d4;
                            uStack432 = uRam0000000140c777d8;
                            uStack428 = uRam0000000140c777dc;
                            local_198 = 0x3f800000;
                            uStack404 = 0x3f800000;
                            uStack400 = 0x3f800000;
                            uStack396 = 0x3f800000;
                            local_268 = &local_198;
                        }
                        else {
                            plVar9 = plVar8 + 0x14;
                            fStack532 = *(float *)(plVar8 + 0x16) / in_XMM3_Da;
                            local_228 = local_238 - fStack532;
                            fStack548 = local_234 - fStack532;
                            local_218 = local_238 + fStack532;
                            fStack532 = local_234 + fStack532;
                            if (*(int *)(plVar8 + 0x2a) == 0) {
                                plVar9 = plVar8 + 0x12;
                            }
                            local_158 = *(undefined4 *)plVar9;
                            uStack340 = *(undefined4 *)((longlong)plVar9 + 4);
                            uStack336 = *(undefined4 *)(plVar9 + 1);
                            uStack332 = *(undefined4 *)((longlong)plVar9 + 0xc);
                            plVar9 = (longlong *)FUN_140770e90(plVar8);
                            if (*plVar9 != 0) {
                                local_278 = (float *)((ulonglong)local_278 & 0xffffffff00000000 |
                                                      (ulonglong)
                                                              (uint)((DAT_140c63664 - *(float *)(plVar9 + 1)) *
                                                                     *(float *)((longlong)plVar9 + 0xc)));
                                FUN_140103e60(*plVar9,&local_228,&local_158,0);
                            }
                            lVar11 = plVar8[4];
                            if (lVar11 == 0) break;
                            local_260 = &local_148;
                            local_148 = _DAT_140c777d0;
                            uStack324 = uRam0000000140c777d4;
                            uStack320 = uRam0000000140c777d8;
                            uStack316 = uRam0000000140c777dc;
                            local_1d8 = 0x3f800000;
                            uStack468 = 0x3f800000;
                            uStack464 = 0x3f800000;
                            uStack460 = 0x3f800000;
                            local_268 = &local_1d8;
                        }
                        local_258 = 1;
                        local_278 = &local_228;
                        local_270 = CONCAT44(local_270._4_4_,5);
                        (**(code **)(*DAT_140c65680 + 0x110))(DAT_140c65680,lVar11,0);
                        break;
                    }
                    uVar12 = uVar12 + 1;
                } while (uVar12 < uVar1);
            }
            if (puVar6 != (undefined8 *)0x0) {
                (**(code **)(puVar6[-2] + 8))(puVar6 + -2);
            }
            plVar13 = (longlong *)*plVar13;
        } while (plVar13 != (longlong *)*(longlong *)(param_1 + 0x38));
    }
    FUN_1407db4f0(local_88 ^ (ulonglong)auStack664);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140773a90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    float in_XMM3_Da;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    float fVar8;
    undefined auStack472 [32];
    float local_1b8;
    undefined8 local_1b0;
    float local_1a8;
    float local_1a4;
    undefined local_198 [16];
    undefined4 local_188;
    undefined4 uStack388;
    undefined4 uStack384;
    undefined4 uStack380;
    undefined4 local_178;
    undefined4 uStack372;
    undefined8 uStack368;
    undefined4 local_168;
    undefined4 uStack356;
    undefined8 uStack352;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    undefined local_148 [16];
    float local_138;
    undefined4 local_134;
    undefined local_128 [64];
    undefined4 local_e8;
    undefined4 uStack228;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    ulonglong local_88;

    local_88 = DAT_140c0f7b0 ^ (ulonglong)auStack472;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x338) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x338)) {
        fVar8 = 1.0 / in_XMM3_Da;
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            local_1b0 = param_5;
            local_158 = *(undefined4 *)(lVar2 + 0x10);
            uStack340 = *(undefined4 *)(lVar2 + 0x14);
            uStack336 = *(undefined4 *)(lVar2 + 0x18);
            uStack332 = *(undefined4 *)(lVar2 + 0x1c);
            local_1b8 = in_XMM3_Da;
            FUN_140771080(&local_1a8,&local_158,param_2);
            local_188 = *(undefined4 *)(lVar2 + 0x20);
            uStack388 = *(undefined4 *)(lVar2 + 0x24);
            uStack384 = *(undefined4 *)(lVar2 + 0x28);
            uStack380 = *(undefined4 *)(lVar2 + 0x2c);
            local_1b0 = param_5;
            local_1b8 = in_XMM3_Da;
            FUN_140771080(local_198,&local_188,param_2);
            local_148 = local_148 & (undefined  [16])0xffffffffffffffff;
            local_138 = fVar8 * *(float *)(lVar2 + 0xe0);
            local_134 = *(undefined4 *)(lVar2 + 0x30);
            uVar4 = FUN_1408fd190(local_198._4_4_ - local_1a4,local_198._0_4_ - local_1a8);
            (**(code **)(*DAT_140c65680 + 0x40))(DAT_140c65680,1);
            uStack352 = &local_1a8;
            local_178 = 0x3f800000;
            uStack368 = 0;
            uStack352._4_4_ = (undefined4)((ulonglong)uStack352 >> 0x20);
            uStack212 = uStack356;
            uStack208 = (undefined4)uStack352;
            uStack204 = uStack352._4_4_;
            local_e8 = 0x3f800000;
            uStack228 = uStack372;
            uStack224 = 0;
            uStack220 = 0;
            local_168 = uVar4;
            local_d8 = uVar4;
            FUN_1401b0840(&local_e8,local_128);
            (**(code **)(*DAT_140c65680 + 0x58))(DAT_140c65680,local_128);
            if (*(longlong *)(lVar2 + 0x50) != 0) {
                local_1b8 = (DAT_140c63664 - *(float *)(lVar2 + 0x58)) * *(float *)(lVar2 + 0x5c);
                FUN_140103e60(*(longlong *)(lVar2 + 0x50),local_148,lVar2 + 0x40,0);
            }
            (**(code **)(*DAT_140c65680 + 0x48))();
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
        } while (lVar3 != *(longlong *)(param_1 + 0x338));
    }
    (**(code **)(*DAT_140c65680 + 0x90))(DAT_140c65680,2);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x338) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x338)) {
        uVar4 = 0x3f800000;
        uVar5 = 0x3f800000;
        uVar6 = 0x3f800000;
        uVar7 = 0x3f800000;
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            local_1b0 = param_5;
            local_188 = *(undefined4 *)(lVar2 + 0x10);
            uStack388 = *(undefined4 *)(lVar2 + 0x14);
            uStack384 = *(undefined4 *)(lVar2 + 0x18);
            uStack380 = *(undefined4 *)(lVar2 + 0x1c);
            local_1b8 = in_XMM3_Da;
            FUN_140771080(&local_1a8,&local_188,param_2);
            local_158 = *(undefined4 *)(lVar2 + 0x20);
            uStack340 = *(undefined4 *)(lVar2 + 0x24);
            uStack336 = *(undefined4 *)(lVar2 + 0x28);
            uStack332 = *(undefined4 *)(lVar2 + 0x2c);
            local_1b0 = param_5;
            local_1b8 = in_XMM3_Da;
            FUN_140771080(&local_178,&local_158,param_2);
            local_198 = CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar4)));
            if (*(longlong *)(lVar2 + 0x80) != 0) {
                FUN_140103b20(*(longlong *)(lVar2 + 0x80),&local_1a8,local_198);
            }
            local_148 = CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar4)));
            if (*(longlong *)(lVar2 + 0xb0) != 0) {
                FUN_140103b20(*(longlong *)(lVar2 + 0xb0),&local_178,local_148);
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
        } while (lVar3 != *(longlong *)(param_1 + 0x338));
    }
    FUN_1407db4f0(local_88 ^ (ulonglong)auStack472);
    return;
}



void FUN_140773e50(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
    undefined8 *puVar1;
    int iVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong *plVar5;
    undefined8 extraout_XMM0_Qa;

    pplVar3 = (longlong **)**(longlong ***)(param_4 + 0x38);
    if (pplVar3 != *(longlong ***)(param_4 + 0x38)) {
        do {
            plVar5 = (longlong *)0x0;
            if (pplVar3[4] != (longlong *)0x0) {
                do {
                    iVar2 = (**(code **)(*(longlong *)pplVar3[3][(longlong)plVar5] + 0x20))
                    (param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x10),
                            (longlong *)pplVar3[3][(longlong)plVar5],param_4 + 0x20);
                    param_1 = extraout_XMM0_Qa;
                    if (iVar2 == 0) {
                        puVar1 = (undefined8 *)pplVar3[3][(longlong)plVar5];
                        param_1 = FUN_140007270(pplVar3 + 3,plVar5);
                        if (puVar1 != (undefined8 *)0x0) {
                            param_1 = (**(code **)*puVar1)(puVar1,1);
                        }
                        plVar5 = (longlong *)((longlong)plVar5 + -1);
                    }
                    plVar5 = (longlong *)((longlong)plVar5 + 1);
                } while (plVar5 < pplVar3[4]);
            }
            if (pplVar3[4] == (longlong *)0x0) {
                plVar5 = pplVar3[1];
                pplVar4 = (longlong **)*pplVar3;
                *plVar5 = (longlong)pplVar4;
                pplVar4[1] = plVar5;
                plVar5 = pplVar3[3];
                if (plVar5 != (longlong *)0x0) {
                    (**(code **)(plVar5[-2] + 8))(plVar5 + -2);
                }
                param_1 = FUN_14018b900(pplVar3,0);
            }
            else {
                pplVar4 = (longlong **)*pplVar3;
            }
            pplVar3 = pplVar4;
        } while (pplVar4 != *(longlong ***)(param_4 + 0x38));
    }
    return;
}



void FUN_140773f70(longlong param_1,undefined8 *param_2)

{
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;

    plVar2 = (longlong *)**(longlong **)(param_1 + 0x38);
    if (plVar2 != *(longlong **)(param_1 + 0x38)) {
        do {
            uVar3 = 0;
            if (plVar2[4] != 0) {
                do {
                    iVar1 = FUN_1400f9cb0(*(longlong *)(plVar2[3] + uVar3 * 8) + 0x160,param_2);
                    if (iVar1 != 0) {
                        *(undefined4 *)(*(longlong *)(plVar2[3] + uVar3 * 8) + 0x178) = 1;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < (ulonglong)plVar2[4]);
            }
            plVar2 = (longlong *)*plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x38));
    }
    *param_2 = &PTR_FUN_140b56a08;
    if (param_2[2] == 0) {
        return;
    }
    FUN_1400579e0();
    return;
}



void FUN_140774020(longlong param_1,undefined8 *param_2)

{
    int iVar1;
    longlong *plVar2;
    ulonglong uVar3;

    plVar2 = (longlong *)**(longlong **)(param_1 + 0x38);
    if (plVar2 != *(longlong **)(param_1 + 0x38)) {
        do {
            uVar3 = 0;
            if (plVar2[4] != 0) {
                do {
                    iVar1 = FUN_1400f9cb0(*(longlong *)(plVar2[3] + uVar3 * 8) + 0x160,param_2);
                    if (iVar1 != 0) {
                        *(undefined4 *)(*(longlong *)(plVar2[3] + uVar3 * 8) + 0x178) = 0;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < (ulonglong)plVar2[4]);
            }
            plVar2 = (longlong *)*plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x38));
    }
    *param_2 = &PTR_FUN_140b56a08;
    if (param_2[2] == 0) {
        return;
    }
    FUN_1400579e0();
    return;
}



undefined8 *
FUN_1407740e0(longlong param_1,longlong param_2,int param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
    uint uVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong *plVar7;
    longlong *plVar8;
    bool bVar9;
    longlong **pplVar10;
    undefined local_58 [16];
    undefined **local_48;
    undefined8 local_40;
    longlong local_38;

    plVar7 = (longlong *)0x0;
    bVar9 = false;
    puVar5 = (undefined8 *)FUN_14018b280(400,0);
    if (puVar5 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)0x0;
    }
    else {
        local_58 = ZEXT816(0);
        bVar9 = true;
        local_48 = &PTR_FUN_140b56a08;
        local_38 = 0;
        local_40 = (undefined8 *)CONCAT44(local_40._4_4_,0xfffffffe);
        FUN_140770b60(puVar5,param_3,local_58,param_4,param_5,&DAT_1409f9944,param_6,param_7,&local_48);
        puVar6 = puVar5 + 0x30;
        *puVar6 = 0;
        *puVar5 = &PTR_FUN_140b765f0;
        if ((param_2 != 0) && (puVar6 != (undefined8 *)0x0)) {
            *puVar6 = *(undefined8 *)(param_2 + 0x78);
            if (*(undefined8 **)(param_2 + 0x78) != (undefined8 *)0x0) {
                (**(code **)**(undefined8 **)(param_2 + 0x78))();
            }
        }
    }
    if ((bVar9) && (local_48 = &PTR_FUN_140b56a08, local_38 != 0)) {
        FUN_1400579e0();
    }
    *(undefined4 *)(puVar5 + 0x2f) = param_8;
    pplVar2 = *(longlong ***)(param_1 + 0x38);
    pplVar10 = (longlong **)*pplVar2;
    if (pplVar10 != pplVar2) {
        do {
            if (*(int *)(pplVar10 + 2) == *(int *)(param_2 + 8)) {
                plVar4 = pplVar10[4];
                if (plVar4 != (longlong *)0x0) {
                    plVar8 = pplVar10[3];
                    do {
                        if (*(int *)(*plVar8 + 0xc) == param_3) {
                            puVar6 = (undefined8 *)pplVar10[3][(longlong)plVar7];
                            if (puVar6 != (undefined8 *)0x0) {
                                (**(code **)*puVar6)(puVar6,1);
                            }
                            pplVar10[3][(longlong)plVar7] = (longlong)puVar5;
                            return puVar5;
                        }
                        plVar7 = (longlong *)((longlong)plVar7 + 1);
                        plVar8 = plVar8 + 1;
                    } while (plVar7 < plVar4);
                }
                plVar7 = (longlong *)FUN_14018db00(pplVar10[3],(longlong *)((longlong)plVar4 + 1),8);
                plVar7[(longlong)plVar4] = (longlong)puVar5;
                if (pplVar10[3] != plVar7) {
                    FUN_1407db590(plVar7,pplVar10[3],(longlong)pplVar10[4] << 3);
                    plVar8 = pplVar10[3];
                    if (plVar8 != (longlong *)0x0) {
                        (**(code **)(plVar8[-2] + 8))(plVar8 + -2);
                    }
                    pplVar10[3] = plVar7;
                }
                pplVar10[4] = (longlong *)((longlong)plVar4 + 1);
                return puVar5;
            }
            pplVar10 = (longlong **)*pplVar10;
        } while (pplVar10 != pplVar2);
    }
    uVar1 = *(uint *)(param_2 + 8);
    local_48 = (undefined **)((ulonglong)local_48 & 0xffffffff00000000 | (ulonglong)uVar1);
    puVar6 = (undefined8 *)FUN_14018db00(0,1,8);
    local_38 = 1;
    *puVar6 = puVar5;
    lVar3 = *(longlong *)(param_1 + 0x38);
    local_40 = puVar6;
    plVar7 = (longlong *)FUN_14018b280(0x28);
    if (plVar7 + 2 != (longlong *)0x0) {
        *(uint *)(plVar7 + 2) = uVar1;
        FUN_1403fe910(plVar7 + 3,&local_40);
    }
    *plVar7 = lVar3;
    plVar7[1] = *(longlong *)(lVar3 + 8);
    **(longlong ***)(lVar3 + 8) = plVar7;
    *(longlong **)(lVar3 + 8) = plVar7;
    (**(code **)(puVar6[-2] + 8))();
    return puVar5;
}



void FUN_140774360(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;

    plVar4 = (longlong *)**(longlong **)(param_1 + 0x38);
    if (plVar4 != *(longlong **)(param_1 + 0x38)) {
        do {
            uVar5 = 0;
            if (plVar4[4] != 0) {
                do {
                    puVar1 = *(undefined8 **)(plVar4[3] + uVar5 * 8);
                    if (puVar1 != (undefined8 *)0x0) {
                        (**(code **)*puVar1)(puVar1,1);
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < (ulonglong)plVar4[4]);
            }
            plVar4 = (longlong *)*plVar4;
        } while (plVar4 != (longlong *)*(longlong *)(param_1 + 0x38));
    }
    plVar4 = (longlong *)**(longlong **)(param_1 + 0x38);
    if (plVar4 != *(longlong **)(param_1 + 0x38)) {
        do {
            plVar2 = (longlong *)*plVar4;
            lVar3 = plVar4[3];
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            FUN_14018b900(plVar4,0);
            plVar4 = plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x38));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 8) = *(longlong *)(param_1 + 0x38);
    return;
}



void FUN_140774420(longlong param_1,int param_2)

{
    longlong **pplVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong **pplVar4;
    longlong *plVar5;

    pplVar1 = *(longlong ***)(param_1 + 0x38);
    pplVar4 = (longlong **)*pplVar1;
    if (pplVar4 == pplVar1) {
        return;
    }
    do {
        plVar5 = (longlong *)0x0;
        if (pplVar4[4] != (longlong *)0x0) {
            plVar3 = pplVar4[3];
            do {
                puVar2 = (undefined8 *)*plVar3;
                if (*(int *)(puVar2 + 1) == param_2) {
                    (**(code **)*puVar2)(puVar2,1);
                    FUN_140007270(pplVar4 + 3,plVar5);
                    if (pplVar4[4] != (longlong *)0x0) {
                        return;
                    }
                    plVar5 = *pplVar4;
                    pplVar1 = (longlong **)pplVar4[1];
                    *pplVar1 = plVar5;
                    plVar5[1] = (longlong)pplVar1;
                    plVar5 = pplVar4[3];
                    if (plVar5 != (longlong *)0x0) {
                        (**(code **)(plVar5[-2] + 8))(plVar5 + -2);
                    }
                    FUN_14018b900(pplVar4,0);
                    return;
                }
                plVar5 = (longlong *)((longlong)plVar5 + 1);
                plVar3 = plVar3 + 1;
            } while (plVar5 < pplVar4[4]);
        }
        pplVar4 = (longlong **)*pplVar4;
    } while (pplVar4 != pplVar1);
    return;
}



void FUN_1407744d0(longlong param_1,int param_2)

{
    longlong **pplVar1;
    undefined8 *puVar2;
    longlong **pplVar3;
    longlong *plVar4;

    if (param_2 != 0) {
        pplVar1 = *(longlong ***)(param_1 + 0x38);
        pplVar3 = (longlong **)*pplVar1;
        if (pplVar3 != pplVar1) {
            do {
                if (*(int *)(pplVar3 + 2) == param_2) {
                    plVar4 = (longlong *)0x0;
                    if (pplVar3[4] != (longlong *)0x0) {
                        do {
                            puVar2 = (undefined8 *)pplVar3[3][(longlong)plVar4];
                            if (puVar2 != (undefined8 *)0x0) {
                                (**(code **)*puVar2)(puVar2,1);
                            }
                            plVar4 = (longlong *)((longlong)plVar4 + 1);
                        } while (plVar4 < pplVar3[4]);
                    }
                    plVar4 = *pplVar3;
                    pplVar1 = (longlong **)pplVar3[1];
                    *pplVar1 = plVar4;
                    plVar4[1] = (longlong)pplVar1;
                    plVar4 = pplVar3[3];
                    if (plVar4 != (longlong *)0x0) {
                        (**(code **)(plVar4[-2] + 8))(plVar4 + -2);
                    }
                    FUN_14018b900(pplVar3,0);
                    return;
                }
                pplVar3 = (longlong **)*pplVar3;
            } while (pplVar3 != pplVar1);
            return;
        }
    }
    return;
}



void FUN_140774590(longlong param_1,int param_2)

{
    undefined8 *puVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong *plVar4;

    pplVar2 = (longlong **)**(longlong ***)(param_1 + 0x38);
    if (pplVar2 != *(longlong ***)(param_1 + 0x38)) {
        do {
            plVar4 = (longlong *)0x0;
            if (pplVar2[4] != (longlong *)0x0) {
                do {
                    puVar1 = (undefined8 *)pplVar2[3][(longlong)plVar4];
                    if (*(int *)((longlong)puVar1 + 0xc) == param_2) {
                        if (puVar1 != (undefined8 *)0x0) {
                            (**(code **)*puVar1)(puVar1,1);
                        }
                        FUN_140007270(pplVar2 + 3,plVar4);
                        plVar4 = (longlong *)((longlong)plVar4 + -1);
                    }
                    plVar4 = (longlong *)((longlong)plVar4 + 1);
                } while (plVar4 < pplVar2[4]);
            }
            if (pplVar2[4] == (longlong *)0x0) {
                plVar4 = pplVar2[1];
                pplVar3 = (longlong **)*pplVar2;
                *plVar4 = (longlong)pplVar3;
                pplVar3[1] = plVar4;
                plVar4 = pplVar2[3];
                if (plVar4 != (longlong *)0x0) {
                    (**(code **)(plVar4[-2] + 8))(plVar4 + -2);
                }
                FUN_14018b900(pplVar2,0);
            }
            else {
                pplVar3 = (longlong **)*pplVar2;
            }
            pplVar2 = pplVar3;
        } while (pplVar3 != *(longlong ***)(param_1 + 0x38));
    }
    return;
}



void FUN_140774670(longlong param_1,int param_2,undefined8 *param_3)

{
    undefined8 *puVar1;
    int iVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong *plVar5;

    pplVar3 = (longlong **)**(longlong ***)(param_1 + 0x38);
    if (pplVar3 != *(longlong ***)(param_1 + 0x38)) {
        do {
            plVar5 = (longlong *)0x0;
            if (pplVar3[4] != (longlong *)0x0) {
                do {
                    if ((*(int *)(pplVar3[3][(longlong)plVar5] + 0xc) == param_2) &&
                    (iVar2 = FUN_1400f9cb0(param_3,pplVar3[3][(longlong)plVar5] + 0x160), iVar2 != 0)) {
                        puVar1 = (undefined8 *)pplVar3[3][(longlong)plVar5];
                        if (puVar1 != (undefined8 *)0x0) {
                            (**(code **)*puVar1)(puVar1,1);
                        }
                        FUN_140007270(pplVar3 + 3,plVar5);
                        plVar5 = (longlong *)((longlong)plVar5 + -1);
                    }
                    plVar5 = (longlong *)((longlong)plVar5 + 1);
                } while (plVar5 < pplVar3[4]);
            }
            if (pplVar3[4] == (longlong *)0x0) {
                plVar5 = pplVar3[1];
                pplVar4 = (longlong **)*pplVar3;
                *plVar5 = (longlong)pplVar4;
                pplVar4[1] = plVar5;
                plVar5 = pplVar3[3];
                if (plVar5 != (longlong *)0x0) {
                    (**(code **)(plVar5[-2] + 8))(plVar5 + -2);
                }
                FUN_14018b900(pplVar3,0);
            }
            else {
                pplVar4 = (longlong **)*pplVar3;
            }
            pplVar3 = pplVar4;
        } while (pplVar4 != *(longlong ***)(param_1 + 0x38));
    }
    *param_3 = &PTR_FUN_140b56a08;
    if (param_3[2] == 0) {
        return;
    }
    FUN_1400579e0();
    return;
}



void FUN_140774790(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;

    plVar4 = (longlong *)**(longlong **)(param_1 + 0x38);
    if (plVar4 != *(longlong **)(param_1 + 0x38)) {
        do {
            lVar3 = plVar4[4];
            while (lVar3 != 0) {
                puVar1 = *(undefined8 **)plVar4[3];
                if (puVar1 != (undefined8 *)0x0) {
                    (**(code **)*puVar1)(puVar1,1);
                }
                FUN_140007270(plVar4 + 3,0);
                lVar3 = plVar4[4];
            }
            plVar4 = (longlong *)*plVar4;
        } while (plVar4 != (longlong *)*(longlong *)(param_1 + 0x38));
    }
    plVar4 = (longlong *)**(longlong **)(param_1 + 0x38);
    if (plVar4 != *(longlong **)(param_1 + 0x38)) {
        do {
            plVar2 = (longlong *)*plVar4;
            lVar3 = plVar4[3];
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            FUN_14018b900(plVar4,0);
            plVar4 = plVar2;
        } while (plVar2 != (longlong *)*(longlong *)(param_1 + 0x38));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x38);
    *(longlong *)(*(longlong *)(param_1 + 0x38) + 8) = *(longlong *)(param_1 + 0x38);
    return;
}



void FUN_140774850(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;
    uint local_res10 [2];

    lVar1 = *(longlong *)(param_1 + 0x338);
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
    if (local_res8 != *(longlong *)(param_1 + 0x338)) {
        lVar1 = *(longlong *)(local_res8 + 0x28);
        local_res10[0] = param_2;
        if (lVar1 != 0) {
            FUN_1407748f0(lVar1);
            FUN_14018b900(lVar1,0);
        }
        FUN_140776810(param_1 + 0x330,local_res10);
    }
    return;
}



void FUN_1407748f0(longlong param_1)

{
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0xb0) + 8))();
        *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    if (*(longlong *)(param_1 + 200) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 200),0);
    }
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x80) + 8))();
        *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (*(longlong *)(param_1 + 0x98) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x98),0);
    }
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x68),0);
        return;
    }
    return;
}



void FUN_140774990(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x338) + 0x10);
    if (lVar3 != *(longlong *)(param_1 + 0x338)) {
        do {
            lVar2 = *(longlong *)(lVar3 + 0x28);
            if (lVar2 != 0) {
                FUN_1407748f0(lVar2);
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
        } while (lVar3 != *(longlong *)(param_1 + 0x338));
    }
    FUN_140008410(param_1 + 0x330);
    return;
}



undefined8 FUN_140774a40(undefined8 param_1,longlong param_2,int *param_3)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined8 uVar4;
    float fVar5;

    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar2 = *(undefined8 **)(param_2 + 0x10);
    uVar4 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar4;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    iVar1 = *param_3;
    FUN_140058710(param_2,&DAT_1409f99c4,2);
    pdVar3 = *(double **)(param_2 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar1;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_2,0xfffffffd);
    FUN_14005ea50(param_2,uVar4,*(longlong *)(param_2 + 0x10) + -0x20,
                  *(longlong *)(param_2 + 0x10) + -0x10);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
    FUN_1400f0170(param_2);
    FUN_1400f0170(param_2);
    fVar5 = (float)param_3[0xc];
    FUN_140058710(param_2,"fWidth",6);
    pdVar3 = *(double **)(param_2 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar5;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_2,0xfffffffd);
    FUN_14005ea50(param_2,uVar4,*(longlong *)(param_2 + 0x10) + -0x20,
                  *(longlong *)(param_2 + 0x10) + -0x10);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
    FUN_140058710(param_2,"crLine",6);
    FUN_1401181f0(param_2,param_3 + 0x10);
    uVar4 = FUN_1400580e0(param_2,0xfffffffd);
    FUN_14005ea50(param_2,uVar4,*(longlong *)(param_2 + 0x10) + -0x20,
                  *(longlong *)(param_2 + 0x10) + -0x10);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8
FUN_140774bf0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
              undefined8 param_5,int param_6,int param_7,int param_8)

{
    double *pdVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;
    bool bVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    uint uVar15;
    undefined local_res10 [8];
    float local_118;
    float fStack276;
    float local_108;
    float fStack260;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined local_e8 [16];
    undefined local_d8 [16];
    undefined4 local_c8;
    undefined4 uStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined local_b8 [128];

    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar4 = *(undefined8 **)(param_2 + 0x10);
    uVar2 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar4 + 1) = 5;
    iVar7 = 0;
    *puVar4 = uVar2;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x338) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x338)) {
        uVar15 = 0x7fffffff;
        fVar14 = 0.0;
        do {
            lVar5 = *(longlong *)(lVar6 + 0x28);
            local_f8 = *(undefined4 *)(lVar5 + 0x10);
            uStack244 = *(undefined4 *)(lVar5 + 0x14);
            uStack240 = *(undefined4 *)(lVar5 + 0x18);
            uStack236 = *(undefined4 *)(lVar5 + 0x1c);
            fVar13 = *(float *)(lVar5 + 0x30) * *(float *)(lVar5 + 0x30);
            FUN_1407711c0(&local_118,&local_f8,param_1 + 0x20);
            local_c8 = *(undefined4 *)(lVar5 + 0x20);
            uStack196 = *(undefined4 *)(lVar5 + 0x24);
            uStack192 = *(undefined4 *)(lVar5 + 0x28);
            uStack188 = *(undefined4 *)(lVar5 + 0x2c);
            FUN_1407711c0(&local_108,&local_c8,param_1 + 0x20);
            if ((param_6 == 0) || (*(longlong *)(lVar5 + 0x80) == 0)) {
                LAB_140774e9c:
                if ((param_7 != 0) && (lVar3 = *(longlong *)(lVar5 + 0xb0), lVar3 != 0)) {
                    if (0 < (int)(*(longlong *)(lVar3 + 0x60) - *(longlong *)(lVar3 + 0x58) >> 3)) {
                        lVar3 = **(longlong **)(lVar3 + 0x58);
                    }
                    fVar10 = local_108;
                    fVar11 = fStack260;
                    lVar3 = FUN_140101180(lVar3);
                    fVar10 = fVar10 - (float)*(int *)(lVar3 + 0x48);
                    fVar11 = fVar11 - (float)*(int *)(lVar3 + 0x4c);
                    fVar12 = fVar11;
                    puVar4 = (undefined8 *)FUN_140109840(lVar5 + 0xb0,local_b8);
                    fVar9 = (float)(int)*param_3;
                    local_d8 = ZEXT816(CONCAT44((float)*(int *)((longlong)param_3 + 4),fVar9));
                    if (((fVar10 <= fVar9) && (fVar9 < (float)(int)*puVar4 + fVar10)) &&
                        ((local_d8._4_4_ = SUB164(local_d8 >> 0x20,0), fVar11 <= local_d8._4_4_ &&
                                                                       (local_d8._4_4_ < (float)*(int *)((longlong)puVar4 + 4) + fVar12))))
                    goto LAB_140775107;
                }
                if (param_8 != 0) {
                    if (local_118 == local_108) {
                        fVar13 = (float)*(int *)((longlong)param_3 + 4);
                        if (((fStack276 <= fVar13) && (fVar13 <= fStack260)) ||
                            ((fStack260 <= fVar13 && (fVar13 <= fStack276)))) {
                            bVar8 = (float)((uint)((float)*(int *)param_3 - local_118) & uVar15) < fVar14;
                            goto LAB_140775105;
                        }
                    }
                    else if (fStack276 == fStack260) {
                        fVar13 = (float)*(int *)param_3;
                        if (((local_118 <= fVar13) && (fVar13 <= local_108)) ||
                            ((local_108 <= fVar13 && (fVar13 <= local_118)))) {
                            bVar8 = (float)((uint)((float)*(int *)((longlong)param_3 + 4) - fStack276) & uVar15) <
                            fVar14;
                            LAB_140775105:
                            if (bVar8) goto LAB_140775107;
                        }
                    }
                    else {
                        fVar10 = (float)*(int *)param_3;
                        if (((local_118 <= fVar10) && (fVar10 <= local_108)) ||
                            (((local_108 <= fVar10 &&
                               (((fVar10 <= local_118 && (fStack276 <= (float)*(int *)((longlong)param_3 + 4))) &&
                        ((float)*(int *)((longlong)param_3 + 4) <= fStack260)))) ||
                        ((fStack260 <= (float)*(int *)((longlong)param_3 + 4) &&
                        ((float)*(int *)((longlong)param_3 + 4) <= fStack276)))))) {
                            fVar11 = fVar10 - (((local_108 - local_118) / (fStack260 - fStack276)) *
                                               ((float)*(int *)((longlong)param_3 + 4) - fStack276) + local_118);
                            fVar10 = (float)*(int *)((longlong)param_3 + 4) -
                                    (((fStack260 - fStack276) / (local_108 - local_118)) * (fVar10 - local_118) +
                                     fStack276);
                            fVar10 = fVar10 * fVar10;
                            bVar8 = (fVar10 * fVar11 * fVar11) / (fVar11 * fVar11 + fVar10) < fVar13;
                            goto LAB_140775105;
                        }
                    }
                }
            }
            else {
                fVar10 = local_118;
                fVar11 = fStack276;
                lVar3 = FUN_140101180();
                fVar10 = fVar10 - (float)(int)*(undefined8 *)(lVar3 + 0x48);
                fVar11 = fVar11 - (float)*(int *)(lVar3 + 0x4c);
                fVar12 = fVar11;
                puVar4 = (undefined8 *)FUN_140109840(lVar5 + 0x80,local_res10);
                fVar9 = (float)(int)*param_3;
                local_e8 = ZEXT816(CONCAT44((float)*(int *)((longlong)param_3 + 4),fVar9));
                if ((fVar9 < fVar10) ||
                    ((((float)(int)*puVar4 + fVar10 <= fVar9 ||
                       (local_e8._4_4_ = SUB164(local_e8 >> 0x20,0), local_e8._4_4_ < fVar11)) ||
                      ((float)*(int *)((longlong)puVar4 + 4) + fVar12 <= local_e8._4_4_))))
                goto LAB_140774e9c;
                LAB_140775107:
                pdVar1 = *(double **)(param_2 + 0x10);
                iVar7 = iVar7 + 1;
                *(undefined4 *)(pdVar1 + 1) = 3;
                *pdVar1 = (double)iVar7;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                FUN_140774a40();
                lVar5 = *(longlong *)(param_2 + 0x10);
                FUN_14005ea50(param_2,&DAT_ffffffffffffffd0 + lVar5,lVar5 + -0x20,lVar5 + -0x10);
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
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
                for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar5 = lVar3;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 0x338));
    }
    return 1;
}



undefined8 FUN_140775220(longlong param_1,longlong param_2)

{
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong lVar6;
    int iVar7;

    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar1 = *(undefined8 **)(param_2 + 0x10);
    uVar4 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    iVar7 = 0;
    *puVar1 = uVar4;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x338) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x338)) {
        do {
            pdVar2 = *(double **)(param_2 + 0x10);
            iVar7 = iVar7 + 1;
            *(undefined4 *)(pdVar2 + 1) = 3;
            *pdVar2 = (double)iVar7;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_140774a40();
            lVar5 = *(longlong *)(param_2 + 0x10);
            FUN_14005ea50(param_2,&DAT_ffffffffffffffd0 + lVar5,lVar5 + -0x20,lVar5 + -0x10);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
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
                for (lVar3 = *(longlong *)(lVar5 + 0x10); lVar6 = lVar5, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar5 = lVar3;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 0x338));
    }
    return 1;
}



undefined8 FUN_140775350(longlong param_1,longlong param_2,int *param_3)

{
    longlong *plVar1;
    double *pdVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    int iVar10;
    uint uVar11;
    undefined2 *puVar12;
    ulonglong uVar13;
    undefined2 *puVar14;
    longlong lVar15;
    longlong lVar16;
    double dVar17;
    undefined4 uVar18;
    undefined4 uVar19;
    int local_158;
    int iStack340;
    ulonglong local_148;
    undefined local_140 [8];
    longlong local_138;
    longlong local_120;
    longlong *local_118;
    undefined **local_110;
    uint local_108;
    longlong local_100;
    undefined4 local_f8;
    float local_e8;
    float local_e4;
    undefined local_d8 [8];
    int local_d0;
    longlong local_c8;
    undefined4 local_b8;
    undefined4 uStack180;
    undefined4 uStack176;
    undefined4 uStack172;
    undefined local_a8 [16];
    longlong local_98;
    undefined local_88 [16];
    undefined local_78 [64];

    local_110 = &PTR_FUN_140b569f0;
    local_f8 = 1;
    local_100 = param_2;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar8 = *(undefined8 **)(param_2 + 0x10);
    uVar4 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    local_108 = FUN_1400578c0(param_2);
    plVar9 = (longlong *)**(longlong **)(param_1 + 0x38);
    lVar5 = param_2;
    if (plVar9 != *(longlong **)(param_1 + 0x38)) {
        uVar18 = 0;
        uVar19 = 0;
        do {
            local_148 = 0;
            if (plVar9[4] != 0) {
                lVar5 = param_1 + 0x20;
                local_120 = lVar5;
                do {
                    plVar1 = *(longlong **)(plVar9[3] + local_148 * 8);
                    local_118 = plVar1;
                    uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,local_78);
                    FUN_1407711c0(&local_e8,uVar4,lVar5);
                    if (((int)local_e4 - param_3[1]) * ((int)local_e4 - param_3[1]) +
                        ((int)local_e8 - *param_3) * ((int)local_e8 - *param_3) < 0x100) {
                        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_2);
                        }
                        puVar8 = *(undefined8 **)(param_2 + 0x10);
                        uVar4 = FUN_14005c1b0(param_2,0,0);
                        *(undefined4 *)(puVar8 + 1) = 5;
                        *puVar8 = uVar4;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        iVar3 = FUN_1400578c0(param_2);
                        iVar10 = *(int *)(plVar1 + 1);
                        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        if (iVar3 - 1U < *(uint *)(lVar5 + 0x38)) {
                            puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                        }
                        else {
                            dVar17 = (double)iVar3;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar8 = *(undefined8 **)(lVar5 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar8 = (undefined8 *)
                                        (*(longlong *)(lVar5 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar8 + 3) == 3) && (dVar17 == (double)puVar8[2]))
                                    goto LAB_1407755a0;
                                puVar8 = (undefined8 *)puVar8[4];
                            } while (puVar8 != (undefined8 *)0x0);
                            puVar8 = &DAT_140a12138;
                        }
                        LAB_1407755a0:
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar8;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        lVar5 = FUN_14018f0e0(local_140,&DAT_140b4f208);
                        lVar5 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == 0) {
                            *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                        }
                        else {
                            lVar15 = -1;
                            do {
                                lVar15 = lVar15 + 1;
                            } while (*(char *)(lVar5 + lVar15) != '\0');
                            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_2);
                            }
                            puVar8 = *(undefined8 **)(param_2 + 0x10);
                            uVar4 = FUN_140062650(param_2,lVar5,lVar15);
                            *(undefined4 *)(puVar8 + 1) = 4;
                            *puVar8 = uVar4;
                        }
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        if (local_138 != 0) {
                            FUN_14018b900(local_138,0);
                        }
                        pdVar2 = *(double **)(param_2 + 0x10);
                        *(undefined4 *)(pdVar2 + 1) = 3;
                        *pdVar2 = (double)iVar10;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar4 = FUN_1400580e0(param_2,0xfffffffd);
                        FUN_14005ea50(param_2,uVar4,*(longlong *)(param_2 + 0x10) + -0x20,
                                      *(longlong *)(param_2 + 0x10) + -0x10);
                        *(longlong *)(param_2 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
                        uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,local_88);
                        FUN_1400fa3c0(local_d8,param_2,uVar4);
                        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        if (iVar3 - 1U < *(uint *)(lVar5 + 0x38)) {
                            puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                        }
                        else {
                            dVar17 = (double)iVar3;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar8 = *(undefined8 **)(lVar5 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar8 = (undefined8 *)
                                        (*(longlong *)(lVar5 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar8 + 3) == 3) && (dVar17 == (double)puVar8[2]))
                                    goto LAB_14077572d;
                                puVar8 = (undefined8 *)puVar8[4];
                            } while (puVar8 != (undefined8 *)0x0);
                            puVar8 = &DAT_140a12138;
                        }
                        LAB_14077572d:
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar8;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        lVar5 = FUN_14018f0e0(local_140,&DAT_140b4f200);
                        lVar5 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == 0) {
                            *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                        }
                        else {
                            lVar15 = -1;
                            do {
                                lVar15 = lVar15 + 1;
                            } while (*(char *)(lVar5 + lVar15) != '\0');
                            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_2);
                            }
                            puVar8 = *(undefined8 **)(param_2 + 0x10);
                            uVar4 = FUN_140062650(param_2,lVar5,lVar15);
                            *(undefined4 *)(puVar8 + 1) = 4;
                            *puVar8 = uVar4;
                        }
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        if (local_138 != 0) {
                            FUN_14018b900(local_138,0);
                        }
                        iVar10 = local_d0;
                        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        uVar11 = local_d0 - 1;
                        if (uVar11 < *(uint *)(lVar5 + 0x38)) {
                            puVar8 = (undefined8 *)
                                    ((longlong)(local_d0 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                        }
                        else {
                            dVar17 = (double)local_d0;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar8 = *(undefined8 **)(lVar5 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar8 = (undefined8 *)
                                        (*(longlong *)(lVar5 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar8 + 3) == 3) && (dVar17 == (double)puVar8[2]))
                                    goto LAB_14077585d;
                                puVar8 = (undefined8 *)puVar8[4];
                            } while (puVar8 != (undefined8 *)0x0);
                            puVar8 = &DAT_140a12138;
                        }
                        LAB_14077585d:
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar8;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
                        lVar5 = *(longlong *)(param_2 + 0x10);
                        *(longlong *)(param_2 + 0x10) = lVar5 + 0x10;
                        FUN_14005ea50(param_2,lVar5 + -0x20,lVar5 + -0x10,lVar5);
                        *(longlong *)(param_2 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
                        local_b8 = *(undefined4 *)(plVar1 + 0x28);
                        uStack180 = *(undefined4 *)((longlong)plVar1 + 0x144);
                        uStack176 = *(undefined4 *)(plVar1 + 0x29);
                        uStack172 = *(undefined4 *)((longlong)plVar1 + 0x14c);
                        FUN_1400fa180(local_a8,param_2,&local_b8);
                        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        if (iVar3 - 1U < *(uint *)(lVar5 + 0x38)) {
                            puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                        }
                        else {
                            dVar17 = (double)iVar3;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar8 = *(undefined8 **)(lVar5 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar8 = (undefined8 *)
                                        (*(longlong *)(lVar5 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar8 + 3) == 3) && (dVar17 == (double)puVar8[2]))
                                    goto LAB_14077593d;
                                puVar8 = (undefined8 *)puVar8[4];
                            } while (puVar8 != (undefined8 *)0x0);
                            puVar8 = &DAT_140a12138;
                        }
                        LAB_14077593d:
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar8;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        lVar5 = FUN_14018f0e0(local_140,L"ptMap");
                        lVar5 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == 0) {
                            *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                        }
                        else {
                            lVar15 = -1;
                            do {
                                lVar15 = lVar15 + 1;
                            } while (*(char *)(lVar5 + lVar15) != '\0');
                            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_2);
                            }
                            puVar8 = *(undefined8 **)(param_2 + 0x10);
                            uVar4 = FUN_140062650(param_2,lVar5,lVar15);
                            *(undefined4 *)(puVar8 + 1) = 4;
                            *puVar8 = uVar4;
                            iVar10 = local_d0;
                        }
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        if (local_138 != 0) {
                            FUN_14018b900(local_138,0);
                        }
                        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        if (uVar11 < *(uint *)(lVar5 + 0x38)) {
                            puVar8 = (undefined8 *)((longlong)(iVar10 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                        }
                        else {
                            dVar17 = (double)iVar10;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar8 = *(undefined8 **)(lVar5 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar8 = (undefined8 *)
                                        (*(longlong *)(lVar5 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar8 + 3) == 3) && (dVar17 == (double)puVar8[2]))
                                    goto LAB_140775a70;
                                puVar8 = (undefined8 *)puVar8[4];
                            } while (puVar8 != (undefined8 *)0x0);
                            puVar8 = &DAT_140a12138;
                        }
                        LAB_140775a70:
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar8;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
                        lVar5 = *(longlong *)(param_2 + 0x10);
                        *(longlong *)(param_2 + 0x10) = lVar5 + 0x10;
                        FUN_14005ea50(param_2,lVar5 + -0x20,lVar5 + -0x10,lVar5);
                        *(longlong *)(param_2 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
                        uVar4 = (**(code **)(*plVar1 + 8))(plVar1);
                        uVar11 = iVar3 - 1;
                        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        if (uVar11 < *(uint *)(lVar5 + 0x38)) {
                            puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                        }
                        else {
                            dVar17 = (double)iVar3;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar8 = *(undefined8 **)(lVar5 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar8 = (undefined8 *)
                                        (*(longlong *)(lVar5 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar8 + 3) == 3) && (dVar17 == (double)puVar8[2]))
                                    goto LAB_140775b3a;
                                puVar8 = (undefined8 *)puVar8[4];
                            } while (puVar8 != (undefined8 *)0x0);
                            puVar8 = &DAT_140a12138;
                        }
                        LAB_140775b3a:
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar8;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f0870(param_2,puVar8,L"strName",uVar4);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        plVar6 = (longlong *)FUN_140770e90();
                        if (*plVar6 == 0) {
                            puVar14 = (undefined2 *)0x0;
                        }
                        else {
                            puVar12 = *(undefined2 **)(*plVar6 + 0x20);
                            puVar14 = &DAT_140b7b704;
                            if (puVar12 != (undefined2 *)0x0) {
                                puVar14 = puVar12;
                            }
                        }
                        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        if (uVar11 < *(uint *)(lVar5 + 0x38)) {
                            puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                        }
                        else {
                            dVar17 = (double)iVar3;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar8 = *(undefined8 **)(lVar5 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar8 = (undefined8 *)
                                        (*(longlong *)(lVar5 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar8 + 3) == 3) && (dVar17 == (double)puVar8[2]))
                                    goto LAB_140775c11;
                                puVar8 = (undefined8 *)puVar8[4];
                            } while (puVar8 != (undefined8 *)0x0);
                            puVar8 = &DAT_140a12138;
                        }
                        LAB_140775c11:
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar8;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        puVar12 = (undefined2 *)&DAT_1409f999c;
                        if (puVar14 != (undefined2 *)0x0) {
                            puVar12 = puVar14;
                        }
                        FUN_1400f0870(param_2,puVar8,L"strIcon",puVar12);
                        lVar5 = *(longlong *)(param_2 + 0x10);
                        puVar8 = (undefined8 *)(lVar5 + -0x10);
                        *(undefined8 **)(param_2 + 0x10) = puVar8;
                        lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        iVar10 = *(int *)((longlong)plVar1 + 0xc);
                        if (uVar11 < *(uint *)(lVar15 + 0x38)) {
                            puVar7 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar15 + 0x18));
                        }
                        else {
                            dVar17 = (double)iVar3;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar7 = *(undefined8 **)(lVar15 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar7 = (undefined8 *)
                                        (*(longlong *)(lVar15 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar15 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar7 + 3) == 3) && (dVar17 == (double)puVar7[2]))
                                    goto LAB_140775cd9;
                                puVar7 = (undefined8 *)puVar7[4];
                            } while (puVar7 != (undefined8 *)0x0);
                            puVar7 = &DAT_140a12138;
                        }
                        LAB_140775cd9:
                        *puVar8 = *puVar7;
                        *(undefined4 *)(lVar5 + -8) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        lVar5 = FUN_14018f0e0(local_140,L"eType");
                        lVar5 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == 0) {
                            *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                        }
                        else {
                            lVar15 = -1;
                            do {
                                lVar15 = lVar15 + 1;
                            } while (*(char *)(lVar5 + lVar15) != '\0');
                            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_2);
                            }
                            puVar8 = *(undefined8 **)(param_2 + 0x10);
                            uVar4 = FUN_140062650(param_2,lVar5,lVar15);
                            *(undefined4 *)(puVar8 + 1) = 4;
                            *puVar8 = uVar4;
                        }
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        if (local_138 != 0) {
                            FUN_14018b900(local_138,0);
                        }
                        pdVar2 = *(double **)(param_2 + 0x10);
                        *(undefined4 *)(pdVar2 + 1) = 3;
                        *pdVar2 = (double)iVar10;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar4 = FUN_1400580e0(param_2,0xfffffffd);
                        FUN_14005ea50(param_2,uVar4,*(longlong *)(param_2 + 0x10) + -0x20,
                                      *(longlong *)(param_2 + 0x10) + -0x10);
                        lVar5 = *(longlong *)(param_2 + 0x10);
                        *(undefined **)(param_2 + 0x10) = &DAT_ffffffffffffffd0 + lVar5;
                        lVar15 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        iVar10 = *(int *)(plVar1 + 0x2d);
                        if (iVar3 - 1U < *(uint *)(lVar15 + 0x38)) {
                            puVar8 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar15 + 0x18));
                        }
                        else {
                            dVar17 = (double)iVar3;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar8 = *(undefined8 **)(lVar15 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar8 = (undefined8 *)
                                        (*(longlong *)(lVar15 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar15 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar8 + 3) == 3) && (dVar17 == (double)puVar8[2]))
                                    goto LAB_140775e4d;
                                puVar8 = (undefined8 *)puVar8[4];
                            } while (puVar8 != (undefined8 *)0x0);
                            puVar8 = &DAT_140a12138;
                        }
                        LAB_140775e4d:
                        *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar5) = *puVar8;
                        *(undefined4 *)(lVar5 + -0x28) = *(undefined4 *)(puVar8 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        lVar5 = FUN_14018f0e0(local_140,L"userData");
                        lVar5 = *(longlong *)(lVar5 + 8);
                        if (lVar5 == 0) {
                            *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                        }
                        else {
                            lVar15 = -1;
                            do {
                                lVar15 = lVar15 + 1;
                            } while (*(char *)(lVar5 + lVar15) != '\0');
                            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_2);
                            }
                            puVar8 = *(undefined8 **)(param_2 + 0x10);
                            uVar4 = FUN_140062650(param_2,lVar5,lVar15);
                            *(undefined4 *)(puVar8 + 1) = 4;
                            *puVar8 = uVar4;
                        }
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        if (local_138 != 0) {
                            FUN_14018b900(local_138,0);
                        }
                        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                        if (iVar10 - 1U < *(uint *)(lVar5 + 0x38)) {
                            puVar8 = (undefined8 *)((longlong)(iVar10 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                        }
                        else {
                            dVar17 = (double)iVar10;
                            if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                puVar8 = *(undefined8 **)(lVar5 + 0x20);
                            }
                            else {
                                iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                local_158 = SUB84(dVar17,0);
                                puVar8 = (undefined8 *)
                                        (*(longlong *)(lVar5 + 0x20) +
                                         ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *)(puVar8 + 3) == 3) && (dVar17 == (double)puVar8[2]))
                                    goto LAB_140775f75;
                                puVar8 = (undefined8 *)puVar8[4];
                            } while (puVar8 != (undefined8 *)0x0);
                            puVar8 = &DAT_140a12138;
                        }
                        LAB_140775f75:
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar8;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar8 + 1);
                        lVar5 = *(longlong *)(param_2 + 0x10);
                        *(longlong *)(param_2 + 0x10) = lVar5 + 0x10;
                        FUN_14005ea50(param_2,lVar5 + -0x20,lVar5 + -0x10,lVar5);
                        plVar1 = local_118;
                        *(longlong *)(param_2 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
                        lVar5 = (**(code **)(*local_118 + 0x18))(local_118);
                        if (lVar5 != 0) {
                            uVar4 = (**(code **)(*plVar1 + 0x18))(plVar1);
                            FUN_140649930(param_2,uVar4);
                            puVar8 = *(undefined8 **)(param_2 + 0x10);
                            lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
                            lVar15 = *(longlong *)(param_2 + 0x18);
                            if (iVar3 - 1U < *(uint *)(lVar5 + 0x38)) {
                                puVar7 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18))
                                        ;
                            }
                            else {
                                dVar17 = (double)iVar3;
                                if (dVar17 == (double)CONCAT44(uVar19,uVar18)) {
                                    puVar7 = *(undefined8 **)(lVar5 + 0x20);
                                }
                                else {
                                    iStack340 = (int)((ulonglong)dVar17 >> 0x20);
                                    local_158 = SUB84(dVar17,0);
                                    puVar7 = (undefined8 *)
                                            (*(longlong *)(lVar5 + 0x20) +
                                             ((longlong)(ulonglong)(uint)(iStack340 + local_158) %
                                              (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                                }
                                do {
                                    if ((*(int *)(puVar7 + 3) == 3) && (dVar17 == (double)puVar7[2]))
                                        goto LAB_14077606f;
                                    puVar7 = (undefined8 *)puVar7[4];
                                } while (puVar7 != (undefined8 *)0x0);
                                puVar7 = &DAT_140a12138;
                            }
                            LAB_14077606f:
                            *puVar8 = *puVar7;
                            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                            lVar5 = FUN_14018f0e0(local_140,L"unit");
                            lVar5 = *(longlong *)(lVar5 + 8);
                            if (lVar5 == 0) {
                                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                            }
                            else {
                                lVar16 = -1;
                                do {
                                    lVar16 = lVar16 + 1;
                                } while (*(char *)(lVar5 + lVar16) != '\0');
                                if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                                    *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                                    FUN_14005e2c0(param_2);
                                }
                                puVar7 = *(undefined8 **)(param_2 + 0x10);
                                uVar4 = FUN_140062650(param_2,lVar5,lVar16);
                                *(undefined4 *)(puVar7 + 1) = 4;
                                *puVar7 = uVar4;
                            }
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                            if (local_138 != 0) {
                                FUN_14018b900(local_138,0);
                            }
                            puVar7 = (undefined8 *)
                            FUN_1400580e0(param_2,(longlong)puVar8 - lVar15 >> 4 & 0xffffffff);
                            puVar8 = *(undefined8 **)(param_2 + 0x10);
                            *puVar8 = *puVar7;
                            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar7 + 1);
                            lVar5 = *(longlong *)(param_2 + 0x10);
                            *(longlong *)(param_2 + 0x10) = lVar5 + 0x10;
                            FUN_14005ea50(param_2,lVar5 + -0x20,lVar5 + -0x10,lVar5);
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x40;
                        }
                        FUN_1400fb1d0(&local_110,iVar3);
                        if (local_98 != 0) {
                            FUN_1400579e0();
                        }
                        if (local_c8 != 0) {
                            FUN_1400579e0();
                        }
                        FUN_1400579e0(param_2);
                        lVar5 = local_120;
                    }
                    local_148 = local_148 + 1;
                } while (local_148 < (ulonglong)plVar9[4]);
            }
            plVar9 = (longlong *)*plVar9;
            lVar5 = local_100;
        } while (plVar9 != (longlong *)*(longlong *)(param_1 + 0x38));
    }
    uVar13 = (ulonglong)local_108;
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0xa0),uVar13);
    puVar8 = *(undefined8 **)(lVar5 + 0x10);
    *puVar8 = *puVar7;
    uVar18 = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)(puVar8 + 1) = uVar18;
    *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
    FUN_1400579e0(lVar5,uVar18,uVar13 & 0xffffffff);
    return 1;
}



undefined8 * FUN_140776240(undefined8 *param_1,undefined8 *param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;

    lVar1 = param_2[1];
    param_1[1] = lVar1;
    if (lVar1 == 0) {
        puVar3 = (undefined8 *)0x0;
    }
    else {
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 0xc + 0x10,0);
        if (puVar2 == (undefined8 *)0x0) {
            puVar3 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar2[1] = lVar1;
            puVar3 = puVar2 + 2;
            *puVar2 = &PTR_LAB_140b55060;
        }
    }
    *param_1 = puVar3;
    FUN_1407db590(puVar3,*param_2,param_1[1] * 0xc);
    return param_1;
}



longlong FUN_1407762d0(longlong *param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = param_1[1];
    lVar1 = lVar2 + 1;
    lVar4 = FUN_14018db00(*param_1,lVar1,0xc);
    if (*param_1 != lVar4) {
        FUN_1407db590(lVar4,*param_1,param_1[1] * 0xc);
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = lVar4;
    }
    param_1[1] = lVar1;
    return lVar2;
}



void FUN_140776360(longlong *param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    longlong local_10;

    local_28 = *param_1;
    uVar2 = param_1[1];
    uVar9 = 0;
    local_20 = &LAB_14076f0c0;
    local_18 = 0;
    uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar2),0);
    if (SUB168(ZEXT816(8) * ZEXT816(uVar2) >> 0x40,0) != 0) {
        uVar5 = 0xffffffffffffffff;
    }
    local_10 = FUN_14018b280(uVar5,0);
    if (uVar2 != 0) {
        uVar7 = uVar9;
        if (1 < uVar2) {
            uVar6 = uVar9;
            do {
                uVar7 = uVar6 + 2;
                puVar1 = (ulonglong *)(local_10 + -0x10 + uVar7 * 8);
                *puVar1 = uVar6;
                puVar1[1] = uVar6 + 1;
                uVar6 = uVar7;
            } while (uVar7 < uVar2 - ((uint)uVar2 & 1));
        }
        for (; uVar7 < uVar2; uVar7 = uVar7 + 1) {
            *(ulonglong *)(local_10 + uVar7 * 8) = uVar7;
        }
    }
    FUN_14001fec0(&LAB_140776d60,local_10,uVar2,&local_28);
    lVar3 = param_1[1];
    if (lVar3 == 0) {
        puVar10 = (undefined8 *)0x0;
    }
    else {
        puVar8 = (undefined8 *)FUN_14018b280(lVar3 * 0xc + 0x10,0);
        if (puVar8 == (undefined8 *)0x0) {
            puVar10 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar8[1] = lVar3;
            puVar10 = puVar8 + 2;
            *puVar8 = &PTR_LAB_140b55060;
        }
    }
    puVar8 = puVar10;
    if (param_1[1] != 0) {
        do {
            uVar9 = uVar9 + 1;
            lVar4 = *(longlong *)(local_10 + -8 + uVar9 * 8);
            lVar3 = *param_1 + lVar4 * 0xc;
            *(undefined4 *)puVar8 = *(undefined4 *)(*param_1 + lVar4 * 0xc);
            *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)(lVar3 + 4);
            *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(lVar3 + 8);
            puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
        } while (uVar9 < (ulonglong)param_1[1]);
    }
    lVar3 = *param_1;
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    *param_1 = (longlong)puVar10;
    FUN_14018b900(local_10,0);
    return;
}



longlong * FUN_1407764f0(longlong *param_1,longlong *param_2)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    ulonglong uVar5;

    lVar2 = param_2[1];
    param_1[1] = lVar2;
    if (lVar2 == 0) {
        puVar4 = (undefined8 *)0x0;
    }
    else {
        puVar3 = (undefined8 *)FUN_14018b280(lVar2 * 8 + 0x10,0);
        if (puVar3 == (undefined8 *)0x0) {
            puVar4 = (undefined8 *)&DAT_00000010;
        }
        else {
            puVar3[1] = lVar2;
            puVar4 = puVar3 + 2;
            *puVar3 = &PTR_LAB_140b55060;
        }
    }
    uVar5 = 0;
    *param_1 = (longlong)puVar4;
    if (param_1[1] != 0) {
        do {
            puVar1 = (undefined4 *)(*param_1 + uVar5 * 8);
            if (puVar1 != (undefined4 *)0x0) {
                lVar2 = *param_2;
                *puVar1 = *(undefined4 *)(lVar2 + uVar5 * 8);
                puVar1[1] = *(undefined4 *)(lVar2 + uVar5 * 8 + 4);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < (ulonglong)param_1[1]);
    }
    return param_1;
}



void FUN_1407765a0(longlong *param_1)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    ulonglong uVar9;
    undefined8 *puVar10;
    longlong local_28;
    undefined *local_20;
    undefined8 local_18;
    longlong local_10;

    uVar2 = param_1[1];
    if (1 < uVar2) {
        local_28 = *param_1;
        uVar9 = 0;
        local_20 = &LAB_14076efc0;
        local_18 = 0;
        uVar5 = SUB168(ZEXT816(8) * ZEXT816(uVar2),0);
        if (SUB168(ZEXT816(8) * ZEXT816(uVar2) >> 0x40,0) != 0) {
            uVar5 = 0xffffffffffffffff;
        }
        local_10 = FUN_14018b280(uVar5,0);
        if (uVar2 != 0) {
            uVar7 = uVar9;
            if (1 < uVar2) {
                uVar6 = uVar9;
                do {
                    uVar7 = uVar6 + 2;
                    puVar1 = (ulonglong *)(local_10 + -0x10 + uVar7 * 8);
                    *puVar1 = uVar6;
                    puVar1[1] = uVar6 + 1;
                    uVar6 = uVar7;
                } while (uVar7 < uVar2 - ((uint)uVar2 & 1));
            }
            for (; uVar7 < uVar2; uVar7 = uVar7 + 1) {
                *(ulonglong *)(local_10 + uVar7 * 8) = uVar7;
            }
        }
        FUN_14001fec0(&LAB_14004f5f0,local_10,uVar2,&local_28);
        lVar3 = param_1[1];
        if (lVar3 == 0) {
            puVar10 = (undefined8 *)0x0;
        }
        else {
            puVar8 = (undefined8 *)FUN_14018b280(lVar3 * 8 + 0x10,0);
            if (puVar8 == (undefined8 *)0x0) {
                puVar10 = (undefined8 *)&DAT_00000010;
            }
            else {
                puVar8[1] = lVar3;
                puVar10 = puVar8 + 2;
                *puVar8 = &PTR_LAB_140b55060;
            }
        }
        if (param_1[1] != 0) {
            puVar8 = puVar10;
            do {
                if (puVar8 != (undefined8 *)0x0) {
                    lVar3 = *(longlong *)((longlong)puVar8 + (local_10 - (longlong)puVar10));
                    lVar4 = *param_1;
                    *(undefined4 *)puVar8 = *(undefined4 *)(lVar4 + lVar3 * 8);
                    *(undefined4 *)((longlong)puVar8 + 4) = *(undefined4 *)(lVar4 + lVar3 * 8 + 4);
                }
                uVar9 = uVar9 + 1;
                puVar8 = puVar8 + 1;
            } while (uVar9 < (ulonglong)param_1[1]);
        }
        lVar3 = *param_1;
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *param_1 = (longlong)puVar10;
        FUN_14018b900(local_10,0);
    }
    return;
}



longlong FUN_140776730(longlong *param_1,undefined4 *param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 *puVar3;
    undefined4 *puVar4;
    undefined4 *puVar5;
    ulonglong uVar6;

    lVar1 = param_1[1];
    puVar3 = (undefined4 *)FUN_14018db00(*param_1,lVar1 + 1);
    puVar4 = puVar3 + lVar1 * 3;
    if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_2;
        puVar4[1] = param_2[1];
        puVar4[2] = param_2[2];
    }
    if ((undefined4 *)*param_1 != puVar3) {
        uVar6 = 0;
        if (param_1[1] != 0) {
            puVar4 = puVar3;
            do {
                if (puVar4 != (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)((longlong)puVar4 + (*param_1 - (longlong)puVar3));
                    *puVar4 = *puVar5;
                    puVar4[1] = puVar5[1];
                    puVar4[2] = puVar5[2];
                }
                uVar6 = uVar6 + 1;
                puVar4 = puVar4 + 3;
            } while (uVar6 < (ulonglong)param_1[1]);
        }
        lVar2 = *param_1;
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        *param_1 = (longlong)puVar3;
    }
    param_1[1] = lVar1 + 1;
    return lVar1;
}



longlong FUN_140776810(longlong param_1,uint *param_2)

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
    FUN_140776a40(param_1,local_res18,&local_res8);
    return lVar4;
}


