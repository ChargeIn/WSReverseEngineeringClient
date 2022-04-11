//
// Created by flop on 04.04.22.
//
#include "../../include.h"

ulonglong FUN_1406e5110(longlong param_1,undefined8 *param_2)

{
    undefined8 uVar1;
    ulonglong *puVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar1 = *param_2;
    uVar3 = (**(code **)(param_1 + 0x9e8))(uVar1);
    uVar4 = uVar3 / *(ulonglong *)(param_1 + 0x9d8);
    puVar2 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x9e0) + (uVar3 % *(ulonglong *)(param_1 + 0x9d8)) * 8);
    while( true ) {
        if (puVar2 == (ulonglong *)0x0) {
            return uVar4;
        }
        if ((uVar3 == *puVar2) &&
            (uVar4 = (**(code **)(param_1 + 0x9f0))(uVar1,puVar2 + 2), (int)uVar4 != 0)) break;
        puVar2 = (ulonglong *)puVar2[1];
    }
    if (puVar2 + 3 == (ulonglong *)0x0) {
        return uVar4;
    }
    uVar4 = FUN_1406e51a0(param_1,puVar2[3]);
    return uVar4;
}



void FUN_1406e51a0(longlong param_1,longlong *param_2)

{
    undefined8 uVar1;
    ulonglong *puVar2;
    byte bVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    int iVar8;

    iVar8 = 0;
    uVar6 = 1;
    bVar3 = 1;
    uVar7 = 0;
    if (*(longlong *)(*param_2 + 0x10) != 0) {
        do {
            uVar1 = **(undefined8 **)(*(longlong *)(*param_2 + 8) + uVar7 * 8);
            uVar5 = (**(code **)(param_1 + 0x988))(uVar1);
            for (puVar2 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x980) + (uVar5 % *(ulonglong *)(param_1 + 0x978)) * 8
                    ); puVar2 != (ulonglong *)0x0; puVar2 = (ulonglong *)puVar2[1]) {
                if ((uVar5 == *puVar2) &&
                    (iVar4 = (**(code **)(param_1 + 0x990))(uVar1,puVar2 + 2), iVar4 != 0)) {
                    if (puVar2 + 3 != (ulonglong *)0x0) {
                        iVar4 = *(int *)(puVar2[3] + 0x40);
                        if (iVar4 != 0) {
                            uVar6 = 0;
                        }
                        if (iVar4 != 3) {
                            bVar3 = 0;
                        }
                    }
                    break;
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulonglong *)(*param_2 + 0x10));
        if ((int)uVar6 == 0) {
            iVar8 = bVar3 + 1;
        }
    }
    *(int *)(param_2 + 8) = iVar8;
    return;
}



ulonglong FUN_1406e52a0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    ulonglong *puVar3;
    int local_res8;
    int local_resc;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar1 = (**(code **)(param_1 + 0x988))(local_res10);
    uVar2 = uVar1 / *(ulonglong *)(param_1 + 0x978);
    puVar3 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x980) + (uVar1 % *(ulonglong *)(param_1 + 0x978)) * 8);
    if (puVar3 == (ulonglong *)0x0) {
        return uVar2;
    }
    while ((uVar1 != *puVar3 ||
            (uVar2 = (**(code **)(param_1 + 0x990))(local_res10,puVar3 + 2), (int)uVar2 == 0))) {
        puVar3 = (ulonglong *)puVar3[1];
        if (puVar3 == (ulonglong *)0x0) {
            return uVar2;
        }
    }
    if (puVar3 + 3 == (ulonglong *)0x0) {
        return uVar2;
    }
    uVar1 = puVar3[3];
    if (*(undefined8 **)(uVar1 + 0x250) != param_3) {
        if (param_3 != (undefined8 *)0x0) {
            (**(code **)*param_3)(param_3);
        }
        if (*(longlong **)(uVar1 + 0x250) != (longlong *)0x0) {
            (**(code **)(**(longlong **)(uVar1 + 0x250) + 8))();
        }
        *(undefined8 **)(uVar1 + 0x250) = param_3;
    }
    local_res8 = (int)(*(float *)(param_1 + 0x450) + *(float *)(uVar1 + 0x10));
    local_resc = (int)(*(float *)(param_1 + 0x454) + *(float *)(uVar1 + 0x14));
    uVar1 = FUN_1400cc900(param_3,&local_res8);
    return uVar1;
}



ulonglong FUN_1406e5380(longlong param_1,undefined4 param_2)

{
    longlong *plVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    ulonglong *puVar4;
    undefined4 local_res10 [2];

    local_res10[0] = param_2;
    uVar2 = (**(code **)(param_1 + 0x988))(local_res10);
    uVar3 = uVar2 / *(ulonglong *)(param_1 + 0x978);
    puVar4 = *(ulonglong **)
            (*(longlong *)(param_1 + 0x980) + (uVar2 % *(ulonglong *)(param_1 + 0x978)) * 8);
    if (puVar4 == (ulonglong *)0x0) {
        return uVar3;
    }
    while ((uVar2 != *puVar4 ||
            (uVar3 = (**(code **)(param_1 + 0x990))(local_res10,puVar4 + 2), (int)uVar3 == 0))) {
        puVar4 = (ulonglong *)puVar4[1];
        if (puVar4 == (ulonglong *)0x0) {
            return uVar3;
        }
    }
    if (puVar4 + 3 == (ulonglong *)0x0) {
        return uVar3;
    }
    uVar2 = puVar4[3];
    plVar1 = *(longlong **)(uVar2 + 0x250);
    if (plVar1 == (longlong *)0x0) {
        return uVar3;
    }
    uVar3 = (**(code **)(*plVar1 + 8))();
    *(undefined8 *)(uVar2 + 0x250) = 0;
    return uVar3;
}



void FUN_1406e5430(longlong param_1,longlong *param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;

    uVar2 = *(ulonglong *)(param_1 + 0x9a0);
    uVar6 = 0;
    if (uVar2 != 0) {
        do {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x998) + uVar6 * 8);
            if (*(int *)(lVar3 + 0x40) - 2U < 2) {
                lVar4 = param_2[1];
                lVar1 = lVar4 + 1;
                lVar5 = FUN_14018db00(*param_2,lVar1,8);
                *(longlong *)(lVar5 + lVar4 * 8) = lVar3;
                if (*param_2 != lVar5) {
                    FUN_1407db590(lVar5,*param_2,param_2[1] << 3);
                    lVar3 = *param_2;
                    if (lVar3 != 0) {
                        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                    }
                    *param_2 = lVar5;
                }
                param_2[1] = lVar1;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
    }
    return;
}



void FUN_1406e5500(longlong param_1,longlong **param_2,longlong *param_3,undefined8 *param_4,
                   code *param_5)

{
    int iVar1;
    longlong *plVar2;
    undefined **ppuVar3;
    undefined *puVar4;
    undefined *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    uint uVar9;
    int iVar10;
    int iVar11;
    undefined8 uVar12;
    ulonglong *puVar13;
    ulonglong uVar14;
    ulonglong *puVar15;
    ulonglong uVar16;
    longlong lVar17;
    ulonglong uVar18;
    char *pcVar19;
    ulonglong *puVar20;
    char *pcVar21;
    ulonglong **ppuVar22;
    ulonglong *puVar23;
    undefined8 *puVar24;
    byte bVar25;
    char *pcVar26;
    char *pcVar27;
    uint uVar28;
    ulonglong **ppuVar29;
    undefined *puVar30;
    int iVar31;
    uint uVar32;
    ulonglong *puVar33;
    ulonglong uVar34;
    longlong **pplVar35;
    bool bVar36;
    undefined4 local_res18;
    undefined4 uStackX28;
    undefined8 *local_res20;
    undefined *local_168;
    longlong **local_160;
    ulonglong local_158;
    undefined8 local_150;
    ulonglong **local_148;
    undefined local_140 [8];
    char *local_138;
    longlong local_130;
    undefined4 local_120;
    undefined4 local_11c;
    ulonglong **local_118;
    ulonglong *local_110;
    ulonglong local_108;
    ulonglong local_100;
    ulonglong local_f8;
    ulonglong local_f0;
    ulonglong *local_e8;
    int local_e0;
    undefined4 local_d8;
    ulonglong *local_d0;
    int local_c8;
    ulonglong local_c0;
    ulonglong local_b8;
    ulonglong **local_b0;
    code *local_a8;
    code *local_a0;
    ulonglong local_98;
    ulonglong local_90;
    ulonglong **local_88;
    code *local_80;
    code *local_78;
    ulonglong *local_70;
    int local_68;
    ulonglong *local_60;
    int local_58;

    param_4[1] = 0;
    local_res20 = param_4;
    local_138 = (char *)FUN_14018b280(0x28,0);
    local_130 = 0;
    *local_138 = '\0';
    *(undefined8 *)(local_138 + 8) = 0;
    *(char **)(local_138 + 0x10) = local_138;
    *(char **)(local_138 + 0x18) = local_138;
    local_158 = 0;
    local_168 = &LAB_1403d33b0;
    local_160 = (longlong **)0x0;
    FUN_140312f60(&local_160);
    local_f0 = 0;
    local_98 = 0;
    local_150 = 0;
    local_f8 = 0xd;
    local_90 = 0xd;
    uVar12 = SUB168(ZEXT816(8) * ZEXT816(0xd),0);
    if (SUB168(ZEXT816(8) * ZEXT816(0xd) >> 0x40,0) != 0) {
        uVar12 = 0xffffffffffffffff;
    }
    local_118 = (ulonglong **)FUN_14018b280(uVar12,0);
    local_88 = local_118;
    FUN_1407e4830(local_118,0);
    local_108 = 0xd;
    local_80 = FUN_1402dd520;
    local_b8 = 0xd;
    local_78 = FUN_1402dd540;
    local_100 = 0;
    local_c0 = 0;
    uVar12 = SUB168(ZEXT816(8) * ZEXT816(0xd),0);
    if (SUB168(ZEXT816(8) * ZEXT816(0xd) >> 0x40,0) != 0) {
        uVar12 = 0xffffffffffffffff;
    }
    local_148 = (ulonglong **)FUN_14018b280(uVar12);
    local_b0 = local_148;
    FUN_1407e4830(local_148);
    uVar18 = param_3[1];
    uVar34 = 0;
    local_a8 = FUN_1402dd520;
    local_a0 = FUN_1402dd540;
    if (uVar18 != 0) {
        do {
            puVar15 = (ulonglong *)0x0;
            pplVar35 = *(longlong ***)(*param_3 + uVar34 * 8);
            puVar13 = (ulonglong *)FUN_14018b280(0x18);
            if (puVar13 != (ulonglong *)0x0) {
                puVar13[1] = 0;
                puVar15 = puVar13;
            }
            *puVar15 = (ulonglong)pplVar35;
            iVar31 = *(int *)(**pplVar35 + 4);
            iVar11 = *(int *)(**pplVar35 + 8);
            iVar10 = *(int *)(**param_2 + 4);
            iVar1 = *(int *)(**param_2 + 8);
            uVar9 = iVar31 - iVar10;
            uVar28 = (int)uVar9 >> 0x1f;
            uVar32 = (iVar1 + iVar10) - (iVar11 + iVar31);
            iVar31 = (uVar9 ^ uVar28) - uVar28;
            uVar9 = (int)uVar32 >> 0x1f;
            iVar10 = (uVar32 ^ uVar9) - uVar9;
            if (iVar31 < iVar10) {
                iVar31 = iVar10;
            }
            uVar28 = iVar11 - iVar1;
            uVar9 = (int)uVar28 >> 0x1f;
            iVar11 = (uVar28 ^ uVar9) - uVar9;
            if (iVar31 < iVar11) {
                iVar31 = iVar11;
            }
            puVar13 = puVar15 + 1;
            if ((undefined **)puVar15[1] == (undefined **)0x0) {
                ppuVar29 = &local_d0;
                local_d0 = puVar13;
                local_c8 = iVar31;
                LAB_1406e5733:
                *puVar13 = (ulonglong)&local_168;
                uVar14 = FUN_14030a7c0(&local_160,ppuVar29);
                puVar15[2] = uVar14;
                FUN_14030a510(&local_168);
            }
            else {
                if ((undefined **)puVar15[1] != &local_168) {
                    FUN_1403088b0();
                    ppuVar29 = &local_e8;
                    local_e8 = puVar13;
                    local_e0 = iVar31;
                    goto LAB_1406e5733;
                }
                *(int *)(local_160 + puVar15[2] * 2 + 1) = iVar31;
                iVar31 = FUN_14030a510(&local_168);
                if (iVar31 == 0) {
                    FUN_14030a5f0(&local_168);
                }
            }
            uStackX28 = *(undefined4 *)(**pplVar35 + 8);
            local_res18 = *(undefined4 *)(**pplVar35 + 4);
            iVar31 = *(int *)(**pplVar35 + 4);
            iVar11 = *(int *)(**pplVar35 + 8);
            iVar10 = *(int *)(**param_2 + 4);
            iVar1 = *(int *)(**param_2 + 8);
            uVar9 = iVar31 - iVar10;
            uVar28 = (int)uVar9 >> 0x1f;
            uVar32 = (iVar1 + iVar10) - (iVar11 + iVar31);
            iVar31 = (uVar9 ^ uVar28) - uVar28;
            uVar9 = (int)uVar32 >> 0x1f;
            iVar10 = (uVar32 ^ uVar9) - uVar9;
            if (iVar31 < iVar10) {
                iVar31 = iVar10;
            }
            uVar28 = iVar11 - iVar1;
            uVar9 = (int)uVar28 >> 0x1f;
            iVar11 = (uVar28 ^ uVar9) - uVar9;
            if (iVar31 < iVar11) {
                iVar31 = iVar11;
            }
            if (local_f0 == local_f8) {
                FUN_1400290d0(&local_98);
                local_118 = local_88;
                local_f8 = local_90;
                local_f0 = local_98;
            }
            uVar14 = (*local_80)(&local_res18);
            ppuVar29 = local_118 + uVar14 % local_f8;
            puVar15 = (ulonglong *)FUN_14018b280(0x20);
            if (puVar15 != (ulonglong *)0x0) {
                puVar13 = *ppuVar29;
                *puVar15 = uVar14;
                puVar15[1] = (ulonglong)puVar13;
                *(undefined4 *)(puVar15 + 2) = local_res18;
                *(undefined4 *)((longlong)puVar15 + 0x14) = uStackX28;
                *(int *)(puVar15 + 3) = iVar31;
            }
            *ppuVar29 = puVar15;
            local_f0 = local_f0 + 1;
            local_98 = local_f0;
            if (local_100 == local_108) {
                FUN_1400290d0(&local_c0);
                local_148 = local_b0;
                local_108 = local_b8;
                local_100 = local_c0;
            }
            uVar14 = local_108;
            uVar16 = (*local_a8)(&local_res18);
            ppuVar29 = local_148 + uVar16 % uVar14;
            puVar13 = (ulonglong *)FUN_14018b280(0x20);
            puVar15 = (ulonglong *)0x0;
            if (puVar13 != (ulonglong *)0x0) {
                puVar15 = *ppuVar29;
                *puVar13 = uVar16;
                puVar13[1] = (ulonglong)puVar15;
                *(undefined4 *)(puVar13 + 2) = local_res18;
                *(undefined4 *)((longlong)puVar13 + 0x14) = uStackX28;
                *(undefined4 *)(puVar13 + 3) = local_res18;
                *(undefined4 *)((longlong)puVar13 + 0x1c) = uStackX28;
                puVar15 = puVar13;
            }
            *ppuVar29 = puVar15;
            local_100 = local_100 + 1;
            bVar36 = true;
            pcVar26 = *(char **)(local_138 + 8);
            pcVar19 = local_138;
            while (pcVar26 != (char *)0x0) {
                bVar36 = pplVar35 < *(longlong ***)(pcVar26 + 0x20);
                pcVar19 = pcVar26;
                if (bVar36) {
                    pcVar26 = *(char **)(pcVar26 + 0x10);
                }
                else {
                    pcVar26 = *(char **)(pcVar26 + 0x18);
                }
            }
            pcVar26 = pcVar19;
            local_c0 = local_100;
            if (bVar36) {
                if (pcVar19 != *(char **)(local_138 + 0x10)) {
                    if ((*pcVar19 == '\0') && (*(char **)(*(longlong *)(pcVar19 + 8) + 8) == pcVar19)) {
                        pcVar26 = *(char **)(pcVar19 + 0x18);
                    }
                    else {
                        pcVar26 = *(char **)(pcVar19 + 0x10);
                        if (pcVar26 == (char *)0x0) {
                            pcVar26 = *(char **)(pcVar19 + 8);
                            pcVar27 = pcVar26;
                            if (pcVar19 == *(char **)(pcVar26 + 0x10)) {
                                do {
                                    pcVar26 = *(char **)(pcVar27 + 8);
                                    bVar36 = pcVar27 == *(char **)(pcVar26 + 0x10);
                                    pcVar27 = pcVar26;
                                } while (bVar36);
                            }
                        }
                        else {
                            for (pcVar27 = *(char **)(pcVar26 + 0x18); pcVar27 != (char *)0x0;
                                 pcVar27 = *(char **)(pcVar27 + 0x18)) {
                                pcVar26 = pcVar27;
                            }
                        }
                    }
                    goto LAB_1406e597d;
                }
                LAB_1406e5987:
                if ((pcVar19 == local_138) || (pplVar35 < *(longlong ***)(pcVar19 + 0x20))) {
                    lVar17 = FUN_14018b280(0x28);
                    if ((ulonglong *)(lVar17 + 0x20) != (ulonglong *)0x0) {
                        *(ulonglong *)(lVar17 + 0x20) = (ulonglong)pplVar35;
                    }
                    *(longlong *)(pcVar19 + 0x10) = lVar17;
                    if (pcVar19 == local_138) {
                        *(longlong *)(local_138 + 8) = lVar17;
                        *(longlong *)(local_138 + 0x18) = lVar17;
                    }
                    else if (pcVar19 == *(char **)(local_138 + 0x10)) {
                        *(longlong *)(local_138 + 0x10) = lVar17;
                    }
                }
                else {
                    lVar17 = FUN_14018b280(0x28);
                    if ((ulonglong *)(lVar17 + 0x20) != (ulonglong *)0x0) {
                        *(ulonglong *)(lVar17 + 0x20) = (ulonglong)pplVar35;
                    }
                    *(longlong *)(pcVar19 + 0x18) = lVar17;
                    if (pcVar19 == *(char **)(local_138 + 0x18)) {
                        *(longlong *)(local_138 + 0x18) = lVar17;
                    }
                }
                *(char **)(lVar17 + 8) = pcVar19;
                *(undefined8 *)(lVar17 + 0x10) = 0;
                *(undefined8 *)(lVar17 + 0x18) = 0;
                FUN_1400081c0();
                local_130 = local_130 + 1;
            }
            else {
                LAB_1406e597d:
                if (*(longlong ***)(pcVar26 + 0x20) < pplVar35) goto LAB_1406e5987;
            }
            uVar34 = uVar34 + 1;
        } while (uVar34 < uVar18);
    }
    while (ppuVar29 = local_148, uVar18 = local_108, ppuVar22 = local_148, local_158 != 0) {
        puVar15 = (ulonglong *)0x0;
        plVar2 = *local_160;
        *plVar2 = 0;
        lVar17 = local_158 - 1;
        if (lVar17 == 0) {
            FUN_14030a710(&local_160,0);
        }
        else {
            *local_160 = local_160[lVar17 * 2];
            local_160[1] = local_160[lVar17 * 2 + 1];
            FUN_14030a710(&local_160);
            (*local_160)[1] = 0;
            FUN_14030a5f0(&local_168);
        }
        pplVar35 = (longlong **)plVar2[-1];
        if (*plVar2 != 0) {
            FUN_1403088b0();
        }
        FUN_14018b900(plVar2 + -1);
        uVar18 = local_108;
        ppuVar29 = local_148;
        puVar8 = local_res20;
        if (pplVar35 == param_2) goto LAB_1406e64b0;
        local_110 = (ulonglong *)0x0;
        puVar13 = puVar15;
        puVar23 = puVar15;
        do {
            if (*(undefined8 **)((longlong)(*pplVar35 + 1) + (longlong)puVar23) != (undefined8 *)0x0) {
                uVar12 = **(undefined8 **)((longlong)(*pplVar35 + 1) + (longlong)puVar23);
                uVar18 = (**(code **)(param_1 + 0x988))(uVar12);
                for (puVar33 = *(ulonglong **)
                        (*(longlong *)(param_1 + 0x980) +
                         (uVar18 % *(ulonglong *)(param_1 + 0x978)) * 8); puVar15 = local_110,
                             puVar33 != (ulonglong *)0x0; puVar33 = (ulonglong *)puVar33[1]) {
                    if ((uVar18 == *puVar33) &&
                        (iVar31 = (**(code **)(param_1 + 0x990))(uVar12,puVar33 + 2), iVar31 != 0)) {
                        puVar15 = local_110;
                        if ((puVar33 + 3 != (ulonglong *)0x0) &&
                            ((uVar18 = puVar33[3], param_5 == (code *)0x0 ||
                                                   (iVar31 = (*param_5)(uVar18), puVar15 = local_110, iVar31 != 0)))) {
                            puVar15 = local_110;
                            puVar20 = (ulonglong *)FUN_14018db00(puVar13,(undefined *)((longlong)local_110 + 1),8)
                                    ;
                            puVar20[(longlong)puVar15] = uVar18;
                            puVar33 = puVar13;
                            if ((puVar13 != puVar20) &&
                                (FUN_1407db590(puVar20,puVar13), puVar33 = puVar20, puVar13 != (ulonglong *)0x0)) {
                                (**(code **)(puVar13[-2] + 8))(puVar13 + -2);
                            }
                            local_110 = (ulonglong *)((longlong)puVar15 + 1);
                            puVar15 = local_110;
                            puVar13 = puVar33;
                        }
                        break;
                    }
                }
            }
            puVar23 = puVar23 + 1;
        } while (puVar23 < &DAT_00000030);
        local_res18 = *(undefined4 *)(**pplVar35 + 4);
        local_d8 = *(undefined4 *)(**pplVar35 + 8);
        local_d0 = (ulonglong *)0x0;
        pcVar26 = local_138;
        local_e8 = puVar13;
        if (puVar15 != (ulonglong *)0x0) {
            do {
                puVar15 = (ulonglong *)0x0;
                pplVar35 = (longlong **)puVar13[(longlong)local_d0];
                local_120 = *(undefined4 *)(**pplVar35 + 4);
                local_11c = *(undefined4 *)(**pplVar35 + 8);
                pcVar19 = *(char **)(pcVar26 + 8);
                pcVar27 = pcVar26;
                if (*(char **)(pcVar26 + 8) == (char *)0x0) {
                    LAB_1406e5c62:
                    uVar34 = (*local_a8)(&local_120);
                    uVar18 = local_108;
                    for (puVar23 = local_148[uVar34 % local_108]; puVar23 != (ulonglong *)0x0;
                         puVar23 = (ulonglong *)puVar23[1]) {
                        if ((uVar34 == *puVar23) && (iVar31 = (*local_a0)(&local_120), iVar31 != 0)) {
                            pcVar26 = local_138;
                            puVar13 = local_e8;
                            if (puVar23 != (ulonglong *)&DAT_ffffffffffffffe8) goto LAB_1406e6305;
                            break;
                        }
                    }
                    puVar13 = (ulonglong *)FUN_14018b280(0x18);
                    if (puVar13 != (ulonglong *)0x0) {
                        puVar13[1] = 0;
                        puVar15 = puVar13;
                    }
                    *puVar15 = local_e8[(longlong)local_d0];
                    ppuVar3 = (undefined **)puVar15[1];
                    iVar31 = *(int *)(**pplVar35 + 4);
                    iVar11 = *(int *)(**pplVar35 + 8);
                    iVar10 = *(int *)(**param_2 + 4);
                    iVar1 = *(int *)(**param_2 + 8);
                    uVar9 = iVar31 - iVar10;
                    uVar28 = (int)uVar9 >> 0x1f;
                    uVar32 = (iVar1 + iVar10) - (iVar11 + iVar31);
                    iVar31 = (uVar9 ^ uVar28) - uVar28;
                    uVar9 = (int)uVar32 >> 0x1f;
                    iVar10 = (uVar32 ^ uVar9) - uVar9;
                    if (iVar31 < iVar10) {
                        iVar31 = iVar10;
                    }
                    uVar28 = iVar11 - iVar1;
                    uVar9 = (int)uVar28 >> 0x1f;
                    iVar11 = (uVar28 ^ uVar9) - uVar9;
                    if (iVar31 < iVar11) {
                        iVar31 = iVar11;
                    }
                    puVar13 = puVar15 + 1;
                    if (ppuVar3 == (undefined **)0x0) {
                        *puVar13 = (ulonglong)&local_168;
                        local_60 = puVar13;
                        local_58 = iVar31;
                        uVar34 = FUN_14030a7c0(&local_160,&local_60);
                        puVar15[2] = uVar34;
                        FUN_14030a510(&local_168,puVar13);
                    }
                    else if (ppuVar3 == &local_168) {
                        *(int *)(local_160 + puVar15[2] * 2 + 1) = iVar31;
                        iVar31 = FUN_14030a510(&local_168,puVar13);
                        if (iVar31 == 0) {
                            FUN_14030a5f0(&local_168,puVar13);
                        }
                    }
                    else {
                        puVar4 = (undefined *)puVar15[2];
                        *puVar13 = 0;
                        puVar30 = ppuVar3[2] + -1;
                        if (puVar4 < puVar30) {
                            puVar5 = ppuVar3[1];
                            *(undefined8 *)(puVar5 + (longlong)puVar4 * 0x10) =
                                    *(undefined8 *)(puVar5 + (longlong)puVar30 * 0x10);
                            *(undefined8 *)(puVar5 + (longlong)puVar4 * 0x10 + 8) =
                                    *(undefined8 *)(puVar5 + (longlong)puVar30 * 0x10 + 8);
                            FUN_14030a710(ppuVar3 + 1);
                            lVar17 = *(longlong *)(ppuVar3[1] + (longlong)puVar4 * 0x10);
                            *(undefined **)(lVar17 + 8) = puVar4;
                            iVar11 = FUN_14030a510(ppuVar3,lVar17);
                            if (iVar11 == 0) {
                                FUN_14030a5f0(ppuVar3,lVar17);
                            }
                        }
                        else {
                            FUN_14030a710(ppuVar3 + 1);
                        }
                        *puVar13 = (ulonglong)&local_168;
                        local_70 = puVar13;
                        local_68 = iVar31;
                        uVar18 = FUN_14030a7c0(&local_160,&local_70);
                        puVar15[2] = uVar18;
                        FUN_14030a510(&local_168,puVar13);
                        uVar18 = local_108;
                    }
                    uVar14 = local_f0;
                    uVar34 = local_f8;
                    iVar31 = *(int *)(**pplVar35 + 4);
                    iVar11 = *(int *)(**pplVar35 + 8);
                    iVar10 = *(int *)(**param_2 + 4);
                    iVar1 = *(int *)(**param_2 + 8);
                    uVar9 = iVar31 - iVar10;
                    uVar28 = (int)uVar9 >> 0x1f;
                    uVar32 = (iVar1 + iVar10) - (iVar11 + iVar31);
                    iVar31 = (uVar9 ^ uVar28) - uVar28;
                    uVar9 = (int)uVar32 >> 0x1f;
                    iVar10 = (uVar32 ^ uVar9) - uVar9;
                    if (iVar31 < iVar10) {
                        iVar31 = iVar10;
                    }
                    uVar28 = iVar11 - iVar1;
                    uVar9 = (int)uVar28 >> 0x1f;
                    iVar11 = (uVar28 ^ uVar9) - uVar9;
                    if (iVar31 < iVar11) {
                        iVar31 = iVar11;
                    }
                    if (local_f0 == local_f8) {
                        if (local_f8 + 1 < 2) {
                            LAB_1406e5f3c:
                            bVar25 = 0;
                        }
                        else {
                            bVar25 = 1;
                            uVar16 = local_f8;
                            if ((local_f8 & 0xffffffff00000000) != 0) {
                                bVar25 = 0x21;
                                uVar16 = local_f8 >> 0x20;
                            }
                            if ((uVar16 & 0xffff0000) != 0) {
                                bVar25 = bVar25 + 0x10;
                                uVar16 = uVar16 >> 0x10;
                            }
                            if ((uVar16 & 0xff00) != 0) {
                                bVar25 = bVar25 + 8;
                                uVar16 = uVar16 >> 8;
                            }
                            if ((uVar16 & 0xf0) != 0) {
                                bVar25 = bVar25 + 4;
                                uVar16 = uVar16 >> 4;
                            }
                            if ((uVar16 & 0xc) != 0) {
                                bVar25 = bVar25 + 2;
                                uVar16 = uVar16 >> 2;
                            }
                            if ((uVar16 & 2) != 0) {
                                bVar25 = bVar25 + 1;
                            }
                            if (bVar25 < 4) goto LAB_1406e5f3c;
                            bVar25 = bVar25 - 4;
                        }
                        uVar16 = (&DAT_140b5e820)[bVar25];
                        if (uVar16 < local_f8 + 1) {
                            uVar16 = *(ulonglong *)(&UNK_140b5e828 + (ulonglong)bVar25 * 8);
                        }
                        uVar12 = SUB168(ZEXT816(8) * ZEXT816(uVar16),0);
                        if (SUB168(ZEXT816(8) * ZEXT816(uVar16) >> 0x40,0) != 0) {
                            uVar12 = 0xffffffffffffffff;
                        }
                        ppuVar22 = (ulonglong **)FUN_14018b280(uVar12);
                        FUN_1407e4830(ppuVar22,0,uVar16 * 8);
                        ppuVar29 = local_118;
                        for (; uVar34 != 0; uVar34 = uVar34 - 1) {
                            puVar15 = *ppuVar29;
                            while (puVar15 != (ulonglong *)0x0) {
                                puVar15 = *ppuVar29;
                                *ppuVar29 = (ulonglong *)puVar15[1];
                                puVar15[1] = (ulonglong)ppuVar22[*puVar15 % uVar16];
                                ppuVar22[*puVar15 % uVar16] = puVar15;
                                puVar15 = *ppuVar29;
                            }
                            ppuVar29 = ppuVar29 + 1;
                        }
                        FUN_14018b900(local_118);
                        local_118 = ppuVar22;
                        local_f8 = uVar16;
                    }
                    uVar34 = local_f8;
                    uVar16 = (*local_80)();
                    ppuVar29 = local_118 + uVar16 % uVar34;
                    puVar23 = (ulonglong *)FUN_14018b280();
                    uVar34 = local_100;
                    puVar15 = (ulonglong *)0x0;
                    puVar13 = puVar15;
                    if (puVar23 != (ulonglong *)0x0) {
                        puVar13 = *ppuVar29;
                        *puVar23 = uVar16;
                        puVar23[1] = (ulonglong)puVar13;
                        *(undefined4 *)(puVar23 + 2) = local_120;
                        *(undefined4 *)((longlong)puVar23 + 0x14) = local_11c;
                        *(int *)(puVar23 + 3) = iVar31;
                        puVar13 = puVar23;
                    }
                    local_f0 = uVar14 + 1;
                    *ppuVar29 = puVar13;
                    uVar14 = uVar18;
                    if (local_100 == uVar18) {
                        if (uVar18 + 1 < 2) {
                            LAB_1406e60b4:
                            bVar25 = 0;
                        }
                        else {
                            bVar25 = 1;
                            if ((uVar18 & 0xffffffff00000000) != 0) {
                                bVar25 = 0x21;
                                uVar14 = uVar18 >> 0x20;
                            }
                            if ((uVar14 & 0xffff0000) != 0) {
                                bVar25 = bVar25 + 0x10;
                                uVar14 = uVar14 >> 0x10;
                            }
                            if ((uVar14 & 0xff00) != 0) {
                                bVar25 = bVar25 + 8;
                                uVar14 = uVar14 >> 8;
                            }
                            if ((uVar14 & 0xf0) != 0) {
                                bVar25 = bVar25 + 4;
                                uVar14 = uVar14 >> 4;
                            }
                            if ((uVar14 & 0xc) != 0) {
                                bVar25 = bVar25 + 2;
                                uVar14 = uVar14 >> 2;
                            }
                            if ((uVar14 & 2) != 0) {
                                bVar25 = bVar25 + 1;
                            }
                            if (bVar25 < 4) goto LAB_1406e60b4;
                            bVar25 = bVar25 - 4;
                        }
                        uVar14 = (&DAT_140b5e820)[bVar25];
                        if (uVar14 < uVar18 + 1) {
                            uVar14 = *(ulonglong *)(&UNK_140b5e828 + (ulonglong)bVar25 * 8);
                        }
                        uVar12 = SUB168(ZEXT816(8) * ZEXT816(uVar14),0);
                        if (SUB168(ZEXT816(8) * ZEXT816(uVar14) >> 0x40,0) != 0) {
                            uVar12 = 0xffffffffffffffff;
                        }
                        ppuVar22 = (ulonglong **)FUN_14018b280(uVar12);
                        FUN_1407e4830(ppuVar22,0,uVar14 * 8);
                        ppuVar29 = local_148;
                        for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                            puVar13 = *ppuVar29;
                            while (puVar13 != (ulonglong *)0x0) {
                                puVar13 = *ppuVar29;
                                *ppuVar29 = (ulonglong *)puVar13[1];
                                puVar13[1] = (ulonglong)ppuVar22[*puVar13 % uVar14];
                                ppuVar22[*puVar13 % uVar14] = puVar13;
                                puVar13 = *ppuVar29;
                            }
                            ppuVar29 = ppuVar29 + 1;
                        }
                        FUN_14018b900(local_148);
                        local_148 = ppuVar22;
                        local_108 = uVar14;
                    }
                    uVar18 = (*local_a8)(&local_120);
                    ppuVar29 = local_148 + uVar18 % uVar14;
                    puVar13 = (ulonglong *)FUN_14018b280(0x20);
                    if (puVar13 != (ulonglong *)0x0) {
                        puVar15 = *ppuVar29;
                        *puVar13 = uVar18;
                        puVar13[1] = (ulonglong)puVar15;
                        *(undefined4 *)(puVar13 + 2) = local_120;
                        *(undefined4 *)((longlong)puVar13 + 0x14) = local_11c;
                        *(undefined4 *)(puVar13 + 3) = local_res18;
                        *(undefined4 *)((longlong)puVar13 + 0x1c) = local_d8;
                        puVar15 = puVar13;
                    }
                    *ppuVar29 = puVar15;
                    local_100 = uVar34 + 1;
                    bVar36 = true;
                    pcVar26 = *(char **)(local_138 + 8);
                    pcVar19 = local_138;
                    while (pcVar26 != (char *)0x0) {
                        bVar36 = pplVar35 < *(longlong ***)(pcVar26 + 0x20);
                        pcVar19 = pcVar26;
                        if (bVar36) {
                            pcVar26 = *(char **)(pcVar26 + 0x10);
                        }
                        else {
                            pcVar26 = *(char **)(pcVar26 + 0x18);
                        }
                    }
                    pcVar27 = pcVar19;
                    if (bVar36) {
                        if (pcVar19 != *(char **)(local_138 + 0x10)) {
                            if ((*pcVar19 == '\0') && (*(char **)(*(longlong *)(pcVar19 + 8) + 8) == pcVar19)) {
                                pcVar27 = *(char **)(pcVar19 + 0x18);
                            }
                            else {
                                pcVar27 = *(char **)(pcVar19 + 0x10);
                                if (pcVar27 == (char *)0x0) {
                                    pcVar27 = *(char **)(pcVar19 + 8);
                                    pcVar26 = pcVar27;
                                    if (pcVar19 == *(char **)(pcVar27 + 0x10)) {
                                        do {
                                            pcVar27 = *(char **)(pcVar26 + 8);
                                            bVar36 = pcVar26 == *(char **)(pcVar27 + 0x10);
                                            pcVar26 = pcVar27;
                                        } while (bVar36);
                                    }
                                }
                                else {
                                    for (pcVar26 = *(char **)(pcVar27 + 0x18); pcVar26 != (char *)0x0;
                                         pcVar26 = *(char **)(pcVar26 + 0x18)) {
                                        pcVar27 = pcVar26;
                                    }
                                }
                            }
                            goto LAB_1406e625d;
                        }
                    }
                    else {
                        LAB_1406e625d:
                        pcVar26 = local_138;
                        puVar13 = local_e8;
                        if (pplVar35 <= *(longlong ***)(pcVar27 + 0x20)) goto LAB_1406e6305;
                    }
                    if ((pcVar19 == local_138) || (pplVar35 < *(longlong ***)(pcVar19 + 0x20))) {
                        lVar17 = FUN_14018b280(0x28);
                        if ((ulonglong *)(lVar17 + 0x20) != (ulonglong *)0x0) {
                            *(ulonglong *)(lVar17 + 0x20) = (ulonglong)pplVar35;
                        }
                        *(longlong *)(pcVar19 + 0x10) = lVar17;
                        if (pcVar19 == local_138) {
                            *(longlong *)(local_138 + 8) = lVar17;
                            *(longlong *)(local_138 + 0x18) = lVar17;
                        }
                        else if (pcVar19 == *(char **)(local_138 + 0x10)) {
                            *(longlong *)(local_138 + 0x10) = lVar17;
                        }
                    }
                    else {
                        lVar17 = FUN_14018b280(0x28);
                        if ((ulonglong *)(lVar17 + 0x20) != (ulonglong *)0x0) {
                            *(ulonglong *)(lVar17 + 0x20) = (ulonglong)pplVar35;
                        }
                        *(longlong *)(pcVar19 + 0x18) = lVar17;
                        if (pcVar19 == *(char **)(local_138 + 0x18)) {
                            *(longlong *)(local_138 + 0x18) = lVar17;
                        }
                    }
                    *(char **)(lVar17 + 8) = pcVar19;
                    *(undefined8 *)(lVar17 + 0x10) = 0;
                    *(undefined8 *)(lVar17 + 0x18) = 0;
                    FUN_1400081c0();
                    local_130 = local_130 + 1;
                    pcVar26 = local_138;
                    puVar13 = local_e8;
                }
                else {
                    do {
                        if (*(longlong ***)(pcVar19 + 0x20) < pplVar35) {
                            pcVar21 = *(char **)(pcVar19 + 0x18);
                        }
                        else {
                            pcVar21 = *(char **)(pcVar19 + 0x10);
                            pcVar27 = pcVar19;
                        }
                        pcVar19 = pcVar21;
                    } while (pcVar21 != (char *)0x0);
                    if ((pcVar27 == pcVar26) || (pplVar35 < *(longlong ***)(pcVar27 + 0x20)))
                        goto LAB_1406e5c62;
                }
                LAB_1406e6305:
                local_d0 = (ulonglong *)((longlong)local_d0 + 1);
            } while (local_d0 < local_110);
        }
        if (puVar13 != (ulonglong *)0x0) {
            (**(code **)(puVar13[-2] + 8))(puVar13 + -2);
        }
    }
    goto joined_r0x0001406e634e;
    LAB_1406e64b0:
    local_res20 = *(undefined8 **)(**pplVar35 + 4);
    uVar34 = (*local_a8)(&local_res20);
    for (puVar15 = ppuVar29[uVar34 % uVar18]; puVar15 != (ulonglong *)0x0;
         puVar15 = (ulonglong *)puVar15[1]) {
        if ((uVar34 == *puVar15) && (iVar31 = (*local_a0)(&local_res20), iVar31 != 0)) {
            if (puVar15 + 3 != (ulonglong *)0x0) {
                local_res18 = *(undefined4 *)(puVar15 + 3);
                uStackX28 = *(undefined4 *)((longlong)puVar15 + 0x1c);
            }
            break;
        }
    }
    if ((undefined8 *)CONCAT44(uStackX28,local_res18) != local_res20) {
        lVar17 = puVar8[1];
        puVar24 = (undefined8 *)FUN_14018db00(*puVar8,lVar17 + 1,8);
        FUN_1407db590(puVar24 + 1);
        *puVar24 = pplVar35;
        puVar7 = (undefined8 *)*puVar8;
        if (puVar7 != puVar24) {
            if (puVar7 != (undefined8 *)0x0) {
                (**(code **)(puVar7[-2] + 8))(puVar7 + -2);
            }
            *puVar8 = puVar24;
        }
        puVar8[1] = lVar17 + 1;
        uVar34 = (**(code **)(param_1 + 0x960))(&local_res18);
        for (puVar15 = *(ulonglong **)
                (*(longlong *)(param_1 + 0x958) + (uVar34 % *(ulonglong *)(param_1 + 0x950)) * 8
                ); puVar15 != (ulonglong *)0x0; puVar15 = (ulonglong *)puVar15[1]) {
            if ((uVar34 == *puVar15) &&
                (iVar31 = (**(code **)(param_1 + 0x968))(&local_res18), iVar31 != 0)) {
                if (puVar15 + 3 != (ulonglong *)0x0) {
                    pplVar35 = (longlong **)puVar15[3];
                }
                break;
            }
        }
        goto LAB_1406e64b0;
    }
    while (uVar18 = local_108, ppuVar22 = ppuVar29, local_158 != 0) {
        plVar2 = *local_160;
        *plVar2 = 0;
        lVar17 = local_158 - 1;
        if (lVar17 == 0) {
            FUN_14030a710(&local_160);
        }
        else {
            *local_160 = local_160[lVar17 * 2];
            local_160[1] = local_160[lVar17 * 2 + 1];
            FUN_14030a710(&local_160);
            (*local_160)[1] = 0;
            FUN_14030a5f0(&local_168);
        }
        if (plVar2 + -1 != (longlong *)0x0) {
            if (*plVar2 != 0) {
                FUN_1403088b0();
            }
            FUN_14018b900(plVar2 + -1);
        }
    }
    joined_r0x0001406e634e:
    for (; uVar18 != 0; uVar18 = uVar18 - 1) {
        puVar15 = *ppuVar29;
        while (puVar15 != (ulonglong *)0x0) {
            *ppuVar29 = (ulonglong *)(*ppuVar29)[1];
            FUN_14018b900();
            puVar15 = *ppuVar29;
        }
        ppuVar29 = ppuVar29 + 1;
    }
    FUN_14018b900(ppuVar22);
    ppuVar29 = local_118;
    for (uVar18 = local_f8; uVar18 != 0; uVar18 = uVar18 - 1) {
        puVar15 = *ppuVar29;
        while (puVar15 != (ulonglong *)0x0) {
            *ppuVar29 = (ulonglong *)(*ppuVar29)[1];
            FUN_14018b900();
            puVar15 = *ppuVar29;
        }
        ppuVar29 = ppuVar29 + 1;
    }
    FUN_14018b900(local_118);
    uVar18 = 0;
    uVar34 = uVar18;
    if (local_158 != 0) {
        do {
            uVar34 = uVar34 + 1;
            **(undefined8 **)((longlong)local_160 + uVar18) = 0;
            uVar18 = uVar18 + 0x10;
        } while (uVar34 < local_158);
    }
    if (local_160 != (longlong **)0x0) {
        (*(code *)local_160[-2][1])(local_160 + -2);
    }
    if (local_130 != 0) {
        lVar17 = *(longlong *)(local_138 + 8);
        while (lVar17 != 0) {
            FUN_1400083b0(local_140,*(undefined8 *)(lVar17 + 0x18));
            lVar6 = *(longlong *)(lVar17 + 0x10);
            FUN_14018b900(lVar17,0);
            lVar17 = lVar6;
        }
        *(char **)(local_138 + 0x10) = local_138;
        *(undefined8 *)(local_138 + 8) = 0;
        *(char **)(local_138 + 0x18) = local_138;
        local_130 = 0;
    }
    FUN_14018b900(local_138,0);
    return;
}



void FUN_1406e66a0(longlong param_1,undefined8 param_2)

{
    longlong local_18;
    undefined8 local_10;

    local_10 = 0;
    local_18 = 0;
    FUN_1406e5430(param_1,&local_18);
    FUN_1406e5500(param_1,param_2,&local_18,param_1 + 0xa58,0);
    if (*(longlong *)(param_1 + 0xa60) == 0) {
        param_2 = 0;
    }
    *(undefined8 *)(param_1 + 0xa50) = param_2;
    if (local_18 != 0) {
        (**(code **)(*(longlong *)(local_18 + -0x10) + 8))(local_18 + -0x10);
    }
    return;
}



longlong * FUN_1406e6720(longlong param_1,longlong param_2)

{
    longlong *plVar1;
    longlong *plVar2;
    longlong *plVar3;
    longlong local_28;
    longlong local_20;
    longlong *local_18;
    undefined8 local_10;

    local_10 = 1;
    plVar1 = (longlong *)FUN_14018b280(0x18);
    plVar3 = (longlong *)0x0;
    plVar2 = plVar3;
    if (plVar1 != (longlong *)0x0) {
        plVar1[1] = 1;
        *plVar1 = (longlong)&PTR_LAB_140b55060;
        plVar2 = plVar1;
    }
    plVar1 = plVar2 + 2;
    local_20 = 0;
    local_28 = 0;
    *plVar1 = param_2;
    local_18 = plVar1;
    if (*(longlong *)(param_1 + 0x940) != 0) {
        FUN_1406e5500(param_1,*(longlong *)(param_1 + 0x940),&local_18,&local_28,&LAB_1406e67f0);
        plVar3 = (longlong *)(ulonglong)(local_20 != 0);
        if (local_28 != 0) {
            (**(code **)(*(longlong *)(local_28 + -0x10) + 8))(local_28 + -0x10);
        }
    }
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
    }
    return plVar3;
}



bool FUN_1406e6800(longlong param_1,longlong *param_2)

{
    undefined8 *puVar1;
    undefined8 uVar2;
    ulonglong *puVar3;
    longlong **pplVar4;
    int iVar5;
    ulonglong uVar6;
    longlong lVar7;
    uint uVar8;
    bool bVar9;

    bVar9 = true;
    if (*(char *)((longlong)param_2 + 0x44) != '\0') {
        return true;
    }
    uVar8 = 0;
    lVar7 = 0;
    do {
        if (bVar9 == false) {
            return false;
        }
        puVar1 = *(undefined8 **)(lVar7 + 8 + *param_2);
        if (puVar1 != (undefined8 *)0x0) {
            uVar2 = *puVar1;
            uVar6 = (**(code **)(param_1 + 0x988))(uVar2);
            for (puVar3 = *(ulonglong **)
                    (*(longlong *)(param_1 + 0x980) + (uVar6 % *(ulonglong *)(param_1 + 0x978)) * 8
                    ); puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[1]) {
                if ((uVar6 == *puVar3) && (iVar5 = (**(code **)(param_1 + 0x990))(uVar2), iVar5 != 0)) {
                    if ((puVar3 + 3 != (ulonglong *)0x0) &&
                        ((pplVar4 = (longlong **)puVar3[3], *(char *)((longlong)pplVar4 + 0x44) != '\0' &&
                                                            ((*(byte *)(**pplVar4 + 0x10) & 1) == 0)))) {
                        iVar5 = FUN_1406e6720(param_1);
                        bVar9 = iVar5 != 0;
                    }
                    break;
                }
            }
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 8;
        if (5 < uVar8) {
            return bVar9;
        }
    } while( true );
}



void FUN_1406e6910(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                   longlong *param_5,longlong *param_6,longlong *param_7)

{
    byte bVar1;
    longlong **pplVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    ulonglong uVar6;
    int iVar7;

    uVar6 = 0;
    *param_4 = 0;
    param_4[1] = 0xf;
    *(undefined4 *)(param_4 + 2) = 0;
    *(undefined4 *)((longlong)param_4 + 0x14) = 0xf;
    *param_5 = 0;
    param_5[1] = 0xf;
    *(undefined4 *)(param_5 + 2) = 0;
    *(undefined4 *)((longlong)param_5 + 0x14) = 0x11;
    *param_6 = 0;
    param_6[1] = 0xf;
    *(undefined4 *)(param_6 + 2) = 0;
    *(undefined4 *)((longlong)param_6 + 0x14) = 0x10;
    *param_7 = 0;
    param_7[1] = 0xf;
    *(undefined4 *)(param_7 + 2) = 0;
    *(undefined4 *)((longlong)param_7 + 0x14) = 0x12;
    if (*(longlong *)(param_1 + 0x9a0) != 0) {
        do {
            pplVar2 = *(longlong ***)(*(longlong *)(param_1 + 0x998) + uVar6 * 8);
            bVar1 = *(byte *)(*pplVar2 + 8);
            if (bVar1 < *(byte *)((longlong)pplVar2 + 0x44)) {
                iVar7 = (uint)*(byte *)((longlong)pplVar2 + 0x44) - (uint)bVar1;
                FUN_140003460(param_2,**pplVar2);
                lVar3 = param_3[1];
                lVar5 = FUN_14018db00(*param_3,lVar3 + 1,1);
                *(char *)(lVar5 + lVar3) = (char)iVar7;
                if (*param_3 != lVar5) {
                    FUN_1407db590(lVar5,*param_3,param_3[1]);
                    lVar4 = *param_3;
                    if (lVar4 != 0) {
                        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
                    }
                    *param_3 = lVar5;
                }
                param_3[1] = lVar3 + 1;
                *param_4 = *param_4 + (ulonglong)(uint)(*(int *)(**pplVar2 + 0x18) * iVar7);
                *param_5 = *param_5 + (ulonglong)(uint)(*(int *)(**pplVar2 + 0x20) * iVar7);
                *param_6 = *param_6 + (ulonglong)(uint)(*(int *)(**pplVar2 + 0x1c) * iVar7);
                *param_7 = *param_7 + (ulonglong)(uint)(*(int *)(**pplVar2 + 0x24) * iVar7);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulonglong *)(param_1 + 0x9a0));
    }
    return;
}



void FUN_1406e6ad0(longlong param_1)

{
    int iVar1;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined8 local_1c;
    undefined8 local_14;
    undefined4 local_c;

    if ((*(longlong *)(param_1 + 0xed8) != 0) && (*(int *)(param_1 + 0xef0) == 0)) {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0xef8) + 0x40))
                (*(longlong **)(param_1 + 0xef8),0,3);
        local_14 = 2;
        local_20 = 0x3f800000;
        local_28 = *(undefined4 *)(&DAT_140b3fc00 + (longlong)iVar1 * 4);
        *(undefined4 *)(param_1 + 0xef0) = 1;
        local_24 = 0;
        local_1c = 0;
        local_c = 0;
        (**(code **)(**(longlong **)(param_1 + 0xed8) + 0x248))
                (*(longlong **)(param_1 + 0xed8),0,&local_28);
    }
    FUN_14010b100(param_1 + 0xaa0);
    return;
}



void FUN_1406e6b70(longlong param_1)

{
    char cVar1;
    uint uVar2;
    longlong **pplVar3;
    undefined4 uVar4;
    int iVar5;
    longlong *plVar6;
    ulonglong uVar7;
    longlong lVar8;
    ulonglong uVar9;
    undefined8 uVar10;
    ulonglong uVar11;
    ulonglong local_78;
    undefined4 local_70;
    undefined4 uStack108;
    undefined4 uStack104;
    undefined8 local_64;
    undefined4 local_5c;
    undefined8 local_58;
    undefined local_50;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    uVar11 = 0;
    uVar9 = uVar11;
    if (*(longlong *)(param_1 + 0x9a0) != 0) {
        do {
            pplVar3 = *(longlong ***)(*(longlong *)(param_1 + 0x998) + uVar9 * 8);
            plVar6 = *pplVar3;
            cVar1 = *(char *)(plVar6 + 8);
            *(char *)((longlong)pplVar3 + 0x44) = cVar1;
            if (cVar1 == '\0') {
                if ((*(byte *)(*plVar6 + 0x10) & 1) == 0) {
                    lVar8 = 6;
                    uVar7 = uVar11;
                    do {
                        plVar6 = plVar6 + 1;
                        if (((int)uVar7 != 0) ||
                            ((uVar7 = uVar11, *plVar6 != 0 && (*(char *)(*plVar6 + 0x40) != '\0')))) {
                            uVar7 = 1;
                        }
                        lVar8 = lVar8 + -1;
                    } while (lVar8 != 0);
                    if ((int)uVar7 == 0) {
                        *(undefined4 *)(pplVar3 + 8) = 0;
                        uVar10 = *(undefined8 *)((longlong)*(int *)(pplVar3 + 0x3d) * 0x20 + 0x7b0 + param_1);
                    }
                    else {
                        *(undefined4 *)(pplVar3 + 8) = 1;
                        uVar10 = *(undefined8 *)((longlong)*(int *)(pplVar3 + 0x3d) * 0x20 + 0x7b8 + param_1);
                    }
                    goto LAB_1406e6ce4;
                }
                FUN_1406e4720(param_1,pplVar3,1);
            }
            else {
                if ((uint)*(byte *)(plVar6 + 8) < *(uint *)(*plVar6 + 0x14)) {
                    *(undefined4 *)(pplVar3 + 8) = 2;
                    uVar10 = *(undefined8 *)(((longlong)*(int *)(pplVar3 + 0x3d) + 0x3e) * 0x20 + param_1);
                }
                else {
                    *(undefined4 *)(pplVar3 + 8) = 3;
                    uVar10 = *(undefined8 *)((longlong)*(int *)(pplVar3 + 0x3d) * 0x20 + 0x7c8 + param_1);
                }
                LAB_1406e6ce4:
                local_18 = 0;
                local_20 = 0;
                local_28 = 0;
                local_30 = 0;
                local_38 = 0;
                local_40 = 0;
                local_48 = 0;
                local_50 = 0;
                local_58 = 0;
                FUN_14010b330(&local_58,*(undefined8 *)(param_1 + 0x20),uVar10,L"PrimalMatrixNode");
                FUN_1400c3730(pplVar3 + 9,&local_58);
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong *)(param_1 + 0x9a0));
    }
    uVar9 = uVar11;
    if (*(longlong *)(param_1 + 0xa00) != 0) {
        do {
            lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x9f8) + uVar9 * 8);
            uVar7 = uVar11;
            if (*(longlong *)(lVar8 + 0x50) != 0) {
                do {
                    plVar6 = *(longlong **)(*(longlong *)(lVar8 + 0x48) + uVar7 * 8);
                    if ((*(uint *)(*plVar6 + 0x40) < 2) || (uVar4 = 1, *(uint *)(plVar6[1] + 0x40) < 2)) {
                        uVar4 = 0;
                    }
                    uVar7 = uVar7 + 1;
                    *(undefined4 *)(plVar6 + 3) = uVar4;
                } while (uVar7 < *(ulonglong *)(lVar8 + 0x50));
            }
            FUN_1406e51a0(param_1,lVar8);
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(ulonglong *)(param_1 + 0xa00));
    }
    uVar9 = uVar11;
    if (*(longlong *)(param_1 + 0xa10) != 0) {
        do {
            plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xa08) + uVar9 * 8);
            if ((*(uint *)(*plVar6 + 0x40) < 2) || (uVar4 = 1, *(uint *)(plVar6[1] + 0x40) < 2)) {
                uVar4 = 0;
            }
            uVar9 = uVar9 + 1;
            *(undefined4 *)(plVar6 + 3) = uVar4;
        } while (uVar9 < *(ulonglong *)(param_1 + 0xa10));
    }
    uVar9 = *(ulonglong *)(param_1 + 0xa50);
    *(undefined8 *)(param_1 + 0xa90) = 0;
    *(undefined8 *)(param_1 + 0xa98) = 0;
    if (uVar9 != 0) {
        local_70 = 0;
        uStack108 = 0;
        local_78 = 0;
        FUN_1406e5430(param_1,&local_78);
        FUN_1406e5500(param_1,uVar9,&local_78,param_1 + 0xa58,0);
        if (*(longlong *)(param_1 + 0xa60) == 0) {
            uVar9 = uVar11;
        }
        *(ulonglong *)(param_1 + 0xa50) = uVar9;
        if (local_78 != 0) {
            (**(code **)(*(longlong *)(local_78 - 0x10) + 8))(local_78 - 0x10);
        }
    }
    if ((*(longlong *)(param_1 + 0xed8) != 0) && (*(int *)(param_1 + 0xef0) == 0)) {
        iVar5 = (**(code **)(**(longlong **)(param_1 + 0xef8) + 0x40))
                (*(longlong **)(param_1 + 0xef8),0,3);
        uStack108 = 0;
        uStack104 = 0;
        local_70 = 0x3f800000;
        local_64 = 2;
        uVar2 = *(uint *)(&DAT_140b3fc00 + (longlong)iVar5 * 4);
        local_5c = 0;
        *(undefined4 *)(param_1 + 0xef0) = 1;
        local_78 = (ulonglong)uVar2;
        (**(code **)(**(longlong **)(param_1 + 0xed8) + 0x248))
                (*(longlong **)(param_1 + 0xed8),0,&local_78);
    }
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1406e6ed0(longlong param_1,int param_2,int param_3)

{
    undefined8 uVar1;
    longlong lVar2;
    bool bVar3;
    bool bVar4;
    undefined4 uVar5;
    int iVar6;
    longlong lVar7;
    longlong lVar8;
    int *piVar9;
    ulonglong uVar10;

    lVar7 = DAT_140c65898;
    *(undefined8 *)(param_1 + 0xa70) = 0;
    if (lVar7 == 0) {
        lVar7 = 0;
    }
    else {
        lVar7 = *(longlong *)(lVar7 + 0x78);
    }
    if ((lVar7 != 0) && (uVar10 = 0, *(longlong *)(param_1 + 0x9a0) != 0)) {
        do {
            uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x998) + uVar10 * 8);
            uVar5 = FUN_1406dfa40(uVar1);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64fc4 == 0) && (iVar6 = FUN_140225fe0(), -1 < iVar6)) {
                    lVar7 = (**(code **)(*DAT_140c65078 + 0x18))();
                    goto LAB_1406e6fa2;
                }
            }
            else {
                lVar7 = (*DAT_140c63840)(&PTR_u_PrimalMatrixReward_140a6c350,uVar5,DAT_140c63858);
                LAB_1406e6fa2:
                if (lVar7 != 0) {
                    piVar9 = (int *)(lVar7 + 0x14);
                    lVar7 = 4;
                    bVar4 = false;
                    do {
                        bVar3 = bVar4;
                        if ((piVar9[-4] == param_2) &&
                            (((param_2 == 1 ||
                               (((1 < param_2 && (bVar3 = true, 3 < param_2)) && (bVar3 = bVar4, param_2 < 6))))
                              && (bVar3 = bVar4, *piVar9 == param_3)))) {
                            bVar3 = true;
                        }
                        piVar9 = piVar9 + 1;
                        lVar7 = lVar7 + -1;
                        bVar4 = bVar3;
                    } while (lVar7 != 0);
                    if (bVar3) {
                        lVar2 = *(longlong *)(param_1 + 0xa70);
                        lVar7 = lVar2 + 1;
                        lVar8 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa68),lVar7,8);
                        *(undefined8 *)(lVar8 + lVar2 * 8) = uVar1;
                        if (*(longlong *)(param_1 + 0xa68) != lVar8) {
                            FUN_1407db590(lVar8);
                            lVar2 = *(longlong *)(param_1 + 0xa68);
                            if (lVar2 != 0) {
                                (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                            }
                            *(longlong *)(param_1 + 0xa68) = lVar8;
                        }
                        *(longlong *)(param_1 + 0xa70) = lVar7;
                    }
                }
            }
            uVar10 = uVar10 + 1;
        } while (uVar10 < *(ulonglong *)(param_1 + 0x9a0));
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406e73e0(longlong param_1,int param_2,undefined8 *param_3)

{
    byte *pbVar1;
    byte bVar2;
    undefined uVar3;
    longlong **pplVar4;
    longlong **pplVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    ulonglong *puVar8;
    bool bVar9;
    bool bVar10;
    int iVar11;
    undefined4 uVar12;
    ulonglong uVar13;
    byte bVar14;
    uint uVar15;
    char *pcVar16;
    undefined *puVar17;
    ulonglong uVar18;
    ulonglong **ppuVar19;
    uint uVar20;
    longlong lVar21;
    longlong lVar22;
    undefined auVar23 [16];
    ulonglong local_res20;
    undefined4 local_128;
    undefined4 local_124;
    undefined8 local_120;
    undefined4 local_118;
    undefined8 local_114;
    undefined4 local_10c;
    undefined4 local_108;
    undefined4 local_104;
    undefined8 local_100;
    undefined4 local_f8;
    undefined8 local_f4;
    undefined4 local_ec;
    undefined4 local_e8;
    undefined4 local_e4;
    undefined8 local_e0;
    undefined4 local_d8;
    undefined8 local_d4;
    undefined4 local_cc;
    longlong local_c8;
    undefined8 local_c0;
    longlong local_b8 [2];
    undefined local_a8 [16];
    undefined8 local_98;
    undefined local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;

    *(undefined4 *)(param_1 + 0x460) = 0;
    uVar12 = *(undefined4 *)(param_1 + 0x470);
    local_res20 = 0;
    auVar23 = divps(CONCAT412(0.0 - *(float *)(param_1 + 0x45c),
                              CONCAT48(0.0 - *(float *)(param_1 + 0x458),
                                       CONCAT44((float)*(int *)((longlong)param_3 + 4) -
                                                *(float *)(param_1 + 0x454),
                                                (float)(int)*param_3 - *(float *)(param_1 + 0x450)))),
                    CONCAT412(uVar12,CONCAT48(uVar12,CONCAT44(uVar12,uVar12))));
    local_a8 = CONCAT88(SUB168(auVar23 >> 0x40,0),*(longlong *)(param_1 + 0x9a0));
    if (*(longlong *)(param_1 + 0x9a0) != 0) {
        do {
            uVar18 = 0;
            pplVar4 = *(longlong ***)(*(longlong *)(param_1 + 0x998) + local_res20 * 8);
            iVar11 = FUN_1400c3e20();
            if ((*(longlong *)(param_1 + 0xa80) != 0) && (*(int *)(param_1 + 0xa8c) != 0)) break;
            if (iVar11 == 2) {
                LAB_1406e756f:
                iVar11 = *(int *)(pplVar4 + 8);
                if (iVar11 == 1) {
                    if (param_2 == 0) {
                        iVar11 = FUN_1406e4e00(param_1);
                        if (iVar11 == 0) {
                            FUN_1400d4040(param_1,"CantAffordNodeAllocation",param_1,&DAT_1409f7d74,
                                          *(undefined4 *)**pplVar4);
                        }
                        else {
                            bVar9 = true;
                            local_c8 = -0x220 - (longlong)pplVar4;
                            bVar10 = true;
                            ppuVar19 = (ulonglong **)(pplVar4 + 0x44);
                            do {
                                puVar7 = *(undefined8 **)((longlong)ppuVar19 + local_c8 + 8 + (longlong)*pplVar4);
                                if (puVar7 != (undefined8 *)0x0) {
                                    uVar13 = (**(code **)(param_1 + 0x988))(*puVar7);
                                    for (puVar8 = *(ulonglong **)
                                            (*(longlong *)(param_1 + 0x980) +
                                             (uVar13 % *(ulonglong *)(param_1 + 0x978)) * 8); bVar9 = bVar10,
                                                 puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
                                        if ((uVar13 == *puVar8) &&
                                            (iVar11 = (**(code **)(param_1 + 0x990))(), iVar11 != 0)) {
                                            if ((puVar8 + 3 != (ulonglong *)0x0) &&
                                                (uVar13 = puVar8[3], 1 < *(uint *)(uVar13 + 0x40))) {
                                                bVar10 = false;
                                                iVar11 = DAT_140c53d00;
                                                if (*DAT_140c63750 < DAT_140c53d00) {
                                                    iVar11 = *DAT_140c63750;
                                                }
                                                *(int *)((longlong)*ppuVar19 + 0x24) =
                                                        DAT_140c636a8 + *(int *)(&DAT_140c53d10 + (longlong)iVar11 * 4);
                                                *(uint *)((longlong)*ppuVar19 + 0x1c) = (uint)(**ppuVar19 != uVar13);
                                                FUN_140033260();
                                                iVar11 = DAT_140c53d00;
                                                if (*DAT_140c63750 < DAT_140c53d00) {
                                                    iVar11 = *DAT_140c63750;
                                                }
                                                *(int *)(param_1 + 0xa8c) =
                                                        *(int *)(&DAT_140c53d10 + (longlong)iVar11 * 4) + DAT_140c636a8;
                                                bVar9 = false;
                                            }
                                            break;
                                        }
                                    }
                                }
                                uVar20 = (int)uVar18 + 1;
                                uVar18 = (ulonglong)uVar20;
                                ppuVar19 = ppuVar19 + 1;
                            } while (uVar20 < 6);
                            plVar6 = *pplVar4;
                            bVar2 = *(byte *)((longlong)pplVar4 + 0x44);
                            uVar20 = bVar2 + 1;
                            if (*(int *)(*plVar6 + 0x14) < (int)uVar20) {
                                uVar20 = *(uint *)(*plVar6 + 0x14);
                            }
                            uVar15 = uVar20 & 0xff;
                            if ((int)uVar20 < (int)(uint)*(byte *)(plVar6 + 8)) {
                                uVar15 = (uint)*(byte *)(plVar6 + 8);
                            }
                            *(char *)((longlong)pplVar4 + 0x44) = (char)uVar15;
                            iVar11 = uVar15 - bVar2;
                            *(int *)(param_1 + 0xa90) =
                                    *(int *)(param_1 + 0xa90) + *(int *)(*plVar6 + 0x18) * iVar11;
                            *(int *)(param_1 + 0xa94) =
                                    *(int *)(param_1 + 0xa94) + *(int *)(**pplVar4 + 0x20) * iVar11;
                            *(int *)(param_1 + 0xa98) =
                                    *(int *)(param_1 + 0xa98) + *(int *)(**pplVar4 + 0x1c) * iVar11;
                            *(int *)(param_1 + 0xa9c) =
                                    *(int *)(param_1 + 0xa9c) + *(int *)(**pplVar4 + 0x24) * iVar11;
                            if (bVar9) {
                                FUN_1406e4fc0(param_1,pplVar4);
                                lVar21 = 0;
                                lVar22 = 6;
                                do {
                                    if (*(longlong *)(lVar21 + 8 + (longlong)*pplVar4) != 0) {
                                        FUN_1406e4f30();
                                    }
                                    lVar21 = lVar21 + 8;
                                    lVar22 = lVar22 + -1;
                                } while (lVar22 != 0);
                            }
                            plVar6 = *(longlong **)(param_1 + 0xed8);
                            if ((plVar6 != (longlong *)0x0) && (*(int *)(param_1 + 0xef0) == 0)) {
                                *(undefined4 *)(param_1 + 0xef0) = 1;
                                local_120 = 0x3f800000;
                                local_114 = 2;
                                local_128 = *(undefined4 *)
                                        (&DAT_140b3fc00 + (ulonglong)(*(uint *)**pplVar4 & 3) * 4);
                                local_124 = 0;
                                local_118 = 0;
                                local_10c = 0;
                                (**(code **)(*plVar6 + 0x248))(plVar6,0,&local_128);
                            }
                            puVar17 = &DAT_1409f7d4c;
                            uVar12 = *(undefined4 *)**pplVar4;
                            pcVar16 = "NodeAllocationChanged";
                            LAB_1406e7d93:
                            uVar3 = *(undefined *)((longlong)pplVar4 + 0x44);
                            LAB_1406e7da0:
                            FUN_1400d4040(param_1,pcVar16,param_1,puVar17,uVar12,bVar2,uVar3);
                        }
                    }
                }
                else if (iVar11 == 2) {
                    bVar2 = *(byte *)((longlong)pplVar4 + 0x44);
                    if (param_2 == 0) {
                        iVar11 = FUN_1406e4e00(param_1,pplVar4);
                        if (iVar11 != 0) {
                            FUN_1406e4e90();
                            FUN_1406e4fc0(param_1,pplVar4);
                            if (((((undefined8 *)(*pplVar4)[7] != (undefined8 *)0x0) &&
                                  (*(int *)(pplVar4 + 8) == 3)) &&
                                 (iVar11 = FUN_1402dd480(param_1 + 0x9d0,*(undefined8 *)(*pplVar4)[7],local_b8),
                                         lVar21 = local_b8[0], iVar11 != 0)) &&
                                (FUN_1406e51a0(param_1,local_b8[0]), *(int *)(lVar21 + 0x40) == 2)) {
                                FUN_14010b100();
                            }
                            LAB_1406e7ae1:
                            if (*(longlong *)(param_1 + 0xa50) != 0) {
                                FUN_1406e66a0();
                            }
                            plVar6 = *(longlong **)(param_1 + 0xed8);
                            if ((plVar6 != (longlong *)0x0) && (*(int *)(param_1 + 0xef0) == 0)) {
                                *(undefined4 *)(param_1 + 0xef0) = 1;
                                local_104 = 0;
                                local_100 = 0x3f800000;
                                local_f8 = 0;
                                local_f4 = 2;
                                local_108 = *(undefined4 *)
                                        (&DAT_140b3fc00 + (ulonglong)(*(uint *)**pplVar4 & 3) * 4);
                                local_ec = 0;
                                (**(code **)(*plVar6 + 0x248))(plVar6,0,&local_108);
                            }
                            puVar17 = &DAT_1409f7df4;
                            uVar12 = *(undefined4 *)**pplVar4;
                            pcVar16 = "NodeAllocationChanged";
                            goto LAB_1406e7d93;
                        }
                        FUN_1400d4040(param_1,"CantAffordNodeAllocation",param_1,&DAT_1409f7d24,
                                      *(undefined4 *)**pplVar4);
                    }
                    else {
                        plVar6 = *pplVar4;
                        iVar11 = bVar2 - 1;
                        if (*(int *)(*plVar6 + 0x14) < iVar11) {
                            iVar11 = *(int *)(*plVar6 + 0x14);
                        }
                        bVar14 = (byte)iVar11;
                        if (iVar11 < (int)(uint)*(byte *)(plVar6 + 8)) {
                            bVar14 = *(byte *)(plVar6 + 8);
                        }
                        *(byte *)((longlong)pplVar4 + 0x44) = bVar14;
                        iVar11 = (uint)bVar14 - (uint)bVar2;
                        *(int *)(param_1 + 0xa90) =
                                *(int *)(param_1 + 0xa90) + *(int *)(*plVar6 + 0x18) * iVar11;
                        *(int *)(param_1 + 0xa94) =
                                *(int *)(param_1 + 0xa94) + *(int *)(**pplVar4 + 0x20) * iVar11;
                        *(int *)(param_1 + 0xa98) =
                                *(int *)(param_1 + 0xa98) + *(int *)(**pplVar4 + 0x1c) * iVar11;
                        *(int *)(param_1 + 0xa9c) =
                                *(int *)(param_1 + 0xa9c) + *(int *)(**pplVar4 + 0x24) * iVar11;
                        iVar11 = FUN_1406e6800();
                        if (iVar11 != 0) {
                            FUN_1406e4fc0(param_1,pplVar4);
                            if (*(char *)((longlong)pplVar4 + 0x44) == '\0') {
                                lVar21 = 6;
                                do {
                                    lVar22 = *(longlong *)(uVar18 + 0x220 + (longlong)pplVar4);
                                    if (lVar22 != 0) {
                                        *(undefined4 *)(lVar22 + 0x18) = 0;
                                    }
                                    puVar7 = *(undefined8 **)(uVar18 + 8 + (longlong)*pplVar4);
                                    if ((puVar7 != (undefined8 *)0x0) &&
                                        (iVar11 = FUN_1402dd480(param_1 + 0x970,*puVar7,&local_c0), iVar11 != 0)) {
                                        FUN_1406e4fc0(param_1,local_c0);
                                    }
                                    uVar18 = uVar18 + 8;
                                    lVar21 = lVar21 + -1;
                                } while (lVar21 != 0);
                            }
                            goto LAB_1406e7ae1;
                        }
                        bVar2 = *(byte *)((longlong)pplVar4 + 0x44);
                        plVar6 = *pplVar4;
                        iVar11 = bVar2 + 1;
                        if (*(int *)(*plVar6 + 0x14) < iVar11) {
                            iVar11 = *(int *)(*plVar6 + 0x14);
                        }
                        bVar14 = (byte)iVar11;
                        if (iVar11 < (int)(uint)*(byte *)(plVar6 + 8)) {
                            bVar14 = *(byte *)(plVar6 + 8);
                        }
                        *(byte *)((longlong)pplVar4 + 0x44) = bVar14;
                        iVar11 = (uint)bVar14 - (uint)bVar2;
                        *(int *)(param_1 + 0xa90) =
                                *(int *)(param_1 + 0xa90) + *(int *)(*plVar6 + 0x18) * iVar11;
                        *(int *)(param_1 + 0xa94) =
                                *(int *)(param_1 + 0xa94) + *(int *)(**pplVar4 + 0x20) * iVar11;
                        *(int *)(param_1 + 0xa98) =
                                *(int *)(param_1 + 0xa98) + *(int *)(**pplVar4 + 0x1c) * iVar11;
                        *(int *)(param_1 + 0xa9c) =
                                *(int *)(param_1 + 0xa9c) + *(int *)(**pplVar4 + 0x24) * iVar11;
                        FUN_1400d4040(param_1,"NodeDeallocationPrevented",param_1,&DAT_1409f7e04,
                                      *(undefined4 *)**pplVar4);
                    }
                }
                else if ((iVar11 == 3) && (param_2 != 0)) {
                    bVar2 = *(byte *)((longlong)pplVar4 + 0x44);
                    plVar6 = *pplVar4;
                    iVar11 = bVar2 - 1;
                    if (*(int *)(*plVar6 + 0x14) < iVar11) {
                        iVar11 = *(int *)(*plVar6 + 0x14);
                    }
                    bVar14 = (byte)iVar11;
                    if (iVar11 < (int)(uint)*(byte *)(plVar6 + 8)) {
                        bVar14 = *(byte *)(plVar6 + 8);
                    }
                    *(byte *)((longlong)pplVar4 + 0x44) = bVar14;
                    iVar11 = (uint)bVar14 - (uint)bVar2;
                    *(int *)(param_1 + 0xa90) = *(int *)(param_1 + 0xa90) + *(int *)(*plVar6 + 0x18) * iVar11;
                    *(int *)(param_1 + 0xa94) =
                            *(int *)(param_1 + 0xa94) + *(int *)(**pplVar4 + 0x20) * iVar11;
                    *(int *)(param_1 + 0xa98) =
                            *(int *)(param_1 + 0xa98) + *(int *)(**pplVar4 + 0x1c) * iVar11;
                    *(int *)(param_1 + 0xa9c) =
                            *(int *)(param_1 + 0xa9c) + *(int *)(**pplVar4 + 0x24) * iVar11;
                    iVar11 = FUN_1406e6800();
                    if (iVar11 != 0) {
                        FUN_1406e4fc0(param_1);
                        if ((uint)*(byte *)((longlong)pplVar4 + 0x44) != *(uint *)(**pplVar4 + 0x14)) {
                            if (*(byte *)((longlong)pplVar4 + 0x44) == 0) {
                                if (pplVar4[0x44] != (longlong *)0x0) {
                                    *(undefined4 *)(pplVar4[0x44] + 3) = 0;
                                }
                                if (pplVar4[0x45] != (longlong *)0x0) {
                                    *(undefined4 *)(pplVar4[0x45] + 3) = 0;
                                }
                                if (pplVar4[0x46] != (longlong *)0x0) {
                                    *(undefined4 *)(pplVar4[0x46] + 3) = 0;
                                }
                                if (pplVar4[0x47] != (longlong *)0x0) {
                                    *(undefined4 *)(pplVar4[0x47] + 3) = 0;
                                }
                                if (pplVar4[0x48] != (longlong *)0x0) {
                                    *(undefined4 *)(pplVar4[0x48] + 3) = 0;
                                }
                                if (pplVar4[0x49] != (longlong *)0x0) {
                                    *(undefined4 *)(pplVar4[0x49] + 3) = 0;
                                }
                                lVar21 = 6;
                                do {
                                    puVar7 = *(undefined8 **)(uVar18 + 8 + (longlong)*pplVar4);
                                    if (puVar7 != (undefined8 *)0x0) {
                                        uVar13 = (**(code **)(param_1 + 0x988))(*puVar7);
                                        for (puVar8 = *(ulonglong **)
                                                (*(longlong *)(param_1 + 0x980) +
                                                 (uVar13 % *(ulonglong *)(param_1 + 0x978)) * 8);
                                             puVar8 != (ulonglong *)0x0; puVar8 = (ulonglong *)puVar8[1]) {
                                            if ((uVar13 == *puVar8) &&
                                                (iVar11 = (**(code **)(param_1 + 0x990))(), iVar11 != 0)) {
                                                if (puVar8 != (ulonglong *)&DAT_ffffffffffffffe8) {
                                                    FUN_1406e4fc0();
                                                }
                                                break;
                                            }
                                        }
                                    }
                                    uVar18 = uVar18 + 8;
                                    lVar21 = lVar21 + -1;
                                } while (lVar21 != 0);
                            }
                            if ((*pplVar4)[7] != 0) {
                                FUN_1406e5110();
                            }
                        }
                        if (*(longlong *)(param_1 + 0xa50) != 0) {
                            FUN_1406e66a0();
                        }
                        plVar6 = *(longlong **)(param_1 + 0xed8);
                        if ((plVar6 != (longlong *)0x0) && (*(int *)(param_1 + 0xef0) == 0)) {
                            *(undefined4 *)(param_1 + 0xef0) = 1;
                            local_e4 = 0;
                            local_e0 = 0x3f800000;
                            local_d8 = 0;
                            local_d4 = 2;
                            local_e8 = *(undefined4 *)(&DAT_140b3fc00 + (ulonglong)(*(uint *)**pplVar4 & 3) * 4);
                            local_cc = 0;
                            (**(code **)(*plVar6 + 0x248))(plVar6,0,&local_e8);
                        }
                        uVar3 = *(undefined *)((longlong)pplVar4 + 0x44);
                        puVar17 = &DAT_1409f7dac;
                        uVar12 = *(undefined4 *)**pplVar4;
                        pcVar16 = "NodeAllocationChanged";
                        goto LAB_1406e7da0;
                    }
                    bVar2 = *(byte *)((longlong)pplVar4 + 0x44);
                    plVar6 = *pplVar4;
                    iVar11 = bVar2 + 1;
                    if (*(int *)(*plVar6 + 0x14) < iVar11) {
                        iVar11 = *(int *)(*plVar6 + 0x14);
                    }
                    bVar14 = (byte)iVar11;
                    if (iVar11 < (int)(uint)*(byte *)(plVar6 + 8)) {
                        bVar14 = *(byte *)(plVar6 + 8);
                    }
                    *(byte *)((longlong)pplVar4 + 0x44) = bVar14;
                    iVar11 = (uint)bVar14 - (uint)bVar2;
                    *(int *)(param_1 + 0xa90) = *(int *)(param_1 + 0xa90) + *(int *)(*plVar6 + 0x18) * iVar11;
                    *(int *)(param_1 + 0xa94) =
                            *(int *)(param_1 + 0xa94) + *(int *)(**pplVar4 + 0x20) * iVar11;
                    *(int *)(param_1 + 0xa98) =
                            *(int *)(param_1 + 0xa98) + *(int *)(**pplVar4 + 0x1c) * iVar11;
                    *(int *)(param_1 + 0xa9c) =
                            *(int *)(param_1 + 0xa9c) + *(int *)(**pplVar4 + 0x24) * iVar11;
                    FUN_1400d4040(param_1,"NodeDeallocationPrevented",param_1,&DAT_1409f7dbc,
                                  *(undefined4 *)**pplVar4);
                }
            }
            else if (iVar11 == 8) {
                if ((*(uint *)(pplVar4 + 8) < 2) &&
                    (pplVar5 = *(longlong ***)(param_1 + 0xa50), pplVar4 == pplVar5)) {
                    local_98 = 0;
                    local_90 = 0;
                    local_88 = 0;
                    local_80 = 0;
                    local_78 = 0;
                    local_70 = 0;
                    local_68 = 0;
                    local_60 = 0;
                    local_58 = 0;
                    FUN_14010b330(&local_98,*(undefined8 *)(param_1 + 0x20),
                                  *(undefined8 *)
                                          (param_1 + 0x7b0 +
                                           ((longlong)*(int *)(pplVar5 + 8) + (longlong)*(int *)(pplVar5 + 0x3d) * 4)
                                           * 8),L"PrimalMatrixNode");
                    FUN_1400c3880();
                    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xa50) + 0x1e4);
                    *pbVar1 = *pbVar1 | 1;
                    pbVar1 = (byte *)(*(longlong *)(param_1 + 0xa50) + 0x1e4);
                    *pbVar1 = *pbVar1 & 0xbf;
                    *(undefined8 *)(param_1 + 0xa60) = 0;
                    *(undefined8 *)(param_1 + 0xa50) = 0;
                }
                goto LAB_1406e756f;
            }
            local_res20 = local_res20 + 1;
        } while (local_res20 < local_a8._0_8_);
    }
    FUN_1400d2550(param_1,param_2,param_3);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001406e870c)

void FUN_1406e7f70(longlong param_1)

{
    undefined **ppuVar1;
    undefined8 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong *plVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong lVar9;
    undefined8 uVar10;
    undefined **ppuVar11;
    ulonglong uVar12;
    ulonglong *puVar13;
    longlong lVar14;
    uint uVar15;
    ulonglong uVar17;
    uint uVar18;
    longlong lStackX8;
    undefined8 uStack48;
    ulonglong uVar16;
    ulonglong uVar19;

    uStack48 = 0x1406e7f92;
    lVar7 = FUN_1407f0f60();
    lVar7 = -lVar7;
    *(ulonglong *)(&stack0x00004008 + lVar7) =
            DAT_140c0f7b0 ^ (ulonglong)(&stack0xffffffffffffffd8 + lVar7);
    lVar4 = *(longlong *)(param_1 + 400);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e7fc3;
    FUN_1407e4830((longlong)&lStackX8 + lVar7);
    uVar17 = 0;
    uVar12 = uVar17;
    uVar16 = uVar17;
    uVar19 = uVar17;
    do {
        uVar15 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        uVar18 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        *(undefined8 *)((longlong)&lStackX8 + uVar12 + lVar7) =
                *(undefined8 *)((longlong)&PTR_DAT_140c56a80 + uVar12);
        puVar2 = (undefined8 *)((longlong)&PTR_FUN_140c56a88 + uVar12);
        uVar12 = uVar12 + 0x10;
        *(undefined8 *)(&stack0x00000010 + uVar12 + lVar7 + -0x10) = *puVar2;
    } while (uVar15 < 0x97);
    lVar14 = (longlong)(int)uVar18 * 0x10 + -0x140c5e968 + lVar7;
    ppuVar11 = &PTR_s_GetNodeAtHexCoord_140c5e970;
    uVar12 = uVar17;
    do {
        uVar15 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar15;
        ppuVar1 = ppuVar11 + 2;
        *(undefined **)
                (&stack0xfffffffebf3a1688 + (longlong)&PTR_LAB_140c5e968 + lVar14 + (longlong)ppuVar1) =
                *ppuVar11;
        *(undefined **)
                (&stack0xfffffffebf3a1690 + (longlong)&PTR_LAB_140c5e968 + lVar14 + (longlong)ppuVar1) =
                ppuVar11[1];
        ppuVar11 = ppuVar1;
    } while (uVar15 < 0x1c);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e805f;
    LuaElementLoaderOrSo(lVar4);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    iVar3 = *(int *)(puVar2 + -1);
    if (iVar3 == 2) {
        LAB_1406e8081:
        if (*(int *)(puVar2 + -1) == 2) {
            LAB_1406e809d:
            uVar12 = puVar2[-2];
        }
        else if (*(int *)(puVar2 + -1) == 7) {
            uVar12 = puVar2[-2] + 0x30;
        }
        else {
            uVar12 = 0;
        }
    }
    else {
        if ((iVar3 == 5) || (iVar3 == 6)) goto LAB_1406e809d;
        if (iVar3 == 7) goto LAB_1406e8081;
        uVar12 = uVar17;
        if (iVar3 == 8) goto LAB_1406e809d;
    }
    *puVar2 = puVar2[-2];
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar2 + -1);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e80cc;
    uVar8 = FUN_140062650(lVar4,"__index",7);
    lVar5 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar7) = uVar8;
    *(undefined4 *)(&stack0x00000000 + lVar7) = 4;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e80f2;
    FUN_14005ea50(lVar4,lVar14 + -0x20,&stack0xfffffffffffffff8 + lVar7,lVar5 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x10;
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    lVar14 = (longlong)&lStackX8 + lVar7;
    lVar5 = *(longlong *)((longlong)&lStackX8 + lVar7);
    while (lVar5 != 0) {
        uVar8 = *(undefined8 *)(lVar14 + 8);
        if (*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x78)) {
            *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e812a;
            FUN_14005e2c0(lVar4);
        }
        *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e814f;
        lVar9 = FUN_140060ab0(lVar4,0);
        *(undefined8 *)(lVar9 + 0x20) = uVar8;
        plVar6 = *(longlong **)(lVar4 + 0x10);
        *plVar6 = lVar9;
        *(undefined4 *)(plVar6 + 1) = 6;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
        *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8173;
        uVar8 = FUN_1400580e0(lVar4,0xfffffffe);
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(lVar5 + lVar9) != '\0');
        *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8194;
        uVar10 = FUN_140062650(lVar4,lVar5);
        lVar5 = *(longlong *)(lVar4 + 0x10);
        *(undefined8 *)(&stack0xfffffffffffffff8 + lVar7) = uVar10;
        *(undefined4 *)(&stack0x00000000 + lVar7) = 4;
        *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e81b9;
        FUN_14005ea50(lVar4,uVar8,&stack0xfffffffffffffff8 + lVar7,lVar5 + -0x10);
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x10;
        plVar6 = (longlong *)(lVar14 + 0x10);
        uVar8 = *(undefined8 *)(lVar4 + 0x10);
        lVar14 = lVar14 + 0x10;
        lVar5 = *plVar6;
    }
    *(undefined8 *)(lVar4 + 0x10) = uVar8;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e81ed;
    FUN_140057020(lVar4,"MatrixWindow",&DAT_140b720b8);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8202;
    FUN_140058710(lVar4,"CodeEnumPrimalMatrixRewardType",0x1e);
    if (*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x78)) {
        *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8218;
        FUN_14005e2c0(lVar4);
    }
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8229;
    uVar8 = FUN_14005c1b0(lVar4,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    lVar14 = 6;
    *puVar2 = uVar8;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    do {
        *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e825f;
        FUN_1400f06f0(lVar4);
        lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8273;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e828a;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e82a2;
    FUN_140058710(lVar4,"CodeEnumPrimalMatrixNodeVisualType",0x22);
    if (*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x78)) {
        *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e82b8;
        FUN_14005e2c0(lVar4);
    }
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e82c9;
    uVar8 = FUN_14005c1b0(lVar4,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar8;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e82ed;
    FUN_140058710(lVar4,&DAT_1409f7d94,3);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e830d;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8324;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e833e;
    FUN_140058710(lVar4,"Green",5);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8368;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e837f;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8399;
    FUN_140058710(lVar4,&DAT_140b3e634,4);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e83c3;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e83da;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e83f4;
    FUN_140058710(lVar4,"Purple",6);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e841e;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8435;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e844f;
    FUN_140058710(lVar4,"Mixed",5);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = 0x4010000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8479;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8490;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e84ad;
    FUN_14005ea50(lVar4,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e84c7;
    FUN_140058710(lVar4,"CodeEnumPrimalMatrixNodeState",0x1d);
    if (*(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar4 + 0x20) + 0x78)) {
        *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e84dd;
        FUN_14005e2c0(lVar4);
    }
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e84ee;
    uVar8 = FUN_14005c1b0(lVar4,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar8;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8512;
    FUN_140058710(lVar4,"Locked",6);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8532;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8549;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8563;
    FUN_140058710(lVar4,"Unlocked",8);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8583;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e859a;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e85b4;
    FUN_140058710(lVar4,"Started",7);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e85d4;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e85eb;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8605;
    FUN_140058710(lVar4,"Completed",9);
    puVar2 = *(undefined8 **)(lVar4 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8625;
    uVar8 = FUN_1400580e0(lVar4,0xfffffffd);
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e863c;
    FUN_14005ea50(lVar4,uVar8,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + -0x20;
    lVar14 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8659;
    FUN_14005ea50(lVar4,&DAT_ffffffffffffffd0 + lVar14,lVar14 + -0x20,lVar14 + -0x10);
    *(longlong *)(lVar4 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar4 + 0x10));
    lVar14 = *(longlong *)(lVar4 + 0x20);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8677;
    uVar10 = FUN_140062650(lVar4,"Apollo.Window",0xd);
    uVar8 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(&stack0xfffffffffffffff8 + lVar7) = uVar10;
    *(undefined4 *)(&stack0x00000000 + lVar7) = 4;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e869c;
    FUN_14005e8e0(lVar4,lVar14 + 0xa0,&stack0xfffffffffffffff8 + lVar7,uVar8);
    *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 0x10;
    lVar14 = *(longlong *)(lVar4 + 0x10);
    iVar3 = *(int *)(lVar14 + -8);
    puVar13 = (ulonglong *)(lVar14 + -0x10);
    if (iVar3 == 2) {
        LAB_1406e86c7:
        if (*(int *)(lVar14 + -8) != 2) {
            if (*(int *)(lVar14 + -8) == 7) {
                uVar17 = *puVar13 + 0x30;
            }
            goto LAB_1406e86e0;
        }
    }
    else if ((iVar3 != 5) && (iVar3 != 6)) {
        if (iVar3 == 7) goto LAB_1406e86c7;
        if (iVar3 != 8) goto LAB_1406e86e0;
    }
    uVar17 = *puVar13;
    LAB_1406e86e0:
    *(ulonglong **)(lVar4 + 0x10) = puVar13;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e86ef;
    FUN_1400ed720(param_1,uVar12,uVar17);
    *(code **)(&stack0xfffffffffffffff8 + lVar7) = FUN_1406e87d0;
    *(code **)(&stack0x00000000 + lVar7) = FUN_140001b30;
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8726;
    FUN_1400f85d0(param_1 + 0xa80,L"MatrixWindow",&stack0xfffffffffffffff8 + lVar7);
    *(undefined8 *)((longlong)&uStack48 + lVar7) = 0x1406e8736;
    FUN_1407db4f0(*(ulonglong *)(&stack0x00004008 + lVar7) ^
                  (ulonglong)(&stack0xffffffffffffffd8 + lVar7));
    return;
}



void FUN_1406e8760(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x20);
    local_18 = FUN_140062650(param_2,"Apollo.MatrixWindow",0x13);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2,0xfffffffe);
    return;
}



void FUN_1406e87d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
    longlong lVar1;
    undefined auStack184 [32];
    undefined *local_98;
    undefined8 local_90;
    undefined local_78 [96];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack184;
    local_98 = (undefined *)0x0;
    FUN_1400d45e0(local_78,param_1,param_2,param_5);
    lVar1 = FUN_14018b280(0xf00,0);
    if (lVar1 != 0) {
        local_98 = local_78;
        local_90 = param_4;
        FUN_1406dfad0(lVar1,param_1,param_2);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack184);
    return;
}



longlong FUN_1406e8880(undefined8 param_1,undefined4 param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0();
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(ulonglong *)(lVar1 + 0x1b0) >> 0x2c & 1) == 0) {
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

ulonglong FUN_1406e8930(longlong param_1,int param_2)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    lVar1 = *(longlong *)(DAT_140c65898 + 0x78);
    if (lVar1 == 0) {
        return 0;
    }
    uVar6 = 0;
    uVar7 = uVar6;
    if (*(longlong *)(param_1 + 0x9a0) != 0) {
        do {
            lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x998) + uVar7 * 8);
            uVar3 = FUN_1406dfa40(lVar2,lVar1);
            if (DAT_140c63840 == (code *)0x0) {
                if ((_DAT_140c64fc4 == 0) && (iVar4 = FUN_140225fe0(), -1 < iVar4)) {
                    lVar5 = (**(code **)(*DAT_140c65078 + 0x18))(DAT_140c65078,uVar3);
                    goto LAB_1406e89dc;
                }
            }
            else {
                lVar5 = (*DAT_140c63840)(&PTR_u_PrimalMatrixReward_140a6c350,uVar3,DAT_140c63858);
                LAB_1406e89dc:
                if (lVar5 != 0) {
                    if ((*(int *)(lVar5 + 4) == 4) && (*(int *)(lVar5 + 0x14) == param_2)) {
                        uVar6 = (ulonglong)((int)uVar6 + (uint)*(byte *)(lVar2 + 0x44));
                    }
                    if ((*(int *)(lVar5 + 8) == 4) && (*(int *)(lVar5 + 0x18) == param_2)) {
                        uVar6 = (ulonglong)((int)uVar6 + (uint)*(byte *)(lVar2 + 0x44));
                    }
                    if ((*(int *)(lVar5 + 0xc) == 4) && (*(int *)(lVar5 + 0x1c) == param_2)) {
                        uVar6 = (ulonglong)((int)uVar6 + (uint)*(byte *)(lVar2 + 0x44));
                    }
                    if ((*(int *)(lVar5 + 0x10) == 4) && (*(int *)(lVar5 + 0x20) == param_2)) {
                        uVar6 = (ulonglong)((int)uVar6 + (uint)*(byte *)(lVar2 + 0x44));
                    }
                }
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < *(ulonglong *)(param_1 + 0x9a0));
    }
    return uVar6;
}



void FUN_1406e8a60(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                   uint param_5,uint param_6)

{
    uint uVar1;
    double *pdVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    int iVar5;
    longlong lVar6;
    undefined8 uVar7;
    uint *puVar8;
    undefined8 *puVar9;
    longlong lVar10;
    longlong lVar11;
    uint uVar12;
    longlong lVar13;
    ulonglong uVar14;
    undefined8 *puVar15;
    ulonglong uVar16;
    uint *puVar17;
    float fVar18;
    longlong local_98;
    undefined **local_90;
    undefined4 local_88;
    longlong local_80;
    undefined4 local_78;
    undefined local_70 [8];
    longlong local_68;

    lVar6 = FUN_140226240(param_4);
    if (lVar6 != 0) {
        uVar16 = (ulonglong)param_5;
        puVar17 = (uint *)(lVar6 + 0x14);
        local_98 = 4;
        do {
            lVar6 = *(longlong *)(param_2 + 0x10);
            local_90 = &PTR_FUN_140b569f0;
            local_78 = 1;
            local_80 = lVar6;
            if (*(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar6 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar6);
            }
            puVar15 = *(undefined8 **)(lVar6 + 0x10);
            uVar7 = FUN_14005c1b0(lVar6);
            *(undefined4 *)(puVar15 + 1) = 5;
            *puVar15 = uVar7;
            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
            uVar3 = FUN_1400578c0();
            uVar1 = puVar17[-4];
            local_88 = uVar3;
            if (uVar1 == 1) {
                lVar11 = FUN_14022f2c0(*puVar17);
                if (lVar11 != 0) {
                    lVar11 = *(longlong *)(param_2 + 0x10);
                    if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar11);
                    }
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    uVar7 = FUN_14005c1b0(lVar11,0,0);
                    *(undefined4 *)(puVar15 + 1) = 5;
                    *puVar15 = uVar7;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    uVar4 = FUN_1400578c0(lVar11);
                    uVar14 = (ulonglong)*puVar17;
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar4);
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    *puVar15 = *puVar9;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar11,puVar15,L"idRewardProperty",uVar14 & 0xffffffff);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar4);
                    *puVar15 = *puVar9;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar11);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                    puVar15 = *(undefined8 **)(lVar11 + 0x10);
                    fVar18 = (float)uVar16 * (float)puVar17[8];
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar4);
                    *puVar15 = *puVar9;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    lVar10 = FUN_14018f0e0(local_70,L"fValue");
                    if (*(longlong *)(lVar10 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    }
                    else {
                        lVar13 = -1;
                        do {
                            lVar13 = lVar13 + 1;
                        } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar13) != '\0');
                        FUN_140058710(lVar11);
                    }
                    if (local_68 != 0) {
                        FUN_14018b900(local_68,0);
                    }
                    pdVar2 = *(double **)(lVar11 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)fVar18;
                    *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar11,0xfffffffd);
                    FUN_14005ea50(lVar11,uVar7,*(longlong *)(lVar11 + 0x10) + -0x20);
                    *(longlong *)(lVar11 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                    FUN_1400fb2a0(&local_90,L"tRewardProperty",uVar4);
                    uVar14 = (ulonglong)puVar17[-4];
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    uVar7 = *puVar9;
                    *puVar15 = uVar7;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    FUN_1400f06f0(lVar6,uVar7,L"eType",uVar14 & 0xffffffff);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                    FUN_1400fb1d0(param_2);
                    FUN_1400579e0(lVar11);
                }
            }
            else {
                if (uVar1 == 2) {
                    fVar18 = (float)uVar16 * (float)puVar17[8];
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    *puVar15 = *puVar9;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    lVar11 = FUN_14018f0e0(local_70,L"nAbilityPoints");
                    if (*(longlong *)(lVar11 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    }
                    else {
                        lVar10 = -1;
                        do {
                            lVar10 = lVar10 + 1;
                        } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar10) != '\0');
                        FUN_140058710(lVar6);
                    }
                    if (local_68 != 0) {
                        FUN_14018b900(local_68,0);
                    }
                    pdVar2 = *(double **)(lVar6 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)fVar18;
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar6,0xfffffffd);
                    FUN_14005ea50(lVar6,uVar7,*(longlong *)(lVar6 + 0x10) + -0x20);
                    *(longlong *)(lVar6 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0));
                }
                else {
                    if (uVar1 != 3) {
                        if (uVar1 == 4) {
                            uVar1 = *puVar17;
                            lVar11 = FUN_1403acd90(DAT_140c65b70);
                            if (((lVar11 != 0) && (*(longlong *)(lVar11 + 8) != 0)) &&
                                (lVar11 = FUN_1407a1500(DAT_140c65b70), lVar11 != 0)) {
                                iVar5 = FUN_1406e8930(param_1,uVar1);
                                uVar12 = (param_5 - *(byte *)(param_3 + 0x44)) + iVar5 + -1;
                                param_6 = uVar1;
                                iVar5 = FUN_1403d3470(lVar6,&param_6);
                                if (iVar5 != 0) {
                                    FUN_1400fb540(&local_90,L"splAbility");
                                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                                }
                                if (2 < uVar12) {
                                    uVar12 = 2;
                                }
                                uVar14 = (ulonglong)*(uint *)(&DAT_140b720a8 + (ulonglong)uVar12 * 4);
                                puVar9 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                                puVar15 = *(undefined8 **)(lVar6 + 0x10);
                                *puVar15 = *puVar9;
                                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                FUN_1400f06f0(lVar6,puVar15,L"nTierUnlocked",uVar14 & 0xffffffff);
                                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                                puVar15 = *(undefined8 **)(lVar6 + 0x10);
                                puVar9 = (undefined8 *)
                                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0));
                                *puVar15 = *puVar9;
                                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                                FUN_1400f06f0(lVar6);
                                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                                FUN_1400fb1d0(param_2);
                            }
                        }
                        else if ((((uVar1 == 5) && (puVar8 = (uint *)FUN_1402479c0(), puVar8 != (uint *)0x0)) &&
                                  ((uVar1 = puVar8[9], (uVar1 & 0x20) != 0 || ((uVar1 & 0x40) != 0)))) &&
                                 (((uVar1 & 4) != 0 && ((uVar1 & 8) == 0)))) {
                            lVar11 = *(longlong *)(param_2 + 0x10);
                            if (*(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x70) <=
                                *(ulonglong *)(*(longlong *)(lVar11 + 0x20) + 0x78)) {
                                FUN_14005e2c0(lVar11);
                            }
                            puVar15 = *(undefined8 **)(lVar11 + 0x10);
                            uVar7 = FUN_14005c1b0(lVar11,0,0);
                            *(undefined4 *)(puVar15 + 1) = 5;
                            *puVar15 = uVar7;
                            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                            uVar4 = FUN_1400578c0(lVar11);
                            uVar14 = (ulonglong)*puVar8;
                            puVar9 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar4);
                            puVar15 = *(undefined8 **)(lVar11 + 0x10);
                            *puVar15 = *puVar9;
                            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                            FUN_1400f06f0(lVar11,puVar15,L"idProperty",uVar14 & 0xffffffff);
                            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
                            puVar15 = *(undefined8 **)(lVar11 + 0x10);
                            fVar18 = (float)uVar16 * (float)puVar17[8];
                            puVar9 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar4);
                            *puVar15 = *puVar9;
                            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                            lVar10 = FUN_14018f0e0(local_70,L"fValue");
                            if (*(longlong *)(lVar10 + 8) == 0) {
                                *(undefined4 *)(*(longlong *)(lVar11 + 0x10) + 8) = 0;
                                *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                            }
                            else {
                                lVar13 = -1;
                                do {
                                    lVar13 = lVar13 + 1;
                                } while (*(char *)(*(longlong *)(lVar10 + 8) + lVar13) != '\0');
                                FUN_140058710(lVar11);
                            }
                            if (local_68 != 0) {
                                FUN_14018b900(local_68,0);
                            }
                            pdVar2 = *(double **)(lVar11 + 0x10);
                            *(undefined4 *)(pdVar2 + 1) = 3;
                            *pdVar2 = (double)fVar18;
                            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
                            uVar7 = FUN_1400580e0(lVar11,0xfffffffd);
                            FUN_14005ea50(lVar11,uVar7,*(longlong *)(lVar11 + 0x10) + -0x20);
                            *(longlong *)(lVar11 + 0x10) =
                                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar11 + 0x10));
                            FUN_1400fb2a0(&local_90,L"tUnitProperty",uVar4);
                            uVar14 = (ulonglong)puVar17[-4];
                            puVar9 = (undefined8 *)
                                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                            puVar15 = *(undefined8 **)(lVar6 + 0x10);
                            uVar7 = *puVar9;
                            *puVar15 = uVar7;
                            *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                            FUN_1400f06f0(lVar6,uVar7,L"eType",uVar14 & 0xffffffff);
                            *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                            FUN_1400fb1d0(param_2);
                            FUN_1400579e0(lVar11);
                        }
                        goto LAB_1406e8d67;
                    }
                    fVar18 = (float)uVar16 * (float)puVar17[8];
                    puVar9 = (undefined8 *)
                            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0),uVar3);
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    *puVar15 = *puVar9;
                    *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    lVar11 = FUN_14018f0e0(local_70,L"nAMPPoints");
                    if (*(longlong *)(lVar11 + 8) == 0) {
                        *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + 8) = 0;
                        *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    }
                    else {
                        lVar10 = -1;
                        do {
                            lVar10 = lVar10 + 1;
                        } while (*(char *)(*(longlong *)(lVar11 + 8) + lVar10) != '\0');
                        FUN_140058710(lVar6);
                    }
                    if (local_68 != 0) {
                        FUN_14018b900(local_68,0);
                    }
                    pdVar2 = *(double **)(lVar6 + 0x10);
                    *(undefined4 *)(pdVar2 + 1) = 3;
                    *pdVar2 = (double)fVar18;
                    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                    uVar7 = FUN_1400580e0(lVar6,0xfffffffd);
                    FUN_14005ea50(lVar6,uVar7,*(longlong *)(lVar6 + 0x10) + -0x20);
                    *(longlong *)(lVar6 + 0x10) =
                            (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(lVar6 + 0x10));
                    puVar15 = *(undefined8 **)(lVar6 + 0x10);
                    puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar6 + 0x20) + 0xa0));
                }
                *puVar15 = *puVar9;
                *(undefined4 *)(puVar15 + 1) = *(undefined4 *)(puVar9 + 1);
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
                FUN_1400f06f0(lVar6);
                *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + -0x10;
                FUN_1400fb1d0(param_2);
            }
            LAB_1406e8d67:
            FUN_1400579e0(lVar6);
            puVar17 = puVar17 + 1;
            local_98 = local_98 + -1;
        } while (local_98 != 0);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1406e9330(undefined8 param_1,longlong param_2,longlong **param_3)

{
    longlong *plVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined4 uVar4;
    uint uVar5;
    undefined8 *puVar6;
    undefined8 uVar7;
    ulonglong *puVar8;
    longlong lVar9;
    ulonglong uVar10;
    undefined **local_68;
    undefined8 local_60;
    longlong local_58;
    undefined4 local_50;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;

    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar10 = (ulonglong)*(uint *)**param_3;
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,&DAT_140b3f530,uVar10 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar10 = (ulonglong)*(uint *)(param_3 + 0x3d);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"eVisualType",uVar10 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar10 = (ulonglong)*(uint *)(param_3 + 8);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"eState",uVar10 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar10 = (ulonglong)*(byte *)((longlong)param_3 + 0x44);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nAllocations",uVar10 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar10 = (ulonglong)*(uint *)(**param_3 + 0x14);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nMaxAllocations",uVar10 & 0xffffffff);
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    uVar10 = (ulonglong)*(byte *)(*param_3 + 8);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),
                          *(undefined4 *)(param_2 + 8));
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    *puVar2 = *puVar6;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_1400f06f0(*(undefined8 *)(param_2 + 0x10),puVar2,L"nSavedAllocations",uVar10 & 0xffffffff);
    local_30 = 1;
    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    *plVar1 = *plVar1 + -0x10;
    lVar9 = *(longlong *)(param_2 + 0x10);
    local_48 = &PTR_FUN_140b569f0;
    local_38 = lVar9;
    if (*(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(lVar9 + 0x20) + 0x78)) {
        FUN_14005e2c0(lVar9);
    }
    puVar2 = *(undefined8 **)(lVar9 + 0x10);
    uVar7 = FUN_14005c1b0(lVar9,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar7;
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    uVar4 = FUN_1400578c0(lVar9);
    uVar5 = *(uint *)(**param_3 + 0x18);
    local_60 = 0xb;
    local_58 = 0;
    local_40 = uVar4;
    puVar8 = (ulonglong *)FUN_140059170(lVar9,0x18);
    *puVar8 = (ulonglong)uVar5;
    puVar8[1] = local_60;
    puVar8[2] = 0;
    lVar3 = *(longlong *)(lVar9 + 0x20);
    local_68 = (undefined **)FUN_140062650(lVar9,"Game.Money",10);
    local_60 = CONCAT44(local_60._4_4_,4);
    FUN_14005e8e0(lVar9,lVar3 + 0xa0,&local_68,*(undefined8 *)(lVar9 + 0x10));
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_140058bf0(lVar9,0xfffffffe);
    FUN_1400fb540(&local_48,L"monRed");
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
    local_60 = 0xd;
    uVar5 = *(uint *)(**param_3 + 0x20);
    local_58 = 0;
    puVar8 = (ulonglong *)FUN_140059170(lVar9,0x18);
    *puVar8 = (ulonglong)uVar5;
    puVar8[1] = local_60;
    puVar8[2] = 0;
    lVar3 = *(longlong *)(lVar9 + 0x20);
    local_68 = (undefined **)FUN_140062650(lVar9,"Game.Money",10);
    local_60 = CONCAT44(local_60._4_4_,4);
    FUN_14005e8e0(lVar9,lVar3 + 0xa0,&local_68,*(undefined8 *)(lVar9 + 0x10));
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_140058bf0(lVar9,0xfffffffe);
    FUN_1400fb540(&local_48,L"monGreen");
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
    uVar5 = *(uint *)(**param_3 + 0x1c);
    local_60 = 0xc;
    local_58 = 0;
    puVar8 = (ulonglong *)FUN_140059170(lVar9,0x18);
    *puVar8 = (ulonglong)uVar5;
    puVar8[1] = local_60;
    puVar8[2] = 0;
    lVar3 = *(longlong *)(lVar9 + 0x20);
    local_68 = (undefined **)FUN_140062650(lVar9,"Game.Money",10);
    local_60 = CONCAT44(local_60._4_4_,4);
    FUN_14005e8e0(lVar9,lVar3 + 0xa0,&local_68,*(undefined8 *)(lVar9 + 0x10));
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_140058bf0(lVar9,0xfffffffe);
    FUN_1400fb540(&local_48,L"monBlue");
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
    local_60 = 0xe;
    uVar5 = *(uint *)(**param_3 + 0x24);
    local_58 = 0;
    puVar8 = (ulonglong *)FUN_140059170(lVar9,0x18);
    *puVar8 = (ulonglong)uVar5;
    puVar8[1] = local_60;
    puVar8[2] = 0;
    lVar3 = *(longlong *)(lVar9 + 0x20);
    local_68 = (undefined **)FUN_140062650(lVar9,"Game.Money",10);
    local_60 = CONCAT44(local_60._4_4_,4);
    FUN_14005e8e0(lVar9,lVar3 + 0xa0,&local_68,*(undefined8 *)(lVar9 + 0x10));
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
    FUN_140058bf0(lVar9,0xfffffffe);
    FUN_1400fb540(&local_48,L"monPurple");
    *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
    FUN_1400fb2a0(param_2,L"tPrice",uVar4);
    if ((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        uVar4 = FUN_1406dfa40(param_3);
        if (*(char *)((longlong)param_3 + 0x44) != '\0') {
            lVar3 = *(longlong *)(param_2 + 0x10);
            local_50 = 1;
            local_68 = &PTR_FUN_140b569f0;
            local_58 = lVar3;
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar2 = *(undefined8 **)(lVar3 + 0x10);
            uVar7 = FUN_14005c1b0(lVar3,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar7;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            uVar5 = FUN_1400578c0(lVar3);
            local_60 = local_60 & 0xffffffff00000000 | (ulonglong)uVar5;
            FUN_1406e8a60(param_1,&local_68,param_3,uVar4,*(undefined *)((longlong)param_3 + 0x44));
            FUN_1400fb2a0(param_2,L"arCurrentRewards",local_60 & 0xffffffff);
            if (local_58 != 0) {
                FUN_1400579e0();
            }
        }
        if ((uint)*(byte *)((longlong)param_3 + 0x44) < *(uint *)(**param_3 + 0x14)) {
            lVar3 = *(longlong *)(param_2 + 0x10);
            local_50 = 1;
            local_68 = &PTR_FUN_140b569f0;
            local_58 = lVar3;
            if (*(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(lVar3 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar3);
            }
            puVar2 = *(undefined8 **)(lVar3 + 0x10);
            uVar7 = FUN_14005c1b0(lVar3,0,0);
            *(undefined4 *)(puVar2 + 1) = 5;
            *puVar2 = uVar7;
            *(longlong *)(lVar3 + 0x10) = *(longlong *)(lVar3 + 0x10) + 0x10;
            uVar5 = FUN_1400578c0(lVar3);
            local_60 = local_60 & 0xffffffff00000000 | (ulonglong)uVar5;
            FUN_1406e8a60(param_1,&local_68,param_3,uVar4,*(byte *)((longlong)param_3 + 0x44) + 1);
            FUN_1400fb2a0(param_2,L"arNextRewards",local_60 & 0xffffffff);
            if (local_58 != 0) {
                FUN_1400579e0();
            }
        }
    }
    FUN_1400579e0(lVar9);
    return;
}



undefined8 FUN_1406e99b0(longlong param_1)

{
    ulonglong *puVar1;
    undefined8 *puVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 uVar7;
    undefined8 *puVar8;
    longlong lVar9;
    undefined4 local_res10;
    undefined4 local_res14;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar5 = FUN_1406e8880();
    uVar6 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                lVar9 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                goto LAB_1406e9a0e;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar6 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar9 = 0;
    LAB_1406e9a0e:
    local_res10 = FUN_1400f26a0(lVar9 + 0x180);
    local_res14 = FUN_1400f26a0(lVar9 + 0x180);
    uVar6 = (**(code **)(lVar5 + 0x960))(&local_res10);
    puVar1 = *(ulonglong **)
            (*(longlong *)(lVar5 + 0x958) + (uVar6 % *(ulonglong *)(lVar5 + 0x950)) * 8);
    do {
        if (puVar1 == (ulonglong *)0x0) {
            LAB_1406e9a84:
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        if ((uVar6 == *puVar1) &&
            (iVar3 = (**(code **)(lVar5 + 0x968))(&local_res10,puVar1 + 2), iVar3 != 0)) {
            if (puVar1 + 3 != (ulonglong *)0x0) {
                uVar6 = puVar1[3];
                local_28 = &PTR_FUN_140b569f0;
                local_10 = 1;
                local_18 = param_1;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar2 = *(undefined8 **)(param_1 + 0x10);
                uVar7 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar2 + 1) = 5;
                *puVar2 = uVar7;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar4 = FUN_1400578c0(param_1);
                local_20 = uVar4;
                FUN_1406e9330(lVar5,&local_28,uVar6);
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                puVar2 = *(undefined8 **)(param_1 + 0x10);
                *puVar2 = *puVar8;
                *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400579e0(param_1,puVar2,uVar4);
                return 1;
            }
            goto LAB_1406e9a84;
        }
        puVar1 = (ulonglong *)puVar1[1];
    } while( true );
}



undefined8 FUN_1406e9b70(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    lVar3 = FUN_1406e8880(param_1,1);
    if (*(longlong *)(lVar3 + 0x940) == 0) {
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
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    FUN_1406e9330(lVar3,&local_28,*(undefined8 *)(lVar3 + 0x940));
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar5;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,uVar2);
    return 1;
}



undefined8 FUN_1406e9c80(longlong param_1)

{
    double *pdVar1;
    int iVar2;
    undefined4 uVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 *puVar10;
    undefined auVar11 [16];
    float fVar12;
    double dVar13;
    float fVar14;
    undefined local_48 [8];
    longlong local_40;

    FUN_1406e8880(param_1,1);
    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                lVar6 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                goto LAB_1406e9ce0;
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar6 = 0;
    LAB_1406e9ce0:
    iVar2 = FUN_1400f26a0(lVar6 + 0x180,2);
    fVar12 = (float)iVar2;
    fVar14 = fVar12 * 96.0;
    iVar2 = FUN_1400f26a0(lVar6 + 0x180,3);
    auVar11 = sqrtps(ZEXT1216(ZEXT812(0x40400000)),ZEXT1216(ZEXT812(0x40400000)));
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    dVar13 = (double)fVar14;
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_48,&DAT_140b3f664);
    lVar8 = -1;
    if (*(longlong *)(lVar6 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar6 + 8) + lVar9) != '\0');
        FUN_140058710(param_1);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar13;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    dVar13 = (double)(((float)iVar2 + fVar12 * 0.5) * SUB164(auVar11,0) * 64.0);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = FUN_14018f0e0(local_48,&DAT_140b3f65c);
    lVar6 = *(longlong *)(lVar6 + 8);
    if (lVar6 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(lVar6 + lVar8) != '\0');
        FUN_140058710(param_1,lVar6,lVar8);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar13;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar4 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar4,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
    *puVar10 = *puVar5;
    *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406e9f80(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    double extraout_XMM0_Qa;
    double dVar10;
    double dVar11;
    float fVar12;
    int local_res8;
    int local_resc;
    undefined local_48 [64];

    lVar3 = FUN_1406e8880(param_1,1);
    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                lVar8 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                goto LAB_1406e9fe8;
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar8 = 0;
    LAB_1406e9fe8:
    lVar9 = *(longlong *)(lVar8 + 400);
    dVar11 = 0.0;
    puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x10);
    dVar10 = extraout_XMM0_Qa;
    if (((puVar4 < *(undefined8 **)(lVar9 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar9 + 0x18) + 0x18))) {
        dVar10 = (double)FUN_140056c40(lVar9,2);
    }
    lVar8 = *(longlong *)(lVar8 + 400);
    fVar12 = (float)dVar10;
    puVar4 = (undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x20);
    if (((puVar4 < *(undefined8 **)(lVar8 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar8 + 0x18) + 0x28))) {
        dVar11 = (double)FUN_140056c40(lVar8,3);
    }
    local_48._0_16_ = ZEXT816(CONCAT44((float)dVar11,fVar12));
    FUN_1406df8a0(0,0,*(undefined4 *)(lVar3 + 0x470),&local_res8,local_48);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar4 + 1) = 5;
    *puVar4 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    dVar11 = (double)local_res8;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = *puVar6;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = FUN_14018f0e0(local_48,&DAT_140b3f654);
    lVar8 = -1;
    if (*(longlong *)(lVar3 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar9) != '\0');
        FUN_140058710(param_1);
    }
    if (local_48._8_8_ != 0) {
        FUN_14018b900(local_48._8_8_,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    dVar11 = (double)local_resc;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar4 = *puVar6;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = FUN_14018f0e0(local_48,&DAT_140b3f64c);
    lVar3 = *(longlong *)(lVar3 + 8);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(lVar3 + lVar8) != '\0');
        FUN_140058710(param_1,lVar3,lVar8);
    }
    if (local_48._8_8_ != 0) {
        FUN_14018b900(local_48._8_8_,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar4 = *puVar6;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406ea2b0(longlong param_1)

{
    double *pdVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong lVar9;
    double extraout_XMM0_Qa;
    double dVar10;
    double dVar11;
    float fVar12;
    int local_res8;
    int local_resc;
    undefined local_48 [64];

    lVar3 = FUN_1406e8880(param_1,1);
    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                lVar8 = *(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar7 * 8);
                goto LAB_1406ea318;
            }
            uVar7 = (ulonglong)((int)uVar7 + 1);
        } while (uVar7 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar8 = 0;
    LAB_1406ea318:
    lVar9 = *(longlong *)(lVar8 + 400);
    dVar11 = 0.0;
    puVar4 = (undefined8 *)(*(longlong *)(lVar9 + 0x18) + 0x10);
    dVar10 = extraout_XMM0_Qa;
    if (((puVar4 < *(undefined8 **)(lVar9 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar9 + 0x18) + 0x18))) {
        dVar10 = (double)FUN_140056c40(lVar9,2);
    }
    lVar8 = *(longlong *)(lVar8 + 400);
    fVar12 = (float)dVar10;
    puVar4 = (undefined8 *)(*(longlong *)(lVar8 + 0x18) + 0x20);
    if (((puVar4 < *(undefined8 **)(lVar8 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar8 + 0x18) + 0x28))) {
        dVar11 = (double)FUN_140056c40(lVar8,3);
    }
    fVar12 = *(float *)(lVar3 + 0x450) - fVar12;
    local_48._0_16_ =
            CONCAT412(*(float *)(lVar3 + 0x45c) - 0.0,
                      CONCAT48(*(float *)(lVar3 + 0x458) - 0.0,
                               CONCAT44(*(float *)(lVar3 + 0x454) - (float)dVar11,fVar12)));
    FUN_1406df8a0(fVar12,0,*(undefined4 *)(lVar3 + 0x470),&local_res8,local_48);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar4 + 1) = 5;
    *puVar4 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    dVar11 = (double)local_res8;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = *puVar6;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = FUN_14018f0e0(local_48,&DAT_140b3f644);
    lVar8 = -1;
    if (*(longlong *)(lVar3 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar9 = -1;
        do {
            lVar9 = lVar9 + 1;
        } while (*(char *)(*(longlong *)(lVar3 + 8) + lVar9) != '\0');
        FUN_140058710(param_1);
    }
    if (local_48._8_8_ != 0) {
        FUN_14018b900(local_48._8_8_,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    dVar11 = (double)local_resc;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar4 = *puVar6;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar3 = FUN_14018f0e0(local_48,&DAT_140b3f63c);
    lVar3 = *(longlong *)(lVar3 + 8);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        do {
            lVar8 = lVar8 + 1;
        } while (*(char *)(lVar3 + lVar8) != '\0');
        FUN_140058710(param_1,lVar3,lVar8);
    }
    if (local_48._8_8_ != 0) {
        FUN_14018b900(local_48._8_8_,0);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = dVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar5,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    *puVar4 = *puVar6;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_1406ea5f0(longlong param_1)

{
    float fVar1;
    double *pdVar2;
    longlong lVar3;

    lVar3 = FUN_1406e8880(param_1,1);
    pdVar2 = *(double **)(param_1 + 0x10);
    fVar1 = *(float *)(lVar3 + 0x470);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)fVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ea630(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    ulonglong uVar4;
    ulonglong uVar5;
    double dVar6;

    uVar2 = FUN_1406e8880();
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
    lVar1 = *(longlong *)(uVar5 + 400);
    puVar3 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10);
    if (((puVar3 < *(undefined8 **)(lVar1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x18))) {
        dVar6 = (double)FUN_140056c40(lVar1,2);
    }
    else {
        dVar6 = 0.0;
    }
    FUN_1406e47a0(SUB84(dVar6,0),(float)dVar6,uVar2);
    return 0;
}



undefined8 FUN_1406ea6f0(void)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 extraout_XMM0_Qa;

    uVar2 = FUN_1406e8880();
    iVar1 = DAT_140c53ac0;
    if (*DAT_140c63750 < DAT_140c53ac0) {
        iVar1 = *DAT_140c63750;
    }
    FUN_1406e47a0(extraout_XMM0_Qa,*(undefined4 *)(&DAT_140c53ad0 + (longlong)iVar1 * 4),uVar2);
    return 0;
}



undefined8 FUN_1406ead80(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined local_48 [8];
    longlong local_40;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_1406e8880();
    uVar7 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong)((int)uVar6 + 1);
        } while (uVar6 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar1 = *(longlong *)(uVar7 + 400);
    lVar3 = FUN_14018f0e0(local_48,0);
    uVar5 = *(undefined8 *)(lVar3 + 8);
    puVar4 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    if (((puVar4 < *(undefined8 **)(lVar1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(lVar1 + 0x18) + 0x28))) {
        uVar5 = FUN_140056bb0(lVar1,3);
    }
    FUN_14018f2d0(local_28,uVar5);
    if (local_40 != 0) {
        FUN_14018b900(local_40,0);
    }
    if (*(longlong *)(lVar2 + 0x20) != 0) {
        FUN_140109710(lVar2 + 0x538,*(longlong *)(lVar2 + 0x20) + 0xf0,local_20,0);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_1406eae90(longlong param_1)

{
    undefined2 *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined2 *puVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_1406e8880();
    uVar4 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar3 = 0;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) break;
            uVar4 = uVar4 + 1;
            uVar3 = (ulonglong)uVar4;
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    if (*(longlong *)(lVar2 + 0x538) == 0) {
        puVar5 = (undefined2 *)0x0;
    }
    else {
        puVar1 = *(undefined2 **)(*(longlong *)(lVar2 + 0x538) + 0x20);
        puVar5 = &DAT_140b7b704;
        if (puVar1 != (undefined2 *)0x0) {
            puVar5 = puVar1;
        }
    }
    lVar2 = FUN_14018f0e0(local_28,puVar5);
    if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar6) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406eb070(longlong param_1)

{
    undefined2 *puVar1;
    longlong lVar2;
    ulonglong uVar3;
    uint uVar4;
    undefined2 *puVar5;
    longlong lVar6;
    undefined local_28 [8];
    longlong local_20;

    lVar2 = FUN_1406e8880();
    uVar4 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar3 = 0;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) break;
            uVar4 = uVar4 + 1;
            uVar3 = (ulonglong)uVar4;
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    if (*(longlong *)(lVar2 + 0xa20) == 0) {
        puVar5 = (undefined2 *)0x0;
    }
    else {
        puVar1 = *(undefined2 **)(*(longlong *)(lVar2 + 0xa20) + 0x20);
        puVar5 = &DAT_140b7b704;
        if (puVar1 != (undefined2 *)0x0) {
            puVar5 = puVar1;
        }
    }
    lVar2 = FUN_14018f0e0(local_28,puVar5);
    if (*(longlong *)(lVar2 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar6 = -1;
        do {
            lVar6 = lVar6 + 1;
        } while (*(char *)(*(longlong *)(lVar2 + 8) + lVar6) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406eb160(longlong param_1)

{
    ulonglong uVar1;
    double *pdVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    longlong **pplVar8;
    ulonglong uVar9;

    iVar5 = 0;
    iVar7 = 0;
    lVar3 = FUN_1406e8880(param_1,1);
    uVar6 = 0;
    uVar9 = 0;
    uVar1 = *(ulonglong *)(lVar3 + 0x9a0);
    if (1 < (longlong)uVar1) {
        lVar4 = (uVar1 - 2 >> 1) + 1;
        uVar9 = lVar4 * 2;
        pplVar8 = *(longlong ***)(lVar3 + 0x998);
        do {
            iVar5 = iVar5 + (uint)*(byte *)(**pplVar8 + 0x40);
            iVar7 = iVar7 + (uint)*(byte *)(*pplVar8[1] + 0x40);
            lVar4 = lVar4 + -1;
            pplVar8 = pplVar8 + 2;
        } while (lVar4 != 0);
    }
    if (uVar9 < uVar1) {
        uVar6 = (uint)*(byte *)(**(longlong **)(*(longlong *)(lVar3 + 0x998) + uVar9 * 8) + 0x40);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)(iVar7 + iVar5 + uVar6);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406eb230(longlong param_1)

{
    byte bVar1;
    byte bVar2;
    double *pdVar3;
    longlong lVar4;
    longlong **pplVar5;
    longlong lVar6;
    int iVar7;

    lVar4 = FUN_1406e8880(param_1,1);
    iVar7 = 0;
    lVar6 = *(longlong *)(lVar4 + 0x9a0);
    if (lVar6 != 0) {
        pplVar5 = *(longlong ***)(lVar4 + 0x998);
        do {
            bVar1 = *(byte *)((longlong)*pplVar5 + 0x44);
            bVar2 = *(byte *)(**pplVar5 + 0x40);
            if (bVar2 < bVar1) {
                iVar7 = iVar7 + ((uint)bVar1 - (uint)bVar2);
            }
            pplVar5 = pplVar5 + 1;
            lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
    }
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)iVar7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406eb2c0(longlong param_1)

{
    ulonglong uVar1;
    double *pdVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    undefined8 *puVar8;
    ulonglong uVar9;

    iVar5 = 0;
    iVar7 = 0;
    lVar3 = FUN_1406e8880(param_1,1);
    iVar6 = 0;
    uVar9 = 0;
    uVar1 = *(ulonglong *)(lVar3 + 0x9a0);
    if (1 < (longlong)uVar1) {
        lVar4 = (uVar1 - 2 >> 1) + 1;
        uVar9 = lVar4 * 2;
        puVar8 = *(undefined8 **)(lVar3 + 0x998);
        do {
            iVar5 = iVar5 + *(int *)(**(longlong **)*puVar8 + 0x14);
            iVar7 = iVar7 + *(int *)(**(longlong **)puVar8[1] + 0x14);
            lVar4 = lVar4 + -1;
            puVar8 = puVar8 + 2;
        } while (lVar4 != 0);
    }
    if (uVar9 < uVar1) {
        iVar6 = *(int *)(***(longlong ***)(*(longlong *)(lVar3 + 0x998) + uVar9 * 8) + 0x14);
    }
    pdVar2 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)(iVar7 + iVar5 + iVar6);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406eb390(longlong param_1)

{
    undefined4 uVar1;
    undefined8 uVar2;
    undefined8 *puVar3;
    undefined8 *puVar4;

    FUN_1406e8880(param_1,1);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar4 + 1) = 5;
    *puVar4 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_1);
    puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    *puVar4 = *puVar3;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar4 = *puVar3;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar4 = *puVar3;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar4 = *puVar3;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    puVar3 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
    *puVar4 = *puVar3;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_1406eb570(longlong param_1)

{
    byte *pbVar1;
    byte bVar2;
    longlong *plVar3;
    uint *puVar4;
    longlong lVar5;
    int iVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    lVar5 = FUN_1406e8880();
    uVar8 = 0;
    if ((((*(int *)(lVar5 + 0xa90) != 0) || (*(int *)(lVar5 + 0xa94) != 0)) ||
         (*(int *)(lVar5 + 0xa98) != 0)) || (uVar7 = uVar8, *(int *)(lVar5 + 0xa9c) != 0)) {
        uVar7 = 1;
    }
    iVar6 = (int)uVar7;
    if (iVar6 == 0) {
        do {
            iVar6 = (int)uVar7;
            if (*(ulonglong *)(lVar5 + 0x9a0) <= uVar8) break;
            plVar3 = *(longlong **)(*(longlong *)(lVar5 + 0x998) + uVar8 * 8);
            bVar2 = *(byte *)(*plVar3 + 0x40);
            pbVar1 = (byte *)((longlong)plVar3 + 0x44);
            if (bVar2 <= *pbVar1 && *pbVar1 != bVar2) {
                uVar7 = 1;
            }
            uVar8 = uVar8 + 1;
            iVar6 = (int)uVar7;
        } while (iVar6 == 0);
    }
    puVar4 = *(uint **)(param_1 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint)(iVar6 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406eb610(longlong param_1)

{
    uint uVar1;
    int iVar2;
    longlong **pplVar3;
    double *pdVar4;
    undefined4 uVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    undefined *puVar9;
    undefined8 uVar10;
    undefined8 *puVar11;
    longlong lVar12;
    longlong lVar13;
    float *pfVar14;
    uint *puVar15;
    undefined *puVar16;
    ulonglong uVar17;
    undefined *puVar18;
    undefined *puVar19;
    undefined8 *puVar20;
    uint *puVar21;
    float fVar22;
    undefined4 uVar23;
    undefined *local_res10;
    undefined *local_res18;
    undefined8 local_res20;
    ulonglong local_1e8;
    undefined **local_1e0;
    undefined4 local_1d8;
    undefined4 uStack468;
    longlong local_1d0;
    undefined4 local_1c8;
    undefined *local_1c0;
    uint local_1b8;
    undefined4 local_1b4;
    uint local_1b0;
    undefined4 local_1ac;
    ulonglong local_1a8;
    uint local_1a0;
    undefined4 local_19c;
    undefined **local_198;
    undefined4 local_190;
    longlong local_188;
    undefined4 local_180;
    uint local_178;
    undefined4 local_174;
    undefined local_170 [8];
    undefined *local_168;
    undefined8 local_160;
    undefined local_150 [8];
    undefined *local_148;
    undefined8 local_140;
    undefined local_130 [8];
    undefined *local_128;
    undefined8 local_120;
    undefined **local_110;
    undefined4 local_108;
    longlong local_100;
    undefined4 local_f8;
    undefined local_f0 [8];
    undefined *local_e8;
    undefined8 local_e0;
    undefined local_d0 [8];
    undefined *local_c8;
    undefined8 local_c0;
    undefined local_b0 [8];
    undefined *local_a8;
    undefined8 local_a0;
    undefined *local_90;
    undefined *local_88;
    undefined *local_80;
    undefined *local_78 [7];

    puVar9 = (undefined *)FUN_1406e8880(param_1,1);
    local_110 = &PTR_FUN_140b569f0;
    local_f8 = 1;
    local_1c0 = puVar9;
    local_100 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar20 = *(undefined8 **)(param_1 + 0x10);
    uVar10 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar20 + 1) = 5;
    *puVar20 = uVar10;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_108 = FUN_1400578c0();
    if (DAT_140c65898 == 0) {
        local_1e8 = 0;
    }
    else {
        local_1e8 = *(ulonglong *)(DAT_140c65898 + 0x78);
    }
    if (local_1e8 == 0) {
        puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0));
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        *puVar20 = *puVar11;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        local_res10._0_4_ = 0;
        uVar6 = 0;
        local_res18._0_4_ = 0;
        iVar7 = 0;
        local_res10 = (undefined *)((ulonglong)local_res10 & 0xffffffff00000000);
        local_res20 = (undefined *)((ulonglong)local_res20 & 0xffffffff00000000);
        local_res18 = (undefined *)((ulonglong)local_res18 & 0xffffffff00000000);
        local_148 = (undefined *)FUN_14018b280(0x28,0);
        local_140 = 0;
        *local_148 = 0;
        *(undefined8 *)(local_148 + 8) = 0;
        *(undefined **)(local_148 + 0x10) = local_148;
        *(undefined **)(local_148 + 0x18) = local_148;
        local_e8 = (undefined *)FUN_14018b280(0x28,0);
        local_e0 = 0;
        *local_e8 = 0;
        *(undefined8 *)(local_e8 + 8) = 0;
        *(undefined **)(local_e8 + 0x10) = local_e8;
        *(undefined **)(local_e8 + 0x18) = local_e8;
        local_a8 = (undefined *)FUN_14018b280(0x28,0);
        local_a0 = 0;
        *local_a8 = 0;
        *(undefined8 *)(local_a8 + 8) = 0;
        *(undefined **)(local_a8 + 0x10) = local_a8;
        *(undefined **)(local_a8 + 0x18) = local_a8;
        local_c8 = (undefined *)FUN_14018b280(0x28,0);
        local_c0 = 0;
        *local_c8 = 0;
        *(undefined8 *)(local_c8 + 8) = 0;
        *(undefined **)(local_c8 + 0x10) = local_c8;
        *(undefined **)(local_c8 + 0x18) = local_c8;
        local_128 = (undefined *)FUN_14018b280(0x28,0);
        local_120 = 0;
        *local_128 = 0;
        *(undefined8 *)(local_128 + 8) = 0;
        *(undefined **)(local_128 + 0x10) = local_128;
        *(undefined **)(local_128 + 0x18) = local_128;
        local_168 = (undefined *)FUN_14018b280(0x28,0);
        uVar17 = 0;
        local_160 = 0;
        *local_168 = 0;
        *(undefined8 *)(local_168 + 8) = 0;
        local_1a8 = 0;
        *(undefined **)(local_168 + 0x10) = local_168;
        *(undefined **)(local_168 + 0x18) = local_168;
        if (*(longlong *)(puVar9 + 0x9a0) != 0) {
            do {
                pplVar3 = *(longlong ***)(*(longlong *)(puVar9 + 0x998) + local_1a8 * 8);
                uVar5 = FUN_1406dfa40(pplVar3);
                if (DAT_140c63840 == (code *)0x0) {
                    if ((_DAT_140c64fc4 == 0) && (iVar8 = FUN_140225fe0(), -1 < iVar8)) {
                        lVar12 = (**(code **)(*DAT_140c65078 + 0x18))();
                        goto LAB_1406eb8b1;
                    }
                }
                else {
                    lVar12 = (*DAT_140c63840)(&PTR_u_PrimalMatrixReward_140a6c350,uVar5,DAT_140c63858);
                    LAB_1406eb8b1:
                    if (lVar12 != 0) {
                        puVar21 = (uint *)(lVar12 + 0x14);
                        lVar12 = 4;
                        do {
                            uVar1 = puVar21[-4];
                            if (uVar1 == 1) {
                                if (DAT_140c63840 == (code *)0x0) {
                                    if ((_DAT_140c651a0 == 0) && (iVar8 = FUN_14022f060(), -1 < iVar8)) {
                                        puVar15 = (uint *)(**(code **)(*DAT_140c651a8 + 0x18))();
                                        goto LAB_1406ebb53;
                                    }
                                }
                                else {
                                    puVar15 = (uint *)(*DAT_140c63840)(&PTR_u_RewardProperty_140a6cac0,*puVar21,
                                                                       DAT_140c63858);
                                    LAB_1406ebb53:
                                    if (puVar15 != (uint *)0x0) {
                                        puVar9 = local_128;
                                        if (*(undefined **)(local_128 + 8) != (undefined *)0x0) {
                                            puVar16 = *(undefined **)(local_128 + 8);
                                            do {
                                                if (*(uint *)(puVar16 + 0x20) < *puVar15) {
                                                    puVar18 = *(undefined **)(puVar16 + 0x18);
                                                }
                                                else {
                                                    puVar18 = *(undefined **)(puVar16 + 0x10);
                                                    puVar9 = puVar16;
                                                }
                                                puVar16 = puVar18;
                                            } while (puVar18 != (undefined *)0x0);
                                        }
                                        if ((puVar9 == local_128) || (*puVar15 < *(uint *)(puVar9 + 0x20))) {
                                            local_1a0 = *puVar15;
                                            local_19c = 0;
                                            local_res18 = puVar9;
                                            FUN_140032b30(local_130,&local_80,&local_res18,&local_1a0);
                                            puVar9 = local_80;
                                        }
                                        *(float *)(puVar9 + 0x24) =
                                                (float)(uint)*(byte *)(*pplVar3 + 8) * (float)puVar21[8] +
                                                *(float *)(puVar9 + 0x24);
                                        puVar9 = local_168;
                                        if (*(undefined **)(local_168 + 8) != (undefined *)0x0) {
                                            puVar16 = *(undefined **)(local_168 + 8);
                                            do {
                                                if (*(uint *)(puVar16 + 0x20) < *puVar15) {
                                                    puVar18 = *(undefined **)(puVar16 + 0x18);
                                                }
                                                else {
                                                    puVar18 = *(undefined **)(puVar16 + 0x10);
                                                    puVar9 = puVar16;
                                                }
                                                puVar16 = puVar18;
                                            } while (puVar18 != (undefined *)0x0);
                                        }
                                        if ((puVar9 == local_168) || (*puVar15 < *(uint *)(puVar9 + 0x20))) {
                                            local_178 = *puVar15;
                                            local_174 = 0;
                                            local_res18 = puVar9;
                                            FUN_140032b30(local_170,&local_90,&local_res18,&local_178);
                                            puVar9 = local_90;
                                        }
                                        *(float *)(puVar9 + 0x24) =
                                                (float)(ulonglong)*(uint *)(**pplVar3 + 0x14) * (float)puVar21[8] +
                                                *(float *)(puVar9 + 0x24);
                                    }
                                }
                                LAB_1406ebc72:
                            }
                            else if (uVar1 == 2) {
                                iVar7 = iVar7 + (uint)*(byte *)(*pplVar3 + 8) * (int)(longlong)(float)puVar21[8];
                                local_res10._0_4_ =
                                        (uint)local_res10 +
                                        *(int *)(**pplVar3 + 0x14) * (int)(longlong)(float)puVar21[8];
                                local_res10 = (undefined *)
                                        ((ulonglong)local_res10 & 0xffffffff00000000 |
                                         (ulonglong)(uint)local_res10);
                            }
                            else if (uVar1 == 3) {
                                uVar6 = uVar6 + (uint)*(byte *)(*pplVar3 + 8) * (int)(longlong)(float)puVar21[8];
                                uVar17 = (ulonglong)
                                        (uint)((int)uVar17 +
                                               *(int *)(**pplVar3 + 0x14) * (int)(longlong)(float)puVar21[8]);
                            }
                            else if (uVar1 == 4) {
                                puVar9 = local_148;
                                if (*(undefined **)(local_148 + 8) != (undefined *)0x0) {
                                    puVar16 = *(undefined **)(local_148 + 8);
                                    do {
                                        if (*(uint *)(puVar16 + 0x20) < *puVar21) {
                                            puVar18 = *(undefined **)(puVar16 + 0x18);
                                        }
                                        else {
                                            puVar18 = *(undefined **)(puVar16 + 0x10);
                                            puVar9 = puVar16;
                                        }
                                        puVar16 = puVar18;
                                    } while (puVar18 != (undefined *)0x0);
                                }
                                if ((puVar9 == local_148) || (*puVar21 < *(uint *)(puVar9 + 0x20))) {
                                    local_1b0 = *puVar21;
                                    local_1ac = 0;
                                    local_res18 = puVar9;
                                    FUN_140032b30(local_150,&local_88,&local_res18,&local_1b0);
                                    puVar9 = local_88;
                                }
                                *(uint *)(puVar9 + 0x24) = *(int *)(puVar9 + 0x24) + (uint)*(byte *)(*pplVar3 + 8);
                                puVar9 = local_e8;
                                if (*(undefined **)(local_e8 + 8) != (undefined *)0x0) {
                                    puVar16 = *(undefined **)(local_e8 + 8);
                                    do {
                                        if (*(uint *)(puVar16 + 0x20) < *puVar21) {
                                            puVar18 = *(undefined **)(puVar16 + 0x18);
                                        }
                                        else {
                                            puVar18 = *(undefined **)(puVar16 + 0x10);
                                            puVar9 = puVar16;
                                        }
                                        puVar16 = puVar18;
                                    } while (puVar18 != (undefined *)0x0);
                                }
                                if ((puVar9 == local_e8) || (*puVar21 < *(uint *)(puVar9 + 0x20))) {
                                    local_1b8 = *puVar21;
                                    local_1b4 = 0;
                                    local_res18 = puVar9;
                                    FUN_140032b30(local_f0,local_78,&local_res18,&local_1b8);
                                    puVar9 = local_78[0];
                                }
                                *(int *)(puVar9 + 0x24) = *(int *)(puVar9 + 0x24) + *(int *)(**pplVar3 + 0x14);
                            }
                            else if (uVar1 == 5) {
                                if (DAT_140c63840 == (code *)0x0) {
                                    if ((_DAT_140c64070 != 0) || (iVar8 = FUN_140247760(), iVar8 < 0))
                                        goto LAB_1406ebc72;
                                    lVar13 = (**(code **)(*DAT_140c64930 + 0x18))();
                                }
                                else {
                                    lVar13 = (*DAT_140c63840)(&PTR_u_UnitProperty2_140a6dee0,*puVar21,DAT_140c63858);
                                }
                                if ((lVar13 != 0) &&
                                    ((((uVar1 = *(uint *)(lVar13 + 0x24), (uVar1 & 0x20) != 0 ||
                                                                          ((uVar1 & 0x40) != 0)) && ((uVar1 & 4) != 0)) && ((uVar1 & 8) == 0)))) {
                                    pfVar14 = (float *)FUN_1403d2690(local_b0,lVar13);
                                    *pfVar14 = (float)(uint)*(byte *)(*pplVar3 + 8) * (float)puVar21[8] + *pfVar14;
                                    pfVar14 = (float *)FUN_1403d2690(local_d0,lVar13);
                                    *pfVar14 = (float)(ulonglong)*(uint *)(**pplVar3 + 0x14) * (float)puVar21[8] +
                                               *pfVar14;
                                }
                                goto LAB_1406ebc72;
                            }
                            puVar21 = puVar21 + 1;
                            lVar12 = lVar12 + -1;
                        } while (lVar12 != 0);
                        local_res18 = (undefined *)((ulonglong)local_res18 & 0xffffffff00000000 | uVar17);
                        local_res20 = (undefined *)
                                ((ulonglong)local_res20 & 0xffffffff00000000 | (ulonglong)uVar6);
                    }
                }
                local_1a8 = local_1a8 + 1;
                puVar9 = local_1c0;
            } while (local_1a8 < *(ulonglong *)(local_1c0 + 0x9a0));
        }
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar20 + 1) = 5;
        *puVar20 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar6 = FUN_1400578c0(param_1);
        local_res18 = (undefined *)((ulonglong)local_res18 & 0xffffffff00000000 | (ulonglong)uVar6);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        *puVar20 = *puVar11;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar12 = FUN_14018f0e0(&local_1e0,L"nCurrent");
        lVar12 = *(longlong *)(lVar12 + 8);
        if (lVar12 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(lVar12 + lVar13) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar20 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar12,lVar13);
            *(undefined4 *)(puVar20 + 1) = 4;
            *puVar20 = uVar10;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (CONCAT44(uStack468,local_1d8) != 0) {
            FUN_14018b900(CONCAT44(uStack468,local_1d8),0);
        }
        pdVar4 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)iVar7;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
        *puVar20 = *puVar11;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar12 = FUN_14018f0e0(&local_1e0,L"nMax");
        lVar12 = *(longlong *)(lVar12 + 8);
        if (lVar12 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(lVar12 + lVar13) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar20 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar12,lVar13);
            *(undefined4 *)(puVar20 + 1) = 4;
            *puVar20 = uVar10;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (CONCAT44(uStack468,local_1d8) != 0) {
            FUN_14018b900(CONCAT44(uStack468,local_1d8),0);
        }
        pdVar4 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)(uint)local_res10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        FUN_1400fb3a0(&local_110,2,uVar6);
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar20 + 1) = 5;
        *puVar20 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar6 = FUN_1400578c0(param_1);
        local_res10 = (undefined *)((ulonglong)local_res10 & 0xffffffff00000000 | (ulonglong)uVar6);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        *puVar20 = *puVar11;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar12 = FUN_14018f0e0(&local_1e0,L"nCurrent");
        lVar12 = *(longlong *)(lVar12 + 8);
        if (lVar12 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(lVar12 + lVar13) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar20 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar12,lVar13);
            *(undefined4 *)(puVar20 + 1) = 4;
            *puVar20 = uVar10;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (CONCAT44(uStack468,local_1d8) != 0) {
            FUN_14018b900(CONCAT44(uStack468,local_1d8),0);
        }
        pdVar4 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)(int)local_res20;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar6);
        *puVar20 = *puVar11;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        lVar12 = FUN_14018f0e0(&local_1e0,L"nMax");
        lVar12 = *(longlong *)(lVar12 + 8);
        if (lVar12 == 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            lVar13 = -1;
            do {
                lVar13 = lVar13 + 1;
            } while (*(char *)(lVar12 + lVar13) != '\0');
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar20 = *(undefined8 **)(param_1 + 0x10);
            uVar10 = FUN_140062650(param_1,lVar12,lVar13);
            *(undefined4 *)(puVar20 + 1) = 4;
            *puVar20 = uVar10;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (CONCAT44(uStack468,local_1d8) != 0) {
            FUN_14018b900(CONCAT44(uStack468,local_1d8),0);
        }
        pdVar4 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar4 + 1) = 3;
        *pdVar4 = (double)(int)local_res18;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1,0xfffffffd);
        FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                      *(longlong *)(param_1 + 0x10) + -0x10);
        *(longlong *)(param_1 + 0x10) =
                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
        FUN_1400fb3a0(&local_110,3,uVar6);
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar20 + 1) = 5;
        *puVar20 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        iVar7 = FUN_1400578c0(param_1);
        puVar9 = *(undefined **)(local_a8 + 0x10);
        if (puVar9 != local_a8) {
            uVar5 = 0;
            uVar23 = 0;
            do {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar20 = *(undefined8 **)(param_1 + 0x10);
                uVar10 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar20 + 1) = 5;
                *puVar20 = uVar10;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                iVar8 = FUN_1400578c0();
                fVar22 = *(float *)(puVar9 + 0x24);
                lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
                uVar6 = iVar8 - 1;
                if (uVar6 < *(uint *)(lVar12 + 0x38)) {
                    puVar20 = (undefined8 *)((longlong)(iVar8 + -1) * 0x10 + *(longlong *)(lVar12 + 0x18));
                }
                else {
                    local_res20 = (undefined *)(double)iVar8;
                    if ((double)local_res20 == (double)CONCAT44(uVar23,uVar5)) {
                        puVar20 = *(undefined8 **)(lVar12 + 0x20);
                    }
                    else {
                        local_res20._4_4_ = (int)((ulonglong)local_res20 >> 0x20);
                        puVar20 = (undefined8 *)
                                (*(longlong *)(lVar12 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(local_res20._4_4_ + (int)local_res20) %
                                  (longlong)((1 << (*(byte *)(lVar12 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    do {
                        if ((*(int *)(puVar20 + 3) == 3) && ((double)local_res20 == (double)puVar20[2]))
                            goto LAB_1406ec27d;
                        puVar20 = (undefined8 *)puVar20[4];
                    } while (puVar20 != (undefined8 *)0x0);
                    puVar20 = &DAT_140a12138;
                }
                LAB_1406ec27d:
                puVar11 = *(undefined8 **)(param_1 + 0x10);
                *puVar11 = *puVar20;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar20 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar12 = FUN_14018f0e0(&local_1e0,L"fCurrent");
                lVar12 = *(longlong *)(lVar12 + 8);
                if (lVar12 == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(lVar12 + lVar13) != '\0');
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar20 = *(undefined8 **)(param_1 + 0x10);
                    uVar10 = FUN_140062650(param_1,lVar12,lVar13);
                    *(undefined4 *)(puVar20 + 1) = 4;
                    *puVar20 = uVar10;
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (CONCAT44(uStack468,local_1d8) != 0) {
                    FUN_14018b900(CONCAT44(uStack468,local_1d8),0);
                }
                pdVar4 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)fVar22;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar10 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                puVar16 = local_c8;
                if (*(undefined **)(local_c8 + 8) != (undefined *)0x0) {
                    puVar18 = *(undefined **)(local_c8 + 8);
                    do {
                        if (*(uint *)(puVar18 + 0x20) < *(uint *)(puVar9 + 0x20)) {
                            puVar19 = *(undefined **)(puVar18 + 0x18);
                        }
                        else {
                            puVar19 = *(undefined **)(puVar18 + 0x10);
                            puVar16 = puVar18;
                        }
                        puVar18 = puVar19;
                    } while (puVar19 != (undefined *)0x0);
                }
                if ((puVar16 == local_c8) || (*(uint *)(puVar9 + 0x20) < *(uint *)(puVar16 + 0x20))) {
                    local_1e8 = (ulonglong)*(uint *)(puVar9 + 0x20);
                    local_res20 = puVar16;
                    FUN_140032b30(local_d0,&local_1c0,&local_res20,&local_1e8);
                    puVar16 = local_1c0;
                }
                fVar22 = *(float *)(puVar16 + 0x24);
                lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
                if (uVar6 < *(uint *)(lVar12 + 0x38)) {
                    puVar20 = (undefined8 *)((longlong)(iVar8 + -1) * 0x10 + *(longlong *)(lVar12 + 0x18));
                }
                else {
                    local_res20 = (undefined *)(double)iVar8;
                    if ((double)local_res20 == (double)CONCAT44(uVar23,uVar5)) {
                        puVar20 = *(undefined8 **)(lVar12 + 0x20);
                    }
                    else {
                        local_res20._4_4_ = (int)((ulonglong)local_res20 >> 0x20);
                        puVar20 = (undefined8 *)
                                (*(longlong *)(lVar12 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(local_res20._4_4_ + (int)local_res20) %
                                  (longlong)((1 << (*(byte *)(lVar12 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    do {
                        if ((*(int *)(puVar20 + 3) == 3) && ((double)local_res20 == (double)puVar20[2]))
                            goto LAB_1406ec45d;
                        puVar20 = (undefined8 *)puVar20[4];
                    } while (puVar20 != (undefined8 *)0x0);
                    puVar20 = &DAT_140a12138;
                }
                LAB_1406ec45d:
                puVar11 = *(undefined8 **)(param_1 + 0x10);
                *puVar11 = *puVar20;
                *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar20 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                lVar12 = FUN_14018f0e0(&local_1e0,L"fMax");
                lVar12 = *(longlong *)(lVar12 + 8);
                if (lVar12 == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                }
                else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *)(lVar12 + lVar13) != '\0');
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar20 = *(undefined8 **)(param_1 + 0x10);
                    uVar10 = FUN_140062650(param_1,lVar12,lVar13);
                    *(undefined4 *)(puVar20 + 1) = 4;
                    *puVar20 = uVar10;
                }
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (CONCAT44(uStack468,local_1d8) != 0) {
                    FUN_14018b900(CONCAT44(uStack468,local_1d8),0);
                }
                pdVar4 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)fVar22;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar10 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar10,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
                puVar20 = *(undefined8 **)(param_1 + 0x10);
                iVar2 = *(int *)(puVar9 + 0x20);
                if (iVar7 - 1U < *(uint *)(lVar12 + 0x38)) {
                    puVar11 = (undefined8 *)((longlong)(iVar7 + -1) * 0x10 + *(longlong *)(lVar12 + 0x18));
                }
                else {
                    local_res20 = (undefined *)(double)iVar7;
                    if ((double)local_res20 == (double)CONCAT44(uVar23,uVar5)) {
                        puVar11 = *(undefined8 **)(lVar12 + 0x20);
                    }
                    else {
                        local_res20._4_4_ = (int)((ulonglong)local_res20 >> 0x20);
                        puVar11 = (undefined8 *)
                                (*(longlong *)(lVar12 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(local_res20._4_4_ + (int)local_res20) %
                                  (longlong)((1 << (*(byte *)(lVar12 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    do {
                        if ((*(int *)(puVar11 + 3) == 3) && ((double)local_res20 == (double)puVar11[2]))
                            goto LAB_1406ec5d3;
                        puVar11 = (undefined8 *)puVar11[4];
                    } while (puVar11 != (undefined8 *)0x0);
                    puVar11 = &DAT_140a12138;
                }
                LAB_1406ec5d3:
                *puVar20 = *puVar11;
                *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                pdVar4 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)iVar2;
                lVar12 = *(longlong *)(param_1 + 0x10);
                puVar20 = (undefined8 *)(lVar12 + 0x10);
                *(undefined8 **)(param_1 + 0x10) = puVar20;
                lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
                if (uVar6 < *(uint *)(lVar13 + 0x38)) {
                    puVar11 = (undefined8 *)((longlong)(iVar8 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
                }
                else {
                    local_res20 = (undefined *)(double)iVar8;
                    if ((double)local_res20 == (double)CONCAT44(uVar23,uVar5)) {
                        puVar11 = *(undefined8 **)(lVar13 + 0x20);
                    }
                    else {
                        local_res20._4_4_ = (int)((ulonglong)local_res20 >> 0x20);
                        puVar11 = (undefined8 *)
                                (*(longlong *)(lVar13 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(local_res20._4_4_ + (int)local_res20) %
                                  (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    do {
                        if ((*(int *)(puVar11 + 3) == 3) && ((double)local_res20 == (double)puVar11[2]))
                            goto LAB_1406ec69d;
                        puVar11 = (undefined8 *)puVar11[4];
                    } while (puVar11 != (undefined8 *)0x0);
                    puVar11 = &DAT_140a12138;
                }
                LAB_1406ec69d:
                *puVar20 = *puVar11;
                *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(puVar11 + 1);
                lVar12 = *(longlong *)(param_1 + 0x10);
                *(longlong *)(param_1 + 0x10) = lVar12 + 0x10;
                FUN_14005ea50(param_1,lVar12 + -0x20,lVar12 + -0x10,lVar12);
                *(longlong *)(param_1 + 0x10) =
                        (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
                FUN_1400579e0(param_1);
                puVar16 = *(undefined **)(puVar9 + 0x18);
                if (puVar16 == (undefined *)0x0) {
                    puVar16 = *(undefined **)(puVar9 + 8);
                    if (puVar9 == *(undefined **)(puVar16 + 0x18)) {
                        do {
                            puVar9 = puVar16;
                            puVar16 = *(undefined **)(puVar9 + 8);
                        } while (puVar9 == *(undefined **)(puVar16 + 0x18));
                    }
                    if (*(undefined **)(puVar9 + 0x18) != puVar16) {
                        puVar9 = puVar16;
                    }
                }
                else {
                    for (puVar18 = *(undefined **)(puVar16 + 0x10); puVar9 = puVar16,
                            puVar18 != (undefined *)0x0; puVar18 = *(undefined **)(puVar18 + 0x10)) {
                        puVar16 = puVar18;
                    }
                }
            } while (puVar9 != local_a8);
        }
        FUN_1400fb3a0(&local_110,5,iVar7);
        local_198 = &PTR_FUN_140b569f0;
        local_180 = 1;
        local_188 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar20 + 1) = 5;
        *puVar20 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar5 = FUN_1400578c0(param_1);
        puVar9 = *(undefined **)(local_128 + 0x10);
        local_190 = uVar5;
        if (puVar9 != local_128) {
            do {
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar20 = *(undefined8 **)(param_1 + 0x10);
                uVar10 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar20 + 1) = 5;
                *puVar20 = uVar10;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400578c0(param_1);
                puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0))
                        ;
                puVar20 = *(undefined8 **)(param_1 + 0x10);
                *puVar20 = *puVar11;
                *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f07b0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar16 = local_168;
                if (*(undefined **)(local_168 + 8) != (undefined *)0x0) {
                    puVar18 = *(undefined **)(local_168 + 8);
                    do {
                        if (*(uint *)(puVar18 + 0x20) < *(uint *)(puVar9 + 0x20)) {
                            puVar19 = *(undefined **)(puVar18 + 0x18);
                        }
                        else {
                            puVar19 = *(undefined **)(puVar18 + 0x10);
                            puVar16 = puVar18;
                        }
                        puVar18 = puVar19;
                    } while (puVar19 != (undefined *)0x0);
                }
                if ((puVar16 == local_168) || (*(uint *)(puVar9 + 0x20) < *(uint *)(puVar16 + 0x20))) {
                    local_res10 = (undefined *)(ulonglong)*(uint *)(puVar9 + 0x20);
                    local_res18 = puVar16;
                    FUN_140032b30(local_170,&local_res20,&local_res18,&local_res10);
                }
                puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0))
                        ;
                puVar20 = *(undefined8 **)(param_1 + 0x10);
                *puVar20 = *puVar11;
                *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f07b0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_1400fb3a0(&local_198);
                FUN_1400579e0(param_1);
                puVar16 = *(undefined **)(puVar9 + 0x18);
                if (puVar16 == (undefined *)0x0) {
                    puVar16 = *(undefined **)(puVar9 + 8);
                    if (puVar9 == *(undefined **)(puVar16 + 0x18)) {
                        do {
                            puVar9 = puVar16;
                            puVar16 = *(undefined **)(puVar9 + 8);
                        } while (puVar9 == *(undefined **)(puVar16 + 0x18));
                    }
                    if (*(undefined **)(puVar9 + 0x18) != puVar16) {
                        puVar9 = puVar16;
                    }
                }
                else {
                    for (puVar18 = *(undefined **)(puVar16 + 0x10); puVar9 = puVar16,
                            puVar18 != (undefined *)0x0; puVar18 = *(undefined **)(puVar18 + 0x10)) {
                        puVar16 = puVar18;
                    }
                }
            } while (puVar9 != local_128);
        }
        FUN_1400fb3a0(&local_110,1,uVar5);
        local_198 = &PTR_FUN_140b569f0;
        local_180 = 1;
        local_188 = param_1;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar20 + 1) = 5;
        *puVar20 = uVar10;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        local_190 = FUN_1400578c0(param_1);
        puVar9 = *(undefined **)(local_148 + 0x10);
        lVar12 = param_1;
        if (puVar9 != local_148) {
            do {
                local_1e0 = &PTR_FUN_140b569f0;
                local_1c8 = 1;
                local_1d0 = param_1;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar20 = *(undefined8 **)(param_1 + 0x10);
                uVar10 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar20 + 1) = 5;
                *puVar20 = uVar10;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar5 = FUN_1400578c0(param_1);
                local_1d8 = uVar5;
                puVar11 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0))
                        ;
                puVar20 = *(undefined8 **)(param_1 + 0x10);
                *puVar20 = *puVar11;
                *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar16 = local_e8;
                if (*(undefined **)(local_e8 + 8) != (undefined *)0x0) {
                    puVar18 = *(undefined **)(local_e8 + 8);
                    do {
                        if (*(uint *)(puVar18 + 0x20) < *(uint *)(puVar9 + 0x20)) {
                            puVar19 = *(undefined **)(puVar18 + 0x18);
                        }
                        else {
                            puVar19 = *(undefined **)(puVar18 + 0x10);
                            puVar16 = puVar18;
                        }
                        puVar18 = puVar19;
                    } while (puVar19 != (undefined *)0x0);
                }
                if ((puVar16 == local_e8) || (*(uint *)(puVar9 + 0x20) < *(uint *)(puVar16 + 0x20))) {
                    local_res18 = (undefined *)(ulonglong)*(uint *)(puVar9 + 0x20);
                    local_res10 = puVar16;
                    FUN_140032b30(local_f0,&local_res20,&local_res10);
                }
                puVar11 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar5);
                puVar20 = *(undefined8 **)(param_1 + 0x10);
                *puVar20 = *puVar11;
                *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                local_res10 = (undefined *)
                        ((ulonglong)local_res10 & 0xffffffff00000000 |
                         (ulonglong)*(uint *)(puVar9 + 0x20));
                iVar7 = FUN_1403d3470(param_1);
                if (iVar7 != 0) {
                    FUN_1400fb540(&local_1e0);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                }
                FUN_1400fb1d0(&local_198);
                FUN_1400579e0(param_1);
                puVar16 = *(undefined **)(puVar9 + 0x18);
                if (puVar16 == (undefined *)0x0) {
                    puVar16 = *(undefined **)(puVar9 + 8);
                    if (puVar9 == *(undefined **)(puVar16 + 0x18)) {
                        do {
                            puVar9 = puVar16;
                            puVar16 = *(undefined **)(puVar9 + 8);
                        } while (puVar9 == *(undefined **)(puVar16 + 0x18));
                    }
                    if (*(undefined **)(puVar9 + 0x18) != puVar16) {
                        puVar9 = puVar16;
                    }
                }
                else {
                    for (puVar18 = *(undefined **)(puVar16 + 0x10); puVar9 = puVar16,
                            puVar18 != (undefined *)0x0; puVar18 = *(undefined **)(puVar18 + 0x10)) {
                        puVar16 = puVar18;
                    }
                }
                lVar12 = local_188;
            } while (puVar9 != local_148);
        }
        uVar5 = local_190;
        FUN_1400fb3a0(&local_110,4,local_190);
        puVar11 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),local_108);
        puVar20 = *(undefined8 **)(param_1 + 0x10);
        *puVar20 = *puVar11;
        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar11 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (lVar12 != 0) {
            FUN_1400579e0(lVar12,puVar20,uVar5);
        }
        FUN_1400579e0(param_1);
        FUN_1400579e0(param_1);
        FUN_1400579e0(param_1);
        FUN_1400579e0(param_1);
        FUN_140008410(local_170);
        FUN_14018b900(local_168,0);
        FUN_140008410(local_130);
        FUN_14018b900(local_128,0);
        FUN_140008410(local_d0);
        FUN_14018b900(local_c8,0);
        FUN_140008410(local_b0);
        FUN_14018b900(local_a8,0);
        FUN_140008410(local_f0);
        FUN_14018b900(local_e8,0);
        FUN_140008410(local_150);
        FUN_14018b900(local_148,0);
    }
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_1406ed8e0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar2 = FUN_1406e8880();
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
    uVar1 = FUN_1400f26a0(uVar4 + 0x180,2);
    FUN_1406e5380(uVar2,uVar1);
    return 0;
}



undefined8 FUN_1406ed970(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    ulonglong uVar5;

    uVar3 = FUN_1406e8880();
    uVar4 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar4;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar4 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    uVar1 = FUN_1400f26a0(uVar4 + 0x180,2);
    uVar2 = FUN_1400f26a0(uVar4 + 0x180,3);
    FUN_1406e6ed0(uVar3,uVar1,uVar2);
    return 0;
}



undefined8 FUN_1406eda20(undefined8 param_1)

{
    longlong lVar1;

    lVar1 = FUN_1406e8880(param_1,1);
    *(undefined8 *)(lVar1 + 0xa70) = 0;
    return 0;
}



undefined8 FUN_1406eddd0(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;

    if (((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) && (DAT_140c65970 != 0))
    {
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        iVar3 = *(int *)(DAT_140c65970 + 8);
        if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
            (0 < *(int *)(puVar1 + 1))) {
            iVar3 = FUN_140056d60(param_1);
        }
        if ((ulonglong)(longlong)iVar3 < 4) {
            iVar3 = *(int *)(DAT_140c65970 + 0x20 + (longlong)iVar3 * 4);
        }
        else {
            iVar3 = 0;
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406edea0(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;

    if (((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) && (DAT_140c65970 != 0))
    {
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        iVar3 = *(int *)(DAT_140c65970 + 8);
        if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
            (0 < *(int *)(puVar1 + 1))) {
            iVar3 = FUN_140056d60(param_1);
        }
        if ((ulonglong)(longlong)iVar3 < 4) {
            iVar3 = *(int *)(DAT_140c65970 + 0x10 + (longlong)iVar3 * 4);
        }
        else {
            iVar3 = 0;
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406edf70(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined8 *puVar5;
    longlong *plVar6;

    if (((DAT_140c65898 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) || (DAT_140c65970 == 0))
    {
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        *puVar5 = 0x3ff0000000000000;
        *(undefined4 *)(puVar5 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar3 = FUN_140056d60(param_1,1);
    uVar4 = *(undefined4 *)(DAT_140c65970 + 8);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar5 < *(undefined8 **)(param_1 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        uVar4 = FUN_140056d60(param_1,2);
    }
    plVar6 = (longlong *)FUN_140491cf0(DAT_140c65968,uVar4,uVar3);
    pdVar2 = *(double **)(param_1 + 0x10);
    if (plVar6 == (longlong *)0x0) {
        *pdVar2 = 0.0;
        *(undefined4 *)(pdVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *)(*plVar6 + 0xc);
    *(undefined4 *)(pdVar2 + 1) = 3;
    *pdVar2 = (double)iVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ee080(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    longlong *plVar4;
    ulonglong uVar5;
    int iVar6;

    if (((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) && (DAT_140c65970 != 0))
    {
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        iVar3 = *(int *)(DAT_140c65970 + 8);
        if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
            (0 < *(int *)(puVar1 + 1))) {
            iVar3 = FUN_140056d60(param_1);
        }
        uVar5 = (ulonglong)iVar3;
        if (uVar5 < 4) {
            iVar6 = *(int *)(DAT_140c65970 + 0x10 + uVar5 * 4);
        }
        else {
            iVar6 = 0;
        }
        plVar4 = (longlong *)FUN_140491d60(uVar5,iVar3,iVar6);
        pdVar2 = *(double **)(param_1 + 0x10);
        if (plVar4 == (longlong *)0x0) {
            *pdVar2 = 1.0;
        }
        else {
            *pdVar2 = (double)(iVar6 - *(int *)(*plVar4 + 0xc));
        }
        *(undefined4 *)(pdVar2 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ee180(longlong param_1)

{
    int iVar1;
    undefined8 *puVar2;
    double *pdVar3;
    int iVar4;
    longlong *plVar5;
    ulonglong uVar6;
    undefined4 uVar7;
    longlong lVar8;

    if (((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) && (DAT_140c65970 != 0))
    {
        puVar2 = *(undefined8 **)(param_1 + 0x18);
        iVar4 = *(int *)(DAT_140c65970 + 8);
        if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
            (0 < *(int *)(puVar2 + 1))) {
            iVar4 = FUN_140056d60(param_1,1);
        }
        uVar6 = (ulonglong)iVar4;
        if (uVar6 < 4) {
            uVar7 = *(undefined4 *)(DAT_140c65970 + 0x10 + uVar6 * 4);
        }
        else {
            uVar7 = 0;
        }
        plVar5 = (longlong *)FUN_140491d60(uVar6,iVar4,uVar7);
        if (plVar5 == (longlong *)0x0) {
            puVar2 = *(undefined8 **)(param_1 + 0x10);
            *puVar2 = 0x3ff0000000000000;
            *(undefined4 *)(puVar2 + 1) = 3;
        }
        else {
            lVar8 = *plVar5;
            plVar5 = (longlong *)FUN_140491cf0(DAT_140c65968,iVar4,*(int *)(lVar8 + 8) + 1);
            if (plVar5 == (longlong *)0x0) {
                puVar2 = *(undefined8 **)(param_1 + 0x10);
                *puVar2 = 0;
                *(undefined4 *)(puVar2 + 1) = 3;
            }
            else {
                pdVar3 = *(double **)(param_1 + 0x10);
                iVar4 = *(int *)(*plVar5 + 0xc);
                iVar1 = *(int *)(lVar8 + 0xc);
                *(undefined4 *)(pdVar3 + 1) = 3;
                *pdVar3 = (double)(iVar4 - iVar1);
            }
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ee2c0(longlong param_1)

{
    undefined4 uVar1;
    undefined4 uVar2;
    undefined8 *puVar3;
    longlong *plVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    undefined **local_48;
    undefined4 local_40;
    longlong local_38;
    undefined4 local_30;
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    if (((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) && (DAT_140c65970 != 0))
    {
        uVar1 = FUN_140056d60(param_1,1);
        uVar2 = *(undefined4 *)(DAT_140c65970 + 8);
        puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
        if (((puVar3 < *(undefined8 **)(param_1 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
            (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
            uVar2 = FUN_140056d60(param_1,2);
        }
        plVar4 = (longlong *)FUN_140491cf0(DAT_140c65968,uVar2,uVar1);
        if (plVar4 == (longlong *)0x0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        else {
            if (*plVar4 != 0) {
                local_48 = &PTR_FUN_140b569f0;
                local_30 = 1;
                local_38 = param_1;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                uVar5 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar3 + 1) = 5;
                *puVar3 = uVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar1 = FUN_1400578c0(param_1);
                local_40 = uVar1;
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                *puVar3 = *puVar6;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1,puVar3,L"nPathType",uVar2);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
                *puVar3 = *puVar6;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
                *puVar3 = *puVar6;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_1406ee640(local_28,param_1,plVar4 + 1);
                FUN_1400fb2a0(&local_48,L"tRewards",local_20);
                puVar6 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                *puVar3 = *puVar6;
                *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar6 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (local_18 != 0) {
                    FUN_1400579e0(local_18,puVar3,local_20);
                }
                FUN_1400579e0(param_1);
                return 1;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        }
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ee560(longlong param_1)

{
    undefined8 *puVar1;
    undefined8 uVar2;

    if (((DAT_140c65898 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) || (DAT_140c65970 == 0))
    {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        FUN_140056d60(param_1,1);
    }
    puVar1 = (undefined8 *)FUN_140491a20();
    if (puVar1 == (undefined8 *)0x0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_140491bd0(DAT_140c65968,*(undefined4 *)*puVar1);
    FUN_140432ba0(param_1,uVar2);
    return 1;
}



undefined8 * FUN_1406ee640(undefined8 *param_1,longlong param_2,longlong param_3)

{
    int iVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong *plVar8;
    undefined4 local_res10 [4];
    longlong local_res20;
    undefined **local_78;
    undefined4 local_70;
    longlong local_68;
    undefined4 local_60;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;

    local_60 = 1;
    local_70 = 0xfffffffe;
    local_78 = &PTR_FUN_140b569f0;
    local_68 = param_2;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar7 = *(undefined8 **)(param_2 + 0x10);
    uVar3 = FUN_14005c1b0(param_2,0);
    *(undefined4 *)(puVar7 + 1) = 5;
    *puVar7 = uVar3;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    local_70 = FUN_1400578c0(param_2);
    if ((DAT_140c65898 == 0) || (*(longlong *)(DAT_140c65898 + 0x78) == 0)) {
        *param_1 = &PTR_FUN_140b569f0;
        param_1[2] = local_68;
        *(undefined4 *)(param_1 + 3) = 1;
        *(undefined4 *)(param_1 + 1) = 0xfffffffe;
        iVar1 = (*(code *)local_78[1])(&local_78);
    }
    else {
        plVar8 = *(longlong **)(param_3 + 8);
        if (plVar8 != *(longlong **)(param_3 + 0x10)) {
            do {
                lVar6 = *plVar8;
                if ((*(int *)(lVar6 + 0x1c) == 0) ||
                    (iVar1 = (**(code **)(*DAT_140c659a0 + 0x18))
                            (DAT_140c659a0,*(undefined8 *)(DAT_140c65898 + 0x78),
                             *(int *)(lVar6 + 0x1c),0,0,0), iVar1 != 0)) {
                    if (*(int *)(lVar6 + 0x10) != 0) {
                        local_58 = &PTR_FUN_140b569f0;
                        local_40 = 1;
                        local_48 = param_2;
                        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_2);
                        }
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        uVar3 = FUN_14005c1b0(param_2,0,0);
                        *(undefined4 *)(puVar7 + 1) = 5;
                        *puVar7 = uVar3;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar2 = FUN_1400578c0(param_2);
                        local_50 = uVar2;
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar2);
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar4;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2,puVar7,L"eType");
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        uVar3 = FUN_1400b5df0(DAT_140c658f0,*(undefined4 *)(lVar6 + 0x10),0);
                        FUN_140415c70(param_2,uVar3);
                        FUN_1400fb540(&local_58,L"itemReward");
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar2);
                        *puVar7 = *puVar4;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        FUN_1400fb1d0(&local_78,uVar2);
                        FUN_1400579e0(param_2);
                    }
                    if (*(int *)(lVar6 + 0xc) != 0) {
                        local_58 = &PTR_FUN_140b569f0;
                        local_40 = 1;
                        local_48 = param_2;
                        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_2);
                        }
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        uVar3 = FUN_14005c1b0(param_2,0,0);
                        *(undefined4 *)(puVar7 + 1) = 5;
                        *puVar7 = uVar3;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar2 = FUN_1400578c0(param_2);
                        local_50 = uVar2;
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar2);
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar4;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        local_res10[0] = *(undefined4 *)(lVar6 + 0xc);
                        iVar1 = FUN_1403d3470(param_2,local_res10);
                        if (iVar1 != 0) {
                            FUN_1400fb540(&local_58,L"splReward");
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        }
                        FUN_1400fb1d0(&local_78,uVar2);
                        FUN_1400579e0(param_2);
                    }
                    lVar5 = FUN_1405a8a40();
                    if (lVar5 != 0) {
                        local_58 = &PTR_FUN_140b569f0;
                        local_40 = 1;
                        local_48 = param_2;
                        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_2);
                        }
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        uVar3 = FUN_14005c1b0(param_2,0,0);
                        *(undefined4 *)(puVar7 + 1) = 5;
                        *puVar7 = uVar3;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar2 = FUN_1400578c0(param_2);
                        local_50 = uVar2;
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar2);
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar4;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        iVar1 = FUN_140663030(param_2,lVar5);
                        if (iVar1 != 0) {
                            FUN_1400fb540(&local_58,L"queReward");
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        }
                        FUN_1400fb1d0(&local_78,uVar2);
                        FUN_1400579e0(param_2);
                    }
                    lVar5 = FUN_1401f1860(*(undefined4 *)(lVar6 + 0x18));
                    if (lVar5 != 0) {
                        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_2);
                        }
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        uVar3 = FUN_14005c1b0(param_2,0,0);
                        *(undefined4 *)(puVar7 + 1) = 5;
                        *puVar7 = uVar3;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar2 = FUN_1400578c0(param_2);
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar2);
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar4;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2,puVar7,L"eType",2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        FUN_1403ca5f0(DAT_140c65898,&local_res20,*(undefined4 *)(lVar6 + 0x18));
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar2);
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar4;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f0870(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        if (local_res20 != 0) {
                            (**(code **)(*(longlong *)(local_res20 + -0x10) + 8))(local_res20 + -0x10);
                        }
                        FUN_1400fb1d0(&local_78,uVar2);
                        FUN_1400579e0();
                    }
                    lVar6 = FUN_1402215c0();
                    if (lVar6 != 0) {
                        local_58 = &PTR_FUN_140b569f0;
                        local_40 = 1;
                        local_48 = param_2;
                        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_2);
                        }
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        uVar3 = FUN_14005c1b0(param_2,0,0);
                        *(undefined4 *)(puVar7 + 1) = 5;
                        *puVar7 = uVar3;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar2 = FUN_1400578c0(param_2);
                        local_50 = uVar2;
                        puVar4 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar2);
                        puVar7 = *(undefined8 **)(param_2 + 0x10);
                        *puVar7 = *puVar4;
                        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        iVar1 = FUN_1406f1a20(param_2,lVar6);
                        if (iVar1 != 0) {
                            FUN_1400fb540(&local_58,L"sbpReward");
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        }
                        FUN_1400fb1d0(&local_78,uVar2);
                        FUN_1400579e0();
                    }
                }
                plVar8 = plVar8 + 1;
            } while (plVar8 != *(longlong **)(param_3 + 0x10));
        }
        *param_1 = &PTR_FUN_140b569f0;
        param_1[2] = local_68;
        *(undefined4 *)(param_1 + 3) = 1;
        *(undefined4 *)(param_1 + 1) = 0xfffffffe;
        iVar1 = (*(code *)local_78[1])(&local_78);
    }
    if (iVar1 != 0) {
        lVar6 = *(longlong *)(local_68 + 0x20);
        *(undefined4 *)(param_1 + 3) = local_60;
        lVar5 = local_68;
        puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(lVar6 + 0xa0),local_70);
        puVar7 = *(undefined8 **)(lVar5 + 0x10);
        *puVar7 = *puVar4;
        uVar3 = param_1[2];
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(lVar5 + 0x10) = *(longlong *)(lVar5 + 0x10) + 0x10;
        uVar2 = FUN_1400578c0(uVar3);
        *(undefined4 *)(param_1 + 1) = uVar2;
    }
    local_78 = &PTR_FUN_140b56a08;
    if (local_68 != 0) {
        FUN_1400579e0();
    }
    return param_1;
}



undefined8 FUN_1406eed00(longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4)

{
    short sVar1;
    longlong lVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    short *psVar9;
    undefined8 *puVar10;
    longlong *plVar11;
    ulonglong uVar12;
    undefined8 *puVar13;
    undefined local_128 [8];
    longlong local_120;
    undefined2 *local_118;
    longlong local_110;
    undefined local_108 [8];
    undefined local_100 [8];
    undefined2 *local_f8;
    undefined2 *local_f0;
    longlong local_48;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar13 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    lVar6 = DAT_140c65970;
    *(undefined4 *)(puVar13 + 1) = 5;
    *puVar13 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (((((lVar6 != 0) && (DAT_140c65898 != 0)) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) &&
         ((*(int *)(lVar6 + 8) == 2 && (param_3 != (longlong *)0x0)))) && (param_4 != 0)) {
        FUN_1404dde90(local_108);
        lVar6 = FUN_14018b280(0x60);
        plVar11 = (longlong *)0x0;
        plVar7 = plVar11;
        if (lVar6 != 0) {
            plVar7 = (longlong *)FUN_1404db7e0(lVar6,*(undefined8 *)(DAT_140c65898 + 0x78));
        }
        local_120 = 0;
        local_118 = (undefined2 *)0x0;
        local_110 = 0;
        plVar8 = plVar11;
        do {
            plVar8 = (longlong *)((longlong)plVar8 + 1);
        } while (L"target"[(longlong)plVar8] != L'\0');
        lVar6 = (longlong)plVar8 * 2 >> 1;
        uVar12 = lVar6 + 1;
        if (uVar12 < 0x7fffffffffffffff) {
            lVar2 = uVar12 * 2;
            local_118 = (undefined2 *)FUN_14018b280(lVar2,0);
            local_110 = lVar2 + (longlong)local_118;
        }
        lVar2 = (longlong)local_118;
        lVar6 = lVar6 * 2;
        local_120 = (longlong)local_118;
        FUN_1407db590(local_118,L"target",lVar6);
        local_118 = (undefined2 *)(lVar6 + lVar2);
        if (local_118 != (undefined2 *)0x0) {
            *local_118 = 0;
        }
        FUN_1400b7480(local_108,plVar7);
        (**(code **)(*plVar7 + 0x48))(plVar7,local_128);
        if (local_120 != 0) {
            FUN_14018b900(local_120,0);
        }
        psVar9 = (short *)FUN_14034bdd0(*(longlong *)param_3[6],
                                        *(undefined4 *)(*(longlong *)param_3[6] + 0x1c));
        if (psVar9 == (short *)0x0) {
            if (local_f8 != local_f0) {
                *local_f8 = 0;
                local_f0 = local_f8;
            }
        }
        else {
            sVar1 = *psVar9;
            plVar7 = plVar11;
            while (sVar1 != 0) {
                plVar7 = (longlong *)((longlong)plVar7 + 1);
                sVar1 = psVar9[(longlong)plVar7];
            }
            FUN_14001c480(local_100,psVar9,psVar9 + (longlong)plVar7);
        }
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        *puVar13 = 0x3ff0000000000000;
        *(undefined4 *)(puVar13 + 1) = 3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1,0,0);
        *(undefined4 *)(puVar13 + 1) = 5;
        *puVar13 = uVar5;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        uVar3 = FUN_1400578c0(param_1);
        uVar12 = *(ulonglong *)(param_4 + 8);
        if ((uVar12 != 0) && (uVar12 <= DAT_140c3fe70)) {
            plVar11 = (longlong *)(DAT_140c3fe68 + uVar12);
        }
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar13,L"strIcon",plVar11);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar5 = FUN_14034bdd0(*(longlong *)param_3[6],*(undefined4 *)(*(longlong *)param_3[6] + 0x18));
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar13,L"strName",uVar5);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        lVar6 = FUN_1400b7660(local_108);
        uVar5 = *(undefined8 *)(lVar6 + 8);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f0870(param_1,puVar13,L"strSummary",uVar5);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        uVar4 = (**(code **)(*param_3 + 0x40))(param_3);
        uVar12 = (ulonglong)uVar4;
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1,puVar13,L"nCompleted",uVar12 & 0xffffffff);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400f06f0(param_1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        puVar13 = *(undefined8 **)(param_1 + 0x10);
        puVar10 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        *puVar13 = *puVar10;
        *(undefined4 *)(puVar13 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_1400579e0(param_1);
        if (local_48 != 0) {
            FUN_14018b900(local_48,0);
        }
        FUN_1400b7390(local_108);
    }
    return 1;
}



undefined8 FUN_1406ef1f0(undefined8 param_1)

{
    int iVar1;

    if ((((DAT_140c65970 != 0) && (DAT_140c65898 != 0)) && (*(longlong *)(DAT_140c65898 + 0x78) != 0))
        && (*(int *)(DAT_140c65970 + 8) == 2)) {
        iVar1 = FUN_140056e70(param_1,1);
        if (iVar1 != 0) {
            FUN_1405711b0(param_1,iVar1);
        }
        FUN_1405712a0();
    }
    return 0;
}



undefined8 FUN_1406ef2b0(longlong param_1)

{
    undefined4 uVar1;
    uint uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined8 *puVar8;
    uint uVar9;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_1);
    if (((DAT_140c65970 == 0) || (DAT_140c65898 == 0)) || (*(longlong *)(DAT_140c65898 + 0x78) == 0))
    {
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        puVar5 = *(undefined8 **)(param_1 + 0x10);
        *puVar5 = *puVar7;
        puVar8 = (undefined8 *)(ulonglong)*(uint *)(puVar7 + 1);
        *(uint *)(puVar5 + 1) = *(uint *)(puVar7 + 1);
    }
    else if (*(int *)(DAT_140c65970 + 8) == 2) {
        uVar2 = FUN_140221570();
        uVar9 = 0;
        if (uVar2 != 0) {
            do {
                lVar6 = FUN_140221620(uVar9);
                if (((lVar6 != 0) && (lVar6 = FUN_1406f1910(), lVar6 != 0)) &&
                    (iVar3 = FUN_1406f1a20(), iVar3 != 0)) {
                    FUN_1400fb470();
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar2);
        }
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        *puVar8 = *puVar5;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    }
    else {
        puVar5 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar1);
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        *puVar8 = *puVar5;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar5 + 1);
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar8,uVar1);
    return 1;
}



undefined8 FUN_1406ef450(undefined8 param_1)

{
    int iVar1;
    longlong lVar2;

    if ((((DAT_140c65970 != 0) && (DAT_140c65898 != 0)) && (*(longlong *)(DAT_140c65898 + 0x78) != 0))
        && (*(int *)(DAT_140c65970 + 8) == 2)) {
        iVar1 = DAT_140c4d460;
        if (*DAT_140c63750 < DAT_140c4d460) {
            iVar1 = *DAT_140c63750;
        }
        lVar2 = FUN_1402215c0(*(undefined4 *)(&DAT_140c4d470 + (longlong)iVar1 * 4));
        if (lVar2 != 0) {
            FUN_1406f1a20(param_1,lVar2);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1406ef4d0(undefined8 param_1)

{
    undefined4 *puVar1;
    longlong lVar2;

    if ((((DAT_140c65970 != 0) && (DAT_140c65898 != 0)) && (*(longlong *)(DAT_140c65898 + 0x78) != 0))
        && (*(int *)(DAT_140c65970 + 8) == 2)) {
        lVar2 = FUN_140056ab0(param_1,1,"Game.ScientistScanBotProfile");
        if (((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) &&
            (puVar1 = *(undefined4 **)(*(longlong *)(lVar2 + 8) + 8), puVar1 != (undefined4 *)0x0)) {
            lVar2 = FUN_1406f1910(puVar1,*puVar1);
            if (lVar2 != 0) {
                FUN_1405711b0();
            }
        }
    }
    return 0;
}



undefined8 FUN_1406ef590(longlong param_1)

{
    uint uVar1;
    undefined4 *puVar2;
    uint *puVar3;
    int iVar4;
    longlong lVar5;
    longlong *plVar6;

    if ((((DAT_140c65970 == 0) || (DAT_140c65898 == 0)) || (*(longlong *)(DAT_140c65898 + 0x78) == 0))
        || (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x250) != 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(int *)(DAT_140c65970 + 8) != 3) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar5 = FUN_140056ab0(param_1,1,"Game.PathMission");
    if (((lVar5 == 0) || (*(longlong *)(lVar5 + 8) == 0)) ||
        ((plVar6 = *(longlong **)(*(longlong *)(lVar5 + 8) + 8), plVar6 == (longlong *)0x0 ||
                                                                 ((uVar1 = *(uint *)(*plVar6 + 0xc), 0x1b < uVar1 || ((0x8008008U >> (uVar1 & 0x1f) & 1) == 0))
                                                                 )))) {
        LAB_1406ef6cf:
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar5 = FUN_140721ef0();
    if (lVar5 == 0) goto LAB_1406ef6cf;
    plVar6 = (longlong *)FUN_1403d7bc0(DAT_140c65970);
    if (plVar6 != (longlong *)0x0) {
        iVar4 = (**(code **)(*plVar6 + 0x38))(plVar6);
        if (iVar4 == 0) {
            lVar5 = FUN_14077cce0(plVar6);
            if (lVar5 != 0) {
                iVar4 = FUN_14077d110();
                puVar3 = *(uint **)(param_1 + 0x10);
                puVar3[2] = 1;
                *puVar3 = (uint)(iVar4 != 0);
                goto LAB_1406ef6af;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    LAB_1406ef6af:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ef710(longlong param_1)

{
    undefined4 *puVar1;
    uint *puVar2;
    int iVar3;
    longlong *plVar4;
    uint uVar5;

    if ((((DAT_140c65970 != 0) && (DAT_140c65898 != 0)) && (*(longlong *)(DAT_140c65898 + 0x78) != 0))
        && (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x250) == 0)) {
        if (*(int *)(DAT_140c65970 + 8) != 3) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
        plVar4 = (longlong *)FUN_14067b760(param_1);
        if (((plVar4 != (longlong *)0x0) && (*(uint *)(*(longlong *)plVar4[6] + 0xc) < 0x1c)) &&
            ((0x8008008U >> (*(uint *)(*(longlong *)plVar4[6] + 0xc) & 0x1f) & 1) != 0)) {
            (**(code **)(*plVar4 + 8))();
            iVar3 = FUN_14077cfc0();
            uVar5 = (uint)(-1 < iVar3);
            goto LAB_1406ef7b5;
        }
    }
    uVar5 = 0;
    LAB_1406ef7b5:
    puVar2 = *(uint **)(param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406ef7e0(void)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res10;

    if (((((DAT_140c65970 != 0) && (DAT_140c65898 != 0)) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)
         ) && ((*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x250) == 0 &&
                (*(int *)(DAT_140c65970 + 8) == 3)))) && (lVar3 = FUN_1405e9400(), lVar3 != 0)) {
        lVar4 = *(longlong *)(DAT_140c65978 + 0xd0);
        uVar1 = **(uint **)(lVar3 + 0x70);
        local_res10 = lVar4;
        lVar2 = *(longlong *)(lVar4 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < uVar1) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res10 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res10 == lVar4) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar4;
        }
        if ((local_res10 != lVar4) &&
            (lVar4 = DAT_140c65898, lVar3 = FUN_1403c1780(DAT_140c65898,(*(uint **)(lVar3 + 0x70))[1]),
                    lVar3 != 0)) {
            FUN_14039a040(lVar4,*(undefined4 *)(lVar3 + 0x24),0,0,0,0);
        }
    }
    return 0;
}



undefined8 FUN_1406eff70(longlong param_1)

{
    longlong lVar1;

    if (DAT_140c65970 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar1 = FUN_1405721c0();
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    FUN_140432ac0(param_1,*(undefined8 *)(lVar1 + 0x30));
    return 1;
}



undefined4 FUN_1406effe0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 *puVar6;
    ulonglong uVar7;
    undefined8 *puVar8;
    undefined **local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if ((DAT_140c65970 == 0) || (DAT_140c65898 == 0)) {
        *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 8) = 0;
        *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = FUN_1405744f0(param_3,*(undefined4 *)(DAT_140c65898 + 0x7150),
                          *(undefined8 *)(DAT_140c65898 + 0x78));
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 8) = 0;
        *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = FUN_140618780(lVar3);
    if (lVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 8) = 0;
        *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
        return 1;
    }
    lVar4 = FUN_1404804a0(DAT_140c65970,**(undefined4 **)(lVar3 + 8),0x15);
    if (lVar4 == 0) {
        *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 8) = 0;
        *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
        return 1;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_3;
    if (*(ulonglong *)(*(longlong *)(param_3 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_3 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_3);
    }
    puVar8 = *(undefined8 **)(param_3 + 0x10);
    uVar5 = FUN_14005c1b0(param_3,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar5;
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
    uVar1 = FUN_1400578c0(param_3);
    uVar7 = (ulonglong)*(uint *)(lVar3 + 0x10);
    local_20 = uVar1;
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_3 + 0x20) + 0xa0),uVar1);
    puVar8 = *(undefined8 **)(param_3 + 0x10);
    *puVar8 = *puVar6;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
    uVar5 = FUN_1400f06f0(param_3,puVar8,L"eState",uVar7 & 0xffffffff);
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + -0x10;
    puVar8 = *(undefined8 **)(param_3 + 0x10);
    puVar6 = (undefined8 *)
            FUN_14005c3c0(uVar5,param_2,*(undefined4 *)(lVar3 + 0x14),
                          *(undefined8 *)(*(longlong *)(param_3 + 0x20) + 0xa0),uVar1);
    *puVar8 = *puVar6;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
    FUN_1400f06f0(param_3);
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + -0x10;
    uVar5 = FUN_14034bdd0();
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_3 + 0x20) + 0xa0),uVar1);
    puVar8 = *(undefined8 **)(param_3 + 0x10);
    *puVar8 = *puVar6;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
    FUN_1400f0870(param_3,puVar8,L"strObjective",uVar5);
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + -0x10;
    iVar2 = FUN_140432ac0(param_3,*(undefined8 *)(lVar4 + 0x30));
    if (iVar2 != 0) {
        FUN_1400fb540(&local_28,L"pmInfrastructure");
        *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + -0x10;
    }
    puVar6 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_3 + 0x20) + 0xa0),uVar1);
    puVar8 = *(undefined8 **)(param_3 + 0x10);
    *puVar8 = *puVar6;
    *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_3 + 0x10) = *(longlong *)(param_3 + 0x10) + 0x10;
    FUN_1400579e0(param_3,puVar8,uVar1);
    return 1;
}



undefined8 FUN_1406f0780(void)

{
    if ((DAT_140c65970 != 0) && (DAT_140c65898 != 0)) {
        if ((*(int *)(DAT_140c65970 + 8) == 2) && (*(int *)(DAT_140c65970 + 0xc0) == 0)) {
            FUN_1405712a0();
        }
        FUN_140398470();
    }
    return 0;
}



undefined8 FUN_1406f07c0(void)

{
    if ((DAT_140c65970 != 0) && (DAT_140c65898 != 0)) {
        if ((*(int *)(DAT_140c65970 + 8) == 2) && (*(int *)(DAT_140c65970 + 0xc0) == 0)) {
            FUN_1405712a0();
        }
        FUN_1403984e0();
    }
    return 0;
}



undefined8 FUN_1406f0800(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    if (DAT_140c65970 == 0) {
        return 0;
    }
    if (DAT_140c65898 == 0) {
        return 0;
    }
    if (*(int *)(DAT_140c65970 + 8) != 2) {
        return 0;
    }
    plVar2 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar2 = *(longlong **)(param_1 + 0x18);
    }
    if (*(int *)(plVar2 + 1) != 4) {
        iVar1 = FUN_14005e620(param_1,plVar2);
        if (iVar1 == 0) {
            lVar3 = 0;
            goto LAB_1406f088d;
        }
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar2 = &DAT_140a12138;
        if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
            plVar2 = *(longlong **)(param_1 + 0x18);
        }
    }
    lVar3 = *plVar2 + 0x20;
    LAB_1406f088d:
    FUN_14018f2d0(local_28,lVar3);
    FUN_140398540();
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 0;
}



undefined8 FUN_1406f08c0(longlong param_1)

{
    longlong lVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    if (((DAT_140c65970 == 0) || (DAT_140c65898 == 0)) || (*(int *)(DAT_140c65970 + 8) != 2)) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar1 = FUN_1403a8810(DAT_140c65898,0);
        if ((lVar1 == 0) || (puVar2 = (undefined *)(lVar1 + 8), puVar2 == (undefined *)0x0)) {
            puVar2 = &DAT_1409f7e8c;
        }
        lVar1 = FUN_14018f0e0(local_28,puVar2);
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
        if (local_20 != 0) {
            FUN_14018b900(local_20,0);
            return 1;
        }
    }
    return 1;
}



undefined8 FUN_1406f09a0(longlong param_1)

{
    undefined8 *puVar1;
    int iVar2;
    double *pdVar3;

    if ((DAT_140c65970 != 0) && (DAT_140c65968 != 0)) {
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
            (0 < *(int *)(puVar1 + 1))) {
            FUN_140056d60(param_1,1);
        }
        pdVar3 = *(double **)(param_1 + 0x10);
        iVar2 = FUN_140491e30();
        *(undefined4 *)(pdVar3 + 1) = 3;
        *pdVar3 = (double)iVar2;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f0a40(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    int iVar3;
    longlong lVar4;

    if (((DAT_140c65970 != 0) && (DAT_140c65968 != 0)) && (DAT_140c65898 != 0)) {
        puVar1 = *(undefined8 **)(param_1 + 0x18);
        if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
            (0 < *(int *)(puVar1 + 1))) {
            FUN_140056d60(param_1,1);
        }
        iVar3 = FUN_1403d2140(DAT_140c65898,10);
        if (iVar3 == 0) {
            lVar4 = FUN_140200220(0x45a);
            if (lVar4 == 0) {
                iVar3 = 1;
            }
            else {
                iVar3 = *(int *)(lVar4 + 4);
            }
        }
        else {
            iVar3 = FUN_140491e30();
        }
        pdVar2 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar2 + 1) = 3;
        *pdVar2 = (double)iVar3;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f1190(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    float fVar3;

    if (DAT_140c65970 == 0) {
        return 0;
    }
    lVar2 = FUN_140527540();
    fVar3 = (float)lVar2;
    if (lVar2 < 0) {
        fVar3 = fVar3 + 1.844674e+19;
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *pdVar1 = (double)fVar3;
    *(undefined4 *)(pdVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406f11f0(longlong param_1)

{
    ulonglong uVar1;
    longlong lVar2;
    ulonglong *puVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined4 uStack20;

    if ((DAT_140dc4be8 & 1) == 0) {
        DAT_140dc4be8 = DAT_140dc4be8 | 1;
        DAT_140dc4bf8 = 0;
    }
    if (DAT_140c65970 != 0) {
        if (DAT_140dc4bf8 == 0) {
            DAT_140dc4bf8 = 1;
            lVar2 = FUN_140200220(0x93e);
            if (lVar2 == 0) {
                DAT_140dc4bf0 = 0;
            }
            else {
                DAT_140dc4bf0 = (ulonglong)*(uint *)(lVar2 + 8);
            }
        }
        uVar1 = DAT_140dc4bf0;
        local_20 = 0xf;
        local_18 = 0;
        uStack20 = 9;
        puVar3 = (ulonglong *)FUN_140059170(param_1,0x18);
        *puVar3 = uVar1;
        puVar3[1] = local_20;
        puVar3[2] = CONCAT44(uStack20,local_18);
        lVar2 = *(longlong *)(param_1 + 0x20);
        local_28 = FUN_140062650(param_1,"Game.Money",10);
        local_20 = CONCAT44(local_20._4_4_,4);
        FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1,0xfffffffe);
        return 1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406f1310(longlong param_1)

{
    longlong lVar1;
    ulonglong uVar2;
    longlong *plVar3;
    undefined8 local_28;
    undefined8 local_20;
    undefined4 local_18;
    undefined4 uStack20;

    if ((DAT_140dc4c00 & 1) == 0) {
        DAT_140dc4c00 = DAT_140dc4c00 | 1;
        DAT_140dc4c0c = 0;
    }
    if (DAT_140c65970 != 0) {
        if (DAT_140dc4c0c == 0) {
            DAT_140dc4c0c = 1;
            uVar2 = FUN_140200220(0x93d);
            if (uVar2 == 0) {
                DAT_140dc4c08 = 0;
            }
            else {
                DAT_140dc4c08 = *(uint *)(uVar2 + 4);
                uVar2 = (ulonglong)DAT_140dc4c08;
            }
        }
        else {
            uVar2 = (ulonglong)DAT_140dc4c08;
        }
        local_20 = 0xf;
        local_18 = 0;
        uStack20 = 9;
        plVar3 = (longlong *)FUN_140059170(param_1,0x18);
        *plVar3 = (longlong)(int)uVar2;
        plVar3[1] = local_20;
        plVar3[2] = CONCAT44(uStack20,local_18);
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



undefined8 FUN_1406f1430(longlong param_1)

{
    uint uVar1;
    uint *puVar2;
    uint uVar3;

    if (DAT_140c65970 != 0) {
        uVar3 = FUN_140056d60();
        if ((int)uVar3 < 4) {
            puVar2 = *(uint **)(param_1 + 0x10);
            uVar1 = *(uint *)(DAT_140c65970 + 0xc);
            puVar2[2] = 1;
            *puVar2 = (uint)((uVar1 >> (uVar3 & 0x1f) & 1) != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


// undefined8 FUN_1406f1490(longlong param_1)
undefined8 PlayerPathLibLoader(longlong param_1)
{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 local_28;
    undefined4 local_20;

    FUN_140057020(param_1,"PlayerPathLib",&PTR_s_GetPathLevelCap_140b72310);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PlayerPathType_Soldier",0x16);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PlayerPathType_Settler",0x16);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PlayerPathType_Scientist",0x18);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PlayerPathType_Explorer",0x17);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PathRewardType_Item",0x13);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PathRewardType_Spell",0x14);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PathRewardType_Title",0x14);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PathRewardType_Quest",0x14);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PathRewardType_ScanBot",0x16);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"SettlerInfrastructureState_Inactive",0x23);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"SettlerInfrastructureState_Building",0x23);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"SettlerInfrastructureState_Built",0x20);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    return 1;
}



longlong FUN_1406f1910(undefined8 param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong local_res8;

    plVar3 = DAT_140c65970;
    lVar5 = FUN_1402215c0(param_2);
    if (lVar5 == 0) {
        return 0;
    }
    if (param_2 != 1) {
        lVar1 = *(longlong *)(DAT_140c65968 + 0x130);
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
        if ((local_res8 == lVar1) || ((longlong *)(local_res8 + 0x28) == (longlong *)0x0)) {
            return 0;
        }
        uVar7 = 0;
        if (*(longlong *)(local_res8 + 0x30) != 0) {
            do {
                lVar1 = *(longlong *)(local_res8 + 0x28);
                uVar6 = (**(code **)(*plVar3 + 8))(plVar3);
                iVar4 = FUN_1406f1b00(*(undefined8 *)(lVar1 + uVar7 * 8),uVar6);
                if (iVar4 != 0) {
                    return lVar5;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(ulonglong *)(local_res8 + 0x30));
        }
        lVar5 = 0;
    }
    return lVar5;
}



undefined4 FUN_1406f1a20(longlong param_1,longlong param_2)

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
    local_18 = FUN_140062650(param_1,"Game.ScientistScanBotProfile",0x1c);
    local_10 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_18,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



ulonglong FUN_1406f1b00(longlong param_1,longlong param_2)

{
    undefined8 uVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    ulonglong uVar5;
    longlong *plVar6;

    uVar1 = DAT_140c65968;
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
        lVar4 = FUN_14021ef80(*(undefined4 *)(param_1 + 8));
        if (lVar4 != 0) {
            plVar6 = (longlong *)
                    FUN_140491cf0(uVar1,*(undefined4 *)(lVar4 + 4),*(undefined4 *)(lVar4 + 8));
            if ((plVar6 != (longlong *)0x0) &&
                (lVar4 = *plVar6, *(int *)(lVar4 + 4) == *(int *)(param_2 + 0x3700))) {
                uVar3 = FUN_14047c450(param_2);
                return (ulonglong)(*(uint *)(lVar4 + 8) <= uVar3);
            }
        }
    }
    else if (iVar2 == 1) {
        if (((DAT_140c65898 != 0) && (*(longlong *)(DAT_140c65898 + 0x78) == param_2)) &&
            (DAT_140c65970 != 0)) {
            plVar6 = (longlong *)FUN_1403d7bc0(DAT_140c65970,*(undefined4 *)(param_1 + 8));
            if (plVar6 != (longlong *)0x0) {
                iVar2 = (**(code **)(*plVar6 + 0x38))(plVar6);
                if ((iVar2 != 0) && (*(int *)(*(longlong *)plVar6[6] + 8) == *(int *)(param_2 + 0x3700))) {
                    return 1;
                }
            }
        }
    }
    else if (((iVar2 == 2) && (DAT_140c65898 != 0)) &&
             ((*(longlong *)(DAT_140c65898 + 0x78) == param_2 && (DAT_140c65970 != 0)))) {
        lVar4 = FUN_1406849e0(DAT_140c65970,*(undefined4 *)(param_1 + 8));
        if ((lVar4 != 0) &&
            (*(int *)(**(longlong **)(lVar4 + 0x48) + 0x14) == *(int *)(param_2 + 0x3700))) {
            uVar5 = FUN_140573130(lVar4,param_2);
            return uVar5;
        }
    }
    return 0;
}


// undefined8 FUN_1406f1c70(longlong param_1)
undefined8 LoadCREDDExchangeOrder(longlong param_1)

{
    undefined8 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined8 uVar4;
    undefined **ppuVar5;
    undefined *puVar6;
    undefined8 local_18;
    undefined4 local_10;

    LuaElementLoaderOrSo(param_1,"Game.CREDDExchangeOrder");
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
    ppuVar5 = &PTR_DAT_140c5eb30;
    puVar6 = PTR_DAT_140c5eb30;
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
    FUN_140057020(param_1,"CREDDExchangeOrder",&PTR_DAT_140b72550);
    return 1;
}



void FUN_1406f1e50(undefined8 param_1)

{
    undefined8 local_38;
    undefined8 local_30;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    local_38 = 0;
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_18 = 0;
    FUN_1404341e0(param_1,&local_38);
    return;
}



undefined8 FUN_1406f1fa0(longlong param_1)

{
    int iVar1;
    uint *puVar2;
    undefined4 *puVar3;
    longlong lVar4;

    if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
        lVar4 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
        if (((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 8), lVar4 != 0)) && (lVar4 != -8)) {
            puVar2 = *(uint **)(param_1 + 0x10);
            iVar1 = *(int *)(lVar4 + 0x18);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar1 != 0);
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



undefined8 FUN_1406f2030(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
    if (((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) &&
        (*(longlong *)(lVar1 + 8) != 0)) {
        FUN_140184510(param_1,*(undefined8 *)(lVar1 + 0x20));
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f20a0(longlong param_1)

{
    longlong lVar1;

    lVar1 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
    if (lVar1 == 0) {
        lVar1 = 0;
    }
    else {
        lVar1 = *(longlong *)(lVar1 + 8);
    }
    if (((*(int *)(DAT_140c635f0 + 0x1708) == 0) && (lVar1 != 0)) && (*(longlong *)(lVar1 + 8) != 0))
    {
        FUN_140184510(param_1,*(undefined8 *)(lVar1 + 0x28));
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f2120(longlong param_1)

{
    undefined4 *puVar1;
    longlong lVar2;
    longlong *plVar3;
    undefined8 uVar4;

    lVar2 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
    if (lVar2 == 0) {
        lVar2 = 0;
    }
    else {
        lVar2 = *(longlong *)(lVar2 + 8);
    }
    if ((*(int *)(DAT_140c635f0 + 0x1708) == 0) && (lVar2 != 0)) {
        if (*(longlong *)(lVar2 + 8) != 0) {
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            goto LAB_1406f2211;
        }
        plVar3 = (longlong *)FUN_140056ab0(param_1,2,"Game.Money");
        if (plVar3 != (longlong *)0x0) {
            if (*(int *)(plVar3 + 1) != 1) {
                uVar4 = FUN_140056570(param_1,2,"price must be in credits");
                return uVar4;
            }
            if (*plVar3 < 1) {
                uVar4 = FUN_140056570(param_1,2,"price must be greater than zero");
                return uVar4;
            }
            *(longlong *)(lVar2 + 0x10) = *plVar3;
            puVar1 = *(undefined4 **)(param_1 + 0x10);
            *puVar1 = 1;
            puVar1[2] = 1;
            goto LAB_1406f2211;
        }
    }
    puVar1 = *(undefined4 **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = 0;
    LAB_1406f2211:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f2230(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    longlong lVar3;
    longlong *plVar4;

    if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
        lVar3 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
        if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) &&
             (plVar4 = (longlong *)(*(longlong *)(lVar3 + 8) + 8), plVar4 != (longlong *)0x0)) &&
            (bVar2 = 1, *plVar4 != 0)) goto LAB_1406f227b;
    }
    bVar2 = 0;
    LAB_1406f227b:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f22b0(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    longlong lVar3;

    lVar3 = FUN_140056ab0(param_1,1);
    if ((((lVar3 == 0) || (lVar3 = *(longlong *)(lVar3 + 8), lVar3 == 0)) ||
         (*(int *)(DAT_140c635f0 + 0x1708) != 0)) ||
        ((*(longlong *)(lVar3 + 8) != 0 || (bVar2 = 1, *(longlong *)(lVar3 + 0x10) < 1)))) {
        bVar2 = 0;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f2330(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
        lVar1 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
            if (*(longlong *)(lVar1 + 8) != 0) {
                uVar2 = FUN_140056830(param_1,"Error posting: CREDD exchange order is already posted");
                return uVar2;
            }
            if ((*(int *)(DAT_140c635f0 + 0x1708) != 0) || (*(longlong *)(lVar1 + 0x10) < 1)) {
                uVar2 = FUN_140056830(param_1,"Error posting: invalid CREDD exchange order");
                return uVar2;
            }
        }
    }
    return 0;
}



undefined8 FUN_1406f23c0(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    if (*(int *)(DAT_140c635f0 + 0x1708) == 0) {
        lVar1 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
        if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
            (*(longlong *)(*(longlong *)(lVar1 + 8) + 8) == 0)) {
            uVar2 = FUN_140056830(param_1,"Error canceling: CREDD exchange order is not posted");
            return uVar2;
        }
    }
    return 0;
}



undefined8 FUN_1406f2420(void)

{
    return 0x30;
}



undefined8 FUN_1406f2430(longlong param_1)

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
        LAB_1406f2473:
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
                local_18 = FUN_140062650(param_1,"Game.CREDDExchangeOrder",0x17);
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
                goto LAB_1406f2557;
            }
        }
    }
    else if (*(int *)(plVar6 + 1) == 7) {
        lVar7 = *plVar6 + 0x30;
        goto LAB_1406f2473;
    }
    *(undefined4 *)plVar4 = 0;
    *(undefined4 *)(plVar4 + 1) = 1;
    LAB_1406f2557:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f2570(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong *plVar3;

    lVar2 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
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



undefined8 FUN_1406f25f0(longlong param_1)

{
    uint *puVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    bool bVar7;

    lVar4 = FUN_140056ab0(param_1,1,"Game.CREDDExchangeOrder");
    lVar5 = 0;
    lVar6 = lVar5;
    if (lVar4 != 0) {
        lVar6 = *(longlong *)(lVar4 + 8);
    }
    lVar4 = FUN_140056ab0(param_1,2,"Game.CREDDExchangeOrder");
    if (lVar4 != 0) {
        lVar5 = *(longlong *)(lVar4 + 8);
    }
    if ((lVar6 == 0) || (lVar5 == 0)) {
        puVar2 = *(undefined4 **)(param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
    }
    else {
        if ((*(longlong *)(lVar6 + 8) == 0) && (*(longlong *)(lVar5 + 8) == 0)) {
            iVar3 = FUN_1407e6af0(lVar6 + 8,lVar5 + 8,0x28);
            bVar7 = iVar3 == 0;
        }
        else {
            bVar7 = *(longlong *)(lVar6 + 8) == *(longlong *)(lVar5 + 8);
        }
        puVar1 = *(uint **)(param_1 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint)bVar7;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f26c0(undefined8 param_1,longlong param_2)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong lVar3;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *)(param_2 + 0x10);
    DAT_140c65c48 = param_1;
    FUN_140057020(lVar1,"Tooltip",&PTR_s_GetItemTooltipForm_140b725a0);
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4071800000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipWidth",0xc);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4068800000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipLeftColumn",0x11);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4055000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipRightColumn",0x12);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_Default",0x1b);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_Grid",0x18);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4000000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_ItemData",0x1c);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_ItemInstance",0x20);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4010000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_Spell",0x19);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4014000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_GameCommand",0x1f);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4018000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_Map",0x17);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x401c000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_UnitOrProp",0x1e);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4020000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_Macro",0x19);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4022000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_Reputation",0x1e);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4024000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_Money",0x19);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4026000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_TradeSkill",0x1e);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x4028000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_Xp",0x16);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **)(lVar1 + 0x10);
    *puVar2 = 0x402a000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + 0x10;
    lVar3 = *(longlong *)(lVar1 + 0x10);
    local_18 = FUN_140062650(lVar1,"TooltipGenerateType_PetCommand",0x1e);
    local_10 = 4;
    FUN_14005ea50(lVar1,lVar3 + -0x20,&local_18,*(longlong *)(lVar1 + 0x10) + -0x10);
    *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + -0x20;
    return param_1;
}



undefined8 FUN_1406f3050(longlong param_1)

{
    undefined8 *puVar1;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        FUN_140056d60(param_1,1);
        FUN_1404d1e40();
        return 0;
    }
    FUN_1404d1e40(param_1,0);
    return 0;
}


// undefined4 FUN_1406f30a0(longlong param_1)
undefined4 RewardTrackLibLoader(longlong param_1)
{
    undefined8 *puVar1;
    undefined8 uVar2;
    longlong lVar3;
    longlong lVar4;

    FUN_140057020(param_1,"RewardTrackLib",&PTR_s_GetAllRewardTracks_140b725f0);
    FUN_140058710(param_1,"CodeEnumInputAction",0x13);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    lVar4 = 5;
    lVar3 = 0xd2;
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
    FUN_140058710(param_1,"CodeEnumRewardTrackType",0x17);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"ContractPvP",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"ContractPvE",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Loyalty",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Challenge",9);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar2,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"RewardTrackType",0xf);
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

undefined8 FUN_1406f33f0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    uint uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
    undefined **local_28;
    uint local_20;
    longlong local_18;
    undefined4 local_10;

    uVar10 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar10;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) break;
            uVar8 = (ulonglong)((int)uVar8 + 1);
        } while (uVar8 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c64fbc != 0) {
            return 0;
        }
        iVar4 = FUN_14020fae0();
        if (iVar4 < 0) {
            return 0;
        }
        uVar3 = (**(code **)(*DAT_140c63c10 + 0x28))();
    }
    else {
        uVar3 = (*DAT_140c63838)(&PTR_u_LiveEvent_140a6b0f0,DAT_140c63858);
    }
    if (uVar3 == 0) {
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
    local_20 = FUN_1400578c0(param_1);
    if (uVar3 != 0) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if ((_DAT_140c64fbc == 0) && (iVar4 = FUN_14020fae0(), -1 < iVar4)) {
                    lVar6 = (**(code **)(*DAT_140c63c10 + 0x20))(DAT_140c63c10,uVar10);
                    goto LAB_1406f3541;
                }
            }
            else {
                lVar6 = (*DAT_140c63848)(&PTR_u_LiveEvent_140a6b0f0,uVar10,DAT_140c63858);
                LAB_1406f3541:
                if (((lVar6 != 0) && ((*(byte *)(lVar6 + 0xc) & 8) == 0)) &&
                    (iVar4 = FUN_1406b91f0(param_1), iVar4 != 0)) {
                    FUN_1400fb470(&local_28);
                    *(longlong *)(local_18 + 0x10) = *(longlong *)(local_18 + 0x10) + -0x10;
                    param_1 = local_18;
                }
            }
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
        } while (uVar9 < uVar3);
    }
    uVar10 = (ulonglong)local_20;
    puVar7 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar10)
            ;
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar7;
    uVar1 = *(undefined4 *)(puVar7 + 1);
    *(undefined4 *)(puVar2 + 1) = uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar1,uVar10 & 0xffffffff);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406f35e0(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined8 *puVar8;
    longlong *plVar9;
    double dVar10;
    undefined8 local_res8;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar4 = FUN_1400578c0();
    if (DAT_140c65980 != 0) {
        lVar7 = *(longlong *)(DAT_140c65980 + 0x10);
        local_res8 = lVar7;
        for (lVar3 = *(longlong *)(lVar7 + 8); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x10)) {
            local_res8 = lVar3;
        }
        if ((local_res8 == lVar7) || (*(int *)(local_res8 + 0x20) != 0)) {
            local_res8 = lVar7;
        }
        if ((local_res8 != lVar7) && (*(longlong *)(local_res8 + 0x28) != 0)) {
            plVar9 = *(longlong **)(*(longlong *)(local_res8 + 0x28) + 0x20);
            goto joined_r0x0001406f36b2;
        }
    }
    plVar9 = (longlong *)0x0;
    joined_r0x0001406f36b2:
    for (; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[2]) {
        iVar5 = (**(code **)(*plVar9 + 0x68))();
        if (((iVar5 != 0) && (*(int *)((longlong)plVar9 + 0x1d4) == 0)) &&
            (iVar5 = (**(code **)(*plVar9 + 0x28))(), iVar5 == 0x10)) {
            (**(code **)(*plVar9 + 0x20))();
            lVar7 = FUN_14020fd40();
            if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0xc) & 8) == 0)) {
                uVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
                iVar5 = FUN_140432c80(param_1,uVar6);
                if (iVar5 != 0) {
                    FUN_1400fb470();
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                }
            }
        }
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar4 - 1U < *(uint *)(lVar7 + 0x38)) {
        puVar8 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
    }
    else {
        dVar10 = (double)iVar4;
        if (dVar10 == 0.0) {
            puVar8 = *(undefined8 **)(lVar7 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
            local_res8._0_4_ = SUB84(dVar10,0);
            puVar8 = (undefined8 *)
                    (*(longlong *)(lVar7 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar8 + 3) == 3) && (dVar10 == (double)puVar8[2])) goto LAB_1406f37bd;
            puVar8 = (undefined8 *)puVar8[4];
        } while (puVar8 != (undefined8 *)0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_1406f37bd:
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar8;
    uVar1 = *(undefined4 *)(puVar8 + 1);
    *(undefined4 *)(puVar2 + 1) = uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar1,iVar4);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406f37f0(longlong param_1)

{
    longlong *plVar1;
    undefined4 uVar2;
    double dVar3;
    double dVar4;
    longlong *plVar5;
    undefined8 *puVar6;
    double dVar7;
    longlong lVar8;
    int iVar9;
    int iVar10;
    undefined8 uVar11;
    double *pdVar12;
    longlong lVar13;
    undefined8 *puVar14;
    longlong lVar15;
    longlong lVar16;
    undefined8 local_res8;
    double local_res10;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar14 = *(undefined8 **)(param_1 + 0x10);
    uVar11 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar14 + 1) = 5;
    *puVar14 = uVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar9 = FUN_1400578c0(param_1);
    plVar1 = (longlong *)(DAT_140c65988 + 0xd8);
    lVar13 = *plVar1;
    lVar15 = *(longlong *)(lVar13 + 0x10);
    lVar16 = DAT_140c65988;
    if (lVar15 != lVar13) {
        do {
            dVar3 = *(double *)(lVar16 + 0x10);
            dVar7 = dVar3;
            dVar4 = *(double *)((longlong)dVar3 + 8);
            while (dVar4 != 0.0) {
                if (*(uint *)((longlong)dVar4 + 0x20) < *(uint *)(lVar15 + 0x20)) {
                    dVar4 = *(double *)((longlong)dVar4 + 0x18);
                }
                else {
                    dVar7 = dVar4;
                    dVar4 = *(double *)((longlong)dVar4 + 0x10);
                }
            }
            if ((dVar7 == dVar3) || (*(uint *)(lVar15 + 0x20) < *(uint *)((longlong)dVar7 + 0x20))) {
                local_res10 = dVar3;
                pdVar12 = &local_res10;
            }
            else {
                local_res8 = dVar7;
                pdVar12 = (double *)&local_res8;
            }
            if ((*pdVar12 != dVar3) &&
                (plVar5 = *(longlong **)((longlong)*pdVar12 + 0x28), plVar5 != (longlong *)0x0)) {
                lVar13 = (**(code **)(*plVar5 + 0x18))();
                if (DAT_140c63840 == (code *)0x0) {
                    lVar16 = DAT_140c65988;
                    if ((_DAT_140c64fbc != 0) ||
                        (iVar10 = FUN_14020fae0(), lVar16 = DAT_140c65988, iVar10 < 0)) goto LAB_1406f396e;
                    lVar13 = (**(code **)(*DAT_140c63c10 + 0x18))();
                }
                else {
                    lVar13 = (*DAT_140c63840)(&PTR_u_LiveEvent_140a6b0f0,*(undefined4 *)(lVar13 + 0x24),
                                              DAT_140c63858);
                }
                lVar16 = DAT_140c65988;
                if (((lVar13 != 0) && ((*(byte *)(lVar13 + 0xc) & 0x20) != 0)) &&
                    (iVar10 = FUN_1406b91f0(), lVar16 = DAT_140c65988, iVar10 != 0)) {
                    FUN_1400fb470();
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                    lVar16 = DAT_140c65988;
                }
            }
            LAB_1406f396e:
            lVar13 = *(longlong *)(lVar15 + 0x18);
            if (lVar13 == 0) {
                lVar13 = *(longlong *)(lVar15 + 8);
                if (lVar15 == *(longlong *)(lVar13 + 0x18)) {
                    do {
                        lVar15 = lVar13;
                        lVar13 = *(longlong *)(lVar15 + 8);
                    } while (lVar15 == *(longlong *)(lVar13 + 0x18));
                }
                if (*(longlong *)(lVar15 + 0x18) != lVar13) {
                    lVar15 = lVar13;
                }
            }
            else {
                for (lVar8 = *(longlong *)(lVar13 + 0x10); lVar15 = lVar13, lVar8 != 0;
                     lVar8 = *(longlong *)(lVar8 + 0x10)) {
                    lVar13 = lVar8;
                }
            }
        } while (lVar15 != *plVar1);
    }
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar9 - 1U < *(uint *)(lVar13 + 0x38)) {
        puVar14 = (undefined8 *)((longlong)(iVar9 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
    }
    else {
        local_res8 = (double)iVar9;
        if (local_res8 == 0.0) {
            puVar14 = *(undefined8 **)(lVar13 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
            puVar14 = (undefined8 *)
                    (*(longlong *)(lVar13 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar14 + 3) == 3) && (local_res8 == (double)puVar14[2])) goto LAB_1406f3a61;
            puVar14 = (undefined8 *)puVar14[4];
        } while (puVar14 != (undefined8 *)0x0);
        puVar14 = &DAT_140a12138;
    }
    LAB_1406f3a61:
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = *puVar14;
    uVar2 = *(undefined4 *)(puVar14 + 1);
    *(undefined4 *)(puVar6 + 1) = uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar2,iVar9);
    return 1;
}



undefined8 FUN_1406f3a90(undefined8 param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;

    uVar1 = FUN_140056d60(param_1,1);
    lVar2 = FUN_14020fd40(uVar1);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xc) & 8) == 0)) {
        uVar3 = FUN_1406b91f0(param_1,lVar2);
        return uVar3;
    }
    return 0;
}


// undefined8 FUN_1406f3ad0(undefined8 param_1)
undefined8 LiveEventsLibLoader(undefined8 param_1)
{
    FUN_140057020(param_1,"LiveEventsLib",&PTR_s_GetVisibleLiveEventList_140b72640);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406f3b00(longlong param_1)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    longlong lVar4;
    double *pdVar5;
    int iVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    int iVar9;
    longlong local_res10;

    puVar2 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar2 + 1))) {
        iVar6 = FUN_140056d60(param_1);
        if (iVar6 < 8) {
            lVar3 = *(longlong *)(DAT_140c65898 + 0x7e70);
            local_res10 = lVar3;
            lVar4 = *(longlong *)(lVar3 + 8);
            while (lVar4 != 0) {
                if (*(int *)(lVar4 + 0x20) < iVar6) {
                    lVar4 = *(longlong *)(lVar4 + 0x18);
                }
                else {
                    local_res10 = lVar4;
                    lVar4 = *(longlong *)(lVar4 + 0x10);
                }
            }
            if ((local_res10 == lVar3) || (iVar6 < *(int *)(local_res10 + 0x20))) {
                local_res10 = lVar3;
            }
            if ((local_res10 != lVar3) && ((longlong *)(local_res10 + 0x28) != (longlong *)0x0)) {
                iVar9 = 1;
                FUN_140058900(param_1,iVar6,0);
                uVar8 = 0;
                if (*(longlong *)(local_res10 + 0x30) != 0) {
                    do {
                        pdVar5 = *(double **)(param_1 + 0x10);
                        *(undefined4 *)(pdVar5 + 1) = 3;
                        *pdVar5 = (double)iVar9;
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                        uVar1 = *(undefined4 *)(*(longlong *)(local_res10 + 0x28) + uVar8 * 4);
                        if (DAT_140c63840 == (code *)0x0) {
                            if (_DAT_140c65364 == 0) {
                                iVar6 = FUN_140224aa0();
                                if (iVar6 < 0) {
                                    uVar7 = 0;
                                }
                                else {
                                    uVar7 = (**(code **)(*DAT_140c64a38 + 0x18))(DAT_140c64a38,uVar1);
                                }
                            }
                            else {
                                uVar7 = 0;
                            }
                        }
                        else {
                            uVar7 = (*DAT_140c63840)(&PTR_u_PetFlair_140a6c238,uVar1,DAT_140c63858);
                        }
                        FUN_140434100(param_1,uVar7);
                        lVar3 = *(longlong *)(param_1 + 0x10);
                        FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
                        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                        uVar8 = uVar8 + 1;
                        iVar9 = iVar9 + 1;
                    } while (uVar8 < *(ulonglong *)(local_res10 + 0x30));
                }
                return 1;
            }
            return 0;
        }
    }
    return 0;
}



undefined8 FUN_1406f3cc0(longlong param_1)

{
    undefined8 *puVar1;
    undefined **local_18;
    int local_10;
    undefined4 local_c;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        local_10 = FUN_140056d60(param_1,1);
        if (local_10 != 3) {
            local_18 = &PTR_FUN_140b6fe30;
            local_c = FUN_140056d60(param_1,2);
            FUN_1406b7660(param_1,&local_18);
            return 1;
        }
    }
    return 0;
}



undefined8 FUN_1406f3d40(longlong param_1)

{
    undefined8 *puVar1;
    uint *puVar2;
    int iVar3;
    undefined4 uVar4;

    puVar1 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar1 < *(undefined8 **)(param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar1 + 1))) {
        iVar3 = FUN_140056d60(param_1,1);
        if (iVar3 != 3) {
            uVar4 = FUN_140056d60(param_1,2);
            iVar3 = (**(code **)(*DAT_140c65a18 + 0x28))(DAT_140c65a18,iVar3,uVar4);
            puVar2 = *(uint **)(param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint)(iVar3 != 0);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


// undefined4 FUN_1406f3de0(longlong param_1)
undefined4 PetCustomizationLibLoader(longlong param_1)
{
    undefined8 *puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined8 local_28;
    undefined4 local_20;

    FUN_140057020(param_1,"PetCustomizationLib",&PTR_s_GetUnlockedPetFlairByType_140b72690);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PetFlairType_ScanBotRom",0x17);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PetFlairType_ScanBotVanity",0x1a);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PetFlairType_GroundMountFront",0x1d);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PetFlairType_GroundMountBack",0x1c);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4010000000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PetFlairType_GroundMountSide",0x1c);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PetFlairType_HoverMountFront",0x1c);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PetFlairType_HoverMountBack",0x1b);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"PetFlairType_HoverMountSide",0x1b);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar4 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140058710(param_1,"MountSlot",9);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Front",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b40e40,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b40e38,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Right",5);
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
    FUN_140058710(param_1,"HoverboardSlot",0xe);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Front",5);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,&DAT_140b40e10,4);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"Sides",5);
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
    lVar4 = 7;
    FUN_140058710(param_1,"PetType",7);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058710(param_1,"Scanbot",7);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"GroundMount",0xb);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    FUN_140058710(param_1,"HoverBoard",10);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *)(puVar1 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *)(param_1 + 0x10);
    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar2,lVar2 + -0x20,lVar2 + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = 0x4050400000000000;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *)(param_1 + 0x10);
    local_28 = FUN_140062650(param_1,"HoverboardAttachmentPoint",0x19);
    local_20 = 4;
    FUN_14005ea50(param_1,lVar2 + -0x20,&local_28,*(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    FUN_140058710(param_1,"PetCustomizeResult",0x12);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    uVar3 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar3,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_1406f4660(void)

{
    longlong lVar1;

    if ((DAT_140c8b0e8 & 1) == 0) {
        DAT_140c8b0e8 = DAT_140c8b0e8 | 1;
    }
    else if (_DAT_140c8b0f4 != 0) {
        return DAT_140c8b0f0;
    }
    _DAT_140c8b0f4 = 1;
    lVar1 = FUN_140200220(0x3ea);
    if (lVar1 != 0) {
        DAT_140c8b0f0 = *(undefined4 *)(lVar1 + 4);
        return *(undefined4 *)(lVar1 + 4);
    }
    DAT_140c8b0f0 = 0;
    return 0;
}



int * FUN_1406f46d0(int *param_1,longlong param_2,undefined4 param_3)

{
    int iVar1;
    longlong *plVar2;
    undefined8 uVar3;
    longlong lVar4;
    undefined8 local_18;
    undefined4 local_10;

    plVar2 = (longlong *)FUN_1400580e0(param_2,param_3);
    iVar1 = *(int *)(plVar2 + 1);
    if ((iVar1 == 5) || (iVar1 == 7)) {
        lVar4 = *(longlong *)(*plVar2 + 0x10);
    }
    else {
        lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
    }
    if (lVar4 != 0) {
        plVar2 = *(longlong **)(param_2 + 0x10);
        *plVar2 = lVar4;
        *(undefined4 *)(plVar2 + 1) = 5;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    }
    lVar4 = *(longlong *)(param_2 + 0x10);
    local_18 = FUN_140062650(param_2,"eDevice",7);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar4 + -0x10,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    uVar3 = FUN_140056d60(param_2,0xffffffff);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *)(param_2 + 0x10);
    *param_1 = (int)uVar3;
    if ((int)uVar3 == 0) {
        *(undefined8 *)(param_1 + 1) = uVar3;
        return param_1;
    }
    local_18 = FUN_140062650(param_2,"nCode",5);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar4 + -0x10,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    iVar1 = FUN_140056d60(param_2,0xffffffff);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *)(param_2 + 0x10);
    param_1[2] = iVar1;
    local_18 = FUN_140062650(param_2,"eModifier",9);
    local_10 = 4;
    FUN_14005e8e0(param_2,lVar4 + -0x10,&local_18,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    iVar1 = FUN_140056d60(param_2,0xffffffff);
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
    param_1[1] = iVar1;
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

undefined4 * FUN_1406f4860(undefined4 *param_1,longlong param_2)

{
    int iVar1;
    undefined8 uVar2;
    undefined8 uVar3;
    undefined8 uVar4;
    undefined4 uVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 local_48;
    undefined8 local_40;
    undefined8 local_38;
    undefined local_28 [32];

    param_1[0x24] = 1;
    plVar6 = (longlong *)FUN_1400580e0(param_2,0xffffffff);
    iVar1 = *(int *)(plVar6 + 1);
    if ((iVar1 == 5) || (iVar1 == 7)) {
        lVar8 = *(longlong *)(*plVar6 + 0x10);
    }
    else {
        lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xe0 + (longlong)iVar1 * 8);
    }
    if (lVar8 != 0) {
        plVar6 = *(longlong **)(param_2 + 0x10);
        *plVar6 = lVar8;
        *(undefined4 *)(plVar6 + 1) = 5;
        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    }
    lVar8 = *(longlong *)(param_2 + 0x10);
    local_48 = FUN_140062650(param_2,"idAction",8);
    local_40._0_4_ = 4;
    FUN_14005e8e0(param_2,lVar8 + -0x10,&local_48,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    uVar5 = FUN_140056d60(param_2,0xffffffff);
    *param_1 = uVar5;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    local_48 = FUN_140062650(param_2,"arInputs",8);
    local_40 = CONCAT44(local_40._4_4_,4);
    FUN_14005e8e0(param_2,lVar8 + -0x10,&local_48,*(undefined8 *)(param_2 + 0x10));
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    puVar7 = *(undefined8 **)(param_2 + 0x10);
    *puVar7 = 0x3ff0000000000000;
    *(undefined4 *)(puVar7 + 1) = 3;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    FUN_14005e8e0(param_2,lVar8 + -0x20,lVar8 + -0x10,lVar8 + -0x10);
    puVar7 = (undefined8 *)FUN_1406f46d0(local_28,param_2,0xffffffff);
    local_48 = *puVar7;
    local_40 = puVar7[1];
    local_38 = puVar7[2];
    uVar5 = *(undefined4 *)(puVar7 + 3);
    param_1[0x27] = (undefined4)local_48;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    param_1[0x28] = local_48._4_4_;
    param_1[0x29] = (undefined4)local_40;
    local_40._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
    param_1[0x2a] = local_40._4_4_;
    param_1[0x2b] = (undefined4)local_38;
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    param_1[0x2c] = local_38._4_4_;
    param_1[0x2d] = uVar5;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
    puVar7 = *(undefined8 **)(param_2 + 0x10);
    *puVar7 = 0x4000000000000000;
    *(undefined4 *)(puVar7 + 1) = 3;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    FUN_14005e8e0(param_2,lVar8 + -0x20,lVar8 + -0x10,lVar8 + -0x10);
    puVar7 = (undefined8 *)FUN_1406f46d0(local_28,param_2,0xffffffff);
    local_48 = *puVar7;
    local_40 = puVar7[1];
    local_38 = puVar7[2];
    uVar5 = *(undefined4 *)(puVar7 + 3);
    param_1[0x2e] = (undefined4)local_48;
    local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
    param_1[0x2f] = local_48._4_4_;
    param_1[0x30] = (undefined4)local_40;
    local_40._4_4_ = (undefined4)((ulonglong)local_40 >> 0x20);
    param_1[0x31] = local_40._4_4_;
    param_1[0x32] = (undefined4)local_38;
    local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
    param_1[0x33] = local_38._4_4_;
    param_1[0x34] = uVar5;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
    puVar7 = *(undefined8 **)(param_2 + 0x10);
    *puVar7 = 0x4008000000000000;
    *(undefined4 *)(puVar7 + 1) = 3;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    lVar8 = *(longlong *)(param_2 + 0x10);
    FUN_14005e8e0(param_2,lVar8 + -0x20,lVar8 + -0x10,lVar8 + -0x10);
    puVar7 = (undefined8 *)FUN_1406f46d0(local_28,param_2,0xffffffff);
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = *(undefined4 *)(puVar7 + 3);
    local_48._0_4_ = (undefined4)uVar2;
    param_1[0x35] = (undefined4)local_48;
    local_48._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    param_1[0x36] = local_48._4_4_;
    local_40._0_4_ = (undefined4)uVar3;
    param_1[0x37] = (undefined4)local_40;
    local_40._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    param_1[0x38] = local_40._4_4_;
    local_38._0_4_ = (undefined4)uVar4;
    param_1[0x39] = (undefined4)local_38;
    local_38._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    param_1[0x3a] = local_38._4_4_;
    param_1[0x3b] = uVar5;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x20;
    return param_1;
}



undefined8 FUN_1406f4b60(longlong param_1)

{
    longlong *plVar1;
    undefined uVar2;
    undefined8 *puVar3;

    puVar3 = &DAT_140a12138;
    if (*(undefined8 **)(param_1 + 0x18) < *(undefined8 **)(param_1 + 0x10)) {
        puVar3 = *(undefined8 **)(param_1 + 0x18);
    }
    uVar2 = 0;
    if ((*(int *)(puVar3 + 1) != 0) && ((*(int *)(puVar3 + 1) != 1 || (*(int *)puVar3 != 0)))) {
        uVar2 = 1;
    }
    plVar1 = *(longlong **)(DAT_140c65898 + 0x7588);
    if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x90))(plVar1,uVar2);
    }
    return 0;
}



void FUN_1406f4bd0(longlong param_1)

{
    longlong *plVar1;
    undefined4 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined auStack264 [32];
    undefined4 local_e8;
    undefined4 local_d8;
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined8 local_c8;
    undefined4 local_c0;
    undefined local_b8 [8];
    longlong local_b0;
    undefined2 local_98 [64];
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack264;
    plVar1 = *(longlong **)(DAT_140c65898 + 0x7588);
    local_98[0] = 0;
    puVar2 = (undefined4 *)FUN_1406f46d0(local_b8,param_1);
    if (plVar1 != (longlong *)0x0) {
        local_d8 = *puVar2;
        uStack212 = puVar2[1];
        uStack208 = puVar2[2];
        uStack204 = puVar2[3];
        local_c8 = *(undefined8 *)(puVar2 + 4);
        local_c0 = puVar2[6];
        local_e8 = 0;
        (**(code **)(*plVar1 + 0xf8))(plVar1,&local_d8,local_98,0x40);
    }
    lVar3 = FUN_14018f0e0(local_b8,local_98);
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
    if (local_b0 != 0) {
        FUN_14018b900(local_b0,0);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack264);
    return;
}



undefined8 FUN_1406f56f0(void)

{
    undefined local_res10 [24];

    if (*(longlong *)(DAT_140c65898 + 0x6778) != 0) {
        local_res10[0] = 0;
        FUN_1403f4740(DAT_140c65898,0x57c,local_res10);
    }
    return 0;
}



undefined8 FUN_1406f5730(longlong param_1,undefined4 param_2)

{
    int iVar1;
    longlong *plVar2;
    undefined8 *puVar3;
    double *pdVar4;
    int iVar5;
    undefined8 uVar6;
    int *piVar7;
    longlong lVar8;
    uint uVar9;
    longlong lVar10;
    int iVar11;
    int iVar12;
    undefined local_58 [8];
    longlong local_50;

    plVar2 = *(longlong **)(DAT_140c65898 + 0x7588);
    if (plVar2 == (longlong *)0x0) {
        iVar5 = 0;
    }
    else {
        iVar5 = (**(code **)(*plVar2 + 0x138))(plVar2);
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar3 + 1) = 5;
    iVar11 = 0;
    *puVar3 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar12 = 0;
    if (0 < iVar5) {
        do {
            piVar7 = (int *)(**(code **)(*plVar2 + 0x148))(plVar2,iVar12,param_2);
            if ((piVar7[0x21] - 1U & 0xfffffff7) != 0) {
                pdVar4 = *(double **)(param_1 + 0x10);
                iVar11 = iVar11 + 1;
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)iVar11;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                uVar6 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar3 + 1) = 5;
                *puVar3 = uVar6;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f0090(param_1);
                FUN_1400f0090(param_1);
                iVar1 = *piVar7;
                FUN_140058710(param_1,"idAction",8);
                pdVar4 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                iVar1 = piVar7[0x21];
                FUN_140058710(param_1,"idCategory",10);
                pdVar4 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                iVar1 = piVar7[0x25];
                FUN_140058710(param_1,"nDisplayIndex",0xd);
                pdVar4 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                iVar1 = piVar7[0x26];
                FUN_140058710(param_1,"iInputKeyLookupGroup",0x14);
                pdVar4 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar4 + 1) = 3;
                *pdVar4 = (double)iVar1;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                lVar8 = FUN_14018f0e0(local_58,L"arInputs");
                if (*(longlong *)(lVar8 + 8) == 0) {
                    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                }
                else {
                    lVar10 = -1;
                    do {
                        lVar10 = lVar10 + 1;
                    } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar10) != '\0');
                    FUN_140058710(param_1);
                }
                if (local_50 != 0) {
                    FUN_14018b900(local_50,0);
                }
                if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                    *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar3 = *(undefined8 **)(param_1 + 0x10);
                uVar6 = FUN_14005c1b0(param_1,0,0);
                *(undefined4 *)(puVar3 + 1) = 5;
                uVar9 = 0;
                *puVar3 = uVar6;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                piVar7 = piVar7 + 0x29;
                do {
                    pdVar4 = *(double **)(param_1 + 0x10);
                    uVar9 = uVar9 + 1;
                    *(undefined4 *)(pdVar4 + 1) = 3;
                    *pdVar4 = (double)uVar9;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar3 = *(undefined8 **)(param_1 + 0x10);
                    uVar6 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar3 + 1) = 5;
                    *puVar3 = uVar6;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    iVar1 = piVar7[-2];
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar3 = *(undefined8 **)(param_1 + 0x10);
                    uVar6 = FUN_140062650(param_1,"eDevice",7);
                    *(undefined4 *)(puVar3 + 1) = 4;
                    *puVar3 = uVar6;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    pdVar4 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar4 + 1) = 3;
                    *pdVar4 = (double)iVar1;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                    iVar1 = *piVar7;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar3 = *(undefined8 **)(param_1 + 0x10);
                    uVar6 = FUN_140062650(param_1,"nCode",5);
                    *(undefined4 *)(puVar3 + 1) = 4;
                    *puVar3 = uVar6;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    pdVar4 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar4 + 1) = 3;
                    *pdVar4 = (double)iVar1;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                    iVar1 = piVar7[-1];
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar3 = *(undefined8 **)(param_1 + 0x10);
                    uVar6 = FUN_140062650(param_1,"eModifier",9);
                    *(undefined4 *)(puVar3 + 1) = 4;
                    *puVar3 = uVar6;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    pdVar4 = *(double **)(param_1 + 0x10);
                    *(undefined4 *)(pdVar4 + 1) = 3;
                    *pdVar4 = (double)iVar1;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                                  *(longlong *)(param_1 + 0x10) + -0x10);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                    lVar8 = *(longlong *)(param_1 + 0x10);
                    FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar8,lVar8 + -0x20,lVar8 + -0x10);
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                    lVar8 = *(longlong *)(param_1 + 0x10);
                    piVar7 = piVar7 + 7;
                } while (uVar9 < 8);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar8,lVar8 + -0x20,lVar8 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                lVar8 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar8,lVar8 + -0x20,lVar8 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
            }
            iVar12 = iVar12 + 1;
        } while (iVar12 < iVar5);
    }
    return 1;
}



undefined8 FUN_1406f5d00(undefined8 param_1)

{
    uint uVar1;
    int iVar2;

    uVar1 = FUN_140056d60(param_1,1);
    iVar2 = FUN_140056d60(param_1,2);
    if ((((0x38 < uVar1) || ((0x160040030000000U >> ((longlong)(int)uVar1 & 0x3fU) & 1) == 0)) &&
    (uVar1 != 0x11d)) && ((uVar1 != 0x138 && ((iVar2 != 4 || (uVar1 != 0x3e)))))) {
        return 1;
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406f5d90(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    undefined8 uVar6;
    int *piVar7;
    int iVar8;
    int iVar9;

    if (DAT_140c63838 == (code *)0x0) {
        if (_DAT_140c639ac == 0) {
            iVar4 = FUN_140208c00();
            if (iVar4 < 0) {
                iVar4 = 0;
            }
            else {
                iVar4 = (**(code **)(*DAT_140c644f8 + 0x28))();
            }
        }
        else {
            iVar4 = 0;
        }
    }
    else {
        iVar4 = (*DAT_140c63838)(&PTR_u_InputActionCategory_140a6ab40,DAT_140c63858);
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    iVar8 = 0;
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar9 = 1;
    if (0 < iVar4) {
        do {
            if (DAT_140c63848 == (code *)0x0) {
                if (_DAT_140c639ac == 0) {
                    iVar5 = FUN_140208c00();
                    if (iVar5 < 0) {
                        piVar7 = (int *)0x0;
                    }
                    else {
                        piVar7 = (int *)(**(code **)(*DAT_140c644f8 + 0x20))(DAT_140c644f8,iVar8);
                    }
                }
                else {
                    piVar7 = (int *)0x0;
                }
            }
            else {
                piVar7 = (int *)(*DAT_140c63848)(&PTR_u_InputActionCategory_140a6ab40,iVar8,DAT_140c63858);
            }
            if ((*piVar7 - 1U & 0xfffffff7) != 0) {
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar9;
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
                iVar5 = *piVar7;
                FUN_140058710(param_1,"nCategoryId",0xb);
                pdVar2 = *(double **)(param_1 + 0x10);
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar5;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                uVar6 = FUN_1400580e0(param_1,0xfffffffd);
                FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                              *(longlong *)(param_1 + 0x10) + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                FUN_14034bdd0();
                FUN_1400f0090(param_1);
                lVar3 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar3,lVar3 + -0x20,lVar3 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
                iVar9 = iVar9 + 1;
            }
            iVar8 = iVar8 + 1;
        } while (iVar8 < iVar4);
    }
    return 1;
}



undefined8 FUN_1406f5fe0(longlong param_1)

{
    uint *puVar1;
    undefined4 uVar2;
    int iVar3;
    undefined4 local_res8 [2];

    uVar2 = FUN_140056d60();
    *(undefined4 *)(DAT_140c65898 + 0x7590) = uVar2;
    iVar3 = FUN_1404db630();
    local_res8[0] = *(undefined4 *)(DAT_140c65898 + 0x7590);
    FUN_1403f4900(DAT_140c65898,0x571,local_res8);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar3 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f6060(longlong param_1,undefined8 param_2,undefined8 param_3)

{
    undefined4 uVar1;
    int iVar2;

    uVar1 = FUN_140056d60(param_1,1);
    iVar2 = FUN_1404db630(DAT_140c65898,uVar1,param_3,2);
    if (iVar2 != 0) {
        FUN_1406f5730(param_1,2);
        return 1;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 0;
}



undefined8 FUN_1406f60c0(longlong param_1)

{
    uint *puVar1;
    uint uVar2;

    uVar2 = FUN_140056d60(param_1,1);
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(2 < uVar2);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f6150(longlong param_1)

{
    uint uVar1;
    double *pdVar2;
    ulonglong uVar3;

    if (DAT_140c65808 == (longlong *)0x0) {
        pdVar2 = *(double **)(param_1 + 0x10);
        *pdVar2 = 0.0;
    }
    else {
        uVar3 = *(ulonglong *)(DAT_140c65898 + 0x7928);
        if (uVar3 != 0) {
            uVar3 = (ulonglong)*(uint *)(uVar3 + 0x98);
        }
        uVar1 = (**(code **)(*DAT_140c65808 + 0x60))(DAT_140c65808,uVar3 & 0xffffffff);
        pdVar2 = *(double **)(param_1 + 0x10);
        *pdVar2 = (double)(ulonglong)uVar1;
    }
    *(undefined4 *)(pdVar2 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f6230(void)

{
    if (*(longlong *)(DAT_140c65898 + 0x73f8) != 0) {
        FUN_140608d00();
    }
    return 0;
}



undefined8 FUN_1406f6380(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
    longlong lVar1;
    undefined8 *puVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined8 uVar5;
    longlong *plVar6;
    longlong *plVar7;
    longlong *plVar8;

    plVar8 = (longlong *)0x0;
    plVar7 = plVar8;
    do {
        plVar7 = (longlong *)((longlong)plVar7 + 1);
    } while (L"GetAccountRealmName is deprecated and will be removed in the near future. GameLib.GetPlayerCharacterName() and GameLib.GetRealmName() should be used instead."
             [(longlong)plVar7] != L'\0');
    plVar3 = (longlong *)FUN_14018b280((longlong)plVar7 * 2 + 0x12,0);
    plVar4 = plVar8;
    if (plVar3 != (longlong *)0x0) {
        plVar3[1] = (longlong)plVar7;
        *plVar3 = (longlong)&PTR_LAB_140b55060;
        plVar4 = plVar3;
    }
    plVar3 = plVar4 + 2;
    FUN_1407db590(plVar3,
                  L"GetAccountRealmName is deprecated and will be removed in the near future. GameLib.GetPlayerCharacterName() and GameLib.GetRealmName() should be used instead."
            ,(longlong)plVar7 * 2);
    lVar1 = DAT_140c63650;
    *(undefined2 *)((longlong)plVar7 * 2 + (longlong)plVar3) = 0;
    plVar7 = *(longlong **)(lVar1 + 0x300);
    if (plVar7 != (longlong *)0x0) {
        lVar1 = *(longlong *)(lVar1 + 0x2f8);
        plVar6 = plVar8;
        do {
            if (*(longlong *)(*(longlong *)(lVar1 + (longlong)plVar6 * 8) + 400) == param_1) {
                plVar8 = *(longlong **)(lVar1 + (longlong)plVar6 * 8);
                break;
            }
            plVar6 = (longlong *)(ulonglong)((int)plVar6 + 1);
        } while (plVar6 < plVar7);
    }
    plVar7 = (longlong *)plVar8[0x136];
    if ((((longlong *)*plVar7 != plVar7) && (lVar1 = *(longlong *)(plVar7[1] + 0x10), lVar1 != 0)) &&
        (*(longlong *)(lVar1 + 0x30) != 0)) {
        FUN_140137120(*(longlong *)(lVar1 + 0x30),6,plVar3);
        FUN_1400ea7b0(plVar8,*(longlong *)(lVar1 + 0x30),plVar3,
                      param_4 & 0xffffffffffffff00 |
                      (ulonglong)(5 < *(int *)(*(longlong *)(lVar1 + 0x30) + 0x218)));
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f0090(param_1);
    FUN_1400f0090(param_1);
    if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4);
    }
    return 1;
}



undefined8 FUN_1406f6590(longlong param_1)

{
    longlong lVar1;
    undefined *puVar2;
    longlong lVar3;
    undefined local_28 [8];
    longlong local_20;

    puVar2 = &DAT_1409f7ebc;
    if (*(undefined **)(DAT_140c65898 + 0x88) != (undefined *)0x0) {
        puVar2 = *(undefined **)(DAT_140c65898 + 0x88);
    }
    lVar1 = FUN_14018f0e0(local_28,puVar2);
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
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



undefined8 FUN_1406f6690(longlong param_1)

{
    double *pdVar1;
    uint uVar2;
    longlong *plVar3;

    if (*(longlong *)(DAT_140c65898 + 0x78) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    plVar3 = *(longlong **)(DAT_140c65898 + 0x1bf0);
    if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 0x18))();
        plVar3 = (longlong *)(ulonglong)uVar2;
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(int)plVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f6730(undefined8 param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    if (((*(longlong *)(DAT_140c65898 + 0x78) != 0) && (*(longlong *)(DAT_140c65898 + 0x6490) != 0))
        && (*(int *)(*(longlong *)(DAT_140c65898 + 0x6490) + 0x108) != 0)) {
        lVar1 = FUN_1403d90d0();
        if (lVar1 != 0) {
            uVar2 = FUN_140649930(param_1,lVar1);
            return uVar2;
        }
    }
    return 0;
}



undefined8 FUN_1406f6830(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    undefined local_28 [8];
    longlong local_20;

    lVar1 = FUN_14018f0e0(local_28,*(undefined8 *)(DAT_140c635f0 + 0x1678));
    if (*(longlong *)(lVar1 + 8) == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    else {
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *)(*(longlong *)(lVar1 + 8) + lVar2) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20,0);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_1406f69e0(longlong param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    undefined8 uVar4;
    undefined8 *puVar5;
    undefined8 *puVar6;
    longlong lVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined8 local_res8;
    undefined **local_58;
    int local_50;
    undefined4 uStack76;
    longlong local_48;
    undefined4 local_40;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar1 = FUN_1400578c0(param_1);
    uVar2 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x6d90) != 0) {
        uVar2 = FUN_1405e73e0();
    }
    puVar5 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar1);
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    *puVar6 = *puVar5;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar5 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400f06f0(param_1,puVar6,L"nSpellCount",uVar2);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    local_58 = &PTR_FUN_140b569f0;
    local_40 = 1;
    local_48 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    uVar4 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar6 + 1) = 5;
    *puVar6 = uVar4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_50 = FUN_1400578c0();
    lVar8 = param_1;
    if (uVar2 != 0) {
        lVar7 = 0x14;
        uVar9 = (ulonglong)uVar2;
        do {
            local_res8 = (double)((ulonglong)local_res8 & 0xffffffff00000000 |
                                  (ulonglong)
                                  *(uint *)(*(longlong *)(DAT_140c65898 + 0x6d90) + -0xc + lVar7));
            iVar3 = FUN_1403d3470(lVar8,&local_res8);
            if (iVar3 != 0) {
                FUN_1400fb470(&local_58);
                *(longlong *)(local_48 + 0x10) = *(longlong *)(local_48 + 0x10) + -0x10;
                lVar8 = local_48;
            }
            local_res8 = (double)((ulonglong)local_res8 & 0xffffffff00000000 |
                                  (ulonglong)*(uint *)(lVar7 + *(longlong *)(DAT_140c65898 + 0x6d90)));
            iVar3 = FUN_1403d3470(lVar8,&local_res8);
            if (iVar3 != 0) {
                FUN_1400fb470();
                *(longlong *)(local_48 + 0x10) = *(longlong *)(local_48 + 0x10) + -0x10;
                lVar8 = local_48;
            }
            lVar7 = lVar7 + 4;
            uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
    }
    iVar3 = local_50;
    uVar11 = 0;
    uVar12 = 0;
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar1 - 1U < *(uint *)(lVar7 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(iVar1 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
    }
    else {
        local_res8 = (double)iVar1;
        if (local_res8 == 0.0) {
            puVar6 = *(undefined8 **)(lVar7 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar7 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (local_res8 == (double)puVar6[2])) goto LAB_1406f6c1b;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_1406f6c1b:
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = *puVar6;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar7 = FUN_14018f0e0(&local_58,L"tSpells");
    lVar7 = *(longlong *)(lVar7 + 8);
    if (lVar7 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar10 = -1;
        do {
            lVar10 = lVar10 + 1;
        } while (*(char *)(lVar7 + lVar10) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar6 = *(undefined8 **)(param_1 + 0x10);
        uVar4 = FUN_140062650(param_1,lVar7,lVar10);
        *(undefined4 *)(puVar6 + 1) = 4;
        *puVar6 = uVar4;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (CONCAT44(uStack76,local_50) != 0) {
        FUN_14018b900(CONCAT44(uStack76,local_50),0);
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar3 - 1U < *(uint *)(lVar7 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
    }
    else {
        local_res8 = (double)iVar3;
        if (local_res8 == (double)CONCAT44(uVar12,uVar11)) {
            puVar6 = *(undefined8 **)(lVar7 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar7 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (local_res8 == (double)puVar6[2])) goto LAB_1406f6d49;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_1406f6d49:
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    *puVar5 = *puVar6;
    *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar6 + 1);
    lVar7 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar7 + 0x10;
    FUN_14005ea50(param_1,lVar7 + -0x20,lVar7 + -0x10,lVar7);
    lVar7 = *(longlong *)(param_1 + 0x10);
    *(undefined **)(param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar7;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar1 - 1U < *(uint *)(lVar10 + 0x38)) {
        puVar6 = (undefined8 *)((longlong)(iVar1 + -1) * 0x10 + *(longlong *)(lVar10 + 0x18));
    }
    else {
        local_res8 = (double)iVar1;
        if (local_res8 == (double)CONCAT44(uVar12,uVar11)) {
            puVar6 = *(undefined8 **)(lVar10 + 0x20);
        }
        else {
            local_res8._4_4_ = (int)((ulonglong)local_res8 >> 0x20);
            puVar6 = (undefined8 *)
                    (*(longlong *)(lVar10 + 0x20) +
                     ((longlong)(ulonglong)(uint)(local_res8._4_4_ + (int)local_res8) %
                      (longlong)((1 << (*(byte *)(lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar6 + 3) == 3) && (local_res8 == (double)puVar6[2])) goto LAB_1406f6e09;
            puVar6 = (undefined8 *)puVar6[4];
        } while (puVar6 != (undefined8 *)0x0);
        puVar6 = &DAT_140a12138;
    }
    LAB_1406f6e09:
    *(undefined8 *)(&DAT_ffffffffffffffd0 + lVar7) = *puVar6;
    uVar11 = *(undefined4 *)(puVar6 + 1);
    *(undefined4 *)(lVar7 + -0x28) = uVar11;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (lVar8 != 0) {
        FUN_1400579e0(lVar8,uVar11,iVar3);
    }
    FUN_1400579e0(param_1);
    return 1;
}



undefined8 FUN_1406f6e60(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    iVar2 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x6d90) != 0) {
        iVar2 = FUN_1405e73e0();
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



void FUN_1406f6eb0(undefined8 param_1)

{
    longlong lVar1;
    undefined4 local_res10 [6];

    lVar1 = *(longlong *)(DAT_140c65898 + 0x6d90);
    if (lVar1 != 0) {
        local_res10[0] = *(undefined4 *)(lVar1 + 8 + *(longlong *)(lVar1 + 0x30) * 4);
        FUN_1403d3470(param_1,local_res10);
        return;
    }
    local_res10[0] = 0;
    FUN_1403d3470(param_1,local_res10);
    return;
}



undefined8 FUN_1406f6f00(longlong param_1)

{
    uint *puVar1;
    longlong lVar2;
    bool bVar3;

    bVar3 = false;
    if ((*(longlong *)(DAT_140c65898 + 0x6d90) != 0) && (*(longlong *)(DAT_140c65898 + 0x78) != 0)) {
        lVar2 = FUN_140469920(*(longlong *)(DAT_140c65898 + 0x78));
        bVar3 = lVar2 != 0;
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f6f70(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    iVar2 = 0;
    if (*(longlong **)(DAT_140c65898 + 0x6d90) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x6d90) + 0x20))();
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f6fd0(longlong param_1)

{
    uint *puVar1;
    int iVar2;

    iVar2 = 0;
    if (*(longlong **)(DAT_140c65898 + 0x6d90) != (longlong *)0x0) {
        iVar2 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x6d90) + 0x28))();
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f7080(longlong param_1)

{
    int iVar1;
    double *pdVar2;
    double local_res10 [3];
    double local_18;
    undefined4 local_10;

    pdVar2 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar2 = *(double **)(param_1 + 0x18);
    }
    if (*(int *)(pdVar2 + 1) == 3) {
        LAB_1406f70d2:
        iVar1 = (int)*pdVar2;
        if (0 < iVar1) {
            iVar1 = iVar1 + -1;
        }
    }
    else {
        if (*(int *)(pdVar2 + 1) == 4) {
            iVar1 = FUN_14005ac80((longlong)*pdVar2 + 0x20,local_res10);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar2 = &local_18;
                local_18 = local_res10[0];
                goto LAB_1406f70d2;
            }
        }
        iVar1 = 0;
    }
    FUN_1405e7490(*(undefined8 *)(DAT_140c65898 + 0x6d90),(longlong)iVar1,1);
    return 1;
}



void FUN_1406f7110(undefined8 param_1)

{
    undefined4 local_res10 [6];

    local_res10[0] = FUN_1403ca1d0();
    FUN_1403d3470(param_1,local_res10);
    return;
}



undefined8 FUN_1406f7140(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_14039de90(DAT_140c65898);
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_140649930(param_1,lVar1);
    return uVar2;
}



undefined8 FUN_1406f7190(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_14039def0(DAT_140c65898);
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_140649930(param_1,lVar1);
    return uVar2;
}



undefined8 FUN_1406f71e0(longlong param_1)

{
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_14039df50(DAT_140c65898);
    if (lVar1 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar2 = FUN_140649930(param_1,lVar1);
    return uVar2;
}



undefined8 FUN_1406f7230(longlong param_1)

{
    int iVar1;
    longlong *plVar2;
    undefined8 uVar3;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        plVar2 = (longlong *)
                FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xc0)
                );
        if (plVar2 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
            if (iVar1 != 0) {
                uVar3 = FUN_140649930(param_1,plVar2);
                return uVar3;
            }
        }
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f72b0(longlong param_1)

{
    undefined8 *puVar1;
    undefined4 uVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
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
    uVar3 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_20 = uVar2;
    FUN_14050e830(&local_28);
    puVar4 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    *puVar1 = *puVar4;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar4 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar1,uVar2);
    return 1;
}



undefined8 FUN_1406f7370(longlong param_1)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 uVar3;

    uVar1 = FUN_140056d60(param_1,1);
    lVar2 = FUN_1403d90d0(DAT_140c65898,uVar1);
    if (lVar2 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar3 = FUN_140649930(param_1,lVar2);
    return uVar3;
}



undefined8 FUN_1406f73c0(void)

{
    int iVar1;
    longlong *plVar2;

    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        plVar2 = (longlong *)
                FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(*(longlong *)(DAT_140c65898 + 0x78) + 0xc0)
                );
        if (plVar2 != (longlong *)0x0) {
            iVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
            if (iVar1 != 0) {
                FUN_14039e400(DAT_140c65898);
            }
        }
    }
    return 0;
}



undefined8 FUN_1406f7410(longlong param_1)

{
    undefined4 *puVar1;
    undefined4 uVar2;

    puVar1 = (undefined4 *)FUN_1406622c0(param_1,1);
    if (puVar1 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_1403d90d0(DAT_140c65898,*puVar1);
    }
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        if (puVar1 == (undefined4 *)0x0) {
            uVar2 = 0;
        }
        else {
            uVar2 = puVar1[2];
        }
        FUN_14055b0e0(DAT_140c65898,uVar2);
        puVar1 = *(undefined4 **)(param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}



undefined8 FUN_1406f7570(longlong param_1,ushort *param_2)

{
    ushort uVar1;
    undefined8 *puVar2;
    double *pdVar3;
    longlong lVar4;
    int iVar5;
    undefined8 uVar6;
    longlong local_res8;

    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar1 = *param_2;
    FUN_140058710(param_1,"nYear",5);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(uint)uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    uVar1 = param_2[1];
    FUN_140058710(param_1,"nMonth",6);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(uint)uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    uVar1 = param_2[3];
    FUN_140058710(param_1,&DAT_140b4146c,4);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(uint)uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    uVar1 = param_2[2];
    FUN_140058710(param_1,"nDayOfWeek",10);
    pdVar3 = *(double **)(param_1 + 0x10);
    *pdVar3 = (double)(uVar1 + 1);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    uVar1 = param_2[4];
    FUN_140058710(param_1,"nHour",5);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(uint)uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    uVar1 = param_2[5];
    FUN_140058710(param_1,"nMinute",7);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(uint)uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    uVar1 = param_2[6];
    FUN_140058710(param_1,"nSecond",7);
    pdVar3 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)(uint)uVar1;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar6 = FUN_1400580e0(param_1,0xfffffffd);
    FUN_14005ea50(param_1,uVar6,*(longlong *)(param_1 + 0x10) + -0x20,
                  *(longlong *)(param_1 + 0x10) + -0x10);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
    local_res8 = 0;
    iVar5 = FUN_14034c150(param_2,&local_res8);
    lVar4 = local_res8;
    if (-1 < iVar5) {
        FUN_1400f0090(param_1);
    }
    if (lVar4 != 0) {
        (**(code **)(*(longlong *)(lVar4 + -0x10) + 8))(lVar4 + -0x10);
    }
    return 1;
}



void FUN_1406f78b0(undefined8 param_1)

{
    BOOL BVar1;
    undefined auStack72 [32];
    _FILETIME local_28;
    _SYSTEMTIME local_20;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
    GetSystemTimeAsFileTime(&local_28);
    local_28 = (_FILETIME)((longlong)local_28 + DAT_140c658b8);
    BVar1 = FileTimeToSystemTime(&local_28,&local_20);
    if (BVar1 == 0) {
        GetLastError();
    }
    FUN_1406f7570(param_1,&local_20);
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack72);
    return;
}



void FUN_1406f7920(longlong param_1)

{
    ulonglong uVar1;
    undefined auStack72 [32];
    _SYSTEMTIME local_28;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
    uVar1 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar1 * 8) + 400) ==
                param_1) break;
            uVar1 = (ulonglong)((int)uVar1 + 1);
        } while (uVar1 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    GetLocalTime(&local_28);
    FUN_1406f7570(param_1,&local_28);
    FUN_1407db4f0(local_18 ^ (ulonglong)auStack72);
    return;
}



undefined8 FUN_1406f79b0(longlong param_1)

{
    longlong *plVar1;
    longlong lVar2;
    double *pdVar3;
    DWORD DVar4;
    ulonglong uVar5;
    ulonglong uVar6;

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
    DVar4 = GetTickCount();
    lVar2 = *(longlong *)(uVar6 + 400);
    pdVar3 = *(double **)(lVar2 + 0x10);
    *(undefined4 *)(pdVar3 + 1) = 3;
    *pdVar3 = (double)DVar4;
    plVar1 = (longlong *)(lVar2 + 0x10);
    *plVar1 = *plVar1 + 0x10;
    return 1;
}



undefined8 FUN_1406f7a40(longlong param_1)

{
    longlong lVar1;
    int iVar2;
    undefined8 uVar3;
    undefined8 *puVar4;
    double *pdVar5;
    double local_res8;
    double local_28;
    int local_20;
    undefined4 uStack28;
    undefined4 uStack24;
    undefined4 uStack20;

    pdVar5 = (double *)&DAT_140a12138;
    if (*(double **)(param_1 + 0x18) < *(double **)(param_1 + 0x10)) {
        pdVar5 = *(double **)(param_1 + 0x18);
    }
    if (*(int *)(pdVar5 + 1) == 3) {
        LAB_1406f7aa8:
        iVar2 = (int)*pdVar5;
    }
    else {
        if (*(int *)(pdVar5 + 1) == 4) {
            iVar2 = FUN_14005ac80((longlong)*pdVar5 + 0x20,&local_res8);
            if (iVar2 != 0) {
                local_20 = 3;
                pdVar5 = &local_28;
                local_28 = local_res8;
                goto LAB_1406f7aa8;
            }
        }
        iVar2 = 0;
    }
    uVar3 = FUN_1403b59f0();
    uStack28 = 0;
    uStack24 = 0;
    uStack20 = 0;
    local_20 = iVar2;
    puVar4 = (undefined8 *)FUN_140059170(param_1,0x18);
    *puVar4 = uVar3;
    puVar4[1] = CONCAT44(uStack28,local_20);
    puVar4[2] = CONCAT44(uStack20,uStack24);
    lVar1 = *(longlong *)(param_1 + 0x20);
    local_28 = (double)FUN_140062650(param_1,"Game.Money",10);
    local_20 = 4;
    FUN_14005e8e0(param_1,lVar1 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1406f7b60(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    ulonglong uVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    undefined8 local_28;
    int local_20;
    int iStack28;
    undefined8 local_18;

    uVar5 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar5;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) break;
            uVar3 = (ulonglong)((int)uVar3 + 1);
        } while (uVar3 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    iStack28 = 0;
    if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar2 + 1))) {
        local_20 = FUN_140056d60(param_1,1);
    }
    else {
        local_20 = 1;
    }
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x10);
    if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
        (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x18))) {
        iStack28 = FUN_140056d60(param_1,2);
    }
    local_18 = 0;
    if ((local_20 == 0xf) && (iStack28 == 1)) {
        if (DAT_140c7de20 != 0) {
            uVar3 = uVar5;
            if (DAT_140c7de20 == 0) goto LAB_1406f7c51;
            do {
                lVar4 = *(longlong *)(DAT_140c7de18 + uVar3 * 8);
                if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == 3)) {
                    uVar5 = (ulonglong)*(uint *)(lVar4 + 0x1f8);
                    break;
                }
                LAB_1406f7c51:
                uVar3 = uVar3 + 1;
            } while (uVar3 < DAT_140c7de20);
        }
    }
    else {
        uVar5 = 0;
        if (local_20 - 1U < 0xe) {
            uVar5 = *(ulonglong *)(DAT_140c65898 + 0x15f0 + (longlong)local_20 * 8);
        }
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_1 + 0x50)) {
        uVar6 = *(undefined8 *)(param_1 + 0x78);
    }
    else {
        uVar6 = *(undefined8 *)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 8) + 0x18);
    }
    lVar4 = FUN_1400627d0(param_1,0x18,uVar6);
    plVar1 = *(longlong **)(param_1 + 0x10);
    *plVar1 = lVar4;
    *(undefined4 *)(plVar1 + 1) = 7;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    *(ulonglong *)(lVar4 + 0x30) = uVar5;
    *(ulonglong *)(lVar4 + 0x38) = CONCAT44(iStack28,local_20);
    *(undefined8 *)(lVar4 + 0x40) = local_18;
    lVar4 = *(longlong *)(param_1 + 0x20);
    local_28 = FUN_140062650(param_1,"Game.Money",10);
    local_20 = 4;
    FUN_14005e8e0(param_1,lVar4 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



undefined8 FUN_1406f7d60(longlong param_1)

{
    undefined8 uVar1;
    longlong lVar2;
    int iVar3;
    undefined8 *puVar4;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 uStack24;
    undefined4 uStack20;

    lVar2 = DAT_140c65898;
    iVar3 = FUN_1403b5040();
    if (iVar3 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar1 = *(undefined8 *)(lVar2 + 0x1670);
    uStack28 = 0;
    uStack24 = 0;
    uStack20 = 0;
    local_20 = 1;
    puVar4 = (undefined8 *)FUN_140059170(param_1,0x18);
    *puVar4 = uVar1;
    puVar4[1] = CONCAT44(uStack28,local_20);
    puVar4[2] = CONCAT44(uStack20,uStack24);
    lVar2 = *(longlong *)(param_1 + 0x20);
    local_28 = FUN_140062650(param_1,"Game.Money",10);
    local_20 = 4;
    FUN_14005e8e0(param_1,lVar2 + 0xa0,&local_28,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1,0xfffffffe);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1406f7e40(longlong param_1)

{
    ulonglong uVar1;
    undefined8 *puVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    undefined8 uVar6;
    longlong lVar7;
    short *psVar8;
    uint uVar9;
    undefined8 *puVar10;
    double dVar11;
    int local_res8;
    int iStackX12;
    undefined **local_48;
    int local_40;
    longlong local_38;
    undefined4 local_30;
    undefined local_28 [8];
    undefined4 local_20;
    longlong local_18;

    local_48 = &PTR_FUN_140b569f0;
    local_30 = 1;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar3 = FUN_1400578c0();
    uVar9 = 0;
    local_40 = iVar3;
    do {
        if (DAT_140c63838 == (code *)0x0) {
            if ((_DAT_140c64070 != 0) || (iVar5 = FUN_140247760(), iVar5 < 0)) break;
            uVar4 = (**(code **)(*DAT_140c64930 + 0x28))();
        }
        else {
            uVar4 = (*DAT_140c63838)(&PTR_u_UnitProperty2_140a6dee0,DAT_140c63858);
        }
        if (uVar4 <= uVar9) break;
        if (DAT_140c63848 == (code *)0x0) {
            if (_DAT_140c64070 == 0) {
                iVar5 = FUN_140247760();
                if (iVar5 < 0) {
                    lVar7 = 0;
                }
                else {
                    lVar7 = (**(code **)(*DAT_140c64930 + 0x20))(DAT_140c64930,uVar9);
                }
            }
            else {
                lVar7 = 0;
            }
        }
        else {
            lVar7 = (*DAT_140c63848)(&PTR_u_UnitProperty2_140a6dee0,uVar9,DAT_140c63858);
        }
        uVar1 = *(ulonglong *)(lVar7 + 0x10);
        if (((uVar1 != 0) && (uVar1 <= DAT_140c3fe70)) && (DAT_140c3fe68 + uVar1 != 0)) {
            if (uVar1 == 0) {
                psVar8 = (short *)0x0;
            }
            else if (DAT_140c3fe70 < uVar1) {
                psVar8 = (short *)0x0;
            }
            else {
                psVar8 = (short *)(DAT_140c3fe68 + uVar1);
            }
            if (((*psVar8 != 0) && ((*(uint *)(lVar7 + 0x24) >> 8 & 1) != 0)) &&
                ((*(uint *)(lVar7 + 0x24) & 0x60) != 0)) {
                FUN_140651400(local_28,param_1,*(undefined8 *)(DAT_140c65898 + 0x78),lVar7);
                uVar1 = *(ulonglong *)(lVar7 + 0x10);
                if (uVar1 == 0) {
                    lVar7 = 0;
                }
                else if (DAT_140c3fe70 < uVar1) {
                    lVar7 = 0;
                }
                else {
                    lVar7 = DAT_140c3fe68 + uVar1;
                }
                FUN_1400fb2a0(&local_48,lVar7,local_20);
                if (local_18 != 0) {
                    FUN_1400579e0();
                }
            }
        }
        uVar9 = uVar9 + 1;
    } while( true );
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar3 - 1U < *(uint *)(lVar7 + 0x38)) {
        puVar10 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar7 + 0x18));
    }
    else {
        dVar11 = (double)iVar3;
        if (dVar11 == 0.0) {
            puVar10 = *(undefined8 **)(lVar7 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar11 >> 0x20);
            local_res8 = SUB84(dVar11,0);
            puVar10 = (undefined8 *)
                    (*(longlong *)(lVar7 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar10 + 3) == 3) && (dVar11 == (double)puVar10[2])) goto LAB_1406f809f;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
    }
    LAB_1406f809f:
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = *puVar10;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,puVar2,iVar3);
    return 1;
}



undefined8 FUN_1406f80e0(longlong param_1)

{
    undefined8 *puVar1;
    double *pdVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;

    lVar4 = DAT_140c65898;
    if (DAT_140c65898 == -0x6fa0) {
        return 0;
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar1 + 1) = 5;
    iVar8 = 0;
    *puVar1 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar6 = *(longlong *)(lVar4 + 0x6fa8);
    lVar7 = *(longlong *)(lVar6 + 0x10);
    if (lVar7 != lVar6) {
        do {
            lVar6 = FUN_1403d90d0(DAT_140c65898,*(undefined4 *)(lVar7 + 0x20));
            if (lVar6 != 0) {
                pdVar2 = *(double **)(param_1 + 0x10);
                iVar8 = iVar8 + 1;
                *(undefined4 *)(pdVar2 + 1) = 3;
                *pdVar2 = (double)iVar8;
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_140649870(param_1,*(undefined4 *)(lVar7 + 0x20));
                lVar6 = *(longlong *)(param_1 + 0x10);
                FUN_14005ea50(param_1,&DAT_ffffffffffffffd0 + lVar6,lVar6 + -0x20,lVar6 + -0x10);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x20;
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
        } while (lVar7 != *(longlong *)(lVar4 + 0x6fa8));
    }
    return 1;
}



undefined8 FUN_1406f8230(longlong param_1)

{
    longlong *plVar1;
    undefined8 *puVar2;
    double *pdVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    uint uVar8;
    uint uVar9;
    longlong lVar10;

    lVar5 = FUN_1406622c0();
    if ((lVar5 != 0) && (lVar5 = FUN_1403d90d0(DAT_140c65898), lVar5 != 0)) {
        uVar9 = 2;
        lVar10 = 0x235;
        lVar6 = DAT_140c65898;
        do {
            uVar8 = 0;
            lVar7 = 0;
            do {
                if ((((*(longlong *)(lVar6 + 0x78) != 0) && (uVar8 < 0xc)) && ((int)uVar9 < 9)) &&
                    (plVar1 = *(longlong **)(lVar6 + (lVar10 + lVar7) * 8), plVar1 != (longlong *)0x0)) {
                    if ((*(int *)(plVar1 + 0x40) != 0) && (*(int *)(plVar1 + 0x40) != *(int *)(lVar5 + 8)))
                        break;
                    iVar4 = (**(code **)(*plVar1 + 8))(plVar1);
                    lVar6 = DAT_140c65898;
                    if ((iVar4 == 0xb) &&
                        (iVar4 = (**(code **)(*plVar1 + 0x18))(), lVar6 = DAT_140c65898, iVar4 == 2)) {
                        pdVar3 = *(double **)(param_1 + 0x10);
                        *(undefined4 *)(pdVar3 + 1) = 3;
                        *pdVar3 = (double)(uVar8 + uVar9 * 0xc);
                        goto LAB_1406f8315;
                    }
                }
                uVar8 = uVar8 + 1;
                lVar7 = lVar7 + 1;
            } while (uVar8 < 0xc);
            uVar9 = uVar9 + 1;
            lVar10 = lVar10 + 0xc;
        } while (uVar9 < 7);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    *puVar2 = 0xbff0000000000000;
    *(undefined4 *)(puVar2 + 1) = 3;
    LAB_1406f8315:
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f85c0(void)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    uVar1 = DAT_140c636a8;
    if (*(int *)(DAT_140c65898 + 0x747c) < 1) {
        if ((*(float *)(DAT_140c65898 + 0x7440) != 1.0) || (*(float *)(DAT_140c65898 + 0x7444) != 0.0))
        {
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
    return 0;
}



undefined8 FUN_1406f8680(void)

{
    undefined4 uVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    uVar1 = DAT_140c636a8;
    if (*(int *)(DAT_140c65898 + 0x747c) < 1) {
        if ((*(float *)(DAT_140c65898 + 0x7440) != 0.0) || (*(float *)(DAT_140c65898 + 0x7444) != 0.0))
        {
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
    return 0;
}



undefined8 FUN_1406f8730(void)

{
    undefined4 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    undefined local_res10 [24];

    lVar3 = DAT_140c65898;
    puVar1 = (undefined4 *)(DAT_140c65898 + 0x7478);
    *(undefined4 *)(DAT_140c65898 + 0x7470) = 0x7fffffff;
    plVar2 = (longlong *)(lVar3 + 0x7408);
    *(undefined4 *)(lVar3 + 0x7474) = *puVar1;
    *(undefined4 *)(lVar3 + 0x7460) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x7464) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x7468) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x746c) = 0x3f800000;
    *(undefined4 *)(lVar3 + 0x7400) = 1;
    FUN_1400f9c30(plVar2);
    (**(code **)*plVar2)();
    (**(code **)(*plVar2 + 8))(plVar2,local_res10);
    return 0;
}



undefined8 FUN_1406f87c0(void)

{
    undefined4 *puVar1;
    longlong lVar2;
    undefined local_res10 [24];

    lVar2 = DAT_140c65898;
    puVar1 = (undefined4 *)(DAT_140c65898 + 0x7478);
    *(undefined4 *)(DAT_140c65898 + 0x7400) = 3;
    *(undefined4 *)(lVar2 + 0x7474) = *puVar1;
    (***(code ***)(lVar2 + 0x7408))(lVar2 + 0x7408);
    (**(code **)(*(longlong *)(lVar2 + 0x7408) + 8))(lVar2 + 0x7408,local_res10);
    FUN_1400f9c30(lVar2 + 0x7408);
    return 0;
}



undefined8 FUN_1406f8880(undefined8 param_1)

{
    undefined8 uVar1;
    int local_res10 [6];

    uVar1 = FUN_140056d60(param_1,1);
    local_res10[0] = (int)uVar1;
    if (local_res10[0] == 0) {
        return uVar1;
    }
    FUN_1403d3470(param_1,local_res10);
    return 1;
}



undefined8 FUN_1406f8cf0(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    pdVar1 = *(double **)(param_1 + 0x10);
    iVar2 = FUN_1403b4d60(DAT_140c65898);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f8d40(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    pdVar1 = *(double **)(param_1 + 0x10);
    iVar2 = FUN_1403b4dd0(DAT_140c65898);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f8d90(longlong param_1)

{
    uint *puVar1;
    byte bVar2;
    longlong lVar3;
    ulonglong uVar4;
    int iVar5;
    ulonglong uVar6;
    longlong local_28;
    ulonglong local_20;

    lVar3 = DAT_140c65898;
    uVar6 = 0;
    local_20 = 0;
    local_28 = 0;
    FUN_1403d6710(DAT_140c65898 + 0xa0,&local_28);
    FUN_1403d6710(lVar3 + 0xb8,&local_28);
    FUN_1403d6710(lVar3 + 0x118,&local_28);
    FUN_1403d6710(lVar3 + 0x130,&local_28);
    uVar4 = local_20;
    lVar3 = local_28;
    bVar2 = 0;
    if (local_20 != 0) {
        do {
            iVar5 = FUN_140569f10(*(undefined8 *)(lVar3 + uVar6 * 8));
            if (iVar5 != 0) {
                bVar2 = 1;
                break;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar4);
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)bVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (lVar3 != 0) {
        (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
    }
    return 1;
}



undefined8 FUN_1406f8e80(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    ulonglong uVar3;
    int iVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong local_18;
    ulonglong local_10;

    lVar2 = DAT_140c65898;
    uVar6 = 0;
    local_10 = 0;
    local_18 = 0;
    FUN_1403d6710(DAT_140c65898 + 0xa0,&local_18);
    FUN_1403d6710(lVar2 + 0xb8,&local_18);
    FUN_1403d6710(lVar2 + 0x118,&local_18);
    FUN_1403d6710(lVar2 + 0x130,&local_18);
    uVar3 = local_10;
    lVar2 = local_18;
    uVar7 = uVar6;
    if (local_10 != 0) {
        do {
            iVar4 = FUN_140569f10(*(undefined8 *)(lVar2 + uVar6 * 8));
            if (iVar4 != 0) {
                lVar5 = FUN_1403b54a0();
                uVar7 = uVar7 + lVar5;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
    }
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(uVar7 & 0xffffffff);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return 1;
}



undefined8 FUN_1406f9320(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined4 uVar4;
    undefined8 uVar5;
    longlong lVar6;
    uint *puVar7;
    undefined8 *puVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    double dVar12;
    int local_res8;
    int iStackX12;
    longlong local_58;
    ulonglong local_50;
    undefined **local_48;
    int local_40;
    longlong local_38;
    undefined4 local_30;

    uVar10 = 0;
    local_50 = 0;
    local_58 = 0;
    FUN_14044ff10(param_1,&local_58);
    local_48 = &PTR_FUN_140b569f0;
    local_30 = 1;
    local_38 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    local_40 = FUN_1400578c0();
    uVar3 = local_50;
    lVar2 = local_58;
    lVar6 = param_1;
    if (local_50 != 0) {
        do {
            lVar6 = FUN_1404530f0(DAT_140c65910,1,*(undefined4 *)(lVar2 + uVar10 * 4));
            if (((lVar6 == 0) || ((*(int *)(lVar6 + 4) == 0 && (*(int *)(lVar6 + 8) == 0)))) &&
                ((lVar6 = FUN_14044fd50(), lVar6 != 0 &&
                                           ((((*(int *)(lVar6 + 8) != 0 && (*(int *)(lVar6 + 0xc) != 0)) &&
                                              (puVar7 = (uint *)FUN_1401fcf20(), puVar7 != (uint *)0x0)) &&
                                             ((*(byte *)(puVar7 + 1) & 2) != 0)))))) {
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
                uVar11 = (ulonglong)*puVar7;
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                *puVar9 = *puVar8;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1,puVar9,&DAT_140b415a0,uVar11 & 0xffffffff);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_14034bdd0();
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                *puVar9 = *puVar8;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f0870(param_1,puVar9,L"strName");
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                *puVar9 = *puVar8;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                puVar9 = *(undefined8 **)(param_1 + 0x10);
                puVar8 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar4);
                *puVar9 = *puVar8;
                *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar8 + 1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
                FUN_1400fb1d0(&local_48,uVar4);
                FUN_1400579e0();
            }
            uVar10 = uVar10 + 1;
            lVar6 = local_38;
        } while (uVar10 < uVar3);
    }
    lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x20) + 0xa0);
    if (local_40 - 1U < *(uint *)(lVar1 + 0x38)) {
        puVar9 = (undefined8 *)((longlong)(local_40 + -1) * 0x10 + *(longlong *)(lVar1 + 0x18));
    }
    else {
        dVar12 = (double)local_40;
        if (dVar12 == 0.0) {
            puVar9 = *(undefined8 **)(lVar1 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar12 >> 0x20);
            local_res8 = SUB84(dVar12,0);
            puVar9 = (undefined8 *)
                    (*(longlong *)(lVar1 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar9 + 3) == 3) && (dVar12 == (double)puVar9[2])) goto LAB_1406f967d;
            puVar9 = (undefined8 *)puVar9[4];
        } while (puVar9 != (undefined8 *)0x0);
        puVar9 = &DAT_140a12138;
    }
    LAB_1406f967d:
    puVar8 = *(undefined8 **)(lVar6 + 0x10);
    *puVar8 = *puVar9;
    uVar4 = *(undefined4 *)(puVar9 + 1);
    *(undefined4 *)(puVar8 + 1) = uVar4;
    *(longlong *)(lVar6 + 0x10) = *(longlong *)(lVar6 + 0x10) + 0x10;
    FUN_1400579e0(lVar6,uVar4,local_40);
    if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
    }
    return 1;
}



undefined8 FUN_1406f9b60(longlong param_1)

{
    double *pdVar1;
    uint uVar2;

    uVar2 = FUN_1406f4660();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)(ulonglong)uVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f9ba0(longlong param_1)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;

    uVar3 = 0;
    if (*(longlong *)(DAT_140c65898 + 0x78) != 0) {
        uVar3 = *(uint *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x38);
    }
    uVar2 = FUN_1406f4660();
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(uVar2 <= uVar3);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f9c40(longlong param_1)

{
    longlong lVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    undefined8 *puVar6;
    undefined8 *puVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    uVar9 = 0;
    if (*(ulonglong *)(DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar9;
        do {
            if (*(longlong *)(*(longlong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar9 = *(ulonglong *)(*(longlong *)(DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
        } while (uVar8 < *(ulonglong *)(DAT_140c63650 + 0x300));
    }
    lVar1 = *(longlong *)(uVar9 + 400);
    puVar7 = &DAT_140a12138;
    if (*(undefined8 **)(lVar1 + 0x18) < *(undefined8 **)(lVar1 + 0x10)) {
        puVar7 = *(undefined8 **)(lVar1 + 0x18);
    }
    bVar3 = false;
    bVar2 = bVar3;
    if ((*(int *)(puVar7 + 1) != 0) && ((*(int *)(puVar7 + 1) != 1 || (*(int *)puVar7 != 0)))) {
        bVar2 = true;
    }
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10);
    puVar7 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(lVar1 + 0x10)) {
        puVar7 = puVar6;
    }
    bVar4 = bVar3;
    if ((*(int *)(puVar7 + 1) != 0) && ((*(int *)(puVar7 + 1) != 1 || (*(int *)puVar7 != 0)))) {
        bVar4 = true;
    }
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x20);
    puVar7 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(lVar1 + 0x10)) {
        puVar7 = puVar6;
    }
    bVar5 = bVar3;
    if ((*(int *)(puVar7 + 1) != 0) && ((*(int *)(puVar7 + 1) != 1 || (*(int *)puVar7 != 0)))) {
        bVar5 = true;
    }
    puVar6 = (undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x30);
    puVar7 = &DAT_140a12138;
    if (puVar6 < *(undefined8 **)(lVar1 + 0x10)) {
        puVar7 = puVar6;
    }
    if ((*(int *)(puVar7 + 1) != 0) && ((*(int *)(puVar7 + 1) != 1 || (*(int *)puVar7 != 0)))) {
        bVar3 = true;
    }
    FUN_1403cc480(bVar3,!bVar2,!bVar4,!bVar5,bVar3);
    return 1;
}



undefined8 FUN_1406f9db0(longlong param_1)

{
    uint *puVar1;
    uint uVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    int iVar5;

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
    iVar5 = 0;
    uVar2 = FUN_1400f26a0(uVar3 + 0x180,1);
    if (uVar2 < 2) {
        iVar5 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x1c);
    }
    else if (uVar2 == 2) {
        iVar5 = 1;
    }
    else {
        FUN_140056570(param_1,1,"bad GuildHolomark");
    }
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar5 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406f9e90(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint uVar5;
    longlong lVar6;

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
    uVar5 = 0;
    iVar2 = FUN_1400f26a0(uVar3 + 0x180,1);
    if (iVar2 == 0) {
        lVar6 = DAT_140c65898;
        iVar2 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x1c);
        if (iVar2 == 0) goto LAB_1406f9f83;
        uVar5 = *(uint *)(lVar6 + 0x6328) >> 5;
    }
    else if (iVar2 == 1) {
        lVar6 = DAT_140c65898;
        iVar2 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0x1c);
        if (iVar2 == 0) goto LAB_1406f9f83;
        uVar5 = *(uint *)(lVar6 + 0x6328) >> 6;
    }
    else {
        if (iVar2 != 2) {
            FUN_140056570(param_1,1,"bad GuildHolomark");
            goto LAB_1406f9f83;
        }
        uVar5 = *(uint *)(DAT_140c65898 + 0x6328) >> 7;
    }
    uVar5 = ~uVar5 & 1;
    LAB_1406f9f83:
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(uVar5 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Removing unreachable block (ram,0x0001406fa891)
// WARNING: Removing unreachable block (ram,0x0001406fac11)

undefined8 FUN_1406f9fe0(longlong param_1)

{
    double *pdVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    longlong *plVar8;
    undefined8 *puVar9;
    undefined8 *puVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong lVar13;
    double dVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    int local_res8;
    int iStackX12;
    int local_res10;
    int iStackX20;
    undefined **local_88;
    int local_80;
    undefined4 uStack124;
    longlong local_78;
    undefined4 local_70;
    undefined local_68 [8];
    longlong local_60;

    lVar5 = FUN_14018f0e0(local_68,&DAT_1409f7fcc);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    puVar10 = *(undefined8 **)(param_1 + 0x18);
    if (((puVar10 < *(undefined8 **)(param_1 + 0x10)) && (puVar10 != &DAT_140a12138)) &&
        (0 < *(int *)(puVar10 + 1))) {
        uVar6 = FUN_140056bb0(param_1,1);
    }
    FUN_14018f2d0(&local_88,uVar6);
    if (local_60 != 0) {
        FUN_14018b900(local_60,0);
    }
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar10 + 1) = 5;
    *puVar10 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar3 = FUN_1400578c0(param_1);
    uVar15 = 0;
    uVar16 = 0;
    lVar2 = CONCAT44(uStack124,local_80);
    lVar5 = *(longlong *)(DAT_140c65898 + 0x6ab0);
    if (lVar5 != 0) {
        LAB_1406fa0d0:
        uVar7 = *(ulonglong *)(lVar5 + 0x70);
        uVar11 = 0;
        if (uVar7 != 0) {
            plVar8 = *(longlong **)(lVar5 + 0x68);
            do {
                iVar4 = FUN_14018e2c0(lVar2,*(undefined8 *)(*plVar8 + 0x30));
                if (iVar4 == 0) {
                    local_88 = &PTR_FUN_140b569f0;
                    local_70 = 1;
                    local_78 = param_1;
                    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar10 = *(undefined8 **)(param_1 + 0x10);
                    uVar6 = FUN_14005c1b0(param_1,0,0);
                    *(undefined4 *)(puVar10 + 1) = 5;
                    *puVar10 = uVar6;
                    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
                    iVar4 = FUN_1400578c0(param_1);
                    local_80 = iVar4;
                    FUN_1405dc440(lVar5,&local_88);
                    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
                    if (iVar3 - 1U < *(uint *)(lVar13 + 0x38)) {
                        puVar10 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
                        goto LAB_1406fa203;
                    }
                    dVar14 = (double)iVar3;
                    if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
                        puVar10 = *(undefined8 **)(lVar13 + 0x20);
                    }
                    else {
                        iStackX20 = (int)((ulonglong)dVar14 >> 0x20);
                        local_res10 = SUB84(dVar14,0);
                        puVar10 = (undefined8 *)
                                (*(longlong *)(lVar13 + 0x20) +
                                 ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                                  (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                    }
                    goto LAB_1406fa1e6;
                }
                uVar11 = uVar11 + 1;
                plVar8 = plVar8 + 1;
            } while (uVar11 < uVar7);
        }
        goto LAB_1406fa35d;
    }
    LAB_1406fa37c:
    lVar13 = -1;
    for (lVar5 = *(longlong *)(DAT_140c65898 + 0x6a90); lVar5 != 0;
         lVar5 = *(longlong *)(lVar5 + 0x110)) {
        iVar4 = FUN_14018e2c0(lVar2,lVar5 + 0xc);
        if (iVar4 == 0) {
            local_88 = &PTR_FUN_140b569f0;
            local_70 = 1;
            local_78 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar10 = *(undefined8 **)(param_1 + 0x10);
            uVar6 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar10 + 1) = 5;
            *puVar10 = uVar6;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            iVar4 = FUN_1400578c0(param_1);
            local_80 = iVar4;
            FUN_1405dab80(lVar5,&local_88);
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar3 - 1U < *(uint *)(lVar5 + 0x38)) {
                puVar10 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                goto LAB_1406fa49d;
            }
            dVar14 = (double)iVar3;
            if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
                puVar10 = *(undefined8 **)(lVar5 + 0x20);
            }
            else {
                iStackX20 = (int)((ulonglong)dVar14 >> 0x20);
                local_res10 = SUB84(dVar14,0);
                puVar10 = (undefined8 *)
                        (*(longlong *)(lVar5 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            goto LAB_1406fa480;
        }
    }
    goto LAB_1406fa5fd;
    while (puVar10 = (undefined8 *)puVar10[4], puVar10 != (undefined8 *)0x0) {
        LAB_1406fa1e6:
        if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1406fa203;
    }
    puVar10 = &DAT_140a12138;
    LAB_1406fa203:
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar13 = FUN_14018f0e0(&local_88,L"tAccountFriend");
    lVar13 = *(longlong *)(lVar13 + 8);
    if (lVar13 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar12 = -1;
        do {
            lVar12 = lVar12 + 1;
        } while (*(char *)(lVar13 + lVar12) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        uVar6 = FUN_140062650(param_1,lVar13,lVar12);
        *(undefined4 *)(puVar10 + 1) = 4;
        *puVar10 = uVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (CONCAT44(uStack124,local_80) != 0) {
        FUN_14018b900(CONCAT44(uStack124,local_80),0);
    }
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar4 - 1U < *(uint *)(lVar13 + 0x38)) {
        puVar10 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar13 + 0x18));
    }
    else {
        dVar14 = (double)iVar4;
        if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
            puVar10 = *(undefined8 **)(lVar13 + 0x20);
        }
        else {
            iStackX20 = (int)((ulonglong)dVar14 >> 0x20);
            local_res10 = SUB84(dVar14,0);
            puVar10 = (undefined8 *)
                    (*(longlong *)(lVar13 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                      (longlong)((1 << (*(byte *)(lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1406fa31d;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
    }
    LAB_1406fa31d:
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
    lVar13 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar13 + 0x10;
    FUN_14005ea50(param_1,lVar13 + -0x20,lVar13 + -0x10,lVar13);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    FUN_1400579e0(param_1);
    LAB_1406fa35d:
    lVar5 = *(longlong *)(lVar5 + 0x80);
    if (lVar5 == 0) goto LAB_1406fa37c;
    goto LAB_1406fa0d0;
    while (puVar10 = (undefined8 *)puVar10[4], puVar10 != (undefined8 *)0x0) {
        LAB_1406fa707:
        if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1406fa724;
    }
    puVar10 = &DAT_140a12138;
    LAB_1406fa724:
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar5 = FUN_14018f0e0(&local_88,L"tSuggested");
    lVar5 = *(longlong *)(lVar5 + 8);
    if (lVar5 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar12 = -1;
        do {
            lVar12 = lVar12 + 1;
        } while (*(char *)(lVar5 + lVar12) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        uVar6 = FUN_140062650(param_1,lVar5,lVar12);
        *(undefined4 *)(puVar10 + 1) = 4;
        *puVar10 = uVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (CONCAT44(uStack124,local_80) != 0) {
        FUN_14018b900(CONCAT44(uStack124,local_80),0);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar4 - 1U < *(uint *)(lVar5 + 0x38)) {
        puVar10 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
    }
    else {
        dVar14 = (double)iVar4;
        if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
            puVar10 = *(undefined8 **)(lVar5 + 0x20);
        }
        else {
            iStackX20 = (int)((ulonglong)dVar14 >> 0x20);
            local_res10 = SUB84(dVar14,0);
            puVar10 = (undefined8 *)
                    (*(longlong *)(lVar5 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                      (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1406fa83d;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
    }
    LAB_1406fa83d:
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
    lVar5 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar5 + 0x10;
    FUN_14005ea50(param_1,lVar5 + -0x20,lVar5 + -0x10,lVar5);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    if (-1 < iVar4) {
        plVar8 = (longlong *)FUN_1400580e0(param_1,0xffffd8f0);
        puVar10 = *(undefined8 **)(*plVar8 + 0x20);
        do {
            if ((*(int *)(puVar10 + 3) == 3) && ((double)CONCAT44(uVar16,uVar15) == (double)puVar10[2]))
                goto LAB_1406fa8bd;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
        LAB_1406fa8bd:
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar10;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,iVar4);
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,0);
    }
    goto LAB_1406fa90f;
    while (puVar10 = (undefined8 *)puVar10[4], puVar10 != (undefined8 *)0x0) {
        LAB_1406faa86:
        if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1406faaa3;
    }
    puVar10 = &DAT_140a12138;
    LAB_1406faaa3:
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar5 = FUN_14018f0e0(&local_88,L"tNeighbor");
    lVar5 = *(longlong *)(lVar5 + 8);
    if (lVar5 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        do {
            lVar13 = lVar13 + 1;
        } while (*(char *)(lVar5 + lVar13) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        uVar6 = FUN_140062650(param_1,lVar5,lVar13);
        *(undefined4 *)(puVar10 + 1) = 4;
        *puVar10 = uVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (CONCAT44(uStack124,local_80) != 0) {
        FUN_14018b900(CONCAT44(uStack124,local_80),0);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar4 - 1U < *(uint *)(lVar5 + 0x38)) {
        puVar10 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
    }
    else {
        dVar14 = (double)iVar4;
        if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
            puVar10 = *(undefined8 **)(lVar5 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar14 >> 0x20);
            local_res8 = SUB84(dVar14,0);
            puVar10 = (undefined8 *)
                    (*(longlong *)(lVar5 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1406fabbd;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
    }
    LAB_1406fabbd:
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
    lVar5 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar5 + 0x10;
    FUN_14005ea50(param_1,lVar5 + -0x20,lVar5 + -0x10,lVar5);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    if (-1 < iVar4) {
        plVar8 = (longlong *)FUN_1400580e0(param_1,0xffffd8f0);
        puVar10 = *(undefined8 **)(*plVar8 + 0x20);
        do {
            if ((*(int *)(puVar10 + 3) == 3) && ((double)CONCAT44(uVar16,uVar15) == (double)puVar10[2]))
                goto LAB_1406fac3d;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
        LAB_1406fac3d:
        puVar9 = *(undefined8 **)(param_1 + 0x10);
        *puVar9 = *puVar10;
        *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,iVar4);
        pdVar1 = *(double **)(param_1 + 0x10);
        *(undefined4 *)(pdVar1 + 1) = 3;
        *pdVar1 = (double)iVar4;
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
        FUN_140058b30(param_1,0xffffd8f0,0);
    }
    goto LAB_1406fa942;
    while (puVar10 = (undefined8 *)puVar10[4], puVar10 != (undefined8 *)0x0) {
        LAB_1406fa480:
        if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1406fa49d;
    }
    puVar10 = &DAT_140a12138;
    LAB_1406fa49d:
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    lVar5 = FUN_14018f0e0(&local_88,L"tFriend");
    lVar5 = *(longlong *)(lVar5 + 8);
    if (lVar5 == 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 8) = 0;
    }
    else {
        lVar12 = -1;
        do {
            lVar12 = lVar12 + 1;
        } while (*(char *)(lVar5 + lVar12) != '\0');
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
            *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar10 = *(undefined8 **)(param_1 + 0x10);
        uVar6 = FUN_140062650(param_1,lVar5,lVar12);
        *(undefined4 *)(puVar10 + 1) = 4;
        *puVar10 = uVar6;
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    if (CONCAT44(uStack124,local_80) != 0) {
        FUN_14018b900(CONCAT44(uStack124,local_80),0);
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
    if (iVar4 - 1U < *(uint *)(lVar5 + 0x38)) {
        puVar10 = (undefined8 *)((longlong)(iVar4 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
    }
    else {
        dVar14 = (double)iVar4;
        if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
            puVar10 = *(undefined8 **)(lVar5 + 0x20);
        }
        else {
            iStackX20 = (int)((ulonglong)dVar14 >> 0x20);
            local_res10 = SUB84(dVar14,0);
            puVar10 = (undefined8 *)
                    (*(longlong *)(lVar5 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                      (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1406fa5bd;
            puVar10 = (undefined8 *)puVar10[4];
        } while (puVar10 != (undefined8 *)0x0);
        puVar10 = &DAT_140a12138;
    }
    LAB_1406fa5bd:
    puVar9 = *(undefined8 **)(param_1 + 0x10);
    *puVar9 = *puVar10;
    *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
    lVar5 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar5 + 0x10;
    FUN_14005ea50(param_1,lVar5 + -0x20,lVar5 + -0x10,lVar5);
    *(longlong *)(param_1 + 0x10) = (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_1 + 0x10));
    FUN_1400579e0(param_1);
    LAB_1406fa5fd:
    for (lVar5 = *(longlong *)(DAT_140c65898 + 0x6aa8); lVar5 != 0;
         lVar5 = *(longlong *)(lVar5 + 0xd8)) {
        iVar4 = FUN_14018e2c0(lVar2,lVar5 + 4);
        if (iVar4 == 0) {
            local_88 = &PTR_FUN_140b569f0;
            local_70 = 1;
            local_78 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar10 = *(undefined8 **)(param_1 + 0x10);
            uVar6 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar10 + 1) = 5;
            *puVar10 = uVar6;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            iVar4 = FUN_1400578c0(param_1);
            local_80 = iVar4;
            FUN_1405dbaa0(lVar5,&local_88);
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar3 - 1U < *(uint *)(lVar5 + 0x38)) {
                puVar10 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                goto LAB_1406fa724;
            }
            dVar14 = (double)iVar3;
            if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
                puVar10 = *(undefined8 **)(lVar5 + 0x20);
            }
            else {
                iStackX20 = (int)((ulonglong)dVar14 >> 0x20);
                local_res10 = SUB84(dVar14,0);
                puVar10 = (undefined8 *)
                        (*(longlong *)(lVar5 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX20 + local_res10) %
                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            goto LAB_1406fa707;
        }
    }
    LAB_1406fa90f:
    for (lVar5 = *(longlong *)(DAT_140c659f0 + 0x1f0); lVar5 != 0;
         lVar5 = *(longlong *)(lVar5 + 0x100)) {
        iVar4 = FUN_14018e2c0(lVar2,lVar5 + 0xc);
        if (iVar4 == 0) {
            local_88 = &PTR_FUN_140b569f0;
            local_70 = 1;
            local_78 = param_1;
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar10 = *(undefined8 **)(param_1 + 0x10);
            uVar6 = FUN_14005c1b0(param_1,0,0);
            *(undefined4 *)(puVar10 + 1) = 5;
            *puVar10 = uVar6;
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            iVar4 = FUN_1400578c0(param_1);
            local_80 = iVar4;
            FUN_1404b4e40(lVar5,&local_88);
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar3 - 1U < *(uint *)(lVar5 + 0x38)) {
                puVar10 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
                goto LAB_1406faaa3;
            }
            dVar14 = (double)iVar3;
            if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
                puVar10 = *(undefined8 **)(lVar5 + 0x20);
            }
            else {
                iStackX12 = (int)((ulonglong)dVar14 >> 0x20);
                local_res8 = SUB84(dVar14,0);
                puVar10 = (undefined8 *)
                        (*(longlong *)(lVar5 + 0x20) +
                         ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                          (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            goto LAB_1406faa86;
        }
    }
    LAB_1406fa942:
    lVar5 = DAT_140c65898;
    if (*(longlong *)(DAT_140c65898 + 0x6c50) != 0) {
        uVar7 = FUN_140605380(DAT_140c65898 + 0x6c10,lVar2);
        if ((*(longlong *)(lVar5 + 0x6c50) != 0) &&
            (uVar7 < *(ulonglong *)(*(longlong *)(lVar5 + 0x6c50) + 0x60))) {
            lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0xa0);
            if (iVar3 - 1U < *(uint *)(lVar5 + 0x38)) {
                puVar10 = (undefined8 *)((longlong)(iVar3 + -1) * 0x10 + *(longlong *)(lVar5 + 0x18));
            }
            else {
                dVar14 = (double)iVar3;
                if (dVar14 == (double)CONCAT44(uVar16,uVar15)) {
                    puVar10 = *(undefined8 **)(lVar5 + 0x20);
                }
                else {
                    iStackX12 = (int)((ulonglong)dVar14 >> 0x20);
                    local_res8 = SUB84(dVar14,0);
                    puVar10 = (undefined8 *)
                            (*(longlong *)(lVar5 + 0x20) +
                             ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                              (longlong)((1 << (*(byte *)(lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *)(puVar10 + 3) == 3) && (dVar14 == (double)puVar10[2])) goto LAB_1406facfd;
                    puVar10 = (undefined8 *)puVar10[4];
                } while (puVar10 != (undefined8 *)0x0);
                puVar10 = &DAT_140a12138;
            }
            LAB_1406facfd:
            puVar9 = *(undefined8 **)(param_1 + 0x10);
            *puVar9 = *puVar10;
            *(undefined4 *)(puVar9 + 1) = *(undefined4 *)(puVar10 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
            FUN_1400f06f0(param_1,puVar10,L"nPartyIndex",(int)uVar7 + 1);
            *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
        }
    }
    puVar9 = (undefined8 *)FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),iVar3);
    puVar10 = *(undefined8 **)(param_1 + 0x10);
    *puVar10 = *puVar9;
    uVar15 = *(undefined4 *)(puVar9 + 1);
    *(undefined4 *)(puVar10 + 1) = uVar15;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1,uVar15,iVar3);
    if (lVar2 != 0) {
        FUN_14018b900(lVar2,0);
    }
    return 1;
}



undefined8 FUN_1406fad90(longlong param_1)

{
    double *pdVar1;
    longlong *plVar2;
    float fVar3;
    undefined local_res8 [32];

    plVar2 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar2 = *(longlong **)(param_1 + 0x18);
    }
    if ((*(int *)(plVar2 + 1) != 3) && (*(int *)(plVar2 + 1) == 4)) {
        FUN_14005ac80(*plVar2 + 0x20,local_res8);
    }
    fVar3 = (float)FUN_1403c0340();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)fVar3;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406fae20(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong *plVar3;
    undefined local_res8 [8];

    plVar3 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar3 = *(longlong **)(param_1 + 0x18);
    }
    if ((*(int *)(plVar3 + 1) != 3) && (*(int *)(plVar3 + 1) == 4)) {
        FUN_14005ac80(*plVar3 + 0x20,local_res8);
    }
    iVar2 = FUN_1403c92e0();
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406faec0(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong *plVar3;
    undefined local_res8 [8];

    plVar3 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar3 = *(longlong **)(param_1 + 0x18);
    }
    if ((*(int *)(plVar3 + 1) != 3) && (*(int *)(plVar3 + 1) == 4)) {
        FUN_14005ac80(*plVar3 + 0x20,local_res8);
    }
    iVar2 = FUN_1403c93a0();
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406faf60(longlong param_1)

{
    uint *puVar1;
    int iVar2;
    longlong *plVar3;
    longlong *plVar4;
    undefined local_res8 [8];

    plVar4 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar4 = *(longlong **)(param_1 + 0x18);
    }
    if ((*(int *)(plVar4 + 1) != 3) && (*(int *)(plVar4 + 1) == 4)) {
        FUN_14005ac80(*plVar4 + 0x20,local_res8);
    }
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    plVar4 = &DAT_140a12138;
    if (plVar3 < *(longlong **)(param_1 + 0x10)) {
        plVar4 = plVar3;
    }
    if ((*(int *)(plVar4 + 1) != 3) && (*(int *)(plVar4 + 1) == 4)) {
        FUN_14005ac80(*plVar4 + 0x20,local_res8);
    }
    iVar2 = FUN_1403c9450();
    puVar1 = *(uint **)(param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint)(iVar2 != 0);
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406fb070(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    iVar2 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined8 FUN_1406fb0f0(longlong param_1)

{
    double *pdVar1;
    int iVar2;

    iVar2 = FUN_1403c9210();
    pdVar1 = *(double **)(param_1 + 0x10);
    *(undefined4 *)(pdVar1 + 1) = 3;
    *pdVar1 = (double)iVar2;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    return 1;
}



undefined4 FUN_1406fb130(longlong param_1)

{
    longlong lVar1;
    undefined8 *puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 *puVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 local_res8;
    undefined4 local_resc;
    undefined **local_38;
    undefined4 uStack48;
    undefined4 uStack44;
    longlong local_28;
    undefined4 local_20;

    uVar3 = (**(code **)(*(longlong *)(DAT_140c65898 + 0x48) + 8))(DAT_140c65898 + 0x48);
    lVar1 = *(longlong *)(DAT_140c65898 + 0x6490);
    if (lVar1 == 0) {
        uVar8 = 0;
    }
    else {
        uVar8 = *(undefined4 *)(lVar1 + 0x17e8);
    }
    lVar6 = 0;
    uVar9 = 1;
    if (lVar1 != 0) {
        puVar2 = *(undefined8 **)(param_1 + 0x18);
        local_38 = *(undefined ***)(lVar1 + 0x11e0);
        uStack48 = *(undefined4 *)(lVar1 + 0x11e8);
        uStack44 = *(undefined4 *)(lVar1 + 0x11ec);
        if (((puVar2 < *(undefined8 **)(param_1 + 0x10)) && (puVar2 != &DAT_140a12138)) &&
            (0 < *(int *)(puVar2 + 1))) {
            FUN_140056d60(param_1,1);
        }
        if ((DAT_140c658f8 != 0) && (uVar5 = FUN_140448420(), DAT_140c658f8 != 0)) {
            local_res8 = DAT_140c77760;
            local_resc = DAT_140c77764;
            lVar6 = FUN_140448be0(&local_res8,uVar3,uVar8,&local_38,uVar5,1,&local_res8);
        }
    }
    local_38 = &PTR_FUN_140b569f0;
    local_20 = 1;
    local_28 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    uStack48 = uVar3;
    if ((lVar6 == 0) || (iVar4 = FUN_14052ed60(lVar6,&local_38), iVar4 < 0)) {
        uVar9 = 0;
    }
    else {
        puVar7 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar3);
        puVar2 = *(undefined8 **)(param_1 + 0x10);
        *puVar2 = *puVar7;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar7 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    FUN_1400579e0(param_1);
    return uVar9;
}



undefined8 FUN_1406fb2e0(longlong param_1)

{
    int iVar1;
    undefined4 uVar2;
    longlong *plVar3;
    undefined8 *puVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong *plVar7;
    undefined8 *puVar8;
    undefined8 uVar9;
    undefined4 local_res8;
    undefined4 uStackX12;
    undefined8 local_68;
    undefined4 local_60;
    undefined **local_58;
    undefined4 local_50;
    longlong local_48;
    undefined4 local_40;

    plVar7 = &DAT_140a12138;
    if (*(longlong **)(param_1 + 0x18) < *(longlong **)(param_1 + 0x10)) {
        plVar7 = *(longlong **)(param_1 + 0x18);
    }
    if ((*(int *)(plVar7 + 1) != 3) && (*(int *)(plVar7 + 1) == 4)) {
        FUN_14005ac80(*plVar7 + 0x20,&local_res8);
    }
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
    plVar7 = &DAT_140a12138;
    if (plVar3 < *(longlong **)(param_1 + 0x10)) {
        plVar7 = plVar3;
    }
    if ((*(int *)(plVar7 + 1) != 3) && (*(int *)(plVar7 + 1) == 4)) {
        FUN_14005ac80(*plVar7 + 0x20,&local_res8);
    }
    uVar9 = 1;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    puVar8 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
        puVar8 = puVar4;
    }
    local_68 = FUN_140062650(param_1,&DAT_1409f82cc,1);
    local_60 = 4;
    FUN_14005e8e0(param_1,puVar8,&local_68,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
    if ((iVar1 == 3) ||
        ((iVar1 == 4 &&
          (iVar1 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,&local_res8
          ), iVar1 != 0)))) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
        if ((iVar1 != 3) &&
            ((iVar1 == 4 &&
              (iVar1 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,
                                     &local_res8), iVar1 != 0)))) {
            local_68 = CONCAT44(uStackX12,local_res8);
            local_60 = 3;
        }
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    puVar8 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
        puVar8 = puVar4;
    }
    local_68 = FUN_140062650(param_1,&DAT_1409f8264,1);
    local_60 = 4;
    FUN_14005e8e0(param_1,puVar8,&local_68,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
    if ((iVar1 == 3) ||
        ((iVar1 == 4 &&
          (iVar1 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,&local_res8
          ), iVar1 != 0)))) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
        if ((iVar1 != 3) &&
            ((iVar1 == 4 &&
              (iVar1 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,
                                     &local_res8), iVar1 != 0)))) {
            local_68 = CONCAT44(uStackX12,local_res8);
            local_60 = 3;
        }
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20);
    puVar8 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **)(param_1 + 0x10)) {
        puVar8 = puVar4;
    }
    local_68 = FUN_140062650(param_1,&DAT_1409f81f4,1);
    local_60 = 4;
    FUN_14005e8e0(param_1,puVar8,&local_68,*(undefined8 *)(param_1 + 0x10));
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
    if ((iVar1 == 3) ||
        ((iVar1 == 4 &&
          (iVar1 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,&local_res8
          ), iVar1 != 0)))) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + -8);
        if ((iVar1 != 3) &&
            ((iVar1 == 4 &&
              (iVar1 = FUN_14005ac80(*(longlong *)(*(longlong *)(param_1 + 0x10) + -0x10) + 0x20,
                                     &local_res8), iVar1 != 0)))) {
            local_50 = 3;
        }
    }
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + -0x10;
    if (DAT_140c658f8 == 0) {
        lVar5 = 0;
    }
    else {
        local_res8 = DAT_140c77760;
        uStackX12 = DAT_140c77764;
        lVar5 = FUN_140448be0();
    }
    local_40 = 1;
    local_58 = &PTR_FUN_140b569f0;
    local_48 = param_1;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **)(param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1,0,0);
    *(undefined4 *)(puVar8 + 1) = 5;
    *puVar8 = uVar6;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400578c0(param_1);
    local_50 = uVar2;
    if ((lVar5 == 0) || (iVar1 = FUN_14052ed60(lVar5,&local_58), iVar1 < 0)) {
        uVar9 = 0;
    }
    else {
        puVar4 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xa0),uVar2);
        puVar8 = *(undefined8 **)(param_1 + 0x10);
        *puVar8 = *puVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)(puVar4 + 1);
        *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x10;
    }
    FUN_1400579e0(param_1);
    return uVar9;
}
