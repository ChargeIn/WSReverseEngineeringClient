//
// Created by flop on 04.04.22.
//
#include "../../include.h"

void FUN_1407469d0(longlong param_1, int *param_2) {
    char cVar1;
    int iVar2;
    undefined8 * puVar3;
    double *pdVar4;
    uint * puVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong lVar8;
    longlong * plVar9;
    longlong lVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    uint uVar13;
    longlong local_48;
    ulonglong local_40;

    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar3 = *(undefined8 **) (param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar3 + 1) = 5;
    *puVar3 = uVar7;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar2 = *param_2;
    FUN_140058710(param_1, &DAT_1409f945c, 3);
    pdVar4 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar4 + 1) = 3;
    *pdVar4 = (double) iVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_1400f0090(param_1);
    FUN_1400f0090(param_1);
    cVar1 = *(char *) (param_2 + 1);
    FUN_140058710(param_1, "bIsGlobal", 9);
    puVar5 = *(uint **) (param_1 + 0x10);
    uVar11 = 0;
    puVar5[2] = 1;
    *puVar5 = (uint) (cVar1 != '\0');
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar7, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "arCommands", 10);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar3 = *(undefined8 **) (param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar3 + 1) = 5;
    *puVar3 = uVar7;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    local_40 = 0;
    local_48 = 0;
    FUN_1407477a0(&local_48, param_2 + 0x1a);
    uVar12 = local_40;
    lVar6 = local_48;
    if (local_40 != 0) {
        do {
            pdVar4 = *(double **) (param_1 + 0x10);
            lVar8 = uVar11 * 0x20;
            uVar13 = (int) uVar11 + 1;
            uVar11 = (ulonglong) uVar13;
            *(undefined4 *) (pdVar4 + 1) = 3;
            *pdVar4 = (double) uVar13;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            lVar8 = FUN_14018f0e0(&local_48, *(undefined8 *) (lVar8 + 8 + lVar6));
            lVar8 = *(longlong *) (lVar8 + 8);
            if (lVar8 == 0) {
                *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            } else {
                lVar10 = -1;
                do {
                    lVar10 = lVar10 + 1;
                } while (*(char *) (lVar10 + lVar8) != '\0');
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar3 = *(undefined8 **) (param_1 + 0x10);
                uVar7 = FUN_140062650(param_1, lVar8, lVar10);
                *(undefined4 *) (puVar3 + 1) = 4;
                *puVar3 = uVar7;
            }
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            if (local_40 != 0) {
                FUN_14018b900(local_40, 0);
            }
            lVar8 = *(longlong *) (param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar8, lVar8 + -0x20, lVar8 + -0x10);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        } while (uVar13 < uVar12);
    }
    lVar8 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar8, lVar8 + -0x20, lVar8 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    if (uVar12 != 0) {
        plVar9 = (longlong *) (lVar6 + 8);
        do {
            if (*plVar9 != 0) {
                FUN_14018b900(*plVar9, 0);
            }
            plVar9 = plVar9 + 4;
            uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
    }
    if (lVar6 == 0) {
        return;
    }
// WARNING: Could not recover jumptable at 0x000140746cd5. Too many branches
// WARNING: Treating indirect jump as call
    (**(code * *)(*(longlong *) (lVar6 + -0x10) + 8))(lVar6 + -0x10);
    return;
}


undefined8 FUN_140746de0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    int iVar3;
    longlong local_res10;

    iVar3 = FUN_140056d60(param_1, 1);
    lVar1 = *(longlong *) (*(longlong *) (DAT_140c65898 + 0x7350) + 0x20);
    local_res10 = lVar1;
    lVar2 = *(longlong *) (lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *) (lVar2 + 0x20) < iVar3) {
            lVar2 = *(longlong *) (lVar2 + 0x18);
        } else {
            local_res10 = lVar2;
            lVar2 = *(longlong *) (lVar2 + 0x10);
        }
    }
    if ((local_res10 == lVar1) || (iVar3 < *(int *) (local_res10 + 0x20))) {
        local_res10 = lVar1;
    }
    if ((local_res10 != *(longlong *) (*(longlong *) (DAT_140c65898 + 0x7350) + 0x20)) &&
        (*(longlong *) (local_res10 + 0x28) != 0)) {
        FUN_1407469d0(param_1);
        return 1;
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140747210(longlong param_1) {
    ulonglong uVar1;
    undefined2 *puVar2;
    short *psVar3;
    int iVar4;
    longlong lVar5;
    double *pdVar6;
    undefined2 *puVar7;
    int *piVar8;
    int *piVar9;
    longlong lVar10;

    piVar9 = (int *) 0x0;
    lVar5 = *(longlong *) (DAT_140c65898 + 0x7350);
    puVar7 = (undefined2 *) FUN_14018b280(2, 0);
    FUN_1407db590(puVar7, &DAT_1409f9474, 0);
    piVar8 = piVar9;
    if (puVar7 != (undefined2 *) 0x0) {
        *puVar7 = 0;
    }
    do {
        psVar3 = &DAT_140b49d72 + (longlong) piVar8;
        piVar8 = (int *) ((longlong) piVar8 + 1);
    } while (*psVar3 != 0);
    lVar10 = (longlong) piVar8 * 2 >> 1;
    uVar1 = lVar10 + 1;
    piVar8 = piVar9;
    if (uVar1 < 0x7fffffffffffffff) {
        piVar8 = (int *) FUN_14018b280(uVar1 * 2, 0);
    }
    lVar10 = lVar10 * 2;
    FUN_1407db590(piVar8, &DAT_140b49d70, lVar10);
    puVar2 = (undefined2 *) (lVar10 + (longlong) piVar8);
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    lVar10 = FUN_14018b280();
    if (lVar10 != 0) {
        *(int *) (lVar5 + 0x48) = *(int *) (lVar5 + 0x48) + 1;
        piVar9 = (int *) FUN_140776e80(lVar10);
    }
    FUN_1407781b0(lVar5, piVar9);
    iVar4 = *piVar9;
    if (piVar8 != (int *) 0x0) {
        FUN_14018b900(piVar8, 0);
    }
    if (puVar7 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar7, 0);
    }
    pdVar6 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar6 + 1) = 3;
    *pdVar6 = (double) iVar4;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140747380(longlong param_1) {
    longlong lVar1;
    undefined uVar2;
    undefined2 *puVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    ulonglong * puVar7;
    undefined2 *puVar8;
    undefined8 * puVar9;
    undefined2 *puVar10;
    ulonglong uVar11;
    undefined2 *puVar12;
    longlong * plVar13;
    ulonglong uVar14;
    longlong lVar15;
    undefined8 * puVar16;
    ulonglong uVar17;
    ulonglong uVar18;
    bool bVar19;
    longlong local_res18;
    undefined4 local_res20;
    longlong local_e8;
    longlong local_e0;
    undefined2 *local_d8;
    ulonglong local_d0;
    ulonglong local_c8;
    undefined local_c0[8];
    longlong local_b8;
    longlong local_b0;
    undefined local_a0[8];
    undefined2 *local_98;
    undefined2 *local_90;
    undefined2 *local_88;
    undefined local_80[8];
    longlong local_78;
    undefined local_60[8];
    longlong local_58;

    uVar2 = 1;
    iVar4 = FUN_140056d60(param_1, 1);
    puVar9 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    puVar16 = &DAT_140a12138;
    if (puVar9 < *(undefined8 **) (param_1 + 0x10)) {
        puVar16 = puVar9;
    }
    if ((*(int *) (puVar16 + 1) == 0) || ((*(int *) (puVar16 + 1) == 1 && (*(int *) puVar16 == 0)))) {
        uVar2 = 0;
    }
    uVar5 = FUN_140056bb0(param_1, 3);
    FUN_14018f2d0(local_60, uVar5);
    uVar5 = FUN_140056bb0(param_1, 4);
    FUN_14018f2d0(local_80, uVar5);
    uVar5 = FUN_140056bb0(param_1, 5);
    FUN_14018f2d0(local_c0, uVar5);
    local_d8 = (undefined2 *) FUN_14018b280(0x10);
    uVar11 = 0;
    if (local_d8 != (undefined2 *) 0x0) {
        *local_d8 = 0;
    }
    local_e0 = 0;
    local_e8 = 0;
    uVar17 = local_b0 - local_b8 >> 1;
    do {
        lVar15 = local_b0;
        lVar1 = local_b8;
        puVar10 = (undefined2 *) 0x0;
        uVar18 = uVar17;
        if (uVar11 < uVar17) {
            local_res20 = CONCAT22(10, (undefined2) local_res20);
            lVar6 = FUN_14002c8a0(local_b8 + uVar11 * 2, local_b0, local_res20);
            if (lVar6 == lVar15) goto LAB_1407474ab;
            uVar14 = lVar6 - lVar1 >> 1;
            if (uVar14 != 0xffffffffffffffff) {
                uVar18 = uVar14;
            }
        } else {
            LAB_1407474ab:
            uVar14 = 0xffffffffffffffff;
        }
        local_d0 = uVar18 - uVar11;
        puVar7 = &local_c8;
        if (uVar18 - uVar11 <= uVar17 - uVar11) {
            puVar7 = &local_d0;
        }
        local_c8 = uVar17 - uVar11;
        lVar15 = lVar1 + uVar11 * 2;
        lVar1 = lVar1 + (*puVar7 + uVar11) * 2;
        uVar11 = (lVar1 - lVar15 >> 1) + 1;
        puVar8 = puVar10;
        if (uVar11 < 0x7fffffffffffffff) {
            puVar8 = (undefined2 *) FUN_14018b280(uVar11 * 2, 0);
            puVar10 = puVar8 + uVar11;
        }
        puVar3 = local_d8;
        puVar12 = puVar8;
        if (lVar15 != lVar1) {
            do {
                if (puVar12 != (undefined2 *) 0x0) {
                    *puVar12 = *(undefined2 *) ((lVar15 - (longlong) puVar8) + (longlong) puVar12);
                }
                puVar12 = puVar12 + 1;
            } while ((lVar15 - (longlong) puVar8) + (longlong) puVar12 != lVar1);
        }
        if (puVar12 != (undefined2 *) 0x0) {
            *puVar12 = 0;
        }
        bVar19 = local_d8 != (undefined2 *) 0x0;
        local_d8 = puVar8;
        local_98 = puVar8;
        local_90 = puVar12;
        local_88 = puVar10;
        if (bVar19) {
            FUN_14018b900(puVar3, 0);
        }
        uVar11 = uVar18 + 1;
        if ((longlong) puVar12 - (longlong) puVar8 >> 1 != 0) {
            FUN_140554170(&local_e8, local_a0);
        }
        if (uVar14 == 0xffffffffffffffff) {
            lVar1 = *(longlong *) (*(longlong *) (DAT_140c65898 + 0x7350) + 0x20);
            local_res18 = lVar1;
            lVar15 = *(longlong *) (lVar1 + 8);
            while (lVar15 != 0) {
                if (*(int *) (lVar15 + 0x20) < iVar4) {
                    lVar15 = *(longlong *) (lVar15 + 0x18);
                } else {
                    local_res18 = lVar15;
                    lVar15 = *(longlong *) (lVar15 + 0x10);
                }
            }
            if ((local_res18 == lVar1) || (iVar4 < *(int *) (local_res18 + 0x20))) {
                local_res18 = lVar1;
            }
            if (local_res18 == lVar1) {
                uVar5 = 0;
            } else {
                uVar5 = *(undefined8 *) (local_res18 + 0x28);
            }
            FUN_1407771f0(uVar5, uVar2, local_58, local_78, &local_e8);
            lVar1 = local_e8;
            if (local_e0 != 0) {
                plVar13 = (longlong *) (local_e8 + 8);
                lVar15 = local_e0;
                do {
                    if (*plVar13 != 0) {
                        FUN_14018b900(*plVar13, 0);
                    }
                    plVar13 = plVar13 + 4;
                    lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
            }
            if (lVar1 != 0) {
                (**(code * *)(*(longlong *) (lVar1 + -0x10) + 8))(lVar1 + -0x10);
            }
            if (puVar8 != (undefined2 *) 0x0) {
                FUN_14018b900(puVar8, 0);
            }
            if (local_b8 != 0) {
                FUN_14018b900(local_b8, 0);
            }
            if (local_78 != 0) {
                FUN_14018b900(local_78, 0);
            }
            if (local_58 != 0) {
                FUN_14018b900(local_58, 0);
            }
            return 0;
        }
    } while (true);
}


undefined8 FUN_1407476c0(undefined8 param_1) {
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1, 1);
    FUN_1407785e0(*(undefined8 *) (DAT_140c65898 + 0x7350), uVar1);
    return 0;
}


undefined8 FUN_1407476f0(undefined8 param_1) {
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1, 1);
    FUN_1407784c0(*(undefined8 *) (DAT_140c65898 + 0x7350), uVar1);
    return 0;
}


undefined8 FUN_140747720(longlong param_1) {
    uint * puVar1;
    int iVar2;

    iVar2 = FUN_1407786a0(*(undefined8 *) (DAT_140c65898 + 0x7350));
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) (iVar2 != 0);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140747770(undefined8 param_1) {
    FUN_140057020(param_1, "MacrosLib", &PTR_s_GetMacrosList_140b750d0);
    return 1;
}


longlong *FUN_1407477a0(longlong *param_1, longlong *param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined8 * puVar3;
    ulonglong uVar4;
    longlong lVar5;
    ulonglong uVar6;
    undefined8 * puVar7;

    lVar1 = param_2[1];
    if (lVar1 == 0) {
        puVar7 = (undefined8 *) 0x0;
    } else {
        puVar3 = (undefined8 *) FUN_14018b280(lVar1 * 0x20 + 0x10, 0);
        if (puVar3 == (undefined8 *) 0x0) {
            puVar7 = (undefined8 *) &DAT_00000010;
        } else {
            puVar3[1] = lVar1;
            puVar7 = puVar3 + 2;
            *puVar3 = &PTR_LAB_140b55060;
        }
    }
    uVar4 = 0;
    if (lVar1 != 0) {
        puVar3 = puVar7 + 2;
        lVar5 = lVar1;
        do {
            if (puVar3 + -2 != (undefined8 *) 0x0) {
                lVar2 = *param_2 + (-0x10 - (longlong) puVar7);
                puVar3[-1] = 0;
                *puVar3 = 0;
                puVar3[1] = 0;
                FUN_14001c1b0(puVar3 + -2, *(undefined8 *) ((longlong) puVar3 + lVar2 + 8),
                              *(undefined8 *) ((longlong) puVar3 + lVar2 + 0x10));
            }
            puVar3 = puVar3 + 4;
            lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
    }
    uVar6 = uVar4;
    if (param_1[1] != 0) {
        do {
            lVar5 = *(longlong *) (uVar6 + 8 + *param_1);
            if (lVar5 != 0) {
                FUN_14018b900(lVar5, 0);
            }
            uVar4 = uVar4 + 1;
            uVar6 = uVar6 + 0x20;
        } while (uVar4 < (ulonglong) param_1[1]);
    }
    lVar5 = *param_1;
    if (lVar5 != 0) {
        (**(code * *)(*(longlong *) (lVar5 + -0x10) + 8))(lVar5 + -0x10);
    }
    param_1[1] = lVar1;
    *param_1 = (longlong) puVar7;
    return param_1;
}


undefined8 FUN_1407478d0(longlong param_1) {
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                lVar3 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8);
                goto LAB_140747918;
            }
            uVar4 = (ulonglong) ((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar3 = 0;
    LAB_140747918:
    uVar1 = FUN_1400f26a0(lVar3 + 0x180, 1);
    if (*(longlong *) (DAT_140c65898 + 0x78) == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar2 = FUN_1403bb990(DAT_140c65898, param_1, uVar1);
    if (iVar2 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    }
    return 1;
}


undefined8 FUN_140747990(longlong param_1) {
    undefined4 uVar1;
    undefined4 uVar2;
    int iVar3;
    longlong lVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8);
                goto LAB_1407479d8;
            }
            uVar5 = (ulonglong) ((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar4 = 0;
    LAB_1407479d8:
    uVar1 = FUN_1400f26a0(lVar4 + 0x180, 1);
    uVar2 = FUN_1400f26a0(lVar4 + 0x180, 2);
    if (*(longlong *) (DAT_140c65898 + 0x78) == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    } else {
        lVar4 = FUN_1403acd90(DAT_140c65b70, uVar1);
        if ((lVar4 != 0) &&
            (iVar3 = FUN_1403bbb90(DAT_140c65898, param_1, *(undefined4 *) (*(longlong *) (lVar4 + 0x70) + 4), uVar2),
                    iVar3 != 0)) {
            return 1;
        }
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140748390(longlong param_1) {
    uint uVar1;
    undefined4 * puVar2;
    ulonglong uVar3;
    byte bVar4;
    int iVar5;
    uint uVar6;
    undefined4 uVar7;
    longlong lVar8;
    longlong lVar9;
    undefined8 uVar10;
    ulonglong uVar11;
    byte bVar12;
    ulonglong local_res10;

    if ((*(longlong *) (DAT_140c65898 + 0x78) == 0) ||
        (((*(longlong *) (DAT_140c65898 + 0x6490) != 0 &&
           (*(int *) (*(longlong *) (DAT_140c65898 + 0x6490) + 0x2ac) != 0)) ||
          (iVar5 = FUN_1403bb8d0(), iVar5 != 0)))) {
        puVar2 = *(undefined4 **) (param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar8 = FUN_1400e93d0(param_1);
    uVar6 = FUN_1400f26a0(lVar8 + 0x180, 1);
    bVar4 = FUN_1400f26a0(lVar8 + 0x180, 2);
    uVar7 = FUN_1407a1440();
    lVar8 = FUN_1403acd90(DAT_140c65b70, uVar7, *(undefined8 *) (DAT_140c65898 + 0x78));
    if (lVar8 == 0) {
        puVar2 = *(undefined4 **) (param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar5 = FUN_1404823c0(lVar8);
    lVar8 = DAT_140c65898;
    if (iVar5 == 0) {
        puVar2 = *(undefined4 **) (param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar5 = FUN_1403bb170(DAT_140c65898, uVar6);
    if (iVar5 == 0) {
        puVar2 = *(undefined4 **) (param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar9 = FUN_1403bacc0(lVar8, uVar6, *(undefined *) (lVar8 + 0x6dec));
    uVar3 = *(ulonglong *) (lVar8 + 0x1460);
    local_res10 = uVar3;
    uVar11 = *(ulonglong *) (uVar3 + 8);
    while (uVar11 != 0) {
        if (*(uint *) (uVar11 + 0x20) < uVar6) {
            uVar11 = *(ulonglong *) (uVar11 + 0x18);
        } else {
            local_res10 = uVar11;
            uVar11 = *(ulonglong *) (uVar11 + 0x10);
        }
    }
    if ((local_res10 == uVar3) || (uVar6 < *(uint *) (local_res10 + 0x20))) {
        local_res10 = uVar3;
    }
    if ((local_res10 == uVar3) || (bVar12 = *(byte *) (local_res10 + 0x24), bVar12 == 0)) {
        bVar12 = *(byte *) (lVar9 + 8);
    }
    if (lVar9 == 0) {
        LAB_1407485b7:
        FUN_1403bb340(uVar11, uVar6, bVar4);
        uVar10 = 0;
    } else {
        if (bVar4 != bVar12) {
            if (bVar4 <= bVar12) goto LAB_1407485b7;
            if (((uVar6 != 0) && (iVar5 = FUN_1407a1440(), iVar5 != 0)) &&
                (iVar5 = FUN_1403bb040(), iVar5 != 0)) {
                uVar1 = *(uint *) (DAT_140c65898 + 0x6ddc);
                if (uVar1 == 0xffffffff) {
                    uVar1 = *(uint *) (DAT_140c65898 + 0x6dd8);
                }
                uVar11 = (ulonglong) uVar1;
                if (uVar1 != 0) {
                    bVar12 = bVar12 + 1;
                    if (bVar12 <= bVar4) {
                        do {
                            uVar1 = *(uint *) (*(longlong *) (lVar9 + 0x18) + (ulonglong) bVar12 * 4);
                            if ((uint) uVar11 < uVar1) {
                                bVar4 = bVar12 - 1;
                                break;
                            }
                            bVar12 = bVar12 + 1;
                            uVar11 = (ulonglong) ((uint) uVar11 - uVar1);
                        } while (bVar12 <= bVar4);
                    }
                    goto LAB_1407485b7;
                }
            }
        }
        puVar2 = *(undefined4 **) (param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = 1;
    }
    return uVar10;
}


undefined8 FUN_140748630(longlong param_1) {
    undefined4 * puVar1;
    longlong lVar2;

    lVar2 = DAT_140c65898;
    if ((*(longlong *) (DAT_140c65898 + 0x78) != 0) &&
        ((*(longlong *) (DAT_140c65898 + 0x6490) == 0 ||
          (*(int *) (*(longlong *) (DAT_140c65898 + 0x6490) + 0x2ac) == 0)))) {
        FUN_140008410(DAT_140c65898 + 0x1458);
        *(undefined4 *) (lVar2 + 0x6ddc) = 0xffffffff;
        return 0;
    }
    puVar1 = *(undefined4 **) (param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1407486a0(longlong param_1) {
    uint * puVar1;
    int iVar2;

    iVar2 = FUN_1403bb8d0();
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) (iVar2 != 0);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1407486e0(longlong param_1) {
    short sVar1;
    undefined8 * puVar2;
    undefined4 uVar3;
    int iVar4;
    longlong lVar5;
    undefined8 uVar6;
    longlong lVar7;
    undefined2 *puVar8;
    short *psVar9;
    ulonglong uVar10;
    undefined8 * puVar11;
    ulonglong uVar12;
    ulonglong uVar13;
    undefined * *local_108;
    undefined4 local_100;
    longlong local_f8;
    undefined4 local_f0;
    undefined * *local_e8;
    undefined local_e0[8];
    undefined2 *local_d8;
    undefined2 *local_d0;
    undefined local_28[16];
    undefined2 *local_18;

    uVar12 = 0;
    if (*(longlong *) (DAT_140c65898 + 0x78) == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    } else {
        uVar13 = uVar12;
        if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
            uVar10 = uVar12;
            do {
                if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar10 * 8) + 400) ==
                    param_1) {
                    uVar13 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar10 * 8);
                    break;
                }
                uVar10 = (ulonglong) ((int) uVar10 + 1);
            } while (uVar10 < *(ulonglong *) (DAT_140c63650 + 0x300));
        }
        uVar3 = FUN_1400f26a0(uVar13 + 0x180, 1);
        lVar5 = FUN_1403acd90(DAT_140c65b70, uVar3, *(undefined8 *) (DAT_140c65898 + 0x78));
        if (lVar5 == 0) {
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        } else {
            local_108 = &PTR_FUN_140b569f0;
            local_f0 = 1;
            local_f8 = param_1;
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar2 = *(undefined8 **) (param_1 + 0x10);
            uVar6 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar2 + 1) = 5;
            *puVar2 = uVar6;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            local_100 = FUN_1400578c0(param_1);
            uVar13 = 0x198;
            do {
                uVar3 = *(undefined4 *) (uVar13 + *(longlong *) (lVar5 + 0x70));
                if (DAT_140c63840 == (code *) 0x0) {
                    if ((_DAT_140c64be4 == 0) && (iVar4 = FUN_14023b3e0(), -1 < iVar4)) {
                        lVar7 = (**(code * *)(*DAT_140c65570 + 0x18))(DAT_140c65570, uVar3);
                        goto LAB_14074886f;
                    }
                } else {
                    lVar7 = (*DAT_140c63840)(&PTR_u_Spell4Tag_140a6d4d0, uVar3, DAT_140c63858);
                    LAB_14074886f:
                    if (lVar7 != 0) {
                        FUN_1400b6f30(&local_e8);
                        local_e8 = &PTR_FUN_140b69230;
                        local_18 = (undefined2 *) 0x0;
                        local_28 = ZEXT816(0);
                        puVar8 = (undefined2 *) FUN_14018b280(0x10);
                        local_28 = CONCAT88(puVar8, puVar8);
                        local_18 = puVar8 + 8;
                        if (puVar8 != (undefined2 *) 0x0) {
                            *puVar8 = 0;
                        }
                        psVar9 = (short *) FUN_14034bdd0(local_18, *(undefined4 *) (lVar7 + 8));
                        if (psVar9 == (short *) 0x0) {
                            if (local_d8 != local_d0) {
                                *local_d8 = 0;
                                local_d0 = local_d8;
                            }
                        } else {
                            sVar1 = *psVar9;
                            uVar10 = uVar12;
                            while (sVar1 != 0) {
                                uVar10 = uVar10 + 1;
                                sVar1 = psVar9[uVar10];
                            }
                            FUN_14001c480(local_e0, psVar9, psVar9 + uVar10);
                        }
                        FUN_1400b7660(&local_e8);
                        FUN_1400fad30(&local_108);
                        if (local_28._0_8_ != 0) {
                            FUN_14018b900();
                        }
                        FUN_1400b7390(&local_e8);
                    }
                }
                uVar13 = uVar13 + 4;
            } while (uVar13 < 0x1ac);
            lVar5 = local_f8;
            puVar11 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_f8 + 0x20) + 0xa0), local_100);
            puVar2 = *(undefined8 **) (lVar5 + 0x10);
            uVar6 = *puVar11;
            *puVar2 = uVar6;
            *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar11 + 1);
            *(longlong *) (lVar5 + 0x10) = *(longlong *) (lVar5 + 0x10) + 0x10;
            FUN_1400579e0(lVar5, uVar6, local_100);
        }
    }
    return 1;
}



// WARNING: Removing unreachable block (ram,0x000140748a49)

undefined8 FUN_1407489d0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 * puVar3;
    double *pdVar4;
    longlong lVar5;
    int iVar6;
    undefined8 uVar7;
    undefined8 * puVar8;
    byte bVar9;
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
    undefined auVar14[16];

    auVar14 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar8 = *(undefined8 **) (param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar8 + 1) = 5;
    *puVar8 = uVar7;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar6 = FUN_1400578c0();
    uVar12 = 0;
    uVar13 = 0;
    bVar9 = 1;
    iVar10 = 1;
    do {
        iVar1 = *(int *) (DAT_140c65b70 + 0x4f0 + (ulonglong) bVar9 * 4);
        lVar2 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
        if (iVar6 - 1U < *(uint *) (lVar2 + 0x38)) {
            puVar8 = (undefined8 *) ((longlong) (iVar6 + -1) * 0x10 + *(longlong *) (lVar2 + 0x18));
        } else {
            dVar11 = (double) iVar6;
            if (dVar11 == (double) CONCAT44(uVar13, uVar12)) {
                puVar8 = *(undefined8 **) (lVar2 + 0x20);
            } else {
                iStackX12 = (int) ((ulonglong) dVar11 >> 0x20);
                local_res8 = SUB84(dVar11, 0);
                puVar8 = (undefined8 *)
                        (*(longlong *) (lVar2 + 0x20) +
                         ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                          (longlong) ((1 << (*(byte *) (lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
            }
            do {
                if ((*(int *) (puVar8 + 3) == 3) && (dVar11 == (double) puVar8[2])) goto LAB_140748ae9;
                puVar8 = (undefined8 *) puVar8[4];
            } while (puVar8 != (undefined8 *) 0x0);
            puVar8 = &DAT_140a12138;
        }
        LAB_140748ae9:
        puVar3 = *(undefined8 **) (param_1 + 0x10);
        *puVar3 = *puVar8;
        *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar8 + 1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar4 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) iVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar4 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) iVar1;
        lVar2 = *(longlong *) (param_1 + 0x10);
        *(longlong *) (param_1 + 0x10) = lVar2 + 0x10;
        FUN_14005ea50(param_1, lVar2 + -0x20, lVar2 + -0x10, lVar2, auVar14);
        lVar2 = *(longlong *) (param_1 + 0x10);
        bVar9 = bVar9 + 1;
        *(undefined **) (param_1 + 0x10) = &DAT_ffffffffffffffd0 + lVar2;
        iVar10 = iVar10 + 1;
    } while (bVar9 < 0xb);
    lVar5 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
    if (iVar6 - 1U < *(uint *) (lVar5 + 0x38)) {
        puVar8 = (undefined8 *) ((longlong) (iVar6 + -1) * 0x10 + *(longlong *) (lVar5 + 0x18));
    } else {
        dVar11 = (double) iVar6;
        if (dVar11 == (double) CONCAT44(uVar13, uVar12)) {
            puVar8 = *(undefined8 **) (lVar5 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar11 >> 0x20);
            local_res8 = SUB84(dVar11, 0);
            puVar8 = (undefined8 *)
                    (*(longlong *) (lVar5 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar5 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar8 + 3) == 3) && (dVar11 == (double) puVar8[2])) goto LAB_140748bf1;
            puVar8 = (undefined8 *) puVar8[4];
        } while (puVar8 != (undefined8 *) 0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_140748bf1:
    *(undefined8 *) (&DAT_ffffffffffffffd0 + lVar2) = *puVar8;
    *(undefined4 *) (lVar2 + -0x28) = *(undefined4 *) (puVar8 + 1);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, puVar8, iVar6);
    return 1;
}


undefined8 FUN_140748c40(longlong param_1) {
    undefined4 * puVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    bool bVar5;

    if (*(longlong *) (DAT_140c65898 + 0x78) != 0) {
        iVar2 = FUN_1403bb8d0();
        if (iVar2 == 0) {
            uVar3 = 0;
            if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
                do {
                    if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400)
                        == param_1) {
                        lVar4 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8);
                        goto LAB_140748ca8;
                    }
                    uVar3 = (ulonglong) ((int) uVar3 + 1);
                } while (uVar3 < *(ulonglong *) (DAT_140c63650 + 0x300));
            }
            lVar4 = 0;
            LAB_140748ca8:
            uVar3 = FUN_1400f26a0(lVar4 + 0x180);
            if ((int) uVar3 != 0) {
                uVar3 = (ulonglong) ((int) uVar3 - 1);
            }
            if (((byte) uVar3 < 4) &&
                (bVar5 = (*(byte *) (DAT_140c65898 + 0x1448 + (uVar3 & 0xff) * 4) & 1) != 0, bVar5)) {
                FUN_1403cd800(bVar5, uVar3 & 0xff);
                return 0;
            }
            puVar1 = *(undefined4 **) (param_1 + 0x10);
            *puVar1 = 0;
            puVar1[2] = 1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar1 = *(undefined4 **) (param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140748d40(longlong param_1) {
    undefined4 * puVar1;
    int iVar2;
    ulonglong uVar3;
    byte bVar4;
    ulonglong uVar5;

    if (*(longlong *) (DAT_140c65898 + 0x78) != 0) {
        iVar2 = FUN_1403bb8d0();
        if (iVar2 == 0) {
            uVar3 = 0;
            uVar5 = (ulonglong) *(byte *) (DAT_140c65898 + 0x6dec);
            do {
                if ((char) uVar5 == '\x03') {
                    uVar5 = 0;
                    LAB_140748d81:
                    if ((*(byte *) (DAT_140c65898 + 0x1448 + uVar5 * 4) & 1) != 0) break;
                } else {
                    bVar4 = (char) uVar5 + 1;
                    uVar5 = (ulonglong) bVar4;
                    if (bVar4 < 4) goto LAB_140748d81;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < 4);
            FUN_1403cd800();
            return 0;
        }
    }
    puVar1 = *(undefined4 **) (param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140748f40(longlong param_1) {
    double *pdVar1;
    short sVar2;

    sVar2 = FUN_1403cdd00();
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) (int) sVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140748f80(longlong param_1) {
    double *pdVar1;
    short sVar2;

    sVar2 = FUN_1403cdd00();
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) (int) sVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140748fc0(longlong param_1) {
    undefined4 * puVar1;
    undefined8 * puVar2;
    undefined4 uVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 * puVar6;

    if (*(longlong *) (DAT_140c65898 + 0x78) == 0) {
        puVar1 = *(undefined4 **) (param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400578c0(param_1);
    iVar4 = FUN_1403ce010();
    if (iVar4 == 0) {
        puVar1 = *(undefined4 **) (param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    } else {
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar3);
        puVar2 = *(undefined8 **) (param_1 + 0x10);
        *puVar2 = *puVar6;
        *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar6 + 1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    }
    if (param_1 != 0) {
        FUN_1400579e0(param_1);
    }
    return 1;
}


undefined8 FUN_1407490e0(longlong param_1) {
    longlong * plVar1;
    undefined4 * puVar2;
    undefined8 * puVar3;
    int iVar4;
    undefined8 uVar5;
    undefined8 * puVar6;
    ulonglong uVar7;
    longlong lVar8;
    undefined * *local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(longlong *) (DAT_140c65898 + 0x78) == 0) {
        puVar2 = *(undefined4 **) (param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar7 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                lVar8 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar7 * 8);
                goto LAB_14074915c;
            }
            uVar7 = (ulonglong) ((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar8 = 0;
    LAB_14074915c:
    iVar4 = FUN_1400f26a0(lVar8 + 0x180, 1);
    if (3 < iVar4 - 1U) {
        puVar2 = *(undefined4 **) (param_1 + 0x10);
        *puVar2 = 0;
        puVar2[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar3 = *(undefined8 **) (param_1 + 0x10);
    plVar1 = (longlong *) (param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar3 + 1) = 5;
    *puVar3 = uVar5;
    *plVar1 = *plVar1 + 0x10;
    local_20 = FUN_1400578c0(param_1);
    if (((byte) (iVar4 - 1U) < 4) &&
        (iVar4 = FUN_1403ce4a0(iVar4 - 1U & 0xff, &local_28), param_1 = local_18, iVar4 != 0)) {
        puVar6 = (undefined8 *)
                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_18 + 0x20) + 0xa0), local_20);
        puVar3 = *(undefined8 **) (param_1 + 0x10);
        *puVar3 = *puVar6;
        *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar6 + 1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    } else {
        puVar2 = (undefined4 *) *plVar1;
        *puVar2 = 0;
        puVar2[2] = 1;
        *plVar1 = *plVar1 + 0x10;
    }
    if (param_1 == 0) {
        return 1;
    }
    FUN_1400579e0(param_1);
    return 1;
}


undefined8 FUN_1407492b0(longlong param_1) {
    undefined4 * puVar1;
    int iVar2;

    if ((*(longlong *) (DAT_140c65898 + 0x78) != 0) &&
        ((*(longlong *) (DAT_140c65898 + 0x6490) == 0 ||
          (*(int *) (*(longlong *) (DAT_140c65898 + 0x6490) + 0x2ac) == 0)))) {
        iVar2 = FUN_1403bb8d0();
        if (iVar2 == 0) {
            FUN_1403d19a0();
            puVar1 = *(undefined4 **) (param_1 + 0x10);
            *puVar1 = 1;
            puVar1[2] = 1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar1 = *(undefined4 **) (param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140749330(longlong param_1) {
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    undefined4 * puVar4;

    if ((*(longlong *) (DAT_140c65898 + 0x78) == 0) ||
        ((*(longlong *) (DAT_140c65898 + 0x6490) != 0 &&
          (*(int *) (*(longlong *) (DAT_140c65898 + 0x6490) + 0x2ac) != 0)))) {
        LAB_140749428:
        puVar4 = *(undefined4 **) (param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = FUN_1403bb8d0();
    if (iVar1 != 0) goto LAB_140749428;
    lVar3 = FUN_1400e93d0(param_1);
    iVar1 = FUN_1400f26a0(lVar3 + 0x180, 1);
    uVar2 = FUN_1400f26a0(lVar3 + 0x180, 2);
    if (2 < iVar1) {
        puVar4 = *(undefined4 **) (param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
        goto LAB_14074940e;
    }
    if (iVar1 == 1) {
        lVar3 = FUN_1401fd360(uVar2);
        LAB_1407493e2:
        if (lVar3 != 0) goto LAB_1407493f3;
        puVar4 = *(undefined4 **) (param_1 + 0x10);
        *puVar4 = 0;
    } else {
        if (iVar1 == 2) {
            lVar3 = FUN_1401fd7a0(uVar2);
            goto LAB_1407493e2;
        }
        LAB_1407493f3:
        FUN_1403d1610();
        puVar4 = *(undefined4 **) (param_1 + 0x10);
        *puVar4 = 1;
    }
    puVar4[2] = 1;
    LAB_14074940e:
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140749450(longlong param_1) {
    undefined4 * puVar1;
    double *pdVar2;
    int iVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    longlong lVar6;

    if (*(longlong *) (DAT_140c65898 + 0x78) == 0) {
        puVar1 = *(undefined4 **) (param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar5 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar6 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8);
                goto LAB_1407494c8;
            }
            uVar5 = (ulonglong) ((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar6 = 0;
    LAB_1407494c8:
    iVar3 = FUN_1400f26a0(lVar6 + 0x180, 1);
    uVar4 = FUN_1400f26a0(lVar6 + 0x180, 2);
    if (iVar3 < 3) {
        iVar3 = FUN_1403d16c0(DAT_140c65898, iVar3, uVar4);
        pdVar2 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar2 + 1) = 3;
        *pdVar2 = (double) iVar3;
    } else {
        puVar1 = *(undefined4 **) (param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1407495c0(longlong param_1) {
    undefined4 * puVar1;
    double *pdVar2;
    int iVar3;
    undefined4 uVar4;
    longlong lVar5;

    if ((*(longlong *) (DAT_140c65898 + 0x78) != 0) &&
        ((*(longlong *) (DAT_140c65898 + 0x6490) == 0 ||
          (*(int *) (*(longlong *) (DAT_140c65898 + 0x6490) + 0x2ac) == 0)))) {
        iVar3 = FUN_1403bb8d0();
        if (iVar3 == 0) {
            lVar5 = FUN_1400e93d0(param_1);
            uVar4 = FUN_1400f26a0(lVar5 + 0x180, 1);
            lVar5 = FUN_1401fd7a0(uVar4);
            if (lVar5 == 0) {
                puVar1 = *(undefined4 **) (param_1 + 0x10);
                *puVar1 = 0;
                puVar1[2] = 1;
            } else {
                iVar3 = FUN_1403d1b10();
                pdVar2 = *(double **) (param_1 + 0x10);
                *(undefined4 *) (pdVar2 + 1) = 3;
                *pdVar2 = (double) iVar3;
            }
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar1 = *(undefined4 **) (param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140749690(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 uVar3;

    FUN_140057020(param_1, "AbilityBook", &PTR_s_GetAbilitiesList_140b75160);
    FUN_140058710(param_1, "CodeEnumSpecConstant", 0x14);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "MaxNumSpecs", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumSpecError", 0x11);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, &DAT_1409f94fc, 2);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "InvalidIndex", 0xc);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "NoChange", 8);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "InCombat", 8);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "InvalidPlayer", 0xd);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "IndexLocked", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PvPRestricted", 0xd);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "InVoid", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumEldanAvailability", 0x19);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "Unavailable", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Inaccessible", 0xc);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Inactivated", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Activated", 9);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumAMPRespecType", 0x15);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, &DAT_140b4a0d8, 4);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Section", 7);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Single", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    return 1;
}


undefined8 FUN_140749e70(longlong param_1) {
    byte bVar1;
    double *pdVar2;
    longlong lVar3;
    longlong lVar4;
    code *pcVar5;
    bool bVar6;
    bool bVar7;
    longlong lVar8;
    int iVar9;
    undefined8 * puVar10;
    undefined8 uVar11;
    undefined8 * puVar12;
    longlong * plVar13;
    int iVar14;
    undefined8 local_38;
    undefined4 local_30;

    lVar8 = DAT_140c665d8;
    puVar12 = *(undefined8 **) (param_1 + 0x18);
    puVar10 = &DAT_140a12138;
    if (puVar12 < *(undefined8 **) (param_1 + 0x10)) {
        puVar10 = puVar12;
    }
    if ((*(int *) (puVar10 + 1) == 0) || ((*(int *) (puVar10 + 1) == 1 && (*(int *) puVar10 == 0)))) {
        bVar6 = false;
    } else {
        bVar6 = true;
    }
    puVar10 = &DAT_140a12138;
    if (puVar12 + 2 < *(undefined8 **) (param_1 + 0x10)) {
        puVar10 = puVar12 + 2;
    }
    if ((*(int *) (puVar10 + 1) == 0) || ((*(int *) (puVar10 + 1) == 1 && (*(int *) puVar10 == 0)))) {
        bVar7 = false;
    } else {
        bVar7 = true;
    }
    iVar14 = 1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar12 = *(undefined8 **) (param_1 + 0x10);
    uVar11 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar12 + 1) = 5;
    *puVar12 = uVar11;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    plVar13 = (longlong *) **(longlong **) (lVar8 + 0x38);
    iVar9 = iVar14;
    if (plVar13 != *(longlong **) (lVar8 + 0x38)) {
        do {
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar2 + 1) = 3;
            iVar14 = iVar9 + 1;
            *pdVar2 = (double) iVar9;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_14072d5b0(param_1, plVar13[2]);
            lVar3 = *(longlong *) (param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar3, lVar3 + -0x20, lVar3 + -0x10);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
            plVar13 = (longlong *) *plVar13;
            iVar9 = iVar14;
        } while (plVar13 != (longlong *) *(longlong *) (lVar8 + 0x38));
    }
    plVar13 = (longlong *) **(longlong **) (lVar8 + 0x58);
    iVar9 = iVar14;
    if (plVar13 != *(longlong **) (lVar8 + 0x58)) {
        do {
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar2 + 1) = 3;
            iVar14 = iVar9 + 1;
            *pdVar2 = (double) iVar9;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_14072d5b0(param_1, plVar13[2]);
            lVar3 = *(longlong *) (param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar3, lVar3 + -0x20, lVar3 + -0x10);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
            plVar13 = (longlong *) *plVar13;
            iVar9 = iVar14;
        } while (plVar13 != (longlong *) *(longlong *) (lVar8 + 0x58));
    }
    if ((bVar6) &&
        (plVar13 = (longlong *) **(longlong **) (lVar8 + 0x48), iVar9 = iVar14,
                plVar13 != *(longlong **) (lVar8 + 0x48))) {
        do {
            pdVar2 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar2 + 1) = 3;
            iVar14 = iVar9 + 1;
            *pdVar2 = (double) iVar9;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_14072d5b0(param_1, plVar13[2]);
            lVar3 = *(longlong *) (param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar3, lVar3 + -0x20, lVar3 + -0x10);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
            plVar13 = (longlong *) *plVar13;
            iVar9 = iVar14;
        } while (plVar13 != (longlong *) *(longlong *) (lVar8 + 0x48));
    }
    if (bVar7) {
        if (*(longlong **) (DAT_140c65898 + 0x1bf0) != (longlong *) 0x0) {
            (**(code * *)(**(longlong **) (DAT_140c65898 + 0x1bf0) + 0x18))();
        }
        plVar13 = (longlong *) **(longlong **) (lVar8 + 0x68);
        if (plVar13 != *(longlong **) (lVar8 + 0x68)) {
            do {
                iVar9 = (**(code * *)(*(longlong *) plVar13[2] + 0x80))();
                if (iVar9 != 0) {
                    pdVar2 = *(double **) (param_1 + 0x10);
                    *(undefined4 *) (pdVar2 + 1) = 3;
                    *pdVar2 = (double) iVar14;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    lVar3 = plVar13[2];
                    if (lVar3 != 0) {
                        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        if (*(longlong *) (param_1 + 0x28) == *(longlong *) (param_1 + 0x50)) {
                            uVar11 = *(undefined8 *) (param_1 + 0x78);
                        } else {
                            uVar11 = *(undefined8 *) (**(longlong **) (*(longlong *) (param_1 + 0x28) + 8) + 0x18);
                        }
                        lVar4 = *(longlong *) (param_1 + 0x20);
                        puVar12 = (undefined8 *)
                                (**(code * *)(lVar4 + 0x10))(*(undefined8 *) (lVar4 + 0x18), 0, 0, 0x38);
                        if (puVar12 == (undefined8 *) 0x0) {
                            FUN_140061040(param_1, 4);
                            pcVar5 = (code *) swi(3);
                            uVar11 = (*pcVar5)();
                            return uVar11;
                        }
                        *(longlong *) (lVar4 + 0x78) = *(longlong *) (lVar4 + 0x78) + 0x38;
                        bVar1 = *(byte *) (*(longlong *) (param_1 + 0x20) + 0x20);
                        *(undefined *) (puVar12 + 1) = 7;
                        puVar12[4] = 8;
                        puVar12[2] = 0;
                        puVar12[3] = uVar11;
                        *(byte *) ((longlong) puVar12 + 9) = bVar1 & 3;
                        *puVar12 = **(undefined8 **) (*(longlong *) (param_1 + 0x20) + 0xb0);
                        **(undefined8 **) (*(longlong *) (param_1 + 0x20) + 0xb0) = puVar12;
                        puVar10 = *(undefined8 **) (param_1 + 0x10);
                        *puVar10 = puVar12;
                        *(undefined4 *) (puVar10 + 1) = 7;
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        puVar12[6] = lVar3;
                        lVar3 = *(longlong *) (param_1 + 0x20);
                        local_38 = FUN_140062650(param_1, "Game.Episode", 0xc);
                        local_30 = 4;
                        FUN_14005e8e0(param_1, lVar3 + 0xa0, &local_38, *(undefined8 *) (param_1 + 0x10));
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        FUN_140058bf0(param_1, 0xfffffffe);
                    }
                    lVar3 = *(longlong *) (param_1 + 0x10);
                    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar3, lVar3 + -0x20, lVar3 + -0x10);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
                    iVar14 = iVar14 + 1;
                }
                plVar13 = (longlong *) *plVar13;
            } while (plVar13 != (longlong *) *(longlong *) (lVar8 + 0x68));
        }
    }
    return 1;
}


ulonglong FUN_14074a230(longlong *param_1, longlong *param_2) {
    ulonglong uVar1;
    float fVar2;
    float extraout_XMM0_Da;

    fVar2 = (float) (**(code * *)(*param_1 + 0xd8))();
    uVar1 = (**(code * *)(*param_2 + 0xd8))(param_2);
    return uVar1 & 0xffffffffffffff00 | (ulonglong) (fVar2 < extraout_XMM0_Da);
}


undefined8 FUN_14074a270(longlong param_1) {
    uint uVar1;
    longlong * plVar2;
    longlong lVar3;
    uint * puVar4;
    longlong lVar5;
    longlong * *pplVar6;
    double *pdVar7;
    longlong * *pplVar8;
    bool bVar9;
    longlong lVar10;
    longlong lVar11;
    int iVar12;
    longlong * *pplVar13;
    undefined8 uVar14;
    longlong lVar15;
    longlong * plVar16;
    longlong * plVar17;
    undefined8 * puVar18;
    longlong * plVar19;
    longlong local_80;
    longlong local_78;
    longlong local_70;
    longlong local_68;
    longlong local_60;
    longlong local_58;
    longlong local_50;
    longlong local_48;
    undefined local_40[8];
    longlong * *local_38;

    lVar15 = DAT_140c665d8;
    puVar18 = &DAT_140a12138;
    if (*(undefined8 **) (param_1 + 0x18) < *(undefined8 **) (param_1 + 0x10)) {
        puVar18 = *(undefined8 **) (param_1 + 0x18);
    }
    if ((*(int *) (puVar18 + 1) == 0) || ((*(int *) (puVar18 + 1) == 1 && (*(int *) puVar18 == 0)))) {
        bVar9 = false;
    } else {
        bVar9 = true;
    }
    local_78 = DAT_140c665d8;
    local_50 = param_1;
    pplVar13 = (longlong **) FUN_14018b280(0x18);
    *pplVar13 = (longlong *) pplVar13;
    pplVar13[1] = (longlong *) pplVar13;
    local_38 = pplVar13;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar18 = *(undefined8 **) (param_1 + 0x10);
    uVar14 = FUN_14005c1b0(param_1, 0);
    lVar11 = local_78;
    *(undefined4 *) (puVar18 + 1) = 5;
    *puVar18 = uVar14;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    plVar19 = (longlong *) **(longlong **) (lVar15 + 0x38);
    if (plVar19 != *(longlong **) (lVar15 + 0x38)) {
        do {
            plVar2 = (longlong *) plVar19[2];
            lVar15 = (**(code * *)(*plVar2 + 0x90))(plVar2);
            plVar17 = (longlong *) **(longlong **) (lVar15 + 8);
            if (plVar17 != *(longlong **) (lVar15 + 8)) {
                do {
                    lVar3 = plVar17[3];
                    iVar12 = FUN_1405fbc40(*DAT_140c65b80, **(undefined4 **) (lVar3 + 8));
                    if ((((iVar12 - 1U & 0xfffffffc) == 0) && (iVar12 != 3)) &&
                        (puVar4 = *(uint **) (lVar3 + 8), (puVar4[3] & 0x80000) == 0)) {
                        uVar1 = *puVar4;
                        lVar3 = *(longlong *) (*DAT_140c65b80 + 8);
                        lVar10 = lVar3;
                        lVar5 = *(longlong *) (lVar3 + 8);
                        while (lVar5 != 0) {
                            if (*(uint *) (lVar5 + 0x20) < uVar1) {
                                lVar5 = *(longlong *) (lVar5 + 0x18);
                            } else {
                                lVar10 = lVar5;
                                lVar5 = *(longlong *) (lVar5 + 0x10);
                            }
                        }
                        if ((lVar10 == lVar3) || (uVar1 < *(uint *) (lVar10 + 0x20))) {
                            local_48 = lVar3;
                            plVar16 = &local_48;
                        } else {
                            local_80 = lVar10;
                            plVar16 = &local_80;
                        }
                        lVar5 = *plVar16;
                        if (((lVar5 == lVar3) || (lVar5 == -0x28)) || ((*(uint *) (lVar5 + 0x6c) & 2) == 0)) {
                            lVar10 = lVar3;
                            lVar5 = *(longlong *) (lVar3 + 8);
                            while (lVar5 != 0) {
                                if (*(uint *) (lVar5 + 0x20) < uVar1) {
                                    lVar5 = *(longlong *) (lVar5 + 0x18);
                                } else {
                                    lVar10 = lVar5;
                                    lVar5 = *(longlong *) (lVar5 + 0x10);
                                }
                            }
                            if ((lVar10 == lVar3) || (uVar1 < *(uint *) (lVar10 + 0x20))) {
                                local_58 = lVar3;
                                plVar16 = &local_58;
                            } else {
                                local_70 = lVar10;
                                plVar16 = &local_70;
                            }
                            lVar5 = *plVar16;
                            if (((lVar5 != lVar3) && (lVar5 != -0x28)) && (*(int *) (lVar5 + 0x70) != 0)) {
                                lVar10 = lVar3;
                                lVar5 = *(longlong *) (lVar3 + 8);
                                while (lVar5 != 0) {
                                    if (*(uint *) (lVar5 + 0x20) < uVar1) {
                                        lVar5 = *(longlong *) (lVar5 + 0x18);
                                    } else {
                                        lVar10 = lVar5;
                                        lVar5 = *(longlong *) (lVar5 + 0x10);
                                    }
                                }
                                if ((lVar10 == lVar3) || (uVar1 < *(uint *) (lVar10 + 0x20))) {
                                    local_60 = lVar3;
                                    plVar16 = &local_60;
                                } else {
                                    local_68 = lVar10;
                                    plVar16 = &local_68;
                                }
                                lVar5 = *plVar16;
                                if ((lVar5 == lVar3) || (lVar5 == -0x28)) {
                                    iVar12 = 0;
                                } else {
                                    iVar12 = *(int *) (lVar5 + 0x70);
                                }
                                if (0 < iVar12 - DAT_140c636a8) goto LAB_14074a527;
                            }
                            iVar12 = FUN_1405fbc40(*DAT_140c65b80, uVar1);
                            if (iVar12 != 4) goto LAB_14074a518;
                        }
                        LAB_14074a527:
                        if (bVar9) {
                            (**(code * *)(*plVar2 + 0xe0))(plVar2);
                        }
                        plVar17 = (longlong *) FUN_14018b280(0x18);
                        if ((longlong **) (plVar17 + 2) != (longlong **) 0x0) {
                            plVar17[2] = (longlong) plVar2;
                        }
                        *plVar17 = (longlong) pplVar13;
                        plVar17[1] = (longlong) pplVar13[1];
                        *pplVar13[1] = (longlong) plVar17;
                        pplVar13[1] = plVar17;
                        break;
                    }
                    LAB_14074a518:
                    plVar17 = (longlong *) *plVar17;
                } while (plVar17 != (longlong *) *(longlong *) (lVar15 + 8));
            }
            plVar19 = (longlong *) *plVar19;
            param_1 = local_50;
        } while (plVar19 != (longlong *) *(longlong *) (lVar11 + 0x38));
    }
    if ((bVar9) && ((longlong **) *pplVar13 != pplVar13)) {
        FUN_14074a9f0(local_40);
        pplVar13 = local_38;
    }
    iVar12 = 1;
    for (pplVar6 = (longlong **) *pplVar13; pplVar6 != pplVar13; pplVar6 = (longlong **) *pplVar6) {
        pdVar7 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar7 + 1) = 3;
        *pdVar7 = (double) iVar12;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        FUN_14072d5b0(param_1, pplVar6[2]);
        lVar15 = *(longlong *) (param_1 + 0x10);
        FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar15, lVar15 + -0x20, lVar15 + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar12 = iVar12 + 1;
    }
    pplVar6 = (longlong **) *pplVar13;
    while (pplVar6 != pplVar13) {
        pplVar8 = (longlong **) *pplVar6;
        FUN_14018b900(pplVar6, 0);
        pplVar6 = pplVar8;
    }
    *pplVar13 = (longlong *) pplVar13;
    pplVar13[1] = (longlong *) pplVar13;
    FUN_14018b900(pplVar13, 0);
    return 1;
}


undefined8 FUN_14074a670(longlong param_1) {
    longlong * plVar1;
    longlong lVar2;
    double *pdVar3;
    int iVar4;
    ulonglong uVar5;
    ulonglong uVar6;

    uVar6 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar5 = uVar6;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8);
                break;
            }
            uVar5 = (ulonglong) ((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    iVar4 = FUN_1405fc680(*DAT_140c65b80);
    lVar2 = *(longlong *) (uVar6 + 400);
    pdVar3 = *(double **) (lVar2 + 0x10);
    *(undefined4 *) (pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar4;
    plVar1 = (longlong *) (lVar2 + 0x10);
    *plVar1 = *plVar1 + 0x10;
    return 1;
}


undefined8 FUN_14074a700(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_140200220(0x28f);
    if (lVar2 == 0) {
        iVar3 = 0x28;
    } else {
        iVar3 = *(int *) (lVar2 + 4);
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074a750(longlong param_1) {
    int iVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar3;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong) ((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    iVar1 = FUN_1400f26a0(uVar3 + 0x180, 1);
    if (iVar1 < *(int *) (*DAT_140c65b80 + 0x10)) {
        uVar2 = FUN_1405fc730(*DAT_140c65b80, iVar1);
        uVar2 = FUN_140663030(param_1, uVar2);
        return uVar2;
    }
    return 0;
}


undefined8 FUN_14074a960(void) {
    FUN_1405fd320(*DAT_140c65b80);
    return 0;
}


undefined8 FUN_14074a980(longlong param_1) {
    double *pdVar1;
    int iVar2;

    iVar2 = FUN_1405fd420(*DAT_140c65b80);
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


void FUN_14074a9f0(longlong param_1) {
    longlong * plVar1;
    longlong * *pplVar2;
    undefined8 uVar3;
    longlong * *pplVar4;
    longlong * plVar5;
    longlong * *pplVar6;
    undefined * puVar7;
    longlong * plVar8;
    longlong lVar9;
    int iVar10;
    longlong * *pplVar11;
    ulonglong uVar12;
    int iVar13;
    undefined auStack1128[32];
    undefined local_448[8];
    longlong * *local_440;
    undefined local_438[8];
    longlong * local_430;
    undefined local_428[1000];
    longlong * local_40;
    ulonglong local_38;
    longlong local_30;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1128;
    if (*(undefined8 **) **(undefined8 **) (param_1 + 8) != *(undefined8 **) (param_1 + 8)) {
        pplVar4 = (longlong **) FUN_14018b280(0x18);
        *pplVar4 = (longlong *) pplVar4;
        pplVar4[1] = (longlong *) pplVar4;
        iVar10 = 0x3f;
        pplVar6 = &local_430;
        local_440 = pplVar4;
        do {
            plVar5 = (longlong *) FUN_14018b280(0x18);
            iVar10 = iVar10 + -1;
            *plVar5 = (longlong) plVar5;
            *pplVar6 = plVar5;
            plVar5[1] = (longlong) plVar5;
            pplVar6 = pplVar6 + 2;
        } while (-1 < iVar10);
        pplVar6 = *(longlong ***) (param_1 + 8);
        iVar10 = 0;
        if ((longlong **) *pplVar6 != pplVar6) {
            do {
                plVar5 = *pplVar6;
                plVar8 = *pplVar4;
                plVar1 = (longlong *) *plVar5;
                if ((plVar8 != plVar5) && (plVar8 != plVar1)) {
                    *(longlong **) plVar1[1] = plVar8;
                    *(longlong **) plVar5[1] = plVar1;
                    *(longlong **) plVar8[1] = plVar5;
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
                        pplVar2 = (longlong **) *pplVar11;
                        pplVar6 = pplVar4;
                        if ((longlong **) *pplVar2 == pplVar2) break;
                        FUN_1401589f0(local_438 + (longlong) iVar13 * 0x10, local_448, FUN_14074a230);
                        lVar9 = lVar9 + 1;
                        *pplVar11 = (longlong *) pplVar4;
                        pplVar11 = pplVar11 + 2;
                        iVar13 = iVar13 + 1;
                        pplVar6 = pplVar2;
                        pplVar4 = pplVar2;
                        local_440 = pplVar2;
                    } while (lVar9 < iVar10);
                }
                pplVar4 = *(longlong ***) (local_428 + lVar9 * 0x10 + -8);
                *(longlong ***) (local_428 + lVar9 * 0x10 + -8) = pplVar6;
                if (iVar13 == iVar10) {
                    iVar10 = iVar10 + 1;
                }
                pplVar6 = *(longlong ***) (param_1 + 8);
                local_440 = pplVar4;
            } while ((longlong **) *pplVar6 != pplVar6);
        }
        iVar13 = 0x3f;
        if (1 < iVar10) {
            puVar7 = local_428;
            uVar12 = (ulonglong) (iVar10 - 1);
            do {
                FUN_1401589f0(puVar7, puVar7 + -0x10, FUN_14074a230);
                puVar7 = puVar7 + 0x10;
                uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
        }
        plVar5 = &local_30;
        uVar3 = *(undefined8 *) (local_428 + (longlong) (iVar10 + -1) * 0x10 + -8);
        *(undefined8 *) (local_428 + (longlong) (iVar10 + -1) * 0x10 + -8) = *(undefined8 *) (param_1 + 8);
        *(undefined8 *) (param_1 + 8) = uVar3;
        do {
            pplVar6 = (longlong **) (plVar5 + -2);
            plVar5 = plVar5 + -2;
            plVar8 = (longlong *) **pplVar6;
            if (plVar8 != *pplVar6) {
                do {
                    plVar1 = (longlong *) *plVar8;
                    FUN_14018b900(plVar8, 0);
                    plVar8 = plVar1;
                } while (plVar1 != (longlong *) *plVar5);
            }
            *(longlong *) *plVar5 = *plVar5;
            *(longlong *) (*plVar5 + 8) = *plVar5;
            FUN_14018b900(*plVar5, 0);
            iVar13 = iVar13 + -1;
        } while (-1 < iVar13);
        pplVar6 = (longlong **) *pplVar4;
        while (pplVar6 != pplVar4) {
            pplVar11 = (longlong **) *pplVar6;
            FUN_14018b900(pplVar6, 0);
            pplVar6 = pplVar11;
        }
        *pplVar4 = (longlong *) pplVar4;
        pplVar4[1] = (longlong *) pplVar4;
        FUN_14018b900(pplVar4, 0);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1128);
    return;
}


undefined8 FUN_14074acc0(longlong param_1) {
    double *pdVar1;
    undefined8 * puVar2;
    longlong lVar3;
    int iVar4;
    undefined4 * puVar5;
    longlong lVar6;

    puVar5 = (undefined4 *) FUN_1406622c0(param_1, 1);
    if (puVar5 != (undefined4 *) 0x0) {
        lVar6 = FUN_1403d90d0(DAT_140c65898, *puVar5);
        lVar3 = DAT_140c65898;
        if (lVar6 != 0) {
            lVar6 = FUN_1403d90d0(DAT_140c65898, *(undefined4 *) (lVar6 + 8));
            if ((lVar6 == 0) || (*(int *) (lVar6 + 0x80) != 0x14)) {
                iVar4 = 3;
            } else {
                iVar4 = FUN_1403a6930(lVar3);
                if (iVar4 == 0) {
                    iVar4 = 0x13;
                } else {
                    iVar4 = FUN_1403ad990(*(undefined8 *) (lVar3 + 0x78), lVar6);
                }
            }
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar1 + 1) = 3;
            *pdVar1 = (double) iVar4;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074ada0(longlong param_1) {
    double *pdVar1;
    undefined8 * puVar2;
    int iVar3;
    undefined4 * puVar4;
    longlong lVar5;

    puVar4 = (undefined4 *) FUN_1406622c0(param_1, 1);
    if (puVar4 != (undefined4 *) 0x0) {
        lVar5 = FUN_1403d90d0(DAT_140c65898, *puVar4);
        if (lVar5 != 0) {
            iVar3 = FUN_1403a6a40();
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar1 + 1) = 3;
            *pdVar1 = (double) iVar3;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074ae30(longlong param_1) {
    uint * puVar1;
    longlong lVar2;
    int iVar3;
    undefined local_res8[8];

    lVar2 = DAT_140c65898;
    if ((*(int **) (DAT_140c65898 + 0x6718) != (int *) 0x0) &&
        (**(int **) (DAT_140c65898 + 0x6718) != *(int *) (*(longlong *) (DAT_140c65898 + 0x78) + 8))) {
        iVar3 = FUN_1403a6930(DAT_140c65898);
        if (iVar3 != 0) {
            FUN_1405598d0(lVar2 + 0x70b0);
            local_res8[0] = 0;
            FUN_1403f4900(lVar2, 0x18c, local_res8);
            iVar3 = 0;
            goto LAB_14074ae9b;
        }
    }
    iVar3 = -0x7fffbffb;
    LAB_14074ae9b:
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) (-1 < iVar3);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074aed0(longlong param_1) {
    uint * puVar1;
    int iVar2;
    undefined local_res8[8];

    if ((*(int **) (DAT_140c65898 + 0x6718) == (int *) 0x0) ||
        (**(int **) (DAT_140c65898 + 0x6718) == *(int *) (*(longlong *) (DAT_140c65898 + 0x78) + 8))) {
        iVar2 = -0x7fffbffb;
    } else {
        local_res8[0] = 0;
        FUN_1403f4900(DAT_140c65898, 0x191, local_res8);
        iVar2 = 0;
    }
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) (-1 < iVar2);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074af50(longlong param_1) {
    uint * puVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    uint local_res8;
    uint local_resc;

    uVar3 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar3;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong) ((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    local_resc = FUN_1400f26a0(uVar3 + 0x180, 1);
    local_res8 = (uint) ((ulonglong) (longlong) (int) local_resc >> 8) & 0xff;
    local_resc = local_resc & 0xff;
    if (*(longlong *) (DAT_140c65898 + 0x6718) == 0) {
        iVar2 = -0x7fffbffb;
    } else {
        iVar2 = FUN_1403a6b50(DAT_140c65898, &local_res8);
    }
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) (-1 < iVar2);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074b020(longlong param_1) {
    uint * puVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar3;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong) ((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar3 + 0x180);
    iVar2 = FUN_1403a6c50();
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) (-1 < iVar2);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074b0c0(longlong param_1) {
    uint * puVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;

    uVar3 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar4 = uVar3;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                uVar3 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8);
                break;
            }
            uVar4 = (ulonglong) ((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar3 + 0x180);
    iVar2 = FUN_1403a6ce0();
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) (-1 < iVar2);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074b160(longlong param_1) {
    uint * puVar1;
    int iVar2;
    undefined local_res8[8];

    if (*(longlong *) (DAT_140c65898 + 0x6718) == 0) {
        iVar2 = -0x7fffbffb;
    } else {
        local_res8[0] = 0;
        FUN_1403f4900(DAT_140c65898, 400, local_res8);
        iVar2 = 0;
    }
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) (-1 < iVar2);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


void FUN_14074b1d0(longlong param_1, int *param_2) {
    int iVar1;
    uint uVar2;
    double *pdVar3;
    uint * puVar4;
    undefined4 * puVar5;
    ulonglong uVar6;
    byte bVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 uVar11;
    undefined4 uVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 * puVar16;
    int iVar17;
    undefined8 uVar18;
    longlong lVar19;
    undefined8 * puVar20;
    undefined4 * puVar21;
    undefined4 * puVar22;
    undefined extraout_XMM0[16];
    undefined auStack2088[32];
    undefined8 local_808;
    undefined8 local_800;
    ulonglong local_7d8;
    uint local_7d0;
    ulonglong local_7c8;
    ulonglong local_7c0;
    ulonglong local_7b8[2];
    undefined * *local_7a8;
    undefined4 local_7a0;
    longlong local_798;
    undefined8 local_790;
    undefined8 local_788;
    undefined8 local_780;
    undefined8 local_778;
    ulonglong * local_770;
    undefined8 local_768;
    undefined4 local_760;
    undefined local_758[16];
    undefined4 local_748;
    undefined8 local_740;
    ulonglong * local_738;
    undefined8 local_72c;
    undefined4 local_724;
    undefined8 local_720;
    undefined8 local_718;
    undefined8 local_710;
    undefined local_708[16];
    undefined8 local_6f8;
    undefined4 local_6dc;
    undefined8 local_690;
    undefined8 local_688;
    undefined8 local_680;
    undefined8 local_678;
    undefined8 local_670;
    longlong * local_638;
    longlong local_630;
    undefined4 local_618[178];
    ulonglong local_350;
    ulonglong local_348;
    longlong local_338;
    int local_1a0;
    int local_198;
    int local_194;
    undefined4 local_178[80];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack2088;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar20 = *(undefined8 **) (param_1 + 0x10);
    uVar18 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar20 + 1) = 5;
    *puVar20 = uVar18;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar17 = 0;
    if (*(longlong *) (DAT_140c65898 + 0x78) != 0) {
        iVar17 = *(int *) (*(longlong *) (DAT_140c65898 + 0x78) + 8);
    }
    iVar1 = *param_2;
    FUN_140058710(param_1, &DAT_1409f9544, 3);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar18 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar18, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    iVar1 = param_2[1];
    FUN_140058710(param_1, "bIsMine", 7);
    puVar4 = *(uint **) (param_1 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint) (iVar1 == iVar17);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar18 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar18, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "bIsMoney", 8);
    puVar5 = *(undefined4 **) (param_1 + 0x10);
    *puVar5 = 0;
    puVar5[2] = 1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar18 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar18, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    iVar17 = param_2[6];
    FUN_140058710(param_1, "nQuantity", 9);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar17;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar18 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar18, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    iVar17 = param_2[2];
    FUN_140058710(param_1, "nItemId", 7);
    pdVar3 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar3 + 1) = 3;
    *pdVar3 = (double) iVar17;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar18 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar18, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar19 = FUN_1400b5df0(DAT_140c658f0, param_2[2], 0);
    if (lVar19 != 0) {
        FUN_14040fae0();
        if (local_198 < 7) {
            local_198 = 6;
            local_630 = lVar19;
        }
        uVar2 = param_2[10];
        local_7c0 = CONCAT44(uVar2 >> 6, (uint) CONCAT11((char) uVar2, (char) (uVar2 >> 3))) & 0x1ffff0707;
        bVar7 = (byte) (uVar2 >> 0x18);
        local_7c8 = CONCAT17(bVar7 >> 4,
                             CONCAT16(bVar7 >> 1,
                                      CONCAT15((char) (uVar2 >> 0x16),
                                               CONCAT14((char) (uVar2 >> 0x13),
                                                        CONCAT13((char) (uVar2 >> 0x10),
                                                                 CONCAT12((char) (uVar2 >> 0xd),
                                                                          CONCAT11((char) (uVar2 >> 10),
                                                                                   (char) (uVar2 >> 7))))
                                               )))) & 0x707070707070707;
        uVar6 = *(ulonglong *) (param_2 + 0xc);
        local_7b8[0] = CONCAT26((short) (uVar6 >> 0x18),
                                CONCAT24((short) (uVar6 >> 0xe),
                                         CONCAT22((short) (uVar6 >> 4), (short) uVar6))) &
                       0x3ff03ff03ff000f;
        uVar6 = *(ulonglong *) (param_2 + 8);
        if (uVar6 == 0) {
            local_7d0 = 1;
            local_7d8 = uVar6;
            if (*(int *) (lVar19 + 0x140) - 1U < 2) {
                local_7d0 = 0;
            }
        } else {
            local_7d8 = uVar6 & 0xffffffffffffff;
            local_7d0 = (uint) (byte) (uVar6 >> 0x38);
        }
        local_758 = extraout_XMM0 & (undefined[16]) 0x0;
        local_7a8 = &PTR_FUN_140b66a40;
        local_7a0 = 0;
        local_798 = 0;
        local_790 = 1;
        local_724 = 1;
        local_788 = 0;
        local_780 = 0;
        local_778 = 0;
        local_770 = (ulonglong *) 0x0;
        local_768 = 0;
        local_760 = 0;
        local_748 = 0;
        local_740 = 0;
        local_738 = (ulonglong *) 0x0;
        local_72c = 0;
        local_720 = 0;
        local_718 = 0;
        local_710 = 0;
        local_6f8 = 0;
        local_6dc = 0;
        local_690 = 0;
        local_688 = 0;
        local_680 = 0;
        local_678 = 0;
        local_670 = 0;
        local_708 = local_758;
        puVar20 = (undefined8 *) FUN_140445210();
        local_790 = *puVar20;
        local_788 = puVar20[1];
        local_780 = puVar20[2];
        local_778 = puVar20[3];
        local_760 = 5;
        local_768 = CONCAT44(1, param_2[0xe]);
        local_748 = 0;
        local_740 = 0;
        local_758 = CONCAT88(&local_7d8, param_2 + 0xf);
        local_770 = local_7b8;
        local_738 = &local_7c8;
        local_798 = lVar19;
        FUN_1400b52a0(local_178);
        local_800 = 0;
        local_808 = 0;
        iVar17 = FUN_14040c310(&local_7a8, local_178, DAT_140c658f0, 0);
        if (iVar17 == 0) {
            if (local_1a0 < 7) {
                if ((((uint) local_178 | (uint) local_618) & 0xf) == 0) {
                    lVar19 = 2;
                    puVar5 = local_618;
                    puVar16 = local_178;
                    do {
                        puVar22 = puVar16;
                        puVar21 = puVar5;
                        uVar8 = puVar22[1];
                        uVar9 = puVar22[2];
                        uVar10 = puVar22[3];
                        uVar11 = puVar22[4];
                        uVar12 = puVar22[5];
                        uVar13 = puVar22[6];
                        uVar14 = puVar22[7];
                        *puVar21 = *puVar22;
                        puVar21[1] = uVar8;
                        puVar21[2] = uVar9;
                        puVar21[3] = uVar10;
                        uVar8 = puVar22[8];
                        uVar9 = puVar22[9];
                        uVar10 = puVar22[10];
                        uVar15 = puVar22[0xb];
                        puVar21[4] = uVar11;
                        puVar21[5] = uVar12;
                        puVar21[6] = uVar13;
                        puVar21[7] = uVar14;
                        uVar11 = puVar22[0xc];
                        uVar12 = puVar22[0xd];
                        uVar13 = puVar22[0xe];
                        uVar14 = puVar22[0xf];
                        puVar21[8] = uVar8;
                        puVar21[9] = uVar9;
                        puVar21[10] = uVar10;
                        puVar21[0xb] = uVar15;
                        uVar8 = puVar22[0x10];
                        uVar9 = puVar22[0x11];
                        uVar10 = puVar22[0x12];
                        uVar15 = puVar22[0x13];
                        puVar21[0xc] = uVar11;
                        puVar21[0xd] = uVar12;
                        puVar21[0xe] = uVar13;
                        puVar21[0xf] = uVar14;
                        uVar11 = puVar22[0x14];
                        uVar12 = puVar22[0x15];
                        uVar13 = puVar22[0x16];
                        uVar14 = puVar22[0x17];
                        puVar21[0x10] = uVar8;
                        puVar21[0x11] = uVar9;
                        puVar21[0x12] = uVar10;
                        puVar21[0x13] = uVar15;
                        uVar8 = puVar22[0x18];
                        uVar9 = puVar22[0x19];
                        uVar10 = puVar22[0x1a];
                        uVar15 = puVar22[0x1b];
                        puVar21[0x14] = uVar11;
                        puVar21[0x15] = uVar12;
                        puVar21[0x16] = uVar13;
                        puVar21[0x17] = uVar14;
                        uVar11 = puVar22[0x1c];
                        uVar12 = puVar22[0x1d];
                        uVar13 = puVar22[0x1e];
                        uVar14 = puVar22[0x1f];
                        puVar21[0x18] = uVar8;
                        puVar21[0x19] = uVar9;
                        puVar21[0x1a] = uVar10;
                        puVar21[0x1b] = uVar15;
                        puVar21[0x1c] = uVar11;
                        puVar21[0x1d] = uVar12;
                        puVar21[0x1e] = uVar13;
                        puVar21[0x1f] = uVar14;
                        lVar19 = lVar19 + -1;
                        puVar5 = puVar21 + 0x20;
                        puVar16 = puVar22 + 0x20;
                    } while (lVar19 != 0);
                    uVar8 = puVar22[0x21];
                    uVar9 = puVar22[0x22];
                    uVar10 = puVar22[0x23];
                    uVar11 = puVar22[0x24];
                    uVar12 = puVar22[0x25];
                    uVar13 = puVar22[0x26];
                    uVar14 = puVar22[0x27];
                    uVar18 = *(undefined8 *) (puVar22 + 0x2c);
                    puVar21[0x20] = puVar22[0x20];
                    puVar21[0x21] = uVar8;
                    puVar21[0x22] = uVar9;
                    puVar21[0x23] = uVar10;
                    uVar8 = puVar22[0x28];
                    uVar9 = puVar22[0x29];
                    uVar10 = puVar22[0x2a];
                    uVar15 = puVar22[0x2b];
                    puVar21[0x24] = uVar11;
                    puVar21[0x25] = uVar12;
                    puVar21[0x26] = uVar13;
                    puVar21[0x27] = uVar14;
                    puVar21[0x28] = uVar8;
                    puVar21[0x29] = uVar9;
                    puVar21[0x2a] = uVar10;
                    puVar21[0x2b] = uVar15;
                    *(undefined8 *) (puVar21 + 0x2c) = uVar18;
                } else {
                    FUN_1407db590(local_618, local_178, 0x138);
                }
                local_1a0 = 6;
            }
            if (local_194 < 7) {
                local_194 = 6;
                local_350 = local_7c8;
                local_348 = local_7c0;
                if (((local_638 != (longlong *) 0x0) && (local_638[0xb] != 0)) &&
                    (*(int *) (local_638[0xb] + 8) < 1)) {
                    local_194 = 0;
                    local_350 = 0;
                    local_348 = 0;
                }
            }
        }
        FUN_140058710(param_1, "itemTrading", 0xb);
        FUN_140415bb0(param_1, &local_638);
        lVar19 = *(longlong *) (param_1 + 0x10);
        FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar19, lVar19 + -0x20, lVar19 + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        FUN_1400f0090(param_1);
        if (local_638 != (longlong *) 0x0) {
            (**(code * *)(*local_638 + 8))();
            local_638 = (longlong *) 0x0;
        }
        if (local_338 != 0) {
            FUN_14018b900(local_338, 0);
        }
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack2088);
    return;
}


undefined8 FUN_14074b8d0(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    double *pdVar3;
    longlong lVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (DAT_140c65898 + 0x6718);
    if ((lVar2 != 0) && (uVar6 = 0, uVar7 = uVar6, *(longlong *) (lVar2 + 0x20) != 0)) {
        do {
            pdVar3 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar3 + 1) = 3;
            *pdVar3 = (double) ((int) uVar6 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_14074b1d0(param_1, *(longlong *) (lVar2 + 0x18) + uVar7);
            lVar4 = *(longlong *) (param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 + 0x50;
        } while (uVar6 < *(ulonglong *) (lVar2 + 0x20));
    }
    return 1;
}


undefined8 FUN_14074b9c0(longlong param_1) {
    int *piVar1;
    longlong lVar2;
    undefined8 * puVar3;
    undefined8 uVar4;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 uStack24;
    undefined4 uStack20;

    uVar4 = 0;
    piVar1 = *(int **) (DAT_140c65898 + 0x6718);
    uStack28 = 0;
    uStack24 = 0;
    uStack20 = 0;
    local_20 = 1;
    if (piVar1 != (int *) 0x0) {
        if (*piVar1 == *(int *) (*(longlong *) (DAT_140c65898 + 0x78) + 8)) {
            uVar4 = *(undefined8 *) (piVar1 + 10);
        } else {
            uVar4 = *(undefined8 *) (piVar1 + 0xc);
        }
    }
    puVar3 = (undefined8 *) FUN_140059170(param_1, 0x18);
    *puVar3 = uVar4;
    puVar3[1] = CONCAT44(uStack28, local_20);
    puVar3[2] = CONCAT44(uStack20, uStack24);
    lVar2 = *(longlong *) (param_1 + 0x20);
    local_28 = FUN_140062650(param_1, "Game.Money", 10);
    local_20 = 4;
    FUN_14005e8e0(param_1, lVar2 + 0xa0, &local_28, *(undefined8 *) (param_1 + 0x10));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_14074ba90(longlong param_1) {
    int *piVar1;
    longlong lVar2;
    undefined8 * puVar3;
    undefined8 uVar4;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 uStack28;
    undefined4 uStack24;
    undefined4 uStack20;

    uVar4 = 0;
    piVar1 = *(int **) (DAT_140c65898 + 0x6718);
    uStack28 = 0;
    uStack24 = 0;
    uStack20 = 0;
    local_20 = 1;
    if (piVar1 != (int *) 0x0) {
        if (*piVar1 == *(int *) (*(longlong *) (DAT_140c65898 + 0x78) + 8)) {
            uVar4 = *(undefined8 *) (piVar1 + 0xc);
        } else {
            uVar4 = *(undefined8 *) (piVar1 + 10);
        }
    }
    puVar3 = (undefined8 *) FUN_140059170(param_1, 0x18);
    *puVar3 = uVar4;
    puVar3[1] = CONCAT44(uStack28, local_20);
    puVar3[2] = CONCAT44(uStack20, uStack24);
    lVar2 = *(longlong *) (param_1 + 0x20);
    local_28 = FUN_140062650(param_1, "Game.Money", 10);
    local_20 = 4;
    FUN_14005e8e0(param_1, lVar2 + 0xa0, &local_28, *(undefined8 *) (param_1 + 0x10));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058bf0(param_1, 0xfffffffe);
    return 1;
}


undefined8 FUN_14074bb60(longlong param_1) {
    undefined8 * puVar1;
    undefined local_res8[32];

    local_res8[0] = 0;
    FUN_1403f4900(DAT_140c65898, 399, local_res8);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074be30(longlong param_1) {
    double *pdVar1;
    ulonglong uVar2;

    if (*DAT_140c658c8 == 2) {
        uVar2 = FUN_140200220(0x532);
        if (uVar2 != 0) {
            uVar2 = (ulonglong) *(uint *) (uVar2 + 4);
        }
    } else {
        uVar2 = 1;
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) (int) uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074be90(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 local_38;
    undefined4 local_30;

    FUN_140057020(param_1, "P2PTrading", &PTR_s_CanInitiateTrade_140b753a0);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_ErrorInitiating", 0x22);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_PlayerLogOut", 0x1f);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_PlayerCanceled", 0x21);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_PlayerAcceptedInvite", 0x27);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_PlayerDeclinedInvite", 0x27);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_MissingPlayer", 0x20);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_InitiatorCommitted", 0x25);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_InitiatorUnCommitted", 0x27);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_TargetCommitted", 0x22);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_TargetUnCommitted", 0x24);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_NothingToTrade", 0x21);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_FinishedSuccess", 0x22);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_DbFailedToInit", 0x21);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *(undefined4 *) (puVar1 + 1) = 3;
    *puVar1 = 0x402a000000000000;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_DbFailed", 0x1b);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_ErrorAddingItem", 0x22);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_ErrorRemovingItem", 0x24);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_TargetBusy", 0x1d);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *(undefined4 *) (puVar1 + 1) = 3;
    *puVar1 = 0x4031000000000000;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_TargetNotAllowedToTrade", 0x2a);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeResultCode_InviteFailedNoTrading", 0x28);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_Ok", 0x10);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_Params", 0x14);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_MissingPlayer", 0x1b);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_NoTarget", 0x16);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_AlreadyTrading", 0x1c);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_InVehicle", 0x17);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_TargetRangeMax", 0x1c);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_InCombat", 0x16);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_Dead", 0x12);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_TargetFaction", 0x1b);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402a000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_ItemAlreadyInTradeSession", 0x27);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_ItemNotInTradeSession", 0x23);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_ItemNotFoundInInventory", 0x25);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_DifferentRealms", 0x1d);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_BindUnique", 0x18);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_NotEnoughMoney", 0x1c);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_PlayerHasNotAccepted", 0x22);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_PlayerNotOwnerOfItem", 0x22);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_WaitingOnDbTransaction", 0x24);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4033000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_MissingEntitlement", 0x20);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4034000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_PrivilegeRestricted", 0x21);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4035000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "P2PTradeError_TooManyItems", 0x1a);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_38 = FUN_140062650(param_1, "kMaxTradeItems", 0xe);
    local_30 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return 1;
}


undefined8 FUN_14074ce20(longlong param_1) {
    longlong lVar1;
    undefined8 * puVar2;
    int iVar3;
    int iVar4;
    undefined8 * puVar5;
    undefined8 uVar6;
    ulonglong uVar7;
    undefined8 * puVar8;
    double dVar9;
    int local_res8;
    int iStackX12;

    uVar7 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1)
                break;
            uVar7 = (ulonglong) ((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    puVar5 = (undefined8 *) FUN_14018b280(0x18);
    *puVar5 = puVar5;
    puVar5[1] = puVar5;
    FUN_1406444c0();
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **) (param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar8 + 1) = 5;
    *puVar8 = uVar6;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar3 = FUN_1400578c0();
    for (puVar8 = (undefined8 *) *puVar5; puVar8 != puVar5; puVar8 = (undefined8 *) *puVar8) {
        if ((*(longlong *) (puVar8[2] + 0x28) != 0) && (iVar4 = FUN_1404332a0(), iVar4 != 0)) {
            FUN_1400fb470();
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        }
    }
    lVar1 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
    if (iVar3 - 1U < *(uint *) (lVar1 + 0x38)) {
        puVar8 = (undefined8 *) ((longlong) (iVar3 + -1) * 0x10 + *(longlong *) (lVar1 + 0x18));
    } else {
        dVar9 = (double) iVar3;
        if (dVar9 == 0.0) {
            puVar8 = *(undefined8 **) (lVar1 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar9 >> 0x20);
            local_res8 = SUB84(dVar9, 0);
            puVar8 = (undefined8 *)
                    (*(longlong *) (lVar1 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar1 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar8 + 3) == 3) && (dVar9 == (double) puVar8[2])) goto LAB_14074d01d;
            puVar8 = (undefined8 *) puVar8[4];
        } while (puVar8 != (undefined8 *) 0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_14074d01d:
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = *puVar8;
    *(undefined4 *) (puVar2 + 1) = *(undefined4 *) (puVar8 + 1);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, puVar2, iVar3);
    puVar8 = (undefined8 *) *puVar5;
    while (puVar8 != puVar5) {
        puVar2 = (undefined8 *) *puVar8;
        FUN_14018b900(puVar8, 0);
        puVar8 = puVar2;
    }
    *puVar5 = puVar5;
    puVar5[1] = puVar5;
    FUN_14018b900(puVar5, 0);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14074d090(longlong param_1) {
    uint uVar1;
    undefined4 uVar2;
    double dVar3;
    double dVar4;
    longlong lVar5;
    longlong * plVar6;
    longlong lVar7;
    byte bVar8;
    double dVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    undefined8 uVar13;
    double *pdVar14;
    ulonglong uVar15;
    undefined8 * puVar16;
    undefined8 * puVar17;
    ulonglong uVar18;
    ulonglong uVar19;
    longlong lVar20;
    undefined8 local_res8;
    double local_res10;

    uVar19 = 0;
    uVar18 = uVar19;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar15 = uVar19;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar15 * 8) + 400) ==
                param_1) {
                uVar18 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar15 * 8);
                break;
            }
            uVar15 = (ulonglong) ((int) uVar15 + 1);
        } while (uVar15 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    iVar10 = FUN_1400f26a0(uVar18 + 0x180, 1, 5);
    lVar7 = DAT_140c65c28;
    puVar16 = (undefined8 *) (*(longlong *) (*(longlong *) (uVar18 + 400) + 0x18) + 0x10);
    puVar17 = &DAT_140a12138;
    if (puVar16 < *(undefined8 **) (*(longlong *) (uVar18 + 400) + 0x10)) {
        puVar17 = puVar16;
    }
    if ((*(int *) (puVar17 + 1) == 0) || ((*(int *) (puVar17 + 1) == 1 && (*(int *) puVar17 == 0)))) {
        bVar8 = 0;
    } else {
        bVar8 = 1;
    }
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar17 = *(undefined8 **) (param_1 + 0x10);
    uVar13 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar17 + 1) = 5;
    *puVar17 = uVar13;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar11 = FUN_1400578c0();
    uVar18 = uVar19;
    lVar20 = DAT_140c65c28;
    if (*(longlong *) (lVar7 + 0x108) != 0) {
        do {
            if (iVar10 <= (int) uVar18) break;
            dVar3 = *(double *) (lVar20 + 0x70);
            uVar1 = *(uint *) (*(longlong *) (lVar7 + 0x100) + uVar19 * 4);
            dVar9 = dVar3;
            dVar4 = *(double *) ((longlong) dVar3 + 8);
            while (dVar4 != 0.0) {
                if (*(uint *) ((longlong) dVar4 + 0x20) < uVar1) {
                    dVar4 = *(double *) ((longlong) dVar4 + 0x18);
                } else {
                    dVar9 = dVar4;
                    dVar4 = *(double *) ((longlong) dVar4 + 0x10);
                }
            }
            if ((dVar9 == dVar3) || (uVar1 < *(uint *) ((longlong) dVar9 + 0x20))) {
                local_res10 = dVar3;
                pdVar14 = &local_res10;
            } else {
                local_res8 = dVar9;
                pdVar14 = (double *) &local_res8;
            }
            if ((((*pdVar14 != dVar3) && (lVar5 = *(longlong *) ((longlong) *pdVar14 + 0x28), lVar5 != 0))
                 && (plVar6 = *(longlong **) (lVar5 + 0x28), plVar6 != (longlong *) 0x0)) &&
                ((uint) bVar8 == (*(uint *) (*plVar6 + 0xc) >> 2 & 1))) {
                iVar12 = FUN_1404332a0();
                if (iVar12 != 0) {
                    FUN_1400fb470();
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                }
                uVar18 = (ulonglong) ((int) uVar18 + 1);
                lVar20 = DAT_140c65c28;
            }
            uVar19 = uVar19 + 1;
        } while (uVar19 < *(ulonglong *) (lVar7 + 0x108));
    }
    lVar7 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
    if (iVar11 - 1U < *(uint *) (lVar7 + 0x38)) {
        puVar17 = (undefined8 *) ((longlong) (iVar11 + -1) * 0x10 + *(longlong *) (lVar7 + 0x18));
    } else {
        local_res8 = (double) iVar11;
        if (local_res8 == 0.0) {
            puVar17 = *(undefined8 **) (lVar7 + 0x20);
        } else {
            local_res8._4_4_ = (int) ((ulonglong) local_res8 >> 0x20);
            puVar17 = (undefined8 *)
                    (*(longlong *) (lVar7 + 0x20) +
                     ((longlong) (ulonglong) (uint) (local_res8._4_4_ + (int) local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar7 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar17 + 3) == 3) && (local_res8 == (double) puVar17[2])) goto LAB_14074d312;
            puVar17 = (undefined8 *) puVar17[4];
        } while (puVar17 != (undefined8 *) 0x0);
        puVar17 = &DAT_140a12138;
    }
    LAB_14074d312:
    puVar16 = *(undefined8 **) (param_1 + 0x10);
    *puVar16 = *puVar17;
    uVar2 = *(undefined4 *) (puVar17 + 1);
    *(undefined4 *) (puVar16 + 1) = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, uVar2, iVar11);
    return 1;
}


undefined8 FUN_14074d350(longlong param_1) {
    int iVar1;
    double *pdVar2;
    undefined4 uVar3;
    longlong lVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8);
                goto LAB_14074d398;
            }
            uVar5 = (ulonglong) ((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar4 = 0;
    LAB_14074d398:
    uVar3 = FUN_1400f26a0(lVar4 + 0x180, 1);
    lVar4 = FUN_1401e98e0(uVar3);
    if (lVar4 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = *(int *) (lVar4 + 0xc);
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14074d6e0(longlong param_1) {
    int iVar1;
    undefined8 * puVar2;
    double *pdVar3;
    longlong lVar4;
    undefined * puVar5;
    undefined8 uVar6;
    undefined * puVar7;
    undefined * puVar8;
    int iVar9;
    undefined local_28[8];
    undefined * local_20;
    undefined8 local_18;

    local_20 = (undefined *) FUN_14018b280();
    local_18 = 0;
    *local_20 = 0;
    *(undefined8 *) (local_20 + 8) = 0;
    *(undefined **) (local_20 + 0x10) = local_20;
    *(undefined **) (local_20 + 0x18) = local_20;
    FUN_140644800(0, local_28);
    iVar9 = 1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar2 + 1) = 5;
    *puVar2 = uVar6;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    puVar8 = *(undefined **) (local_20 + 0x10);
    if (puVar8 != local_20) {
        do {
            pdVar3 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar3 + 1) = 3;
            *pdVar3 = (double) iVar9;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar2 = *(undefined8 **) (param_1 + 0x10);
            uVar6 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar2 + 1) = 5;
            *puVar2 = uVar6;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            iVar1 = *(int *) (puVar8 + 0x20);
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar2 = *(undefined8 **) (param_1 + 0x10);
            uVar6 = FUN_140062650(param_1, &DAT_1409f95c4, 3);
            *(undefined4 *) (puVar2 + 1) = 4;
            *puVar2 = uVar6;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            pdVar3 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar3 + 1) = 3;
            *pdVar3 = (double) iVar1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            uVar6 = FUN_1400580e0(param_1, 0xfffffffd);
            FUN_14005ea50(param_1, uVar6, *(longlong *) (param_1 + 0x10) + -0x20,
                          *(longlong *) (param_1 + 0x10) + -0x10);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
            FUN_1400f0090(param_1);
            lVar4 = *(longlong *) (param_1 + 0x10);
            FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
            puVar7 = *(undefined **) (puVar8 + 0x18);
            if (puVar7 == (undefined *) 0x0) {
                puVar7 = *(undefined **) (puVar8 + 8);
                if (puVar8 == *(undefined **) (puVar7 + 0x18)) {
                    do {
                        puVar8 = puVar7;
                        puVar7 = *(undefined **) (puVar8 + 8);
                    } while (puVar8 == *(undefined **) (puVar7 + 0x18));
                }
                if (*(undefined **) (puVar8 + 0x18) != puVar7) {
                    puVar8 = puVar7;
                }
            } else {
                for (puVar5 = *(undefined **) (puVar7 + 0x10); puVar8 = puVar7, puVar5 != (undefined *) 0x0;
                     puVar5 = *(undefined **) (puVar5 + 0x10)) {
                    puVar7 = puVar5;
                }
            }
            iVar9 = iVar9 + 1;
        } while (puVar8 != local_20);
    }
    FUN_140008410(local_28);
    FUN_14018b900(local_20, 0);
    return 1;
}



// WARNING: Removing unreachable block (ram,0x00014074da2a)
// WARNING: Removing unreachable block (ram,0x00014074da40)
// WARNING: Removing unreachable block (ram,0x00014074da70)
// WARNING: Removing unreachable block (ram,0x00014074da7d)
// WARNING: Removing unreachable block (ram,0x00014074da8a)
// WARNING: Removing unreachable block (ram,0x00014074da51)
// WARNING: Removing unreachable block (ram,0x00014074da99)
// WARNING: Removing unreachable block (ram,0x00014074daa5)
// WARNING: Removing unreachable block (ram,0x00014074dab3)
// WARNING: Removing unreachable block (ram,0x00014074dabb)
// WARNING: Removing unreachable block (ram,0x00014074db3e)
// WARNING: Removing unreachable block (ram,0x00014074db42)
// WARNING: Removing unreachable block (ram,0x00014074db4b)
// WARNING: Removing unreachable block (ram,0x00014074db59)
// WARNING: Removing unreachable block (ram,0x00014074db61)
// WARNING: Removing unreachable block (ram,0x00014074db35)
// WARNING: Removing unreachable block (ram,0x00014074db89)
// WARNING: Removing unreachable block (ram,0x00014074db98)
// WARNING: Removing unreachable block (ram,0x00014074db9f)
// WARNING: Removing unreachable block (ram,0x00014074dc4b)
// WARNING: Removing unreachable block (ram,0x00014074dc57)
// WARNING: Removing unreachable block (ram,0x00014074dd51)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14074d930(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
    undefined8 * puVar3;
    int iVar4;
    undefined8 uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    undefined8 * puVar8;
    double dVar9;
    int local_res8;
    int iStackX12;

    uVar7 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar6 = uVar7;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar6 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong) ((int) uVar6 + 1);
        } while (uVar6 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar7 + 0x180, 1);
    FUN_140644ee0();
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **) (param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar8 + 1) = 5;
    *puVar8 = uVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar4 = FUN_1400578c0();
    lVar2 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
    if (iVar4 - 1U < *(uint *) (lVar2 + 0x38)) {
        puVar8 = (undefined8 *) ((longlong) (iVar4 + -1) * 0x10 + *(longlong *) (lVar2 + 0x18));
    } else {
        dVar9 = (double) iVar4;
        if (dVar9 == 0.0) {
            puVar8 = *(undefined8 **) (lVar2 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar9 >> 0x20);
            local_res8 = SUB84(dVar9, 0);
            puVar8 = (undefined8 *)
                    (*(longlong *) (lVar2 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar8 + 3) == 3) && (dVar9 == (double) puVar8[2])) goto LAB_14074dd23;
            puVar8 = (undefined8 *) puVar8[4];
        } while (puVar8 != (undefined8 *) 0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_14074dd23:
    puVar3 = *(undefined8 **) (param_1 + 0x10);
    *puVar3 = *puVar8;
    uVar1 = *(undefined4 *) (puVar8 + 1);
    *(undefined4 *) (puVar3 + 1) = uVar1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, uVar1, iVar4);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14074e4f0(longlong param_1) {
    uint uVar1;
    double *pdVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    undefined4 uVar6;
    undefined8 uVar7;
    uint * puVar8;
    undefined8 * puVar9;
    undefined * puVar10;
    undefined * puVar11;
    int *piVar12;
    longlong lVar13;
    longlong lVar14;
    undefined * puVar15;
    undefined8 * puVar16;
    undefined * puVar17;
    longlong lVar18;
    ulonglong uVar19;
    ulonglong uVar20;
    longlong lVar21;
    double dVar22;
    undefined4 uVar23;
    undefined4 uVar24;
    int local_res8;
    int iStackX12;
    longlong local_res18;
    ulonglong local_res20;
    int local_118;
    int iStack276;
    undefined local_110[8];
    undefined * local_108;
    undefined8 local_100;
    ulonglong local_f0;
    longlong local_e8;
    longlong local_e0;
    undefined * *local_d8;
    int local_d0;
    longlong local_c8;
    undefined4 local_c0;
    undefined * *local_b8;
    int local_b0;
    longlong local_a8;
    undefined4 local_a0;
    undefined * *local_98;
    int local_90;
    longlong local_88;
    undefined4 local_80;
    undefined local_78[8];
    longlong local_70;

    local_a0 = 1;
    local_b8 = &PTR_FUN_140b569f0;
    local_a8 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar16 = *(undefined8 **) (param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar16 + 1) = 5;
    *puVar16 = uVar7;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar3 = FUN_1400578c0();
    uVar20 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar20 * 8) + 400) ==
                param_1)
                break;
            uVar20 = (ulonglong) ((int) uVar20 + 1);
        } while (uVar20 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    local_b0 = iVar3;
    local_108 = (undefined *) FUN_14018b280(0x28);
    local_100 = 0;
    *local_108 = 0;
    *(undefined8 *) (local_108 + 8) = 0;
    *(undefined **) (local_108 + 0x10) = local_108;
    *(undefined **) (local_108 + 0x18) = local_108;
    FUN_1406449a0();
    uVar23 = 0;
    uVar24 = 0;
    local_e8 = DAT_140c65c28;
    local_f0 = 0;
    puVar17 = local_108;
    lVar13 = param_1;
    if (*(longlong *) (DAT_140c65c28 + 0x98) != 0) {
        do {
            uVar20 = local_f0;
            lVar13 = *(longlong *) (local_e8 + 0x90);
            local_e0 = lVar13;
            if (*(undefined **) (puVar17 + 8) != (undefined *) 0x0) {
                uVar1 = *(uint *) (lVar13 + local_f0 * 0x18);
                puVar10 = *(undefined **) (puVar17 + 8);
                puVar15 = puVar17;
                do {
                    if (*(uint *) (puVar10 + 0x20) < uVar1) {
                        puVar11 = *(undefined **) (puVar10 + 0x18);
                    } else {
                        puVar11 = *(undefined **) (puVar10 + 0x10);
                        puVar15 = puVar10;
                    }
                    puVar10 = puVar11;
                } while (puVar11 != (undefined *) 0x0);
                if ((puVar15 != puVar17) && (*(uint *) (puVar15 + 0x20) <= uVar1)) {
                    if (DAT_140c63840 == (code *) 0x0) {
                        if ((_DAT_140c638bc != 0) || (iVar3 = FUN_1401e9680(), puVar17 = local_108, iVar3 < 0))
                            goto LAB_14074f0b4;
                        puVar8 = (uint *) (**(code * *)(*DAT_140c64768 + 0x18))(DAT_140c64768, uVar1);
                    } else {
                        puVar8 = (uint *) (*DAT_140c63840)(&PTR_u_AchievementCategory_140a69170, uVar1,
                                                           DAT_140c63858);
                    }
                    puVar17 = local_108;
                    if (puVar8 != (uint *) 0x0) {
                        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar16 = *(undefined8 **) (param_1 + 0x10);
                        uVar7 = FUN_14005c1b0(param_1, 0, 0);
                        *(undefined4 *) (puVar16 + 1) = 5;
                        *puVar16 = uVar7;
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        iVar3 = FUN_1400578c0(param_1);
                        uVar19 = (ulonglong) *puVar8;
                        puVar9 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), iVar3);
                        puVar16 = *(undefined8 **) (param_1 + 0x10);
                        *puVar16 = *puVar9;
                        *(undefined4 *) (puVar16 + 1) = *(undefined4 *) (puVar9 + 1);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1, puVar16, L"nCategoryId", uVar19 & 0xffffffff);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                        uVar7 = FUN_14034bdd0();
                        puVar9 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), iVar3);
                        puVar16 = *(undefined8 **) (param_1 + 0x10);
                        *puVar16 = *puVar9;
                        *(undefined4 *) (puVar16 + 1) = *(undefined4 *) (puVar9 + 1);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        FUN_1400f0870(param_1, puVar16, L"strCategoryName", uVar7);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                        local_98 = &PTR_FUN_140b569f0;
                        local_80 = 1;
                        local_88 = param_1;
                        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar16 = *(undefined8 **) (param_1 + 0x10);
                        uVar7 = FUN_14005c1b0(param_1, 0, 0);
                        *(undefined4 *) (puVar16 + 1) = 5;
                        *puVar16 = uVar7;
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        local_90 = FUN_1400578c0();
                        local_res20 = 0;
                        lVar14 = param_1;
                        if (*(longlong *) (lVar13 + 0x10 + uVar20 * 0x18) != 0) {
                            local_res18 = 0;
                            puVar17 = local_108;
                            do {
                                lVar14 = *(longlong *) (lVar13 + 8 + uVar20 * 0x18);
                                if (*(undefined **) (puVar17 + 8) != (undefined *) 0x0) {
                                    uVar1 = *(uint *) (local_res18 + lVar14);
                                    puVar10 = *(undefined **) (puVar17 + 8);
                                    puVar15 = puVar17;
                                    do {
                                        if (*(uint *) (puVar10 + 0x20) < uVar1) {
                                            puVar11 = *(undefined **) (puVar10 + 0x18);
                                        } else {
                                            puVar11 = *(undefined **) (puVar10 + 0x10);
                                            puVar15 = puVar10;
                                        }
                                        puVar10 = puVar11;
                                    } while (puVar11 != (undefined *) 0x0);
                                    if ((puVar15 != puVar17) && (*(uint *) (puVar15 + 0x20) <= uVar1)) {
                                        if (DAT_140c63840 == (code *) 0x0) {
                                            if ((_DAT_140c638bc != 0) ||
                                                (iVar4 = FUN_1401e9680(), puVar17 = local_108, iVar4 < 0))
                                                goto LAB_14074ee7a;
                                            puVar8 = (uint *) (**(code * *)(*DAT_140c64768 + 0x18))(DAT_140c64768,
                                                                                                    uVar1);
                                        } else {
                                            puVar8 = (uint *) (*DAT_140c63840)(&PTR_u_AchievementCategory_140a69170,
                                                                               uVar1,
                                                                               DAT_140c63858);
                                        }
                                        puVar17 = local_108;
                                        if (puVar8 != (uint *) 0x0) {
                                            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                                                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                                                FUN_14005e2c0(param_1);
                                            }
                                            puVar16 = *(undefined8 **) (param_1 + 0x10);
                                            uVar7 = FUN_14005c1b0(param_1, 0, 0);
                                            *(undefined4 *) (puVar16 + 1) = 5;
                                            *puVar16 = uVar7;
                                            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                                            iVar4 = FUN_1400578c0(param_1);
                                            uVar20 = (ulonglong) *puVar8;
                                            puVar9 = (undefined8 *)
                                                    FUN_14005c3c0(
                                                            *(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0),
                                                            iVar4);
                                            puVar16 = *(undefined8 **) (param_1 + 0x10);
                                            *puVar16 = *puVar9;
                                            *(undefined4 *) (puVar16 + 1) = *(undefined4 *) (puVar9 + 1);
                                            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                                            FUN_1400f06f0(param_1, puVar16, L"nGroupId", uVar20 & 0xffffffff);
                                            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                                            uVar7 = FUN_14034bdd0();
                                            puVar9 = (undefined8 *)
                                                    FUN_14005c3c0(
                                                            *(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0),
                                                            iVar4);
                                            puVar16 = *(undefined8 **) (param_1 + 0x10);
                                            *puVar16 = *puVar9;
                                            *(undefined4 *) (puVar16 + 1) = *(undefined4 *) (puVar9 + 1);
                                            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                                            FUN_1400f0870(param_1, puVar16, L"strGroupName", uVar7);
                                            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                                            local_d8 = &PTR_FUN_140b569f0;
                                            local_c0 = 1;
                                            local_c8 = param_1;
                                            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                                                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                                                FUN_14005e2c0(param_1);
                                            }
                                            puVar16 = *(undefined8 **) (param_1 + 0x10);
                                            uVar7 = FUN_14005c1b0(param_1, 0, 0);
                                            *(undefined4 *) (puVar16 + 1) = 5;
                                            *puVar16 = uVar7;
                                            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                                            local_d0 = FUN_1400578c0();
                                            uVar20 = 0;
                                            lVar13 = param_1;
                                            if (*(longlong *) (local_res18 + 0x10 + lVar14) != 0) {
                                                lVar21 = 0;
                                                puVar17 = local_108;
                                                do {
                                                    if (*(undefined **) (puVar17 + 8) != (undefined *) 0x0) {
                                                        uVar1 = *(uint *) (lVar21 +
                                                                           *(longlong *) (local_res18 + 8 + lVar14));
                                                        puVar10 = *(undefined **) (puVar17 + 8);
                                                        puVar15 = puVar17;
                                                        do {
                                                            if (*(uint *) (puVar10 + 0x20) < uVar1) {
                                                                puVar11 = *(undefined **) (puVar10 + 0x18);
                                                            } else {
                                                                puVar11 = *(undefined **) (puVar10 + 0x10);
                                                                puVar15 = puVar10;
                                                            }
                                                            puVar10 = puVar11;
                                                        } while (puVar11 != (undefined *) 0x0);
                                                        if ((puVar15 != puVar17) &&
                                                            (*(uint *) (puVar15 + 0x20) <= uVar1)) {
                                                            if (DAT_140c63840 == (code *) 0x0) {
                                                                if ((_DAT_140c638bc != 0) ||
                                                                    (iVar5 = FUN_1401e9680(), puVar17 = local_108,
                                                                            iVar5 < 0))
                                                                    goto LAB_14074ec45;
                                                                piVar12 = (int *) (**(code * *)(*DAT_140c64768 + 0x18))
                                                                        (DAT_140c64768, uVar1);
                                                            } else {
                                                                piVar12 = (int *) (*DAT_140c63840)(&
                                                                                                           PTR_u_AchievementCategory_140a69170,
                                                                                                   uVar1);
                                                            }
                                                            puVar17 = local_108;
                                                            if (piVar12 != (int *) 0x0) {
                                                                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) +
                                                                                    0x70) <=
                                                                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) +
                                                                                    0x78)) {
                                                                    FUN_14005e2c0(param_1);
                                                                }
                                                                puVar16 = *(undefined8 **) (param_1 + 0x10);
                                                                uVar7 = FUN_14005c1b0(param_1, 0);
                                                                *(undefined4 *) (puVar16 + 1) = 5;
                                                                *puVar16 = uVar7;
                                                                *(longlong *) (param_1 + 0x10) =
                                                                        *(longlong *) (param_1 + 0x10) + 0x10;
                                                                uVar6 = FUN_1400578c0(param_1);
                                                                iVar5 = *piVar12;
                                                                puVar9 = (undefined8 *)
                                                                        FUN_14005c3c0(*(undefined8 *)
                                                                                              (*(longlong *) (param_1 + 0x20) + 0xa0),
                                                                                      uVar6
                                                                        );
                                                                puVar16 = *(undefined8 **) (param_1 + 0x10);
                                                                *puVar16 = *puVar9;
                                                                *(undefined4 *) (puVar16 + 1) = *(undefined4 *) (
                                                                        puVar9 + 1);
                                                                *(longlong *) (param_1 + 0x10) =
                                                                        *(longlong *) (param_1 + 0x10) + 0x10;
                                                                lVar13 = FUN_14018f0e0(local_78, L"nSubGroupId");
                                                                if (*(longlong *) (lVar13 + 8) == 0) {
                                                                    *(undefined4 *) (*(longlong *) (param_1 + 0x10) +
                                                                                     8) = 0;
                                                                    *(longlong *) (param_1 + 0x10) =
                                                                            *(longlong *) (param_1 + 0x10) + 0x10;
                                                                } else {
                                                                    lVar18 = -1;
                                                                    do {
                                                                        lVar18 = lVar18 + 1;
                                                                    } while (*(char *) (*(longlong *) (lVar13 + 8) +
                                                                                        lVar18) != '\0');
                                                                    FUN_140058710(param_1);
                                                                }
                                                                if (local_70 != 0) {
                                                                    FUN_14018b900(local_70, 0);
                                                                }
                                                                pdVar2 = *(double **) (param_1 + 0x10);
                                                                *(undefined4 *) (pdVar2 + 1) = 3;
                                                                *pdVar2 = (double) iVar5;
                                                                *(longlong *) (param_1 + 0x10) =
                                                                        *(longlong *) (param_1 + 0x10) + 0x10;
                                                                uVar7 = FUN_1400580e0(param_1, 0xfffffffd);
                                                                FUN_14005ea50(param_1, uVar7,
                                                                              *(longlong *) (param_1 + 0x10) + -0x20,
                                                                              *(longlong *) (param_1 + 0x10) + -0x10);
                                                                *(longlong *) (param_1 + 0x10) =
                                                                        (longlong)
                                                                                (&DAT_ffffffffffffffd0 +
                                                                                 *(longlong *) (param_1 + 0x10));
                                                                uVar7 = FUN_14034bdd0();
                                                                puVar9 = (undefined8 *)
                                                                        FUN_14005c3c0(*(undefined8 *)
                                                                                              (*(longlong *) (param_1 + 0x20) + 0xa0),
                                                                                      uVar6
                                                                        );
                                                                puVar16 = *(undefined8 **) (param_1 + 0x10);
                                                                *puVar16 = *puVar9;
                                                                *(undefined4 *) (puVar16 + 1) = *(undefined4 *) (
                                                                        puVar9 + 1);
                                                                *(longlong *) (param_1 + 0x10) =
                                                                        *(longlong *) (param_1 + 0x10) + 0x10;
                                                                FUN_1400f0870(param_1, puVar16, L"strSubGroupName",
                                                                              uVar7);
                                                                *(longlong *) (param_1 + 0x10) =
                                                                        *(longlong *) (param_1 + 0x10) + -0x10;
                                                                FUN_1400fb1d0(&local_d8, uVar6);
                                                                FUN_1400579e0();
                                                                puVar17 = local_108;
                                                            }
                                                        }
                                                    }
                                                    LAB_14074ec45:
                                                    uVar20 = uVar20 + 1;
                                                    lVar21 = lVar21 + 0x18;
                                                    lVar13 = local_c8;
                                                } while (uVar20 < *(ulonglong *) (local_res18 + 0x10 + lVar14));
                                            }
                                            iVar5 = local_d0;
                                            lVar14 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                                            if (iVar4 - 1U < *(uint *) (lVar14 + 0x38)) {
                                                puVar16 = (undefined8 *)
                                                        ((longlong) (iVar4 + -1) * 0x10 +
                                                         *(longlong *) (lVar14 + 0x18));
                                            } else {
                                                dVar22 = (double) iVar4;
                                                if (dVar22 == (double) CONCAT44(uVar24, uVar23)) {
                                                    puVar16 = *(undefined8 **) (lVar14 + 0x20);
                                                } else {
                                                    iStack276 = (int) ((ulonglong) dVar22 >> 0x20);
                                                    local_118 = SUB84(dVar22, 0);
                                                    puVar16 = (undefined8 *)
                                                            (*(longlong *) (lVar14 + 0x20) +
                                                             ((longlong) (ulonglong) (uint) (iStack276 + local_118) %
                                                              (longlong) (
                                                                      (1 << (*(byte *) (lVar14 + 0xb) & 0x3f)) - 1U |
                                                                      1)) *
                                                             0x28);
                                                }
                                                do {
                                                    if ((*(int *) (puVar16 + 3) == 3) &&
                                                        (dVar22 == (double) puVar16[2]))
                                                        goto LAB_14074ecf1;
                                                    puVar16 = (undefined8 *) puVar16[4];
                                                } while (puVar16 != (undefined8 *) 0x0);
                                                puVar16 = &DAT_140a12138;
                                            }
                                            LAB_14074ecf1:
                                            puVar9 = *(undefined8 **) (param_1 + 0x10);
                                            *puVar9 = *puVar16;
                                            *(undefined4 *) (puVar9 + 1) = *(undefined4 *) (puVar16 + 1);
                                            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                                            lVar14 = FUN_14018f0e0(local_78, L"tSubGroups");
                                            lVar14 = *(longlong *) (lVar14 + 8);
                                            if (lVar14 == 0) {
                                                *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                                            } else {
                                                lVar21 = -1;
                                                do {
                                                    lVar21 = lVar21 + 1;
                                                } while (*(char *) (lVar14 + lVar21) != '\0');
                                                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                                                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                                                    FUN_14005e2c0(param_1);
                                                }
                                                puVar16 = *(undefined8 **) (param_1 + 0x10);
                                                uVar7 = FUN_140062650(param_1, lVar14, lVar21);
                                                *(undefined4 *) (puVar16 + 1) = 4;
                                                *puVar16 = uVar7;
                                            }
                                            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                                            if (local_70 != 0) {
                                                FUN_14018b900(local_70, 0);
                                            }
                                            lVar14 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                                            if (iVar5 - 1U < *(uint *) (lVar14 + 0x38)) {
                                                puVar16 = (undefined8 *)
                                                        ((longlong) (iVar5 + -1) * 0x10 +
                                                         *(longlong *) (lVar14 + 0x18));
                                            } else {
                                                dVar22 = (double) iVar5;
                                                if (dVar22 == (double) CONCAT44(uVar24, uVar23)) {
                                                    puVar16 = *(undefined8 **) (lVar14 + 0x20);
                                                } else {
                                                    iStackX12 = (int) ((ulonglong) dVar22 >> 0x20);
                                                    local_res8 = SUB84(dVar22, 0);
                                                    puVar16 = (undefined8 *)
                                                            (*(longlong *) (lVar14 + 0x20) +
                                                             ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                                                              (longlong) (
                                                                      (1 << (*(byte *) (lVar14 + 0xb) & 0x3f)) - 1U |
                                                                      1)) *
                                                             0x28);
                                                }
                                                do {
                                                    if ((*(int *) (puVar16 + 3) == 3) &&
                                                        (dVar22 == (double) puVar16[2]))
                                                        goto LAB_14074ee0d;
                                                    puVar16 = (undefined8 *) puVar16[4];
                                                } while (puVar16 != (undefined8 *) 0x0);
                                                puVar16 = &DAT_140a12138;
                                            }
                                            LAB_14074ee0d:
                                            puVar9 = *(undefined8 **) (param_1 + 0x10);
                                            *puVar9 = *puVar16;
                                            *(undefined4 *) (puVar9 + 1) = *(undefined4 *) (puVar16 + 1);
                                            lVar14 = *(longlong *) (param_1 + 0x10);
                                            *(longlong *) (param_1 + 0x10) = lVar14 + 0x10;
                                            FUN_14005ea50(param_1, lVar14 + -0x20);
                                            *(longlong *) (param_1 + 0x10) =
                                                    (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
                                            FUN_1400fb1d0(&local_98, iVar4);
                                            if (lVar13 != 0) {
                                                FUN_1400579e0(lVar13);
                                            }
                                            FUN_1400579e0();
                                            puVar17 = local_108;
                                            lVar13 = local_e0;
                                        }
                                    }
                                }
                                LAB_14074ee7a:
                                local_res20 = local_res20 + 1;
                                local_res18 = local_res18 + 0x18;
                                lVar14 = local_88;
                                uVar20 = local_f0;
                            } while (local_res20 < *(ulonglong *) (lVar13 + 0x10 + local_f0 * 0x18));
                        }
                        iVar4 = local_90;
                        lVar13 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                        if (iVar3 - 1U < *(uint *) (lVar13 + 0x38)) {
                            puVar16 = (undefined8 *) ((longlong) (iVar3 + -1) * 0x10 + *(longlong *) (lVar13 + 0x18));
                        } else {
                            dVar22 = (double) iVar3;
                            if (dVar22 == (double) CONCAT44(uVar24, uVar23)) {
                                puVar16 = *(undefined8 **) (lVar13 + 0x20);
                            } else {
                                iStackX12 = (int) ((ulonglong) dVar22 >> 0x20);
                                local_res8 = SUB84(dVar22, 0);
                                puVar16 = (undefined8 *)
                                        (*(longlong *) (lVar13 + 0x20) +
                                         ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                                          (longlong) ((1 << (*(byte *) (lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *) (puVar16 + 3) == 3) && (dVar22 == (double) puVar16[2]))
                                    goto LAB_14074ef2e;
                                puVar16 = (undefined8 *) puVar16[4];
                            } while (puVar16 != (undefined8 *) 0x0);
                            puVar16 = &DAT_140a12138;
                        }
                        LAB_14074ef2e:
                        puVar9 = *(undefined8 **) (param_1 + 0x10);
                        *puVar9 = *puVar16;
                        *(undefined4 *) (puVar9 + 1) = *(undefined4 *) (puVar16 + 1);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        lVar13 = FUN_14018f0e0(local_78, L"tGroups");
                        lVar13 = *(longlong *) (lVar13 + 8);
                        if (lVar13 == 0) {
                            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                        } else {
                            lVar21 = -1;
                            do {
                                lVar21 = lVar21 + 1;
                            } while (*(char *) (lVar13 + lVar21) != '\0');
                            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                                FUN_14005e2c0(param_1);
                            }
                            puVar16 = *(undefined8 **) (param_1 + 0x10);
                            uVar7 = FUN_140062650(param_1, lVar13, lVar21);
                            *(undefined4 *) (puVar16 + 1) = 4;
                            *puVar16 = uVar7;
                        }
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        if (local_70 != 0) {
                            FUN_14018b900(local_70, 0);
                        }
                        lVar13 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
                        if (iVar4 - 1U < *(uint *) (lVar13 + 0x38)) {
                            puVar16 = (undefined8 *) ((longlong) (iVar4 + -1) * 0x10 + *(longlong *) (lVar13 + 0x18));
                        } else {
                            dVar22 = (double) iVar4;
                            if (dVar22 == (double) CONCAT44(uVar24, uVar23)) {
                                puVar16 = *(undefined8 **) (lVar13 + 0x20);
                            } else {
                                iStackX12 = (int) ((ulonglong) dVar22 >> 0x20);
                                local_res8 = SUB84(dVar22, 0);
                                puVar16 = (undefined8 *)
                                        (*(longlong *) (lVar13 + 0x20) +
                                         ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                                          (longlong) ((1 << (*(byte *) (lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                            }
                            do {
                                if ((*(int *) (puVar16 + 3) == 3) && (dVar22 == (double) puVar16[2]))
                                    goto LAB_14074f04d;
                                puVar16 = (undefined8 *) puVar16[4];
                            } while (puVar16 != (undefined8 *) 0x0);
                            puVar16 = &DAT_140a12138;
                        }
                        LAB_14074f04d:
                        puVar9 = *(undefined8 **) (param_1 + 0x10);
                        *puVar9 = *puVar16;
                        *(undefined4 *) (puVar9 + 1) = *(undefined4 *) (puVar16 + 1);
                        lVar13 = *(longlong *) (param_1 + 0x10);
                        *(longlong *) (param_1 + 0x10) = lVar13 + 0x10;
                        FUN_14005ea50(param_1, lVar13 + -0x20);
                        *(longlong *) (param_1 + 0x10) =
                                (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
                        FUN_1400fb1d0(&local_b8, iVar3);
                        if (lVar14 != 0) {
                            FUN_1400579e0(lVar14);
                        }
                        FUN_1400579e0(param_1);
                        puVar17 = local_108;
                    }
                }
            }
            LAB_14074f0b4:
            local_f0 = local_f0 + 1;
            lVar13 = local_a8;
            iVar3 = local_b0;
        } while (local_f0 < *(ulonglong *) (local_e8 + 0x98));
    }
    lVar14 = *(longlong *) (*(longlong *) (lVar13 + 0x20) + 0xa0);
    if (iVar3 - 1U < *(uint *) (lVar14 + 0x38)) {
        puVar16 = (undefined8 *) ((longlong) (iVar3 + -1) * 0x10 + *(longlong *) (lVar14 + 0x18));
    } else {
        dVar22 = (double) iVar3;
        if (dVar22 == (double) CONCAT44(uVar24, uVar23)) {
            puVar16 = *(undefined8 **) (lVar14 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar22 >> 0x20);
            local_res8 = SUB84(dVar22, 0);
            puVar16 = (undefined8 *)
                    (*(longlong *) (lVar14 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar14 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar16 + 3) == 3) && (dVar22 == (double) puVar16[2])) goto LAB_14074f18d;
            puVar16 = (undefined8 *) puVar16[4];
        } while (puVar16 != (undefined8 *) 0x0);
        puVar16 = &DAT_140a12138;
    }
    LAB_14074f18d:
    puVar9 = *(undefined8 **) (lVar13 + 0x10);
    *puVar9 = *puVar16;
    *(undefined4 *) (puVar9 + 1) = *(undefined4 *) (puVar16 + 1);
    *(longlong *) (lVar13 + 0x10) = *(longlong *) (lVar13 + 0x10) + 0x10;
    FUN_140008410(local_110);
    FUN_14018b900(local_108, 0);
    FUN_1400579e0(lVar13);
    return 1;
}


undefined4 FUN_14074ff00(longlong param_1) {
    undefined8 * puVar1;
    undefined8 uVar2;
    longlong lVar3;

    FUN_140057020(param_1, "AchievementsLib", &PTR_s_GetAchievements_140b754c0);
    FUN_140058710(param_1, "CodeEnumAchievementCategory", 0x1b);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    lVar3 = 0x102;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    return 1;
}


void FUN_14074ffe0(longlong param_1, undefined8 *param_2, undefined8 *param_3) {
    undefined8 * puVar1;
    ulonglong uVar2;
    undefined8 * puVar3;
    longlong lVar4;
    longlong lVar5;
    undefined8 * puVar6;
    undefined8 * puVar7;

    puVar7 = *(undefined8 **) (param_1 + 0x10);
    if (puVar7 == *(undefined8 **) (param_1 + 0x18)) {
        lVar5 = (longlong) puVar7 - *(longlong *) (param_1 + 8) >> 4;
        lVar4 = lVar5 * 2;
        if (lVar5 == 0) {
            lVar4 = 1;
        }
        uVar2 = FUN_14018a3e0(lVar4 << 4);
        puVar3 = (undefined8 *) FUN_14018b280(uVar2 & 0xfffffffffffffff0, 0);
        puVar6 = puVar3;
        for (puVar7 = *(undefined8 **) (param_1 + 8); puVar7 != param_2; puVar7 = puVar7 + 2) {
            if (puVar6 != (undefined8 *) 0x0) {
                *puVar6 = *puVar7;
                puVar6[1] = puVar7[1];
            }
            puVar6 = puVar6 + 2;
        }
        if (puVar6 != (undefined8 *) 0x0) {
            *puVar6 = *param_3;
            puVar6[1] = param_3[1];
        }
        puVar1 = *(undefined8 **) (param_1 + 0x10);
        puVar7 = puVar6 + 2;
        if (param_2 != puVar1) {
            param_2 = (undefined8 *) ((longlong) param_2 + (longlong) puVar7 + (-0x10 - (longlong) puVar6));
            do {
                if (puVar7 != (undefined8 *) 0x0) {
                    *puVar7 = *param_2;
                    puVar7[1] = param_2[1];
                }
                param_2 = param_2 + 2;
                puVar7 = puVar7 + 2;
            } while (param_2 != puVar1);
        }
        if (*(longlong *) (param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *) (param_1 + 8), 0);
        }
        *(undefined8 **) (param_1 + 8) = puVar3;
        *(undefined8 **) (param_1 + 0x10) = puVar7;
        *(ulonglong *) (param_1 + 0x18) = (uVar2 & 0xfffffffffffffff0) + (longlong) puVar3;
        return;
    }
    if (puVar7 != (undefined8 *) 0x0) {
        *puVar7 = puVar7[-2];
        puVar7[1] = puVar7[-1];
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar4 = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar5 = lVar4 - (longlong) param_2 >> 4;
    puVar7 = (undefined8 *) (*(longlong *) (param_1 + 0x10) + -0x10);
    for (; 0 < lVar5; lVar5 = lVar5 + -1) {
        puVar7[-2] = *(undefined8 *) (lVar4 + -0x10);
        puVar7[-1] = *(undefined8 *) (lVar4 + -8);
        lVar4 = lVar4 + -0x10;
        puVar7 = puVar7 + -2;
    }
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    return;
}


void FUN_140750170(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;

    if (param_1 != param_2) {
        lVar2 = param_2 - param_1 >> 4;
        for (lVar1 = lVar2; lVar1 != 1; lVar1 = lVar1 >> 1) {
        }
        FUN_1405a3f80();
        if (lVar2 < 0x11) {
            FUN_1405a4130(param_1, param_2, &LAB_14074e100);
        } else {
            FUN_1405a4130(param_1, param_1 + 0x100, &LAB_14074e100);
            FUN_1405a4340(param_1 + 0x100, param_2);
        }
    }
    return;
}


undefined8 *FUN_140750220(undefined8 *param_1, longlong param_2) {
    double dVar1;
    int iVar2;
    longlong * plVar3;
    longlong lVar4;
    float fVar5;
    undefined8 local_28;
    undefined4 local_20;

    *(undefined4 *) (param_1 + 5) = 0x3f800000;
    *(undefined8 *) ((longlong) param_1 + 0x2c) = 0x3f800000;
    *(undefined4 *) ((longlong) param_1 + 0x24) = 0xffffffff;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *) (param_1 + 4) = 0;
    *(undefined8 *) ((longlong) param_1 + 0x34) = 0;
    *(undefined8 *) ((longlong) param_1 + 0x3c) = 0;
    *(undefined4 *) ((longlong) param_1 + 0x44) = 0;
    plVar3 = (longlong *) FUN_1400580e0(param_2, 0xffffffff);
    iVar2 = *(int *) (plVar3 + 1);
    if ((iVar2 == 5) || (iVar2 == 7)) {
        lVar4 = *(longlong *) (*plVar3 + 0x10);
    } else {
        lVar4 = *(longlong *) (*(longlong *) (param_2 + 0x20) + 0xe0 + (longlong) iVar2 * 8);
    }
    if (lVar4 != 0) {
        plVar3 = *(longlong **) (param_2 + 0x10);
        *plVar3 = lVar4;
        *(undefined4 *) (plVar3 + 1) = 5;
        *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    }
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fTime", 5);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(int *) param_1 = (int) (longlong) ((float) dVar1 * 1000.0);
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fScale", 6);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) (param_1 + 7) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) ((longlong) param_1 + 0x2c) = (float) dVar1;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "nColor", 6);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x3c) = 1;
        iVar2 = FUN_140056d60(param_2, 0xffffffff);
        *(int *) ((longlong) param_1 + 0x24) = iVar2 + -0x1000000;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fAlpha", 6);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) (param_1 + 8) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) (param_1 + 5) = (float) dVar1;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fRotation", 9);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x44) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) (param_1 + 6) = (float) dVar1;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fVelocityDirection", 0x12);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x34) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) ((longlong) param_1 + 4) = (float) dVar1;
        *(float *) (param_1 + 1) = (float) dVar1;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fVelocityDirectionRange", 0x17);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    fVar5 = 0.5;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x34) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) (param_1 + 1) = (float) dVar1 * fVar5 + *(float *) (param_1 + 1);
        *(float *) ((longlong) param_1 + 4) = *(float *) ((longlong) param_1 + 4) - (float) dVar1 * fVar5;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fVelocityMagnitude", 0x12);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x34) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) ((longlong) param_1 + 0xc) = (float) dVar1;
        *(float *) (param_1 + 2) = (float) dVar1;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fVelocityMagnitudeRange", 0x17);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x34) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) (param_1 + 2) = (float) dVar1 * fVar5 + *(float *) (param_1 + 2);
        *(float *) ((longlong) param_1 + 0xc) = *(float *) ((longlong) param_1 + 0xc) - (float) dVar1 * fVar5;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fAccelerationDirection", 0x16);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x34) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) ((longlong) param_1 + 0x14) = (float) dVar1;
        *(float *) (param_1 + 3) = (float) dVar1;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fAccelerationDirectionRange", 0x1b);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x34) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) (param_1 + 3) = (float) dVar1 * fVar5 + *(float *) (param_1 + 3);
        *(float *) ((longlong) param_1 + 0x14) =
                *(float *) ((longlong) param_1 + 0x14) - (float) dVar1 * fVar5;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fAccelerationMagnitude", 0x16);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x34) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) ((longlong) param_1 + 0x1c) = (float) dVar1;
        *(float *) (param_1 + 4) = (float) dVar1;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    lVar4 = *(longlong *) (param_2 + 0x10);
    local_28 = FUN_140062650(param_2, "fAccelerationMagnitudeRange", 0x1b);
    local_20 = 4;
    FUN_14005e8e0(param_2, lVar4 + -0x10, &local_28, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    if ((*(undefined **) (param_2 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_2 + 0x10) + -8) != 0)) {
        *(undefined4 *) ((longlong) param_1 + 0x34) = 1;
        dVar1 = (double) FUN_140056c40(param_2, 0xffffffff);
        *(float *) (param_1 + 4) = (float) dVar1 * fVar5 + *(float *) (param_1 + 4);
        *(float *) ((longlong) param_1 + 0x1c) =
                *(float *) ((longlong) param_1 + 0x1c) - (float) dVar1 * fVar5;
    }
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + -0x10;
    return param_1;
}


void FUN_140750940(undefined8 param_1, undefined8 param_2, undefined4 param_3, longlong param_4,
                   undefined4 param_5) {
    undefined4 * puVar1;
    longlong lVar2;
    undefined auStack152[32];
    undefined8 local_78;
    undefined8 uStack112;
    undefined local_68[16];
    undefined4 local_58;
    undefined4 uStack84;
    undefined4 uStack80;
    undefined8 uStack76;
    undefined8 uStack68;
    undefined4 uStack60;
    undefined4 uStack56;
    undefined4 local_34;
    ulonglong local_28;

    local_28 = DAT_140c0f7b0 ^ (ulonglong) auStack152;
    puVar1 = *(undefined4 **) (param_4 + 0x10);
    local_78 = 0;
    uStack112 = 0;
    local_68 = ZEXT816(0);
    local_58 = 0;
    uStack80 = 0x3f800000;
    uStack76 = 0x3f800000;
    uStack84 = 0xffffffff;
    uStack68 = 0;
    uStack60 = 0;
    uStack56 = 0;
    local_34 = 0;
    if (puVar1 == *(undefined4 **) (param_4 + 0x18)) {
        FUN_140753d70(param_4, puVar1, &local_78);
    } else {
        if (puVar1 != (undefined4 *) 0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            *(undefined (*)[16]) (puVar1 + 4) = ZEXT816(0);
            puVar1[8] = 0;
            puVar1[9] = 0xffffffff;
            puVar1[10] = 0x3f800000;
            puVar1[0xb] = 0x3f800000;
            puVar1[0xc] = 0;
            puVar1[0xd] = 0;
            puVar1[0xe] = 0;
            puVar1[0xf] = 0;
            *(undefined8 *) (puVar1 + 0x10) = 0;
        }
        *(longlong *) (param_4 + 0x10) = *(longlong *) (param_4 + 0x10) + 0x48;
    }
    lVar2 = (longlong)
            ((int) ((*(longlong *) (param_4 + 0x10) - *(longlong *) (param_4 + 8)) / 0x48) + -1);
    *(undefined4 *) (*(longlong *) (param_4 + 8) + 0x40 + lVar2 * 0x48) = 1;
    *(undefined4 *) (*(longlong *) (param_4 + 8) + lVar2 * 0x48) = param_5;
    *(undefined4 *) (*(longlong *) (param_4 + 8) + 0x28 + lVar2 * 0x48) = param_3;
    FUN_1407db4f0(local_28 ^ (ulonglong) auStack152);
    return;
}


void FUN_140750a60(longlong param_1, undefined4 param_2) {
    undefined4 * puVar1;
    longlong lVar2;
    undefined auStack136[32];
    undefined8 local_68;
    undefined8 uStack96;
    undefined local_58[16];
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined8 uStack60;
    undefined8 uStack52;
    undefined4 uStack44;
    undefined4 uStack40;
    undefined4 local_24;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack136;
    puVar1 = *(undefined4 **) (param_1 + 0x10);
    local_68 = 0;
    uStack96 = 0;
    local_58 = ZEXT816(0);
    local_48 = 0;
    uStack64 = 0x3f800000;
    uStack60 = 0x3f800000;
    uStack68 = 0xffffffff;
    uStack52 = 0;
    uStack44 = 0;
    uStack40 = 0;
    local_24 = 0;
    if (puVar1 == *(undefined4 **) (param_1 + 0x18)) {
        FUN_140753d70(param_1, puVar1, &local_68);
    } else {
        if (puVar1 != (undefined4 *) 0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            *(undefined (*)[16]) (puVar1 + 4) = ZEXT816(0);
            puVar1[8] = 0;
            puVar1[9] = 0xffffffff;
            puVar1[10] = 0x3f800000;
            puVar1[0xb] = 0x3f800000;
            puVar1[0xc] = 0;
            puVar1[0xd] = 0;
            puVar1[0xe] = 0;
            puVar1[0xf] = 0;
            *(undefined8 *) (puVar1 + 0x10) = 0;
        }
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x48;
    }
    lVar2 = (longlong)
            ((int) ((*(longlong *) (param_1 + 0x10) - *(longlong *) (param_1 + 8)) / 0x48) + -1);
    *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x34 + lVar2 * 0x48) = 1;
    *(undefined4 *) (*(longlong *) (param_1 + 8) + lVar2 * 0x48) = param_2;
    *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x18 + lVar2 * 0x48) = 0;
    *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x14 + lVar2 * 0x48) = 0;
    *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x20 + lVar2 * 0x48) = 0;
    *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x1c + lVar2 * 0x48) = 0;
    *(undefined4 *) (*(longlong *) (param_1 + 8) + 8 + lVar2 * 0x48) = 0;
    *(undefined4 *) (*(longlong *) (param_1 + 8) + 4 + lVar2 * 0x48) = 0;
    *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x10 + lVar2 * 0x48) = 0;
    *(undefined4 *) (*(longlong *) (param_1 + 8) + 0xc + lVar2 * 0x48) = 0;
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack136);
    return;
}


void FUN_140750bb0(longlong param_1, int param_2, undefined4 param_3) {
    undefined4 * puVar1;
    longlong lVar2;
    undefined auStack136[32];
    undefined8 local_68;
    undefined8 uStack96;
    undefined local_58[16];
    undefined4 local_48;
    undefined4 uStack68;
    undefined4 uStack64;
    undefined8 uStack60;
    undefined8 uStack52;
    undefined4 uStack44;
    undefined4 uStack40;
    undefined4 local_24;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack136;
    puVar1 = *(undefined4 **) (param_1 + 0x10);
    local_68 = 0;
    uStack96 = 0;
    local_58 = ZEXT816(0);
    local_48 = 0;
    uStack64 = 0x3f800000;
    uStack60 = 0x3f800000;
    uStack68 = 0xffffffff;
    uStack52 = 0;
    uStack44 = 0;
    uStack40 = 0;
    local_24 = 0;
    if (puVar1 == *(undefined4 **) (param_1 + 0x18)) {
        FUN_140753d70(param_1, puVar1, &local_68);
    } else {
        if (puVar1 != (undefined4 *) 0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar1[3] = 0;
            *(undefined (*)[16]) (puVar1 + 4) = ZEXT816(0);
            puVar1[8] = 0;
            puVar1[9] = 0xffffffff;
            puVar1[10] = 0x3f800000;
            puVar1[0xb] = 0x3f800000;
            puVar1[0xc] = 0;
            puVar1[0xd] = 0;
            puVar1[0xe] = 0;
            puVar1[0xf] = 0;
            *(undefined8 *) (puVar1 + 0x10) = 0;
        }
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x48;
    }
    lVar2 = (longlong)
            ((int) ((*(longlong *) (param_1 + 0x10) - *(longlong *) (param_1 + 8)) / 0x48) + -1);
    *(undefined4 *) (*(longlong *) (param_1 + 8) + lVar2 * 0x48) = param_3;
    if (param_2 < 1) {
        *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x28 + lVar2 * 0x48) = 0x3f800000;
    } else {
        *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x40 + lVar2 * 0x48) = 1;
        *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x28 + lVar2 * 0x48) = 0;
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack136);
    return;
}


undefined8 FUN_140751fa0(longlong param_1) {
    int iVar1;
    longlong * plVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined8 * puVar5;
    undefined4 * puVar6;
    longlong * plVar7;
    longlong lVar8;
    longlong * plVar9;
    undefined8 * puVar10;
    undefined8 * puVar11;
    double dVar12;
    ulonglong uVar13;
    undefined8 local_18;
    undefined4 local_10;

    puVar5 = (undefined8 *) FUN_14018b280(0x100, 0);
    puVar10 = (undefined8 *) 0x0;
    puVar11 = puVar10;
    if (puVar5 != (undefined8 *) 0x0) {
        FUN_1407e4830(puVar5, 0, 0xd0);
        FUN_1407e4830(puVar5, 0, 0x100);
        puVar11 = puVar5;
    }
    FUN_1407e4830(puVar11, 0, 0x100);
    puVar6 = (undefined4 *) FUN_1406622c0(param_1, 1);
    puVar5 = puVar10;
    if (puVar6 != (undefined4 *) 0x0) {
        puVar5 = (undefined8 *) FUN_1403d90d0(DAT_140c65898, *puVar6);
    }
    *(undefined4 *) (puVar11 + 0x1a) = 0;
    if (puVar5 != (undefined8 *) 0x0) {
        *(undefined4 *) (puVar11 + 0x1a) = *(undefined4 *) (puVar5 + 1);
    }
    *(undefined4 *) puVar11 = 0;
    *(undefined4 *) ((longlong) puVar11 + 0xd4) = 0;
    *(undefined4 *) (puVar11 + 0x18) = 0x96;
    if (puVar5 == (undefined8 *) 0x0) {
        *(undefined4 *) (puVar11 + 0x1a) = *(undefined4 *) (*(longlong *) (DAT_140c65898 + 0x6490) + 8);
    }
    plVar2 = *(longlong **) (param_1 + 0x10);
    plVar7 = (longlong *) (*(longlong *) (param_1 + 0x18) + 0x10);
    plVar9 = &DAT_140a12138;
    if (plVar7 < plVar2) {
        plVar9 = plVar7;
    }
    iVar1 = *(int *) (plVar9 + 1);
    if ((iVar1 == 5) || (iVar1 == 7)) {
        lVar8 = *(longlong *) (*plVar9 + 0x10);
    } else {
        lVar8 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xe0 + (longlong) iVar1 * 8);
    }
    if (lVar8 != 0) {
        *plVar2 = lVar8;
        *(undefined4 *) (plVar2 + 1) = 5;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    }
    lVar8 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "eEffect", 7);
    local_10 = 4;
    FUN_14005e8e0(param_1, lVar8 + -0x10, &local_18, *(undefined8 *) (param_1 + 0x10));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if ((*(undefined **) (param_1 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_1 + 0x10) + -8) != 0)) {
        uVar3 = FUN_140056d60(param_1, 0xffffffff);
        puVar11[0x13] = (&PTR_u_Art_FX_Model_Cast_Fire_Flame_OGE_140b4bc10)[uVar3];
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    lVar8 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "nDuration", 9);
    local_10 = 4;
    FUN_14005e8e0(param_1, lVar8 + -0x10, &local_18, *(undefined8 *) (param_1 + 0x10));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if ((*(undefined **) (param_1 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_1 + 0x10) + -8) != 0)) {
        uVar4 = FUN_140056d60(param_1, 0xffffffff);
        *(undefined4 *) ((longlong) puVar11 + 4) = uVar4;
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    lVar8 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "fDuration", 9);
    local_10 = 4;
    FUN_14005e8e0(param_1, lVar8 + -0x10, &local_18, *(undefined8 *) (param_1 + 0x10));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if ((*(undefined **) (param_1 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_1 + 0x10) + -8) != 0)) {
        dVar12 = (double) FUN_140056c40(param_1, 0xffffffff);
        *(int *) ((longlong) puVar11 + 4) = (int) ((float) dVar12 * 1000.0);
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    local_18 = FUN_140062650(param_1, "eLocation", 9);
    local_10 = 4;
    FUN_14005e8e0();
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if ((*(undefined **) (param_1 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_1 + 0x10) + -8) != 0)) {
        uVar4 = FUN_140056d60();
        *(undefined4 *) ((longlong) puVar11 + 0xdc) = uVar4;
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    iVar1 = *(int *) (puVar11 + 0x1a);
    uVar13 = 0;
    FUN_1400035b0();
    if (((iVar1 == 0) || (lVar8 = FUN_1403d90d0(), lVar8 == 0)) ||
        (*(longlong *) (lVar8 + 0x16e8) != 0)) {
        FUN_1400035b0();
        uVar3 = DAT_140c8af30 + 1 & 0x3fffffff;
        if ((uVar3 == 0) || (DAT_140c8af30 = uVar3, uVar3 == 0x3fffffff)) {
            DAT_140c8af30 = 1;
        }
        FUN_140576bf0(uVar3, puVar11);
        FUN_14018b900(puVar11, 0);
    } else {
        puVar5 = (undefined8 *) FUN_14018b280(0x40);
        if (puVar5 != (undefined8 *) 0x0) {
            *puVar5 = puVar11;
            *(undefined4 *) (puVar5 + 1) = 0;
            *(undefined4 *) ((longlong) puVar5 + 0xc) = 5;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[6] = 0;
            puVar5[7] = 0;
            puVar10 = puVar5;
        }
        plVar2 = (longlong *) (lVar8 + 0x5b8);
        if (puVar10[2] == 0) {
            puVar10[2] = plVar2;
            plVar9 = puVar10 + 3;
            *plVar9 = *plVar2;
            *plVar2 = (longlong) puVar10;
            if (*plVar9 != 0) {
                *(longlong **) (*plVar9 + 0x10) = plVar9;
            }
        }
        FUN_1400035b0(0x4b, 3, 0, iVar1, *(undefined4 *) (puVar11 + 5), uVar13 & 0xffffffff00000000, 0, 0);
    }
    return 0;
}


undefined8 FUN_1407523f0(longlong param_1) {
    double *pdVar1;
    int iVar2;
    undefined8 uVar3;
    undefined local_28[8];
    longlong local_20;

    uVar3 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_28, uVar3);
    iVar2 = FUN_1403f6f80();
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_140752460(longlong param_1) {
    short sVar1;
    double *pdVar2;
    int iVar3;
    undefined8 uVar4;
    longlong lVar5;
    undefined local_48[8];
    undefined8 local_40;
    undefined8 local_38;
    undefined8 local_30;
    undefined local_28[8];
    short *local_20;

    uVar4 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_28, uVar4);
    lVar5 = 0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    sVar1 = *local_20;
    while (sVar1 != 0) {
        lVar5 = lVar5 + 1;
        sVar1 = local_20[lVar5];
    }
    FUN_14001c1b0(local_48, local_20, local_20 + lVar5);
    iVar3 = FUN_1403f6830();
    pdVar2 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar2 + 1) = 3;
    *pdVar2 = (double) iVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_14018b900(local_20, 0);
    return 1;
}


undefined8 FUN_140752500(longlong param_1) {
    longlong lVar1;
    longlong * plVar2;
    undefined uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    int iVar7;
    undefined8 * puVar8;
    undefined8 * puVar9;

    uVar4 = FUN_140056d60(param_1, 1);
    uVar5 = FUN_140056d60(param_1, 2);
    uVar6 = FUN_140056d60(param_1, 3);
    puVar8 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x30);
    puVar9 = &DAT_140a12138;
    if (puVar8 < *(undefined8 **) (param_1 + 0x10)) {
        puVar9 = puVar8;
    }
    uVar3 = 0;
    if ((*(int *) (puVar9 + 1) != 0) && ((*(int *) (puVar9 + 1) != 1 || (*(int *) puVar9 != 0)))) {
        uVar3 = 1;
    }
    for (lVar1 = *(longlong *) (DAT_140c65898 + 0x6f30); lVar1 != 0;
         lVar1 = *(longlong *) (lVar1 + 0x60)) {
        plVar2 = *(longlong **) (lVar1 + 0x16e8);
        if (((plVar2 != (longlong *) 0x0) &&
             (iVar7 = (**(code * *)(*plVar2 + 0x350))(plVar2, 1), iVar7 != 0)) &&
            (iVar7 = (**(code * *)(**(longlong **) (lVar1 + 0x16e8) + 0x350))
                    (*(longlong **) (lVar1 + 0x16e8), 0xe), iVar7 != 0)) {
            FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "DamageOrHealingDone", "UUiiibS",
                          *(undefined4 *) (*(longlong *) (DAT_140c65898 + 0x6490) + 8),
                          *(undefined4 *) (lVar1 + 8), uVar4, uVar5, uVar6, uVar3, &DAT_1409f95f4);
        }
    }
    return 0;
}


undefined8 FUN_140752650(undefined8 param_1) {
    DAT_140c1e6c4 = FUN_140056d60(param_1, 1);
    return 0;
}


undefined8 FUN_140752670(undefined8 param_1) {
    DAT_140c1e6a4 = FUN_140056d60(param_1, 1);
    return 0;
}


undefined8 FUN_140752690(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 uVar3;
    undefined8 local_38;
    undefined4 local_30;

    FUN_140057020(param_1, "CombatFloater", &PTR_s_ShowTextFloater_140b755a0);
    local_38 = FUN_140062650(param_1, "CombatFloater", 0xd);
    local_30 = 4;
    FUN_14005e8e0(param_1, param_1 + 0x78, &local_38, *(undefined8 *) (param_1 + 0x10));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "CodeEnumFloaterLocation", 0x17);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, &DAT_1409f961c, 3);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, &DAT_140b4b858, 4);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Chest", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, &DAT_140b4b848, 4);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Bottom", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumFloaterCollisionMode", 0x1c);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "IgnoreCollision", 0xf);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Horizontal", 10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Vertical", 8);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumFloaterEffect", 0x15);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "Flames", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "BluishWhite", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Sparks", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Spiral", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Cloud", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Splotches", 9);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "SlashBlood", 10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Impact", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "SplatBlood", 10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Helix", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ShadowFire", 10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, &DAT_140b4b904, 4);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Stars", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumExpReason", 0x11);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "Invalid", 7);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0xbff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, &DAT_140b4b8d8, 4);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Cheat", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "KillCreature", 0xc);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Quest", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "ClusterBonus", 0xc);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Spell", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Exploration", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "QuestEpisodeCompletion", 0x16);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PathMission", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PathEpisode", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "KillPerformance", 0xf);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4024000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "MultiKill", 9);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4026000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "KillingSpree", 0xc);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4028000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "TelegraphInterrupt", 0x12);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402a000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "TelegraphEvade", 0xe);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Momentum", 8);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x402e000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Rested", 6);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4030000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PublicEvent", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4031000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PeriodicQuest", 0xd);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4032000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumCombatMomentum", 0x16);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "Impulse", 7);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4037000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "KillingPerformance", 0x12);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4038000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "KillChain", 9);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4039000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Evade", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x403a000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Interrupt", 9);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x403b000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CCBreak", 7);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x403c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumCCStateApplyRulesResult", 0x1f);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, &DAT_1409f9654, 2);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "InvalidCCState", 0xe);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "NoTargetSpecified", 0x11);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Target_Immune", 0xd);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Target_InfiniteInterruptArmor", 0x1d);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Target_InterruptArmorReduced", 0x1c);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Target_InterruptArmorBlocked", 0x1c);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Stacking_DoesNotStack", 0x15);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Stacking_ShorterDuration", 0x18);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "DiminishingReturns_TriggerCap", 0x1d);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar3 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar3, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar2 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    local_38 = FUN_140062650(param_1, "CombatFloater", 0xd);
    local_30 = 4;
    FUN_14005ea50(param_1, param_1 + 0x78, &local_38, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return 1;
}


void FUN_140753d70(longlong param_1, undefined4 *param_2, undefined4 *param_3) {
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
    ulonglong uVar17;
    longlong lVar18;
    longlong lVar19;
    undefined8 uVar20;
    longlong lVar21;

    lVar21 = *(longlong *) (param_1 + 0x10);
    if (lVar21 != *(longlong *) (param_1 + 0x18)) {
        FUN_1403d8660(lVar21, lVar21 + -0x48);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x48;
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
        uVar20 = *(undefined8 *) (param_3 + 0x10);
        FUN_140753f10(param_2, *(longlong *) (param_1 + 0x10) + -0x90,
                      *(longlong *) (param_1 + 0x10) + -0x48);
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
        *(undefined8 *) (param_2 + 0x10) = uVar20;
        return;
    }
    lVar21 = (lVar21 - *(longlong *) (param_1 + 8)) / 0x48;
    if (lVar21 == 0) {
        lVar21 = 1;
    } else {
        lVar21 = lVar21 * 2;
    }
    uVar17 = FUN_14018a3e0(lVar21 * 0x48);
    lVar21 = (uVar17 / 0x48) * 0x48;
    lVar18 = FUN_14018b280(lVar21, 0);
    lVar19 = FUN_1403d84e0(*(undefined8 *) (param_1 + 8), param_2, lVar18);
    FUN_1403d8660(lVar19, param_3);
    uVar20 = FUN_1403d84e0(param_2, *(undefined8 *) (param_1 + 0x10), lVar19 + 0x48);
    if (*(longlong *) (param_1 + 8) != 0) {
        FUN_14018b900(*(longlong *) (param_1 + 8), 0);
    }
    *(longlong *) (param_1 + 8) = lVar18;
    *(undefined8 *) (param_1 + 0x10) = uVar20;
    *(longlong *) (param_1 + 0x18) = lVar21 + lVar18;
    return;
}


undefined4 *FUN_140753f10(longlong param_1, longlong param_2, undefined4 *param_3) {
    longlong lVar1;

    lVar1 = (param_2 - param_1) / 0x48;
    for (; 0 < lVar1; lVar1 = lVar1 + -1) {
        param_3[-0x12] = *(undefined4 *) (param_2 + -0x48);
        param_3[-0x11] = *(undefined4 *) (param_2 + -0x44);
        param_3[-0x10] = *(undefined4 *) (param_2 + -0x40);
        param_3[-0xf] = *(undefined4 *) (param_2 + -0x3c);
        param_3[-0xe] = *(undefined4 *) (param_2 + -0x38);
        param_3[-0xd] = *(undefined4 *) (param_2 + -0x34);
        param_3[-0xc] = *(undefined4 *) (&DAT_ffffffffffffffd0 + param_2);
        param_3[-0xb] = *(undefined4 *) (param_2 + -0x2c);
        param_3[-10] = *(undefined4 *) (param_2 + -0x28);
        param_3[-9] = *(undefined4 *) (param_2 + -0x24);
        param_3[-8] = *(undefined4 *) (param_2 + -0x20);
        param_3[-7] = *(undefined4 *) (param_2 + -0x1c);
        param_3[-6] = *(undefined4 *) (&DAT_ffffffffffffffe8 + param_2);
        param_3[-5] = *(undefined4 *) (param_2 + -0x14);
        param_3[-4] = *(undefined4 *) (param_2 + -0x10);
        param_3[-3] = *(undefined4 *) (param_2 + -0xc);
        param_3[-2] = *(undefined4 *) (param_2 + -8);
        param_3[-1] = *(undefined4 *) (param_2 + -4);
        param_2 = param_2 + -0x48;
        param_3 = param_3 + -0x12;
    }
    return param_3;
}


undefined8 FUN_140753ff0(longlong param_1) {
    double *pdVar1;
    undefined8 * puVar2;
    int iVar3;
    undefined4 uVar4;
    undefined8 * puVar5;
    longlong * plVar6;
    undefined8 uVar7;
    undefined8 * puVar8;
    longlong lVar9;
    longlong * plVar10;
    longlong lVar11;
    int iVar12;
    longlong lVar13;
    char *pcVar14;
    double extraout_XMM0_Qa;
    float fVar15;
    undefined4 local_res8;
    undefined8 local_78;
    undefined4 local_70;
    undefined4 uStack108;
    undefined8 local_68;
    undefined local_58[8];
    longlong local_50;

    plVar6 = *(longlong **) (param_1 + 0x10);
    plVar10 = &DAT_140a12138;
    if (*(longlong **) (param_1 + 0x18) < plVar6) {
        plVar10 = *(longlong **) (param_1 + 0x18);
    }
    iVar12 = *(int *) (plVar10 + 1);
    if ((iVar12 == 5) || (iVar12 == 7)) {
        lVar11 = *(longlong *) (*plVar10 + 0x10);
    } else {
        lVar11 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xe0 + (longlong) iVar12 * 8);
    }
    if (lVar11 != 0) {
        *plVar6 = lVar11;
        *(undefined4 *) (plVar6 + 1) = 5;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    }
    lVar11 = *(longlong *) (param_1 + 0x10);
    local_res8 = 1;
    local_78 = FUN_140062650(param_1, "iWindowType", 0xb);
    local_70 = 4;
    FUN_14005e8e0(param_1, lVar11 + -0x10, &local_78, *(undefined8 *) (param_1 + 0x10));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if ((*(undefined **) (param_1 + 0x10) == &DAT_140a12148) ||
        (*(int *) (*(undefined **) (param_1 + 0x10) + -8) != 0)) {
        local_res8 = FUN_140056d60(param_1, 0xffffffff);
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar5 = (undefined8 *) FUN_14018b280(0x30);
    *puVar5 = puVar5;
    puVar5[1] = puVar5;
    lVar11 = *(longlong *) (param_1 + 0x10);
    local_78 = FUN_140062650(param_1, "tLines", 6);
    local_70 = 4;
    FUN_14005e8e0(param_1, lVar11 + -0x10, &local_78, *(undefined8 *) (param_1 + 0x10));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar12 = 1;
    do {
        pdVar1 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar1 + 1) = 3;
        *pdVar1 = (double) iVar12;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        lVar11 = *(longlong *) (param_1 + 0x10) + -0x10;
        FUN_14005e8e0(param_1, *(longlong *) (param_1 + 0x10) + -0x20, lVar11, lVar11);
        lVar11 = *(longlong *) (param_1 + 0x10);
        plVar6 = (longlong *) (lVar11 + -0x10);
        if ((plVar6 != &DAT_140a12138) && (*(int *) (lVar11 + -8) == 0)) {
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
            lVar11 = *(longlong *) (param_1 + 0x10);
            fVar15 = 0.0;
            local_78 = FUN_140062650(param_1, "nDisplayLength", 0xe);
            local_70 = 4;
            FUN_14005e8e0(param_1, lVar11 + -0x10, &local_78, *(undefined8 *) (param_1 + 0x10));
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            iVar12 = 1;
            if ((*(undefined **) (param_1 + 0x10) == &DAT_140a12148) ||
                (*(int *) (*(undefined **) (param_1 + 0x10) + -8) != 0)) {
                FUN_140056c40(param_1, 0xffffffff);
                fVar15 = (float) extraout_XMM0_Qa;
            }
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            lVar11 = *(longlong *) (*(longlong *) (DAT_140c65898 + 0x7340) + 400);
            if (*(ulonglong *) (*(longlong *) (lVar11 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (lVar11 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar11);
            }
            puVar8 = *(undefined8 **) (lVar11 + 0x10);
            uVar7 = FUN_14005c1b0(lVar11, 0, 0);
            *(undefined4 *) (puVar8 + 1) = 5;
            *puVar8 = uVar7;
            *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
            for (puVar8 = (undefined8 *) *puVar5; puVar8 != puVar5; puVar8 = (undefined8 *) *puVar8) {
                pdVar1 = *(double **) (lVar11 + 0x10);
                *(undefined4 *) (pdVar1 + 1) = 3;
                *pdVar1 = (double) iVar12;
                *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
                lVar9 = FUN_14018f0e0(local_58, puVar8[3]);
                lVar9 = *(longlong *) (lVar9 + 8);
                if (lVar9 == 0) {
                    *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
                } else {
                    lVar13 = -1;
                    do {
                        lVar13 = lVar13 + 1;
                    } while (*(char *) (lVar9 + lVar13) != '\0');
                    if (*(ulonglong *) (*(longlong *) (lVar11 + 0x20) + 0x70) <=
                        *(ulonglong *) (*(longlong *) (lVar11 + 0x20) + 0x78)) {
                        FUN_14005e2c0(lVar11);
                    }
                    puVar2 = *(undefined8 **) (lVar11 + 0x10);
                    uVar7 = FUN_140062650(lVar11, lVar9, lVar13);
                    *(undefined4 *) (puVar2 + 1) = 4;
                    *puVar2 = uVar7;
                }
                *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
                if (local_50 != 0) {
                    FUN_14018b900(local_50, 0);
                }
                lVar9 = *(longlong *) (lVar11 + 0x10);
                FUN_14005ea50(lVar11, &DAT_ffffffffffffffd0 + lVar9, lVar9 + -0x20, lVar9 + -0x10);
                *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
                iVar12 = iVar12 + 1;
            }
            uVar4 = FUN_1400578c0(lVar11);
            FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "MessageManager_DisplayStoryPanel",
                          &DAT_1409f968c, local_res8, uVar4, (double) fVar15);
            FUN_1400579e0(lVar11);
            puVar8 = (undefined8 *) *puVar5;
            while (puVar8 != puVar5) {
                puVar2 = (undefined8 *) *puVar8;
                if (puVar8[3] != 0) {
                    FUN_14018b900(puVar8[3], 0);
                }
                FUN_14018b900(puVar8, 0);
                puVar8 = puVar2;
            }
            *puVar5 = puVar5;
            puVar5[1] = puVar5;
            FUN_14018b900(puVar5, 0);
            return 0;
        }
        if (*(int *) (lVar11 + -8) == 4) {
            LAB_1407541d2:
            lVar11 = *plVar6 + 0x20;
            if (lVar11 == 0) goto LAB_1407541db;
        } else {
            iVar3 = FUN_14005e620(param_1, plVar6);
            lVar11 = 0;
            if (iVar3 != 0) {
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                plVar6 = (longlong *) (*(longlong *) (param_1 + 0x10) + -0x10);
                goto LAB_1407541d2;
            }
            LAB_1407541db:
            if ((*(undefined **) (param_1 + 0x10) == &DAT_140a12148) ||
                (iVar3 = *(int *) (*(undefined **) (param_1 + 0x10) + -8), iVar3 == -1)) {
                pcVar14 = s_no_value_140c1dc88;
            } else {
                pcVar14 = (&PTR_DAT_140a123b0)[iVar3];
            }
            uVar7 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, s_string_140c1de94, pcVar14);
            FUN_140056570(param_1, 0xffffffff, uVar7);
        }
        FUN_14018f2d0(local_58, lVar11);
        plVar6 = (longlong *) (*(longlong *) (param_1 + 0x10) + -0x10);
        if (*(int *) (*(longlong *) (param_1 + 0x10) + -8) == 4) {
            LAB_140754270:
            lVar11 = *plVar6 + 0x20;
            if (lVar11 == 0) goto LAB_140754279;
        } else {
            iVar3 = FUN_14005e620(param_1, plVar6);
            lVar11 = 0;
            if (iVar3 != 0) {
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                plVar6 = (longlong *) (*(longlong *) (param_1 + 0x10) + -0x10);
                goto LAB_140754270;
            }
            LAB_140754279:
            if ((*(undefined **) (param_1 + 0x10) == &DAT_140a12148) ||
                (iVar3 = *(int *) (*(undefined **) (param_1 + 0x10) + -8), iVar3 == -1)) {
                pcVar14 = s_no_value_140c1dc88;
            } else {
                pcVar14 = (&PTR_DAT_140a123b0)[iVar3];
            }
            uVar7 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, s_string_140c1de94, pcVar14);
            FUN_140056570(param_1, 0xffffffff, uVar7);
        }
        FUN_14018f2d0(&local_78, lVar11);
        puVar8 = (undefined8 *) FUN_14018b280(0x30);
        lVar11 = CONCAT44(uStack108, local_70);
        if (puVar8 + 2 != (undefined8 *) 0x0) {
            puVar8[3] = 0;
            puVar8[4] = 0;
            puVar8[5] = 0;
            FUN_14001c1b0(puVar8 + 2, lVar11, local_68);
        }
        *puVar8 = puVar5;
        puVar8[1] = puVar5[1];
        *(undefined8 **) puVar5[1] = puVar8;
        puVar5[1] = puVar8;
        if (lVar11 != 0) {
            FUN_14018b900(lVar11, 0);
        }
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        iVar12 = iVar12 + 1;
        if (local_50 != 0) {
            FUN_14018b900(local_50, 0);
        }
    } while (true);
}


undefined8 FUN_1407545d0(undefined8 param_1) {
    FUN_140057020(param_1, "MessageManagerLib", &PTR_s_DisplayStoryPanel_140b75630);
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_140754600(longlong param_1) {
    uint * puVar1;
    double *pdVar2;
    int iVar3;
    undefined4 uVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong * plVar8;
    undefined8 * puVar9;
    longlong lVar10;
    uint uVar11;
    undefined8 * puVar12;
    longlong lVar13;
    longlong lVar14;
    longlong lVar15;
    float fVar16;
    double dVar17;
    int local_res8;
    int iStackX12;
    longlong local_res10;
    longlong local_res18;
    undefined * *local_c8;
    undefined4 local_c0;
    undefined4 uStack188;
    longlong local_b8;
    undefined4 local_b0;
    undefined * *local_a8;
    int local_a0;
    longlong local_98;
    undefined4 local_90;
    undefined * *local_88;
    undefined4 local_80;
    longlong local_78;
    undefined4 local_70;
    undefined local_68[8];
    longlong local_60;

    uVar11 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar5 = 0;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1)
                break;
            uVar11 = uVar11 + 1;
            uVar5 = (ulonglong) uVar11;
        } while (uVar5 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    FUN_14048b2a0(local_68, DAT_140c659a8 + 0x30);
    local_a8 = &PTR_FUN_140b569f0;
    local_90 = 1;
    local_98 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar12 = *(undefined8 **) (param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar12 + 1) = 5;
    *puVar12 = uVar6;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    local_a0 = FUN_1400578c0(param_1);
    lVar13 = *(longlong *) (local_60 + 0x10);
    lVar7 = param_1;
    if (lVar13 != local_60) {
        do {
            puVar1 = *(uint **) (lVar13 + 0x28);
            uVar11 = *(uint *) (lVar13 + 0x20);
            if (DAT_140c63840 == (code *) 0x0) {
                if (_DAT_140c63b5c == 0) {
                    iVar3 = FUN_140202e80();
                    if (iVar3 < 0) {
                        lVar7 = 0;
                    } else {
                        lVar7 = (**(code * *)(*DAT_140c65030 + 0x18))(DAT_140c65030, uVar11);
                    }
                } else {
                    lVar7 = 0;
                }
            } else {
                lVar7 = (*DAT_140c63840)(&PTR_u_Hazard_140a6a670, uVar11, DAT_140c63858);
            }
            lVar15 = *(longlong *) (DAT_140c659a8 + 0x10);
            lVar14 = lVar15;
            lVar10 = *(longlong *) (lVar15 + 8);
            while (lVar10 != 0) {
                if (*(uint *) (lVar10 + 0x20) < uVar11) {
                    lVar10 = *(longlong *) (lVar10 + 0x18);
                } else {
                    lVar14 = lVar10;
                    lVar10 = *(longlong *) (lVar10 + 0x10);
                }
            }
            if ((lVar14 == lVar15) || (uVar11 < *(uint *) (lVar14 + 0x20))) {
                local_res18 = lVar15;
                plVar8 = &local_res18;
            } else {
                local_res10 = lVar14;
                plVar8 = &local_res10;
            }
            if (*plVar8 == *(longlong *) (DAT_140c659a8 + 0x10)) {
                lVar15 = 0;
            } else {
                lVar15 = *(longlong *) (*plVar8 + 0x28);
            }
            if (((puVar1 != (uint *) 0x0) && (lVar15 != 0)) && (lVar7 != 0)) {
                local_88 = &PTR_FUN_140b569f0;
                local_70 = 1;
                local_78 = param_1;
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar12 = *(undefined8 **) (param_1 + 0x10);
                uVar6 = FUN_14005c1b0(param_1, 0, 0);
                *(undefined4 *) (puVar12 + 1) = 5;
                *puVar12 = uVar6;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                uVar4 = FUN_1400578c0(param_1);
                uVar5 = (ulonglong) *puVar1;
                local_80 = uVar4;
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
                puVar12 = *(undefined8 **) (param_1 + 0x10);
                *puVar12 = *puVar9;
                *(undefined4 *) (puVar12 + 1) = *(undefined4 *) (puVar9 + 1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1, puVar12, &DAT_140b4bdc0, uVar5 & 0xffffffff);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                puVar12 = *(undefined8 **) (param_1 + 0x10);
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
                *puVar12 = *puVar9;
                *(undefined4 *) (puVar12 + 1) = *(undefined4 *) (puVar9 + 1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                FUN_1400f06f0(param_1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                puVar12 = *(undefined8 **) (param_1 + 0x10);
                fVar16 = (float) puVar1[2];
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
                *puVar12 = *puVar9;
                *(undefined4 *) (puVar12 + 1) = *(undefined4 *) (puVar9 + 1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(&local_c8, L"fMeterValue");
                if (*(longlong *) (lVar10 + 8) == 0) {
                    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                } else {
                    lVar14 = -1;
                    do {
                        lVar14 = lVar14 + 1;
                    } while (*(char *) (*(longlong *) (lVar10 + 8) + lVar14) != '\0');
                    FUN_140058710(param_1);
                }
                if (CONCAT44(uStack188, local_c0) != 0) {
                    FUN_14018b900(CONCAT44(uStack188, local_c0), 0);
                }
                pdVar2 = *(double **) (param_1 + 0x10);
                *(undefined4 *) (pdVar2 + 1) = 3;
                *pdVar2 = (double) fVar16;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                uVar6 = FUN_1400580e0(param_1, 0xfffffffd);
                FUN_14005ea50(param_1, uVar6, *(longlong *) (param_1 + 0x10) + -0x20,
                              *(longlong *) (param_1 + 0x10) + -0x10);
                *(longlong *) (param_1 + 0x10) =
                        (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
                puVar12 = *(undefined8 **) (param_1 + 0x10);
                fVar16 = (float) FUN_1404a60e0();
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
                *puVar12 = *puVar9;
                *(undefined4 *) (puVar12 + 1) = *(undefined4 *) (puVar9 + 1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                lVar10 = FUN_14018f0e0(&local_c8, L"fMaxValue");
                if (*(longlong *) (lVar10 + 8) == 0) {
                    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                } else {
                    lVar14 = -1;
                    do {
                        lVar14 = lVar14 + 1;
                    } while (*(char *) (*(longlong *) (lVar10 + 8) + lVar14) != '\0');
                    FUN_140058710(param_1);
                }
                if (CONCAT44(uStack188, local_c0) != 0) {
                    FUN_14018b900(CONCAT44(uStack188, local_c0), 0);
                }
                pdVar2 = *(double **) (param_1 + 0x10);
                *(undefined4 *) (pdVar2 + 1) = 3;
                *pdVar2 = (double) fVar16;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                uVar6 = FUN_1400580e0(param_1, 0xfffffffd);
                FUN_14005ea50(param_1, uVar6, *(longlong *) (param_1 + 0x10) + -0x20,
                              *(longlong *) (param_1 + 0x10) + -0x10);
                *(longlong *) (param_1 + 0x10) =
                        (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
                if (*(int *) (lVar7 + 8) != 0) {
                    FUN_14034bdd0();
                }
                puVar9 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), uVar4);
                puVar12 = *(undefined8 **) (param_1 + 0x10);
                *puVar12 = *puVar9;
                *(undefined4 *) (puVar12 + 1) = *(undefined4 *) (puVar9 + 1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                FUN_1400f0870(param_1, puVar12, L"strTooltip");
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                if ((*(byte *) (lVar15 + 0xc) & 0x80) != 0) {
                    local_c8 = &PTR_FUN_140b569f0;
                    local_b0 = 1;
                    local_b8 = param_1;
                    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar12 = *(undefined8 **) (param_1 + 0x10);
                    uVar6 = FUN_14005c1b0(param_1, 0, 0);
                    *(undefined4 *) (puVar12 + 1) = 5;
                    *puVar12 = uVar6;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    local_c0 = FUN_1400578c0(param_1);
                    lVar7 = 3;
                    do {
                        FUN_1400faf20(&local_c8);
                        lVar7 = lVar7 + -1;
                    } while (lVar7 != 0);
                    FUN_1400fb2a0(&local_88, L"tMeterThresholds", local_c0);
                    if (local_b8 != 0) {
                        FUN_1400579e0();
                    }
                }
                FUN_1400fb1d0(&local_a8);
                FUN_1400579e0();
            }
            lVar7 = *(longlong *) (lVar13 + 0x18);
            if (lVar7 == 0) {
                lVar7 = *(longlong *) (lVar13 + 8);
                if (lVar13 == *(longlong *) (lVar7 + 0x18)) {
                    do {
                        lVar13 = lVar7;
                        lVar7 = *(longlong *) (lVar13 + 8);
                    } while (lVar13 == *(longlong *) (lVar7 + 0x18));
                }
                if (*(longlong *) (lVar13 + 0x18) != lVar7) {
                    lVar13 = lVar7;
                }
            } else {
                for (lVar15 = *(longlong *) (lVar7 + 0x10); lVar13 = lVar7, lVar15 != 0;
                     lVar15 = *(longlong *) (lVar15 + 0x10)) {
                    lVar7 = lVar15;
                }
            }
            lVar7 = local_98;
        } while (lVar13 != local_60);
    }
    lVar13 = *(longlong *) (*(longlong *) (lVar7 + 0x20) + 0xa0);
    if (local_a0 - 1U < *(uint *) (lVar13 + 0x38)) {
        puVar12 = (undefined8 *) ((longlong) (local_a0 + -1) * 0x10 + *(longlong *) (lVar13 + 0x18));
    } else {
        dVar17 = (double) local_a0;
        if (dVar17 == 0.0) {
            puVar12 = *(undefined8 **) (lVar13 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar17 >> 0x20);
            local_res8 = SUB84(dVar17, 0);
            puVar12 = (undefined8 *)
                    (*(longlong *) (lVar13 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar13 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar12 + 3) == 3) && (dVar17 == (double) puVar12[2])) goto LAB_140754c8d;
            puVar12 = (undefined8 *) puVar12[4];
        } while (puVar12 != (undefined8 *) 0x0);
        puVar12 = &DAT_140a12138;
    }
    LAB_140754c8d:
    puVar9 = *(undefined8 **) (lVar7 + 0x10);
    *puVar9 = *puVar12;
    uVar4 = *(undefined4 *) (puVar12 + 1);
    *(undefined4 *) (puVar9 + 1) = uVar4;
    *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
    FUN_1400579e0(lVar7, uVar4, local_a0);
    FUN_140008410(local_68);
    FUN_14018b900(local_60, 0);
    return 1;
}


undefined8 FUN_140754ce0(longlong param_1) {
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined * puVar4;
    longlong lVar5;
    longlong local_res10;
    undefined local_28[8];
    longlong local_20;

    uVar3 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                lVar2 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_140754d28;
            }
            uVar3 = (ulonglong) ((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar2 = 0;
    LAB_140754d28:
    uVar1 = FUN_1400f26a0(lVar2 + 0x180);
    lVar2 = *(longlong *) (DAT_140c659a8 + 0x68);
    local_res10 = lVar2;
    lVar5 = *(longlong *) (lVar2 + 8);
    while (lVar5 != 0) {
        if (*(uint *) (lVar5 + 0x20) < uVar1) {
            lVar5 = *(longlong *) (lVar5 + 0x18);
        } else {
            local_res10 = lVar5;
            lVar5 = *(longlong *) (lVar5 + 0x10);
        }
    }
    if ((local_res10 == lVar2) || (uVar1 < *(uint *) (local_res10 + 0x20))) {
        local_res10 = lVar2;
    }
    puVar4 = &DAT_1409f0784;
    if (local_res10 != lVar2) {
        puVar4 = *(undefined **) (local_res10 + 0x28);
    }
    lVar2 = FUN_14018f0e0(local_28, puVar4);
    if (*(longlong *) (lVar2 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    } else {
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *) (*(longlong *) (lVar2 + 8) + lVar5) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_140755000(longlong param_1) {
    longlong lVar1;

    if ((DAT_140c65898 != 0) && (*(longlong **) (DAT_140c65898 + 0x7188) != (longlong *) 0x0)) {
        lVar1 = (**(code * *)(**(longlong **) (DAT_140c65898 + 0x7188) + 0x68))();
        if (lVar1 == 0) {
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
        FUN_140058900(param_1);
        FUN_1400eff50(param_1);
        FUN_14034bdd0();
        FUN_1400f0090(param_1);
        if (*(int *) (lVar1 + 4) == 3) {
            FUN_1400eff50(param_1);
        }
        return 1;
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1407550d0(void) {
    if ((DAT_140c65898 != 0) && (*(longlong **) (DAT_140c65898 + 0x7188) != (longlong *) 0x0)) {
        (**(code * *)(**(longlong **) (DAT_140c65898 + 0x7188) + 0x50))();
    }
    return 0;
}


undefined8 FUN_140755100(void) {
    if ((DAT_140c65898 != 0) && (*(longlong **) (DAT_140c65898 + 0x7188) != (longlong *) 0x0)) {
        (**(code * *)(**(longlong **) (DAT_140c65898 + 0x7188) + 0x58))();
    }
    return 0;
}


undefined4 FUN_140755130(longlong param_1) {
    undefined4 * puVar1;
    uint * puVar2;
    int iVar3;

    if (DAT_140c65898 == 0) {
        puVar1 = *(undefined4 **) (param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(longlong **) (DAT_140c65898 + 0x7188) == (longlong *) 0x0) {
        puVar1 = *(undefined4 **) (param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = (**(code * *)(**(longlong **) (DAT_140c65898 + 0x7188) + 0x48))();
    puVar2 = *(uint **) (param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint) (iVar3 != 0);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140755220(double *param_1) {
    longlong * plVar1;
    int iVar2;
    double *pdVar3;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    if ((DAT_140c65898 != 0) &&
        (plVar1 = *(longlong **) (DAT_140c65898 + 0x7188), plVar1 != (longlong *) 0x0)) {
        pdVar3 = (double *) &DAT_140a12138;
        if ((double *) param_1[3] < (double *) param_1[2]) {
            pdVar3 = (double *) param_1[3];
        }
        if (*(int *) (pdVar3 + 1) != 3) {
            if (*(int *) (pdVar3 + 1) != 4) {
                LAB_1407552a4:
                (**(code * *)(*plVar1 + 0x30))(plVar1, 0);
                return 0;
            }
            param_1 = local_res10;
            iVar2 = FUN_14005ac80((longlong) *pdVar3 + 0x20, param_1);
            if (iVar2 == 0) goto LAB_1407552a4;
            local_10 = 3;
            pdVar3 = &local_18;
            local_18 = local_res10[0];
        }
        (**(code * *)(*plVar1 + 0x30))
                (plVar1, (ulonglong) param_1 & 0xffffffff00000000 | (ulonglong) (uint) (int) *pdVar3);
    }
    return 0;
}


undefined8 FUN_1407552c0(longlong param_1) {
    double *pdVar1;
    uint uVar2;

    if ((DAT_140c65898 != 0) && (*(longlong **) (DAT_140c65898 + 0x7188) != (longlong *) 0x0)) {
        uVar2 = (**(code * *)(**(longlong **) (DAT_140c65898 + 0x7188) + 0x40))();
        pdVar1 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar1 + 1) = 3;
        *pdVar1 = (double) ((float) (ulonglong) uVar2 * 0.001);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 FUN_140755330(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    FUN_140057020(param_1, "CSIsLib", &PTR_s_GetActiveCSI_140b75690);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "ClientSideInteractionType_PressAndHold", 0x26);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "ClientSideInteractionType_RapidTapping", 0x26);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "ClientSideInteractionType_RapidTappingInverse", 0x2d);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "ClientSideInteractionType_PrecisionTapping", 0x2a);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "ClientSideInteractionType_Metronome", 0x23);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "ClientSideInteractionType_YesNo", 0x1f);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "ClientSideInteractionType_Memory", 0x20);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "ClientSideInteractionType_Keypad", 0x20);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140755660(longlong param_1, longlong *param_2) {
    ulonglong uVar1;
    short sVar2;
    undefined4 uVar3;
    undefined4 * puVar4;
    uint * puVar5;
    longlong lVar6;
    int iVar7;
    longlong lVar8;
    undefined8 uVar9;
    short *psVar10;
    undefined2 *puVar11;
    longlong lVar12;
    longlong * plVar13;
    longlong * plVar14;
    longlong * plVar15;
    uint uVar16;
    undefined local_158[8];
    longlong local_150;
    undefined2 *local_148;
    longlong local_140;
    undefined local_138[8];
    undefined2 *local_130;
    undefined2 *local_128;
    undefined2 *local_120;
    undefined * *local_118;
    undefined local_110[8];
    undefined2 *local_108;
    undefined2 *local_100;
    undefined local_58[16];
    undefined2 *local_48;

    if (param_2 == (longlong *) 0x0) {
        return 0;
    }
    lVar8 = FUN_14024db80(*(undefined4 *) (*param_2 + 0x28));
    if (lVar8 == 0) {
        return 0;
    }
    uVar3 = *(undefined4 *) *param_2;
    iVar7 = FUN_1404a7f50(DAT_140c659b0, uVar3);
    uVar9 = FUN_1404a8310(DAT_140c659b0, uVar3, 0);
    if ((iVar7 == 0) && ((int) uVar9 == 0)) {
        return uVar9;
    }
    lVar8 = *(longlong *) (DAT_140c65898 + 0x78);
    if (lVar8 == 0) {
        return 0;
    }
    FUN_140058900(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_1400eff50(param_1);
    FUN_14034bdd0();
    FUN_1400f0090(param_1);
    FUN_1404a86a0(DAT_140c659b0, uVar3);
    plVar14 = (longlong *) 0x0;
    FUN_1400eff50(param_1);
    if (iVar7 == 0) {
        FUN_14034bdd0();
        FUN_1400f0090(param_1);
        FUN_140058710(param_1, "bIsComplete", 0xb);
        puVar4 = *(undefined4 **) (param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar9, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        FUN_140058710(param_1, "bHasSound", 9);
        puVar4 = *(undefined4 **) (param_1 + 0x10);
        *puVar4 = 0;
        puVar4[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar9, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        if (*(int *) (*param_2 + 4) != 1) {
            FUN_14034bdd0();
            FUN_1400f0090(param_1);
            goto LAB_140755d2c;
        }
    } else {
        local_130 = (undefined2 *) FUN_14018b280(0x10);
        local_120 = local_130 + 8;
        plVar13 = plVar14;
        local_128 = local_130;
        if (local_130 != (undefined2 *) 0x0) {
            *local_130 = 0;
        }
        do {
            psVar10 = (short *) FUN_14034bdd0();
            if (psVar10 == (short *) 0x0) break;
            sVar2 = *psVar10;
            plVar15 = plVar14;
            while (sVar2 != 0) {
                plVar15 = (longlong *) ((longlong) plVar15 + 1);
                sVar2 = psVar10[(longlong) plVar15];
            }
            FUN_14001c310(local_138, psVar10, psVar10 + (longlong) plVar15);
            uVar16 = (int) plVar13 + 1;
            plVar13 = (longlong *) (ulonglong) uVar16;
        } while (uVar16 < 6);
        FUN_1400b6f30(&local_118);
        local_118 = &PTR_FUN_140b69230;
        local_48 = (undefined2 *) 0x0;
        local_58 = ZEXT816(0);
        puVar11 = (undefined2 *) FUN_14018b280(0x10);
        local_58 = CONCAT88(puVar11, puVar11);
        local_48 = puVar11 + 8;
        if (puVar11 != (undefined2 *) 0x0) {
            *puVar11 = 0;
        }
        lVar12 = FUN_14018b280(0x60);
        plVar13 = plVar14;
        if (lVar12 != 0) {
            plVar13 = (longlong *) FUN_1404db7e0(lVar12, lVar8);
        }
        local_150 = 0;
        local_148 = (undefined2 *) 0x0;
        local_140 = 0;
        plVar15 = plVar14;
        do {
            plVar15 = (longlong *) ((longlong) plVar15 + 1);
        } while (*(short *) (&DAT_140b0a7c8 + (longlong) plVar15 * 2) != 0);
        lVar12 = (longlong) plVar15 * 2 >> 1;
        uVar1 = lVar12 + 1;
        if (uVar1 < 0x7fffffffffffffff) {
            lVar6 = uVar1 * 2;
            local_148 = (undefined2 *) FUN_14018b280(lVar6, 0);
            local_140 = lVar6 + (longlong) local_148;
        }
        lVar6 = (longlong) local_148;
        lVar12 = lVar12 * 2;
        local_150 = (longlong) local_148;
        FUN_1407db590(local_148, &DAT_140b0a7c8, lVar12);
        local_148 = (undefined2 *) (lVar12 + lVar6);
        if (local_148 != (undefined2 *) 0x0) {
            *local_148 = 0;
        }
        FUN_1400b7480(&local_118, plVar13);
        (**(code * *)(*plVar13 + 0x48))(plVar13, local_158);
        if (local_150 != 0) {
            FUN_14018b900(local_150, 0);
        }
        puVar11 = local_130;
        FUN_14001c480(local_110, local_130, local_128);
        FUN_1400b7660(&local_118);
        FUN_1400f0090(param_1);
        FUN_140058710(param_1, "bIsComplete", 0xb);
        puVar4 = *(undefined4 **) (param_1 + 0x10);
        *puVar4 = 1;
        puVar4[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar9, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar7 = *(int *) (*param_2 + 0x24);
        FUN_140058710(param_1, "bHasSound", 9);
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) (iVar7 != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar9 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar9, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        if (local_58._0_8_ != 0) {
            FUN_14018b900(local_58._0_8_, 0);
        }
        FUN_1400b7390(&local_118);
        if (puVar11 != (undefined2 *) 0x0) {
            FUN_14018b900(puVar11, 0);
        }
    }
    FUN_1400b6f30(&local_118);
    local_118 = &PTR_FUN_140b69230;
    local_48 = (undefined2 *) 0x0;
    local_58 = ZEXT816(0);
    puVar11 = (undefined2 *) FUN_14018b280(0x10);
    local_58 = CONCAT88(puVar11, puVar11);
    local_48 = puVar11 + 8;
    if (puVar11 != (undefined2 *) 0x0) {
        *puVar11 = 0;
    }
    lVar12 = FUN_14018b280(0x60);
    plVar13 = plVar14;
    if (lVar12 != 0) {
        plVar13 = (longlong *) FUN_1404db7e0(lVar12, lVar8);
    }
    local_150 = 0;
    local_148 = (undefined2 *) 0x0;
    local_140 = 0;
    plVar15 = plVar14;
    do {
        plVar15 = (longlong *) ((longlong) plVar15 + 1);
    } while (*(short *) (&DAT_140b0a7c8 + (longlong) plVar15 * 2) != 0);
    lVar8 = (longlong) plVar15 * 2 >> 1;
    uVar1 = lVar8 + 1;
    if (uVar1 < 0x7fffffffffffffff) {
        lVar12 = uVar1 * 2;
        local_148 = (undefined2 *) FUN_14018b280(lVar12, 0);
        local_140 = lVar12 + (longlong) local_148;
    }
    lVar12 = (longlong) local_148;
    lVar8 = lVar8 * 2;
    local_150 = (longlong) local_148;
    FUN_1407db590(local_148, &DAT_140b0a7c8, lVar8);
    local_148 = (undefined2 *) (lVar8 + lVar12);
    if (local_148 != (undefined2 *) 0x0) {
        *local_148 = 0;
    }
    FUN_1400b7480(&local_118, plVar13);
    (**(code * *)(*plVar13 + 0x48))(plVar13, local_158);
    if (local_150 != 0) {
        FUN_14018b900(local_150, 0);
    }
    psVar10 = (short *) FUN_14034bdd0();
    if (psVar10 == (short *) 0x0) {
        if (local_108 != local_100) {
            *local_108 = 0;
            local_100 = local_108;
        }
    } else {
        sVar2 = *psVar10;
        while (sVar2 != 0) {
            plVar14 = (longlong *) ((longlong) plVar14 + 1);
            sVar2 = psVar10[(longlong) plVar14];
        }
        FUN_14001c480(local_110, psVar10, psVar10 + (longlong) plVar14);
    }
    FUN_1400b7660(&local_118);
    FUN_1400f0090(param_1);
    if (local_58._0_8_ != 0) {
        FUN_14018b900(local_58._0_8_, 0);
    }
    FUN_1400b7390(&local_118);
    LAB_140755d2c:
    if (*(int *) (*param_2 + 4) == 1) {
        FUN_1400eff50(param_1);
        FUN_1400eff50(param_1);
        FUN_1400f0090(param_1);
    }
    return 1;
}


undefined8 FUN_140755de0(undefined8 param_1, undefined4 param_2) {
    longlong lVar1;
    undefined8 uVar2;

    lVar1 = FUN_1401fc6a0(param_2);
    if (lVar1 != 0) {
        uVar2 = FUN_1404a8310(DAT_140c659b0, param_2, 1);
        if ((int) uVar2 != 0) {
            FUN_140058900(param_1);
            FUN_1400eff50(param_1);
            FUN_14034bdd0();
            FUN_1400f0090(param_1);
            FUN_1400f0090(param_1);
            FUN_1404a80b0(DAT_140c659b0, param_2);
            FUN_1400efeb0(param_1);
            FUN_1400eff50(param_1);
            FUN_1404a8430(DAT_140c659b0, param_2);
            FUN_1400eff50(param_1);
            uVar2 = 1;
        }
        return uVar2;
    }
    return 0;
}


undefined8 FUN_140755f10(longlong param_1) {
    undefined4 * puVar1;
    uint * puVar2;
    int iVar3;

    if (DAT_140c659b0 != 0) {
        iVar3 = FUN_140056d60();
        if (iVar3 != 0) {
            iVar3 = FUN_1404a7f50(DAT_140c659b0);
            puVar2 = *(uint **) (param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = (uint) (iVar3 != 0);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
        puVar1 = *(undefined4 **) (param_1 + 0x10);
        *puVar1 = 0;
        puVar1[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    }
    return 0;
}


undefined8 FUN_1407563a0(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    if (DAT_140c659b0 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = FUN_140056d60(param_1, 1);
    if (iVar1 == 0) {
        pdVar2 = *(double **) (param_1 + 0x10);
    } else {
        lVar3 = FUN_1404a85e0();
        pdVar2 = *(double **) (param_1 + 0x10);
        if (lVar3 != 0) {
            iVar1 = *(int *) (lVar3 + 0x10);
            *(undefined4 *) (pdVar2 + 1) = 3;
            *pdVar2 = (double) iVar1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *) (pdVar2 + 1) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140756430(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    if (DAT_140c659b0 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = FUN_140056d60(param_1, 1);
    if (iVar3 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar5 = FUN_1404a8700();
    if (lVar5 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = 1;
    FUN_140058900(param_1);
    lVar7 = *(longlong *) (*(longlong *) (lVar5 + 8) + 0x10);
    if (lVar7 != *(longlong *) (lVar5 + 8)) {
        do {
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar1 + 1) = 3;
            *pdVar1 = (double) iVar3;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            iVar4 = FUN_140755de0(param_1, *(undefined4 *) (lVar7 + 0x20));
            if (iVar4 == 0) {
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            } else {
                lVar6 = *(longlong *) (param_1 + 0x10);
                FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar6, lVar6 + -0x20, lVar6 + -0x10);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
                iVar3 = iVar3 + 1;
            }
            lVar6 = *(longlong *) (lVar7 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *) (lVar7 + 8);
                if (lVar7 == *(longlong *) (lVar6 + 0x18)) {
                    do {
                        lVar7 = lVar6;
                        lVar6 = *(longlong *) (lVar7 + 8);
                    } while (lVar7 == *(longlong *) (lVar6 + 0x18));
                }
                if (*(longlong *) (lVar7 + 0x18) != lVar6) {
                    lVar7 = lVar6;
                }
            } else {
                for (lVar2 = *(longlong *) (lVar6 + 0x10); lVar7 = lVar6, lVar2 != 0;
                     lVar2 = *(longlong *) (lVar2 + 0x10)) {
                    lVar6 = lVar2;
                }
            }
        } while (lVar7 != *(longlong *) (lVar5 + 8));
    }
    return 1;
}


undefined8 FUN_1407565b0(longlong param_1) {
    double *pdVar1;
    int iVar2;
    longlong lVar3;

    if (DAT_140c659b0 != 0) {
        iVar2 = FUN_140056d60(param_1, 1);
        if (iVar2 != 0) {
            lVar3 = FUN_1404a8700();
            if (lVar3 != 0) {
                iVar2 = *(int *) (lVar3 + 0x10);
                pdVar1 = *(double **) (param_1 + 0x10);
                *(undefined4 *) (pdVar1 + 1) = 3;
                *pdVar1 = (double) iVar2;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                return 1;
            }
        }
    }
    return 0;
}


undefined8 FUN_140756610(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    if (DAT_140c659b0 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = FUN_140056d60(param_1, 1);
    if (iVar3 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar5 = FUN_1404a87d0();
    if (lVar5 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = 1;
    FUN_140058900(param_1);
    lVar7 = *(longlong *) (*(longlong *) (lVar5 + 8) + 0x10);
    if (lVar7 != *(longlong *) (lVar5 + 8)) {
        do {
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar1 + 1) = 3;
            *pdVar1 = (double) iVar3;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            iVar4 = FUN_140755660(param_1, *(undefined8 *) (lVar7 + 0x28));
            if (iVar4 == 0) {
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            } else {
                lVar6 = *(longlong *) (param_1 + 0x10);
                FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar6, lVar6 + -0x20, lVar6 + -0x10);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
                iVar3 = iVar3 + 1;
            }
            lVar6 = *(longlong *) (lVar7 + 0x18);
            if (lVar6 == 0) {
                lVar6 = *(longlong *) (lVar7 + 8);
                if (lVar7 == *(longlong *) (lVar6 + 0x18)) {
                    do {
                        lVar7 = lVar6;
                        lVar6 = *(longlong *) (lVar7 + 8);
                    } while (lVar7 == *(longlong *) (lVar6 + 0x18));
                }
                if (*(longlong *) (lVar7 + 0x18) != lVar6) {
                    lVar7 = lVar6;
                }
            } else {
                for (lVar2 = *(longlong *) (lVar6 + 0x10); lVar7 = lVar6, lVar2 != 0;
                     lVar2 = *(longlong *) (lVar2 + 0x10)) {
                    lVar6 = lVar2;
                }
            }
        } while (lVar7 != *(longlong *) (lVar5 + 8));
    }
    return 1;
}


undefined8 FUN_140756790(longlong param_1) {
    int iVar1;
    double *pdVar2;
    longlong lVar3;

    if (DAT_140c659b0 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar1 = FUN_140056d60(param_1, 1);
    if (iVar1 == 0) {
        pdVar2 = *(double **) (param_1 + 0x10);
    } else {
        lVar3 = FUN_1404a87d0();
        pdVar2 = *(double **) (param_1 + 0x10);
        if (lVar3 != 0) {
            iVar1 = *(int *) (lVar3 + 0x10);
            *(undefined4 *) (pdVar2 + 1) = 3;
            *pdVar2 = (double) iVar1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    *(undefined4 *) (pdVar2 + 1) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140756820(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    undefined8 * puVar6;

    if (DAT_140c659b0 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = FUN_140056d60(param_1, 1);
    if (iVar3 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar5 = FUN_1404a88a0(DAT_140c659b0, iVar3);
    if (lVar5 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar3 = 1;
    FUN_140058900(param_1);
    puVar6 = *(undefined8 **) (lVar5 + 8);
    if (puVar6 != *(undefined8 **) (lVar5 + 0x10)) {
        do {
            pdVar1 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar1 + 1) = 3;
            *pdVar1 = (double) iVar3;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            iVar4 = FUN_140755660(param_1, *puVar6);
            if (iVar4 == 0) {
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            } else {
                lVar2 = *(longlong *) (param_1 + 0x10);
                FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar2, lVar2 + -0x20, lVar2 + -0x10);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
                iVar3 = iVar3 + 1;
            }
            puVar6 = puVar6 + 1;
        } while (puVar6 != *(undefined8 **) (lVar5 + 0x10));
    }
    return 1;
}


undefined4 FUN_140756950(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar5 = DAT_140c659b0;
    if (DAT_140c659b0 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    if (*(longlong **) (DAT_140c65898 + 0x1bf0) != (longlong *) 0x0) {
        iVar3 = (**(code * *)(**(longlong **) (DAT_140c65898 + 0x1bf0) + 0x18))();
        if (iVar3 == 0xa6) {
            lVar5 = lVar5 + 0xf0;
        } else {
            if (iVar3 != 0xa7) goto LAB_140756ab6;
            lVar5 = lVar5 + 0x1f0;
        }
        if ((lVar5 != 0) && (lVar5 != -0x40)) {
            iVar3 = 1;
            FUN_140058900(param_1);
            lVar7 = *(longlong *) (*(longlong *) (lVar5 + 0x48) + 0x10);
            if (lVar7 == *(longlong *) (lVar5 + 0x48)) {
                return 1;
            }
            do {
                pdVar1 = *(double **) (param_1 + 0x10);
                *(undefined4 *) (pdVar1 + 1) = 3;
                *pdVar1 = (double) iVar3;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                iVar4 = FUN_140755660(param_1, *(undefined8 *) (lVar7 + 0x28));
                if (iVar4 == 0) {
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                } else {
                    lVar6 = *(longlong *) (param_1 + 0x10);
                    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar6, lVar6 + -0x20, lVar6 + -0x10);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
                    iVar3 = iVar3 + 1;
                }
                lVar6 = *(longlong *) (lVar7 + 0x18);
                if (lVar6 == 0) {
                    lVar6 = *(longlong *) (lVar7 + 8);
                    if (lVar7 == *(longlong *) (lVar6 + 0x18)) {
                        do {
                            lVar7 = lVar6;
                            lVar6 = *(longlong *) (lVar7 + 8);
                        } while (lVar7 == *(longlong *) (lVar6 + 0x18));
                    }
                    if (*(longlong *) (lVar7 + 0x18) != lVar6) {
                        lVar7 = lVar6;
                    }
                } else {
                    for (lVar2 = *(longlong *) (lVar6 + 0x10); lVar7 = lVar6, lVar2 != 0;
                         lVar2 = *(longlong *) (lVar2 + 0x10)) {
                        lVar6 = lVar2;
                    }
                }
            } while (lVar7 != *(longlong *) (lVar5 + 0x48));
            return 1;
        }
    }
    LAB_140756ab6:
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140757330(longlong param_1) {
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;

    lVar3 = DAT_140c659b0;
    if (DAT_140c659b0 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    iVar4 = 0;
    if (*(longlong **) (DAT_140c65898 + 0x1bf0) != (longlong *) 0x0) {
        iVar2 = (**(code * *)(**(longlong **) (DAT_140c65898 + 0x1bf0) + 0x18))();
        iVar4 = 0;
        if (iVar2 == 0xa6) {
            lVar3 = lVar3 + 0x68;
        } else {
            if (iVar2 != 0xa7) goto LAB_14075739a;
            lVar3 = lVar3 + 0x88;
        }
        if (lVar3 != 0) {
            iVar4 = *(int *) (lVar3 + 0x10);
        }
    }
    LAB_14075739a:
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar4;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1407573d0(undefined8 param_1) {
    int iVar1;

    if (((DAT_140c659b0 != 0) && (iVar1 = FUN_140056d60(param_1, 1), iVar1 != 0)) &&
        (iVar1 = FUN_1404a7f50(DAT_140c659b0, iVar1), iVar1 != 0)) {
        FUN_1404a8960();
    }
    return 0;
}


undefined8 FUN_140757420(void) {
    if ((DAT_140c659b0 != 0) && (*(longlong *) (DAT_140c659b0 + 0xe8) != 0)) {
        FUN_140712a40(*(longlong *) (DAT_140c659b0 + 0xe8), 0, 0, 0);
    }
    return 0;
}


undefined8 FUN_1407575a0(undefined8 param_1) {
    int iVar1;
    longlong * plVar2;
    longlong lVar3;

    plVar2 = (longlong *) FUN_140056ab0(param_1, 1, "Game.Quest");
    if ((plVar2 != (longlong *) 0x0) && (*plVar2 != 0)) {
        iVar1 = FUN_1405fbc40(*DAT_140c65b80, **(undefined4 **) (*plVar2 + 8));
        if (iVar1 == 2) {
            lVar3 = FUN_14043d050();
        } else {
            lVar3 = FUN_14043cff0(*(undefined4 **) (*plVar2 + 8), **(undefined4 **) (*plVar2 + 8));
        }
        if (lVar3 != 0) {
            FUN_140058900(param_1);
            FUN_1400eff50(param_1);
            FUN_1400eff50(param_1);
            FUN_1400eff50(param_1);
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_140757850(longlong param_1) {
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res10;

    uVar1 = FUN_140056d60();
    if (uVar1 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    lVar3 = *(longlong *) (DAT_140c7cc98 + 8);
    local_res10 = DAT_140c7cc98;
    if (*(longlong *) (DAT_140c7cc98 + 8) != 0) {
        do {
            if (*(uint *) (lVar3 + 0x20) < uVar1) {
                lVar2 = *(longlong *) (lVar3 + 0x18);
            } else {
                lVar2 = *(longlong *) (lVar3 + 0x10);
                local_res10 = lVar3;
            }
            lVar3 = lVar2;
        } while (lVar2 != 0);
        if ((local_res10 != DAT_140c7cc98) && (*(uint *) (local_res10 + 0x20) <= uVar1))
            goto LAB_1407578be;
    }
    local_res10 = DAT_140c7cc98;
    LAB_1407578be:
    if ((local_res10 != DAT_140c7cc98) && (*(int *) (local_res10 + 0x24) != 0)) {
        lVar3 = FUN_140491c60(DAT_140c65968);
        if (lVar3 != 0) {
            FUN_140432ac0(param_1, lVar3);
            return 1;
        }
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140757950(undefined8 param_1) {
    longlong * plVar1;

    plVar1 = (longlong *) FUN_140056ab0(param_1, 1, "Game.Quest");
    if ((plVar1 != (longlong *) 0x0) && (*plVar1 != 0)) {
        FUN_14043c700();
    }
    return 0;
}


ulonglong FUN_1407579a0(undefined8 param_1) {
    ulonglong uVar1;

    uVar1 = FUN_140056d60(param_1, 1);
    if ((int) uVar1 == 0) {
        return uVar1;
    }
    FUN_14043be50(param_1, uVar1 & 0xffffffff);
    return 1;
}


undefined8 FUN_1407579d0(void) {
    if ((longlong *) *DAT_140c7cc78 != DAT_140c7cc78) {
        FUN_140437a10(DAT_140c658d8, 0xb1, 0, 0, 0, 0, 1);
    }
    DAT_140c7cd6c = 0;
    FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "Communicator_EndIncoming", &DAT_1409d0b07);
    return 0;
}


undefined8 FUN_140757a40(longlong param_1) {
    undefined4 * puVar1;
    int iVar2;

    FUN_140056d60(param_1, 1);
    iVar2 = FUN_14043ca00();
    if (-1 < iVar2) {
        puVar1 = *(undefined4 **) (param_1 + 0x10);
        *puVar1 = 1;
        puVar1[2] = 1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    puVar1 = *(undefined4 **) (param_1 + 0x10);
    *puVar1 = 0;
    puVar1[2] = 1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


void FUN_140757ac0(longlong *param_1) {
    longlong lVar1;
    longlong lVar2;

    if (*(int *) (param_1 + 5) == 0) {
        lVar1 = param_1[2];
        if (((lVar1 == 0) || (*(uint *) (lVar1 + 8) == 0)) ||
            ((uint) (DAT_140c636a8 - *(int *) (param_1 + 3)) <= *(uint *) (lVar1 + 8))) {
            lVar2 = *(longlong *) (DAT_140c65898 + 0x7340);
            if ((*(int *) (param_1 + 6) != 0) &&
                (((lVar1 == 0 || (*(uint *) (lVar1 + 8) == 0)) ||
                  ((uint) (DAT_140c636a8 - *(int *) (param_1 + 3)) <= *(uint *) (lVar1 + 8))))) {
                FUN_1400ea3e0(lVar2, "Communicator_ShowQueuedMsg", &DAT_1409e90a4, *(int *) (param_1 + 6));
            }
            FUN_1400579e0(*(undefined8 *) (lVar2 + 400));
            FUN_1404cf930(DAT_140c65a28);
        }
    }
    if (*param_1 != 0) {
        FUN_1403d6480(*param_1, param_1);
    }
    FUN_14018b900(param_1, 0);
    return;
}


undefined8 FUN_140757b90(longlong param_1) {
    undefined8 * puVar1;
    int iVar2;
    undefined8 * puVar3;
    longlong lVar4;
    undefined8 * puVar5;

    puVar3 = *(undefined8 **) (param_1 + 0x18);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    if (((puVar3 < puVar1) && (puVar3 != &DAT_140a12138)) && (*(int *) (puVar3 + 1) == 5)) {
        puVar5 = &DAT_140a12138;
        if (puVar3 < puVar1) {
            puVar5 = puVar3;
        }
        *puVar1 = *puVar5;
        *(undefined4 *) (puVar1 + 1) = *(undefined4 *) (puVar5 + 1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        iVar2 = FUN_1400578c0();
        puVar3 = (undefined8 *) FUN_14018b280();
        if (puVar3 != (undefined8 *) 0x0) {
            *puVar3 = 0;
            puVar3[2] = 0;
            *(undefined4 *) (puVar3 + 3) = 0;
            *(undefined4 *) (puVar3 + 5) = 0;
            puVar3[4] = FUN_140757ac0;
            puVar3[6] = (longlong) iVar2;
            lVar4 = FUN_140225140(4);
            if (lVar4 != 0) {
                puVar3[2] = lVar4;
            }
        }
        FUN_1404cfa80();
    }
    return 0;
}


undefined8 FUN_140757c50(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    FUN_140057020(param_1, "CommunicatorLib", &PTR_s_GetMessageLayoutForQuest_140b75840);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorPortraitPlacement_Left", 0x22);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorPortraitPlacement_Right", 0x23);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorOverlay_Default", 0x1b);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorOverlay_LightStatic", 0x1f);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorOverlay_HeavyStatic", 0x1f);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorBackground_Default", 0x1e);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorBackground_Exiles", 0x1d);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorBackground_Dominion", 0x1f);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorBackground_Drusera", 0x1e);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *(undefined4 *) (puVar1 + 1) = 3;
    *puVar1 = 0x4010000000000000;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CommunicatorBackground_TheEntity", 0x20);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return 1;
}


undefined8 FUN_140758020(longlong param_1) {
    longlong lVar1;
    uint uVar2;
    double *pdVar3;
    int iVar4;

    lVar1 = *(longlong *) (DAT_140c65898 + 0x78);
    if (lVar1 == 0) {
        pdVar3 = *(double **) (param_1 + 0x10);
        *pdVar3 = 23.0;
    } else {
        uVar2 = FUN_140056d60();
        if ((ulonglong) uVar2 < *(ulonglong *) (DAT_140c659c0 + 0x10)) {
            iVar4 = *(int *) (*(longlong *) (DAT_140c659c0 + 8) + (ulonglong) uVar2 * 4);
            if (iVar4 == 0) {
                iVar4 = 1;
            } else {
                iVar4 = (**(code * *)(*DAT_140c659a0 + 0x18))(DAT_140c659a0, lVar1, iVar4, 0, 0, 0);
                iVar4 = 2 - (uint) (iVar4 != 0);
            }
        } else {
            iVar4 = 0x18;
        }
        pdVar3 = *(double **) (param_1 + 0x10);
        *pdVar3 = (double) iVar4;
    }
    *(undefined4 *) (pdVar3 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140758510(longlong param_1) {
    undefined8 * puVar1;
    undefined8 uVar2;
    undefined8 * puVar3;
    uint uVar4;
    longlong lVar5;
    undefined * *local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    if (*(longlong *) (DAT_140c65898 + 0x78) == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    uVar4 = 0;
    do {
        FUN_1403c1ea0(DAT_140c65898, uVar4, *(undefined *) (DAT_140c65898 + 0x6dec));
        FUN_1400fa9e0(&local_28);
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0xc);
    lVar5 = local_18;
    puVar3 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (local_18 + 0x20) + 0xa0), local_20);
    puVar1 = *(undefined8 **) (lVar5 + 0x10);
    uVar2 = *puVar3;
    *puVar1 = uVar2;
    *(undefined4 *) (puVar1 + 1) = *(undefined4 *) (puVar3 + 1);
    *(longlong *) (lVar5 + 0x10) = *(longlong *) (lVar5 + 0x10) + 0x10;
    FUN_1400579e0(lVar5, uVar2, local_20);
    return 1;
}


undefined8 FUN_140758630(longlong param_1) {
    undefined8 * puVar1;
    undefined8 uVar2;
    longlong lVar3;

    FUN_140057020(param_1, "ActionSetLib", &PTR_s_IsSlotUnlocked_140b75900);
    FUN_140058710(param_1, "CodeEnumLimitedActionSetResult", 0x1e);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    lVar3 = 0x2e;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "CodeEnumShortcutSet", 0x13);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar2 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_140058710(param_1, "VehicleBar", 10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PrimaryPetBar", 0xd);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PetMiniBar0", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PetMiniBar1", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PetMiniBar2", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PetMiniBar3", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "PetMiniBar4", 0xb);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "FloatingSpellBar", 0x10);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "FloatingDynamicSpellBar", 0x17);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1, "Count", 5);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4022000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar2 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar2, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    lVar3 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar3, lVar3 + -0x20, lVar3 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140758b00(void) {
    uint uVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    float *pfVar7;
    undefined8 in_R9;
    uint uVar8;
    longlong lVar9;
    undefined4 * puVar10;
    undefined4 in_XMM6_Da;
    float fVar11;
    undefined4 in_XMM6_Db;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    undefined auVar12[16];

    if (_DAT_140c7f418 != 0) {
        return;
    }
    uVar8 = 0;
    auVar12 = CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da)));
    fVar11 = 0.0;
    do {
        if (DAT_140c63838 == (code *) 0x0) {
            if (_DAT_140c65254 != 0) {
                return;
            }
            iVar2 = FUN_1401f2f80();
            if (iVar2 < 0) {
                return;
            }
            uVar1 = (**(code * *)(*DAT_140c63c28 + 0x28))();
        } else {
            uVar1 = (*DAT_140c63838)(&PTR_u_Class_140a69950, DAT_140c63858);
        }
        if (uVar1 <= uVar8) {
            return;
        }
        if (DAT_140c63848 == (code *) 0x0) {
            if ((_DAT_140c65254 == 0) && (iVar2 = FUN_1401f2f80(), -1 < iVar2)) {
                lVar3 = (**(code * *)(*DAT_140c63c28 + 0x20))(DAT_140c63c28, uVar8);
                goto LAB_140758bd9;
            }
        } else {
            lVar3 = (*DAT_140c63848)(&PTR_u_Class_140a69950, uVar8, DAT_140c63858, in_R9, auVar12);
            LAB_140758bd9:
            if (lVar3 != 0) {
                lVar9 = 0;
                puVar10 = (undefined4 *) (lVar3 + 0xbc);
                lVar3 = 6;
                do {
                    if (DAT_140c63840 == (code *) 0x0) {
                        if ((_DAT_140c64be8 == 0) && (iVar2 = FUN_1401f33c0(), -1 < iVar2)) {
                            lVar4 = (**(code * *)(*DAT_140c64db8 + 0x18))();
                            goto LAB_140758c44;
                        }
                    } else {
                        lVar4 = (*DAT_140c63840)(&PTR_u_ClassSecondaryStatBonus_140a69988, *puVar10, DAT_140c63858
                        );
                        LAB_140758c44:
                        if (lVar4 != 0) {
                            lVar6 = 0;
                            pfVar7 = (float *) (lVar4 + 0x10);
                            lVar4 = 3;
                            do {
                                if (fVar11 != *pfVar7) {
                                    lVar5 = FUN_14075a190();
                                    *(float *) (lVar5 + (lVar9 + lVar6) * 8) = pfVar7[-3];
                                    lVar5 = FUN_14075a190();
                                    *(float *) (lVar5 + 4 + (lVar9 + lVar6) * 8) = *pfVar7;
                                }
                                lVar6 = lVar6 + 1;
                                pfVar7 = pfVar7 + 1;
                                lVar4 = lVar4 + -1;
                            } while (lVar4 != 0);
                        }
                    }
                    puVar10 = puVar10 + 1;
                    lVar9 = lVar9 + 3;
                    lVar3 = lVar3 + -1;
                } while (lVar3 != 0);
            }
        }
        uVar8 = uVar8 + 1;
    } while (true);
}


void FUN_14075a190(undefined8 param_1, uint *param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined8 * puVar4;
    int iVar5;
    undefined auStack376[32];
    undefined local_158[8];
    longlong local_150;
    uint local_148;
    undefined4 local_144;
    undefined4 uStack320;
    undefined4 uStack316;
    undefined4 uStack312;
    undefined4 local_134;
    undefined4 uStack304;
    undefined4 uStack300;
    undefined4 uStack296;
    undefined4 local_124;
    undefined4 uStack288;
    undefined4 uStack284;
    undefined4 uStack280;
    undefined4 local_114;
    undefined4 uStack272;
    undefined4 uStack268;
    undefined4 uStack264;
    undefined4 local_104;
    undefined4 uStack256;
    undefined4 uStack252;
    undefined4 uStack248;
    undefined4 local_f4;
    undefined4 uStack240;
    undefined4 uStack236;
    undefined4 uStack232;
    undefined4 local_e4;
    undefined4 uStack224;
    undefined4 uStack220;
    undefined4 uStack216;
    undefined4 local_d4;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 uStack200;
    undefined4 local_c4;
    undefined4 uStack192;
    undefined4 uStack188;
    undefined4 uStack184;
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
    undefined4 local_38;
    undefined4 uStack52;
    undefined4 uStack48;
    undefined4 uStack44;
    undefined4 local_28;
    undefined4 uStack36;
    undefined4 uStack32;
    undefined4 uStack28;
    ulonglong local_18;

    local_18 = DAT_140c0f7b0 ^ (ulonglong) auStack376;
    lVar1 = DAT_140c7f410;
    if (*(longlong *) (DAT_140c7f410 + 8) != 0) {
        lVar2 = *(longlong *) (DAT_140c7f410 + 8);
        do {
            if (*(uint *) (lVar2 + 0x20) < *param_2) {
                lVar3 = *(longlong *) (lVar2 + 0x18);
            } else {
                lVar3 = *(longlong *) (lVar2 + 0x10);
                lVar1 = lVar2;
            }
            lVar2 = lVar3;
        } while (lVar3 != 0);
    }
    if ((lVar1 == DAT_140c7f410) || (*param_2 < *(uint *) (lVar1 + 0x20))) {
        puVar4 = (undefined8 *) &local_a8;
        iVar5 = 0x11;
        do {
            iVar5 = iVar5 + -1;
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
        } while (-1 < iVar5);
        local_148 = *param_2;
        local_144 = local_a8;
        uStack320 = uStack164;
        uStack316 = uStack160;
        uStack312 = uStack156;
        local_134 = local_98;
        uStack304 = uStack148;
        uStack300 = uStack144;
        uStack296 = uStack140;
        local_124 = local_88;
        uStack288 = uStack132;
        uStack284 = uStack128;
        uStack280 = uStack124;
        local_114 = local_78;
        uStack272 = uStack116;
        uStack268 = uStack112;
        uStack264 = uStack108;
        local_104 = local_68;
        uStack256 = uStack100;
        uStack252 = uStack96;
        uStack248 = uStack92;
        local_f4 = local_58;
        uStack240 = uStack84;
        uStack236 = uStack80;
        uStack232 = uStack76;
        local_e4 = local_48;
        uStack224 = uStack68;
        uStack220 = uStack64;
        uStack216 = uStack60;
        local_d4 = local_38;
        uStack208 = uStack52;
        uStack204 = uStack48;
        uStack200 = uStack44;
        local_c4 = local_28;
        uStack192 = uStack36;
        uStack188 = uStack32;
        uStack184 = uStack28;
        local_150 = lVar1;
        FUN_14075a2a0(&DAT_140c7f408, local_158, &local_150, &local_148);
    }
    FUN_1407db4f0(local_18 ^ (ulonglong) auStack376);
    return;
}


longlong *FUN_14075a2a0(longlong param_1, longlong *param_2, char **param_3, uint *param_4) {
    char *pcVar1;
    char *pcVar2;
    longlong * plVar3;
    longlong lVar4;
    longlong lVar5;
    bool bVar6;
    undefined local_18[16];

    pcVar1 = *(char **) (param_1 + 8);
    pcVar2 = *param_3;
    if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
        if ((*(longlong *) (param_1 + 0x10) == 0) || (*(uint *) (pcVar2 + 0x20) <= *param_4)) {
            LAB_14075a2fa:
            plVar3 = (longlong *) FUN_14075a860(param_1, local_18, param_4);
            *param_2 = *plVar3;
            return param_2;
        }
    } else {
        if (pcVar2 == pcVar1) {
            pcVar2 = *(char **) (pcVar1 + 0x18);
            if (*(uint *) (pcVar2 + 0x20) < *param_4) {
                if ((pcVar2 == pcVar1) || (*param_4 < *(uint *) (pcVar2 + 0x20))) {
                    lVar4 = FUN_14018b280(0xb8, 0);
                    FUN_14075ae40(lVar4 + 0x20, param_4);
                    *(longlong *) (pcVar2 + 0x10) = lVar4;
                    pcVar1 = *(char **) (param_1 + 8);
                    if (pcVar2 == pcVar1) {
                        *(longlong *) (pcVar1 + 8) = lVar4;
                        *(longlong *) (*(longlong *) (param_1 + 8) + 0x18) = lVar4;
                    } else if (pcVar2 == *(char **) (pcVar1 + 0x10)) {
                        *(longlong *) (pcVar1 + 0x10) = lVar4;
                    }
                } else {
                    lVar4 = FUN_14018b280(0xb8, 0);
                    FUN_14075ae40(lVar4 + 0x20, param_4);
                    *(longlong *) (pcVar2 + 0x18) = lVar4;
                    if (pcVar2 == *(char **) (*(longlong *) (param_1 + 8) + 0x18)) {
                        *(longlong *) (*(longlong *) (param_1 + 8) + 0x18) = lVar4;
                    }
                }
                *(char **) (lVar4 + 8) = pcVar2;
                *(undefined8 *) (lVar4 + 0x10) = 0;
                *(undefined8 *) (lVar4 + 0x18) = 0;
                FUN_1400081c0(lVar4, *(longlong *) (param_1 + 8) + 8);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 1;
                *param_2 = lVar4;
            } else {
                plVar3 = (longlong *) FUN_14075a860(param_1, local_18, param_4);
                *param_2 = *plVar3;
            }
            return param_2;
        }
        if ((*pcVar2 == '\0') && (*(char **) (*(longlong *) (pcVar2 + 8) + 8) == pcVar2)) {
            lVar4 = *(longlong *) (pcVar2 + 0x18);
        } else {
            lVar4 = *(longlong *) (pcVar2 + 0x10);
            if (lVar4 == 0) {
                lVar4 = *(longlong *) (pcVar2 + 8);
                lVar5 = lVar4;
                if (pcVar2 == *(char **) (lVar4 + 0x10)) {
                    do {
                        lVar4 = *(longlong *) (lVar5 + 8);
                        bVar6 = lVar5 == *(longlong *) (lVar4 + 0x10);
                        lVar5 = lVar4;
                    } while (bVar6);
                }
            } else {
                for (lVar5 = *(longlong *) (lVar4 + 0x18); lVar5 != 0; lVar5 = *(longlong *) (lVar5 + 0x18)) {
                    lVar4 = lVar5;
                }
            }
        }
        if ((*param_4 <= *(uint *) (lVar4 + 0x20)) || (*(uint *) (pcVar2 + 0x20) <= *param_4))
            goto LAB_14075a2fa;
        if (*(longlong *) (lVar4 + 0x18) == 0) {
            FUN_14075a770(param_1, param_2, 0, lVar4, param_4);
            return param_2;
        }
    }
    FUN_14075a770();
    return param_2;
}


void FUN_14075a4b0(longlong param_1, undefined4 *param_2, undefined4 *param_3) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 * puVar6;
    ulonglong uVar7;
    undefined4 * puVar8;
    undefined4 * puVar9;
    longlong lVar10;
    undefined4 * puVar11;

    puVar11 = *(undefined4 **) (param_1 + 0x10);
    if (puVar11 == *(undefined4 **) (param_1 + 0x18)) {
        lVar10 = ((longlong) puVar11 - *(longlong *) (param_1 + 8)) / 0x14;
        if (lVar10 == 0) {
            lVar10 = 1;
        } else {
            lVar10 = lVar10 * 2;
        }
        uVar7 = FUN_14018a3e0(lVar10 * 0x14);
        puVar8 = (undefined4 *) FUN_14018b280((uVar7 / 0x14) * 0x14);
        puVar9 = puVar8;
        for (puVar11 = *(undefined4 **) (param_1 + 8); puVar11 != param_2; puVar11 = puVar11 + 5) {
            if (puVar9 != (undefined4 *) 0x0) {
                *puVar9 = *puVar11;
                puVar9[1] = puVar11[1];
                puVar9[2] = puVar11[2];
                puVar9[3] = puVar11[3];
                puVar9[4] = puVar11[4];
            }
            puVar9 = puVar9 + 5;
        }
        if (puVar9 != (undefined4 *) 0x0) {
            *puVar9 = *param_3;
            puVar9[1] = param_3[1];
            puVar9[2] = param_3[2];
            puVar9[3] = param_3[3];
            puVar9[4] = param_3[4];
        }
        puVar6 = *(undefined4 **) (param_1 + 0x10);
        puVar11 = puVar9 + 5;
        if (param_2 != puVar6) {
            param_2 = (undefined4 *) ((longlong) param_2 + (longlong) puVar11 + (-0x14 - (longlong) puVar9));
            do {
                if (puVar11 != (undefined4 *) 0x0) {
                    *puVar11 = *param_2;
                    puVar11[1] = param_2[1];
                    puVar11[2] = param_2[2];
                    puVar11[3] = param_2[3];
                    puVar11[4] = param_2[4];
                }
                param_2 = param_2 + 5;
                puVar11 = puVar11 + 5;
            } while (param_2 != puVar6);
        }
        if (*(longlong *) (param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *) (param_1 + 8), 0);
        }
        *(undefined4 **) (param_1 + 8) = puVar8;
        *(undefined4 **) (param_1 + 0x18) = puVar8 + (uVar7 / 0x14) * 5;
        *(undefined4 **) (param_1 + 0x10) = puVar11;
    } else {
        if (puVar11 != (undefined4 *) 0x0) {
            *puVar11 = puVar11[-5];
            puVar11[1] = puVar11[-4];
            puVar11[2] = puVar11[-3];
            puVar11[3] = puVar11[-2];
            puVar11[4] = puVar11[-1];
        }
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x14;
        uVar1 = *param_3;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        uVar4 = param_3[3];
        uVar5 = param_3[4];
        FUN_14075a960(param_2, *(longlong *) (param_1 + 0x10) + -0x28,
                      *(longlong *) (param_1 + 0x10) + -0x14);
        *param_2 = uVar1;
        param_2[1] = uVar2;
        param_2[2] = uVar3;
        param_2[3] = uVar4;
        param_2[4] = uVar5;
    }
    return;
}


void FUN_14075a6b0(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;

    if (param_1 != param_2) {
        lVar3 = 0;
        lVar1 = (param_2 - param_1) / 0x14;
        for (lVar2 = lVar1; lVar2 != 1; lVar2 = lVar2 >> 1) {
            lVar3 = lVar3 + 1;
        }
        FUN_14075a9d0(param_1, param_2, param_2 - param_1, lVar3 * 2);
        if (0x10 < lVar1) {
            FUN_14075ab90(param_1, param_1 + 0x140);
            FUN_14075ad80(param_1 + 0x140, param_2);
            return;
        }
        FUN_14075ab90(param_1, param_2);
    }
    return;
}


longlong *
FUN_14075a770(longlong param_1, longlong *param_2, longlong param_3, longlong param_4, uint *param_5) {
    longlong lVar1;
    longlong lVar2;

    if (((param_4 == *(longlong *) (param_1 + 8)) || (param_3 != 0)) ||
        (*param_5 < *(uint *) (param_4 + 0x20))) {
        lVar2 = FUN_14018b280(0xb8, 0);
        FUN_14075ae40(lVar2 + 0x20, param_5);
        *(longlong *) (param_4 + 0x10) = lVar2;
        lVar1 = *(longlong *) (param_1 + 8);
        if (param_4 == lVar1) {
            *(longlong *) (lVar1 + 8) = lVar2;
            *(longlong *) (*(longlong *) (param_1 + 8) + 0x18) = lVar2;
        } else if (param_4 == *(longlong *) (lVar1 + 0x10)) {
            *(longlong *) (lVar1 + 0x10) = lVar2;
        }
    } else {
        lVar2 = FUN_14018b280(0xb8, 0);
        FUN_14075ae40(lVar2 + 0x20, param_5);
        *(longlong *) (param_4 + 0x18) = lVar2;
        if (param_4 == *(longlong *) (*(longlong *) (param_1 + 8) + 0x18)) {
            *(longlong *) (*(longlong *) (param_1 + 8) + 0x18) = lVar2;
        }
    }
    *(longlong *) (lVar2 + 8) = param_4;
    *(undefined8 *) (lVar2 + 0x10) = 0;
    *(undefined8 *) (lVar2 + 0x18) = 0;
    FUN_1400081c0(lVar2, *(longlong *) (param_1 + 8) + 8);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 1;
    *param_2 = lVar2;
    return param_2;
}


char **FUN_14075a860(longlong param_1, char **param_2, uint *param_3) {
    char **ppcVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    bool bVar6;
    undefined local_res8[8];

    pcVar2 = *(char **) (param_1 + 8);
    pcVar4 = *(char **) (pcVar2 + 8);
    bVar6 = true;
    pcVar5 = pcVar2;
    if (pcVar4 != (char *) 0x0) {
        do {
            pcVar5 = pcVar4;
            bVar6 = *param_3 < *(uint *) (pcVar5 + 0x20);
            if (bVar6) {
                pcVar4 = *(char **) (pcVar5 + 0x10);
            } else {
                pcVar4 = *(char **) (pcVar5 + 0x18);
            }
        } while (pcVar4 != (char *) 0x0);
    }
    pcVar3 = pcVar5;
    if (bVar6) {
        if (pcVar5 == *(char **) (pcVar2 + 0x10)) goto LAB_14075a8be;
        if ((*pcVar5 == '\0') && (*(char **) (*(longlong *) (pcVar5 + 8) + 8) == pcVar5)) {
            pcVar3 = *(char **) (pcVar5 + 0x18);
        } else {
            pcVar3 = *(char **) (pcVar5 + 0x10);
            if (pcVar3 == (char *) 0x0) {
                pcVar3 = *(char **) (pcVar5 + 8);
                pcVar2 = pcVar3;
                if (pcVar5 == *(char **) (pcVar3 + 0x10)) {
                    do {
                        pcVar3 = *(char **) (pcVar2 + 8);
                        bVar6 = pcVar2 == *(char **) (pcVar3 + 0x10);
                        pcVar2 = pcVar3;
                    } while (bVar6);
                }
            } else {
                for (pcVar2 = *(char **) (pcVar3 + 0x18); pcVar2 != (char *) 0x0;
                     pcVar2 = *(char **) (pcVar2 + 0x18)) {
                    pcVar3 = pcVar2;
                }
            }
        }
    }
    if (*param_3 <= *(uint *) (pcVar3 + 0x20)) {
        *param_2 = pcVar3;
        *(undefined *) (param_2 + 1) = 0;
        return param_2;
    }
    LAB_14075a8be:
    ppcVar1 = (char **) FUN_14075a770(param_1, local_res8, pcVar4, pcVar5, param_3);
    *param_2 = *ppcVar1;
    *(undefined *) (param_2 + 1) = 1;
    return param_2;
}


undefined4 *FUN_14075a960(longlong param_1, longlong param_2, undefined4 *param_3) {
    longlong lVar1;
    undefined4 * puVar2;

    lVar1 = (param_2 - param_1) / 0x14;
    if (0 < lVar1) {
        param_2 = param_2 - (longlong) param_3;
        puVar2 = param_3;
        do {
            param_3 = puVar2 + -5;
            lVar1 = lVar1 + -1;
            *param_3 = *(undefined4 *) (param_2 + -0x14 + (longlong) puVar2);
            puVar2[-4] = *(undefined4 *) (param_2 + 4 + (longlong) param_3);
            puVar2[-3] = *(undefined4 *) (param_2 + 8 + (longlong) param_3);
            puVar2[-2] = *(undefined4 *) (param_2 + 0xc + (longlong) param_3);
            puVar2[-1] = *(undefined4 *) (param_2 + 0x10 + (longlong) param_3);
            puVar2 = param_3;
        } while (0 < lVar1);
    }
    return param_3;
}


void FUN_14075a9d0(undefined4 *param_1, undefined4 *param_2, undefined8 param_3, longlong param_4) {
    uint uVar1;
    uint uVar2;
    undefined4 uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    undefined4 uVar8;
    undefined4 uVar9;
    undefined4 uVar10;
    undefined4 * puVar11;
    uint uVar12;
    undefined4 * puVar13;
    undefined4 * puVar14;
    undefined4 * puVar15;
    longlong lVar16;

    lVar16 = (longlong) param_2 - (longlong) param_1;
    while (true) {
        if (lVar16 / 0x14 < 0x11) {
            return;
        }
        if (param_4 == 0) break;
        param_4 = param_4 + -1;
        lVar16 = (((longlong) param_2 - (longlong) param_1) / 0x14) / 2;
        uVar1 = param_1[1];
        uVar2 = param_1[lVar16 * 5 + 1];
        puVar13 = param_1 + lVar16 * 5;
        uVar12 = uVar2;
        puVar15 = param_1;
        if (uVar1 < uVar2) {
            puVar13 = param_1;
            uVar12 = uVar1;
            puVar15 = param_1 + lVar16 * 5;
            uVar1 = uVar2;
        }
        if (((uint) param_2[-4] <= uVar1) && (puVar15 = puVar13, uVar12 < (uint) param_2[-4])) {
            puVar15 = param_2 + -5;
        }
        uVar3 = *puVar15;
        uVar2 = puVar15[1];
        uVar4 = puVar15[2];
        uVar5 = puVar15[4];
        puVar13 = param_2;
        puVar15 = param_1;
        while (true) {
            uVar1 = puVar15[1];
            puVar11 = puVar15;
            while (uVar1 < uVar2) {
                uVar1 = puVar11[6];
                puVar11 = puVar11 + 5;
            }
            uVar1 = puVar13[-4];
            puVar14 = puVar13;
            while (puVar13 = puVar14 + -5, uVar2 < uVar1) {
                uVar1 = puVar14[-9];
                puVar14 = puVar13;
            }
            if (puVar13 <= puVar11) break;
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[2];
            uVar9 = puVar11[3];
            uVar10 = puVar11[4];
            *puVar11 = *puVar13;
            puVar15 = puVar11 + 5;
            puVar11[1] = puVar14[-4];
            puVar11[2] = puVar14[-3];
            puVar11[3] = puVar14[-2];
            puVar11[4] = puVar14[-1];
            *puVar13 = uVar6;
            puVar14[-4] = uVar7;
            puVar14[-3] = uVar8;
            puVar14[-2] = uVar9;
            puVar14[-1] = uVar10;
        }
        FUN_14075a9d0(puVar11, param_2, 0, param_4, uVar3, uVar4, uVar5);
        lVar16 = (longlong) puVar11 - (longlong) param_1;
        param_2 = puVar11;
    }
    FUN_14075aca0(param_1, param_2, param_2);
    return;
}


void FUN_14075ab90(undefined4 *param_1, undefined4 *param_2) {
    uint uVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 * puVar7;
    undefined4 * puVar8;

    if (param_1 != param_2) {
        for (puVar8 = param_1 + 5; puVar8 != param_2; puVar8 = puVar8 + 5) {
            uVar2 = *puVar8;
            uVar3 = puVar8[1];
            uVar4 = puVar8[2];
            uVar5 = puVar8[3];
            uVar6 = puVar8[4];
            if (uVar3 < (uint) param_1[1]) {
                FUN_14075a960(param_1, puVar8, puVar8 + 5);
                *param_1 = uVar2;
                param_1[1] = uVar3;
                param_1[2] = uVar4;
                param_1[3] = uVar5;
                param_1[4] = uVar6;
            } else {
                uVar1 = puVar8[-4];
                puVar7 = puVar8;
                while (uVar3 < uVar1) {
                    *puVar7 = puVar7[-5];
                    puVar7[1] = puVar7[-4];
                    puVar7[2] = puVar7[-3];
                    puVar7[3] = puVar7[-2];
                    puVar7[4] = puVar7[-1];
                    uVar1 = puVar7[-9];
                    puVar7 = puVar7 + -5;
                }
                *puVar7 = uVar2;
                puVar7[1] = uVar3;
                puVar7[2] = uVar4;
                puVar7[3] = uVar5;
                puVar7[4] = uVar6;
            }
        }
    }
    return;
}


void FUN_14075aca0(undefined4 *param_1, undefined4 *param_2, undefined4 *param_3) {
    undefined4 * puVar1;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    FUN_14075afd0();
    puVar1 = param_2;
    if (param_2 < param_3) {
        do {
            if ((uint) puVar1[1] < (uint) param_1[1]) {
                local_28 = *puVar1;
                local_24 = puVar1[1];
                local_20 = puVar1[2];
                local_1c = puVar1[3];
                local_18 = puVar1[4];
                *puVar1 = *param_1;
                puVar1[1] = param_1[1];
                puVar1[2] = param_1[2];
                puVar1[3] = param_1[3];
                puVar1[4] = param_1[4];
                FUN_14075b1d0(param_1, 0, ((longlong) param_2 - (longlong) param_1) / 0x14, &local_28);
            }
            puVar1 = puVar1 + 5;
        } while (puVar1 < param_3);
    }
    FUN_14075aed0(param_1, param_2);
    return;
}


void FUN_14075ad80(undefined4 *param_1, undefined4 *param_2) {
    uint uVar1;
    undefined4 uVar2;
    uint uVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 * puVar7;

    if (param_1 != param_2) {
        do {
            uVar2 = *param_1;
            uVar3 = param_1[1];
            uVar4 = param_1[2];
            uVar5 = param_1[3];
            uVar6 = param_1[4];
            uVar1 = param_1[-4];
            puVar7 = param_1;
            while (uVar3 < uVar1) {
                *puVar7 = puVar7[-5];
                puVar7[1] = puVar7[-4];
                puVar7[2] = puVar7[-3];
                puVar7[3] = puVar7[-2];
                puVar7[4] = puVar7[-1];
                uVar1 = puVar7[-9];
                puVar7 = puVar7 + -5;
            }
            *puVar7 = uVar2;
            puVar7[1] = uVar3;
            puVar7[2] = uVar4;
            param_1 = param_1 + 5;
            puVar7[3] = uVar5;
            puVar7[4] = uVar6;
        } while (param_1 != param_2);
    }
    return;
}


void FUN_14075ae40(undefined4 *param_1, undefined4 *param_2) {
    undefined4 uVar1;
    undefined4 uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined4 * puVar5;
    undefined4 * puVar6;

    if (param_1 == (undefined4 *) 0x0) {
        return;
    }
    if ((((uint) param_2 | (uint) param_1) & 0xf) == 0) {
        lVar4 = 1;
        do {
            puVar6 = param_2;
            puVar5 = param_1;
            uVar1 = puVar6[1];
            uVar2 = puVar6[2];
            uVar3 = puVar6[3];
            *puVar5 = *puVar6;
            puVar5[1] = uVar1;
            puVar5[2] = uVar2;
            puVar5[3] = uVar3;
            uVar1 = puVar6[5];
            uVar2 = puVar6[6];
            uVar3 = puVar6[7];
            puVar5[4] = puVar6[4];
            puVar5[5] = uVar1;
            puVar5[6] = uVar2;
            puVar5[7] = uVar3;
            uVar1 = puVar6[9];
            uVar2 = puVar6[10];
            uVar3 = puVar6[0xb];
            puVar5[8] = puVar6[8];
            puVar5[9] = uVar1;
            puVar5[10] = uVar2;
            puVar5[0xb] = uVar3;
            uVar1 = puVar6[0xd];
            uVar2 = puVar6[0xe];
            uVar3 = puVar6[0xf];
            puVar5[0xc] = puVar6[0xc];
            puVar5[0xd] = uVar1;
            puVar5[0xe] = uVar2;
            puVar5[0xf] = uVar3;
            uVar1 = puVar6[0x11];
            uVar2 = puVar6[0x12];
            uVar3 = puVar6[0x13];
            puVar5[0x10] = puVar6[0x10];
            puVar5[0x11] = uVar1;
            puVar5[0x12] = uVar2;
            puVar5[0x13] = uVar3;
            uVar1 = puVar6[0x15];
            uVar2 = puVar6[0x16];
            uVar3 = puVar6[0x17];
            puVar5[0x14] = puVar6[0x14];
            puVar5[0x15] = uVar1;
            puVar5[0x16] = uVar2;
            puVar5[0x17] = uVar3;
            uVar1 = puVar6[0x19];
            uVar2 = puVar6[0x1a];
            uVar3 = puVar6[0x1b];
            puVar5[0x18] = puVar6[0x18];
            puVar5[0x19] = uVar1;
            puVar5[0x1a] = uVar2;
            puVar5[0x1b] = uVar3;
            uVar1 = puVar6[0x1d];
            uVar2 = puVar6[0x1e];
            uVar3 = puVar6[0x1f];
            puVar5[0x1c] = puVar6[0x1c];
            puVar5[0x1d] = uVar1;
            puVar5[0x1e] = uVar2;
            puVar5[0x1f] = uVar3;
            lVar4 = lVar4 + -1;
            param_1 = puVar5 + 0x20;
            param_2 = puVar6 + 0x20;
        } while (lVar4 != 0);
        uVar1 = puVar6[0x21];
        uVar2 = puVar6[0x22];
        uVar3 = puVar6[0x23];
        puVar5[0x20] = puVar6[0x20];
        puVar5[0x21] = uVar1;
        puVar5[0x22] = uVar2;
        puVar5[0x23] = uVar3;
        puVar5[0x24] = puVar6[0x24];
        return;
    }
    FUN_1407db590(param_1, param_2, 0x94);
    return;
}


void FUN_14075aed0(undefined4 *param_1, longlong param_2) {
    longlong lVar1;
    undefined4 * puVar2;
    undefined4 local_28;
    undefined4 local_24;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;

    lVar1 = param_2 - (longlong) param_1;
    if (1 < lVar1 / 0x14) {
        puVar2 = (undefined4 *) (param_2 + -0x14);
        do {
            local_28 = *puVar2;
            local_24 = puVar2[1];
            local_20 = puVar2[2];
            local_1c = puVar2[3];
            local_18 = puVar2[4];
            *puVar2 = *param_1;
            puVar2[1] = param_1[1];
            puVar2[2] = param_1[2];
            puVar2[3] = param_1[3];
            puVar2[4] = param_1[4];
            FUN_14075b1d0(param_1, 0, (lVar1 + -0x14) / 0x14, &local_28);
            puVar2 = puVar2 + -5;
            lVar1 = (longlong) puVar2 + (0x14 - (longlong) param_1);
        } while (1 < lVar1 / 0x14);
    }
    return;
}


void FUN_14075afd0(longlong param_1, longlong param_2) {
    longlong lVar1;
    undefined4 * puVar2;
    undefined4 uVar3;
    uint uVar4;
    undefined4 uVar5;
    undefined4 uVar6;
    undefined4 uVar7;
    longlong lVar8;
    longlong lVar9;
    longlong lVar10;
    undefined4 * puVar11;
    longlong lVar12;
    longlong lVar13;

    lVar8 = (param_2 - param_1) / 0x14;
    if (lVar8 < 2) {
        return;
    }
    lVar9 = (lVar8 + -2) / 2;
    lVar12 = lVar9 * 2 + 2;
    puVar11 = (undefined4 *) (param_1 + lVar9 * 0x14);
    do {
        uVar3 = *puVar11;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        uVar7 = puVar11[4];
        lVar1 = lVar12;
        lVar13 = lVar9;
        while (lVar10 = lVar1, lVar10 < lVar8) {
            if (*(uint *) (param_1 + lVar10 * 0x14 + 4) < *(uint *) (param_1 + -0x10 + lVar10 * 0x14)) {
                lVar10 = lVar10 + -1;
            }
            puVar2 = (undefined4 *) (param_1 + lVar13 * 0x14);
            *puVar2 = *(undefined4 *) (param_1 + lVar10 * 0x14);
            puVar2[1] = *(undefined4 *) (param_1 + 4 + lVar10 * 0x14);
            puVar2[2] = *(undefined4 *) (param_1 + 8 + lVar10 * 0x14);
            puVar2[3] = *(undefined4 *) (param_1 + 0xc + lVar10 * 0x14);
            puVar2[4] = *(undefined4 *) (param_1 + 0x10 + lVar10 * 0x14);
            lVar13 = lVar10;
            lVar1 = lVar10 * 2 + 2;
        }
        lVar1 = lVar13;
        if (lVar10 == lVar8) {
            lVar1 = lVar10 + -1;
            puVar2 = (undefined4 *) (param_1 + lVar13 * 0x14);
            *puVar2 = *(undefined4 *) (param_1 + -0x14 + lVar10 * 0x14);
            puVar2[1] = *(undefined4 *) (param_1 + -0x10 + lVar10 * 0x14);
            puVar2[2] = *(undefined4 *) (param_1 + -0xc + lVar10 * 0x14);
            puVar2[3] = *(undefined4 *) (param_1 + -8 + lVar10 * 0x14);
            puVar2[4] = *(undefined4 *) (param_1 + -4 + lVar10 * 0x14);
        }
        while (lVar9 < lVar1) {
            lVar13 = (lVar1 + -1) / 2;
            puVar2 = (undefined4 *) (param_1 + lVar13 * 0x14);
            if (uVar4 <= *(uint *) (param_1 + 4 + lVar13 * 0x14)) break;
            *(undefined4 *) (param_1 + lVar1 * 0x14) = *puVar2;
            *(undefined4 *) (param_1 + 4 + lVar1 * 0x14) = puVar2[1];
            *(undefined4 *) (param_1 + 8 + lVar1 * 0x14) = puVar2[2];
            *(undefined4 *) (param_1 + 0xc + lVar1 * 0x14) = puVar2[3];
            *(undefined4 *) (param_1 + 0x10 + lVar1 * 0x14) = puVar2[4];
            lVar1 = lVar13;
        }
        *(undefined4 *) (param_1 + lVar1 * 0x14) = uVar3;
        *(uint *) (param_1 + 4 + lVar1 * 0x14) = uVar4;
        *(undefined4 *) (param_1 + 8 + lVar1 * 0x14) = uVar5;
        *(undefined4 *) (param_1 + 0xc + lVar1 * 0x14) = uVar6;
        *(undefined4 *) (param_1 + 0x10 + lVar1 * 0x14) = uVar7;
        if (lVar9 == 0) {
            return;
        }
        lVar9 = lVar9 + -1;
        puVar11 = puVar11 + -5;
        lVar12 = lVar12 + -2;
    } while (true);
}


void FUN_14075b1d0(longlong param_1, longlong param_2, longlong param_3, undefined4 *param_4) {
    undefined4 * puVar1;
    undefined4 * puVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;

    lVar7 = param_2 * 2;
    lVar4 = param_2;
    while (lVar5 = lVar7 + 2, lVar5 < param_3) {
        if (*(uint *) (param_1 + 4 + lVar5 * 0x14) < *(uint *) (param_1 + -0x10 + lVar5 * 0x14)) {
            lVar5 = lVar7 + 1;
        }
        puVar1 = (undefined4 *) (param_1 + lVar4 * 0x14);
        *puVar1 = *(undefined4 *) (param_1 + lVar5 * 0x14);
        puVar1[1] = *(undefined4 *) (param_1 + 4 + lVar5 * 0x14);
        puVar1[2] = *(undefined4 *) (param_1 + 8 + lVar5 * 0x14);
        puVar1[3] = *(undefined4 *) (param_1 + 0xc + lVar5 * 0x14);
        puVar1[4] = *(undefined4 *) (param_1 + 0x10 + lVar5 * 0x14);
        lVar4 = lVar5;
        lVar7 = lVar5 * 2;
    }
    lVar6 = lVar4;
    if (lVar5 == param_3) {
        lVar6 = lVar7 + 1;
        puVar1 = (undefined4 *) (param_1 + lVar4 * 0x14);
        *puVar1 = *(undefined4 *) (param_1 + -0x14 + lVar5 * 0x14);
        puVar1[1] = *(undefined4 *) (param_1 + -0x10 + lVar5 * 0x14);
        puVar1[2] = *(undefined4 *) (param_1 + -0xc + lVar5 * 0x14);
        puVar1[3] = *(undefined4 *) (param_1 + -8 + lVar5 * 0x14);
        puVar1[4] = *(undefined4 *) (param_1 + -4 + lVar5 * 0x14);
    }
    if (param_2 < lVar6) {
        uVar3 = param_4[1];
        do {
            lVar7 = (lVar6 + -1) / 2;
            puVar1 = (undefined4 *) (param_1 + lVar7 * 0x14);
            if (uVar3 <= *(uint *) (param_1 + 4 + lVar7 * 0x14)) break;
            puVar2 = (undefined4 *) (param_1 + lVar6 * 0x14);
            *puVar2 = *puVar1;
            puVar2[1] = puVar1[1];
            puVar2[2] = puVar1[2];
            puVar2[3] = puVar1[3];
            puVar2[4] = puVar1[4];
            lVar6 = lVar7;
        } while (param_2 < lVar7);
    }
    puVar1 = (undefined4 *) (param_1 + lVar6 * 0x14);
    *puVar1 = *param_4;
    puVar1[1] = param_4[1];
    puVar1[2] = param_4[2];
    puVar1[3] = param_4[3];
    puVar1[4] = param_4[4];
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14075b350(longlong param_1) {
    ushort uVar1;
    undefined8 * puVar2;
    double *pdVar3;
    longlong lVar4;
    code *pcVar5;
    uint uVar6;
    int iVar7;
    undefined8 uVar8;
    int *piVar9;
    short *psVar10;
    ulonglong uVar11;
    ulonglong uVar12;
    ushort *puVar13;
    longlong lVar14;
    longlong lVar15;
    uint uVar16;
    longlong lVar17;
    undefined auStack232[48];
    undefined8 local_b8;
    undefined4 local_b0;
    byte local_a8[112];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack232;
    FUN_140057020(param_1, "GuildLib", &PTR_s_Accept_140b75de0);
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x3ff0000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildType_Guild", 0xf);
    lVar17 = 4;
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *(undefined4 *) (puVar2 + 1) = 3;
    *puVar2 = 0x4000000000000000;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildType_Circle", 0x10);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildType_WarParty", 0x12);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4010000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildType_ArenaTeam_2v2", 0x17);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4014000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildType_ArenaTeam_3v3", 0x17);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4018000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildType_ArenaTeam_5v5", 0x17);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x401c000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildType_Community", 0x13);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildQueueState_Normal", 0x16);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4008000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildQueueState_Queuing", 0x17);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4010000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildQueueState_CanLock", 0x17);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4014000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildQueueState_Locked", 0x16);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    *puVar2 = 0x4018000000000000;
    *(undefined4 *) (puVar2 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar14 = *(longlong *) (param_1 + 0x10);
    local_b8 = FUN_140062650(param_1, "GuildQueueState_InBattle", 0x18);
    local_b0 = 4;
    FUN_14005ea50(param_1, lVar14 + -0x20, &local_b8, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    FUN_1400f0340(param_1);
    FUN_140058710(param_1, "CodeEnumGuildEventType", 0x16);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar2 + 1) = 5;
    lVar14 = 10;
    *puVar2 = uVar8;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    uVar8 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar8, *(longlong *) (param_1 + 0x10) + -0x20);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_140058710(param_1);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1);
    *(undefined4 *) (puVar2 + 1) = 5;
    uVar16 = 0;
    *puVar2 = uVar8;
    pcVar5 = DAT_140c63838;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if (pcVar5 == (code *) 0x0) {
        if ((_DAT_140c655d0 != 0) || (iVar7 = FUN_140202a40(), iVar7 < 0)) goto LAB_14075badb;
        uVar6 = (**(code * *)(*DAT_140c646b0 + 0x28))();
    } else {
        uVar6 = (*pcVar5)(&PTR_u_GuildPerk_140a6a638);
    }
    if (uVar6 != 0) {
        do {
            if (DAT_140c63848 == (code *) 0x0) {
                if (_DAT_140c655d0 == 0) {
                    iVar7 = FUN_140202a40();
                    if (iVar7 < 0) {
                        piVar9 = (int *) 0x0;
                    } else {
                        piVar9 = (int *) (**(code * *)(*DAT_140c646b0 + 0x20))();
                    }
                } else {
                    piVar9 = (int *) 0x0;
                }
            } else {
                piVar9 = (int *) (*DAT_140c63848)(&PTR_u_GuildPerk_140a6a638);
            }
            uVar11 = *(ulonglong *) (piVar9 + 6);
            if (uVar11 == 0) {
                psVar10 = (short *) 0x0;
            } else if (DAT_140c3fe70 < uVar11) {
                psVar10 = (short *) 0x0;
            } else {
                psVar10 = (short *) (DAT_140c3fe68 + uVar11);
            }
            if (*psVar10 != 0) {
                if (uVar11 == 0) {
                    puVar13 = (ushort *) 0x0;
                } else if (DAT_140c3fe70 < uVar11) {
                    puVar13 = (ushort *) 0x0;
                } else {
                    puVar13 = (ushort *) (DAT_140c3fe68 + uVar11);
                }
                lVar14 = -1;
                if (puVar13 != (ushort *) 0x0) {
                    uVar11 = 0;
                    do {
                        uVar1 = *puVar13;
                        if (uVar1 < 0x80) {
                            if (99 < uVar11) break;
                            uVar12 = uVar11 + 1;
                            local_a8[uVar11] = (byte) uVar1;
                        } else if (uVar1 < 0x1000) {
                            if (0x62 < uVar11) break;
                            local_a8[uVar11] = (byte) (uVar1 >> 6) | 0xc0;
                            uVar12 = uVar11 + 2;
                            local_a8[uVar11 + 1] = *(byte *) puVar13 & 0x3f | 0x80;
                        } else {
                            if (0x61 < uVar11) break;
                            local_a8[uVar11] = (byte) (uVar1 >> 0xc) | 0xe0;
                            local_a8[uVar11 + 1] = (byte) (uVar1 >> 6) & 0x3f | 0x80;
                            uVar12 = uVar11 + 3;
                            local_a8[uVar11 + 2] = *(byte *) puVar13 & 0x3f | 0x80;
                        }
                        if (uVar1 == 0) break;
                        puVar13 = puVar13 + 1;
                        lVar14 = lVar14 + -1;
                        uVar11 = uVar12;
                    } while (lVar14 != 0);
                }
                iVar7 = *piVar9;
                lVar14 = -1;
                do {
                    lVar15 = lVar14 + 1;
                    lVar4 = lVar14 + 1;
                    lVar14 = lVar15;
                } while (local_a8[lVar4] != 0);
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar2 = *(undefined8 **) (param_1 + 0x10);
                uVar8 = FUN_140062650(param_1, local_a8, lVar15);
                *(undefined4 *) (puVar2 + 1) = 4;
                *puVar2 = uVar8;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                pdVar3 = *(double **) (param_1 + 0x10);
                *(undefined4 *) (pdVar3 + 1) = 3;
                *pdVar3 = (double) iVar7;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                FUN_1400580e0(param_1, 0xfffffffd);
                FUN_14005ea50(param_1);
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
            }
            uVar16 = uVar16 + 1;
        } while (uVar16 < uVar6);
    }
    LAB_14075badb:
    lVar14 = *(longlong *) (param_1 + 0x10);
    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar14, lVar14 + -0x20, lVar14 + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar8 = FUN_140062650(param_1, "GuildClassification", 0x13);
    *(undefined4 *) (puVar2 + 1) = 4;
    *puVar2 = uVar8;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar2 + 1) = 5;
    lVar14 = 6;
    *puVar2 = uVar8;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    uVar8 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar8, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar8 = FUN_140062650(param_1, "RecruitmentDemand", 0x11);
    *(undefined4 *) (puVar2 + 1) = 4;
    *puVar2 = uVar8;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar2 + 1) = 5;
    *puVar2 = uVar8;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    do {
        FUN_1400f06f0(param_1);
        lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    uVar8 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar8, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack232);
    return;
}


undefined8 FUN_14075bcc0(void) {
    undefined4 local_res10[6];

    local_res10[0] = 1;
    FUN_1403f4740(DAT_140c65898, 0x490, local_res10);
    return 0;
}


undefined8 FUN_14075bcf0(void) {
    undefined4 local_res10[6];

    local_res10[0] = 0;
    FUN_1403f4740(DAT_140c65898, 0x490, local_res10);
    return 0;
}


undefined8 FUN_14075bd20(longlong param_1) {
    int iVar1;
    undefined8 uVar2;
    longlong lVar3;
    undefined8 * puVar4;
    undefined8 * puVar5;
    undefined8 * puVar6;
    undefined * *local_e8;
    undefined4 local_e0;
    longlong local_d8;
    undefined4 local_d0;
    undefined local_c8[8];
    longlong local_c0;
    undefined local_98[8];
    longlong local_90;
    undefined local_78[8];
    longlong local_70;
    undefined local_58[8];
    longlong local_50;
    undefined local_38[8];
    longlong local_30;

    uVar2 = FUN_140056bb0(param_1, 1);
    FUN_14018f2d0(local_98, uVar2);
    iVar1 = FUN_140056d60(param_1, 2);
    if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 3)) || (iVar1 - 4U < 3)) {
        uVar2 = FUN_14034bdd0();
        lVar3 = FUN_14018f0e0(local_c8, uVar2);
        uVar2 = *(undefined8 *) (lVar3 + 8);
        puVar4 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x20);
        if (((puVar4 < *(undefined8 **) (param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x28))) {
            uVar2 = FUN_140056bb0(param_1, 3);
        }
        FUN_14018f2d0(local_38, uVar2);
        if (local_c0 != 0) {
            FUN_14018b900(local_c0, 0);
        }
        uVar2 = FUN_14034bdd0();
        lVar3 = FUN_14018f0e0(local_c8, uVar2);
        uVar2 = *(undefined8 *) (lVar3 + 8);
        puVar4 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x30);
        if (((puVar4 < *(undefined8 **) (param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x38))) {
            uVar2 = FUN_140056bb0(param_1, 4);
        }
        FUN_14018f2d0(local_58, uVar2);
        if (local_c0 != 0) {
            FUN_14018b900(local_c0, 0);
        }
        uVar2 = FUN_14034bdd0();
        lVar3 = FUN_14018f0e0(local_c8, uVar2);
        uVar2 = *(undefined8 *) (lVar3 + 8);
        puVar4 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x40);
        if (((puVar4 < *(undefined8 **) (param_1 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (0 < *(int *) (*(longlong *) (param_1 + 0x18) + 0x48))) {
            uVar2 = FUN_140056bb0(param_1, 5);
        }
        FUN_14018f2d0(local_78, uVar2);
        if (local_c0 != 0) {
            FUN_14018b900(local_c0, 0);
        }
        FUN_1407e4830(local_c8, 0, 0x30);
        local_e8 = &PTR_FUN_140b569f0;
        local_d0 = 1;
        local_e0 = 0xfffffffe;
        local_d8 = param_1;
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar4 = *(undefined8 **) (param_1 + 0x10);
        uVar2 = FUN_14005c1b0(param_1, 0, 0);
        *(undefined4 *) (puVar4 + 1) = 5;
        *puVar4 = uVar2;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        local_e0 = FUN_1400578c0(param_1);
        puVar4 = (undefined8 *) (*(longlong *) (local_d8 + 0x18) + 0x50);
        if (((puVar4 < *(undefined8 **) (local_d8 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
            (*(int *) (*(longlong *) (local_d8 + 0x18) + 0x58) == 5)) {
            FUN_1400579e0(local_d8, puVar4, local_e0);
            puVar4 = *(undefined8 **) (local_d8 + 0x10);
            puVar5 = (undefined8 *) (*(longlong *) (local_d8 + 0x18) + 0x50);
            puVar6 = &DAT_140a12138;
            if (puVar5 < puVar4) {
                puVar6 = puVar5;
            }
            *puVar4 = *puVar6;
            *(undefined4 *) (puVar4 + 1) = *(undefined4 *) (puVar6 + 1);
            *(longlong *) (local_d8 + 0x10) = *(longlong *) (local_d8 + 0x10) + 0x10;
            local_e0 = FUN_1400578c0(local_d8);
            FUN_14069d750(local_c8, &local_e8);
        }
        FUN_140584490();
        local_e8 = &PTR_FUN_140b56a08;
        if (local_d8 != 0) {
            FUN_1400579e0();
        }
        if (local_70 != 0) {
            FUN_14018b900(local_70, 0);
        }
        if (local_50 != 0) {
            FUN_14018b900(local_50, 0);
        }
        if (local_30 != 0) {
            FUN_14018b900(local_30, 0);
        }
    }
    if (local_90 != 0) {
        FUN_14018b900(local_90, 0);
    }
    return 0;
}


undefined8 FUN_14075c0d0(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
    undefined8 * puVar3;
    ulonglong uVar4;
    int iVar5;
    int iVar6;
    undefined8 uVar7;
    undefined8 * puVar8;
    ulonglong uVar9;
    double dVar10;
    int local_res8;
    int iStackX12;

    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar8 = *(undefined8 **) (param_1 + 0x10);
    uVar7 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar8 + 1) = 5;
    *puVar8 = uVar7;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar5 = FUN_1400578c0(param_1);
    uVar4 = DAT_140c7de20;
    uVar9 = 0;
    if (DAT_140c7de20 != 0) {
        do {
            if (uVar9 < DAT_140c7de20) {
                uVar7 = *(undefined8 *) (DAT_140c7de18 + uVar9 * 8);
            } else {
                uVar7 = 0;
            }
            iVar6 = FUN_140433470(param_1, uVar7);
            if (iVar6 != 0) {
                FUN_1400fb470();
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar4);
    }
    lVar2 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
    if (iVar5 - 1U < *(uint *) (lVar2 + 0x38)) {
        puVar8 = (undefined8 *) ((longlong) (iVar5 + -1) * 0x10 + *(longlong *) (lVar2 + 0x18));
    } else {
        dVar10 = (double) iVar5;
        if (dVar10 == 0.0) {
            puVar8 = *(undefined8 **) (lVar2 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar10 >> 0x20);
            local_res8 = SUB84(dVar10, 0);
            puVar8 = (undefined8 *)
                    (*(longlong *) (lVar2 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar8 + 3) == 3) && (dVar10 == (double) puVar8[2])) goto LAB_14075c22d;
            puVar8 = (undefined8 *) puVar8[4];
        } while (puVar8 != (undefined8 *) 0x0);
        puVar8 = &DAT_140a12138;
    }
    LAB_14075c22d:
    puVar3 = *(undefined8 **) (param_1 + 0x10);
    *puVar3 = *puVar8;
    uVar1 = *(undefined4 *) (puVar8 + 1);
    *(undefined4 *) (puVar3 + 1) = uVar1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, uVar1, iVar5);
    return 1;
}


undefined8 FUN_14075c2a0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    longlong lVar3;
    undefined4 uVar4;
    int iVar5;
    int iVar6;
    uint * puVar7;
    longlong local_res8;

    uVar4 = FUN_140056d60(param_1, 1);
    iVar6 = 0;
    lVar1 = *(longlong *) (DAT_140c65898 + 0x1c00);
    lVar3 = lVar1;
    lVar2 = *(longlong *) (lVar1 + 8);
    while (lVar2 != 0) {
        if (*(int *) (lVar2 + 0x20) < 0x15) {
            lVar2 = *(longlong *) (lVar2 + 0x18);
        } else {
            lVar3 = lVar2;
            lVar2 = *(longlong *) (lVar2 + 0x10);
        }
    }
    local_res8 = lVar1;
    if (((lVar3 != lVar1) && (*(int *) (lVar3 + 0x20) < 0x16)) &&
        ((*(int *) (lVar3 + 0x20) < 0x15 || (*(int *) (lVar3 + 0x24) == 0)))) {
        local_res8 = lVar3;
    }
    if ((local_res8 != lVar1) && (*(int *) (local_res8 + 0x30) == 1)) {
        iVar6 = *(int *) (local_res8 + 0x34);
    }
    puVar7 = *(uint **) (param_1 + 0x10);
    iVar5 = FUN_1403abfe0(DAT_140c65898 + 0x1bf8, 0x15, uVar4);
    puVar7[2] = 1;
    *puVar7 = (uint) (iVar5 + iVar6 != 0);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14075c980(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4) {
    ulonglong uVar1;
    longlong lVar2;
    double *pdVar3;
    uint uVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    undefined8 uVar8;
    code *pcVar9;
    longlong lVar10;
    undefined8 * puVar11;
    undefined8 * puVar12;
    uint uVar13;
    int iVar14;
    uint uVar15;
    double dVar16;
    undefined4 in_XMM6_Da;
    undefined4 uVar17;
    undefined4 in_XMM6_Db;
    undefined4 uVar18;
    undefined4 in_XMM6_Dc;
    undefined4 in_XMM6_Dd;
    int local_res8;
    int iStackX12;
    int local_res10;
    int iStackX20;

    uVar4 = FUN_140056d60(param_1, 1, param_3, param_4,
                          CONCAT412(in_XMM6_Dd, CONCAT48(in_XMM6_Dc, CONCAT44(in_XMM6_Db, in_XMM6_Da))));
    iVar14 = 1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar12 = *(undefined8 **) (param_1 + 0x10);
    uVar8 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar12 + 1) = 5;
    *puVar12 = uVar8;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    iVar5 = FUN_1400578c0();
    uVar17 = 0;
    uVar18 = 0;
    uVar13 = 0;
    pcVar9 = DAT_140c63838;
    LAB_14075ca00:
    uVar15 = 0;
    do {
        if (pcVar9 == (code *) 0x0) {
            if ((_DAT_140c63bb0 != 0) || (iVar7 = FUN_1402021c0(), pcVar9 = DAT_140c63838, iVar7 < 0))
                break;
            uVar6 = (**(code * *)(*DAT_140c648c8 + 0x28))();
        } else {
            uVar6 = (*pcVar9)(&PTR_u_GuildPermission_140a6a5c8, DAT_140c63858);
        }
        pcVar9 = DAT_140c63838;
        if (uVar6 <= uVar15) break;
        if (DAT_140c63848 == (code *) 0x0) {
            if (_DAT_140c63bb0 == 0) {
                iVar7 = FUN_1402021c0();
                if (iVar7 < 0) {
                    lVar10 = 0;
                } else {
                    lVar10 = (**(code * *)(*DAT_140c648c8 + 0x20))(DAT_140c648c8, uVar15);
                }
            } else {
                lVar10 = 0;
            }
        } else {
            lVar10 = (*DAT_140c63848)(&PTR_u_GuildPermission_140a6a5c8, uVar15, DAT_140c63858);
        }
        if (((*(uint *) (lVar10 + 0x1c) == 0) || ((*(uint *) (lVar10 + 0x1c) >> (uVar4 & 0x1f) & 1) != 0))
            && (*(uint *) (lVar10 + 0x20) == uVar13)) {
            if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                FUN_14005e2c0(param_1);
            }
            puVar12 = *(undefined8 **) (param_1 + 0x10);
            uVar8 = FUN_14005c1b0(param_1, 0, 0);
            *(undefined4 *) (puVar12 + 1) = 5;
            *puVar12 = uVar8;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            iVar7 = FUN_1400578c0(param_1);
            uVar1 = *(ulonglong *) (lVar10 + 0x10);
            if (uVar1 == 0) {
                lVar10 = 0;
            } else if (DAT_140c3fe70 < uVar1) {
                lVar10 = 0;
            } else {
                lVar10 = DAT_140c3fe68 + uVar1;
            }
            uVar6 = iVar7 - 1;
            lVar2 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            if (uVar6 < *(uint *) (lVar2 + 0x38)) {
                puVar12 = (undefined8 *) ((longlong) (iVar7 + -1) * 0x10 + *(longlong *) (lVar2 + 0x18));
            } else {
                dVar16 = (double) iVar7;
                if (dVar16 == (double) CONCAT44(uVar18, uVar17)) {
                    puVar12 = *(undefined8 **) (lVar2 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar16 >> 0x20);
                    local_res10 = SUB84(dVar16, 0);
                    puVar12 = (undefined8 *)
                            (*(longlong *) (lVar2 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar12 + 3) == 3) && (dVar16 == (double) puVar12[2])) goto LAB_14075cba1;
                    puVar12 = (undefined8 *) puVar12[4];
                } while (puVar12 != (undefined8 *) 0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_14075cba1:
            puVar11 = *(undefined8 **) (param_1 + 0x10);
            *puVar11 = *puVar12;
            *(undefined4 *) (puVar11 + 1) = *(undefined4 *) (puVar12 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1, puVar12, L"strLuaVariable", lVar10);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            uVar8 = FUN_14034bdd0();
            lVar10 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            if (uVar6 < *(uint *) (lVar10 + 0x38)) {
                puVar12 = (undefined8 *) ((longlong) (iVar7 + -1) * 0x10 + *(longlong *) (lVar10 + 0x18));
            } else {
                dVar16 = (double) iVar7;
                if (dVar16 == (double) CONCAT44(uVar18, uVar17)) {
                    puVar12 = *(undefined8 **) (lVar10 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar16 >> 0x20);
                    local_res10 = SUB84(dVar16, 0);
                    puVar12 = (undefined8 *)
                            (*(longlong *) (lVar10 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar12 + 3) == 3) && (dVar16 == (double) puVar12[2])) goto LAB_14075cc5e;
                    puVar12 = (undefined8 *) puVar12[4];
                } while (puVar12 != (undefined8 *) 0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_14075cc5e:
            puVar11 = *(undefined8 **) (param_1 + 0x10);
            *puVar11 = *puVar12;
            *(undefined4 *) (puVar11 + 1) = *(undefined4 *) (puVar12 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1, puVar12, L"strName", uVar8);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            uVar8 = FUN_14034bdd0();
            lVar10 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            if (uVar6 < *(uint *) (lVar10 + 0x38)) {
                puVar12 = (undefined8 *) ((longlong) (iVar7 + -1) * 0x10 + *(longlong *) (lVar10 + 0x18));
            } else {
                dVar16 = (double) iVar7;
                if (dVar16 == (double) CONCAT44(uVar18, uVar17)) {
                    puVar12 = *(undefined8 **) (lVar10 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar16 >> 0x20);
                    local_res10 = SUB84(dVar16, 0);
                    puVar12 = (undefined8 *)
                            (*(longlong *) (lVar10 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar12 + 3) == 3) && (dVar16 == (double) puVar12[2])) goto LAB_14075cd1d;
                    puVar12 = (undefined8 *) puVar12[4];
                } while (puVar12 != (undefined8 *) 0x0);
                puVar12 = &DAT_140a12138;
            }
            LAB_14075cd1d:
            puVar11 = *(undefined8 **) (param_1 + 0x10);
            *puVar11 = *puVar12;
            *(undefined4 *) (puVar11 + 1) = *(undefined4 *) (puVar12 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_1400f0870(param_1, puVar12, L"strDescription", uVar8);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            lVar10 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            puVar12 = *(undefined8 **) (param_1 + 0x10);
            if (iVar5 - 1U < *(uint *) (lVar10 + 0x38)) {
                puVar11 = (undefined8 *) ((longlong) (iVar5 + -1) * 0x10 + *(longlong *) (lVar10 + 0x18));
            } else {
                dVar16 = (double) iVar5;
                if (dVar16 == (double) CONCAT44(uVar18, uVar17)) {
                    puVar11 = *(undefined8 **) (lVar10 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar16 >> 0x20);
                    local_res10 = SUB84(dVar16, 0);
                    puVar11 = (undefined8 *)
                            (*(longlong *) (lVar10 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar11 + 3) == 3) && (dVar16 == (double) puVar11[2])) goto LAB_14075cddd;
                    puVar11 = (undefined8 *) puVar11[4];
                } while (puVar11 != (undefined8 *) 0x0);
                puVar11 = &DAT_140a12138;
            }
            LAB_14075cddd:
            *puVar12 = *puVar11;
            *(undefined4 *) (puVar12 + 1) = *(undefined4 *) (puVar11 + 1);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            pdVar3 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar3 + 1) = 3;
            *pdVar3 = (double) iVar14;
            lVar10 = *(longlong *) (param_1 + 0x10);
            puVar12 = (undefined8 *) (lVar10 + 0x10);
            *(undefined8 **) (param_1 + 0x10) = puVar12;
            lVar2 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
            if (uVar6 < *(uint *) (lVar2 + 0x38)) {
                puVar11 = (undefined8 *) ((longlong) (iVar7 + -1) * 0x10 + *(longlong *) (lVar2 + 0x18));
            } else {
                dVar16 = (double) iVar7;
                if (dVar16 == (double) CONCAT44(uVar18, uVar17)) {
                    puVar11 = *(undefined8 **) (lVar2 + 0x20);
                } else {
                    iStackX20 = (int) ((ulonglong) dVar16 >> 0x20);
                    local_res10 = SUB84(dVar16, 0);
                    puVar11 = (undefined8 *)
                            (*(longlong *) (lVar2 + 0x20) +
                             ((longlong) (ulonglong) (uint) (iStackX20 + local_res10) %
                              (longlong) ((1 << (*(byte *) (lVar2 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
                }
                do {
                    if ((*(int *) (puVar11 + 3) == 3) && (dVar16 == (double) puVar11[2])) goto LAB_14075ce9e;
                    puVar11 = (undefined8 *) puVar11[4];
                } while (puVar11 != (undefined8 *) 0x0);
                puVar11 = &DAT_140a12138;
            }
            LAB_14075ce9e:
            *puVar12 = *puVar11;
            *(undefined4 *) (lVar10 + 0x18) = *(undefined4 *) (puVar11 + 1);
            lVar10 = *(longlong *) (param_1 + 0x10);
            *(longlong *) (param_1 + 0x10) = lVar10 + 0x10;
            FUN_14005ea50(param_1, lVar10 + -0x20, lVar10 + -0x10, lVar10);
            *(longlong *) (param_1 + 0x10) =
                    (longlong) (&DAT_ffffffffffffffd0 + *(longlong *) (param_1 + 0x10));
            FUN_1400579e0();
            iVar14 = iVar14 + 1;
        }
        uVar15 = uVar15 + 1;
        pcVar9 = DAT_140c63838;
    } while (true);
    uVar13 = uVar13 + 1;
    if (0x1f < uVar13) goto code_r0x00014075cf02;
    goto LAB_14075ca00;
    code_r0x00014075cf02:
    lVar10 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xa0);
    if (iVar5 - 1U < *(uint *) (lVar10 + 0x38)) {
        puVar12 = (undefined8 *) ((longlong) (iVar5 + -1) * 0x10 + *(longlong *) (lVar10 + 0x18));
    } else {
        dVar16 = (double) iVar5;
        if (dVar16 == (double) CONCAT44(uVar18, uVar17)) {
            puVar12 = *(undefined8 **) (lVar10 + 0x20);
        } else {
            iStackX12 = (int) ((ulonglong) dVar16 >> 0x20);
            local_res8 = SUB84(dVar16, 0);
            puVar12 = (undefined8 *)
                    (*(longlong *) (lVar10 + 0x20) +
                     ((longlong) (ulonglong) (uint) (iStackX12 + local_res8) %
                      (longlong) ((1 << (*(byte *) (lVar10 + 0xb) & 0x3f)) - 1U | 1)) * 0x28);
        }
        do {
            if ((*(int *) (puVar12 + 3) == 3) && (dVar16 == (double) puVar12[2])) goto LAB_14075cf90;
            puVar12 = (undefined8 *) puVar12[4];
        } while (puVar12 != (undefined8 *) 0x0);
        puVar12 = &DAT_140a12138;
    }
    LAB_14075cf90:
    puVar11 = *(undefined8 **) (param_1 + 0x10);
    *puVar11 = *puVar12;
    *(undefined4 *) (puVar11 + 1) = *(undefined4 *) (puVar12 + 1);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    FUN_1400579e0(param_1, puVar11, iVar5);
    return 1;
}


undefined8 FUN_14075d250(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_140200220(0x3b1);
    if (lVar2 == 0) {
        iVar3 = 0;
    } else {
        iVar3 = *(int *) (lVar2 + 4);
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14075d2a0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong * plVar3;
    longlong local_28;
    undefined8 local_20;
    longlong local_18;

    local_20 = 1;
    local_28 = 0;
    local_18 = 0;
    iVar1 = FUN_140056d60(param_1, 1);
    if (iVar1 == 1) {
        lVar2 = FUN_140200220(0x2fc);
        if (lVar2 == 0) {
            iVar1 = 1000000;
        } else {
            iVar1 = *(int *) (lVar2 + 4);
        }
        local_20 = CONCAT44(local_20._4_4_, 1);
        plVar3 = (longlong *) FUN_140059170(param_1, 0x18);
        *plVar3 = (longlong) iVar1;
        plVar3[1] = local_20;
        plVar3[2] = local_18;
        lVar2 = *(longlong *) (param_1 + 0x20);
        local_28 = FUN_140062650(param_1, "Game.Money", 10);
        local_20 = CONCAT44(local_20._4_4_, 4);
        FUN_14005e8e0(param_1, lVar2 + 0xa0, &local_28, *(undefined8 *) (param_1 + 0x10));
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1, 0xfffffffe);
        return 1;
    }
    if (iVar1 == 7) {
        lVar2 = FUN_140200220(0x487);
        if (lVar2 == 0) {
            iVar1 = 1000000;
        } else {
            iVar1 = *(int *) (lVar2 + 4);
        }
        local_28 = (longlong) iVar1;
        local_20 = CONCAT44(local_20._4_4_, 1);
        FUN_140501210(param_1, &local_28);
        return 1;
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14075d3f0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong * plVar3;
    undefined8 local_28;
    undefined8 local_20;
    longlong local_18;

    local_20 = 0xf;
    local_28 = 0;
    local_18 = 0;
    iVar1 = FUN_140056d60(param_1, 1);
    if (iVar1 == 7) {
        lVar2 = FUN_140200220(0x487);
        if (lVar2 == 0) {
            iVar1 = 100;
        } else {
            iVar1 = *(int *) (lVar2 + 8);
        }
        local_18 = CONCAT44(9, (undefined4) local_18);
        if (iVar1 != 0) {
            plVar3 = (longlong *) FUN_140059170(param_1, 0x18);
            *plVar3 = (longlong) iVar1;
            plVar3[1] = local_20;
            plVar3[2] = local_18;
            lVar2 = *(longlong *) (param_1 + 0x20);
            local_28 = FUN_140062650(param_1, "Game.Money", 10);
            local_20 = CONCAT44(local_20._4_4_, 4);
            FUN_14005e8e0(param_1, lVar2 + 0xa0, &local_28, *(undefined8 *) (param_1 + 0x10));
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            FUN_140058bf0(param_1, 0xfffffffe);
            return 1;
        }
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14075d4f0(longlong param_1) {
    double *pdVar1;
    int iVar2;
    longlong lVar3;

    iVar2 = FUN_140056d60();
    if (iVar2 == 3) {
        lVar3 = FUN_140200220(0x368);
        if (lVar3 == 0) {
            iVar2 = 0;
        } else {
            iVar2 = *(int *) (lVar3 + 4);
        }
        pdVar1 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar1 + 1) = 3;
        *pdVar1 = (double) iVar2;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    if (iVar2 == 1) {
        lVar3 = FUN_140200220(0x414);
        if (lVar3 == 0) {
            iVar2 = 0;
        } else {
            iVar2 = *(int *) (lVar3 + 4);
        }
        pdVar1 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar1 + 1) = 3;
        *pdVar1 = (double) iVar2;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14075d5a0(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_140200220(0x2e8);
    if (lVar2 == 0) {
        iVar3 = 0;
    } else {
        iVar3 = *(int *) (lVar2 + 4);
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14075d5f0(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    int iVar3;

    lVar2 = FUN_140200220(0x3fc);
    if (lVar2 == 0) {
        iVar3 = 0;
    } else {
        iVar3 = *(int *) (lVar2 + 4);
    }
    pdVar1 = *(double **) (param_1 + 0x10);
    *(undefined4 *) (pdVar1 + 1) = 3;
    *pdVar1 = (double) iVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined4 FUN_14075d640(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
    longlong * plVar3;
    undefined4 local_18[2];
    undefined8 local_10;

    if (DAT_140c7de48 != 0) {
        lVar2 = FUN_14018b280(0x68);
        plVar3 = (longlong *) 0x0;
        if (lVar2 != 0) {
            local_18[0] = 0;
            local_10 = 0;
            plVar3 = (longlong *)
                    FUN_14073e140(lVar2, DAT_140c7de38, DAT_140c7de40, 0, 6, DAT_140c7de48, local_18);
        }
        uVar1 = FUN_14073eb30(param_1, plVar3);
        if (plVar3 != (longlong *) 0x0) {
            (**(code * *)(*plVar3 + 8))(plVar3);
        }
        return uVar1;
    }
    *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14075dab0(void) {
    undefined4 local_res10[6];
    undefined4 local_28[2];
    undefined8 * local_20;
    code *local_18;
    undefined8 local_10;

    if (DAT_140c7de80 == 0) {
        local_20 = &DAT_140c7dde0;
        local_28[0] = 0;
        local_10 = 0;
        local_18 = FUN_140584770;
        FUN_140195960(&DAT_140c7de70, 120000, local_28, 4);
        local_res10[0] = 1;
        FUN_1403f4740(DAT_140c65898, 0x76f, local_res10);
    }
    return 0;
}


ulonglong FUN_14075de60(longlong param_1, longlong param_2) {
    undefined8 * puVar1;
    ulonglong uVar2;
    undefined8 uVar3;
    undefined8 * puVar4;
    undefined8 * puVar5;
    longlong lVar6;
    longlong lVar7;
    undefined * *local_28;
    undefined4 local_20;
    longlong local_18;
    undefined4 local_10;

    uVar2 = FUN_140056d60();
    if ((int) uVar2 == 0) {
        return uVar2;
    }
    local_28 = &PTR_FUN_140b569f0;
    local_10 = 1;
    local_18 = param_1;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar3 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    local_20 = FUN_1400578c0(param_1);
    puVar1 = *(undefined8 **)
            (*(longlong *) (param_2 + 0x58) +
             SUB168((ZEXT816(uVar2) & (undefined[16]) 0xffffffffffffffff) %
                    ZEXT816((ulonglong)
                                    (*(longlong *) (param_2 + 0x60) - *(longlong *) (param_2 + 0x58) >> 3)), 0)
             * 8);
    do {
        lVar7 = param_1;
        if (puVar1 == (undefined8 *) 0x0) {
            LAB_14075df2d:
            puVar4 = (undefined8 *)
                    FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0), local_20);
            puVar1 = *(undefined8 **) (param_1 + 0x10);
            *puVar1 = *puVar4;
            *(undefined4 *) (puVar1 + 1) = *(undefined4 *) (puVar4 + 1);
            LAB_14075df51:
            *(longlong *) (lVar7 + 0x10) = *(longlong *) (lVar7 + 0x10) + 0x10;
            FUN_1400579e0(lVar7);
            return 1;
        }
        if (*(int *) (puVar1 + 1) == (int) uVar2) {
            if ((puVar1 != (undefined8 *) 0x0) && (puVar1 != (undefined8 *) &DAT_fffffffffffffff0)) {
                lVar6 = puVar1[3];
                if (lVar6 != puVar1[4]) {
                    do {
                        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                            FUN_14005e2c0(param_1);
                        }
                        puVar4 = *(undefined8 **) (param_1 + 0x10);
                        uVar3 = FUN_14005c1b0(param_1, 0, 0);
                        *(undefined4 *) (puVar4 + 1) = 5;
                        *puVar4 = uVar3;
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        FUN_1400578c0(param_1);
                        puVar5 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0));
                        puVar4 = *(undefined8 **) (param_1 + 0x10);
                        *puVar4 = *puVar5;
                        *(undefined4 *) (puVar4 + 1) = *(undefined4 *) (puVar5 + 1);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        FUN_1400f06f0(param_1);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                        FUN_14034bdd0();
                        puVar5 = (undefined8 *)
                                FUN_14005c3c0(*(undefined8 *) (*(longlong *) (param_1 + 0x20) + 0xa0));
                        puVar4 = *(undefined8 **) (param_1 + 0x10);
                        *puVar4 = *puVar5;
                        *(undefined4 *) (puVar4 + 1) = *(undefined4 *) (puVar5 + 1);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                        FUN_1400f0870(param_1);
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                        FUN_1400fb1d0(&local_28);
                        FUN_1400579e0(param_1);
                        lVar6 = lVar6 + 8;
                        lVar7 = local_18;
                    } while (lVar6 != puVar1[4]);
                }
                puVar4 = (undefined8 *)
                        FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar7 + 0x20) + 0xa0), local_20);
                puVar1 = *(undefined8 **) (lVar7 + 0x10);
                *puVar1 = *puVar4;
                *(undefined4 *) (puVar1 + 1) = *(undefined4 *) (puVar4 + 1);
                goto LAB_14075df51;
            }
            goto LAB_14075df2d;
        }
        puVar1 = (undefined8 *) *puVar1;
    } while (true);
}
