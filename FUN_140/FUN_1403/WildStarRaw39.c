//
// Created by flop on 04.04.22.
//
#include "../../include.h"
ulonglong FUN_1403afb10(longlong *param_1,longlong param_2,longlong param_3,ulonglong param_4,
                        longlong param_5,longlong param_6,undefined8 param_7,uint **param_8,
                        undefined8 param_9,int param_10)

{
    undefined4 uVar1;
    bool bVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    int iVar7;
    longlong lVar8;
    longlong *plVar9;
    ulonglong uVar10;
    uint *puVar11;
    uint uVar12;
    uint uVar13;
    uint uVar14;
    uint uVar15;
    longlong *plVar16;
    uint uVar17;
    bool bVar18;
    undefined8 local_res20;
    uint local_50 [4];

    plVar16 = (longlong *)0x0;
    uVar15 = 0;
    if ((param_8 == (uint **)0x0) || (uVar17 = uVar15, *(int *)((longlong)param_8 + 0x14) == 0)) {
        uVar17 = 1;
    }
    bVar2 = false;
    local_res20 = param_4;
    param_8._0_4_ = uVar17;
    lVar8 = FUN_140561c30(DAT_140c65b70,*(undefined4 *)(param_4 + 0x1600));
    iVar7 = param_10;
    uVar14 = uVar15;
    if (((lVar8 == 0) &&
         (((*(ulonglong *)(DAT_140c65898 + 0x78) != param_4 || (lVar8 = FUN_14039df50(), lVar8 == 0))
           || (lVar8 = FUN_1404695e0(lVar8), lVar8 == 0)))) || (*(int *)(param_2 + 0x14) == 0)) {
        LAB_1403afc79:
        if (param_8 != (uint **)0x0) {
            uVar14 = *(uint *)((longlong)param_8 + 0x1c);
        }
    }
    else {
        plVar9 = (longlong *)FUN_140561c30(DAT_140c65b70,*(undefined4 *)(param_4 + 0x1600));
        if (((plVar9 == (longlong *)0x0) && (*(ulonglong *)(DAT_140c65898 + 0x78) == param_4)) &&
            (lVar8 = FUN_14039df50(), plVar9 = plVar16, lVar8 != 0)) {
            plVar9 = (longlong *)FUN_1404695e0(lVar8);
        }
        if ((((*(byte *)(*(longlong *)(plVar9[0x27] + 0x70) + 0x108) & 0x20) != 0) ||
             (uVar13 = *(uint *)(*(longlong *)(param_3 + 0x70) + 0x108), (uVar13 & 8) != 0)) ||
            ((uVar13 & 4) != 0)) goto LAB_1403afc79;
        lVar8 = FUN_1404695e0(param_4);
        uVar13 = (*(int *)(lVar8 + 0x194) + *(int *)(lVar8 + 0x50)) - DAT_140c636a8;
        if ((int)uVar13 < 0) {
            uVar13 = uVar15;
        }
        FUN_1404695e0(param_4);
        if (iVar7 == 0) {
            LAB_1403afc83:
            if (param_8 != (uint **)0x0) {
                local_50[0] = 0xd;
                *(undefined4 *)(param_8 + 2) = 0xd;
                *(undefined4 *)(param_8 + 3) = 1;
                plVar9 = plVar16;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    do {
                        if (*puVar11 == 0xd) goto LAB_1403afcd1;
                        if (0xd < (int)*puVar11) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8,plVar9,local_50);
            }
            LAB_1403afcd1:
            if (uVar17 != 0) {
                return 0xd;
            }
            goto LAB_1403afc79;
        }
        uVar3 = (**(code **)(*param_1 + 0x78))();
        uVar12 = uVar15;
        if (uVar13 != 0) {
            uVar12 = uVar13;
        }
        if (uVar3 < uVar12) goto LAB_1403afc83;
        bVar2 = true;
        if (param_8 != (uint **)0x0) {
            *(undefined4 *)(param_8 + 2) = 0x13d;
            goto LAB_1403afc79;
        }
    }
    uVar1 = *(undefined4 *)(param_2 + 0x48);
    lVar8 = *(longlong *)(param_3 + 0x70);
    if (*(int *)(lVar8 + 0x130) == 0) goto LAB_1403aff92;
    uVar17 = *(uint *)(lVar8 + 0x138);
    uVar14 = *(uint *)(lVar8 + 0x134) & ~uVar14;
    if ((uVar14 & 1) != 0) {
        if ((*(int *)(param_4 + 0x250) != 0) || (*(int *)(param_4 + 0x80) == 0x17)) {
            uVar15 = 1;
        }
        if ((uVar17 & 1) == 0) {
            if (uVar15 == 0) goto LAB_1403afd51;
            uVar15 = 0x39;
        }
        else {
            if (uVar15 != 0) goto LAB_1403afd51;
            uVar15 = 0x3a;
        }
        goto LAB_1403affb4;
    }
    LAB_1403afd51:
    if ((uVar14 & 2) != 0) {
        if ((uVar17 & 2) == 0) {
            if (*(int *)(param_4 + 0x2ac) == 0) goto LAB_1403afd83;
            uVar15 = 0x3b;
        }
        else {
            if (*(int *)(param_4 + 0x2ac) != 0) goto LAB_1403afd83;
            uVar15 = 0x3c;
        }
        goto LAB_1403affb4;
    }
    LAB_1403afd83:
    if ((uVar14 & 8) != 0) {
        lVar8 = FUN_1405b3f90();
        if ((uVar17 & 8) == 0) {
            if (*(int *)(lVar8 + 0x1320) == 2) goto LAB_1403afdbd;
            uVar15 = 0x3f;
        }
        else {
            if (*(int *)(lVar8 + 0x1320) != 2) goto LAB_1403afdbd;
            uVar15 = 0x40;
        }
        goto LAB_1403affb4;
    }
    LAB_1403afdbd:
    if ((uVar14 & 0x20) != 0) {
        bVar18 = *(int *)(local_res20 + 0xc4) == 0;
        iVar4 = FUN_14047bd80();
        param_4 = local_res20;
        if ((uVar17 & 0x20) == 0) {
            if ((!bVar18) && (iVar4 == 0)) goto LAB_1403afe00;
            uVar15 = 0x43;
        }
        else {
            if ((bVar18) || (iVar4 != 0)) goto LAB_1403afe00;
            uVar15 = bVar18 + 0x44;
        }
        goto LAB_1403affb4;
    }
    LAB_1403afe00:
    if ((char)uVar14 < '\0') {
        iVar4 = FUN_14047bdc0();
        if ((char)uVar17 < '\0') {
            if (iVar4 != 0) goto LAB_1403afe3a;
            uVar15 = 0x48;
        }
        else {
            if (iVar4 == 0) goto LAB_1403afe3a;
            uVar15 = 0x47;
        }
        goto LAB_1403affb4;
    }
    LAB_1403afe3a:
    if ((uVar14 & 0x40) != 0) {
        iVar4 = FUN_14047be00();
        if ((uVar17 & 0x40) == 0) {
            if (iVar4 == 0) goto LAB_1403afe68;
            uVar15 = 0x45;
        }
        else {
            if (iVar4 != 0) goto LAB_1403afe68;
            uVar15 = 0x46;
        }
        goto LAB_1403affb4;
    }
    LAB_1403afe68:
    if ((uVar14 >> 8 & 1) != 0) {
        bVar18 = *(int *)(param_4 + 0x1088) == 1;
        if ((uVar17 >> 8 & 1) == 0) {
            if (!bVar18) goto LAB_1403afe9e;
            uVar15 = 0x117;
        }
        else {
            if (bVar18) goto LAB_1403afe9e;
            uVar15 = 0x118;
        }
        goto LAB_1403affb4;
    }
    LAB_1403afe9e:
    iVar4 = 0;
    if ((uVar14 >> 9 & 1) != 0) {
        if (((*(uint *)(param_4 + 0x1070) & 0x40) != 0) ||
            (iVar5 = iVar4, (*(uint *)(param_4 + 0x1070) >> 0xb & 1) != 0)) {
            iVar5 = 1;
        }
        if ((uVar17 >> 9 & 1) == 0) {
            if (iVar5 == 0) goto LAB_1403afedf;
            uVar15 = 0xab;
        }
        else {
            if (iVar5 != 0) goto LAB_1403afedf;
            uVar15 = 0xaa;
        }
        goto LAB_1403affb4;
    }
    LAB_1403afedf:
    if ((uVar14 & 0x10) != 0) {
        bVar18 = 1 < *(int *)(param_4 + 0x54);
        if ((uVar17 & 0x10) == 0) {
            if (!bVar18) goto LAB_1403aff0f;
            uVar15 = 0x41;
        }
        else {
            if (bVar18) goto LAB_1403aff0f;
            uVar15 = bVar18 + 0x42;
        }
        goto LAB_1403affb4;
    }
    LAB_1403aff0f:
    if ((uVar14 & 4) != 0) {
        uVar15 = *(uint *)(param_4 + 0x1070) & 4;
        if ((uVar17 & 4) == 0) {
            if (uVar15 == 0) goto LAB_1403aff3d;
            uVar15 = 0x136;
        }
        else {
            if (uVar15 != 0) goto LAB_1403aff3d;
            uVar15 = 0x135;
        }
        goto LAB_1403affb4;
    }
    LAB_1403aff3d:
    if ((uVar14 >> 10 & 1) == 0) {
        LAB_1403aff92:
        uVar15 = FUN_1403b2c40(param_3,param_4,1,uVar1);
        if ((uVar15 != 0) && (uVar15 != 0x13d)) goto LAB_1403affb4;
    }
    else {
        if ((*(int *)(param_4 + 0xd50) != 0) && (*(ulonglong *)(DAT_140c65898 + 0x6490) == param_4)) {
            uVar6 = FUN_1403982a0(DAT_140c65898,1);
            iVar4 = FUN_140469990(param_4,uVar6);
        }
        if ((uVar17 >> 10 & 1) == 0) {
            if (iVar4 == 0) goto LAB_1403aff92;
            uVar15 = 0x13a;
        }
        else {
            if (iVar4 != 0) goto LAB_1403aff92;
            uVar15 = 0x139;
        }
        LAB_1403affb4:
        if (param_8 != (uint **)0x0) {
            *(uint *)(param_8 + 2) = uVar15;
            *(undefined4 *)(param_8 + 3) = 1;
            plVar9 = plVar16;
            local_50[0] = uVar15;
            if ((longlong *)param_8[1] != (longlong *)0x0) {
                puVar11 = *param_8;
                do {
                    uVar17 = *puVar11;
                    if (uVar17 == uVar15) goto LAB_1403afff5;
                    if (uVar17 != uVar15 && (int)uVar15 <= (int)uVar17) break;
                    plVar9 = (longlong *)((longlong)plVar9 + 1);
                    puVar11 = puVar11 + 1;
                } while (plVar9 < param_8[1]);
            }
            FUN_1401c2e70(param_8,plVar9,local_50);
        }
        LAB_1403afff5:
        if ((uint)param_8 != 0) goto LAB_1403b0001;
    }
    uVar15 = (uint)param_8;
    uVar10 = FUN_1403b14c0(param_1,param_3,param_4,param_8,iVar7);
    iVar7 = (int)uVar10;
    if (iVar7 == 0) {
        LAB_1403b003e:
        if (iVar7 == 0x13d) goto LAB_1403b0045;
    }
    else {
        if (iVar7 != 0x13d) {
            if (uVar15 != 0) {
                return uVar10;
            }
            goto LAB_1403b003e;
        }
        LAB_1403b0045:
        bVar2 = true;
    }
    uVar17 = *(uint *)(*(longlong *)(param_3 + 0x70) + 0x14c);
    if (uVar17 != 0) {
        if ((((uVar17 >> 0x18 & 1) != 0) && (*(longlong *)(param_4 + 0x458) != 0)) &&
            (*(int *)(*(longlong *)(param_3 + 0x70) + 0xf4) != 3)) {
            if (param_8 != (uint **)0x0) {
                local_50[0] = 0x10c;
                *(undefined4 *)(param_8 + 2) = 0x10c;
                *(undefined4 *)(param_8 + 3) = 1;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    plVar9 = plVar16;
                    do {
                        if (*puVar11 == 0x10c) goto LAB_1403b00ca;
                        if (0x10c < (int)*puVar11) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70();
            }
            LAB_1403b00ca:
            if (uVar15 != 0) {
                return 0x10c;
            }
        }
        if ((((uVar17 & 8) != 0) && (*(longlong *)(param_4 + 0x308) != 0)) &&
            (*(int *)(*(longlong *)(param_3 + 0x70) + 0xf4) - 1U < 2)) {
            if (param_8 != (uint **)0x0) {
                local_50[0] = 0x27;
                *(undefined4 *)(param_8 + 2) = 0x27;
                *(undefined4 *)(param_8 + 3) = 1;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    plVar9 = plVar16;
                    do {
                        if (*puVar11 == 0x27) goto LAB_1403b014b;
                        if (0x27 < (int)*puVar11) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8);
            }
            LAB_1403b014b:
            if (uVar15 != 0) {
                return 0x27;
            }
        }
        if ((((uVar17 & 0x10) != 0) && (*(longlong *)(param_4 + 0x318) != 0)) &&
            (*(int *)(*(longlong *)(param_3 + 0x70) + 0xf4) == 0)) {
            if (param_8 != (uint **)0x0) {
                local_50[0] = 0x28;
                *(undefined4 *)(param_8 + 2) = 0x28;
                *(undefined4 *)(param_8 + 3) = 1;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    plVar9 = plVar16;
                    do {
                        if (*puVar11 == 0x28) goto LAB_1403b01c5;
                        if (0x28 < (int)*puVar11) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8);
            }
            LAB_1403b01c5:
            if (uVar15 != 0) {
                return 0x28;
            }
        }
    }
    if ((*(int *)(*(longlong *)(param_3 + 0x70) + 0x164) != 0) &&
        (iVar7 = (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(param_4 + 8)), iVar7 == 0)) {
        if (param_8 != (uint **)0x0) {
            local_50[0] = 0x8c;
            *(undefined4 *)(param_8 + 2) = 0x8c;
            *(undefined4 *)(param_8 + 3) = 1;
            plVar9 = plVar16;
            if ((longlong *)param_8[1] != (longlong *)0x0) {
                puVar11 = *param_8;
                do {
                    if (*puVar11 == 0x8c) goto LAB_1403b0244;
                    if (0x8c < (int)*puVar11) break;
                    plVar9 = (longlong *)((longlong)plVar9 + 1);
                    puVar11 = puVar11 + 1;
                } while (plVar9 < param_8[1]);
            }
            FUN_1401c2e70(param_8,plVar9,local_50);
        }
        LAB_1403b0244:
        if ((uint)param_8 != 0) {
            return 0x8c;
        }
    }
    uVar17 = (uint)param_8;
    if (param_5 != 0) {
        uVar15 = FUN_1403b4e40(param_3,*(undefined8 *)(param_5 + 0x7178),*(undefined4 *)(param_4 + 8));
        if ((uVar15 != 0) && (uVar15 != 0x13d)) {
            if (param_8 != (uint **)0x0) {
                *(uint *)(param_8 + 2) = uVar15;
                *(undefined4 *)(param_8 + 3) = 1;
                plVar9 = plVar16;
                param_8._0_4_ = uVar15;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    do {
                        uVar14 = *puVar11;
                        if (uVar14 == uVar15) goto LAB_1403b02d9;
                        if (uVar14 != uVar15 && (int)uVar15 <= (int)uVar14) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8,plVar9,&param_8);
            }
            LAB_1403b02d9:
            if (uVar17 != 0) goto LAB_1403b0001;
        }
        if ((((*(uint *)(*(longlong *)(param_3 + 0x70) + 0x108) & 0x200000) != 0) &&
             ((((*(int *)(DAT_140c65b98 + 0x10c) == 0 || (*(int *)(DAT_140c65b98 + 0x10c) - 3U < 5)) &&
                (*(int *)(DAT_140c65b98 + 0x108) != 0)) &&
               ((lVar8 = FUN_140215240(), lVar8 != 0 && (lVar8 = FUN_140214e00(), lVar8 != 0)))))) &&
            ((~(*(uint *)(lVar8 + 0x10) >> 1) & 1) == 0)) {
            if (param_8 != (uint **)0x0) {
                param_8._0_4_ = 0xfc;
                *(undefined4 *)(param_8 + 2) = 0xfc;
                *(undefined4 *)(param_8 + 3) = 1;
                plVar9 = plVar16;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    do {
                        if (*puVar11 == 0xfc) goto LAB_1403b0396;
                        if (0xfc < (int)*puVar11) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8,plVar9,&param_8);
            }
            LAB_1403b0396:
            if (uVar17 != 0) {
                return 0xfc;
            }
        }
        if (((*(uint *)(*(longlong *)(param_3 + 0x70) + 0x108) & 0x200) != 0) &&
            (iVar7 = FUN_1403a1140(), iVar7 == 0)) {
            if (param_8 != (uint **)0x0) {
                param_8._0_4_ = 0xfc;
                *(undefined4 *)(param_8 + 2) = 0xfc;
                *(undefined4 *)(param_8 + 3) = 1;
                plVar9 = plVar16;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    do {
                        if (*puVar11 == 0xfc) goto LAB_1403b0407;
                        if (0xfc < (int)*puVar11) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8,plVar9,&param_8);
            }
            LAB_1403b0407:
            if (uVar17 != 0) {
                return 0xfc;
            }
        }
    }
    uVar10 = local_res20;
    uVar15 = FUN_1403b1780(param_3,local_res20,param_7,param_9);
    if ((uVar15 != 0) && (uVar15 != 0x13d)) {
        if (param_8 != (uint **)0x0) {
            local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar15;
            *(uint *)(param_8 + 2) = uVar15;
            *(undefined4 *)(param_8 + 3) = 1;
            plVar9 = plVar16;
            if ((longlong *)param_8[1] != (longlong *)0x0) {
                puVar11 = *param_8;
                do {
                    uVar14 = *puVar11;
                    if (uVar14 == uVar15) goto LAB_1403b0491;
                    if (uVar14 != uVar15 && (int)uVar15 <= (int)uVar14) break;
                    plVar9 = (longlong *)((longlong)plVar9 + 1);
                    puVar11 = puVar11 + 1;
                } while (plVar9 < param_8[1]);
            }
            FUN_1401c2e70(param_8,plVar9,&local_res20);
        }
        LAB_1403b0491:
        if (uVar17 != 0) goto LAB_1403b0001;
    }
    if ((*(ulonglong *)(DAT_140c65898 + 0x78) == uVar10) &&
        (plVar9 = *(longlong **)(DAT_140c65898 + 0x6d90), plVar9 != (longlong *)0x0)) {
        uVar15 = (**(code **)(*plVar9 + 0x88))(plVar9,param_3,param_7,*(undefined4 *)(param_2 + 0x18));
        if ((uVar15 != 0) && (uVar15 != 0x13d)) {
            if (param_8 != (uint **)0x0) {
                local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar15;
                *(uint *)(param_8 + 2) = uVar15;
                *(undefined4 *)(param_8 + 3) = 1;
                plVar9 = plVar16;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    do {
                        uVar14 = *puVar11;
                        if (uVar14 == uVar15) goto LAB_1403b0521;
                        if (uVar14 != uVar15 && (int)uVar15 <= (int)uVar14) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8,plVar9,&local_res20);
            }
            LAB_1403b0521:
            if (uVar17 != 0) goto LAB_1403b0001;
        }
        plVar9 = plVar16;
        if (*(ulonglong *)(DAT_140c65898 + 0x78) == uVar10) {
            plVar9 = *(longlong **)(DAT_140c65898 + 0x6d90);
        }
        uVar15 = (**(code **)(*plVar9 + 0xb8))(plVar9,param_3);
        if ((uVar15 != 0) && (uVar15 != 0x13d)) {
            if (param_8 != (uint **)0x0) {
                local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar15;
                *(uint *)(param_8 + 2) = uVar15;
                *(undefined4 *)(param_8 + 3) = 1;
                plVar9 = plVar16;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    do {
                        uVar14 = *puVar11;
                        if (uVar14 == uVar15) goto LAB_1403b05a0;
                        if (uVar14 != uVar15 && (int)uVar15 <= (int)uVar14) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8,plVar9,&local_res20);
            }
            LAB_1403b05a0:
            if (uVar17 != 0) goto LAB_1403b0001;
        }
        plVar9 = plVar16;
        if (*(ulonglong *)(DAT_140c65898 + 0x78) == uVar10) {
            plVar9 = *(longlong **)(DAT_140c65898 + 0x6d90);
        }
        uVar15 = (**(code **)(*plVar9 + 0x98))
                (plVar9,param_3,uVar10,param_7,*(undefined4 *)(param_2 + 0x18));
        if ((uVar15 != 0) && (uVar15 != 0x13d)) {
            if (param_8 != (uint **)0x0) {
                local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar15;
                *(uint *)(param_8 + 2) = uVar15;
                *(undefined4 *)(param_8 + 3) = 1;
                plVar9 = plVar16;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    do {
                        uVar14 = *puVar11;
                        if (uVar14 == uVar15) goto LAB_1403b0640;
                        if (uVar14 != uVar15 && (int)uVar15 <= (int)uVar14) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8,plVar9,&local_res20);
            }
            LAB_1403b0640:
            if (uVar17 != 0) {
                return (ulonglong)uVar15;
            }
        }
    }
    else {
        uVar15 = FUN_1403b1de0(param_3,uVar10);
        if ((uVar15 != 0) && (uVar15 != 0x13d)) {
            if (param_8 != (uint **)0x0) {
                local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar15;
                *(uint *)(param_8 + 2) = uVar15;
                *(undefined4 *)(param_8 + 3) = 1;
                plVar9 = plVar16;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    do {
                        uVar14 = *puVar11;
                        if (uVar14 == uVar15) goto LAB_1403b06b0;
                        if (uVar14 != uVar15 && (int)uVar15 <= (int)uVar14) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8,plVar9,&local_res20);
            }
            LAB_1403b06b0:
            if (uVar17 != 0) goto LAB_1403b0001;
        }
    }
    if (param_6 != 0) {
        lVar8 = *(longlong *)(param_6 + 0x48);
        if (lVar8 == 0) {
            lVar8 = *(longlong *)(param_6 + 0x40) + 8;
        }
        if (*(uint *)(uVar10 + 0x38) <= *(uint *)(lVar8 + 8) &&
            *(uint *)(lVar8 + 8) != *(uint *)(uVar10 + 0x38)) {
            if (param_8 != (uint **)0x0) {
                local_res20 = CONCAT44(local_res20._4_4_,0x1a);
                *(undefined4 *)(param_8 + 2) = 0x1a;
                *(undefined4 *)(param_8 + 3) = 1;
                plVar9 = plVar16;
                if ((longlong *)param_8[1] != (longlong *)0x0) {
                    puVar11 = *param_8;
                    do {
                        if (*puVar11 == 0x1a) goto LAB_1403b0726;
                        if (0x1a < (int)*puVar11) break;
                        plVar9 = (longlong *)((longlong)plVar9 + 1);
                        puVar11 = puVar11 + 1;
                    } while (plVar9 < param_8[1]);
                }
                FUN_1401c2e70(param_8,plVar9,&local_res20);
            }
            LAB_1403b0726:
            if (uVar17 != 0) {
                return 0x1a;
            }
        }
    }
    uVar15 = FUN_1403b1e40();
    if ((uVar15 != 0) && (uVar15 != 0x13d)) {
        if (param_8 != (uint **)0x0) {
            local_res20 = local_res20 & 0xffffffff00000000 | (ulonglong)uVar15;
            *(uint *)(param_8 + 2) = uVar15;
            *(undefined4 *)(param_8 + 3) = 1;
            plVar9 = plVar16;
            if ((longlong *)param_8[1] != (longlong *)0x0) {
                puVar11 = *param_8;
                do {
                    uVar14 = *puVar11;
                    if (uVar14 == uVar15) goto LAB_1403b0790;
                    if (uVar14 != uVar15 && (int)uVar15 <= (int)uVar14) break;
                    plVar9 = (longlong *)((longlong)plVar9 + 1);
                    puVar11 = puVar11 + 1;
                } while (plVar9 < param_8[1]);
            }
            FUN_1401c2e70(param_8,plVar9,&local_res20);
        }
        LAB_1403b0790:
        if (uVar17 != 0) {
            LAB_1403b0001:
            return (ulonglong)uVar15;
        }
    }
    if (param_5 != 0) {
        local_res20 = 0x1000000000;
        iVar7 = *(int *)(*(longlong *)(param_3 + 0x70) + 0x100);
        if (iVar7 == 1) {
            lVar8 = FUN_1403ac780(param_5 + 0xa0,&local_res20);
            if (lVar8 != 0) goto LAB_1403b07bb;
        }
        else if (iVar7 != 2) goto LAB_1403b07bb;
        if (param_8 != (uint **)0x0) {
            local_res20 = CONCAT44(local_res20._4_4_,0xa9);
            *(undefined4 *)(param_8 + 2) = 0xa9;
            *(undefined4 *)(param_8 + 3) = 1;
            if ((longlong *)param_8[1] != (longlong *)0x0) {
                puVar11 = *param_8;
                do {
                    if (*puVar11 == 0xa9) goto LAB_1403b0866;
                    if (0xa9 < (int)*puVar11) break;
                    plVar16 = (longlong *)((longlong)plVar16 + 1);
                    puVar11 = puVar11 + 1;
                } while (plVar16 < param_8[1]);
            }
            FUN_1401c2e70(param_8,plVar16,&local_res20);
        }
        LAB_1403b0866:
        if (uVar17 != 0) {
            return 0xa9;
        }
    }
    LAB_1403b07bb:
    uVar10 = FUN_1403b1f40(param_2,param_3,param_5,param_8);
    iVar7 = (int)uVar10;
    if ((((iVar7 == 0) || (iVar7 == 0x13d)) || ((uVar17 == 0 && (iVar7 == 0x13d)))) && (bVar2)) {
        uVar10 = 0x13d;
    }
    return uVar10;
}



// WARNING: Could not reconcile some variable overlaps

uint * FUN_1403b0880(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                     undefined8 param_5,longlong *param_6,uint **param_7)

{
    uint uVar1;
    int iVar2;
    uint uVar3;
    int *piVar4;
    longlong lVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puVar8;
    uint *puVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    undefined4 uVar14;
    float fVar15;
    float fVar16;
    uint local_res18 [4];
    undefined local_88 [8];
    float fStack128;

    puVar8 = (uint *)0x0;
    param_7._0_4_ = 0;
    puVar9 = (uint *)0x0;
    if ((param_7 == (uint **)0x0) || (*(int *)((longlong)param_7 + 0x14) == 0)) {
        param_7._0_4_ = 1;
    }
    uVar3 = *(uint *)(*(longlong *)(param_3 + 0x70) + 0x7c);
    if ((((7 < uVar3) || ((0x85U >> (uVar3 & 0x1f) & 1) == 0)) &&
         (uVar3 = *(uint *)(*(longlong *)(param_3 + 0x70) + 0x10c), (uVar3 >> 0x1a & 1) == 0)) &&
        ((param_4 == param_6 && ((uVar3 >> 0x1c & 1) == 0)))) {
        if (param_7 != (uint **)0x0) {
            local_res18[0] = 0x20;
            *(undefined4 *)(param_7 + 2) = 0x20;
            *(undefined4 *)(param_7 + 3) = 1;
            if (param_7[1] != (uint *)0x0) {
                puVar6 = *param_7;
                puVar7 = puVar8;
                do {
                    if (*puVar6 == 0x20) goto LAB_1403b094d;
                    if (0x20 < (int)*puVar6) break;
                    puVar7 = (uint *)((longlong)puVar7 + 1);
                    puVar6 = puVar6 + 1;
                } while (puVar7 < param_7[1]);
            }
            FUN_1401c2e70();
        }
        LAB_1403b094d:
        if ((int)param_7 != 0) {
            return (uint *)&DAT_00000020;
        }
    }
    if ((*(byte *)(*(longlong *)(param_3 + 0x70) + 0x110) & 0x20) != 0) {
        if (param_6 == (longlong *)0x0) goto LAB_1403b0b61;
        iVar2 = (**(code **)(*param_1 + 0x48))(param_1,*(undefined4 *)(param_4 + 1));
        if (iVar2 == 0) {
            if (param_7 != (uint **)0x0) {
                param_7._0_4_ = 0x11e;
                *(undefined4 *)(param_7 + 2) = 0x11e;
                *(undefined4 *)(param_7 + 3) = 1;
                if (param_7[1] != (uint *)0x0) {
                    puVar9 = *param_7;
                    do {
                        if (*puVar9 == 0x11e) {
                            return (uint *)0x11e;
                        }
                        if (0x11e < (int)*puVar9) break;
                        puVar8 = (uint *)((longlong)puVar8 + 1);
                        puVar9 = puVar9 + 1;
                    } while (puVar8 < param_7[1]);
                }
                FUN_1401c2e70(param_7,puVar8,&param_7);
            }
            return (uint *)0x11e;
        }
    }
    if (param_6 != (longlong *)0x0) {
        uVar3 = *(uint *)(*(longlong *)(param_3 + 0x70) + 0x10c);
        if (((uVar3 >> 0x1a & 1) != 0) && (*(int *)(param_6 + 0x10) == 0x11)) {
            if ((uVar3 >> 0x1b & 1) == 0) {
                if (param_7 != (uint **)0x0) {
                    param_7._0_4_ = 0x112;
                    *(undefined4 *)(param_7 + 2) = 0x112;
                    *(undefined4 *)(param_7 + 3) = 1;
                    if (param_7[1] != (uint *)0x0) {
                        puVar9 = *param_7;
                        do {
                            if (*puVar9 == 0x112) {
                                return (uint *)0x112;
                            }
                            if (0x112 < (int)*puVar9) break;
                            puVar8 = (uint *)((longlong)puVar8 + 1);
                            puVar9 = puVar9 + 1;
                        } while (puVar8 < param_7[1]);
                    }
                    FUN_1401c2e70(param_7,puVar8,&param_7);
                }
                return (uint *)0x112;
            }
            iVar2 = FUN_14045a950(param_4,*(undefined4 *)(param_6 + 1));
            if (iVar2 != 2) {
                if (param_7 != (uint **)0x0) {
                    param_7._0_4_ = 99;
                    *(undefined4 *)(param_7 + 2) = 99;
                    *(undefined4 *)(param_7 + 3) = 1;
                    if (param_7[1] != (uint *)0x0) {
                        puVar9 = *param_7;
                        do {
                            if (*puVar9 == 99) {
                                return (uint *)0x63;
                            }
                            if (99 < (int)*puVar9) break;
                            puVar8 = (uint *)((longlong)puVar8 + 1);
                            puVar9 = puVar9 + 1;
                        } while (puVar8 < param_7[1]);
                    }
                    FUN_1401c2e70(param_7,puVar8,&param_7);
                }
                return (uint *)0x63;
            }
        }
        if ((((*(uint *)(*(longlong *)(param_3 + 0x70) + 0x10c) & 0x4000000) != 0) &&
             (iVar2 = (**(code **)(*param_6 + 0x20))(param_6), iVar2 != 0)) &&
            (iVar2 = (**(code **)(*param_6 + 0x28))(), iVar2 == 0)) {
            if (param_7 != (uint **)0x0) {
                param_7._0_4_ = 0x130;
                *(undefined4 *)(param_7 + 2) = 0x130;
                *(undefined4 *)(param_7 + 3) = 1;
                if (param_7[1] != (uint *)0x0) {
                    puVar9 = *param_7;
                    do {
                        if (*puVar9 == 0x130) goto LAB_1403b0b57;
                        if (0x130 < (int)*puVar9) break;
                        puVar8 = (uint *)((longlong)puVar8 + 1);
                        puVar9 = puVar9 + 1;
                    } while (puVar8 < param_7[1]);
                }
                FUN_1401c2e70(param_7,puVar8,&param_7);
            }
            LAB_1403b0b57:
            return (uint *)&DAT_00000130;
        }
    }
    LAB_1403b0b61:
    fVar13 = 0.0;
    fVar16 = 0.0;
    if (*(int *)(param_2 + 0x14) != 0) {
        fVar16 = (float)(**(code **)(*param_1 + 0x20))();
    }
    iVar2 = *(int *)(*(longlong *)(param_3 + 0x70) + 0x7c);
    if ((2 < iVar2 - 2U) && (1 < iVar2 - 7U)) {
        uVar3 = *(uint *)(*(longlong *)(param_3 + 0x70) + 0x10c);
        if (((uVar3 >> 0xd & 1) != 0) && (param_6 != (longlong *)0x0)) {
            if ((uint *)param_4[0x58] != (uint *)0x0) {
                piVar4 = (int *)param_4[0x57];
                puVar6 = puVar8;
                do {
                    if (*piVar4 == *(int *)(param_6 + 1)) goto LAB_1403b0c51;
                    puVar6 = (uint *)((longlong)puVar6 + 1);
                    piVar4 = piVar4 + 1;
                } while (puVar6 < (uint *)param_4[0x58]);
            }
            if (param_7 != (uint **)0x0) {
                param_7._0_4_ = 0xff;
                *(undefined4 *)(param_7 + 2) = 0xff;
                *(undefined4 *)(param_7 + 3) = 1;
                if (param_7[1] != (uint *)0x0) {
                    puVar9 = *param_7;
                    do {
                        if (*puVar9 == 0xff) {
                            return (uint *)0xff;
                        }
                        if (0xff < (int)*puVar9) break;
                        puVar8 = (uint *)((longlong)puVar8 + 1);
                        puVar9 = puVar9 + 1;
                    } while (puVar8 < param_7[1]);
                }
                FUN_1401c2e70(param_7,puVar8,&param_7);
            }
            return (uint *)0xff;
        }
        LAB_1403b0c51:
        if (((uVar3 >> 0xe & 1) != 0) && (param_6 != (longlong *)0x0)) {
            if ((uint *)param_6[0x58] != (uint *)0x0) {
                piVar4 = (int *)param_6[0x57];
                puVar6 = puVar8;
                do {
                    if (*piVar4 == *(int *)(param_4 + 1)) goto LAB_1403b0cf1;
                    puVar6 = (uint *)((longlong)puVar6 + 1);
                    piVar4 = piVar4 + 1;
                } while (puVar6 < (uint *)param_6[0x58]);
            }
            if (param_7 != (uint **)0x0) {
                param_7._0_4_ = 0x100;
                *(undefined4 *)(param_7 + 2) = 0x100;
                *(undefined4 *)(param_7 + 3) = 1;
                if (param_7[1] != (uint *)0x0) {
                    puVar9 = *param_7;
                    do {
                        if (*puVar9 == 0x100) {
                            return (uint *)0x100;
                        }
                        if (0x100 < (int)*puVar9) break;
                        puVar8 = (uint *)((longlong)puVar8 + 1);
                        puVar9 = puVar9 + 1;
                    } while (puVar8 < param_7[1]);
                }
                FUN_1401c2e70(param_7,puVar8,&param_7);
            }
            return (uint *)0x100;
        }
    }
    LAB_1403b0cf1:
    puVar6 = puVar9;
    if (((iVar2 == 4) || (iVar2 - 7U < 2)) ||
        ((lVar5 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(param_2 + 8),param_4), lVar5 != 0 &&
                                                                                     (((*(byte *)(*(longlong *)(lVar5 + 0x70) + 0x110) & 2) != 0 &&
                                                                                       (*(int *)(param_2 + 0x30) == *(int *)(param_2 + 0x24))))))) {
        fVar12 = *(float *)(param_2 + 0x38);
        fVar11 = *(float *)(param_2 + 0x34);
        fVar10 = *(float *)(param_2 + 0x3c);
        if ((DAT_140c44798 < fVar11 * fVar11 + fVar12 * fVar12 + fVar10 * fVar10) &&
            (*(int *)((longlong)param_4 + 0x84) == 0)) {
            lVar5 = param_4[0x1a1];
            fStack128 = SUB124(*(undefined (*) [12])(param_4 + 0x23c) >> 0x40,0);
            local_88._0_4_ = SUB124(*(undefined (*) [12])(param_4 + 0x23c),0);
            uVar14 = *(undefined4 *)(*(longlong *)(param_3 + 0x70) + 0x6c);
            fVar11 = fVar11 - local_88._0_4_;
            fVar12 = fVar12 - (*(float *)((longlong)param_4 + 0x11e4) -
                               *(float *)((longlong)param_4 + 0x1324));
            _local_88 = CONCAT412(fVar13 - fVar13,CONCAT48(fVar10 - fStack128,CONCAT44(fVar12,fVar11)));
            fVar11 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + 0.0);
            if (lVar5 == 0) {
                lVar5 = FUN_14022d500(fVar12 * fVar12,fVar13);
                fVar12 = fVar13;
                if (lVar5 != 0) {
                    fVar12 = *(float *)(lVar5 + 0x28);
                }
            }
            else {
                fVar12 = (float)FUN_14047a940();
                fVar12 = fVar12 * *(float *)(lVar5 + 0x8c);
            }
            uVar3 = FUN_1407a17d0(fVar11,fVar12,fVar13,uVar14);
            if ((uVar3 != 0) && (uVar3 != 0x13d)) {
                if (param_7 != (uint **)0x0) {
                    *(uint *)(param_7 + 2) = uVar3;
                    *(undefined4 *)(param_7 + 3) = 1;
                    puVar9 = puVar8;
                    local_res18[0] = uVar3;
                    if (param_7[1] != (uint *)0x0) {
                        puVar6 = *param_7;
                        do {
                            uVar1 = *puVar6;
                            if (uVar1 == uVar3) goto LAB_1403b0f48;
                            if (uVar1 != uVar3 && (int)uVar3 <= (int)uVar1) break;
                            puVar9 = (uint *)((longlong)puVar9 + 1);
                            puVar6 = puVar6 + 1;
                        } while (puVar9 < param_7[1]);
                    }
                    FUN_1401c2e70(param_7,puVar9,local_res18);
                }
                LAB_1403b0f48:
                if ((int)param_7 != 0) {
                    return (uint *)(ulonglong)uVar3;
                }
            }
            iVar2 = (int)param_7;
            lVar5 = param_4[0x1a1];
            fVar12 = *(float *)(*(longlong *)(param_3 + 0x70) + 0x70);
            if (lVar5 == 0) {
                lVar5 = FUN_14022d500();
                fVar10 = fVar13;
                if (lVar5 != 0) {
                    fVar10 = *(float *)(lVar5 + 0x28);
                }
            }
            else {
                fVar10 = (float)FUN_14047a940();
                fVar10 = fVar10 * *(float *)(lVar5 + 0x8c);
            }
            fVar15 = fVar11 - fVar10;
            if (fVar11 - fVar10 < fVar13) {
                fVar15 = fVar13;
            }
            if ((fVar16 != fVar13) && (fVar12 != fVar13)) {
                fVar12 = fVar12 + fVar16;
            }
            puVar6 = puVar8;
            if (fVar12 < fVar15) {
                if (param_7 != (uint **)0x0) {
                    param_7._0_4_ = 0x69;
                    *(undefined4 *)(param_7 + 2) = 0x69;
                    *(undefined4 *)(param_7 + 3) = 1;
                    puVar9 = puVar8;
                    if (param_7[1] != (uint *)0x0) {
                        puVar6 = *param_7;
                        do {
                            if (*puVar6 == 0x69) goto LAB_1403b1008;
                            if (0x69 < (int)*puVar6) break;
                            puVar9 = (uint *)((longlong)puVar9 + 1);
                            puVar6 = puVar6 + 1;
                        } while (puVar9 < param_7[1]);
                    }
                    FUN_1401c2e70(param_7,puVar9,&param_7);
                }
                LAB_1403b1008:
                puVar6 = (uint *)0x69;
                if (iVar2 != 0) {
                    return (uint *)0x69;
                }
            }
            fVar16 = *(float *)(*(longlong *)(param_3 + 0x70) + 0x74);
            if (-1.0 < fVar16) {
                lVar5 = param_4[0x1a1];
                if (lVar5 == 0) {
                    lVar5 = FUN_14022d500();
                    fVar12 = fVar13;
                    if (lVar5 != 0) {
                        fVar12 = *(float *)(lVar5 + 0x28);
                    }
                }
                else {
                    fVar12 = (float)FUN_14047a940();
                    fVar12 = fVar12 * *(float *)(lVar5 + 0x8c);
                }
                fVar12 = (float)(local_88._4_4_ & 0x7fffffff) - fVar12;
                if (fVar12 < fVar13) {
                    fVar12 = fVar13;
                }
                puVar6 = puVar8;
                if (fVar16 < fVar12) {
                    if (param_7 != (uint **)0x0) {
                        param_7._0_4_ = 0xb7;
                        *(undefined4 *)(param_7 + 2) = 0xb7;
                        *(undefined4 *)(param_7 + 3) = 1;
                        puVar9 = puVar8;
                        if (param_7[1] != (uint *)0x0) {
                            puVar6 = *param_7;
                            do {
                                if (*puVar6 == 0xb7) goto LAB_1403b10d0;
                                if (0xb7 < (int)*puVar6) break;
                                puVar9 = (uint *)((longlong)puVar9 + 1);
                                puVar6 = puVar6 + 1;
                            } while (puVar9 < param_7[1]);
                        }
                        FUN_1401c2e70(param_7,puVar9,&param_7);
                    }
                    LAB_1403b10d0:
                    puVar6 = (uint *)0xb7;
                    if (iVar2 != 0) {
                        return (uint *)0xb7;
                    }
                }
            }
            uVar3 = *(uint *)(*(longlong *)(param_3 + 0x70) + 0x10c);
            if ((uVar3 >> 0x12 & 1) == 0) {
                _local_88 = CONCAT412(fVar13,*(undefined (*) [12])(param_2 + 0x34));
                if (((uVar3 >> 0xb & 1) == 0) &&
                    (iVar2 = FUN_14047d830(*(undefined4 *)(param_2 + 0x3c),fVar13,param_4,local_88),
                            iVar2 == 0)) {
                    puVar6 = (uint *)0xa6;
                    if (param_7 != (uint **)0x0) {
                        param_7._0_4_ = 0xa6;
                        *(undefined4 *)(param_7 + 2) = 0xa6;
                        *(undefined4 *)(param_7 + 3) = 1;
                        if (param_7[1] != (uint *)0x0) {
                            puVar9 = *param_7;
                            do {
                                if (*puVar9 == 0xa6) {
                                    return (uint *)0xa6;
                                }
                                if (0xa6 < (int)*puVar9) break;
                                puVar8 = (uint *)((longlong)puVar8 + 1);
                                puVar9 = puVar9 + 1;
                            } while (puVar8 < param_7[1]);
                        }
                        FUN_1401c2e70(param_7,puVar8,&param_7);
                    }
                }
                else {
                    puVar6 = (uint *)0x0;
                }
            }
        }
    }
    else {
        puVar6 = puVar8;
        if ((*(int *)(param_2 + 0x44) == 0) && (puVar6 = puVar9, param_6 != (longlong *)0x0)) {
            local_res18[0] = FUN_1403b2240(param_1,param_3,param_4,param_5,param_6,param_2,fVar16,param_7)
                    ;
            puVar6 = (uint *)(ulonglong)local_res18[0];
            if ((local_res18[0] != 0) && ((local_res18[0] != 0x13d && (param_7 != (uint **)0x0)))) {
                *(uint *)(param_7 + 2) = local_res18[0];
                *(undefined4 *)(param_7 + 3) = 1;
                if (param_7[1] != (uint *)0x0) {
                    puVar9 = *param_7;
                    do {
                        uVar3 = *puVar9;
                        if (uVar3 == local_res18[0]) {
                            return puVar6;
                        }
                        if (uVar3 != local_res18[0] && (int)local_res18[0] <= (int)uVar3) break;
                        puVar8 = (uint *)((longlong)puVar8 + 1);
                        puVar9 = puVar9 + 1;
                    } while (puVar8 < param_7[1]);
                }
                FUN_1401c2e70(param_7,puVar8,local_res18);
            }
        }
    }
    return puVar6;
}



ulonglong FUN_1403b11b0(longlong param_1,longlong param_2,uint *param_3)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    uint uVar4;
    ulonglong uVar5;
    longlong lVar6;

    if (param_2 == 0) {
        return 6;
    }
    uVar4 = *param_3;
    if (((uVar4 & 0xfffffff6) != 0) || (uVar4 == 1)) {
        return 0x1f;
    }
    lVar2 = *(longlong *)(param_2 + 0x40);
    if ((*(uint *)(lVar2 + 0x154) & 0x100) != 0) {
        if (uVar4 != 0) goto LAB_1403b125b;
        if (0xd < param_3[1] - 0x11) {
            return 0x1f;
        }
    }
    if (uVar4 == 0) {
        uVar1 = param_3[1];
        if ((uVar1 - 0x11 < 4) && (uVar3 = FUN_1403b4dd0(), uVar3 <= uVar1 - 0x11)) {
            return 0x1f;
        }
        if ((uVar1 - 0x15 < 10) && (uVar3 = FUN_1403b4d60(), uVar3 <= uVar1 - 0x15)) {
            return 0x1f;
        }
    }
    LAB_1403b125b:
    uVar1 = param_3[1];
    uVar3 = uVar1;
    if (uVar4 - 8 < 2) {
        uVar3 = uVar1 % 0x11;
    }
    if ((*(uint *)(lVar2 + 0x180) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
        if (((*(longlong *)(param_1 + 0x6490) != 0) &&
             (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x2ac) != 0)) &&
            ((uVar4 != 0 || (0xe < uVar1 - 0x10)))) {
            return 0x3f;
        }
        if (uVar4 != 8) {
            lVar6 = *(longlong *)(param_2 + 0x48);
            if (uVar4 == 9) {
                if (lVar6 == 0) {
                    lVar6 = lVar2 + 8;
                }
                if (lVar2 == 0) {
                    return 6;
                }
                if (((*(uint *)(lVar2 + 0x154) & 0x400) != 0) && (*(int *)(lVar2 + 0x180) != 0)) {
                    uVar4 = FUN_1403b4710(param_1,lVar2,lVar6);
                    if (uVar4 != 0x29) {
                        return (ulonglong)uVar4;
                    }
                    if (param_3[1] % 0x11 != 0x10) {
                        return 0;
                    }
                    return (ulonglong)uVar4;
                }
            }
            else {
                if (lVar6 == 0) {
                    lVar6 = lVar2 + 8;
                }
                if (lVar2 == 0) {
                    return 6;
                }
                if (((*(uint *)(lVar2 + 0x154) & 0x400) != 0) && (*(int *)(lVar2 + 0x180) != 0)) {
                    uVar5 = FUN_1403b4710(param_1,lVar2,lVar6);
                    return uVar5;
                }
            }
            return 0x1f;
        }
        if (((lVar2 != 0) && ((*(uint *)(lVar2 + 0x154) & 0x400) != 0)) &&
            (*(int *)(lVar2 + 0x180) != 0)) {
            return 0;
        }
    }
    return 0x1f;
}



void FUN_1403b13c0(longlong param_1,longlong *param_2)

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
        iVar2 = FUN_1401971e0(&DAT_140c8a688,1,&local_res8,&local_28);
        local_48 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_38);
        if (iVar2 != 0) {
            // WARNING: Could not recover jumptable at 0x0001403b1486. Too many branches
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



int * FUN_1403b14c0(longlong *param_1,ulonglong param_2,longlong param_3,int **param_4,int param_5)

{
    int iVar1;
    longlong lVar2;
    bool bVar3;
    uint uVar4;
    uint uVar5;
    int *piVar6;
    int *piVar7;
    int *piVar8;
    int iVar9;
    int *piVar10;
    ulonglong local_res10;
    longlong local_res18;
    int local_res20;

    piVar10 = (int *)0x0;
    bVar3 = false;
    if ((param_4 == (int **)0x0) || (*(int *)((longlong)param_4 + 0x14) == 0)) {
        bVar3 = true;
    }
    local_res20 = 0;
    piVar6 = piVar10;
    piVar7 = piVar10;
    local_res10 = param_2;
    local_res18 = param_3;
    if ((*(uint *)(*(longlong *)(param_2 + 0x70) + 0x24) & 0xfffffffd) == 0) {
        lVar2 = *(longlong *)(param_3 + 0x1608);
        while( true ) {
            piVar6 = (int *)0x0;
            piVar7 = (int *)0x0;
            if (lVar2 == 0) break;
            if (((*(int *)(lVar2 + 4) == 0) && (*(longlong *)(lVar2 + 0x20) != 0)) &&
                (uVar4 = FUN_140195f70(), uVar4 != 0)) {
                piVar6 = (int *)0xe;
                if (param_5 == 0) {
                    if (param_4 != (int **)0x0) {
                        FUN_1403b51f0(param_4,0xe);
                    }
                    piVar7 = (int *)0x0;
                    if (bVar3) {
                        return (int *)0xe;
                    }
                }
                else {
                    local_res20 = 1;
                    piVar7 = piVar10;
                    if (uVar4 != 0) {
                        piVar7 = (int *)(ulonglong)uVar4;
                    }
                }
                break;
            }
            lVar2 = *(longlong *)(lVar2 + 0x88);
        }
    }
    iVar9 = **(int **)(param_2 + 0x70);
    for (lVar2 = *(longlong *)(local_res18 + 0x1608); lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x88))
    {
        if (((*(int *)(lVar2 + 4) == 1) && (iVar9 == *(int *)(lVar2 + 0xc))) &&
            ((*(longlong *)(lVar2 + 0x20) != 0 && (uVar4 = FUN_140195f70(), uVar4 != 0)))) {
            piVar6 = (int *)0xf;
            if (param_5 == 0) {
                if (param_4 != (int **)0x0) {
                    FUN_1403b51f0(param_4,0xf);
                }
                if (bVar3) {
                    return (int *)0xf;
                }
            }
            else {
                local_res20 = 1;
                if ((uint)piVar7 < uVar4) {
                    piVar7 = (int *)(ulonglong)uVar4;
                }
            }
            break;
        }
    }
    uVar4 = (uint)piVar7;
    piVar8 = piVar10;
    if (*(longlong *)(local_res10 + 0x38) != 0) {
        do {
            iVar9 = *(int *)(*(longlong *)(local_res10 + 0x38) + 4 + (longlong)piVar8);
            if (iVar9 != 0) {
                for (lVar2 = *(longlong *)(local_res18 + 0x1608); lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x88)) {
                    if (((*(int *)(lVar2 + 4) == 2) && (iVar9 == *(int *)(lVar2 + 0xc))) &&
                        ((*(longlong *)(lVar2 + 0x20) != 0 && (uVar4 = FUN_140195f70(), uVar4 != 0)))) {
                        piVar6 = (int *)&DAT_00000010;
                        if (param_5 == 0) {
                            if (param_4 != (int **)0x0) {
                                FUN_1403b51f0(param_4,0x10);
                            }
                            if (bVar3) {
                                return piVar6;
                            }
                        }
                        else {
                            local_res20 = 1;
                            if ((uint)piVar7 < uVar4) {
                                piVar7 = (int *)(ulonglong)uVar4;
                            }
                        }
                        break;
                    }
                }
            }
            uVar4 = (uint)piVar7;
            piVar8 = piVar8 + 1;
        } while (piVar8 < &DAT_0000000c);
    }
    if ((local_res20 == 0) || (uVar5 = (**(code **)(*param_1 + 0x78))(), uVar5 < uVar4)) {
        if ((param_4 != (int **)0x0) && ((iVar9 = (int)piVar6, iVar9 != 0 && (iVar9 != 0x13d)))) {
            local_res10 = local_res10 & 0xffffffff00000000 | (ulonglong)piVar6;
            *(int *)(param_4 + 2) = iVar9;
            *(undefined4 *)(param_4 + 3) = 1;
            if (param_4[1] != (int *)0x0) {
                piVar7 = *param_4;
                do {
                    iVar1 = *piVar7;
                    if (iVar1 == iVar9) {
                        return piVar6;
                    }
                    if (iVar1 != iVar9 && iVar9 <= iVar1) break;
                    piVar10 = (int *)((longlong)piVar10 + 1);
                    piVar7 = piVar7 + 1;
                } while (piVar10 < param_4[1]);
            }
            FUN_1401c2e70(param_4,piVar10,&local_res10);
        }
    }
    else {
        piVar6 = (int *)0x13d;
    }
    return piVar6;
}



ulonglong FUN_1403b1780(uint param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                        longlong *param_5)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong *plVar4;
    ulonglong uVar5;
    int *piVar6;
    ulonglong uVar7;
    uint extraout_XMM0_Da;
    uint extraout_XMM0_Da_00;
    uint uVar8;
    uint extraout_XMM0_Da_01;
    uint extraout_XMM0_Da_02;
    uint extraout_XMM0_Da_03;
    uint extraout_XMM0_Da_04;
    uint extraout_XMM0_Da_05;
    uint extraout_XMM0_Da_06;
    uint extraout_XMM0_Da_07;
    uint extraout_XMM0_Da_08;
    uint extraout_XMM0_Da_09;
    uint extraout_XMM0_Da_10;
    uint extraout_XMM0_Da_11;
    uint extraout_XMM0_Da_12;
    uint extraout_XMM0_Da_13;
    undefined4 extraout_XMM0_Dc;
    undefined4 extraout_XMM0_Dc_00;
    undefined4 extraout_XMM0_Dc_01;
    undefined4 extraout_XMM0_Dc_02;
    undefined4 extraout_XMM0_Dc_03;
    undefined4 extraout_XMM0_Dc_04;
    undefined4 extraout_XMM0_Dc_05;
    undefined4 extraout_XMM0_Dc_06;
    undefined4 extraout_XMM0_Dc_07;
    undefined4 extraout_XMM0_Dc_08;
    undefined4 extraout_XMM0_Dc_09;
    undefined4 extraout_XMM0_Dc_10;
    undefined4 extraout_XMM0_Dc_11;
    undefined4 extraout_XMM0_Dc_12;
    undefined4 extraout_XMM0_Dc_13;
    undefined4 extraout_XMM0_Dc_14;
    undefined4 extraout_XMM0_Dc_15;
    undefined4 extraout_XMM0_Dc_16;
    undefined4 extraout_XMM0_Dc_17;
    undefined4 extraout_XMM0_Dc_18;
    undefined4 extraout_XMM0_Dc_19;
    undefined4 extraout_XMM0_Dc_20;
    undefined4 extraout_XMM0_Dd;
    undefined4 extraout_XMM0_Dd_00;
    undefined4 extraout_XMM0_Dd_01;
    undefined4 extraout_XMM0_Dd_02;
    undefined4 extraout_XMM0_Dd_03;
    undefined4 extraout_XMM0_Dd_04;
    undefined4 extraout_XMM0_Dd_05;
    undefined4 extraout_XMM0_Dd_06;
    undefined4 extraout_XMM0_Dd_07;
    undefined4 extraout_XMM0_Dd_08;
    undefined4 extraout_XMM0_Dd_09;
    undefined4 extraout_XMM0_Dd_10;
    undefined4 extraout_XMM0_Dd_11;
    undefined4 extraout_XMM0_Dd_12;
    undefined4 extraout_XMM0_Dd_13;
    undefined4 extraout_XMM0_Dd_14;
    undefined4 extraout_XMM0_Dd_15;
    undefined4 extraout_XMM0_Dd_16;
    undefined4 extraout_XMM0_Dd_17;
    undefined4 extraout_XMM0_Dd_18;
    undefined4 extraout_XMM0_Dd_19;
    undefined4 extraout_XMM0_Dd_20;
    float fVar9;
    undefined auVar10 [16];
    undefined auVar11 [16];
    float fVar12;
    float fVar13;
    uint local_8c;
    uint local_88;

    uVar7 = *(ulonglong *)(param_2 + 0x40);
    if (uVar7 == 0) {
        return uVar7;
    }
    piVar6 = (int *)(uVar7 + 0x10);
    uVar7 = 0;
    auVar10 = ZEXT416(local_88);
    auVar11 = ZEXT416(local_8c);
    fVar13 = 100.0;
    do {
        iVar3 = piVar6[-4];
        iVar1 = piVar6[-2];
        fVar12 = (float)*piVar6;
        switch(iVar3) {
            case 1:
                uVar8 = (**(code **)(*param_3 + 0x40))(param_3);
                auVar11 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                uVar8 = (**(code **)(*param_3 + 0x48))();
                uVar5 = 0x2c;
                auVar10 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                param_1 = extraout_XMM0_Da;
                break;
            default:
                if ((*(longlong **)(DAT_140c65898 + 0x78) == param_3) &&
                    (plVar4 = *(longlong **)(DAT_140c65898 + 0x6d90), plVar4 != (longlong *)0x0)) {
                    uVar5 = (**(code **)(*plVar4 + 0x78))(plVar4,iVar3);
                    uVar5 = uVar5 & 0xffffffff;
                    param_1 = extraout_XMM0_Da_12;
                }
                else {
                    uVar5 = 0xaf;
                }
                break;
            case 3:
                uVar8 = (**(code **)(*param_3 + 0x70))(param_3);
                auVar11 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                uVar8 = (**(code **)(*param_3 + 0x78))();
                uVar5 = 0xb0;
                auVar10 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                param_1 = extraout_XMM0_Da_00;
                break;
            case 5:
                uVar8 = FUN_140466340(param_3,0);
                auVar11 = CONCAT412(extraout_XMM0_Dd,CONCAT48(extraout_XMM0_Dc,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x32;
                auVar10 = CONCAT412(extraout_XMM0_Dd_00,CONCAT48(extraout_XMM0_Dc_00,(ulonglong)param_1));
                break;
            case 6:
                uVar8 = FUN_140466340(param_3,1);
                auVar11 = CONCAT412(extraout_XMM0_Dd_01,CONCAT48(extraout_XMM0_Dc_01,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x33;
                auVar10 = CONCAT412(extraout_XMM0_Dd_02,CONCAT48(extraout_XMM0_Dc_02,(ulonglong)param_1));
                break;
            case 7:
                uVar8 = FUN_140466340(param_3,2);
                auVar11 = CONCAT412(extraout_XMM0_Dd_03,CONCAT48(extraout_XMM0_Dc_03,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x34;
                auVar10 = CONCAT412(extraout_XMM0_Dd_04,CONCAT48(extraout_XMM0_Dc_04,(ulonglong)param_1));
                break;
            case 8:
                uVar8 = FUN_140466340(param_3,3);
                auVar11 = CONCAT412(extraout_XMM0_Dd_05,CONCAT48(extraout_XMM0_Dc_05,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x35;
                auVar10 = CONCAT412(extraout_XMM0_Dd_06,CONCAT48(extraout_XMM0_Dc_06,(ulonglong)param_1));
                break;
            case 9:
                uVar8 = FUN_140466340(param_3,4);
                auVar11 = CONCAT412(extraout_XMM0_Dd_07,CONCAT48(extraout_XMM0_Dc_07,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x36;
                auVar10 = CONCAT412(extraout_XMM0_Dd_08,CONCAT48(extraout_XMM0_Dc_08,(ulonglong)param_1));
                break;
            case 10:
                uVar8 = FUN_140466340(param_3,5);
                auVar11 = CONCAT412(extraout_XMM0_Dd_09,CONCAT48(extraout_XMM0_Dc_09,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x37;
                auVar10 = CONCAT412(extraout_XMM0_Dd_10,CONCAT48(extraout_XMM0_Dc_10,(ulonglong)param_1));
                break;
            case 0xb:
                uVar8 = FUN_140466340(param_3,6);
                auVar11 = CONCAT412(extraout_XMM0_Dd_11,CONCAT48(extraout_XMM0_Dc_11,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x38;
                auVar10 = CONCAT412(extraout_XMM0_Dd_12,CONCAT48(extraout_XMM0_Dc_12,(ulonglong)param_1));
                break;
            case 0xf:
                auVar11 = ZEXT416(*(uint *)(param_3 + 0x43));
                auVar10 = ZEXT416(*(uint *)((longlong)param_3 + 0x5ec));
                uVar5 = 0xa7;
                break;
            case 0x10:
                uVar8 = FUN_140466340(param_3,7);
                auVar11 = CONCAT412(extraout_XMM0_Dd_13,CONCAT48(extraout_XMM0_Dc_13,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0xb1;
                auVar10 = CONCAT412(extraout_XMM0_Dd_14,CONCAT48(extraout_XMM0_Dc_14,(ulonglong)param_1));
                break;
            case 0x14:
                auVar11 = ZEXT416((uint)(float)*(int *)(param_3 + 0x96));
                iVar2 = FUN_14045e720();
                uVar5 = 0xfa;
                auVar10 = ZEXT416((uint)(float)iVar2);
                param_1 = extraout_XMM0_Da_01;
                break;
            case 0x15:
                uVar8 = (**(code **)(*param_3 + 0x88))(param_3);
                auVar11 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                uVar8 = (**(code **)(*param_3 + 0x90))();
                uVar5 = 0xfe;
                auVar10 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                param_1 = extraout_XMM0_Da_02;
                break;
            case 0x16:
                plVar4 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 7));
                if ((plVar4 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar4 + 0x40))(plVar4), iVar2 != 0)
                        ) {
                    auVar11 = auVar11 & (undefined  [16])0x0;
                }
                else {
                    uVar8 = (**(code **)(*plVar4 + 0x98))(plVar4);
                    auVar11 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                }
                plVar4 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 7));
                param_1 = extraout_XMM0_Da_03;
                if ((plVar4 == (longlong *)0x0) ||
                    (iVar2 = (**(code **)(*plVar4 + 0x40))(), param_1 = extraout_XMM0_Da_04, iVar2 != 0)) {
                    auVar10 = auVar10 & (undefined  [16])0x0;
                    uVar5 = 0x113;
                }
                else {
                    uVar8 = (**(code **)(*plVar4 + 0x80))();
                    uVar5 = 0x113;
                    auVar10 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                    param_1 = extraout_XMM0_Da_05;
                }
                break;
            case 0x17:
                plVar4 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)((longlong)DAT_140c65980 + 0x3c));
                if ((plVar4 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar4 + 0x40))(plVar4), iVar2 != 1)
                        ) {
                    auVar11 = auVar11 & (undefined  [16])0x0;
                }
                else {
                    uVar8 = (**(code **)(*plVar4 + 0x98))(plVar4);
                    auVar11 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                }
                plVar4 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)((longlong)DAT_140c65980 + 0x3c));
                param_1 = extraout_XMM0_Da_06;
                if ((plVar4 == (longlong *)0x0) ||
                    (iVar2 = (**(code **)(*plVar4 + 0x40))(), param_1 = extraout_XMM0_Da_07, iVar2 != 1)) {
                    auVar10 = auVar10 & (undefined  [16])0x0;
                    uVar5 = 0x114;
                }
                else {
                    uVar8 = (**(code **)(*plVar4 + 0x80))();
                    uVar5 = 0x114;
                    auVar10 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                    param_1 = extraout_XMM0_Da_08;
                }
                break;
            case 0x18:
                plVar4 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 8));
                if ((plVar4 == (longlong *)0x0) || (iVar2 = (**(code **)(*plVar4 + 0x40))(plVar4), iVar2 != 2)
                        ) {
                    auVar11 = auVar11 & (undefined  [16])0x0;
                }
                else {
                    uVar8 = (**(code **)(*plVar4 + 0x98))(plVar4);
                    auVar11 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                }
                plVar4 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 8));
                param_1 = extraout_XMM0_Da_09;
                if ((plVar4 == (longlong *)0x0) ||
                    (iVar2 = (**(code **)(*plVar4 + 0x40))(), param_1 = extraout_XMM0_Da_10, iVar2 != 2)) {
                    auVar10 = auVar10 & (undefined  [16])0x0;
                    uVar5 = 0x115;
                }
                else {
                    uVar8 = (**(code **)(*plVar4 + 0x80))();
                    uVar5 = 0x115;
                    auVar10 = ZEXT416((uint)(float)(ulonglong)uVar8) & (undefined  [16])0xffffffffffffffff;
                    param_1 = extraout_XMM0_Da_11;
                }
                break;
            case 0x1b:
                uVar8 = FUN_140466340(param_3,8);
                auVar11 = CONCAT412(extraout_XMM0_Dd_15,CONCAT48(extraout_XMM0_Dc_15,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x147;
                auVar10 = CONCAT412(extraout_XMM0_Dd_16,CONCAT48(extraout_XMM0_Dc_16,(ulonglong)param_1));
                break;
            case 0x1c:
                uVar8 = FUN_140466340(param_3,9);
                auVar11 = CONCAT412(extraout_XMM0_Dd_17,CONCAT48(extraout_XMM0_Dc_17,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x148;
                auVar10 = CONCAT412(extraout_XMM0_Dd_18,CONCAT48(extraout_XMM0_Dc_18,(ulonglong)param_1));
                break;
            case 0x1d:
                uVar8 = FUN_140466340(param_3,10);
                auVar11 = CONCAT412(extraout_XMM0_Dd_19,CONCAT48(extraout_XMM0_Dc_19,(ulonglong)uVar8));
                param_1 = FUN_140466360();
                uVar5 = 0x149;
                auVar10 = CONCAT412(extraout_XMM0_Dd_20,CONCAT48(extraout_XMM0_Dc_20,(ulonglong)param_1));
        }
        if (iVar3 != 0) {
            fVar9 = SUB164(auVar11,0);
            if (4 < iVar1) {
                fVar9 = (fVar9 * fVar13) / SUB164(auVar10,0);
            }
            iVar3 = FUN_1407a1750(param_1,fVar9,fVar12);
            param_1 = extraout_XMM0_Da_13;
            if (iVar3 == 0) {
                if ((*(byte *)(*(longlong *)(param_2 + 0x70) + 0x108) & 2) == 0) {
                    return uVar5;
                }
                iVar3 = *(int *)(*(longlong *)(param_2 + 0x70) + 0x168);
                if (iVar3 != 0) {
                    iVar3 = (**(code **)(*param_5 + 0x18))(param_5,param_3,iVar3,param_4,0,0);
                    if (iVar3 != 0) {
                        return 0;
                    }
                    return uVar5;
                }
                return uVar5;
            }
        }
        uVar7 = uVar7 + 1;
        piVar6 = piVar6 + 1;
        if (1 < uVar7) {
            return 0;
        }
    } while( true );
}



undefined8 FUN_1403b1de0(undefined8 param_1,undefined8 param_2)

{
    undefined8 uVar1;
    ulonglong uVar2;

    uVar2 = 0;
    while( true ) {
        uVar1 = FUN_1403b3320(uVar2,param_1,param_2);
        if (((int)uVar1 != 0) && ((int)uVar1 != 0x13d)) break;
        uVar2 = uVar2 + 1;
        if (1 < uVar2) {
            return 0;
        }
    }
    return uVar1;
}



undefined8 FUN_1403b1e40(longlong param_1,longlong param_2)

{
    int iVar1;
    uint uVar2;
    ulonglong uVar3;
    undefined8 uVar4;
    longlong lVar5;

    if ((param_2 == 0) || (lVar5 = *(longlong *)(param_1 + 0x70), *(int *)(lVar5 + 0xc0) == 0)) {
        return 0;
    }
    uVar3 = 0xd0;
    do {
        iVar1 = *(int *)((uVar3 - 0xc) + lVar5);
        if ((iVar1 < 6) && (*(int *)(uVar3 + lVar5) != 0)) {
            uVar4 = 0;
            uVar2 = 0;
            if (iVar1 == 0) {
                uVar4 = 0xa2;
                uVar2 = FUN_1403ac840(param_2 + 0xa0);
            }
            else if (iVar1 == 1) {
                uVar4 = 0xa3;
                uVar2 = FUN_1403b3bb0(param_2 + 0xa0);
            }
            else if (iVar1 == 2) {
                uVar4 = 0xa4;
                uVar2 = FUN_1403b3cf0(param_2 + 0xa0);
            }
            else if (iVar1 == 3) {
                uVar4 = 0xa5;
                uVar2 = FUN_1403b3e30(param_2 + 0xa0);
            }
            lVar5 = *(longlong *)(param_1 + 0x70);
            if (uVar2 < *(uint *)(uVar3 + 0xc + lVar5)) {
                return uVar4;
            }
        }
        uVar3 = uVar3 + 4;
        if (0xdb < uVar3) {
            return 0;
        }
    } while( true );
}



int FUN_1403b1f40(undefined8 param_1,longlong param_2,longlong param_3,int **param_4)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    int *piVar6;
    longlong lVar7;
    int *piVar8;
    int iVar9;
    int iVar10;
    uint uVar11;
    ulonglong uVar12;
    int local_res10 [2];

    iVar2 = 0;
    if ((param_4 == (int **)0x0) || (*(int *)((longlong)param_4 + 0x14) == 0)) {
        bVar1 = true;
    }
    else {
        bVar1 = false;
    }
    uVar12 = 0;
    iVar10 = iVar2;
    if (*(int *)(param_2 + 0x28) != 0) {
        do {
            lVar5 = *(longlong *)(param_2 + 0x30);
            iVar2 = 0;
            lVar7 = uVar12 * 0xa8;
            iVar9 = 0;
            switch(*(undefined4 *)(lVar7 + 0x10 + lVar5)) {
                case 0x24:
                    iVar9 = iVar2;
                    if (param_3 != 0) break;
                LAB_1403b2102:
                    iVar2 = 0x1e;
                LAB_1403b2107:
                    if ((param_4 != (int **)0x0) &&
                        (*(int *)(param_4 + 2) = iVar2, local_res10[0] = iVar2, iVar2 != 0)) {
                        piVar8 = (int *)0x0;
                        *(undefined4 *)(param_4 + 3) = 1;
                        if (param_4[1] != (int *)0x0) {
                            piVar6 = *param_4;
                            do {
                                iVar10 = *piVar6;
                                if (iVar10 == iVar2) goto LAB_1403b2153;
                                if (iVar10 != iVar2 && iVar2 <= iVar10) break;
                                piVar8 = (int *)((longlong)piVar8 + 1);
                                piVar6 = piVar6 + 1;
                            } while (piVar8 < param_4[1]);
                        }
                        FUN_1401c2e70(param_4,piVar8,local_res10);
                    }
                LAB_1403b2153:
                    if (bVar1) {
                        return iVar2;
                    }
                    goto LAB_1403b2005;
                case 0x26:
                    iVar2 = FUN_1403b3f70(param_2,uVar12,param_3);
                    iVar9 = iVar2;
                    if ((iVar2 != 0) && (iVar2 != 0x13d)) goto LAB_1403b2107;
                    break;
                case 0x69:
                    iVar9 = iVar2;
                    if (param_3 == 0) goto LAB_1403b2102;
                    break;
                case 0x7b:
                    if (param_3 == 0) goto LAB_1403b2102;
                    lVar5 = FUN_140224d00(*(undefined4 *)(lVar7 + 0x40 + lVar5));
                    iVar4 = 0;
                    if (lVar5 != 0) {
                        iVar4 = (*(int *)(lVar5 + 8) != 0) + 1;
                    }
                    iVar3 = FUN_1403a9c40();
                    iVar9 = iVar2;
                    if (iVar3 == iVar4) {
                        iVar2 = 0x140;
                        goto LAB_1403b2107;
                    }
                    break;
                case 0x7d:
                case 0x88:
                    iVar9 = iVar2;
                    if (param_3 != 0) {
                        lVar5 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar7 + 0x40 + lVar5),
                                              *(undefined8 *)(param_3 + 0x78));
                        if (lVar5 == 0) {
                            iVar2 = 4;
                        }
                        else {
                            iVar4 = FUN_1403bb170();
                            if (iVar4 == 0) break;
                            iVar2 = 0x140;
                        }
                        goto LAB_1403b2107;
                    }
                    break;
                case 0x8b:
                    if (param_3 != 0) {
                        lVar5 = FUN_1402413c0();
                        if ((lVar5 == 0) || (iVar2 = FUN_1404adfe0(), iVar2 == 0)) {
                            iVar2 = 0x14a;
                        }
                        else {
                            iVar2 = FUN_1404adf20();
                            if (iVar2 != 0) {
                                iVar9 = 0;
                                break;
                            }
                            iVar2 = 0x14b;
                        }
                        goto LAB_1403b2107;
                    }
            }
            iVar2 = iVar10;
            if (((iVar10 == 0) || (iVar10 == 0x13d)) && (iVar9 != 0)) {
                iVar2 = iVar9;
            }
            LAB_1403b2005:
            uVar11 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar11;
            iVar10 = iVar2;
        } while (uVar11 < *(uint *)(param_2 + 0x28));
    }
    return iVar2;
}



int * FUN_1403b2240(longlong *param_1,longlong param_2,int *param_3,longlong param_4,int *param_5,
                    longlong param_6,float param_7,int **param_8)

{
    uint uVar1;
    undefined4 *puVar2;
    int iVar3;
    longlong lVar4;
    int *piVar5;
    int *piVar6;
    int *piVar7;
    int *piVar8;
    int *piVar9;
    uint uVar10;
    uint uVar11;
    bool bVar12;
    undefined4 uVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    ulonglong uVar21;
    longlong local_a8;
    float local_98;

    if (param_5 == (int *)0x0) {
        return (int *)&DAT_0000005b;
    }
    if ((param_5[0x14a] != 0) ||
        (((param_3 != param_5 && (lVar4 = FUN_1403d90d0(DAT_140c65898,param_5[0x30]), lVar4 != 0)) &&
          (*(int *)(lVar4 + 0x80) == 9)))) {
        return (int *)&DAT_00000060;
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x70) + 0x164) != 0) &&
        (iVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_5[2]), iVar3 == 0)) {
        return (int *)0x8c;
    }
    piVar5 = (int *)FUN_1403b4020(param_2);
    if (((int)piVar5 != 0) && ((int)piVar5 != 0x13d)) {
        return piVar5;
    }
    piVar5 = (int *)0x0;
    uVar11 = 0;
    uVar10 = uVar11;
    if (param_8 != (int **)0x0) {
        uVar10 = *(uint *)((longlong)param_8 + 0x1c);
    }
    lVar4 = *(longlong *)(param_2 + 0x70);
    if (*(int *)(lVar4 + 0x13c) != 0) {
        uVar1 = *(uint *)(lVar4 + 0x144);
        uVar10 = *(uint *)(lVar4 + 0x140) & ~uVar10;
        if ((uVar10 & 1) != 0) {
            if ((param_5[0x94] != 0) || (param_5[0x20] == 0x17)) {
                uVar11 = 1;
            }
            if ((uVar1 & 1) == 0) {
                if (uVar11 != 0) {
                    piVar6 = (int *)0x6a;
                    goto LAB_1403b25e0;
                }
            }
            else if (uVar11 == 0) {
                piVar6 = (int *)0x6b;
                goto LAB_1403b25e0;
            }
        }
        if ((uVar10 & 2) != 0) {
            if ((uVar1 & 2) == 0) {
                if (param_5[0xab] != 0) {
                    piVar6 = (int *)&DAT_0000006c;
                    goto LAB_1403b25e0;
                }
            }
            else if (param_5[0xab] == 0) {
                piVar6 = (int *)0x6d;
                goto LAB_1403b25e0;
            }
        }
        if ((uVar10 & 8) != 0) {
            lVar4 = FUN_1405b3f90(param_5);
            if ((uVar1 & 8) == 0) {
                if (*(int *)(lVar4 + 0x1320) != 2) {
                    piVar6 = (int *)&DAT_00000070;
                    goto LAB_1403b25e0;
                }
            }
            else if (*(int *)(lVar4 + 0x1320) == 2) {
                piVar6 = (int *)0x71;
                goto LAB_1403b25e0;
            }
        }
        if ((uVar10 & 0x20) != 0) {
            bVar12 = param_5[0x31] == 0;
            iVar3 = FUN_14047bd80(param_5);
            if ((uVar1 & 0x20) == 0) {
                if ((bVar12) || (iVar3 != 0)) {
                    piVar6 = (int *)&DAT_00000074;
                    goto LAB_1403b25e0;
                }
            }
            else if ((!bVar12) && (iVar3 == 0)) {
                piVar6 = (int *)(ulonglong)(bVar12 + 0x75);
                goto LAB_1403b25e0;
            }
        }
        if ((char)uVar10 < '\0') {
            iVar3 = FUN_14047bdc0(param_5);
            if ((char)uVar1 < '\0') {
                if (iVar3 == 0) {
                    piVar6 = (int *)0x79;
                    goto LAB_1403b25e0;
                }
            }
            else if (iVar3 != 0) {
                piVar6 = (int *)&DAT_00000078;
                goto LAB_1403b25e0;
            }
        }
        if ((uVar10 & 0x40) != 0) {
            iVar3 = FUN_14047be00(param_5);
            if ((uVar1 & 0x40) == 0) {
                if (iVar3 != 0) {
                    piVar6 = (int *)0x76;
                    goto LAB_1403b25e0;
                }
            }
            else if (iVar3 == 0) {
                piVar6 = (int *)0x77;
                goto LAB_1403b25e0;
            }
        }
        if ((uVar10 >> 8 & 1) != 0) {
            if ((uVar1 >> 8 & 1) == 0) {
                if (param_5[0x422] == 1) {
                    piVar6 = (int *)0x8a;
                    goto LAB_1403b25e0;
                }
            }
            else if (param_5[0x422] != 1) {
                piVar6 = (int *)0x8b;
                goto LAB_1403b25e0;
            }
        }
        if ((uVar10 >> 9 & 1) != 0) {
            if (((param_5[0x41c] & 0x40U) != 0) ||
                (bVar12 = false, ((uint)param_5[0x41c] >> 0xb & 1) != 0)) {
                bVar12 = true;
            }
            if ((uVar1 >> 9 & 1) == 0) {
                if (bVar12) {
                    piVar6 = (int *)0xac;
                    goto LAB_1403b25e0;
                }
            }
            else if (!bVar12) {
                piVar6 = (int *)0xad;
                goto LAB_1403b25e0;
            }
        }
        if ((uVar10 & 0x10) != 0) {
            if ((uVar1 & 0x10) == 0) {
                if (param_5[0x15] >= 2) {
                    piVar6 = (int *)0x72;
                    goto LAB_1403b25e0;
                }
            }
            else if (param_5[0x15] < 2) {
                piVar6 = (int *)0x73;
                goto LAB_1403b25e0;
            }
        }
        if ((uVar10 & 4) != 0) {
            if ((uVar1 & 4) == 0) {
                if ((param_5[0x41c] & 4U) != 0) {
                    piVar6 = (int *)0x137;
                    goto LAB_1403b25e0;
                }
            }
            else if ((param_5[0x41c] & 4U) == 0) {
                piVar6 = (int *)&DAT_00000138;
                goto LAB_1403b25e0;
            }
        }
        if ((uVar10 >> 10 & 1) != 0) {
            if ((param_5[0x354] == 0) || (*(int **)(DAT_140c65898 + 0x6490) != param_5)) {
                iVar3 = 0;
            }
            else {
                FUN_1403982a0();
                iVar3 = FUN_140469990(param_5);
            }
            if ((uVar1 >> 10 & 1) == 0) {
                if (iVar3 != 0) {
                    piVar6 = (int *)0x13b;
                    goto LAB_1403b25e0;
                }
            }
            else if (iVar3 == 0) {
                piVar6 = (int *)0x13c;
                goto LAB_1403b25e0;
            }
        }
    }
    piVar6 = (int *)FUN_1403b2c40(param_2,param_5,0,0);
    LAB_1403b25e0:
    lVar4 = param_6;
    piVar9 = (int *)((ulonglong)piVar6 & 0xffffffff);
    if (((int)piVar6 != 0) && ((int)piVar6 != 0x13d)) {
        return piVar6;
    }
    if (param_3 == param_5) {
        param_5 = piVar5;
        if ((*(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c) & 0x40000000) != 0) {
            param_5 = (int *)FUN_1403d90d0(DAT_140c65898);
        }
    }
    else {
        iVar3 = param_5[0x20];
        if (iVar3 == 0x14) {
            if ((*(byte *)(*(longlong *)(param_2 + 0x70) + 0x110) & 4) != 0) {
                return (int *)0x66;
            }
        }
        else {
            if (0x17 < iVar3) {
                if ((iVar3 < 0x1a) || (iVar3 == 0x1b)) {
                    if ((*(byte *)(*(longlong *)(param_2 + 0x70) + 0x110) & 0x40) != 0) {
                        return (int *)0x131;
                    }
                }
                else if ((iVar3 == 0x1f) && (*(int *)(param_6 + 0x48) == 0)) {
                    return (int *)0xfd;
                }
            }
            if ((*(byte *)(*(longlong *)(param_2 + 0x70) + 0x110) & 8) != 0) {
                return (int *)0x67;
            }
        }
        piVar6 = (int *)FUN_1403b43f0(param_2);
        if (((int)piVar6 != 0) && ((int)piVar6 != 0x13d)) {
            return piVar6;
        }
        uVar21 = *(ulonglong *)(param_5 + 6);
        piVar6 = param_3;
        piVar7 = (int *)FUN_1403b44b0();
        piVar9 = (int *)((ulonglong)piVar7 & 0xffffffff);
        if (((int)piVar7 != 0) && ((int)piVar7 != 0x13d)) {
            return piVar7;
        }
        piVar7 = (int *)FUN_14047dca0(param_3);
        piVar8 = (int *)FUN_14047dca0(param_5);
        if ((piVar7 != (int *)0x0) && (piVar8 != (int *)0x0)) {
            if ((piVar7 == piVar8) &&
                ((piVar7 != param_3 &&
                  ((*(uint *)(*(longlong *)(param_2 + 0x70) + 0x10c) & 0x10000000) == 0)))) {
                return (int *)0x63;
            }
            local_a8 = param_4;
            if ((param_4 != 0) || (local_a8 = FUN_14055c900(), local_a8 != 0)) {
                uVar10 = (**(code **)(*param_1 + 0x48))(param_1,piVar7[2],piVar8[2],*param_1,uVar21,piVar6);
                piVar6 = (int *)FUN_1403b4560(param_2,local_a8,piVar7,piVar8,
                                              uVar21 & 0xffffffff00000000 | (ulonglong)uVar10);
                piVar9 = (int *)((ulonglong)piVar6 & 0xffffffff);
                if (((int)piVar6 != 0) && ((int)piVar6 != 0x13d)) {
                    return piVar6;
                }
            }
        }
    }
    piVar6 = param_3;
    if (*(int *)(lVar4 + 0x28) != 0) {
        piVar6 = (int *)FUN_1403d90d0(DAT_140c65898);
    }
    if ((param_5 != (int *)0x0) && (piVar6 != (int *)0x0)) {
        if (param_3 == (int *)0x0) {
            piVar9 = (int *)0x1e;
        }
        else {
            if (param_3[0x21] == 0) {
                puVar2 = *(undefined4 **)(param_2 + 0x70);
                fVar14 = (float)puVar2[0x1c];
                uVar13 = puVar2[0x1b];
                local_98 = SUB124(*(undefined (*) [12])(piVar6 + 0x478),0);
                fVar17 = ((float)param_5[0x479] - (float)param_5[0x4c9]) -
                         ((float)piVar6[0x479] - (float)piVar6[0x4c9]);
                fVar19 = SQRT(((float)param_5[0x478] - local_98) * ((float)param_5[0x478] - local_98) +
                              fVar17 * fVar17 + 0.0);
                if (*(int *)(lVar4 + 0x54) != 0) {
                    uVar13 = FUN_1403ad860(param_1,*puVar2,param_5);
                    fVar14 = (float)FUN_1403ad8f0(param_1,**(undefined4 **)(param_2 + 0x70),param_5);
                }
                lVar4 = *(longlong *)(param_5 + 0x342);
                fVar18 = 0.0;
                if (lVar4 == 0) {
                    lVar4 = FUN_14022d500(param_5[0x36]);
                    fVar15 = fVar18;
                    if (lVar4 != 0) {
                        fVar15 = *(float *)(lVar4 + 0x28);
                    }
                }
                else {
                    fVar15 = (float)FUN_14047a940(param_5);
                    fVar15 = fVar15 * *(float *)(lVar4 + 0x8c);
                }
                lVar4 = *(longlong *)(piVar6 + 0x342);
                if (lVar4 == 0) {
                    lVar4 = FUN_14022d500(piVar6[0x36]);
                    fVar16 = fVar18;
                    if (lVar4 != 0) {
                        fVar16 = *(float *)(lVar4 + 0x28);
                    }
                }
                else {
                    fVar16 = (float)FUN_14047a940(piVar6);
                    fVar16 = fVar16 * *(float *)(lVar4 + 0x8c);
                }
                fVar20 = param_7;
                piVar9 = (int *)FUN_1407a17d0(fVar19,fVar16,fVar15,uVar13);
                if (((int)piVar9 != 0) && ((int)piVar9 != 0x13d)) {
                    return piVar9;
                }
                lVar4 = *(longlong *)(param_5 + 0x342);
                if (lVar4 == 0) {
                    lVar4 = FUN_14022d500(param_5[0x36]);
                    fVar15 = fVar18;
                    if (lVar4 != 0) {
                        fVar15 = *(float *)(lVar4 + 0x28);
                    }
                }
                else {
                    fVar15 = (float)FUN_14047a940(param_5);
                    fVar15 = fVar15 * *(float *)(lVar4 + 0x8c);
                }
                lVar4 = *(longlong *)(piVar6 + 0x342);
                if (lVar4 == 0) {
                    lVar4 = FUN_14022d500(piVar6[0x36]);
                    fVar16 = fVar18;
                    if (lVar4 != 0) {
                        fVar16 = *(float *)(lVar4 + 0x28);
                    }
                }
                else {
                    fVar16 = (float)FUN_14047a940(piVar6);
                    fVar16 = fVar16 * *(float *)(lVar4 + 0x8c);
                }
                fVar16 = (fVar19 - fVar15) - fVar16;
                if (fVar16 < fVar18) {
                    fVar16 = fVar18;
                }
                if ((fVar20 != fVar18) && (fVar14 != fVar18)) {
                    fVar14 = fVar14 + fVar20;
                }
                if (fVar14 < fVar16) {
                    return (int *)0x69;
                }
                fVar14 = *(float *)(*(longlong *)(param_2 + 0x70) + 0x74);
                piVar9 = piVar5;
                if (-1.0 < fVar14) {
                    lVar4 = *(longlong *)(param_5 + 0x342);
                    if (lVar4 == 0) {
                        lVar4 = FUN_14022d500(param_5[0x36]);
                        fVar19 = fVar18;
                        if (lVar4 != 0) {
                            fVar19 = *(float *)(lVar4 + 0x28);
                        }
                    }
                    else {
                        fVar19 = (float)FUN_14047a940(param_5);
                        fVar19 = fVar19 * *(float *)(lVar4 + 0x8c);
                    }
                    lVar4 = *(longlong *)(piVar6 + 0x342);
                    if (lVar4 == 0) {
                        lVar4 = FUN_14022d500(piVar6[0x36]);
                        fVar15 = fVar18;
                        if (lVar4 != 0) {
                            fVar15 = *(float *)(lVar4 + 0x28);
                        }
                    }
                    else {
                        fVar15 = (float)FUN_14047a940(piVar6);
                        fVar15 = fVar15 * *(float *)(lVar4 + 0x8c);
                    }
                    fVar15 = ((float)((uint)fVar17 & 0x7fffffff) - fVar19) - fVar15;
                    if (fVar15 < fVar18) {
                        fVar15 = fVar18;
                    }
                    if (fVar14 < fVar15) {
                        return (int *)0xb7;
                    }
                    piVar9 = (int *)0x0;
                }
            }
            if (((*(byte *)(piVar6 + 0x41c) & 2) != 0) ||
                (lVar4 = *(longlong *)(param_2 + 0x70), (*(uint *)(lVar4 + 0x108) & 0x4000) == 0)) {
                lVar4 = *(longlong *)(param_2 + 0x70);
                iVar3 = FUN_1400a7a40(piVar6 + 0x478,piVar6 + 0x450,param_5 + 0x478);
                piVar9 = piVar5;
                if (iVar3 == 0) {
                    return (int *)0x65;
                }
            }
            if (((((*(uint *)(lVar4 + 0x10c) >> 0x12 & 1) == 0) && (piVar6 != param_5)) &&
                 (piVar9 = piVar5, (*(uint *)(lVar4 + 0x10c) >> 0xb & 1) == 0)) &&
                (iVar3 = FUN_14047d550(piVar6,param_5), iVar3 == 0)) {
                if (param_8 != (int **)0x0) {
                    param_5._0_4_ = 0xa6;
                    *(undefined4 *)(param_8 + 2) = 0xa6;
                    *(undefined4 *)(param_8 + 3) = 1;
                    if (param_8[1] != (int *)0x0) {
                        piVar6 = *param_8;
                        do {
                            if (*piVar6 == 0xa6) goto LAB_1403b2c2b;
                            if (0xa6 < *piVar6) break;
                            piVar5 = (int *)((longlong)piVar5 + 1);
                            piVar6 = piVar6 + 1;
                        } while (piVar5 < param_8[1]);
                    }
                    FUN_1401c2e70(param_8,piVar5,&param_5);
                }
                LAB_1403b2c2b:
                piVar9 = (int *)0xa6;
            }
        }
    }
    return piVar9;
}



int FUN_1403b2c40(longlong param_1,longlong param_2,int param_3,int param_4)

{
    uint uVar1;
    longlong lVar2;
    uint uVar3;
    int iVar4;

    lVar2 = *(longlong *)(param_1 + 0x70);
    if (param_3 == 0) {
        uVar1 = *(uint *)(lVar2 + 0x158);
        uVar3 = *(uint *)(lVar2 + 0x15c);
    }
    else {
        uVar1 = *(uint *)(lVar2 + 0x14c);
        uVar3 = *(uint *)(lVar2 + 0x150);
    }
    if ((uVar1 & 1) != 0) {
        if ((uVar3 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x2d8) != 0) && (param_4 == 0)) {
                iVar4 = 0x7a;
                if (param_3 != 0) {
                    iVar4 = 0x49;
                }
                return iVar4;
            }
        }
        else if (*(longlong *)(param_2 + 0x2d8) == 0) {
            iVar4 = 0x7b;
            if (param_3 != 0) {
                iVar4 = 0x4a;
            }
            return iVar4;
        }
    }
    if ((uVar1 & 2) != 0) {
        if ((uVar3 & 2) == 0) {
            if ((*(longlong *)(param_2 + 0x2e8) != 0) && (param_4 == 0)) {
                iVar4 = 0x7c;
                if (param_3 != 0) {
                    iVar4 = 0x4b;
                }
                return iVar4;
            }
        }
        else if (*(longlong *)(param_2 + 0x2e8) == 0) {
            iVar4 = 0x7d;
            if (param_3 != 0) {
                iVar4 = 0x4c;
            }
            return iVar4;
        }
    }
    if ((uVar1 & 4) != 0) {
        if ((uVar3 & 4) == 0) {
            if ((*(longlong *)(param_2 + 0x2f8) != 0) && (param_4 == 0)) {
                iVar4 = 0x7e;
                if (param_3 != 0) {
                    iVar4 = 0x4d;
                }
                return iVar4;
            }
        }
        else if (*(longlong *)(param_2 + 0x2f8) == 0) {
            iVar4 = 0x7f;
            if (param_3 != 0) {
                iVar4 = 0x4e;
            }
            return iVar4;
        }
    }
    if ((uVar1 & 8) != 0) {
        if ((uVar3 & 8) == 0) {
            if ((*(longlong *)(param_2 + 0x308) != 0) && (param_4 == 0)) {
                iVar4 = 0x80;
                if (param_3 != 0) {
                    iVar4 = 0x4f;
                }
                return iVar4;
            }
        }
        else if (*(longlong *)(param_2 + 0x308) == 0) {
            iVar4 = 0x81;
            if (param_3 != 0) {
                iVar4 = 0x50;
            }
            return iVar4;
        }
    }
    if ((uVar1 & 0x10) != 0) {
        if ((uVar3 & 0x10) == 0) {
            if ((*(longlong *)(param_2 + 0x318) != 0) && (param_4 == 0)) {
                iVar4 = 0x82;
                if (param_3 != 0) {
                    iVar4 = 0x51;
                }
                return iVar4;
            }
        }
        else if (*(longlong *)(param_2 + 0x318) == 0) {
            iVar4 = 0x83;
            if (param_3 != 0) {
                iVar4 = 0x52;
            }
            return iVar4;
        }
    }
    if ((uVar1 & 0x20) != 0) {
        if ((uVar3 & 0x20) == 0) {
            if ((*(longlong *)(param_2 + 0x328) != 0) && (param_4 == 0)) {
                return 0xc9 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x328) == 0) {
            return 199 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 & 0x40) != 0) {
        if ((uVar3 & 0x40) == 0) {
            if ((*(longlong *)(param_2 + 0x338) != 0) && (param_4 == 0)) {
                iVar4 = 0x86;
                if (param_3 != 0) {
                    iVar4 = 0x55;
                }
                return iVar4;
            }
        }
        else if (*(longlong *)(param_2 + 0x338) == 0) {
            iVar4 = 0x87;
            if (param_3 != 0) {
                iVar4 = 0x56;
            }
            return iVar4;
        }
    }
    if ((char)uVar1 < '\0') {
        if ((char)uVar3 < '\0') {
            if (*(longlong *)(param_2 + 0x348) == 0) {
                return 0xcb - (uint)(param_3 != 0);
            }
        }
        else if ((*(longlong *)(param_2 + 0x348) != 0) && (param_4 == 0)) {
            return 0xcd - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 8 & 1) != 0) {
        if ((uVar3 >> 8 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x358) != 0) && (param_4 == 0)) {
                iVar4 = 0xa1;
                if (param_3 != 0) {
                    iVar4 = 0x9e;
                }
                return iVar4;
            }
        }
        else if (*(longlong *)(param_2 + 0x358) == 0) {
            iVar4 = 0x9a;
            if (param_3 != 0) {
                iVar4 = 0x9d;
            }
            return iVar4;
        }
    }
    if ((uVar1 >> 9 & 1) != 0) {
        if ((uVar3 >> 9 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x368) != 0) && (param_4 == 0)) goto LAB_1403b2eeb;
        }
        else if (*(longlong *)(param_2 + 0x368) == 0) {
            return (param_3 != 0) + 0x9b;
        }
    }
    if ((uVar1 >> 10 & 1) != 0) {
        if ((uVar3 >> 10 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x378) != 0) && (param_4 == 0)) {
                LAB_1403b2eeb:
                return 0xa0 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x378) == 0) {
            return (param_3 != 0) + 0x9b;
        }
    }
    if ((uVar1 >> 0xb & 1) != 0) {
        if ((uVar3 >> 0xb & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x388) != 0) && (param_4 == 0)) {
                return 0xd1 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x388) == 0) {
            return 0xcf - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0xc & 1) != 0) {
        if ((uVar3 >> 0xc & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x398) != 0) && (param_4 == 0)) {
                return 0xd5 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x398) == 0) {
            return 0xd3 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0xd & 1) != 0) {
        if ((uVar3 >> 0xd & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x3a8) != 0) && (param_4 == 0)) {
                return 0xd9 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x3a8) == 0) {
            return 0xd7 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0xe & 1) != 0) {
        if ((uVar3 >> 0xe & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x3b8) != 0) && (param_4 == 0)) {
                return 0xdd - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x3b8) == 0) {
            return 0xdb - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0xf & 1) != 0) {
        if ((uVar3 >> 0xf & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x3c8) != 0) && (param_4 == 0)) {
                return 0xe1 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x3c8) == 0) {
            return 0xdf - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x10 & 1) != 0) {
        if ((uVar3 >> 0x10 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x3d8) != 0) && (param_4 == 0)) {
                return 0xe5 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x3d8) == 0) {
            return 0xe3 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x11 & 1) != 0) {
        if ((uVar3 >> 0x11 & 1) == 0) {
            if ((*(longlong *)(param_2 + 1000) != 0) && (param_4 == 0)) {
                return 0xe9 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 1000) == 0) {
            return 0xe7 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
        if ((uVar3 >> 0x12 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x3f8) != 0) && (param_4 == 0)) {
                return 0xed - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x3f8) == 0) {
            return 0xeb - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x13 & 1) != 0) {
        if ((uVar3 >> 0x13 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x408) != 0) && (param_4 == 0)) {
                return 0xf1 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x408) == 0) {
            return 0xef - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x14 & 1) != 0) {
        if ((uVar3 >> 0x14 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x418) != 0) && (param_4 == 0)) {
                return 0xf5 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x418) == 0) {
            return 0xf3 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x15 & 1) != 0) {
        if ((uVar3 >> 0x15 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x428) != 0) && (param_4 == 0)) {
                return 0xf9 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x428) == 0) {
            return 0xf7 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
        if ((uVar3 >> 0x16 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x438) != 0) && (param_4 == 0)) {
                return 0x105 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x438) == 0) {
            return 0x103 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
        if ((uVar3 >> 0x17 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x448) != 0) && (param_4 == 0)) {
                return 0x10b - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x448) == 0) {
            return 0x109 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x18 & 1) != 0) {
        if ((uVar3 >> 0x18 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x458) != 0) && (param_4 == 0)) {
                return 0x110 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x458) == 0) {
            return 0x10e - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x19 & 1) != 0) {
        if ((uVar3 >> 0x19 & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x468) != 0) && (param_4 == 0)) {
                return 0x125 - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x468) == 0) {
            return 0x123 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x1a & 1) != 0) {
        if ((uVar3 >> 0x1a & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x478) != 0) && (param_4 == 0)) {
                return 0x12a - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x478) == 0) {
            return 0x128 - (uint)(param_3 != 0);
        }
    }
    if ((uVar1 >> 0x1b & 1) != 0) {
        if ((uVar3 >> 0x1b & 1) == 0) {
            if ((*(longlong *)(param_2 + 0x488) != 0) && (param_4 == 0)) {
                return 0x12f - (uint)(param_3 != 0);
            }
        }
        else if (*(longlong *)(param_2 + 0x488) == 0) {
            return 0x12d - (uint)(param_3 != 0);
        }
    }
    return 0;
}



undefined8 FUN_1403b3320(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4)

{
    longlong lVar1;
    uint uVar2;
    int iVar3;
    uint uVar4;
    undefined8 uVar5;
    longlong *plVar6;
    int iVar7;
    uint uVar8;
    bool bVar9;
    bool bVar10;
    float fVar11;
    float fVar12;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;

    lVar1 = *(longlong *)(param_2 + 0x70);
    iVar3 = *(int *)(lVar1 + 0xa8 + param_1 * 4);
    if ((iVar3 == 0) || (0x1e < iVar3)) {
        return 0;
    }
    uVar2 = *(uint *)(lVar1 + 0xb0 + param_1 * 4);
    if (uVar2 == 0) {
        return 0;
    }
    if ((int)uVar2 < 0) {
        uVar4 = (int)uVar2 >> 0x1f;
        switch(iVar3 + -1) {
            case 0:
            switchD_1403b37bd_caseD_0:
                uVar2 = (**(code **)(*param_3 + 0x40))(param_3);
                if (uVar2 < *(uint *)(lVar1 + 0xb0 + param_1 * 4)) {
                    return 0x2c;
                }
                break;
            default:
            switchD_1403b37bd_caseD_1:
                if ((*(longlong **)(DAT_140c65898 + 0x78) == param_3) &&
                    (*(longlong **)(DAT_140c65898 + 0x6d90) != (longlong *)0x0)) {
                    uVar5 = (**(code **)(**(longlong **)(DAT_140c65898 + 0x6d90) + 0x78))();
                    return uVar5;
                }
                return 0xaf;
            case 2:
                uVar8 = (**(code **)(*param_3 + 0x70))();
                if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) <
                    (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0xb0;
                }
                break;
            case 4:
                uVar8 = (int)*(float *)((longlong)param_3 + 0x21c) >> 0x1f;
                if ((int)(((int)*(float *)((longlong)param_3 + 0x21c) ^ uVar8) - uVar8) <
                    (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0x32;
                }
                break;
            case 5:
                uVar8 = (int)*(float *)(param_3 + 0x44) >> 0x1f;
                if ((int)(((int)*(float *)(param_3 + 0x44) ^ uVar8) - uVar8) < (int)((uVar2 ^ uVar4) - uVar4))
                {
                    return 0x33;
                }
                break;
            case 6:
                uVar8 = (int)*(float *)((longlong)param_3 + 0x224) >> 0x1f;
                if ((int)(((int)*(float *)((longlong)param_3 + 0x224) ^ uVar8) - uVar8) <
                    (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0x34;
                }
                break;
            case 7:
                uVar8 = (int)*(float *)(param_3 + 0x45) >> 0x1f;
                if ((int)(((int)*(float *)(param_3 + 0x45) ^ uVar8) - uVar8) < (int)((uVar2 ^ uVar4) - uVar4))
                {
                    return 0x35;
                }
                break;
            case 8:
                uVar8 = (int)*(float *)((longlong)param_3 + 0x22c) >> 0x1f;
                if ((int)(((int)*(float *)((longlong)param_3 + 0x22c) ^ uVar8) - uVar8) <
                    (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0x36;
                }
                break;
            case 9:
                uVar8 = (int)*(float *)(param_3 + 0x46) >> 0x1f;
                if ((int)(((int)*(float *)(param_3 + 0x46) ^ uVar8) - uVar8) < (int)((uVar2 ^ uVar4) - uVar4))
                {
                    return 0x37;
                }
                break;
            case 10:
                uVar8 = (int)*(float *)((longlong)param_3 + 0x234) >> 0x1f;
                if ((int)(((int)*(float *)((longlong)param_3 + 0x234) ^ uVar8) - uVar8) <
                    (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0x38;
                }
                break;
            case 0xe:
                fVar12 = *(float *)(param_3 + 0x43);
                fVar11 = (float)FUN_140462a90();
                uVar2 = (uint)(fVar11 * (float)(ulonglong)*(uint *)(lVar1 + 0xb0 + param_1 * 4) + 0.5);
                uVar4 = (int)uVar2 >> 0x1f;
                uVar8 = (int)fVar12 >> 0x1f;
                if ((int)(((int)fVar12 ^ uVar8) - uVar8) < (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0xa7;
                }
                break;
            case 0xf:
                uVar8 = (int)*(float *)(param_3 + 0x47) >> 0x1f;
                if ((int)(((int)*(float *)(param_3 + 0x47) ^ uVar8) - uVar8) < (int)((uVar2 ^ uVar4) - uVar4))
                {
                    return 0xb1;
                }
                break;
            case 0x13:
                uVar8 = (int)*(uint *)(param_3 + 0x96) >> 0x1f;
                if ((int)((*(uint *)(param_3 + 0x96) ^ uVar8) - uVar8) < (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0xfa;
                }
                break;
            case 0x14:
                uVar8 = (**(code **)(*param_3 + 0x88))();
                if ((int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) <
                    (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0xfe;
                }
                break;
            case 0x15:
                plVar6 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 7),0);
                if ((plVar6 == (longlong *)0x0) || (iVar3 = (**(code **)(*plVar6 + 0x40))(), iVar3 != 0)) {
                    fVar12 = 0.0;
                }
                else {
                    uVar8 = (**(code **)(*plVar6 + 0x98))();
                    fVar12 = (float)(ulonglong)uVar8;
                }
                uVar8 = (int)fVar12 >> 0x1f;
                if ((int)(((int)fVar12 ^ uVar8) - uVar8) < (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0x113;
                }
                break;
            case 0x16:
                plVar6 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)((longlong)DAT_140c65980 + 0x3c),0);
                if ((plVar6 == (longlong *)0x0) || (iVar3 = (**(code **)(*plVar6 + 0x40))(), iVar3 != 1)) {
                    fVar12 = 0.0;
                }
                else {
                    uVar8 = (**(code **)(*plVar6 + 0x98))();
                    fVar12 = (float)(ulonglong)uVar8;
                }
                uVar8 = (int)fVar12 >> 0x1f;
                if ((int)(((int)fVar12 ^ uVar8) - uVar8) < (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0x114;
                }
                break;
            case 0x17:
                plVar6 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 8),0);
                if ((plVar6 == (longlong *)0x0) || (iVar3 = (**(code **)(*plVar6 + 0x40))(), iVar3 != 2)) {
                    fVar12 = 0.0;
                }
                else {
                    uVar8 = (**(code **)(*plVar6 + 0x98))();
                    fVar12 = (float)(ulonglong)uVar8;
                }
                uVar8 = (int)fVar12 >> 0x1f;
                iVar7 = ((int)fVar12 ^ uVar8) - uVar8;
                iVar3 = (uVar2 ^ uVar4) - uVar4;
                bVar10 = SBORROW4(iVar7,iVar3);
                bVar9 = iVar7 - iVar3 < 0;
            LAB_1403b374e:
                if (bVar10 != bVar9) {
                    return 0x115;
                }
                break;
            case 0x1a:
                uVar8 = (int)*(float *)((longlong)param_3 + 0x23c) >> 0x1f;
                if ((int)(((int)*(float *)((longlong)param_3 + 0x23c) ^ uVar8) - uVar8) <
                    (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0x147;
                }
                break;
            case 0x1b:
                uVar8 = (int)*(float *)(param_3 + 0x48) >> 0x1f;
                if ((int)(((int)*(float *)(param_3 + 0x48) ^ uVar8) - uVar8) < (int)((uVar2 ^ uVar4) - uVar4))
                {
                    return 0x148;
                }
                break;
            case 0x1c:
                uVar8 = (int)*(float *)((longlong)param_3 + 0x244) >> 0x1f;
                if ((int)(((int)*(float *)((longlong)param_3 + 0x244) ^ uVar8) - uVar8) <
                    (int)((uVar2 ^ uVar4) - uVar4)) {
                    return 0x149;
                }
        }
    }
    else {
        switch(iVar3 + -1) {
            case 0:
                goto switchD_1403b37bd_caseD_0;
            default:
                goto switchD_1403b37bd_caseD_1;
            case 2:
                iVar3 = (**(code **)(*param_3 + 0x70))(param_3);
                if (iVar3 < (int)uVar2) {
                    return 0xb0;
                }
                break;
            case 4:
                if ((int)*(float *)((longlong)param_3 + 0x21c) < (int)uVar2) {
                    return 0x32;
                }
                break;
            case 5:
                if ((int)*(float *)(param_3 + 0x44) < (int)uVar2) {
                    return 0x33;
                }
                break;
            case 6:
                if ((int)*(float *)((longlong)param_3 + 0x224) < (int)uVar2) {
                    return 0x34;
                }
                break;
            case 7:
                if ((int)*(float *)(param_3 + 0x45) < (int)uVar2) {
                    return 0x35;
                }
                break;
            case 8:
                if ((int)*(float *)((longlong)param_3 + 0x22c) < (int)uVar2) {
                    return 0x36;
                }
                break;
            case 9:
                if ((int)*(float *)(param_3 + 0x46) < (int)uVar2) {
                    return 0x37;
                }
                break;
            case 10:
                if ((int)*(float *)((longlong)param_3 + 0x234) < (int)uVar2) {
                    return 0x38;
                }
                break;
            case 0xe:
                fVar12 = *(float *)(param_3 + 0x43);
                fVar11 = (float)FUN_140462a90();
                if ((int)fVar12 <
                    (int)(fVar11 * (float)(ulonglong)*(uint *)(lVar1 + 0xb0 + param_1 * 4) + 0.5)) {
                    return 0xa7;
                }
                break;
            case 0xf:
                if ((int)*(float *)(param_3 + 0x47) < (int)uVar2) {
                    return 0xb1;
                }
                break;
            case 0x13:
                if (*(int *)(param_3 + 0x96) < (int)uVar2) {
                    return 0xfa;
                }
                break;
            case 0x14:
                iVar3 = (**(code **)(*param_3 + 0x88))(param_3);
                if (iVar3 < (int)uVar2) {
                    return 0xfe;
                }
                break;
            case 0x15:
                plVar6 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 7),0);
                if ((plVar6 == (longlong *)0x0) || (iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6), iVar3 != 0)
                        ) {
                    fVar12 = 0.0;
                }
                else {
                    uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
                    fVar12 = (float)(ulonglong)uVar4;
                }
                if ((int)fVar12 < (int)uVar2) {
                    return 0x113;
                }
                break;
            case 0x16:
                plVar6 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)((longlong)DAT_140c65980 + 0x3c),0);
                if ((plVar6 == (longlong *)0x0) || (iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6), iVar3 != 1)
                        ) {
                    fVar12 = 0.0;
                }
                else {
                    uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
                    fVar12 = (float)(ulonglong)uVar4;
                }
                if ((int)fVar12 < (int)uVar2) {
                    return 0x114;
                }
                break;
            case 0x17:
                plVar6 = (longlong *)
                        (**(code **)(*DAT_140c65980 + 0x28))
                        (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 8),0,param_4,
                         CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
                        );
                if ((plVar6 == (longlong *)0x0) || (iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6), iVar3 != 2)
                        ) {
                    bVar10 = false;
                    bVar9 = 0 < (int)uVar2;
                }
                else {
                    uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
                    bVar10 = SBORROW4((int)(float)(ulonglong)uVar4,uVar2);
                    bVar9 = (int)((int)(float)(ulonglong)uVar4 - uVar2) < 0;
                }
                goto LAB_1403b374e;
            case 0x1a:
                if ((int)*(float *)((longlong)param_3 + 0x23c) < (int)uVar2) {
                    return 0x147;
                }
                break;
            case 0x1b:
                if ((int)*(float *)(param_3 + 0x48) < (int)uVar2) {
                    return 0x148;
                }
                break;
            case 0x1c:
                if ((int)*(float *)((longlong)param_3 + 0x244) < (int)uVar2) {
                    return 0x149;
                }
        }
    }
    return 0;
}



int FUN_1403b3bb0(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    ulonglong uVar8;

    iVar4 = 0;
    iVar5 = 0;
    if (*(uint *)(param_1 + 4) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        uVar8 = (ulonglong)*(uint *)(param_1 + 4);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x140) == param_3)) {
                iVar6 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar6 = *(int *)(lVar1 + 0x78);
                }
                iVar5 = iVar5 + iVar6;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    iVar6 = 0;
    if (*(uint *)(param_1 + 0x1c) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x28);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x1c);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x140) == param_3)) {
                iVar7 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar7 = *(int *)(lVar1 + 0x78);
                }
                iVar6 = iVar6 + iVar7;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    iVar7 = 0;
    if (*(uint *)(param_1 + 0x7c) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x88);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x7c);
        iVar7 = 0;
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x140) == param_3)) {
                iVar2 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar2 = *(int *)(lVar1 + 0x78);
                }
                iVar7 = iVar7 + iVar2;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    if (*(uint *)(param_1 + 0x94) != 0) {
        plVar3 = *(longlong **)(param_1 + 0xa0);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x94);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x140) == param_3)) {
                iVar2 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar2 = *(int *)(lVar1 + 0x78);
                }
                iVar4 = iVar4 + iVar2;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    return iVar4 + iVar6 + iVar5 + iVar7;
}



int FUN_1403b3cf0(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    ulonglong uVar8;

    iVar4 = 0;
    iVar5 = 0;
    if (*(uint *)(param_1 + 4) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        uVar8 = (ulonglong)*(uint *)(param_1 + 4);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x148) == param_3)) {
                iVar6 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar6 = *(int *)(lVar1 + 0x78);
                }
                iVar5 = iVar5 + iVar6;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    iVar6 = 0;
    if (*(uint *)(param_1 + 0x1c) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x28);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x1c);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x148) == param_3)) {
                iVar7 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar7 = *(int *)(lVar1 + 0x78);
                }
                iVar6 = iVar6 + iVar7;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    iVar7 = 0;
    if (*(uint *)(param_1 + 0x7c) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x88);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x7c);
        iVar7 = 0;
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x148) == param_3)) {
                iVar2 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar2 = *(int *)(lVar1 + 0x78);
                }
                iVar7 = iVar7 + iVar2;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    if (*(uint *)(param_1 + 0x94) != 0) {
        plVar3 = *(longlong **)(param_1 + 0xa0);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x94);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x148) == param_3)) {
                iVar2 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar2 = *(int *)(lVar1 + 0x78);
                }
                iVar4 = iVar4 + iVar2;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    return iVar4 + iVar6 + iVar5 + iVar7;
}



int FUN_1403b3e30(longlong param_1,undefined8 param_2,int param_3)

{
    longlong lVar1;
    int iVar2;
    longlong *plVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    ulonglong uVar8;

    iVar4 = 0;
    iVar5 = 0;
    if (*(uint *)(param_1 + 4) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        uVar8 = (ulonglong)*(uint *)(param_1 + 4);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x144) == param_3)) {
                iVar6 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar6 = *(int *)(lVar1 + 0x78);
                }
                iVar5 = iVar5 + iVar6;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    iVar6 = 0;
    if (*(uint *)(param_1 + 0x1c) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x28);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x1c);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x144) == param_3)) {
                iVar7 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar7 = *(int *)(lVar1 + 0x78);
                }
                iVar6 = iVar6 + iVar7;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    iVar7 = 0;
    if (*(uint *)(param_1 + 0x7c) != 0) {
        plVar3 = *(longlong **)(param_1 + 0x88);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x7c);
        iVar7 = 0;
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x144) == param_3)) {
                iVar2 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar2 = *(int *)(lVar1 + 0x78);
                }
                iVar7 = iVar7 + iVar2;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    if (*(uint *)(param_1 + 0x94) != 0) {
        plVar3 = *(longlong **)(param_1 + 0xa0);
        uVar8 = (ulonglong)*(uint *)(param_1 + 0x94);
        do {
            lVar1 = *plVar3;
            if ((lVar1 != 0) && (*(int *)(*(longlong *)(lVar1 + 0x40) + 0x144) == param_3)) {
                iVar2 = 1;
                if (*(int *)(lVar1 + 0x78) != 0) {
                    iVar2 = *(int *)(lVar1 + 0x78);
                }
                iVar4 = iVar4 + iVar2;
            }
            plVar3 = plVar3 + 1;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    return iVar4 + iVar6 + iVar5 + iVar7;
}



byte FUN_1403b3f70(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    longlong lVar1;
    int iVar2;
    undefined4 *puVar3;
    ulonglong uVar4;
    uint uVar5;
    uint uVar6;
    uint uVar7;

    if ((param_3 == 0) || (puVar3 = (undefined4 *)FUN_140245c00(), puVar3 == (undefined4 *)0x0)) {
        return 0;
    }
    uVar6 = 0;
    uVar5 = 0;
    uVar7 = 0;
    if (*(ulonglong *)(param_3 + 0x16a0) != 0) {
        uVar4 = 0;
        do {
            uVar7 = uVar6;
            if (*(int *)(*(longlong *)(*(longlong *)(param_3 + 0x1698) + uVar4 * 8) + 8) == puVar3[2]) {
                lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x1698) + (ulonglong)uVar5 * 8);
                if ((lVar1 != 0) && (*(int *)(lVar1 + 0xc) != 0)) {
                    uVar7 = *(uint *)(lVar1 + 0x54);
                }
                break;
            }
            uVar5 = uVar5 + 1;
            uVar4 = (ulonglong)uVar5;
        } while (uVar4 < *(ulonglong *)(param_3 + 0x16a0));
    }
    if ((uint)puVar3[7] <= uVar7) {
        iVar2 = FUN_1405e5e70(param_3 + 0x1698,*puVar3);
        return -(iVar2 != 0) & 0xb4;
    }
    return 0xb5;
}



longlong FUN_1403b4020(undefined8 param_1,longlong param_2,longlong *param_3)

{
    int iVar1;
    longlong lVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    longlong *plVar6;
    bool bVar7;
    undefined8 extraout_XMM0_Qa;
    undefined8 extraout_XMM0_Qa_00;
    undefined8 extraout_XMM0_Qa_01;
    undefined8 extraout_XMM0_Qa_02;
    undefined8 extraout_XMM0_Qa_03;
    undefined8 extraout_XMM0_Qa_04;
    undefined8 extraout_XMM0_Qa_05;
    undefined8 extraout_XMM0_Qa_06;
    float fVar8;
    float local_4c;
    float local_48;

    lVar2 = *(longlong *)(param_2 + 0x40);
    if (lVar2 == 0) {
        return lVar2;
    }
    iVar5 = *(int *)(lVar2 + 0x18);
    iVar1 = *(int *)(lVar2 + 0x1c);
    fVar8 = (float)*(int *)(lVar2 + 0x20);
    switch(iVar5) {
        case 1:
            uVar4 = (**(code **)(*param_3 + 0x40))(param_3);
            local_4c = (float)(ulonglong)uVar4;
            uVar4 = (**(code **)(*param_3 + 0x48))(param_3);
            local_48 = (float)(ulonglong)uVar4;
            param_1 = extraout_XMM0_Qa;
            break;
        case 5:
            local_4c = *(float *)((longlong)param_3 + 0x21c);
            local_48 = *(float *)((longlong)param_3 + 0x60c);
            break;
        case 6:
            local_4c = *(float *)(param_3 + 0x44);
            local_48 = *(float *)((longlong)param_3 + 0x614);
            break;
        case 7:
            local_4c = *(float *)((longlong)param_3 + 0x224);
            local_48 = *(float *)((longlong)param_3 + 0x61c);
            break;
        case 8:
            local_4c = *(float *)(param_3 + 0x45);
            local_48 = *(float *)((longlong)param_3 + 0x624);
            break;
        case 9:
            local_4c = *(float *)((longlong)param_3 + 0x22c);
            local_48 = *(float *)((longlong)param_3 + 0x62c);
            break;
        case 10:
            local_4c = *(float *)(param_3 + 0x46);
            local_48 = *(float *)((longlong)param_3 + 0x634);
            break;
        case 0xb:
            local_4c = *(float *)((longlong)param_3 + 0x234);
            local_48 = *(float *)((longlong)param_3 + 0x63c);
            break;
        case 0x10:
            local_4c = *(float *)(param_3 + 0x47);
            local_48 = *(float *)((longlong)param_3 + 0x6f4);
            break;
        case 0x16:
            plVar6 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 7),0);
            local_4c = 0.0;
            local_48 = local_4c;
            if ((plVar6 != (longlong *)0x0) &&
                (iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6), local_48 = local_4c, iVar3 == 0)) {
                uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
                local_4c = (float)(ulonglong)uVar4;
            }
            plVar6 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 7),0);
            param_1 = extraout_XMM0_Qa_00;
            if (plVar6 == (longlong *)0x0) break;
            iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6);
            bVar7 = iVar3 == 0;
            param_1 = extraout_XMM0_Qa_01;
            goto LAB_1403b420b;
        case 0x17:
            plVar6 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)((longlong)DAT_140c65980 + 0x3c),0);
            local_4c = 0.0;
            local_48 = local_4c;
            if ((plVar6 != (longlong *)0x0) &&
                (iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6), local_48 = local_4c, iVar3 == 1)) {
                uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
                local_4c = (float)(ulonglong)uVar4;
            }
            plVar6 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)((longlong)DAT_140c65980 + 0x3c),0);
            param_1 = extraout_XMM0_Qa_03;
            if (plVar6 == (longlong *)0x0) break;
            iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6);
            bVar7 = iVar3 == 1;
            param_1 = extraout_XMM0_Qa_04;
            goto LAB_1403b420b;
        case 0x18:
            plVar6 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 8),0);
            local_4c = 0.0;
            local_48 = local_4c;
            if ((plVar6 != (longlong *)0x0) &&
                (iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6), local_48 = local_4c, iVar3 == 2)) {
                uVar4 = (**(code **)(*plVar6 + 0x98))(plVar6);
                local_4c = (float)(ulonglong)uVar4;
            }
            plVar6 = (longlong *)
                    (**(code **)(*DAT_140c65980 + 0x28))
                    (DAT_140c65980,*(undefined4 *)(DAT_140c65980 + 8),0);
            param_1 = extraout_XMM0_Qa_05;
            if (plVar6 == (longlong *)0x0) break;
            iVar3 = (**(code **)(*plVar6 + 0x40))(plVar6);
            bVar7 = iVar3 == 2;
            param_1 = extraout_XMM0_Qa_06;
        LAB_1403b420b:
            if (bVar7) {
                uVar4 = (**(code **)(*plVar6 + 0x80))(plVar6);
                local_48 = (float)(ulonglong)uVar4;
                param_1 = extraout_XMM0_Qa_02;
            }
            break;
        case 0x1b:
            local_4c = *(float *)((longlong)param_3 + 0x23c);
            local_48 = *(float *)((longlong)param_3 + 0x754);
            break;
        case 0x1c:
            local_4c = *(float *)(param_3 + 0x48);
            local_48 = *(float *)((longlong)param_3 + 0x764);
            break;
        case 0x1d:
            local_4c = *(float *)((longlong)param_3 + 0x244);
            local_48 = *(float *)((longlong)param_3 + 0x774);
    }
    if (iVar5 != 0) {
        if (4 < iVar1) {
            local_4c = (local_4c * 100.0) / local_48;
        }
        iVar5 = FUN_1407a1750(param_1,local_4c,fVar8,iVar1);
        if (iVar5 == 0) {
            return 0x62;
        }
    }
    return 0;
}



undefined8 FUN_1403b43f0(longlong param_1,undefined8 param_2,longlong param_3)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;

    lVar2 = *(longlong *)(param_1 + 0x70);
    iVar1 = *(int *)(lVar2 + 0xf4);
    if (iVar1 == 0) {
        if (*(int *)(param_3 + 0x51c) != 0) {
            return 0x5c;
        }
        if ((*(int *)(param_3 + 0x52c) != 0) && ((*(uint *)(lVar2 + 0x10c) & 0x4000000) == 0)) {
            return 0x5c;
        }
        if (*(int *)(param_3 + 0x538) == 0) {
            return 0;
        }
        uVar3 = *(uint *)(lVar2 + 0x10c);
    }
    else {
        if (iVar1 == 1) {
            if (*(int *)(param_3 + 0x520) != 0) {
                return 0x5c;
            }
            if ((*(int *)(param_3 + 0x530) != 0) && ((*(uint *)(lVar2 + 0x10c) & 0x4000000) == 0)) {
                return 0x5c;
            }
            iVar1 = *(int *)(param_3 + 0x53c);
        }
        else {
            uVar3 = iVar1 - 2;
            if (iVar1 != 2) {
                return 0;
            }
            if (uVar3 <= *(uint *)(param_3 + 0x524) && *(uint *)(param_3 + 0x524) != uVar3) {
                return 0x5c;
            }
            if ((uVar3 <= *(uint *)(param_3 + 0x534) && *(uint *)(param_3 + 0x534) != uVar3) &&
                ((*(uint *)(lVar2 + 0x10c) & 0x4000000) == 0)) {
                return 0x5c;
            }
            iVar1 = *(int *)(param_3 + 0x540);
        }
        if (iVar1 == 0) {
            return 0;
        }
        uVar3 = *(uint *)(lVar2 + 0x10c);
    }
    if ((uVar3 & 0x4000000) != 0) {
        return 0x5c;
    }
    return 0;
}



undefined8
FUN_1403b44b0(undefined8 param_1,int param_2,int param_3,longlong param_4,longlong param_5,
              undefined8 param_6)

{
    int iVar1;
    undefined8 uVar2;
    undefined **local_18;
    longlong local_10;

    if (param_5 != 0) {
        iVar1 = FUN_14046c580(param_4,param_6);
        if (iVar1 == param_2) {
            return 0;
        }
        if ((*(byte *)(param_4 + 0x24) & 1) != 0) {
            if (param_3 == 0) {
                return 0x59;
            }
            goto LAB_1403b4501;
        }
    }
    if (param_3 == 0) {
        return 0;
    }
    LAB_1403b4501:
    local_18 = &PTR_FUN_140b66440;
    if (param_3 == 0) {
        return 0;
    }
    local_10 = param_4;
    uVar2 = FUN_1403b4a10(&local_18,param_3);
    uVar2 = FUN_1403b4a20(&local_18,uVar2);
    return uVar2;
}



undefined8
FUN_1403b4560(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
    uint uVar1;
    int iVar2;
    undefined8 uVar3;

    if (param_3 == param_4) {
        return 0;
    }
    if (param_4 == 0) {
        return 0;
    }
    iVar2 = FUN_14045a950();
    if (iVar2 == 2) {
        if ((*(int *)(param_2 + 0x6ee4) != 3) || (*(int *)(param_4 + 8) != *(int *)(param_2 + 0x6ee0)))
        {
            iVar2 = FUN_1403b48b0(param_4);
            if (((iVar2 != 0) &&
                 ((*(longlong *)(param_2 + 0x78) == 0 || (iVar2 = FUN_1403b48b0(), iVar2 == 0)))) &&
                ((*(longlong *)(DAT_140c65898 + 0x7258) == 0 ||
                  (*(int *)(*(longlong *)(DAT_140c65898 + 0x7258) + 0x14) == 0)))) {
                return 0x143;
            }
            if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x110) & 0x10) != 0) {
                return 0;
            }
            if ((*(uint *)(*(longlong *)(param_1 + 0x70) + 0x10c) & 0x80000000) != 0) {
                return 0;
            }
            return 99;
        }
    }
    else {
        if ((param_5 != 0) &&
            ((*(int *)(param_2 + 0x6ee4) != 3 || (*(int *)(param_4 + 8) != *(int *)(param_2 + 0x6ee0)))))
        {
            uVar3 = 99;
            if ((*(uint *)(*(longlong *)(param_1 + 0x70) + 0x10c) & 0x4000000) != 0) {
                uVar3 = 0;
            }
            return uVar3;
        }
        iVar2 = FUN_1403b48b0(param_4);
        if (iVar2 == 0) {
            return 0x142;
        }
        if (*(longlong *)(param_2 + 0x78) == 0) {
            return 0x143;
        }
        iVar2 = FUN_1403b48b0();
        if (iVar2 == 0) {
            return 0x143;
        }
    }
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0x110);
    if ((((uVar1 & 0x10) == 0) &&
         ((*(uint *)(*(longlong *)(param_1 + 0x70) + 0x10c) & 0x4000000) != 0)) && ((uVar1 & 1) == 0))
    {
        return 99;
    }
    return 0;
}



byte FUN_1403b4710(longlong param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;
    byte bVar2;
    uint uVar3;
    int iVar4;
    char cVar5;
    uint uVar6;

    if (param_2 == 0) {
        return 6;
    }
    if (param_3 == 0) {
        param_3 = param_2 + 8;
    }
    lVar1 = *(longlong *)(param_1 + 0x78);
    if (lVar1 == 0) {
        cVar5 = '\x11';
    }
    else {
        cVar5 = (char)*(undefined4 *)(lVar1 + 0xd8);
    }
    if ((*(uint *)(param_2 + 400) != 0) &&
        ((1 << (cVar5 - 1U & 0x1f) & *(uint *)(param_2 + 400)) == 0)) {
        return 0x27;
    }
    if (lVar1 == 0) {
        cVar5 = '\x17';
    }
    else {
        cVar5 = (char)*(undefined4 *)(lVar1 + 0xdc);
    }
    if ((*(uint *)(param_2 + 0x18c) != 0) &&
        ((1 << (cVar5 - 1U & 0x1f) & *(uint *)(param_2 + 0x18c)) == 0)) {
        return 0x28;
    }
    uVar6 = 0;
    uVar3 = uVar6;
    if (*(longlong **)(param_1 + 0x1bf0) != (longlong *)0x0) {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x1bf0) + 0x18))();
    }
    if ((*(uint *)(param_2 + 0x194) == 0) || (*(uint *)(param_2 + 0x194) == uVar3)) {
        if (((*(int *)(param_2 + 0x198) == 0) ||
             (iVar4 = (**(code **)(*DAT_140c659a0 + 0x18))
                     (DAT_140c659a0,*(undefined8 *)(param_1 + 0x78),*(int *)(param_2 + 0x198),
                      0,0,0), iVar4 != 0)) &&
            ((*(int *)(param_3 + 0x110) == 0 ||
              (iVar4 = (**(code **)(*DAT_140c659a0 + 0x18))
                      (DAT_140c659a0,*(undefined8 *)(param_1 + 0x78),*(int *)(param_3 + 0x110),
                       0,0,0), iVar4 != 0)))) {
            iVar4 = FUN_1403ca2b0(param_1,*(undefined4 *)(param_2 + 0x19c));
            if (iVar4 == 0) {
                bVar2 = 0x29;
            }
            else {
                if (*(longlong *)(param_1 + 0x78) != 0) {
                    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x38);
                }
                bVar2 = -(uVar6 < *(uint *)(param_3 + 8)) & 0x2a;
            }
        }
        else {
            bVar2 = 0x90;
        }
    }
    else {
        bVar2 = 0x84;
    }
    return bVar2;
}



undefined8 FUN_1403b48b0(longlong param_1)

{
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;

    if ((*(byte *)(param_1 + 0x15a8) & 1) != 0) {
        return 1;
    }
    if (((*(int *)(param_1 + 0x80) - 3U & 0xfffffffb) == 0) && (lVar2 = FUN_14047b670(), lVar2 != 0))
    {
        uVar3 = FUN_14047b670(param_1);
        iVar1 = FUN_1403b48b0(uVar3);
        if (iVar1 != 0) {
            return 1;
        }
    }
    return 0;
}



undefined8 * FUN_1403b4910(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b66400;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1,0);
    }
    return param_1;
}



void FUN_1403b4a10(undefined8 param_1,undefined4 param_2)

{
    FUN_140240b40(param_2);
    return;
}



ulonglong FUN_1403b4a20(longlong *param_1,int *param_2)

{
    int iVar1;
    ulonglong uVar2;
    uint uVar3;
    uint uVar4;
    int *piVar5;

    if (param_2 == (int *)0x0) {
        return 0x59;
    }
    switch(param_2[2]) {
        case 1:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x10))();
            uVar4 = 0;
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c5a;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
            uVar2 = 0x59;
            break;
        case 2:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x10))();
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c55;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
            uVar2 = 0;
            break;
        case 3:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x30))();
            uVar4 = 0;
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c5a;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
            uVar2 = 0x59;
            break;
        case 4:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x30))();
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c55;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
            uVar2 = 0;
            break;
        case 5:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x20))();
            uVar4 = 0;
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c5a;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
            uVar2 = 0x59;
            break;
        case 6:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x20))();
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c55;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
            uVar2 = 0;
            break;
        case 7:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x28))();
            uVar4 = 0;
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c5a;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
            uVar2 = 0x59;
            break;
        case 8:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x28))();
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c55;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
            uVar2 = 0;
            break;
        case 9:
            uVar2 = (**(code **)(*param_1 + 0x18))(param_1,param_2 + 3,7);
            break;
        case 10:
            uVar3 = 0;
            piVar5 = param_2 + 3;
            do {
                if ((*piVar5 != 0) && (*param_2 != *piVar5)) {
                    (**(code **)(*param_1 + 8))(param_1);
                    iVar1 = FUN_1403b4a20(param_1);
                    if ((iVar1 != 0) && (iVar1 != 0x13d)) goto switchD_1403b4a71_caseD_d;
                }
                uVar3 = uVar3 + 1;
                piVar5 = piVar5 + 1;
            } while (uVar3 < 7);
        LAB_1403b4cc9:
            uVar2 = 0;
            break;
        case 0xb:
            uVar3 = 0;
            piVar5 = param_2 + 3;
            do {
                if ((*piVar5 != 0) && (*param_2 != *piVar5)) {
                    (**(code **)(*param_1 + 8))(param_1);
                    iVar1 = FUN_1403b4a20(param_1);
                    if ((iVar1 == 0) || (iVar1 == 0x13d)) goto LAB_1403b4cc9;
                }
                uVar3 = uVar3 + 1;
                piVar5 = piVar5 + 1;
            } while (uVar3 < 7);
        default:
        switchD_1403b4a71_caseD_d:
            uVar2 = 0x59;
            break;
        case 0xc:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x38))();
            uVar4 = 0;
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c5a;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
        LAB_1403b4c55:
            uVar4 = 0x59;
        LAB_1403b4c5a:
            uVar2 = (ulonglong)uVar4;
            break;
        case 0xd:
            param_2 = param_2 + 3;
            iVar1 = (**(code **)(*param_1 + 0x38))();
            uVar3 = 0;
            do {
                if ((*param_2 != 0) && (iVar1 == *param_2)) goto LAB_1403b4c55;
                uVar3 = uVar3 + 1;
                param_2 = param_2 + 1;
            } while (uVar3 < 7);
            uVar2 = 0;
    }
    return uVar2;
}



undefined4 FUN_1403b4d60(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x1c00);
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 0xd) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar3 != lVar1) && (*(int *)(lVar3 + 0x20) < 0xe)) &&
        ((*(int *)(lVar3 + 0x20) < 0xd || (*(int *)(lVar3 + 0x24) == 0)))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar1) && (*(int *)(local_res8 + 0x30) == 1)) {
        return *(undefined4 *)(local_res8 + 0x34);
    }
    return 0;
}



undefined4 FUN_1403b4dd0(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x1c00);
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 0x1a) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar3 != lVar1) && (*(int *)(lVar3 + 0x20) < 0x1b)) &&
        ((*(int *)(lVar3 + 0x20) < 0x1a || (*(int *)(lVar3 + 0x24) == 0)))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar1) && (*(int *)(local_res8 + 0x30) == 1)) {
        return *(undefined4 *)(local_res8 + 0x34);
    }
    return 0;
}



undefined8 FUN_1403b4e40(longlong param_1,int *param_2,int param_3)

{
    uint uVar1;
    int iVar2;
    bool bVar3;

    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0x118);
    if (uVar1 == 0) {
        return 0;
    }
    do {
        while( true ) {
            if (param_2 == (int *)0x0) {
                return 0x11;
            }
            if (param_2[1] == param_3) break;
            LAB_1403b4eb0:
            param_2 = *(int **)(param_2 + 0x1a);
        }
        iVar2 = *param_2;
        if (iVar2 == 4) {
            bVar3 = (uVar1 & 0x20) == 0;
            LAB_1403b4eae:
            if (!bVar3) {
                return 0;
            }
            goto LAB_1403b4eb0;
        }
        if (iVar2 == 5) {
            bVar3 = (uVar1 & 0x40) == 0;
            goto LAB_1403b4eae;
        }
        if (iVar2 == 6) {
            bVar3 = (uVar1 & 0x100) == 0;
            goto LAB_1403b4eae;
        }
        if (iVar2 == 7) {
            if ((char)uVar1 < '\0') {
                return 0;
            }
            param_2 = *(int **)(param_2 + 0x1a);
        }
        else {
            if ((iVar2 != 8) || ((uVar1 & 0xc00) == 0)) goto LAB_1403b4eb0;
            if (*(int *)(*(longlong *)(param_1 + 0x70) + 0x11c) == param_2[3]) {
                return 0;
            }
            param_2 = *(int **)(param_2 + 0x1a);
        }
    } while( true );
}



undefined8 FUN_1403b4ec0(longlong param_1)

{
    uint uVar1;
    longlong lVar2;

    lVar2 = *(longlong *)(param_1 + 0x70);
    uVar1 = *(uint *)(lVar2 + 0x7c);
    if (((7 < uVar1) || ((0x85U >> (uVar1 & 0x1f) & 1) == 0)) &&
        ((*(int *)(lVar2 + 0x18) != 3 ||
          ((*(int *)(lVar2 + 0x9c) != 0 || ((uVar1 - 4 & 0xfffffffb) != 0)))))) {
        return 0;
    }
    return 1;
}



undefined8 * FUN_1403b4f00(undefined8 *param_1,undefined8 *param_2)

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
        puVar2 = (undefined8 *)FUN_14018b280(lVar1 * 4 + 0x10,0);
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
    FUN_1407db590(puVar3,*param_2,param_1[1] << 2);
    return param_1;
}



void FUN_1403b4f80(void)

{
    undefined auStack72 [32];
    _FILETIME local_28;
    _SYSTEMTIME local_20;
    ulonglong local_10;

    local_10 = DAT_140c0f7b0 ^ (ulonglong)auStack72;
    GetSystemTime(&local_20);
    SystemTimeToFileTime(&local_20,&local_28);
    FUN_1407db4f0(local_10 ^ (ulonglong)auStack72);
    return;
}



undefined8 FUN_1403b5000(longlong param_1,int param_2)

{
    int *piVar1;
    ulonglong uVar2;

    if (param_2 != 0) {
        uVar2 = 0;
        piVar1 = (int *)(*(longlong *)(param_1 + 0x70) + 0x198);
        do {
            if (*piVar1 == param_2) {
                return 1;
            }
            uVar2 = uVar2 + 1;
            piVar1 = piVar1 + 1;
        } while (uVar2 < 5);
    }
    return 0;
}



int FUN_1403b5030(longlong param_1)

{
    int iVar1;

    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x38);
    }
    return iVar1;
}



bool FUN_1403b5040(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x1c00);
    iVar4 = 0;
    lVar3 = lVar1;
    lVar2 = *(longlong *)(lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x20) < 0x14) {
            lVar2 = *(longlong *)(lVar2 + 0x18);
        }
        else {
            lVar3 = lVar2;
            lVar2 = *(longlong *)(lVar2 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar3 != lVar1) && (*(int *)(lVar3 + 0x20) < 0x15)) &&
        ((*(int *)(lVar3 + 0x20) < 0x14 || (*(int *)(lVar3 + 0x24) == 0)))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar1) && (*(int *)(local_res8 + 0x30) == 1)) {
        iVar4 = *(int *)(local_res8 + 0x34);
    }
    return iVar4 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1403b50c0(longlong param_1)

{
    undefined auStack216 [32];
    longlong local_b8;
    longlong local_b0;
    float local_a8;
    float fStack164;
    float fStack156;
    float local_98;
    float fStack148;
    float fStack140;
    float local_88;
    float fStack132;
    float fStack124;
    float local_78;
    float fStack116;
    float fStack108;
    longlong local_68;
    longlong local_60;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    local_b8 = param_1 + 0x11b0;
    local_b0 = param_1 + 0x11f0;
    local_68 = local_b8;
    local_60 = local_b0;
    FUN_1401afb10(&local_68,&local_a8);
    FUN_1407db4f0((fStack148 - fRam0000000140c78424) * (fStack148 - fRam0000000140c78424) +
                  (fStack140 - fRam0000000140c7842c) * (fStack140 - fRam0000000140c7842c) +
                  (local_98 - _DAT_140c78420) * (local_98 - _DAT_140c78420) + 0.0 +
                  (fStack164 - fRam0000000140c78414) * (fStack164 - fRam0000000140c78414) +
                  (fStack156 - fRam0000000140c7841c) * (fStack156 - fRam0000000140c7841c) +
                  (local_a8 - _DAT_140c78410) * (local_a8 - _DAT_140c78410) + 0.0 +
                  (fStack132 - fRam0000000140c78434) * (fStack132 - fRam0000000140c78434) +
                  (fStack124 - fRam0000000140c7843c) * (fStack124 - fRam0000000140c7843c) +
                  (local_88 - _DAT_140c78430) * (local_88 - _DAT_140c78430) + 0.0 +
                  (fStack116 - fRam0000000140c78444) * (fStack116 - fRam0000000140c78444) +
                  (fStack108 - fRam0000000140c7844c) * (fStack108 - fRam0000000140c7844c) +
                  (local_78 - _DAT_140c78440) * (local_78 - _DAT_140c78440) + 0.0,
                  local_18 ^ (ulonglong)auStack216);
    return;
}



undefined8 FUN_1403b51d0(longlong param_1)

{
    if ((*(int *)(param_1 + 0x80) != 0x14) && (*(int *)(param_1 + 0x80) != 0x17)) {
        return 0;
    }
    return 1;
}



void FUN_1403b51f0(int **param_1,int param_2)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    int local_res10 [6];

    *(int *)(param_1 + 2) = param_2;
    if ((param_2 != 0) && (param_2 != 0x13d)) {
        piVar3 = (int *)0x0;
        *(undefined4 *)(param_1 + 3) = 1;
        if (param_1[1] != (int *)0x0) {
            piVar2 = *param_1;
            do {
                iVar1 = *piVar2;
                if (iVar1 == param_2) {
                    return;
                }
                if (iVar1 != param_2 && param_2 <= iVar1) break;
                piVar3 = (int *)((longlong)piVar3 + 1);
                piVar2 = piVar2 + 1;
            } while (piVar3 < param_1[1]);
        }
        local_res10[0] = param_2;
        FUN_1401c2e70(param_1,piVar3,local_res10);
    }
    return;
}



longlong FUN_1403b5250(uint param_1)

{
    ulonglong uVar1;
    longlong lVar2;

    if (param_1 < 0x14c) {
        lVar2 = FUN_140237240();
        if (((lVar2 != 0) && (uVar1 = *(ulonglong *)(lVar2 + 8), uVar1 != 0)) &&
            (uVar1 <= DAT_140c3fe70)) {
            return DAT_140c3fe68 + uVar1;
        }
    }
    return 0;
}



undefined8 FUN_1403b5290(longlong param_1)

{
    int iVar1;

    iVar1 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x18);
    if (((iVar1 - 2U & 0xfffffffa) == 0) && (iVar1 != 3)) {
        return 1;
    }
    return 0;
}



undefined8 * FUN_1403b52d0(undefined8 *param_1,ulonglong param_2)

{
    *param_1 = &PTR_FUN_140b6e4a0;
    FUN_140195d70();
    *(undefined4 *)(param_1 + 9) = 0;
    if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xb] = param_1[0xc];
    }
    if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
        *(undefined8 *)param_1[0xc] = param_1[0xb];
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1);
    }
    return param_1;
}



undefined8 FUN_1403b5350(void)

{
    return 4;
}



ulonglong FUN_1403b5360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    uint uVar3;
    float in_XMM3_Da;
    undefined4 in_XMM6_Da;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    int local_res8;

    local_res8 = 0;
    if ((int)in_XMM3_Da < 0) {
        local_res8 = -0x80000000;
    }
    uVar3 = local_res8 - (int)in_XMM3_Da;
    if (0x54 < (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
        uVar3 = FUN_1403b5400(uVar3,param_2,param_3,in_XMM3_Da,
                              CONCAT412(in_XMM6_Dd,CONCAT48(in_XMM6_Dc,CONCAT44(in_XMM6_Db,in_XMM6_Da)))
        );
        if (uVar3 != 0) {
            uVar1 = (ulonglong)((float)(ulonglong)uVar3 * in_XMM3_Da + 0.5);
            uVar2 = uVar1 & 0xffffffff;
            if ((int)uVar1 == 0) {
                uVar2 = 1;
            }
            return uVar2;
        }
    }
    return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_1403b5400(undefined8 param_1,longlong param_2,longlong param_3)

{
    longlong lVar1;

    if ((param_2 == 0) || (1 < *(int *)(param_2 + 0x140) - 1U)) {
        return 0;
    }
    if (param_3 == 0) {
        param_3 = param_2 + 8;
    }
    if ((DAT_140c8a704 & 1) == 0) {
        DAT_140c8a704 = DAT_140c8a704 | 1;
    }
    else if (_DAT_140c8a6fc != 0) {
        return *(int *)(param_3 + 4) + DAT_140c8a6f8;
    }
    _DAT_140c8a6fc = 1;
    lVar1 = FUN_140200220();
    if (lVar1 != 0) {
        DAT_140c8a6f8 = *(int *)(lVar1 + 8);
        return *(int *)(param_3 + 4) + *(int *)(lVar1 + 8);
    }
    DAT_140c8a6f8 = 0;
    return *(int *)(param_3 + 4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_1403b54a0(undefined8 param_1,longlong param_2,longlong param_3)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    float fVar4;

    uVar1 = FUN_1403b5400();
    if (uVar1 != 0) {
        if (param_3 == 0) {
            param_3 = param_2 + 8;
        }
        if ((DAT_140c8a700 & 1) == 0) {
            DAT_140c8a700 = DAT_140c8a700 | 1;
            _DAT_140c8a6f4 = 0;
        }
        uVar2 = FUN_1403b5360();
        if (uVar1 != uVar2) {
            fVar4 = (float)(ulonglong)(uVar1 - uVar2) / (float)(ulonglong)uVar1;
            if (_DAT_140c8a6f4 == 0) {
                _DAT_140c8a6f4 = 1;
                lVar3 = FUN_140200220(0x22f);
                if (lVar3 == 0) {
                    DAT_140c8a6f0 = 0.0;
                }
                else {
                    DAT_140c8a6f0 = *(float *)(lVar3 + 0x24);
                }
            }
            lVar3 = 0;
            fVar4 = DAT_140c8a6f0 * fVar4 * (float)*(longlong *)(param_3 + 0x88) + 0.5;
            if ((9.223372e+18 <= fVar4) && (fVar4 = fVar4 - 9.223372e+18, fVar4 < 9.223372e+18)) {
                lVar3 = -0x8000000000000000;
            }
            return (longlong)fVar4 + lVar3;
        }
    }
    return 0;
}



undefined8 FUN_1403b55d0(void)

{
    return 0x10;
}



void FUN_1403b55e0(longlong param_1)

{
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong *plVar4;
    double dVar5;
    undefined4 local_28 [2];
    undefined8 local_20;
    code *local_18;
    undefined8 local_10;

    uVar2 = (ulonglong)DAT_140c636a8;
    *(ulonglong *)(param_1 + 0x7db8) = uVar2;
    if (*(longlong *)(param_1 + 0x78) != 0) {
        lVar3 = 0xc5;
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x78) + 0x5c0);
        do {
            uVar2 = uVar2 * 0xaa7f8ea9 + *plVar4;
            lVar3 = lVar3 + -1;
            plVar4 = plVar4 + 1;
        } while (lVar3 != 0);
    }
    *(ulonglong *)(param_1 + 0x7db0) = uVar2;
    *(undefined8 *)(param_1 + 0x7dc0) = 0;
    *(undefined8 *)(param_1 + 0x7dc8) = 0;
    *(undefined8 *)(param_1 + 0x7dd0) = 0;
    *(undefined8 *)(param_1 + 0x7dd8) = 0;
    *(undefined8 *)(param_1 + 0x7de0) = 0;
    if ((DAT_140c8a6e0 & 1) == 0) {
        DAT_140c8a6e0 = DAT_140c8a6e0 | 1;
        DAT_140c8a6e8 = 0x141cccf9c;
    }
    uVar1 = *(uint *)(DAT_140c8a6e8 + -0x12fa640);
    *(ulonglong *)(param_1 + 0x7dc8) = (ulonglong)uVar1 ^ *(ulonglong *)(param_1 + 0x7db0);
    *(ulonglong *)(param_1 + 0x7dc0) = (ulonglong)uVar1;
    *(undefined4 *)(param_1 + 0x7de0) = *(undefined4 *)(DAT_140c8a6e8 + -0x12fa640);
    dVar5 = (double)(**(code **)(DAT_140c77890 + 0x30))(&DAT_140c77890);
    local_28[0] = 0;
    local_20 = FUN_14001c280(param_1);
    local_10 = 0;
    local_18 = FUN_1405ef190;
    FUN_140195960(param_1 + 0x7de8,1000 - (int)(dVar5 * -9001.0),local_28,4);
    return;
}



void FUN_1403b5730(longlong param_1,int param_2,longlong param_3)

{
    undefined2 *puVar1;
    undefined2 *puVar2;
    short sVar3;
    int iVar4;
    longlong lVar5;
    short *psVar6;
    undefined8 uVar7;
    short **ppsVar8;
    longlong lVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    longlong lVar12;
    longlong local_res20;
    undefined8 in_stack_ffffffffffffff78;
    uint uVar13;
    undefined **local_78;
    undefined8 local_70;
    LPVOID local_68;
    undefined **local_58;
    longlong local_50;
    undefined2 *local_48;
    longlong local_40;

    uVar13 = (uint)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    if (0xd < param_2 - 1U) {
        local_78 = &PTR_LAB_140b5e648;
        local_70 = 0;
        local_68 = TlsGetValue(DAT_140c63720);
        TlsSetValue(DAT_140c63720,&local_78);
        local_58 = local_78;
        local_res20 = 0x141df01a0;
        local_50 = local_70;
        local_48 = (undefined2 *)local_68;
        iVar4 = FUN_1401971e0(&DAT_140c8a6e4,5,&local_res20,param_2,&local_58);
        local_78 = &PTR_LAB_140b5e648;
        TlsSetValue(DAT_140c63720,local_68);
        if (iVar4 != 0) {
            DebugBreak();
        }
        return;
    }
    *(longlong *)(param_1 + 0x15f0 + (longlong)param_2 * 8) = param_3;
    lVar5 = FUN_1403b59f0(param_1,param_2);
    if ((lVar5 <= param_3) && (lVar5 = FUN_1401fa4a0(), lVar5 != 0)) {
        psVar6 = (short *)FUN_14034bdd0();
        lVar9 = 0;
        local_50 = 0;
        local_40 = 0;
        sVar3 = *psVar6;
        lVar5 = lVar9;
        while (sVar3 != 0) {
            lVar5 = lVar5 + 1;
            sVar3 = psVar6[lVar5];
        }
        lVar5 = lVar5 * 2 >> 1;
        uVar10 = lVar5 + 1;
        if (uVar10 < 0x7fffffffffffffff) {
            lVar12 = uVar10 * 2;
            local_50 = FUN_14018b280(lVar12,0);
            local_40 = lVar12 + local_50;
        }
        lVar12 = local_50;
        lVar5 = lVar5 * 2;
        FUN_1407db590(local_50,psVar6,lVar5);
        puVar1 = (undefined2 *)(lVar5 + lVar12);
        if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = 0;
        }
        local_48 = puVar1;
        uVar7 = FUN_14034bdd0();
        ppsVar8 = (short **)FUN_14034c700(&local_res20,lVar12,uVar7);
        psVar6 = *ppsVar8;
        sVar3 = *psVar6;
        while (sVar3 != 0) {
            lVar9 = lVar9 + 1;
            sVar3 = psVar6[lVar9];
        }
        uVar10 = (longlong)puVar1 - lVar12 >> 1;
        uVar11 = (longlong)(psVar6 + lVar9) - (longlong)psVar6 >> 1;
        if (uVar10 < uVar11) {
            FUN_1407db590(lVar12,psVar6,uVar10 * 2);
            FUN_14001c310(&local_58,psVar6 + uVar10,psVar6 + lVar9);
            lVar12 = local_50;
        }
        else {
            lVar5 = uVar11 * 2;
            FUN_1407db590(lVar12,psVar6,lVar5);
            puVar2 = (undefined2 *)(lVar5 + lVar12);
            if (puVar2 != puVar1) {
                FUN_1407db590(puVar2,puVar1,2);
            }
        }
        if (local_res20 != 0) {
            (**(code **)(*(longlong *)(local_res20 + -0x10) + 8))(local_res20 + -0x10);
        }
        FUN_140003890(DAT_140c658a0,0x1a,0,lVar12,(ulonglong)uVar13 << 0x20,0);
        if (lVar12 != 0) {
            FUN_14018b900(lVar12,0);
        }
    }
    FUN_1400a8020(*(longlong *)(param_1 + 0x7340) + 0x1020);
    return;
}



longlong FUN_1403b59f0(undefined8 param_1,int param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = FUN_1401fa4a0(param_2);
    if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x20), lVar2 == 0)) {
        lVar2 = 0x7fffffffffffffff;
    }
    if ((DAT_140dc2264 & 1) == 0) {
        DAT_140dc2264 = DAT_140dc2264 | 1;
        lVar3 = FUN_140200220(0x45b);
        if (lVar3 == 0) {
            DAT_140dc2268 = 500000;
        }
        else {
            DAT_140dc2268 = *(int *)(lVar3 + 4);
        }
    }
    if ((DAT_140dc2264 & 2) == 0) {
        DAT_140dc2264 = DAT_140dc2264 | 2;
        lVar3 = FUN_140200220(0x45c);
        if (lVar3 == 0) {
            DAT_140dc226c = 5000;
        }
        else {
            DAT_140dc226c = *(int *)(lVar3 + 4);
        }
    }
    iVar1 = FUN_1403d2140(DAT_140c65898,0xe);
    if (iVar1 == 0) {
        if (param_2 == 1) {
            return (longlong)DAT_140dc2268;
        }
        if (param_2 == 2) {
            return (longlong)DAT_140dc226c;
        }
    }
    return lVar2;
}



int FUN_1403b5ea0(longlong param_1)

{
    int iVar1;

    if (*(int *)(param_1 + 0x6de8) != 0) {
        if (*(longlong *)(param_1 + 0x78) != 0) {
            iVar1 = FUN_1403b48b0();
            if (iVar1 != 0) {
                if (DAT_140c636a8 <= *(uint *)(param_1 + 0x6de8)) {
                    return *(uint *)(param_1 + 0x6de8) - DAT_140c636a8;
                }
            }
        }
        *(undefined4 *)(param_1 + 0x6de8) = 0;
    }
    return 0;
}



undefined8 FUN_1403b6760(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;
    undefined4 local_18;
    undefined4 local_14;
    undefined4 local_10;

    lVar1 = FUN_140245c00(param_2[1]);
    if (lVar1 != 0) {
        lVar1 = FUN_1405e6000(param_1 + 0x1698,*(undefined4 *)(lVar1 + 8),1);
        local_18 = param_2[1];
        local_14 = param_2[2];
        local_10 = param_2[3];
        FUN_1405e7080(lVar1 + 0x58,&local_18);
        FUN_1405e5900(param_1 + 0x1698,*param_2,param_2[1],0);
    }
    return 0;
}



undefined8 FUN_1403b67e0(longlong param_1,undefined4 *param_2)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined4 local_res8 [2];
    undefined8 local_18;
    undefined4 local_10;

    lVar2 = DAT_140c65898;
    *(undefined4 *)(param_1 + 0x558) = 1;
    *(undefined4 *)(param_1 + 0x6420) = 1;
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x6424) = *param_2;
    *(undefined4 *)(param_1 + 0x6428) = param_2[1];
    *(uint *)(param_1 + 0x642c) = *(byte *)(param_2 + 2) & 1;
    *(uint *)(param_1 + 0x6430) = *(byte *)(param_2 + 2) & 8;
    *(uint *)(param_1 + 0x6434) = *(byte *)(param_2 + 2) & 4;
    if (*(int *)(lVar2 + 0xa4) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xb0) + uVar4 * 8) != 0) {
                FUN_14056a430();
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar2 + 0xa4));
    }
    uVar4 = 0;
    if (*(int *)(lVar2 + 0xbc) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(lVar2 + 200) + uVar4 * 8) != 0) {
                FUN_14056a430();
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar2 + 0xbc));
    }
    uVar4 = 0;
    if (*(int *)(lVar2 + 0xd4) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xe0) + uVar4 * 8) != 0) {
                FUN_14056a430();
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar2 + 0xd4));
    }
    uVar4 = 0;
    if (*(int *)(lVar2 + 0xec) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0xf8) + uVar4 * 8) != 0) {
                FUN_14056a430();
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar2 + 0xec));
    }
    uVar4 = 0;
    if (*(int *)(lVar2 + 0x104) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x110) + uVar4 * 8) != 0) {
                FUN_14056a430();
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar2 + 0x104));
    }
    uVar4 = 0;
    if (*(int *)(lVar2 + 0x11c) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x128) + uVar4 * 8) != 0) {
                FUN_14056a430();
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar2 + 0x11c));
    }
    uVar4 = 0;
    if (*(int *)(lVar2 + 0x134) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(lVar2 + 0x140) + uVar4 * 8) != 0) {
                FUN_14056a430();
            }
            uVar3 = (int)uVar4 + 1;
            uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(lVar2 + 0x134));
    }
    *(undefined4 *)(DAT_140c65898 + 0x558) = 1;
    DAT_140c3a004 = param_2[3];
    if (DAT_140c3a004 < 0x19) {
        DAT_140c3a004 = 0x19;
    }
    else if (1000 < DAT_140c3a004) {
        DAT_140c3a004 = 1000;
    }
    local_18 = *(undefined8 *)(param_1 + 0x7ba0);
    local_10 = *(undefined4 *)(param_1 + 0x7ba8);
    FUN_1403f4900(DAT_140c65898,0xd5,&local_18);
    iVar1 = DAT_140c45de0;
    if (*DAT_140c63750 < DAT_140c45de0) {
        iVar1 = *DAT_140c63750;
    }
    local_res8[0] = *(undefined4 *)(&DAT_140c45df0 + (longlong)iVar1 * 4);
    FUN_1403f4900(param_1,0x63b,local_res8);
    *(undefined (*) [16])(param_1 + 0x7f00) = ZEXT816(0);
    *(undefined8 *)(param_1 + 0x7f10) = 0;
    return 0;
}



int FUN_1403b6a80(longlong param_1,int *param_2)

{
    longlong **pplVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    longlong *plVar5;
    undefined8 uVar6;
    longlong **pplVar7;

    iVar2 = *param_2;
    plVar4 = (longlong *)0x0;
    switch(param_2[1]) {
        case 6:
            iVar2 = 0;
            break;
        case 7:
            iVar2 = 0;
            break;
        case 8:
            iVar2 = 0;
            break;
        case 0xc:
            iVar2 = 0;
            break;
        case 0xf:
            iVar2 = 0;
            break;
        case 0x10:
            iVar2 = 0;
            break;
        case 0x13:
            iVar2 = 0;
            break;
        case 0x14:
            iVar2 = 0;
    }
    FUN_1403fa730(param_1);
    FUN_1403fa3d0(param_1);
    FUN_140016480(DAT_140c635f0);
    if (iVar2 == 0) {
        plVar5 = (longlong *)FUN_14018b280(0x88,0);
        if (plVar5 != (longlong *)0x0) {
            *plVar5 = (longlong)&PTR_LAB_140b55048;
            *(undefined4 *)(plVar5 + 1) = 1;
            plVar5[3] = 0;
            plVar5[4] = 0;
            plVar5[6] = 0;
            *(undefined4 *)(plVar5 + 7) = 0;
            plVar5[2] = 0;
            *(undefined4 *)(plVar5 + 5) = 0;
            *(undefined4 *)((longlong)plVar5 + 0x4c) = 0;
            plVar5[0xb] = 0;
            plVar5[10] = 0;
            plVar5[0xd] = 0;
            *plVar5 = (longlong)&PTR_LAB_140b555d0;
            plVar5[0xe] = 0;
            plVar5[0xf] = 0;
            plVar5[0x10] = 0;
            plVar4 = plVar5;
        }
        uVar6 = FUN_14034bdd0();
        plVar4[0x10] = *(longlong *)(param_1 + 0x7928);
        iVar2 = FUN_140033780(plVar4,uVar6,0);
        if ((iVar2 < 0) || (iVar2 = FUN_140048100(param_1,plVar4,2), iVar2 < 0)) {
            (**(code **)(*plVar4 + 8))(plVar4);
            return iVar2;
        }
        pplVar7 = (longlong **)(param_1 + 0x63f8);
        if (plVar4[0xe] == 0) {
            plVar4[0xe] = (longlong)pplVar7;
            pplVar1 = (longlong **)(plVar4 + 0xf);
            *pplVar1 = *pplVar7;
            *pplVar7 = plVar4;
            if (*pplVar1 != (longlong *)0x0) {
                (*pplVar1)[0xe] = (longlong)pplVar1;
            }
        }
        (**(code **)(*plVar4 + 8))(plVar4);
    }
    else {
        lVar3 = FUN_14018b280(0x2d0);
        if (lVar3 != 0) {
            plVar4 = (longlong *)FUN_140020730(lVar3);
        }
        iVar2 = FUN_140020bc0(plVar4,*(undefined8 *)(param_1 + 0x7928));
        if ((iVar2 < 0) || (iVar2 = FUN_140048100(param_1,plVar4,1), iVar2 < 0)) {
            if (plVar4 == (longlong *)0x0) {
                return iVar2;
            }
            (**(code **)(*plVar4 + 8))(plVar4);
            return iVar2;
        }
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"LogOut","");
        if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 8))(plVar4);
            return 0;
        }
    }
    return 0;
}



undefined8 FUN_1403b6d10(longlong param_1)

{
    longlong lVar1;
    undefined *puVar2;
    undefined8 uVar3;
    longlong *plVar4;
    undefined *puVar5;

    FUN_1403fa730();
    FUN_1403fa3d0(param_1);
    FUN_140016480(DAT_140c635f0);
    if (*(longlong **)(param_1 + 0x7928) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x7928) + 8))();
        *(undefined8 *)(param_1 + 0x7928) = 0;
    }
    FUN_1400168a0();
    lVar1 = *(longlong *)(param_1 + 0x63f8);
    if (lVar1 == 0) {
        uVar3 = FUN_1400481b0(param_1,*(undefined8 *)(DAT_140c635f0 + 0x1700),0);
        return uVar3;
    }
    puVar2 = *(undefined **)(DAT_140c635f0 + 0x1700);
    if (*(longlong *)(lVar1 + 0x58) != 0) {
        plVar4 = (longlong *)FUN_1400e9080(*(longlong *)(lVar1 + 0x58),L"ErrorMessageText");
        if (plVar4 != (longlong *)0x0) {
            puVar5 = &DAT_1409d0dcc;
            if (puVar2 != (undefined *)0x0) {
                puVar5 = puVar2;
            }
            (**(code **)(*plVar4 + 0x50))(plVar4,puVar5);
        }
    }
    *(undefined8 *)(lVar1 + 0x80) = 0;
    return 0;
}



ulonglong FUN_1403b6de0(undefined8 *param_1,undefined4 *param_2)

{
    undefined4 uVar1;
    undefined8 *puVar2;
    longlong lVar3;
    int *piVar4;
    uint uVar5;
    longlong lVar6;
    ulonglong uVar7;
    longlong lVar8;
    longlong *plVar9;
    undefined8 local_res8;
    undefined local_28 [16];

    plVar9 = (longlong *)0x0;
    *(undefined (*) [16])(param_1 + 0xfe0) = ZEXT816(0);
    param_1[0xfe2] = 0;
    FUN_1403fa730();
    FUN_1403fa3d0(param_1);
    FUN_140016480(DAT_140c635f0);
    FUN_1405ce420(param_1[0xe33]);
    puVar2 = (undefined8 *)param_1[0xe33];
    if (*(int *)(puVar2 + 3) != 0) {
        if (*(int *)((longlong)puVar2 + 0xc) == 1) {
            FUN_14062cf20(*puVar2);
        }
        else if (*(int *)((longlong)puVar2 + 0xc) == 2) {
            FUN_1405ce500();
        }
    }
    FUN_1405fe120(param_1[0xfb2]);
    FUN_140195d70(param_1 + 0xced);
    FUN_1400ea3e0(param_1[0xe68],"PendingWorldRemovalCancel","");
    lVar8 = param_1[0xde6];
    while (lVar8 != 0) {
        FUN_1403d9590(param_1,param_1[0xde6]);
        lVar8 = param_1[0xde6];
    }
    param_1[0xf] = 0;
    param_1[0xc92] = 0;
    FUN_1403b55e0(param_1);
    FUN_14053b3c0(param_1);
    FUN_1403e5ae0(param_1);
    FUN_1403baba0(param_1);
    FUN_1403bf780(param_1);
    FUN_1403b7f50(param_1);
    FUN_1403c2230(param_1);
    piVar4 = DAT_140c65920;
    if (*DAT_140c65920 != 0) {
        *DAT_140c65920 = 0;
        lVar8 = *(longlong *)(piVar4 + 2);
        while (lVar8 != 0) {
            puVar2 = *(undefined8 **)(piVar4 + 2);
            if (puVar2 != (undefined8 *)0x0) {
                (**(code **)*puVar2)(puVar2,1);
            }
            lVar8 = *(longlong *)(piVar4 + 2);
        }
    }
    FUN_140575c50(DAT_140c65b78);
    FUN_140600750(DAT_140c65bb0);
    FUN_14055e0e0();
    FUN_1404a5f90(DAT_140c659a8);
    FUN_1404b4ae0(DAT_140c659f0);
    if (DAT_140c65970 != 0) {
        FUN_14056e380();
    }
    FUN_1405f4df0();
    FUN_14049a790();
    FUN_1403ba4a0(param_1);
    FUN_14039f920(param_1);
    lVar8 = *(longlong *)(param_1[0xdf5] + 0x10);
    if (lVar8 != param_1[0xdf5]) {
        do {
            FUN_14018b900(*(undefined8 *)(lVar8 + 0x28),0);
            lVar6 = *(longlong *)(lVar8 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar6 + 0x18)) {
                    do {
                        lVar8 = lVar6;
                        lVar6 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar6 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar6) {
                    lVar8 = lVar6;
                }
            }
            else {
                for (lVar3 = *(longlong *)(lVar6 + 0x10); lVar8 = lVar6, lVar3 != 0;
                     lVar3 = *(longlong *)(lVar3 + 0x10)) {
                    lVar6 = lVar3;
                }
            }
        } while (lVar8 != param_1[0xdf5]);
    }
    FUN_140008410(param_1 + 0xdf4);
    FUN_1401dc3f0();
    lVar8 = param_1[0xe0f];
    if (lVar8 != 0) {
        if (*(longlong *)(lVar8 + 0x20) != 0) {
            FUN_140195d70(lVar8 + 0x10);
        }
        FUN_140195d70(lVar8 + 0x10);
        *(undefined4 *)(lVar8 + 0x10) = 0;
        if (*(undefined8 **)(lVar8 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x28);
        }
        if (*(undefined8 **)(lVar8 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar8 + 0x28) = *(undefined8 *)(lVar8 + 0x20);
        }
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        FUN_14018b900(lVar8,0);
    }
    lVar8 = param_1[0xe10];
    param_1[0xe0f] = 0;
    if (lVar8 != 0) {
        if (*(longlong *)(lVar8 + 0x20) != 0) {
            FUN_140195d70(lVar8 + 0x10);
        }
        FUN_140195d70(lVar8 + 0x10);
        *(undefined4 *)(lVar8 + 0x10) = 0;
        if (*(undefined8 **)(lVar8 + 0x20) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar8 + 0x20) = *(undefined8 *)(lVar8 + 0x28);
        }
        if (*(undefined8 **)(lVar8 + 0x28) != (undefined8 *)0x0) {
            **(undefined8 **)(lVar8 + 0x28) = *(undefined8 *)(lVar8 + 0x20);
        }
        *(undefined8 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0x28) = 0;
        FUN_14018b900(lVar8,0);
    }
    param_1[0xe10] = 0;
    local_res8 = 0x141df03c0;
    FUN_1401a3130(5,2,&local_res8,*param_2,(double)(float)param_2[1],(double)(float)param_2[2],
                  (double)(float)param_2[3]);
    *(undefined4 *)((longlong)param_1 + 0x74f4) = 0;
    *(undefined4 *)(param_1 + 0xe2a) = 0;
    *(undefined4 *)(param_1 + 0xc84) = 0;
    *(undefined4 *)((longlong)param_1 + 0x6424) = 2;
    param_1[0xddc] = 0;
    local_28 = ZEXT1216(*(undefined (*) [12])(param_2 + 1));
    uVar7 = FUN_1403e70d0(param_1,*param_2,local_28);
    if ((int)uVar7 < 0) {
        return uVar7;
    }
    if (*(int *)(param_1 + 5) == 4) {
        LAB_1403b721c:
        FUN_1400ea3e0(param_1[0xe68],"P2PCancelTrade",&DAT_1409ee9e4,1);
        FUN_1400ea3e0(param_1[0xe68],"ChangeWorld",&DAT_1409d091b);
        FUN_140008410(param_1 + 0xdeb);
        uVar7 = 0;
    }
    else {
        if ((DAT_140c65a48 != 0) && (*(longlong *)(DAT_140c65a48 + 0x18) != 0)) {
            FUN_1404d5ae0();
        }
        lVar8 = FUN_14018b280(0x500,0);
        if (lVar8 != 0) {
            plVar9 = (longlong *)FUN_140033e00(lVar8);
        }
        uVar1 = *param_2;
        puVar2 = (undefined8 *)param_1[0xf25];
        *(undefined4 *)(plVar9 + 0xd) = 0;
        uVar5 = FUN_1400360f0(plVar9,uVar1);
        uVar7 = (ulonglong)uVar5;
        if (-1 < (int)uVar5) {
            plVar9[0xb] = (longlong)puVar2;
            (**(code **)*puVar2)(puVar2);
            plVar9[0xc] = (longlong)param_1;
            (**(code **)*param_1)(param_1);
            uVar5 = FUN_140048100(param_1,plVar9,1);
            uVar7 = (ulonglong)uVar5;
            if (-1 < (int)uVar5) {
                uVar5 = FUN_140048100(plVar9,plVar9[0xc],4);
                uVar7 = (ulonglong)uVar5;
                if (-1 < (int)uVar5) {
                    (**(code **)(*plVar9 + 8))(plVar9);
                    goto LAB_1403b721c;
                }
            }
        }
        (**(code **)(*plVar9 + 8))(plVar9);
    }
    return uVar7;
}



longlong FUN_1403b7290(longlong param_1)

{
    if (*(longlong *)(param_1 + 0x20) != 0) {
        FUN_140195d70(param_1 + 0x10);
    }
    FUN_140195d70(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
    if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
    }
    if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    FUN_14018b900(param_1);
    return param_1;
}



undefined8 FUN_1403b7770(longlong param_1,longlong param_2)

{
    longlong lVar1;

    if (*(int *)(param_2 + 8) != 0) {
        FUN_1403a6770();
    }
    if ((*(longlong *)(param_1 + 0x78) != 0) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608), lVar1 != 0)) {
        while ((*(int *)(lVar1 + 4) != 3 || (*(int *)(lVar1 + 0xc) != 0x309))) {
            lVar1 = *(longlong *)(lVar1 + 0x88);
            if (lVar1 == 0) {
                return 0;
            }
        }
        FUN_1407a0390();
    }
    return 0;
}



void FUN_1403b77d0(longlong param_1,uint *param_2,undefined4 param_3)

{
    ulonglong uVar1;
    uint uVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    longlong *plVar7;
    longlong *plVar8;
    int *piVar9;
    int *piVar10;
    uint uVar11;
    code *local_38;
    undefined4 uStack48;
    longlong *plVar12;

    if (param_2[5] == 4) {
        plVar7 = (longlong *)0x0;
        if (*(ulonglong *)(param_1 + 0xa98) < (ulonglong)param_2[6] ||
            *(ulonglong *)(param_1 + 0xa98) == (ulonglong)param_2[6]) {
            do {
                lVar6 = *(longlong *)(param_1 + 0xa98);
                uVar1 = lVar6 + 1;
                lVar4 = FUN_14018db00(*(undefined8 *)(param_1 + 0xa90),uVar1,8);
                *(undefined8 *)(lVar4 + lVar6 * 8) = 0;
                if (*(longlong *)(param_1 + 0xa90) != lVar4) {
                    FUN_1407db590(lVar4,*(longlong *)(param_1 + 0xa90),*(longlong *)(param_1 + 0xa98) << 3);
                    if (*(longlong *)(param_1 + 0xa90) != 0) {
                        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0xa90) + -0x10) + 8))();
                    }
                    *(longlong *)(param_1 + 0xa90) = lVar4;
                }
                *(ulonglong *)(param_1 + 0xa98) = uVar1;
            } while (uVar1 <= param_2[6]);
        }
        plVar5 = (longlong *)FUN_14018b280();
        if (plVar5 != (longlong *)0x0) {
            *(undefined4 *)(plVar5 + 1) = 0;
            plVar5[2] = 0;
            plVar5[3] = 0;
            *(undefined4 *)(plVar5 + 4) = 300;
            *(undefined4 *)((longlong)plVar5 + 0x24) = 0xffffffff;
            *(undefined4 *)(plVar5 + 5) = 1;
            plVar5[6] = 0;
            *(undefined4 *)(plVar5 + 7) = 0xffffffff;
            *(undefined4 *)(plVar5 + 8) = 0;
            *(undefined4 *)((longlong)plVar5 + 0x44) = 0x31;
            *(undefined4 *)(plVar5 + 9) = 1;
            *plVar5 = (longlong)&PTR_LAB_140b6cf50;
            *(undefined4 *)(plVar5 + 4) = 4;
            plVar7 = plVar5;
        }
        uVar11 = *param_2;
        uVar2 = param_2[0x2a];
        if (param_2[4] != 0) {
            *(uint *)(plVar7 + 8) = param_2[4];
            *(uint *)((longlong)plVar7 + 0x44) = uVar2;
            plVar7[3] = (ulonglong)uVar11;
            lVar6 = *(longlong *)(param_2 + 5);
            *(undefined4 *)(plVar7 + 9) = param_3;
            plVar7[4] = lVar6;
            *(longlong **)(*(longlong *)(param_1 + 0xa90) + (ulonglong)param_2[6] * 8) = plVar7;
            FUN_1403ba550(param_1,*(undefined4 *)(plVar7 + 8));
            lVar6 = DAT_140c65898;
            if (param_2[0x2a] != 0x31) {
                *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
                FUN_1400ea3e0(*(undefined8 *)(lVar6 + 0x7340),"AbilityBookChange",&DAT_1409d10c6);
                FUN_140608c60(*(undefined8 *)(DAT_140c65898 + 0x73f8),param_2[6],param_2[4]);
            }
            lVar6 = FUN_1405a4b80(plVar7,1);
            local_38 = FUN_1405a5c90;
            uStack48 = 0;
            if (lVar6 == 0) {
                return;
            }
            FUN_1405a5fe0(param_1,lVar6,&local_38);
            return;
        }
    }
    else {
        lVar6 = FUN_14018b280(0x140,0);
        plVar5 = (longlong *)0x0;
        plVar7 = plVar5;
        if (lVar6 != 0) {
            plVar7 = (longlong *)FUN_140569a60(lVar6);
        }
        iVar3 = FUN_140569c90(plVar7,param_2);
        if (-1 < iVar3) {
            lVar6 = DAT_140c65898 + 0xa0;
            *(undefined4 *)((longlong)plVar7 + 0x8c) = param_3;
            FUN_1403d2e10(lVar6,param_2 + 5,plVar7);
            *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
            lVar6 = plVar7[10];
            if (lVar6 == 0) {
                lVar6 = plVar7[8] + 0x9c;
            }
            if ((*(int *)(lVar6 + 0x80) != 0) &&
                (lVar6 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar6 + 0x80),
                                       *(undefined8 *)(DAT_140c65898 + 0x78)), lVar6 != 0)) {
                lVar6 = plVar7[10];
                if (lVar6 == 0) {
                    lVar6 = plVar7[8] + 0x9c;
                }
                plVar8 = plVar5;
                if (*(int *)(lVar6 + 0x80) != 0) {
                    plVar8 = (longlong *)
                            FUN_1403acd90(DAT_140c65b70,*(int *)(lVar6 + 0x80),
                                          *(undefined8 *)(DAT_140c65898 + 0x78));
                }
                local_38 = FUN_1405a5c90;
                uStack48 = 0;
                if (plVar8 != (longlong *)0x0) {
                    FUN_1405a5fe0(param_1,plVar8,&local_38);
                }
            }
            if ((*(byte *)(plVar7 + 0x10) & 0x10) == 0) {
                lVar6 = plVar7[9];
                if (lVar6 == 0) {
                    lVar6 = plVar7[8] + 8;
                }
                iVar3 = FUN_1403d67d0(DAT_140c65898,plVar7[8],lVar6);
                if (iVar3 == 0) {
                    FUN_140437a10(DAT_140c658d8,0x38,0,0,0,0,1);
                }
            }
            if ((*(uint *)(plVar7[8] + 0x154) & 0x100) != 0) {
                FUN_140437a10(DAT_140c658d8,0x157,0,0,0,0,1);
            }
            if (((*(uint *)(plVar7[8] + 0x154) & 0x200) != 0) && (*(int *)(plVar7[8] + 0x1b0) != 0)) {
                FUN_1405a8a40();
                iVar3 = FUN_140552550();
                if (iVar3 == 0) {
                    FUN_140437a10(DAT_140c658d8,0x160,0,0,0,0,1);
                }
            }
            if (*(int *)(plVar7[8] + 0x144) == 0xdc) {
                FUN_140437a10(DAT_140c658d8,0x74,0,0,0,0,1);
            }
            lVar6 = plVar7[8];
            if ((*(int *)(lVar6 + 0x140) == 0x25) && (*(int *)(lVar6 + 0x1bc) != 0)) {
                lVar4 = plVar7[10];
                if (lVar4 == 0) {
                    lVar4 = lVar6 + 0x9c;
                }
                lVar6 = FUN_1403acd90(DAT_140c65b70,*(undefined4 *)(lVar4 + 0x80),
                                      *(undefined8 *)(DAT_140c65898 + 0x78));
                if (lVar6 != 0) {
                    plVar8 = plVar5;
                    if (*(uint *)(lVar6 + 0x28) != 0) {
                        piVar9 = (int *)(*(longlong *)(lVar6 + 0x30) + 0x10);
                        plVar12 = plVar5;
                        do {
                            if (*piVar9 == 0x7d) {
                                plVar8 = (longlong *)
                                                 (ulonglong)
                                         *(uint *)((longlong)plVar12 * 0xa8 + 0x40 + *(longlong *)(lVar6 + 0x30));
                                break;
                            }
                            uVar11 = (int)plVar12 + 1;
                            plVar12 = (longlong *)(ulonglong)uVar11;
                            piVar9 = piVar9 + 0x2a;
                            plVar8 = (longlong *)0x0;
                        } while (uVar11 < *(uint *)(lVar6 + 0x28));
                    }
                    lVar6 = FUN_1403acd90(DAT_140c65b70,plVar8,*(undefined8 *)(DAT_140c65898 + 0x78));
                    if (lVar6 != 0) {
                        piVar10 = (int *)(*(longlong *)(lVar6 + 0x70) + 0x198);
                        piVar9 = piVar10;
                        plVar8 = plVar5;
                        do {
                            if (*piVar9 == 5) goto LAB_1403b7ce7;
                            plVar8 = (longlong *)((longlong)plVar8 + 1);
                            piVar9 = piVar9 + 1;
                        } while (plVar8 < &DAT_00000005);
                    }
                }
            }
            goto LAB_1403b7d22;
        }
    }
    if (plVar7 == (longlong *)0x0) {
        return;
    }
    (**(code **)(*plVar7 + 0x10))(plVar7,1);
    return;
    while( true ) {
        plVar5 = (longlong *)((longlong)plVar5 + 1);
        piVar10 = piVar10 + 1;
        if (&DAT_00000004 < plVar5) break;
        LAB_1403b7ce7:
        if (*piVar10 == 9) {
            FUN_140437a10(DAT_140c658d8,0x14f,0,0,0,0,1);
            break;
        }
    }
    LAB_1403b7d22:
    (**(code **)(*plVar7 + 8))(plVar7);
    return;
}



void FUN_1403b7d40(longlong param_1,undefined8 param_2,undefined4 param_3)

{
    longlong *plVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 uVar4;
    int iVar5;
    undefined local_res8 [8];
    undefined *local_18;
    undefined4 uStack16;

    plVar1 = (longlong *)FUN_1403acbb0(param_1 + 0xa0);
    if (plVar1 != (longlong *)0x0) {
        iVar5 = 1;
        if (*(int *)(plVar1 + 0xf) != 0) {
            iVar5 = *(int *)(plVar1 + 0xf);
        }
        FUN_1403b8250(param_1,*(undefined4 *)plVar1[8],iVar5,param_3);
        lVar2 = plVar1[10];
        if (lVar2 == 0) {
            lVar2 = plVar1[8] + 0x9c;
        }
        if (*(int *)(lVar2 + 0x80) != 0) {
            lVar2 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar2 + 0x80),
                                  *(undefined8 *)(DAT_140c65898 + 0x78));
            if (lVar2 != 0) {
                lVar2 = plVar1[10];
                lVar3 = 0;
                if (lVar2 == 0) {
                    lVar2 = plVar1[8] + 0x9c;
                }
                if (*(int *)(lVar2 + 0x80) != 0) {
                    lVar3 = FUN_1403acd90(DAT_140c65b70,*(int *)(lVar2 + 0x80),
                                          *(undefined8 *)(DAT_140c65898 + 0x78));
                }
                local_18 = &DAT_1405a5ea0;
                uStack16 = 0;
                if (lVar3 != 0) {
                    FUN_1405a5fe0(param_1,lVar3,&local_18);
                }
            }
        }
        lVar2 = DAT_140c65898;
        uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,local_res8);
        FUN_1403d2e10(lVar2 + 0xa0,uVar4,0);
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    }
    return;
}



void FUN_1403b7e80(longlong param_1,longlong param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    undefined *local_18;
    undefined4 uStack16;

    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa90) + (ulonglong)*(uint *)(param_2 + 4) * 8);
    if (lVar2 != 0) {
        lVar4 = FUN_1405a4b80(lVar2,1);
        local_18 = &DAT_1405a5ea0;
        uStack16 = 0;
        if (lVar4 != 0) {
            FUN_1405a5fe0(param_1,lVar4,&local_18);
        }
        FUN_1403baa80(param_1,*(undefined4 *)(lVar2 + 0x40));
        uVar1 = *(uint *)(param_2 + 4);
        lVar2 = *(longlong *)(param_1 + 0xa90);
        plVar3 = *(longlong **)(lVar2 + (ulonglong)uVar1 * 8);
        if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 8))();
            *(undefined8 *)(lVar2 + (ulonglong)uVar1 * 8) = 0;
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0xa90) + (ulonglong)*(uint *)(param_2 + 4) * 8) = 0;
        *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
    }
    return;
}



void FUN_1403b7f50(longlong param_1)

{
    longlong lVar1;
    longlong lVar2;
    longlong *plVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;

    uVar5 = 0;
    if (*(longlong *)(param_1 + 0xa98) != 0) {
        do {
            if (*(longlong *)(*(longlong *)(param_1 + 0xa90) + uVar5 * 8) != 0) {
                lVar1 = (uVar5 & 0xffffffff) * 8;
                lVar2 = *(longlong *)(lVar1 + *(longlong *)(param_1 + 0xa90));
                if (lVar2 != 0) {
                    lVar4 = FUN_1405a4b80(lVar2,1);
                    local_28 = 0x405a5ea0;
                    uStack36 = 1;
                    uStack32 = 0;
                    if (lVar4 != 0) {
                        FUN_1405a5fe0(param_1,lVar4,&local_28);
                    }
                    FUN_1403baa80(param_1,*(undefined4 *)(lVar2 + 0x40));
                    lVar2 = *(longlong *)(param_1 + 0xa90);
                    plVar3 = *(longlong **)(lVar2 + lVar1);
                    if (plVar3 != (longlong *)0x0) {
                        (**(code **)(*plVar3 + 8))();
                        *(undefined8 *)(lVar2 + lVar1) = 0;
                    }
                    *(undefined8 *)(lVar1 + *(longlong *)(param_1 + 0xa90)) = 0;
                    *(undefined4 *)(DAT_140c65898 + 0x6f98) = 1;
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulonglong *)(param_1 + 0xa98));
    }
    return;
}



void FUN_1403b8060(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
    undefined auStack2664 [32];
    undefined4 local_a48;
    undefined4 local_a40;
    longlong local_a38;
    undefined4 local_a28 [2];
    longlong *local_a20 [96];
    longlong local_720;
    undefined4 local_560;
    undefined4 local_55c;
    undefined8 local_558;
    undefined8 local_550;
    undefined8 local_548;
    undefined8 local_540;
    undefined8 local_538;
    undefined8 local_530;
    undefined8 local_528;
    undefined8 local_520;
    undefined8 local_518;
    undefined4 local_508 [2];
    longlong *local_500 [96];
    longlong local_200;
    undefined4 local_40;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack2664;
    if (((*(int *)(param_2 + 0x94) != 0) && (param_2[1] != 0)) && (*param_2 != 0)) {
        local_a48 = param_3;
        local_a40 = param_4;
        local_a38 = *param_2;
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"ItemAdded",&DAT_140b00d20);
    }
    switch(param_4) {
        case 4:
        case 5:
        case 10:
        case 0xb:
        case 0xf:
        case 0x13:
        case 0x19:
        case 0x24:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x2b:
        case 0x2c:
            local_a28[0] = 1;
            FUN_14040fc60(local_a20,param_2);
            local_55c = 0;
            local_558 = 0;
            local_550 = 1;
            local_548 = 0;
            local_540 = 0;
            local_538 = 1;
            local_530 = 0;
            local_528 = 0;
            local_520 = 1;
            local_518 = 0;
            local_560 = param_3;
            FUN_140427fa0(*(undefined8 *)(param_1 + 0x7340),local_a28);
            local_200 = local_720;
            if (local_a20[0] != (longlong *)0x0) {
                (**(code **)(*local_a20[0] + 8))();
                local_a20[0] = (longlong *)0x0;
                local_200 = local_720;
            }
            break;
        default:
            goto switchD_1403b80fc_caseD_6;
        case 0x11:
            local_508[0] = 1;
            FUN_14040fc60(local_500,param_2);
            local_40 = param_3;
            FUN_140428260(*(undefined8 *)(param_1 + 0x7340),local_508);
            if (local_500[0] != (longlong *)0x0) {
                (**(code **)(*local_500[0] + 8))();
                local_500[0] = (longlong *)0x0;
            }
    }
    if (local_200 != 0) {
        FUN_14018b900(local_200,0);
    }
    switchD_1403b80fc_caseD_6:
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack2664);
    return;
}



void FUN_1403b8250(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
    undefined8 uVar1;
    int iVar2;
    longlong lVar3;
    undefined **local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    local_18 = (undefined4)param_2;
    if (param_4 == 0x18) {
        uVar1 = *(undefined8 *)(param_1 + 0x7340);
        lVar3 = FUN_1400b5df0(DAT_140c658f0,param_2,0);
        if (lVar3 != 0) {
            FUN_1400ea3e0(uVar1,"ItemSentToCrate",&DAT_1409eafe4,lVar3,param_3,0x18);
        }
    }
    else {
        uVar1 = *(undefined8 *)(param_1 + 0x7340);
        lVar3 = FUN_1400b5df0(DAT_140c658f0,param_2,0);
        if (lVar3 != 0) {
            FUN_1400ea3e0(uVar1,"ItemRemoved",&DAT_1409eb044,lVar3,param_3,param_4);
        }
        if (param_4 == 0x15) {
            local_20 = *(undefined4 *)(*(longlong *)(param_1 + 0x78) + 8);
            local_1c = 0x1e;
            local_28 = &PTR_FUN_140b6f370;
            iVar2 = FUN_14060af20(&local_28);
            if (iVar2 != 0) {
                lVar3 = FUN_1403d90d0(DAT_140c65898,local_20);
                if (lVar3 != 0) {
                    lVar3 = FUN_14047dca0(lVar3);
                    if (lVar3 != 0) {
                        FUN_14060afe0(&local_28,local_20);
                    }
                }
            }
        }
    }
    return;
}



void FUN_1403b8380(longlong param_1,undefined8 *param_2)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong *plVar4;
    undefined auStack1288 [32];
    longlong *local_4e8 [96];
    longlong local_1e8;
    undefined8 local_34;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong)auStack1288;
    iVar1 = FUN_1403d2140(param_1,0x4b);
    iVar2 = FUN_1403d2140(param_1,0x4a);
    if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0xf0) + iVar1 * 10;
    }
    *(int *)(param_1 + 0xf4) = iVar2;
    if (*(int *)((longlong)param_2 + 0x14) == 4) {
        if (((ulonglong)*(uint *)(param_2 + 3) < *(ulonglong *)(param_1 + 0xa98)) &&
            (*(longlong *)(*(longlong *)(param_1 + 0xa90) + (ulonglong)*(uint *)(param_2 + 3) * 8) != 0))
        {
            FUN_1403b7e80(param_1,(longlong)param_2 + 0x14);
        }
        FUN_1403b77d0(param_1,param_2,1);
    }
    else {
        lVar3 = FUN_1403ac780(param_1 + 0xa0,(longlong)param_2 + 0x14);
        if (lVar3 != 0) {
            FUN_1403b7d40(param_1,*param_2,0x31);
        }
        FUN_1403b77d0(param_1,param_2,1);
        FUN_14040fae0(local_4e8);
        plVar4 = (longlong *)FUN_1403ac780(param_1 + 0xa0,(longlong)param_2 + 0x14);
        if (plVar4 != local_4e8[0]) {
            if (local_4e8[0] != (longlong *)0x0) {
                (**(code **)(*local_4e8[0] + 8))();
            }
            local_4e8[0] = plVar4;
            if (plVar4 != (longlong *)0x0) {
                (**(code **)*plVar4)(plVar4);
            }
        }
        local_34 = 0;
        FUN_140412ad0(local_4e8);
        FUN_1403b8060(param_1,local_4e8,*(undefined4 *)((longlong)param_2 + 0x1c),
                      *(undefined4 *)(param_2 + 0x15));
        FUN_1400a8020(*(longlong *)(param_1 + 0x7340) + 0xe88);
        if (*(longlong *)(param_1 + 0x7fe0) != 0) {
            FUN_1400a8020(*(longlong *)(param_1 + 0x7fe0) + 0x178);
        }
        if (local_4e8[0] != (longlong *)0x0) {
            (**(code **)(*local_4e8[0] + 8))();
            local_4e8[0] = (longlong *)0x0;
        }
        if (local_1e8 != 0) {
            FUN_14018b900(local_1e8,0);
        }
    }
    FUN_1407db4f0(local_28 ^ (ulonglong)auStack1288);
    return;
}



undefined8 FUN_1403b85a0(longlong param_1,undefined8 *param_2)

{
    undefined4 uVar1;
    undefined8 uVar2;
    int iVar3;
    longlong lVar4;

    lVar4 = FUN_1403acbb0(param_1 + 0xa0,*param_2);
    if (lVar4 != 0) {
        uVar2 = param_2[1];
        uVar1 = *(undefined4 *)(param_2 + 2);
        *(undefined8 *)(lVar4 + 0xb0) = param_2[3];
        *(undefined4 *)(lVar4 + 0xdc) = uVar1;
        *(undefined8 *)(lVar4 + 0xe0) = uVar2;
        *(undefined4 *)(lVar4 + 0x124) = 1;
        iVar3 = FUN_14056a430(lVar4);
        if (-1 < iVar3) {
            FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ItemModified",&DAT_1409ead24,lVar4);
        }
    }
    return 0;
}



void FUN_1403b8630(longlong param_1,uint *param_2)

{
    int iVar1;
    uint uVar2;
    undefined4 *puVar4;
    undefined auStack216 [32];
    undefined8 local_b8;
    undefined4 local_b0;
    undefined8 local_a8;
    undefined4 local_a0;
    undefined4 *local_98;
    undefined4 *local_90;
    undefined8 local_88;
    undefined8 *local_80;
    undefined4 local_78;
    uint local_60;
    undefined4 uStack92;
    undefined4 uStack88;
    undefined4 uStack84;
    undefined8 local_50;
    ulonglong local_48;
    undefined8 local_40;
    undefined8 local_38;
    ulonglong local_30;
    undefined8 local_28;
    ulonglong local_20;
    ulonglong uVar3;

    local_20 = DAT_140c0f7b0 ^ (ulonglong)auStack216;
    FUN_1403d2fc0(param_1 + 0x6330);
    uVar3 = 0;
    if (*param_2 != 0) {
        do {
            puVar4 = (undefined4 *)(uVar3 * 0x88 + *(longlong *)(param_2 + 2));
            local_60 = puVar4[0x1f];
            local_50 = *(undefined8 *)(puVar4 + 0x1a);
            local_38 = *(undefined8 *)(puVar4 + 0x1c);
            local_48 = (ulonglong)(uint)puVar4[0x1e];
            local_40 = 0;
            uStack92 = 0;
            uStack88 = 0;
            local_30 = (ulonglong)local_60;
            local_90 = puVar4 + 0x12;
            local_98 = puVar4 + 0xd;
            uStack84 = 0;
            local_28 = 0;
            local_78 = puVar4[0x20];
            local_80 = &local_50;
            local_88 = *(undefined8 *)(puVar4 + 10);
            local_a0 = puVar4[0xc];
            local_a8 = *(undefined8 *)(puVar4 + 8);
            local_b0 = puVar4[6];
            local_b8 = *(undefined8 *)(puVar4 + 4);
            iVar1 = FUN_1403b8a60(param_1,*puVar4,puVar4[1],puVar4[2]);
            if (iVar1 < 0) goto LAB_1403b876a;
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
        } while (uVar2 < *param_2);
    }
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"BuybackItemsUpdated",&DAT_1409d0d87);
    LAB_1403b876a:
    FUN_1407db4f0(local_20 ^ (ulonglong)auStack216);
    return;
}



void FUN_1403b8a60(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                   undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                   undefined4 *param_9,int *param_10,undefined8 param_11,undefined8 *param_12,
                   undefined4 param_13)

{
    longlong lVar1;
    undefined auStack376 [40];
    undefined8 local_150;
    undefined8 local_148;
    undefined4 local_138 [2];
    undefined4 local_130;
    longlong local_128;
    undefined4 local_120;
    undefined4 local_11c;
    undefined4 local_118;
    undefined8 local_110;
    undefined8 local_108;
    undefined4 local_100;
    undefined8 local_f8;
    undefined4 local_f0;
    undefined4 local_ec;
    undefined4 local_e8;
    undefined4 local_e4;
    undefined4 local_e0;
    undefined4 local_dc;
    uint local_d8;
    int local_d4;
    int local_d0;
    int local_cc;
    int local_c8;
    int local_c4;
    int local_c0;
    int local_bc;
    int local_b8;
    undefined8 local_b0;
    undefined8 local_a8;
    undefined8 local_a0;
    undefined8 local_98;
    undefined8 local_90;
    undefined8 local_88;
    undefined8 local_80;
    undefined8 local_78;
    undefined8 local_70;
    undefined8 local_68;
    undefined8 local_60;
    undefined8 local_58;
    undefined4 local_50;
    undefined8 local_4c;
    undefined4 local_44;
    undefined4 local_40;
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong)auStack376;
    FUN_1403b8ce0(local_138);
    FUN_1407e4830(local_138);
    local_138[0] = param_2;
    lVar1 = FUN_1400b5df0();
    if (lVar1 != 0) {
        local_128 = *(longlong *)(lVar1 + 0x1e8);
        local_88 = 0;
        local_90 = 1;
        local_80 = *param_12;
        local_78 = param_12[1];
        local_a8 = 1;
        local_70 = param_12[2];
        local_68 = param_12[3];
        local_148 = 0;
        local_60 = param_12[4];
        local_b0 = 0;
        local_58 = param_12[5];
        local_120 = *(undefined4 *)(lVar1 + 0x1e0);
        local_a0 = 0;
        local_50 = *(undefined4 *)(lVar1 + 0x1dc);
        local_98 = 0;
        local_4c = 0;
        local_108 = param_5;
        local_44 = 0;
        local_100 = param_6;
        local_f8 = param_7;
        local_150 = 1;
        local_110 = param_11;
        local_11c = 1;
        local_f0 = param_8;
        local_ec = *param_9;
        local_e8 = param_9[1];
        local_e4 = param_9[2];
        local_e0 = param_9[3];
        local_dc = param_9[4];
        local_d4 = *param_10;
        local_d0 = param_10[1];
        local_cc = param_10[2];
        local_c8 = param_10[3];
        local_c4 = param_10[4];
        local_c0 = param_10[5];
        local_bc = param_10[6];
        local_b8 = param_10[7];
        local_d8 = (uint)(local_d4 != 0);
        if (local_d0 != 0) {
            local_d8 = 2;
        }
        if (local_cc != 0) {
            local_d8 = 3;
        }
        if (local_c8 != 0) {
            local_d8 = 4;
        }
        if (local_c4 != 0) {
            local_d8 = 5;
        }
        if (local_c0 != 0) {
            local_d8 = 6;
        }
        if (local_bc != 0) {
            local_d8 = 7;
        }
        local_40 = param_13;
        local_130 = param_3;
        local_118 = param_4;
        if (local_b8 != 0) {
            local_d8 = 8;
        }
    }
    if (local_128 != 0) {
        FUN_1403d3040(param_1 + 0x6330,local_138);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong)auStack376);
    return;
}



longlong FUN_1403b8ce0(longlong param_1)

{
    *(undefined8 *)(param_1 + 0x90) = 1;
    *(undefined8 *)(param_1 + 0xa8) = 1;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0x90) = 1;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 1;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 1;
    *(undefined8 *)(param_1 + 0xd8) = 1;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 1;
    *(undefined8 *)(param_1 + 0xd8) = 1;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    return param_1;
}



int FUN_1403b8dc0(undefined8 param_1,int param_2)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;
    int local_res10 [6];
    undefined4 local_28 [2];
    undefined8 local_20;
    undefined *local_18;
    undefined8 local_10;

    lVar1 = DAT_140c65898;
    uVar5 = (ulonglong)param_2;
    if (param_2 == *(int *)(DAT_140c65898 + 0xa40)) {
        return 1;
    }
    if ((0 < param_2) && (0xb < uVar5)) {
        return 2;
    }
    if ((*(longlong *)(DAT_140c65898 + 0x78) != 0) &&
        (*(int *)(*(longlong *)(DAT_140c65898 + 0x78) + 0x2ac) != 0)) {
        return 3;
    }
    lVar4 = 0;
    iVar2 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8,0xb);
    iVar3 = 0x7fffffff;
    if (iVar2 < 0x7fffffff) {
        iVar3 = iVar2;
    }
    iVar2 = -0x80000000;
    if (-0x80000000 < iVar3) {
        iVar2 = iVar3;
    }
    local_res10[0] = (int)uVar5;
    if (iVar2 <= local_res10[0]) {
        return (int)lVar4 + 4;
    }
    if (*(longlong *)(lVar1 + 0xa58) == lVar4) {
        *(int *)(lVar1 + 0xa40) = local_res10[0];
        FUN_1403f4900(lVar1,0x256,local_res10);
        local_28[0] = 1;
        local_20 = FUN_14001c280(lVar1);
        local_10 = 0;
        local_18 = &LAB_1403b8ee0;
        FUN_140195960(lVar1 + 0xa48,15000,local_28,4);
        return 0;
    }
    return 5;
}



undefined8 FUN_1403b8f00(undefined8 param_1,undefined8 *param_2)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined8 local_res8;

    lVar3 = DAT_140c65898;
    if (((299 < *(int *)param_2) || (*(uint *)((longlong)param_2 + 4) == 0xffffffff)) ||
        ((uVar9 = 0, *(int *)param_2 == 0 && (0x1e < *(uint *)((longlong)param_2 + 4))))) {
        return 0xc;
    }
    local_res8 = param_1;
    lVar4 = FUN_1403ac780();
    if (lVar4 == 0) {
        return 0xc;
    }
    uVar1 = (*(uint **)(lVar4 + 0x40))[0x5f];
    if (uVar1 - 1 < 6) {
        uVar2 = uVar1 - 1;
        if (6 < uVar2) {
            return 0xc;
        }
    }
    else {
        if (uVar1 != 0x14) {
            return 0xc;
        }
        uVar2 = 6;
    }
    if (uVar1 - 1 < 6) {
        if (6 < uVar1 - 1) {
            return 6;
        }
    }
    else if (uVar1 != 0x14) {
        return 6;
    }
    uVar1 = **(uint **)(lVar4 + 0x40);
    plVar5 = (longlong *)((ulonglong)uVar2 * 0x10 + *(longlong *)(lVar3 + 0x568));
    uVar8 = plVar5[1];
    if (uVar8 != 0) {
        do {
            uVar6 = (uVar8 - uVar9 >> 1) + uVar9;
            uVar2 = *(uint *)(*plVar5 + uVar6 * 4);
            if (uVar2 <= uVar1) {
                if (uVar1 <= uVar2) {
                    return 1;
                }
                uVar9 = uVar6 + 1;
                uVar6 = uVar8;
            }
            uVar8 = uVar6;
        } while (uVar9 < uVar6);
    }
    lVar10 = lVar3;
    if ((DAT_140dc2270 & 1) == 0) {
        DAT_140dc2270 = DAT_140dc2270 | 1;
        lVar7 = FUN_140200220(0x4b4);
        lVar10 = DAT_140c65898;
        if (lVar7 == 0) {
            DAT_140dc2274 = 0x4b;
        }
        else {
            DAT_140dc2274 = *(int *)(lVar7 + 4);
        }
    }
    if ((ulonglong)(uint)(*(int *)(*(longlong *)(lVar4 + 0x40) + 0x14) * DAT_140dc2274) <=
        *(ulonglong *)(lVar10 + 0x15f8)) {
        local_res8 = *param_2;
        FUN_1403f4900(lVar3,0x90f,&local_res8);
        return 10;
    }
    return 7;
}



undefined8 FUN_1403b90b0(ulonglong param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;
    uint *puVar6;
    uint uVar7;
    ulonglong uVar8;
    uint uVar9;
    ulonglong uVar10;
    uint *puVar11;
    ulonglong local_res8;

    lVar2 = DAT_140c65898;
    local_res8 = param_1;
    lVar3 = FUN_1400b5df0();
    if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + 0x17c);
        if (iVar1 - 1U < 6) {
            uVar7 = iVar1 - 1;
            if (uVar7 < 7) {
                LAB_1403b910b:
                uVar8 = 0;
                plVar4 = (longlong *)((ulonglong)uVar7 * 0x10 + *(longlong *)(lVar2 + 0x568));
                uVar10 = plVar4[1];
                if (uVar10 != 0) {
                    do {
                        uVar5 = (uVar10 - uVar8 >> 1) + uVar8;
                        uVar7 = *(uint *)(*plVar4 + uVar5 * 4);
                        if (uVar7 <= param_2) {
                            if (param_2 <= uVar7) {
                                uVar7 = 0;
                                puVar11 = (uint *)(lVar2 + 0x578);
                                do {
                                    uVar9 = 0;
                                    puVar6 = puVar11;
                                    do {
                                        if (*puVar6 == param_2) {
                                            return 8;
                                        }
                                        uVar9 = uVar9 + 1;
                                        puVar6 = puVar6 + 1;
                                    } while (uVar9 < 7);
                                    uVar7 = uVar7 + 1;
                                    puVar11 = puVar11 + 0x12;
                                } while (uVar7 < 0xc);
                                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong)param_2;
                                FUN_1403f4900(lVar2,0x38b,&local_res8);
                                return 0xb;
                            }
                            uVar8 = uVar5 + 1;
                            uVar5 = uVar10;
                        }
                        uVar10 = uVar5;
                    } while (uVar8 < uVar5);
                }
                return 9;
            }
        }
        else if (iVar1 == 0x14) {
            uVar7 = 6;
            goto LAB_1403b910b;
        }
    }
    return 0xc;
}



undefined8 FUN_1403b91d0(undefined8 param_1,uint param_2)

{
    int iVar1;
    longlong lVar2;
    uint uVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;

    lVar2 = DAT_140c65898;
    lVar4 = FUN_1400b5df0();
    if (lVar4 != 0) {
        iVar1 = *(int *)(lVar4 + 0x17c);
        uVar7 = 0;
        if (iVar1 - 1U < 6) {
            uVar3 = iVar1 - 1;
        }
        else {
            uVar3 = (iVar1 != 0x14) + 6;
        }
        if ((ulonglong)uVar3 < *(ulonglong *)(lVar2 + 0x570)) {
            plVar5 = (longlong *)((ulonglong)uVar3 * 0x10 + *(longlong *)(lVar2 + 0x568));
            uVar8 = plVar5[1];
            if (uVar8 == 0) {
                return 0;
            }
            do {
                uVar6 = (uVar8 - uVar7 >> 1) + uVar7;
                uVar3 = *(uint *)(*plVar5 + uVar6 * 4);
                if (uVar3 <= param_2) {
                    if (param_2 <= uVar3) {
                        return 1;
                    }
                    uVar7 = uVar6 + 1;
                    uVar6 = uVar8;
                }
                uVar8 = uVar6;
            } while (uVar7 < uVar6);
            return 0;
        }
    }
    return 0;
}



undefined8 FUN_1403b9410(longlong param_1,uint *param_2)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = (ulonglong)*param_2;
    iVar2 = FUN_1403bad30(param_1,uVar4,*(undefined *)((longlong)param_2 + 5));
    if (param_2[2] == 0) {
        FUN_1403baea0(param_1,uVar4 & 0xffffffff,*(undefined *)((longlong)param_2 + 5));
    }
    else {
        iVar3 = FUN_1403bb170(param_1);
        if (iVar3 == 0) {
            FUN_1403badb0(param_1,uVar4 & 0xffffffff,*(undefined *)((longlong)param_2 + 5));
        }
        if (*(char *)(param_2 + 1) != '\0') {
            FUN_1403bb200(param_1,*param_2,*(undefined *)((longlong)param_2 + 5));
        }
    }
    if ((iVar2 != 0) &&
        (((iVar3 = FUN_1403bad30(param_1,*param_2,*(undefined *)((longlong)param_2 + 5)), iVar3 != 0 ||
                                                                                          (iVar3 = FUN_1407a1440(), iVar3 != 0)) && (iVar2 != iVar3)))) {
        for (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608); lVar1 != 0;
             lVar1 = *(longlong *)(lVar1 + 0x88)) {
            if (((*(int *)(lVar1 + 4) - 1U < 2) && (*(int *)(lVar1 + 8) == iVar2)) &&
                (*(int *)(lVar1 + 8) = iVar3, *(int *)(lVar1 + 4) == 1)) {
                *(int *)(lVar1 + 0xc) = iVar3;
            }
        }
    }
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"AbilityBookChange",&DAT_1409d10c6);
    return 0;
}



undefined8 FUN_1403b9530(longlong param_1,byte *param_2)

{
    longlong lVar1;
    ulonglong uVar2;
    ulonglong uVar3;

    lVar1 = *(longlong *)(param_1 + 0x6d90);
    if (lVar1 == 0) {
        return 0x80004005;
    }
    uVar3 = (ulonglong)*param_2;
    uVar2 = FUN_1405e73e0(lVar1);
    if (uVar3 < uVar2) {
        if (uVar3 != *(ulonglong *)(lVar1 + 0x30)) {
            if (*(int *)(lVar1 + 8 + uVar3 * 4) == 0) {
                return 0;
            }
            *(ulonglong *)(lVar1 + 0x30) = uVar3;
            if (DAT_140c89d90 != 0) {
                FUN_1405c7960(DAT_140c89d90,*(undefined4 *)(lVar1 + 8 + uVar3 * 4));
            }
        }
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"StanceChanged","");
    }
    return 0;
}



undefined8 FUN_1403b9620(undefined8 param_1,undefined4 *param_2)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    longlong *plVar4;

    if ((DAT_140c65b80 != (longlong *)0x0) && (*DAT_140c65b80 != 0)) {
        iVar3 = FUN_1403f8270(param_1,param_2[2],0);
        if (iVar3 != 0) {
            plVar4 = (longlong *)FUN_1405fc7b0(*DAT_140c65b80,*param_2);
            if (plVar4 != (longlong *)0x0) {
                uVar1 = param_2[1];
                if ((((*plVar4 != 0) && (uVar2 = *(uint *)(*plVar4 + 0x10), uVar1 != uVar2)) &&
                     (uVar1 <= uVar2)) && (plVar4[(ulonglong)uVar1 + 2] != 0)) {
                    *(undefined4 *)(plVar4[(ulonglong)uVar1 + 2] + 0x38) = param_2[2];
                }
            }
        }
    }
    return 0;
}



undefined8 FUN_1403b9720(longlong param_1,undefined4 *param_2)

{
    longlong lVar1;

    *(undefined4 *)(param_1 + 0x7d84) = *param_2;
    lVar1 = FUN_1403d90d0(DAT_140c65898);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
        lVar1 = FUN_1402092a0(*(undefined4 *)(*(longlong *)(lVar1 + 0x18) + 0x14c));
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0x14) == 1)) {
            FUN_1403a71f0(DAT_140c65898,*(undefined4 *)(param_1 + 0x7d84),0x24);
        }
    }
    FUN_1404259d0(*(undefined8 *)(param_1 + 0x7340),param_2);
    return 0;
}



undefined8 FUN_1403b9c60(longlong param_1,int *param_2)

{
    undefined8 *puVar1;
    longlong *plVar2;
    int iVar3;
    undefined4 uVar4;
    int *piVar5;
    undefined8 uVar6;
    uint uVar7;
    int iVar8;
    longlong lVar10;
    uint uVar11;
    longlong lVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    undefined4 uVar15;
    undefined8 local_res10;
    undefined8 *in_stack_ffffffffffffff98;
    undefined **local_58;
    undefined8 local_50;
    LPVOID local_48;
    undefined **local_38;
    undefined8 local_30;
    LPVOID local_28;
    ulonglong uVar9;

    uVar13 = 0;
    uVar15 = 0;
    if ((*param_2 - 7U < 2) || (*param_2 == 0)) {
        FUN_1403bda00();
    }
    uVar11 = param_2[2];
    if (uVar11 == 0) {
        lVar12 = 0xc;
        *(undefined4 *)(param_1 + 0x10c0 + (longlong)*param_2 * 4) = 0;
        do {
            lVar10 = *(longlong *)(param_1 + 0x10e8 + (uVar13 + (longlong)*param_2 * 0xc) * 8);
            if (lVar10 != 0) {
                iVar3 = FUN_1403a1600(param_1);
                if ((iVar3 != 0) &&
                    (**(int **)(*(longlong *)(param_1 + 0x6ce8) + 0x70) == *(int *)(lVar10 + 0x114))) {
                    FUN_1403a1510(param_1);
                }
                iVar3 = (**(code **)(**(longlong **)
                        (param_1 + 0x10e8 + (uVar13 + (longlong)*param_2 * 0xc) * 8) + 0x10))
                        ();
                if ((iVar3 == 0) &&
                    (puVar1 = *(undefined8 **)(param_1 + 0x10e8 + (uVar13 + (longlong)*param_2 * 0xc) * 8),
                            puVar1 != (undefined8 *)0x0)) {
                    (**(code **)*puVar1)(puVar1,1);
                }
                *(undefined8 *)(param_1 + 0x10e8 + (uVar13 + (longlong)*param_2 * 0xc) * 8) = 0;
            }
            uVar13 = uVar13 + 1;
            lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
    }
    else {
        uVar14 = 1;
        if (uVar11 != 0) {
            piVar5 = *(int **)(param_2 + 4);
            uVar9 = uVar13;
            do {
                uVar14 = uVar13;
                if (*piVar5 == 0) break;
                uVar7 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar7;
                piVar5 = piVar5 + 1;
                uVar14 = 1;
            } while (uVar7 < uVar11);
        }
        *(int *)(param_1 + 0x10c0 + (longlong)*param_2 * 4) = (int)uVar14;
        uVar14 = uVar13;
        uVar9 = uVar13;
        if (*(int *)(param_1 + 0x10c0 + (longlong)*param_2 * 4) == 0) {
            local_50 = 0;
            local_58 = &PTR_LAB_140b5e648;
            local_48 = TlsGetValue(DAT_140c63720);
            TlsSetValue(DAT_140c63720,&local_58);
            local_38 = local_58;
            local_res10 = 0x141df0370;
            local_28 = local_48;
            local_30 = local_50;
            iVar3 = FUN_140196f30(&DAT_140c8a6c8,0x1c,&local_res10,&local_38);
            local_58 = &PTR_LAB_140b5e648;
            TlsSetValue(DAT_140c63720,local_48);
            if (iVar3 != 0) {
                DebugBreak();
            }
            return 0x80004005;
        }
        do {
            uVar11 = (uint)uVar13;
            if (uVar11 < (uint)param_2[2]) {
                local_res10 = CONCAT44(uVar11,4);
                in_stack_ffffffffffffff98 = &local_res10;
                uVar6 = FUN_1403c1bf0(param_1,*param_2,
                                      *(undefined4 *)(*(longlong *)(param_2 + 6) + uVar14 * 4),
                                      *(undefined4 *)(*(longlong *)(param_2 + 4) + uVar14 * 4),
                                      in_stack_ffffffffffffff98,param_2[1]);
                uVar9 = (ulonglong)((int)uVar9 + 1);
                *(undefined8 *)(param_1 + 0x10e8 + (uVar14 + (longlong)*param_2 * 0xc) * 8) = uVar6;
            }
            else {
                plVar2 = *(longlong **)(param_1 + 0x10e8 + (uVar14 + (longlong)*param_2 * 0xc) * 8);
                if (plVar2 != (longlong *)0x0) {
                    iVar3 = (**(code **)(*plVar2 + 0x10))();
                    if ((iVar3 == 0) &&
                        (puVar1 = *(undefined8 **)(param_1 + 0x10e8 + (uVar14 + (longlong)*param_2 * 0xc) * 8),
                                puVar1 != (undefined8 *)0x0)) {
                        (**(code **)*puVar1)(puVar1,1);
                    }
                    *(undefined8 *)(param_1 + 0x10e8 + (uVar14 + (longlong)*param_2 * 0xc) * 8) = 0;
                }
            }
            uVar15 = (undefined4)uVar9;
            uVar13 = (ulonglong)(uVar11 + 1);
            uVar14 = uVar14 + 1;
        } while (uVar11 + 1 < 0xc);
    }
    if (*param_2 == 0) {
        uVar4 = 9;
        if (*(int *)(param_1 + 0x10c0) != 0) {
            uVar4 = 0;
        }
        *(undefined4 *)(param_1 + 0x1498) = uVar4;
    }
    iVar3 = *param_2;
    if (iVar3 - 7U < 2) {
        iVar8 = 9;
        if (*(int *)(param_1 + 0x10c0 + (longlong)iVar3 * 4) != 0) {
            iVar8 = iVar3;
        }
        *(int *)(param_1 + 0x149c) = iVar8;
    }
    FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"ShowActionBarShortcut",&DAT_1409e98ac,
                  (longlong)*param_2,
                  (ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000 |
                  (ulonglong)*(uint *)(param_1 + 0x10c0 + (longlong)*param_2 * 4),uVar15);
    return 0;
}



undefined8 FUN_1403b9fb0(longlong param_1,uint *param_2)

{
    uint uVar1;
    uint uVar2;
    longlong lVar3;
    undefined8 *puVar4;
    undefined4 *puVar5;
    int iVar6;
    undefined4 uVar7;
    longlong lVar8;
    undefined8 uVar9;
    uint **ppuVar10;
    uint uVar11;
    uint uVar12;
    bool bVar13;
    longlong local_res8;
    undefined local_48 [16];
    uint local_38;
    uint local_34;
    uint local_30;
    uint local_2c;
    undefined8 *local_28;

    if (*(longlong *)(param_1 + 0x78) == 0) {
        return 0;
    }
    lVar8 = *(longlong *)(param_1 + 0x1480);
    uVar12 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    local_2c = param_2[3];
    uVar11 = 0;
    local_res8 = lVar8;
    lVar3 = *(longlong *)(lVar8 + 8);
    if (param_2[3] == 0) {
        while (lVar3 != 0) {
            bVar13 = *(uint *)(lVar3 + 0x20) < uVar12;
            if (*(uint *)(lVar3 + 0x20) == uVar12) {
                if (*(uint *)(lVar3 + 0x24) == uVar1) {
                    bVar13 = *(uint *)(lVar3 + 0x28) < uVar2;
                }
                else {
                    bVar13 = (int)*(uint *)(lVar3 + 0x24) < (int)uVar1;
                }
            }
            if (bVar13) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res8 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if (local_res8 == lVar8) {
            LAB_1403ba1fb:
            local_res8 = lVar8;
        }
        else {
            bVar13 = uVar12 < *(uint *)(local_res8 + 0x20);
            if (uVar12 == *(uint *)(local_res8 + 0x20)) {
                if (uVar1 == *(uint *)(local_res8 + 0x24)) {
                    bVar13 = uVar2 < *(uint *)(local_res8 + 0x28);
                }
                else {
                    bVar13 = (int)uVar1 < (int)*(uint *)(local_res8 + 0x24);
                }
            }
            if (bVar13) goto LAB_1403ba1fb;
        }
        if (local_res8 == lVar8) {
            return 0;
        }
        puVar4 = *(undefined8 **)(local_res8 + 0x30);
        if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
        }
        FUN_1403d5dd0(param_1 + 0x1478);
        uVar9 = *(undefined8 *)(param_1 + 0x7340);
        uVar12 = param_2[2];
        uVar1 = param_2[1];
        if ((*param_2 != 0) &&
            ((((*(longlong *)(DAT_140c65898 + 0x78) != 0 && (DAT_140c65898 != 0)) &&
               (lVar8 = FUN_1405a5b90(DAT_140c65898), lVar8 != 0)) ||
              (lVar8 = FUN_1407a0fd0(DAT_140c65b70), lVar8 != 0)))) {
            FUN_1400ea3e0(uVar9,"RemoveSpellShortcut",&DAT_1409e994c,lVar8,uVar1,uVar12);
        }
        goto LAB_1403ba29e;
    }
    while (lVar3 != 0) {
        bVar13 = *(uint *)(lVar3 + 0x20) < uVar12;
        if (*(uint *)(lVar3 + 0x20) == uVar12) {
            if (*(uint *)(lVar3 + 0x24) == uVar1) {
                bVar13 = *(uint *)(lVar3 + 0x28) < uVar2;
            }
            else {
                bVar13 = (int)*(uint *)(lVar3 + 0x24) < (int)uVar1;
            }
        }
        if (bVar13) {
            lVar3 = *(longlong *)(lVar3 + 0x18);
        }
        else {
            local_res8 = lVar3;
            lVar3 = *(longlong *)(lVar3 + 0x10);
        }
    }
    if (local_res8 == lVar8) {
        LAB_1403ba06b:
        local_res8 = lVar8;
    }
    else {
        bVar13 = uVar12 < *(uint *)(local_res8 + 0x20);
        if (uVar12 == *(uint *)(local_res8 + 0x20)) {
            if (uVar1 == *(uint *)(local_res8 + 0x24)) {
                bVar13 = uVar2 < *(uint *)(local_res8 + 0x28);
            }
            else {
                bVar13 = (int)uVar1 < (int)*(uint *)(local_res8 + 0x24);
            }
        }
        if (bVar13) goto LAB_1403ba06b;
    }
    if (local_res8 != lVar8) {
        return 0;
    }
    local_2c = param_2[3];
    local_38 = uVar12;
    local_34 = uVar1;
    local_30 = uVar2;
    lVar8 = FUN_14018b280(0x210,0);
    if (lVar8 == 0) {
        local_28 = (undefined8 *)0x0;
    }
    else {
        local_28 = (undefined8 *)FUN_1405c7150(lVar8,9);
    }
    puVar4 = local_28;
    iVar6 = FUN_1405c7960(local_28,*param_2);
    if (iVar6 < 0) {
        if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4,1);
        }
        local_28 = (undefined8 *)0x0;
    }
    FUN_1403d5c90(param_1 + 0x1478,local_48,&local_38);
    uVar9 = *(undefined8 *)(param_1 + 0x7340);
    uVar12 = param_2[2];
    uVar1 = param_2[1];
    if ((*param_2 != 0) &&
        ((((*(longlong *)(DAT_140c65898 + 0x78) != 0 && (DAT_140c65898 != 0)) &&
           (lVar8 = FUN_1405a5b90(DAT_140c65898), lVar8 != 0)) ||
          (lVar8 = FUN_1407a0fd0(DAT_140c65b70), lVar8 != 0)))) {
        FUN_1400ea3e0(uVar9,"AddSpellShortcut",&DAT_1409e9864,lVar8,uVar1,uVar12);
    }
    if (param_2[1] - 1 < 2) {
        FUN_140437a10(DAT_140c658d8,0x7e,0,0,0,0,1);
    }
    LAB_1403ba29e:
    uVar12 = param_2[1];
    if (uVar12 == 1) {
        lVar8 = FUN_1405a8a40();
        if (lVar8 != 0) {
            if (((*(undefined4 **)(lVar8 + 8))[3] & 0x80000) == 0) {
                uVar7 = FUN_1405fbc40(*DAT_140c65b80,**(undefined4 **)(lVar8 + 8));
                FUN_1404261e0(*(undefined8 *)(DAT_140c65898 + 0x7340),param_2[2],uVar7);
            }
            else {
                uVar7 = FUN_1405fbc40(*DAT_140c65b80);
                FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ContractStateChanged",&DAT_1409e91d4,
                              param_2[2],uVar7);
            }
        }
    }
    else if (uVar12 == 2) {
        uVar12 = param_2[2];
        lVar8 = FUN_1405a8ad0();
        if ((lVar8 != 0) && (*(uint *)(lVar8 + 0x10) != 0)) {
            ppuVar10 = (uint **)(lVar8 + 0x18);
            do {
                if ((*ppuVar10 != (uint *)0x0) && (**ppuVar10 == uVar12)) {
                    puVar5 = *(undefined4 **)(lVar8 + 8);
                    if ((puVar5[3] & 0x80000) != 0) {
                        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"ContractObjectiveUpdated",
                                      &DAT_1409e91bc,*puVar5,uVar11);
                        return 0;
                    }
                    FUN_140426240(*(undefined8 *)(DAT_140c65898 + 0x7340),*puVar5,uVar11);
                    return 0;
                }
                uVar11 = uVar11 + 1;
                ppuVar10 = ppuVar10 + 1;
            } while (uVar11 < *(uint *)(lVar8 + 0x10));
        }
    }
    else if (uVar12 == 0) {
        uVar9 = FUN_140491c60(DAT_140c65968,param_2[2]);
        FUN_1400ea3e0(*(undefined8 *)(DAT_140c65898 + 0x7340),"PlayerPathMissionUpdate",&DAT_1409ed594,
                      uVar9);
    }
    return 0;
}



longlong FUN_1403ba420(undefined8 param_1,int param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    lVar2 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1480) + 0x10);
    while( true ) {
        if (lVar2 == *(longlong *)(DAT_140c65898 + 0x1480)) {
            return 0;
        }
        if ((*(int *)(lVar2 + 0x24) == param_2) && (*(int *)(lVar2 + 0x28) == param_3)) break;
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
    }
    return lVar2 + 0x20;
}



void FUN_1403ba4a0(longlong param_1)

{
    undefined8 *puVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1480) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0x1480)) {
        do {
            puVar1 = *(undefined8 **)(lVar4 + 0x30);
            if (puVar1 != (undefined8 *)0x0) {
                (**(code **)*puVar1)(puVar1,1);
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
        } while (lVar4 != *(longlong *)(param_1 + 0x1480));
    }
    FUN_140008410(param_1 + 0x1478);
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403ba550(longlong param_1,uint param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    byte bVar5;
    int iVar6;
    undefined4 uVar7;
    uint uVar8;
    uint uVar9;
    longlong lVar10;
    longlong *plVar11;
    longlong *plVar12;
    longlong lVar13;
    ulonglong *puVar14;
    int *piVar15;
    byte bVar16;
    longlong *plVar17;
    ulonglong uVar18;
    longlong lVar19;
    byte bVar20;
    uint uVar21;
    longlong *plVar22;
    bool bVar23;
    longlong local_res18;
    undefined8 local_res20;
    ulonglong local_60;
    longlong *local_58;

    if (param_2 != 0) {
        lVar10 = *(longlong *)(param_1 + 0xaa8);
        local_res18 = lVar10;
        lVar19 = *(longlong *)(lVar10 + 8);
        while (lVar19 != 0) {
            if (*(uint *)(lVar19 + 0x20) < param_2) {
                lVar19 = *(longlong *)(lVar19 + 0x18);
            }
            else {
                local_res18 = lVar19;
                lVar19 = *(longlong *)(lVar19 + 0x10);
            }
        }
        if ((local_res18 == lVar10) || (param_2 < *(uint *)(local_res18 + 0x20))) {
            local_res18 = lVar10;
        }
        if (local_res18 == lVar10) {
            bVar5 = FUN_1407a1590();
            iVar6 = FUN_1407a1440();
            plVar22 = (longlong *)0x0;
            uVar21 = 0;
            uVar8 = uVar21;
            if (iVar6 != 0) {
                uVar8 = FUN_1403baf90(param_1,iVar6);
            }
            uVar7 = FUN_1407a1440();
            lVar10 = FUN_1403acd90(DAT_140c65b70,uVar7,*(undefined8 *)(param_1 + 0x78));
            if (lVar10 != 0) {
                local_res20._0_4_ = 4;
                piVar15 = (int *)(*(longlong *)(lVar10 + 0x70) + 0x198);
                plVar17 = plVar22;
                do {
                    if (*piVar15 == 6) {
                        local_res20._0_4_ = 1;
                        break;
                    }
                    plVar17 = (longlong *)((longlong)plVar17 + 1);
                    piVar15 = piVar15 + 1;
                } while (plVar17 < &DAT_00000005);
                plVar11 = (longlong *)FUN_14018b280(0x10);
                plVar17 = plVar22;
                if (plVar11 != (longlong *)0x0) {
                    plVar11[1] = 0;
                    *plVar11 = 0;
                    plVar17 = plVar11;
                }
                local_60 = (ulonglong)(int)uVar8;
                bVar20 = 0;
                if ((int)local_res20 != 0) {
                    do {
                        uVar18 = local_60;
                        plVar12 = (longlong *)FUN_14018b280(0x28);
                        plVar11 = plVar22;
                        if (plVar12 != (longlong *)0x0) {
                            *plVar12 = 0;
                            *(undefined2 *)(plVar12 + 1) = 0;
                            plVar12[2] = 0;
                            plVar12[4] = 0;
                            plVar12[3] = 0;
                            plVar11 = plVar12;
                        }
                        *(uint *)plVar11 = param_2;
                        *(byte *)((longlong)plVar11 + 9) = bVar5;
                        *(undefined4 *)((longlong)plVar11 + 4) = uVar7;
                        FUN_140052360(plVar11 + 3,bVar5 + 1);
                        if (uVar18 != 0) {
                            *(undefined *)(plVar11 + 1) = 1;
                        }
                        iVar6 = FUN_1403b5000(lVar10,3);
                        if (iVar6 != 0) {
                            uVar8 = uVar21;
                            if (DAT_140c65970 != (longlong *)0x0) {
                                uVar8 = (**(code **)(*DAT_140c65970 + 0x10))();
                            }
                            plVar12 = (longlong *)FUN_1407a1500(DAT_140c65b70,param_2);
                            if ((plVar12 != (longlong *)0x0) && (iVar6 = *(int *)(plVar12 + 1) + -1, -1 < iVar6))
                            {
                                lVar19 = *plVar12;
                                do {
                                    uVar9 = FUN_140491e90();
                                    if (uVar9 <= uVar8) {
                                        uVar1 = *(undefined4 *)(lVar19 + (longlong)iVar6 * 4);
                                        *(char *)(plVar11 + 1) = (char)iVar6 + '\x01';
                                        *(undefined4 *)((longlong)plVar11 + 4) = uVar1;
                                        break;
                                    }
                                    iVar6 = iVar6 + -1;
                                } while (-1 < iVar6);
                            }
                        }
                        lVar2 = plVar17[1];
                        lVar19 = lVar2 + 1;
                        lVar13 = FUN_14018db00(*plVar17,lVar19,8);
                        *(longlong **)(lVar13 + lVar2 * 8) = plVar11;
                        if (*plVar17 != lVar13) {
                            FUN_1407db590(lVar13,*plVar17,plVar17[1] << 3);
                            if (*plVar17 != 0) {
                                (**(code **)(*(longlong *)(*plVar17 + -0x10) + 8))();
                            }
                            *plVar17 = lVar13;
                        }
                        bVar20 = bVar20 + 1;
                        plVar17[1] = lVar19;
                    } while ((int)(uint)bVar20 < (int)local_res20);
                }
                local_60 = local_60 & 0xffffffff00000000 | (ulonglong)param_2;
                local_58 = plVar17;
                FUN_140055f80(param_1 + 0xaa0);
                bVar20 = 1;
                if (bVar5 != 0) {
                    do {
                        uVar8 = FUN_1407a1440();
                        lVar10 = *(longlong *)(param_1 + 0x78);
                        if (uVar8 != 0) {
                            if (lVar10 == 0) {
                                LAB_1403ba906:
                                lVar10 = FUN_1407a0fd0();
                                if (lVar10 == 0) goto LAB_1403ba95b;
                            }
                            else {
                                if (DAT_140c65898[0xf] == lVar10) {
                                    bVar23 = true;
                                }
                                else {
                                    bVar23 = DAT_140c65898[0xc92] == lVar10;
                                }
                                plVar11 = plVar22;
                                if (bVar23) {
                                    plVar11 = DAT_140c65898;
                                }
                                if (plVar11 == (longlong *)0x0) goto LAB_1403ba906;
                                uVar18 = plVar11[0xfa3];
                                uVar4 = uVar18;
                                uVar3 = *(ulonglong *)(uVar18 + 8);
                                while (uVar3 != 0) {
                                    if (*(uint *)(uVar3 + 0x20) < uVar8) {
                                        uVar3 = *(ulonglong *)(uVar3 + 0x18);
                                    }
                                    else {
                                        uVar4 = uVar3;
                                        uVar3 = *(ulonglong *)(uVar3 + 0x10);
                                    }
                                }
                                if ((uVar4 == uVar18) || (uVar8 < *(uint *)(uVar4 + 0x20))) {
                                    local_60 = uVar18;
                                    puVar14 = &local_60;
                                }
                                else {
                                    puVar14 = &local_res20;
                                    local_res20 = uVar4;
                                }
                                if ((*puVar14 == uVar18) || (lVar10 = *(longlong *)(*puVar14 + 0x28), lVar10 == 0))
                                    goto LAB_1403ba906;
                            }
                            uVar7 = *(undefined4 *)(*(longlong *)(lVar10 + 0x70) + 0x18c);
                            if (0 < (int)local_res20) {
                                uVar18 = 0;
                                do {
                                    bVar16 = (char)uVar18 + 1;
                                    *(undefined4 *)
                                            ((ulonglong)bVar20 * 4 +
                                             *(longlong *)(*(longlong *)(*plVar17 + uVar18 * 8) + 0x18)) = uVar7;
                                    uVar18 = (ulonglong)bVar16;
                                } while ((int)(uint)bVar16 < (int)local_res20);
                            }
                        }
                        LAB_1403ba95b:
                        bVar20 = bVar20 + 1;
                    } while (bVar20 <= bVar5);
                }
                if (((((*(int *)(param_1 + 0x7180) == 0) &&
                       (iVar6 = FUN_1403bad30(param_1,param_2,*(undefined *)(param_1 + 0x6dec)), iVar6 != 0))
                      && (lVar10 = FUN_1407a16f0(), lVar10 != 0)) &&
                     ((*(longlong *)(param_1 + 0x78) != 0 &&
                       (piVar15 = (int *)FUN_1407a16f0(), piVar15 != (int *)0x0)))) &&
                    (iVar6 = FUN_1405a76a0(param_1,param_2), iVar6 + *piVar15 != 0)) {
                    piVar15 = (int *)FUN_1407a16f0();
                    if (piVar15 != (int *)0x0) {
                        lVar10 = *(longlong *)(param_1 + 0x6dc0);
                        local_res18 = lVar10;
                        lVar19 = *(longlong *)(lVar10 + 8);
                        while (lVar19 != 0) {
                            if (*(uint *)(lVar19 + 0x20) < param_2) {
                                lVar19 = *(longlong *)(lVar19 + 0x18);
                            }
                            else {
                                local_res18 = lVar19;
                                lVar19 = *(longlong *)(lVar19 + 0x10);
                            }
                        }
                        if ((local_res18 == lVar10) || (param_2 < *(uint *)(local_res18 + 0x20))) {
                            local_res18 = lVar10;
                        }
                        if (local_res18 != lVar10) {
                            uVar21 = *(uint *)(local_res18 + 0x24);
                        }
                        plVar22 = (longlong *)(ulonglong)(uVar21 + *piVar15);
                    }
                    FUN_1405a6c90(param_1,param_2,plVar22);
                }
            }
        }
    }
    return;
}



void FUN_1403baa80(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong *plVar4;
    ulonglong uVar5;
    longlong local_res18;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0xaa8);
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
        lVar1 = local_res18;
        if (local_res18 != *(longlong *)(param_1 + 0xaa8)) {
            plVar4 = *(longlong **)(local_res18 + 0x28);
            uVar5 = 0;
            if (plVar4[1] != 0) {
                do {
                    lVar2 = *(longlong *)(*plVar4 + uVar5 * 8);
                    if (lVar2 != 0) {
                        lVar3 = *(longlong *)(lVar2 + 0x18);
                        if (lVar3 != 0) {
                            (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                        }
                        FUN_14018b900(lVar2,0);
                    }
                    plVar4 = *(longlong **)(lVar1 + 0x28);
                    uVar5 = uVar5 + 1;
                } while (uVar5 < (ulonglong)plVar4[1]);
            }
            plVar4 = *(longlong **)(lVar1 + 0x28);
            if (plVar4 != (longlong *)0x0) {
                lVar2 = *plVar4;
                if (lVar2 != 0) {
                    (**(code **)(*(longlong *)(lVar2 + -0x10) + 8))(lVar2 + -0x10);
                }
                FUN_14018b900(plVar4,0);
            }
            local_res18 = lVar1;
            FUN_1403d5a90(param_1 + 0xaa0,&local_res18);
        }
    }
    return;
}



void FUN_1403baba0(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    longlong lVar4;
    ulonglong uVar5;

    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xaa8) + 0x10);
    if (lVar4 != *(longlong *)(param_1 + 0xaa8)) {
        do {
            plVar2 = *(longlong **)(lVar4 + 0x28);
            uVar5 = 0;
            if (plVar2[1] != 0) {
                do {
                    lVar3 = *(longlong *)(*plVar2 + uVar5 * 8);
                    if (lVar3 != 0) {
                        lVar1 = *(longlong *)(lVar3 + 0x18);
                        if (lVar1 != 0) {
                            (**(code **)(*(longlong *)(lVar1 + -0x10) + 8))(lVar1 + -0x10);
                        }
                        FUN_14018b900(lVar3,0);
                    }
                    plVar2 = *(longlong **)(lVar4 + 0x28);
                    uVar5 = uVar5 + 1;
                } while (uVar5 < (ulonglong)plVar2[1]);
            }
            plVar2 = *(longlong **)(lVar4 + 0x28);
            if (plVar2 != (longlong *)0x0) {
                lVar3 = *plVar2;
                if (lVar3 != 0) {
                    (**(code **)(*(longlong *)(lVar3 + -0x10) + 8))(lVar3 + -0x10);
                }
                FUN_14018b900(plVar2,0);
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
        } while (lVar4 != *(longlong *)(param_1 + 0xaa8));
    }
    FUN_140008410(param_1 + 0xaa0);
    return;
}



undefined8 FUN_1403bacc0(longlong param_1,uint param_2,byte param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res20;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0xaa8);
        local_res20 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res20 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res20 == lVar1) || (param_2 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar1;
        }
        if (local_res20 != lVar1) {
            if ((ulonglong)param_3 < (ulonglong)(*(longlong **)(local_res20 + 0x28))[1]) {
                return *(undefined8 *)(**(longlong **)(local_res20 + 0x28) + (ulonglong)param_3 * 8);
            }
        }
    }
    return 0;
}



undefined4 FUN_1403bad30(longlong param_1,uint param_2,byte param_3)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    byte bVar4;
    longlong local_res20;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0xaa8);
        local_res20 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res20 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res20 == lVar1) || (param_2 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar1;
        }
        if (local_res20 != lVar1) {
            uVar3 = (uint)param_3;
            bVar4 = *(char *)(*(longlong **)(local_res20 + 0x28) + 1) - 1;
            if (bVar4 < param_3) {
                uVar3 = (uint)bVar4;
            }
            return *(undefined4 *)
                    (*(longlong *)(**(longlong **)(local_res20 + 0x28) + (ulonglong)uVar3 * 8) + 4);
        }
    }
    return 0;
}



void FUN_1403badb0(longlong param_1,uint param_2,byte param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    byte bVar4;
    longlong local_res20;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0xaa8);
        local_res20 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res20 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res20 == lVar1) || (param_2 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar1;
        }
        if (local_res20 != lVar1) {
            if (param_3 == 4) {
                param_3 = 0;
                bVar4 = *(byte *)(*(longlong *)(local_res20 + 0x28) + 8);
            }
            else {
                bVar4 = param_3 + 1;
            }
            for (; param_3 < bVar4; param_3 = param_3 + 1) {
                lVar1 = **(longlong **)(local_res20 + 0x28);
                lVar2 = *(longlong *)(lVar1 + (ulonglong)param_3 * 8);
                *(undefined *)(lVar2 + 8) = 1;
                uVar3 = FUN_1407a1440(lVar1,param_2,1);
                *(undefined4 *)(lVar2 + 4) = uVar3;
            }
        }
    }
    return;
}



void FUN_1403baea0(longlong param_1,uint param_2,byte param_3)

{
    longlong lVar1;
    longlong lVar2;
    undefined4 uVar3;
    byte bVar4;
    longlong local_res20;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0xaa8);
        local_res20 = lVar1;
        lVar2 = *(longlong *)(lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *)(lVar2 + 0x20) < param_2) {
                lVar2 = *(longlong *)(lVar2 + 0x18);
            }
            else {
                local_res20 = lVar2;
                lVar2 = *(longlong *)(lVar2 + 0x10);
            }
        }
        if ((local_res20 == lVar1) || (param_2 < *(uint *)(local_res20 + 0x20))) {
            local_res20 = lVar1;
        }
        if (local_res20 != lVar1) {
            if (param_3 == 4) {
                param_3 = 0;
                bVar4 = *(byte *)(*(longlong *)(local_res20 + 0x28) + 8);
            }
            else {
                bVar4 = param_3 + 1;
            }
            for (; param_3 < bVar4; param_3 = param_3 + 1) {
                lVar1 = **(longlong **)(local_res20 + 0x28);
                lVar2 = *(longlong *)(lVar1 + (ulonglong)param_3 * 8);
                *(undefined *)(lVar2 + 8) = 0;
                uVar3 = FUN_1407a1440(lVar1,param_2,1);
                *(undefined4 *)(lVar2 + 4) = uVar3;
            }
        }
    }
    return;
}



undefined8 FUN_1403baf90(undefined8 param_1,undefined4 param_2)

{
    int iVar1;
    longlong lVar2;
    int *piVar3;
    ulonglong uVar4;
    int *piVar5;
    ulonglong uVar6;

    iVar1 = FUN_1403bb040();
    if (iVar1 == 0) {
        return 0;
    }
    lVar2 = FUN_1403acd90(DAT_140c65b70,param_2);
    if (lVar2 == 0) {
        return 0;
    }
    lVar2 = *(longlong *)(lVar2 + 0x70);
    if (*(byte *)(lVar2 + 8) == 1) {
        iVar1 = *(int *)(lVar2 + 400);
    }
    else {
        if (*(byte *)(lVar2 + 8) < 2) goto LAB_1403bafe0;
        iVar1 = *(int *)(lVar2 + 0x18c);
    }
    if (iVar1 != 0) {
        return 0;
    }
    LAB_1403bafe0:
    uVar4 = 0;
    piVar3 = (int *)(lVar2 + 0x198);
    piVar5 = piVar3;
    uVar6 = uVar4;
    do {
        if (*piVar5 == 5) {
            return 0;
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 1;
    } while (uVar6 < 5);
    do {
        if (*piVar3 == 8) {
            return 0;
        }
        uVar4 = uVar4 + 1;
        piVar3 = piVar3 + 1;
    } while (uVar4 < 5);
    return 1;
}



undefined8 FUN_1403bb040(longlong param_1,int param_2)

{
    uint *puVar1;
    int iVar2;
    uint uVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    int *piVar7;
    ulonglong uVar8;
    longlong lVar9;

    if ((param_2 == 0) || (*(longlong *)(param_1 + 0x78) == 0)) {
        return 0;
    }
    lVar5 = FUN_1403acd90();
    if (lVar5 == 0) {
        return 0;
    }
    lVar9 = *(longlong *)(param_1 + 0x78);
    lVar6 = FUN_1407a1630();
    uVar8 = 0;
    if ((lVar6 == 0) ||
        ((*(uint *)(lVar6 + 8) < *(uint *)(lVar9 + 0x38) ||
          *(uint *)(lVar6 + 8) == *(uint *)(lVar9 + 0x38) &&
          ((*(int *)(lVar6 + 0x10) == 0 ||
            (iVar2 = (**(code **)(*DAT_140c659a0 + 0x18))
                    (DAT_140c659a0,lVar9,*(int *)(lVar6 + 0x10),0,0,0), iVar2 != 0)))))) {
        lVar5 = *(longlong *)(lVar5 + 0x70);
        piVar7 = (int *)(lVar5 + 0x198);
        do {
            if (*piVar7 == 3) {
                uVar3 = FUN_140491e90(lVar5,param_2);
                uVar4 = FUN_14047c450(*(undefined8 *)(param_1 + 0x78));
                if (uVar3 <= uVar4) {
                    return 1;
                }
                return 0;
            }
            uVar8 = uVar8 + 1;
            piVar7 = piVar7 + 1;
        } while (uVar8 < 5);
        if (*(byte *)(lVar5 + 8) < 0xb) {
            uVar3 = *(uint *)(DAT_140c65b70 + 0x4f0 + (ulonglong)*(byte *)(lVar5 + 8) * 4);
        }
        else {
            uVar3 = 0xffffffff;
        }
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x78) + 0x38);
        if (uVar3 < *puVar1 || uVar3 == *puVar1) {
            return 1;
        }
    }
    return 0;
}



bool FUN_1403bb170(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    byte bVar3;
    byte bVar4;
    longlong local_res18;

    if (param_2 != 0) {
        lVar1 = *(longlong *)(param_1 + 0xaa8);
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
            bVar4 = *(char *)(*(longlong **)(local_res18 + 0x28) + 1) - 1;
            bVar3 = *(byte *)(param_1 + 0x6dec);
            if (bVar4 < *(byte *)(param_1 + 0x6dec)) {
                bVar3 = bVar4;
            }
            return *(char *)(*(longlong *)(**(longlong **)(local_res18 + 0x28) + (ulonglong)bVar3 * 8) + 8
            ) != '\0';
        }
    }
    return false;
}



void FUN_1403bb200(longlong param_1,uint param_2,byte param_3,byte param_4)

{
    byte bVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    longlong local_18;

    if (param_2 != 0) {
        lVar2 = *(longlong *)(param_1 + 0xaa8);
        local_18 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < param_2) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_18 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_18 == lVar2) || (param_2 < *(uint *)(local_18 + 0x20))) {
            local_18 = lVar2;
        }
        if (local_18 != lVar2) {
            if ((ulonglong)param_3 < (ulonglong)(*(longlong **)(local_18 + 0x28))[1]) {
                lVar2 = *(longlong *)(**(longlong **)(local_18 + 0x28) + (ulonglong)param_3 * 8);
                bVar1 = *(byte *)(lVar2 + 9);
                if (bVar1 < param_4) {
                    param_4 = bVar1;
                }
                *(byte *)(lVar2 + 8) = param_4;
                if (param_4 == 0) {
                    param_4 = 1;
                }
                uVar4 = FUN_1407a1440(bVar1,param_2,param_4);
                *(undefined4 *)(lVar2 + 4) = uVar4;
            }
        }
    }
    return;
}



int FUN_1403bb2b0(undefined8 param_1,longlong param_2,byte param_3,byte param_4)

{
    ulonglong uVar1;
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    if (((param_3 < param_4) && (param_3 != 0)) && (1 < param_4)) {
        param_3 = param_3 + 1;
        iVar3 = iVar2;
        if (param_3 <= param_4) {
            do {
                uVar1 = (ulonglong)param_3;
                param_3 = param_3 + 1;
                iVar2 = iVar2 - *(int *)(*(longlong *)(param_2 + 0x18) + uVar1 * 4);
            } while (param_3 <= param_4);
            return iVar2;
        }
    }
    else if (((param_4 < param_3) && (1 < param_3)) && (param_4 < param_3)) {
        do {
            if (param_3 < 2) {
                return iVar2;
            }
            uVar1 = (ulonglong)param_3;
            param_3 = param_3 - 1;
            iVar3 = iVar2 + *(int *)(*(longlong *)(param_2 + 0x18) + uVar1 * 4);
            iVar2 = iVar3;
        } while (param_4 < param_3);
    }
    return iVar3;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403bb340(ulonglong param_1,undefined8 param_2,byte param_3)

{
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    char cVar4;
    uint uVar5;
    longlong lVar6;
    ulonglong local_res8;
    undefined local_18 [16];

    lVar3 = DAT_140c65898;
    if (param_3 < 10) {
        uVar5 = (uint)param_2;
        local_res8 = param_1;
        lVar6 = FUN_1403bacc0(DAT_140c65898,param_2,*(undefined *)(DAT_140c65898 + 0x6dec));
        if (lVar6 != 0) {
            uVar1 = *(ulonglong *)(lVar3 + 0x1460);
            local_res8 = uVar1;
            uVar2 = *(ulonglong *)(uVar1 + 8);
            while (uVar2 != 0) {
                if (*(uint *)(uVar2 + 0x20) < uVar5) {
                    uVar2 = *(ulonglong *)(uVar2 + 0x18);
                }
                else {
                    local_res8 = uVar2;
                    uVar2 = *(ulonglong *)(uVar2 + 0x10);
                }
            }
            if ((local_res8 == uVar1) || (uVar5 < *(uint *)(local_res8 + 0x20))) {
                local_res8 = uVar1;
            }
            if (local_res8 == uVar1) {
                local_res8._0_5_ = CONCAT14(param_3,uVar5);
                local_res8 = local_res8 & 0xffffff0000000000 | (ulonglong)(uint5)local_res8;
                FUN_140032f50(lVar3 + 0x1458,local_18,&local_res8);
            }
            else if (*(byte *)(lVar6 + 8) == param_3) {
                FUN_1403d5b90(lVar3 + 0x1458,&local_res8);
            }
            else {
                *(byte *)(local_res8 + 0x24) = param_3;
            }
            cVar4 = FUN_1403bb2b0();
            if (*(int *)(lVar3 + 0x6ddc) == -1) {
                *(undefined4 *)(lVar3 + 0x6ddc) = *(undefined4 *)(lVar3 + 0x6dd8);
            }
            uVar5 = (int)cVar4 + *(int *)(lVar3 + 0x6ddc);
            if (*(uint *)(lVar3 + 0x6de0) < uVar5) {
                uVar5 = *(uint *)(lVar3 + 0x6de0);
            }
            *(uint *)(lVar3 + 0x6ddc) = uVar5;
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403bb480(undefined8 param_1,longlong param_2)

{
    byte bVar1;
    uint uVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    int iVar8;
    undefined8 *puVar9;
    longlong *plVar10;
    longlong lVar11;
    undefined8 *puVar12;
    longlong lVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    longlong lVar16;
    ulonglong uVar17;
    longlong lVar18;
    undefined8 *puVar19;
    bool bVar20;
    undefined8 local_res8;
    longlong local_res10;
    longlong local_res18;
    longlong local_res20;
    longlong local_88;
    longlong local_80;
    undefined8 local_78;
    longlong local_70;
    ulonglong local_68;
    undefined8 *local_60;
    ulonglong local_58;
    undefined8 *local_50;

    lVar7 = DAT_140c65898;
    local_70 = 0;
    local_68 = 0;
    local_60 = (undefined8 *)0x0;
    local_58 = 0;
    local_50 = (undefined8 *)0x0;
    local_80 = DAT_140c65898;
    local_78 = 0xc;
    local_70 = FUN_14018b280();
    lVar18 = *(longlong *)(param_2 + 8);
    local_68 = local_68 & 0xffffffffffffff00 | (ulonglong)*(byte *)(lVar7 + 0x6dec);
    uVar17 = 0;
    lVar16 = local_70;
    if (*(longlong *)(param_2 + 0x10) - lVar18 >> 2 != 0) {
        do {
            uVar15 = (ulonglong)((int)uVar17 + 1);
            *(undefined4 *)(lVar16 + uVar17 * 4) = *(undefined4 *)(lVar18 + uVar17 * 4);
            lVar18 = *(longlong *)(param_2 + 8);
            uVar17 = uVar15;
            lVar16 = local_70;
        } while (uVar15 < (ulonglong)(*(longlong *)(param_2 + 0x10) - lVar18 >> 2));
    }
    lVar16 = *(longlong *)(lVar7 + 0x1468);
    lVar18 = 0;
    puVar19 = (undefined8 *)0x0;
    if (lVar16 != 0) {
        puVar9 = (undefined8 *)FUN_14018b280(lVar16 * 8 + 0x10,0);
        if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = &PTR_LAB_140b55060;
            puVar9[1] = lVar16;
        }
        if (puVar9 + 2 != (undefined8 *)0x0) {
            puVar19 = puVar9 + 2;
        }
    }
    lVar16 = *(longlong *)(*(longlong *)(lVar7 + 0x1460) + 0x10);
    puVar9 = puVar19;
    lVar13 = lVar18;
    local_res8 = param_1;
    if (lVar16 != *(longlong *)(lVar7 + 0x1460)) {
        do {
            uVar2 = *(uint *)(lVar16 + 0x20);
            bVar1 = *(byte *)(lVar16 + 0x24);
            puVar19 = puVar9;
            lVar18 = lVar13;
            if (uVar2 != 0) {
                lVar11 = *(longlong *)(lVar7 + 0xaa8);
                lVar6 = lVar11;
                lVar4 = *(longlong *)(lVar11 + 8);
                while (lVar4 != 0) {
                    if (*(uint *)(lVar4 + 0x20) < uVar2) {
                        lVar4 = *(longlong *)(lVar4 + 0x18);
                    }
                    else {
                        lVar6 = lVar4;
                        lVar4 = *(longlong *)(lVar4 + 0x10);
                    }
                }
                if ((lVar6 == lVar11) || (uVar2 < *(uint *)(lVar6 + 0x20))) {
                    local_res18 = lVar11;
                    plVar10 = &local_res18;
                }
                else {
                    local_res10 = lVar6;
                    plVar10 = &local_res10;
                }
                if (*plVar10 != lVar11) {
                    plVar10 = *(longlong **)(*plVar10 + 0x28);
                    if (((((ulonglong)*(byte *)(lVar7 + 0x6dec) < (ulonglong)plVar10[1]) &&
                          (lVar11 = *(longlong *)(*plVar10 + (ulonglong)*(byte *)(lVar7 + 0x6dec) * 8),
                                  lVar11 != 0)) && (*(char *)(lVar11 + 8) != '\0')) && (bVar1 < 10)) {
                        uVar3 = *(uint *)(lVar11 + 4);
                        lVar11 = *(longlong *)(lVar7 + 0x78);
                        if (uVar3 != 0) {
                            if (lVar11 == 0) {
                                LAB_1403bb6da:
                                lVar11 = FUN_1407a0fd0(DAT_140c65b70);
                                if (lVar11 == 0) goto LAB_1403bb74a;
                            }
                            else {
                                if (*(longlong *)(DAT_140c65898 + 0x78) == lVar11) {
                                    bVar20 = true;
                                }
                                else {
                                    bVar20 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar11;
                                }
                                lVar11 = 0;
                                if (bVar20) {
                                    lVar11 = DAT_140c65898;
                                }
                                if (lVar11 == 0) goto LAB_1403bb6da;
                                lVar11 = *(longlong *)(lVar11 + 0x7d18);
                                lVar6 = lVar11;
                                lVar4 = *(longlong *)(lVar11 + 8);
                                while (lVar4 != 0) {
                                    if (*(uint *)(lVar4 + 0x20) < uVar3) {
                                        lVar4 = *(longlong *)(lVar4 + 0x18);
                                    }
                                    else {
                                        lVar6 = lVar4;
                                        lVar4 = *(longlong *)(lVar4 + 0x10);
                                    }
                                }
                                if ((lVar6 == lVar11) || (uVar3 < *(uint *)(lVar6 + 0x20))) {
                                    local_88 = lVar11;
                                    plVar10 = &local_88;
                                }
                                else {
                                    plVar10 = &local_res20;
                                    local_res20 = lVar6;
                                }
                                if ((*plVar10 == lVar11) || (lVar11 = *(longlong *)(*plVar10 + 0x28), lVar11 == 0))
                                    goto LAB_1403bb6da;
                            }
                            iVar8 = FUN_1403d8c10(lVar11);
                            if (iVar8 == 0) {
                                lVar18 = lVar13 + 1;
                                local_res8 = CONCAT44(CONCAT31(local_res8._5_3_,bVar1),uVar2);
                                puVar12 = (undefined8 *)FUN_14018db00(puVar9,lVar18,8);
                                puVar12[lVar13] = local_res8;
                                if ((puVar9 != puVar12) &&
                                    (FUN_1407db590(puVar12,puVar9), puVar19 = puVar12, puVar9 != (undefined8 *)0x0))
                                {
                                    (**(code **)(puVar9[-2] + 8))(puVar9 + -2);
                                }
                            }
                        }
                    }
                }
            }
            LAB_1403bb74a:
            lVar13 = *(longlong *)(lVar16 + 0x18);
            if (lVar13 == 0) {
                lVar13 = *(longlong *)(lVar16 + 8);
                if (lVar16 == *(longlong *)(lVar13 + 0x18)) {
                    do {
                        lVar16 = lVar13;
                        lVar13 = *(longlong *)(lVar16 + 8);
                    } while (lVar16 == *(longlong *)(lVar13 + 0x18));
                }
                if (*(longlong *)(lVar16 + 0x18) != lVar13) {
                    lVar16 = lVar13;
                }
            }
            else {
                for (lVar11 = *(longlong *)(lVar13 + 0x10); lVar16 = lVar13, lVar11 != 0;
                     lVar11 = *(longlong *)(lVar11 + 0x10)) {
                    lVar13 = lVar11;
                }
            }
            puVar9 = puVar19;
            lVar13 = lVar18;
        } while (lVar16 != *(longlong *)(lVar7 + 0x1460));
    }
    local_68._0_2_ = CONCAT11((char)lVar18,(undefined)local_68);
    local_68 = local_68 & 0xffffffffffff0000 | (ulonglong)(ushort)local_68;
    lVar18 = (ulonglong)*(uint *)(lVar7 + 0x6dec) + 0x6e7;
    uVar17 = *(ulonglong *)(lVar7 + 8 + lVar18 * 0x10);
    local_60 = puVar19;
    if (uVar17 == 0) {
        puVar9 = (undefined8 *)0x0;
    }
    else {
        puVar9 = (undefined8 *)FUN_14018b280(uVar17 * 2 + 0x10,0);
        if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)&DAT_00000010;
        }
        else {
            *puVar9 = &PTR_LAB_140b55060;
            puVar9[1] = uVar17;
            puVar9 = puVar9 + 2;
        }
    }
    lVar16 = uVar17 * 2;
    FUN_1407db590(puVar9,*(undefined8 *)(lVar7 + lVar18 * 0x10),lVar16);
    lVar18 = *(longlong *)(lVar7 + 0x6eb8);
    uVar5 = *(undefined8 *)(lVar7 + 0x6eb0);
    puVar12 = puVar9;
    if (lVar18 != 0) {
        uVar17 = uVar17 + lVar18;
        puVar14 = (undefined8 *)FUN_14018db00(puVar9,uVar17,2);
        FUN_1407db590((undefined *)((longlong)puVar14 + lVar16),uVar5,lVar18 * 2);
        if ((puVar9 != puVar14) &&
            (FUN_1407db590(puVar14,puVar9,lVar16), puVar12 = puVar14, puVar9 != (undefined8 *)0x0)) {
            (**(code **)(puVar9[-2] + 8))(puVar9 + -2);
        }
    }
    local_58 = local_58 & 0xffffffffffffff00 | uVar17 & 0xff;
    local_50 = puVar12;
    FUN_1403f4900(DAT_140c65898,0xb1,&local_78);
    *(undefined8 *)(local_80 + 0x6eb8) = 0;
    FUN_14018b900(local_70,0);
    if (puVar12 != (undefined8 *)0x0) {
        (**(code **)(puVar12[-2] + 8))(puVar12 + -2);
    }
    if (puVar19 != (undefined8 *)0x0) {
        (**(code **)(puVar19[-2] + 8))(puVar19 + -2);
    }
    return;
}



undefined4 FUN_1403bb8d0(void)

{
    longlong lVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    undefined4 uVar6;

    lVar1 = DAT_140c65898;
    uVar6 = 0;
    if ((DAT_140dc2278 & 1) == 0) {
        DAT_140dc2278 = DAT_140dc2278 | 1;
        lVar4 = FUN_140200220(0x41e);
        if (lVar4 == 0) {
            DAT_140dc227c = 0;
        }
        else {
            DAT_140dc227c = *(int *)(lVar4 + 4);
        }
    }
    iVar2 = DAT_140dc227c;
    if (DAT_140dc227c != 0) {
        plVar5 = *(longlong **)(*(longlong *)(lVar1 + 0x6490) + 0x15c0);
        if (plVar5 != (longlong *)0x0) {
            while (iVar3 = (**(code **)(*plVar5 + 8))(plVar5), iVar3 != iVar2) {
                plVar5 = (longlong *)plVar5[2];
                if (plVar5 == (longlong *)0x0) {
                    return 0;
                }
            }
            uVar6 = 1;
        }
        return uVar6;
    }
    return 0;
}



undefined8 FUN_1403bb990(undefined8 param_1,longlong param_2)

{
    undefined4 uVar1;
    longlong lVar2;
    undefined8 *puVar3;
    longlong lVar4;
    int iVar5;
    int iVar6;
    undefined8 uVar7;
    longlong lVar8;
    undefined8 *puVar9;
    longlong lVar10;
    double dVar11;
    int local_res8;
    int iStackX12;

    lVar2 = DAT_140c65898;
    if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_2);
    }
    puVar9 = *(undefined8 **)(param_2 + 0x10);
    uVar7 = FUN_14005c1b0(param_2,0,0);
    *(undefined4 *)(puVar9 + 1) = 5;
    *puVar9 = uVar7;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    iVar5 = FUN_1400578c0(param_2);
    lVar10 = *(longlong *)(*(longlong *)(lVar2 + 0xaa8) + 0x10);
    if (lVar10 != *(longlong *)(lVar2 + 0xaa8)) {
        do {
            iVar6 = FUN_1403bbb90(lVar2,param_2,*(undefined4 *)(lVar10 + 0x20));
            if (iVar6 != 0) {
                FUN_1400fb470();
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            }
            lVar8 = *(longlong *)(lVar10 + 0x18);
            if (lVar8 == 0) {
                lVar8 = *(longlong *)(lVar10 + 8);
                if (lVar10 == *(longlong *)(lVar8 + 0x18)) {
                    do {
                        lVar10 = lVar8;
                        lVar8 = *(longlong *)(lVar10 + 8);
                    } while (lVar10 == *(longlong *)(lVar8 + 0x18));
                }
                if (*(longlong *)(lVar10 + 0x18) != lVar8) {
                    lVar10 = lVar8;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar8 + 0x10); lVar10 = lVar8, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar8 = lVar4;
                }
            }
        } while (lVar10 != *(longlong *)(lVar2 + 0xaa8));
    }
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0xa0);
    if (iVar5 - 1U < *(uint *)(lVar2 + 0x38)) {
        puVar9 = (undefined8 *)((longlong)(iVar5 + -1) * 0x10 + *(longlong *)(lVar2 + 0x18));
    }
    else {
        dVar11 = (double)iVar5;
        if (dVar11 == 0.0) {
            puVar9 = *(undefined8 **)(lVar2 + 0x20);
        }
        else {
            iStackX12 = (int)((ulonglong)dVar11 >> 0x20);
            local_res8 = SUB84(dVar11,0);
            puVar9 = (undefined8 *)
                    (*(longlong *)(lVar2 + 0x20) +
                     ((longlong)(ulonglong)(uint)(iStackX12 + local_res8) %
                      (longlong)((1 << (*(byte *)(lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *)(puVar9 + 3) == 3) && (dVar11 == (double)puVar9[2])) goto LAB_1403bbb4d;
            puVar9 = (undefined8 *)puVar9[4];
        } while (puVar9 != (undefined8 *)0x0);
        puVar9 = &DAT_140a12138;
    }
    LAB_1403bbb4d:
    puVar3 = *(undefined8 **)(param_2 + 0x10);
    *puVar3 = *puVar9;
    uVar1 = *(undefined4 *)(puVar9 + 1);
    *(undefined4 *)(puVar3 + 1) = uVar1;
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
    FUN_1400579e0(param_2,uVar1,iVar5);
    return 1;
}



undefined8 FUN_1403bbb90(longlong param_1,longlong param_2,uint param_3,int param_4)

{
    char cVar1;
    short sVar2;
    uint uVar3;
    uint *puVar4;
    undefined4 *puVar5;
    undefined4 uVar6;
    int iVar7;
    longlong lVar8;
    int *piVar9;
    longlong *plVar10;
    undefined8 uVar11;
    undefined8 *puVar12;
    short *psVar13;
    longlong lVar14;
    ulonglong uVar15;
    undefined *puVar16;
    ulonglong uVar17;
    byte bVar18;
    byte bVar19;
    undefined8 *puVar20;
    longlong local_2c8;
    ulonglong local_2c0;
    int local_2b8;
    longlong local_2b0;
    undefined **local_2a8;
    undefined4 local_2a0;
    undefined4 uStack668;
    longlong local_298;
    undefined4 local_290;
    longlong *local_288;
    undefined **local_280;
    undefined4 local_278;
    longlong local_270;
    undefined4 local_268;
    undefined local_260 [8];
    undefined2 *local_258;
    undefined2 *local_250;
    undefined2 *local_248;
    undefined **local_240;
    undefined4 local_238;
    longlong local_230;
    undefined4 local_228;
    undefined local_220 [8];
    longlong local_218;
    undefined local_1f8 [8];
    undefined local_1f0 [8];
    undefined2 *local_1e8;
    undefined2 *local_1e0;
    longlong local_138;
    undefined local_118 [8];
    undefined local_110 [8];
    undefined2 *local_108;
    undefined2 *local_100;
    longlong local_58;

    if ((param_4 - 3U < 3) || (param_4 == 10)) {
        uVar11 = FUN_1403bc9a0();
        return uVar11;
    }
    lVar8 = *(longlong *)(param_1 + 0xaa8);
    local_2c8 = lVar8;
    lVar14 = *(longlong *)(lVar8 + 8);
    while (lVar14 != 0) {
        if (*(uint *)(lVar14 + 0x20) < param_3) {
            lVar14 = *(longlong *)(lVar14 + 0x18);
        }
        else {
            local_2c8 = lVar14;
            lVar14 = *(longlong *)(lVar14 + 0x10);
        }
    }
    if ((local_2c8 == lVar8) || (param_3 < *(uint *)(local_2c8 + 0x20))) {
        local_2c8 = lVar8;
    }
    if (local_2c8 == lVar8) {
        return 0;
    }
    bVar19 = *(char *)(*(longlong **)(local_2c8 + 0x28) + 1) - 1;
    bVar18 = *(byte *)(param_1 + 0x6dec);
    if (bVar19 < *(byte *)(param_1 + 0x6dec)) {
        bVar18 = bVar19;
    }
    local_2b0 = *(longlong *)(**(longlong **)(local_2c8 + 0x28) + (ulonglong)bVar18 * 8);
    uVar6 = FUN_1407a1440((ulonglong)bVar18,param_3,1);
    lVar8 = FUN_1403acd90(DAT_140c65b70,uVar6,*(undefined8 *)(param_1 + 0x78));
    if ((lVar8 != 0) && ((*(uint *)(*(longlong *)(lVar8 + 0x70) + 0x108) & 0x40000000) == 0)) {
        uVar17 = 0;
        if (param_4 == 0) {
            LAB_1403bbcba:
            plVar10 = (longlong *)FUN_1407a1500(DAT_140c65b70,param_3);
            if (plVar10 == (longlong *)0x0) {
                return 0;
            }
            local_240 = &PTR_FUN_140b569f0;
            local_228 = 1;
            local_288 = plVar10;
            local_230 = param_2;
            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_2);
            }
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            uVar11 = FUN_14005c1b0(param_2,0,0);
            *(undefined4 *)(puVar20 + 1) = 5;
            *puVar20 = uVar11;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar6 = FUN_1400578c0(param_2);
            local_238 = uVar6;
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            *puVar20 = *puVar12;
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2,puVar20,&DAT_140af5d78,param_3);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            uVar11 = FUN_14034bdd0();
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            *puVar20 = *puVar12;
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0870(param_2,puVar20,L"strName",uVar11);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar20 = *puVar12;
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            cVar1 = *(char *)(local_2b0 + 8);
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar20 = *puVar12;
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar8 = FUN_14018f0e0(&local_2a8,L"bIsActive");
            if (*(longlong *)(lVar8 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            }
            else {
                lVar14 = -1;
                do {
                    lVar14 = lVar14 + 1;
                } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar14) != '\0');
                FUN_140058710(param_2);
            }
            if (CONCAT44(uStack668,local_2a0) != 0) {
                FUN_14018b900(CONCAT44(uStack668,local_2a0),0);
            }
            puVar4 = *(uint **)(param_2 + 0x10);
            puVar4[2] = 1;
            *puVar4 = (uint)(cVar1 != '\0');
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar11,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar20 = *puVar12;
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            lVar8 = FUN_14018f0e0(&local_2a8,L"bCanUseOnSecondaryBars");
            if (*(longlong *)(lVar8 + 8) == 0) {
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            }
            else {
                lVar14 = -1;
                do {
                    lVar14 = lVar14 + 1;
                } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar14) != '\0');
                FUN_140058710(param_2);
            }
            lVar8 = 0;
            if (CONCAT44(uStack668,local_2a0) != 0) {
                FUN_14018b900(CONCAT44(uStack668,local_2a0),0);
            }
            puVar5 = *(undefined4 **)(param_2 + 0x10);
            *puVar5 = 0;
            puVar5[2] = 1;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            uVar11 = FUN_1400580e0(param_2,0xfffffffd);
            FUN_14005ea50(param_2,uVar11,*(longlong *)(param_2 + 0x10) + -0x20,
                          *(longlong *)(param_2 + 0x10) + -0x10);
            *(longlong *)(param_2 + 0x10) =
                    (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
            uVar17 = *(ulonglong *)(param_1 + 0x1460);
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            local_2c0 = uVar17;
            uVar15 = *(ulonglong *)(uVar17 + 8);
            while (uVar15 != 0) {
                if (*(uint *)(uVar15 + 0x20) < param_3) {
                    uVar15 = *(ulonglong *)(uVar15 + 0x18);
                }
                else {
                    local_2c0 = uVar15;
                    uVar15 = *(ulonglong *)(uVar15 + 0x10);
                }
            }
            if ((local_2c0 == uVar17) || (param_3 < *(uint *)(local_2c0 + 0x20))) {
                local_2c0 = uVar17;
            }
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            *puVar20 = *puVar12;
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f06f0(param_2);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            FUN_1404dde90(local_1f8);
            FUN_140564760();
            psVar13 = (short *)FUN_14034bdd0();
            if (psVar13 == (short *)0x0) {
                if (local_1e8 != local_1e0) {
                    *local_1e8 = 0;
                    local_1e0 = local_1e8;
                }
            }
            else {
                sVar2 = *psVar13;
                lVar14 = lVar8;
                while (sVar2 != 0) {
                    lVar14 = lVar14 + 1;
                    sVar2 = psVar13[lVar14];
                }
                FUN_14001c480(local_1f0,psVar13,psVar13 + lVar14);
            }
            lVar14 = FUN_1400b7660(local_1f8);
            uVar11 = *(undefined8 *)(lVar14 + 8);
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            *puVar20 = *puVar12;
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0870(param_2,puVar20,L"strAbilityDescription",uVar11);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            psVar13 = (short *)FUN_14034bdd0();
            if (psVar13 == (short *)0x0) {
                if (local_1e8 != local_1e0) {
                    *local_1e8 = 0;
                    local_1e0 = local_1e8;
                }
            }
            else {
                sVar2 = *psVar13;
                while (sVar2 != 0) {
                    lVar8 = lVar8 + 1;
                    sVar2 = psVar13[lVar8];
                }
                FUN_14001c480(local_1f0,psVar13,psVar13 + lVar8);
            }
            lVar8 = FUN_1400b7660(local_1f8);
            uVar11 = *(undefined8 *)(lVar8 + 8);
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            *puVar20 = *puVar12;
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            FUN_1400f0870(param_2,puVar20,L"strAbilityPerTierPointDescription",uVar11);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
            local_2b8 = 0;
            local_250 = (undefined2 *)FUN_14018b280(2);
            local_248 = local_250 + 1;
            local_258 = local_250;
            FUN_1407db590(local_250,&DAT_1409e7cb4,0);
            uVar17 = 0;
            if (local_250 != (undefined2 *)0x0) {
                *local_250 = 0;
            }
            lVar8 = FUN_1407a1630();
            if ((lVar8 != 0) && (*(int *)(lVar8 + 0x10) != 0)) {
                local_2b8 = 1;
                lVar8 = FUN_1402259c0();
                if ((lVar8 != 0) && (*(int *)(lVar8 + 0x38) != 0)) {
                    FUN_1404dde90(local_118);
                    psVar13 = (short *)FUN_14034bdd0();
                    if (psVar13 == (short *)0x0) {
                        if (local_108 != local_100) {
                            *local_108 = 0;
                            local_100 = local_108;
                        }
                    }
                    else {
                        sVar2 = *psVar13;
                        uVar15 = uVar17;
                        while (sVar2 != 0) {
                            uVar15 = uVar15 + 1;
                            sVar2 = psVar13[uVar15];
                        }
                        FUN_14001c480(local_110,psVar13,psVar13 + uVar15);
                    }
                    puVar16 = (undefined *)FUN_1400b7660(local_118);
                    if (puVar16 != local_260) {
                        FUN_14001c480(local_260,*(undefined8 *)(puVar16 + 8),*(undefined8 *)(puVar16 + 0x10));
                    }
                    if (local_58 != 0) {
                        FUN_14018b900(local_58,0);
                    }
                    FUN_1400b7390(local_118);
                }
            }
            local_280 = &PTR_FUN_140b569f0;
            local_268 = 1;
            local_270 = param_2;
            if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_2);
            }
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            uVar11 = FUN_14005c1b0(param_2,0,0);
            *(undefined4 *)(puVar20 + 1) = 5;
            *puVar20 = uVar11;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            local_278 = FUN_1400578c0(param_2);
            lVar8 = param_2;
            if (plVar10[1] != 0) {
                do {
                    uVar3 = *(uint *)(*plVar10 + uVar17 * 4);
                    local_2c0 = local_2c0 & 0xffffffff00000000 | (ulonglong)uVar3;
                    lVar8 = FUN_1403acd90(DAT_140c65b70,uVar3,*(undefined8 *)(param_1 + 0x78));
                    if (lVar8 != 0) {
                        local_2a8 = &PTR_FUN_140b569f0;
                        local_290 = 1;
                        local_298 = param_2;
                        if (*(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x70) <=
                            *(ulonglong *)(*(longlong *)(param_2 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_2);
                        }
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        uVar11 = FUN_14005c1b0(param_2,0,0);
                        *(undefined4 *)(puVar20 + 1) = 5;
                        *puVar20 = uVar11;
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar6 = FUN_1400578c0(param_2);
                        local_2a0 = uVar6;
                        uVar11 = FUN_14034bdd0(*(longlong *)(lVar8 + 8),
                                               *(undefined4 *)(*(longlong *)(lVar8 + 8) + 0x10));
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f0870(param_2,puVar20,L"strName",uVar11);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0();
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        iVar7 = FUN_1403bb040(param_1,uVar3);
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        lVar8 = FUN_14018f0e0(local_220,L"bCanPurchase");
                        if (*(longlong *)(lVar8 + 8) == 0) {
                            *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        }
                        else {
                            lVar14 = -1;
                            do {
                                lVar14 = lVar14 + 1;
                            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar14) != '\0');
                            FUN_140058710(param_2);
                        }
                        if (local_218 != 0) {
                            FUN_14018b900(local_218,0);
                        }
                        puVar4 = *(uint **)(param_2 + 0x10);
                        puVar4[2] = 1;
                        *puVar4 = (uint)(iVar7 != 0);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar11 = FUN_1400580e0(param_2,0xfffffffd);
                        FUN_14005ea50(param_2,uVar11,*(longlong *)(param_2 + 0x10) + -0x20,
                                      *(longlong *)(param_2 + 0x10) + -0x10);
                        *(longlong *)(param_2 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        lVar8 = FUN_14018f0e0(local_220,L"bPrereqLocked");
                        if (*(longlong *)(lVar8 + 8) == 0) {
                            *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
                            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        }
                        else {
                            lVar14 = -1;
                            do {
                                lVar14 = lVar14 + 1;
                            } while (*(char *)(*(longlong *)(lVar8 + 8) + lVar14) != '\0');
                            FUN_140058710(param_2);
                        }
                        lVar8 = 0;
                        if (local_218 != 0) {
                            FUN_14018b900(local_218,0);
                        }
                        puVar4 = *(uint **)(param_2 + 0x10);
                        puVar4[2] = 1;
                        *puVar4 = (uint)(local_2b8 != 0);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        uVar11 = FUN_1400580e0(param_2,0xfffffffd);
                        FUN_14005ea50(param_2,uVar11,*(longlong *)(param_2 + 0x10) + -0x20,
                                      *(longlong *)(param_2 + 0x10) + -0x10);
                        *(longlong *)(param_2 + 0x10) =
                                (longlong)(&DAT_ffffffffffffffd0 + *(longlong *)(param_2 + 0x10));
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f0870(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        FUN_1403c9f10();
                        FUN_1407a1630();
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f06f0(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f0630(param_2);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        psVar13 = (short *)FUN_14034bdd0();
                        if (psVar13 == (short *)0x0) {
                            if (local_1e8 != local_1e0) {
                                *local_1e8 = 0;
                                local_1e0 = local_1e8;
                            }
                        }
                        else {
                            sVar2 = *psVar13;
                            while (sVar2 != 0) {
                                lVar8 = lVar8 + 1;
                                sVar2 = psVar13[lVar8];
                            }
                            FUN_14001c480(local_1f0,psVar13,psVar13 + lVar8);
                        }
                        lVar8 = FUN_1400b7660(local_1f8);
                        uVar11 = *(undefined8 *)(lVar8 + 8);
                        puVar12 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),uVar6);
                        puVar20 = *(undefined8 **)(param_2 + 0x10);
                        *puVar20 = *puVar12;
                        *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
                        FUN_1400f0870(param_2,puVar20,L"strTierBonusDescription",uVar11);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        FUN_1403d3470(param_2,&local_2c0);
                        FUN_1400fb540(&local_2a8);
                        *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + -0x10;
                        FUN_1400fb1d0(&local_280);
                        FUN_1400579e0(param_2);
                        plVar10 = local_288;
                    }
                    uVar17 = uVar17 + 1;
                    lVar8 = local_270;
                } while (uVar17 < (ulonglong)plVar10[1]);
            }
            uVar6 = local_278;
            FUN_1400fb2a0(&local_240,L"tTiers",local_278);
            puVar12 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0xa0),local_238);
            puVar20 = *(undefined8 **)(param_2 + 0x10);
            uVar11 = *puVar12;
            *puVar20 = uVar11;
            *(undefined4 *)(puVar20 + 1) = *(undefined4 *)(puVar12 + 1);
            *(longlong *)(param_2 + 0x10) = *(longlong *)(param_2 + 0x10) + 0x10;
            if (lVar8 != 0) {
                FUN_1400579e0(lVar8,uVar11,uVar6);
            }
            if (local_258 != (undefined2 *)0x0) {
                FUN_14018b900(local_258,0);
            }
            if (local_138 != 0) {
                FUN_14018b900(local_138,0);
            }
            FUN_1400b7390(local_1f8);
            FUN_1400579e0(param_2);
            return 1;
        }
        piVar9 = (int *)(*(longlong *)(lVar8 + 0x70) + 0x198);
        do {
            if (*piVar9 == param_4) goto LAB_1403bbcba;
            uVar17 = uVar17 + 1;
            piVar9 = piVar9 + 1;
        } while (uVar17 < 5);
    }
    return 0;
}



undefined8 FUN_1403bc9a0(longlong param_1,undefined8 param_2,uint param_3,int param_4)

{
    short sVar1;
    uint uVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    longlong *plVar6;
    undefined8 *puVar7;
    short *psVar8;
    longlong lVar9;
    ulonglong uVar10;
    longlong lVar11;
    byte bVar12;
    byte bVar13;
    undefined8 *puVar14;
    ulonglong uVar15;
    longlong local_1a0;
    ulonglong local_198;
    longlong local_190;
    undefined local_188 [8];
    undefined4 local_180;
    longlong local_178;
    longlong local_168;
    undefined local_160 [8];
    undefined4 local_158;
    longlong local_150;
    undefined local_140 [8];
    undefined4 local_138;
    longlong local_130;
    undefined local_118 [8];
    undefined local_110 [8];
    undefined2 *local_108;
    undefined2 *local_100;
    longlong local_58;

    if ((2 < param_4 - 3U) && (param_4 != 10)) {
        uVar5 = FUN_1403bbb90();
        return uVar5;
    }
    lVar9 = *(longlong *)(param_1 + 0xaa8);
    local_1a0 = lVar9;
    lVar11 = *(longlong *)(lVar9 + 8);
    while (lVar11 != 0) {
        if (*(uint *)(lVar11 + 0x20) < param_3) {
            lVar11 = *(longlong *)(lVar11 + 0x18);
        }
        else {
            local_1a0 = lVar11;
            lVar11 = *(longlong *)(lVar11 + 0x10);
        }
    }
    if ((local_1a0 == lVar9) || (param_3 < *(uint *)(local_1a0 + 0x20))) {
        local_1a0 = lVar9;
    }
    if (local_1a0 != lVar9) {
        bVar13 = *(char *)(*(longlong **)(local_1a0 + 0x28) + 1) - 1;
        bVar12 = *(byte *)(param_1 + 0x6dec);
        if (bVar13 < *(byte *)(param_1 + 0x6dec)) {
            bVar12 = bVar13;
        }
        lVar9 = *(longlong *)(**(longlong **)(local_1a0 + 0x28) + (ulonglong)bVar12 * 8);
        uVar3 = FUN_1407a1440((ulonglong)bVar12,param_3,1);
        local_168 = FUN_1403acd90(DAT_140c65b70,uVar3,*(undefined8 *)(param_1 + 0x78));
        if ((local_168 == 0) ||
            (((param_4 != 0 && (iVar4 = FUN_1403b5000(local_168,param_4), iVar4 == 0)) ||
              (plVar6 = (longlong *)FUN_1407a1500(DAT_140c65b70,param_3), plVar6 == (longlong *)0x0)))) {
            uVar5 = 0;
        }
        else {
            FUN_1400fa0f0(local_160,param_2,1);
            lVar11 = local_150;
            uVar3 = local_158;
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_150 + 0x20) + 0xa0),local_158);
            puVar14 = *(undefined8 **)(lVar11 + 0x10);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f06f0(lVar11,puVar14,&DAT_140af5e80,param_3);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            uVar5 = FUN_14034bdd0();
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
            puVar14 = *(undefined8 **)(lVar11 + 0x10);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f0870(lVar11,puVar14,L"strName",uVar5);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(lVar11 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f06f0(lVar11);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(lVar11 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f0630(lVar11);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            puVar14 = *(undefined8 **)(lVar11 + 0x10);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f0630(lVar11);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            uVar15 = *(ulonglong *)(param_1 + 0x1460);
            bVar12 = *(byte *)(lVar9 + 8);
            puVar14 = *(undefined8 **)(lVar11 + 0x10);
            local_198 = uVar15;
            uVar10 = *(ulonglong *)(uVar15 + 8);
            while (uVar10 != 0) {
                if (*(uint *)(uVar10 + 0x20) < param_3) {
                    uVar10 = *(ulonglong *)(uVar10 + 0x18);
                }
                else {
                    local_198 = uVar10;
                    uVar10 = *(ulonglong *)(uVar10 + 0x10);
                }
            }
            if ((local_198 == uVar15) || (param_3 < *(uint *)(local_198 + 0x20))) {
                local_198 = uVar15;
            }
            if (local_198 != uVar15) {
                bVar12 = *(byte *)(local_198 + 0x24);
            }
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f06f0(lVar11);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            FUN_1404dde90(local_118);
            FUN_140564760();
            psVar8 = (short *)FUN_14034bdd0();
            uVar15 = 0;
            if (psVar8 == (short *)0x0) {
                if (local_108 != local_100) {
                    *local_108 = 0;
                    local_100 = local_108;
                }
            }
            else {
                sVar1 = *psVar8;
                uVar10 = uVar15;
                while (sVar1 != 0) {
                    uVar10 = uVar10 + 1;
                    sVar1 = psVar8[uVar10];
                }
                FUN_14001c480(local_110,psVar8,psVar8 + uVar10);
            }
            lVar9 = FUN_1400b7660(local_118);
            uVar5 = *(undefined8 *)(lVar9 + 8);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
            puVar14 = *(undefined8 **)(lVar11 + 0x10);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            FUN_1400f0870(lVar11,puVar14,L"strAbilityDescription",uVar5);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + -0x10;
            psVar8 = (short *)FUN_14034bdd0();
            if (psVar8 == (short *)0x0) {
                if (local_108 != local_100) {
                    *local_108 = 0;
                    local_100 = local_108;
                }
            }
            else {
                sVar1 = *psVar8;
                uVar10 = uVar15;
                while (sVar1 != 0) {
                    uVar10 = uVar10 + 1;
                    sVar1 = psVar8[uVar10];
                }
                FUN_14001c480(local_110,psVar8,psVar8 + uVar10);
            }
            lVar9 = FUN_1400b7660(local_118);
            FUN_1400facc0(local_160,L"strAbilityPerTierPointDescription",*(undefined8 *)(lVar9 + 8));
            FUN_1400fa0f0(local_140,param_2,1);
            if (plVar6[1] != 0) {
                do {
                    uVar2 = *(uint *)(*plVar6 + uVar15 * 4);
                    local_198 = local_198 & 0xffffffff00000000 | (ulonglong)uVar2;
                    lVar9 = FUN_1403acd90(DAT_140c65b70,uVar2,*(undefined8 *)(param_1 + 0x78));
                    local_190 = lVar9;
                    if (lVar9 != 0) {
                        bVar13 = *(byte *)(*(longlong *)(lVar9 + 0x70) + 8);
                        FUN_1400fa0f0(local_188,param_2,1);
                        uVar5 = FUN_14034bdd0(*(longlong *)(lVar9 + 8),
                                              *(undefined4 *)(*(longlong *)(lVar9 + 8) + 0x10));
                        lVar9 = local_178;
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(local_178 + 0x20) + 0xa0),local_180
                                );
                        puVar14 = *(undefined8 **)(lVar9 + 0x10);
                        *puVar14 = *puVar7;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                        FUN_1400f0870(lVar9,puVar14,L"strName",uVar5);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
                        puVar14 = *(undefined8 **)(lVar9 + 0x10);
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),local_180);
                        *puVar14 = *puVar7;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                        FUN_1400f06f0(lVar9);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
                        puVar14 = *(undefined8 **)(lVar9 + 0x10);
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),local_180);
                        *puVar14 = *puVar7;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                        FUN_1400f06f0(lVar9);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
                        puVar14 = *(undefined8 **)(lVar9 + 0x10);
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),local_180);
                        *puVar14 = *puVar7;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                        FUN_1400f06f0(lVar9);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
                        puVar14 = *(undefined8 **)(lVar9 + 0x10);
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),local_180);
                        *puVar14 = *puVar7;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                        FUN_1400f06f0(lVar9);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
                        puVar14 = *(undefined8 **)(lVar9 + 0x10);
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),local_180);
                        *puVar14 = *puVar7;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                        FUN_1400f06f0(lVar9);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
                        FUN_1403bb040(param_1,uVar2);
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),local_180);
                        puVar14 = *(undefined8 **)(lVar9 + 0x10);
                        *puVar14 = *puVar7;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                        FUN_1400f0630(lVar9);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
                        puVar14 = *(undefined8 **)(lVar9 + 0x10);
                        if (param_4 == 3) {
                            FUN_140491e90();
                        }
                        else {
                            FUN_1403c9f10();
                            FUN_1407a1630();
                        }
                        puVar7 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar9 + 0x20) + 0xa0),local_180);
                        *puVar14 = *puVar7;
                        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + 0x10;
                        FUN_1400f06f0(lVar9);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
                        FUN_1400fae20(local_188,L"bIsActive",bVar13 <= bVar12);
                        psVar8 = (short *)FUN_14034bdd0(local_168,
                                                        *(undefined4 *)(*(longlong *)(local_168 + 8) + 0x34));
                        if (psVar8 == (short *)0x0) {
                            if (local_108 != local_100) {
                                *local_108 = 0;
                                local_100 = local_108;
                            }
                        }
                        else {
                            lVar11 = 0;
                            sVar1 = *psVar8;
                            while (sVar1 != 0) {
                                lVar11 = lVar11 + 1;
                                sVar1 = psVar8[lVar11];
                            }
                            FUN_14001c480(local_110,psVar8,psVar8 + lVar11);
                        }
                        lVar11 = FUN_1400b7660(local_118);
                        FUN_1400facc0(local_188,L"strTierBonusDescription",*(undefined8 *)(lVar11 + 8));
                        FUN_1403d3470(lVar9,&local_198);
                        FUN_1400fb540(local_188);
                        *(longlong *)(lVar9 + 0x10) = *(longlong *)(lVar9 + 0x10) + -0x10;
                        FUN_1400fb1d0(local_140);
                        FUN_1400579e0(lVar9);
                    }
                    uVar15 = uVar15 + 1;
                    lVar11 = local_150;
                    uVar3 = local_158;
                } while (uVar15 < (ulonglong)plVar6[1]);
            }
            FUN_1400fb2a0(local_160,L"tTiers",local_138);
            puVar7 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *)(*(longlong *)(lVar11 + 0x20) + 0xa0),uVar3);
            puVar14 = *(undefined8 **)(lVar11 + 0x10);
            *puVar14 = *puVar7;
            *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar7 + 1);
            *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 0x10;
            if (local_130 != 0) {
                FUN_1400579e0(local_130,puVar14,local_138);
            }
            if (local_58 != 0) {
                FUN_14018b900(local_58,0);
            }
            FUN_1400b7390(local_118);
            FUN_1400579e0(lVar11);
            uVar5 = 1;
        }
        return uVar5;
    }
    return 0;
}



undefined8 FUN_1403bd2f0(undefined8 param_1,longlong param_2)

{
    undefined4 *puVar1;
    longlong *plVar2;
    longlong lVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    undefined4 uVar7;
    ulonglong uVar8;

    lVar3 = DAT_140c65898;
    if (((param_2 == 0) || (*(longlong *)(DAT_140c65898 + 0x6490) == 0)) ||
        (puVar1 = *(undefined4 **)(param_2 + 0x70), (puVar1[9] & 0xfffffffd) != 0)) {
        return 0;
    }
    if ((puVar1[6] == 7) || (puVar1[6] == 2)) {
        plVar2 = *(longlong **)(DAT_140c65898 + 0x6d90);
        uVar7 = *puVar1;
        if (plVar2 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar2 + 0x18))(plVar2,param_2,*(undefined8 *)(DAT_140c65898 + 0x78),0);
            uVar7 = **(undefined4 **)(lVar6 + 0x70);
        }
        if ((*(longlong *)(lVar3 + 0x6490) != 0) &&
            (*(int *)(*(longlong *)(lVar3 + 0x6490) + 0x108) != 0)) {
            FUN_1403d90d0(lVar3);
        }
        uVar4 = FUN_1403d3520();
        uVar8 = (ulonglong)uVar4;
        uVar4 = FUN_1403c0190(lVar3,uVar7);
        uVar8 = uVar8 & 0xffffffff;
        if (uVar4 != 0) {
            uVar8 = (ulonglong)uVar4;
        }
        iVar5 = FUN_1403bf980(lVar3,uVar8);
        if (iVar5 != 0) {
            return 0;
        }
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403bd3d0(longlong param_1,int param_2,longlong param_3)

{
    undefined4 uVar1;
    longlong *plVar2;
    undefined4 *puVar3;
    int iVar4;
    undefined4 uVar5;
    ulonglong uVar6;
    longlong lVar7;
    int *piVar8;
    longlong lVar9;
    longlong lVar10;
    ulonglong uVar11;
    longlong **pplVar12;
    int local_res10 [4];
    int local_res20 [2];
    undefined8 local_68;
    undefined4 local_60;
    undefined4 local_58 [2];
    undefined8 local_50;
    code *local_48;
    undefined8 local_40;

    if (param_2 == 0) {
        return;
    }
    if (param_3 == 0) {
        return;
    }
    uVar11 = 0;
    uVar5 = 0;
    if (*(ulonglong *)(param_1 + 0xa98) == 0) {
        return;
    }
    pplVar12 = *(longlong ***)(param_1 + 0xa90);
    uVar6 = uVar11;
    while ((plVar2 = *pplVar12, plVar2 == (longlong *)0x0 || (*(int *)(plVar2 + 8) != param_2))) {
        uVar6 = uVar6 + 1;
        pplVar12 = pplVar12 + 1;
        if (*(ulonglong *)(param_1 + 0xa98) <= uVar6) {
            return;
        }
    }
    local_res10[0] = param_2;
    lVar7 = FUN_1405a4b80(plVar2,1);
    if (lVar7 != 0) {
        iVar4 = FUN_1403a1630(param_1,param_2,0);
        if (iVar4 == 0) {
            return;
        }
        local_res20[0] = *DAT_140c63750;
        puVar3 = *(undefined4 **)(lVar7 + 0x70);
        uVar1 = *puVar3;
        iVar4 = DAT_140c45e40;
        if (local_res20[0] < DAT_140c45e40) {
            iVar4 = local_res20[0];
        }
        if (((&DAT_140c45e50)[iVar4] == '\0') || (iVar4 = FUN_1403d8c10(), iVar4 != 0)) {
            if ((puVar3[6] == 7) || (puVar3[6] == 2)) {
                iVar4 = DAT_140c45e80;
                if (local_res20[0] < DAT_140c45e80) {
                    iVar4 = local_res20[0];
                }
                if ((&DAT_140c45e90)[iVar4] != '\0') {
                    lVar7 = FUN_1403acd90(DAT_140c65b70,uVar1,*(undefined8 *)(param_1 + 0x6490));
                    if (lVar7 != 0) {
                        FUN_1403bdb90(param_1,uVar1,param_3);
                        return;
                    }
                    return;
                }
                return;
            }
        }
        else {
            if (puVar3[0x1f] == 4) {
                FUN_1403bd6d0(param_1,param_2,param_3);
                return;
            }
            if (*(ulonglong *)(param_1 + 0x6370) != 0) {
                piVar8 = *(int **)(param_1 + 0x6368);
                do {
                    if (*piVar8 == param_2) {
                        return;
                    }
                    uVar11 = uVar11 + 1;
                    piVar8 = piVar8 + 1;
                } while (uVar11 < *(ulonglong *)(param_1 + 0x6370));
            }
            lVar9 = FUN_14055bdc0(param_1,*(undefined8 *)(param_1 + 0x78),lVar7,0,0);
            if (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x1cc) != 0) {
                FUN_1403a2550(param_1);
                *(undefined4 *)(param_1 + 0x6648) = 9;
                *(int *)(param_1 + 0x6650) = param_2;
                lVar7 = (**(code **)(*plVar2 + 0x20))(plVar2,local_res20);
                *(undefined4 *)(param_1 + 0x66a0) = *(undefined4 *)(lVar7 + 4);
                if (lVar9 != 0) {
                    uVar5 = *(undefined4 *)(lVar9 + 8);
                }
                *(undefined4 *)(param_1 + 0x664c) = uVar5;
                local_58[0] = 0;
                local_50 = FUN_14001c280(param_1);
                local_40 = 0;
                local_48 = FUN_14039ea90;
                uVar5 = FUN_1404720d0(*(undefined8 *)(param_1 + 0x6490));
                FUN_140195960(param_1 + 0x6658,uVar5,local_58,4);
                return;
            }
            local_68 = 0;
            local_60 = 1;
            lVar10 = (**(code **)(*plVar2 + 0x20))(plVar2,local_res20);
            if (lVar9 != 0) {
                uVar5 = *(undefined4 *)(lVar9 + 8);
            }
            local_68 = CONCAT44(uVar5,(uint)local_68 & 0xffff0000 | (uint)*(ushort *)(lVar10 + 4));
            FUN_1403f4900(param_1,0x4db,&local_68);
            FUN_140003460(param_1 + 0x6368,local_res10);
            iVar4 = *(int *)(*(longlong *)(lVar7 + 0x70) + 0x18);
            if ((iVar4 != 7) && (iVar4 != 2)) {
                return;
            }
        }
        FUN_1405ca390(param_3,param_2);
        return;
    }
    return;
}



void FUN_1403bd6d0(longlong param_1,int param_2,longlong *param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    ulonglong uVar4;
    longlong lVar5;
    longlong *plVar6;
    ulonglong uVar7;
    undefined8 local_res20;

    if (param_2 == 0) {
        return;
    }
    if (param_3 == (longlong *)0x0) {
        return;
    }
    uVar7 = 0;
    if (*(ulonglong *)(param_1 + 0xa98) == 0) {
        return;
    }
    plVar6 = *(longlong **)(param_1 + 0xa90);
    uVar4 = uVar7;
    while ((lVar1 = *plVar6, lVar1 == 0 || (*(int *)(lVar1 + 0x40) != param_2))) {
        uVar4 = uVar4 + 1;
        plVar6 = plVar6 + 1;
        if (*(ulonglong *)(param_1 + 0xa98) <= uVar4) {
            return;
        }
    }
    lVar5 = FUN_1405a4b80(lVar1,1);
    if (lVar5 == 0) {
        return;
    }
    iVar3 = FUN_1403a1630(param_1,param_2);
    if (iVar3 == 0) {
        return;
    }
    iVar3 = (*(undefined4 **)(lVar5 + 0x70))[6];
    if (((iVar3 - 2U & 0xfffffffa) == 0) && (iVar3 != 3)) {
        FUN_1403bdea0(param_1,**(undefined4 **)(lVar5 + 0x70),param_3);
        return;
    }
    iVar3 = DAT_140c45e40;
    if (*DAT_140c63750 < DAT_140c45e40) {
        iVar3 = *DAT_140c63750;
    }
    if ((((&DAT_140c45e50)[iVar3] != '\0') &&
         (iVar3 = (**(code **)(*param_3 + 0xa8))(param_3), iVar3 == 2)) &&
        (iVar3 = FUN_1403d8c10(lVar5), iVar3 == 0)) {
        return;
    }
    local_res20 = 0;
    iVar3 = FUN_14039a040(DAT_140c65898,*(undefined4 *)(lVar1 + 0x24),0,0,0,&local_res20);
    if ((iVar3 != 0) && (iVar3 != 0x13d)) {
        *(undefined4 *)(param_3 + 0x29) = 1;
        FUN_1403a12a0(param_1,iVar3,lVar5,0);
        FUN_1403bdac0(DAT_140c65898);
        FUN_1405ca990();
        FUN_1405ca990();
        return;
    }
    FUN_1405caa50(param_3);
    puVar2 = *(ulonglong **)(param_1 + 0x7368);
    if (puVar2[2] == 0) {
        return;
    }
    while( true ) {
        lVar5 = *(longlong *)(puVar2[1] + uVar7 * 8);
        if ((*(int *)(lVar5 + 4) == 4) && (*(int *)(lVar5 + 8) == *(int *)(lVar1 + 0x24))) break;
        uVar7 = (ulonglong)((int)uVar7 + 1);
        if (puVar2[2] <= uVar7) {
            return;
        }
    }
    *(undefined *)(puVar2 + 3) = 1;
    *puVar2 = uVar7;
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1403bd8b0(longlong param_1,int param_2,longlong *param_3,longlong param_4)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    int *piVar4;
    undefined4 uVar5;
    ulonglong uVar6;
    undefined local_res18 [8];
    undefined8 local_28;
    undefined4 local_20;

    if ((param_3 != (longlong *)0x0) && (param_4 != 0)) {
        if ((*(int *)(param_1 + 0x6648) == 9) &&
            (lVar2 = (**(code **)(*param_3 + 0x20))(param_3,local_res18),
                    *(int *)(lVar2 + 4) == *(int *)(param_1 + 0x66a0))) {
            *(undefined4 *)(param_1 + 0x6648) = 0xb;
            return;
        }
        iVar1 = FUN_1403a1630(param_1,param_2,1);
        if (iVar1 != 0) {
            uVar6 = 0;
            uVar5 = 0;
            lVar2 = FUN_14055bdc0(param_1,*(undefined8 *)(param_1 + 0x78),param_4,0,0);
            local_20 = 0;
            local_28 = 0;
            lVar3 = (**(code **)(*param_3 + 0x20))(param_3,local_res18);
            if (lVar2 != 0) {
                uVar5 = *(undefined4 *)(lVar2 + 8);
            }
            local_28 = CONCAT44(uVar5,(uint)local_28 & 0xffff0000 | (uint)*(ushort *)(lVar3 + 4));
            FUN_1403f4900(param_1,0x4db,&local_28);
            if (*(ulonglong *)(param_1 + 0x6370) != 0) {
                piVar4 = *(int **)(param_1 + 0x6368);
                do {
                    if (*piVar4 == param_2) {
                        FUN_1401c2f20(param_1 + 0x6368,uVar6);
                        break;
                    }
                    uVar6 = uVar6 + 1;
                    piVar4 = piVar4 + 1;
                } while (uVar6 < *(ulonglong *)(param_1 + 0x6370));
            }
            FUN_1403bdb30(param_1,**(undefined4 **)(param_4 + 0x70));
            FUN_1403a1510(param_1);
        }
    }
    return;
}



void FUN_1403bda00(longlong param_1)

{
    longlong lVar1;
    longlong *plVar2;
    longlong lVar3;
    ulonglong uVar4;

    lVar1 = *(longlong *)(param_1 + 0x6370);
    do {
        if (lVar1 == 0) {
            return;
        }
        if (**(int **)(param_1 + 0x6368) != 0) {
            uVar4 = 0;
            if (*(ulonglong *)(DAT_140c65898 + 0xa98) != 0) {
                plVar2 = *(longlong **)(DAT_140c65898 + 0xa90);
                do {
                    lVar1 = *plVar2;
                    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) == **(int **)(param_1 + 0x6368))) {
                        lVar3 = FUN_1405a4b80(lVar1,1);
                        if (lVar3 != 0) {
                            FUN_1403bd8b0(param_1,**(undefined4 **)(param_1 + 0x6368),lVar1,lVar3);
                            goto LAB_1403bda78;
                        }
                        break;
                    }
                    uVar4 = uVar4 + 1;
                    plVar2 = plVar2 + 1;
                } while (uVar4 < *(ulonglong *)(DAT_140c65898 + 0xa98));
            }
        }
        FUN_1401c2f20(param_1 + 0x6368,0);
        LAB_1403bda78:
        lVar1 = *(longlong *)(param_1 + 0x6370);
    } while( true );
}



void FUN_1403bdac0(longlong param_1)

{
    longlong lVar1;

    lVar1 = *(longlong *)(param_1 + 0x6358);
    while (lVar1 != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x6358) + 0x20))();
        lVar1 = *(longlong *)(param_1 + 0x6358);
    }
    lVar1 = *(longlong *)(param_1 + 0x6490);
    *(undefined4 *)(param_1 + 0x6360) = 0;
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x1620) != 0)) && (*(int *)(lVar1 + 0x1624) == 1)) {
        *(undefined4 *)(lVar1 + 0x1620) = 0;
        FUN_140195d70(lVar1 + 0x1628);
        return;
    }
    return;
}



void FUN_1403bdb30(undefined8 param_1,undefined8 param_2)

{
    longlong lVar1;

    lVar1 = FUN_1403c1f50(param_1,param_2,*(undefined *)(DAT_140c65898 + 0x6dec));
    if (lVar1 != 0) {
        FUN_1403bdac0(DAT_140c65898);
        FUN_1405ca990();
        FUN_1405ca990();
        return;
    }
    return;
}



void FUN_1403bdb90(longlong param_1,ulonglong param_2,longlong param_3)

{
    longlong lVar1;
    ulonglong *puVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    longlong *plVar6;
    undefined8 uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;
    ulonglong uVar11;
    bool bVar12;
    longlong local_res8;

    if ((int)param_2 == 0) {
        return;
    }
    lVar5 = *(longlong *)(param_1 + 0x78);
    uVar10 = 0;
    uVar9 = param_2 & 0xffffffff;
    if (lVar5 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar5) {
            bVar12 = true;
        }
        else {
            bVar12 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar5;
        }
        uVar8 = uVar10;
        if (bVar12) {
            uVar8 = DAT_140c65898;
        }
        param_2 = uVar9;
        if ((uVar8 != 0) && (uVar11 = DAT_140c65898, lVar5 = FUN_1405a5b90(uVar8,uVar9), lVar5 != 0))
            goto LAB_1403bdc10;
    }
    lVar5 = FUN_1407a0fd0(DAT_140c65b70,param_2);
    uVar11 = DAT_140c65898;
    LAB_1403bdc10:
    if (lVar5 != 0) {
        iVar3 = *(int *)(*(longlong *)(lVar5 + 0x70) + 0x18);
        if ((((iVar3 == 7) || (iVar3 == 2)) &&
             (iVar3 = *(int *)(*(longlong *)(lVar5 + 0x70) + 4), iVar3 != 0)) &&
            (*(ulonglong *)(param_1 + 0xa98) != 0)) {
            plVar6 = *(longlong **)(param_1 + 0xa90);
            uVar9 = uVar10;
            do {
                lVar1 = *plVar6;
                if ((lVar1 != 0) && (*(int *)(lVar1 + 0x40) == iVar3)) {
                    iVar3 = FUN_14039a040(uVar11,*(undefined4 *)(lVar1 + 0x24),0,1,0,0);
                    if ((iVar3 != 0) && (iVar3 != 0x13d)) {
                        FUN_1403a12a0(param_1,iVar3,lVar5,0);
                        return;
                    }
                    plVar6 = *(longlong **)(param_1 + 0x6d90);
                    if (plVar6 != (longlong *)0x0) {
                        lVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,*(undefined8 *)(param_1 + 0x78),0);
                    }
                    if ((*(longlong *)(param_1 + 0x6490) != 0) &&
                        (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x108) != 0)) {
                        FUN_1403d90d0(param_1);
                    }
                    uVar4 = FUN_1403d3520();
                    iVar3 = FUN_1403c0760(param_1,uVar4);
                    if (iVar3 == 0) {
                        iVar3 = *(int *)(*(longlong *)(lVar5 + 0x70) + 0x18);
                        if ((iVar3 != 2) && (iVar3 != 7)) {
                            return;
                        }
                        iVar3 = FUN_14039a040(DAT_140c65898,*(undefined4 *)(lVar1 + 0x24),0,0,0,0);
                        if ((iVar3 != 0) && (iVar3 != 0x13d)) {
                            uVar7 = FUN_1403b5250(iVar3);
                            FUN_1400035b0(0x18,3,0,uVar7);
                            *(undefined4 *)(param_3 + 0x148) = 1;
                            FUN_1403a12a0(param_1,iVar3,lVar5,0);
                            return;
                        }
                        FUN_1403c07c0(param_1,uVar4);
                        FUN_1405ca390(param_3,*(undefined4 *)(*(longlong *)(lVar5 + 0x70) + 4));
                        puVar2 = *(ulonglong **)(param_1 + 0x7368);
                        if (puVar2[2] == 0) {
                            return;
                        }
                        while( true ) {
                            lVar5 = *(longlong *)(puVar2[1] + uVar10 * 8);
                            if ((*(int *)(lVar5 + 4) == 4) && (*(int *)(lVar5 + 8) == *(int *)(lVar1 + 0x24)))
                                break;
                            uVar10 = (ulonglong)((int)uVar10 + 1);
                            if (puVar2[2] <= uVar10) {
                                return;
                            }
                        }
                        *(undefined *)(puVar2 + 3) = 1;
                        *puVar2 = uVar10;
                        return;
                    }
                    lVar5 = *(longlong *)(param_1 + 0x15c8);
                    local_res8 = lVar5;
                    lVar1 = *(longlong *)(lVar5 + 8);
                    while (lVar1 != 0) {
                        if (*(uint *)(lVar1 + 0x20) < uVar4) {
                            lVar1 = *(longlong *)(lVar1 + 0x18);
                        }
                        else {
                            local_res8 = lVar1;
                            lVar1 = *(longlong *)(lVar1 + 0x10);
                        }
                    }
                    if ((local_res8 == lVar5) || (uVar4 < *(uint *)(local_res8 + 0x20))) {
                        local_res8 = lVar5;
                    }
                    if (local_res8 == *(longlong *)(param_1 + 0x15c8)) {
                        return;
                    }
                    FUN_1403d5fd0(param_1 + 0x15c0,&local_res8);
                    return;
                }
                uVar9 = uVar9 + 1;
                plVar6 = plVar6 + 1;
            } while (uVar9 < *(ulonglong *)(param_1 + 0xa98));
        }
    }
    return;
}



void FUN_1403bdea0(longlong param_1,ulonglong param_2,undefined8 param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong *plVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    int iVar10;
    bool bVar11;

    if ((int)param_2 == 0) {
        return;
    }
    lVar4 = *(longlong *)(param_1 + 0x78);
    uVar7 = 0;
    uVar9 = param_2 & 0xffffffff;
    uVar8 = param_2;
    if (lVar4 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar4) {
            bVar11 = true;
        }
        else {
            bVar11 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar4;
        }
        uVar6 = uVar7;
        if (bVar11) {
            uVar6 = DAT_140c65898;
        }
        uVar8 = uVar9;
        if ((uVar6 != 0) && (lVar4 = FUN_1405a5b90(uVar6,uVar9), lVar4 != 0)) goto LAB_1403bdf20;
    }
    lVar4 = FUN_1407a0fd0(DAT_140c65b70,uVar8);
    LAB_1403bdf20:
    if (lVar4 != 0) {
        iVar1 = *(int *)(*(longlong *)(lVar4 + 0x70) + 0x18);
        if (((((iVar1 - 2U & 0xfffffffa) == 0) && (iVar1 != 3)) &&
             (iVar1 = *(int *)(*(longlong *)(lVar4 + 0x70) + 4), iVar1 != 0)) &&
            (*(ulonglong *)(param_1 + 0xa98) != 0)) {
            plVar5 = *(longlong **)(param_1 + 0xa90);
            do {
                if ((*plVar5 != 0) && (*(int *)(*plVar5 + 0x40) == iVar1)) {
                    plVar5 = *(longlong **)(param_1 + 0x6d90);
                    if (plVar5 != (longlong *)0x0) {
                        (**(code **)(*plVar5 + 0x18))(plVar5,lVar4,*(undefined8 *)(param_1 + 0x78),0);
                    }
                    if ((*(longlong *)(param_1 + 0x6490) != 0) &&
                        (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x108) != 0)) {
                        FUN_1403d90d0(param_1);
                    }
                    iVar1 = FUN_1403d3520();
                    iVar2 = FUN_1403c0190(param_1);
                    if (iVar2 != 0) {
                        iVar1 = iVar2;
                    }
                    lVar4 = FUN_1403acd90(DAT_140c65b70,iVar1,*(undefined8 *)(param_1 + 0x78));
                    if (lVar4 == 0) {
                        return;
                    }
                    iVar1 = *(int *)(*(longlong *)(lVar4 + 0x70) + 0x18);
                    if (iVar1 == 2) {
                        iVar1 = DAT_140c45e80;
                        if (*DAT_140c63750 < DAT_140c45e80) {
                            iVar1 = *DAT_140c63750;
                        }
                        if ((&DAT_140c45e90)[iVar1] == '\0') {
                            for (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x1608); lVar4 != 0;
                                 lVar4 = *(longlong *)(lVar4 + 0x88)) {
                                if (((*(int *)(lVar4 + 4) == 0) && (*(longlong *)(lVar4 + 0x20) != 0)) &&
                                    (iVar1 = FUN_140195f70(lVar4 + 0x10), iVar1 != 0)) {
                                    return;
                                }
                            }
                        }
                    }
                    else {
                        if (iVar1 == 6) goto LAB_1403be0f2;
                        if (iVar1 != 7) {
                            return;
                        }
                    }
                    iVar10 = DAT_140c45e80;
                    iVar3 = FUN_1403bf980(param_1);
                    iVar1 = *DAT_140c63750;
                    iVar2 = iVar10;
                    if (iVar1 < iVar10) {
                        iVar2 = iVar1;
                    }
                    if (((&DAT_140c45e90)[iVar2] == '\0') && (iVar3 == 0)) {
                        FUN_1403bdb90(param_1,param_2 & 0xffffffff,param_3);
                        return;
                    }
                    if (iVar1 < iVar10) {
                        iVar10 = iVar1;
                    }
                    if (((&DAT_140c45e90)[iVar10] == '\0') && (iVar3 == 0)) {
                        return;
                    }
                    LAB_1403be0f2:
                    FUN_1403be120(param_1,param_2 & 0xffffffff,param_3);
                    return;
                }
                uVar7 = uVar7 + 1;
                plVar5 = plVar5 + 1;
            } while (uVar7 < *(ulonglong *)(param_1 + 0xa98));
        }
    }
    return;
}



void FUN_1403be120(longlong param_1,ulonglong param_2,longlong *param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong *puVar4;
    uint uVar5;
    uint uVar6;
    int iVar7;
    int iVar8;
    longlong lVar9;
    longlong *plVar10;
    undefined8 uVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    ulonglong uVar14;
    bool bVar15;
    longlong local_res8;

    if ((int)param_2 == 0) {
        return;
    }
    lVar9 = *(longlong *)(param_1 + 0x78);
    uVar14 = 0;
    uVar13 = param_2 & 0xffffffff;
    if (lVar9 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar9) {
            bVar15 = true;
        }
        else {
            bVar15 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar9;
        }
        uVar12 = uVar14;
        if (bVar15) {
            uVar12 = DAT_140c65898;
        }
        param_2 = uVar13;
        if ((uVar12 != 0) && (lVar9 = FUN_1405a5b90(uVar12,uVar13), lVar9 != 0)) goto LAB_1403be198;
    }
    lVar9 = FUN_1407a0fd0(DAT_140c65b70,param_2);
    LAB_1403be198:
    if (lVar9 != 0) {
        iVar7 = *(int *)(*(longlong *)(lVar9 + 0x70) + 0x18);
        if (((((iVar7 - 2U & 0xfffffffa) == 0) && (iVar7 != 3)) &&
             (iVar7 = *(int *)(*(longlong *)(lVar9 + 0x70) + 4), iVar7 != 0)) &&
            (*(ulonglong *)(param_1 + 0xa98) != 0)) {
            plVar10 = *(longlong **)(param_1 + 0xa90);
            uVar12 = uVar14;
            while ((lVar1 = *plVar10, lVar1 == 0 || (*(int *)(lVar1 + 0x40) != iVar7))) {
                uVar12 = uVar12 + 1;
                plVar10 = plVar10 + 1;
                if (*(ulonglong *)(param_1 + 0xa98) <= uVar12) {
                    return;
                }
            }
            plVar10 = *(longlong **)(param_1 + 0x6d90);
            if (plVar10 != (longlong *)0x0) {
                lVar9 = (**(code **)(*plVar10 + 0x18))(plVar10,lVar9,*(undefined8 *)(param_1 + 0x78),0);
                uVar13 = (ulonglong)**(uint **)(lVar9 + 0x70);
            }
            if ((*(longlong *)(param_1 + 0x6490) != 0) &&
                (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x108) != 0)) {
                FUN_1403d90d0(param_1);
            }
            uVar5 = FUN_1403d3520();
            uVar6 = FUN_1403c0190(param_1);
            if (uVar6 != 0) {
                uVar5 = uVar6;
            }
            lVar9 = FUN_1403acd90(DAT_140c65b70,uVar5,*(undefined8 *)(param_1 + 0x78));
            if (lVar9 == 0) {
                return;
            }
            iVar7 = *(int *)(*(longlong *)(lVar9 + 0x70) + 0x18);
            bVar15 = true;
            if (iVar7 == 2) {
                iVar7 = FUN_1403bf980(param_1,uVar5);
                if ((iVar7 == 0) && (iVar7 = FUN_1403c0870(), iVar7 != 0)) {
                    iVar7 = DAT_140c45e80;
                    if (*DAT_140c63750 < DAT_140c45e80) {
                        iVar7 = *DAT_140c63750;
                    }
                    if (((&DAT_140c45e90)[iVar7] == '\0') ||
                        (iVar7 = (**(code **)(*param_3 + 0xa8))(param_3), iVar7 == 2)) {
                        if (*(uint *)(param_1 + 0x6364) != uVar5) {
                            return;
                        }
                        FUN_1403c06b0(param_1,uVar5,1);
                        return;
                    }
                }
                lVar9 = *(longlong *)(param_1 + 0x1588);
                local_res8 = lVar9;
                lVar1 = *(longlong *)(lVar9 + 8);
                while (lVar1 != 0) {
                    if (*(uint *)(lVar1 + 0x20) < (uint)uVar13) {
                        lVar1 = *(longlong *)(lVar1 + 0x18);
                    }
                    else {
                        local_res8 = lVar1;
                        lVar1 = *(longlong *)(lVar1 + 0x10);
                    }
                }
                if ((local_res8 == lVar9) || ((uint)uVar13 < *(uint *)(local_res8 + 0x20))) {
                    local_res8 = lVar9;
                }
                if (local_res8 != lVar9) {
                    FUN_14039cc30(param_1,*(undefined4 *)(*(longlong *)(local_res8 + 0x28) + 0x18),6);
                }
                FUN_1403bef30(param_1,uVar5,0);
                return;
            }
            if (iVar7 == 7) {
                lVar2 = *(longlong *)(param_1 + 0x15c8);
                local_res8 = lVar2;
                lVar3 = *(longlong *)(lVar2 + 8);
                while (lVar3 != 0) {
                    if (*(uint *)(lVar3 + 0x20) < uVar5) {
                        lVar3 = *(longlong *)(lVar3 + 0x18);
                    }
                    else {
                        local_res8 = lVar3;
                        lVar3 = *(longlong *)(lVar3 + 0x10);
                    }
                }
                if ((local_res8 == lVar2) || (uVar5 < *(uint *)(local_res8 + 0x20))) {
                    local_res8 = lVar2;
                }
                if (local_res8 != lVar2) {
                    FUN_1403d5fd0(param_1 + 0x15c0,&local_res8);
                }
                iVar7 = FUN_1403bf980(param_1,uVar5);
                if ((iVar7 == 0) && (iVar7 = FUN_1403c0870(), iVar7 != 0)) {
                    iVar7 = DAT_140c45e80;
                    if (*DAT_140c63750 < DAT_140c45e80) {
                        iVar7 = *DAT_140c63750;
                    }
                    if ((((&DAT_140c45e90)[iVar7] == '\0') ||
                         (iVar7 = (**(code **)(*param_3 + 0xa8))(param_3), iVar7 == 2)) &&
                        (bVar15 = false, *(int *)(param_1 + 0x6364) != 0)) {
                        FUN_1403c06b0(param_1,uVar5,1);
                    }
                }
                FUN_1403bf400(param_1,uVar5);
                if (!bVar15) {
                    return;
                }
            }
            local_res8 = 0;
            iVar7 = FUN_14039a040(DAT_140c65898,*(undefined4 *)(lVar1 + 0x24),0,0,0,&local_res8);
            if ((iVar7 == 0) || (iVar7 == 0x13d)) {
                for (lVar9 = param_3[0x34]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 8)) {
                    *(undefined4 *)(lVar9 + 0x2c) = 1;
                }
                for (lVar9 = param_3[0x33]; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 8)) {
                    *(undefined4 *)(lVar9 + 0x2c) = 1;
                }
                FUN_1405caa50(param_3);
                puVar4 = *(ulonglong **)(param_1 + 0x7368);
                if (puVar4[2] != 0) {
                    do {
                        lVar9 = *(longlong *)(puVar4[1] + uVar14 * 8);
                        if ((*(int *)(lVar9 + 4) == 4) && (*(int *)(lVar9 + 8) == *(int *)(lVar1 + 0x24))) {
                            *(undefined *)(puVar4 + 3) = 1;
                            *puVar4 = uVar14;
                            return;
                        }
                        uVar14 = (ulonglong)((int)uVar14 + 1);
                    } while (uVar14 < puVar4[2]);
                }
            }
            else {
                uVar11 = FUN_1403b5250(iVar7);
                FUN_1400035b0(0x18,3,0,uVar11);
                iVar8 = DAT_140c45e40;
                if (*DAT_140c63750 < DAT_140c45e40) {
                    iVar8 = *DAT_140c63750;
                }
                if (((&DAT_140c45e50)[iVar8] == '\0') ||
                    (iVar8 = (**(code **)(*param_3 + 0xa8))(param_3), iVar8 != 2)) {
                    *(undefined4 *)(param_3 + 0x29) = 1;
                    FUN_1403a12a0(param_1,iVar7,lVar9,0);
                    FUN_1403bdac0(DAT_140c65898);
                    FUN_1405ca990();
                    FUN_1405ca990();
                }
            }
        }
    }
    return;
}



void FUN_1403be620(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
    int iVar1;
    ulonglong uVar2;
    ulonglong uVar3;
    int iVar4;
    int iVar5;
    longlong lVar6;
    undefined8 *puVar7;
    longlong lVar8;
    undefined8 *puVar9;
    ulonglong uVar10;
    undefined4 uVar11;
    ulonglong local_58;
    undefined8 *local_50;
    undefined4 local_48 [2];
    undefined8 local_40;
    code *local_38;
    ulonglong local_30;

    if (param_2 == 0) {
        return;
    }
    uVar10 = (ulonglong)param_2;
    lVar6 = FUN_1403acd90(DAT_140c65b70,uVar10,*(undefined8 *)(param_1 + 0x6490));
    if (lVar6 == 0) {
        return;
    }
    uVar2 = *(ulonglong *)(param_1 + 0x1588);
    local_58 = uVar2;
    uVar3 = *(ulonglong *)(uVar2 + 8);
    while (uVar3 != 0) {
        if (*(uint *)(uVar3 + 0x20) < param_2) {
            uVar3 = *(ulonglong *)(uVar3 + 0x18);
        }
        else {
            local_58 = uVar3;
            uVar3 = *(ulonglong *)(uVar3 + 0x10);
        }
    }
    if ((local_58 == uVar2) || (param_2 < *(uint *)(local_58 + 0x20))) {
        local_58 = uVar2;
    }
    if (local_58 != uVar2) {
        return;
    }
    puVar7 = (undefined8 *)FUN_14018b280(0xb0,0);
    puVar9 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
        puVar7[6] = 0;
        puVar7[7] = 0;
        puVar7[9] = 0;
        puVar7[10] = 0;
        *(undefined4 *)(puVar7 + 4) = 0x544e5645;
        *(undefined4 *)((longlong)puVar7 + 100) = 0;
        puVar7[0xf] = 0;
        puVar7[0x10] = 0;
        puVar7[0x12] = 0;
        puVar7[0x13] = 0;
        *(undefined4 *)(puVar7 + 0xd) = 0x544e5645;
        *(undefined4 *)((longlong)puVar7 + 0xac) = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        *(undefined4 *)(puVar7 + 2) = 0;
        *(undefined4 *)(puVar7 + 3) = 0;
        puVar9 = puVar7;
    }
    *(undefined4 *)((longlong)puVar9 + 0x14) = param_4;
    *(undefined4 *)(puVar9 + 2) = param_3;
    *(undefined4 *)(puVar9 + 3) = param_5;
    local_48[0] = 1;
    uVar11 = *(undefined4 *)(*(longlong *)(lVar6 + 0x70) + 0x184);
    local_40 = FUN_14001c280(param_1);
    local_38 = FUN_1403bf2c0;
    local_30 = uVar10;
    FUN_140195960(puVar9 + 4,uVar11,local_48,4);
    local_58 = local_58 & 0xffffffff00000000 | (ulonglong)param_2;
    local_50 = puVar9;
    FUN_140055f80(param_1 + 0x1580,local_48,&local_58);
    iVar1 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0x18);
    if (iVar1 == 2) {
        uVar11 = 0;
    }
    else {
        if (iVar1 != 7) goto LAB_1403be811;
        uVar11 = 1;
    }
    lVar8 = FUN_140564f40(DAT_140c65b70,param_2,uVar11);
    if (lVar8 != 0) {
        local_48[0] = 1;
        local_40 = FUN_14001c280(param_1);
        local_38 = FUN_140001b70;
        local_30 = uVar10;
        FUN_140195960(puVar9 + 0xd,*(undefined4 *)(lVar8 + 0x10),local_48,4);
    }
    LAB_1403be811:
    iVar4 = FUN_140564fb0();
    iVar5 = iVar4 + 1;
    if (iVar1 == 7) {
        iVar5 = iVar4;
    }
    if ((*(byte *)(*(longlong *)(lVar6 + 0x70) + 0x10c) & 0x40) == 0) {
        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"StartSpellThreshold",&DAT_1409e98fc,param_2,
                      iVar5,*(undefined4 *)(*(longlong *)(lVar6 + 0x70) + 0x18));
    }
    iVar5 = FUN_1403c0760(param_1,param_2);
    if (iVar5 == 0) {
        iVar1 = *(int *)(*(longlong *)(lVar6 + 0x70) + 0x18);
        if ((((iVar1 == 7) || (iVar1 == 2)) && (*(longlong *)(DAT_140c65898 + 0x14e8) != 0)) &&
            (*(int *)(*(longlong *)(DAT_140c65898 + 0x14e8) + 0x118) ==
             *(int *)(*(longlong *)(lVar6 + 0x70) + 4))) {
            FUN_1405ca390();
        }
    }
    else {
        if ((iVar1 == 2) || (iVar1 == 7)) {
            FUN_1403bef30();
        }
        uVar10 = *(ulonglong *)(param_1 + 0x15c8);
        local_58 = uVar10;
        uVar2 = *(ulonglong *)(uVar10 + 8);
        while (uVar2 != 0) {
            if (*(uint *)(uVar2 + 0x20) < param_2) {
                uVar2 = *(ulonglong *)(uVar2 + 0x18);
            }
            else {
                local_58 = uVar2;
                uVar2 = *(ulonglong *)(uVar2 + 0x10);
            }
        }
        if ((local_58 == uVar10) || (param_2 < *(uint *)(local_58 + 0x20))) {
            local_58 = uVar10;
        }
        if (local_58 != uVar10) {
            FUN_1403d5fd0(param_1 + 0x15c0,&local_58);
        }
    }
    return;
}



undefined8 FUN_1403be940(longlong param_1,uint *param_2)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res10;

    uVar1 = *param_2;
    if (uVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x15a8);
        local_res10 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar1) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res10 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar2) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar2;
        }
        if ((local_res10 != lVar2) &&
            (lVar4 = lVar2, lVar3 = *(longlong *)(lVar2 + 8), *(int *)(local_res10 + 0x24) != 0)) {
            while (lVar3 != 0) {
                if (*(uint *)(lVar3 + 0x20) < uVar1) {
                    lVar3 = *(longlong *)(lVar3 + 0x18);
                }
                else {
                    lVar4 = lVar3;
                    lVar3 = *(longlong *)(lVar3 + 0x10);
                }
            }
            if ((lVar4 == lVar2) || (local_res10 = lVar4, uVar1 < *(uint *)(lVar4 + 0x20))) {
                local_res10 = lVar2;
            }
            if (local_res10 != lVar2) {
                FUN_1403d5fd0(param_1 + 0x15a0,&local_res10);
            }
        }
        lVar2 = *(longlong *)(param_1 + 0x1588);
        local_res10 = lVar2;
        lVar3 = *(longlong *)(lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *)(lVar3 + 0x20) < uVar1) {
                lVar3 = *(longlong *)(lVar3 + 0x18);
            }
            else {
                local_res10 = lVar3;
                lVar3 = *(longlong *)(lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar2) || (uVar1 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar2;
        }
        if (local_res10 == lVar2) {
            FUN_1403be620(param_1,uVar1,param_2[1],param_2[2],param_2[3]);
        }
    }
    return 0;
}



void FUN_1403bef30(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong local_res8;
    undefined local_e8 [4];
    int local_e4;
    int local_9c;

    lVar4 = *(longlong *)(param_1 + 0x78);
    if ((lVar4 != 0) && (lVar3 = FUN_1403acd90(DAT_140c65b70,param_2,lVar4), lVar3 != 0)) {
        lVar1 = *(longlong *)(param_1 + 0x1588);
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
            lVar1 = *(longlong *)(local_res8 + 0x28);
            *(undefined4 *)(lVar1 + 0xc) = 1;
            if ((*(int *)(*(longlong *)(lVar3 + 0x70) + 0x18) == 7) && (param_3 != 0)) {
                lVar4 = FUN_140469b00(lVar4,param_2,*(undefined4 *)(lVar4 + 8));
                if (lVar4 != 0) {
                    FUN_1403bf070(local_e8,lVar4 + 0x68);
                    FUN_1403bdac0(param_1);
                    if (local_9c != 0) {
                        local_e4 = local_9c;
                    }
                    FUN_1403bdb30(param_1,local_e4);
                    FUN_14039cc30(param_1,*(undefined4 *)(lVar1 + 0x18),0);
                }
            }
            else {
                FUN_1403bf2c0(param_1,param_2);
            }
        }
    }
    return;
}



undefined4 * FUN_1403bf070(undefined4 *param_1,undefined4 *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
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
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
    param_1[0x20] = param_2[0x20];
    *(undefined8 *)(param_1 + 0x22) = *(undefined8 *)(param_2 + 0x22);
    *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
    *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_2 + 0x26);
    param_1[0x28] = param_2[0x28];
    *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    return param_1;
}



void FUN_1403bf1a0(void)

{
    undefined4 *puVar1;
    undefined4 *puVar2;
    undefined4 *puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined4 *puVar6;
    longlong lVar7;
    longlong lVar8;
    undefined4 *puVar9;
    undefined local_28 [8];
    undefined4 *local_20;
    undefined4 *local_18;
    undefined4 *local_10;

    lVar5 = DAT_140c65898;
    puVar9 = (undefined4 *)0x0;
    local_20 = (undefined4 *)0x0;
    lVar8 = *(longlong *)(*(longlong *)(DAT_140c65898 + 0x1588) + 0x10);
    local_18 = (undefined4 *)0x0;
    local_10 = (undefined4 *)0x0;
    puVar1 = local_20;
    puVar2 = local_20;
    puVar3 = local_18;
    if (lVar8 != *(longlong *)(DAT_140c65898 + 0x1588)) {
        do {
            if (local_18 == puVar9) {
                FUN_14017b140(local_28,local_18);
                puVar9 = local_10;
            }
            else {
                if (local_18 != (undefined4 *)0x0) {
                    *local_18 = *(undefined4 *)(lVar8 + 0x20);
                }
                local_18 = local_18 + 1;
            }
            lVar7 = *(longlong *)(lVar8 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *)(lVar8 + 8);
                if (lVar8 == *(longlong *)(lVar7 + 0x18)) {
                    do {
                        lVar8 = lVar7;
                        lVar7 = *(longlong *)(lVar8 + 8);
                    } while (lVar8 == *(longlong *)(lVar7 + 0x18));
                }
                if (*(longlong *)(lVar8 + 0x18) != lVar7) {
                    lVar8 = lVar7;
                }
            }
            else {
                for (lVar4 = *(longlong *)(lVar7 + 0x10); lVar8 = lVar7, lVar4 != 0;
                     lVar4 = *(longlong *)(lVar4 + 0x10)) {
                    lVar7 = lVar4;
                }
            }
            puVar1 = local_20;
            puVar2 = local_20;
            puVar3 = local_18;
        } while (lVar8 != *(longlong *)(lVar5 + 0x1588));
    }
    for (; puVar6 = local_18, puVar9 = local_20, puVar1 != local_18; puVar1 = puVar1 + 1) {
        local_20 = puVar2;
        local_18 = puVar3;
        FUN_1403bef30(lVar5,*puVar1,1);
        puVar2 = local_20;
        puVar3 = local_18;
        local_18 = puVar6;
        local_20 = puVar9;
    }
    if (local_20 != (undefined4 *)0x0) {
        local_20 = puVar2;
        local_18 = puVar3;
        FUN_14018b900(puVar9,0);
    }
    return;
}



void FUN_1403bf2c0(longlong param_1,ulonglong param_2)

{
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 uVar6;
    uint uVar7;
    longlong local_res10;

    uVar7 = (uint)param_2;
    if (((uVar7 != 0) && (lVar2 = *(longlong *)(param_1 + 0x78), lVar2 != 0)) &&
        (lVar5 = FUN_1403acd90(DAT_140c65b70,param_2,lVar2), lVar5 != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x1588);
        local_res10 = lVar3;
        lVar4 = *(longlong *)(lVar3 + 8);
        while (lVar4 != 0) {
            if (*(uint *)(lVar4 + 0x20) < uVar7) {
                lVar4 = *(longlong *)(lVar4 + 0x18);
            }
            else {
                local_res10 = lVar4;
                lVar4 = *(longlong *)(lVar4 + 0x10);
            }
        }
        if ((local_res10 == lVar3) || (uVar7 < *(uint *)(local_res10 + 0x20))) {
            local_res10 = lVar3;
        }
        if (local_res10 != lVar3) {
            lVar3 = *(longlong *)(local_res10 + 0x28);
            *(undefined4 *)(lVar3 + 8) = 1;
            iVar1 = *(int *)(*(longlong *)(lVar5 + 0x70) + 0x18);
            if (iVar1 == 2) {
                uVar6 = FUN_140469b00(lVar2,param_2 & 0xffffffff,*(undefined4 *)(lVar2 + 8));
                FUN_14046b1e0(lVar2,lVar5,uVar6);
                FUN_1403bdac0(param_1);
                FUN_1403bdb30(param_1,param_2 & 0xffffffff);
            }
            else if (iVar1 == 6) {
                iVar1 = *(int *)(lVar3 + 0x14);
                if (iVar1 != 0) {
                    lVar5 = FUN_1403acd90(DAT_140c65b70,iVar1,lVar2);
                }
                FUN_14046b1e0(lVar2,lVar5,0);
            }
            else if (iVar1 == 7) {
                return;
            }
            FUN_1403bf4e0(param_1,param_2 & 0xffffffff,0);
        }
    }
    return;
}



void FUN_1403bf400(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar2 = *(longlong *)(param_1 + 0x1588);
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
    if (local_res8 != lVar2) {
        if (*(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x30) != 0) {
            FUN_140195d70(*(longlong *)(local_res8 + 0x28) + 0x20);
        }
        if (*(longlong *)(*(longlong *)(local_res8 + 0x28) + 0x78) != 0) {
            FUN_140195d70(*(longlong *)(local_res8 + 0x28) + 0x68);
        }
        lVar2 = FUN_1403acd90(DAT_140c65b70,param_2,*(undefined8 *)(param_1 + 0x78));
        if ((lVar2 != 0) && ((*(byte *)(*(longlong *)(lVar2 + 0x70) + 0x10c) & 0x40) == 0)) {
            FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"ClearSpellThreshold",&DAT_1409e9c64,param_2);
        }
    }
    return;
}



void FUN_1403bf4e0(longlong param_1,uint param_2,int param_3)

{
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    uint uVar4;
    longlong local_res8;

    lVar3 = *(longlong *)(param_1 + 0x1588);
    local_res8 = lVar3;
    lVar1 = *(longlong *)(lVar3 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < param_2) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar3;
    }
    lVar1 = local_res8;
    if (local_res8 != lVar3) {
        lVar3 = *(longlong *)(local_res8 + 0x28);
        if (*(longlong *)(lVar3 + 0x30) != 0) {
            FUN_140195d70(lVar3 + 0x20);
        }
        if (*(longlong *)(lVar3 + 0x78) != 0) {
            FUN_140195d70(lVar3 + 0x68);
        }
        lVar2 = FUN_1403c1f50(param_1,*(undefined4 *)(lVar3 + 0x10),
                              *(undefined *)(DAT_140c65898 + 0x6dec));
        if (lVar2 != 0) {
            FUN_1403bdac0(DAT_140c65898);
            FUN_1405ca990();
            FUN_1405ca990();
        }
        lVar2 = *(longlong *)(param_1 + 0x78);
        if (param_3 != 0) {
            uVar4 = *(uint *)(lVar3 + 0x14);
            if (*(uint *)(lVar3 + 0x14) == 0) {
                uVar4 = param_2;
            }
            lVar3 = FUN_1403acd90(DAT_140c65b70,uVar4,lVar2);
            if ((lVar2 != 0) && (lVar3 != 0)) {
                FUN_14046b1e0(lVar2,lVar3,0);
            }
        }
        lVar3 = *(longlong *)(lVar1 + 0x28);
        if (lVar3 != 0) {
            FUN_1403bf6e0(lVar3);
            FUN_14018b900(lVar3,0);
        }
        local_res8 = lVar1;
        FUN_1403d5ed0(param_1 + 0x1580,&local_res8);
        lVar3 = *(longlong *)(param_1 + 0x15c8);
        local_res8 = lVar3;
        lVar1 = *(longlong *)(lVar3 + 8);
        while (lVar1 != 0) {
            if (*(uint *)(lVar1 + 0x20) < param_2) {
                lVar1 = *(longlong *)(lVar1 + 0x18);
            }
            else {
                local_res8 = lVar1;
                lVar1 = *(longlong *)(lVar1 + 0x10);
            }
        }
        if ((local_res8 == lVar3) || (param_2 < *(uint *)(local_res8 + 0x20))) {
            local_res8 = lVar3;
        }
        if (local_res8 != lVar3) {
            FUN_1403d5fd0(param_1 + 0x15c0,&local_res8);
        }
        lVar3 = FUN_1403acd90(DAT_140c65b70,param_2,lVar2);
        if ((lVar3 != 0) && ((*(byte *)(*(longlong *)(lVar3 + 0x70) + 0x10c) & 0x40) == 0)) {
            FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"ClearSpellThreshold",&DAT_1409e9c64,param_2);
        }
    }
    return;
}



void FUN_1403bf6e0(longlong param_1)

{
    FUN_140195d70(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x68) = 0;
    if (*(undefined8 **)(param_1 + 0x78) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
    }
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x78);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_140195d70(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(undefined8 **)(param_1 + 0x30) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x38);
    }
    if (*(undefined8 **)(param_1 + 0x38) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + 0x38) = *(undefined8 *)(param_1 + 0x30);
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
}



void FUN_1403bf780(longlong param_1)

{
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong lVar4;
    longlong *plVar5;
    longlong lVar6;
    bool bVar7;
    longlong local_res8;
    longlong local_res10;
    longlong local_res18;

    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1588) + 0x10);
    if (lVar6 != *(longlong *)(param_1 + 0x1588)) {
        do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0x28) + 0x30) != 0) {
                FUN_140195d70(*(longlong *)(lVar6 + 0x28) + 0x20);
            }
            if (*(longlong *)(*(longlong *)(lVar6 + 0x28) + 0x78) != 0) {
                FUN_140195d70(*(longlong *)(lVar6 + 0x28) + 0x68);
            }
            lVar4 = *(longlong *)(lVar6 + 0x28);
            uVar1 = *(uint *)(lVar6 + 0x20);
            if (lVar4 != 0) {
                FUN_1403bf6e0(lVar4);
                FUN_14018b900(lVar4,0);
            }
            if (DAT_140c65b70 != 0) {
                lVar4 = *(longlong *)(param_1 + 0x78);
                if (uVar1 != 0) {
                    if (lVar4 == 0) {
                        LAB_1403bf866:
                        lVar4 = FUN_1407a0fd0(DAT_140c65b70,uVar1);
                        if (lVar4 == 0) goto LAB_1403bf89c;
                    }
                    else {
                        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar4) {
                            bVar7 = true;
                        }
                        else {
                            bVar7 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar4;
                        }
                        lVar4 = 0;
                        if (bVar7) {
                            lVar4 = DAT_140c65898;
                        }
                        if ((lVar4 == 0) || (lVar4 = FUN_1405a5b90(lVar4,uVar1), lVar4 == 0))
                            goto LAB_1403bf866;
                    }
                    if ((*(byte *)(*(longlong *)(lVar4 + 0x70) + 0x10c) & 0x40) == 0) {
                        FUN_1400ea3e0(*(undefined8 *)(param_1 + 0x7340),"ClearSpellThreshold",&DAT_1409e9c64,
                                      uVar1);
                    }
                }
                LAB_1403bf89c:
                lVar4 = *(longlong *)(param_1 + 0x15c8);
                lVar3 = lVar4;
                lVar2 = *(longlong *)(lVar4 + 8);
                while (lVar2 != 0) {
                    if (*(uint *)(lVar2 + 0x20) < uVar1) {
                        lVar2 = *(longlong *)(lVar2 + 0x18);
                    }
                    else {
                        lVar3 = lVar2;
                        lVar2 = *(longlong *)(lVar2 + 0x10);
                    }
                }
                if ((lVar3 == lVar4) || (uVar1 < *(uint *)(lVar3 + 0x20))) {
                    local_res10 = lVar4;
                    plVar5 = &local_res10;
                }
                else {
                    local_res8 = lVar3;
                    plVar5 = &local_res8;
                }
                if (*plVar5 != lVar4) {
                    local_res18 = *plVar5;
                    FUN_1403d5fd0(param_1 + 0x15c0);
                }
            }
            lVar4 = *(longlong *)(lVar6 + 0x18);
            if (lVar4 == 0) {
                lVar4 = *(longlong *)(lVar6 + 8);
                if (lVar6 == *(longlong *)(lVar4 + 0x18)) {
                    do {
                        lVar6 = lVar4;
                        lVar4 = *(longlong *)(lVar6 + 8);
                    } while (lVar6 == *(longlong *)(lVar4 + 0x18));
                }
                if (*(longlong *)(lVar6 + 0x18) != lVar4) {
                    lVar6 = lVar4;
                }
            }
            else {
                for (lVar2 = *(longlong *)(lVar4 + 0x10); lVar6 = lVar4, lVar2 != 0;
                     lVar2 = *(longlong *)(lVar2 + 0x10)) {
                    lVar4 = lVar2;
                }
            }
        } while (lVar6 != *(longlong *)(param_1 + 0x1588));
    }
    FUN_140008410(param_1 + 0x1580);
    return;
}



bool FUN_1403bf980(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x1588);
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
    return local_res8 != lVar1;
}



undefined8 FUN_1403bf9d0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    longlong lVar6;

    lVar4 = DAT_140c65898;
    iVar1 = DAT_140c45e80;
    if (*DAT_140c63750 < DAT_140c45e80) {
        iVar1 = *DAT_140c63750;
    }
    if (((((&DAT_140c45e90)[iVar1] == '\0') ||
          (lVar6 = FUN_1403acd90(DAT_140c65b70,param_2,*(undefined8 *)(DAT_140c65898 + 0x78)),
                  lVar6 == 0)) || (*(int *)(*(longlong *)(lVar6 + 0x70) + 0x18) != 7)) ||
        (*(int *)(*(longlong *)(lVar6 + 0x70) + 0x184) != 0)) {
        return 0;
    }
    lVar6 = *(longlong *)(lVar4 + 0x78);
    lVar3 = *(longlong *)(lVar6 + 0x15c8);
    iVar1 = *(int *)(param_3 + 0x70);
    iVar2 = *(int *)(lVar6 + 8);
    do {
        if (lVar3 == 0) {
            LAB_1403bfa8f:
            iVar1 = *(int *)(param_3 + 0xb4);
            if (iVar1 != 0) {
                lVar4 = *(longlong *)(lVar4 + 0x78);
                iVar2 = *(int *)(lVar4 + 8);
                for (lVar4 = *(longlong *)(lVar4 + 0x15c8); lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18))
                {
                    iVar5 = (**(code **)(**(longlong **)(lVar4 + 0x38) + 8))();
                    if ((iVar5 == iVar1) && (*(int *)(*(longlong *)(lVar4 + 0x38) + 0x84) == iVar2)) {
                        if (*(longlong *)(lVar4 + 0x38) == 0) {
                            return 1;
                        }
                        return 0;
                    }
                }
            }
            return 1;
        }
        iVar5 = (**(code **)(**(longlong **)(lVar3 + 0x38) + 8))();
        if ((iVar5 == iVar1) && (*(int *)(*(longlong *)(lVar3 + 0x38) + 0x84) == iVar2)) {
            if (*(longlong *)(lVar3 + 0x38) != 0) {
                return 0;
            }
            goto LAB_1403bfa8f;
        }
        lVar3 = *(longlong *)(lVar3 + 0x18);
    } while( true );
}



undefined4 FUN_1403bfb00(longlong param_1,uint param_2)

{
    longlong lVar1;
    longlong lVar2;
    longlong local_res8;

    lVar1 = *(longlong *)(param_1 + 0x1588);
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
    return **(undefined4 **)(local_res8 + 0x28);
}



uint FUN_1403bfb60(undefined8 param_1,uint param_2,uint param_3)

{
    longlong lVar1;
    longlong lVar2;
    uint uVar3;
    longlong local_res8;

    if (param_3 == 0xffffffff) {
        return 1;
    }
    lVar1 = *(longlong *)(DAT_140c65898 + 0x1588);
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
    uVar3 = 1;
    if (**(int **)(local_res8 + 0x28) != -1) {
        uVar3 = 1 << ((byte)**(int **)(local_res8 + 0x28) & 0x1f) & param_3;
    }
    return uVar3;
}



ulonglong FUN_1403bfbf0(longlong param_1,ulonglong param_2)

{
    longlong lVar1;
    longlong *plVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    bool bVar7;
    longlong local_res8;

    lVar4 = *(longlong *)(param_1 + 0x6490);
    uVar6 = param_2 & 0xffffffff;
    if ((int)param_2 == 0) {
        return 0;
    }
    if (lVar4 != 0) {
        if (*(longlong *)(DAT_140c65898 + 0x78) == lVar4) {
            bVar7 = true;
        }
        else {
            bVar7 = *(longlong *)(DAT_140c65898 + 0x6490) == lVar4;
        }
        lVar4 = 0;
        if (bVar7) {
            lVar4 = DAT_140c65898;
        }
        param_2 = uVar6;
        if ((lVar4 != 0) && (lVar4 = FUN_1405a5b90(lVar4,uVar6), lVar4 != 0)) goto LAB_1403bfc67;
    }
    lVar4 = FUN_1407a0fd0(DAT_140c65b70,param_2);
    if (lVar4 == 0) {
        return 0;
    }
    LAB_1403bfc67:
    lVar4 = *(longlong *)(param_1 + 0x1588);
    local_res8 = lVar4;
    lVar1 = *(longlong *)(lVar4 + 8);
    while (lVar1 != 0) {
        if (*(uint *)(lVar1 + 0x20) < (uint)uVar6) {
            lVar1 = *(longlong *)(lVar1 + 0x18);
        }
        else {
            local_res8 = lVar1;
            lVar1 = *(longlong *)(lVar1 + 0x10);
        }
    }
    if ((local_res8 == lVar4) || ((uint)uVar6 < *(uint *)(local_res8 + 0x20))) {
        local_res8 = lVar4;
    }
    if ((local_res8 != lVar4) && (**(int **)(local_res8 + 0x28) != -1)) {
        lVar4 = FUN_140564f40(DAT_140c65b70);
        if (lVar4 == 0) {
            return 0;
        }
        uVar3 = *(uint *)(lVar4 + 4);
        plVar2 = *(longlong **)(param_1 + 0x6d90);
        if (plVar2 != (longlong *)0x0) {
            if ((*(longlong *)(param_1 + 0x6490) == 0) ||
                (*(int *)(*(longlong *)(param_1 + 0x6490) + 0x108) == 0)) {
                uVar5 = 0;
            }
            else {
                uVar5 = FUN_1403d90d0(param_1);
            }
            uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,uVar3,*(undefined8 *)(param_1 + 0x78),uVar5,0);
        }
        return (ulonglong)uVar3;
    }
    return uVar6;
}

