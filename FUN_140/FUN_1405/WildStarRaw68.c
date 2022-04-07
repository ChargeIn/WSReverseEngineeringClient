//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1405cae70(longlong *param_1)

{
    undefined8 uVar1;
    longlong lVar2;

    FUN_1400b6120(*param_1 + 0x238);
    uVar1 = DAT_140c65898;
    lVar2 = FUN_1403d90d0(DAT_140c65898);
    if (lVar2 != 0) {
        FUN_1403d9590(uVar1);
    }
    if ((longlong *)param_1[4] != (longlong *)0x0) {
        *(longlong *)param_1[4] = param_1[5];
    }
    if (param_1[5] != 0) {
        *(longlong *)(param_1[5] + 0x20) = param_1[4];
    }
    param_1[4] = 0;
    param_1[5] = 0;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        *(longlong *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(longlong *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[3] = 0;
    param_1[2] = 0;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405caf20(longlong *param_1,longlong param_2,longlong param_3)

{
    longlong **pplVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    int iVar4;
    undefined4 uVar5;
    int iVar6;
    undefined4 uVar7;
    undefined4 *puVar8;
    ulonglong uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong **pplVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    ulonglong uVar15;
    ulonglong uVar16;
    undefined8 uVar17;
    uint uVar18;
    ulonglong uVar19;
    undefined auStack792 [32];
    undefined2 local_2f8 [4];
    int **local_2f0;
    longlong *local_2e8;
    undefined4 local_2e0;
    undefined8 local_2dc;
    undefined4 *local_2d0;
    longlong local_2c8;
    undefined4 local_2b8;
    undefined4 local_2b4;
    undefined8 local_2b0;
    undefined4 local_2a8;
    undefined2 *local_2a0;
    uint local_298;
    undefined4 local_294;
    uint local_290;
    undefined2 *local_270;
    short local_258;
    longlong local_250;
    byte local_238;
    undefined local_237;
    undefined *local_230;
    undefined2 local_224;
    undefined4 *local_220;
    undefined local_218;
    undefined8 local_210;
    undefined local_208;
    ulonglong local_200;
    undefined4 local_1e4;
    undefined4 local_1e0;
    undefined4 local_198;
    undefined4 local_194;
    undefined4 local_190;
    undefined local_18c;
    byte local_118;
    undefined local_117;
    undefined *local_110;
    undefined2 local_104;
    undefined4 *local_100;
    undefined local_f8;
    undefined8 local_f0;
    undefined4 local_a8;
    longlong local_a0;
    int local_98;
    undefined4 local_80;
    undefined4 local_7c;
    undefined local_78 [16];
    undefined local_68 [16];
    ulonglong local_58;

    local_58 = DAT_140c0f7b0 ^ (ulonglong)auStack792;
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x1c);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_3 + 0x18);
    uVar13 = 0;
    uVar7 = *(undefined4 *)(param_3 + 0x10);
    uVar5 = *(undefined4 *)(param_3 + 0xc);
    local_2f8[0] = 0;
    local_2dc = 8;
    local_2e8 = param_1;
    local_2c8 = param_3;
    puVar8 = (undefined4 *)FUN_14018c320(0,0x240,8);
    *puVar8 = 2;
    puVar8[2] = uVar5;
    puVar8[3] = uVar7;
    local_2e0 = 3;
    puVar8[4] = 0;
    uVar5 = 0;
    puVar8[5] = 0;
    puVar8[0x12] = 0x1a;
    puVar8[0x14] = 1;
    uVar7 = *(undefined4 *)(param_3 + 0x20);
    puVar8[0x24] = 0x1b;
    puVar8[0x26] = uVar7;
    local_2d0 = puVar8;
    if ((*(byte *)(param_3 + 8) & 1) == 0) {
        if ((*(int *)(param_3 + 0x20) != 3) && (lVar10 = FUN_1404835c0(DAT_140c65918), lVar10 != 0)) {
            local_68 = ZEXT1216(*(undefined (*) [12])(param_3 + 0xc));
            iVar4 = FUN_1405cb6b0();
            puVar8 = local_2d0;
            if (iVar4 < 0) goto LAB_1405cb4b5;
        }
        local_78 = ZEXT816(1) << 0x40;
        FUN_1407e4830(&local_198,0,0x120);
        lVar10 = DAT_140c65918;
        local_198 = *(undefined4 *)((longlong)param_1 + 0xc);
        local_98 = *(int *)(param_3 + 0x30);
        local_194 = 0;
        local_a0 = *(longlong *)(param_3 + 0x28);
        if ((local_a0 != 0) || (local_a8 = 0, local_98 != 0)) {
            local_a8 = 1;
        }
        local_190 = *(undefined4 *)(param_1 + 1);
        local_110 = local_78;
        local_104 = (undefined2)local_2e0;
        local_18c = 0;
        local_117 = 1;
        local_f8 = 0;
        local_f0 = 0;
        local_118 = local_118 | (*(byte *)(param_3 + 8) & 0xfe) << 5 | 1;
        local_100 = puVar8;
        lVar11 = FUN_1404835c0(DAT_140c65918);
        if ((lVar11 != 0) && (*(int *)(lVar11 + 0x15c) != 0)) {
            uVar17 = FUN_140484600(lVar10 + 0x50);
            puVar8 = (undefined4 *)FUN_1404846c0(uVar17);
            if (puVar8 != (undefined4 *)0x0) {
                local_80 = *puVar8;
            }
        }
        lVar10 = DAT_140c65918;
        lVar11 = FUN_1404835c0(DAT_140c65918,*(undefined4 *)(param_1 + 1));
        if ((lVar11 != 0) && (*(int *)(lVar11 + 0x160) != 0)) {
            uVar17 = FUN_140484600(lVar10 + 0x70);
            puVar8 = (undefined4 *)FUN_1404846c0(uVar17);
            if (puVar8 != (undefined4 *)0x0) {
                local_7c = *puVar8;
            }
        }
        iVar4 = FUN_1403d9760(DAT_140c65898,&local_198);
        if (iVar4 < 0) goto LAB_1405cb4b5;
    }
    else {
        if (*(int *)(param_3 + 0x20) != 3) {
            uVar17 = 0x4200;
            if (*(int *)(param_3 + 0x20) == 2) {
                uVar17 = 0x5200;
            }
            local_78 = ZEXT1216(*(undefined (*) [12])(param_3 + 0xc));
            iVar4 = FUN_1405cb6b0(0x5200,local_78,uVar17,&local_2e0);
            if (iVar4 < 0) goto LAB_1405cb4b5;
        }
        local_220 = local_2d0;
        local_68 = ZEXT816(1) << 0x40;
        FUN_1407e4830(&local_2b8,0,0x120);
        local_2b8 = *(undefined4 *)((longlong)param_1 + 0xc);
        local_2b4 = 0x14;
        local_237 = 1;
        local_2b0 = CONCAT44(local_2b0._4_4_,*(undefined4 *)(param_1 + 1)) & 0xffffff00ffffffff;
        local_230 = local_68;
        local_218 = 0;
        local_224 = (undefined2)local_2e0;
        local_210 = 0;
        local_238 = local_238 | (*(byte *)(param_3 + 8) & 0xfe) << 5 | 1;
        lVar10 = *(longlong *)(DAT_140c65898 + 0x78);
        local_78 = CONCAT88(local_78._8_8_,lVar10);
        if (lVar10 == 0) goto LAB_1405cb4b5;
        local_1e4 = uVar5;
        if (*(longlong **)(lVar10 + 0x118) != (longlong *)0x0) {
            local_1e4 = (**(code **)(**(longlong **)(lVar10 + 0x118) + 0x18))();
        }
        if (*(longlong **)(lVar10 + 0x110) != (longlong *)0x0) {
            uVar5 = (**(code **)(**(longlong **)(lVar10 + 0x110) + 0x18))();
        }
        local_2a0 = &DAT_140b7b704;
        if (*(undefined2 **)(lVar10 + 0x10) != (undefined2 *)0x0) {
            local_2a0 = *(undefined2 **)(lVar10 + 0x10);
        }
        local_270 = local_2f8;
        if (*(undefined2 **)(lVar10 + 0x90) != (undefined2 *)0x0) {
            local_270 = *(undefined2 **)(lVar10 + 0x90);
        }
        local_298 = *(uint *)(lVar10 + 0xd8);
        local_294 = *(undefined4 *)(lVar10 + 0xdc);
        local_290 = *(uint *)(lVar10 + 0x34);
        local_2b0 = *(ulonglong *)(lVar10 + 0x1a8);
        local_2a8 = *(undefined4 *)(lVar10 + 0x1a0);
        plVar2 = *(longlong **)(lVar10 + 0xcc0);
        uVar15 = uVar13;
        uVar19 = uVar13;
        local_1e0 = uVar5;
        if (plVar2 == (longlong *)0x0) goto LAB_1405cb4b5;
        do {
            local_2f0 = (int **)(**(code **)(*plVar2 + 0x40))(plVar2,uVar19);
            uVar14 = uVar13;
            uVar16 = uVar15;
            if ((*local_2f0 != (int *)0x0) && (**local_2f0 != 0)) {
                uVar14 = uVar13 + 1;
                if ((uVar13 <= uVar14) &&
                    ((uVar9 = FUN_14018db00(uVar15,uVar14,0x10), uVar15 != uVar9 &&
                                                                 (FUN_1407db590(uVar9,uVar15,uVar13 << 4), uVar16 = uVar9, uVar15 != 0)))) {
                    (**(code **)(*(longlong *)(uVar15 - 0x10) + 8))();
                }
                *(int *)(uVar16 + uVar13 * 0x10) = (int)uVar19;
                iVar4 = **local_2f0;
                *(undefined4 *)(uVar16 + 8 + uVar13 * 0x10) = 0;
                *(int *)(uVar16 + 4 + uVar13 * 0x10) = iVar4;
                *(undefined4 *)(uVar16 + 0xc + uVar13 * 0x10) = *(undefined4 *)(local_2f0 + 1);
            }
            iVar4 = 0;
            uVar18 = (int)uVar19 + 1;
            uVar13 = uVar14;
            uVar15 = uVar16;
            uVar19 = (ulonglong)uVar18;
        } while (uVar18 < 0x48);
        lVar10 = DAT_140c658e8;
        if ((local_298 < 0x11) && (local_290 < 3)) {
            lVar10 = (longlong)(int)local_290 * 0x50 +
                                    *(longlong *)
                                            ((longlong)(int)local_298 * 0x20 + 8 + *(longlong *)(DAT_140c658e8 + 0x58));
        }
        local_258 = 0;
        iVar6 = iVar4;
        for (puVar3 = (undefined8 *)**(undefined8 **)(lVar10 + 8);
             puVar3 != *(undefined8 **)(lVar10 + 8); puVar3 = (undefined8 *)*puVar3) {
            iVar6 = iVar6 + 1;
            local_258 = (short)iVar6;
        }
        if (local_258 != 0) {
            local_250 = local_78._0_8_[0x1a6];
            local_258 = (short)((longlong)
                    (ulonglong)
                    (uint)(*(int *)(local_78._0_8_ + 0x1a7) - *(int *)(local_78._0_8_ + 0x1a6)
            ) >> 2);
        }
        local_208 = 0xff;
        if (uVar14 < 0xffffffff) {
            local_208 = (char)uVar14;
        }
        local_200 = uVar16;
        iVar6 = FUN_1403d9760(DAT_140c65898,&local_2b8);
        if (iVar6 < 0) {
            if (uVar16 != 0) {
                (**(code **)(*(longlong *)(uVar16 - 0x10) + 8))(uVar16 - 0x10);
            }
            goto LAB_1405cb4b5;
        }
        if ((*(int *)(local_78._0_8_ + 0x1e) != 0) &&
            (lVar10 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)local_2e8 + 0xc)),
                    lVar10 != 0)) {
            iVar6 = iVar4;
            if ((int *)local_78._0_8_[0x1a1] != (int *)0x0) {
                iVar6 = *(int *)local_78._0_8_[0x1a1];
            }
            FUN_14047c210(lVar10,iVar6);
            if ((int *)local_78._0_8_[0x1a2] != (int *)0x0) {
                iVar4 = *(int *)local_78._0_8_[0x1a2];
            }
            FUN_14047c320(lVar10,iVar4);
            uVar7 = (**(code **)(*local_78._0_8_ + 8))(local_78._0_8_);
            uVar17 = FUN_1404835c0(DAT_140c65918,uVar7);
            *(undefined4 *)(lVar10 + 0x20) = uVar7;
            *(undefined4 *)(lVar10 + 0xf0) = 1;
            *(undefined8 *)(lVar10 + 0x18) = uVar17;
            *(undefined4 *)(lVar10 + 0xd18) = 1;
        }
        param_3 = local_2c8;
        param_1 = local_2e8;
        if (uVar16 != 0) {
            (**(code **)(*(longlong *)(uVar16 - 0x10) + 8))(uVar16 - 0x10);
            param_3 = local_2c8;
            param_1 = local_2e8;
        }
    }
    lVar10 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0xc));
    if (lVar10 != 0) {
        if ((*(longlong *)(lVar10 + 0x16e8) == 0) &&
            (pplVar12 = (longlong **)(*param_1 + 0x260), param_1[4] == 0)) {
            param_1[4] = (longlong)pplVar12;
            pplVar1 = (longlong **)(param_1 + 5);
            *pplVar1 = *pplVar12;
            *pplVar12 = param_1;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[4] = (longlong)pplVar1;
            }
        }
        FUN_140470650(lVar10,(*(byte *)(param_3 + 8) & 8) == 0,1);
        *(undefined4 *)(lVar10 + 0xcd8) = *(undefined4 *)(param_3 + 0x34);
        lVar11 = *param_1;
        if (((*(int *)(lVar11 + 0x24) != 0) || (*(int *)(lVar11 + 0x1c) != 0)) ||
            (*(longlong *)(lVar11 + 0x1f0) != 0)) {
            plVar2 = *(longlong **)(lVar10 + 0x16e8);
            *(int *)(lVar10 + 0x1338) = *(int *)(lVar10 + 0x1338) + 1;
            if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x188))(plVar2,*(int *)(lVar10 + 0x1338) != 0);
            }
        }
    }
    LAB_1405cb4b5:
    FUN_14079a4f0(&local_2e0);
    FUN_14018b900(local_2d0,0);
    FUN_1407db4f0(local_58 ^ (ulonglong)auStack792);
    return;
}



void FUN_1405cb6b0(undefined8 param_1,float *param_2,uint param_3,uint *param_4)

{
    float fVar1;
    uint uVar2;
    longlong *plVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    undefined auStack312 [32];
    undefined8 local_118;
    undefined local_108 [16];
    undefined local_f8 [32];
    float local_d8;
    float local_68;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack312;
    plVar3 = *(longlong **)(DAT_140c65898 + 0x7248);
    if (plVar3 == (longlong *)0x0) goto LAB_1405cb849;
    local_118 = 0;
    local_108 = CONCAT412(param_2[3] + 0.0,
                          CONCAT48(param_2[2] + 0.0,CONCAT44(param_2[1] + 0.5,*param_2 + 0.0)));
    iVar5 = (**(code **)(*plVar3 + 0x1b8))(plVar3,local_108,local_f8,0x41);
    if (iVar5 == 0) goto LAB_1405cb849;
    fVar1 = param_2[1];
    if ((local_68 <= fVar1) || (fVar1 < local_d8)) {
        if (local_d8 <= local_68) {
            local_d8 = local_68;
        }
        if (fVar1 <= local_d8 + 1.0) {
            if ((param_3 & 0x20) == 0) {
                if ((param_3 >> 0xc & 1) == 0) {
                    if ((param_3 >> 0xe & 1) != 0) goto LAB_1405cb7e6;
                    if ((param_3 >> 9 & 1) == 0) {
                        uVar2 = param_4[1];
                        if (*param_4 == uVar2) {
                            if (uVar2 == 0) {
                                uVar6 = 8;
                            }
                            else {
                                uVar6 = (ulonglong)(uVar2 * 2);
                            }
                            param_4[1] = (uint)uVar6;
                            uVar7 = FUN_14018c320(*(undefined8 *)(param_4 + 4),uVar6 * 0x48,8);
                            *(undefined8 *)(param_4 + 4) = uVar7;
                        }
                        uVar2 = *param_4;
                        lVar4 = *(longlong *)(param_4 + 4);
                        *param_4 = uVar2 + 1;
                        *(undefined4 *)(lVar4 + (ulonglong)uVar2 * 0x48) = 0x1d;
                        *(undefined4 *)(lVar4 + 8 + (ulonglong)uVar2 * 0x48) = 0;
                        goto LAB_1405cb849;
                    }
                    goto LAB_1405cb7b3;
                }
                goto LAB_1405cb7d1;
            }
        }
        else {
            if ((param_3 >> 0xc & 1) != 0) {
                LAB_1405cb7d1:
                FUN_14079a990(param_4,2);
                goto LAB_1405cb849;
            }
            if ((param_3 & 0x20) == 0) {
                if ((param_3 >> 0xe & 1) != 0) goto LAB_1405cb7e6;
                if ((param_3 >> 9 & 1) == 0) goto LAB_1405cb849;
                goto LAB_1405cb7b3;
            }
        }
    }
    else {
        if ((param_3 >> 9 & 1) != 0) {
            LAB_1405cb7b3:
            FUN_14079a990(param_4,1);
            goto LAB_1405cb849;
        }
        if ((param_3 >> 0xe & 1) != 0) {
            LAB_1405cb7e6:
            FUN_14079a990(param_4,0);
            goto LAB_1405cb849;
        }
        if ((param_3 >> 0xc & 1) != 0) goto LAB_1405cb7d1;
        if ((param_3 & 0x20) == 0) goto LAB_1405cb849;
    }
    FUN_14079a990(param_4,3);
    LAB_1405cb849:
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack312);
    return;
}



int FUN_1405cb870(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
    undefined4 uVar1;
    int iVar2;
    int iVar3;
    undefined8 local_38;
    ulonglong local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;

    *param_1 = param_2;
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_3 + 0x20);
    local_38 = CONCAT44(*(undefined4 *)(param_3 + 8),uVar1);
    local_30 = (ulonglong)*(uint *)(param_3 + 0x1c);
    local_20 = *(undefined8 *)(param_3 + 0xc);
    local_28 = 0;
    local_18 = *(undefined4 *)(param_3 + 0x14);
    iVar2 = FUN_140577660(DAT_140c65b78,&local_38);
    iVar3 = 0;
    if (iVar2 < 0) {
        iVar3 = iVar2;
    }
    return iVar3;
}



void FUN_1405cb900(longlong *param_1)

{
    ulonglong *puVar1;
    longlong lVar2;
    int iVar3;
    ulonglong uVar4;
    undefined4 local_res8 [2];

    FUN_1400b6120(*param_1 + 0x2b0);
    lVar2 = DAT_140c65bb0;
    local_res8[0] = *(undefined4 *)(param_1 + 1);
    uVar4 = (**(code **)(DAT_140c65bb0 + 0x28))(local_res8);
    puVar1 = *(ulonglong **)(*(longlong *)(lVar2 + 0x20) + (uVar4 % *(ulonglong *)(lVar2 + 0x18)) * 8)
            ;
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1405cb995:
            if ((longlong *)param_1[2] != (longlong *)0x0) {
                *(longlong *)param_1[2] = param_1[3];
            }
            if (param_1[3] != 0) {
                *(longlong *)(param_1[3] + 0x10) = param_1[2];
            }
            param_1[3] = 0;
            param_1[2] = 0;
            return;
        }
        if ((uVar4 == *puVar1) &&
            (iVar3 = (**(code **)(lVar2 + 0x30))(local_res8,puVar1 + 2), iVar3 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                FUN_140624200(puVar1[3]);
                FUN_1400b6120(lVar2 + 0x10,local_res8);
            }
            goto LAB_1405cb995;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



int FUN_1405cb9e0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    undefined4 local_38;
    undefined4 local_34;
    undefined8 local_30;
    undefined4 local_28;
    undefined4 local_24;
    undefined8 local_20;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;

    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 0x14);
    FUN_1407e4830(&local_38,0,0x2c);
    local_14 = *(undefined4 *)(param_3 + 0x14);
    local_34 = *(undefined4 *)(param_3 + 8);
    local_24 = *(undefined4 *)(param_3 + 0xc);
    local_38 = *(undefined4 *)(param_3 + 0x10);
    local_10 = 0;
    lVar2 = FUN_1403d90d0();
    if (lVar2 == 0) {
        local_30 = 0;
        local_28 = 0;
    }
    else {
        local_30 = *(undefined8 *)(lVar2 + 0x11e0);
        local_28 = *(undefined4 *)(lVar2 + 0x11e8);
    }
    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_3 + 0xc));
    if (lVar2 == 0) {
        local_20 = 0;
        local_18 = 0;
    }
    else {
        local_20 = *(undefined8 *)(lVar2 + 0x11e0);
        local_18 = *(undefined4 *)(lVar2 + 0x11e8);
    }
    iVar1 = FUN_140600e10(DAT_140c65bb0,&local_38);
    iVar3 = 0;
    if (iVar1 < 0) {
        iVar3 = iVar1;
    }
    return iVar3;
}



undefined8 * FUN_1405cbae0(undefined8 *param_1)

{
    undefined8 uVar1;
    undefined *puVar2;

    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 5;
    uVar1 = FUN_14018b280(0x48,0);
    param_1[0x11] = uVar1;
    *(undefined8 *)uVar1 = uVar1;
    *(undefined8 *)(param_1[0x11] + 8) = param_1[0x11];
    uVar1 = FUN_14018b280(0x48,0);
    param_1[0x13] = uVar1;
    *(undefined8 *)uVar1 = uVar1;
    *(undefined8 *)(param_1[0x13] + 8) = param_1[0x13];
    puVar2 = (undefined *)FUN_14018b280(0x28,0);
    param_1[0x16] = 0;
    param_1[0x15] = puVar2;
    *puVar2 = 0;
    *(undefined8 *)(param_1[0x15] + 8) = 0;
    *(undefined8 *)(param_1[0x15] + 0x10) = param_1[0x15];
    *(undefined8 *)(param_1[0x15] + 0x18) = param_1[0x15];
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(undefined4 *)(param_1 + 0x18) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    *(undefined4 *)(param_1 + 0x33) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x224) = 0;
    *(undefined4 *)(param_1 + 0x45) = 1000;
    param_1[0x46] = 0;
    FUN_1405cfae0(param_1 + 0x47);
    param_1[0x4c] = 0;
    param_1[0x4e] = 0;
    param_1[0x4d] = 0;
    param_1[0x4f] = 0;
    FUN_1400522f0(param_1 + 0x50);
    param_1[0x55] = 0;
    FUN_1400522f0(param_1 + 0x56);
    param_1[0x5c] = 0;
    param_1[0x5b] = 0;
    param_1[0x5e] = 0;
    param_1[0x5d] = 0;
    param_1[0x60] = 0;
    param_1[0x5f] = 0;
    param_1[0x61] = 0;
    param_1[0x62] = 0;
    return param_1;
}



void FUN_1405cbd30(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;

    plVar3 = (longlong *)**(longlong **)(param_1 + 0x88);
    if (plVar3 != *(longlong **)(param_1 + 0x88)) {
        do {
            plVar1 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x88));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 8) = *(longlong *)(param_1 + 0x88);
    FUN_1405ccb20(param_1);
    if (*(longlong *)(param_1 + 0x308) != 0) {
        FUN_1401a4a00();
    }
    lVar2 = *(longlong *)(param_1 + 0x2f8);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = *(longlong *)(param_1 + 0x2e8);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    lVar2 = *(longlong *)(param_1 + 0x2d8);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    FUN_140019490(param_1 + 0x2b0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x2c0),0);
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0x280);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x290),0);
    *(undefined8 *)(param_1 + 0x290) = 0;
    if (*(longlong *)(param_1 + 0x278) != 0) {
        FUN_1401a4a00();
    }
    lVar2 = *(longlong *)(param_1 + 0x268);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    if (*(longlong *)(param_1 + 0x260) != 0) {
        FUN_1401a4a00();
    }
    FUN_140019490(param_1 + 0x238);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x248),0);
    *(undefined8 *)(param_1 + 0x248) = 0;
    if (*(longlong *)(param_1 + 0x230) != 0) {
        FUN_1401a4a00();
    }
    FUN_140195d70((undefined4 *)(param_1 + 0x1e0));
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    if (*(undefined8 **)(param_1 + 0x1f0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x1f0) = *(undefined8 *)(param_1 + 0x1f8);
    }
    if (*(undefined8 **)(param_1 + 0x1f8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x1f8) = *(undefined8 *)(param_1 + 0x1f0);
    }
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined8 *)(param_1 + 0x1f8) = 0;
    FUN_140195d70((undefined4 *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x198) = 0;
    if (*(undefined8 **)(param_1 + 0x1a8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x1b0);
    }
    if (*(undefined8 **)(param_1 + 0x1b0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1a8);
    }
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    FUN_140195d70((undefined4 *)(param_1 + 0x150));
    *(undefined4 *)(param_1 + 0x150) = 0;
    if (*(undefined8 **)(param_1 + 0x160) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x168);
    }
    if (*(undefined8 **)(param_1 + 0x168) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x160);
    }
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    FUN_140195d70((undefined4 *)(param_1 + 0x108));
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*(undefined8 **)(param_1 + 0x118) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x120);
    }
    if (*(undefined8 **)(param_1 + 0x120) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    FUN_140195d70((undefined4 *)(param_1 + 0xc0));
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (*(undefined8 **)(param_1 + 0xd0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xd8);
    }
    if (*(undefined8 **)(param_1 + 0xd8) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_140008410(param_1 + 0xa0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xa8),0);
    plVar3 = (longlong *)**(longlong **)(param_1 + 0x98);
    if (plVar3 != *(longlong **)(param_1 + 0x98)) {
        do {
            plVar1 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x98));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x98);
    *(longlong *)(*(longlong *)(param_1 + 0x98) + 8) = *(longlong *)(param_1 + 0x98);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x98),0);
    plVar3 = (longlong *)**(longlong **)(param_1 + 0x88);
    if (plVar3 != *(longlong **)(param_1 + 0x88)) {
        do {
            plVar1 = (longlong *)*plVar3;
            FUN_14018b900(plVar3,0);
            plVar3 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x88));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x88);
    *(longlong *)(*(longlong *)(param_1 + 0x88) + 8) = *(longlong *)(param_1 + 0x88);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x88),0);
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405cc090(longlong param_1)

{
    ulonglong *puVar1;
    longlong **pplVar2;
    char cVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    ulonglong uVar7;
    undefined *puVar8;
    ulonglong uVar9;
    longlong *plVar10;
    ulonglong uVar11;
    float fVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined local_res8 [8];
    undefined local_res10 [8];
    undefined8 local_res18;
    undefined4 local_58 [2];
    longlong local_50;
    code *local_48;
    undefined8 local_40;

    uVar11 = 0;
    if (*(int *)(param_1 + 0x7c) != 0) {
        for (lVar6 = *(longlong *)(param_1 + 0x230); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
            lVar5 = FUN_1403d90d0();
            if (lVar5 != 0) {
                if (*(int *)(lVar5 + 0x1338) != 0) {
                    *(int *)(lVar5 + 0x1338) = *(int *)(lVar5 + 0x1338) + -1;
                }
                if (*(longlong **)(lVar5 + 0x16e8) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar5 + 0x16e8) + 0x188))();
                }
            }
        }
        uVar9 = uVar11;
        if (*(longlong *)(param_1 + 0x270) != 0) {
            do {
                lVar6 = FUN_1403d90d0();
                if (lVar6 != 0) {
                    if (*(int *)(lVar6 + 0x1338) != 0) {
                        *(int *)(lVar6 + 0x1338) = *(int *)(lVar6 + 0x1338) + -1;
                    }
                    if (*(longlong **)(lVar6 + 0x16e8) != (longlong *)0x0) {
                        (**(code **)(**(longlong **)(lVar6 + 0x16e8) + 0x188))();
                    }
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(ulonglong *)(param_1 + 0x270));
        }
        *(undefined8 *)(param_1 + 0x270) = 0;
        *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    uVar9 = uVar11;
    if (*(longlong *)(param_1 + 0x2f0) != 0) {
        do {
            lVar6 = *(longlong *)(param_1 + 0x2e8) + uVar9 * 4;
            uVar7 = (**(code **)(param_1 + 0x298))(lVar6);
            for (puVar1 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x290) + (uVar7 % *(ulonglong *)(param_1 + 0x288)) * 8
                    ); puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
                if ((uVar7 == *puVar1) && (iVar4 = (**(code **)(param_1 + 0x2a0))(lVar6), iVar4 != 0)) {
                    if (((longlong **)(puVar1 + 3) != (longlong **)0x0) &&
                        (plVar10 = (longlong *)puVar1[3], plVar10 != (longlong *)0x0)) {
                        FUN_1400b6120(*plVar10 + 0x280);
                        FUN_140578050(DAT_140c65b78,*(undefined4 *)(plVar10 + 1),0);
                        if ((longlong *)plVar10[2] != (longlong *)0x0) {
                            *(longlong *)plVar10[2] = plVar10[3];
                        }
                        if (plVar10[3] != 0) {
                            *(longlong *)(plVar10[3] + 0x10) = plVar10[2];
                        }
                        plVar10[2] = 0;
                        plVar10[3] = 0;
                        FUN_14018b900(plVar10);
                    }
                    break;
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong *)(param_1 + 0x2f0));
    }
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    uVar9 = uVar11;
    if (*(longlong *)(param_1 + 0x300) != 0) {
        do {
            lVar6 = *(longlong *)(param_1 + 0x2f8) + uVar9 * 4;
            uVar7 = (**(code **)(param_1 + 0x2c8))(lVar6);
            for (puVar1 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x2c0) + (uVar7 % *(ulonglong *)(param_1 + 0x2b8)) * 8
                    ); puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
                if ((uVar7 == *puVar1) && (iVar4 = (**(code **)(param_1 + 0x2d0))(lVar6), iVar4 != 0)) {
                    if ((puVar1 + 3 != (ulonglong *)0x0) && (uVar7 = puVar1[3], uVar7 != 0)) {
                        FUN_1405cb900(uVar7);
                        FUN_14018b900(uVar7);
                    }
                    break;
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong *)(param_1 + 0x300));
    }
    *(undefined8 *)(param_1 + 0x300) = 0;
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
        do {
            lVar6 = *(longlong *)(param_1 + 0x2d8) + uVar11 * 4;
            uVar9 = (**(code **)(param_1 + 0x250))(lVar6);
            for (puVar1 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x248) + (uVar9 % *(ulonglong *)(param_1 + 0x240)) * 8
                    ); puVar1 != (ulonglong *)0x0; puVar1 = (ulonglong *)puVar1[1]) {
                if ((uVar9 == *puVar1) && (iVar4 = (**(code **)(param_1 + 600))(lVar6), iVar4 != 0)) {
                    if ((puVar1 + 3 != (ulonglong *)0x0) && (uVar9 = puVar1[3], uVar9 != 0)) {
                        FUN_1405cae70(uVar9);
                        FUN_14018b900(uVar9);
                    }
                    break;
                }
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 < *(ulonglong *)(param_1 + 0x2e0));
    }
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    if (((*(int *)(param_1 + 0x20) != 0) &&
         ((*(int *)(DAT_140c65898 + 0x7b48) - 0x3fU & 0xffffffbf) == 0)) &&
        (*(longlong *)(DAT_140c65898 + 0x71a8) == 0)) {
        *(undefined4 *)(param_1 + 0x20) = 0;
        local_58[0] = 0;
        local_48 = FUN_1405cd160;
        local_40 = 0;
        local_50 = param_1;
        FUN_140195960(param_1 + 0x150,*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x3c),local_58,4);
        iVar4 = *(int *)(param_1 + 0x3c);
        if ((iVar4 != 0) && (*(int *)(DAT_140c65898 + 0x7b48) != 0x3f)) {
            if (*(int *)(param_1 + 0x44) == 2) {
                uVar13 = _DAT_140c777d0;
                uVar14 = uRam0000000140c777d4;
                uVar15 = uRam0000000140c777d8;
                uVar16 = uRam0000000140c777dc;
                FUN_140195d70(param_1 + 0x1e0);
                lVar6 = DAT_140c65898;
                if (iVar4 < 0) {
                    *(undefined4 *)(DAT_140c65898 + 0x7474) = *(undefined4 *)(DAT_140c65898 + 0x7478);
                }
                else {
                    *(int *)(DAT_140c65898 + 0x7474) = iVar4;
                }
                *(undefined4 *)(lVar6 + 0x7470) = 0x7fffffff;
                *(undefined (*) [16])(lVar6 + 0x7460) =
                        CONCAT412(uVar16,CONCAT48(uVar15,CONCAT44(uVar14,uVar13)));
                *(undefined4 *)(lVar6 + 0x7400) = 1;
                plVar10 = (longlong *)(lVar6 + 0x7408);
                fVar12 = 1000.0 / (float)*(int *)(lVar6 + 0x7474);
                if ((*(float *)(lVar6 + 0x7420) != 1.0) ||
                    ((float)((uint)fVar12 & 0x7fffffff) != *(float *)(lVar6 + 0x7424))) {
                    *(undefined4 *)(lVar6 + 0x7420) = 0x3f800000;
                    if (fVar12 == 0.0) {
                        *(undefined4 *)(lVar6 + 0x7418) = 0x3f800000;
                        LAB_1405cc4f3:
                        *(undefined4 *)(lVar6 + 0x7424) = 0;
                    }
                    else {
                        if (*(float *)(lVar6 + 0x7418) == 1.0) goto LAB_1405cc4f3;
                        *(uint *)(lVar6 + 0x7424) = (uint)fVar12 & 0x7fffffff;
                    }
                    *(int *)(lVar6 + 0x7410) = DAT_140c636a8;
                }
                (**(code **)*plVar10)(plVar10);
                puVar8 = local_res8;
            }
            else {
                if (*(int *)(param_1 + 0x44) != 3) goto LAB_1405cc612;
                uVar13 = 0x3f800000;
                uVar14 = 0x3f800000;
                uVar15 = 0x3f800000;
                uVar16 = 0x3f800000;
                FUN_140195d70(param_1 + 0x1e0);
                lVar6 = DAT_140c65898;
                if (iVar4 < 0) {
                    *(undefined4 *)(DAT_140c65898 + 0x7474) = *(undefined4 *)(DAT_140c65898 + 0x7478);
                }
                else {
                    *(int *)(DAT_140c65898 + 0x7474) = iVar4;
                }
                *(undefined4 *)(lVar6 + 0x7470) = 0x7fffffff;
                *(undefined (*) [16])(lVar6 + 0x7460) =
                        CONCAT412(uVar16,CONCAT48(uVar15,CONCAT44(uVar14,uVar13)));
                *(undefined4 *)(lVar6 + 0x7400) = 1;
                plVar10 = (longlong *)(lVar6 + 0x7408);
                fVar12 = 1000.0 / (float)*(int *)(lVar6 + 0x7474);
                if ((*(float *)(lVar6 + 0x7420) != 1.0) ||
                    ((float)((uint)fVar12 & 0x7fffffff) != *(float *)(lVar6 + 0x7424))) {
                    *(undefined4 *)(lVar6 + 0x7420) = 0x3f800000;
                    if (fVar12 == 0.0) {
                        *(undefined4 *)(lVar6 + 0x7418) = 0x3f800000;
                        LAB_1405cc5de:
                        *(undefined4 *)(lVar6 + 0x7424) = 0;
                    }
                    else {
                        if (*(float *)(lVar6 + 0x7418) == 1.0) goto LAB_1405cc5de;
                        *(uint *)(lVar6 + 0x7424) = (uint)fVar12 & 0x7fffffff;
                    }
                    *(int *)(lVar6 + 0x7410) = DAT_140c636a8;
                }
                (**(code **)*plVar10)(plVar10);
                puVar8 = local_res10;
            }
            (**(code **)(*plVar10 + 8))(plVar10,puVar8);
        }
    }
    LAB_1405cc612:
    if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0x1c) != 0)) {
        for (pplVar2 = *(longlong ***)(param_1 + 0x308); pplVar2 != (longlong **)0x0;
             pplVar2 = (longlong **)pplVar2[3]) {
            if ((*pplVar2 != (longlong *)0x0) && (iVar4 = (**(code **)(**pplVar2 + 0x20))(), iVar4 != 0))
                goto LAB_1405cc773;
        }
        if ((((*(longlong *)(param_1 + 0x260) == 0) &&
              ((longlong *)**(longlong **)(param_1 + 0x98) == *(longlong **)(param_1 + 0x98))) &&
             (*(int *)(param_1 + 0x24) != 0)) && (*(longlong *)(param_1 + 0x160) == 0)) {
            local_58[0] = 0;
            if ((*(longlong *)(DAT_140c63650 + 0x738) == 0) ||
                (cVar3 = FUN_140100da0(*(longlong *)(DAT_140c63650 + 0x738),local_58), cVar3 != '\0')) {
                if (*(int *)(DAT_140c65898 + 0x7b48) == 0x3f) {
                    local_res18 = 0x141e1cc60;
                    FUN_1401a3130(5,2,&local_res18);
                    *(uint *)(DAT_140c65898 + 0x7b48) = *(uint *)(DAT_140c65898 + 0x7b48) | 0x40;
                }
                else {
                    *(undefined4 *)(param_1 + 0x1c) = 0;
                }
                goto LAB_1405cc773;
            }
        }
        if (*(longlong *)(param_1 + 0x260) != 0) {
            plVar10 = (longlong *)
                    FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(param_1 + 0x260) + 0xc));
            if (plVar10 != (longlong *)0x0) {
                if (plVar10[0x198] != 0) goto LAB_1405cc773;
                (**(code **)(*plVar10 + 8))(plVar10);
            }
            lVar6 = *(longlong *)(param_1 + 0x260);
            if (*(undefined8 **)(lVar6 + 0x20) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar6 + 0x20) = *(undefined8 *)(lVar6 + 0x28);
            }
            if (*(longlong *)(lVar6 + 0x28) != 0) {
                *(undefined8 *)(*(longlong *)(lVar6 + 0x28) + 0x20) = *(undefined8 *)(lVar6 + 0x20);
            }
            *(undefined8 *)(lVar6 + 0x20) = 0;
            *(undefined8 *)(lVar6 + 0x28) = 0;
        }
    }
    LAB_1405cc773:
    if (*(int *)(param_1 + 0x24) == 0) {
        if (((*(int *)(param_1 + 0x1c) == 0) && (*(longlong *)(param_1 + 0x1f0) == 0)) &&
            (*(int *)(DAT_140c65898 + 0x7b48) == 0x3f)) {
            local_res18 = 0x141e1cc70;
            FUN_1401a3130(5,2,&local_res18);
            *(uint *)(DAT_140c65898 + 0x7b48) = *(uint *)(DAT_140c65898 + 0x7b48) | 0x40;
        }
        if (*(int *)(param_1 + 0x24) == 0) goto LAB_1405cc861;
    }
    if ((*(int *)(param_1 + 0x1c) == 0) && (*(longlong *)(param_1 + 0x260) == 0)) {
        for (pplVar2 = *(longlong ***)(param_1 + 0x308); pplVar2 != (longlong **)0x0;
             pplVar2 = (longlong **)pplVar2[3]) {
            if ((*pplVar2 != (longlong *)0x0) && (iVar4 = (**(code **)(**pplVar2 + 0x20))(), iVar4 != 0))
                goto LAB_1405cc861;
        }
        for (lVar6 = *(longlong *)(param_1 + 0x230); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x18)) {
            lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar6 + 0xc));
            if (((lVar5 != 0) && (*(longlong **)(lVar5 + 0x16f0) != (longlong *)0x0)) &&
                (iVar4 = (**(code **)(**(longlong **)(lVar5 + 0x16f0) + 0x168))(), iVar4 == 0))
                goto LAB_1405cc861;
        }
        *(undefined4 *)(param_1 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x28) = 1;
    }
    LAB_1405cc861:
    if ((*(int *)(param_1 + 0x28) != 0) && (*(int *)(DAT_140c65898 + 0x28) == 0)) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        FUN_1405cca00(param_1);
    }
    if (*(int *)(param_1 + 0x18) != 0) {
        if (*(longlong *)(param_1 + 0x308) != 0) {
            do {
                pplVar2 = *(longlong ***)(param_1 + 0x308);
                if (0 < (*(int *)(pplVar2 + 1) - DAT_140c636a8) + *(int *)(param_1 + 0x18)) break;
                if (pplVar2 != (longlong **)0x0) {
                    if ((longlong **)pplVar2[2] != (longlong **)0x0) {
                        *pplVar2[2] = (longlong)pplVar2[3];
                    }
                    if (pplVar2[3] != (longlong *)0x0) {
                        pplVar2[3][2] = (longlong)pplVar2[2];
                    }
                    pplVar2[2] = (longlong *)0x0;
                    pplVar2[3] = (longlong *)0x0;
                    if (*pplVar2 != (longlong *)0x0) {
                        (**(code **)(**pplVar2 + 8))();
                    }
                    FUN_14018b900(pplVar2,0);
                }
            } while (*(longlong *)(param_1 + 0x308) != 0);
            if (*(longlong *)(param_1 + 0x308) != 0) {
                return;
            }
        }
        *(undefined8 *)(param_1 + 0x310) = 0;
    }
    return;
}



longlong * FUN_1405cc920(longlong *param_1)

{
    FUN_1400b6120(*param_1 + 0x280,param_1 + 1);
    FUN_140578050(DAT_140c65b78,*(undefined4 *)(param_1 + 1),0);
    if ((longlong *)param_1[2] != (longlong *)0x0) {
        *(longlong *)param_1[2] = param_1[3];
    }
    if (param_1[3] != 0) {
        *(longlong *)(param_1[3] + 0x10) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



void FUN_1405cc9a0(longlong param_1)

{
    int *piVar1;
    longlong lVar2;
    longlong lVar3;

    if (*(int *)(param_1 + 0x18) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x278);
        while (lVar3 != 0) {
            lVar2 = *(longlong *)(lVar3 + 0x18);
            piVar1 = (int *)(lVar3 + 0xc);
            lVar3 = lVar2;
            if (*piVar1 != 0) {
                FUN_1405cc920();
            }
        }
        return;
    }
    FUN_1405ccb20();
    return;
}



void FUN_1405cca00(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 local_28 [2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    FUN_140195d70(param_1 + 0x1e0);
    FUN_14053b9c0();
    *(undefined4 *)(param_1 + 0x18) = DAT_140c636a8;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    FUN_1405cd070(param_1);
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x7c) = 1;
    if (*(longlong *)(param_1 + 0x270) != 0) {
        do {
            lVar2 = FUN_1403d90d0(DAT_140c65898);
            if ((lVar2 != 0) && (*(longlong **)(lVar2 + 0x16e8) != (longlong *)0x0)) {
                (**(code **)(**(longlong **)(lVar2 + 0x16e8) + 0x128))();
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 0x270));
    }
    if (*(int *)(param_1 + 0x10) != 0) {
        local_28[0] = 0;
        local_18 = &LAB_1405cd150;
        local_10 = 0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x108,*(int *)(param_1 + 0x10),local_28,4);
    }
    lVar1 = DAT_140c65898;
    for (lVar2 = *(longlong *)(DAT_140c65898 + 0x6f30); lVar2 != 0;
         lVar2 = *(longlong *)(lVar2 + 0x60)) {
        if (*(longlong **)(lVar2 + 0x18b0) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(lVar2 + 0x18b0) + 0x3a8))();
        }
    }
    if (*(longlong *)(lVar1 + 0x6c50) != 0) {
        FUN_1406016c0(*(longlong *)(lVar1 + 0x6c50),0);
    }
    return;
}



void FUN_1405ccb20(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong **pplVar3;
    longlong lVar4;
    int *piVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    uVar7 = 0;
    uVar8 = uVar7;
    if (*(longlong *)(param_1 + 0x270) != 0) {
        do {
            lVar4 = FUN_1403d90d0(DAT_140c65898,
                                  *(undefined4 *)(*(longlong *)(param_1 + 0x268) + uVar8 * 4));
            if (lVar4 != 0) {
                if (*(int *)(lVar4 + 0x1338) != 0) {
                    *(int *)(lVar4 + 0x1338) = *(int *)(lVar4 + 0x1338) + -1;
                }
                if (*(longlong **)(lVar4 + 0x16e8) != (longlong *)0x0) {
                    (**(code **)(**(longlong **)(lVar4 + 0x16e8) + 0x188))();
                }
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong *)(param_1 + 0x270));
    }
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    lVar4 = *(longlong *)(param_1 + 0x230);
    while (lVar4 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x230);
        if (lVar4 != 0) {
            FUN_1405cae70(lVar4);
            FUN_14018b900(lVar4,0);
        }
        lVar4 = *(longlong *)(param_1 + 0x230);
    }
    lVar4 = *(longlong *)(param_1 + 0x278);
    while (lVar4 != 0) {
        plVar2 = *(longlong **)(param_1 + 0x278);
        if (plVar2 != (longlong *)0x0) {
            FUN_1400b6120(*plVar2 + 0x280,plVar2 + 1);
            FUN_140578050(DAT_140c65b78,*(undefined4 *)(plVar2 + 1),0);
            if ((longlong *)plVar2[2] != (longlong *)0x0) {
                *(longlong *)plVar2[2] = plVar2[3];
            }
            if (plVar2[3] != 0) {
                *(longlong *)(plVar2[3] + 0x10) = plVar2[2];
            }
            plVar2[2] = 0;
            plVar2[3] = 0;
            FUN_14018b900(plVar2,0);
        }
        lVar4 = *(longlong *)(param_1 + 0x278);
    }
    lVar4 = *(longlong *)(param_1 + 0x2a8);
    while (lVar4 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x2a8);
        if (lVar4 != 0) {
            FUN_1405cb900(lVar4);
            FUN_14018b900(lVar4,0);
        }
        lVar4 = *(longlong *)(param_1 + 0x2a8);
    }
    lVar4 = *(longlong *)(param_1 + 0x308);
    while (lVar4 != 0) {
        pplVar3 = *(longlong ***)(param_1 + 0x308);
        if (pplVar3 != (longlong **)0x0) {
            if ((longlong **)pplVar3[2] != (longlong **)0x0) {
                *pplVar3[2] = (longlong)pplVar3[3];
            }
            if (pplVar3[3] != (longlong *)0x0) {
                pplVar3[3][2] = (longlong)pplVar3[2];
            }
            pplVar3[2] = (longlong *)0x0;
            pplVar3[3] = (longlong *)0x0;
            if (*pplVar3 != (longlong *)0x0) {
                (**(code **)(**pplVar3 + 8))();
            }
            FUN_14018b900(pplVar3,0);
        }
        lVar4 = *(longlong *)(param_1 + 0x308);
    }
    *(undefined8 *)(param_1 + 0x310) = 0;
    uVar8 = uVar7;
    if (*(longlong *)(param_1 + 0x68) != 0) {
        do {
            iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + uVar8 * 4);
            if (iVar1 != 0) {
                FUN_1403eb690();
            }
            if (*(ulonglong *)(param_1 + 0x68) != 0) {
                piVar5 = *(int **)(param_1 + 0x60);
                uVar6 = uVar7;
                do {
                    if (*piVar5 == iVar1) {
                        FUN_1401c2f20(param_1 + 0x60);
                        break;
                    }
                    uVar6 = uVar6 + 1;
                    piVar5 = piVar5 + 1;
                } while (uVar6 < *(ulonglong *)(param_1 + 0x68));
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong *)(param_1 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_140712a40(*(longlong *)(param_1 + 0x70),0,0,0);
        if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(param_1 + 0x70) + 8))();
            *(undefined8 *)(param_1 + 0x70) = 0;
        }
    }
    lVar4 = DAT_140c65898;
    if (DAT_140c65898 != 0) {
        *(undefined4 *)(DAT_140c65898 + 0x7498) = 0;
        plVar2 = *(longlong **)(lVar4 + 0x7488);
        if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
            *(undefined8 *)(lVar4 + 0x7488) = 0;
        }
    }
    return;
}



undefined8 FUN_1405ccde0(longlong *param_1)

{
    float fVar1;

    if (*(longlong *)(*param_1 + 8) == 0) {
        if (((*(int *)((longlong)param_1 + 0x24) == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) &&
            (param_1[0x3e] == 0)) {
            return 0;
        }
        if (1 < *(int *)((longlong)param_1 + 0x44) - 2U) {
            return 0;
        }
        fVar1 = (float)(***(code ***)(DAT_140c65898 + 0x7408))();
        if (fVar1 <= 0.0) {
            return 0;
        }
    }
    if (*(int *)(param_1 + 10) != 0) {
        return 0;
    }
    return 1;
}



ulonglong FUN_1405cce50(longlong param_1,undefined4 param_2)

{
    ulonglong *puVar1;
    int iVar2;
    ulonglong uVar3;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar3 = (**(code **)(param_1 + 0x250))(local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x248) + (uVar3 % *(ulonglong *)(param_1 + 0x240)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return 0;
        }
        if ((uVar3 == *puVar1) &&
            (iVar2 = (**(code **)(param_1 + 600))(local_res10,puVar1 + 2), iVar2 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return 0;
    }
    return puVar1[3];
}



undefined8 FUN_1405ccee0(longlong param_1)

{
    longlong **pplVar1;
    int iVar2;

    pplVar1 = *(longlong ***)(param_1 + 0x308);
    while( true ) {
        if (pplVar1 == (longlong **)0x0) {
            return 0;
        }
        if ((*pplVar1 != (longlong *)0x0) && (iVar2 = (**(code **)(**pplVar1 + 0x20))(), iVar2 != 0))
            break;
        pplVar1 = (longlong **)pplVar1[3];
    }
    return 1;
}



void FUN_1405ccf20(longlong param_1,undefined8 *param_2)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    undefined8 *puVar3;

    *(int *)((longlong)param_2 + 4) = *(int *)((longlong)param_2 + 4) + *(int *)(param_1 + 0x54);
    if ((longlong *)**(longlong **)(param_1 + 0x88) == *(longlong **)(param_1 + 0x88)) {
        FUN_1405cfa10(param_1 + 0x80,param_2);
    }
    else {
        for (puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 0x88);
             puVar1 != *(undefined8 **)(param_1 + 0x88); puVar1 = (undefined8 *)*puVar1) {
            if (*(uint *)((longlong)param_2 + 4) <= *(uint *)((longlong)puVar1 + 0x14) &&
                *(uint *)((longlong)puVar1 + 0x14) != *(uint *)((longlong)param_2 + 4)) {
                puVar3 = (undefined8 *)FUN_14018b280(0x48);
                if (puVar3 + 2 != (undefined8 *)0x0) {
                    uVar2 = param_2[4];
                    puVar3[2] = *param_2;
                    puVar3[3] = param_2[1];
                    puVar3[4] = param_2[2];
                    puVar3[5] = param_2[3];
                    puVar3[6] = uVar2;
                    puVar3[7] = param_2[5];
                    puVar3[8] = param_2[6];
                }
                *puVar3 = puVar1;
                puVar3[1] = puVar1[1];
                *(undefined8 **)puVar1[1] = puVar3;
                puVar1[1] = puVar3;
                break;
            }
        }
        if (puVar1 == *(undefined8 **)(param_1 + 0x88)) {
            puVar3 = (undefined8 *)FUN_14018b280(0x48);
            if (puVar3 + 2 != (undefined8 *)0x0) {
                uVar2 = param_2[4];
                puVar3[2] = *param_2;
                puVar3[3] = param_2[1];
                puVar3[4] = param_2[2];
                puVar3[5] = param_2[3];
                puVar3[6] = uVar2;
                puVar3[7] = param_2[5];
                puVar3[8] = param_2[6];
            }
            *puVar3 = puVar1;
            puVar3[1] = puVar1[1];
            *(undefined8 **)puVar1[1] = puVar3;
            puVar1[1] = puVar3;
        }
    }
    if (*(int *)(param_1 + 0x18) != 0) {
        FUN_1405cd070(param_1);
        return;
    }
    return;
}



void FUN_1405cd070(longlong param_1)

{
    longlong **pplVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    uVar6 = DAT_140c636a8;
    if ((longlong *)**(longlong **)(param_1 + 0x88) != *(longlong **)(param_1 + 0x88)) {
        do {
            if (uVar6 < (uint)(*(int *)(**(longlong **)(param_1 + 0x88) + 0x14) + *(int *)(param_1 + 0x18)
            )) break;
            FUN_1405cd200(param_1,**(longlong **)(param_1 + 0x88) + 0x10);
            pplVar1 = *(longlong ***)(param_1 + 0x88);
            if ((longlong **)*pplVar1 != pplVar1) {
                plVar2 = *pplVar1;
                lVar3 = *plVar2;
                plVar4 = (longlong *)plVar2[1];
                *plVar4 = lVar3;
                *(longlong **)(lVar3 + 8) = plVar4;
                FUN_14018b900(plVar2,0);
            }
        } while ((longlong *)**(longlong **)(param_1 + 0x88) != *(longlong **)(param_1 + 0x88));
    }
    if ((*(int *)(param_1 + 0x24) == 0) &&
        (plVar2 = *(longlong **)(param_1 + 0x88), (longlong *)*plVar2 != plVar2)) {
        uVar7 = *(int *)(*plVar2 + 0x14) + *(int *)(param_1 + 0x18);
        local_18 = FUN_1405cd070;
        uVar5 = uVar6;
        if (uVar6 < uVar7) {
            uVar5 = uVar7;
        }
        local_28[0] = 0;
        local_10 = 0;
        local_20 = param_1;
        FUN_140195960(param_1 + 0xc0,uVar5 - uVar6,local_28,4);
    }
    return;
}



void FUN_1405cd160(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong *plVar4;

    if (((*(int *)(DAT_140c65898 + 0x7b48) - 0x3fU & 0xffffffbf) == 0) &&
        (*(longlong *)(DAT_140c65898 + 0x71a8) == 0)) {
        plVar4 = (longlong *)**(longlong **)(param_1 + 0x98);
        if (plVar4 != *(longlong **)(param_1 + 0x98)) {
            do {
                plVar1 = (longlong *)*plVar4;
                FUN_1405cd200(param_1,plVar4 + 2);
                lVar2 = *plVar4;
                plVar3 = (longlong *)plVar4[1];
                *plVar3 = lVar2;
                *(longlong **)(lVar2 + 8) = plVar3;
                FUN_14018b900(plVar4,0);
                plVar4 = plVar1;
            } while (plVar1 != (longlong *)*(longlong *)(param_1 + 0x98));
        }
        return;
    }
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(undefined8 *)(param_1 + 0x3c) = 0;
    return;
}



void FUN_1405cd200(undefined4 param_1,longlong *param_2,undefined4 *param_3,undefined8 param_4,
                   undefined8 param_5)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 uVar5;
    undefined auVar6 [12];
    undefined auVar7 [12];
    ulonglong uVar8;
    longlong lVar9;
    int *piVar10;

    switch(*param_3) {
        case 0:
            FUN_1405ce500(param_2,1);
            return;
        case 1:
            FUN_1405ce730();
            return;
        case 2:
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"StoryPanelDialog_Hide",&DAT_1409d1096);
            return;
        case 3:
            FUN_14062cd90(*param_2);
            return;
        case 4:
            FUN_14062cf20(*param_2);
            return;
        case 5:
            lVar9 = *(longlong *)(*param_2 + 8);
            if (lVar9 != 0) {
                auVar7 = *(undefined (*) [12])(param_3 + 5);
                auVar6 = *(undefined (*) [12])(param_3 + 2);
                *(undefined4 *)(lVar9 + 0x350) = 0;
                *(undefined (*) [16])(lVar9 + 0x360) = ZEXT1216(auVar6);
                *(undefined (*) [16])(lVar9 + 0x370) = ZEXT1216(auVar7);
                return;
            }
            break;
        case 6:
            lVar9 = *(longlong *)(*param_2 + 8);
            if ((lVar9 != 0) && (uVar5 = param_3[2], *(int *)(lVar9 + 0x2b0) == 0)) {
                *(undefined4 *)(lVar9 + 0x350) = 1;
                *(undefined4 *)(lVar9 + 0x360) = uVar5;
                return;
            }
            break;
        case 7:
            if (*(longlong *)(*param_2 + 8) != 0) {
                FUN_1405d3580(*(longlong *)(*param_2 + 8),param_3[2],param_3[3],param_5,param_3[5]);
                return;
            }
            break;
        case 8:
            lVar9 = *(longlong *)(*param_2 + 8);
            if (lVar9 != 0) {
                auVar7 = *(undefined (*) [12])(param_3 + 5);
                auVar6 = *(undefined (*) [12])(param_3 + 2);
                if (*(int *)(lVar9 + 0x2b0) == 0) {
                    *(undefined4 *)(lVar9 + 0x380) = 0;
                    *(undefined (*) [16])(lVar9 + 0x390) = ZEXT1216(auVar6);
                    *(undefined (*) [16])(lVar9 + 0x3a0) = ZEXT1216(auVar7);
                    return;
                }
            }
            break;
        case 9:
            lVar9 = *(longlong *)(*param_2 + 8);
            if ((lVar9 != 0) && (uVar5 = param_3[2], *(int *)(lVar9 + 0x2b0) == 0)) {
                *(undefined4 *)(lVar9 + 0x380) = 1;
                *(undefined4 *)(lVar9 + 0x390) = uVar5;
                return;
            }
            break;
        case 10:
            if (*(longlong *)(*param_2 + 8) != 0) {
                FUN_1405d3640(*(longlong *)(*param_2 + 8),param_3[2],param_3[3]);
                return;
            }
            break;
        case 0xb:
            lVar9 = *(longlong *)(*param_2 + 8);
            if ((lVar9 != 0) && (*(int *)(lVar9 + 0x2b0) == 0)) {
                FUN_1405d3700(lVar9,param_3[2],param_3[3],param_3[4],param_3[5]);
                return;
            }
            break;
        case 0xc:
            lVar9 = *(longlong *)(*param_2 + 8);
            if (lVar9 != 0) {
                uVar5 = param_3[5];
                uVar1 = param_3[3];
                uVar2 = param_3[4];
                uVar3 = param_3[2];
                if (*(int *)(lVar9 + 0x2b0) == 0) {
                    *(undefined4 *)(lVar9 + 0x350) = 3;
                    *(undefined4 *)(lVar9 + 0x360) = uVar3;
                    *(undefined4 *)(lVar9 + 0x364) = uVar1;
                    *(undefined4 *)(lVar9 + 0x368) = uVar2;
                    *(undefined4 *)(lVar9 + 0x36c) = uVar5;
                    return;
                }
            }
            break;
        case 0xd:
            FUN_140003460(param_2 + 0xc,param_3 + 2);
            FUN_1403eb430(DAT_140c65898,param_3[2],param_3[1],0,0);
            return;
        case 0xe:
            iVar4 = param_3[2];
            if (iVar4 != 0) {
                FUN_1403eb690(&IMAGE_DOS_HEADER_140000000,iVar4,0,0);
            }
            uVar8 = 0;
            if (param_2[0xd] != 0) {
                piVar10 = (int *)param_2[0xc];
                do {
                    if (*piVar10 == iVar4) {
                        FUN_1401c2f20(param_2 + 0xc,uVar8);
                        return;
                    }
                    uVar8 = uVar8 + 1;
                    piVar10 = piVar10 + 1;
                } while (uVar8 < (ulonglong)param_2[0xd]);
                return;
            }
            break;
        case 0xf:
            FUN_1405ce970(param_2);
            return;
        case 0x10:
            FUN_1405ceae0(param_2);
            return;
        case 0x11:
            FUN_140578050(DAT_140c65b78,param_3[2],0);
            return;
        case 0x12:
            FUN_1405cef50(param_2);
            return;
        case 0x13:
            FUN_1405cf080(param_2);
            return;
        case 0x14:
            FUN_1405cf120();
            return;
        case 0x15:
            FUN_1405cf290();
            return;
        case 0x16:
            FUN_1405cf580();
            return;
        case 0x17:
            FUN_14062d0f0(param_1,param_3[2],param_3[3],*param_2);
            return;
        case 0x18:
            FUN_1405cf640(param_2);
            return;
        case 0x19:
            FUN_1405cf840(param_2);
            return;
        case 0x1a:
            lVar9 = FUN_1403d90d0();
            if (lVar9 != 0) {
                uVar5 = param_3[4];
                if (((*(uint *)(lVar9 + 8) & 0xc0000000) == 0x40000000) &&
                    (*(int *)(lVar9 + 0xf30) != param_3[3])) {
                    *(undefined4 *)(lVar9 + 0xf30) = param_3[3];
                    *(undefined4 *)(lVar9 + 0xf34) = uVar5;
                    *(undefined4 *)(lVar9 + 0xf38) = 1;
                    return;
                }
            }
            break;
        case 0x1b:
            lVar9 = FUN_1403d90d0(DAT_140c65898,param_3[2]);
            if (((lVar9 != 0) && ((*(uint *)(lVar9 + 8) & 0xc0000000) == 0x40000000)) &&
                (*(int *)(lVar9 + 0xf30) != 0)) {
                *(undefined4 *)(lVar9 + 0xf38) = 1;
                *(undefined8 *)(lVar9 + 0xf30) = 0;
                return;
            }
            break;
        case 0x1c:
            *(uint *)((longlong)param_2 + 0x34) = (uint)(*(char *)(param_3 + 2) == '\0');
            return;
        case 0x1d:
            FUN_1405cec10(param_2);
            return;
        case 0x1e:
            FUN_1405cecb0(param_2);
            return;
        case 0x1f:
            *(uint *)(param_2 + 10) = (uint)*(byte *)(param_3 + 2);
            return;
        case 0x20:
            *(int *)((longlong)param_2 + 0x54) = DAT_140c636a8 - *(int *)(param_2 + 3);
            return;
        case 0x21:
            *(undefined4 *)(param_2 + 0xb) = 0;
            if ((*(byte *)(param_3 + 2) & 1) == 0) {
                *(undefined4 *)(param_2 + 0xb) = 4;
            }
            if ((*(byte *)(param_3 + 2) & 2) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 8;
            }
            if ((*(byte *)(param_3 + 2) & 4) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x10;
            }
            if ((*(byte *)(param_3 + 2) & 8) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x20;
            }
            if ((*(byte *)(param_3 + 2) & 0x10) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x40;
            }
            if ((*(byte *)(param_3 + 2) & 0x20) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x80;
            }
            if ((*(byte *)(param_3 + 2) & 0x40) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x100;
            }
            if ((*(byte *)(param_3 + 2) & 0x80) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x200;
            }
            if ((param_3[2] & 0x100) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x400;
            }
            if ((param_3[2] & 0x200) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x1000;
            }
            if ((param_3[2] & 0x400) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x2000;
            }
            if ((param_3[2] & 0x800) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x4000;
            }
            if ((param_3[2] & 0x1000) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x8000;
            }
            if ((param_3[2] & 0x2000) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x10000;
            }
            if ((param_3[2] & 0x4000) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x80000;
            }
            if ((param_3[2] & 0x8000) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x100000;
            }
            if ((param_3[2] & 0x10000) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x200000;
            }
            if ((param_3[2] & 0x20000) == 0) {
                *(uint *)(param_2 + 0xb) = *(uint *)(param_2 + 0xb) | 0x20000;
            }
            return;
        case 0x22:
            FUN_1405cf8e0(param_2);
    }
    return;
}



void FUN_1405cd8e0(longlong param_1,longlong param_2)

{
    longlong lVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong lVar4;

    lVar3 = *(longlong *)(param_1 + 0x2e0);
    uVar2 = *(undefined4 *)(param_2 + 8);
    lVar1 = lVar3 + 1;
    lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0x2d8),lVar1,4);
    *(undefined4 *)(lVar4 + lVar3 * 4) = uVar2;
    if (*(longlong *)(param_1 + 0x2d8) != lVar4) {
        FUN_1407db590(lVar4,*(longlong *)(param_1 + 0x2d8),*(longlong *)(param_1 + 0x2e0) << 2);
        lVar3 = *(longlong *)(param_1 + 0x2d8);
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        *(longlong *)(param_1 + 0x2d8) = lVar4;
    }
    *(longlong *)(param_1 + 0x2e0) = lVar1;
    return;
}



void FUN_1405cd990(undefined8 *param_1,ushort *param_2)

{
    undefined4 uVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined8 local_res10;
    undefined4 local_48;
    undefined4 local_44;

    if ((*param_2 & 1) == 0) {
        local_44 = *(undefined4 *)(param_2 + 2);
        local_48 = 0;
        FUN_1405ccf20(param_1,&local_48);
        return;
    }
    *(uint *)(param_1 + 1) = (uint)*param_2;
    *(uint *)((longlong)param_1 + 0xc) = (uint)param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
    plVar4 = *(longlong **)(longlong *)param_1[0x11];
    if (plVar4 != (longlong *)param_1[0x11]) {
        do {
            plVar2 = (longlong *)*plVar4;
            FUN_14018b900(plVar4,0);
            plVar4 = plVar2;
        } while (plVar2 != (longlong *)param_1[0x11]);
    }
    *(undefined8 *)param_1[0x11] = param_1[0x11];
    *(undefined8 *)(param_1[0x11] + 8) = param_1[0x11];
    FUN_1405ccb20(param_1);
    FUN_140195d70(param_1 + 0x18);
    FUN_140195d70(param_1 + 0x21);
    FUN_14062cc70(*param_1);
    lVar3 = DAT_140c65898;
    if ((*(byte *)(param_1 + 1) & 4) == 0) {
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"CinematicsNotify",&DAT_1409ee88c,
                      L"There is a cinematic view beginning.",0);
        return;
    }
    local_res10 = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    FUN_1403f4900(lVar3,0x720,&local_res10);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405cdaf0(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    longlong **pplVar2;
    longlong **pplVar3;
    longlong **pplVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined local_res8 [8];
    undefined4 local_38 [2];
    longlong local_30;
    code *local_28;
    undefined8 local_20;

    pplVar2 = (longlong **)**(longlong ***)(param_1 + 0x88);
    for (pplVar3 = pplVar2;
         (pplVar3 != *(longlong ***)(param_1 + 0x88) && (*(int *)((longlong)pplVar3 + 0x14) == 0));
         pplVar3 = (longlong **)*pplVar3) {
    }
    pplVar4 = (longlong **)**(longlong ***)(param_1 + 0x98);
    if ((pplVar2 != pplVar3) && (pplVar4 != pplVar3)) {
        *pplVar3[1] = (longlong)pplVar4;
        *pplVar2[1] = (longlong)pplVar3;
        *pplVar4[1] = (longlong)pplVar2;
        plVar5 = pplVar4[1];
        pplVar4[1] = pplVar3[1];
        pplVar3[1] = pplVar2[1];
        pplVar2[1] = plVar5;
    }
    lVar6 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(uint *)(param_1 + 0x38) = (uint)*(ushort *)(param_2 + 2);
    *(uint *)(param_1 + 0x3c) = (uint)*(ushort *)(param_2 + 1);
    *(uint *)(param_1 + 0x40) = (uint)*(ushort *)((longlong)param_2 + 6);
    *(undefined4 *)(param_1 + 0x44) = *param_2;
    if (((*(int *)(lVar6 + 0x7b48) - 0x3fU & 0xffffffbf) == 0) && (*(longlong *)(lVar6 + 0x71a8) == 0)
            ) {
        local_38[0] = 0;
        local_20 = 0;
        local_28 = FUN_1405cd160;
        local_30 = param_1;
        FUN_140195960(param_1 + 0x150,*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x40),local_38,4);
        uVar7 = _DAT_140c777d0;
        uVar8 = uRam0000000140c777d4;
        uVar9 = uRam0000000140c777d8;
        uVar10 = uRam0000000140c777dc;
        if (*(int *)(param_1 + 0x44) != 2) {
            if (*(int *)(param_1 + 0x44) != 3) {
                return;
            }
            uVar7 = 0x3f800000;
            uVar8 = 0x3f800000;
            uVar9 = 0x3f800000;
            uVar10 = 0x3f800000;
        }
        iVar1 = *(int *)(param_1 + 0x3c);
        FUN_140195d70(param_1 + 0x1e0);
        lVar6 = DAT_140c65898;
        if (iVar1 < 0) {
            *(undefined4 *)(DAT_140c65898 + 0x7474) = *(undefined4 *)(DAT_140c65898 + 0x7478);
        }
        else {
            *(int *)(DAT_140c65898 + 0x7474) = iVar1;
        }
        *(undefined4 *)(lVar6 + 0x7470) = 0x7fffffff;
        *(undefined (*) [16])(lVar6 + 0x7460) = CONCAT412(uVar10,CONCAT48(uVar9,CONCAT44(uVar8,uVar7)));
        *(undefined4 *)(lVar6 + 0x7400) = 1;
        plVar5 = (longlong *)(lVar6 + 0x7408);
        FUN_1400f9c30(plVar5);
        (**(code **)*plVar5)();
        (**(code **)(*plVar5 + 8))(plVar5,local_res8);
        return;
    }
    *(undefined4 *)(param_1 + 0x20) = 1;
    uVar7 = _DAT_140c777d0;
    uVar8 = uRam0000000140c777d4;
    uVar9 = uRam0000000140c777d8;
    uVar10 = uRam0000000140c777dc;
    if (*(int *)(param_1 + 0x44) != 2) {
        if (*(int *)(param_1 + 0x44) != 3) {
            return;
        }
        uVar7 = 0x3f800000;
        uVar8 = 0x3f800000;
        uVar9 = 0x3f800000;
        uVar10 = 0x3f800000;
    }
    FUN_140195d70(param_1 + 0x1e0);
    lVar6 = DAT_140c65898;
    *(undefined8 *)(DAT_140c65898 + 0x7470) = 0x7fffffff;
    plVar5 = (longlong *)(lVar6 + 0x7408);
    *(undefined (*) [16])(lVar6 + 0x7460) = CONCAT412(uVar10,CONCAT48(uVar9,CONCAT44(uVar8,uVar7)));
    *(undefined4 *)(lVar6 + 0x7400) = 1;
    FUN_1400f9c30(plVar5);
    (**(code **)*plVar5)();
    (**(code **)(*plVar5 + 8))(plVar5,local_res8);
    return;
}



void FUN_1405cdd70(undefined8 param_1,undefined4 *param_2)

{
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;

    local_3c = param_2[2];
    local_40 = param_2[1];
    local_48 = 5;
    if (param_2[7] != 0) {
        local_48 = 8;
    }
    local_44 = *param_2;
    local_30 = param_2[5];
    local_38 = 0;
    local_34 = param_2[4];
    local_2c = 0;
    FUN_1405ccf20(param_1,&local_48);
    return;
}



void FUN_1405cde10(undefined8 param_1,uint *param_2)

{
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong lVar8;
    int *piVar9;
    undefined4 local_78;
    uint local_74;
    uint local_70;
    uint local_6c;
    uint local_68;
    undefined4 local_64;
    uint local_60;
    uint local_5c;
    uint local_58;

    local_68 = param_2[5];
    local_6c = param_2[4];
    local_78 = 0xf;
    local_74 = *param_2;
    local_70 = param_2[3];
    local_64 = 0;
    local_5c = param_2[2];
    local_60 = param_2[1];
    local_58 = param_2[7];
    FUN_1405ccf20(param_1,&local_78);
    uVar7 = 0;
    lVar2 = FUN_140248f00(param_2[2]);
    uVar5 = uVar7;
    uVar6 = uVar7;
    if (lVar2 != 0) {
        piVar9 = (int *)(lVar2 + 0x5c);
        lVar8 = 6;
        do {
            uVar4 = uVar5;
            if (*piVar9 != 0) {
                uVar3 = FUN_14018db00(uVar5,uVar6 + 1,4);
                *(int *)(uVar6 * 4 + uVar3) = *piVar9;
                if ((uVar5 != uVar3) && (FUN_1407db590(uVar3,uVar5), uVar4 = uVar3, uVar5 != 0)) {
                    (**(code **)(*(longlong *)(uVar5 - 0x10) + 8))(uVar5 - 0x10);
                }
                uVar6 = uVar6 + 1;
            }
            piVar9 = piVar9 + 1;
            lVar8 = lVar8 + -1;
            uVar5 = uVar4;
        } while (lVar8 != 0);
        if (*(int *)(lVar2 + 0x8c) != 0) {
            uVar3 = FUN_14018db00(uVar4,uVar6 + 1,4);
            *(undefined4 *)(uVar6 * 4 + uVar3) = *(undefined4 *)(lVar2 + 0x8c);
            if ((uVar4 != uVar3) && (FUN_1407db590(uVar3,uVar4), uVar5 = uVar3, uVar4 != 0)) {
                (**(code **)(*(longlong *)(uVar4 - 0x10) + 8))(uVar4 - 0x10);
            }
            uVar6 = uVar6 + 1;
        }
    }
    local_78 = 0x22;
    if (*param_2 < 1000) {
        local_74 = 0;
        uVar4 = uVar7;
    }
    else {
        local_74 = *param_2 - 1000;
        uVar4 = (ulonglong)local_74;
    }
    if (uVar6 != 0) {
        do {
            uVar1 = *(uint *)(uVar5 + uVar7 * 4);
            if (uVar1 != 0) {
                local_70 = uVar1;
                if ((int)uVar4 == 0) {
                    FUN_1405cf8e0(param_1,&local_78);
                }
                else {
                    FUN_1405ccf20();
                    uVar4 = (ulonglong)local_74;
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < uVar6);
    }
    if (uVar5 != 0) {
        (**(code **)(*(longlong *)(uVar5 - 0x10) + 8))(uVar5 - 0x10);
    }
    return;
}



void FUN_1405ce040(undefined8 param_1,undefined4 *param_2)

{
    undefined4 local_48;
    undefined4 local_44;
    uint local_40;
    undefined4 local_3c;
    undefined4 local_38;
    undefined4 local_34;
    undefined4 local_30;
    undefined4 local_2c;
    undefined4 local_28;
    undefined8 local_20;
    undefined4 local_18;
    uint local_14;

    local_44 = *param_2;
    local_38 = param_2[6];
    local_3c = param_2[5];
    local_40 = (uint)*(ushort *)(param_2 + 1);
    local_30 = param_2[2];
    local_48 = 0x12;
    local_2c = param_2[3];
    local_28 = param_2[4];
    local_34 = 0;
    local_20 = *(undefined8 *)(param_2 + 8);
    local_18 = param_2[10];
    local_14 = (uint)(float)(int)*(short *)((longlong)param_2 + 6) ^ 0x80000000;
    FUN_1405ccf20(param_1,&local_48);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405ce1b0(longlong *param_1,ulonglong param_2)

{
    longlong *plVar1;
    int iVar2;
    longlong lVar3;
    uint extraout_XMM0_Da;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    ulonglong local_res10 [3];
    undefined4 local_38 [2];
    longlong *local_30;
    code *local_28;
    undefined8 local_20;

    lVar3 = *(longlong *)(*param_1 + 8);
    local_res10[0] = param_2;
    local_30 = param_1;
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x2b4) != 0)) && (*(int *)(lVar3 + 0x2d4) - 2U < 2)) {
        *(undefined4 *)(param_1 + 9) = 1;
        local_28 = FUN_1405ce4a0;
        local_38[0] = 0;
        local_20 = 0;
        FUN_140195960(param_1 + 0x33,0,local_38,4);
        return;
    }
    if ((DAT_140dc34e8 & 1) == 0) {
        DAT_140dc34e8 = DAT_140dc34e8 | 1;
        lVar3 = FUN_140200220(0x231);
        if (lVar3 == 0) {
            DAT_140dc34ec = 0;
        }
        else {
            DAT_140dc34ec = *(int *)(lVar3 + 4);
        }
    }
    iVar2 = DAT_140dc34ec;
    uVar4 = _DAT_140c777d0;
    uVar5 = uRam0000000140c777d4;
    uVar6 = uRam0000000140c777d8;
    uVar7 = uRam0000000140c777dc;
    FUN_140195d70(param_1 + 0x3c);
    lVar3 = DAT_140c65898;
    if (iVar2 < 0) {
        *(undefined4 *)(DAT_140c65898 + 0x7474) = *(undefined4 *)(DAT_140c65898 + 0x7478);
    }
    else {
        *(int *)(DAT_140c65898 + 0x7474) = iVar2;
    }
    *(undefined4 *)(lVar3 + 0x7470) = 0x7fffffff;
    *(undefined (*) [16])(lVar3 + 0x7460) = CONCAT412(uVar7,CONCAT48(uVar6,CONCAT44(uVar5,uVar4)));
    *(undefined4 *)(lVar3 + 0x7400) = 1;
    plVar1 = (longlong *)(lVar3 + 0x7408);
    FUN_1400f9c30(plVar1);
    (**(code **)*plVar1)();
    local_res10[0] = local_res10[0] & 0xffffffff00000000 | (ulonglong)extraout_XMM0_Da;
    (**(code **)(*plVar1 + 8))(plVar1,local_res10);
    local_28 = FUN_1405ce4a0;
    local_38[0] = 0;
    local_20 = 0;
    FUN_140195960(param_1 + 0x33,DAT_140dc34ec,local_38,4);
    return;
}



void FUN_1405ce360(undefined8 param_1,longlong *param_2,int *param_3)

{
    longlong lVar1;
    undefined4 uVar2;
    undefined4 local_28 [2];
    longlong *local_20;
    code *local_18;
    undefined8 local_10;

    if (*param_3 != 0) {
        FUN_14062d0f0(param_1,param_3[1],param_3[2],*param_2);
    }
    if (*(int *)(param_2 + 9) == 0) {
        lVar1 = FUN_140200220(0x231);
        if (lVar1 == 0) {
            uVar2 = 0;
        }
        else {
            uVar2 = *(undefined4 *)(lVar1 + 4);
        }
        *(undefined4 *)(param_2 + 0x45) = uVar2;
        local_28[0] = 0;
        local_18 = FUN_1405ce4d0;
        local_10 = 0;
        local_20 = param_2;
        FUN_140195960(param_2 + 0x3c,uVar2,local_28,4);
    }
    else {
        *(undefined4 *)(param_2 + 9) = 0;
        if (*(int *)((longlong)param_2 + 0x4c) != 0) {
            if ((*(longlong *)(*param_2 + 8) != 0) && (*(int *)(*(longlong *)(*param_2 + 8) + 0x2b4) != 0)
                    ) {
                FUN_1405d3380();
            }
            *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
            return;
        }
    }
    return;
}



void FUN_1405ce420(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
        FUN_140195d70(param_1 + 0x198);
        if (*(int *)(param_1 + 0x48) == 0) {
            FUN_140200220(0x231);
            FUN_140195d70(param_1 + 0x1e0);
            FUN_14053b9c0();
            return;
        }
        if (*(int *)(param_1 + 0x4c) != 0) {
            *(undefined4 *)(param_1 + 0x48) = 0;
            FUN_1405cf9c0(param_1);
        }
    }
    return;
}



void FUN_1405ce4a0(void)

{
    undefined local_res10 [24];

    local_res10[0] = 0;
    FUN_1403f4900(DAT_140c65898,0x721,local_res10);
    return;
}



void FUN_1405ce4d0(longlong param_1)

{
    FUN_140195d70(param_1 + 0x1e0);
    FUN_14053b9c0();
    return;
}



void FUN_1405ce500(longlong *param_1,int param_2)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    int iVar4;
    longlong *plVar5;
    undefined8 local_res8;
    undefined8 local_res18 [2];

    lVar3 = DAT_140c65898;
    if (*(int *)(param_1 + 3) != 0) {
        for (lVar1 = *(longlong *)(DAT_140c65898 + 0x6f30); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x60)) {
            if (((*(longlong *)(lVar1 + 0x16e8) != 0) &&
                 (*(longlong **)(lVar1 + 0x18b0) != (longlong *)0x0)) &&
                (iVar4 = (**(code **)(**(longlong **)(lVar1 + 0x18b0) + 0x3b0))(), iVar4 == 0)) {
                (**(code **)(**(longlong **)(lVar1 + 0x16e8) + 0x380))
                        (*(longlong **)(lVar1 + 0x16e8),1,*(undefined8 *)(lVar1 + 0x18b0));
            }
        }
        if (*(longlong *)(lVar3 + 0x6c50) != 0) {
            FUN_1406016c0(*(longlong *)(lVar3 + 0x6c50),1);
        }
        param_1[3] = 0;
        param_1[4] = 0;
        FUN_140195d70(param_1 + 0x18);
        FUN_140195d70(param_1 + 0x21);
        if (*(longlong *)(*param_1 + 8) == 0) {
            if (*(longlong **)(longlong *)param_1[0x11] != (longlong *)param_1[0x11]) {
                do {
                    plVar5 = *(longlong **)param_1[0x11];
                    if (*(int *)(plVar5 + 2) == 3) {
                        local_res8 = (ulonglong)CONCAT14((*(byte *)(plVar5 + 3) & 8) != 0,2);
                        FUN_1403f4900(DAT_140c65898,0x720,&local_res8);
                        if ((*(byte *)(*(longlong *)param_1[0x11] + 0x18) & 4) != 0) {
                            local_res8 = CONCAT71(local_res8._1_7_,4);
                            FUN_1403f4900(DAT_140c65898,0x720,&local_res8);
                        }
                        local_res8 = CONCAT71(local_res8._1_7_,3);
                        FUN_1403f4900(DAT_140c65898,0x720,&local_res8);
                        plVar5 = *(longlong **)(longlong *)param_1[0x11];
                        if (plVar5 != (longlong *)param_1[0x11]) {
                            do {
                                plVar2 = (longlong *)*plVar5;
                                FUN_14018b900(plVar5,0);
                                plVar5 = plVar2;
                            } while (plVar2 != (longlong *)param_1[0x11]);
                        }
                        *(longlong *)param_1[0x11] = param_1[0x11];
                        *(longlong *)(param_1[0x11] + 8) = param_1[0x11];
                    }
                    else {
                        lVar3 = *plVar5;
                        plVar2 = (longlong *)plVar5[1];
                        *plVar2 = lVar3;
                        *(longlong **)(lVar3 + 8) = plVar2;
                        FUN_14018b900(plVar5,0);
                    }
                } while (*(longlong **)(longlong *)param_1[0x11] != (longlong *)param_1[0x11]);
            }
        }
        else {
            FUN_1405cfa90(param_1 + 0x10);
        }
        iVar4 = FUN_14062cf20(*param_1);
        if ((iVar4 == 1) || (param_2 != 0)) {
            FUN_1405ccb20(param_1);
        }
        lVar3 = DAT_140c65898;
        *(undefined4 *)((longlong)param_1 + 0x14) = 0;
        *(undefined4 *)(param_1 + 0xf) = 1;
        local_res18[0] = 1;
        FUN_1403f4900(lVar3,0x720,local_res18);
    }
    return;
}



void FUN_1405ce730(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    uVar1 = DAT_140c636a8;
    if (*(int *)(param_2 + 8) == 0) {
        if (*(int *)(param_2 + 0xc) != 0) {
            if (*(int *)(DAT_140c65898 + 0x747c) < 1) {
                if ((*(float *)(DAT_140c65898 + 0x7440) != 0.0) ||
                    (*(float *)(DAT_140c65898 + 0x7444) != 0.0)) {
                    *(undefined8 *)(DAT_140c65898 + 0x7440) = 0;
                    *(undefined4 *)(lVar2 + 0x7438) = 0;
                    *(undefined4 *)(lVar2 + 0x7430) = uVar1;
                }
            }
            else {
                FUN_1400c3230(DAT_140c65898 + 0x7428);
            }
            *(undefined4 *)(lVar2 + 0x7448) = 1;
            *(undefined8 *)(lVar2 + 0x744c) = 0x3f800000;
            return;
        }
        if ((*(float *)(DAT_140c65898 + 0x7440) != 0.0) || (*(float *)(DAT_140c65898 + 0x7444) != 0.0))
        {
            *(undefined8 *)(DAT_140c65898 + 0x7440) = 0;
            *(undefined4 *)(lVar2 + 0x7438) = 0;
            *(undefined4 *)(lVar2 + 0x7430) = uVar1;
        }
        *(undefined8 *)(lVar2 + 0x744c) = 0x3f800000;
    }
    else {
        if (*(int *)(param_2 + 0xc) != 0) {
            if (*(int *)(DAT_140c65898 + 0x747c) < 1) {
                if ((*(float *)(DAT_140c65898 + 0x7440) != 1.0) ||
                    (*(float *)(DAT_140c65898 + 0x7444) != 0.0)) {
                    *(undefined8 *)(DAT_140c65898 + 0x7440) = 0x3f800000;
                    *(undefined4 *)(lVar2 + 0x7438) = 0x3f800000;
                    *(undefined4 *)(lVar2 + 0x7430) = uVar1;
                }
            }
            else {
                FUN_1400c3230(DAT_140c65898 + 0x7428);
            }
            *(undefined4 *)(lVar2 + 0x7448) = 1;
            *(undefined4 *)(lVar2 + 0x744c) = 0x3f800000;
            *(undefined4 *)(lVar2 + 0x7450) = 1;
            return;
        }
        if ((*(float *)(DAT_140c65898 + 0x7440) != 1.0) || (*(float *)(DAT_140c65898 + 0x7444) != 0.0))
        {
            *(undefined8 *)(DAT_140c65898 + 0x7440) = 0x3f800000;
            *(undefined4 *)(lVar2 + 0x7438) = 0x3f800000;
            *(undefined4 *)(lVar2 + 0x7430) = uVar1;
        }
        *(undefined4 *)(lVar2 + 0x744c) = 0x3f800000;
        *(undefined4 *)(lVar2 + 0x7450) = 1;
    }
    *(undefined4 *)(lVar2 + 0x7448) = 1;
    return;
}



void FUN_1405ce970(longlong param_1,longlong param_2)

{
    ulonglong **ppuVar1;
    ulonglong **ppuVar2;
    undefined4 uVar3;
    int iVar4;
    ulonglong *puVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    ulonglong *puVar9;
    longlong *plVar10;

    puVar5 = (ulonglong *)FUN_14018b280(0x20);
    puVar8 = (ulonglong *)0x0;
    puVar9 = puVar8;
    if (puVar5 != (ulonglong *)0x0) {
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar9 = puVar5;
    }
    iVar4 = FUN_1405cb870(puVar9,param_1,param_2);
    if (iVar4 < 0) {
        if (puVar9 != (ulonglong *)0x0) {
            FUN_1405cc920(puVar9);
            return;
        }
    }
    else {
        if ((*(int *)(param_1 + 0x1c) != 0) && (lVar6 = FUN_1403d90d0(DAT_140c65898), lVar6 != 0)) {
            *(int *)(lVar6 + 0x1338) = *(int *)(lVar6 + 0x1338) + 1;
            plVar10 = *(longlong **)(lVar6 + 0x16e8);
            if (plVar10 != (longlong *)0x0) {
                (**(code **)(*plVar10 + 0x188))(plVar10,*(int *)(lVar6 + 0x1338) != 0);
            }
            FUN_140003460(param_1 + 0x268);
        }
        ppuVar2 = (ulonglong **)(param_1 + 0x278);
        if (puVar9[2] == 0) {
            puVar9[2] = (ulonglong)ppuVar2;
            ppuVar1 = (ulonglong **)(puVar9 + 3);
            *ppuVar1 = *ppuVar2;
            *ppuVar2 = puVar9;
            if (*ppuVar1 != (ulonglong *)0x0) {
                (*ppuVar1)[2] = (ulonglong)ppuVar1;
            }
        }
        plVar10 = (longlong *)(param_1 + 0x280);
        if (*plVar10 == *(longlong *)(param_1 + 0x288)) {
            FUN_1400290d0(plVar10);
        }
        uVar7 = (**(code **)(param_1 + 0x298))(param_2 + 0x18);
        ppuVar2 = (ulonglong **)
                (*(longlong *)(param_1 + 0x290) + (uVar7 % *(ulonglong *)(param_1 + 0x288)) * 8);
        puVar5 = (ulonglong *)FUN_14018b280(0x20);
        if (puVar5 != (ulonglong *)0x0) {
            puVar8 = *ppuVar2;
            *puVar5 = uVar7;
            puVar5[1] = (ulonglong)puVar8;
            uVar3 = *(undefined4 *)(param_2 + 0x18);
            puVar5[3] = (ulonglong)puVar9;
            *(undefined4 *)(puVar5 + 2) = uVar3;
            puVar8 = puVar5;
        }
        *ppuVar2 = puVar8;
        *plVar10 = *plVar10 + 1;
    }
    return;
}



void FUN_1405ceae0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    ulonglong **ppuVar2;
    undefined4 uVar3;
    ulonglong *puVar4;
    int iVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    ulonglong *puVar8;
    longlong *plVar9;

    puVar6 = (undefined8 *)FUN_14018b280(0x20);
    if (puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)0x0;
    }
    else {
        puVar6[2] = 0;
        puVar6[3] = 0;
        *puVar6 = 0;
        *(undefined4 *)(puVar6 + 1) = 0;
    }
    iVar5 = FUN_1405cb9e0(puVar6,param_1,param_2);
    if (iVar5 < 0) {
        if (puVar6 != (undefined8 *)0x0) {
            FUN_1405cb900(puVar6);
            FUN_14018b900(puVar6,0);
            return;
        }
    }
    else {
        plVar9 = (longlong *)(param_1 + 0x2a8);
        if (puVar6[2] == 0) {
            puVar6[2] = plVar9;
            plVar1 = puVar6 + 3;
            *plVar1 = *plVar9;
            *plVar9 = (longlong)puVar6;
            if (*plVar1 != 0) {
                *(longlong **)(*plVar1 + 0x10) = plVar1;
            }
        }
        plVar9 = (longlong *)(param_1 + 0x2b0);
        if (*plVar9 == *(longlong *)(param_1 + 0x2b8)) {
            FUN_1400290d0(plVar9);
        }
        uVar7 = (**(code **)(param_1 + 0x2c8))(param_2 + 0x14);
        ppuVar2 = (ulonglong **)
                (*(longlong *)(param_1 + 0x2c0) + (uVar7 % *(ulonglong *)(param_1 + 0x2b8)) * 8);
        puVar8 = (ulonglong *)FUN_14018b280(0x20);
        if (puVar8 != (ulonglong *)0x0) {
            puVar4 = *ppuVar2;
            *puVar8 = uVar7;
            puVar8[1] = (ulonglong)puVar4;
            uVar3 = *(undefined4 *)(param_2 + 0x14);
            puVar8[3] = (ulonglong)puVar6;
            *(undefined4 *)(puVar8 + 2) = uVar3;
        }
        *ppuVar2 = puVar8;
        *plVar9 = *plVar9 + 1;
    }
    return;
}



ulonglong FUN_1405cec10(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = (**(code **)(param_1 + 0x2c8))(param_2 + 8);
    uVar3 = uVar2 / *(ulonglong *)(param_1 + 0x2b8);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x2c0) + (uVar2 % *(ulonglong *)(param_1 + 0x2b8)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return uVar3;
        }
        if ((uVar2 == *puVar1) &&
            (uVar3 = (**(code **)(param_1 + 0x2d0))(param_2 + 8,puVar1 + 2), (int)uVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return uVar3;
    }
    uVar2 = puVar1[3];
    if (uVar2 == 0) {
        return uVar3;
    }
    FUN_1405cb900(uVar2);
    uVar3 = FUN_14018b900(uVar2,0);
    return uVar3;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405cecb0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined2 *puVar3;
    longlong lVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    undefined **local_e8 [24];
    undefined local_28 [16];
    undefined2 *local_18;

    lVar4 = DAT_140c65898;
    if (*(int *)(param_2 + 8) == 0) {
        *(undefined4 *)(DAT_140c65898 + 0x7498) = 0;
        plVar1 = *(longlong **)(lVar4 + 0x7488);
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
            *(undefined8 *)(lVar4 + 0x7488) = 0;
        }
    }
    else {
        FUN_1400b7090(local_e8);
        uVar6 = 0;
        local_18 = (undefined2 *)0x0;
        local_28 = ZEXT816(0);
        local_e8[0] = &PTR_FUN_140b69230;
        puVar3 = (undefined2 *)FUN_14018b280(0x10,0);
        local_18 = puVar3 + 8;
        local_28 = CONCAT88(puVar3,puVar3);
        if (puVar3 != (undefined2 *)0x0) {
            *puVar3 = 0;
        }
        lVar4 = FUN_14018b280(0x60);
        uVar5 = uVar6;
        if (lVar4 != 0) {
            uVar5 = FUN_1404db7e0(lVar4,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        FUN_1400b7480(local_e8,uVar5);
        FUN_1400b7660();
        FUN_14053b6f0();
        lVar4 = FUN_140211280();
        if ((lVar4 != 0) &&
            ((((*(uint *)(lVar4 + 0x18) & *(uint *)(DAT_140c63628 + 0x5f4)) == 0 ||
               (*(int *)(DAT_140c635f0 + 0x1698) != 1)) ||
              (uVar6 = (ulonglong)*(uint *)(lVar4 + 8), *(uint *)(lVar4 + 8) == 0)))) {
            uVar6 = (ulonglong)*(uint *)(lVar4 + 4);
        }
        if ((*(longlong *)(param_1 + 0x70) != 0) || (iVar2 = FUN_1407129a0(param_1 + 0x70), -1 < iVar2))
        {
            FUN_140712a40(*(undefined8 *)(param_1 + 0x70),uVar6,0,0);
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_,0);
        }
        FUN_1400b7390(local_e8);
    }
    return;
}



void FUN_1405cef50(longlong param_1,longlong param_2)

{
    ulonglong **ppuVar1;
    ulonglong **ppuVar2;
    undefined4 uVar3;
    int iVar4;
    ulonglong *puVar5;
    ulonglong uVar6;
    ulonglong *puVar7;
    ulonglong *puVar8;
    longlong *plVar9;

    puVar5 = (ulonglong *)FUN_14018b280(0x30);
    puVar7 = (ulonglong *)0x0;
    puVar8 = puVar7;
    if (puVar5 != (ulonglong *)0x0) {
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar8 = puVar5;
    }
    iVar4 = FUN_1405caf20(puVar8,param_1,param_2);
    if (iVar4 < 0) {
        if (puVar8 != (ulonglong *)0x0) {
            FUN_1405cae70(puVar8);
            FUN_14018b900(puVar8,0);
            return;
        }
    }
    else {
        ppuVar2 = (ulonglong **)(param_1 + 0x230);
        if (puVar8[2] == 0) {
            puVar8[2] = (ulonglong)ppuVar2;
            ppuVar1 = (ulonglong **)(puVar8 + 3);
            *ppuVar1 = *ppuVar2;
            *ppuVar2 = puVar8;
            if (*ppuVar1 != (ulonglong *)0x0) {
                (*ppuVar1)[2] = (ulonglong)ppuVar1;
            }
        }
        plVar9 = (longlong *)(param_1 + 0x238);
        if (*plVar9 == *(longlong *)(param_1 + 0x240)) {
            FUN_1400290d0(plVar9);
        }
        uVar6 = (**(code **)(param_1 + 0x250))(param_2 + 0x18);
        ppuVar2 = (ulonglong **)
                (*(longlong *)(param_1 + 0x248) + (uVar6 % *(ulonglong *)(param_1 + 0x240)) * 8);
        puVar5 = (ulonglong *)FUN_14018b280(0x20);
        if (puVar5 != (ulonglong *)0x0) {
            puVar7 = *ppuVar2;
            *puVar5 = uVar6;
            puVar5[1] = (ulonglong)puVar7;
            uVar3 = *(undefined4 *)(param_2 + 0x18);
            puVar5[3] = (ulonglong)puVar8;
            *(undefined4 *)(puVar5 + 2) = uVar3;
            puVar7 = puVar5;
        }
        *ppuVar2 = puVar7;
        *plVar9 = *plVar9 + 1;
    }
    return;
}



ulonglong FUN_1405cf080(longlong param_1,longlong param_2)

{
    ulonglong *puVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    uVar2 = (**(code **)(param_1 + 0x250))(param_2 + 8);
    uVar3 = uVar2 / *(ulonglong *)(param_1 + 0x240);
    puVar1 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x248) + (uVar2 % *(ulonglong *)(param_1 + 0x240)) * 8);
    while( true ) {
        if (puVar1 == (ulonglong *)0x0) {
            return uVar3;
        }
        if ((uVar2 == *puVar1) &&
            (uVar3 = (**(code **)(param_1 + 600))(param_2 + 8,puVar1 + 2), (int)uVar3 != 0)) break;
        puVar1 = (ulonglong *)puVar1[1];
    }
    if (puVar1 + 3 == (ulonglong *)0x0) {
        return uVar3;
    }
    uVar2 = puVar1[3];
    if (uVar2 == 0) {
        return uVar3;
    }
    FUN_1405cae70(uVar2);
    uVar3 = FUN_14018b900(uVar2,0);
    return uVar3;
}



// WARNING: Removing unreachable block (ram,0x0001405cf1a0)

void FUN_1405cf120(undefined8 param_1,longlong param_2)

{
    uint uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 local_a8;
    undefined8 local_a4;
    undefined4 *local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined4 *local_78;

    uVar2 = *(undefined4 *)(param_2 + 0xc);
    local_a4 = 8;
    uVar1 = FUN_1408fe3d0(uVar2);
    uVar4 = 0x80000000;
    uVar1 = uVar1 ^ 0x80000000;
    uVar2 = FUN_1408fc950(uVar2);
    uVar2 = FUN_1408fd190(uVar1 ^ uVar4,uVar2);
    uVar3 = FUN_1408fcf3c(0);
    local_98 = (undefined4 *)FUN_14018c320(0,0x240,8);
    *local_98 = 0xe;
    *(undefined8 *)(local_98 + 4) = 0;
    local_98[2] = uVar2;
    local_98[3] = uVar3;
    local_a8 = 1;
    local_90 = CONCAT44(DAT_140c636a8,*(undefined4 *)(param_2 + 8));
    local_80 = 1;
    local_88 = 0x100000001;
    local_78 = local_98;
    FUN_14057a830(DAT_140c65898,&local_90);
    FUN_14079a4f0(&local_a8);
    FUN_14018b900(local_98,0);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405cf290(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    ushort uVar4;
    uint uVar5;
    ushort uVar6;
    ushort uVar7;
    uint uVar8;
    int iVar9;
    undefined4 local_res10;
    undefined2 local_res14;
    undefined local_68 [8];
    undefined8 uStack96;
    undefined8 local_58;
    undefined4 *local_50;
    undefined4 local_48;
    undefined4 local_44;
    undefined4 local_40;
    undefined4 *local_38;

    local_40 = 0;
    _local_68 = ZEXT816(0);
    FUN_1401c9800();
    iVar9 = 0x71;
    uVar5 = *(uint *)(param_2 + 0x14);
    uVar8 = uVar5 & 0x7fffffff;
    uVar4 = 0;
    uVar6 = uVar4;
    if (0x337fffff < uVar8) {
        if (uVar8 < 0x387ff000) {
            uVar6 = (ushort)(((uVar5 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar8 >> 0x17) & 0x1f)) +
                             0x1000 >> 0xd);
        }
        else if (uVar8 < 0x47fff000) {
            uVar6 = (ushort)(uVar8 + 0xc8001000 >> 0xd);
        }
        else {
            uVar6 = 0x43ff;
        }
    }
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    uVar7 = uVar6 | (ushort)((ulonglong)uVar5 >> 0x10) & 0x8000;
    local_44 = 8;
    local_50 = (undefined4 *)FUN_14018c320(0,0x240,8);
    uVar5 = uVar7 & 0xffff7fff;
    *local_50 = 5;
    local_50[2] = uVar2;
    if ((uVar6 & 0x7c00) == 0) {
        if ((uVar6 & 0x3ff) != 0) {
            for (uVar5 = (uVar7 & 0x3ff) << 0xd; uVar5 < 0x800000; uVar5 = uVar5 * 2) {
                iVar9 = iVar9 + -1;
            }
            uVar5 = iVar9 << 0x17 | uVar5 & 0x7fffff;
        }
    }
    else {
        uVar5 = (uVar5 + 0x1c000) * 0x2000;
    }
    local_50[4] = 0;
    local_50[3] = uVar5 | (uVar7 & 0xffff8000) << 0x10;
    local_50[5] = local_res10;
    *(undefined2 *)(local_50 + 6) = local_res14;
    local_50[7] = uVar1;
    *(undefined8 *)(local_50 + 8) = 0;
    local_50[10] = 0;
    local_50[0xb] = 1;
    if (*(int *)(param_2 + 0x18) == 0) {
        local_50[0x12] = 0x15;
        local_50[0x14] = 1;
    }
    else {
        uVar5 = *(uint *)(param_2 + 0x14);
        uVar8 = uVar5 & 0x7fffffff;
        if (0x337fffff < uVar8) {
            if (uVar8 < 0x387ff000) {
                uVar4 = (ushort)(((uVar5 & 0x7fffff | 0x800000) >> (0x71U - (char)(uVar8 >> 0x17) & 0x1f)) +
                                 0x1000 >> 0xd);
            }
            else if (uVar8 < 0x47fff000) {
                uVar4 = (ushort)(uVar8 + 0xc8001000 >> 0xd);
            }
            else {
                uVar4 = 0x43ff;
            }
        }
        uVar1 = *(undefined4 *)(param_2 + 0xc);
        uVar2 = *(undefined4 *)(param_2 + 0x10);
        local_50[0x12] = 0x10;
        local_50[0x14] = uVar1;
        *(ushort *)(local_50 + 0x15) = uVar4 | (ushort)((ulonglong)uVar5 >> 0x10) & 0x8000;
        local_50[0x16] = 0;
        local_50[0x17] = uVar2;
        *(undefined8 *)(local_50 + 0x18) = 0;
        local_50[0x1a] = 1;
    }
    uVar3 = DAT_140c65898;
    local_50[0x24] = 10;
    local_50[0x26] = 0;
    local_50[0x36] = 0xd;
    local_50[0x38] = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x1c);
    local_50[0x48] = 0x1a;
    local_50[0x4a] = uVar1;
    stack0xffffffffffffff9c =
            SUB1612(_local_68 >> 0x20,0) & SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0) &
            SUB1612((undefined  [16])0xffffffffffffffff >> 0x20,0);
    _local_68 = CONCAT124(stack0xffffffffffffff9c,*(undefined4 *)(param_2 + 8));
    local_48 = 5;
    _local_68 = CONCAT48(1,local_68);
    local_58 = 5;
    local_68 = local_68 & 0xffffffff | (ulonglong)DAT_140c636a8 << 0x20;
    _local_68 = CONCAT412(1,_local_68);
    local_38 = local_50;
    FUN_14057a830(uVar3,local_68);
    FUN_14079a4f0(&local_48);
    FUN_14018b900(local_38,0);
    return;
}



void FUN_1405cf580(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    undefined4 local_48;
    undefined8 local_44;
    undefined4 *local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 *local_18;

    uVar1 = *(undefined4 *)(param_2 + 0xc);
    local_44 = 8;
    local_38 = (undefined4 *)FUN_14018c320(0,0x240,8);
    *local_38 = 0x1b;
    local_38[2] = uVar1;
    local_48 = 1;
    local_30 = CONCAT44(DAT_140c636a8,*(undefined4 *)(param_2 + 8));
    local_20 = 1;
    local_28 = 0x100000001;
    local_18 = local_38;
    FUN_14057a830(DAT_140c65898,&local_30);
    FUN_14079a4f0(&local_48);
    FUN_14018b900(local_38,0);
    return;
}



void FUN_1405cf640(longlong *param_1,longlong param_2)

{
    char cVar1;
    byte bVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong local_res10 [3];
    undefined local_18 [16];

    if (*(int *)(param_2 + 8) == 0) {
        bVar2 = *(byte *)(param_2 + 0xc);
        cVar1 = *(char *)(param_2 + 0xd);
        *(uint *)(param_1 + 6) = (uint)bVar2;
        if (cVar1 == '\0') {
            *(uint *)((longlong)param_1 + 0x2c) = (uint)bVar2;
            if (bVar2 != 0) {
                FUN_140008410(param_1 + 0x14);
                return;
            }
        }
        else {
            uVar6 = *(ulonglong *)(param_1[0x15] + 0x10);
            if (uVar6 != param_1[0x15]) {
                do {
                    lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(uVar6 + 0x20));
                    if ((lVar3 == 0) || (*(int *)(lVar3 + 0x80) != 0x14)) {
                        uVar4 = *(ulonglong *)(uVar6 + 0x18);
                        if (uVar4 == 0) {
                            uVar4 = *(ulonglong *)(uVar6 + 8);
                            if (uVar6 == *(ulonglong *)(uVar4 + 0x18)) {
                                do {
                                    uVar6 = uVar4;
                                    uVar4 = *(ulonglong *)(uVar6 + 8);
                                } while (uVar6 == *(ulonglong *)(uVar4 + 0x18));
                            }
                            if (*(ulonglong *)(uVar6 + 0x18) != uVar4) {
                                uVar6 = uVar4;
                            }
                        }
                        else {
                            for (uVar5 = *(ulonglong *)(uVar4 + 0x10); uVar6 = uVar4, uVar5 != 0;
                                 uVar5 = *(ulonglong *)(uVar5 + 0x10)) {
                                uVar4 = uVar5;
                            }
                        }
                    }
                    else {
                        uVar4 = *(ulonglong *)(uVar6 + 0x18);
                        if (uVar4 == 0) {
                            uVar5 = *(ulonglong *)(uVar6 + 8);
                            uVar4 = uVar6;
                            if (uVar6 == *(ulonglong *)(uVar5 + 0x18)) {
                                do {
                                    uVar4 = uVar5;
                                    uVar5 = *(ulonglong *)(uVar4 + 8);
                                } while (uVar4 == *(ulonglong *)(uVar5 + 0x18));
                            }
                            if (*(ulonglong *)(uVar4 + 0x18) != uVar5) {
                                uVar4 = uVar5;
                            }
                        }
                        else {
                            for (uVar5 = *(ulonglong *)(uVar4 + 0x10); uVar5 != 0;
                                 uVar5 = *(ulonglong *)(uVar5 + 0x10)) {
                                uVar4 = uVar5;
                            }
                        }
                        local_res10[0] = uVar6;
                        FUN_1400efcd0(param_1 + 0x14);
                        uVar6 = uVar4;
                    }
                } while (uVar6 != param_1[0x15]);
                return;
            }
        }
    }
    else {
        lVar3 = FUN_1403d90d0();
        if (lVar3 != 0) {
            if ((*(uint *)(param_2 + 8) & 0xc0000000) == 0x40000000) {
                *(uint *)(lVar3 + 0x214) = (uint)*(byte *)(param_2 + 0xc);
                return;
            }
            if (*(char *)(param_2 + 0xc) != '\0') {
                *(undefined8 *)(lVar3 + 0x36f8) = *(undefined8 *)(*param_1 + 8);
                local_res10[0] = local_res10[0] & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar3 + 8);
                FUN_1400ee810(param_1 + 0x14,local_res10);
                return;
            }
            *(undefined8 *)(lVar3 + 0x36f8) = 0;
            local_res10[0] = local_res10[0] & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar3 + 8);
            FUN_1400293c0(param_1 + 0x14,local_18,local_res10);
        }
    }
    return;
}



void FUN_1405cf840(longlong *param_1,longlong param_2)

{
    longlong lVar1;
    undefined auVar2 [12];
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 local_18;
    undefined4 uStack20;

    lVar1 = *(longlong *)(*param_1 + 8);
    if (lVar1 != 0) {
        auVar2 = *(undefined (*) [12])(param_2 + 8);
        *(undefined4 *)(lVar1 + 0x4a0) = 1;
        uStack28 = 0;
        local_18 = 0;
        uStack20 = 0;
        *(undefined (*) [16])(lVar1 + 0x490) = ZEXT1216(auVar2);
        local_28 = *(undefined8 *)(lVar1 + 0x490);
        local_20 = *(undefined4 *)(lVar1 + 0x498);
        FUN_1403f4900(DAT_140c65898,0x71d,&local_28);
    }
    return;
}



void FUN_1405cf8e0(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    longlong *plVar4;

    puVar3 = (undefined8 *)FUN_14018b280(0x20);
    if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    *(int *)(puVar3 + 1) = *(int *)(param_2 + 4) + 500;
    (**(code **)(*DAT_140c65848 + 0x18))(DAT_140c65848,puVar3,uVar2);
    if (*(longlong *)(param_1 + 0x310) == 0) {
        plVar1 = (longlong *)(param_1 + 0x308);
        if (puVar3[2] == 0) {
            puVar3[2] = plVar1;
            plVar4 = puVar3 + 3;
            *plVar4 = *plVar1;
            *plVar1 = (longlong)puVar3;
            if (*plVar4 != 0) {
                *(longlong **)(*plVar4 + 0x10) = plVar4;
            }
        }
    }
    else if (puVar3[2] == 0) {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x310) + 0x18);
        plVar1 = puVar3 + 3;
        puVar3[2] = plVar4;
        *plVar1 = *plVar4;
        *plVar4 = (longlong)puVar3;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x10) = plVar1;
        }
    }
    *(undefined8 **)(param_1 + 0x310) = puVar3;
    return;
}



void FUN_1405cf9c0(longlong *param_1)

{
    if (*(int *)(param_1 + 9) == 0) {
        if ((*(longlong *)(*param_1 + 8) != 0) && (*(int *)(*(longlong *)(*param_1 + 8) + 0x2b4) != 0))
        {
            FUN_1405d3380();
        }
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
        return;
    }
    *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
    return;
}



void FUN_1405cfa10(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar1 = *(longlong *)(param_1 + 8);
    plVar3 = (longlong *)FUN_14018b280(0x48);
    if (plVar3 + 2 != (longlong *)0x0) {
        lVar2 = param_2[4];
        plVar3[2] = *param_2;
        plVar3[3] = param_2[1];
        plVar3[4] = param_2[2];
        plVar3[5] = param_2[3];
        plVar3[6] = lVar2;
        plVar3[7] = param_2[5];
        plVar3[8] = param_2[6];
    }
    *plVar3 = lVar1;
    plVar3[1] = *(longlong *)(lVar1 + 8);
    **(longlong ***)(lVar1 + 8) = plVar3;
    *(longlong **)(lVar1 + 8) = plVar3;
    return;
}



void FUN_1405cfa90(longlong param_1)

{
    longlong *plVar1;
    longlong *plVar2;

    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    if (plVar2 != *(longlong **)(param_1 + 8)) {
        do {
            plVar1 = (longlong *)*plVar2;
            FUN_14018b900(plVar2,0);
            plVar2 = plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_1 + 8));
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    return;
}



undefined8 * FUN_1405cfae0(undefined8 *param_1)

{
    ulonglong uVar1;
    undefined8 uVar2;

    *param_1 = 0;
    uVar1 = FUN_1401a40c0(0x100);
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



undefined8 FUN_1405cfb60(float *param_1)

{
    if ((((((((-3.402823e+38 <= *param_1) && (*param_1 <= 3.402823e+38)) &&
             (-3.402823e+38 <= param_1[1])) &&
            (((param_1[1] <= 3.402823e+38 && (-3.402823e+38 <= param_1[2])) &&
              ((param_1[2] <= 3.402823e+38 &&
                ((-3.402823e+38 <= param_1[3] && (param_1[3] <= 3.402823e+38)))))))) &&
           (-3.402823e+38 <= param_1[4])) &&
          ((((((param_1[4] <= 3.402823e+38 && (-3.402823e+38 <= param_1[5])) &&
               (param_1[5] <= 3.402823e+38)) &&
              ((-3.402823e+38 <= param_1[6] && (param_1[6] <= 3.402823e+38)))) &&
             (-3.402823e+38 <= param_1[7])) &&
            (((param_1[7] <= 3.402823e+38 && (-3.402823e+38 <= param_1[8])) &&
              (((param_1[8] <= 3.402823e+38 &&
                 (((-3.402823e+38 <= param_1[9] && (param_1[9] <= 3.402823e+38)) &&
                   (-3.402823e+38 <= param_1[10])))) &&
                (((param_1[10] <= 3.402823e+38 && (-3.402823e+38 <= param_1[0xb])) &&
                  (param_1[0xb] <= 3.402823e+38)))))))))) &&
         (((-3.402823e+38 <= param_1[0xc] && (param_1[0xc] <= 3.402823e+38)) &&
           ((-3.402823e+38 <= param_1[0xd] &&
             (((param_1[0xd] <= 3.402823e+38 && (-3.402823e+38 <= param_1[0xe])) &&
               (param_1[0xe] <= 3.402823e+38)))))))) &&
        ((-3.402823e+38 <= param_1[0xf] && (param_1[0xf] <= 3.402823e+38)))) {
        return 1;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1405cfcb0(undefined8 *param_1)

{
    int iVar1;
    float fVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    float fVar6;

    fVar2 = DAT_140c3b438;
    *param_1 = &PTR_FUN_140b6ddb0;
    param_1[1] = 0;
    iVar1 = DAT_140c4dea0;
    if (*DAT_140c63750 < DAT_140c4dea0) {
        iVar1 = *DAT_140c63750;
    }
    fVar6 = fVar2 * 0.005555556 * *(float *)(&DAT_140c4deb0 + (longlong)iVar1 * 4);
    *(undefined4 *)(param_1 + 3) = 0x3dcccccd;
    param_1[6] = 0x3dcccccd;
    param_1[10] = 0x3f800000;
    *(float *)((longlong)param_1 + 0x14) = fVar6;
    *(float *)(param_1 + 2) = fVar6;
    *(undefined (*) [16])(param_1 + 4) = ZEXT816(0);
    *(uint *)(param_1 + 7) = (uint)(fVar2 * 0.005555556 * 30.0) ^ 0x80000000;
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
    uVar5 = uRam0000000140c7839c;
    uVar4 = uRam0000000140c78398;
    uVar3 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0xc) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 100) = uVar3;
    *(undefined4 *)(param_1 + 0xd) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x6c) = uVar5;
    uVar5 = uRam0000000140c783ac;
    uVar4 = uRam0000000140c783a8;
    uVar3 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0xe) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x74) = uVar3;
    *(undefined4 *)(param_1 + 0xf) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x7c) = uVar5;
    uVar5 = uRam0000000140c783bc;
    uVar4 = uRam0000000140c783b8;
    uVar3 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x10) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
    *(undefined4 *)(param_1 + 0x11) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
    uVar5 = uRam0000000140c783cc;
    uVar4 = uRam0000000140c783c8;
    uVar3 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x12) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
    *(undefined4 *)(param_1 + 0x13) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
    uVar5 = uRam0000000140c7839c;
    uVar4 = uRam0000000140c78398;
    uVar3 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x14) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
    *(undefined4 *)(param_1 + 0x15) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xac) = uVar5;
    uVar5 = uRam0000000140c783ac;
    uVar4 = uRam0000000140c783a8;
    uVar3 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x16) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar3;
    *(undefined4 *)(param_1 + 0x17) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
    uVar5 = uRam0000000140c783bc;
    uVar4 = uRam0000000140c783b8;
    uVar3 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x18) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0xc4) = uVar3;
    *(undefined4 *)(param_1 + 0x19) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xcc) = uVar5;
    uVar5 = uRam0000000140c783cc;
    uVar4 = uRam0000000140c783c8;
    uVar3 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x1a) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0xd4) = uVar3;
    *(undefined4 *)(param_1 + 0x1b) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xdc) = uVar5;
    uVar5 = uRam0000000140c7839c;
    uVar4 = uRam0000000140c78398;
    uVar3 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x1c) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar3;
    *(undefined4 *)(param_1 + 0x1d) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar5;
    uVar5 = uRam0000000140c783ac;
    uVar4 = uRam0000000140c783a8;
    uVar3 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x1e) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
    *(undefined4 *)(param_1 + 0x1f) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
    uVar5 = uRam0000000140c783bc;
    uVar4 = uRam0000000140c783b8;
    uVar3 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x20) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar3;
    *(undefined4 *)(param_1 + 0x21) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x10c) = uVar5;
    uVar5 = uRam0000000140c783cc;
    uVar4 = uRam0000000140c783c8;
    uVar3 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x22) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x114) = uVar3;
    *(undefined4 *)(param_1 + 0x23) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x11c) = uVar5;
    uVar5 = uRam0000000140c7839c;
    uVar4 = uRam0000000140c78398;
    uVar3 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x24) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x124) = uVar3;
    *(undefined4 *)(param_1 + 0x25) = uVar4;
    *(undefined4 *)((longlong)param_1 + 300) = uVar5;
    uVar5 = uRam0000000140c783ac;
    uVar4 = uRam0000000140c783a8;
    uVar3 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x26) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
    *(undefined4 *)(param_1 + 0x27) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x13c) = uVar5;
    uVar5 = uRam0000000140c783bc;
    uVar4 = uRam0000000140c783b8;
    uVar3 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x28) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x144) = uVar3;
    *(undefined4 *)(param_1 + 0x29) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x14c) = uVar5;
    uVar5 = uRam0000000140c783cc;
    uVar4 = uRam0000000140c783c8;
    uVar3 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x2a) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x154) = uVar3;
    *(undefined4 *)(param_1 + 0x2b) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x15c) = uVar5;
    uVar5 = uRam0000000140c7839c;
    uVar4 = uRam0000000140c78398;
    uVar3 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x2c) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x164) = uVar3;
    *(undefined4 *)(param_1 + 0x2d) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x16c) = uVar5;
    uVar5 = uRam0000000140c783ac;
    uVar4 = uRam0000000140c783a8;
    uVar3 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x2e) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x174) = uVar3;
    *(undefined4 *)(param_1 + 0x2f) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x17c) = uVar5;
    uVar5 = uRam0000000140c783bc;
    uVar4 = uRam0000000140c783b8;
    uVar3 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x30) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x184) = uVar3;
    *(undefined4 *)(param_1 + 0x31) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x18c) = uVar5;
    uVar5 = uRam0000000140c783cc;
    uVar4 = uRam0000000140c783c8;
    uVar3 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x32) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x194) = uVar3;
    *(undefined4 *)(param_1 + 0x33) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x19c) = uVar5;
    uVar5 = uRam0000000140c7839c;
    uVar4 = uRam0000000140c78398;
    uVar3 = uRam0000000140c78394;
    *(undefined4 *)(param_1 + 0x34) = _DAT_140c78390;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar3;
    *(undefined4 *)(param_1 + 0x35) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar5;
    uVar5 = uRam0000000140c783ac;
    uVar4 = uRam0000000140c783a8;
    uVar3 = uRam0000000140c783a4;
    *(undefined4 *)(param_1 + 0x36) = _DAT_140c783a0;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar3;
    *(undefined4 *)(param_1 + 0x37) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar5;
    uVar5 = uRam0000000140c783bc;
    uVar4 = uRam0000000140c783b8;
    uVar3 = uRam0000000140c783b4;
    *(undefined4 *)(param_1 + 0x38) = _DAT_140c783b0;
    *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
    *(undefined4 *)(param_1 + 0x39) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar5;
    uVar5 = uRam0000000140c783cc;
    uVar4 = uRam0000000140c783c8;
    uVar3 = uRam0000000140c783c4;
    *(undefined4 *)(param_1 + 0x3a) = _DAT_140c783c0;
    *(undefined4 *)((longlong)param_1 + 0x1d4) = uVar3;
    *(undefined4 *)(param_1 + 0x3b) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar5;
    param_1[0x40] = 0;
    return param_1;
}



undefined8 * FUN_1405cfea0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b6ddb0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1405cfed0(longlong param_1,undefined8 param_2)

{
    int iVar1;

    *(undefined8 *)(param_1 + 8) = param_2;
    *(undefined (*) [16])(param_1 + 0x210) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x230) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x220) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x240) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x270) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x260) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x40) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x2c0) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x2b0) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x298) = 0x40066666;
    *(undefined4 *)(param_1 + 0x294) = 0x40066666;
    *(undefined4 *)(param_1 + 0x2f0) = 0x41200000;
    *(undefined4 *)(param_1 + 0x2a0) = 0x41200000;
    *(undefined4 *)(param_1 + 0x29c) = 0x41200000;
    *(undefined4 *)(param_1 + 0x2a8) = 0x41200000;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x2d4) = 0;
    *(undefined8 *)(param_1 + 0x2dc) = 0;
    iVar1 = DAT_140c636a8 + 1000;
    *(undefined4 *)(param_1 + 0x2e8) = 1;
    *(undefined4 *)(param_1 + 0x2ec) = 1;
    *(int *)(param_1 + 0x2e4) = iVar1;
    return 0;
}



undefined8
FUN_1405cffa0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
              float *param_5_00,float *param_6_00,float *param_5,float *param_6)

{
    uint uVar1;
    int iVar2;
    float extraout_XMM0_Da;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    undefined4 uVar8;
    float fVar9;

    uVar8 = (undefined4)((ulonglong)param_2 >> 0x20);
    fVar7 = (float)param_2;
    FUN_1408fc7f0();
    fVar5 = 1.0 - extraout_XMM0_Da;
    if ((param_6_00[1] != 0.0) || (*param_6_00 != 0.0)) {
        *(undefined4 *)(param_3 + 0x220) = *(undefined4 *)(param_3 + 0x230);
        *(undefined4 *)(param_3 + 0x224) = *(undefined4 *)(param_3 + 0x234);
        *(undefined4 *)(param_3 + 0x228) = *(undefined4 *)(param_3 + 0x238);
        *(undefined4 *)(param_3 + 0x22c) = *(undefined4 *)(param_3 + 0x23c);
    }
    *(float *)(param_3 + 0x34) = param_5_00[1] + *(float *)(param_3 + 0x34);
    *(float *)(param_3 + 0x38) = *(float *)(param_3 + 0x38) + *param_5_00;
    *(float *)(param_3 + 0x224) = *(float *)(param_3 + 0x224) + param_6_00[1];
    *(float *)(param_3 + 0x220) = *param_6_00 + *(float *)(param_3 + 0x220);
    *(float *)(param_3 + 0x214) =
            (param_5[1] - *(float *)(param_3 + 0x214)) * fVar5 + *(float *)(param_3 + 0x214);
    *(float *)(param_3 + 0x210) =
            (*param_5 - *(float *)(param_3 + 0x210)) * fVar5 + *(float *)(param_3 + 0x210);
    *(float *)(param_3 + 0x244) =
            (param_6[1] - *(float *)(param_3 + 0x244)) * fVar5 + *(float *)(param_3 + 0x244);
    *(float *)(param_3 + 0x240) =
            (*param_6 - *(float *)(param_3 + 0x240)) * fVar5 + *(float *)(param_3 + 0x240);
    if ((param_6_00[1] != 0.0) || (*param_6_00 != 0.0)) {
        *(undefined4 *)(param_3 + 0x230) = *(undefined4 *)(param_3 + 0x220);
        *(undefined4 *)(param_3 + 0x234) = *(undefined4 *)(param_3 + 0x224);
        *(undefined4 *)(param_3 + 0x238) = *(undefined4 *)(param_3 + 0x228);
        *(undefined4 *)(param_3 + 0x23c) = *(undefined4 *)(param_3 + 0x22c);
    }
    fVar5 = fVar7 * *(float *)(param_3 + 0x214);
    *(float *)(param_3 + 0x290) = fVar5;
    fVar3 = (fVar5 + *(float *)(param_3 + 0x34) + 3.141593) * 0.1591549;
    iVar2 = (int)fVar3;
    fVar5 = fVar3;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar3)) {
        uVar1 = movmskps((int)param_6,
                         CONCAT88(SUB168(CONCAT412(uVar8,CONCAT48(uVar8,CONCAT44(uVar8,fVar3))) >> 0x40,
                                         0),(ulonglong)(uint)fVar3 | CONCAT44(uVar8,fVar3) << 0x20));
        param_6 = (float *)(ulonglong)(uVar1 & 1);
        fVar5 = (float)(iVar2 - (uVar1 & 1));
    }
    uVar1 = (uint)param_6;
    fVar6 = fVar7 * *(float *)(param_3 + 0x244);
    fVar3 = fVar7 * *(float *)(param_3 + 0x210) + *(float *)(param_3 + 0x38);
    if (1.570796 <= fVar3) {
        fVar3 = 1.570796;
    }
    fVar9 = -1.570796;
    if (-1.570796 <= fVar3) {
        fVar9 = fVar3;
    }
    fVar3 = (fVar6 + *(float *)(param_3 + 0x224) + 3.141593) * 0.1591549;
    *(float *)(param_3 + 0x34) = (fVar3 - fVar5) * 6.283185 - 3.141593;
    *(float *)(param_3 + 0x38) = fVar9;
    iVar2 = (int)fVar3;
    fVar5 = fVar3;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar3)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar8,CONCAT48(uVar8,CONCAT44(uVar8,fVar3))) >>
                                                                                                      0x40,0),
                                        (ulonglong)(uint)fVar3 | CONCAT44(uVar8,fVar3) << 0x20));
        uVar1 = uVar1 & 1;
        fVar5 = (float)(iVar2 - uVar1);
    }
    fVar7 = fVar7 * *(float *)(param_3 + 0x240);
    fVar3 = fVar7 + *(float *)(param_3 + 0x220);
    fVar6 = (fVar6 + *(float *)(param_3 + 0x234) + 3.141593) * 0.1591549;
    if (1.570796 - fVar9 <= fVar3) {
        fVar3 = 1.570796 - fVar9;
    }
    iVar2 = (int)fVar6;
    fVar4 = -1.570796 - fVar9;
    if (-1.570796 - fVar9 <= fVar3) {
        fVar4 = fVar3;
    }
    *(float *)(param_3 + 0x224) = (fVar3 - fVar5) * 6.283185 - 3.141593;
    *(float *)(param_3 + 0x220) = fVar4;
    fVar5 = fVar6;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar6)) {
        uVar1 = movmskps(uVar1,CONCAT88(SUB168(CONCAT412(uVar8,CONCAT48(uVar8,CONCAT44(uVar8,fVar6))) >>
                                                                                                      0x40,0),
                                        (ulonglong)(uint)fVar6 | CONCAT44(uVar8,fVar6) << 0x20));
        fVar5 = (float)(iVar2 - (uVar1 & 1));
    }
    fVar7 = fVar7 + *(float *)(param_3 + 0x230);
    fVar9 = 1.570796 - *(float *)(param_3 + 0x38);
    fVar3 = -1.570796 - *(float *)(param_3 + 0x38);
    if (fVar9 <= fVar7) {
        fVar7 = fVar9;
    }
    if (fVar3 <= fVar7) {
        fVar3 = fVar7;
    }
    *(float *)(param_3 + 0x230) = fVar3;
    *(float *)(param_3 + 0x234) = (fVar6 - fVar5) * 6.283185 - 3.141593;
    return 0;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405d0300(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                   float param_5,undefined8 param_6,undefined8 param_7,float *param_8,float *param_9,
                   float param_10,int param_11)

{
    float *pfVar1;
    longlong lVar2;
    uint uVar3;
    undefined auVar4 [12];
    uint uVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    uint uVar9;
    longlong *plVar10;
    longlong lVar11;
    undefined4 *puVar12;
    float *pfVar13;
    int iVar14;
    longlong *plVar15;
    uint *puVar16;
    undefined (*pauVar17) [16];
    ulonglong uVar18;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    float extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    float extraout_XMM0_Da_07;
    float extraout_XMM0_Da_08;
    float extraout_XMM0_Da_09;
    float extraout_XMM0_Da_10;
    float extraout_XMM0_Da_11;
    float extraout_XMM0_Da_12;
    float extraout_XMM0_Da_13;
    float extraout_XMM0_Da_14;
    float extraout_XMM0_Da_15;
    float extraout_XMM0_Da_16;
    float fVar19;
    float extraout_XMM0_Da_17;
    float extraout_XMM0_Da_18;
    float extraout_XMM0_Da_19;
    float extraout_XMM0_Da_20;
    float extraout_XMM0_Da_21;
    float extraout_XMM0_Da_22;
    float extraout_XMM0_Da_23;
    float extraout_XMM0_Da_24;
    float extraout_XMM0_Da_25;
    float extraout_XMM0_Da_26;
    float extraout_XMM0_Da_27;
    float extraout_XMM0_Da_28;
    float extraout_XMM0_Da_29;
    float extraout_XMM0_Da_30;
    float extraout_XMM0_Da_31;
    float extraout_XMM0_Da_32;
    float extraout_XMM0_Da_33;
    float extraout_XMM0_Da_34;
    float extraout_XMM0_Da_35;
    float extraout_XMM0_Da_36;
    float extraout_XMM0_Da_37;
    float extraout_XMM0_Da_38;
    uint extraout_XMM0_Da_39;
    uint extraout_XMM0_Da_40;
    uint extraout_XMM0_Da_41;
    float extraout_XMM0_Da_42;
    uint extraout_XMM0_Da_43;
    uint extraout_XMM0_Da_44;
    uint extraout_XMM0_Da_45;
    undefined auVar20 [16];
    float fVar21;
    float fVar22;
    float fVar23;
    undefined4 uVar25;
    undefined auVar24 [16];
    undefined4 uVar26;
    undefined4 uVar27;
    undefined4 uVar28;
    float fVar29;
    undefined4 uVar30;
    float fVar31;
    undefined4 uVar32;
    float fVar33;
    float fVar34;
    float fVar35;
    float fVar36;
    undefined4 uVar37;
    undefined4 uVar38;
    float fVar39;
    undefined4 uVar40;
    undefined4 uVar41;
    undefined4 uVar42;
    undefined4 uVar43;
    undefined4 uVar44;
    undefined4 uVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    undefined4 uVar49;
    undefined4 uVar50;
    undefined4 uVar51;
    float fVar52;
    float fVar53;
    undefined4 uVar54;
    undefined4 uVar55;
    float fVar56;
    undefined4 uVar57;
    undefined4 uVar58;
    undefined auStack1304 [32];
    longlong **local_4f8;
    undefined ***local_4f0;
    ulonglong local_4e8;
    ulonglong local_4e0;
    float local_4d8;
    undefined4 local_4d0;
    int local_4c8;
    undefined8 local_4c0;
    undefined8 local_4b8;
    undefined8 local_4b0;
    undefined8 local_4a8;
    undefined8 local_4a0;
    undefined8 local_498;
    undefined8 local_490;
    undefined8 local_488;
    undefined8 local_480;
    undefined8 local_478;
    undefined8 local_470;
    double local_468;
    double local_460;
    double local_458;
    double local_450;
    undefined (*local_448) [16];
    longlong *local_440;
    double local_438;
    double local_430;
    double local_428;
    longlong *local_420;
    longlong *local_418;
    longlong *local_410;
    float *local_408;
    undefined8 local_400;
    undefined *local_3f8;
    undefined local_3e8 [4];
    undefined auStack996 [4];
    undefined8 uStack992;
    uint local_3d8;
    undefined8 local_3d0;
    undefined8 local_3c8;
    float local_3c0;
    undefined (*local_3b8) [16];
    float local_3a8;
    float fStack932;
    float fStack928;
    float fStack924;
    undefined local_398 [8];
    float fStack912;
    float fStack908;
    undefined8 local_388;
    undefined8 local_380;
    undefined local_378 [8];
    float fStack880;
    float fStack876;
    longlong *local_368;
    undefined local_358 [8];
    undefined8 uStack848;
    longlong *local_348;
    longlong *local_340;
    float *local_338;
    double local_330;
    double local_328;
    double local_320;
    longlong *local_318 [2];
    undefined local_308 [8];
    undefined8 uStack768;
    undefined **local_2f8;
    ulonglong local_2f0;
    LPVOID local_2e8;
    undefined8 local_2e0;
    undefined4 local_2d8;
    undefined8 local_2d0;
    undefined local_2c8 [12];
    undefined4 uStack700;
    undefined local_2b8 [16];
    undefined4 local_2a8;
    undefined8 local_2a0;
    double local_298;
    undefined4 local_288;
    undefined4 uStack644;
    undefined4 uStack640;
    undefined4 uStack636;
    undefined4 local_278;
    undefined4 uStack628;
    undefined4 uStack624;
    undefined4 uStack620;
    undefined4 local_268;
    undefined4 uStack612;
    undefined4 uStack608;
    undefined4 uStack604;
    undefined4 local_258;
    undefined4 uStack596;
    undefined4 uStack592;
    undefined4 uStack588;
    undefined8 local_248;
    float fStack576;
    float fStack572;
    undefined8 local_238;
    ulonglong uStack560;
    float local_228;
    float fStack548;
    undefined8 uStack544;
    undefined4 local_218;
    undefined4 uStack532;
    undefined4 uStack528;
    undefined4 uStack524;
    undefined local_1d8 [32];
    float local_1b8;
    float local_194;
    float local_148;
    ulonglong local_f8;

    puVar16 = DAT_140c63750;
    local_f8 = DAT_140c0f7b0 ^ (ulonglong)auStack1304;
    local_3b8 = (undefined (*) [16])param_8;
    local_338 = param_9;
    uVar5 = *DAT_140c63750;
    uVar8 = DAT_140c4daa0;
    if ((int)uVar5 < (int)DAT_140c4daa0) {
        uVar8 = uVar5;
    }
    if ((&DAT_140c4dab0)[(int)uVar8] == '\0') {
        fVar39 = *(float *)(param_1 + 0x30);
    }
    else {
        uVar8 = DAT_140c4d980;
        if ((int)uVar5 < (int)DAT_140c4d980) {
            uVar8 = uVar5;
        }
        fVar39 = *(float *)(&DAT_140c4d990 + (longlong)(int)uVar8 * 4);
    }
    local_368 = param_4;
    if (1e-05 < fVar39) {
        uVar8 = FUN_1408fc7f0();
        fVar39 = extraout_XMM0_Da;
    }
    else {
        fVar39 = 0.0;
    }
    fVar56 = 1.0;
    fVar39 = 1.0 - fVar39;
    fVar21 = ((*(float *)(param_1 + 0x224) - *(float *)(param_1 + 0x234)) * fVar39 +
              *(float *)(param_1 + 0x234) + 3.141593) * 0.1591549;
    iVar14 = (int)fVar21;
    fVar22 = fVar21;
    if ((iVar14 != -0x80000000) && ((float)iVar14 != fVar21)) {
        uVar5 = movmskps(uVar8,ZEXT816(CONCAT44(fVar21,fVar21)));
        fVar22 = (float)(iVar14 - (uVar5 & 1));
    }
    fVar46 = *(float *)(param_1 + 0x34);
    uVar50 = 0;
    *(float *)(param_1 + 0x234) = (fVar21 - fVar22) * 6.283185 - 3.141593;
    *(float *)(param_1 + 0x230) =
            (*(float *)(param_1 + 0x220) - *(float *)(param_1 + 0x230)) * fVar39 +
            *(float *)(param_1 + 0x230);
    local_3c8 = (double)CONCAT44(local_3c8._4_4_,*(undefined4 *)(param_1 + 0x38));
    uVar5 = *puVar16;
    uVar8 = DAT_140c4de40;
    if ((int)uVar5 < (int)DAT_140c4de40) {
        uVar8 = uVar5;
    }
    local_388 = (double)CONCAT44(local_388._4_4_,*(undefined4 *)(param_1 + 0x3c));
    if (*(float *)(&DAT_140c4de50 + (longlong)(int)uVar8 * 4) < *(float *)(param_1 + 0x29c)) {
        uVar8 = DAT_140c4de40;
        if ((int)uVar5 < (int)DAT_140c4de40) {
            uVar8 = uVar5;
        }
        *(undefined4 *)(param_1 + 0x29c) = *(undefined4 *)(&DAT_140c4de50 + (longlong)(int)uVar8 * 4);
    }
    fVar22 = 0.0;
    uVar5 = DAT_140c4de40;
    if ((int)*puVar16 < (int)DAT_140c4de40) {
        uVar5 = *puVar16;
    }
    fVar21 = 0.0;
    fVar47 = *(float *)(param_1 + 0x2f0);
    if (*(float *)(&DAT_140c4de50 + (longlong)(int)uVar5 * 4) <= *(float *)(param_1 + 0x2f0)) {
        fVar47 = *(float *)(&DAT_140c4de50 + (longlong)(int)uVar5 * 4);
    }
    fVar52 = 0.0;
    if (0.0 <= fVar47) {
        fVar52 = fVar47;
    }
    *(float *)(param_1 + 0x2f0) = fVar52;
    uVar5 = *puVar16;
    uVar8 = DAT_140c4de40;
    if ((int)uVar5 < (int)DAT_140c4de40) {
        uVar8 = uVar5;
    }
    if (*(float *)(&DAT_140c4de50 + (longlong)(int)uVar8 * 4) < *(float *)(param_1 + 0x2a8)) {
        uVar8 = DAT_140c4de40;
        if ((int)uVar5 < (int)DAT_140c4de40) {
            uVar8 = uVar5;
        }
        *(undefined4 *)(param_1 + 0x2a8) = *(undefined4 *)(&DAT_140c4de50 + (longlong)(int)uVar8 * 4);
    }
    lVar2 = DAT_140c65898;
    iVar14 = DAT_140c636a8;
    local_380 = (double)CONCAT44(local_380._4_4_,DAT_140c636a8);
    local_3d8 = 0;
    *(float *)(param_1 + 0x298) =
            (*(float *)(param_1 + 0x294) - *(float *)(param_1 + 0x298)) * fVar39 +
            *(float *)(param_1 + 0x298);
    lVar2 = *(longlong *)(lVar2 + 0x6490);
    local_3c0 = fVar39;
    if (lVar2 == 0) {
        LAB_1405d08fa:
        *(undefined8 *)(param_1 + 0x2d8) = 0;
        local_3d8 = 1;
        if (*(int *)(param_1 + 0x2ec) != 0) {
            _local_2c8 = minps(*(undefined (*) [16])(param_1 + 0x2b0),
                               *(undefined (*) [16])(param_1 + 0x280));
            local_2b8 = maxps(*(undefined (*) [16])(param_1 + 0x2b0),
                              *(undefined (*) [16])(param_1 + 0x280));
            (**(code **)(*local_368 + 0x58))(local_368);
            *(undefined4 *)(param_1 + 0x2ec) = 0;
            puVar16 = DAT_140c63750;
        }
    }
    else {
        plVar15 = *(longlong **)(lVar2 + 0x16f0);
        plVar10 = plVar15;
        if (plVar15 == (longlong *)0x0) {
            plVar10 = *(longlong **)(lVar2 + 0x16f8);
        }
        if (((plVar10 == (longlong *)0x0) || (*(int *)(lVar2 + 0xfcc) != 0)) ||
            (*(int *)(param_1 + 0x2ec) != 0)) goto LAB_1405d08fa;
        if (plVar15 == (longlong *)0x0) {
            plVar15 = *(longlong **)(lVar2 + 0x16f8);
        }
        iVar6 = (**(code **)(*plVar15 + 0x108))();
        if (iVar6 == 2) {
            local_3d0 = *(longlong **)(lVar2 + 0x16e8);
            if (local_3d0 != (longlong *)0x0) {
                _local_3e8 = *(undefined (*) [16])(lVar2 + 0x11e0);
                local_4f0 = (undefined ***)local_2c8;
                local_4f8 = &local_348;
                local_348 = (longlong *)0x0;
                local_340 = (longlong *)0x0;
                local_318[0] = (longlong *)0x0;
                local_2b8 = local_2b8 & (undefined  [16])0xffffffffffffffff;
                local_2a8 = 0;
                local_2a0 = 0;
                _local_2c8 = CONCAT88(stack0xfffffffffffffd40,0x4011);
                local_330 = 0.0078125;
                iVar7 = (**(code **)(*param_2 + 0x1a8))(param_2);
                if (iVar7 != 0) {
                    fVar22 = *(float *)(lVar2 + 0x12c4);
                    lVar11 = (**(code **)(*local_3d0 + 0x4c0))();
                    fVar47 = 0.5;
                    local_4f0 = &local_2f8;
                    local_4f8 = &local_340;
                    local_2f0 = local_2f0 & 0xffffffff00000000;
                    local_2e8 = (LPVOID)0x0;
                    local_2e0 = 0;
                    local_2d8 = 0;
                    local_2d0 = 0;
                    _local_3e8 = CONCAT44(auStack996 +
                                          fVar22 * (*(float *)(lVar11 + 0x14) + *(float *)(lVar11 + 4)) * 0.5,
                                          local_3e8);
                    local_2f8 = (undefined **)0x4011;
                    local_320 = 0.0078125;
                    iVar7 = (**(code **)(*param_2 + 0x1a8))(param_2);
                    if (iVar7 != 0) {
                        fVar22 = *(float *)(lVar2 + 0x12c4);
                        lVar11 = (**(code **)(*local_3d0 + 0x4c0))();
                        local_4f0 = (undefined ***)&local_248;
                        local_4f8 = local_318;
                        fStack576 = 0.0;
                        local_238 = 0;
                        uStack560 = 0;
                        local_228 = 0.0;
                        uStack544 = 0;
                        _local_3e8 = CONCAT44(auStack996 +
                                              fVar22 * (*(float *)(lVar11 + 0x14) + *(float *)(lVar11 + 4)) *
                                              fVar47,local_3e8);
                        local_248 = (undefined **)0x4011;
                        local_328 = 0.0078125;
                        iVar7 = (**(code **)(*param_2 + 0x1a8))(param_2);
                        if (iVar7 != 0) {
                            iVar6 = 1;
                        }
                    }
                    fVar22 = 0.0;
                }
                if (local_318[0] != (longlong *)0x0) {
                    (**(code **)(*local_318[0] + 8))();
                }
                if (local_340 != (longlong *)0x0) {
                    (**(code **)(*local_340 + 8))();
                }
                if (local_348 != (longlong *)0x0) {
                    (**(code **)(*local_348 + 8))();
                }
                goto LAB_1405d0868;
            }
            LAB_1405d08de:
            *(undefined4 *)(param_1 + 0x2d8) = 0;
            *(int *)(param_1 + 0x2dc) =
                    *(int *)(param_1 + 0x2dc) + ((uint)(iVar14 - *(int *)(param_1 + 0x2e0)) >> 1);
            puVar16 = DAT_140c63750;
        }
        else {
            LAB_1405d0868:
            if (iVar6 != 1) goto LAB_1405d08de;
            iVar6 = iVar14 - *(int *)(param_1 + 0x2dc);
            if (*(int *)(param_1 + 0x2d8) == 0) {
                *(undefined4 *)(param_1 + 0x2d8) = 1;
                puVar16 = DAT_140c63750;
                if (0 < iVar6) {
                    uVar5 = DAT_140c4d880;
                    if ((int)*DAT_140c63750 < (int)DAT_140c4d880) {
                        uVar5 = *DAT_140c63750;
                    }
                    *(int *)(param_1 + 0x2dc) =
                            (int)(longlong)(*(float *)(&DAT_140c4d890 + (longlong)(int)uVar5 * 4) * 1000.0) +
                            iVar14;
                }
            }
            else {
                puVar16 = DAT_140c63750;
                if (0 < iVar6) {
                    local_3d8 = 1;
                }
            }
        }
    }
    fVar47 = 3.141593;
    fVar52 = 0.001;
    *(int *)(param_1 + 0x2e0) = iVar14;
    uVar5 = *puVar16;
    if (param_11 == 0) {
        fVar53 = *(float *)(param_1 + 0x29c);
        uVar8 = DAT_140c4d9e0;
        if ((int)uVar5 < (int)DAT_140c4d9e0) {
            uVar8 = uVar5;
        }
        local_3d0._0_4_ = fVar22;
        if (1e-05 < fVar53 * *(float *)(&DAT_140c4d9f0 + (longlong)(int)uVar8 * 4) * 0.03125) {
            FUN_1408fc7f0();
            local_3d0._0_4_ = extraout_XMM0_Da_02;
        }
        uVar8 = DAT_140c4da40;
        if ((int)uVar5 < (int)DAT_140c4da40) {
            uVar8 = uVar5;
        }
        local_3d0._0_4_ = fVar56 - (float)local_3d0;
        local_3d0 = (longlong *)
                ((ulonglong)local_3d0 & 0xffffffff00000000 | (ulonglong)(uint)(float)local_3d0);
        fVar31 = fVar22;
        if (1e-05 < fVar53 * *(float *)(&DAT_140c4da50 + (longlong)(int)uVar8 * 4) * 0.03125) {
            FUN_1408fc7f0();
            fVar31 = extraout_XMM0_Da_03;
        }
        fVar34 = *(float *)(param_1 + 0x2f0);
        fVar29 = *(float *)(param_1 + 0x2a0);
        if (fVar34 < fVar29) {
            LAB_1405d0b7a:
            if (fVar29 <= fVar53) goto LAB_1405d0b80;
            LAB_1405d0ba6:
            fVar36 = *(float *)(param_1 + 0x2a0);
            fVar31 = (fVar34 - fVar29) * (fVar56 - fVar31) + fVar29;
            if (((float)((uint)(fVar36 - fVar31) & 0x7fffffff) <= fVar52) &&
                (fVar31 = fVar34, fVar52 < (float)((uint)(fVar36 - fVar34) & 0x7fffffff))) {
                if (fVar34 <= fVar36) {
                    fVar31 = fVar36 - fVar52;
                }
                else {
                    fVar31 = fVar36 + fVar52;
                }
            }
            *(float *)(param_1 + 0x2a0) =
                    fVar31 + (((((fVar29 + fVar53) - fVar34) - fVar29) * (float)local_3d0 + fVar29) - fVar29)
                    ;
        }
        else {
            if (fVar29 < fVar53) {
                if (fVar34 <= fVar29) goto LAB_1405d0b7a;
                goto LAB_1405d0ba6;
            }
            LAB_1405d0b80:
            fVar29 = (fVar53 - fVar29) * (float)local_3d0 + fVar29;
            LAB_1405d0b8f:
            *(float *)(param_1 + 0x2a0) = fVar29;
            *(float *)(param_1 + 0x2f0) = fVar29;
        }
    }
    else {
        fVar52 = *(float *)(param_1 + 0x2a8);
        uVar8 = DAT_140c4d9e0;
        if ((int)uVar5 < (int)DAT_140c4d9e0) {
            uVar8 = uVar5;
        }
        fVar53 = fVar22;
        if (1e-05 < fVar52 * *(float *)(&DAT_140c4d9f0 + (longlong)(int)uVar8 * 4) * 0.03125) {
            FUN_1408fc7f0();
            fVar53 = extraout_XMM0_Da_00;
        }
        uVar8 = DAT_140c4da40;
        if ((int)uVar5 < (int)DAT_140c4da40) {
            uVar8 = uVar5;
        }
        fVar53 = fVar56 - fVar53;
        fVar31 = fVar22;
        if (1e-05 < fVar52 * *(float *)(&DAT_140c4da50 + (longlong)(int)uVar8 * 4) * 0.03125) {
            FUN_1408fc7f0();
            fVar31 = extraout_XMM0_Da_01;
        }
        fVar34 = *(float *)(param_1 + 0x2f0);
        fVar29 = *(float *)(param_1 + 0x2a0);
        if (fVar29 <= fVar34) {
            if (fVar52 <= fVar29) goto LAB_1405d0a5b;
            if (fVar34 <= fVar29) goto LAB_1405d0a55;
        }
        else {
            LAB_1405d0a55:
            if (fVar29 <= fVar52) {
                LAB_1405d0a5b:
                fVar29 = (fVar52 - fVar29) * fVar53 + fVar29;
                goto LAB_1405d0b8f;
            }
        }
        *(float *)(param_1 + 0x2a0) =
                (fVar34 - fVar29) * (fVar56 - fVar31) + fVar29 +
                (((((fVar29 + fVar52) - fVar34) - fVar29) * fVar53 + fVar29) - fVar29);
    }
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
    uVar5 = *puVar16;
    uVar8 = DAT_140c4de40;
    if ((int)uVar5 < (int)DAT_140c4de40) {
        uVar8 = uVar5;
    }
    if (*(float *)(&DAT_140c4de50 + (longlong)(int)uVar8 * 4) <= *(float *)(param_1 + 0x2a0) &&
                                                                 *(float *)(param_1 + 0x2a0) != *(float *)(&DAT_140c4de50 + (longlong)(int)uVar8 * 4)) {
        uVar8 = DAT_140c4de40;
        if ((int)uVar5 < (int)DAT_140c4de40) {
            uVar8 = uVar5;
        }
        uVar8 = *(uint *)(&DAT_140c4de50 + (longlong)(int)uVar8 * 4);
        *(uint *)(param_1 + 0x2a0) = uVar8;
    }
    fVar46 = (fVar46 + *(float *)(param_1 + 0x234) + fVar47) * 0.1591549;
    if (((int)fVar46 != -0x80000000) && ((float)(int)fVar46 != fVar46)) {
        uVar8 = movmskps(uVar8,CONCAT88(SUB168(CONCAT412(uVar50,CONCAT48(uVar50,CONCAT44(uVar50,fVar46))
                                        ) >> 0x40,0),
                                        (ulonglong)(uint)fVar46 | CONCAT44(uVar50,fVar46) << 0x20));
        uVar8 = uVar8 & 1;
    }
    auVar24 = ZEXT1216(ZEXT812(0xbfc90fdb));
    fVar46 = SUB124(ZEXT812(0xbfc90fdb),0);
    uVar50 = SUB164(auVar24 >> 0x40,0);
    uVar25 = 0;
    auVar20 = ZEXT416((uint)((float)local_3c8 + *(float *)(param_1 + 0x230))) &
              (undefined  [16])0xffffffffffffffff;
    if (1.570796 <= SUB164(auVar20,0)) {
        auVar20 = CONCAT124(SUB1612(auVar20 >> 0x20,0),0x3fc90fdb);
    }
    fVar52 = fVar46;
    if (fVar46 <= SUB164(auVar20,0)) {
        fVar52 = SUB164(auVar20,0);
    }
    if (*(int *)(param_1 + 0x2d0) != 0) {
        fVar47 = (*(float *)(param_1 + 0x250) + fVar47) * 0.1591549;
        if (((int)fVar47 != -0x80000000) && ((float)(int)fVar47 != fVar47)) {
            movmskps(uVar8,ZEXT816(CONCAT44(fVar47,fVar47)));
        }
        fVar47 = *(float *)(param_1 + 0x254);
        *(undefined4 *)(param_1 + 0x2d0) = 0;
        if (1.570796 <= fVar47) {
            fVar47 = 1.570796;
        }
        if (fVar46 <= fVar47) {
            auVar24 = ZEXT416((uint)fVar47);
        }
        fVar52 = SUB164(auVar24,0);
        uVar50 = SUB164(auVar24 >> 0x40,0);
        uVar25 = SUB164(auVar24 >> 0x60,0);
    }
    uVar26 = 0;
    if (((*(int *)(param_1 + 0x2d4) == 0) ||
         (fVar46 = *(float *)(param_1 + 0x2c0) - *local_338,
          fVar47 = *(float *)(param_1 + 0x2c4) - local_338[1],
          fVar53 = *(float *)(param_1 + 0x2c8) - local_338[2],
                 DAT_140c3c7a8 <= fVar46 * fVar46 + fVar47 * fVar47 + fVar53 * fVar53)) ||
        (fVar46 = *(float *)(param_1 + 0x2b0) - *(float *)local_3b8,
         fVar47 = *(float *)(param_1 + 0x2b4) - *(float *)((longlong)local_3b8 + 4),
         fVar53 = *(float *)(param_1 + 0x2b8) - *(float *)((longlong)local_3b8 + 8),
                DAT_140c3c7a8 <= fVar46 * fVar46 + fVar47 * fVar47 + fVar53 * fVar53)) {
        uVar5 = *puVar16;
        fVar46 = *(float *)(param_1 + 0x2a0);
        uVar8 = DAT_140c4dd80;
        if ((int)uVar5 < (int)DAT_140c4dd80) {
            uVar8 = uVar5;
        }
        fVar47 = fVar22;
        if (*(float *)(&DAT_140c4dd90 + (longlong)(int)uVar8 * 4) <= fVar46 &&
                                                                     fVar46 != *(float *)(&DAT_140c4dd90 + (longlong)(int)uVar8 * 4)) {
            uVar8 = DAT_140c4dd80;
            if ((int)uVar5 < (int)DAT_140c4dd80) {
                uVar8 = uVar5;
            }
            uVar9 = DAT_140c4de40;
            if ((int)uVar5 < (int)DAT_140c4de40) {
                uVar9 = uVar5;
            }
            uVar3 = DAT_140c4dd80;
            if ((int)uVar5 < (int)DAT_140c4dd80) {
                uVar3 = uVar5;
            }
            fVar46 = (fVar46 - *(float *)(&DAT_140c4dd90 + (longlong)(int)uVar8 * 4)) /
            (*(float *)(&DAT_140c4de50 + (longlong)(int)uVar9 * 4) -
                    *(float *)(&DAT_140c4dd90 + (longlong)(int)uVar3 * 4));
            if (fVar56 <= fVar46) {
                fVar46 = fVar56;
            }
            fVar47 = 0.0;
            if (0.0 <= fVar46) {
                fVar47 = fVar46;
            }
        }
        fVar46 = *(float *)((longlong)local_3b8 + 4);
        fVar53 = *(float *)((longlong)local_3b8 + 8);
        fVar31 = *(float *)((longlong)local_3b8 + 0xc);
        fVar29 = local_338[1];
        fVar34 = local_338[2];
        fVar36 = local_338[3];
        fVar19 = local_338[1];
        fVar23 = local_338[2];
        fVar33 = local_338[3];
        *(float *)(param_1 + 0x270) = (*(float *)local_3b8 - *local_338) * fVar47 + *local_338;
        *(float *)(param_1 + 0x274) = (fVar46 - fVar29) * fVar47 + fVar19;
        *(float *)(param_1 + 0x278) = (fVar53 - fVar34) * fVar47 + fVar23;
        *(float *)(param_1 + 0x27c) = (fVar31 - fVar36) * fVar47 + fVar33;
    }
    fVar46 = local_338[1];
    fVar47 = local_338[2];
    fVar53 = local_338[3];
    fVar29 = 0.005555556;
    *(float *)(param_1 + 0x40) = *local_338;
    *(float *)(param_1 + 0x44) = fVar46;
    *(float *)(param_1 + 0x48) = fVar47;
    *(float *)(param_1 + 0x4c) = fVar53;
    fVar46 = *(float *)local_3b8;
    fVar47 = *(float *)((longlong)local_3b8 + 4);
    fVar53 = *(float *)((longlong)local_3b8 + 8);
    fVar31 = *(float *)((longlong)local_3b8 + 0xc);
    *(float *)(param_1 + 0x260) = fVar46;
    *(float *)(param_1 + 0x264) = fVar47;
    *(float *)(param_1 + 0x268) = fVar53;
    *(float *)(param_1 + 0x26c) = fVar31;
    *(float *)(param_1 + 0x2b0) = fVar46;
    *(float *)(param_1 + 0x2b4) = fVar47;
    *(float *)(param_1 + 0x2b8) = fVar53;
    *(float *)(param_1 + 700) = fVar31;
    *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x2c8) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x4c);
    local_288 = _DAT_140c78390;
    uStack644 = uRam0000000140c78394;
    uStack640 = uRam0000000140c78398;
    uStack636 = uRam0000000140c7839c;
    local_278 = _DAT_140c783a0;
    uStack628 = uRam0000000140c783a4;
    uStack624 = uRam0000000140c783a8;
    uStack620 = uRam0000000140c783ac;
    local_268 = _DAT_140c783b0;
    uStack612 = uRam0000000140c783b4;
    uStack608 = uRam0000000140c783b8;
    uStack604 = uRam0000000140c783bc;
    local_258 = _DAT_140c783c0;
    uStack596 = uRam0000000140c783c4;
    uStack592 = uRam0000000140c783c8;
    uStack588 = uRam0000000140c783cc;
    uVar5 = *puVar16;
    uVar8 = DAT_140c4dbe0;
    if ((int)uVar5 < (int)DAT_140c4dbe0) {
        uVar8 = uVar5;
    }
    if ((&DAT_140c4dbf0)[(int)uVar8] == '\0') {
        uVar8 = DAT_140c4dea0;
        if ((int)uVar5 < (int)DAT_140c4dea0) {
            uVar8 = uVar5;
        }
        *(float *)(param_1 + 0x10) =
                DAT_140c3b438 * 0.005555556 * *(float *)(&DAT_140c4deb0 + (longlong)(int)uVar8 * 4);
    }
    else {
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
        (**(code **)(*plVar15 + 0x48))(plVar15,&DAT_140c78390);
        plVar15 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
        (**(code **)(*plVar15 + 0x30))(plVar15,DAT_140c636a8,0);
        local_4f8 = (longlong **)(param_1 + 0x1f8);
        local_4e0 = param_1 + 0xe0;
        local_4f0 = (undefined ***)&local_288;
        local_4e8 = 0;
        iVar14 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x18) + 0x428))();
        puVar16 = DAT_140c63750;
        if (-1 < iVar14) {
            uVar5 = DAT_140c4dea0;
            if ((int)*DAT_140c63750 < (int)DAT_140c4dea0) {
                uVar5 = *DAT_140c63750;
            }
            fVar46 = (*(float *)(&DAT_140c4deb0 + (longlong)(int)uVar5 * 4) / _DAT_140c4decc) *
                    *(float *)(param_1 + 0x10);
            if (180.0 <= fVar46) {
                fVar46 = 180.0;
            }
            if (fVar21 <= fVar46) {
                fVar21 = fVar46;
            }
            *(float *)(param_1 + 0x10) = fVar21;
        }
    }
    uVar18 = (ulonglong)local_3d0 & 0xffffffff00000000;
    local_3d0 = (longlong *)(uVar18 | (uint)fVar22);
    fVar29 = DAT_140c3b438 * fVar29;
    fVar39 = (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x14)) * fVar39 +
             *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x14) = fVar39;
    uVar5 = *puVar16;
    uVar8 = DAT_140c4dc20;
    if ((int)uVar5 < (int)DAT_140c4dc20) {
        uVar8 = uVar5;
    }
    local_3c8 = (double)((ulonglong)local_3c8 & 0xffffffff00000000 |
                         (ulonglong)(uint)((fVar29 * 50.0) / fVar39));
    if ((&DAT_140c4dc30)[(int)uVar8] != '\0') {
        uVar8 = DAT_140c4dc60;
        if ((int)uVar5 < (int)DAT_140c4dc60) {
            uVar8 = uVar5;
        }
        if (fVar22 != *(float *)(&DAT_140c4dc70 + (longlong)(int)uVar8 * 4)) {
            uVar8 = DAT_140c4dc60;
            if ((int)uVar5 < (int)DAT_140c4dc60) {
                uVar8 = uVar5;
            }
            local_3d0 = (longlong *)(uVar18 | *(uint *)(&DAT_140c4dc70 + (longlong)(int)uVar8 * 4));
        }
    }
    fVar53 = param_5 * 1.0;
    fVar31 = param_5 * 1.0;
    fVar29 = param_5 * 1.0;
    fVar34 = param_5 * 0.0;
    fVar39 = param_5 * -1.0;
    fVar21 = param_5 * -1.0;
    fVar46 = param_5 * -1.0;
    fVar47 = param_5 * 0.0;
    _local_308 = CONCAT412(fVar34,CONCAT48(fVar29,CONCAT44(fVar31,fVar53)));
    _local_378 = CONCAT412(fVar47,CONCAT48(fVar46,CONCAT44(fVar21,fVar39)));
    local_3b8 = (undefined (*) [16])(**(code **)(*param_3 + 0x18))(param_3);
    fVar36 = 0.5;
    *local_3b8 = CONCAT412(fVar47,CONCAT48(fVar46,CONCAT44(fVar21,fVar39)));
    local_3b8[1] = CONCAT412(fVar34,CONCAT48(fVar29,CONCAT44(fVar31,fVar53)));
    uVar27 = *(undefined4 *)(param_1 + 0x284);
    uVar28 = *(undefined4 *)(param_1 + 0x288);
    uVar30 = *(undefined4 *)(param_1 + 0x28c);
    *(undefined4 *)local_3b8[2] = *(undefined4 *)(param_1 + 0x280);
    *(undefined4 *)(local_3b8[2] + 4) = uVar27;
    *(undefined4 *)(local_3b8[2] + 8) = uVar28;
    *(undefined4 *)(local_3b8[2] + 0xc) = uVar30;
    local_388 = (double)((ulonglong)local_388 & 0xffffffff00000000 |
                         (ulonglong)(uint)((float)local_388 * 0.5));
    FUN_1408fe3d0();
    fVar53 = extraout_XMM0_Da_04;
    FUN_1408fc950();
    _local_358 = CONCAT412(uVar25,CONCAT48(uVar50,CONCAT44(uVar26,fVar52 * fVar36)));
    fVar47 = extraout_XMM0_Da_05;
    FUN_1408fe3d0();
    fVar21 = extraout_XMM0_Da_06;
    FUN_1408fc950();
    fVar39 = extraout_XMM0_Da_07;
    FUN_1408fe3d0();
    fVar46 = extraout_XMM0_Da_08;
    FUN_1408fc950();
    fVar52 = fVar47 * extraout_XMM0_Da_09 * fVar21 + fVar53 * fVar46 * fVar39;
    fVar29 = fVar47 * fVar46 * fVar39 - fVar53 * extraout_XMM0_Da_09 * fVar21;
    _local_3e8 = CONCAT124(CONCAT84(uStack992,fVar29),fVar52);
    _local_3e8 = CONCAT48(fVar53 * extraout_XMM0_Da_09 * fVar39 - fVar47 * fVar46 * fVar21,_local_3e8)
            ;
    fVar46 = fVar53 * fVar46 * fVar21 + fVar47 * extraout_XMM0_Da_09 * fVar39;
    _local_3e8 = CONCAT412(fVar46,_local_3e8);
    fVar47 = fVar29 * 2.0;
    fStack572 = 0.0;
    fStack548 = fVar52 * 2.0 * fVar46;
    fVar39 = (fVar56 - fVar29 * fVar47) - 0.0;
    fVar21 = fVar52 * fVar47 + fVar46 * 0.0;
    fVar53 = fVar52 * fVar47 - fVar46 * 0.0;
    fStack576 = fVar52 * 0.0 - fVar47 * fVar46;
    local_248 = (undefined **)CONCAT44(fVar21,fVar39);
    fVar31 = fVar56 - fVar52 * fVar52 * 2.0;
    local_228 = fVar52 * 0.0 + fVar47 * fVar46;
    fVar52 = fVar29 * 0.0 + fStack548;
    fVar46 = fVar31 - 0.0;
    fVar31 = fVar31 - fVar29 * fVar47;
    fVar34 = 0.0;
    local_238 = CONCAT44(fVar46,fVar53);
    uStack560 = (ulonglong)(uint)fVar52;
    uStack544 = (ulonglong)(uint)fVar31;
    fStack548 = fVar29 * 0.0 - fStack548;
    fVar47 = (float)local_3c8 * *(float *)(param_1 + 0x2a0);
    local_3c8 = (double)((ulonglong)local_3c8 & 0xffffffff00000000 | (ulonglong)(uint)fVar56);
    local_3a8 = *(float *)(param_1 + 0x270) + fVar53 * 0.0 + fVar39 * 0.0 + fVar47 * local_228 + 0.0;
    fStack932 = *(float *)(param_1 + 0x274) + fVar46 * 0.0 + fVar21 * 0.0 + fVar47 * fStack548 + 0.0;
    fStack928 = *(float *)(param_1 + 0x278) + fVar52 * 0.0 + fStack576 * 0.0 + fVar47 * fVar31 + 0.0;
    fStack924 = *(float *)(param_1 + 0x27c) + fVar47 * 0.0 + 0.0 + 1.0;
    fVar39 = *(float *)(param_1 + 0x280) - local_3a8;
    fVar21 = *(float *)(param_1 + 0x284) - fStack932;
    fVar46 = *(float *)(param_1 + 0x288) - fStack928;
    fVar39 = fVar39 * fVar39 + fVar21 * fVar21 + fVar46 * fVar46;
    fVar21 = 2.0;
    if (*(int *)(param_1 + 0x2d4) == 0) {
        uVar5 = DAT_140c4de40;
        if ((int)*DAT_140c63750 < (int)DAT_140c4de40) {
            uVar5 = *DAT_140c63750;
        }
        if (((*(float *)(&DAT_140c4de50 + (longlong)(int)uVar5 * 4) * 2.0 *
                                                                    *(float *)(&DAT_140c4de50 + (longlong)(int)uVar5 * 4) < fVar39) || (local_3d8 != 0)) ||
        ((*(int *)(param_1 + 0x2e8) != 0 && ((int)local_380 - *(int *)(param_1 + 0x2e4) < 0))))
        goto LAB_1405d143c;
        fVar46 = fVar56;
        fVar47 = (float)local_3c8;
        if (1.192093e-07 < fVar39) {
            (**(code **)(*param_3 + 0x48))(param_3,&local_3a8,0x4011);
            *(undefined4 *)(param_1 + 0x2e8) = 0;
            fVar46 = extraout_XMM0_Da_10;
            goto LAB_1405d1440;
        }
    }
    else {
        LAB_1405d143c:
        fVar46 = 0.0;
        LAB_1405d1440:
        local_3c8 = (double)((ulonglong)local_3c8 & 0xffffffff00000000 | (ulonglong)(uint)fVar46);
        fVar47 = (float)local_3c8;
    }
    local_3c8._0_4_ = fVar46;
    plVar15 = local_368;
    *(undefined4 *)(param_1 + 0x2d4) = 0;
    if ((float)local_3c8 < fVar56) {
        if (*(int *)(param_1 + 0x2e8) == 0) {
            *(undefined4 *)(param_1 + 0x2e8) = 1;
            *(int *)(param_1 + 0x2e4) = (int)local_380 + 1000;
        }
        puVar12 = (undefined4 *)(**(code **)(*local_368 + 0x18))();
        *puVar12 = local_378._0_4_;
        puVar12[1] = local_378._4_4_;
        puVar12[2] = fStack880;
        puVar12[3] = fStack876;
        puVar12[4] = local_308._0_4_;
        puVar12[5] = local_308._4_4_;
        puVar12[6] = (float)uStack768;
        puVar12[7] = uStack768._4_4_;
        uVar50 = *(undefined4 *)(param_1 + 0x274);
        uVar25 = *(undefined4 *)(param_1 + 0x278);
        uVar26 = *(undefined4 *)(param_1 + 0x27c);
        puVar12[8] = *(undefined4 *)(param_1 + 0x270);
        puVar12[9] = uVar50;
        puVar12[10] = uVar25;
        puVar12[0xb] = uVar26;
        FUN_1408fe3d0();
        fVar53 = extraout_XMM0_Da_11;
        FUN_1408fc950();
        fVar52 = extraout_XMM0_Da_12;
        FUN_1408fe3d0();
        fVar21 = extraout_XMM0_Da_13;
        FUN_1408fc950();
        fVar39 = extraout_XMM0_Da_14;
        FUN_1408fe3d0();
        fVar46 = extraout_XMM0_Da_15;
        FUN_1408fc950();
        fVar29 = fVar52 * extraout_XMM0_Da_16 * fVar21 + fVar53 * fVar46 * fVar39;
        fVar36 = fVar52 * fVar46 * fVar39 - fVar53 * extraout_XMM0_Da_16 * fVar21;
        _local_3e8 = CONCAT44(fVar36,fVar29);
        fVar31 = fVar53 * extraout_XMM0_Da_16 * fVar39 - fVar52 * fVar46 * fVar21;
        _local_3e8 = CONCAT48(fVar31,_local_3e8);
        fVar52 = fVar53 * fVar46 * fVar21 + fVar52 * extraout_XMM0_Da_16 * fVar39;
        _local_3e8 = CONCAT412(fVar52,_local_3e8);
        fVar53 = fVar36 * 2.0;
        fVar46 = fVar31 * 2.0;
        fStack548 = fVar29 * 2.0 * fVar52;
        fStack572 = 0.0;
        local_228 = fVar46 * fVar29 + fVar53 * fVar52;
        fStack576 = fVar46 * fVar29 - fVar53 * fVar52;
        fVar34 = 0.0;
        fVar39 = (fVar56 - fVar53 * fVar36) - fVar46 * fVar31;
        fVar21 = fVar46 * fVar36 + fStack548;
        uVar5 = DAT_140c4de40;
        if ((int)*DAT_140c63750 < (int)DAT_140c4de40) {
            uVar5 = *DAT_140c63750;
        }
        fVar19 = fVar53 * fVar29 + fVar46 * fVar52;
        fVar23 = fVar53 * fVar29 - fVar46 * fVar52;
        uStack560 = (ulonglong)(uint)fVar21;
        local_248 = (undefined **)CONCAT44(fVar19,fVar39);
        fStack548 = fVar46 * fVar36 - fStack548;
        fVar29 = fVar56 - fVar29 * 2.0 * fVar29;
        fVar46 = fVar29 - fVar46 * fVar31;
        fVar29 = fVar29 - fVar53 * fVar36;
        local_238 = CONCAT44(fVar46,fVar23);
        uStack544 = (ulonglong)(uint)fVar29;
        fVar52 = fVar47 * *(float *)(&DAT_140c4de50 + (longlong)(int)uVar5 * 4);
        local_398 = CONCAT44(*(float *)(param_1 + 0x274) +
                             fVar46 * 0.0 + fVar19 * 0.0 + fVar52 * fStack548 + 0.0,
                             *(float *)(param_1 + 0x270) +
                             fVar23 * 0.0 + fVar39 * 0.0 + fVar52 * local_228 + 0.0);
        _local_398 = CONCAT48(*(float *)(param_1 + 0x278) +
                              fVar21 * 0.0 + fStack576 * 0.0 + fVar52 * fVar29 + 0.0,local_398);
        _local_398 = CONCAT412(*(float *)(param_1 + 0x27c) + fVar52 * 0.0 + 0.0 + 1.0,_local_398);
        (**(code **)(*plVar15 + 0x48))(plVar15,local_398,0x4011);
        local_3c8 = (double)((ulonglong)local_3c8 & 0xffffffff00000000 |
                             (ulonglong)(uint)extraout_XMM0_Da_17);
        if (fVar56 <= extraout_XMM0_Da_17) {
            FUN_1408fe3d0();
            fVar53 = extraout_XMM0_Da_24;
            FUN_1408fc950();
            fVar52 = extraout_XMM0_Da_25;
            FUN_1408fe3d0();
            fVar21 = extraout_XMM0_Da_26;
            FUN_1408fc950();
            fVar39 = extraout_XMM0_Da_27;
            FUN_1408fe3d0();
            fVar46 = extraout_XMM0_Da_28;
            FUN_1408fc950();
            fVar36 = fVar52 * fVar46 * fVar39 - fVar53 * extraout_XMM0_Da_29 * fVar21;
            fVar34 = fVar52 * extraout_XMM0_Da_29 * fVar21 + fVar53 * fVar46 * fVar39;
            _local_3e8 = CONCAT44(fVar36,fVar34);
            _local_3e8 = CONCAT48(fVar53 * extraout_XMM0_Da_29 * fVar39 - fVar52 * fVar46 * fVar21,
                                  _local_3e8);
            fVar39 = fVar53 * fVar46 * fVar21 + fVar52 * extraout_XMM0_Da_29 * fVar39;
            _local_3e8 = CONCAT412(fVar39,_local_3e8);
            fVar53 = fVar36 * 2.0;
            fStack548 = fVar39 * fVar34 * 2.0;
            fVar29 = (fVar56 - fVar36 * fVar53) - 0.0;
            fVar31 = fVar34 * fVar53 + fVar39 * 0.0;
            fVar47 = fVar47 * *(float *)(param_1 + 0x2a0);
            fVar46 = fVar34 * fVar53 - fVar39 * 0.0;
            local_248 = (undefined **)CONCAT44(fVar31,fVar29);
            fStack576 = fVar34 * 0.0 - fVar39 * fVar53;
            local_228 = fVar34 * 0.0 + fVar39 * fVar53;
            fVar21 = fVar56 - fVar34 * fVar34 * 2.0;
            fVar39 = fVar21 - 0.0;
            fVar52 = fVar36 * 0.0 + fStack548;
            fVar21 = fVar21 - fVar36 * fVar53;
            local_238 = CONCAT44(fVar39,fVar46);
            auVar4 = ZEXT812(CONCAT44(fVar47,fVar47));
            fStack548 = fVar36 * 0.0 - fStack548;
            fVar53 = fStack576;
            fVar47 = fVar52;
            LAB_1405d1be4:
            uStack560 = (ulonglong)(uint)fVar47;
            fStack572 = 0.0;
            fVar47 = SUB164((ZEXT1216(auVar4 & (undefined  [12])0xffffffffffffffff) << 0x20) >> 0x40,0);
            fVar34 = 0.0;
            uStack544 = (ulonglong)(uint)fVar21;
            local_3a8 = *(float *)(param_1 + 0x270) +
                        fVar29 * 0.0 + fVar46 * 0.0 + fVar47 * local_228 + 0.0;
            fStack932 = *(float *)(param_1 + 0x274) +
                        fVar31 * 0.0 + fVar39 * 0.0 + fVar47 * fStack548 + 0.0;
            fStack928 = *(float *)(param_1 + 0x278) + fVar53 * 0.0 + fVar52 * 0.0 + fVar47 * fVar21 + 0.0;
            fStack924 = *(float *)(param_1 + 0x27c) + fVar47 * 0.0 + 0.0 + 1.0;
        }
        else {
            uVar5 = DAT_140c4de40;
            if ((int)*DAT_140c63750 < (int)DAT_140c4de40) {
                uVar5 = *DAT_140c63750;
            }
            fVar39 = extraout_XMM0_Da_17 * *(float *)(&DAT_140c4de50 + (longlong)(int)uVar5 * 4);
            if (*(float *)(param_1 + 0x2a0) <= fVar39) {
                FUN_1408fe3d0();
                fVar53 = extraout_XMM0_Da_18;
                FUN_1408fc950();
                fVar52 = extraout_XMM0_Da_19;
                FUN_1408fe3d0();
                fVar21 = extraout_XMM0_Da_20;
                FUN_1408fc950();
                fVar39 = extraout_XMM0_Da_21;
                FUN_1408fe3d0();
                fVar46 = extraout_XMM0_Da_22;
                FUN_1408fc950();
                fVar36 = fVar52 * fVar46 * fVar39 - fVar53 * extraout_XMM0_Da_23 * fVar21;
                fVar34 = fVar52 * extraout_XMM0_Da_23 * fVar21 + fVar53 * fVar46 * fVar39;
                _local_3e8 = CONCAT44(fVar36,fVar34);
                fVar31 = fVar53 * extraout_XMM0_Da_23 * fVar39 - fVar52 * fVar46 * fVar21;
                _local_3e8 = CONCAT48(fVar31,_local_3e8);
                fVar53 = fVar52 * extraout_XMM0_Da_23 * fVar39 + fVar53 * fVar46 * fVar21;
                _local_3e8 = CONCAT412(fVar53,_local_3e8);
                fVar52 = fVar31 * 2.0;
                fVar19 = fVar36 * 2.0;
                fStack548 = fVar34 * 2.0 * fVar53;
                fVar46 = (fVar56 - fVar19 * fVar36) - fVar52 * fVar31;
                fVar39 = fVar19 * fVar34 + fVar52 * fVar53;
                fVar29 = fVar19 * fVar34 - fVar52 * fVar53;
                fStack576 = fVar52 * fVar34 - fVar19 * fVar53;
                local_248 = (undefined **)CONCAT44(fVar39,fVar46);
                fVar21 = fVar56 - fVar34 * 2.0 * fVar34;
                local_228 = fVar52 * fVar34 + fVar19 * fVar53;
                fVar31 = fVar21 - fVar52 * fVar31;
                fVar53 = fVar52 * fVar36 + fStack548;
                fVar21 = fVar21 - fVar19 * fVar36;
                local_238 = CONCAT44(fVar31,fVar29);
                fVar47 = *(float *)(param_1 + 0x2a0) * fVar47;
                fStack548 = fVar52 * fVar36 - fStack548;
                auVar4 = ZEXT812(CONCAT44(fVar47,fVar47)) & (undefined  [12])0xffffffffffffffff;
                fVar52 = fStack576;
                fVar47 = fVar53;
                goto LAB_1405d1be4;
            }
            *(float *)(param_1 + 0x2f0) = fVar39;
            *(float *)(param_1 + 0x2a0) = fVar39;
            *(undefined4 *)(param_1 + 0x2d4) = 1;
            local_3a8 = (local_398._0_4_ - *(float *)(param_1 + 0x270)) * extraout_XMM0_Da_17 +
                        *(float *)(param_1 + 0x270);
            fStack932 = (local_398._4_4_ - *(float *)(param_1 + 0x274)) * extraout_XMM0_Da_17 +
                        *(float *)(param_1 + 0x274);
            fStack928 = (fStack912 - *(float *)(param_1 + 0x278)) * extraout_XMM0_Da_17 +
                        *(float *)(param_1 + 0x278);
            fStack924 = (fStack908 - *(float *)(param_1 + 0x27c)) * extraout_XMM0_Da_17 +
                        *(float *)(param_1 + 0x27c);
            local_3c8._0_4_ = extraout_XMM0_Da_17;
        }
        fVar21 = 2.0;
    }
    local_4f8 = (longlong **)0x0;
    iVar14 = (**(code **)(*param_2 + 0x1b8))(param_2,&local_3a8,local_1d8,0x400000c1);
    uVar5 = DAT_140c4d8e0;
    fVar39 = fStack932;
    if (iVar14 == 0) goto LAB_1405d1efe;
    uVar8 = *DAT_140c63750;
    uVar9 = DAT_140c4d8e0;
    if ((int)uVar8 < (int)DAT_140c4d8e0) {
        uVar9 = uVar8;
    }
    pauVar17 = local_3b8;
    fVar46 = local_1b8;
    if (fStack932 < local_1b8 + *(float *)(&DAT_140c4d8f0 + (longlong)(int)uVar9 * 4)) {
        fVar47 = *(float *)(param_1 + 0x2a0);
        if (fVar47 <= 4.0) {
            fVar52 = param_5;
            if (fVar56 <= fVar47) {
                if (fVar21 <= fVar47) {
                    FUN_140934e10();
                    if ((int)uVar8 < (int)uVar5) {
                        uVar5 = uVar8;
                    }
                    fVar21 = (extraout_XMM0_Da_31 + fVar56) *
                             (*(float *)(&DAT_140c4d8f0 + (longlong)(int)uVar5 * 4) - param_5);
                }
                else {
                    FUN_140934e10();
                    if ((int)uVar8 < (int)uVar5) {
                        uVar5 = uVar8;
                    }
                    fVar21 = (extraout_XMM0_Da_30 + fVar56) *
                             (*(float *)(&DAT_140c4d8f0 + (longlong)(int)uVar5 * 4) - param_5);
                }
                fVar52 = fVar21 * 0.5 + param_5;
            }
        }
        else {
            if ((int)uVar8 < (int)DAT_140c4d8e0) {
                uVar5 = uVar8;
            }
            fVar52 = *(float *)(&DAT_140c4d8f0 + (longlong)(int)uVar5 * 4);
        }
        pauVar17 = local_3b8;
        fVar21 = (fVar52 + fVar46) - fVar39;
        if (fVar34 < fVar21) {
            *(float *)local_3b8[2] = local_3a8;
            *(float *)(local_3b8[2] + 4) = fStack932;
            *(float *)(local_3b8[2] + 8) = fStack928;
            *(float *)(local_3b8[2] + 0xc) = fStack924;
            local_398 = CONCAT44(fVar21 + fStack932,local_3a8 + 0.0);
            _local_398 = CONCAT48(fStack932 + fStack928,local_398);
            _local_398 = CONCAT412(fVar34 + fStack924,_local_398);
            (**(code **)(*param_3 + 0x48))(param_3,local_398);
            fStack932 = fStack932 + extraout_XMM0_Da_32 * fVar21;
            fVar46 = local_1b8;
            fVar39 = fStack932;
        }
    }
    if (local_148 <= fVar46) goto LAB_1405d1efe;
    if (fVar39 <= local_148) {
        LAB_1405d1e32:
        fVar21 = local_148 - local_194 * param_5;
        if (fVar39 <= fVar21) goto LAB_1405d1efe;
        fVar22 = fVar21 - fVar39;
    }
    else {
        if (local_194 * param_5 + local_148 <= fVar39) {
            if (local_148 < fVar39) goto LAB_1405d1efe;
            goto LAB_1405d1e32;
        }
        fVar22 = (local_148 - fVar39) + local_194 * param_5;
    }
    if (fVar22 != fVar34) {
        *(float *)pauVar17[2] = local_3a8;
        *(float *)(pauVar17[2] + 4) = fStack932;
        *(float *)(pauVar17[2] + 8) = fStack928;
        *(float *)(pauVar17[2] + 0xc) = fStack924;
        _local_378 = CONCAT412(fVar34 + fStack924,
                               CONCAT48(fStack932 + fStack928,
                                        CONCAT44(fVar22 + fStack932,local_3a8 + 0.0)));
        fVar21 = 0.0;
        (**(code **)(*param_3 + 0x48))(param_3,local_378);
        fVar39 = fStack932;
        if (fVar21 < fVar56) {
            if (local_148 < fStack932) {
                if (fStack932 < local_194 * param_5 + local_148) {
                    fVar22 = (local_148 - fStack932) - local_194 * param_5;
                    goto LAB_1405d1efe;
                }
                if (local_148 < fStack932) goto LAB_1405d1efe;
            }
            if (local_148 - local_194 * param_5 < fStack932) {
                fVar22 = (local_194 * param_5 + local_148) - fStack932;
            }
        }
    }
    LAB_1405d1efe:
    if ((float)local_3c8 < *(float *)(param_1 + 0x50)) {
        *(float *)(param_1 + 0x50) = (float)local_3c8;
    }
    if ((float)local_3c8 < fVar56) {
        uVar5 = DAT_140c4de40;
        if ((int)*DAT_140c63750 < (int)DAT_140c4de40) {
            uVar5 = *DAT_140c63750;
        }
        fVar21 = *(float *)(&DAT_140c4de50 + (longlong)(int)uVar5 * 4) * *(float *)(param_1 + 0x50);
        if (fVar21 < *(float *)(param_1 + 0x2a0) || fVar21 == *(float *)(param_1 + 0x2a0)) {
            *(float *)(param_1 + 0x2f0) = fVar21;
            *(float *)(param_1 + 0x2a0) = fVar21;
        }
    }
    FUN_1408fe3d0();
    fVar53 = extraout_XMM0_Da_33;
    FUN_1408fc950();
    fVar52 = extraout_XMM0_Da_34;
    FUN_1408fe3d0();
    fVar46 = extraout_XMM0_Da_35;
    FUN_1408fc950();
    fVar21 = extraout_XMM0_Da_36;
    FUN_1408fe3d0();
    fVar47 = extraout_XMM0_Da_37;
    FUN_1408fc950();
    fVar48 = 2.0;
    fVar31 = fVar47 * fVar21 * fVar52 - extraout_XMM0_Da_38 * fVar46 * fVar53;
    fVar29 = fVar47 * fVar46 * fVar53 + extraout_XMM0_Da_38 * fVar21 * fVar52;
    _local_3e8 = CONCAT124(_auStack996,
                           extraout_XMM0_Da_38 * fVar46 * fVar52 + fVar47 * fVar21 * fVar53);
    _local_3e8 = CONCAT48(extraout_XMM0_Da_38 * fVar21 * fVar53 - fVar47 * fVar46 * fVar52,_local_3e8)
            ;
    _local_3e8 = CONCAT412(fVar29,_local_3e8);
    uVar18 = _local_3e8 & 0xffffffff;
    _local_3e8 = uVar18 | (ulonglong)(uint)fVar31 << 0x20;
    local_3e8 = (float)uVar18;
    fVar21 = fVar31 * 2.0;
    fVar34 = fVar29 * local_3e8 * 2.0;
    local_228 = local_3e8 * fVar21 - fVar29 * 0.0;
    pfVar1 = (float *)(param_1 + 0x60);
    fVar46 = fVar56 - local_3e8 * local_3e8 * 2.0;
    uStack544._0_4_ = fVar31 * 0.0 + fVar34;
    fStack548 = fVar46 - 0.0;
    fVar19 = 0.0;
    fVar23 = 0.0;
    fVar33 = 0.0;
    fVar35 = 0.0;
    local_218 = 0;
    uStack532 = 0;
    uStack528 = 0;
    uStack524 = 0x3f800000;
    fVar47 = *(float *)(param_1 + 0x280) - local_3a8;
    fVar52 = *(float *)(param_1 + 0x284) - fStack932;
    fVar53 = *(float *)(param_1 + 0x288) - fStack928;
    fVar39 = fVar39 + fVar22;
    local_248._0_4_ = local_3a8;
    fStack576 = fStack928;
    fStack572 = fStack924;
    auVar20 = ZEXT416((uint)(0.0 - (local_3e8 * 0.0 + fVar29 * fVar21))) &
              (undefined  [16])0xffffffffffffffff;
    fVar22 = 0.0 - (fVar31 * 0.0 - fVar34);
    fVar21 = SUB164(auVar20 >> 0x40,0) - (fVar46 - fVar31 * fVar21);
    fVar46 = SUB164(auVar20 >> 0x60,0) - 0.0;
    local_358 = CONCAT44(fStack548,local_228);
    _local_358 = ZEXT1216(CONCAT48((float)uStack544,local_358));
    uStack544._4_4_ = 0.0;
    *(uint *)(param_1 + 0x204) =
            (uint)(fVar47 * fVar47 + fVar52 * fVar52 + fVar53 * fVar53 < DAT_140c3c7a8);
    local_308 = CONCAT44(fVar22,SUB164(auVar20,0));
    _local_308 = CONCAT412(fVar46,CONCAT48(fVar21,local_308));
    local_238 = CONCAT44(fVar22,SUB164(auVar20,0));
    uStack560 = CONCAT44(fVar46,fVar21);
    *(float *)(param_1 + 0x280) = local_3a8;
    *(float *)(param_1 + 0x284) = fStack932;
    *(float *)(param_1 + 0x288) = fStack928;
    *(float *)(param_1 + 0x28c) = fStack924;
    fVar22 = local_3a8;
    fVar21 = fStack928;
    fVar46 = fStack924;
    fStack932 = fVar39;
    local_248._4_4_ = fVar39;
    pfVar13 = (float *)FUN_1401add80(&local_238,local_398);
    fVar31 = fVar19 - *pfVar13;
    fVar29 = fVar23 - pfVar13[1];
    fVar34 = fVar33 - pfVar13[2];
    fVar36 = fVar35 - pfVar13[3];
    local_398 = CONCAT44(fVar31 * 0.0 - fVar34 * local_228,
                         fVar34 * fStack548 - fVar29 * (float)uStack544);
    _local_398 = CONCAT48(fVar29 * local_228 - fVar31 * fStack548,local_398);
    _local_398 = CONCAT412(fVar36 * uStack544._4_4_ - fVar36 * uStack544._4_4_,_local_398);
    FUN_1401add80(local_398,local_378);
    uVar5 = 0x80000000;
    *pfVar1 = local_378._0_4_;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(float *)(param_1 + 0x68) = fVar31;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    fVar47 = fVar29 * 0.0 - local_378._4_4_ * fVar34;
    fVar52 = local_378._0_4_ * fVar34 - fStack880 * fVar31;
    fVar53 = local_378._4_4_ * fVar31 - local_378._0_4_ * fVar29;
    *(float *)(param_1 + 0x70) = local_378._4_4_;
    *(float *)(param_1 + 100) = fVar47;
    *(float *)(param_1 + 0x78) = fVar29;
    *(float *)(param_1 + 0x74) = fVar52;
    *(float *)(param_1 + 0x80) = fStack880;
    _local_3e8 = CONCAT412(fStack876 * fStack572,
                           CONCAT48(fStack880 * fStack576,
                                    CONCAT44(local_378._4_4_ * local_248._4_4_,
                                             local_378._0_4_ * (float)local_248)));
    fVar47 = fVar47 * (float)local_248;
    fVar52 = fVar52 * local_248._4_4_;
    *(float *)(param_1 + 0x84) = fVar53;
    *(float *)(param_1 + 0x88) = fVar34;
    uVar18 = (ulonglong)(local_378._0_4_ * (float)local_248 < local_378._4_4_ * local_248._4_4_);
    lVar11 = 1 - uVar18;
    if (*(float *)(local_3e8 + uVar18 * 4) <= 0.0 && *(float *)(local_3e8 + uVar18 * 4) != 0.0) {
        uVar18 = 2;
    }
    _local_3e8 = CONCAT412((fStack876 * fVar36 - fStack876 * fVar36) * fStack572,
                           CONCAT48(fVar53 * fStack576,CONCAT44(fVar52,fVar47)));
    *(uint *)(param_1 + 0x90) =
            (uint)(*(float *)((longlong)&uStack992 + (lVar11 + uVar18) * -4 + 4) +
                   *(float *)(local_3e8 + lVar11 * 4) + *(float *)(local_3e8 + uVar18 * 4)) ^ 0x80000000;
    uVar18 = (ulonglong)(fVar47 < fVar52);
    lVar11 = 1 - uVar18;
    if (*(float *)(local_3e8 + uVar18 * 4) <= 0.0 && *(float *)(local_3e8 + uVar18 * 4) != 0.0) {
        uVar18 = 2;
    }
    _local_3e8 = CONCAT412(fVar36 * fStack572,
                           CONCAT48(fVar34 * fStack576,
                                    CONCAT44(fVar29 * local_248._4_4_,fVar31 * (float)local_248)));
    *(uint *)(param_1 + 0x94) =
            (uint)(*(float *)((longlong)&uStack992 + (lVar11 + uVar18) * -4 + 4) +
                   *(float *)(local_3e8 + lVar11 * 4) + *(float *)(local_3e8 + uVar18 * 4)) ^ 0x80000000;
    uVar18 = (ulonglong)(fVar31 * (float)local_248 < fVar29 * local_248._4_4_);
    lVar11 = 1 - uVar18;
    *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
    puVar16 = DAT_140c63750;
    if (*(float *)(local_3e8 + uVar18 * 4) <= 0.0 && *(float *)(local_3e8 + uVar18 * 4) != 0.0) {
        uVar18 = 2;
    }
    *(uint *)(param_1 + 0x98) =
            (uint)(*(float *)((longlong)&uStack992 + (lVar11 + uVar18) * -4 + 4) +
                   *(float *)(local_3e8 + lVar11 * 4) + *(float *)(local_3e8 + uVar18 * 4)) ^ 0x80000000;
    uVar8 = DAT_140c4db40;
    if ((int)*puVar16 < (int)DAT_140c4db40) {
        uVar8 = *puVar16;
    }
    if ((&DAT_140c4db50)[(int)uVar8] != '\0') {
        fVar47 = (param_10 - *(float *)(param_1 + 0x2a4)) * local_3c0 + *(float *)(param_1 + 0x2a4);
        *(float *)(param_1 + 0x2a4) = fVar47;
        local_3d0 = (longlong *)
                ((ulonglong)local_3d0 & 0xffffffff00000000 |
                 (ulonglong)(uint)((float)local_3d0 + fVar47 * fVar48));
    }
    puVar16 = DAT_140c63750;
    *(float *)(param_1 + 0x90) = *(float *)(param_1 + 0x90) - (float)local_3d0;
    uVar8 = *puVar16;
    uVar9 = DAT_140c4dc20;
    if ((int)uVar8 < (int)DAT_140c4dc20) {
        uVar9 = uVar8;
    }
    if ((&DAT_140c4dc30)[(int)uVar9] != '\0') {
        uVar9 = DAT_140c4dcc0;
        if ((int)uVar8 < (int)DAT_140c4dcc0) {
            uVar9 = uVar8;
        }
        if (*(float *)(&DAT_140c4dcd0 + (longlong)(int)uVar9 * 4) != 0.0) {
            uVar9 = DAT_140c4dcc0;
            if ((int)uVar8 < (int)DAT_140c4dcc0) {
                uVar9 = uVar8;
            }
            *(float *)(param_1 + 0x94) =
                    *(float *)(param_1 + 0x94) - *(float *)(&DAT_140c4dcd0 + (longlong)(int)uVar9 * 4);
        }
        uVar8 = *DAT_140c63750;
        uVar9 = DAT_140c4dd20;
        if ((int)uVar8 < (int)DAT_140c4dd20) {
            uVar9 = uVar8;
        }
        if (*(float *)(&DAT_140c4dd30 + (longlong)(int)uVar9 * 4) != 0.0) {
            uVar9 = DAT_140c4dd20;
            if ((int)uVar8 < (int)DAT_140c4dd20) {
                uVar9 = uVar8;
            }
            *(float *)(param_1 + 0x98) =
                    *(float *)(param_1 + 0x98) - *(float *)(&DAT_140c4dd30 + (longlong)(int)uVar9 * 4);
        }
    }
    _local_398 = CONCAT88(&local_288,pfVar1);
    FUN_1401afb10(local_398,pfVar1);
    pfVar13 = (float *)(param_1 + 0xa0);
    *pfVar13 = *pfVar1;
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x70);
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x80);
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x84);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x88);
    FUN_1401ade30(param_1 + 0x90);
    *(uint *)(param_1 + 0xd0) = extraout_XMM0_Da_39 ^ uVar5;
    FUN_1401ade30(param_1 + 0x90,param_1 + 0x70);
    *(uint *)(param_1 + 0xd4) = extraout_XMM0_Da_40 ^ uVar5;
    FUN_1401ade30(param_1 + 0x90,param_1 + 0x80);
    *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
    *(uint *)(param_1 + 0xd8) = extraout_XMM0_Da_41 ^ uVar5;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xd0);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xdc);
    if (((0.001 < (float)((uint)(*(float *)(param_1 + 0x20) - *(float *)local_3b8[2]) & 0x7fffffff))
         || (0.001 < (float)((uint)(*(float *)(param_1 + 0x24) - *(float *)(local_3b8[2] + 4)) &
                             0x7fffffff))) ||
        (0.001 < (float)((uint)(*(float *)(param_1 + 0x28) - *(float *)(local_3b8[2] + 8)) & 0x7fffffff
        ))) {
        local_3b8[2] = CONCAT412(fVar46,CONCAT48(fVar21,CONCAT44(fVar39,fVar22)));
        (**(code **)(*param_3 + 0x48))(param_3,param_1 + 0x20,0x4011);
        if (extraout_XMM0_Da_42 < fVar56) {
            *(float *)(param_1 + 0x20) =
                    (*(float *)(param_1 + 0x20) - local_3a8) * extraout_XMM0_Da_42 + local_3a8;
            *(float *)(param_1 + 0x24) =
                    (*(float *)(param_1 + 0x24) - fStack932) * extraout_XMM0_Da_42 + fStack932;
            *(float *)(param_1 + 0x28) =
                    (*(float *)(param_1 + 0x28) - fStack928) * extraout_XMM0_Da_42 + fStack928;
            *(float *)(param_1 + 0x2c) =
                    (*(float *)(param_1 + 0x2c) - fStack924) * extraout_XMM0_Da_42 + fStack924;
            *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x20);
            *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x24);
            *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0x28);
            *pfVar1 = *pfVar13;
            *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xb0);
            *(undefined4 *)(param_1 + 0x6c) = 0;
            *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xc0);
            *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xa4);
            *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xb4);
            *(undefined4 *)(param_1 + 0x7c) = 0;
            *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xc4);
            *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xa8);
            *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xb8);
            *(undefined4 *)(param_1 + 0x8c) = 0;
            *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 200);
            FUN_1401ade30(param_1 + 0xd0,pfVar13);
            *(uint *)(param_1 + 0x90) = extraout_XMM0_Da_43 ^ uVar5;
            FUN_1401ade30(param_1 + 0xd0,param_1 + 0xb0);
            *(uint *)(param_1 + 0x94) = extraout_XMM0_Da_44 ^ uVar5;
            FUN_1401ade30(param_1 + 0xd0,param_1 + 0xc0);
            *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
            *(uint *)(param_1 + 0x98) = extraout_XMM0_Da_45 ^ uVar5;
        }
    }
    if ((*(int *)(param_1 + 0x200) == 0) && (iVar14 = FUN_1405cfb60(), iVar14 == 0)) {
        uVar5 = (uint)(lVar2 != 0);
        if ((uVar5 == 0) ||
            ((*(longlong *)(lVar2 + 0x16f0) == 0 && (*(longlong *)(lVar2 + 0x16f8) == 0)))) {
            local_3d0 = (longlong *)((ulonglong)local_3d0._4_4_ << 0x20);
        }
        else {
            local_3d0 = (longlong *)CONCAT44(local_3d0._4_4_,1);
        }
        if ((uVar5 == 0) || (uVar8 = 1, *(int *)(lVar2 + 0xfcc) == 0)) {
            uVar8 = 0;
        }
        if (uVar5 == 0) {
            local_3d8 = 0;
            local_3c0 = 0.0;
            _local_398 = CONCAT412(fVar35,CONCAT48(fVar33,CONCAT44(fVar23,fVar19)));
            _local_378 = CONCAT412(fVar35,CONCAT48(fVar33,CONCAT44(fVar23,fVar19)));
            _local_3e8 = CONCAT412(fVar35,CONCAT48(fVar33,CONCAT44(fVar23,fVar19)));
        }
        else {
            local_3d8 = *(uint *)(lVar2 + 0x1070);
            _local_398 = *(undefined (*) [16])(lVar2 + 0x11e0);
            local_3c0 = *(float *)(lVar2 + 0x1088);
            _local_378 = *(undefined (*) [16])(lVar2 + 0x1120);
            _local_3e8 = *(undefined (*) [16])(lVar2 + 0x1130);
        }
        local_2f0 = 0;
        local_2f8 = &PTR_LAB_140b5e648;
        local_2e8 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_2f8);
        local_2b8 = CONCAT88(local_2b8._8_8_,local_2e8);
        local_338 = (float *)(double)*(float *)(param_1 + 0x24);
        _local_2c8 = CONCAT88(local_2f0,local_2f8);
        uVar57 = SUB84((double)*(float *)(param_1 + 0x28),0);
        uVar58 = (undefined4)((ulonglong)(double)*(float *)(param_1 + 0x28) >> 0x20);
        _local_3e8 = CONCAT88(uStack992,0x141e1cc80);
        uVar27 = SUB84((double)fStack880,0);
        uVar28 = (undefined4)((ulonglong)(double)fStack880 >> 0x20);
        local_348 = (longlong *)(double)*(float *)(param_1 + 0x20);
        uVar49 = SUB84((double)auStack996,0);
        uVar51 = (undefined4)((ulonglong)(double)auStack996 >> 0x20);
        local_340 = (longlong *)(double)(float)uStack848;
        local_318[0] = (longlong *)(double)local_358._4_4_;
        local_328 = (double)local_358._0_4_;
        local_320 = (double)(float)uStack768;
        local_330 = (double)local_308._4_4_;
        local_368 = (longlong *)(double)local_308._0_4_;
        local_3b8 = (undefined (*) [16])(double)local_1b8;
        local_380 = (double)local_148;
        local_3c8 = (double)(float)local_3c8;
        local_388 = (double)*(float *)(param_1 + 0x2a0);
        local_298 = (double)fStack928;
        _local_308 = CONCAT88(uStack768,(double)fStack932);
        _local_358 = CONCAT88(uStack848,(double)local_3a8);
        uVar25 = SUB84((double)local_3e8,0);
        uVar26 = (undefined4)((ulonglong)(double)local_3e8 >> 0x20);
        uVar54 = SUB84((double)(float)uStack992,0);
        uVar55 = (undefined4)((ulonglong)(double)(float)uStack992 >> 0x20);
        local_4c8 = 0xf1206 - *(int *)(DAT_140c635f0 + 0x1668);
        uVar30 = SUB84((double)local_378._4_4_,0);
        uVar32 = (undefined4)((ulonglong)(double)local_378._4_4_ >> 0x20);
        uVar37 = SUB84((double)local_378._0_4_,0);
        uVar38 = (undefined4)((ulonglong)(double)local_378._0_4_ >> 0x20);
        uVar40 = SUB84((double)fStack912,0);
        uVar41 = (undefined4)((ulonglong)(double)fStack912 >> 0x20);
        uVar42 = SUB84((double)local_398._4_4_,0);
        uVar43 = (undefined4)((ulonglong)(double)local_398._4_4_ >> 0x20);
        uVar44 = SUB84((double)local_398._0_4_,0);
        uVar45 = (undefined4)((ulonglong)(double)local_398._0_4_ >> 0x20);
        uVar50 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))();
        local_3f8 = local_2c8;
        local_4d0 = *(undefined4 *)(param_1 + 0x2e8);
        local_400 = CONCAT44(uVar58,uVar57);
        local_408 = local_338;
        local_410 = local_348;
        local_418 = local_340;
        local_420 = local_318[0];
        local_428 = local_328;
        local_430 = local_320;
        local_438 = local_330;
        local_440 = local_368;
        local_448 = local_3b8;
        local_450 = local_380;
        local_458 = local_3c8;
        local_460 = local_388;
        local_468 = local_298;
        local_470 = local_308;
        local_478 = local_358;
        local_480 = CONCAT44(uVar55,uVar54);
        local_488 = CONCAT44(uVar51,uVar49);
        local_490 = CONCAT44(uVar26,uVar25);
        local_498 = CONCAT44(uVar28,uVar27);
        local_4a0 = CONCAT44(uVar32,uVar30);
        local_4a8 = CONCAT44(uVar38,uVar37);
        local_4b0 = CONCAT44(uVar41,uVar40);
        local_4b8 = CONCAT44(uVar43,uVar42);
        local_4c0 = CONCAT44(uVar45,uVar44);
        local_4d8 = local_3c0;
        local_4e0 = local_4e0 & 0xffffffff00000000 | (ulonglong)local_3d8;
        local_4e8 = local_4e8 & 0xffffffff00000000 | (ulonglong)uVar8;
        local_4f0 = (undefined ***)
                ((ulonglong)local_4f0 & 0xffffffff00000000 | (ulonglong)local_3d0 & 0xffffffff);
        local_4f8 = (longlong **)((ulonglong)local_4f8 & 0xffffffff00000000 | (ulonglong)uVar5);
        iVar14 = FUN_1401971e0(&DAT_140c8afb4,0x16,local_3e8,uVar50);
        local_2f8 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_2e8);
        if (iVar14 != 0) {
            DebugBreak();
        }
        *(undefined4 *)(param_1 + 0x200) = 1;
    }
    FUN_1407db4f0(local_f8 ^ (ulonglong)auStack1304);
    return;
}



void FUN_1405d2b80(longlong param_1,float *param_2,float *param_3)

{
    int iVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    int *piVar5;
    uint uVar6;
    undefined4 uVar7;
    undefined auVar8 [16];
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;

    fVar11 = param_3[2];
    fVar2 = param_3[3];
    fVar3 = param_2[2];
    fVar4 = param_2[3];
    fVar12 = *param_3 - *param_2;
    fVar13 = param_3[1] - param_2[1];
    *(undefined4 *)(param_1 + 0x2d0) = 1;
    fVar14 = 0.0;
    fVar9 = fVar13 * fVar13;
    fVar10 = fVar12 * fVar12 + fVar9 + 0.0;
    auVar8 = rsqrtss(CONCAT412(fVar9,CONCAT48(fVar9,CONCAT44(fVar9,fVar9))),
                     CONCAT412((fVar2 - fVar4) * (fVar2 - fVar4),
                               CONCAT48((fVar11 - fVar3) * (fVar11 - fVar3),CONCAT44(fVar9,fVar10))));
    fVar11 = SUB164(auVar8,0);
    fVar11 = (3.0 - fVar10 * fVar11 * fVar11) * 0.5 * fVar11;
    if (fVar11 <= 0.0) {
        fVar11 = 0.0;
    }
    if (fVar12 != 0.0) {
        auVar8 = sqrtps(ZEXT416(0) & (undefined  [16])0xffffffffffffffff,
                        ZEXT416((uint)(fVar12 * fVar12 + 0.0)));
        uVar6 = FUN_1408fccb0((uint)(0.0 / SUB164(auVar8,0)) ^ 0x80000000,SUB168(auVar8,0));
        if (fVar14 < fVar12) {
            uVar6 = uVar6 ^ 0x80000000;
        }
        *(uint *)(param_1 + 0x250) = uVar6;
    }
    uVar7 = FUN_1408fcf3c(fVar11 * fVar13);
    piVar5 = DAT_140c63750;
    *(undefined4 *)(param_1 + 0x254) = uVar7;
    iVar1 = DAT_140c53730;
    if (*piVar5 < DAT_140c53730) {
        iVar1 = *piVar5;
    }
    if ((&DAT_140c53740)[iVar1] != '\0') {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x250);
        *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x254);
        *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 600);
    }
    return;
}



void FUN_1405d2cc0(undefined8 param_1,undefined8 param_2,float param_3,longlong param_4,
                   longlong *param_5)

{
    longlong lVar1;
    undefined4 *puVar2;
    float *pfVar3;
    float fVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    float fVar7;
    float fVar8;
    float fVar9;
    undefined4 uVar10;
    undefined auStack232 [32];
    float *local_c8;
    float *local_c0;
    float *local_b8;
    float *local_b0;
    ulonglong local_68;

    local_68 = DAT_140c0f7b0 ^ (ulonglong)auStack232;
    fVar9 = *(float *)(param_4 + 0x14);
    uVar10 = 0;
    if ((*(int *)(DAT_140c65898 + 0x7448) != 0) &&
        (fVar7 = *(float *)(DAT_140c65898 + 0x744c), fVar7 != 1.0)) {
        uVar5 = FUN_1408fd8a4(fVar9 * 0.5);
        uVar6 = FUN_140934e10(uVar5 & 0xffffffff00000000 | (ulonglong)(uint)((float)uVar5 * fVar7));
        uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
        fVar9 = (float)uVar6 * 2.0;
    }
    lVar1 = (**(code **)(*param_5 + 0x48))(param_5);
    local_c0 = (float *)(param_4 + 0xe0);
    fVar9 = fVar9 * 0.5;
    local_c8 = (float *)CONCAT44(*(float *)(lVar1 + 0xc) * 1.5,*(undefined4 *)(param_4 + 0x18));
    *(float **)(param_4 + 0x1f8) = local_c8;
    fVar7 = *(float *)(param_4 + 0x1f8);
    fVar8 = *(float *)(param_4 + 0x1fc);
    fVar4 = (float)FUN_1408fc950(CONCAT44(uVar10,fVar9));
    fVar9 = (float)FUN_1408fe3d0(CONCAT44(uVar10,fVar9));
    pfVar3 = (float *)(param_4 + 0x120);
    *(undefined4 *)(param_4 + 0x10c) = 0xbf800000;
    *(undefined8 *)(param_4 + 0xe4) = 0;
    *(undefined8 *)(param_4 + 0xec) = 0;
    *(undefined8 *)(param_4 + 0xf8) = 0;
    fVar8 = fVar8 / (fVar7 - fVar8);
    *(float *)(param_4 + 0xf4) = fVar4 / fVar9;
    *(undefined8 *)(param_4 + 0x100) = 0;
    *(undefined8 *)(param_4 + 0x110) = 0;
    *(undefined4 *)(param_4 + 0x11c) = 0;
    *(float *)(param_4 + 0x108) = fVar8;
    *local_c0 = (fVar4 / fVar9) / param_3;
    *(float *)(param_4 + 0x118) = fVar8 * fVar7;
    local_b8 = local_c0;
    FUN_1401afc20(&local_b8,pfVar3);
    local_c8 = (float *)(param_4 + 0x60);
    local_b8 = local_c8;
    local_b0 = local_c0;
    FUN_1401afb10(&local_b8,param_4 + 0x160);
    local_c0 = (float *)(param_4 + 0xa0);
    local_c8 = pfVar3;
    local_b8 = pfVar3;
    local_b0 = local_c0;
    FUN_1401afb10(&local_b8,param_4 + 0x1a0);
    puVar2 = (undefined4 *)(**(code **)(*DAT_140c65670 + 0x248))();
    *(undefined4 *)(param_4 + 0x1e0) = *puVar2;
    *(undefined4 *)(param_4 + 0x1e4) = puVar2[1];
    *(undefined4 *)(param_4 + 0x1e8) = puVar2[2];
    *(undefined4 *)(param_4 + 0x1ec) = puVar2[3];
    *(undefined4 *)(param_4 + 0x1f0) = puVar2[4];
    *(undefined4 *)(param_4 + 500) = puVar2[5];
    FUN_1407db4f0(local_68 ^ (ulonglong)auStack232);
    return;
}



undefined8 * FUN_1405d2f90(undefined8 *param_1)

{
    undefined4 uVar1;

    FUN_1405cfcb0();
    uVar1 = DAT_140c636a8;
    *param_1 = &PTR_FUN_140b6dd90;
    *(undefined4 *)(param_1 + 0x42) = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    *(undefined4 *)(param_1 + 0x43) = 0x544e5645;
    *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0x544e5645;
    *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2ac) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2b4) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2c4) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x59) = 0;
    *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
    *(undefined4 *)(param_1 + 0x5a) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x2d4) = 0;
    param_1[0x5b] = 0x5dc;
    *(undefined4 *)(param_1 + 0x5c) = 0x5dc;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    *(undefined (*) [16])(param_1 + 0x60) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x62) = ZEXT816(0);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined (*) [16])(param_1 + 0x66) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x68) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x6a) = 0;
    *(undefined (*) [16])(param_1 + 0x6c) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x6e) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined (*) [16])(param_1 + 0x72) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x74) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x76) = 0;
    *(undefined (*) [16])(param_1 + 0x78) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x7a) = ZEXT816(0);
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined (*) [16])(param_1 + 0x7e) = ZEXT816(0);
    *(undefined (*) [16])(param_1 + 0x80) = ZEXT816(0);
    param_1[0x82] = 1;
    *(undefined (*) [16])(param_1 + 0x96) = ZEXT816(0);
    return param_1;
}



undefined8 FUN_1405d30e0(undefined8 param_1,ulonglong param_2)

{
    FUN_1405d3120();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405d3120(undefined8 *param_1)

{
    undefined8 *puVar1;
    undefined8 *puVar2;

    puVar1 = param_1 + 0x43;
    *param_1 = &PTR_FUN_140b6dd90;
    FUN_140195d70(puVar1);
    puVar2 = param_1 + 0x4c;
    FUN_140195d70(puVar2);
    FUN_140195d70(puVar2);
    *(undefined4 *)puVar2 = 0;
    if ((undefined8 *)param_1[0x4e] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x4e] = param_1[0x4f];
    }
    if ((undefined8 *)param_1[0x4f] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x4f] = param_1[0x4e];
    }
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    FUN_140195d70(puVar1);
    *(undefined4 *)puVar1 = 0;
    if ((undefined8 *)param_1[0x45] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x45] = param_1[0x46];
    }
    if ((undefined8 *)param_1[0x46] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x46] = param_1[0x45];
    }
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    *param_1 = &PTR_FUN_140b6ddb0;
    return;
}



void FUN_1405d31f0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;

    if (*(int *)(param_1 + 0x2b0) == 0) {
        *(undefined4 *)(param_1 + 0x350) = 0;
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        *(undefined4 *)(param_1 + 0x360) = *param_2;
        *(undefined4 *)(param_1 + 0x364) = uVar1;
        *(undefined4 *)(param_1 + 0x368) = uVar2;
        *(undefined4 *)(param_1 + 0x36c) = uVar3;
        *(undefined (*) [16])(param_1 + 0x370) = ZEXT816(0);
        if (*(int *)(param_1 + 0x2b0) == 0) {
            *(undefined4 *)(param_1 + 0x380) = 0;
            uVar1 = param_3[1];
            uVar2 = param_3[2];
            uVar3 = param_3[3];
            *(undefined4 *)(param_1 + 0x390) = *param_3;
            *(undefined4 *)(param_1 + 0x394) = uVar1;
            *(undefined4 *)(param_1 + 0x398) = uVar2;
            *(undefined4 *)(param_1 + 0x39c) = uVar3;
            *(undefined (*) [16])(param_1 + 0x3a0) = ZEXT816(0);
        }
        *(undefined4 *)(param_1 + 0x2b0) = 1;
        FUN_1405d3870(param_1,*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2d8),
                      *(undefined4 *)(param_1 + 0x2dc),*(undefined4 *)(param_1 + 0x2e0));
    }
    return;
}



void FUN_1405d3270(longlong param_1)

{
    undefined8 local_res8 [4];
    undefined4 local_28 [2];
    longlong local_20;
    code *local_18;
    undefined8 local_10;

    if (*(int *)(param_1 + 0x424) != 0) {
        local_28[0] = 0;
        local_10 = 0;
        local_18 = FUN_1405d3310;
        local_20 = param_1;
        FUN_140195960(param_1 + 0x260,*(int *)(param_1 + 0x424),local_28,4);
        return;
    }
    if ((*(int *)(param_1 + 0x2b0) != 0) && ((*(byte *)(param_1 + 0x2ac) & 4) != 0)) {
        *(undefined4 *)(param_1 + 0x2b4) = 1;
        local_res8[0] = 4;
        FUN_1403f4900(DAT_140c65898,0x720,local_res8);
        return;
    }
    FUN_1405d3380();
    return;
}



void FUN_1405d3310(longlong param_1)

{
    undefined8 local_res8 [4];

    if ((*(int *)(param_1 + 0x2b0) != 0) && ((*(byte *)(param_1 + 0x2ac) & 4) != 0)) {
        *(undefined4 *)(param_1 + 0x2b4) = 1;
        local_res8[0] = 4;
        FUN_1403f4900(DAT_140c65898,0x720,local_res8);
        return;
    }
    FUN_1405d3380();
    return;
}



void FUN_1405d3380(longlong param_1)

{
    undefined4 uVar1;
    undefined4 local_28 [2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    *(undefined4 *)(param_1 + 0x2b4) = 0;
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x3b0);
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c0);
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c4);
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3c8);
    *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3cc);
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x3d8);
    *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x3dc);
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c0);
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c4);
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3c8);
    *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3cc);
    *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c0);
    *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c4);
    *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3c8);
    *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3cc);
    *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x3e0);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3f4);
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x3fc);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x400);
    *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x404);
    *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x408);
    *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x40c);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3f4);
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x3fc);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3f4);
    *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x3fc);
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x400);
    uVar1 = DAT_140c636a8;
    *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x474);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x474);
    *(undefined4 *)(param_1 + 0x2d0) = uVar1;
    if (*(int *)(param_1 + 0x2b0) == 0) {
        *(undefined4 *)(param_1 + 0x2b8) = 1;
    }
    else {
        *(undefined4 *)(param_1 + 0x2b8) = 0;
        if (*(int *)(DAT_140c65898 + 0x7450) != 0) {
            FUN_14053b5c0(DAT_140c65898,0,*(undefined4 *)(param_1 + 0x428));
        }
        FUN_1405cc9a0(*(undefined8 *)(DAT_140c65898 + 0x7198));
    }
    FUN_14053b9c0();
    local_18 = &LAB_1405d3360;
    local_28[0] = 0;
    local_10 = 0;
    local_20 = param_1;
    FUN_140195960(param_1 + 0x260,*(undefined4 *)(param_1 + 0x428),local_28,4);
    *(undefined4 *)(param_1 + 0x410) = 0;
    return;
}



void FUN_1405d3580(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                   undefined4 param_5)

{
    longlong *plVar1;
    int iVar2;
    float fVar3;
    float in_XMM3_Da;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    longlong *local_res8;

    if (*(int *)(param_1 + 0x2b0) == 0) {
        *(undefined4 *)(param_1 + 0x364) = param_3;
        *(undefined4 *)(param_1 + 0x350) = 2;
        *(undefined4 *)(param_1 + 0x360) = param_2;
        *(undefined4 *)(param_1 + 0x368) = param_5;
        local_res8 = (longlong *)0x0;
        iVar2 = FUN_140633cb0(param_1,param_2,&local_res8,param_4,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        plVar1 = local_res8;
        if (iVar2 < 0) {
            *(undefined8 *)(param_1 + 0x36c) = 0;
        }
        else {
            fVar3 = (float)(**(code **)(*local_res8 + 0x78))(local_res8);
            *(float *)(param_1 + 0x36c) = fVar3 * in_XMM3_Da;
            fVar3 = (float)(**(code **)(*plVar1 + 0x70))(fVar3 * in_XMM3_Da,0xbf800000,plVar1);
            *(float *)(param_1 + 0x370) = fVar3 * in_XMM3_Da;
        }
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))(plVar1);
        }
    }
    return;
}



void FUN_1405d3640(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
    longlong *plVar1;
    int iVar2;
    float fVar3;
    float in_XMM3_Da;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    longlong *local_res8;

    if (*(int *)(param_1 + 0x2b0) == 0) {
        *(undefined4 *)(param_1 + 0x394) = param_3;
        *(undefined4 *)(param_1 + 0x380) = 2;
        *(undefined4 *)(param_1 + 0x390) = param_2;
        local_res8 = (longlong *)0x0;
        iVar2 = FUN_140633cb0(param_1,param_2,&local_res8,param_4,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        plVar1 = local_res8;
        if (iVar2 < 0) {
            *(undefined8 *)(param_1 + 0x39c) = 0;
        }
        else {
            fVar3 = (float)(**(code **)(*local_res8 + 0x78))(local_res8);
            *(float *)(param_1 + 0x39c) = fVar3 * in_XMM3_Da;
            fVar3 = (float)(**(code **)(*plVar1 + 0x70))(fVar3 * in_XMM3_Da,0xbf800000,plVar1);
            *(float *)(param_1 + 0x3a0) = fVar3 * in_XMM3_Da;
        }
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))(plVar1);
        }
    }
    return;
}



void FUN_1405d3700(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    undefined4 local_res8;
    undefined8 local_38;
    ulonglong local_30;
    undefined8 local_28;

    if (*(int *)(param_1 + 0x4a0) == 0) {
        if ((*(int *)(param_1 + 0x350) == 2) && (*(int *)(param_1 + 0x368) != 0)) {
            puVar3 = &local_38;
            local_30 = local_30 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 0x36c);
            local_38 = *(undefined8 *)(param_1 + 0x360);
            uVar2 = 0x71e;
        }
        else {
            iVar1 = *(int *)(param_1 + 0x380);
            if (iVar1 == 0) {
                local_38 = *(undefined8 *)(param_1 + 0x390);
                puVar3 = &local_38;
                uVar2 = 0x71d;
                local_30 = CONCAT44(*(undefined4 *)(param_1 + 0x3a0),*(undefined4 *)(param_1 + 0x398));
                local_28 = *(undefined8 *)(param_1 + 0x3a4);
            }
            else if (iVar1 == 1) {
                local_res8 = *(undefined4 *)(param_1 + 0x390);
                puVar3 = (undefined8 *)&local_res8;
                uVar2 = 0x71f;
            }
            else {
                if (iVar1 != 2) goto LAB_1405d3844;
                puVar3 = &local_38;
                local_30 = local_30 & 0xffffffff00000000 | (ulonglong)*(uint *)(param_1 + 0x39c);
                local_38 = *(undefined8 *)(param_1 + 0x390);
                uVar2 = 0x71e;
            }
        }
        FUN_1403f4900(DAT_140c65898,uVar2,puVar3);
    }
    LAB_1405d3844:
    FUN_1405d3870(param_1,param_2,param_3,param_4);
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1405d3870(longlong param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined4 *puVar5;
    longlong lVar6;
    float fVar7;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    undefined extraout_XMM0 [16];
    undefined auVar8 [16];
    undefined4 uVar9;
    undefined extraout_XMM0_00 [16];
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    uint uVar18;
    float fVar19;
    undefined4 uVar20;
    undefined4 uVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    longlong *local_198 [2];
    undefined8 local_188;
    float fStack384;
    undefined4 uStack380;
    undefined8 local_178;
    float fStack368;
    undefined4 uStack364;
    float local_168;
    float fStack356;
    float fStack352;
    float fStack348;
    undefined4 local_158;
    undefined4 uStack340;
    undefined4 uStack336;
    undefined4 uStack332;
    float local_148;
    float fStack324;
    float fStack320;
    float fStack316;
    undefined local_138 [16];
    float local_128;
    float local_124;
    ulonglong local_120;
    code *local_118;
    undefined8 uStack272;
    float local_108;
    float fStack260;
    float fStack256;
    undefined4 uStack252;
    undefined4 local_f8;
    undefined4 uStack244;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined local_e8 [16];
    float local_d8;
    float fStack212;
    float fStack208;
    float fStack204;
    undefined local_c8 [16];

    *(int *)(param_1 + 0x41c) = param_2;
    *(undefined4 *)(param_1 + 0x420) = param_3;
    *(undefined4 *)(param_1 + 0x424) = param_4;
    *(undefined4 *)(param_1 + 0x428) = param_5;
    if (*(int *)(param_1 + 0x414) != 0) {
        *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x3b0);
        *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c0);
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c4);
        *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3c8);
        *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3cc);
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x3d8);
        *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x3dc);
        *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c0);
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c4);
        *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3c8);
        *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3cc);
        *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c0);
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c4);
        *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3c8);
        *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3cc);
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x3e0);
        *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
        *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3f4);
        *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
        *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x3fc);
        *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x400);
        *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x404);
        *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x408);
        *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x40c);
        *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
        *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3f4);
        *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
        *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x3fc);
        *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
        *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3f4);
        *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
        *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x3fc);
        *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x400);
    }
    *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x350);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x364);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x36c);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x370);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x374);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x378);
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x37c);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x364);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x36c);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x364);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x36c);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x370);
    *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0x380);
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x394);
    *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x39c);
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x3a0);
    *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x3a4);
    *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_1 + 0x3a8);
    *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x3ac);
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x394);
    *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x39c);
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x394);
    *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x39c);
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x3a0);
    if (param_2 == 0) {
        *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x350);
        *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x360);
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x364);
        *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x368);
        *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x36c);
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x370);
        *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x374);
        *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x378);
        *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x37c);
        *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x360);
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x364);
        *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x368);
        *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x36c);
        *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x360);
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x364);
        *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x368);
        *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x36c);
        *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x370);
        *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x380);
        *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x390);
        *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x394);
        *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x398);
        *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x39c);
        *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x3a0);
        *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x3a4);
        *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x3a8);
        *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x3ac);
        *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x390);
        *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x394);
        *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x398);
        *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x39c);
        *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x390);
        *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x394);
        *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x398);
        *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x39c);
        *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x3a0);
        *(int *)(param_1 + 0x2d0) = DAT_140c636a8;
        *(undefined4 *)(param_1 + 0x50) = 0x3f800000;
        if (*(int *)(param_1 + 0x2f0) == 2) {
            local_198[0] = (longlong *)0x0;
            iVar4 = FUN_140633cb0(param_1,*(undefined4 *)(param_1 + 0x300),local_198);
            plVar1 = local_198[0];
            if (-1 < iVar4) {
                local_e8 = extraout_XMM0 & (undefined  [16])0x0;
                (**(code **)(*local_198[0] + 0x90))
                        (local_198[0],*local_198[0],0,0,0,0,0,0,0,local_198,
                         *(undefined4 *)(param_1 + 0x304),local_e8,0xbf800000);
                if (local_198[0]._0_4_ != 0.0) {
                    *(float *)(param_1 + 0x14) = local_198[0]._0_4_;
                    *(float *)(param_1 + 0x10) = local_198[0]._0_4_;
                }
            }
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
        }
        *(undefined8 *)(param_1 + 0x410) = 0;
        *(uint *)(param_1 + 0x2b8) = (uint)(*(int *)(param_1 + 0x2b0) == 0);
        return 1;
    }
    *(undefined4 *)(param_1 + 0x418) = param_3;
    fVar19 = 0.005555556;
    *(undefined4 *)(param_1 + 0x3b0) = *(undefined4 *)(param_1 + 0x350);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x364);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x36c);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x370);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x374);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x378);
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x37c);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x364);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x36c);
    *(undefined4 *)(param_1 + 0x3c0) = *(undefined4 *)(param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x3c4) = *(undefined4 *)(param_1 + 0x364);
    *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x368);
    *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x36c);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x370);
    *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0x380);
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x394);
    *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x39c);
    fVar7 = DAT_140c3b438 * 0.005555556;
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x3a0);
    *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x3a4);
    *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(param_1 + 0x3a8);
    *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x3ac);
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x394);
    *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x39c);
    *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x394);
    *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x398);
    *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x39c);
    *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x3a0);
    iVar4 = DAT_140c4dea0;
    if (*DAT_140c63750 < DAT_140c4dea0) {
        iVar4 = *DAT_140c63750;
    }
    *(float *)(param_1 + 0x474) = fVar7 * *(float *)(&DAT_140c4deb0 + (longlong)iVar4 * 4);
    if (*(int *)(param_1 + 0x41c) != 1) {
        if (1 < *(int *)(param_1 + 0x41c) - 2U) {
            return 1;
        }
        if (*(int *)(param_1 + 0x3b0) == 2) {
            local_198[0] = (longlong *)0x0;
            iVar4 = FUN_140633cb0((longlong)iVar4,*(undefined4 *)(param_1 + 0x3c0),local_198);
            plVar1 = local_198[0];
            if (-1 < iVar4) {
                local_138 = extraout_XMM0_00 & (undefined  [16])0x0;
                (**(code **)(*local_198[0] + 0x90))
                        (local_198[0],*local_198[0],0,0,0,0,0,0,0,local_198,
                         *(undefined4 *)(param_1 + 0x3c4),local_138,0xbf800000);
                if (local_198[0]._0_4_ == 0.0) {
                    iVar4 = DAT_140c4dea0;
                    if (*DAT_140c63750 < DAT_140c4dea0) {
                        iVar4 = *DAT_140c63750;
                    }
                    *(float *)(param_1 + 0x474) =
                            DAT_140c3b438 * fVar19 * *(float *)(&DAT_140c4deb0 + (longlong)iVar4 * 4);
                }
                else {
                    *(float *)(param_1 + 0x474) = local_198[0]._0_4_;
                }
            }
            if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 8))(plVar1);
            }
        }
        uVar15 = *(undefined4 *)(param_1 + 0x420);
        FUN_14053b920();
        local_118 = FUN_1405d3270;
        local_128 = 0.0;
        uStack272 = 0;
        local_120 = param_1;
        FUN_140195960(param_1 + 0x260,uVar15,&local_128,4);
        return 1;
    }
    *(undefined4 *)(param_1 + 0x414) = 1;
    fVar14 = 0.0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    *(undefined4 *)(param_1 + 0x430) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x434) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x438) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x43c) = *(undefined4 *)(param_1 + 0x2c);
    uVar18 = 0x7fffffff;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x14);
    local_168 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x40);
    fStack356 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x44);
    fStack352 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x48);
    fVar12 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x4c);
    uStack364 = uRam0000000140c783ac;
    uStack380 = uRam0000000140c7839c;
    local_158 = _DAT_140c783c0;
    uStack340 = uRam0000000140c783c4;
    uStack336 = uRam0000000140c783c8;
    uStack332 = uRam0000000140c783cc;
    local_e8._0_4_ = 0.5;
    fStack348 = fRam0000000140c783bc;
    fVar7 = fStack356 * fStack356;
    local_e8 = ZEXT816(0x3f000000);
    fVar24 = 3.0;
    fVar10 = local_168 * local_168 + fVar7 + fStack352 * fStack352;
    auVar8 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                     CONCAT124(SUB1612(CONCAT412(fVar12 * fVar12,
                                                 CONCAT48(fStack352 * fStack352,
                                                          CONCAT44(fVar7,local_168 * local_168))) >>
                                                                                                  0x20,0),fVar10));
    fStack204 = SUB164(auVar8,0);
    fStack204 = (3.0 - fVar10 * fStack204 * fStack204) * 0.5 * fStack204;
    if (fStack204 <= 0.0) {
        fStack204 = 0.0;
    }
    local_168 = fStack204 * local_168;
    fStack356 = fStack204 * fStack356;
    fStack352 = fStack204 * fStack352;
    fStack204 = fStack204 * fVar12;
    if ((1e-05 < (float)((uint)local_168 & 0x7fffffff)) ||
        (1e-05 < (float)((uint)fStack352 & 0x7fffffff))) {
        fVar7 = fStack352 * *(float *)(param_1 + 0x2c4) - fStack356 * *(float *)(param_1 + 0x2c8);
        fVar12 = local_168 * *(float *)(param_1 + 0x2c8) - fStack352 * *(float *)(param_1 + 0x2c0);
        fVar23 = fStack356 * *(float *)(param_1 + 0x2c0) - local_168 * *(float *)(param_1 + 0x2c4);
        fVar11 = fRam0000000140c783bc * *(float *)(param_1 + 0x2cc) -
                 fRam0000000140c783bc * *(float *)(param_1 + 0x2cc);
        fVar10 = fVar12 * fVar12;
        fVar22 = fVar7 * fVar7 + fVar10 + fVar23 * fVar23;
        auVar8 = rsqrtss(CONCAT412(fVar10,CONCAT48(fVar10,CONCAT44(fVar10,fVar10))),
                         CONCAT124(SUB1612(CONCAT412(fVar11 * fVar11,
                                                     CONCAT48(fVar23 * fVar23,
                                                              CONCAT44(fVar10,fVar7 * fVar7))) >> 0x20,0
                         ),fVar22));
        fStack384 = SUB164(auVar8,0);
        fStack384 = (3.0 - fVar22 * fStack384 * fStack384) * 0.5 * fStack384;
        if (fStack384 <= 0.0) {
            fStack384 = 0.0;
        }
        fVar7 = fStack384 * fVar7;
        fVar12 = fStack384 * fVar12;
        local_188 = CONCAT44(fVar12,fVar7);
        fStack384 = fStack384 * fVar23;
        local_178 = CONCAT44(fVar7 * 0.0 - fStack384 * local_168,
                             fStack384 * fStack356 - fVar12 * fStack352);
        fStack368 = fVar12 * local_168 - fVar7 * fStack356;
    }
    else {
        local_188 = CONCAT44(fRam0000000140c77864,_DAT_140c77860);
        fStack384 = fRam0000000140c77868;
        local_178 = CONCAT44(_DAT_140c77860 * fStack352 - fRam0000000140c77868 * local_168,
                             fRam0000000140c77868 * fStack356 - fRam0000000140c77864 * fStack352);
        fStack368 = fRam0000000140c77864 * local_168 - _DAT_140c77860 * fStack356;
    }
    local_d8 = local_168;
    fStack212 = fStack356;
    fStack208 = fStack352;
    puVar5 = (undefined4 *)FUN_1401b1d60();
    uVar20 = 0;
    uVar21 = 0;
    uVar9 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *(undefined4 *)(param_1 + 0x450) = *puVar5;
    *(undefined4 *)(param_1 + 0x454) = uVar9;
    *(undefined4 *)(param_1 + 0x458) = uVar2;
    *(undefined4 *)(param_1 + 0x45c) = uVar3;
    iVar4 = *(int *)(param_1 + 0x3e0);
    if (iVar4 == 0) {
        local_148 = *(float *)(param_1 + 0x3f0);
        fStack324 = *(float *)(param_1 + 0x3f4);
        fStack320 = *(float *)(param_1 + 0x3f8);
        fStack316 = *(float *)(param_1 + 0x3fc);
    }
    else if (iVar4 == 1) {
        if ((*(int *)(param_1 + 0x3f0) != 0) && (lVar6 = FUN_1403d90d0(), lVar6 != 0)) {
            plVar1 = *(longlong **)(lVar6 + 0x16e8);
            if ((plVar1 == (longlong *)0x0) || (iVar4 = (**(code **)(*plVar1 + 0x430))(), iVar4 == 0)) {
                local_148 = *(float *)(lVar6 + 0x1230);
                fStack324 = *(float *)(lVar6 + 0x1234);
                fStack320 = *(float *)(lVar6 + 0x1238);
                fStack316 = *(float *)(lVar6 + 0x123c);
            }
            else {
                local_148 = *(float *)(lVar6 + 0x11e0);
                fStack324 = *(float *)(lVar6 + 0x11e4);
                fStack320 = *(float *)(lVar6 + 0x11e8);
                fStack316 = *(float *)(lVar6 + 0x11ec);
                fVar7 = *(float *)(lVar6 + 0x12c4);
                (**(code **)(*plVar1 + 0x448))();
                fStack324 = fStack324 + extraout_XMM0_Da * fVar7;
            }
        }
    }
    else if (iVar4 == 2) {
        local_198[0] = (longlong *)0x0;
        iVar4 = FUN_140633cb0(0,*(undefined4 *)(param_1 + 0x3f0),local_198);
        plVar1 = local_198[0];
        if (-1 < iVar4) {
            local_c8 = CONCAT412(uVar17,CONCAT48(uVar16,CONCAT44(uVar15,fVar14)));
            (**(code **)(*local_198[0] + 0x90))
                    (local_198[0],*local_198[0],&local_148,0,0,0,0,0,0,0,
                     *(undefined4 *)(param_1 + 0x3f4),local_c8,0xbf800000);
        }
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
        }
    }
    iVar4 = *(int *)(param_1 + 0x3b0);
    fVar23 = 1.0;
    fVar22 = 0.0;
    fVar7 = _DAT_140c77870;
    fVar10 = fRam0000000140c77874;
    fVar12 = fRam0000000140c77878;
    uStack272._4_4_ = fRam0000000140c7787c;
    if (iVar4 == 0) {
        uVar15 = *(undefined4 *)(param_1 + 0x3c0);
        uVar16 = *(undefined4 *)(param_1 + 0x3c4);
        uVar17 = *(undefined4 *)(param_1 + 0x3c8);
        uVar9 = *(undefined4 *)(param_1 + 0x3cc);
    }
    else {
        if (iVar4 != 1) {
            if (iVar4 == 2) {
                local_198[0] = (longlong *)0x0;
                iVar4 = FUN_140633cb0(0,*(undefined4 *)(param_1 + 0x3c0),local_198);
                plVar1 = local_198[0];
                if (iVar4 < 0) {
                    local_d8 = _DAT_140c78450;
                    fStack212 = fRam0000000140c78454;
                    fStack208 = fRam0000000140c78458;
                    fStack204 = fRam0000000140c7845c;
                }
                else {
                    local_138 = CONCAT412(uVar17,CONCAT48(uVar16,CONCAT44(uVar15,fVar14)));
                    (**(code **)(*local_198[0] + 0x90))
                            (local_198[0],*local_198[0],param_1 + 0x440,0,0,&local_d8,0,0,0,local_198,
                             *(undefined4 *)(param_1 + 0x3c4),local_138,0xbf800000);
                    if (local_198[0]._0_4_ == fVar22) {
                        iVar4 = DAT_140c4dea0;
                        if (*DAT_140c63750 < DAT_140c4dea0) {
                            iVar4 = *DAT_140c63750;
                        }
                        *(float *)(param_1 + 0x474) =
                                DAT_140c3b438 * fVar19 * *(float *)(&DAT_140c4deb0 + (longlong)iVar4 * 4);
                    }
                    else {
                        *(float *)(param_1 + 0x474) = local_198[0]._0_4_;
                    }
                }
                if (*(int *)(param_1 + 0x3c8) != 0) {
                    uStack252 = 0;
                    fVar19 = fStack212 * 2.0;
                    fStack260 = fStack204 * local_d8 * 2.0;
                    local_108 = local_d8 * 0.0 + fStack204 * fVar19;
                    fVar14 = 0.0;
                    local_128 = (fVar23 - fStack212 * fVar19) - 0.0;
                    local_120 = (ulonglong)(uint)(local_d8 * 0.0 - fStack204 * fVar19);
                    fVar12 = fStack212 * 0.0 + fStack260;
                    fStack260 = fStack212 * 0.0 - fStack260;
                    fVar7 = fVar19 * local_d8 - fStack204 * 0.0;
                    local_124 = fVar19 * local_d8 + fStack204 * 0.0;
                    uStack272._4_4_ = 0.0;
                    uStack272 = (ulonglong)(uint)fVar12;
                    fVar10 = fVar23 - local_d8 * 2.0 * local_d8;
                    fStack256 = fVar10 - fStack212 * fVar19;
                    fVar10 = fVar10 - 0.0;
                    uVar18 = 0x7fffffff;
                    local_148 = *(float *)(param_1 + 0x440) - local_108;
                    fStack324 = *(float *)(param_1 + 0x444) - fStack260;
                    fStack320 = *(float *)(param_1 + 0x448) - fStack256;
                    fStack316 = *(float *)(param_1 + 0x44c) - 0.0;
                    local_118 = (code *)CONCAT44(fVar10,fVar7);
                    local_f8 = 0;
                    uStack244 = 0;
                    uStack240 = 0;
                    uStack236 = 0x3f800000;
                }
                if (plVar1 != (longlong *)0x0) {
                    (**(code **)(*plVar1 + 8))(plVar1);
                }
            }
            goto LAB_1405d453f;
        }
        if ((*(int *)(param_1 + 0x3c0) == 0) || (lVar6 = FUN_1403d90d0(DAT_140c65898), lVar6 == 0))
            goto LAB_1405d453f;
        plVar1 = *(longlong **)(lVar6 + 0x16e8);
        if ((plVar1 != (longlong *)0x0) && (iVar4 = (**(code **)(*plVar1 + 0x430))(plVar1), iVar4 != 0))
        {
            uVar15 = *(undefined4 *)(lVar6 + 0x11e4);
            uVar16 = *(undefined4 *)(lVar6 + 0x11e8);
            uVar17 = *(undefined4 *)(lVar6 + 0x11ec);
            *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(lVar6 + 0x11e0);
            *(undefined4 *)(param_1 + 0x444) = uVar15;
            *(undefined4 *)(param_1 + 0x448) = uVar16;
            *(undefined4 *)(param_1 + 0x44c) = uVar17;
            fVar19 = *(float *)(lVar6 + 0x12c4);
            (**(code **)(*plVar1 + 0x448))(plVar1);
            *(float *)(param_1 + 0x444) = extraout_XMM0_Da_00 * fVar19 + *(float *)(param_1 + 0x444);
            goto LAB_1405d453f;
        }
        uVar15 = *(undefined4 *)(lVar6 + 0x1230);
        uVar16 = *(undefined4 *)(lVar6 + 0x1234);
        uVar17 = *(undefined4 *)(lVar6 + 0x1238);
        uVar9 = *(undefined4 *)(lVar6 + 0x123c);
    }
    *(undefined4 *)(param_1 + 0x440) = uVar15;
    *(undefined4 *)(param_1 + 0x444) = uVar16;
    *(undefined4 *)(param_1 + 0x448) = uVar17;
    *(undefined4 *)(param_1 + 0x44c) = uVar9;
    LAB_1405d453f:
    local_168 = *(float *)(param_1 + 0x440) - local_148;
    fStack356 = *(float *)(param_1 + 0x444) - fStack324;
    fStack352 = *(float *)(param_1 + 0x448) - fStack320;
    fVar13 = *(float *)(param_1 + 0x44c) - fStack316;
    fVar19 = fStack356 * fStack356;
    fVar11 = local_168 * local_168 + fVar19 + fStack352 * fStack352;
    auVar8 = rsqrtss(CONCAT412(fVar19,CONCAT48(fVar19,CONCAT44(fVar19,fVar19))),
                     CONCAT124(SUB1612(CONCAT412(fVar13 * fVar13,
                                                 CONCAT48(fStack352 * fStack352,
                                                          CONCAT44(fVar19,local_168 * local_168))) >>
                                                                                                   0x20,0),fVar11));
    fVar19 = SUB164(auVar8,0);
    fVar19 = (fVar24 - fVar11 * fVar19 * fVar19) * local_e8._0_4_ * fVar19;
    if (fVar19 <= fVar14) {
        fVar19 = fVar14;
    }
    local_168 = fVar19 * local_168;
    fStack356 = fVar19 * fStack356;
    fStack352 = fVar19 * fStack352;
    local_138 = CONCAT412(fVar19 * fVar13,CONCAT48(fStack352,CONCAT44(fStack356,local_168)));
    if ((1e-05 < (float)((uint)local_168 & uVar18)) || (1e-05 < (float)((uint)fStack352 & uVar18))) {
        fVar12 = fStack352 * fVar10 - fStack356 * fVar12;
        fVar11 = local_168 * 0.0 - fStack352 * fVar7;
        fVar10 = fStack356 * fVar7 - local_168 * fVar10;
        fVar13 = fStack348 * uStack272._4_4_ - fStack348 * uStack272._4_4_;
        fVar7 = fVar11 * fVar11;
        fVar19 = fVar12 * fVar12 + fVar7 + fVar10 * fVar10;
        auVar8 = rsqrtss(CONCAT412(fVar7,CONCAT48(fVar7,CONCAT44(fVar7,fVar7))),
                         CONCAT124(SUB1612(CONCAT412(fVar13 * fVar13,
                                                     CONCAT48(fVar10 * fVar10,
                                                              CONCAT44(fVar7,fVar12 * fVar12))) >> 0x20,
                                           0),fVar19));
        fStack384 = SUB164(auVar8,0);
        fStack384 = (fVar24 - fVar19 * fStack384 * fStack384) * local_e8._0_4_ * fStack384;
        if (fStack384 <= fVar14) {
            fStack384 = fVar14;
        }
        fVar12 = fStack384 * fVar12;
        fVar11 = fStack384 * fVar11;
        local_188 = CONCAT44(fVar11,fVar12);
        fStack384 = fStack384 * fVar10;
        local_178 = CONCAT44(fStack352 * fVar12 - local_168 * fStack384,
                             fStack356 * fStack384 - fVar11 * 0.0);
        fStack368 = local_168 * fVar11 - fStack356 * fVar12;
    }
    else {
        local_188 = CONCAT44(fRam0000000140c77864,_DAT_140c77860);
        fStack384 = fRam0000000140c77868;
        local_178 = CONCAT44(_DAT_140c77860 * fStack352 - fRam0000000140c77868 * local_168,
                             fRam0000000140c77868 * fStack356 - fRam0000000140c77864 * fStack352);
        fStack368 = fRam0000000140c77864 * local_168 - _DAT_140c77860 * fStack356;
    }
    puVar5 = (undefined4 *)FUN_1401b1d60();
    iVar4 = DAT_140c636a8;
    uVar15 = puVar5[1];
    uVar16 = puVar5[2];
    uVar17 = puVar5[3];
    *(undefined4 *)(param_1 + 0x460) = *puVar5;
    *(undefined4 *)(param_1 + 0x464) = uVar15;
    *(undefined4 *)(param_1 + 0x468) = uVar16;
    *(undefined4 *)(param_1 + 0x46c) = uVar17;
    uVar18 = *(uint *)(param_1 + 0x420);
    *(int *)(param_1 + 0x478) = iVar4;
    *(uint *)(param_1 + 0x47c) = uVar18 + iVar4;
    if (uVar18 == 0) {
        *(undefined4 *)(param_1 + 0x480) = 0x49742400;
    }
    else {
        *(float *)(param_1 + 0x480) = fVar23 / (float)(ulonglong)uVar18;
    }
    *(undefined4 *)(param_1 + 0x410) = 0;
    *(int *)(param_1 + 0x2d0) = iVar4;
    if (*(int *)(param_1 + 0x2b0) == 0) {
        *(undefined4 *)(param_1 + 0x2b8) = 1;
    }
    else {
        FUN_1405cc9a0(*(undefined8 *)(DAT_140c65898 + 0x7198));
        lVar6 = DAT_140c65898;
        *(undefined4 *)(param_1 + 0x2b8) = 0;
        iVar4 = DAT_140c636a8;
        if (*(int *)(lVar6 + 0x7450) != 0) {
            if (*(int *)(lVar6 + 0x747c) < 1) {
                if ((fVar22 != *(float *)(lVar6 + 0x7440)) ||
                    ((float)(double)(CONCAT44(uVar21,uVar20) & 0x7fffffffffffffff) !=
                     *(float *)(lVar6 + 0x7444))) {
                    *(undefined8 *)(lVar6 + 0x7440) = 0;
                    *(undefined4 *)(lVar6 + 0x7438) = 0;
                    *(int *)(lVar6 + 0x7430) = iVar4;
                }
            }
            else {
                FUN_1400c3230(lVar6 + 0x7428);
            }
            *(undefined4 *)(lVar6 + 0x7448) = 1;
            *(undefined8 *)(lVar6 + 0x744c) = 0x3f800000;
        }
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405d49d0(longlong param_1,int *param_2,undefined (*param_3) [16],int *param_4,
                   undefined (*param_5) [16],undefined (*param_6) [16],undefined (*param_7) [16])

{
    longlong *plVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    undefined4 uVar7;
    float fVar8;
    float fVar9;
    float fVar10;
    float fVar11;
    longlong *local_150;
    undefined (*local_148) [16];
    float local_138;
    float local_134;
    float local_130;
    undefined4 local_12c;
    float local_128;
    float fStack292;
    float fStack288;
    undefined4 uStack284;
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    undefined4 local_108;
    undefined4 uStack260;
    undefined4 uStack256;
    undefined4 uStack252;
    float local_f8;
    float fStack244;
    undefined4 uStack240;
    float fStack236;
    undefined local_e8 [16];
    undefined local_d8 [16];

    iVar4 = DAT_140c636a8;
    fVar9 = 0.001;
    iVar5 = *param_4;
    fVar11 = 1.0;
    local_148 = param_6;
    if (iVar5 == 0) {
        if ((*(int *)(param_1 + 0x2b0) == 0) || (*(int *)(param_1 + 0x414) != 0)) {
            fVar10 = (float)(ulonglong)(uint)(DAT_140c636a8 - *(int *)(param_1 + 0x2d0));
            *param_5 = CONCAT412((float)param_4[7] + fVar10 * (float)param_4[0xb] * 0.001,
                                 CONCAT48((float)param_4[6] + fVar10 * (float)param_4[10] * 0.001,
                                          CONCAT44((float)param_4[5] + fVar10 * (float)param_4[9] * 0.001,
                                                   (float)param_4[4] + fVar10 * (float)param_4[8] * 0.001)
                                 ));
        }
        else {
            lVar6 = **(longlong **)(param_1 + 8);
            *param_5 = CONCAT412(*(float *)(lVar6 + 0x2c) - *(float *)(lVar6 + 0xcc),
                                 CONCAT48(*(float *)(lVar6 + 0x28) - *(float *)(lVar6 + 200),
                                          CONCAT44(*(float *)(lVar6 + 0x24) - *(float *)(lVar6 + 0xc4),
                                                   *(float *)(lVar6 + 0x20) - *(float *)(lVar6 + 0xc0))));
        }
    }
    else if (iVar5 == 1) {
        if ((param_4[4] != 0) && (lVar6 = FUN_1403d90d0(DAT_140c65898,param_4[4]), lVar6 != 0)) {
            uVar7 = *(undefined4 *)(lVar6 + 0x1234);
            uVar2 = *(undefined4 *)(lVar6 + 0x1238);
            uVar3 = *(undefined4 *)(lVar6 + 0x123c);
            *(undefined4 *)*param_5 = *(undefined4 *)(lVar6 + 0x1230);
            *(undefined4 *)(*param_5 + 4) = uVar7;
            *(undefined4 *)(*param_5 + 8) = uVar2;
            *(undefined4 *)(*param_5 + 0xc) = uVar3;
        }
    }
    else if (iVar5 == 2) {
        local_150 = (longlong *)0x0;
        fVar10 = (float)(ulonglong)(uint)(DAT_140c636a8 - *(int *)(param_1 + 0x2d0)) * 0.001 *
                 (float)param_4[8];
        iVar5 = FUN_140633cb0(0,param_4[4]);
        plVar1 = local_150;
        if (-1 < iVar5) {
            local_d8 = ZEXT816(0);
            (**(code **)(*local_150 + 0x90))(0xbf800000,SUB84((double)fVar10,0));
        }
        param_6 = local_148;
        if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 8))();
            param_6 = local_148;
        }
    }
    else if (iVar5 == 3) {
        if (((param_4[4] != 0) && (lVar6 = FUN_1403d90d0(DAT_140c65898,param_4[4]), lVar6 != 0)) &&
            (plVar1 = *(longlong **)(lVar6 + 0x16e8), plVar1 != (longlong *)0x0)) {
            if (param_4[5] == 0) {
                iVar5 = (**(code **)(*plVar1 + 0x428))(plVar1,param_4[6],0,0,0,0,&local_138,0);
                if (-1 < iVar5) {
                    *(undefined4 *)*param_5 = local_108;
                    *(undefined4 *)(*param_5 + 4) = uStack260;
                    *(undefined4 *)(*param_5 + 8) = uStack256;
                    *(undefined4 *)(*param_5 + 0xc) = uStack252;
                }
            }
            else {
                (**(code **)(*plVar1 + 0x378))(plVar1,param_4[6],&local_138,1);
                *(undefined4 *)*param_5 = local_108;
                *(undefined4 *)(*param_5 + 4) = uStack260;
                *(undefined4 *)(*param_5 + 8) = uStack256;
                *(undefined4 *)(*param_5 + 0xc) = uStack252;
            }
        }
    }
    else {
        *param_5 = ZEXT816(0);
    }
    iVar5 = *param_2;
    if (iVar5 == 0) {
        if ((*(int *)(param_1 + 0x2b0) == 0) || (*(int *)(param_1 + 0x414) != 0)) {
            fVar8 = (float)(ulonglong)(uint)(iVar4 - *(int *)(param_1 + 0x2d0));
            fVar9 = (float)param_2[4] + fVar8 * (float)param_2[8] * 0.001;
            fVar11 = (float)param_2[5] + fVar8 * (float)param_2[9] * 0.001;
            fVar10 = (float)param_2[6] + fVar8 * (float)param_2[10] * 0.001;
            fVar8 = (float)param_2[7] + fVar8 * (float)param_2[0xb] * 0.001;
        }
        else {
            lVar6 = **(longlong **)(param_1 + 8);
            fVar9 = *(float *)(lVar6 + 0x20);
            fVar11 = *(float *)(lVar6 + 0x24);
            fVar10 = *(float *)(lVar6 + 0x28);
            fVar8 = *(float *)(lVar6 + 0x2c);
        }
        *param_3 = CONCAT412(fVar8,CONCAT48(fVar10,CONCAT44(fVar11,fVar9)));
        *param_6 = CONCAT412(*(float *)(*param_5 + 0xc) - *(float *)(*param_3 + 0xc),
                             CONCAT48(*(float *)(*param_5 + 8) - *(float *)(*param_3 + 8),
                                      CONCAT44(*(float *)(*param_5 + 4) - *(float *)(*param_3 + 4),
                                               *(float *)*param_5 - *(float *)*param_3)));
    }
    else {
        if (iVar5 == 1) {
            if ((param_2[4] != 0) && (lVar6 = FUN_1403d90d0(DAT_140c65898), lVar6 != 0)) {
                plVar1 = *(longlong **)(lVar6 + 0x16e8);
                if ((plVar1 == (longlong *)0x0) ||
                    (iVar5 = (**(code **)(*plVar1 + 0x430))(plVar1), iVar5 == 0)) {
                    uVar7 = *(undefined4 *)(lVar6 + 0x1234);
                    uVar2 = *(undefined4 *)(lVar6 + 0x1238);
                    uVar3 = *(undefined4 *)(lVar6 + 0x123c);
                    *(undefined4 *)*param_3 = *(undefined4 *)(lVar6 + 0x1230);
                    *(undefined4 *)(*param_3 + 4) = uVar7;
                    *(undefined4 *)(*param_3 + 8) = uVar2;
                    *(undefined4 *)(*param_3 + 0xc) = uVar3;
                }
                else {
                    uVar7 = *(undefined4 *)(lVar6 + 0x11e4);
                    uVar2 = *(undefined4 *)(lVar6 + 0x11e8);
                    uVar3 = *(undefined4 *)(lVar6 + 0x11ec);
                    *(undefined4 *)*param_3 = *(undefined4 *)(lVar6 + 0x11e0);
                    *(undefined4 *)(*param_3 + 4) = uVar7;
                    *(undefined4 *)(*param_3 + 8) = uVar2;
                    *(undefined4 *)(*param_3 + 0xc) = uVar3;
                    fVar9 = *(float *)(lVar6 + 0x12c4);
                    fVar11 = (float)(**(code **)(*plVar1 + 0x448))(plVar1);
                    *(float *)(*param_3 + 4) = fVar11 * fVar9 + *(float *)(*param_3 + 4);
                }
            }
            *local_148 = CONCAT412(*(float *)(*param_5 + 0xc) - *(float *)(*param_3 + 0xc),
                                   CONCAT48(*(float *)(*param_5 + 8) - *(float *)(*param_3 + 8),
                                            CONCAT44(*(float *)(*param_5 + 4) - *(float *)(*param_3 + 4),
                                                     *(float *)*param_5 - *(float *)*param_3)));
            uVar7 = uRam0000000140c7787c;
            fVar11 = fRam0000000140c77878;
            fVar9 = fRam0000000140c77874;
            *(float *)*param_7 = _DAT_140c77870;
            *(float *)(*param_7 + 4) = fVar9;
            *(float *)(*param_7 + 8) = fVar11;
            *(undefined4 *)(*param_7 + 0xc) = uVar7;
            return;
        }
        if (iVar5 == 2) {
            local_150 = (longlong *)0x0;
            fVar9 = (float)(ulonglong)(uint)(iVar4 - *(int *)(param_1 + 0x2d0)) * fVar9 *
                    (float)param_2[8];
            iVar5 = FUN_140633cb0(0,param_2[4],&local_150);
            plVar1 = local_150;
            fVar10 = 0.0;
            if (iVar5 < 0) {
                local_f8 = _DAT_140c78450;
                fStack244 = fRam0000000140c78454;
                uStack240 = uRam0000000140c78458;
                fStack236 = fRam0000000140c7845c;
            }
            else {
                local_e8 = ZEXT816(0);
                (**(code **)(*local_150 + 0x90))
                        (0xbf800000,SUB84((double)fVar9,0),local_150,*local_150,param_3,0,0,&local_f8,0,0,
                         0,&local_150,param_2[5],local_e8,0xbf800000);
                if (local_150._0_4_ == fVar10) {
                    iVar5 = DAT_140c4dea0;
                    if (*DAT_140c63750 < DAT_140c4dea0) {
                        iVar5 = *DAT_140c63750;
                    }
                    *(float *)(param_1 + 0x10) =
                            DAT_140c3b438 * 0.005555556 * *(float *)(&DAT_140c4deb0 + (longlong)iVar5 * 4);
                }
                else {
                    *(float *)(param_1 + 0x10) = local_150._0_4_;
                }
            }
            if (param_2[6] == 0) {
                *local_148 = CONCAT412(*(float *)(*param_5 + 0xc) - *(float *)(*param_3 + 0xc),
                                       CONCAT48(*(float *)(*param_5 + 8) - *(float *)(*param_3 + 8),
                                                CONCAT44(*(float *)(*param_5 + 4) - *(float *)(*param_3 + 4)
                                                        ,*(float *)*param_5 - *(float *)*param_3)));
                fVar9 = _DAT_140c77870;
                fVar11 = fRam0000000140c77874;
                fVar10 = fRam0000000140c77878;
                uVar7 = uRam0000000140c7787c;
            }
            else {
                fStack268 = 0.0;
                uStack284 = 0;
                local_12c = 0;
                fVar9 = fStack244 * 2.0;
                fStack272 = fVar11 - local_f8 * local_f8 * 2.0;
                fStack276 = fStack236 * local_f8 * 2.0;
                local_138 = (fVar11 - fStack244 * fVar9) - 0.0;
                local_130 = local_f8 * 0.0 - fStack236 * fVar9;
                local_118 = local_f8 * 0.0 + fStack236 * fVar9;
                local_134 = local_f8 * fVar9 + fStack236 * 0.0;
                fStack288 = fStack244 * 0.0 + fStack276;
                fStack276 = fStack244 * 0.0 - fStack276;
                fStack292 = fStack272 - 0.0;
                fStack272 = fStack272 - fStack244 * fVar9;
                local_128 = local_f8 * fVar9 - fStack236 * 0.0;
                local_108 = 0;
                uStack260 = 0;
                uStack256 = 0;
                uStack252 = 0x3f800000;
                *local_148 = ZEXT1216(CONCAT48(0.0 - fStack272,CONCAT44(0.0 - fStack276,0.0 - local_118)));
                *param_5 = CONCAT412(*(float *)(*param_3 + 0xc) + 0.0,
                                     CONCAT48((0.0 - fStack272) + *(float *)(*param_3 + 8),
                                              CONCAT44((0.0 - fStack276) + *(float *)(*param_3 + 4),
                                                       (0.0 - local_118) + *(float *)*param_3)));
                fVar9 = local_128;
                fVar11 = fStack292;
                fVar10 = fStack288;
                uVar7 = 0;
            }
            *param_7 = CONCAT412(uVar7,CONCAT48(fVar10,CONCAT44(fVar11,fVar9)));
            if (plVar1 == (longlong *)0x0) {
                return;
            }
            (**(code **)(*plVar1 + 8))(plVar1);
            return;
        }
        if (iVar5 == 3) {
            if (param_2[4] == 0) {
                return;
            }
            lVar6 = FUN_1403d90d0(DAT_140c65898);
            if (lVar6 == 0) {
                return;
            }
            plVar1 = *(longlong **)(lVar6 + 0x16e8);
            if (plVar1 == (longlong *)0x0) {
                return;
            }
            if (param_2[5] == 0) {
                (**(code **)(*plVar1 + 0x428))(plVar1,param_2[6],0,&local_150,0,0,&local_138,0);
            }
            else {
                (**(code **)(*plVar1 + 0x378))(plVar1,param_2[6],&local_138,1);
                local_150._0_4_ = 0.8726646;
            }
            *(undefined4 *)*param_3 = local_108;
            *(undefined4 *)(*param_3 + 4) = uStack260;
            *(undefined4 *)(*param_3 + 8) = uStack256;
            *(undefined4 *)(*param_3 + 0xc) = uStack252;
            if (local_150._0_4_ == 0.0) {
                iVar5 = DAT_140c4dea0;
                if (*DAT_140c63750 < DAT_140c4dea0) {
                    iVar5 = *DAT_140c63750;
                }
                *(float *)(param_1 + 0x10) =
                        DAT_140c3b438 * 0.005555556 * *(float *)(&DAT_140c4deb0 + (longlong)iVar5 * 4);
            }
            else {
                *(float *)(param_1 + 0x10) = local_150._0_4_;
            }
            if (param_2[7] != 0) {
                *param_6 = CONCAT412(0.0 - fStack268,
                                     CONCAT48(0.0 - fStack272,CONCAT44(0.0 - fStack276,0.0 - local_118)));
                *param_5 = CONCAT412((0.0 - fStack268) + *(float *)(*param_3 + 0xc),
                                     CONCAT48((0.0 - fStack272) + *(float *)(*param_3 + 8),
                                              CONCAT44((0.0 - fStack276) + *(float *)(*param_3 + 4),
                                                       (0.0 - local_118) + *(float *)*param_3)));
                *(float *)*param_7 = local_128;
                *(float *)(*param_7 + 4) = fStack292;
                *(float *)(*param_7 + 8) = fStack288;
                *(undefined4 *)(*param_7 + 0xc) = uStack284;
                return;
            }
            *param_6 = CONCAT412(*(float *)(*param_5 + 0xc) - *(float *)(*param_3 + 0xc),
                                 CONCAT48(*(float *)(*param_5 + 8) - *(float *)(*param_3 + 8),
                                          CONCAT44(*(float *)(*param_5 + 4) - *(float *)(*param_3 + 4),
                                                   *(float *)*param_5 - *(float *)*param_3)));
            uVar7 = uRam0000000140c7787c;
            fVar11 = fRam0000000140c77878;
            fVar9 = fRam0000000140c77874;
            *(float *)*param_7 = _DAT_140c77870;
            *(float *)(*param_7 + 4) = fVar9;
            *(float *)(*param_7 + 8) = fVar11;
            *(undefined4 *)(*param_7 + 0xc) = uVar7;
            return;
        }
        *param_3 = ZEXT816(0);
        *param_6 = CONCAT412(*(float *)(*param_5 + 0xc) - 0.0,
                             CONCAT48(*(float *)(*param_5 + 8) - 0.0,
                                      CONCAT44(*(float *)(*param_5 + 4) - 0.0,*(float *)*param_5 - 0.0))
        );
    }
    uVar7 = uRam0000000140c7787c;
    fVar11 = fRam0000000140c77878;
    fVar9 = fRam0000000140c77874;
    *(float *)*param_7 = _DAT_140c77870;
    *(float *)(*param_7 + 4) = fVar9;
    *(float *)(*param_7 + 8) = fVar11;
    *(undefined4 *)(*param_7 + 0xc) = uVar7;
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405d5190(longlong param_1,longlong *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    undefined4 *puVar6;
    float *pfVar7;
    float *pfVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    float extraout_XMM0_Da;
    float extraout_XMM0_Da_00;
    uint extraout_XMM0_Da_01;
    float extraout_XMM0_Da_02;
    float extraout_XMM0_Da_03;
    float extraout_XMM0_Da_04;
    float extraout_XMM0_Da_05;
    float extraout_XMM0_Da_06;
    float extraout_XMM0_Da_07;
    ulonglong extraout_XMM0_Qa;
    undefined auVar12 [16];
    undefined extraout_XMM0 [16];
    undefined auVar13 [16];
    float fVar14;
    float fVar15;
    undefined4 in_XMM3_Da;
    undefined auVar16 [12];
    float fVar17;
    float fVar18;
    uint uVar19;
    uint uVar20;
    float fVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;
    uint uVar27;
    undefined4 uVar28;
    undefined4 uVar29;
    undefined4 uVar30;
    float fVar31;
    undefined4 uVar32;
    undefined4 uVar33;
    undefined4 uVar34;
    float fVar35;
    undefined local_1c8 [8];
    float fStack448;
    float afStack444 [5];
    undefined local_1a8 [8];
    undefined8 uStack416;
    ulonglong local_198;
    float fStack400;
    float fStack396;
    undefined8 local_188;
    float fStack384;
    undefined4 uStack380;
    float local_178;
    float fStack372;
    float fStack368;
    float fStack364;
    float local_168;
    undefined4 uStack356;
    undefined4 uStack352;
    undefined4 uStack348;
    float local_158;
    undefined **local_148;
    ulonglong local_140;
    LPVOID local_138;
    ulonglong uStack304;
    float local_128;
    float fStack292;
    undefined8 uStack288;
    float local_118;
    float fStack276;
    float fStack272;
    float fStack268;
    undefined local_108 [8];
    float fStack256;
    float fStack252;
    undefined8 local_f8;
    undefined8 uStack240;
    LPVOID local_e8;

    uVar27 = DAT_140c636a8;
    _local_1a8 = CONCAT124(stack0xfffffffffffffe5c,in_XMM3_Da);
    fVar35 = 1e-05;
    iVar5 = *DAT_140c63750;
    iVar4 = DAT_140c4daa0;
    if (iVar5 < DAT_140c4daa0) {
        iVar4 = iVar5;
    }
    if ((&DAT_140c4dab0)[iVar4] == '\0') {
        if (*(float *)(param_1 + 0x30) <= 1e-05) {
            local_158 = 0.0;
            goto LAB_1405d526c;
        }
    }
    else {
        iVar4 = DAT_140c4d980;
        if (iVar5 < DAT_140c4d980) {
            iVar4 = iVar5;
        }
        if (*(float *)(&DAT_140c4d990 + (longlong)iVar4 * 4) <= 1e-05) {
            local_158 = 0.0;
            goto LAB_1405d526c;
        }
    }
    FUN_1408fc7f0();
    local_158 = extraout_XMM0_Da;
    LAB_1405d526c:
    fVar31 = 1.0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar19 = 0x7fffffff;
    uVar20 = 0x7fffffff;
    fVar21 = 3.0;
    uVar11 = 2;
    local_108._0_4_ = 0.5;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    fVar26 = 2.0;
    local_158 = 1.0 - local_158;
    if (*(int *)(param_1 + 0x414) == 0) {
        uVar20 = 0x7fffffff;
        FUN_1405d49d0(param_1,param_1 + 0x2f0,param_1 + 0x20,param_1 + 800,param_1 + 0x40,local_1c8,
                      param_1 + 0x2c0);
        fVar35 = 1e-05;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x10);
    }
    else if (*(uint *)(param_1 + 0x47c) < uVar27 || *(uint *)(param_1 + 0x47c) == uVar27) {
        if (*(int *)(param_1 + 0x2b0) == 0) {
            *(undefined4 *)(param_1 + 0x414) = 0;
            *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(param_1 + 0x3b0);
            *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c0);
            *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c4);
            *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3c8);
            *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3cc);
            *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x3d0);
            *(undefined4 *)(param_1 + 0x314) = *(undefined4 *)(param_1 + 0x3d4);
            *(undefined4 *)(param_1 + 0x318) = *(undefined4 *)(param_1 + 0x3d8);
            *(undefined4 *)(param_1 + 0x31c) = *(undefined4 *)(param_1 + 0x3dc);
            *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c0);
            *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c4);
            *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3c8);
            *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3cc);
            *(undefined4 *)(param_1 + 0x300) = *(undefined4 *)(param_1 + 0x3c0);
            *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x3c4);
            *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(param_1 + 0x3c8);
            *(undefined4 *)(param_1 + 0x30c) = *(undefined4 *)(param_1 + 0x3cc);
            *(undefined4 *)(param_1 + 0x310) = *(undefined4 *)(param_1 + 0x3d0);
            *(undefined4 *)(param_1 + 800) = *(undefined4 *)(param_1 + 0x3e0);
            *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
            *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3f4);
            *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
            *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x3fc);
            *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x400);
            *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x404);
            *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x408);
            *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x40c);
            *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
            *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3f4);
            *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
            *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x3fc);
            *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_1 + 0x3f0);
            *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_1 + 0x3f4);
            *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_1 + 0x3f8);
            *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_1 + 0x3fc);
            *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x400);
        }
        else {
            *(undefined4 *)(param_1 + 0x2a8) = 1;
        }
        local_1c8._0_4_ = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x20);
        local_1c8._4_4_ = *(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x24);
        fStack448 = *(float *)(param_1 + 0x48) - *(float *)(param_1 + 0x28);
        afStack444[0] = *(float *)(param_1 + 0x4c) - *(float *)(param_1 + 0x2c);
        _local_1c8 = CONCAT412(afStack444[0],
                               CONCAT48(fStack448,CONCAT44(local_1c8._4_4_,local_1c8._0_4_)));
        uVar20 = 0x7fffffff;
    }
    else if (*(int *)(param_1 + 0x41c) == 1) {
        FUN_1405d49d0(param_1,param_1 + 0x3b0,param_1 + 0x440,param_1 + 0x3e0,&local_148,local_1c8,
                      &local_f8);
        afStack444[3] = fStack448 * fStack448;
        fStack396 = fRam0000000140c7839c;
        afStack444[1] = local_1c8._0_4_ * local_1c8._0_4_;
        afStack444[2] = local_1c8._4_4_ * local_1c8._4_4_;
        afStack444[4] = afStack444[0] * afStack444[0];
        fStack364 = fRam0000000140c783bc;
        uStack380 = uRam0000000140c783ac;
        local_168 = (float)_DAT_140c783c0;
        uStack356 = uRam0000000140c783c4;
        uStack352 = uRam0000000140c783c8;
        uStack348 = uRam0000000140c783cc;
        uVar9 = (ulonglong)(local_1c8._0_4_ * local_1c8._0_4_ < local_1c8._4_4_ * local_1c8._4_4_);
        uVar10 = uVar9;
        if (afStack444[uVar9 + 1] <= afStack444[3] && afStack444[3] != afStack444[uVar9 + 1]) {
            uVar10 = uVar11;
        }
        auVar12 = ZEXT416((uint)(*(float *)(local_1a8 + (-uVar9 + 1 + uVar10) * -4 + -4) +
                                 afStack444[-uVar9 + 2])) & (undefined  [16])0xffffffffffffffff;
        fVar35 = SUB164(auVar12,0) + afStack444[uVar10 + 1];
        auVar12 = CONCAT124(SUB1612(auVar12 >> 0x20,0),fVar35);
        if (fVar35 <= DAT_140c3d7d8) {
            auVar12 = ZEXT1216(ZEXT812(0));
        }
        else {
            auVar12 = sqrtps(auVar12,auVar12);
            afStack444[1] = fVar31 / SUB164(auVar12,0);
            afStack444[3] = afStack444[1] * fStack448;
            afStack444[2] = afStack444[1] * local_1c8._4_4_;
            afStack444[1] = afStack444[1] * local_1c8._0_4_;
            auVar12 = CONCAT412(afStack444[0] * afStack444[0],
                                CONCAT48(afStack444[3],CONCAT44(afStack444[2],afStack444[1])));
        }
        fVar35 = 1e-05;
        local_1c8._0_4_ = 0.0;
        local_1c8._4_4_ = 0.0;
        fStack448 = 0.0;
        afStack444[0] = 0.0;
        auVar13 = ZEXT416((uint)(0.0 - SUB164(auVar12,0))) & (undefined  [16])0xffffffffffffffff;
        local_178 = SUB164(auVar13,0);
        fStack372 = 0.0 - SUB164(auVar12 >> 0x20,0);
        fStack368 = SUB164(auVar13 >> 0x40,0) - SUB164(auVar12 >> 0x40,0);
        local_108 = CONCAT44(fStack372,local_178);
        _local_108 = CONCAT48(fStack368,local_108);
        _local_108 = CONCAT412(SUB164(auVar13 >> 0x60,0) - SUB164(auVar12 >> 0x60,0),_local_108);
        if ((1e-05 < (float)((uint)local_178 & uVar19)) || (1e-05 < (float)((uint)fStack368 & uVar19)))
        {
            fVar22 = local_f8._4_4_ * 0.0 - fStack372 * (float)uStack240;
            fVar23 = local_178 * (float)uStack240 - fStack368 * (float)local_f8;
            fVar24 = fStack372 * (float)local_f8 - local_178 * local_f8._4_4_;
            fVar25 = fRam0000000140c783bc * uStack240._4_4_ - fRam0000000140c783bc * uStack240._4_4_;
            fVar14 = fVar23 * fVar23;
            fVar15 = fVar22 * fVar22 + fVar14 + fVar24 * fVar24;
            auVar12 = rsqrtss(CONCAT412(fVar14,CONCAT48(fVar14,CONCAT44(fVar14,fVar14))),
                              CONCAT124(SUB1612(CONCAT412(fVar25 * fVar25,
                                                          CONCAT48(fVar24 * fVar24,
                                                                   CONCAT44(fVar14,fVar22 * fVar22))) >>
                                                                                                      0x20,0),fVar15));
            fStack400 = SUB164(auVar12,0);
            fStack400 = (fVar21 - fVar15 * fStack400 * fStack400) * local_108._0_4_ * fStack400;
            if (fStack400 <= 0.0) {
                fStack400 = 0.0;
            }
            fVar22 = fStack400 * fVar22;
            fVar23 = fStack400 * fVar23;
            local_198 = CONCAT44(fVar23,fVar22);
            fStack400 = fStack400 * fVar24;
            local_188 = CONCAT44(fVar22 * fStack368 - fStack400 * local_178,
                                 fStack400 * fStack372 - fVar23 * fStack368);
            fStack384 = fVar23 * local_178 - fVar22 * fStack372;
        }
        else {
            local_198 = CONCAT44(fRam0000000140c77864,_DAT_140c77860);
            fStack400 = fRam0000000140c77868;
            local_188 = CONCAT44(_DAT_140c77860 * fStack368 - fRam0000000140c77868 * local_178,
                                 fRam0000000140c77868 * fStack372 - fRam0000000140c77864 * fStack368);
            fStack384 = fRam0000000140c77864 * local_178 - _DAT_140c77860 * fStack372;
        }
        puVar6 = (undefined4 *)FUN_1401b1d60(&local_f8,&local_198);
        uVar28 = puVar6[1];
        uVar29 = puVar6[2];
        uVar30 = puVar6[3];
        *(undefined4 *)(param_1 + 0x460) = *puVar6;
        *(undefined4 *)(param_1 + 0x464) = uVar28;
        *(undefined4 *)(param_1 + 0x468) = uVar29;
        *(undefined4 *)(param_1 + 0x46c) = uVar30;
        FUN_1408fc950();
        fVar22 = fVar31 - (extraout_XMM0_Da_00 + fVar31) * local_108._0_4_;
        *(float *)(param_1 + 0x20) =
                (*(float *)(param_1 + 0x440) - *(float *)(param_1 + 0x430)) * fVar22 +
                *(float *)(param_1 + 0x430);
        *(float *)(param_1 + 0x24) =
                (*(float *)(param_1 + 0x444) - *(float *)(param_1 + 0x434)) * fVar22 +
                *(float *)(param_1 + 0x434);
        *(float *)(param_1 + 0x28) =
                (*(float *)(param_1 + 0x448) - *(float *)(param_1 + 0x438)) * fVar22 +
                *(float *)(param_1 + 0x438);
        *(float *)(param_1 + 0x2c) =
                (*(float *)(param_1 + 0x44c) - *(float *)(param_1 + 0x43c)) * fVar22 +
                *(float *)(param_1 + 0x43c);
        FUN_1401b1ee0(&local_f8,param_1 + 0x450,param_1 + 0x460);
        fStack396 = 0.0;
        fVar15 = (float)uStack240 * fVar26;
        fVar21 = local_f8._4_4_ * fVar26;
        fStack372 = (float)local_f8 * fVar26 * uStack240._4_4_;
        fStack400 = fVar15 * (float)local_f8 - fVar21 * uStack240._4_4_;
        fVar14 = fVar21 * (float)local_f8 - fVar15 * uStack240._4_4_;
        local_198 = CONCAT44(fVar21 * (float)local_f8 + fVar15 * uStack240._4_4_,
                             (fVar31 - fVar21 * local_f8._4_4_) - fVar15 * (float)uStack240);
        fStack368 = fVar31 - (float)local_f8 * fVar26 * (float)local_f8;
        fVar26 = fStack368 - fVar15 * (float)uStack240;
        local_188 = CONCAT44(fVar26,fVar14);
        local_108._0_4_ = 0.5;
        uVar28 = 0;
        uVar29 = 0;
        uVar30 = 0;
        fStack368 = fStack368 - fVar21 * local_f8._4_4_;
        local_168 = 0.0;
        uStack356 = 0;
        uStack352 = 0;
        uStack348 = 0x3f800000;
        fStack364 = 0.0;
        uStack380 = 0;
        local_178 = fVar15 * (float)local_f8 + fVar21 * uStack240._4_4_;
        fVar21 = 3.0;
        uVar20 = 0x7fffffff;
        fStack384 = fVar15 * local_f8._4_4_ + fStack372;
        fStack372 = fVar15 * local_f8._4_4_ - fStack372;
        local_1c8._0_4_ = local_1c8._0_4_ - local_178;
        local_1c8._4_4_ = local_1c8._4_4_ - fStack372;
        fStack448 = fStack448 - fStack368;
        afStack444[0] = afStack444[0] - 0.0;
        _local_1c8 = CONCAT412(afStack444[0],
                               CONCAT48(fStack448,CONCAT44(local_1c8._4_4_,local_1c8._0_4_)));
        *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x20) + local_1c8._0_4_;
        *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x24) + local_1c8._4_4_;
        *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x28) + fStack448;
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x2c) + afStack444[0];
        *(float *)(param_1 + 0x2c0) = fVar14;
        *(float *)(param_1 + 0x2c4) = fVar26;
        *(float *)(param_1 + 0x2c8) = fStack384;
        *(undefined4 *)(param_1 + 0x2cc) = 0;
        fVar26 = (*(float *)(param_1 + 0x474) - *(float *)(param_1 + 0x470)) * fVar22 +
                 *(float *)(param_1 + 0x470);
        *(float *)(param_1 + 0x10) = fVar26;
        *(float *)(param_1 + 0x14) = fVar26;
    }
    else {
        *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x300);
        *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x304);
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x308);
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x30c);
        *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x330);
        *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x334);
        *(float *)(param_1 + 0x48) = *(float *)(param_1 + 0x338);
        *(float *)(param_1 + 0x4c) = *(float *)(param_1 + 0x33c);
        local_1c8._0_4_ = *(float *)(param_1 + 0x330) - *(float *)(param_1 + 0x20);
        local_1c8._4_4_ = *(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x24);
        fStack448 = *(float *)(param_1 + 0x338) - *(float *)(param_1 + 0x28);
        afStack444[0] = *(float *)(param_1 + 0x33c) - *(float *)(param_1 + 0x2c);
        _local_1c8 = CONCAT412(afStack444[0],
                               CONCAT48(fStack448,CONCAT44(local_1c8._4_4_,local_1c8._0_4_)));
    }
    pfVar8 = (float *)(param_1 + 0x20);
    pfVar7 = (float *)(param_1 + 0x40);
    uVar27 = 0x80000000;
    fVar26 = *pfVar8 - *(float *)(param_1 + 0x4b0);
    fVar14 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x4b4);
    fVar15 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x4b8);
    *(uint *)(param_1 + 0x204) =
            (uint)(fVar26 * fVar26 + fVar14 * fVar14 + fVar15 * fVar15 < DAT_140c3c7a8);
    piVar3 = DAT_140c63750;
    *(float *)(param_1 + 0x4b0) = *pfVar8;
    *(undefined4 *)(param_1 + 0x4b4) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x4b8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x4bc) = *(undefined4 *)(param_1 + 0x2c);
    iVar5 = DAT_140c4dbe0;
    if (*piVar3 < DAT_140c4dbe0) {
        iVar5 = *piVar3;
    }
    fVar26 = local_1c8._0_4_;
    uStack288._0_4_ = fStack448;
    if ((&DAT_140c4dbf0)[iVar5] != '\0') {
        fVar22 = 0.0;
        fVar23 = 0.0;
        fVar24 = 0.0;
        fVar25 = 0.0;
        local_178 = *pfVar8 - *pfVar7;
        fStack372 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x44);
        fStack368 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x48);
        fVar15 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x4c);
        local_188 = CONCAT44(uRam0000000140c783a4,_DAT_140c783a0);
        fStack384 = (float)uRam0000000140c783a8;
        uStack380 = uRam0000000140c783ac;
        local_198 = CONCAT44(uRam0000000140c78394,_DAT_140c78390);
        fStack400 = (float)uRam0000000140c78398;
        fStack396 = fRam0000000140c7839c;
        local_168 = (float)_DAT_140c783c0;
        uStack356 = uRam0000000140c783c4;
        uStack352 = uRam0000000140c783c8;
        uStack348 = uRam0000000140c783cc;
        fVar26 = fStack372 * fStack372;
        fStack364 = fRam0000000140c783bc;
        fVar14 = local_178 * local_178 + fVar26 + fStack368 * fStack368;
        _local_108 = CONCAT412(uVar30,CONCAT48(uVar29,CONCAT44(uVar28,local_108._0_4_)));
        auVar12 = rsqrtss(CONCAT412(fVar26,CONCAT48(fVar26,CONCAT44(fVar26,fVar26))),
                          CONCAT124(SUB1612(CONCAT412(fVar15 * fVar15,
                                                      CONCAT48(fStack368 * fStack368,
                                                               CONCAT44(fVar26,local_178 * local_178)))
                                                    >> 0x20,0),fVar14));
        fVar26 = SUB164(auVar12,0);
        fVar26 = (fVar21 - fVar14 * fVar26 * fVar26) * local_108._0_4_ * fVar26;
        if (fVar26 <= 0.0) {
            fVar26 = 0.0;
        }
        local_178 = fVar26 * local_178;
        fStack372 = fVar26 * fStack372;
        fStack368 = fVar26 * fStack368;
        local_f8 = (undefined **)CONCAT44(fStack372,local_178);
        uStack240 = CONCAT44(fVar26 * fVar15,fStack368);
        if ((fVar35 < (float)((uint)local_178 & uVar20)) || (fVar35 < (float)((uint)fStack368 & uVar20))
                ) {
            afStack444[1] = *(float *)(param_1 + 0x3c) * local_108._0_4_;
            FUN_1408fe3d0();
            fVar15 = extraout_XMM0_Da_02;
            FUN_1408fc950();
            fVar14 = extraout_XMM0_Da_03;
            FUN_1408fe3d0();
            fVar35 = extraout_XMM0_Da_04;
            FUN_1408fc950();
            fVar22 = extraout_XMM0_Da_05;
            FUN_1408fe3d0();
            fVar26 = extraout_XMM0_Da_06;
            FUN_1408fc950();
            afStack444[1] = fVar14 * extraout_XMM0_Da_07 * fVar35 + fVar15 * fVar26 * fVar22;
            afStack444[2] = fVar14 * fVar26 * fVar22 - fVar15 * extraout_XMM0_Da_07 * fVar35;
            afStack444[3] = fVar15 * extraout_XMM0_Da_07 * fVar22 - fVar14 * fVar26 * fVar35;
            afStack444[4] = fVar15 * fVar26 * fVar35 + fVar14 * extraout_XMM0_Da_07 * fVar22;
            fVar26 = afStack444[2] * 2.0;
            fStack292 = afStack444[4] * afStack444[1] * 2.0;
            local_128 = afStack444[1] * 0.0 + afStack444[4] * fVar26;
            local_140 = (ulonglong)(uint)(afStack444[1] * 0.0 - afStack444[4] * fVar26);
            fVar14 = afStack444[2] * 0.0 + fStack292;
            fVar15 = afStack444[1] * fVar26 - afStack444[4] * 0.0;
            uStack304 = (ulonglong)(uint)fVar14;
            local_148 = (undefined **)
                    CONCAT44(afStack444[1] * fVar26 + afStack444[4] * 0.0,
                             (fVar31 - afStack444[2] * fVar26) - 0.0);
            fVar17 = fVar31 - afStack444[1] * afStack444[1] * 2.0;
            fStack292 = afStack444[2] * 0.0 - fStack292;
            fVar35 = fVar17 - 0.0;
            fVar22 = 0.0;
            fVar23 = 0.0;
            fVar24 = 0.0;
            fVar25 = 0.0;
            local_138 = (LPVOID)CONCAT44(fVar35,fVar15);
            uStack288 = (ulonglong)(uint)(fVar17 - afStack444[2] * fVar26);
            local_118 = 0.0;
            fStack276 = 0.0;
            fStack272 = 0.0;
            fStack268 = 1.0;
            fVar26 = fStack368 * fVar35 - fStack372 * fVar14;
            fVar14 = local_178 * fVar14 - fStack368 * fVar15;
            fVar17 = fStack372 * fVar15 - local_178 * fVar35;
            fVar18 = fStack364 * 0.0 - fStack364 * 0.0;
            fVar35 = fVar14 * fVar14;
            fVar15 = fVar26 * fVar26 + fVar35 + fVar17 * fVar17;
            auVar12 = rsqrtss(CONCAT412(fVar35,CONCAT48(fVar35,CONCAT44(fVar35,fVar35))),
                              CONCAT124(SUB1612(CONCAT412(fVar18 * fVar18,
                                                          CONCAT48(fVar17 * fVar17,
                                                                   CONCAT44(fVar35,fVar26 * fVar26))) >>
                                                                                                      0x20,0),fVar15));
            fStack400 = SUB164(auVar12,0);
            fStack400 = (fVar21 - fVar15 * fStack400 * fStack400) * local_108._0_4_ * fStack400;
            if (fStack400 <= 0.0) {
                fStack400 = 0.0;
            }
            fVar26 = fStack400 * fVar26;
            fVar14 = fStack400 * fVar14;
            local_198 = CONCAT44(fVar14,fVar26);
            fStack400 = fStack400 * fVar17;
            fVar15 = fStack400 * fStack372 - fVar14 * fStack368;
            fVar35 = fVar26 * fStack368 - fStack400 * local_178;
            fVar14 = fVar14 * local_178 - fVar26 * fStack372;
            auVar16 = CONCAT48(fVar14,CONCAT44(fVar35,fVar15));
            fVar17 = fStack396 * fStack364 - fStack396 * fStack364;
            fVar35 = fVar35 * fVar35;
            uVar27 = 0x80000000;
            fVar26 = fVar15 * fVar15 + fVar35 + fVar14 * fVar14;
            auVar12 = rsqrtss(CONCAT412(fVar35,CONCAT48(fVar35,CONCAT44(fVar35,fVar35))),
                              CONCAT124(SUB1612(CONCAT412(fVar17 * fVar17,
                                                          CONCAT48(fVar14 * fVar14,
                                                                   CONCAT44(fVar35,fVar15 * fVar15))) >>
                                                                                                      0x20,0),fVar26));
            fVar35 = SUB164(auVar12,0);
            local_108._0_4_ = (fVar21 - fVar26 * fVar35 * fVar35) * local_108._0_4_;
            fVar26 = local_1c8._0_4_;
            uStack288._0_4_ = fStack448;
        }
        else {
            FUN_1408fc950();
            uVar10 = extraout_XMM0_Qa;
            FUN_1408fe3d0();
            fStack400 = (float)(extraout_XMM0_Da_01 ^ uVar27);
            local_198 = uVar10 & 0xffffffff;
            fVar14 = fStack400 * fStack372 - fStack368 * 0.0;
            fVar35 = (float)local_198 * fStack368 - fStack400 * local_178;
            fVar15 = local_178 * 0.0 - (float)local_198 * fStack372;
            auVar16 = CONCAT48(fVar15,CONCAT44(fVar35,fVar14));
            fVar17 = fStack396 * fStack364 - fStack396 * fStack364;
            fVar35 = fVar35 * fVar35;
            fVar26 = fVar14 * fVar14 + fVar35 + fVar15 * fVar15;
            auVar12 = rsqrtss(CONCAT412(fVar35,CONCAT48(fVar35,CONCAT44(fVar35,fVar35))),
                              CONCAT124(SUB1612(CONCAT412(fVar17 * fVar17,
                                                          CONCAT48(fVar15 * fVar15,
                                                                   CONCAT44(fVar35,fVar14 * fVar14))) >>
                                                                                                      0x20,0),fVar26));
            fVar35 = SUB164(auVar12,0);
            local_108._0_4_ = (fVar21 - fVar26 * fVar35 * fVar35) * local_108._0_4_;
            fVar26 = local_1c8._0_4_;
            uStack288._0_4_ = fStack448;
        }
        uStack356 = *(undefined4 *)(param_1 + 0x24);
        local_168 = *pfVar8;
        uStack352 = *(undefined4 *)(param_1 + 0x28);
        fStack384 = local_108._0_4_ * fVar35;
        if (local_108._0_4_ * fVar35 <= fVar22) {
            fStack384 = fVar22;
        }
        local_188 = CONCAT44(fStack384 * SUB124(auVar16 >> 0x20,0),fStack384 * SUB124(auVar16,0));
        fStack384 = fStack384 * SUB124(auVar16 >> 0x40,0);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
        (**(code **)(*plVar1 + 0x48))(plVar1,&local_198);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x10);
        (**(code **)(*plVar1 + 0x30))(plVar1,DAT_140c636a8,0);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 8) + 0x18);
        lVar2 = *plVar1;
        iVar5 = (**(code **)(lVar2 + 0x428))
                (plVar1,2,lVar2,afStack444 + 1,0,0,&local_148,param_1 + 0xe0);
        if (-1 < iVar5) {
            fVar26 = fVar22 - local_128;
            local_1c8._4_4_ = fVar23 - fStack292;
            uStack288._0_4_ = fVar24 - (float)uStack288;
            afStack444[0] = fVar25 - uStack288._4_4_;
            *pfVar8 = local_118;
            *(float *)(param_1 + 0x24) = fStack276;
            *(float *)(param_1 + 0x28) = fStack272;
            *(float *)(param_1 + 0x2c) = fStack268;
            _local_1c8 = CONCAT412(afStack444[0],
                                   CONCAT48((float)uStack288,CONCAT44(local_1c8._4_4_,fVar26)));
            *pfVar7 = local_118 + fVar26;
            *(float *)(param_1 + 0x44) = fStack276 + local_1c8._4_4_;
            *(float *)(param_1 + 0x48) = fStack272 + (float)uStack288;
            *(float *)(param_1 + 0x4c) = fStack268 + afStack444[0];
        }
    }
    if ((*(byte *)(param_1 + 0x2ac) & 2) == 0) {
        afStack444[1] = *pfVar8;
        afStack444[2] = *(float *)(param_1 + 0x24);
        afStack444[3] = *(float *)(param_1 + 0x28);
        afStack444[4] = *(float *)(param_1 + 0x2c);
    }
    else {
        _local_1a8 = _local_1a8 & (undefined  [16])0xffffffffffffffff;
        local_148 = (undefined **)0x4015;
        local_108 = CONCAT44((*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x44)) * 1.25 +
                             *(float *)(param_1 + 0x44),(*pfVar8 - *pfVar7) * 1.25 + *pfVar7);
        _local_108 = CONCAT48((*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x48)) * 1.25 +
                              *(float *)(param_1 + 0x48),local_108);
        _local_108 = CONCAT412((*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x4c)) * 1.25 +
                               *(float *)(param_1 + 0x4c),_local_108);
        local_140 = local_140 & 0xffffffff00000000;
        local_138 = (LPVOID)0x0;
        uStack304 = 0;
        local_128 = 0.0;
        uStack288 = 0;
        afStack444[1] = 0.0;
        afStack444[2] = 1.0;
        iVar5 = (**(code **)(*param_2 + 0x1a8))
                (param_2,pfVar7,local_108,afStack444 + 1,local_1a8,&local_148);
        if (iVar5 == 0) {
            auVar12 = CONCAT412(uVar34,CONCAT48(uVar33,CONCAT44(uVar32,fVar31)));
        }
        else {
            (**(code **)(*local_1a8 + 0x10))();
            auVar12 = extraout_XMM0;
        }
        fVar35 = *(float *)(param_1 + 0x50);
        if (fVar35 <= SUB164(auVar12,0)) {
            auVar12 = CONCAT124(SUB1612(auVar12 >> 0x20,0),
                                (SUB164(auVar12,0) - fVar35) * local_158 + fVar35);
        }
        *(float *)(param_1 + 0x50) = SUB164(auVar12,0);
        fVar35 = SUB164(auVar12,0) * 0.8;
        afStack444[1] = fVar35 * (local_108._0_4_ - *pfVar7) + *pfVar7;
        afStack444[2] =
                fVar35 * (local_108._4_4_ - *(float *)(param_1 + 0x44)) + *(float *)(param_1 + 0x44);
        afStack444[3] = fVar35 * (fStack256 - *(float *)(param_1 + 0x48)) + *(float *)(param_1 + 0x48);
        afStack444[4] = fVar35 * (fStack252 - *(float *)(param_1 + 0x4c)) + *(float *)(param_1 + 0x4c);
        if (local_1a8 != (longlong *)0x0) {
            (**(code **)(*local_1a8 + 8))();
        }
    }
    fVar35 = fRam0000000140c7839c;
    uVar29 = uRam0000000140c78398;
    uVar28 = uRam0000000140c78394;
    auVar12 = _DAT_140c77870;
    if (_DAT_140c4a6c8 <
        fVar26 * fVar26 + local_1c8._4_4_ * local_1c8._4_4_ + (float)uStack288 * (float)uStack288) {
        if ((local_1c8._0_4_ == 0.0) && (fStack448 == 0.0)) {
            *(int *)(param_1 + 0xc0) = SUB164(_DAT_140c77870,0);
            *(int *)(param_1 + 0xc4) = SUB164(auVar12 >> 0x20,0);
            *(int *)(param_1 + 200) = SUB164(auVar12 >> 0x40,0);
            auVar12 = ZEXT416((uint)(0.0 - _DAT_140c77880)) & (undefined  [16])0xffffffffffffffff;
            fVar35 = 0.0 - fRam0000000140c77884;
            fVar21 = SUB164(auVar12 >> 0x40,0) - fRam0000000140c77888;
            *(int *)(param_1 + 0xb0) = SUB164(auVar12,0);
            *(float *)(param_1 + 0xb4) = fVar35;
            *(float *)(param_1 + 0xb8) = fVar21;
            fVar21 = fRam0000000140c77868;
            fVar35 = fRam0000000140c77864;
            *(float *)(param_1 + 0xa0) = _DAT_140c77860;
            *(float *)(param_1 + 0xa4) = fVar35;
            *(float *)(param_1 + 0xa8) = fVar21;
        }
        else {
            _local_1a8 = CONCAT412(afStack444[0] * afStack444[0],
                                   CONCAT48((float)uStack288 * (float)uStack288,
                                            CONCAT44(local_1c8._4_4_ * local_1c8._4_4_,fVar26 * fVar26)));
            uVar9 = (ulonglong)(fVar26 * fVar26 < local_1c8._4_4_ * local_1c8._4_4_);
            uVar10 = uVar9;
            if (*(float *)(local_1a8 + uVar9 * 4) <= 0.0 && *(float *)(local_1a8 + uVar9 * 4) != 0.0) {
                uVar10 = uVar11;
            }
            auVar12 = ZEXT416((uint)(*(float *)((longlong)&uStack416 + ((1 - uVar9) + uVar10) * -4 + 4) +
                                     *(float *)(local_1a8 + (1 - uVar9) * 4))) &
                      (undefined  [16])0xffffffffffffffff;
            fVar35 = SUB164(auVar12,0) + *(float *)(local_1a8 + uVar10 * 4);
            auVar12 = CONCAT124(SUB1612(auVar12 >> 0x20,0),fVar35);
            if (fVar35 <= DAT_140c3d7d8) {
                _local_1a8 = ZEXT812(0);
            }
            else {
                auVar12 = sqrtps(auVar12,auVar12);
                fVar35 = fVar31 / SUB164(auVar12,0);
                local_1a8 = (longlong *)CONCAT44(local_1c8._4_4_ * fVar35,local_1c8._0_4_ * fVar35);
                _local_1a8 = CONCAT48(fStack448 * fVar35,local_1a8);
            }
            fVar26 = 0.0;
            fVar35 = 0.0;
            *(float *)(param_1 + 0xc0) = 0.0 - SUB124(_local_1a8,0);
            *(float *)(param_1 + 0xc4) = 0.0 - SUB124(_local_1a8 >> 0x20,0);
            *(float *)(param_1 + 200) = 0.0 - SUB124(_local_1a8 >> 0x40,0);
            fVar21 = *(float *)(param_1 + 200) * *(float *)(param_1 + 0x2c4) -
                     *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x2c8);
            fVar14 = *(float *)(param_1 + 0xc0) * *(float *)(param_1 + 0x2c8) -
                     *(float *)(param_1 + 200) * *(float *)(param_1 + 0x2c0);
            fVar15 = *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x2c0) -
                     *(float *)(param_1 + 0xc0) * *(float *)(param_1 + 0x2c4);
            fVar23 = *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0x2cc) -
                     *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0x2cc);
            local_1a8 = (longlong *)CONCAT44(fVar14,fVar21);
            _local_1a8 = CONCAT48(fVar15,local_1a8);
            _local_1a8 = CONCAT412(fVar23,_local_1a8);
            fVar22 = fVar15 * fVar15;
            local_1c8 = CONCAT44(fVar14 * fVar14,fVar21 * fVar21);
            _local_1c8 = CONCAT48(fVar22,local_1c8);
            _local_1c8 = CONCAT412(fVar23 * fVar23,_local_1c8);
            uVar9 = (ulonglong)(fVar21 * fVar21 < fVar14 * fVar14);
            uVar10 = uVar9;
            if (*(float *)(local_1c8 + uVar9 * 4) <= fVar22 && fVar22 != *(float *)(local_1c8 + uVar9 * 4)
                    ) {
                uVar10 = uVar11;
            }
            auVar12 = ZEXT416((uint)(afStack444[-((1 - uVar9) + uVar10)] +
                                     *(float *)(local_1c8 + (1 - uVar9) * 4))) &
                      (undefined  [16])0xffffffffffffffff;
            fVar22 = SUB164(auVar12,0) + *(float *)(local_1c8 + uVar10 * 4);
            auVar12 = CONCAT124(SUB1612(auVar12 >> 0x20,0),fVar22);
            if (fVar22 <= DAT_140c3d7d8) {
                fVar21 = 0.0;
            }
            else {
                auVar12 = sqrtps(auVar12,auVar12);
                fVar31 = fVar31 / SUB164(auVar12,0);
                fVar21 = fVar21 * fVar31;
                fVar35 = fVar14 * fVar31;
                fVar26 = fVar15 * fVar31;
            }
            *(float *)(param_1 + 0xa0) = fVar21;
            *(float *)(param_1 + 0xa4) = fVar35;
            *(float *)(param_1 + 0xa8) = fVar26;
            fVar35 = *(float *)(param_1 + 0xa0);
            *(float *)(param_1 + 0xb0) =
                    *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xc4) -
                    *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 200);
            *(float *)(param_1 + 0xb4) =
                    fVar35 * *(float *)(param_1 + 200) -
                    *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xc0);
            *(float *)(param_1 + 0xb8) =
                    *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xc0) -
                    fVar35 * *(float *)(param_1 + 0xc4);
        }
        *(float *)(param_1 + 0xd0) = afStack444[1];
        *(float *)(param_1 + 0xd4) = afStack444[2];
        *(float *)(param_1 + 0xd8) = afStack444[3];
        *(float *)(param_1 + 0x60) = *(float *)(param_1 + 0xa0);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xb0);
        *(undefined4 *)(param_1 + 0x6c) = 0;
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xc0);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xa4);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xb4);
        *(undefined4 *)(param_1 + 0x7c) = 0;
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xc4);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xa8);
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xb8);
        *(undefined4 *)(param_1 + 0x8c) = 0;
        *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 200);
        fVar35 = *(float *)(param_1 + 0xa0) * *(float *)(param_1 + 0xd0);
        fVar21 = *(float *)(param_1 + 0xa4) * *(float *)(param_1 + 0xd4);
        fVar26 = *(float *)(param_1 + 0xa8) * *(float *)(param_1 + 0xd8);
        local_1c8 = CONCAT44(fVar21,fVar35);
        _local_1c8 = CONCAT48(fVar26,local_1c8);
        _local_1c8 = CONCAT412(*(float *)(param_1 + 0xac) * *(float *)(param_1 + 0xdc),_local_1c8);
        uVar9 = (ulonglong)(fVar35 < fVar21);
        uVar10 = uVar9;
        if (*(float *)(local_1c8 + uVar9 * 4) <= fVar26 && fVar26 != *(float *)(local_1c8 + uVar9 * 4))
        {
            uVar10 = uVar11;
        }
        *(uint *)(param_1 + 0x90) =
                (uint)(afStack444[-((1 - uVar9) + uVar10)] + *(float *)(local_1c8 + (1 - uVar9) * 4) +
                       *(float *)(local_1c8 + uVar10 * 4)) ^ uVar27;
        fVar35 = *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0xb0);
        fVar21 = *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xb4);
        fVar26 = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 0xb8);
        local_1c8 = CONCAT44(fVar21,fVar35);
        _local_1c8 = CONCAT48(fVar26,local_1c8);
        _local_1c8 = CONCAT412(*(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xbc),_local_1c8);
        uVar9 = (ulonglong)(fVar35 < fVar21);
        uVar10 = uVar9;
        if (*(float *)(local_1c8 + uVar9 * 4) <= fVar26 && fVar26 != *(float *)(local_1c8 + uVar9 * 4))
        {
            uVar10 = uVar11;
        }
        *(uint *)(param_1 + 0x94) =
                (uint)(afStack444[-((1 - uVar9) + uVar10)] + *(float *)(local_1c8 + (1 - uVar9) * 4) +
                       *(float *)(local_1c8 + uVar10 * 4)) ^ uVar27;
        fVar35 = *(float *)(param_1 + 0xd0) * *(float *)(param_1 + 0xc0);
        fVar21 = *(float *)(param_1 + 0xd4) * *(float *)(param_1 + 0xc4);
        fVar26 = *(float *)(param_1 + 0xd8) * *(float *)(param_1 + 200);
        local_1c8 = CONCAT44(fVar21,fVar35);
        _local_1c8 = CONCAT48(fVar26,local_1c8);
        _local_1c8 = CONCAT412(*(float *)(param_1 + 0xdc) * *(float *)(param_1 + 0xcc),_local_1c8);
        uVar9 = (ulonglong)(fVar35 < fVar21);
        fVar21 = *(float *)(local_1c8 + uVar9 * 4);
        fVar35 = *(float *)(local_1c8 + uVar9 * 4);
        *(undefined4 *)(param_1 + 0x9c) = 0x3f800000;
        uVar10 = uVar9;
        if (fVar35 <= fVar26 && fVar26 != fVar21) {
            uVar10 = uVar11;
        }
        *(uint *)(param_1 + 0x98) =
                (uint)(afStack444[-((1 - uVar9) + uVar10)] + *(float *)(local_1c8 + (1 - uVar9) * 4) +
                       *(float *)(local_1c8 + uVar10 * 4)) ^ uVar27;
    }
    else {
        *(undefined4 *)(param_1 + 0xa0) = _DAT_140c78390;
        *(undefined4 *)(param_1 + 0xa4) = uVar28;
        *(undefined4 *)(param_1 + 0xa8) = uVar29;
        *(float *)(param_1 + 0xac) = fVar35;
        uVar30 = uRam0000000140c783ac;
        uVar29 = uRam0000000140c783a8;
        uVar28 = uRam0000000140c783a4;
        *(undefined4 *)(param_1 + 0xb0) = _DAT_140c783a0;
        *(undefined4 *)(param_1 + 0xb4) = uVar28;
        *(undefined4 *)(param_1 + 0xb8) = uVar29;
        *(undefined4 *)(param_1 + 0xbc) = uVar30;
        fVar35 = fRam0000000140c783bc;
        uVar29 = uRam0000000140c783b8;
        uVar28 = uRam0000000140c783b4;
        *(undefined4 *)(param_1 + 0xc0) = _DAT_140c783b0;
        *(undefined4 *)(param_1 + 0xc4) = uVar28;
        *(undefined4 *)(param_1 + 200) = uVar29;
        *(float *)(param_1 + 0xcc) = fVar35;
        uVar30 = uRam0000000140c783cc;
        uVar29 = uRam0000000140c783c8;
        uVar28 = uRam0000000140c783c4;
        *(undefined4 *)(param_1 + 0xd0) = _DAT_140c783c0;
        *(undefined4 *)(param_1 + 0xd4) = uVar28;
        *(undefined4 *)(param_1 + 0xd8) = uVar29;
        *(undefined4 *)(param_1 + 0xdc) = uVar30;
        *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0xa0);
        *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0xa4);
        *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0xa8);
        *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0xac);
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xb0);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xb4);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0xb8);
        *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0xbc);
        *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0xc0);
        *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0xc4);
        *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 200);
        *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xcc);
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xd0);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xd4);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0xd8);
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xdc);
    }
    iVar5 = FUN_1405cfb60(param_1 + 0xa0);
    if (iVar5 == 0) {
        local_140 = 0;
        local_148 = &PTR_LAB_140b5e648;
        local_138 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_148);
        local_f8 = local_148;
        _local_1a8 = CONCAT88(uStack416,0x141e1cbd8);
        local_e8 = local_138;
        uStack240 = local_140;
        iVar5 = FUN_1401971e0(&DAT_140c8afb0,0x16,local_1a8,&local_f8);
        local_148 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_138);
        if (iVar5 != 0) {
            DebugBreak();
        }
    }
    return 0;
}



undefined8 * FUN_1405d65a0(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b6e240;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xb] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0x544e5645;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
    *(undefined4 *)(param_1 + 0x21) = 0x544e5645;
    return param_1;
}



void FUN_1405d6680(undefined8 *param_1)

{
    *param_1 = &PTR_LAB_140b6e240;
    if ((longlong *)param_1[10] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[10] + 8))();
    }
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 *)(param_1[6] + 0x28) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[7] = param_1[8];
    }
    if (param_1[8] != 0) {
        *(undefined8 *)(param_1[8] + 0x38) = param_1[7];
    }
    param_1[7] = 0;
    param_1[8] = 0;
    FUN_140195d70(param_1 + 0x21);
    *(undefined4 *)(param_1 + 0x21) = 0;
    if ((undefined8 *)param_1[0x23] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x23] = param_1[0x24];
    }
    if ((undefined8 *)param_1[0x24] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x24] = param_1[0x23];
    }
    param_1[0x23] = 0;
    param_1[0x24] = 0;
    FUN_140195d70(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if ((undefined8 *)param_1[0x1a] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1a] = param_1[0x1b];
    }
    if ((undefined8 *)param_1[0x1b] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0x1b] = param_1[0x1a];
    }
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    if ((undefined8 *)param_1[7] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[7] = param_1[8];
    }
    if (param_1[8] != 0) {
        *(undefined8 *)(param_1[8] + 0x38) = param_1[7];
    }
    param_1[7] = 0;
    param_1[8] = 0;
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[5] = param_1[6];
    }
    if (param_1[6] != 0) {
        *(undefined8 *)(param_1[6] + 0x28) = param_1[5];
    }
    param_1[5] = 0;
    param_1[6] = 0;
    if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[3] = param_1[4];
    }
    if (param_1[4] != 0) {
        *(undefined8 *)(param_1[4] + 0x18) = param_1[3];
    }
    param_1[3] = 0;
    param_1[4] = 0;
    if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(undefined8 *)(param_1[2] + 8) = param_1[1];
    }
    param_1[2] = 0;
    param_1[1] = 0;
    return;
}



undefined8 FUN_1405d6880(longlong *param_1,longlong *param_2,longlong **param_3)

{
    longlong **pplVar1;
    longlong **pplVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    uint uVar7;
    uint uVar8;
    undefined4 local_28 [2];
    longlong *local_20;
    undefined *local_18;
    undefined8 local_10;

    if ((param_3 != (longlong **)0x0) && (param_2 != (longlong *)0x0)) {
        lVar6 = FUN_1404e1c50(param_1,*(undefined4 *)param_2,*(undefined8 *)(DAT_140c65898 + 0x78));
        param_1[0x16] = lVar6;
        if (lVar6 != 0) {
            pplVar2 = param_3 + 1;
            param_1[0xc] = *param_2;
            param_1[0xd] = param_2[1];
            param_1[0xe] = param_2[2];
            param_1[0xf] = param_2[3];
            param_1[0x10] = param_2[4];
            param_1[0x11] = param_2[5];
            param_1[0x12] = param_2[6];
            param_1[0x13] = param_2[7];
            param_1[0x14] = param_2[8];
            lVar6 = param_2[9];
            param_1[9] = (longlong)param_3;
            param_1[0x15] = lVar6;
            if (param_1[1] == 0) {
                param_1[1] = (longlong)pplVar2;
                pplVar1 = (longlong **)(param_1 + 2);
                *pplVar1 = *pplVar2;
                *pplVar2 = param_1;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[1] = (longlong)pplVar1;
                }
            }
            if (param_1[3] == 0) {
                param_1[3] = (longlong)param_3;
                pplVar2 = (longlong **)(param_1 + 4);
                *pplVar2 = *param_3;
                *param_3 = param_1;
                if (*pplVar2 != (longlong *)0x0) {
                    (*pplVar2)[3] = (longlong)pplVar2;
                }
            }
            lVar6 = *(longlong *)(param_1[9] + 0x38);
            param_1[10] = lVar6;
            *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 1);
            lVar3 = DAT_140c65898;
            *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar6 + 0x154);
            *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_1[9] + 0x40);
            lVar6 = FUN_1403d90d0(lVar3);
            if ((lVar6 != 0) && (pplVar2 = (longlong **)(lVar6 + 0x15d8), param_1[7] == 0)) {
                param_1[7] = (longlong)pplVar2;
                pplVar1 = (longlong **)(param_1 + 8);
                *pplVar1 = *pplVar2;
                *pplVar2 = param_1;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[7] = (longlong)pplVar1;
                }
            }
            lVar6 = FUN_1403d90d0(DAT_140c65898);
            if ((lVar6 != 0) && (pplVar2 = (longlong **)(lVar6 + 0x15d0), param_1[5] == 0)) {
                param_1[5] = (longlong)pplVar2;
                pplVar1 = (longlong **)(param_1 + 6);
                *pplVar1 = *pplVar2;
                *pplVar2 = param_1;
                if (*pplVar1 != (longlong *)0x0) {
                    (*pplVar1)[5] = (longlong)pplVar1;
                }
            }
            if ((*(uint *)(*(longlong *)(*(longlong *)(param_1[10] + 0x138) + 0x70) + 0x108) & 0x10000000)
                == 0) {
                uVar8 = *(uint *)(param_1 + 0x17);
                iVar5 = (**(code **)(*param_1 + 0x48))();
                *(uint *)((longlong)param_1 + 0xbc) = iVar5 + uVar8;
            }
            else {
                uVar4 = (**(code **)(*param_1 + 0x48))();
                uVar8 = *(uint *)(param_1 + 0x17);
                uVar7 = uVar8;
                if (uVar8 < uVar4) {
                    uVar7 = uVar4;
                }
                *(uint *)((longlong)param_1 + 0xbc) = uVar7;
            }
            iVar5 = *(int *)((longlong)param_2 + 0xc);
            if (iVar5 == 0) {
                iVar5 = *(int *)((longlong)param_1 + 0xbc);
            }
            *(int *)((longlong)param_1 + 0xbc) = iVar5;
            if (param_1[0x16] != 0) {
                if ((*(byte *)(param_1[0x16] + 0x3c) & 2) != 0) {
                    iVar5 = -1;
                }
                *(int *)((longlong)param_1 + 0xbc) = iVar5;
            }
            if (uVar8 == 0) {
                (**(code **)(*param_1 + 0x10))(param_1);
            }
            if ((param_1[0x16] == 0) || ((*(byte *)(param_1[0x16] + 0x3c) & 2) == 0)) {
                local_18 = &LAB_140252318;
                local_28[0] = 0;
                local_10 = 0;
                local_20 = param_1;
                FUN_140195960(param_1 + 0x18,*(undefined4 *)((longlong)param_1 + 0xbc),local_28,4);
            }
            return 0;
        }
    }
    return 0x80004005;
}



void FUN_1405d6b30(longlong *param_1)

{
    (**(code **)(*(longlong *)param_1[10] + 8))();
    if ((longlong *)param_1[1] != (longlong *)0x0) {
        *(longlong *)param_1[1] = param_1[2];
    }
    if (param_1[2] != 0) {
        *(longlong *)(param_1[2] + 8) = param_1[1];
    }
    param_1[1] = 0;
    param_1[2] = 0;
    // WARNING: Could not recover jumptable at 0x0001405d6b79. Too many branches
    // WARNING: Treating indirect jump as call
    (**(code **)(*param_1 + 0x40))(param_1);
    return;
}



void FUN_1405d6b80(longlong param_1)

{
    undefined4 local_28 [2];
    longlong local_20;
    undefined *local_18;
    undefined8 local_10;

    (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
    if (*(longlong *)(param_1 + 0xd0) != 0) {
        FUN_140195d70();
    }
    if ((*(longlong *)(param_1 + 0xb0) == 0) ||
        ((*(byte *)(*(longlong *)(param_1 + 0xb0) + 0x3c) & 2) == 0)) {
        local_28[0] = 0;
        local_10 = 0;
        local_18 = &LAB_140252318;
        local_20 = param_1;
        FUN_140195960(param_1 + 0xc0,*(undefined4 *)(param_1 + 0xbc),local_28,4);
    }
    return;
}



undefined8 FUN_1405d77a0(longlong *param_1,longlong *param_2,longlong param_3)

{
    int iVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    longlong lVar7;
    undefined8 uVar8;
    int iVar9;

    lVar7 = *(longlong *)(param_3 + 0x38);
    param_1[9] = param_3;
    param_1[10] = lVar7;
    param_1[0xc] = *param_2;
    param_1[0xd] = param_2[1];
    param_1[0xe] = param_2[2];
    param_1[0xf] = param_2[3];
    param_1[0x10] = param_2[4];
    param_1[0x11] = param_2[5];
    param_1[0x12] = param_2[6];
    param_1[0x13] = param_2[7];
    param_1[0x14] = param_2[8];
    param_1[0x15] = param_2[9];
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(lVar7 + 0x154);
    *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_3 + 0x40);
    lVar7 = FUN_1404e1c50(param_1,*(undefined4 *)(param_1 + 0xc),*(undefined8 *)(DAT_140c65898 + 0x78)
    );
    param_1[0x16] = lVar7;
    if (lVar7 == 0) {
        return 0x80004005;
    }
    FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0x5c));
    iVar5 = 0;
    iVar1 = *(int *)(param_1 + 0xd);
    iVar2 = *(int *)(param_2 + 2);
    lVar7 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xb));
    if ((*(byte *)(param_1[0x16] + 0x3c) & 1) == 0) {
        if (lVar7 != 0) {
            plVar3 = *(longlong **)(lVar7 + 0x16e8);
            uVar6 = FUN_140470540(lVar7,*(undefined4 *)(param_1[10] + 0x58));
            if (plVar3 != (longlong *)0x0) {
                iVar5 = (**(code **)(*plVar3 + 0x198))(plVar3,uVar6);
                if (iVar5 != 0) {
                    iVar5 = (**(code **)(*plVar3 + 0x1b0))(plVar3,uVar6,*(undefined4 *)(param_1[10] + 0x54),2)
                            ;
                    if (iVar5 != -1) {
                        *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + iVar5;
                    }
                }
            }
        }
    }
    else {
        lVar7 = *(longlong *)(*(longlong *)(param_1[10] + 0x138) + 0x70);
        iVar9 = *(int *)(lVar7 + 0x38);
        if ((iVar9 != 0) || (iVar9 = *(int *)(lVar7 + 0x54), iVar9 != 0)) {
            iVar4 = FUN_140543460(param_1[10],*(undefined4 *)((longlong)param_1 + 0x5c));
            *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + iVar4;
            lVar7 = FUN_140237680(iVar9);
            if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x4c) != 0) {
                    iVar5 = FUN_140542e70(param_1[10],0,*(int *)(lVar7 + 0x4c),0);
                }
                *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + iVar5;
            }
        }
    }
    if (iVar2 == 1) {
        (**(code **)(*param_1 + 8))
                (param_1,param_2 + 3,*(int *)(param_1 + 0x17) + *(int *)(param_2 + 1));
    }
    uVar8 = FUN_1405d6880(param_1,param_2,param_3);
    if (-1 < (int)uVar8) {
        if (((iVar2 != 1) || (iVar1 != 0)) || (*(int *)(param_1[0x16] + 0x24) != 0)) {
            FUN_140195d70(param_1 + 0x18);
        }
        uVar8 = 0;
    }
    return uVar8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint * FUN_1405d8110(undefined8 param_1,longlong param_2,longlong param_3)

{
    float fVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;
    uint *puVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    uint *puVar9;
    uint *puVar10;
    uint uVar11;
    uint *puVar12;
    float fVar13;

    lVar2 = *(longlong *)(param_3 + 0xd08);
    puVar7 = (uint *)0x0;
    if (lVar2 != 0) {
        fVar13 = (float)FUN_14047a940();
        fVar1 = *(float *)(lVar2 + 0x8c);
        if (DAT_140c63838 == (code *)0x0) {
            uVar3 = 0;
            if ((_DAT_140c641a0 == 0) && (iVar4 = FUN_1401ff740(), -1 < iVar4)) {
                uVar3 = (**(code **)(*DAT_140c64a58 + 0x28))();
            }
        }
        else {
            uVar3 = (*DAT_140c63838)();
        }
        puVar9 = puVar7;
        puVar8 = puVar7;
        puVar10 = puVar7;
        puVar12 = puVar7;
        if (uVar3 != 0) {
            do {
                if (DAT_140c63848 == (code *)0x0) {
                    puVar5 = puVar7;
                    if (_DAT_140c641a0 == 0) {
                        iVar4 = FUN_1401ff740();
                        if (iVar4 < 0) {
                            puVar5 = (uint *)0x0;
                        }
                        else {
                            puVar5 = (uint *)(**(code **)(*DAT_140c64a58 + 0x20))();
                        }
                    }
                }
                else {
                    puVar5 = (uint *)(*DAT_140c63848)();
                }
                uVar11 = (uint)(longlong)(fVar13 * fVar1);
                puVar9 = puVar8;
                if ((((puVar5[3] <= uVar11) && (uVar11 < puVar5[4] || uVar11 == puVar5[4])) &&
                     ((puVar5[2] >> (*(uint *)(param_2 + 0x24) & 0x1f) & 1) != 0)) &&
                    (((puVar5[6] >> (*(uint *)(param_3 + 0x1088) & 0x1f) & 1) != 0 &&
                      (*(uint *)(lVar2 + 0x84) == puVar5[5])))) {
                    puVar6 = (uint *)FUN_14018db00(puVar8,(longlong)puVar12 + 1,8);
                    *(uint **)(puVar6 + (longlong)puVar12 * 2) = puVar5;
                    if ((puVar8 != puVar6) && (FUN_1407db590(), puVar9 = puVar6, puVar8 != (uint *)0x0)) {
                        (**(code **)(*(longlong *)(puVar8 + -4) + 8))();
                    }
                    puVar12 = (uint *)((longlong)puVar12 + 1);
                }
                uVar11 = (int)puVar10 + 1;
                puVar8 = puVar9;
                puVar10 = (uint *)(ulonglong)uVar11;
            } while (uVar11 < uVar3);
        }
        uVar3 = 0xffffffff;
        puVar8 = puVar7;
        puVar10 = puVar7;
        if (puVar12 != (uint *)0x0) {
            do {
                puVar5 = *(uint **)(puVar9 + (longlong)puVar7 * 2);
                if (((uint)puVar10 <= puVar5[1]) && (*puVar5 < uVar3)) {
                    puVar10 = (uint *)(ulonglong)puVar5[1];
                    puVar8 = puVar5;
                    uVar3 = *puVar5;
                }
                puVar7 = (uint *)(ulonglong)((int)puVar7 + 1);
            } while (puVar7 < puVar12);
        }
        if (puVar9 != (uint *)0x0) {
            (**(code **)(*(longlong *)(puVar9 + -4) + 8))(puVar9 + -4);
        }
        return puVar8;
    }
    return (uint *)0x0;
}



undefined8 FUN_1405d86a0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 != (undefined4 *)0x0) {
        lVar1 = FUN_1404e1c50(param_1,*param_2,*(undefined8 *)(DAT_140c65898 + 0x78));
        *(longlong *)(param_1 + 0xb0) = lVar1;
        if (lVar1 != 0) {
            *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar1 + 0x40);
            *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar1 + 0x48);
            uVar2 = FUN_1405d6880(param_1,param_2,param_3);
            return uVar2;
        }
    }
    return 0x80004005;
}



void FUN_1405d8730(longlong *param_1)

{
    int iVar1;
    uint uVar2;
    undefined4 uVar3;
    longlong lVar4;
    uint *puVar5;
    longlong lVar6;
    uint uVar7;
    uint *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined8 uVar12;
    longlong lVar13;
    undefined8 *puVar14;
    uint *puVar15;
    ulonglong uVar16;
    longlong *plVar17;
    longlong lVar18;
    undefined auStack168 [32];
    ulonglong uStack136;
    longlong *plStack128;
    undefined4 uStack120;
    ulonglong uStack104;
    int iStack96;
    longlong lStack88;
    undefined8 uStack80;
    undefined4 uStack72;
    ulonglong uStack64;

    lVar13 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0x5c));
    if (lVar13 == 0) {
        return;
    }
    if (param_1 != (longlong *)0x0) {
        uStack64 = DAT_140c0f7b0 ^ (ulonglong)auStack168;
        iVar1 = *(int *)(param_1 + 0x2a);
        lVar18 = (longlong)iVar1;
        iStack96 = iVar1;
        if (((iVar1 < 0x1c) &&
             (lStack88 = *(longlong *)(DAT_140c65a08 + 0x28 + lVar18 * 8), lStack88 != 0)) &&
            (lVar4 = param_1[10], lVar4 != 0)) {
            uStack120 = *(undefined4 *)(lVar13 + 8);
            uVar7 = *(uint *)((longlong)param_1 + 100);
            uVar2 = *(uint *)(lVar4 + 0x5c);
            plStack128 = (longlong *)((ulonglong)plStack128 & 0xffffffff00000000 | (ulonglong)uVar7);
            uStack136 = uStack136 & 0xffffffff00000000 | (ulonglong)uVar2;
            FUN_1400035b0(0x33,3,0,(&PTR_u_Stun_140c38870)[lVar18]);
            uVar16 = *(ulonglong *)(lVar13 + 0x498);
            uStack104 = uVar16;
            uVar11 = *(ulonglong *)(uVar16 + 8);
            while (uVar11 != 0) {
                if (*(int *)(uVar11 + 0x20) < iVar1) {
                    uVar11 = *(ulonglong *)(uVar11 + 0x18);
                }
                else {
                    uStack104 = uVar11;
                    uVar11 = *(ulonglong *)(uVar11 + 0x10);
                }
            }
            if ((uStack104 == uVar16) || (iVar1 < *(int *)(uStack104 + 0x20))) {
                uStack104 = uVar16;
            }
            if (uStack104 != uVar16) {
                puVar15 = (uint *)0x0;
                puVar5 = (*(uint ***)(uStack104 + 0x28))[1];
                if (puVar5 != (uint *)0x0) {
                    puVar8 = **(uint ***)(uStack104 + 0x28);
                    LAB_14045d550:
                    if (*puVar8 != uVar7) goto code_r0x00014045d554;
                    FUN_1401c2f20();
                    puVar9 = (undefined8 *)FUN_14018b280();
                    puVar14 = (undefined8 *)0x0;
                    if (puVar9 != (undefined8 *)0x0) {
                        puVar9[1] = 0x1c;
                        puVar9[2] = 0;
                        puVar9[3] = 0;
                        puVar9[4] = 0;
                        *(undefined4 *)(puVar9 + 5) = 0;
                        *puVar9 = &PTR_LAB_140b66fc8;
                        puVar9[6] = 0;
                        puVar9[7] = 0;
                        puVar9[8] = 0;
                        puVar14 = puVar9;
                    }
                    *(int *)(puVar14 + 1) = iVar1;
                    *(uint *)(puVar14 + 3) = uVar2;
                    uVar3 = *(undefined4 *)((longlong)param_1 + 0xbc);
                    *(uint *)((longlong)puVar14 + 0x1c) = uVar7;
                    *(undefined4 *)(puVar14 + 5) = uVar3;
                    puVar14[4] = *(undefined8 *)(lVar4 + 0x138);
                    uStack72 = 0;
                    uStack80 = 0;
                    uVar7 = (**(code **)(*param_1 + 0x20))();
                    lVar4 = param_1[0x16];
                    uStack104 = uStack104 & 0xffffffff00000000 | (ulonglong)uVar7;
                    if (lVar4 != 0) {
                        *(undefined4 *)(puVar14 + 2) = *(undefined4 *)(lVar4 + 0x5c);
                        uStack80 = *(undefined8 *)(lVar4 + 0x50);
                        uStack72 = *(undefined4 *)(lVar4 + 0x58);
                    }
                    lVar18 = lVar18 + 0x2d;
                    lVar6 = *(longlong *)(lVar13 + 8 + lVar18 * 0x10);
                    lVar4 = lVar6 + 1;
                    lVar10 = FUN_14018db00(*(undefined8 *)(lVar13 + lVar18 * 0x10),lVar4,8);
                    *(undefined8 **)(lVar10 + lVar6 * 8) = puVar14;
                    lVar6 = *(longlong *)(lVar13 + lVar18 * 0x10);
                    if (lVar6 != lVar10) {
                        FUN_1407db590(lVar10,lVar6,*(longlong *)(lVar13 + 8 + lVar18 * 0x10) << 3);
                        lVar6 = *(longlong *)(lVar13 + lVar18 * 0x10);
                        if (lVar6 != 0) {
                            (**(code **)(*(longlong *)(lVar6 + -0x10) + 8))(lVar6 + -0x10);
                        }
                        *(longlong *)(lVar13 + lVar18 * 0x10) = lVar10;
                    }
                    *(longlong *)(lVar13 + 8 + lVar18 * 0x10) = lVar4;
                    FUN_14046c2c0();
                    lVar18 = lStack88;
                    plVar17 = puVar14 + 6;
                    uVar16 = 0;
                    do {
                        uVar11 = 0;
                        if (*(int *)(lVar18 + uVar16 * 4 + 0x2c) != 0) {
                            uVar11 = FUN_140248f00();
                        }
                        if (*(int *)((longlong)&uStack80 + uVar16 * 4) != 0) {
                            uVar11 = FUN_140248f00();
                        }
                        if ((uVar11 != 0) && (*plVar17 == 0)) {
                            uStack136 = 0;
                            plStack128 = plVar17;
                            FUN_140578770();
                        }
                        uVar11 = uStack104;
                        uVar16 = uVar16 + 1;
                        plVar17 = plVar17 + 1;
                    } while (uVar16 < 3);
                    FUN_1403d90d0(DAT_140c65898,uStack104 & 0xffffffff);
                    FUN_14045de60(lVar13,puVar14);
                    lVar18 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar13 + 0xc0));
                    iVar1 = iStack96;
                    if ((lVar18 != 0) && (*(int *)(lVar18 + 0x80) == 7)) {
                        FUN_1403d90d0(DAT_140c65898,uVar11 & 0xffffffff);
                        uVar12 = FUN_14047b6d0(lVar13);
                        FUN_14045de60(uVar12,puVar14);
                    }
                    uStack136 = uStack136 & 0xffffffff00000000 | (ulonglong)*(uint *)(lVar13 + 8);
                    FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ApplyCCState",&DAT_1409e9c14,iVar1)
                            ;
                    if ((iVar1 == 0x17) &&
                        (lVar18 = *(longlong *)(DAT_140c65898 + 0x78), lVar13 = FUN_14047dca0(lVar13),
                                lVar13 == lVar18)) {
                        uStack120 = 1;
                        plStack128 = (longlong *)((ulonglong)plStack128 & 0xffffffff00000000);
                        uStack136 = uStack136 & 0xffffffff00000000;
                        FUN_140437a10(DAT_140c658d8,0x183,0,0);
                    }
                    goto LAB_14045d58b;
                }
            }
            LAB_14045d560:
            FUN_14045d890(lVar13,iVar1,uVar7);
        }
        LAB_14045d58b:
        FUN_1407db4f0(uStack64 ^ (ulonglong)auStack168);
    }
    return;
    code_r0x00014045d554:
    puVar15 = (uint *)((longlong)puVar15 + 1);
    puVar8 = puVar8 + 1;
    if (puVar5 <= puVar15) goto LAB_14045d560;
    goto LAB_14045d550;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405d8770(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    float extraout_XMM0_Da;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;

    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c));
    fVar6 = 0.5;
    fVar5 = 1.0;
    if ((lVar2 != 0) && ((*(byte *)(param_1 + 0x154) & 2) == 0)) {
        uVar3 = *(uint *)(lVar2 + 0x3c);
        if (uVar3 == 0) {
            uVar3 = *(uint *)(lVar2 + 0x38);
        }
        fVar7 = *(float *)(lVar2 + 0xaec);
        fVar5 = *(float *)(lVar2 + 0x7c4);
        if ((DAT_140dc34f8 & 1) == 0) {
            DAT_140dc34f8 = DAT_140dc34f8 | 1;
            lVar2 = FUN_140200220();
            DAT_140dc34fc = fVar6;
            if (lVar2 != 0) {
                DAT_140dc34fc = *(float *)(lVar2 + 0x18);
            }
        }
        if ((DAT_140dc34f8 & 2) == 0) {
            DAT_140dc34f8 = DAT_140dc34f8 | 2;
            lVar2 = FUN_140200220();
            _DAT_140dc3500 = fVar6;
            if (lVar2 != 0) {
                _DAT_140dc3500 = *(float *)(lVar2 + 0x1c);
            }
        }
        if ((DAT_140dc34f8 & 4) == 0) {
            DAT_140dc34f8 = DAT_140dc34f8 | 4;
            lVar2 = FUN_140200220();
            DAT_140dc3504 = fVar6;
            if (lVar2 != 0) {
                DAT_140dc3504 = *(float *)(lVar2 + 0x20);
            }
        }
        if ((DAT_140dc34f8 & 8) == 0) {
            DAT_140dc34f8 = DAT_140dc34f8 | 8;
            lVar2 = FUN_140200220();
            DAT_140dc3508 = fVar6;
            if (lVar2 != 0) {
                DAT_140dc3508 = *(float *)(lVar2 + 0x24);
            }
        }
        if ((DAT_140dc34f8 & 0x10) == 0) {
            DAT_140dc34f8 = DAT_140dc34f8 | 0x10;
            lVar2 = FUN_140200220();
            if (lVar2 == 0) {
                DAT_140dc350c = 1;
            }
            else {
                DAT_140dc350c = *(int *)(lVar2 + 4);
            }
        }
        if ((DAT_140dc34f8 & 0x20) == 0) {
            DAT_140dc34f8 = DAT_140dc34f8 | 0x20;
            lVar2 = FUN_140200220();
            DAT_140dc3510 = 1;
            if (lVar2 != 0) {
                DAT_140dc3510 = *(int *)(lVar2 + 8);
            }
        }
        iVar1 = DAT_140dc3510;
        fVar4 = (DAT_140dc34fc / (float)(ulonglong)uVar3) * _DAT_140dc3500;
        if (DAT_140dc3504 <= fVar5) {
            fVar5 = fVar5 - (DAT_140dc3504 - (float)DAT_140dc350c) / fVar4;
            FUN_1408fc950();
            fVar5 = extraout_XMM0_Da * fVar5 * fVar4 + DAT_140dc3504;
        }
        else {
            fVar5 = fVar4 * fVar5 + (float)DAT_140dc350c;
        }
        if ((float)iVar1 < fVar5) {
            fVar5 = (float)iVar1;
        }
        fVar7 = fVar7 - fVar5 * 0.01;
        if (2.0 <= fVar7) {
            fVar7 = 2.0;
        }
        fVar5 = 0.0;
        if (0.0 <= fVar7) {
            fVar5 = fVar7;
        }
    }
    return (longlong)
            ((float)(ulonglong)*(uint *)(*(longlong *)(param_1 + 0xb0) + 0x38) * fVar5 + fVar6);
}



void FUN_1405d8a50(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;
    float fVar3;
    float fVar4;

    *param_1 = &PTR_FUN_140b6e1a0;
    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0x5c));
    if (lVar1 != 0) {
        if (*(int *)(param_1 + 0x2b) < 1) {
            if ((param_1[0x16] == 0) || ((*(byte *)(param_1[0x16] + 0x3c) & 2) == 0)) {
                if (*(int *)((longlong)param_1 + 0xbc) == *(int *)(param_1 + 0x17)) {
                    (**(code **)(*(longlong *)param_1[10] + 8))();
                }
                else {
                    lVar2 = FUN_140200220();
                    if (lVar2 == 0) {
                        fVar3 = 0.1;
                    }
                    else {
                        fVar3 = *(float *)(lVar2 + 0x18);
                    }
                    *(int *)(param_1 + 0x2b) =
                            (int)((float)(ulonglong)
                                    (uint)(*(int *)((longlong)param_1 + 0xbc) - *(int *)(param_1 + 0x17)) *
                                  fVar3);
                }
            }
            else {
                lVar2 = FUN_140200220();
                if (lVar2 == 0) {
                    *(undefined4 *)(param_1 + 0x2b) = 1000;
                }
                else {
                    *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(lVar2 + 4);
                }
            }
        }
        fVar4 = 1.0;
        fVar3 = 1.0;
        if (1.0 <= (float)(ulonglong)*(uint *)(param_1[9] + 0x50)) {
            fVar3 = (float)(ulonglong)*(uint *)(param_1[9] + 0x50);
        }
        fVar3 = (float)FUN_1408fbfc0(*(undefined4 *)(param_1 + 0x2a),fVar3);
        FUN_1405b9160(fVar3,fVar4 / fVar3,lVar1);
    }
    FUN_1405d6680(param_1);
    return;
}



undefined8 FUN_1405d8b90(undefined8 param_1,ulonglong param_2)

{
    FUN_1405d8a50();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1405d8bd0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 uVar2;

    if (param_2 != (undefined4 *)0x0) {
        lVar1 = FUN_1404e1c50(param_1,*param_2,*(undefined8 *)(DAT_140c65898 + 0x78));
        *(longlong *)(param_1 + 0xb0) = lVar1;
        if (lVar1 != 0) {
            *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar1 + 0x40);
            *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar1 + 0x44);
            *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar1 + 0x48);
            uVar2 = FUN_1405d6880(param_1,param_2,param_3);
            return uVar2;
        }
    }
    return 0x80004005;
}



void FUN_1405d8c60(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    float fVar3;
    float extraout_XMM0_Da;

    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c));
    if (lVar1 != 0) {
        fVar3 = (float)(**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
        if (*(int *)(param_1 + 0x154) < 1) {
            if ((*(longlong *)(param_1 + 0xb0) == 0) ||
                ((*(byte *)(*(longlong *)(param_1 + 0xb0) + 0x3c) & 2) == 0)) {
                if (*(int *)(param_1 + 0xbc) == *(int *)(param_1 + 0xb8)) {
                    fVar3 = (float)(**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
                }
                else {
                    lVar2 = FUN_140200220(0xbd);
                    if (lVar2 == 0) {
                        fVar3 = 0.1;
                    }
                    else {
                        fVar3 = *(float *)(lVar2 + 0x18);
                    }
                    fVar3 = (float)(ulonglong)(uint)(*(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0xb8)) *
                            fVar3;
                    *(int *)(param_1 + 0x154) = (int)fVar3;
                }
            }
            else {
                lVar2 = FUN_140200220(0xbf);
                fVar3 = extraout_XMM0_Da;
                if (lVar2 == 0) {
                    *(undefined4 *)(param_1 + 0x154) = 1000;
                }
                else {
                    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar2 + 4);
                }
            }
        }
        FUN_1405b9160(fVar3,*(undefined4 *)(param_1 + 0x150),lVar1);
    }
    return;
}



void FUN_1405d8d60(undefined8 *param_1)

{
    int iVar1;
    longlong lVar2;
    undefined **local_res8 [4];

    lVar2 = DAT_140c65898;
    *param_1 = &PTR_FUN_140b6e140;
    param_1[0x2a] = &PTR_LAB_140b6e190;
    iVar1 = *(int *)((longlong)param_1 + 0x5c);
    if (((*(longlong *)(lVar2 + 0x78) != 0) && (*(int *)(*(longlong *)(lVar2 + 0x78) + 8) == iVar1))
        || ((*(longlong *)(lVar2 + 0x6490) != 0 &&
             (*(int *)(*(longlong *)(lVar2 + 0x6490) + 8) == iVar1)))) {
        local_res8[0] = &PTR_LAB_140b6df08;
        FUN_1405da6b0(iVar1,DAT_140c65b70,lVar2,(undefined4 *)param_1[0x16],*(undefined4 *)param_1[0x16]
                ,local_res8);
    }
    param_1[0x2a] = &PTR_FUN_140b68f20;
    FUN_1405d6680(param_1);
    return;
}



undefined8 FUN_1405d8e00(undefined8 param_1,ulonglong param_2)

{
    FUN_1405d8d60();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405d8e40(undefined8 *param_1)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined4 *puVar7;
    uint uVar8;
    longlong lVar9;
    ulonglong uVar10;
    longlong *plVar11;
    ulonglong uVar12;
    bool bVar13;

    *param_1 = &PTR_FUN_140b6e050;
    if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
          (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) == *(int *)((longlong)param_1 + 0x5c))) ||
         ((*(longlong *)(DAT_140c65898 + 0x6490) != 0 &&
           (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) == *(int *)((longlong)param_1 + 0x5c))))
        ) && (lVar9 = param_1[0x16], lVar9 != 0)) {
        uVar2 = FUN_1403d90d0();
        uVar3 = FUN_140561cc0();
        bVar13 = *(int *)(lVar9 + 0x50) != 0;
        if (*(int *)(lVar9 + 0x40) == 0) {
            if (*(int *)(lVar9 + 0x44) == 0) {
                if ((*(int *)(lVar9 + 0x48) == 0) || (!bVar13)) {
                    if ((*(int *)(lVar9 + 0x4c) != 0) &&
                        (((bVar13 && (lVar9 = (**(code **)(*DAT_140c65b70 + 0x30))(), lVar9 != 0)) &&
                          (lVar4 = *(longlong *)(lVar9 + 8), lVar4 != *(longlong *)(lVar9 + 0x10))))) {
                        do {
                            plVar5 = (longlong *)FUN_1407a1500(DAT_140c65b70);
                            if ((plVar5 != (longlong *)0x0) && (uVar12 = 0, plVar5[1] != 0)) {
                                do {
                                    iVar1 = *(int *)(*plVar5 + uVar12 * 4);
                                    if ((iVar1 != 0) && (lVar6 = FUN_1403acd90(DAT_140c65b70,iVar1,uVar2), lVar6 != 0)
                                            ) {
                                        uVar10 = 0;
                                        if (*(int *)(lVar6 + 0x28) != 0) {
                                            do {
                                                puVar7 = (undefined4 *)(uVar10 * 0xa8 + *(longlong *)(lVar6 + 0x30));
                                                FUN_1405d96f0(puVar7,*puVar7,puVar7[4],uVar3);
                                                uVar8 = (int)uVar10 + 1;
                                                uVar10 = (ulonglong)uVar8;
                                            } while (uVar8 < *(uint *)(lVar6 + 0x28));
                                        }
                                        lVar6 = FUN_1403f7d40();
                                        if ((lVar6 != 0) &&
                                            (plVar11 = (longlong *)**(longlong **)(lVar6 + 8),
                                                    plVar11 != *(longlong **)(lVar6 + 8))) {
                                            do {
                                                FUN_1404e1c50(DAT_140c65898,*(undefined4 *)(plVar11 + 2),
                                                              *(undefined8 *)(DAT_140c65898 + 0x78));
                                                FUN_1405d96f0();
                                                plVar11 = (longlong *)*plVar11;
                                            } while (plVar11 != (longlong *)*(longlong *)(lVar6 + 8));
                                        }
                                    }
                                    uVar12 = (ulonglong)((int)uVar12 + 1);
                                } while (uVar12 < (ulonglong)plVar5[1]);
                            }
                            lVar4 = lVar4 + 4;
                        } while (lVar4 != *(longlong *)(lVar9 + 0x10));
                    }
                }
                else {
                    plVar5 = (longlong *)FUN_1407a1500(DAT_140c65b70);
                    if ((plVar5 != (longlong *)0x0) && (uVar12 = 0, plVar5[1] != 0)) {
                        do {
                            iVar1 = *(int *)(*plVar5 + uVar12 * 4);
                            if ((iVar1 != 0) && (lVar9 = FUN_1403acd90(DAT_140c65b70,iVar1,uVar2), lVar9 != 0)) {
                                uVar10 = 0;
                                if (*(int *)(lVar9 + 0x28) != 0) {
                                    do {
                                        puVar7 = (undefined4 *)(uVar10 * 0xa8 + *(longlong *)(lVar9 + 0x30));
                                        FUN_1405d96f0(puVar7,*puVar7,puVar7[4],uVar3);
                                        uVar8 = (int)uVar10 + 1;
                                        uVar10 = (ulonglong)uVar8;
                                    } while (uVar8 < *(uint *)(lVar9 + 0x28));
                                }
                                lVar9 = FUN_1403f7d40();
                                if ((lVar9 != 0) &&
                                    (plVar11 = (longlong *)**(longlong **)(lVar9 + 8),
                                            plVar11 != *(longlong **)(lVar9 + 8))) {
                                    do {
                                        FUN_1404e1c50(DAT_140c65898,*(undefined4 *)(plVar11 + 2),
                                                      *(undefined8 *)(DAT_140c65898 + 0x78));
                                        FUN_1405d96f0();
                                        plVar11 = (longlong *)*plVar11;
                                    } while (plVar11 != (longlong *)*(longlong *)(lVar9 + 8));
                                }
                            }
                            uVar12 = (ulonglong)((int)uVar12 + 1);
                        } while (uVar12 < (ulonglong)plVar5[1]);
                    }
                }
            }
            else {
                lVar4 = (**(code **)(*DAT_140c65b70 + 0x40))(DAT_140c65b70,*(int *)(lVar9 + 0x44));
                lVar9 = *(longlong *)(lVar4 + 8);
                if (lVar9 != *(longlong *)(lVar4 + 0x10)) {
                    do {
                        FUN_1405d9610();
                        lVar9 = lVar9 + 4;
                    } while (lVar9 != *(longlong *)(lVar4 + 0x10));
                }
            }
        }
        else {
            FUN_1405d9610(bVar13,*(int *)(lVar9 + 0x40),uVar3);
        }
    }
    FUN_1405d6680(param_1);
    return;
}



undefined8 FUN_1405d91b0(undefined8 param_1,ulonglong param_2)

{
    FUN_1405d8e40();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 FUN_1405d91f0(longlong param_1)

{
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    undefined4 *puVar7;
    uint uVar8;
    ulonglong uVar9;
    longlong *plVar10;
    longlong lVar11;
    ulonglong uVar12;
    bool bVar13;

    uVar2 = FUN_1405d6880();
    if (-1 < (int)uVar2) {
        lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c));
        if (lVar3 != 0) {
            if ((((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
                  (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) == *(int *)(param_1 + 0x5c))) ||
                 ((*(longlong *)(DAT_140c65898 + 0x6490) != 0 &&
                   (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) == *(int *)(param_1 + 0x5c))))) &&
                (lVar4 = FUN_1404e1c50(), lVar4 != 0)) {
                lVar4 = *(longlong *)(param_1 + 0xb0);
                uVar2 = FUN_140561cc0();
                bVar13 = *(int *)(lVar4 + 0x50) == 0;
                if (*(int *)(lVar4 + 0x40) != 0) {
                    FUN_1405d95a0(*(int *)(lVar4 + 0x48),*(int *)(lVar4 + 0x40),uVar2);
                    return 0;
                }
                if (*(int *)(lVar4 + 0x44) == 0) {
                    if ((*(int *)(lVar4 + 0x48) == 0) || (bVar13)) {
                        if ((*(int *)(lVar4 + 0x4c) != 0) &&
                            (((!bVar13 && (lVar4 = (**(code **)(*DAT_140c65b70 + 0x30))(), lVar4 != 0)) &&
                              (lVar11 = *(longlong *)(lVar4 + 8), lVar11 != *(longlong *)(lVar4 + 0x10))))) {
                            do {
                                plVar5 = (longlong *)FUN_1407a1500(DAT_140c65b70);
                                if ((plVar5 != (longlong *)0x0) && (uVar12 = 0, plVar5[1] != 0)) {
                                    do {
                                        iVar1 = *(int *)(*plVar5 + uVar12 * 4);
                                        if ((iVar1 != 0) &&
                                            (lVar6 = FUN_1403acd90(DAT_140c65b70,iVar1,lVar3), lVar6 != 0)) {
                                            uVar9 = 0;
                                            if (*(int *)(lVar6 + 0x28) != 0) {
                                                do {
                                                    puVar7 = (undefined4 *)(uVar9 * 0xa8 + *(longlong *)(lVar6 + 0x30));
                                                    FUN_1405d9680(puVar7,*puVar7,puVar7[4],uVar2);
                                                    uVar8 = (int)uVar9 + 1;
                                                    uVar9 = (ulonglong)uVar8;
                                                } while (uVar8 < *(uint *)(lVar6 + 0x28));
                                            }
                                            lVar6 = FUN_1403f7d40();
                                            if ((lVar6 != 0) &&
                                                (plVar10 = (longlong *)**(longlong **)(lVar6 + 8),
                                                        plVar10 != *(longlong **)(lVar6 + 8))) {
                                                do {
                                                    FUN_1404e1c50(DAT_140c65898,*(undefined4 *)(plVar10 + 2),
                                                                  *(undefined8 *)(DAT_140c65898 + 0x78));
                                                    FUN_1405d9680();
                                                    plVar10 = (longlong *)*plVar10;
                                                } while (plVar10 != (longlong *)*(longlong *)(lVar6 + 8));
                                            }
                                        }
                                        uVar12 = (ulonglong)((int)uVar12 + 1);
                                    } while (uVar12 < (ulonglong)plVar5[1]);
                                }
                                lVar11 = lVar11 + 4;
                            } while (lVar11 != *(longlong *)(lVar4 + 0x10));
                        }
                    }
                    else {
                        plVar5 = (longlong *)FUN_1407a1500(DAT_140c65b70);
                        if ((plVar5 != (longlong *)0x0) && (uVar12 = 0, plVar5[1] != 0)) {
                            do {
                                iVar1 = *(int *)(*plVar5 + uVar12 * 4);
                                if ((iVar1 != 0) && (lVar4 = FUN_1403acd90(DAT_140c65b70,iVar1,lVar3), lVar4 != 0))
                                {
                                    uVar9 = 0;
                                    if (*(int *)(lVar4 + 0x28) != 0) {
                                        do {
                                            puVar7 = (undefined4 *)(uVar9 * 0xa8 + *(longlong *)(lVar4 + 0x30));
                                            FUN_1405d9680(puVar7,*puVar7,puVar7[4],uVar2);
                                            uVar8 = (int)uVar9 + 1;
                                            uVar9 = (ulonglong)uVar8;
                                        } while (uVar8 < *(uint *)(lVar4 + 0x28));
                                    }
                                    lVar4 = FUN_1403f7d40();
                                    if ((lVar4 != 0) &&
                                        (plVar10 = (longlong *)**(longlong **)(lVar4 + 8),
                                                plVar10 != *(longlong **)(lVar4 + 8))) {
                                        do {
                                            FUN_1404e1c50(DAT_140c65898,*(undefined4 *)(plVar10 + 2),
                                                          *(undefined8 *)(DAT_140c65898 + 0x78));
                                            FUN_1405d9680();
                                            plVar10 = (longlong *)*plVar10;
                                        } while (plVar10 != (longlong *)*(longlong *)(lVar4 + 8));
                                    }
                                }
                                uVar12 = (ulonglong)((int)uVar12 + 1);
                            } while (uVar12 < (ulonglong)plVar5[1]);
                        }
                    }
                }
                else {
                    lVar3 = (**(code **)(*DAT_140c65b70 + 0x40))();
                    if ((lVar3 != 0) &&
                        (lVar4 = *(longlong *)(lVar3 + 8), lVar4 != *(longlong *)(lVar3 + 0x10))) {
                        do {
                            FUN_1405d95a0();
                            lVar4 = lVar4 + 4;
                        } while (lVar4 != *(longlong *)(lVar3 + 0x10));
                        return 0;
                    }
                }
                return 0;
            }
        }
        uVar2 = 0x80004005;
    }
    return uVar2;
}



void FUN_1405d95a0(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    longlong *plVar1;

    if ((param_3 != 0) &&
        (plVar1 = (longlong *)**(longlong **)(param_3 + 8), plVar1 != *(longlong **)(param_3 + 8))) {
        do {
            FUN_1403fcf80(param_2,plVar1[2],DAT_140c65898 + 0x7cf0);
            plVar1 = (longlong *)*plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_3 + 8));
    }
    return;
}



void FUN_1405d9610(undefined8 param_1,undefined4 param_2,longlong param_3)

{
    longlong *plVar1;

    if ((param_3 != 0) &&
        (plVar1 = (longlong *)**(longlong **)(param_3 + 8), plVar1 != *(longlong **)(param_3 + 8))) {
        do {
            FUN_1403fd170(param_2,plVar1[2],DAT_140c65898 + 0x7cf0);
            plVar1 = (longlong *)*plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_3 + 8));
    }
    return;
}



void FUN_1405d9680(undefined8 param_1,undefined4 param_2,int param_3,longlong param_4)

{
    longlong *plVar1;

    if ((param_4 != 0) &&
        (plVar1 = (longlong *)**(longlong **)(param_4 + 8), plVar1 != *(longlong **)(param_4 + 8))) {
        do {
            if (param_3 == *(int *)(plVar1[2] + 8)) {
                FUN_1403fcf80(param_2,plVar1[2],DAT_140c65898 + 0x7cf0);
            }
            plVar1 = (longlong *)*plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_4 + 8));
    }
    return;
}



void FUN_1405d96f0(undefined8 param_1,undefined4 param_2,int param_3,longlong param_4)

{
    longlong *plVar1;

    if ((param_4 != 0) &&
        (plVar1 = (longlong *)**(longlong **)(param_4 + 8), plVar1 != *(longlong **)(param_4 + 8))) {
        do {
            if (param_3 == *(int *)(plVar1[2] + 8)) {
                FUN_1403fd170(param_2,plVar1[2],DAT_140c65898 + 0x7cf0);
            }
            plVar1 = (longlong *)*plVar1;
        } while (plVar1 != (longlong *)*(longlong *)(param_4 + 8));
    }
    return;
}



undefined8 * FUN_1405d9760(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b6e0a0;
    FUN_1405d97c0();
    FUN_1405d6680(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405d97c0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    ulonglong uVar3;

    if (*(longlong *)(param_1 + 0x150) != 0) {
        lVar1 = FUN_1403d90d0(DAT_140c65898);
        if ((lVar1 != 0) && (*(longlong *)(param_1 + 0x150) != 0)) {
            uVar3 = 0;
            if (*(ulonglong *)(lVar1 + 0x1618) != 0) {
                plVar2 = *(longlong **)(lVar1 + 0x1610);
                do {
                    if (*plVar2 == *(longlong *)(param_1 + 0x150)) {
                        FUN_140007270((longlong **)(lVar1 + 0x1610));
                        break;
                    }
                    uVar3 = uVar3 + 1;
                    plVar2 = plVar2 + 1;
                } while (uVar3 < *(ulonglong *)(lVar1 + 0x1618));
            }
        }
        FUN_14018b900(*(undefined8 *)(param_1 + 0x150),0);
        *(undefined8 *)(param_1 + 0x150) = 0;
    }
    return;
}



undefined8 FUN_1405d9850(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;

    if (param_2 != (undefined4 *)0x0) {
        lVar1 = FUN_1404e1c50(param_1,*param_2,*(undefined8 *)(DAT_140c65898 + 0x78));
        *(longlong *)(param_1 + 0xb0) = lVar1;
        if (lVar1 != 0) {
            puVar2 = (undefined8 *)FUN_14018b280();
            if (puVar2 == (undefined8 *)0x0) {
                puVar2 = (undefined8 *)0x0;
            }
            else {
                *puVar2 = 0;
                puVar2[1] = 0;
            }
            *(undefined8 **)(param_1 + 0x150) = puVar2;
            *(undefined4 *)puVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x40);
            *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 4) =
                    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x44);
            *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 8) =
                    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x48);
            *(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0xc) =
                    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x4c);
            uVar3 = FUN_1405d6880(param_1,param_2,param_3);
            return uVar3;
        }
    }
    return 0x80004005;
}



void FUN_1405d9930(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c));
    if (lVar1 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
        FUN_14046b7f0(lVar1,*(undefined8 *)(param_1 + 0x150),param_1);
    }
    return;
}



void FUN_1405d9980(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c));
    if (lVar1 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
        FUN_14046acc0(lVar1);
    }
    return;
}



undefined8 * FUN_1405d99d0(undefined8 *param_1,uint param_2)

{
    *param_1 = &PTR_FUN_140b6e0f0;
    if (*(int *)(param_1 + 0x2a) != 0) {
        FUN_1405644e0();
    }
    FUN_1405d6680(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



undefined8 * FUN_1405d9b60(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6df10;
    if (*(int *)(param_1 + 0x2b) != 0) {
        lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0x5c));
        if (lVar1 != 0) {
            FUN_140466ca0(lVar1,*(undefined4 *)(&DAT_140c39050 + (longlong)*(int *)(param_1 + 0x2a) * 4),
                          param_1 + 0x2c);
        }
    }
    FUN_1405d6680(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405d9be0(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 *puVar4;

    (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xb0) + 0x40);
    *(int *)(param_1 + 0x150) = iVar1;
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x44);
    if (((iVar1 < 0x1f) &&
         (lVar3 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c)), lVar3 != 0)) &&
        (plVar2 = *(longlong **)(lVar3 + 0xcc0), plVar2 != (longlong *)0x0)) {
        puVar4 = (undefined8 *)
                (**(code **)(*plVar2 + 0x40))
                (plVar2,*(undefined4 *)
                        (&DAT_140c39050 + (longlong)*(int *)(param_1 + 0x150) * 4));
        *(undefined8 *)(param_1 + 0x160) = *puVar4;
        *(undefined8 *)(param_1 + 0x168) = puVar4[1];
        FUN_140466d20(lVar3,*(undefined4 *)(&DAT_140c39050 + (longlong)*(int *)(param_1 + 0x150) * 4),
                      *(undefined4 *)(param_1 + 0x154),0);
        *(undefined4 *)(param_1 + 0x158) = 1;
    }
    return;
}



undefined8 * FUN_1405d9cb0(undefined8 *param_1,ulonglong param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6df60;
    if (param_1[0x2a] != 0) {
        lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0x5c));
        if (lVar1 != 0) {
            FUN_14045b030(lVar1,param_1[0x2a]);
        }
    }
    lVar1 = param_1[0x2a];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1405d6680(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405d9d40(longlong param_1)

{
    longlong lVar1;

    (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c));
    if (lVar1 != 0) {
        FUN_14045b030(lVar1,*(undefined8 *)(param_1 + 0x150));
    }
    lVar1 = *(longlong *)(param_1 + 0x150);
    *(undefined8 *)(param_1 + 0x150) = 0;
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x0001405d9d9a. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



ulonglong FUN_1405d9db0(longlong param_1)

{
    short sVar1;
    short *psVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;

    uVar4 = FUN_1405d6880();
    if (-1 < (int)uVar4) {
        uVar5 = FUN_14034bdd0();
        lVar6 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c));
        if (lVar6 == 0) {
            return 0x80004005;
        }
        psVar2 = *(short **)(lVar6 + 0x88);
        puVar8 = (undefined8 *)0x0;
        lVar3 = *(longlong *)(param_1 + 0x150);
        if (psVar2 == (short *)0x0) {
            *(undefined8 *)(param_1 + 0x150) = 0;
        }
        else {
            sVar1 = *psVar2;
            puVar9 = puVar8;
            while (sVar1 != 0) {
                puVar9 = (undefined8 *)((longlong)puVar9 + 1);
                sVar1 = psVar2[(longlong)puVar9];
            }
            puVar7 = (undefined8 *)FUN_14018b280((longlong)puVar9 * 2 + 0x12,0);
            if (puVar7 != (undefined8 *)0x0) {
                puVar7[1] = puVar9;
                *puVar7 = &PTR_LAB_140b55060;
                puVar8 = puVar7;
            }
            puVar8 = puVar8 + 2;
            FUN_1407db590(puVar8,psVar2,(longlong)puVar9 * 2);
            *(undefined2 *)((longlong)puVar9 * 2 + (longlong)puVar8) = 0;
            *(undefined8 **)(param_1 + 0x150) = puVar8;
        }
        if (lVar3 != 0) {
            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
        }
        FUN_14045b030(lVar6,uVar5);
        uVar4 = uVar4 & 0xffffffff;
    }
    return uVar4;
}



undefined8 * FUN_1405d9f00(undefined8 *param_1,uint param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6dfb0;
    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0xb));
    if (lVar1 != 0) {
        FUN_14045b030(lVar1,param_1[0x2a]);
    }
    lVar1 = param_1[0x2a];
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_1405d6680(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



ulonglong FUN_1405d9f80(longlong param_1,undefined8 param_2,longlong param_3)

{
    short sVar1;
    short *psVar2;
    ulonglong uVar3;
    longlong lVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 *puVar8;

    uVar3 = FUN_1405d6880();
    if ((int)uVar3 < 0) {
        return uVar3;
    }
    lVar4 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x58));
    if (lVar4 != 0) {
        psVar2 = *(short **)(lVar4 + 0x88);
        puVar6 = (undefined8 *)0x0;
        lVar7 = *(longlong *)(param_1 + 0x150);
        if (psVar2 == (short *)0x0) {
            *(undefined8 *)(param_1 + 0x150) = 0;
        }
        else {
            sVar1 = *psVar2;
            puVar8 = puVar6;
            while (sVar1 != 0) {
                puVar8 = (undefined8 *)((longlong)puVar8 + 1);
                sVar1 = psVar2[(longlong)puVar8];
            }
            puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
            if (puVar5 != (undefined8 *)0x0) {
                puVar5[1] = puVar8;
                *puVar5 = &PTR_LAB_140b55060;
                puVar6 = puVar5;
            }
            puVar6 = puVar6 + 2;
            FUN_1407db590(puVar6,psVar2,(longlong)puVar8 * 2);
            *(undefined2 *)((longlong)puVar8 * 2 + (longlong)puVar6) = 0;
            *(undefined8 **)(param_1 + 0x150) = puVar6;
        }
        if (lVar7 != 0) {
            (**(code **)(*(longlong *)(lVar7 + -0x10) + 8))(lVar7 + -0x10);
        }
        lVar7 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_3 + 0x40));
        if (lVar7 != 0) {
            FUN_14045b030(lVar4,*(undefined8 *)(lVar7 + 0x88));
            return uVar3 & 0xffffffff;
        }
    }
    return 0x80004005;
}



void FUN_1405da0c0(undefined8 *param_1)

{
    longlong lVar1;
    longlong lVar2;

    *param_1 = &PTR_FUN_140b6e000;
    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0x5c));
    lVar1 = DAT_140c65898;
    if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0xcc) = 0;
        if ((((*(longlong *)(lVar1 + 0x78) != 0) &&
              (*(int *)(*(longlong *)(lVar1 + 0x78) + 8) == *(int *)((longlong)param_1 + 0x5c))) ||
             ((*(longlong *)(lVar1 + 0x6490) != 0 &&
               (*(int *)(*(longlong *)(lVar1 + 0x6490) + 8) == *(int *)((longlong)param_1 + 0x5c))))) &&
            (*(int *)(lVar2 + 0xd50) != 0)) {
            *(undefined4 *)(lVar1 + 0x67b0) = 0;
        }
    }
    FUN_1405d6680(param_1);
    return;
}



undefined8 FUN_1405da140(undefined8 param_1,ulonglong param_2)

{
    FUN_1405da0c0();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



ulonglong FUN_1405da180(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;

    uVar4 = FUN_1405d6880();
    uVar6 = uVar4 & 0xffffffff;
    if ((-1 < (int)uVar4) &&
        (lVar5 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c)), uVar4 = uVar6,
                lVar5 != 0)) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
        lVar2 = DAT_140c65898;
        *(undefined4 *)(lVar5 + 0xcc) = uVar3;
        lVar1 = *(longlong *)(lVar2 + 0x78);
        if ((((lVar1 != 0) && (*(int *)(lVar1 + 8) == *(int *)(param_1 + 0x5c))) ||
             ((lVar1 = *(longlong *)(lVar2 + 0x6490), lVar1 != 0 &&
                                                      (*(int *)(lVar1 + 8) == *(int *)(param_1 + 0x5c))))) && (*(int *)(lVar5 + 0xd50) != 0)) {
            uVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
            *(undefined4 *)(DAT_140c65898 + 0x67b0) = uVar3;
        }
    }
    return uVar4;
}



undefined8 FUN_1405da280(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1404e1c50(param_1,*param_2,*(undefined8 *)(DAT_140c65898 + 0x78));
    *(longlong *)(param_1 + 0xb0) = lVar1;
    if (lVar1 != 0) {
        *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar1 + 0x40);
        lVar1 = FUN_1401ffde0();
        if (lVar1 != 0) {
            uVar2 = FUN_1405d6880(param_1,param_2,param_3);
            return uVar2;
        }
    }
    return 0x80004005;
}



void FUN_1405da300(longlong param_1)

{
    int iVar1;

    (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
    iVar1 = *(int *)(param_1 + 0x5c);
    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
         (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) == iVar1)) ||
        ((*(longlong *)(DAT_140c65898 + 0x6490) != 0 &&
          (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) == iVar1)))) {
        FUN_1403eb430(DAT_140c65898,*(undefined4 *)(param_1 + 0x150),*(undefined4 *)(param_1 + 0xbc),
                      *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x5c),iVar1);
    }
    return;
}



undefined8 FUN_1405da3f0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1404e1c50(param_1,*param_2,*(undefined8 *)(DAT_140c65898 + 0x78));
    *(longlong *)(param_1 + 0xb0) = lVar1;
    if (lVar1 == 0) {
        return 0x80004005;
    }
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar1 + 0x40);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar1 + 0x44);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar1 + 0x48);
    uVar2 = FUN_1405d6880(param_1,param_2,param_3);
    return uVar2;
}



void FUN_1405da480(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c));
    if ((lVar1 != 0) && ((*(int *)(lVar1 + 0x80) == 0x14 || (*(int *)(lVar1 + 0x80) == 0x17)))) {
        (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
        if (*(int *)(param_1 + 0x158) != 0) {
            FUN_1405a71b0();
            return;
        }
    }
    return;
}



undefined8 * FUN_1405da4e0(undefined8 *param_1,uint param_2)

{
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6de60;
    lVar1 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)((longlong)param_1 + 0x5c));
    if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x1604) = 0;
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ShieldsOverloaded",&DAT_1409eb71c,
                      *(undefined4 *)((longlong)param_1 + 0x5c),0);
    }
    FUN_1405d6680(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1405da570(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar2 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(param_1 + 0x5c));
    if (lVar2 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
        lVar1 = DAT_140c65898;
        *(undefined4 *)(lVar2 + 0x1604) = 1;
        FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"ShieldsOverloaded",&DAT_1409eb71c,
                      *(undefined4 *)(param_1 + 0x5c),1);
    }
    return;
}



void FUN_1405da630(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    if (((*(longlong *)(DAT_140c65898 + 0x78) == 0) ||
         (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 8) != *(int *)(param_1 + 0x5c))) &&
        ((*(longlong *)(DAT_140c65898 + 0x6490) == 0 ||
          (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 8) != *(int *)(param_1 + 0x5c))))) {
        return;
    }
    (**(code **)(**(longlong **)(param_1 + 0x50) + 8))();
    lVar3 = *(longlong *)(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(lVar3 + 0x40);
    *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(lVar3 + 0x44);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(lVar3 + 0x48);
    lVar3 = DAT_140c65b70;
    if (param_1 != 0) {
        lVar2 = *(longlong *)(DAT_140c65b70 + 0x808);
        lVar1 = lVar2 + 1;
        lVar4 = FUN_14018db00(*(undefined8 *)(DAT_140c65b70 + 0x800),lVar1,8);
        *(longlong *)(lVar4 + lVar2 * 8) = param_1;
        if (*(longlong *)(lVar3 + 0x800) != lVar4) {
            FUN_1407db590(lVar4,*(longlong *)(lVar3 + 0x800),*(longlong *)(lVar3 + 0x808) << 3);
            lVar2 = *(longlong *)(lVar3 + 0x800);
            if (lVar2 != 0) {
                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
            }
            *(longlong *)(lVar3 + 0x800) = lVar4;
        }
        *(longlong *)(lVar3 + 0x808) = lVar1;
    }
    return;
}



void FUN_1405da6b0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                   uint param_5,undefined8 *param_6)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    longlong local_res8;

    if (param_4 != 0) {
        lVar2 = *(longlong *)(param_2 + 0x6e0);
        local_res8 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < param_5) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res8 == lVar2) || (param_5 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar2;
        }
        uVar4 = 0;
        uVar5 = uVar4;
        if (local_res8 != lVar2) {
            uVar5 = *(ulonglong *)(local_res8 + 0x28);
        }
        if (*(int *)(param_4 + 0x40) == 0) {
            if (((*(int *)(param_4 + 0x44) != 0) &&
                 (lVar2 = (**(code **)(*DAT_140c65b70 + 0x30))(), lVar2 != 0)) &&
                (lVar3 = *(longlong *)(lVar2 + 8), *(longlong *)(lVar2 + 0x10) - lVar3 >> 2 != 0)) {
                do {
                    (**(code **)*param_6)(param_6,*(undefined4 *)(lVar3 + uVar4 * 4),uVar5,param_3);
                    lVar3 = *(longlong *)(lVar2 + 8);
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar4 < (ulonglong)(*(longlong *)(lVar2 + 0x10) - lVar3 >> 2));
            }
        }
        else {
            plVar1 = (longlong *)FUN_1407a1500(param_2,*(int *)(param_4 + 0x40));
            if ((plVar1 != (longlong *)0x0) && (plVar1[1] != 0)) {
                do {
                    (**(code **)*param_6)(param_6,*(undefined4 *)(*plVar1 + uVar4 * 4),uVar5,param_3);
                    uVar4 = (ulonglong)((int)uVar4 + 1);
                } while (uVar4 < (ulonglong)plVar1[1]);
            }
        }
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1405da960(void)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar2 = FUN_14024db80();
    while( true ) {
        while( true ) {
            if (lVar2 == 0) {
                return 0;
            }
            lVar3 = FUN_14034bdd0();
            if (lVar3 != 0) {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(short *)(lVar3 + lVar4 * 2) != 0);
                if (lVar4 != 0) {
                    return lVar3;
                }
            }
            if (DAT_140c63840 == (code *)0x0) break;
            lVar2 = (*DAT_140c63840)(&PTR_u_WorldZone_140a6e3e8,*(undefined4 *)(lVar2 + 8),DAT_140c63858);
        }
        if (_DAT_140c64634 != 0) {
            return 0;
        }
        iVar1 = FUN_14024d920();
        if (iVar1 < 0) break;
        lVar2 = (**(code **)(*DAT_140c64270 + 0x18))();
    }
    return 0;
}



undefined8 *
FUN_1405da9f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
              undefined4 param_5)

{
    longlong *plVar1;
    short sVar2;
    undefined8 uVar3;
    short *psVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    uVar3 = *param_3;
    *(undefined4 *)(param_2 + 1) = param_5;
    *param_2 = uVar3;
    param_2[0x17] = param_3[1];
    puVar6 = (undefined8 *)0x0;
    param_2[0x18] = param_3[2];
    *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_3 + 4);
    psVar4 = (short *)param_3[3];
    if (psVar4 == (short *)0x0) {
        param_2[0x1b] = 0;
    }
    else {
        sVar2 = *psVar4;
        puVar7 = puVar6;
        while (sVar2 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar2 = psVar4[(longlong)puVar7];
        }
        puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
        if (puVar5 != (undefined8 *)0x0) {
            puVar5[1] = puVar7;
            *puVar5 = &PTR_LAB_140b55060;
            puVar6 = puVar5;
        }
        puVar6 = puVar6 + 2;
        param_1 = FUN_1407db590(puVar6,psVar4,(longlong)puVar7 * 2);
        *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar6) = 0;
        param_2[0x1b] = puVar6;
    }
    *(undefined4 *)(param_2 + 0x1c) = 0x17;
    *(undefined8 *)((longlong)param_2 + 0xe4) = 4;
    *(undefined8 *)((longlong)param_2 + 0xec) = 0;
    *(undefined8 *)((longlong)param_2 + 0xf4) = 0;
    *(undefined8 *)((longlong)param_2 + 0xfc) = 0;
    param_2[0x22] = 0;
    param_2[0x21] = param_4;
    plVar1 = param_2 + 0x22;
    *plVar1 = *param_4;
    *param_4 = (longlong)param_2;
    if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 0x108) = plVar1;
    }
    if (param_2 != (undefined8 *)0xffffffffffffff38) {
        FUN_1401e82f0(param_1,0x80800000);
    }
    *(undefined8 *)((longlong)param_2 + 0xc) = 0;
    *(undefined8 *)((longlong)param_2 + 0x14) = 0;
    *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x24) = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x34) = 0;
    *(undefined8 *)((longlong)param_2 + 0x3c) = 0;
    *(undefined8 *)((longlong)param_2 + 0x44) = 0;
    *(undefined2 *)((longlong)param_2 + 0x4c) = 0;
    FUN_1407e4830((longlong)param_2 + 0x4e,0,0x66);
    return param_2;
}



void FUN_1405dab80(ulonglong *param_1,longlong param_2)

{
    longlong *plVar1;
    int iVar2;
    undefined8 *puVar3;
    uint *puVar4;
    double *pdVar5;
    undefined4 *puVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    longlong lVar10;
    longlong lVar11;
    longlong lVar12;
    ulonglong uVar13;
    float fVar14;
    float local_res8 [2];
    undefined local_48 [8];
    longlong local_40;

    lVar10 = *(longlong *)(param_2 + 0x10);
    uVar13 = (ulonglong)*(uint *)(param_1 + 1);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar10 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,&DAT_140b22998,uVar13 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (*(int *)(param_1 + 0x20) == 0) {
        return;
    }
    lVar10 = *(longlong *)(param_2 + 0x10);
    uVar13 = *param_1;
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar10 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    lVar10 = *(longlong *)(param_2 + 0x10);
    lVar8 = FUN_14018f0e0(local_48,L"bTemporary");
    lVar11 = -1;
    if (*(longlong *)(lVar8 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    }
    else {
        lVar12 = -1;
        do {
            lVar12 = lVar12 + 1;
        } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar12) != '\0');
        FUN_140058710(lVar10);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar4 = *(uint **)(lVar10 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(uVar13 < 0x1000000000000);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar10,0xfffffffd);
    FUN_14005ea50(lVar10,uVar9,*(longlong *)(lVar10 + 0x10) + -0x20,
                  *(longlong *)(lVar10 + 0x10) + -0x10);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    iVar2 = *(int *)(param_1 + 0x1a);
    if (((((iVar2 == 0) || (iVar2 == 4)) || (iVar2 == 3)) || (iVar2 == 4)) &&
        (*(int *)((longlong)param_1 + 0xf4) != 0)) {
        lVar10 = *(longlong *)(param_2 + 0x10);
        uVar13 = (ulonglong)*(uint *)(param_1 + 0x1c);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nClassId",uVar13 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        uVar13 = (ulonglong)*(uint *)((longlong)param_1 + 0xe4);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nPathId",uVar13 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    if ((*(int *)(param_1 + 0x1a) == 0) || (*(int *)(param_1 + 0x1a) == 4)) {
        if (*(int *)(param_1 + 0x1f) == 0) {
            lVar10 = *(longlong *)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar3 = *(undefined8 **)(lVar10 + 0x10);
            *puVar3 = *puVar7;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            lVar10 = *(longlong *)(param_2 + 0x10);
            lVar8 = FUN_14018f0e0(local_48,L"fLastOnline");
            if (*(longlong *)(lVar8 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar12) != '\0');
                FUN_140058710(lVar10);
            }
            if (local_40 != 0) {
                FUN_14018b900(local_40,0);
            }
            puVar3 = *(undefined8 **)(lVar10 + 0x10);
            *puVar3 = 0;
            *(undefined4 *)(puVar3 + 1) = 3;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            uVar9 = FUN_1400580e0(lVar10,0xfffffffd);
            FUN_14005ea50(lVar10,uVar9,*(longlong *)(lVar10 + 0x10) + -0x20,
                          *(longlong *)(lVar10 + 0x10) + -0x10);
        }
        else {
            fVar14 = 0.0;
            local_res8[0] = 0.0;
            if (param_1[0x19] != 0) {
                FUN_1401e83a0(local_res8);
                if (fVar14 <= local_res8[0]) {
                    fVar14 = 1e-06;
                }
                else {
                    fVar14 = (float)((uint)local_res8[0] ^ 0x80000000);
                }
            }
            lVar10 = *(longlong *)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar3 = *(undefined8 **)(lVar10 + 0x10);
            *puVar3 = *puVar7;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            lVar10 = *(longlong *)(param_2 + 0x10);
            lVar8 = FUN_14018f0e0(local_48,L"fLastOnline");
            if (*(longlong *)(lVar8 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
                *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            }
            else {
                lVar12 = -1;
                do {
                    lVar12 = lVar12 + 1;
                } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar12) != '\0');
                FUN_140058710(lVar10);
            }
            if (local_40 != 0) {
                FUN_14018b900(local_40,0);
            }
            pdVar5 = *(double **)(lVar10 + 0x10);
            *(undefined4 *)(pdVar5 + 1) = 3;
            *pdVar5 = (double)fVar14;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            uVar9 = FUN_1400580e0(lVar10,0xfffffffd);
            FUN_14005ea50(lVar10,uVar9,*(longlong *)(lVar10 + 0x10) + -0x20,
                          *(longlong *)(lVar10 + 0x10) + -0x10);
        }
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar10 = FUN_1405da960(*(undefined4 *)((longlong)param_1 + 0xec));
        if (lVar10 != 0) {
            lVar8 = *(longlong *)(param_2 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                                  *(undefined4 *)(param_2 + 8));
            puVar3 = *(undefined8 **)(lVar8 + 0x10);
            *puVar3 = *puVar7;
            *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strWorldZone",lVar10);
            plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
            *plVar1 = *plVar1 + -0x10;
        }
        lVar10 = *(longlong *)(param_2 + 0x10);
        uVar13 = (ulonglong)*(uint *)(param_1 + 0x1d);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nLevel",uVar13 & 0xffffffff);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    if (*(short *)((longlong)param_1 + 0xc) != 0) {
        lVar10 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strCharacterName",(longlong)param_1 + 0xc
        );
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    if (*(short *)((longlong)param_1 + 0x4e) != 0) {
        lVar10 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strRealmName",(longlong)param_1 + 0x4e);
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
    }
    lVar10 = *(longlong *)(param_2 + 0x10);
    uVar13 = param_1[0x1b];
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar10 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strNote",uVar13);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar10 = *(longlong *)(param_2 + 0x10);
    uVar13 = (ulonglong)*(uint *)(param_1 + 0x1e);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar10 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nFactionId",uVar13 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    iVar2 = *(int *)(param_1 + 0x1a);
    if (iVar2 == 0) {
        lVar10 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_48,L"bFriend");
        lVar8 = *(longlong *)(lVar8 + 8);
        if (lVar8 == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            goto LAB_1405db454;
        }
        do {
            lVar11 = lVar11 + 1;
        } while (*(char *)(lVar8 + lVar11) != '\0');
    }
    else if (iVar2 == 1) {
        lVar10 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_48,L"bIgnore");
        lVar8 = *(longlong *)(lVar8 + 8);
        if (lVar8 == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            goto LAB_1405db454;
        }
        do {
            lVar11 = lVar11 + 1;
        } while (*(char *)(lVar8 + lVar11) != '\0');
    }
    else if (iVar2 == 3) {
        lVar10 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_48,L"bRival");
        lVar8 = *(longlong *)(lVar8 + 8);
        if (lVar8 == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            goto LAB_1405db454;
        }
        do {
            lVar11 = lVar11 + 1;
        } while (*(char *)(lVar8 + lVar11) != '\0');
    }
    else {
        if (iVar2 != 4) {
            return;
        }
        lVar10 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_48,L"bFriend");
        if (*(longlong *)(lVar8 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        }
        else {
            lVar12 = -1;
            do {
                lVar12 = lVar12 + 1;
            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar12) != '\0');
            FUN_140058710(lVar10);
        }
        if (local_40 != 0) {
            FUN_14018b900(local_40,0);
        }
        puVar6 = *(undefined4 **)(lVar10 + 0x10);
        *puVar6 = 1;
        puVar6[2] = 1;
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(lVar10,0xfffffffd);
        FUN_14005ea50(lVar10,uVar9,*(longlong *)(lVar10 + 0x10) + -0x20,
                      *(longlong *)(lVar10 + 0x10) + -0x10);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar10 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar3 = *(undefined8 **)(lVar10 + 0x10);
        *puVar3 = *puVar7;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
        lVar10 = *(longlong *)(param_2 + 0x10);
        lVar8 = FUN_14018f0e0(local_48,L"bRival");
        lVar8 = *(longlong *)(lVar8 + 8);
        if (lVar8 == 0) {
            *(undefined4 *)(*(longlong *)(lVar10 + 0x10) + 8) = 0;
            *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
            goto LAB_1405db454;
        }
        do {
            lVar11 = lVar11 + 1;
        } while (*(char *)(lVar8 + lVar11) != '\0');
    }
    FUN_140058710(lVar10,lVar8,lVar11);
    LAB_1405db454:
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    puVar6 = *(undefined4 **)(lVar10 + 0x10);
    *puVar6 = 1;
    puVar6[2] = 1;
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar10,0xfffffffd);
    FUN_14005ea50(lVar10,uVar9,*(longlong *)(lVar10 + 0x10) + -0x20,
                  *(longlong *)(lVar10 + 0x10) + -0x10);
    *(longlong *)(lVar10 + 0x10) = *(longlong *)(lVar10 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



undefined4 *
FUN_1405db4d0(undefined4 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
    longlong *plVar1;
    short sVar2;
    short *psVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    *param_1 = param_4;
    *(undefined8 *)(param_1 + 4) = *param_2;
    *(undefined8 *)(param_1 + 6) = param_2[1];
    *(undefined8 *)(param_1 + 8) = param_2[2];
    *(undefined8 *)(param_1 + 10) = param_2[3];
    *(undefined8 *)(param_1 + 0xc) = param_2[4];
    puVar6 = (undefined8 *)0x0;
    *(undefined8 *)(param_1 + 0xe) = param_2[5];
    *(undefined8 *)(param_1 + 0x10) = param_2[6];
    *(undefined8 *)(param_1 + 0x12) = param_2[7];
    psVar3 = (short *)param_2[5];
    if (psVar3 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x14) = 0;
    }
    else {
        sVar2 = *psVar3;
        puVar7 = puVar6;
        while (sVar2 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar2 = psVar3[(longlong)puVar7];
        }
        puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
        puVar5 = puVar6;
        if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_LAB_140b55060;
            puVar4[1] = puVar7;
            puVar5 = puVar4;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5,psVar3,(longlong)puVar7 * 2);
        *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar5) = 0;
        *(undefined8 **)(param_1 + 0x14) = puVar5;
    }
    psVar3 = (short *)param_2[4];
    if (psVar3 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x16) = 0;
    }
    else {
        sVar2 = *psVar3;
        puVar7 = puVar6;
        while (sVar2 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar2 = psVar3[(longlong)puVar7];
        }
        puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_LAB_140b55060;
            puVar5[1] = puVar7;
            puVar6 = puVar5;
        }
        puVar6 = puVar6 + 2;
        FUN_1407db590(puVar6,psVar3,(longlong)puVar7 * 2);
        *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar6) = 0;
        *(undefined8 **)(param_1 + 0x16) = puVar6;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    if (*(longlong *)(param_1 + 0x18) == 0) {
        *(longlong **)(param_1 + 0x18) = param_3;
        plVar1 = (longlong *)(param_1 + 0x1a);
        *plVar1 = *param_3;
        *param_3 = (longlong)param_1;
        if (*plVar1 != 0) {
            *(longlong **)(*plVar1 + 0x60) = plVar1;
        }
    }
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x16);
    if (*(float *)((longlong)param_2 + 0x1c) != 0.0) {
        if (param_1 != (undefined4 *)&DAT_fffffffffffffff8) {
            FUN_1401e82f0();
        }
        return param_1;
    }
    *(undefined8 *)(param_1 + 2) = 0;
    return param_1;
}



void FUN_1405db6b0(uint *param_1,longlong param_2)

{
    longlong *plVar1;
    uint uVar2;
    undefined8 *puVar3;
    uint *puVar4;
    double *pdVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    ulonglong uVar12;
    float fVar13;
    float local_res8 [2];
    undefined local_58 [8];
    longlong local_50;

    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar12 = (ulonglong)*param_1;
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,&DAT_140b22b58,uVar12 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x14);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strCharacterName",uVar8);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar12 = (ulonglong)param_1[0x10];
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nClassId",uVar12 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar12 = (ulonglong)param_1[0x11];
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nPathId",uVar12 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar12 = (ulonglong)*(byte *)(param_1 + 0x12);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"nLevel",uVar12 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar2 = param_1[10];
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    lVar7 = FUN_14018f0e0(local_58,L"bIsNew");
    lVar9 = -1;
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    puVar4 = *(uint **)(lVar11 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(uVar2 == 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x16);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strNote",uVar8);
    local_res8[0] = 0.0;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    fVar13 = 0.0;
    if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1401e83a0(local_res8);
        fVar13 = local_res8[0];
        if (local_res8[0] <= 1e-06) {
            fVar13 = 1e-06;
        }
    }
    lVar11 = *(longlong *)(param_2 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    lVar7 = FUN_14018f0e0(local_58,L"fDaysUntilExpired");
    lVar7 = *(longlong *)(lVar7 + 8);
    if (lVar7 == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(lVar7 + lVar9) != '\0');
        FUN_140058710(lVar11,lVar7,lVar9);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar5 = *(double **)(lVar11 + 0x10);
    *(undefined4 *)(pdVar5 + 1) = 3;
    *pdVar5 = (double)fVar13;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



void FUN_1405dbaa0(uint *param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    undefined8 *puVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar4 = *(longlong *)(param_2 + 0x10);
    uVar5 = (ulonglong)*param_1;
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,&DAT_140b22ac0,uVar5 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar4 = *(longlong *)(param_2 + 0x10);
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strCharacterName",param_1 + 1);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar4 = *(longlong *)(param_2 + 0x10);
    uVar5 = (ulonglong)param_1[0x30];
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nClassId",uVar5 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar4 = *(longlong *)(param_2 + 0x10);
    uVar5 = (ulonglong)param_1[0x31];
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nPathId",uVar5 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar4 = *(longlong *)(param_2 + 0x10);
    uVar5 = (ulonglong)param_1[0x32];
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar4 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = *puVar3;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nLevel",uVar5 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



short ** FUN_1405dbc40(short **param_1,longlong param_2,short **param_3)

{
    short sVar1;
    short *psVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    longlong local_res8;

    *param_1 = *param_3;
    param_1[1] = param_3[1];
    puVar4 = (undefined8 *)0x0;
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    param_1[5] = param_3[5];
    psVar2 = *param_3;
    if (psVar2 == (short *)0x0) {
        param_1[6] = (short *)0x0;
    }
    else {
        sVar1 = *psVar2;
        puVar5 = puVar4;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = psVar2[(longlong)puVar5];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] = puVar5;
            *puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,psVar2,(longlong)puVar5 * 2);
        *(short *)((longlong)puVar5 * 2 + (longlong)puVar4) = 0;
        param_1[6] = (short *)puVar4;
    }
    param_1[7] = (short *)0x0;
    *param_1 = param_1[6];
    if (param_2 != 0) {
        local_res8 = param_2;
        FUN_1404bc4d0(DAT_140c65ba0 + 0x1e0,param_3 + 1,&local_res8);
    }
    return param_1;
}



void FUN_1405dbd60(undefined8 *param_1,longlong param_2)

{
    longlong *plVar1;
    short sVar2;
    bool bVar3;
    bool bVar4;
    undefined8 *puVar5;
    undefined *puVar6;
    undefined8 *puVar7;
    short *psVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    undefined *puVar11;
    longlong lVar12;
    undefined8 uVar13;
    ulonglong uVar14;
    undefined8 **ppuVar15;
    undefined8 *local_res8;

    puVar9 = (undefined8 *)0x0;
    local_res8 = (undefined8 *)((ulonglong)local_res8 & 0xffffffff00000000);
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar13 = *param_1;
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar5;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar7,L"strCharacterName",uVar13);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar14 = (ulonglong)*(uint *)(param_1 + 3);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar5;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar7,L"nClassId",uVar14 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar14 = (ulonglong)*(uint *)((longlong)param_1 + 0x1c);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar5;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar7,L"nRaceId",uVar14 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar14 = (ulonglong)*(uint *)(param_1 + 4);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar5;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar7,L"nPathId",uVar14 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar14 = (ulonglong)*(uint *)((longlong)param_1 + 0x24);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar5;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar7,L"nLevel",uVar14 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar12 = *(longlong *)(param_2 + 0x10);
    uVar14 = (ulonglong)*(uint *)((longlong)param_1 + 0x2c);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar5;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar7,L"nFactionId",uVar14 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    puVar6 = (undefined *)FUN_1405da960(*(undefined4 *)(param_1 + 5));
    lVar12 = *(longlong *)(param_2 + 0x10);
    puVar5 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    *puVar7 = *puVar5;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    puVar11 = &DAT_1409f390c;
    if (puVar6 != (undefined *)0x0) {
        puVar11 = puVar6;
    }
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar7,L"strWorldZone",puVar11);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (param_1[7] == 0) {
        bVar4 = false;
        bVar3 = true;
        psVar8 = (short *)FUN_14034bdd0();
        if (psVar8 != (short *)0x0) {
            sVar2 = *psVar8;
            puVar7 = puVar9;
            while (sVar2 != 0) {
                puVar7 = (undefined8 *)((longlong)puVar7 + 1);
                sVar2 = psVar8[(longlong)puVar7];
            }
            puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
            if (puVar5 != (undefined8 *)0x0) {
                puVar5[1] = puVar7;
                *puVar5 = &PTR_LAB_140b55060;
                puVar9 = puVar5;
            }
            puVar9 = puVar9 + 2;
            FUN_1407db590(puVar9,psVar8,(longlong)puVar7 * 2);
            *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar9) = 0;
        }
    }
    else {
        lVar12 = *(longlong *)(param_1[7] + -8);
        bVar4 = true;
        bVar3 = false;
        puVar7 = (undefined8 *)FUN_14018b280(lVar12 * 2 + 0x12,0);
        if (puVar7 != (undefined8 *)0x0) {
            puVar7[1] = lVar12;
            *puVar7 = &PTR_LAB_140b55060;
            puVar9 = puVar7;
        }
        puVar9 = puVar9 + 2;
        FUN_1407db590(puVar9,param_1[7],lVar12 * 2);
        *(undefined2 *)(lVar12 * 2 + (longlong)puVar9) = 0;
    }
    lVar12 = *(longlong *)(param_2 + 0x10);
    ppuVar15 = &local_res8;
    local_res8 = puVar9;
    puVar10 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar12 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar7 = *(undefined8 **)(lVar12 + 0x10);
    puVar5 = *ppuVar15;
    *puVar7 = *puVar10;
    *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(lVar12 + 0x10) = *(longlong *)(lVar12 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar7,L"strRealm",puVar5);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if ((bVar3) && (puVar9 != (undefined8 *)0x0)) {
        (**(code **)(puVar9[-2] + 8))(puVar9 + -2);
    }
    if ((bVar4) && (puVar9 != (undefined8 *)0x0)) {
        // WARNING: Could not recover jumptable at 0x0001405dc126. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(puVar9[-2] + 8))(puVar9 + -2);
        return;
    }
    return;
}



undefined4 *
FUN_1405dc130(undefined4 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
    undefined8 *puVar1;
    longlong *plVar2;
    short sVar3;
    short *psVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;

    *param_1 = param_4;
    puVar7 = (undefined8 *)0x0;
    puVar1 = (undefined8 *)(param_1 + 2);
    *puVar1 = 0;
    *(undefined8 *)(param_1 + 4) = *param_2;
    *(undefined8 *)(param_1 + 6) = param_2[1];
    *(undefined8 *)(param_1 + 8) = param_2[2];
    *(undefined8 *)(param_1 + 10) = param_2[3];
    *(undefined8 *)(param_1 + 0xc) = param_2[4];
    *(undefined8 *)(param_1 + 0xe) = param_2[5];
    *(undefined8 *)(param_1 + 0x10) = param_2[6];
    *(undefined8 *)(param_1 + 0x12) = param_2[7];
    psVar4 = (short *)param_2[2];
    if (psVar4 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x14) = 0;
    }
    else {
        sVar3 = *psVar4;
        puVar8 = puVar7;
        while (sVar3 != 0) {
            puVar8 = (undefined8 *)((longlong)puVar8 + 1);
            sVar3 = psVar4[(longlong)puVar8];
        }
        puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
        puVar6 = puVar7;
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_LAB_140b55060;
            puVar5[1] = puVar8;
            puVar6 = puVar5;
        }
        puVar6 = puVar6 + 2;
        FUN_1407db590(puVar6,psVar4,(longlong)puVar8 * 2);
        *(undefined2 *)((longlong)puVar8 * 2 + (longlong)puVar6) = 0;
        *(undefined8 **)(param_1 + 0x14) = puVar6;
    }
    psVar4 = (short *)param_2[4];
    if (psVar4 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x16) = 0;
    }
    else {
        sVar3 = *psVar4;
        puVar8 = puVar7;
        while (sVar3 != 0) {
            puVar8 = (undefined8 *)((longlong)puVar8 + 1);
            sVar3 = psVar4[(longlong)puVar8];
        }
        puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
        puVar6 = puVar7;
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_LAB_140b55060;
            puVar5[1] = puVar8;
            puVar6 = puVar5;
        }
        puVar6 = puVar6 + 2;
        FUN_1407db590(puVar6,psVar4,(longlong)puVar8 * 2);
        *(undefined2 *)((longlong)puVar8 * 2 + (longlong)puVar6) = 0;
        *(undefined8 **)(param_1 + 0x16) = puVar6;
    }
    psVar4 = (short *)param_2[5];
    if (psVar4 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
        sVar3 = *psVar4;
        puVar8 = puVar7;
        while (sVar3 != 0) {
            puVar8 = (undefined8 *)((longlong)puVar8 + 1);
            sVar3 = psVar4[(longlong)puVar8];
        }
        puVar6 = (undefined8 *)FUN_14018b280((longlong)puVar8 * 2 + 0x12,0);
        if (puVar6 != (undefined8 *)0x0) {
            puVar6[1] = puVar8;
            *puVar6 = &PTR_LAB_140b55060;
            puVar7 = puVar6;
        }
        puVar7 = puVar7 + 2;
        FUN_1407db590(puVar7,psVar4,(longlong)puVar8 * 2);
        *(undefined2 *)((longlong)puVar8 * 2 + (longlong)puVar7) = 0;
        *(undefined8 **)(param_1 + 0x18) = puVar7;
    }
    *(undefined8 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1e) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_1 + 0x16);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_1 + 0x18);
    if (*(longlong *)(param_1 + 0x1e) == 0) {
        *(longlong **)(param_1 + 0x1e) = param_3;
        plVar2 = (longlong *)(param_1 + 0x20);
        *plVar2 = *param_3;
        *param_3 = (longlong)param_1;
        if (*plVar2 != 0) {
            *(longlong **)(*plVar2 + 0x78) = plVar2;
        }
    }
    if (*(float *)(param_2 + 3) == 0.0) {
        *puVar1 = 0;
        return param_1;
    }
    if (puVar1 != (undefined8 *)0x0) {
        FUN_1401e82f0(puVar1);
    }
    FUN_1405dcee0(param_1,1);
    return param_1;
}



void FUN_1405dc3a0(longlong param_1)

{
    longlong lVar1;

    FUN_1405dcee0(param_1,0);
    if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x78) = *(undefined8 *)(param_1 + 0x78);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    lVar1 = *(longlong *)(param_1 + 0x68);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x50);
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x0001405dc436. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405dc440(uint *param_1,longlong param_2)

{
    longlong *plVar1;
    undefined8 *puVar2;
    double *pdVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    float fVar10;
    undefined8 local_res8;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;
    undefined **local_38;
    undefined4 local_30;
    undefined4 uStack44;
    longlong local_28;
    undefined4 local_20;

    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar7 = (ulonglong)*param_1;
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,&DAT_140b22c40,uVar7 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x14);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strPublicNote",uVar6);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x16);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strPrivateNote",uVar6);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar2,L"strCharacterName",uVar6);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    uVar7 = (ulonglong)param_1[0x10];
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nPresenceState",uVar7 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    if (*(longlong *)(param_1 + 0x1c) != 0) {
        lVar8 = *(longlong *)(param_2 + 0x10);
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                              *(undefined4 *)(param_2 + 8));
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = *puVar4;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        lVar8 = *(longlong *)(param_2 + 0x10);
        lVar5 = FUN_14018f0e0(&local_38,L"fLastOnline");
        if (*(longlong *)(lVar5 + 8) == 0) {
            *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        }
        else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar9) != '\0');
            FUN_140058710(lVar8);
        }
        if (CONCAT44(uStack44,local_30) != 0) {
            FUN_14018b900(CONCAT44(uStack44,local_30),0);
        }
        puVar2 = *(undefined8 **)(lVar8 + 0x10);
        *puVar2 = 0;
        *(undefined4 *)(puVar2 + 1) = 3;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
        uVar6 = FUN_1400580e0(lVar8,0xfffffffd);
        FUN_14005ea50(lVar8,uVar6,*(longlong *)(lVar8 + 0x10) + -0x20,
                      *(longlong *)(lVar8 + 0x10) + -0x10);
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
        plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
        *plVar1 = *plVar1 + -0x10;
        if (param_2 != 0) {
            lVar8 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
            local_58 = &PTR_FUN_140b569f0;
            local_40 = 1;
            local_48 = lVar8;
            if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar8);
            }
            puVar2 = *(undefined8 **)(lVar8 + 0x10);
            uVar6 = FUN_14005c1b0(lVar8,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar6;
            *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
            local_50 = FUN_1400578c0(lVar8);
            uVar7 = 0;
            if (*(longlong *)(param_1 + 0x1c) != 0) {
                do {
                    local_38 = &PTR_FUN_140b569f0;
                    local_20 = 1;
                    lVar8 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x7340) + 400);
                    local_28 = lVar8;
                    if (*(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar8 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar8);
                    }
                    puVar2 = *(undefined8 **)(lVar8 + 0x10);
                    uVar6 = FUN_14005c1b0(lVar8,0,0);
                    *(undefined4 *)(puVar2 + 1) = 5;
                    *puVar2 = uVar6;
                    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
                    local_30 = FUN_1400578c0(lVar8);
                    FUN_1405dbd60(*(undefined8 *)(*(longlong *)(param_1 + 0x1a) + uVar7 * 8));
                    FUN_1400fb1d0(&local_58);
                    FUN_1400579e0(lVar8);
                    uVar7 = uVar7 + 1;
                    lVar8 = local_48;
                } while (uVar7 < *(ulonglong *)(param_1 + 0x1c));
            }
            FUN_1400fb2a0(param_2,L"arCharacters",local_50);
            if (lVar8 != 0) {
                FUN_1400579e0(lVar8);
            }
        }
        return;
    }
    fVar10 = 0.0;
    local_res8 = (ulonglong)local_res8._4_4_ << 0x20;
    if (*(longlong *)(param_1 + 2) != 0) {
        FUN_1401e83a0(&local_res8);
        if (fVar10 <= (float)local_res8) {
            fVar10 = 1e-06;
        }
        else {
            fVar10 = (float)((uint)(float)local_res8 ^ 0x80000000);
        }
    }
    lVar8 = *(longlong *)(param_2 + 0x10);
    puVar4 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar8 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar8 + 0x10);
    *puVar2 = *puVar4;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    lVar5 = FUN_14018f0e0(&local_38,L"fLastOnline");
    if (*(longlong *)(lVar5 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar8 + 0x10) + 8) = 0;
        *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar5 + 8) + lVar9) != '\0');
        FUN_140058710(lVar8);
    }
    if (CONCAT44(uStack44,local_30) != 0) {
        FUN_14018b900(CONCAT44(uStack44,local_30),0);
    }
    pdVar3 = *(double **)(lVar8 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)fVar10;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(lVar8,0xfffffffd);
    FUN_14005ea50(lVar8,uVar6,*(longlong *)(lVar8 + 0x10) + -0x20,*(longlong *)(lVar8 + 0x10) + -0x10)
            ;
    *(longlong *)(lVar8 + 0x10) = *(longlong *)(lVar8 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



void FUN_1405dc9a0(longlong param_1,short *param_2)

{
    short sVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    lVar2 = *(longlong *)(param_1 + 0x60);
    puVar4 = (undefined8 *)0x0;
    if (param_2 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x60) = 0;
    }
    else {
        sVar1 = *param_2;
        puVar5 = puVar4;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = param_2[(longlong)puVar5];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] = puVar5;
            *puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_2,(longlong)puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)puVar4) = 0;
        *(undefined8 **)(param_1 + 0x60) = puVar4;
    }
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x60);
    return;
}



void FUN_1405dca60(longlong param_1,short *param_2)

{
    short sVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    lVar2 = *(longlong *)(param_1 + 0x58);
    puVar4 = (undefined8 *)0x0;
    if (param_2 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x58) = 0;
    }
    else {
        sVar1 = *param_2;
        puVar5 = puVar4;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = param_2[(longlong)puVar5];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] = puVar5;
            *puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_2,(longlong)puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)puVar4) = 0;
        *(undefined8 **)(param_1 + 0x58) = puVar4;
    }
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x58);
    return;
}



void FUN_1405dcb20(longlong param_1,short *param_2)

{
    short sVar1;
    longlong lVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;

    lVar2 = *(longlong *)(param_1 + 0x50);
    puVar4 = (undefined8 *)0x0;
    if (param_2 == (short *)0x0) {
        *(undefined8 *)(param_1 + 0x50) = 0;
    }
    else {
        sVar1 = *param_2;
        puVar5 = puVar4;
        while (sVar1 != 0) {
            puVar5 = (undefined8 *)((longlong)puVar5 + 1);
            sVar1 = param_2[(longlong)puVar5];
        }
        puVar3 = (undefined8 *)FUN_14018b280((longlong)puVar5 * 2 + 0x12,0);
        if (puVar3 != (undefined8 *)0x0) {
            puVar3[1] = puVar5;
            *puVar3 = &PTR_LAB_140b55060;
            puVar4 = puVar3;
        }
        puVar4 = puVar4 + 2;
        FUN_1407db590(puVar4,param_2,(longlong)puVar5 * 2);
        *(undefined2 *)((longlong)puVar5 * 2 + (longlong)puVar4) = 0;
        *(undefined8 **)(param_1 + 0x50) = puVar4;
    }
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x50);
    return;
}



void FUN_1405dcbe0(undefined4 *param_1,uint param_2,longlong param_3)

{
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    int *piVar7;
    longlong *plVar8;
    ulonglong uVar9;
    longlong local_38;
    undefined *local_30;

    if (param_2 != 0) {
        uVar9 = (ulonglong)param_2;
        piVar7 = (int *)(param_3 + 8);
        do {
            uVar6 = 0;
            if (*(ulonglong *)(param_1 + 0x1c) != 0) {
                plVar8 = *(longlong **)(param_1 + 0x1a);
                do {
                    if ((*(int *)(*plVar8 + 8) == *piVar7) &&
                        (*(longlong *)(*plVar8 + 0x10) == *(longlong *)(piVar7 + 2))) {
                        lVar4 = (*(longlong **)(param_1 + 0x1a))[uVar6];
                        iVar2 = piVar7[8];
                        if ((*(int *)(lVar4 + 0x24) != piVar7[7]) || (*(int *)(lVar4 + 0x28) != iVar2)) {
                            *(int *)(lVar4 + 0x24) = piVar7[7];
                            *(int *)(lVar4 + 0x28) = iVar2;
                        }
                        goto LAB_1405dcd1d;
                    }
                    uVar6 = uVar6 + 1;
                    plVar8 = plVar8 + 1;
                } while (uVar6 < *(ulonglong *)(param_1 + 0x1c));
            }
            lVar4 = FUN_14018b280(0x40);
            if (lVar4 == 0) {
                lVar4 = 0;
            }
            else {
                lVar4 = FUN_1405dbc40(lVar4,param_1,piVar7 + -2);
            }
            lVar3 = *(longlong *)(param_1 + 0x1c);
            lVar1 = lVar3 + 1;
            lVar5 = FUN_14018db00(*(undefined8 *)(param_1 + 0x1a),lVar1,8);
            *(longlong *)(lVar5 + lVar3 * 8) = lVar4;
            if (*(longlong *)(param_1 + 0x1a) != lVar5) {
                FUN_1407db590(lVar5,*(longlong *)(param_1 + 0x1a),*(longlong *)(param_1 + 0x1c) << 3);
                lVar3 = *(longlong *)(param_1 + 0x1a);
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                *(longlong *)(param_1 + 0x1a) = lVar5;
            }
            lVar3 = DAT_140c65898;
            *(longlong *)(param_1 + 0x1c) = lVar1;
            local_38 = lVar3 + 0x6838;
            local_30 = &LAB_1405e2c10;
            FUN_1403f87b0(lVar3,*(undefined4 *)(lVar4 + 8),&local_38,*param_1);
            LAB_1405dcd1d:
            piVar7 = piVar7 + 0xc;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    return;
}



void FUN_1405dcd60(longlong param_1,int *param_2)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    longlong *plVar5;

    uVar4 = 0;
    if (*(ulonglong *)(param_1 + 0x70) != 0) {
        plVar1 = *(longlong **)(param_1 + 0x68);
        plVar5 = plVar1;
        while ((*(int *)(*plVar5 + 8) != *param_2 ||
                (*(longlong *)(*plVar5 + 0x10) != *(longlong *)(param_2 + 2)))) {
            uVar4 = uVar4 + 1;
            plVar5 = plVar5 + 1;
            if (*(ulonglong *)(param_1 + 0x70) <= uVar4) {
                return;
            }
        }
        lVar2 = plVar1[uVar4];
        if (lVar2 != 0) {
            FUN_1400b6120(DAT_140c65ba0 + 0x1e0,lVar2 + 8);
            lVar3 = *(longlong *)(lVar2 + 0x38);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            lVar3 = *(longlong *)(lVar2 + 0x30);
            if (lVar3 != 0) {
                (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
            }
            FUN_14018b900(lVar2,0);
        }
        FUN_140007270((longlong **)(param_1 + 0x68),uVar4);
    }
    return;
}



void FUN_1405dce30(undefined4 *param_1,int *param_2,int param_3)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong *plVar3;

    uVar2 = 0;
    if (*(ulonglong *)(param_1 + 0x1c) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x1a);
        while ((*(int *)(*plVar3 + 8) != *param_2 ||
                (*(longlong *)(*plVar3 + 0x10) != *(longlong *)(param_2 + 2)))) {
            uVar2 = uVar2 + 1;
            plVar3 = plVar3 + 1;
            if (*(ulonglong *)(param_1 + 0x1c) <= uVar2) {
                return;
            }
        }
        lVar1 = (*(longlong **)(param_1 + 0x1a))[uVar2];
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0x28) != param_3)) {
            *(int *)(lVar1 + 0x28) = param_3;
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"FriendshipAccountDataUpdate",
                          &DAT_1409eacd4,*param_1);
        }
    }
    return;
}



void FUN_1405dcee0(undefined4 *param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;

    uVar3 = 0;
    if (*(longlong *)(param_1 + 0x1c) != 0) {
        do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1a) + uVar3 * 8);
            if (lVar1 != 0) {
                FUN_1400b6120(DAT_140c65ba0 + 0x1e0,lVar1 + 8);
                lVar2 = *(longlong *)(lVar1 + 0x38);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                lVar2 = *(longlong *)(lVar1 + 0x30);
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                FUN_14018b900(lVar1,0);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(ulonglong *)(param_1 + 0x1c));
    }
    *(undefined8 *)(param_1 + 0x1c) = 0;
    lVar1 = DAT_140c65898;
    if (param_2 == 0) {
        return;
    }
    param_1[0x10] = 3;
    FUN_1400ea3e0(*(undefined8 *)(lVar1 + 0x7340),"FriendshipAccountDataUpdate",&DAT_1409eacd4,
                  *param_1);
    return;
}



void FUN_1405dcfc0(longlong param_1,int param_2,short *param_3)

{
    short sVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    ulonglong uVar7;

    uVar7 = 0;
    if (*(longlong *)(param_1 + 0x70) != 0) {
        do {
            puVar5 = (undefined8 *)0x0;
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + uVar7 * 8);
            if (*(int *)(lVar2 + 8) == param_2) {
                lVar3 = *(longlong *)(lVar2 + 0x38);
                if (param_3 == (short *)0x0) {
                    *(undefined8 *)(lVar2 + 0x38) = 0;
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
                    *(undefined8 **)(lVar2 + 0x38) = puVar5;
                }
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulonglong *)(param_1 + 0x70));
    }
    return;
}



undefined4 *
FUN_1405dd0c0(undefined4 *param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
    longlong *plVar1;
    short sVar2;
    short *psVar3;
    undefined8 *puVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;

    *param_1 = param_4;
    *(undefined8 *)(param_1 + 2) = *param_2;
    param_1[4] = *(undefined4 *)(param_2 + 1);
    psVar3 = (short *)param_2[2];
    puVar6 = (undefined8 *)0x0;
    if (psVar3 == (short *)0x0) {
        *(undefined8 *)(param_1 + 6) = 0;
    }
    else {
        sVar2 = *psVar3;
        puVar7 = puVar6;
        while (sVar2 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar2 = psVar3[(longlong)puVar7];
        }
        puVar4 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
        puVar5 = puVar6;
        if (puVar4 != (undefined8 *)0x0) {
            *puVar4 = &PTR_LAB_140b55060;
            puVar4[1] = puVar7;
            puVar5 = puVar4;
        }
        puVar5 = puVar5 + 2;
        FUN_1407db590(puVar5,psVar3,(longlong)puVar7 * 2);
        *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar5) = 0;
        *(undefined8 **)(param_1 + 6) = puVar5;
    }
    psVar3 = (short *)param_2[3];
    if (psVar3 == (short *)0x0) {
        *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
        sVar2 = *psVar3;
        puVar7 = puVar6;
        while (sVar2 != 0) {
            puVar7 = (undefined8 *)((longlong)puVar7 + 1);
            sVar2 = psVar3[(longlong)puVar7];
        }
        puVar5 = (undefined8 *)FUN_14018b280((longlong)puVar7 * 2 + 0x12,0);
        if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = &PTR_LAB_140b55060;
            puVar5[1] = puVar7;
            puVar6 = puVar5;
        }
        puVar6 = puVar6 + 2;
        FUN_1407db590(puVar6,psVar3,(longlong)puVar7 * 2);
        *(undefined2 *)((longlong)puVar7 * 2 + (longlong)puVar6) = 0;
        *(undefined8 **)(param_1 + 8) = puVar6;
    }
    param_1[0xc] = *(undefined4 *)((longlong)param_2 + 0x24);
    *(longlong **)(param_1 + 0xe) = param_3;
    *(undefined8 *)(param_1 + 0x10) = 0;
    plVar1 = (longlong *)(param_1 + 0x10);
    *plVar1 = *param_3;
    *param_3 = (longlong)param_1;
    if (*plVar1 != 0) {
        *(longlong **)(*plVar1 + 0x38) = plVar1;
    }
    if (*(float *)(param_2 + 4) != 0.0) {
        if (param_1 != (undefined4 *)0xffffffffffffffd8) {
            FUN_1401e82f0();
        }
        return param_1;
    }
    *(undefined8 *)(param_1 + 10) = 0;
    return param_1;
}



void FUN_1405dd250(uint *param_1,longlong param_2)

{
    longlong *plVar1;
    uint uVar2;
    undefined8 *puVar3;
    uint *puVar4;
    double *pdVar5;
    undefined8 *puVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    longlong lVar10;
    longlong lVar11;
    ulonglong uVar12;
    float fVar13;
    float local_res8 [2];
    undefined local_58 [8];
    longlong local_50;

    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar12 = (ulonglong)*param_1;
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,&DAT_140b22e78,uVar12 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar12 = (ulonglong)param_1[4];
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar3,L"strInviteType",uVar12 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 8);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strNote",uVar8);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 6);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    FUN_1400f0870(*(undefined8 *)(param_2 + 0x10),puVar3,L"strDisplayName",uVar8);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    uVar2 = param_1[0xc];
    lVar11 = *(longlong *)(param_2 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    lVar7 = FUN_14018f0e0(local_58,L"bIsNew");
    lVar9 = -1;
    if (*(longlong *)(lVar7 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar10) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    puVar4 = *(uint **)(lVar11 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)((~uVar2 & 1) != 0);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    local_res8[0] = 0.0;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    fVar13 = 0.0;
    if (*(longlong *)(param_1 + 10) != 0) {
        FUN_1401e83a0(local_res8);
        fVar13 = local_res8[0];
        if (local_res8[0] <= 1e-06) {
            fVar13 = 1e-06;
        }
    }
    lVar11 = *(longlong *)(param_2 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar3 = *(undefined8 **)(lVar11 + 0x10);
    *puVar3 = *puVar6;
    *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *)(param_2 + 0x10);
    lVar7 = FUN_14018f0e0(local_58,L"fDaysUntilExpired");
    lVar7 = *(longlong *)(lVar7 + 8);
    if (lVar7 == 0) {
        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    }
    else {
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(lVar7 + lVar9) != '\0');
        FUN_140058710(lVar11,lVar7,lVar9);
    }
    if (local_50 != 0) {
        FUN_14018b900(local_50,0);
    }
    pdVar5 = *(double **)(lVar11 + 0x10);
    *(undefined4 *)(pdVar5 + 1) = 3;
    *pdVar5 = (double)fVar13;
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
    uVar8 = FUN_1400580e0(lVar11,0xfffffffd);
    FUN_14005ea50(lVar11,uVar8,*(longlong *)(lVar11 + 0x10) + -0x20,
                  *(longlong *)(lVar11 + 0x10) + -0x10);
    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x20;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    return;
}



longlong FUN_1405dd5a0(longlong param_1)

{
    undefined2 *puVar1;

    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 8) = 0x544e5645;
    *(undefined4 *)(param_1 + 0x4c) = 0x5e;
    FUN_1405e4000();
    FUN_1405e4080(param_1 + 0x78);
    FUN_1405e4100(param_1 + 0xa0);
    FUN_1400522f0(param_1 + 200);
    FUN_140019600(param_1 + 0xf0);
    FUN_1405e4180(param_1 + 0x118);
    FUN_1405e4200(param_1 + 0x140);
    FUN_1400522f0(param_1 + 0x168);
    FUN_1400522f0(param_1 + 400);
    FUN_140019600(param_1 + 0x1b8);
    FUN_1405e4280(param_1 + 0x1e0);
    FUN_1400522f0(param_1 + 0x208);
    FUN_140019600(param_1 + 0x230);
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x280) = 0;
    *(undefined4 *)(param_1 + 0x288) = 0;
    *(undefined4 *)(param_1 + 0x290) = 4;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
    *(undefined8 *)(param_1 + 0x2c8) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10,0);
    *(undefined2 **)(param_1 + 0x2b8) = puVar1;
    *(undefined2 **)(param_1 + 0x2c0) = puVar1;
    *(undefined2 **)(param_1 + 0x2c8) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    puVar1 = (undefined2 *)FUN_14018b280(0x10);
    *(undefined2 **)(param_1 + 0x2d8) = puVar1;
    *(undefined2 **)(param_1 + 0x2e0) = puVar1;
    *(undefined2 **)(param_1 + 0x2e8) = puVar1 + 8;
    if (puVar1 != (undefined2 *)0x0) {
        *puVar1 = 0;
    }
    *(undefined4 *)(param_1 + 0x2f0) = 4;
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined4 *)(param_1 + 0x2f8) = 0x544e5645;
    *(undefined4 *)(param_1 + 0x33c) = 0x5e;
    *(undefined4 *)(param_1 + 0x340) = 1;
    *(undefined4 *)(param_1 + 0x344) = 1;
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
    *(undefined8 *)(param_1 + 0x378) = 0;
    *(undefined4 *)(param_1 + 0x348) = 0x544e5645;
    *(undefined4 *)(param_1 + 0x38c) = 0x5e;
    return param_1;
}



void FUN_1405dd7c0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong *)(param_1 + 600);
    while (lVar1 != 0) {
        if (*(undefined8 **)(lVar1 + 0x108) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x108) = *(undefined8 *)(lVar1 + 0x110);
        }
        if (*(longlong *)(lVar1 + 0x110) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x110) + 0x108) = *(undefined8 *)(lVar1 + 0x108);
        }
        *(undefined8 *)(lVar1 + 0x108) = 0;
        *(undefined8 *)(lVar1 + 0x110) = 0;
        lVar2 = *(longlong *)(lVar1 + 0xd8);
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        FUN_14018b900(lVar1);
        lVar1 = *(longlong *)(param_1 + 600);
    }
    lVar1 = *(longlong *)(param_1 + 0x260);
    while (lVar1 != 0) {
        FUN_1405dded0(lVar1);
        FUN_14018b900(lVar1);
        lVar1 = *(longlong *)(param_1 + 0x260);
    }
    lVar1 = *(longlong *)(param_1 + 0x268);
    while (lVar1 != 0) {
        FUN_1405dded0(lVar1);
        FUN_14018b900(lVar1);
        lVar1 = *(longlong *)(param_1 + 0x268);
    }
    lVar1 = *(longlong *)(param_1 + 0x270);
    while (lVar1 != 0) {
        if (*(undefined8 **)(lVar1 + 0xd0) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0xd0) = *(undefined8 *)(lVar1 + 0xd8);
        }
        if (*(longlong *)(lVar1 + 0xd8) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0xd8) + 0xd0) = *(undefined8 *)(lVar1 + 0xd0);
        }
        *(undefined8 *)(lVar1 + 0xd0) = 0;
        *(undefined8 *)(lVar1 + 0xd8) = 0;
        FUN_14018b900();
        lVar1 = *(longlong *)(param_1 + 0x270);
    }
    lVar1 = *(longlong *)(param_1 + 0x278);
    while (lVar1 != 0) {
        FUN_1405dc3a0(lVar1);
        FUN_14018b900(lVar1);
        lVar1 = *(longlong *)(param_1 + 0x278);
    }
    lVar1 = *(longlong *)(param_1 + 0x280);
    while (lVar1 != 0) {
        if (*(undefined8 **)(lVar1 + 0x38) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar1 + 0x38) = *(undefined8 *)(lVar1 + 0x40);
        }
        if (*(longlong *)(lVar1 + 0x40) != 0) {
            *(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x38) = *(undefined8 *)(lVar1 + 0x38);
        }
        *(undefined8 *)(lVar1 + 0x38) = 0;
        *(undefined8 *)(lVar1 + 0x40) = 0;
        lVar2 = *(longlong *)(lVar1 + 0x20);
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        lVar2 = *(longlong *)(lVar1 + 0x18);
        if (lVar2 != 0) {
            (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        FUN_14018b900(lVar1);
        lVar1 = *(longlong *)(param_1 + 0x280);
    }
    FUN_140019490(param_1 + 0x50);
    FUN_140019490(param_1 + 0x78);
    FUN_140019490(param_1 + 0xa0);
    FUN_140019490(param_1 + 200);
    FUN_140019490(param_1 + 0xf0);
    FUN_140019490(param_1 + 0x118);
    FUN_140019490(param_1 + 0x140);
    FUN_140019490(param_1 + 0x168);
    FUN_140019490(param_1 + 400);
    FUN_140019490(param_1 + 0x1b8);
    FUN_140019490(param_1 + 0x1e0);
    FUN_140019490(param_1 + 0x208);
    FUN_140019490(param_1 + 0x230);
    FUN_140195d70((undefined4 *)(param_1 + 0x348));
    *(undefined4 *)(param_1 + 0x348) = 0;
    if (*(undefined8 **)(param_1 + 0x358) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x360);
    }
    if (*(undefined8 **)(param_1 + 0x360) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x358);
    }
    *(undefined8 *)(param_1 + 0x358) = 0;
    *(undefined8 *)(param_1 + 0x360) = 0;
    FUN_140195d70((undefined4 *)(param_1 + 0x2f8));
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    if (*(undefined8 **)(param_1 + 0x308) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x310);
    }
    if (*(undefined8 **)(param_1 + 0x310) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x308);
    }
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    if (*(longlong *)(param_1 + 0x2d8) != 0) {
        FUN_14018b900();
    }
    if (*(longlong *)(param_1 + 0x2b8) != 0) {
        FUN_14018b900(*(longlong *)(param_1 + 0x2b8),0);
    }
    lVar1 = *(longlong *)(param_1 + 0x2a0);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x298);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (*(longlong *)(param_1 + 0x280) != 0) {
        FUN_1401a4a00(param_1 + 0x280);
    }
    if (*(longlong *)(param_1 + 0x278) != 0) {
        FUN_1401a4a00(param_1 + 0x278);
    }
    if (*(longlong *)(param_1 + 0x270) != 0) {
        FUN_1401a4a00(param_1 + 0x270);
    }
    if (*(longlong *)(param_1 + 0x268) != 0) {
        FUN_1401a4a00(param_1 + 0x268);
    }
    if (*(longlong *)(param_1 + 0x260) != 0) {
        FUN_1401a4a00(param_1 + 0x260);
    }
    if (*(longlong *)(param_1 + 600) != 0) {
        FUN_1401a4a00(param_1 + 600);
    }
    FUN_140019490(param_1 + 0x230);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x240),0);
    *(undefined8 *)(param_1 + 0x240) = 0;
    FUN_140019490(param_1 + 0x208);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x218),0);
    *(undefined8 *)(param_1 + 0x218) = 0;
    FUN_140019490(param_1 + 0x1e0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x1f0),0);
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    FUN_140019490(param_1 + 0x1b8);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x1c8),0);
    *(undefined8 *)(param_1 + 0x1c8) = 0;
    FUN_140019490(param_1 + 400);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x1a0),0);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    FUN_140019490(param_1 + 0x168);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x178),0);
    *(undefined8 *)(param_1 + 0x178) = 0;
    FUN_140019490(param_1 + 0x140);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x150),0);
    *(undefined8 *)(param_1 + 0x150) = 0;
    FUN_140019490(param_1 + 0x118);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x128),0);
    *(undefined8 *)(param_1 + 0x128) = 0;
    FUN_140019490(param_1 + 0xf0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x100),0);
    *(undefined8 *)(param_1 + 0x100) = 0;
    FUN_140019490(param_1 + 200);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xd8),0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_140019490(param_1 + 0xa0);
    FUN_14018b900(*(undefined8 *)(param_1 + 0xb0),0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    FUN_140019490(param_1 + 0x78);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x88),0);
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_140019490(param_1 + 0x50);
    FUN_14018b900(*(undefined8 *)(param_1 + 0x60),0);
    *(undefined8 *)(param_1 + 0x60) = 0;
    FUN_140195d70(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(undefined8 **)(param_1 + 0x18) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x20);
    }
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
}



longlong FUN_1405ddd80(longlong param_1)

{
    longlong lVar1;

    if (*(undefined8 **)(param_1 + 0x108) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x110);
    }
    if (*(longlong *)(param_1 + 0x110) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x110) + 0x108) = *(undefined8 *)(param_1 + 0x108);
    }
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined8 *)(param_1 + 0x110) = 0;
    lVar1 = *(longlong *)(param_1 + 0xd8);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



longlong FUN_1405dde00(longlong param_1)

{
    if (*(undefined8 **)(param_1 + 0xd0) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0xd8);
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xd8) + 0xd0) = *(undefined8 *)(param_1 + 0xd0);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_14018b900(param_1,0);
    return param_1;
}



longlong FUN_1405dde60(longlong param_1)

{
    longlong lVar1;

    if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x40);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38) = *(undefined8 *)(param_1 + 0x38);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x18);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    FUN_14018b900(param_1,0);
    return param_1;
}



void FUN_1405dded0(longlong param_1)

{
    longlong lVar1;

    if (*(undefined8 **)(param_1 + 0x70) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x78);
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70) = *(undefined8 *)(param_1 + 0x70);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
    if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x60) = *(undefined8 *)(param_1 + 0x60);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    lVar1 = *(longlong *)(param_1 + 0x58);
    if (lVar1 != 0) {
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    lVar1 = *(longlong *)(param_1 + 0x50);
    if (lVar1 != 0) {
        // WARNING: Could not recover jumptable at 0x0001405ddf57. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
        return;
    }
    return;
}



undefined8 FUN_1405ddf70(undefined4 *param_1)

{
    undefined8 uVar1;

    *param_1 = DAT_140c636a8;
    DAT_140c65ba0 = param_1;
    uVar1 = FUN_14034bdd0(param_1,0x59d75);
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1405e32e0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1405e32f0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1405e3300,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1405e3310,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1405e3320,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1405e3330,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e3340,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e3640,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e34c0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e37c0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1405e3940,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e39e0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,&LAB_1405e3a60,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e3a70,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e3c10,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e3db0,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140001b70,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_140001b70,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e3f40,0);
    uVar1 = FUN_14034bdd0();
    FUN_1400ec4b0(*(undefined8 *)(DAT_140c65898 + 0x7340),uVar1,FUN_1405e3fa0,0);
    FUN_1405df340(param_1);
    return 0;
}
