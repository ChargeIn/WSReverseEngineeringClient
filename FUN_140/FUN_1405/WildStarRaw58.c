//
// Created by flop on 04.04.22.
//
#include "../../include.h"

// WARNING: Could not reconcile some variable overlaps

int FUN_140506750(undefined8 param_1, longlong param_2, int *param_3, longlong *param_4,
                  undefined8 param_5, byte param_6, int param_7, undefined8 param_8, char param_9) {
    longlong * plVar1;
    bool bVar2;
    longlong * plVar3;
    longlong lVar4;
    char cVar5;
    int iVar6;
    longlong * plVar7;
    longlong * plVar8;
    ulonglong uVar9;
    longlong lVar10;
    float extraout_XMM0_Da;
    float fVar11;
    float fVar12;
    undefined4 uVar13;
    undefined4 uVar14;
    undefined4 uVar15;
    undefined4 uVar16;
    float fVar17;
    ulonglong in_stack_fffffffffffffed8;
    undefined8 * puVar18;
    int local_108;
    int local_104;
    int local_100;
    int local_fc;
    undefined8 local_f8[2];
    float local_e8;
    undefined4 local_e4;
    undefined local_d8[8];
    longlong * local_d0;
    longlong * local_c8;
    undefined8 local_c0;
    undefined local_b8[16];
    undefined local_a8[16];
    undefined local_98[16];
    undefined4 local_88;
    undefined4 uStack132;
    undefined4 uStack128;
    undefined4 uStack124;
    undefined local_78[8];
    longlong local_70;

    iVar6 = param_3[1] + ((param_3[3] - param_3[1]) - DAT_140c4610c) / 2;
    param_3[1] = iVar6;
    iVar6 = iVar6 + DAT_140c4610c;
    param_3[3] = iVar6;
    FUN_140506520(iVar6, *(undefined8 *) (param_2 + 0x20), param_4, param_5,
                  in_stack_fffffffffffffed8 & 0xffffffffffffff00 | (ulonglong) param_6);
    if (param_7 == 1) {
        *param_3 = *param_3 + ((param_3[2] - (int) extraout_XMM0_Da) - *param_3) / 2;
    } else if (param_7 == 2) {
        *param_3 = param_3[2] - (int) extraout_XMM0_Da;
    }
    (**(code * *)(*param_4 + 0x20))(param_4);
    (**(code * *)(*param_4 + 0x18))(param_4);
    (**(code * *)(*param_4 + 0x20))(param_4);
    *param_3 = *param_3 + 2;
    uVar9 = 0;
    iVar6 = 0;
    bVar2 = false;
    local_d0 = (longlong *) 0x0;
    local_c8 = (longlong *) 0x0;
    local_c0 = 0;
    FUN_140505590(*(undefined8 *) (param_2 + 0x20), local_d8, param_5);
    plVar3 = local_c8;
    if (local_d0 != local_c8) {
        fVar17 = 1.0;
        plVar7 = local_d0;
        do {
            if (3 < (uint) uVar9) break;
            if (((param_6 == 0) || (*plVar7 != 0)) || ((*(int *) (plVar7 + 6) == 1 && (!bVar2)))) {
                FUN_14018efa0(local_78, L"%llu", *plVar7);
                lVar4 = local_70;
                uVar13 = 0x3f800000;
                uVar14 = 0x3f800000;
                uVar15 = 0x3f800000;
                uVar16 = 0x3f800000;
                local_88 = 0x3f800000;
                uStack132 = 0x3f800000;
                uStack128 = 0x3f800000;
                uStack124 = 0x3f800000;
                puVar18 = local_f8;
                local_f8[0] = 0;
                local_e8 = 1000.0;
                local_e4 = 0x447a0000;
                (**(code * *)(*DAT_140c65680 + 0x108))
                        (DAT_140c65680, param_4, local_70, 0xffffffffffffffff, puVar18, 0x400, &local_88, 1);
                local_104 = param_3[1];
                local_fc = param_3[3];
                fVar12 = (local_e8 - (float) local_f8[0]) + fVar17;
                local_a8 = ZEXT816(CONCAT44((float) local_104, (float) *param_3));
                fVar11 = (float) *param_3 + fVar12;
                local_98 = ZEXT816(CONCAT44((float) local_fc, fVar11));
                local_108 = (int) fVar11 + 2;
                local_100 = local_108 + DAT_140c46108;
                iVar6 = iVar6 + 2 + (int) fVar12 + DAT_140c46108;
                lVar10 = uVar9 * 0x30 + param_2;
                cVar5 = FUN_1401099e0(lVar10 + 0x28);
                if (cVar5 != '\0') {
                    local_b8 = CONCAT412(uVar16, CONCAT48(uVar15, CONCAT44(uVar14, uVar13)));
                    if (*(longlong *) (lVar10 + 0x28) != 0) {
                        FUN_140103cf0(*(longlong *) (lVar10 + 0x28), &local_108, local_b8, 0,
                                      (ulonglong) puVar18 & 0xffffffff00000000 |
                                      (ulonglong)
                                              (uint) ((DAT_140c63664 - *(float *) (lVar10 + 0x30)) *
                                                      *(float *) (lVar10 + 0x34)));
                    }
                }
                uVar13 = 6;
                if (param_9 != '\0') {
                    uVar13 = 0x406;
                }
                (**(code * *)(*DAT_140c65680 + 0x108))
                        (DAT_140c65680, param_4, lVar4, 0xffffffffffffffff, local_a8, uVar13, param_8, 1);
                *param_3 = local_100 + 2;
                if (lVar4 != 0) {
                    FUN_14018b900(lVar4, 0);
                }
                bVar2 = true;
            }
            plVar7 = plVar7 + 0xb;
            uVar9 = (ulonglong) ((uint) uVar9 + 1);
        } while (plVar7 != plVar3);
    }
    plVar7 = local_d0;
    if (local_d0 != plVar3) {
        plVar8 = local_d0 + 3;
        do {
            if (plVar8[5] != 0) {
                FUN_14018b900(plVar8[5], 0);
            }
            if (*plVar8 != 0) {
                FUN_14018b900(*plVar8, 0);
            }
            plVar1 = plVar8 + 8;
            plVar8 = plVar8 + 0xb;
        } while (plVar1 != plVar3);
    }
    if (plVar7 != (longlong *) 0x0) {
        FUN_14018b900(plVar7, 0);
    }
    return iVar6;
}


void FUN_140506b20(longlong param_1) {
    undefined4 uVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    ulonglong * puVar8;
    int iVar9;
    float fVar10;
    ulonglong in_stack_ffffffffffffff88;
    int local_48;
    int local_44;
    int local_40;
    int local_3c;
    int local_38;
    int local_34;
    int local_30;
    int local_2c;

    local_48 = *(int *) (param_1 + 0x2cc);
    iVar2 = 0;
    local_44 = *(int *) (param_1 + 0x2d0);
    iVar7 = *(int *) (param_1 + 0x2d4);
    iVar9 = *(int *) (param_1 + 0x2d8);
    fVar10 = 1.0;
    uVar6 = 0;
    puVar8 = (ulonglong *) (param_1 + 0x448);
    local_40 = iVar7;
    local_3c = iVar9;
    iVar4 = local_48;
    iVar5 = local_44;
    do {
        if ((uVar6 == 0) || (puVar8[-2] != 0)) {
            local_48 = iVar4 + iVar2;
            local_38 = local_48;
            local_34 = iVar5;
            local_30 = iVar7;
            local_2c = iVar9;
            uVar1 = FUN_140506500();
            in_stack_ffffffffffffff88 = *puVar8;
            iVar2 = FUN_140506750(uVar1, param_1 + 0x438 + (ulonglong) uVar6 * 0xe8);
            if ((~*(byte *) (param_1 + 0x298) & 1) == 0) break;
            lVar3 = (**(code * *)(**(longlong **) (*(longlong *) (param_1 + 0x2b8) + 0x60) + 0x20))();
            iVar2 = iVar2 + (int) (longlong) (*(float *) (lVar3 + 0x14) + fVar10);
            iVar7 = local_40;
            iVar9 = local_3c;
            iVar4 = local_48;
            iVar5 = local_44;
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 0x1d;
    } while (uVar6 < 2);
    if (((((~*(byte *) (param_1 + 0x298) & 1) == 0) && ((*(byte *) (param_1 + 0x1c) & 8) != 0)) &&
         (*(longlong *) (param_1 + 0x20) != 0)) &&
        ((*(longlong *) (*(longlong *) (param_1 + 0x20) + 0xb40) == param_1 &&
          (uVar6 = FUN_14018cdf0(), iVar5 = local_3c, iVar4 = local_40, iVar9 = local_44,
           iVar7 = local_48, (uVar6 >> 9 & 1) != 0)))) {
        if ((*(uint *) (param_1 + 0x2c0) & 2) == 0) {
            uVar6 = *(uint *) (param_1 + 0x2c0) & 1;
        } else {
            uVar6 = 2;
        }
        in_stack_ffffffffffffff88 = in_stack_ffffffffffffff88 & 0xffffffffffffff00;
        fVar10 = (float) FUN_140506520();
        local_44 = iVar9 + ((iVar5 - iVar9) - DAT_140c4610c) / 2;
        local_3c = local_44 + DAT_140c4610c;
        if (uVar6 == 1) {
            iVar7 = iVar7 + ((iVar4 - (int) fVar10) - iVar7) / 2;
        } else if (uVar6 == 2) {
            iVar7 = iVar4 - (int) fVar10;
        }
        local_48 = iVar7 + (int) fVar10 + (-2 - DAT_140c46108);
        local_40 = local_48 + 2;
        if ((ulonglong) *(uint *) (param_1 + 0x2c4) < *(ulonglong *) (DAT_140c63678 + 0x30)) {
            lVar3 = (ulonglong) *(uint *) (param_1 + 0x2c4) * 0x20 + *(longlong *) (DAT_140c63678 + 0x28);
        } else {
            lVar3 = *(longlong *) (DAT_140c63678 + 0x28);
        }
        if (*(longlong *) (param_1 + 0x400) != 0) {
            FUN_140103cf0(*(longlong *) (param_1 + 0x400), &local_48, lVar3, 0,
                          in_stack_ffffffffffffff88 & 0xffffffff00000000 |
                          (ulonglong)
                                  (uint) ((DAT_140c63664 - *(float *) (param_1 + 0x408)) *
                                          *(float *) (param_1 + 0x40c)));
        }
    }
    return;
}


void FUN_140506e10(longlong param_1, undefined4 param_2, undefined8 param_3, undefined param_4) {
    if (((*(byte *) (param_1 + 0x1c) & 0x80) != 0) && ((~*(byte *) (param_1 + 0x298) & 1) == 0)) {
        FUN_1400e8c50(*(undefined8 *) (param_1 + 0x20), param_1);
    }
    FUN_1400d2120(param_1, param_2, param_3, param_4);
    return;
}


longlong FUN_140506ea0(undefined8 param_1) {
    longlong lVar1;
    undefined8 * puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(uint *) (lVar1 + 0x1b0) >> 0x12 & 1) == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "Window", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1405070d0(undefined8 param_1) {
    longlong lVar1;
    longlong * plVar2;
    longlong * plVar3;
    undefined4 uVar4;

    plVar2 = (longlong *) FUN_140506ea0();
    if (plVar2 != (longlong *) 0x0) {
        plVar3 = (longlong *) FUN_140417660(param_1, 2);
        if ((((plVar3 == (longlong *) 0x0) || (lVar1 = *plVar3, lVar1 == 0)) ||
             (*(int *) (lVar1 + 0x4a0) == 0)) || (*(longlong *) (lVar1 + 8) == 0)) {
            uVar4 = 0;
        } else {
            uVar4 = _DAT_00000000;
            if (*(int *) (lVar1 + 0x4a0) != 0) {
                uVar4 = **(undefined4 **) (lVar1 + 8);
            }
        }
        FUN_140505bb0(plVar2, 0xf, 0, uVar4, 0, 0);
        lVar1 = plVar2[0xa4];
        plVar2[0xa4] = 0;
        if (lVar1 != 0) {
            plVar2[0xa7] = plVar2[0xa6];
            *(undefined *) ((longlong) plVar2 + 0x434) = 0;
            *(undefined4 *) (plVar2 + 0x86) = 0;
        }
        plVar2[0xa6] = 0;
        plVar2[0xa7] = 0;
        (**(code * *)(*plVar2 + 0x238))(plVar2);
    }
    return 0;
}


undefined8 FUN_1405075a0(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    double dVar5;

    lVar2 = FUN_140506ea0();
    lVar3 = *(longlong *) (param_1 + 0x10);
    if (lVar2 == 0) {
        LAB_1405075e6:
        *(undefined4 *) (lVar3 + 8) = 0;
    } else {
        uVar4 = 0;
        if (1 < (int) (lVar3 - *(longlong *) (param_1 + 0x18) >> 4)) {
            dVar5 = (double) FUN_140056c40(param_1, 2);
            uVar4 = (ulonglong) dVar5;
            if (1 < (uint) uVar4) {
                lVar3 = *(longlong *) (param_1 + 0x10);
                goto LAB_1405075e6;
            }
        }
        pdVar1 = *(double **) (param_1 + 0x10);
        lVar3 = *(longlong *) ((uVar4 & 0xffffffff) * 0xe8 + 0x438 + lVar2);
        dVar5 = (double) lVar3;
        if (lVar3 < 0) {
            dVar5 = dVar5 + 1.844674407370955e+19;
        }
        *pdVar1 = dVar5;
        *(undefined4 *) (pdVar1 + 1) = 3;
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_140507640(longlong param_1) {
    int iVar1;
    longlong * plVar2;
    longlong * plVar3;
    longlong * plVar4;
    longlong lVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    double dVar8;
    undefined local_res10[8];

    plVar2 = (longlong *) FUN_140506ea0();
    if (plVar2 == (longlong *) 0x0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar7 = 0;
    if (2 < (int) (*(longlong *) (param_1 + 0x10) - *(longlong *) (param_1 + 0x18) >> 4)) {
        dVar8 = (double) FUN_140056c40(param_1, 3);
        uVar7 = (ulonglong) dVar8;
        if (1 < (uint) uVar7) {
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    plVar3 = (longlong *) (*(longlong *) (param_1 + 0x18) + 0x10);
    if (((plVar3 < *(longlong **) (param_1 + 0x10)) && (plVar3 != &DAT_140a12138)) &&
        (*(int *) (*(longlong *) (param_1 + 0x18) + 0x18) == 0)) {
        plVar3 = plVar2 + (uVar7 & 0xffffffff) * 0x1d;
        plVar3[0x88] = -1;
    } else {
        plVar4 = &DAT_140a12138;
        if (plVar3 < *(longlong **) (param_1 + 0x10)) {
            plVar4 = plVar3;
        }
        if ((*(int *) (plVar4 + 1) == 3) ||
            ((*(int *) (plVar4 + 1) == 4 &&
              (iVar1 = FUN_14005ac80(*plVar4 + 0x20, local_res10), iVar1 != 0)))) {
            plVar3 = plVar2 + (uVar7 & 0xffffffff) * 0x1d;
            dVar8 = (double) FUN_140056c40(param_1, 2);
            lVar5 = 0;
            if ((9.223372036854776e+18 <= dVar8) &&
                (dVar8 = dVar8 - 9.223372036854776e+18, dVar8 < 9.223372036854776e+18)) {
                lVar5 = -0x8000000000000000;
            }
            plVar3[0x88] = (longlong) dVar8 + lVar5;
        } else {
            plVar4 = (longlong *) FUN_140056ab0(param_1, 2, "Game.Money");
            plVar3 = plVar2 + (uVar7 & 0xffffffff) * 0x1d;
            plVar3[0x88] = *plVar4;
        }
    }
    uVar7 = plVar3[0x88];
    if (uVar7 != 0) {
        uVar6 = plVar2[0x87];
        if (uVar7 < (ulonglong) plVar2[0x87]) {
            uVar6 = uVar7;
        }
        uVar7 = plVar3[0x87];
        plVar3[0x87] = uVar6;
        if (uVar6 != uVar7) {
            plVar3[0x8a] = plVar3[0x89];
            *(undefined *) ((longlong) plVar2 + 0x434) = 0;
            *(undefined4 *) (plVar2 + 0x86) = 0;
        }
        plVar3[0x89] = plVar3[0x87];
        plVar3[0x8a] = plVar3[0x87];
        (**(code * *)(*plVar2 + 0x238))(plVar2);
    }
    return 0;
}


undefined8 FUN_140507850(longlong param_1) {
    double *pdVar1;
    longlong lVar2;
    longlong lVar3;
    ulonglong uVar4;
    double dVar5;

    lVar2 = FUN_140506ea0();
    lVar3 = *(longlong *) (param_1 + 0x10);
    if (lVar2 == 0) {
        LAB_140507896:
        *(undefined4 *) (lVar3 + 8) = 0;
    } else {
        uVar4 = 0;
        if (1 < (int) (lVar3 - *(longlong *) (param_1 + 0x18) >> 4)) {
            dVar5 = (double) FUN_140056c40(param_1, 2);
            uVar4 = (ulonglong) dVar5;
            if (1 < (uint) uVar4) {
                lVar3 = *(longlong *) (param_1 + 0x10);
                goto LAB_140507896;
            }
        }
        pdVar1 = *(double **) (param_1 + 0x10);
        lVar3 = *(longlong *) ((uVar4 & 0xffffffff) * 0xe8 + 0x440 + lVar2);
        dVar5 = (double) lVar3;
        if (lVar3 < 0) {
            dVar5 = dVar5 + 1.844674407370955e+19;
        }
        *pdVar1 = dVar5;
        *(undefined4 *) (pdVar1 + 1) = 3;
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_1405078f0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;
    ulonglong uVar4;
    double dVar5;
    undefined8 local_28;
    undefined4 local_20;
    undefined4 local_1c;
    undefined4 local_18;
    undefined4 local_14;

    lVar1 = FUN_140506ea0();
    lVar2 = *(longlong *) (param_1 + 0x10);
    if (lVar1 == 0) {
        LAB_140507938:
        *(undefined4 *) (lVar2 + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        return 1;
    }
    uVar4 = 0;
    if (1 < (int) (lVar2 - *(longlong *) (param_1 + 0x18) >> 4)) {
        dVar5 = (double) FUN_140056c40(param_1, 2);
        uVar4 = (ulonglong) dVar5;
        if (1 < (uint) uVar4) {
            lVar2 = *(longlong *) (param_1 + 0x10);
            goto LAB_140507938;
        }
    }
    lVar2 = *(longlong *) (lVar1 + 0x458);
    local_28 = *(undefined8 *) ((uVar4 & 0xffffffff) * 0xe8 + 0x438 + lVar1);
    local_20 = *(undefined4 *) (lVar2 + 0x10);
    local_1c = *(undefined4 *) (lVar2 + 0x14);
    local_18 = *(undefined4 *) (lVar2 + 0x18);
    local_14 = *(undefined4 *) (lVar2 + 0x1c);
    uVar3 = FUN_140501210(param_1, &local_28);
    return uVar3;
}


undefined8 FUN_140508000(longlong param_1) {
    double *pdVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    uint uVar5;
    int iVar6;
    longlong lVar7;
    float fVar8;

    lVar3 = FUN_140506ea0();
    if (lVar3 == 0) {
        return 0;
    }
    fVar8 = 1.0;
    iVar6 = 0;
    lVar7 = lVar3 + 0x448;
    uVar5 = 0;
    do {
        if ((uVar5 == 0) || (*(longlong *) (lVar7 + -0x10) != 0)) {
            FUN_140506500(lVar3);
            iVar2 = FUN_140506750((ulonglong) uVar5 * 0xe8, lVar3 + 0x438 + (ulonglong) uVar5 * 0xe8);
            iVar6 = iVar6 + iVar2;
            if ((~*(byte *) (lVar3 + 0x298) & 1) == 0) break;
            lVar4 = (**(code * *)(**(longlong **) (*(longlong *) (lVar3 + 0x2b8) + 0x60) + 0x20))();
            iVar6 = iVar6 + (int) (longlong) (*(float *) (lVar4 + 0x14) + fVar8);
        }
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0xe8;
    } while (uVar5 < 2);
    pdVar1 = *(double **) (param_1 + 0x10);
    *pdVar1 = (double) iVar6;
    *(undefined4 *) (pdVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


void FUN_1405081d0(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *) (param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.CashWindow", 0x11);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x000140508581)

void FUN_140508240(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong * plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 * puVar8;
    ulonglong uVar9;
    ulonglong * puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x140508251;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *) (&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong) (&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *) (param_1 + 400);
    *(undefined8 *) (&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *) (&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x140508292;
    FUN_1407e4830((longlong) alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int) uVar13 + 1;
        uVar13 = (ulonglong) uVar12;
        uVar16 = (int) uVar17 + 1;
        uVar17 = (ulonglong) uVar16;
        *(undefined8 *) ((longlong) alStackX16 + uVar9 + lVar4) =
                *(undefined8 *) ((longlong) &PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *) ((longlong) &PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *) ((longlong) alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong) &PTR_s_GetAmount_140c59930 +
             ((longlong) (int) uVar16 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar8 = (undefined8 *) ((longlong) alStackX16 + (longlong) (int) uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int) uVar9 + 1;
        uVar9 = (ulonglong) uVar12;
        *puVar8 = *(undefined8 *) (lVar14 + (longlong) puVar8);
        puVar8[1] = *(undefined8 *) (lVar14 + -8 + (longlong) (puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 10);
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x14050832f;
    LuaElementLoaderOrSo(lVar2, "Apollo.CashWindow");
    puVar8 = *(undefined8 **) (lVar2 + 0x10);
    iVar1 = *(int *) (puVar8 + -1);
    if (iVar1 == 2) {
        LAB_140508351:
        if (*(int *) (puVar8 + -1) == 2) {
            LAB_14050836d:
            uVar9 = puVar8[-2];
        } else if (*(int *) (puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        } else {
            uVar9 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14050836d;
        if (iVar1 == 7) goto LAB_140508351;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_14050836d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *) (puVar8 + 1) = *(undefined4 *) (puVar8 + -1);
    *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *) (lVar2 + 0x10);
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x14050839c;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar11 = *(longlong *) (lVar2 + 0x10);
    *(undefined8 *) ((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *) ((longlong) &pcStackX8 + lVar4) = 4;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405083c2;
    FUN_14005ea50(lVar2, lVar14 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar11 + -0x10);
    *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *) ((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong *) (lVar2 + 0x10);
    lVar14 = (longlong) alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *) (&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *) (lVar14 + 8);
            if (*(ulonglong *) (*(longlong *) (lVar2 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (lVar2 + 0x20) + 0x78)) {
                *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x14050840a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x14050842f;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 *) (lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **) (lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *) (plVar3 + 1) = 6;
            *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + 0x10;
            *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x140508453;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar11 + lVar6) != '\0');
            *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x140508474;
            uVar7 = FUN_140062650(lVar2, lVar11);
            lVar11 = *(longlong *) (lVar2 + 0x10);
            *(undefined8 *) ((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *) ((longlong) &pcStackX8 + lVar4) = 4;
            *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x140508499;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar11 + -0x10);
            *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *) (lVar14 + 0x10);
            lVar6 = *(longlong *) (lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *) (lVar2 + 0x20);
    *(longlong *) (lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405084dc;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 *) (lVar2 + 0x10);
    *(undefined8 *) ((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *) ((longlong) &pcStackX8 + lVar4) = 4;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x140508501;
    FUN_14005e8e0(lVar2, lVar14 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *) (lVar2 + 0x10);
    iVar1 = *(int *) (lVar14 + -8);
    puVar10 = (ulonglong *) (lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_14050853c:
        if (*(int *) (lVar14 + -8) != 2) {
            if (*(int *) (lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_140508555;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_14050853c;
        if (iVar1 != 8) goto LAB_140508555;
    }
    uVar15 = *puVar10;
    LAB_140508555:
    *(ulonglong **) (lVar2 + 0x10) = puVar10;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x140508564;
    FUN_1400ed720(param_1, uVar9, uVar15);
    *(undefined **) ((longlong) alStackX16 + lVar4 + -0x10) = &LAB_1405085c0;
    *(code * *)((longlong) &pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x14050859b;
    FUN_1400f85d0(param_1 + 0xa80, L"CashWindow", (longlong) alStackX16 + lVar4 + -0x10);
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405085ab;
    FUN_1407db4f0(*(ulonglong *) (&stack0x00004010 + lVar4) ^
                  (ulonglong) (&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_140508730(longlong param_1, longlong param_2, longlong param_3) {
    longlong * plVar1;
    longlong * plVar2;
    longlong * plVar3;

    plVar3 = (longlong *) FUN_140508be0(param_3, *(undefined8 *) (param_1 + 0x10), param_2);
    plVar2 = *(longlong **) (param_1 + 0x10);
    if (plVar3 != plVar2) {
        plVar3 = plVar3 + 3;
        do {
            if (plVar3[5] != 0) {
                FUN_14018b900(plVar3[5], 0);
            }
            if (*plVar3 != 0) {
                FUN_14018b900(*plVar3, 0);
            }
            plVar1 = plVar3 + 8;
            plVar3 = plVar3 + 0xb;
        } while (plVar1 != plVar2);
    }
    param_3 = param_3 - param_2;
    *(longlong *) (param_1 + 0x10) =
            *(longlong *) (param_1 + 0x10) +
            (SUB168(SEXT816(-0x2e8ba2e8ba2e8ba3) * SEXT816(param_3) >> 0x44, 0) -
             (param_3 / -0x638e38e38e38e38e + (param_3 >> 0x3f))) * 0x58;
    return param_2;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_1405087e0(longlong param_1, undefined8 *param_2, undefined8 *param_3) {
    undefined8 uVar1;
    undefined8 uVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 * puVar7;
    longlong lVar8;
    ulonglong uVar9;
    longlong lVar10;
    undefined8 local_68;
    longlong local_60;
    undefined local_58[16];
    undefined4 local_48;
    undefined4 local_44;
    undefined8 local_40;
    undefined local_38[16];
    undefined8 local_28;

    lVar5 = *(longlong *) (param_1 + 0x10);
    if (lVar5 == *(longlong *) (param_1 + 0x18)) {
        uVar9 = 0x2e8ba2e8ba2e8ba3;
        lVar5 = (lVar5 - *(longlong *) (param_1 + 8)) / 0x58;
        lVar4 = lVar5 * 2;
        if (lVar5 == 0) {
            lVar4 = 1;
        }
        uVar3 = FUN_14018a3e0(lVar4 * 0x58);
        lVar10 = SUB168(ZEXT816(uVar9) * ZEXT816(uVar3) >> 0x44, 0) * 0x58;
        lVar4 = FUN_14018b280(lVar10, 0);
        lVar5 = lVar4;
        for (puVar7 = *(undefined8 **) (param_1 + 8); puVar7 != param_2; puVar7 = puVar7 + 0xb) {
            if (lVar5 != 0) {
                FUN_140508a90(lVar5, puVar7);
            }
            lVar5 = lVar5 + 0x58;
        }
        if (lVar5 != 0) {
            FUN_140508a90(lVar5, param_3);
        }
        puVar7 = *(undefined8 **) (param_1 + 0x10);
        lVar8 = lVar5 + 0x58;
        if (param_2 != puVar7) {
            param_2 = (undefined8 *) ((longlong) param_2 + (lVar8 - lVar5) + -0x58);
            do {
                if (lVar8 != 0) {
                    FUN_140508a90(lVar8, param_2);
                }
                param_2 = param_2 + 0xb;
                lVar8 = lVar8 + 0x58;
            } while (param_2 != puVar7);
        }
        lVar5 = *(longlong *) (param_1 + 0x10);
        for (lVar6 = *(longlong *) (param_1 + 8); lVar6 != lVar5; lVar6 = lVar6 + 0x58) {
            if (*(longlong *) (lVar6 + 0x40) != 0) {
                FUN_14018b900(*(longlong *) (lVar6 + 0x40), 0);
            }
            if (*(longlong *) (lVar6 + 0x18) != 0) {
                FUN_14018b900(*(longlong *) (lVar6 + 0x18), 0);
            }
        }
        if (*(longlong *) (param_1 + 8) != 0) {
            FUN_14018b900(*(longlong *) (param_1 + 8), 0);
        }
        *(longlong *) (param_1 + 8) = lVar4;
        *(longlong *) (param_1 + 0x18) = lVar10 + lVar4;
        *(longlong *) (param_1 + 0x10) = lVar8;
    } else {
        if (lVar5 != 0) {
            FUN_140508a90(lVar5, lVar5 + -0x58);
        }
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x58;
        uVar1 = *param_3;
        local_58 = ZEXT816(0);
        uVar2 = param_3[1];
        local_60 = 0;
        FUN_14001c1b0(&local_68, param_3[3], param_3[4]);
        local_48 = *(undefined4 *) (param_3 + 6);
        local_38 = ZEXT816(0);
        local_44 = *(undefined4 *) ((longlong) param_3 + 0x34);
        local_28 = 0;
        FUN_14001c1b0(&local_40, param_3[8], param_3[9]);
        FUN_140508b10(param_2, *(longlong *) (param_1 + 0x10) + -0xb0,
                      *(longlong *) (param_1 + 0x10) + -0x58);
        lVar5 = local_60;
        *param_2 = uVar1;
        param_2[1] = uVar2;
        if (&local_68 != param_2 + 2) {
            FUN_14001c480(param_2 + 2, local_60, local_58._0_8_);
        }
        *(undefined4 *) (param_2 + 6) = local_48;
        *(undefined4 *) ((longlong) param_2 + 0x34) = local_44;
        if (&local_40 != param_2 + 7) {
            FUN_14001c480(param_2 + 7, local_38._0_8_, local_38._8_8_);
        }
        if (local_38._0_8_ != 0) {
            FUN_14018b900(local_38._0_8_, 0);
        }
        if (lVar5 != 0) {
            FUN_14018b900(lVar5, 0);
        }
    }
    return;
}


undefined8 *FUN_140508a90(undefined8 *param_1, undefined8 *param_2) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    FUN_14001c1b0(param_1 + 2, param_2[3], param_2[4]);
    *(undefined4 *) (param_1 + 6) = *(undefined4 *) (param_2 + 6);
    *(undefined4 *) ((longlong) param_1 + 0x34) = *(undefined4 *) ((longlong) param_2 + 0x34);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    FUN_14001c1b0(param_1 + 7, param_2[8], param_2[9]);
    return param_1;
}


undefined8 *FUN_140508b10(longlong param_1, longlong param_2, undefined8 *param_3) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 * puVar3;
    undefined8 * puVar4;

    lVar2 = (param_2 - param_1) / 0x58;
    if (0 < lVar2) {
        puVar1 = (undefined8 *) (param_2 + 0x18);
        puVar3 = param_3 + 2;
        do {
            param_3 = param_3 + -0xb;
            *param_3 = puVar1[-0xe];
            puVar4 = puVar3 + -0xb;
            puVar3[-0xc] = puVar1[-0xd];
            if (puVar1 + -0xc != puVar4) {
                FUN_14001c480(puVar4, puVar1[-0xb], puVar1[-10]);
            }
            *(undefined4 *) (puVar3 + -7) = *(undefined4 *) (puVar1 + -8);
            *(undefined4 *) ((longlong) puVar3 + -0x34) = *(undefined4 *) ((longlong) puVar1 + -0x3c);
            if (puVar1 + -7 != puVar3 + -6) {
                FUN_14001c480(puVar3 + -6, puVar1[-6], puVar1[-5]);
            }
            lVar2 = lVar2 + -1;
            puVar1 = puVar1 + -0xb;
            puVar3 = puVar4;
        } while (0 < lVar2);
    }
    return param_3;
}


undefined8 *FUN_140508be0(longlong param_1, longlong param_2, undefined8 *param_3) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 * puVar3;

    lVar2 = (param_2 - param_1) / 0x58;
    if (0 < lVar2) {
        puVar3 = param_3 + 2;
        puVar1 = (undefined8 *) (param_1 + 0x18);
        do {
            *param_3 = puVar1[-3];
            puVar3[-1] = puVar1[-2];
            if (puVar1 + -1 != puVar3) {
                FUN_14001c480(puVar3, *puVar1, puVar1[1]);
            }
            *(undefined4 *) (puVar3 + 4) = *(undefined4 *) (puVar1 + 3);
            *(undefined4 *) ((longlong) puVar3 + 0x24) = *(undefined4 *) ((longlong) puVar1 + 0x1c);
            if (puVar1 + 4 != puVar3 + 5) {
                FUN_14001c480(puVar3 + 5, puVar1[5], puVar1[6]);
            }
            lVar2 = lVar2 + -1;
            param_3 = param_3 + 0xb;
            puVar3 = puVar3 + 0xb;
            puVar1 = puVar1 + 0xb;
        } while (0 < lVar2);
    }
    return param_3;
}


undefined8 *FUN_140508cb0(undefined8 *param_1) {
    undefined4 uVar1;
    undefined2 *puVar2;
    undefined8 * puVar3;
    int iVar4;

    puVar3 = param_1 + 9;
    iVar4 = 3;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    do {
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar2 = (undefined2 *) FUN_14018b280(0x10);
        puVar3[-1] = puVar2;
        *puVar3 = puVar2;
        puVar3[1] = puVar2 + 8;
        if (puVar2 != (undefined2 *) 0x0) {
            *puVar2 = 0;
        }
        uVar1 = DAT_140c63664;
        puVar3[-4] = 0;
        *(undefined4 *) ((longlong) puVar3 + -0x14) = 0x3f800000;
        *(undefined4 *) (puVar3 + -3) = uVar1;
        puVar3 = puVar3 + 6;
        iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    return param_1;
}


undefined8 *FUN_140508dd0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_LAB_140b6a440;
    FUN_140001f70();
    FUN_140182970(param_1);
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140508e20(longlong param_1) {
    FUN_1400027c0(param_1 + 0x480);
    *(undefined4 *) (param_1 + 0x400) = 1;
    return;
}


void FUN_140508f90(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4,
                   undefined8 param_5) {
    longlong * plVar1;
    undefined auStack216[32];
    undefined * local_b8;
    undefined8 local_b0;
    undefined local_98[96];
    ulonglong local_38;

    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack216;
    local_b8 = (undefined *) 0x0;
    FUN_1400d45e0(local_98, param_1, param_2, param_5);
    plVar1 = (longlong *) FUN_14018b280(0x670, 8);
    if (plVar1 == (longlong *) 0x0) {
        plVar1 = (longlong *) 0x0;
    } else {
        local_b8 = local_98;
        local_b0 = param_4;
        FUN_140182490(plVar1, param_1, param_2, param_3);
        *plVar1 = (longlong) &PTR_LAB_140b6a440;
        FUN_140001eb0(plVar1 + 0x90);
        *(undefined4 *) (plVar1 + 0xcd) = 0;
        plVar1[0x36] = plVar1[0x36] | 0x80000000000;
        *(undefined4 *) ((longlong) plVar1 + 0x66c) = 0xffffffff;
        if (*(int *) (plVar1 + 0x98) == 0) {
            BinkSetMemory(&LAB_140001ea0, FUN_140001e60);
            BinkSetSoundSystem(BinkOpenDirectSound_exref, 0);
            *(undefined4 *) (plVar1 + 0x98) = 1;
        }
    }
    (**(code * *)(*plVar1 + 0x2c8))(plVar1, param_5);
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack216);
    return;
}


int FUN_1405090d0(void) {
    int iVar1;
    longlong lVar2;
    int iVar3;
    int iVar4;

    if ((DAT_140dc3288 & 1) == 0) {
        DAT_140dc3288 = DAT_140dc3288 | 1;
        lVar2 = FUN_140200220(0x465);
        if (lVar2 == 0) {
            DAT_140dc328c = 0.5;
        } else {
            DAT_140dc328c = *(float *) (lVar2 + 0x18);
        }
    }
    iVar4 = *DAT_140c63750;
    iVar3 = DAT_140c3b950;
    if (iVar4 < DAT_140c3b950) {
        iVar3 = iVar4;
    }
    iVar1 = DAT_140c3b6f0;
    if (iVar4 < DAT_140c3b6f0) {
        iVar1 = iVar4;
    }
    iVar3 = (int) (*(float *) (&DAT_140c3b960 + (longlong) iVar3 * 4) *
                   *(float *) (&DAT_140c3b700 + (longlong) iVar1 * 4) * DAT_140dc328c * 32768.0);
    iVar4 = 0;
    if ((-1 < iVar3) && (iVar4 = iVar3, 0x10000 < iVar3)) {
        iVar4 = 0x10000;
    }
    iVar3 = (**(code * *) * DAT_140c65848)();
    if (iVar3 == 0) {
        iVar4 = 0;
    }
    return iVar4;
}


void FUN_140509400(undefined8 param_1, longlong param_2) {
    longlong lVar1;
    undefined8 local_18;
    undefined4 local_10;

    lVar1 = *(longlong *) (param_2 + 0x20);
    local_18 = FUN_140062650(param_2, "Apollo.BinkWindow", 0x11);
    local_10 = 4;
    FUN_14005e8e0(param_2, lVar1 + 0xa0, &local_18, *(undefined8 *) (param_2 + 0x10));
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    FUN_140058bf0(param_2, 0xfffffffe);
    return;
}



// WARNING: Removing unreachable block (ram,0x0001405097b1)

void FUN_140509470(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong * plVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    undefined8 uVar7;
    undefined8 * puVar8;
    ulonglong uVar9;
    ulonglong * puVar10;
    undefined8 unaff_RBX;
    longlong lVar11;
    undefined8 unaff_RBP;
    uint uVar12;
    longlong lVar14;
    ulonglong uVar15;
    uint uVar16;
    undefined8 unaff_R14;
    code *pcStackX8;
    longlong alStackX16[3];
    undefined8 uStack40;
    ulonglong uVar13;
    ulonglong uVar17;

    uStack40 = 0x140509481;
    lVar4 = FUN_1407f0f60();
    lVar4 = -lVar4;
    *(ulonglong *) (&stack0x00004010 + lVar4) =
            DAT_140c0f7b0 ^ (ulonglong) (&stack0xffffffffffffffe0 + lVar4);
    lVar2 = *(longlong *) (param_1 + 400);
    *(undefined8 *) (&stack0x00004058 + lVar4) = unaff_RBX;
    *(undefined8 *) (&stack0x00004020 + lVar4) = unaff_R14;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405094c2;
    FUN_1407e4830((longlong) alStackX16 + lVar4);
    uVar15 = 0;
    uVar9 = uVar15;
    uVar13 = uVar15;
    uVar17 = uVar15;
    do {
        uVar12 = (int) uVar13 + 1;
        uVar13 = (ulonglong) uVar12;
        uVar16 = (int) uVar17 + 1;
        uVar17 = (ulonglong) uVar16;
        *(undefined8 *) ((longlong) alStackX16 + uVar9 + lVar4) =
                *(undefined8 *) ((longlong) &PTR_DAT_140c56a80 + uVar9);
        puVar8 = (undefined8 *) ((longlong) &PTR_FUN_140c56a88 + uVar9);
        uVar9 = uVar9 + 0x10;
        *(undefined8 *) ((longlong) alStackX16 + uVar9 + lVar4 + -8) = *puVar8;
    } while (uVar12 < 0x97);
    lVar14 = (longlong) &PTR_s_SetMovie_140c599d0 +
             ((longlong) (int) uVar16 * -0x10 - ((longlong) alStackX16 + lVar4));
    puVar8 = (undefined8 *) ((longlong) alStackX16 + (longlong) (int) uVar16 * 0x10 + lVar4);
    uVar9 = uVar15;
    do {
        uVar12 = (int) uVar9 + 1;
        uVar9 = (ulonglong) uVar12;
        *puVar8 = *(undefined8 *) (lVar14 + (longlong) puVar8);
        puVar8[1] = *(undefined8 *) (lVar14 + -8 + (longlong) (puVar8 + 2));
        puVar8 = puVar8 + 2;
    } while (uVar12 < 0x10);
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x14050955f;
    LuaElementLoaderOrSo(lVar2, "Apollo.BinkWindow");
    puVar8 = *(undefined8 **) (lVar2 + 0x10);
    iVar1 = *(int *) (puVar8 + -1);
    if (iVar1 == 2) {
        LAB_140509581:
        if (*(int *) (puVar8 + -1) == 2) {
            LAB_14050959d:
            uVar9 = puVar8[-2];
        } else if (*(int *) (puVar8 + -1) == 7) {
            uVar9 = puVar8[-2] + 0x30;
        } else {
            uVar9 = 0;
        }
    } else {
        if ((iVar1 == 5) || (iVar1 == 6)) goto LAB_14050959d;
        if (iVar1 == 7) goto LAB_140509581;
        uVar9 = uVar15;
        if (iVar1 == 8) goto LAB_14050959d;
    }
    *puVar8 = puVar8[-2];
    *(undefined4 *) (puVar8 + 1) = *(undefined4 *) (puVar8 + -1);
    *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *) (lVar2 + 0x10);
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405095cc;
    uVar5 = FUN_140062650(lVar2, "__index", 7);
    lVar11 = *(longlong *) (lVar2 + 0x10);
    *(undefined8 *) ((longlong) alStackX16 + lVar4 + -0x10) = uVar5;
    *(undefined4 *) ((longlong) &pcStackX8 + lVar4) = 4;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405095f2;
    FUN_14005ea50(lVar2, lVar14 + -0x20, (longlong) alStackX16 + lVar4 + -0x10, lVar11 + -0x10);
    *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + -0x10;
    lVar11 = *(longlong *) ((longlong) alStackX16 + lVar4);
    lVar6 = *(longlong *) (lVar2 + 0x10);
    lVar14 = (longlong) alStackX16 + lVar4;
    if (lVar11 != 0) {
        *(undefined8 *) (&stack0x00004060 + lVar4) = unaff_RBP;
        do {
            uVar5 = *(undefined8 *) (lVar14 + 8);
            if (*(ulonglong *) (*(longlong *) (lVar2 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (lVar2 + 0x20) + 0x78)) {
                *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x14050963a;
                FUN_14005e2c0(lVar2);
            }
            *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x14050965f;
            lVar6 = FUN_140060ab0(lVar2, 0);
            *(undefined8 *) (lVar6 + 0x20) = uVar5;
            plVar3 = *(longlong **) (lVar2 + 0x10);
            *plVar3 = lVar6;
            *(undefined4 *) (plVar3 + 1) = 6;
            *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + 0x10;
            *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x140509683;
            uVar5 = FUN_1400580e0(lVar2, 0xfffffffe);
            lVar6 = -1;
            do {
                lVar6 = lVar6 + 1;
            } while (*(char *) (lVar11 + lVar6) != '\0');
            *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405096a4;
            uVar7 = FUN_140062650(lVar2, lVar11);
            lVar11 = *(longlong *) (lVar2 + 0x10);
            *(undefined8 *) ((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
            *(undefined4 *) ((longlong) &pcStackX8 + lVar4) = 4;
            *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405096c9;
            FUN_14005ea50(lVar2, uVar5, (longlong) alStackX16 + lVar4 + -0x10, lVar11 + -0x10);
            *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + -0x10;
            lVar11 = *(longlong *) (lVar14 + 0x10);
            lVar6 = *(longlong *) (lVar2 + 0x10);
            lVar14 = lVar14 + 0x10;
        } while (lVar11 != 0);
    }
    lVar14 = *(longlong *) (lVar2 + 0x20);
    *(longlong *) (lVar2 + 0x10) = lVar6 + -0x10;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x14050970c;
    uVar7 = FUN_140062650(lVar2, "Apollo.Window", 0xd);
    uVar5 = *(undefined8 *) (lVar2 + 0x10);
    *(undefined8 *) ((longlong) alStackX16 + lVar4 + -0x10) = uVar7;
    *(undefined4 *) ((longlong) &pcStackX8 + lVar4) = 4;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x140509731;
    FUN_14005e8e0(lVar2, lVar14 + 0xa0, (longlong) alStackX16 + lVar4 + -0x10, uVar5);
    *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + 0x10;
    lVar14 = *(longlong *) (lVar2 + 0x10);
    iVar1 = *(int *) (lVar14 + -8);
    puVar10 = (ulonglong *) (lVar14 + -0x10);
    if (iVar1 == 2) {
        LAB_14050976c:
        if (*(int *) (lVar14 + -8) != 2) {
            if (*(int *) (lVar14 + -8) == 7) {
                uVar15 = *puVar10 + 0x30;
            }
            goto LAB_140509785;
        }
    } else if ((iVar1 != 5) && (iVar1 != 6)) {
        if (iVar1 == 7) goto LAB_14050976c;
        if (iVar1 != 8) goto LAB_140509785;
    }
    uVar15 = *puVar10;
    LAB_140509785:
    *(ulonglong **) (lVar2 + 0x10) = puVar10;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x140509794;
    FUN_1400ed720(param_1, uVar9, uVar15);
    *(code * *)((longlong) alStackX16 + lVar4 + -0x10) = FUN_140508f90;
    *(code * *)((longlong) &pcStackX8 + lVar4) = FUN_140001b30;
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405097cb;
    FUN_1400f85d0(param_1 + 0xa80, L"Movie", (longlong) alStackX16 + lVar4 + -0x10);
    *(undefined8 *) ((longlong) &uStack40 + lVar4) = 0x1405097db;
    FUN_1407db4f0(*(ulonglong *) (&stack0x00004010 + lVar4) ^
                  (ulonglong) (&stack0xffffffffffffffe0 + lVar4));
    return;
}


longlong FUN_1405097f0(undefined8 param_1) {
    longlong lVar1;
    undefined8 * puVar2;
    undefined8 uVar3;
    char *pcVar4;

    lVar1 = FUN_1400d66a0(param_1, 1);
    if (lVar1 == 0) {
        return 0;
    }
    if ((*(ulonglong *) (lVar1 + 0x1b0) >> 0x2b & 1) == 0) {
        puVar2 = (undefined8 *) FUN_1400580e0(param_1, 1);
        if ((puVar2 == &DAT_140a12138) || (*(int *) (puVar2 + 1) == -1)) {
            pcVar4 = s_no_value_140c1dc88;
        } else {
            pcVar4 = (&PTR_DAT_140a123b0)[*(int *) (puVar2 + 1)];
        }
        uVar3 = FUN_140058780(param_1, s__s_expected__got__s_140c1db70, "BinkWindow", pcVar4);
        FUN_140056570(param_1, 1, uVar3);
    }
    return lVar1;
}


undefined8 FUN_1405098a0(undefined8 param_1) {
    longlong * plVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_1405097f0();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x238))(plVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140509910(undefined8 param_1) {
    longlong * plVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_1405097f0();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x240))(plVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140509980(undefined8 param_1) {
    longlong * plVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_1405097f0();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x248))(plVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_1405099f0(longlong param_1) {
    int iVar1;
    longlong * plVar2;
    double *pdVar3;
    double *pdVar4;
    ulonglong uVar5;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    plVar2 = (longlong *) FUN_1405097f0();
    pdVar4 = (double *) (*(longlong *) (param_1 + 0x18) + 0x10);
    pdVar3 = (double *) &DAT_140a12138;
    if (pdVar4 < *(double **) (param_1 + 0x10)) {
        pdVar3 = pdVar4;
    }
    if (*(int *) (pdVar3 + 1) == 3) {
        LAB_140509a57:
        uVar5 = (ulonglong) pdVar4 & 0xffffffff00000000 | (ulonglong) (uint) (int) *pdVar3;
    } else {
        if (*(int *) (pdVar3 + 1) == 4) {
            pdVar4 = local_res10;
            iVar1 = FUN_14005ac80((longlong) *pdVar3 + 0x20, pdVar4);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar3 = &local_18;
                local_18 = local_res10[0];
                goto LAB_140509a57;
            }
        }
        uVar5 = 0;
    }
    (**(code * *)(*plVar2 + 600))(plVar2, uVar5);
    return 0;
}


undefined8 FUN_140509a80(undefined8 param_1) {
    longlong * plVar1;
    undefined8 uVar2;
    undefined local_28[8];
    longlong local_20;

    plVar1 = (longlong *) FUN_1405097f0();
    uVar2 = FUN_140056bb0(param_1, 2);
    FUN_14018f2d0(local_28, uVar2);
    (**(code * *)(*plVar1 + 0x260))(plVar1, local_20);
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 0;
}


undefined8 FUN_140509af0(longlong param_1) {
    longlong * plVar1;
    undefined8 * puVar2;
    undefined8 * puVar3;
    undefined8 uVar4;

    plVar1 = (longlong *) FUN_1405097f0();
    puVar3 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 **) (param_1 + 0x10)) {
        puVar2 = puVar3;
    }
    if ((*(int *) (puVar2 + 1) == 0) || ((*(int *) (puVar2 + 1) == 1 && (*(int *) puVar2 == 0)))) {
        uVar4 = 0;
    } else {
        uVar4 = 1;
    }
    (**(code * *)(*plVar1 + 0x270))(plVar1, uVar4);
    return 0;
}


undefined8 FUN_140509b50(longlong param_1) {
    longlong * plVar1;
    undefined8 * puVar2;
    undefined8 * puVar3;
    undefined8 uVar4;

    plVar1 = (longlong *) FUN_1405097f0();
    puVar3 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 **) (param_1 + 0x10)) {
        puVar2 = puVar3;
    }
    if ((*(int *) (puVar2 + 1) == 0) || ((*(int *) (puVar2 + 1) == 1 && (*(int *) puVar2 == 0)))) {
        uVar4 = 0;
    } else {
        uVar4 = 1;
    }
    (**(code * *)(*plVar1 + 0x268))(plVar1, uVar4);
    return 0;
}


undefined8 FUN_140509bb0(longlong param_1) {
    longlong * plVar1;
    undefined8 * puVar2;
    undefined8 * puVar3;
    undefined8 uVar4;

    plVar1 = (longlong *) FUN_1405097f0();
    puVar3 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 **) (param_1 + 0x10)) {
        puVar2 = puVar3;
    }
    if ((*(int *) (puVar2 + 1) == 0) || ((*(int *) (puVar2 + 1) == 1 && (*(int *) puVar2 == 0)))) {
        uVar4 = 0;
    } else {
        uVar4 = 1;
    }
    (**(code * *)(*plVar1 + 0x278))(plVar1, uVar4);
    return 0;
}


undefined8 FUN_140509c10(longlong param_1) {
    longlong * plVar1;
    undefined8 * puVar2;
    undefined8 * puVar3;
    undefined8 uVar4;

    plVar1 = (longlong *) FUN_1405097f0();
    puVar3 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    puVar2 = &DAT_140a12138;
    if (puVar3 < *(undefined8 **) (param_1 + 0x10)) {
        puVar2 = puVar3;
    }
    if ((*(int *) (puVar2 + 1) == 0) || ((*(int *) (puVar2 + 1) == 1 && (*(int *) puVar2 == 0)))) {
        uVar4 = 0;
    } else {
        uVar4 = 1;
    }
    (**(code * *)(*plVar1 + 0x280))(plVar1, uVar4);
    return 0;
}


undefined8 FUN_140509c70(void) {
    longlong * plVar1;

    plVar1 = (longlong *) FUN_1405097f0();
    (**(code * *)(*plVar1 + 0x288))(plVar1);
    return 0;
}


undefined8 FUN_140509c90(void) {
    longlong * plVar1;

    plVar1 = (longlong *) FUN_1405097f0();
    (**(code * *)(*plVar1 + 0x290))(plVar1);
    return 0;
}


undefined8 FUN_140509cb0(void) {
    longlong * plVar1;

    plVar1 = (longlong *) FUN_1405097f0();
    (**(code * *)(*plVar1 + 0x298))(plVar1);
    return 0;
}


undefined8 FUN_140509cd0(longlong param_1) {
    uint * puVar1;
    int iVar2;
    longlong * plVar3;

    plVar3 = (longlong *) FUN_1405097f0();
    iVar2 = (**(code * *)(*plVar3 + 0x2a0))(plVar3);
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) (iVar2 != 0);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


void FUN_140509d30(longlong param_1) {
    longlong * plVar1;
    int *piVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float local_58;
    float local_54;
    float local_48;
    float local_44;

    local_58 = 0.0;
    if (*(int *) (param_1 + 0x4c0) == 2) {
        iVar3 = (**(code * *)(**(longlong **) (param_1 + 0x660) + 0x20))
                (*(longlong **) (param_1 + 0x660), &local_58);
        if (iVar3 == 0) {
            return;
        }
        iVar3 = (**(code * *)(**(longlong **) (param_1 + 0x638) + 0x20))
                (*(longlong **) (param_1 + 0x638), &local_58);
        if (iVar3 == 0) {
            return;
        }
        iVar3 = (**(code * *)(**(longlong **) (param_1 + 0x648) + 0x20))
                (*(longlong **) (param_1 + 0x648), &local_58);
        if (iVar3 == 0) {
            return;
        }
        iVar3 = (**(code * *)(**(longlong **) (param_1 + 0x640) + 0x20))
                (*(longlong **) (param_1 + 0x640), &local_58);
        if (iVar3 == 0) {
            return;
        }
        plVar1 = *(longlong **) (param_1 + 0x650);
        if ((plVar1 != (longlong *) 0x0) &&
            (iVar3 = (**(code * *)(*plVar1 + 0x20))(plVar1, &local_58), iVar3 == 0)) {
            return;
        }
        FUN_140002470();
        *(undefined4 *) (param_1 + 0x4c0) = 3;
    }
    piVar2 = *(int **) (param_1 + 0x4e0);
    local_58 = 0.0;
    local_54 = 0.0;
    if (piVar2 == (int *) 0x0) {
        iVar3 = *(int *) (param_1 + 0x658);
    } else {
        iVar3 = *piVar2;
    }
    fVar7 = (float) iVar3;
    if (piVar2 == (int *) 0x0) {
        iVar3 = *(int *) (param_1 + 0x65c);
    } else {
        iVar3 = piVar2[1];
    }
    fVar4 = (float) iVar3 - 1.0;
    if ((1e-05 < fVar7) && (1e-05 < fVar4)) {
        fVar5 = (float) (ulonglong) *(uint *) (param_1 + 0x438) / fVar7;
        fVar6 = (float) (ulonglong) *(uint *) (param_1 + 0x43c) / fVar4;
        if (*(int *) (param_1 + 0x42c) != 0) {
            if (fVar6 <= fVar5) {
                local_58 = ((float) (ulonglong) *(uint *) (param_1 + 0x438) - fVar6 * fVar7) * 0.5;
                fVar5 = fVar6;
            } else {
                local_54 = ((float) (ulonglong) *(uint *) (param_1 + 0x43c) - fVar5 * fVar4) * 0.5;
                fVar6 = fVar5;
            }
        }
        local_48 = fVar5 * fVar7 + local_58;
        local_44 = (fVar4 + 1.0) * fVar6 + local_54;
        if (*(int *) (param_1 + 0x4c0) != 5) {
            FUN_140002ed0(param_1 + 0x480, &local_58);
        }
    }
    return;
}


void FUN_140509f30(longlong param_1, undefined8 param_2, undefined8 param_3, int *param_4) {
    int iVar1;
    undefined8 * puVar2;
    double *pdVar3;
    longlong lVar4;
    undefined8 uVar5;
    uint uVar6;

    FUN_140058710(param_1, "format", 6);
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar2 + 1) = 5;
    *puVar2 = uVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar6 = 0;
    do {
        if (*param_4 == 0) break;
        pdVar3 = *(double **) (param_1 + 0x10);
        uVar6 = uVar6 + 1;
        *(undefined4 *) (pdVar3 + 1) = 3;
        *pdVar3 = (double) uVar6;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        iVar1 = *param_4;
        pdVar3 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar3 + 1) = 3;
        *pdVar3 = (double) iVar1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        lVar4 = *(longlong *) (param_1 + 0x10);
        FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        param_4 = param_4 + 1;
    } while (uVar6 < 0xc);
    uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
    FUN_14005ea50(param_1, uVar5, *(longlong *) (param_1 + 0x10) + -0x20,
                  *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
    return;
}


undefined8 FUN_14050a030(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    double *pdVar4;
    uint uVar5;
    ulonglong uVar6;
    ulonglong uVar7;
    longlong local_res10;

    uVar6 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar7 = uVar6;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar7 * 8) + 400) ==
                param_1) {
                uVar6 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar7 * 8);
                break;
            }
            uVar7 = (ulonglong) ((int) uVar7 + 1);
        } while (uVar7 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    uVar5 = FUN_1400f26a0(uVar6 + 0x180, 1);
    if (DAT_140c65898 != -0x6fa0) {
        lVar2 = *(longlong *) (DAT_140c65898 + 0x6fa8);
        local_res10 = lVar2;
        lVar3 = *(longlong *) (lVar2 + 8);
        while (lVar3 != 0) {
            if (*(uint *) (lVar3 + 0x20) < uVar5) {
                lVar3 = *(longlong *) (lVar3 + 0x18);
            } else {
                local_res10 = lVar3;
                lVar3 = *(longlong *) (lVar3 + 0x10);
            }
        }
        if ((local_res10 == lVar2) || (uVar5 < *(uint *) (local_res10 + 0x20))) {
            local_res10 = lVar2;
        }
        if (local_res10 != lVar2) {
            pdVar4 = *(double **) (param_1 + 0x10);
            iVar1 = *(int *) (*(longlong *) (local_res10 + 0x28) + 4);
            *(undefined4 *) (pdVar4 + 1) = 3;
            *pdVar4 = (double) iVar1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_14050a130(longlong param_1) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    double *pdVar4;
    uint uVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    uint uVar10;

    uVar9 = 0;
    uVar10 = 0;
    uVar7 = uVar9;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar8 = uVar9;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar8 * 8) + 400) ==
                param_1) {
                uVar7 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar8 * 8);
                break;
            }
            uVar8 = (ulonglong) ((int) uVar8 + 1);
        } while (uVar8 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    uVar5 = FUN_1400f26a0(uVar7 + 0x180);
    if (DAT_140c65898 != -0x6fa0) {
        if (uVar5 == 0) {
            lVar6 = *(longlong *) (*(longlong *) (DAT_140c65898 + 0x6fa8) + 0x10);
        } else {
            lVar2 = *(longlong *) (DAT_140c65898 + 0x6fa8);
            lVar6 = lVar2;
            lVar3 = *(longlong *) (lVar2 + 8);
            while (lVar3 != 0) {
                if (*(uint *) (lVar3 + 0x20) < uVar5) {
                    lVar3 = *(longlong *) (lVar3 + 0x18);
                } else {
                    lVar6 = lVar3;
                    lVar3 = *(longlong *) (lVar3 + 0x10);
                }
            }
            if ((lVar6 == lVar2) || (uVar5 < *(uint *) (lVar6 + 0x20))) {
                lVar6 = lVar2;
            }
        }
        if (lVar6 != *(longlong *) (DAT_140c65898 + 0x6fa8)) {
            do {
                uVar5 = (uint) uVar9;
                if ((*(uint *) (*(longlong *) (lVar6 + 0x28) + 8) >> (uVar5 & 0x1f) & 1) != 0) {
                    uVar10 = uVar5;
                    if (4 < (int) uVar5) {
                        return 0;
                    }
                    break;
                }
                uVar9 = (ulonglong) (uVar5 + 1);
            } while (uVar5 + 1 < 5);
            pdVar4 = *(double **) (param_1 + 0x10);
            iVar1 = (&DAT_140b6a860)[(int) uVar10];
            *(undefined4 *) (pdVar4 + 1) = 3;
            *pdVar4 = (double) iVar1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_14050a270(longlong param_1) {
    undefined4 uVar1;
    int iVar2;
    ulonglong uVar3;
    ulonglong uVar4;
    ulonglong local_res10[3];

    uVar4 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar3 = uVar4;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                uVar4 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8);
                break;
            }
            uVar3 = (ulonglong) ((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    uVar1 = FUN_1400f26a0(uVar4 + 0x180);
    iVar2 = FUN_1400f26a0(uVar4 + 0x180);
    if ((*(longlong *) (DAT_140c65898 + 0x78) != 0) &&
        (*(int *) (&DAT_140b6a874 + (longlong) iVar2 * 4) - 1U < 0x1f)) {
        local_res10[0] = CONCAT44(*(int *) (&DAT_140b6a874 + (longlong) iVar2 * 4), uVar1) & 0xffffffffff;
        FUN_1403f4900(DAT_140c65898, 0x68e, local_res10);
        return 1;
    }
    return 0;
}


undefined8 FUN_14050a350(longlong param_1) {
    ulonglong uVar1;
    ulonglong uVar2;

    uVar1 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar2 = uVar1;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar2 * 8) + 400) ==
                param_1) {
                uVar1 = *(ulonglong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar2 * 8);
                break;
            }
            uVar2 = (ulonglong) ((int) uVar2 + 1);
        } while (uVar2 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    FUN_1400f26a0(uVar1 + 0x180, 1);
    return 0;
}

// longlong *FUN_14050a3c0(longlong *param_1)
longlong *LoadGameLibs(longlong *param_1) {
    longlong lVar1;

    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Unit", LoadUnit); // &DAT_140b2a03c = "Unit"
    }
    *param_1 = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CharacterTitle", LoadCharacterTitle);
    }
    param_1[1] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ItemData", LoadItemData); // ItemData = &DAT_140af2384
    }
    param_1[2] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Spell", LoadSpell);
    }
    param_1[3] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Money", LoadCurrency);
    }
    param_1[4] = lVar1;
    lVar1 = FUN_14018b280(4);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Episode", LoadEpisode);
    }
    param_1[5] = lVar1;
    lVar1 = FUN_14018b280(4);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Quest", &LAB_1406625d0);
    }
    param_1[6] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "PathMission", &LAB_140679e50);
    }
    param_1[7] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "PathEpisode", LoadPathEpisode);
    }
    param_1[8] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "PublicEvent", LoadPublicEvent);
    }
    param_1[9] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "PublicEventObjective", LoadPublicEventObjective
        );
    }
    param_1[10] = lVar1;
    lVar1 = FUN_14018b280(4);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "DialogResponse", LoadDialogResponse);
    }
    param_1[0xb] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "MailSystemLib", &LAB_1406b5f60);
    }
    param_1[0x21] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else if (DAT_140c665e8 == 0) {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ChatSystemLib", LoadChatSystemLib);
        DAT_140c665e8 = lVar1;
    }
    param_1[0x22] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "HousingLib", LoadHousingLib);
    }
    param_1[0x23] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "GalacticArchiveArticle",
                      LoadGalacticArchiveArticle);
    }
    param_1[0xc] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "GalacticArchiveEntry", LoadGalacticArchiveEntry
        );
    }
    param_1[0xd] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CraftingLib", LoadCraftingLib);
    }
    param_1[0x24] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Challenges", LoadChallenges);
    }
    param_1[0xe] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "SettlerImprovement", LoadSettlerImprovement);
    }
    param_1[0xf] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "SoldierImprovement", &DAT_140682420);
    }
    param_1[0x10] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "SoldierEvent", LoadSoldierEvent);
    }
    param_1[0x11] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ChatChannelLib", LoadChatChannelLib);
    }
    param_1[0x12] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ScientistScanBotProfile",
                      LoadScientistScanBotProfile);
    }
    param_1[0x13] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Achievement", LoadAchievement);
    }
    param_1[0x14] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "GuildTypeLib", LoadGuildTypeLib);
    }
    param_1[0x15] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "RecruitmentGuildTypeLib",
                      LoadRecruitmentGuildTypeLib);
    }
    param_1[0x16] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "MatchMakingEntry", LoadMatchMakingEntry);
    }
    param_1[0x17] = lVar1;
    lVar1 = FUN_14018b280(4);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "QuestCategory", LoadQuestCategory);
    }
    param_1[0x18] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "HexGroups", LoadHexGroups);
    }
    param_1[0x19] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CommodityOrder", LoadCommodityOrder);
    }
    param_1[0x1a] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ItemAuction", LoadItemAuction);
    }
    param_1[0x1b] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "PetCustomization", LoadPetCustomization);
    }
    param_1[0x1c] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "PetFlair", LoadPetFlair);
    }
    param_1[0x1d] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CustomerSurveyTypeLib",
                      LoadCustomerSurveyTypeLib);
    }
    param_1[0x1e] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CustomerSurveyLib", LoadCustomerSurveyLib);
    }
    param_1[0x25] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "LiveEvent", LoadLiveEvent);
    }
    param_1[0x1f] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CREDDExchangeOrder", LoadCREDDExchangeOrder);
    }
    param_1[0x26] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "GenericMapNode", LoadGenericMapNode);
    }
    param_1[0x20] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "IncidentReportLib", LoadIncidentReportLib);
    }
    param_1[0x27] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Contract", LoadContract);
    }
    param_1[0x28] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "RewardTrack", LoadRewardTrack);
    }
    param_1[0x29] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Costume", &DAT_14073ffc0);
    }
    param_1[0x2a] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ICComm", &DAT_1406a4500);
    }
    param_1[0x2b] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "QuestHub", LoadQuestHub);
    }
    param_1[0x2c] = lVar1;
    lVar1 = FUN_14018b280(4);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "HousingPlot", LoadHousingPlot);
    }
    param_1[0x2d] = lVar1;
    lVar1 = FUN_14018b280(4);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Residence", LoadResidence);
    }
    param_1[0x2e] = lVar1;
    lVar1 = FUN_14018b280(4);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "Decor", LoadDecor);
    }
    param_1[0x2f] = lVar1;
    lVar1 = FUN_14018b280(1);
    if (lVar1 == 0) {
        lVar1 = 0;
    } else {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CommDialog", LoadCommDialog);
    }
    param_1[0x30] = lVar1;
    SystmeLibSetup();
    if (DAT_140c65a58 == (undefined8 *) 0x0) {
        DAT_140c65a58 = (undefined8 *) FUN_14018b280(8);
        if (DAT_140c65a58 != (undefined8 *) 0x0) {
            *DAT_140c65a58 = &PTR_LAB_140b6a710;
            FUN_14053a750();
            return param_1;
        }
        DAT_140c65a58 = (undefined8 *) 0x0;
        FUN_14053a750();
    }
    return param_1;
}


void FUN_14050b150(longlong *param_1) {
    longlong lVar1;

    if (DAT_140c65a58 != 0) {
        FUN_14053a830();
        FUN_14018b900(DAT_140c65a58, 0);
        DAT_140c65a58 = 0;
    }
    if (*param_1 != 0) {
        FUN_14018b900(*param_1, 0);
    }
    if (param_1[1] != 0) {
        FUN_14018b900(param_1[1], 0);
    }
    if (param_1[2] != 0) {
        FUN_14018b900(param_1[2], 0);
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3], 0);
    }
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4], 0);
    }
    if (param_1[5] != 0) {
        FUN_14018b900(param_1[5], 0);
    }
    if (param_1[6] != 0) {
        FUN_14018b900(param_1[6], 0);
    }
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7], 0);
    }
    if (param_1[8] != 0) {
        FUN_14018b900(param_1[8], 0);
    }
    if (param_1[9] != 0) {
        FUN_14018b900(param_1[9], 0);
    }
    if (param_1[10] != 0) {
        FUN_14018b900(param_1[10], 0);
    }
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb], 0);
    }
    if (param_1[0x21] != 0) {
        FUN_14018b900(param_1[0x21], 0);
    }
    lVar1 = param_1[0x22];
    if (lVar1 != 0) {
        if (DAT_140c665e8 == lVar1) {
            DAT_140c665e8 = 0;
        }
        FUN_14018b900(lVar1, 0);
    }
    if (param_1[0x23] != 0) {
        FUN_14018b900(param_1[0x23], 0);
    }
    if (param_1[0xc] != 0) {
        FUN_14018b900(param_1[0xc], 0);
    }
    if (param_1[0xd] != 0) {
        FUN_14018b900(param_1[0xd], 0);
    }
    if (param_1[0x24] != 0) {
        FUN_14018b900(param_1[0x24], 0);
    }
    if (param_1[0xe] != 0) {
        FUN_14018b900(param_1[0xe], 0);
    }
    if (param_1[0xf] != 0) {
        FUN_14018b900(param_1[0xf], 0);
    }
    if (param_1[0x10] != 0) {
        FUN_14018b900(param_1[0x10], 0);
    }
    if (param_1[0x11] != 0) {
        FUN_14018b900(param_1[0x11], 0);
    }
    if (param_1[0x12] != 0) {
        FUN_14018b900(param_1[0x12], 0);
    }
    if (param_1[0x13] != 0) {
        FUN_14018b900(param_1[0x13], 0);
    }
    if (param_1[0x14] != 0) {
        FUN_14018b900(param_1[0x14], 0);
    }
    if (param_1[0x15] != 0) {
        FUN_14018b900(param_1[0x15], 0);
    }
    if (param_1[0x16] != 0) {
        FUN_14018b900(param_1[0x16], 0);
    }
    if (param_1[0x17] != 0) {
        FUN_14018b900(param_1[0x17], 0);
    }
    if (param_1[0x18] != 0) {
        FUN_14018b900(param_1[0x18], 0);
    }
    if (param_1[0x19] != 0) {
        FUN_14018b900(param_1[0x19], 0);
    }
    if (param_1[0x1a] != 0) {
        FUN_14018b900(param_1[0x1a], 0);
    }
    if (param_1[0x1b] != 0) {
        FUN_14018b900(param_1[0x1b], 0);
    }
    if (param_1[0x1c] != 0) {
        FUN_14018b900(param_1[0x1c], 0);
    }
    if (param_1[0x1d] != 0) {
        FUN_14018b900(param_1[0x1d], 0);
    }
    if (param_1[0x25] != 0) {
        FUN_14018b900(param_1[0x25], 0);
    }
    if (param_1[0x1e] != 0) {
        FUN_14018b900(param_1[0x1e], 0);
    }
    if (param_1[0x1f] != 0) {
        FUN_14018b900(param_1[0x1f], 0);
    }
    if (param_1[0x26] != 0) {
        FUN_14018b900(param_1[0x26], 0);
    }
    if (param_1[0x20] != 0) {
        FUN_14018b900(param_1[0x20], 0);
    }
    if (param_1[0x27] != 0) {
        FUN_14018b900(param_1[0x27], 0);
    }
    if (param_1[0x28] != 0) {
        FUN_14018b900(param_1[0x28], 0);
    }
    if (param_1[0x29] != 0) {
        FUN_14018b900(param_1[0x29], 0);
    }
    if (param_1[0x2a] != 0) {
        FUN_14018b900(param_1[0x2a], 0);
    }
    if (param_1[0x2b] != 0) {
        FUN_14018b900(param_1[0x2b], 0);
    }
    if (param_1[0x2c] != 0) {
        FUN_14018b900(param_1[0x2c], 0);
    }
    if (param_1[0x2d] != 0) {
        FUN_14018b900(param_1[0x2d], 0);
    }
    if (param_1[0x2e] != 0) {
        FUN_14018b900(param_1[0x2e], 0);
    }
    if (param_1[0x2f] != 0) {
        FUN_14018b900(param_1[0x2f], 0);
    }
    if (param_1[0x30] != 0) {
        FUN_14018b900(param_1[0x30], 0);
    }
    return;
}

// void FUN_14050b520(void)
void SystmeLibSetup(void) {
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "DialogSys", DialogSysLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CombatFloaters", CombatFloatersLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "GameLib", GameLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "GroupLib", GroupLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "MacrosLib", MacrosLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "AbilityBook", AbilityBookLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "QuestLib", &LAB_14074a9c0);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "P2PTrading", P2PTradingLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "AchievementsLib", AchievementsLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ChallengesLib", ChallengesLibLoader);
    if (DAT_140c65898 != 0) {
        FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "PlayerPathLib", PlayerPathLibLoader);
    }
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CombatFloater", CombatFloaterLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "MessageManagerLib", MessageManagerLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "HazardsLib", &LAB_140754df0);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CSIsLib", CSIsLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "DatacubeLib", &LAB_140757450);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CommunicatorLib", CommunicatorLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ActionSetLib", ActionSetLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "AttributeMilestonesLib",
                  &LAB_140759fe0);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "GuildLib", GuildLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "MarketplaceLib", &LAB_140761170);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CREDDExchangeLib", CREDDExchangeLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "FriendshipLib", FriendshipLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "PetCustomizationLib", PetCustomizationLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "PublicEventsLib", PublicEventsLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "AccountItemLib", AccountItemLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "StorefrontLib", StorefrontLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "LiveEventsLib", LiveEventsLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ContractsLib", ContractsLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "RewardTrackLib", RewardTrackLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CostumesLib", &LAB_140763bd0);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ICCommLib", ICCommLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "ContentFinderLib", &LAB_140765f00);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "FortunesLib", FortunesLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "AlienFxLib", AlienFxLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "CollectiblesLib", &LAB_140768dd0);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "MatchingGameLib", MatchingGameLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "MatchMakingLib", MatchMakingLibLoader);
    FUN_1400f2440(*(longlong *) (DAT_140c65898 + 0x7340) + 0x180, "LeaderboardLib", LeaderboardLibLoader);
    ICCommLibLoader(*(undefined8 *) (*(longlong *) (DAT_140c65898 + 0x7340) + 400));
    FUN_1400e9c20(*(undefined8 *) (DAT_140c65898 + 0x7340), &PTR_s_Print_140c59af0, 0x44);
    return;
}


undefined4 FUN_14050bbf0(longlong param_1) {
    uint uVar1;
    longlong lVar2;
    ulonglong uVar3;
    longlong lVar4;

    uVar3 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1) {
                lVar2 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8);
                goto LAB_14050bc38;
            }
            uVar3 = (ulonglong) ((int) uVar3 + 1);
        } while (uVar3 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar2 = 0;
    LAB_14050bc38:
    uVar1 = FUN_1400f26a0(lVar2 + 0x180, 1);
    if (2 < uVar1) {
        FUN_140058710(*(undefined8 *) (lVar2 + 400), "Invalid Resolution", 0x12);
        return 1;
    }
    lVar2 = *(longlong *) (lVar2 + 400);
    if ((&PTR_s_1024x768_140c59ad0)[(int) uVar1] == (undefined *) 0x0) {
        *(undefined4 *) (*(longlong *) (lVar2 + 0x10) + 8) = 0;
        *(longlong *) (lVar2 + 0x10) = *(longlong *) (lVar2 + 0x10) + 0x10;
        return 1;
    }
    lVar4 = -1;
    do {
        lVar4 = lVar4 + 1;
    } while ((&PTR_s_1024x768_140c59ad0)[(int) uVar1][lVar4] != '\0');
    FUN_140058710(lVar2);
    return 1;
}


undefined8 FUN_14050bcd0(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined local_28[8];
    longlong local_20;

    lVar1 = FUN_14053b190(DAT_140c65898);
    if (lVar1 == 0) {
        return 0;
    }
    lVar1 = FUN_14018f0e0(local_28, lVar1);
    if (*(longlong *) (lVar1 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    } else {
        lVar2 = -1;
        do {
            lVar2 = lVar2 + 1;
        } while (*(char *) (*(longlong *) (lVar1 + 8) + lVar2) != '\0');
        FUN_140058710(param_1);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return 1;
}


undefined8 FUN_14050bd70(longlong param_1) {
    uint uVar1;
    ulonglong uVar2;
    longlong lVar3;
    ulonglong uVar4;
    undefined8 local_res10[3];

    uVar2 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar4 = 0;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1) {
                lVar3 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar2 * 8);
                goto LAB_14050bdaa;
            }
            uVar1 = (int) uVar2 + 1;
            uVar2 = (ulonglong) uVar1;
            uVar4 = (ulonglong) uVar1;
        } while (uVar4 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar3 = 0;
    LAB_14050bdaa:
    FUN_1400f26a0(lVar3 + 0x180, 1);
    lVar3 = DAT_140c65898;
    local_res10[0] = 0;
    *(undefined4 *) (*(longlong *) (DAT_140c65898 + 0x7198) + 0x78) = 0;
    FUN_1403f4900(lVar3, 0x720, local_res10);
    return 0;
}


undefined8 FUN_14050be00(longlong param_1) {
    undefined4 uVar1;
    undefined2 *puVar2;
    longlong lVar3;
    longlong lVar4;
    undefined local_28[8];
    longlong local_20;

    FUN_140056d60();
    uVar1 = (**(code * *)(*DAT_140c65a10 + 0x10))();
    puVar2 = (undefined2 *) FUN_14018b280();
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    switch (uVar1) {
        case 1:
            lVar3 = FUN_14018f0e0(local_28, PTR_DAT_140c2c918);
            if (*(longlong *) (lVar3 + 8) == 0) {
                *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            } else {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar4) != '\0');
                LAB_14050bebc:
                FUN_140058710(param_1);
            }
            break;
        case 2:
            lVar3 = FUN_14018f0e0(local_28, PTR_u_ff00ff00_140c2c938);
            if (*(longlong *) (lVar3 + 8) != 0) {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar4) != '\0');
                goto LAB_14050bebc;
            }
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            break;
        case 3:
            lVar3 = FUN_14018f0e0(local_28, PTR_u_ff00ffff_140c2c9a0);
            if (*(longlong *) (lVar3 + 8) != 0) {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar4) != '\0');
                goto LAB_14050bebc;
            }
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            break;
        case 4:
            lVar3 = FUN_14018f0e0(local_28, PTR_u_ff8080f0_140c2c940);
            if (*(longlong *) (lVar3 + 8) != 0) {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar4) != '\0');
                goto LAB_14050bebc;
            }
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            break;
        case 5:
            lVar3 = FUN_14018f0e0(local_28, PTR_u_ffffffff_140c2c910);
            if (*(longlong *) (lVar3 + 8) != 0) {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar4) != '\0');
                goto LAB_14050bebc;
            }
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            break;
        case 6:
            lVar3 = FUN_14018f0e0(local_28, PTR_u_ffffff00_140c2c968);
            if (*(longlong *) (lVar3 + 8) != 0) {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar4) != '\0');
                goto LAB_14050bebc;
            }
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            break;
        case 7:
            lVar3 = FUN_14018f0e0(local_28, PTR_u_ffff8050_140c2c960);
            if (*(longlong *) (lVar3 + 8) != 0) {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar4) != '\0');
                goto LAB_14050bebc;
            }
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            break;
        case 8:
            lVar3 = FUN_14018f0e0(local_28, PTR_DAT_140c2c930);
            if (*(longlong *) (lVar3 + 8) != 0) {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar4) != '\0');
                goto LAB_14050bebc;
            }
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            break;
        case 9:
            lVar3 = FUN_14018f0e0(local_28, PTR_u_ff8D38C9_140c2c978);
            if (*(longlong *) (lVar3 + 8) != 0) {
                lVar4 = -1;
                do {
                    lVar4 = lVar4 + 1;
                } while (*(char *) (*(longlong *) (lVar3 + 8) + lVar4) != '\0');
                goto LAB_14050bebc;
            }
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            break;
        default:
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            goto LAB_14050c0da;
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    LAB_14050c0da:
    if (puVar2 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar2, 0);
    }
    return 1;
}


void FUN_14050c130(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
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
    uVar1 = FUN_1400f26a0(uVar3 + 0x180, 1);
    lVar2 = FUN_1403d90d0(DAT_140c65898, uVar1);
    if (lVar2 != 0) {
        FUN_140649870(param_1, uVar1);
        return;
    }
    return;
}


undefined8 FUN_14050c1d0(undefined8 param_1) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;

    if (*(longlong *) (DAT_140c65898 + 0x78) == 0) {
        return 0;
    }
    iVar2 = *(int *) (DAT_140c65898 + 0x64c4);
    lVar3 = FUN_1403d90d0(DAT_140c65898, iVar2);
    if ((lVar3 != 0) && (*(int *) (lVar3 + 0x80) == 7)) {
        iVar1 = FUN_14045b6b0(lVar3);
        if (iVar1 != 0) {
            iVar2 = FUN_14045b6b0();
        }
    }
    if (iVar2 != 0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898, iVar2);
        if (lVar3 != 0) {
            uVar4 = FUN_140649870(param_1, iVar2);
            return uVar4;
        }
    }
    return 0;
}


undefined8 FUN_14050c260(longlong param_1) {
    uint * puVar1;
    byte bVar2;
    int iVar3;
    longlong * plVar4;
    ulonglong uVar5;

    uVar5 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1)
                break;
            uVar5 = (ulonglong) ((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    if (*(longlong *) (DAT_140c65898 + 0x78) != 0) {
        plVar4 = (longlong *)
                FUN_1403d90d0(DAT_140c65898, *(undefined4 *) (*(longlong *) (DAT_140c65898 + 0x78) + 0xc0)
                );
        if (plVar4 != (longlong *) 0x0) {
            iVar3 = (**(code * *)(*plVar4 + 0x20))(plVar4);
            bVar2 = 1;
            if (iVar3 != 0) goto LAB_14050c2da;
        }
    }
    bVar2 = 0;
    LAB_14050c2da:
    puVar1 = *(uint **) (param_1 + 0x10);
    puVar1[2] = 1;
    *puVar1 = (uint) bVar2;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14050c310(longlong param_1) {
    undefined8 * puVar1;
    uint * puVar2;
    int iVar3;
    ulonglong uVar4;

    uVar4 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar4 * 8) + 400) ==
                param_1)
                break;
            uVar4 = (ulonglong) ((int) uVar4 + 1);
        } while (uVar4 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    puVar1 = *(undefined8 **) (param_1 + 0x18);
    if (((puVar1 < *(undefined8 **) (param_1 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (0 < *(int *) (puVar1 + 1))) {
        iVar3 = FUN_140056d60(param_1, 1);
        if (8 < iVar3) {
            iVar3 = 0;
            goto LAB_14050c39d;
        }
    } else {
        iVar3 = 7;
    }
    iVar3 = *(int *) (DAT_140c65898 + 0x10c0 + (longlong) iVar3 * 4);
    LAB_14050c39d:
    puVar2 = *(uint **) (param_1 + 0x10);
    puVar2[2] = 1;
    *puVar2 = (uint) (iVar3 != 0);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14050c3d0(void) {
    if (DAT_140c65898 != 0) {
        FUN_1404da940();
    }
    return 0;
}


undefined8 FUN_14050c3f0(void) {
    int iVar1;
    longlong * plVar2;

    if (DAT_140c65898 != 0) {
        plVar2 = (longlong *) FUN_14054f210();
        iVar1 = (**(code * *)(*plVar2 + 0x38))(plVar2);
        if (iVar1 != 0) {
            plVar2 = (longlong *) FUN_14054f210();
            (**(code * *)(*plVar2 + 0x30))(plVar2);
        }
    }
    return 0;
}


undefined8 FUN_14050c430(void) {
    int iVar1;
    longlong * plVar2;

    if (DAT_140c65898 != 0) {
        plVar2 = (longlong *) FUN_14054f210();
        iVar1 = (**(code * *)(*plVar2 + 0x38))(plVar2);
        if (iVar1 == 2) {
            plVar2 = (longlong *) FUN_14054f210();
            iVar1 = (**(code * *)(*plVar2 + 0x48))(plVar2);
            if (iVar1 == 0) {
                plVar2 = (longlong *) FUN_14054f210();
                (**(code * *)(*plVar2 + 0x30))(plVar2);
            }
            PostQuitMessage(0);
        }
    }
    return 0;
}


undefined8 FUN_14050c4b0(void) {
    FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "ToggleErrorDialog", "");
    return 0;
}


undefined8 FUN_14050c4e0(void) {
    longlong * plVar1;

    plVar1 = (longlong *) FUN_14054f210();
    (**(code * *)(*plVar1 + 0x20))(plVar1);
    return 0;
}


undefined8 FUN_14050c500(void) {
    FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "ToggleInventory", "");
    return 0;
}


undefined8 FUN_14050c790(longlong param_1) {
    undefined8 * puVar1;
    undefined8 uVar2;

    puVar1 = &DAT_140a12138;
    if (*(undefined8 **) (param_1 + 0x18) < *(undefined8 **) (param_1 + 0x10)) {
        puVar1 = *(undefined8 **) (param_1 + 0x18);
    }
    if ((*(int *) (puVar1 + 1) == 0) || ((*(int *) (puVar1 + 1) == 1 && (*(int *) puVar1 == 0)))) {
        uVar2 = 0;
    } else {
        uVar2 = 1;
    }
    FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "ShowInventory", &DAT_1409e9ce4, uVar2);
    return 0;
}


undefined8 FUN_14050c7f0(void) {
    FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "ToggleTradeSkillsInventory", &DAT_1409d0cef);
    return 0;
}


undefined8 FUN_14050c820(void) {
    FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "ToggleAbilitiesWindow", &DAT_1409e9d34, 0);
    return 0;
}


undefined8 FUN_14050c950(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    double *pdVar3;
    undefined4 uVar4;
    undefined4 uVar5;
    int iVar6;
    longlong lVar7;
    longlong local_res10;

    uVar4 = FUN_140056d60(param_1, 1);
    uVar5 = FUN_140056d60(param_1, 2);
    lVar7 = FUN_1405a8a40();
    if ((lVar7 != 0) &&
        (iVar6 = FUN_1405fbc40(*DAT_140c65b80, **(undefined4 **) (lVar7 + 8)), iVar6 != 0)) {
        lVar1 = *(longlong *) (*DAT_140c65b80 + 0x28);
        local_res10 = lVar1;
        lVar2 = *(longlong *) (lVar1 + 8);
        while (lVar2 != 0) {
            if (*(uint *) (lVar2 + 0x20) < **(uint **) (lVar7 + 8)) {
                lVar2 = *(longlong *) (lVar2 + 0x18);
            } else {
                local_res10 = lVar2;
                lVar2 = *(longlong *) (lVar2 + 0x10);
            }
        }
        if ((local_res10 == lVar1) || (**(uint **) (lVar7 + 8) < *(uint *) (local_res10 + 0x20))) {
            local_res10 = lVar1;
        }
        if (local_res10 == lVar1) {
            iVar6 = FUN_140611d30(*(undefined8 *) (DAT_140c65898 + 0x7368), uVar4, uVar5);
            pdVar3 = *(double **) (param_1 + 0x10);
            *(undefined4 *) (pdVar3 + 1) = 3;
            *pdVar3 = (double) iVar6;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


undefined8 FUN_14050ca60(void) {
    ulonglong * puVar1;
    int iVar2;
    uint uVar3;
    ulonglong uVar4;

    iVar2 = FUN_140056d60();
    puVar1 = *(ulonglong **) (DAT_140c65898 + 0x7368);
    uVar3 = 0;
    if (puVar1[2] != 0) {
        uVar4 = 0;
        while (*(int *) (*(longlong *) (puVar1[1] + uVar4 * 8) + 0xc) != iVar2) {
            uVar3 = uVar3 + 1;
            uVar4 = (ulonglong) uVar3;
            if (puVar1[2] <= uVar4) {
                return 0;
            }
        }
        *(undefined *) (puVar1 + 3) = 1;
        *puVar1 = (ulonglong) uVar3;
    }
    return 0;
}


undefined8 FUN_14050cbf0(longlong param_1) {
    uint uVar1;
    double *pdVar2;
    longlong lVar3;
    float fVar4;

    fVar4 = 0.0;
    if ((DAT_140dc3290 & 1) == 0) {
        DAT_140dc3290 = DAT_140dc3290 | 1;
        lVar3 = FUN_140200220();
        DAT_140dc3294 = fVar4;
        if (lVar3 != 0) {
            DAT_140dc3294 = *(float *) (lVar3 + 0x18);
        }
    }
    if (fVar4 < DAT_140dc3294) {
        fVar4 = 1.0 / DAT_140dc3294;
    }
    pdVar2 = *(double **) (param_1 + 0x10);
    uVar1 = *(uint *) (DAT_140c65898 + 0x1688);
    *(undefined4 *) (pdVar2 + 1) = 3;
    *pdVar2 = (double) (int) ((float) (ulonglong) uVar1 * (fVar4 + 1.0));
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    return 1;
}


undefined8 FUN_14050cd10(undefined8 param_1) {
    FUN_140056d60(param_1, 1);
    FUN_140056d60(param_1, 2);
    FUN_1403c2580();
    return 0;
}


undefined8 FUN_14050cd50(undefined8 param_1) {
    undefined4 uVar1;
    undefined4 local_res10;
    undefined4 local_res14;

    local_res14 = FUN_140056d60(param_1, 1);
    uVar1 = FUN_140056d60(param_1, 2);
    local_res10 = 1;
    if (*(longlong *) (DAT_140c65898 + 0x78) != 0) {
        FUN_1403c2630(DAT_140c65898, &local_res10, uVar1);
    }
    return 0;
}


undefined8 FUN_14050cdb0(undefined8 param_1) {
    undefined4 uVar1;
    uint local_res10;
    uint local_res14;

    local_res14 = FUN_140056d60(param_1, 1);
    uVar1 = FUN_140056d60(param_1, 2);
    local_res10 = (uint) ((ulonglong) (longlong) (int) local_res14 >> 8) & 0xff;
    local_res14 = local_res14 & 0xff;
    if (*(longlong *) (DAT_140c65898 + 0x78) != 0) {
        FUN_1403c2630(DAT_140c65898, &local_res10, uVar1);
    }
    return 0;
}


undefined8 FUN_14050ce20(undefined8 param_1) {
    undefined4 uVar1;

    uVar1 = FUN_140056d60(param_1, 1);
    FUN_1403c2850(param_1, uVar1);
    return 0;
}


undefined8 FUN_14050ce40(void) {
    longlong lVar1;
    longlong lVar2;
    undefined local_res10[24];

    lVar1 = DAT_140c65898;
    if ((*(longlong *) (DAT_140c65898 + 0x78) != 0) && (*(int *) (DAT_140c65898 + 0x6644) == 0x31)) {
        lVar2 = FUN_1403d90d0(DAT_140c65898, *(undefined4 *) (DAT_140c65898 + 0x6640));
        if (lVar2 != 0) {
            local_res10[0] = 0;
            FUN_1403f4900(lVar1, 0x167, local_res10);
        }
    }
    return 0;
}


undefined8 FUN_14050cf00(longlong param_1) {
    longlong lVar1;
    int iVar2;
    ulonglong uVar3;
    longlong lVar4;
    longlong * plVar5;
    ulonglong uVar6;
    uint uVar7;
    uint local_res10;
    uint local_res14;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    uVar7 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar3 = 0;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar3 * 8) + 400) ==
                param_1)
                break;
            uVar7 = uVar7 + 1;
            uVar3 = (ulonglong) uVar7;
        } while (uVar3 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    local_res14 = FUN_140056d60(param_1, 1);
    lVar1 = DAT_140c65898;
    local_res10 = (uint) ((ulonglong) (longlong) (int) local_res14 >> 8) & 0xff;
    local_res14 = local_res14 & 0xff;
    if (((*(int *) (DAT_140c65898 + 0x6644) == 0x31) &&
         (lVar4 = FUN_1403d90d0(DAT_140c65898, *(undefined4 *) (DAT_140c65898 + 0x6640)), lVar4 != 0)) &&
        (*(int *) (lVar4 + 0x36d8) != 0)) {
        plVar5 = (longlong *) FUN_1403ac780(DAT_140c65898 + 0xa0, &local_res10);
        if (((plVar5 != (longlong *) 0x0) && (iVar2 = FUN_140569f10(plVar5), iVar2 != 0)) &&
            (uVar3 = *(ulonglong *) (lVar1 + 0x15f8), uVar6 = FUN_1403b54a0(), uVar6 < uVar3)) {
            local_28 = 0;
            local_20 = 0;
            local_18 = 0;
            local_28 = (**(code * *)(*plVar5 + 0x30))(plVar5);
            local_20 = 0;
            local_18 = 0;
            FUN_1403f4900(lVar1, 0x14c, &local_28);
        }
        return 0;
    }
    return 0;
}


undefined8 FUN_14050d070(undefined8 param_1) {
    FUN_1403c2a20(param_1, 0);
    return 0;
}


longlong FUN_14050d300(longlong param_1, undefined8 param_2, undefined4 param_3) {
    longlong lVar1;
    undefined2 *puVar2;

    lVar1 = FUN_140056bb0(param_2, param_3, 0);
    if (lVar1 == 0) {
        *(undefined8 *) (param_1 + 8) = 0;
        *(undefined8 *) (param_1 + 0x10) = 0;
        *(undefined8 *) (param_1 + 0x18) = 0;
        puVar2 = (undefined2 *) FUN_14018b280(2, 0);
        *(undefined2 **) (param_1 + 0x18) = puVar2 + 1;
        *(undefined2 **) (param_1 + 8) = puVar2;
        *(undefined2 **) (param_1 + 0x10) = puVar2;
        FUN_1407db590(puVar2, &DAT_1409f12b4, 0);
        *(undefined2 **) (param_1 + 0x10) = puVar2;
        if (puVar2 != (undefined2 *) 0x0) {
            *puVar2 = 0;
        }
        return param_1;
    }
    FUN_14018f2d0(param_1, lVar1);
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong *FUN_14050d3a0(longlong param_1, undefined4 param_2) {
    short sVar1;
    undefined2 *puVar2;
    int iVar3;
    undefined8 * puVar4;
    undefined8 * puVar5;
    undefined2 *puVar6;
    longlong * plVar7;
    longlong lVar8;
    longlong * plVar9;
    undefined2 *puVar10;
    short *psVar11;
    ulonglong uVar12;
    undefined2 *puVar13;
    ulonglong uVar14;
    double dVar15;
    undefined local_b8[8];
    undefined2 *local_b0;
    undefined2 *local_a8;
    undefined2 *local_a0;
    undefined local_98[8];
    undefined2 *local_90;
    undefined2 *local_88;
    undefined2 *local_80;
    undefined * *local_78;
    undefined4 local_70;
    longlong local_68;
    undefined4 local_60;
    undefined local_58[8];
    undefined2 *local_50;
    undefined2 *local_48;
    undefined2 *local_40;

    local_60 = 1;
    local_78 = &PTR_FUN_140b569f0;
    local_70 = 0xfffffffe;
    local_68 = param_1;
    puVar4 = (undefined8 *) FUN_1400580e0();
    if ((puVar4 != &DAT_140a12138) && (*(int *) (puVar4 + 1) == 5)) {
        FUN_1400579e0(local_68);
        lVar8 = local_68;
        puVar5 = (undefined8 *) FUN_1400580e0(local_68, param_2);
        puVar4 = *(undefined8 **) (lVar8 + 0x10);
        *puVar4 = *puVar5;
        *(undefined4 *) (puVar4 + 1) = *(undefined4 *) (puVar5 + 1);
        *(longlong *) (lVar8 + 0x10) = *(longlong *) (lVar8 + 0x10) + 0x10;
        local_70 = FUN_1400578c0(local_68);
    }
    puVar6 = (undefined2 *) FUN_14018b280(0x10);
    plVar9 = (longlong *) 0x0;
    if (puVar6 != (undefined2 *) 0x0) {
        *puVar6 = 0;
    }
    iVar3 = FUN_1400fb720(&local_78, DAT_140c7d5c0, 4);
    lVar8 = local_68;
    if (iVar3 < 0) {
        lVar8 = FUN_14018b280(0x58);
        if (lVar8 != 0) {
            plVar9 = (longlong *) FUN_1400b6390(lVar8);
        }
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        LAB_14050d570:
        do {
            lVar8 = 0;
            puVar4 = (undefined8 *) FUN_1400580e0(param_1, param_2);
            iVar3 = FUN_14005ba70(param_1, *puVar4, *(longlong *) (param_1 + 0x10) + -0x10);
            if (iVar3 == 0) goto LAB_14050d974;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            local_90 = (undefined2 *) 0x0;
            local_88 = (undefined2 *) 0x0;
            local_80 = (undefined2 *) 0x0;
            local_90 = (undefined2 *) FUN_14018b280(0x10);
            local_80 = local_90 + 8;
            if (local_90 != (undefined2 *) 0x0) {
                *local_90 = 0;
            }
            plVar7 = (longlong *) (*(longlong *) (param_1 + 0x10) + -0x20);
            local_88 = local_90;
            if ((plVar7 == &DAT_140a12138) ||
                (*(int *) (&DAT_ffffffffffffffe8 + *(longlong *) (param_1 + 0x10)) != 4)) {
                if (local_90 != (undefined2 *) 0x0) {
                    FUN_14018b900(local_90);
                }
            } else {
                FUN_14018f2d0(local_58, *plVar7 + 0x20);
                puVar10 = local_90;
                local_88 = local_48;
                local_80 = local_40;
                local_90 = local_50;
                if (puVar10 != (undefined2 *) 0x0) {
                    FUN_14018b900(puVar10, 0);
                }
                puVar10 = local_90;
                iVar3 = FUN_14018e2c0(local_90, &DAT_140b114c0);
                if (iVar3 == 0) {
                    lVar8 = FUN_140056bb0(param_1, 0xffffffff, 0);
                    if (lVar8 == 0) {
                        puVar10 = (undefined2 *) FUN_14018b280(2, 0);
                        FUN_1407db590(puVar10, &DAT_1409f12b4, 0);
                        if (puVar10 != (undefined2 *) 0x0) {
                            *puVar10 = 0;
                        }
                    } else {
                        FUN_14018f2d0(local_58, lVar8);
                        puVar10 = local_50;
                    }
                    iVar3 = FUN_14018e2c0(puVar10);
                    if ((iVar3 == 0) || (iVar3 = FUN_14018e2c0(puVar10), iVar3 == 0)) {
                        (**(code * *)(*plVar9 + 0x78))(plVar9);
                    }
                    joined_r0x00014050d806:
                    if (puVar10 != (undefined2 *) 0x0) {
                        FUN_14018b900(puVar10);
                    }
                } else {
                    iVar3 = FUN_14018e2c0(puVar10, L"name");
                    if (iVar3 == 0) {
                        FUN_14050d300(local_58, param_1, 0xffffffff);
                        (**(code * *)(*plVar9 + 0x58))(plVar9);
                        puVar10 = local_50;
                        goto joined_r0x00014050d806;
                    }
                    iVar3 = FUN_14018e2c0(puVar10, &DAT_140b114a0);
                    if (iVar3 == 0) {
                        FUN_14050d300(local_58, param_1, 0xffffffff);
                        (**(code * *)(*plVar9 + 0x48))(plVar9);
                        puVar10 = local_50;
                        goto joined_r0x00014050d806;
                    }
                    iVar3 = FUN_14018e2c0(puVar10);
                    if (iVar3 != 0) {
                        local_b0 = (undefined2 *) 0x0;
                        local_a8 = (undefined2 *) 0x0;
                        local_a0 = (undefined2 *) 0x0;
                        local_b0 = (undefined2 *) FUN_14018b280(0x10);
                        local_a0 = local_b0 + 8;
                        if (local_b0 != (undefined2 *) 0x0) {
                            *local_b0 = 0;
                        }
                        if (*(undefined **) (param_1 + 0x10) == &DAT_140a12148) {
                            iVar3 = -1;
                        } else {
                            iVar3 = *(int *) (*(undefined **) (param_1 + 0x10) + -8);
                        }
                        local_a8 = local_b0;
                        if (iVar3 == 3) {
                            FUN_1400584e0(param_1);
                            psVar11 = (short *) FUN_14034bdd0();
                            puVar10 = local_b0;
                            if (psVar11 != (short *) 0x0) {
                                sVar1 = *psVar11;
                                while (sVar1 != 0) {
                                    lVar8 = lVar8 + 1;
                                    sVar1 = psVar11[lVar8];
                                }
                                uVar14 = (longlong) local_a8 - (longlong) local_b0 >> 1;
                                uVar12 = (longlong) (psVar11 + lVar8) - (longlong) psVar11 >> 1;
                                if (uVar14 < uVar12) {
                                    FUN_1407db590(local_b0, psVar11, uVar14 * 2);
                                    FUN_14001c310(local_b8, psVar11 + ((longlong) local_a8 - (longlong) local_b0 >> 1),
                                                  psVar11 + lVar8);
                                } else {
                                    FUN_1407db590(local_b0, psVar11, uVar12 * 2);
                                    puVar10 = local_a8;
                                    puVar13 = local_b0 + uVar12;
                                    if (puVar13 != local_a8) {
                                        FUN_1407db590(puVar13, local_a8, 2);
                                        local_a8 = local_a8 + -((longlong) puVar10 - (longlong) puVar13 >> 1);
                                    }
                                }
                                goto LAB_14050d935;
                            }
                        } else {
                            puVar10 = local_b0;
                            if (iVar3 == 4) {
                                lVar8 = FUN_14050d300(local_58, param_1, 0xffffffff);
                                puVar10 = *(undefined2 **) (lVar8 + 8);
                                *(undefined2 **) (lVar8 + 8) = local_b0;
                                puVar13 = *(undefined2 **) (lVar8 + 0x10);
                                *(undefined2 **) (lVar8 + 0x10) = local_a8;
                                puVar2 = *(undefined2 **) (lVar8 + 0x18);
                                *(undefined2 **) (lVar8 + 0x18) = local_a0;
                                local_b0 = puVar10;
                                local_a8 = puVar13;
                                local_a0 = puVar2;
                                if (local_50 != (undefined2 *) 0x0) {
                                    FUN_14018b900(local_50, 0);
                                }
                                LAB_14050d935:
                                (**(code * *)(*plVar9 + 0x98))(plVar9, local_98, local_b8);
                                puVar10 = local_b0;
                            }
                        }
                        goto joined_r0x00014050d806;
                    }
                    dVar15 = (double) FUN_140056c40(param_1);
                    (**(code * *)(*plVar9 + 0x70))(dVar15, (float) dVar15, plVar9);
                    (**(code * *)(*plVar9 + 0x68))(plVar9);
                }
                if (local_90 != (undefined2 *) 0x0) {
                    FUN_14018b900();
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
                    goto LAB_14050d570;
                }
            }
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        } while (true);
    }
    plVar7 = (longlong *) (*(longlong *) (local_68 + 0x10) + -0x10);
    if (*(int *) (*(longlong *) (local_68 + 0x10) + -8) == 4) {
        LAB_14050d4c5:
        plVar7 = (longlong *) (*plVar7 + 0x20);
    } else {
        iVar3 = FUN_14005e620(local_68, plVar7);
        plVar7 = plVar9;
        if (iVar3 != 0) {
            if (*(ulonglong *) (*(longlong *) (lVar8 + 0x20) + 0x70) <=
                *(ulonglong *) (*(longlong *) (lVar8 + 0x20) + 0x78)) {
                FUN_14005e2c0(lVar8);
            }
            plVar7 = (longlong *) (*(longlong *) (lVar8 + 0x10) + -0x10);
            goto LAB_14050d4c5;
        }
    }
    FUN_14018f2d0(local_58, plVar7);
    if (puVar6 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar6, 0);
    }
    *(longlong *) (local_68 + 0x10) = *(longlong *) (local_68 + 0x10) + -0x20;
    lVar8 = FUN_14018b280(0x60);
    puVar6 = local_50;
    if (lVar8 == 0) {
        _DAT_00000058 = 0;
    } else {
        plVar9 = (longlong *) FUN_1404ddb40(lVar8, local_50);
        *(undefined4 *) (plVar9 + 0xb) = 0;
    }
    LAB_14050d98d:
    if (puVar6 != (undefined2 *) 0x0) {
        FUN_14018b900(puVar6, 0);
    }
    local_78 = &PTR_FUN_140b56a08;
    if (local_68 != 0) {
        FUN_1400579e0();
    }
    return plVar9;
    LAB_14050d974:
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    goto LAB_14050d98d;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_14050da00(longlong param_1) {
    short sVar1;
    int iVar2;
    undefined2 *puVar3;
    longlong lVar4;
    undefined8 * puVar5;
    longlong lVar6;
    longlong lVar7;
    longlong * plVar8;
    longlong * *pplVar9;
    longlong lVar10;
    undefined8 uVar11;
    uint uVar12;
    undefined8 * puVar13;
    short *psVar14;
    uint uVar15;
    undefined4 uVar16;
    undefined4 uVar17;
    float fVar18;
    short *local_res8;
    longlong local_res10;
    longlong local_168;
    undefined4 local_160;
    undefined4 uStack348;
    short *local_158;
    undefined * *local_148;
    undefined local_140[8];
    undefined8 local_138;
    undefined local_f0[8];
    undefined2 *local_e8;
    undefined2 *local_e0;
    undefined local_88[16];
    undefined2 *local_78;
    undefined local_68[8];
    undefined2 *local_60;

    FUN_1400b6f30(&local_148);
    lVar10 = 0;
    local_148 = &PTR_FUN_140b69230;
    local_88 = ZEXT816(0);
    local_78 = (undefined2 *) 0x0;
    puVar3 = (undefined2 *) FUN_14018b280(0x10);
    local_78 = puVar3 + 8;
    local_88 = CONCAT88(puVar3, puVar3);
    if (puVar3 != (undefined2 *) 0x0) {
        *puVar3 = 0;
    }
    lVar6 = *(longlong *) (param_1 + 0x10);
    lVar7 = *(longlong *) (param_1 + 0x18);
    lVar4 = FUN_140056bb0(param_1, 1);
    if (lVar4 == 0) {
        local_158 = (short *) FUN_14018b280(2, 0);
        local_res8 = local_158;
        FUN_1407db590(local_158, &DAT_1409f12b4, 0);
        psVar14 = local_158;
        if (local_158 != (short *) 0x0) {
            *local_158 = 0;
        }
    } else {
        FUN_14018f2d0(&local_168, lVar4);
        psVar14 = (short *) CONCAT44(uStack348, local_160);
        local_res8 = psVar14;
    }
    FUN_14001c480(local_140, psVar14, local_158);
    uVar12 = 2;
    lVar4 = -1;
    uVar15 = (uint) (lVar6 - lVar7 >> 4);
    if (1 < uVar15) {
        puVar13 = &DAT_140a12138;
        do {
            puVar5 = (undefined8 *) FUN_1400580e0(param_1, uVar12);
            iVar2 = -1;
            if (puVar5 != puVar13) {
                iVar2 = *(int *) (puVar5 + 1);
            }
            if (iVar2 == 2) {
                LAB_14050db56:
                lVar6 = FUN_1406622c0(param_1);
                if ((lVar6 == 0) || (lVar6 = FUN_1403d90d0(DAT_140c65898), lVar6 == 0)) {
                    plVar8 = (longlong *) FUN_140512120(param_1);
                    if ((plVar8 != (longlong *) 0x0) && (*plVar8 != 0)) {
                        lVar6 = FUN_14018b280(0x58);
                        if (lVar6 != 0) {
                            FUN_1404dd130(lVar6, **(undefined4 **) (*plVar8 + 8));
                        }
                        goto LAB_14050ddf8;
                    }
                    pplVar9 = (longlong **) FUN_140417660(param_1);
                    if ((pplVar9 != (longlong **) 0x0) && (plVar8 = *pplVar9, plVar8 != (longlong *) 0x0)) {
                        if (*plVar8 == 0) {
                            if ((*(int *) (plVar8 + 0x94) == 0) || (plVar8[1] == 0)) goto LAB_14050de02;
                            lVar6 = FUN_14018b280(0x58);
                            if (lVar6 != 0) {
                                plVar8 = *pplVar9;
                                if ((plVar8 == (longlong *) 0x0) || (*(int *) (plVar8 + 0x94) == 0)) {
                                    FUN_1404dc4f0(lVar6, 0);
                                } else {
                                    FUN_1404dc4f0(lVar6, plVar8[1]);
                                }
                            }
                        } else {
                            lVar6 = FUN_14018b280(0x58);
                            if (lVar6 != 0) {
                                plVar8 = *pplVar9;
                                if ((plVar8 == (longlong *) 0x0) || (*(int *) (plVar8 + 0x94) == 0)) {
                                    FUN_1404dc4f0(lVar6, 0);
                                } else {
                                    FUN_1404dc4f0(lVar6, plVar8[1]);
                                }
                            }
                        }
                        goto LAB_14050ddf8;
                    }
                } else {
                    lVar7 = FUN_14018b280(0x60);
                    if (lVar7 != 0) {
                        FUN_1404db7e0(lVar7, lVar6);
                    }
                    LAB_14050ddf8:
                    FUN_1400b7480(&local_148);
                }
                LAB_14050de02:
                puVar13 = &DAT_140a12138;
            } else {
                if (iVar2 == 3) {
                    plVar8 = (longlong *) FUN_1400580e0(param_1, uVar12);
                    if (*(int *) (plVar8 + 1) == 3) {
                        LAB_14050dc8e:
                        uVar16 = (undefined4) *plVar8;
                        uVar17 = (undefined4) ((ulonglong) *plVar8 >> 0x20);
                    } else {
                        if ((*(int *) (plVar8 + 1) == 4) &&
                            (iVar2 = FUN_14005ac80(*plVar8 + 0x20, &local_res10), iVar2 != 0)) {
                            local_160 = 3;
                            plVar8 = &local_168;
                            local_168 = local_res10;
                            goto LAB_14050dc8e;
                        }
                        uVar16 = 0;
                        uVar17 = 0;
                    }
                    fVar18 = (float) (double) CONCAT44(uVar17, uVar16);
                    puVar13 = (undefined8 *) FUN_14018b280(0x58);
                    if (puVar13 != (undefined8 *) 0x0) {
                        FUN_1400b6390();
                        *puVar13 = &PTR_FUN_140b69300;
                        *(float *) ((longlong) puVar13 + 0xc) = fVar18;
                        *(int *) (puVar13 + 1) = (int) fVar18;
                    }
                    goto LAB_14050ddf8;
                }
                if (iVar2 == 4) {
                    lVar6 = FUN_140056bb0(param_1, uVar12, 0);
                    if (lVar6 == 0) {
                        puVar3 = (undefined2 *) FUN_14018b280(2, 0);
                        FUN_1407db590(puVar3, &DAT_1409f12b4);
                        if (puVar3 != (undefined2 *) 0x0) {
                            *puVar3 = 0;
                        }
                    } else {
                        FUN_14018f2d0(local_68, lVar6);
                        puVar3 = local_60;
                    }
                    lVar6 = FUN_14018b280(0x60);
                    if (lVar6 != 0) {
                        FUN_1404ddb40(lVar6, puVar3);
                    }
                    FUN_1400b7480(&local_148);
                    if (puVar3 != (undefined2 *) 0x0) {
                        FUN_14018b900(puVar3);
                    }
                    goto LAB_14050de02;
                }
                if (iVar2 == 5) {
                    FUN_14050d3a0(param_1, uVar12);
                    goto LAB_14050ddf8;
                }
                if (iVar2 == 7) goto LAB_14050db56;
            }
            uVar12 = uVar12 + 1;
            psVar14 = local_res8;
        } while (uVar12 <= uVar15);
    }
    if ((local_e8 == local_e0) && (DAT_140c63648 != (undefined8 *) 0x0)) {
        local_res8 = (short *) 0x0;
        (**(code * *) * DAT_140c63648)(DAT_140c63648, local_138, &local_148, &local_res8);
        if (local_res8 == (short *) 0x0) {
            if (local_e8 == local_e0) goto LAB_14050dece;
            *local_e8 = 0;
            local_e0 = local_e8;
        } else {
            sVar1 = *local_res8;
            while (sVar1 != 0) {
                lVar10 = lVar10 + 1;
                sVar1 = local_res8[lVar10];
            }
            FUN_14001c480(local_f0, local_res8, local_res8 + lVar10);
        }
        if (local_res8 != (short *) 0x0) {
            (**(code * *)(*(longlong *) (local_res8 + -8) + 8))(local_res8 + -8, local_e8);
        }
    }
    LAB_14050dece:
    FUN_14018f0e0(local_68, local_e8);
    if (local_60 == (undefined2 *) 0x0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    } else {
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) ((longlong) local_60 + lVar4) != '\0');
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar13 = *(undefined8 **) (param_1 + 0x10);
        uVar11 = FUN_140062650(param_1, local_60, lVar4);
        *(undefined4 *) (puVar13 + 1) = 4;
        *puVar13 = uVar11;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        FUN_14018b900(local_60, 0);
    }
    if (psVar14 != (short *) 0x0) {
        FUN_14018b900(psVar14, 0);
    }
    if (local_88._0_8_ != 0) {
        FUN_14018b900(local_88._0_8_, 0);
    }
    FUN_1400b7390(&local_148);
    return 1;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 *FUN_14050dfb0(longlong param_1) {
    undefined4 uVar1;
    longlong lVar2;
    undefined2 *puVar3;
    undefined8 * puVar4;
    undefined8 * puVar5;
    undefined8 * puVar6;
    longlong lVar7;
    undefined local_108[8];
    longlong local_100;
    undefined * *local_e8[24];
    undefined local_28[16];
    undefined2 *local_18;

    uVar1 = FUN_140056d60(param_1, 1);
    lVar2 = FUN_1404835c0(DAT_140c65918, uVar1);
    if (lVar2 != 0) {
        FUN_1400b7210(local_e8, &DAT_140b11438);
        puVar6 = (undefined8 *) 0x0;
        local_28 = ZEXT816(0);
        local_e8[0] = &PTR_FUN_140b69230;
        local_18 = (undefined2 *) 0x0;
        puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
        local_18 = puVar3 + 8;
        local_28 = CONCAT88(puVar3, puVar3);
        if (puVar3 != (undefined2 *) 0x0) {
            *puVar3 = 0;
        }
        puVar4 = (undefined8 *) FUN_14018b280(0x60);
        puVar5 = puVar6;
        if (puVar4 != (undefined8 *) 0x0) {
            FUN_1400b6390(puVar4);
            *puVar4 = &PTR_FUN_140b69170;
            *(undefined4 *) (puVar4 + 0xb) = 1;
            FUN_1400b6d70(puVar4, L"name");
            puVar5 = puVar4;
        }
        FUN_1400b7480(local_e8, puVar5);
        lVar2 = FUN_1400b7660(local_e8);
        if (*(longlong *) (lVar2 + 8) != 0) {
            lVar2 = FUN_14018f0e0(local_108);
            if (*(longlong *) (lVar2 + 8) == 0) {
                *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            } else {
                lVar7 = -1;
                do {
                    lVar7 = lVar7 + 1;
                } while (*(char *) (*(longlong *) (lVar2 + 8) + lVar7) != '\0');
                FUN_140058710(param_1);
            }
            if (local_100 != 0) {
                FUN_14018b900(local_100, 0);
            }
            puVar6 = (undefined8 *) 0x1;
        }
        if (local_28._0_8_ != 0) {
            FUN_14018b900(local_28._0_8_, 0);
        }
        FUN_1400b7390(local_e8);
        return puVar6;
    }
    return (undefined8 *) 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14050e160(longlong param_1) {
    undefined8 * puVar1;
    double *pdVar2;
    code *pcVar3;
    int iVar4;
    ulonglong uVar5;
    undefined8 uVar6;
    int *piVar7;
    longlong lVar8;
    longlong lVar9;
    uint uVar10;
    uint uVar11;
    longlong lVar12;
    undefined local_38[8];
    longlong local_30;

    uVar10 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        uVar5 = 0;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1)
                break;
            uVar10 = uVar10 + 1;
            uVar5 = (ulonglong) uVar10;
        } while (uVar5 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar6 = FUN_14005c1b0(param_1, 0);
    *(undefined4 *) (puVar1 + 1) = 5;
    *puVar1 = uVar6;
    pcVar3 = DAT_140c63838;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if (pcVar3 == (code *) 0x0) {
        if (_DAT_140c63da0 == 0) {
            iVar4 = FUN_140241e20();
            if (iVar4 < 0) {
                uVar10 = 0;
            } else {
                uVar10 = (**(code * *)(*DAT_140c63d50 + 0x28))();
            }
        } else {
            uVar10 = 0;
        }
    } else {
        uVar10 = (*pcVar3)(&PTR_u_TicketCategory_140a6da48, DAT_140c63858);
    }
    uVar11 = 0;
    if (uVar10 != 0) {
        do {
            if (DAT_140c63848 == (code *) 0x0) {
                if ((_DAT_140c63da0 == 0) && (iVar4 = FUN_140241e20(), -1 < iVar4)) {
                    piVar7 = (int *) (**(code * *)(*DAT_140c63d50 + 0x20))(DAT_140c63d50, uVar11);
                    goto LAB_14050e299;
                }
            } else {
                piVar7 = (int *) (*DAT_140c63848)();
                LAB_14050e299:
                if ((piVar7 != (int *) 0x0) && (lVar8 = FUN_14034bdd0(), lVar8 != 0)) {
                    pdVar2 = *(double **) (param_1 + 0x10);
                    *(undefined4 *) (pdVar2 + 1) = 3;
                    *pdVar2 = (double) (uVar11 + 1);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                        FUN_14005e2c0(param_1);
                    }
                    puVar1 = *(undefined8 **) (param_1 + 0x10);
                    uVar6 = FUN_14005c1b0(param_1, 0);
                    *(undefined4 *) (puVar1 + 1) = 5;
                    *puVar1 = uVar6;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    lVar9 = FUN_14018f0e0(local_38, L"index");
                    if (*(longlong *) (lVar9 + 8) == 0) {
                        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    } else {
                        lVar12 = -1;
                        do {
                            lVar12 = lVar12 + 1;
                        } while (*(char *) (*(longlong *) (lVar9 + 8) + lVar12) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30, 0);
                    }
                    iVar4 = *piVar7;
                    pdVar2 = *(double **) (param_1 + 0x10);
                    *(undefined4 *) (pdVar2 + 1) = 3;
                    *pdVar2 = (double) iVar4;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    lVar9 = *(longlong *) (param_1 + 0x10);
                    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar9, lVar9 + -0x20, lVar9 + -0x10);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
                    lVar9 = FUN_14018f0e0(local_38, L"localizedText");
                    if (*(longlong *) (lVar9 + 8) == 0) {
                        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    } else {
                        lVar12 = -1;
                        do {
                            lVar12 = lVar12 + 1;
                        } while (*(char *) (*(longlong *) (lVar9 + 8) + lVar12) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30, 0);
                    }
                    lVar8 = FUN_14018f0e0(local_38, lVar8);
                    if (*(longlong *) (lVar8 + 8) == 0) {
                        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
                        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    } else {
                        lVar9 = -1;
                        do {
                            lVar9 = lVar9 + 1;
                        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar9) != '\0');
                        FUN_140058710(param_1);
                    }
                    if (local_30 != 0) {
                        FUN_14018b900(local_30, 0);
                    }
                    lVar8 = *(longlong *) (param_1 + 0x10);
                    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar8, lVar8 + -0x20, lVar8 + -0x10);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
                    lVar8 = *(longlong *) (param_1 + 0x10);
                    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar8, lVar8 + -0x20, lVar8 + -0x10);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
                }
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 < uVar10);
    }
    return 1;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_14050e830(longlong param_1) {
    byte bVar1;
    int iVar2;
    undefined8 * puVar3;
    uint * puVar4;
    double *pdVar5;
    uint uVar6;
    undefined8 * puVar7;
    longlong lVar8;
    undefined8 uVar9;
    ulonglong * puVar10;
    longlong lVar11;
    longlong * plVar12;
    longlong lVar13;
    longlong lVar14;
    float fVar15;
    undefined8 local_48;
    undefined8 local_40;
    longlong local_38;

    lVar11 = *(longlong *) (param_1 + 0x10);
    iVar2 = *(int *) (DAT_140c65898 + 0x1b68);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"bIsDead");
    lVar13 = -1;
    if (*(longlong *) (lVar8 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    puVar4 = *(uint **) (lVar11 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint) (iVar2 != 0);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    iVar2 = *(int *) (DAT_140c65898 + 0x1b88);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"bHasCasterRezRequest");
    if (*(longlong *) (lVar8 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    puVar4 = *(uint **) (lVar11 + 0x10);
    puVar4[2] = 1;
    *puVar4 = (uint) (iVar2 != 0);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    uVar6 = FUN_1403c9740();
    lVar11 = *(longlong *) (param_1 + 0x10);
    fVar15 = (float) (ulonglong) uVar6 * 0.001;
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"fDeathPenalty");
    if (*(longlong *) (lVar8 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    pdVar5 = *(double **) (lVar11 + 0x10);
    *(undefined4 *) (pdVar5 + 1) = 3;
    *pdVar5 = (double) fVar15;
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    uVar6 = FUN_1403c9800();
    lVar11 = *(longlong *) (param_1 + 0x10);
    fVar15 = (float) (ulonglong) uVar6 * 0.001;
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"fWakeHereCooldown");
    if (*(longlong *) (lVar8 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    pdVar5 = *(double **) (lVar11 + 0x10);
    *(undefined4 *) (pdVar5 + 1) = 3;
    *pdVar5 = (double) fVar15;
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    uVar6 = FUN_1403c98c0();
    lVar11 = *(longlong *) (param_1 + 0x10);
    fVar15 = (float) (ulonglong) uVar6 * 0.001;
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"fForceRezTimer");
    if (*(longlong *) (lVar8 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    pdVar5 = *(double **) (lVar11 + 0x10);
    *(undefined4 *) (pdVar5 + 1) = 3;
    *pdVar5 = (double) fVar15;
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    uVar6 = *(uint *) (DAT_140c65898 + 0x1b70);
    local_40 = 1;
    local_38 = 0;
    puVar10 = (ulonglong *) FUN_140059170(lVar11, 0x18);
    *puVar10 = (ulonglong) uVar6;
    puVar10[1] = local_40;
    puVar10[2] = 0;
    lVar8 = *(longlong *) (lVar11 + 0x20);
    local_48 = FUN_140062650(lVar11, "Game.Money", 10);
    local_40 = CONCAT44(local_40._4_4_, 4);
    FUN_14005e8e0(lVar11, lVar8 + 0xa0, &local_48, *(undefined8 *) (lVar11 + 0x10));
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    FUN_140058bf0(lVar11, 0xfffffffe);
    FUN_1400fb540(param_1, L"monRezCost");
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    if ((DAT_140dc3298 & 1) == 0) {
        DAT_140dc3298 = DAT_140dc3298 | 1;
    } else if (_DAT_140dc32a4 != 0) goto LAB_14050eda4;
    _DAT_140dc32a4 = 1;
    lVar11 = FUN_140200220(0x523);
    if (lVar11 == 0) {
        DAT_140dc32a0 = 0;
    } else {
        DAT_140dc32a0 = *(int *) (lVar11 + 4);
    }
    LAB_14050eda4:
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = (longlong) DAT_140dc32a0;
    local_40 = 0xf;
    local_38 = 0x900000000;
    plVar12 = (longlong *) FUN_140059170(lVar11, 0x18);
    *plVar12 = lVar8;
    plVar12[1] = local_40;
    plVar12[2] = local_38;
    lVar8 = *(longlong *) (lVar11 + 0x20);
    local_48 = FUN_140062650(lVar11, "Game.Money", 10);
    local_40 = CONCAT44(local_40._4_4_, 4);
    FUN_14005e8e0(lVar11, lVar8 + 0xa0, &local_48, *(undefined8 *) (lVar11 + 0x10));
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    FUN_140058bf0(lVar11, 0xfffffffe);
    FUN_1400fb540(param_1, L"monRezServiceTokenCost");
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    bVar1 = *(byte *) (DAT_140c65898 + 0x1b6c);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"bWakeHere");
    if (*(longlong *) (lVar8 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    puVar4 = *(uint **) (lVar11 + 0x10);
    puVar4[2] = 1;
    *puVar4 = bVar1 & 1;
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"bHolocrypt");
    if (*(longlong *) (lVar8 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    puVar4 = *(uint **) (lVar11 + 0x10);
    puVar4[2] = 1;
    *puVar4 = bVar1 >> 1 & 1;
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"bExitInstance");
    if (*(longlong *) (lVar8 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    puVar4 = *(uint **) (lVar11 + 0x10);
    puVar4[2] = 1;
    *puVar4 = bVar1 >> 5 & 1;
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"bAcceptCasterRez");
    if (*(longlong *) (lVar8 + 8) == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        lVar14 = -1;
        do {
            lVar14 = lVar14 + 1;
        } while (*(char *) (*(longlong *) (lVar8 + 8) + lVar14) != '\0');
        FUN_140058710(lVar11);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    puVar4 = *(uint **) (lVar11 + 0x10);
    puVar4[2] = 1;
    *puVar4 = bVar1 >> 2 & 1;
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    puVar7 = (undefined8 *)
            FUN_14005c3c0(*(undefined8 *) (*(longlong *) (lVar11 + 0x20) + 0xa0),
                          *(undefined4 *) (param_1 + 8));
    puVar3 = *(undefined8 **) (lVar11 + 0x10);
    *puVar3 = *puVar7;
    *(undefined4 *) (puVar3 + 1) = *(undefined4 *) (puVar7 + 1);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    lVar11 = *(longlong *) (param_1 + 0x10);
    lVar8 = FUN_14018f0e0(&local_48, L"bWakeHereServiceToken");
    lVar8 = *(longlong *) (lVar8 + 8);
    if (lVar8 == 0) {
        *(undefined4 *) (*(longlong *) (lVar11 + 0x10) + 8) = 0;
        *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    } else {
        do {
            lVar13 = lVar13 + 1;
        } while (*(char *) (lVar8 + lVar13) != '\0');
        FUN_140058710(lVar11, lVar8, lVar13);
    }
    if (local_40 != 0) {
        FUN_14018b900(local_40, 0);
    }
    puVar4 = *(uint **) (lVar11 + 0x10);
    puVar4[2] = 1;
    *puVar4 = bVar1 >> 6 & 1;
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + 0x10;
    uVar9 = FUN_1400580e0(lVar11, 0xfffffffd);
    FUN_14005ea50(lVar11, uVar9, *(longlong *) (lVar11 + 0x10) + -0x20,
                  *(longlong *) (lVar11 + 0x10) + -0x10);
    *(longlong *) (lVar11 + 0x10) = *(longlong *) (lVar11 + 0x10) + -0x20;
    plVar12 = (longlong *) (*(longlong *) (param_1 + 0x10) + 0x10);
    *plVar12 = *plVar12 + -0x10;
    return;
}


// undefined8 FUN_14050f270(longlong param_1)
undefined8 DialogSysLoader(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    FUN_140057020(param_1, "DialogSys", &PTR_s_GetState_140b6a7c0);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "DialogState_Inactive", 0x14);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "DialogState_TopicChoice", 0x17);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "DialogState_QuestAccept", 0x17);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "DialogState_QuestComplete", 0x19);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "DialogState_QuestIncomplete", 0x1b);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4014000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "DialogState_Vending", 0x13);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4018000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "DialogState_Training", 0x14);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x401c000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "DialogState_TradeskillTraining", 0x1e);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4020000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "DialogState_CraftingStation", 0x1b);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return 0;
}


undefined8 FUN_14050f630(longlong param_1) {
    double *pdVar1;
    longlong * *pplVar2;
    int iVar3;
    longlong * *pplVar4;
    longlong lVar5;
    longlong * *pplVar6;
    undefined8 uVar7;

    uVar7 = 1;
    FUN_140056d60(param_1, 1);
    pplVar4 = (longlong **) FUN_14018b280(0x18);
    *pplVar4 = (longlong *) pplVar4;
    pplVar4[1] = (longlong *) pplVar4;
    iVar3 = FUN_140556670();
    if (iVar3 != 0) {
        pplVar6 = (longlong **) *pplVar4;
        lVar5 = 0;
        if (pplVar6 != pplVar4) {
            do {
                pplVar6 = (longlong **) *pplVar6;
                lVar5 = lVar5 + 1;
            } while (pplVar6 != pplVar4);
            if (lVar5 != 0) {
                FUN_140058900(param_1);
                iVar3 = 1;
                for (pplVar6 = (longlong **) *pplVar4; pplVar6 != pplVar4; pplVar6 = (longlong **) *pplVar6) {
                    pdVar1 = *(double **) (param_1 + 0x10);
                    *(undefined4 *) (pdVar1 + 1) = 3;
                    *pdVar1 = (double) iVar3;
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
                    FUN_14072f540(param_1, pplVar6[2]);
                    lVar5 = *(longlong *) (param_1 + 0x10);
                    FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar5, lVar5 + -0x20, lVar5 + -0x10);
                    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
                    iVar3 = iVar3 + 1;
                }
                goto LAB_14050f719;
            }
        }
    }
    uVar7 = 0;
    LAB_14050f719:
    pplVar6 = (longlong **) *pplVar4;
    while (pplVar6 != pplVar4) {
        pplVar2 = (longlong **) *pplVar6;
        FUN_14018b900(pplVar6, 0);
        pplVar6 = pplVar2;
    }
    *pplVar4 = (longlong *) pplVar4;
    pplVar4[1] = (longlong *) pplVar4;
    FUN_14018b900(pplVar4, 0);
    return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_14050f770(void) {
    if (DAT_140c7dcb0 != _DAT_140c7dcb8) {
        *DAT_140c7dcb0 = 0;
        _DAT_140c7dcb8 = DAT_140c7dcb0;
    }
    DAT_140c7dc78 = 0;
    DAT_140c7dc60 = 0;
    FUN_140557c30(&DAT_140c7dc60);
    FUN_1400ea3e0(*(undefined8 *) (DAT_140c65898 + 0x7340), "Dialog_Close", &DAT_1409d0bff);
    FUN_140554ea0(&DAT_140c7dc60, 1);
    FUN_14034bdd0();
    _DAT_140c7dc98 = 0;
    _DAT_140c7dca0 = 0;
    return 0;
}


undefined8 FUN_14050f800(undefined8 param_1) {
    uint uVar1;
    undefined8 * puVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    uint uVar6;
    longlong * plVar7;

    iVar3 = FUN_140056d60(param_1, 1);
    uVar6 = 0;
    plVar7 = (longlong *) (DAT_140c7dcd0 + 8);
    do {
        for (puVar2 = *(undefined8 **) (undefined8 *) *plVar7; puVar2 != (undefined8 *) *plVar7;
             puVar2 = (undefined8 *) *puVar2) {
            uVar1 = *(uint *) (puVar2[2] + 0x38);
            if (((uVar1 < 0xe) && ((0x2dc0U >> (uVar1 & 0x1f) & 1) != 0)) &&
                (*(int *) (puVar2[2] + 0x3c) == iVar3)) {
                lVar4 = FUN_1405a8a40(uVar1, iVar3);
                if (lVar4 == 0) {
                    return 0;
                }
                uVar5 = FUN_140663030(param_1, lVar4);
                return uVar5;
            }
        }
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 2;
        if (10 < uVar6) {
            return 0;
        }
    } while (true);
}


undefined4 FUN_14050f8f0(undefined8 param_1) {
    int iVar1;
    undefined4 uVar2;
    longlong lVar3;
    longlong * plVar4;
    undefined local_28[8];
    longlong local_20;

    lVar3 = FUN_14034bdd0(param_1, DAT_140c7dc98);
    if (lVar3 == 0) {
        return 0;
    }
    lVar3 = FUN_1403d90d0(DAT_140c65898, DAT_140c7dc64);
    if (lVar3 == 0) {
        FUN_1404835c0(DAT_140c65918, DAT_140c7dc68);
    }
    plVar4 = (longlong *) 0x0;
    iVar1 = FUN_140056d60(param_1, 1);
    if (iVar1 != 0) {
        FUN_1405a8a40();
    }
    FUN_14054f9e0(local_28, DAT_140c7dc98);
    lVar3 = FUN_14018b280(0x20);
    if (lVar3 != 0) {
        uVar2 = FUN_1406132e0(DAT_140c7dc9c);
        plVar4 = (longlong *) FUN_140741f10(lVar3, local_20, uVar2);
    }
    uVar2 = FUN_1407421d0(param_1, plVar4);
    if (plVar4 != (longlong *) 0x0) {
        (**(code * *)(*plVar4 + 8))(plVar4);
    }
    if (local_20 != 0) {
        FUN_14018b900(local_20, 0);
    }
    return uVar2;
}


undefined8 FUN_14050fa60(longlong param_1) {
    uint uVar1;
    uint * puVar2;
    longlong lVar3;

    if (DAT_140c7dc64 != 0) {
        lVar3 = FUN_1403d90d0(DAT_140c65898);
        if (lVar3 != 0) {
            uVar1 = *(uint *) (lVar3 + 0x28);
            puVar2 = *(uint **) (param_1 + 0x10);
            puVar2[2] = 1;
            *puVar2 = uVar1 >> 9 & 1;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            return 1;
        }
    }
    return 0;
}


// undefined8 FUN_14050fac0(longlong param_1)
undefined8 CombatFloatersLoader(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 local_18;
    undefined4 local_10;

    FUN_140057020(param_1, "CombatFloaters", &PTR_s_GetNodes_140b6a730);
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x3ff0000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CombatMessageLocation_Source", 0x1c);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4000000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CombatMessageLocation_Target", 0x1c);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4008000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CombatMessageLocation_Self", 0x1a);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    *puVar1 = 0x4010000000000000;
    *(undefined4 *) (puVar1 + 1) = 3;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    lVar2 = *(longlong *) (param_1 + 0x10);
    local_18 = FUN_140062650(param_1, "CombatMessageLocation_Screen", 0x1c);
    local_10 = 4;
    FUN_14005ea50(param_1, lVar2 + -0x20, &local_18, *(longlong *) (param_1 + 0x10) + -0x10);
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return 1;
}


undefined8 FUN_14050fc80(longlong param_1) {
    byte bVar1;
    undefined4 uVar2;
    uint uVar3;
    double *pdVar4;
    uint * puVar5;
    longlong lVar6;
    undefined8 * puVar7;
    longlong lVar8;
    code *pcVar9;
    undefined8 uVar10;
    undefined8 * puVar11;
    longlong lVar12;
    uint uVar13;
    undefined auVar14[12];
    undefined auVar15[16];
    int iVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    float fVar22;
    undefined in_XMM7_Ba;
    byte bVar23;
    undefined in_XMM7_Bb;
    undefined uVar24;
    undefined in_XMM7_Bc;
    undefined uVar25;
    undefined in_XMM7_Bd;
    undefined uVar26;
    undefined in_XMM7_Be;
    undefined uVar27;
    undefined in_XMM7_Bf;
    undefined uVar28;
    undefined in_XMM7_Bg;
    undefined uVar29;
    undefined in_XMM7_Bh;
    undefined uVar30;
    float fVar31;
    float fVar32;
    float fVar33;
    float fVar34;
    undefined8 local_58;
    undefined4 local_50;
    undefined auVar16[16];
    undefined auVar17[16];

    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar11 = *(undefined8 **) (param_1 + 0x10);
    uVar10 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar11 + 1) = 5;
    lVar12 = 0x1c20;
    fVar31 = 0.003921569;
    fVar32 = 0.003921569;
    fVar33 = 0.003921569;
    fVar34 = 0.003921569;
    uVar13 = CONCAT13(in_XMM7_Bd, CONCAT12(in_XMM7_Bc, CONCAT11(in_XMM7_Bb, in_XMM7_Ba))) ^
             CONCAT13(in_XMM7_Bd, CONCAT12(in_XMM7_Bc, CONCAT11(in_XMM7_Bb, in_XMM7_Ba)));
    bVar23 = (byte) uVar13;
    uVar24 = (undefined) (uVar13 >> 8);
    uVar25 = (undefined) (uVar13 >> 0x10);
    uVar26 = (undefined) (uVar13 >> 0x18);
    uVar13 = CONCAT13(in_XMM7_Bh, CONCAT12(in_XMM7_Bg, CONCAT11(in_XMM7_Bf, in_XMM7_Be))) ^
             CONCAT13(in_XMM7_Bh, CONCAT12(in_XMM7_Bg, CONCAT11(in_XMM7_Bf, in_XMM7_Be)));
    uVar27 = (undefined) uVar13;
    uVar28 = (undefined) (uVar13 >> 8);
    uVar29 = (undefined) (uVar13 >> 0x10);
    uVar30 = (undefined) (uVar13 >> 0x18);
    *puVar11 = uVar10;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar13 = 0;
    do {
        lVar8 = DAT_140c65898;
        pdVar4 = *(double **) (param_1 + 0x10);
        uVar13 = uVar13 + 1;
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) uVar13;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1, 0, 0);
        *(undefined4 *) (puVar11 + 1) = 5;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        iVar18 = *(int *) (lVar12 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, &DAT_140b11804, 4);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar4 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) iVar18;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar18 = *(int *) (lVar12 + 4 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "parent", 6);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar4 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) (iVar18 + 1);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        FUN_14034bdd0();
        FUN_1400f0090(param_1);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "normal", 6);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_14005c1b0(param_1, 0, 0);
        *(undefined4 *) (puVar11 + 1) = 5;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        iVar18 = *(int *) (lVar12 + 0xf8 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "useFontFace", 0xb);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) (iVar18 != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        FUN_1400f0090(param_1);
        iVar18 = *(int *) (lVar12 + 0xfc + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "useFontSize", 0xb);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) (iVar18 != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar18 = *(int *) (lVar12 + 0x50 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "fontSize", 8);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar4 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) iVar18;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar18 = *(int *) (lVar12 + 0x100 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "useFontColor", 0xc);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) (iVar18 != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "fontColor", 9);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar2 = *(undefined4 *) (lVar12 + 0x54 + lVar8);
        uVar10 = CONCAT44(uVar2, uVar2);
        auVar14 = CONCAT48(uVar2, uVar10);
        auVar17 = CONCAT97(CONCAT81(SUB168(CONCAT79(SUB167(CONCAT610(SUB166(CONCAT511(SUB165(CONCAT412(
                                                                             SUB164(CONCAT313(SUB163(CONCAT214(SUB162(CONCAT115
                                                                                                                              (uVar30, CONCAT114((char) ((uint) uVar2 >> 0x18),
                                                                                                                                                 SUB1614(CONCAT412(uVar2, auVar14),
                                                                                                                                                         0))) >> 0x70, 0),
                                                                                                               CONCAT113(uVar29, SUB1613(CONCAT412(uVar2, auVar14),
                                                                                                                                         0))) >> 0x68, 0),
                                                                                              CONCAT112((char) ((uint) uVar2 >> 0x10), auVar14)) >>
                                                                                                                                                 0x60, 0),
                                                                             CONCAT111(uVar28, SUB1211(auVar14, 0))) >>
                                                                                                                     0x58, 0), CONCAT110((char) ((uint) uVar2 >> 8),
                                                                                                                                         SUB1210(auVar14, 0))) >> 0x50, 0),
                                                                     CONCAT19(uVar27, SUB129(auVar14, 0))) >> 0x48, 0),
                                                    CONCAT18((char) uVar2, uVar10)) >> 0x40, 0), uVar26),
                           ((uint7) uVar10 >> 0x18) << 0x30);
        auVar16 = CONCAT115(CONCAT101(SUB1610(auVar17 >> 0x30, 0), uVar25), ((uint5) uVar10 >> 0x10) << 0x20
        );
        auVar15 = CONCAT142(SUB1614(CONCAT133(CONCAT121(SUB1612(auVar16 >> 0x20, 0), uVar24),
                                              ((uint3) uVar2 >> 8) << 0x10) >> 0x10, 0),
                            (ushort) uVar2 & 0xff | (ushort) bVar23 << 8);
        iVar18 = SUB164(CONCAT214(CONCAT11(uVar30, uVar29),
                                  CONCAT212(SUB162(auVar17 >> 0x30, 0), SUB1612(auVar15, 0))) >> 0x60, 0);
        auVar16 = CONCAT610(SUB166(CONCAT412(iVar18, CONCAT210(CONCAT11(uVar28, uVar27), SUB1610(auVar15, 0)
                            )) >> 0x50, 0),
                            CONCAT28(SUB162(auVar16 >> 0x20, 0), SUB168(auVar15, 0)));
        fVar19 = (float) SUB164(auVar16 >> 0x40, 0) * fVar31;
        fVar20 = (float) SUB164(CONCAT106(CONCAT82(SUB168(auVar16 >> 0x40, 0), CONCAT11(uVar26, uVar25)),
                                          (SUB166(auVar15, 0) >> 0x10) << 0x20) >> 0x20, 0) * fVar32;
        fVar21 = (float) (SUB164(auVar15, 0) & 0xffff | (uint) CONCAT11(uVar24, bVar23) << 0x10) * fVar33;
        fVar22 = (float) iVar18 * fVar34;
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        if (*(longlong *) (param_1 + 0x28) == *(longlong *) (param_1 + 0x50)) {
            uVar10 = *(undefined8 *) (param_1 + 0x78);
        } else {
            uVar10 = *(undefined8 *) (**(longlong **) (*(longlong *) (param_1 + 0x28) + 8) + 0x18);
        }
        lVar6 = *(longlong *) (param_1 + 0x20);
        puVar11 = (undefined8 *) (**(code * *)(lVar6 + 0x10))(*(undefined8 *) (lVar6 + 0x18), 0, 0, 0x40);
        if (puVar11 == (undefined8 *) 0x0) {
            FUN_140061040(param_1, 4);
            pcVar9 = (code *) swi(3);
            uVar10 = (*pcVar9)();
            return uVar10;
        }
        *(longlong *) (lVar6 + 0x78) = *(longlong *) (lVar6 + 0x78) + 0x40;
        bVar1 = *(byte *) (*(longlong *) (param_1 + 0x20) + 0x20);
        *(undefined *) (puVar11 + 1) = 7;
        puVar11[4] = 0x10;
        puVar11[2] = 0;
        puVar11[3] = uVar10;
        *(byte *) ((longlong) puVar11 + 9) = bVar1 & 3;
        *puVar11 = **(undefined8 **) (*(longlong *) (param_1 + 0x20) + 0xb0);
        **(undefined8 **) (*(longlong *) (param_1 + 0x20) + 0xb0) = puVar11;
        puVar7 = *(undefined8 **) (param_1 + 0x10);
        *puVar7 = puVar11;
        *(undefined4 *) (puVar7 + 1) = 7;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        *(undefined (*)[16]) (puVar11 + 6) = CONCAT412(fVar22, CONCAT48(fVar21, CONCAT44(fVar20, fVar19)));
        lVar6 = *(longlong *) (param_1 + 0x20);
        local_58 = FUN_140062650(param_1, "CColor", 6);
        local_50 = 4;
        FUN_14005e8e0(param_1, lVar6 + 0xa0, &local_58, *(undefined8 *) (param_1 + 0x10));
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        FUN_140058bf0(param_1, 0xfffffffe);
        lVar6 = *(longlong *) (param_1 + 0x10);
        FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar6, lVar6 + -0x20, lVar6 + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar18 = *(int *) (lVar12 + 0x104 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "useFontFlags", 0xc);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) (iVar18 != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        uVar3 = *(uint *) (lVar12 + 0x58 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "fontBold", 8);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) ((uVar3 & 2) != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        uVar3 = *(uint *) (lVar12 + 0x58 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "fontItalic", 10);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) ((uVar3 & 4) != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        uVar3 = *(uint *) (lVar12 + 0x58 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "fontShadow", 10);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) ((uVar3 & 8) != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        uVar3 = *(uint *) (lVar12 + 0x58 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "fontOutline", 0xb);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) ((uVar3 & 0x10) != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar18 = *(int *) (lVar12 + 0x108 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "useLocation", 0xb);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) (iVar18 != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar18 = *(int *) (lVar12 + 0x5c + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "location", 8);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar4 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) iVar18;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar18 = *(int *) (lVar12 + 0x60 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "attachment", 10);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar4 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) iVar18;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        fVar19 = *(float *) (lVar12 + 100 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "locationAngle", 0xd);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar4 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) fVar19;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        fVar19 = *(float *) (lVar12 + 0x68 + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "locationDistance", 0x10);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar4 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar4 + 1) = 3;
        *pdVar4 = (double) fVar19;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        iVar18 = *(int *) (lVar12 + 0x10c + lVar8);
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar11 = *(undefined8 **) (param_1 + 0x10);
        uVar10 = FUN_140062650(param_1, "useFormat", 9);
        *(undefined4 *) (puVar11 + 1) = 4;
        *puVar11 = uVar10;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        puVar5 = *(uint **) (param_1 + 0x10);
        puVar5[2] = 1;
        *puVar5 = (uint) (iVar18 != 0);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar10 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar10, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        FUN_140509f30(param_1);
        lVar8 = *(longlong *) (param_1 + 0x10);
        FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar8, lVar8 + -0x20, lVar8 + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        lVar8 = *(longlong *) (param_1 + 0x10);
        FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar8, lVar8 + -0x20, lVar8 + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        lVar12 = lVar12 + 0x120;
    } while (uVar13 < 0x3f);
    return 1;
}


undefined8 FUN_140510930(longlong param_1, undefined8 param_2, undefined8 param_3, longlong param_4) {
    int iVar1;
    undefined8 uVar2;
    longlong * plVar3;
    longlong lVar4;
    undefined local_28[8];
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    FUN_140058710(param_1, "fontFace", 8);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffe);
    lVar4 = *(longlong *) (param_1 + 0x10) + -0x10;
    FUN_14005e8e0(param_1, uVar2, lVar4, lVar4);
    plVar3 = (longlong *) (*(longlong *) (param_1 + 0x10) + -0x10);
    if (*(int *) (*(longlong *) (param_1 + 0x10) + -8) != 4) {
        iVar1 = FUN_14005e620(param_1, plVar3);
        if (iVar1 == 0) {
            lVar4 = 0;
            goto LAB_1405109bb;
        }
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        plVar3 = (longlong *) (*(longlong *) (param_1 + 0x10) + -0x10);
    }
    lVar4 = *plVar3 + 0x20;
    LAB_1405109bb:
    FUN_14018f2d0(local_28, lVar4);
    lVar4 = *(longlong *) (param_4 + 8);
    *(undefined8 *) (param_4 + 8) = local_20;
    *(undefined8 *) (param_4 + 0x10) = local_18;
    *(undefined8 *) (param_4 + 0x18) = local_10;
    if (lVar4 != 0) {
        FUN_14018b900(lVar4, 0);
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return *(undefined8 *) (param_4 + 8);
}


int FUN_140510a10(longlong param_1, undefined8 param_2, double param_3, int *param_4) {
    int iVar1;
    undefined8 uVar2;
    double *pdVar3;
    longlong lVar4;
    double local_res18[2];
    double local_18;
    undefined4 local_10;

    local_res18[0] = param_3;
    FUN_140058710(param_1, "fontSize", 8);
    uVar2 = FUN_1400580e0(param_1, 0xfffffffe);
    lVar4 = *(longlong *) (param_1 + 0x10) + -0x10;
    FUN_14005e8e0(param_1, uVar2, lVar4, lVar4);
    iVar1 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
    pdVar3 = (double *) (*(longlong *) (param_1 + 0x10) + -0x10);
    if (iVar1 == 3) {
        LAB_140510a9d:
        iVar1 = (int) *pdVar3;
    } else {
        if (iVar1 == 4) {
            iVar1 = FUN_14005ac80((longlong) *pdVar3 + 0x20, local_res18);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar3 = &local_18;
                local_18 = local_res18[0];
                goto LAB_140510a9d;
            }
        }
        iVar1 = 0;
    }
    *param_4 = iVar1;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return *param_4;
}


ulonglong FUN_140510ac0(longlong param_1, undefined8 param_2, longlong param_3) {
    double dVar1;
    int iVar2;
    undefined8 uVar3;
    double *pdVar4;
    longlong lVar5;
    double local_res8[4];
    double local_18;
    undefined4 local_10;

    if (param_3 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    } else {
        lVar5 = -1;
        do {
            lVar5 = lVar5 + 1;
        } while (*(char *) (param_3 + lVar5) != '\0');
        FUN_140058710(param_1, param_3);
    }
    uVar3 = FUN_1400580e0(param_1, 0xfffffffe);
    lVar5 = *(longlong *) (param_1 + 0x10) + -0x10;
    FUN_14005e8e0(param_1, uVar3, lVar5, lVar5);
    iVar2 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
    pdVar4 = (double *) (*(longlong *) (param_1 + 0x10) + -0x10);
    if (iVar2 != 3) {
        if (iVar2 == 4) {
            iVar2 = FUN_14005ac80((longlong) *pdVar4 + 0x20, local_res8);
            if (iVar2 != 0) {
                local_10 = 3;
                pdVar4 = &local_18;
                local_18 = local_res8[0];
                goto LAB_140510b5c;
            }
        }
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        return 0;
    }
    LAB_140510b5c:
    dVar1 = *pdVar4;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return (ulonglong) pdVar4 & 0xffffffff00000000 | (ulonglong) (uint) (int) dVar1;
}


float FUN_140510b80(longlong param_1, undefined8 param_2, longlong param_3, float *param_4) {
    int iVar1;
    undefined8 uVar2;
    double *pdVar3;
    longlong lVar4;
    double dVar5;
    double local_res8;
    double local_18;
    undefined4 local_10;

    if (param_3 == 0) {
        *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    } else {
        lVar4 = -1;
        do {
            lVar4 = lVar4 + 1;
        } while (*(char *) (param_3 + lVar4) != '\0');
        FUN_140058710(param_1, param_3);
    }
    uVar2 = FUN_1400580e0(param_1, 0xfffffffe);
    lVar4 = *(longlong *) (param_1 + 0x10) + -0x10;
    FUN_14005e8e0(param_1, uVar2, lVar4, lVar4);
    iVar1 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
    pdVar3 = (double *) (*(longlong *) (param_1 + 0x10) + -0x10);
    if (iVar1 == 3) {
        LAB_140510c28:
        dVar5 = *pdVar3;
    } else {
        if (iVar1 == 4) {
            iVar1 = FUN_14005ac80((longlong) *pdVar3 + 0x20, &local_res8);
            if (iVar1 != 0) {
                local_10 = 3;
                pdVar3 = &local_18;
                local_18 = local_res8;
                goto LAB_140510c28;
            }
        }
        dVar5 = 0.0;
    }
    *param_4 = (float) dVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return *param_4;
}


void FUN_140510c50(longlong param_1, undefined8 param_2, double param_3, undefined8 *param_4) {
    undefined8 * puVar1;
    undefined * puVar2;
    int iVar3;
    int iVar4;
    undefined8 uVar5;
    double *pdVar6;
    longlong lVar7;
    double local_res8;
    double local_res18[2];
    undefined local_48[8];
    double local_40;
    undefined4 local_38;
    double local_30;
    undefined4 local_28;

    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    param_4[5] = 0;
    local_res18[0] = param_3;
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar1 = *(undefined8 **) (param_1 + 0x10);
    uVar5 = FUN_140062650(param_1, "format", 6);
    *(undefined4 *) (puVar1 + 1) = 4;
    *puVar1 = uVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar5 = FUN_1400580e0(param_1, 0xfffffffe);
    lVar7 = *(longlong *) (param_1 + 0x10) + -0x10;
    FUN_14005e8e0(param_1, uVar5, lVar7, lVar7);
    puVar2 = *(undefined **) (param_1 + 0x10);
    if ((puVar2 != &DAT_140a12148) && (*(int *) (puVar2 + -8) == 5)) {
        *(undefined4 *) (puVar2 + 8) = 0;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        while (true) {
            iVar3 = FUN_14005ba70(param_1, *(undefined8 *) (*(longlong *) (param_1 + 0x10) + -0x20),
                                  *(longlong *) (param_1 + 0x10) + -0x10);
            if (iVar3 == 0) break;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            if (*(int *) (&DAT_ffffffffffffffe8 + *(longlong *) (param_1 + 0x10)) == 3) {
                LAB_140510d60:
                pdVar6 = (double *) (*(longlong *) (param_1 + 0x10) + -0x20);
                if (*(int *) (&DAT_ffffffffffffffe8 + *(longlong *) (param_1 + 0x10)) != 3) {
                    if (*(int *) (&DAT_ffffffffffffffe8 + *(longlong *) (param_1 + 0x10)) == 4) {
                        iVar3 = FUN_14005ac80((longlong) *pdVar6 + 0x20, local_res18);
                        if (iVar3 != 0) {
                            local_38 = 3;
                            pdVar6 = &local_40;
                            local_40 = local_res18[0];
                            goto LAB_140510dad;
                        }
                    }
                    goto LAB_140510e07;
                }
                LAB_140510dad:
                iVar3 = (int) *pdVar6;
                if (0xb < iVar3 - 1U) goto LAB_140510e07;
                iVar4 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
                pdVar6 = (double *) (*(longlong *) (param_1 + 0x10) + -0x10);
                if (iVar4 == 3) {
                    LAB_140510dfc:
                    *(int *) ((longlong) param_4 + (longlong) iVar3 * 4 + -4) = (int) *pdVar6;
                    goto LAB_140510e07;
                }
                if (iVar4 == 4) {
                    iVar4 = FUN_14005ac80((longlong) *pdVar6 + 0x20, &local_res8);
                    if (iVar4 != 0) {
                        local_28 = 3;
                        pdVar6 = &local_30;
                        local_30 = local_res8;
                        goto LAB_140510dfc;
                    }
                }
                *(undefined4 *) ((longlong) param_4 + (longlong) iVar3 * 4 + -4) = 0;
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            } else {
                if (*(int *) (&DAT_ffffffffffffffe8 + *(longlong *) (param_1 + 0x10)) == 4) {
                    iVar3 = FUN_14005ac80(*(longlong *) (*(longlong *) (param_1 + 0x10) + -0x20) + 0x20, local_48
                    );
                    if (iVar3 != 0) goto LAB_140510d60;
                }
                LAB_140510e07:
                *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            }
        }
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return;
}



// WARNING: Could not reconcile some variable overlaps

undefined8 FUN_140510e40(longlong param_1) {
    short sVar1;
    undefined8 * puVar2;
    char cVar3;
    short sVar7;
    short sVar8;
    short sVar9;
    ulonglong uVar10;
    unkbyte10 Var11;
    undefined auVar12[12];
    undefined auVar13[14];
    short sVar14;
    undefined6 uVar15;
    ulonglong uVar16;
    bool bVar17;
    int iVar18;
    double *pdVar19;
    undefined8 uVar20;
    undefined4 * puVar21;
    uint uVar22;
    int *piVar23;
    undefined8 * puVar24;
    int *piVar25;
    longlong lVar26;
    longlong lVar27;
    int iVar29;
    undefined extraout_XMM0[16];
    undefined auVar28[16];
    int iVar30;
    char cVar31;
    char cVar32;
    undefined4 uVar33;
    undefined4 uVar34;
    undefined4 uVar35;
    undefined4 uVar36;
    undefined4 uVar37;
    undefined4 uVar38;
    undefined4 uVar39;
    undefined4 uVar40;
    uint local_res8;
    undefined4 uStackX12;
    double local_58;
    undefined8 uStack80;
    undefined2 *local_48;
    undefined2 *local_40;
    char cVar4;
    char cVar5;
    char cVar6;

    puVar2 = *(undefined8 **) (param_1 + 0x18);
    if (((*(undefined8 **) (param_1 + 0x10) <= puVar2) || (puVar2 == &DAT_140a12138)) ||
        (*(int *) (puVar2 + 1) != 5)) {
        FUN_140056570(param_1, 1, "not a table");
    }
    FUN_140058710(param_1, &DAT_140b11ac0, 4);
    FUN_14005e8e0();
    iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
    pdVar19 = (double *) (*(longlong *) (param_1 + 0x10) + -0x10);
    if (iVar18 != 3) {
        if ((iVar18 != 4) || (iVar18 = FUN_14005ac80(), iVar18 == 0)) {
            iVar18 = 0;
            goto LAB_140510f00;
        }
        local_58 = (double) CONCAT44(uStackX12, local_res8);
        uStack80 = (undefined2 *) CONCAT44(uStack80._4_4_, 3);
        pdVar19 = &local_58;
    }
    iVar18 = (int) *pdVar19;
    LAB_140510f00:
    uVar22 = 0;
    piVar25 = (int *) (DAT_140c65898 + 0x1c20);
    while (*piVar25 != iVar18) {
        uVar22 = uVar22 + 1;
        piVar25 = piVar25 + 0x48;
        if (0x3e < uVar22) {
            return 0;
        }
    }
    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0(param_1);
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar20 = FUN_140062650(param_1, "normal", 6);
    *(undefined4 *) (puVar2 + 1) = 4;
    puVar24 = &DAT_140a12138;
    *puVar2 = uVar20;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    if (*(ulonglong *) (param_1 + 0x18) < *(ulonglong *) (param_1 + 0x10)) {
        puVar24 = *(undefined8 **) (param_1 + 0x18);
    }
    lVar26 = *(ulonglong *) (param_1 + 0x10) - 0x10;
    FUN_14005e8e0(param_1, puVar24, lVar26, lVar26);
    if ((*(undefined **) (param_1 + 0x10) != &DAT_140a12148) &&
        (*(int *) (*(undefined **) (param_1 + 0x10) + -8) == 5)) {
        FUN_140058710(param_1, "useFontFace", 0xb);
        uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
        lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
        FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
        iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
        if ((iVar18 == 0) || ((iVar18 == 1 && (*(int *) (*(longlong *) (param_1 + 0x10) + -0x10) == 0)))) {
            iVar18 = 0;
        } else {
            iVar18 = 1;
        }
        piVar25[0x3e] = iVar18;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        if (piVar25[0x3e] != 0) {
            uStack80 = (undefined2 *) FUN_14018b280(0x10);
            local_40 = uStack80 + 8;
            if (uStack80 != (undefined2 *) 0x0) {
                *uStack80 = 0;
            }
            local_48 = uStack80;
            FUN_140510930(param_1);
            piVar23 = piVar25 + 4;
            lVar26 = 0x20;
            lVar27 = (longlong) uStack80 - (longlong) piVar23;
            do {
                if ((lVar26 == -0x7fffffde) || (sVar1 = *(short *) (lVar27 + (longlong) piVar23), sVar1 == 0)) {
                    if (lVar26 != 0) goto LAB_1405110a1;
                    break;
                }
                *(short *) piVar23 = sVar1;
                piVar23 = (int *) ((longlong) piVar23 + 2);
                lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            piVar23 = (int *) ((longlong) piVar23 + -2);
            LAB_1405110a1:
            *(short *) piVar23 = 0;
            if (uStack80 != (undefined2 *) 0x0) {
                FUN_14018b900(uStack80, 0);
            }
        }
        FUN_140058710(param_1, "useFontSize", 0xb);
        uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
        lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
        FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
        iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
        if ((iVar18 == 0) || ((iVar18 == 1 && (*(int *) (*(longlong *) (param_1 + 0x10) + -0x10) == 0)))) {
            iVar18 = 0;
        } else {
            iVar18 = 1;
        }
        piVar25[0x3f] = iVar18;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        if (piVar25[0x3f] != 0) {
            FUN_140510a10(param_1);
        }
        FUN_140058710(param_1, "useFontColor", 0xc);
        uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
        lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
        FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
        iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
        if ((iVar18 == 0) || ((iVar18 == 1 && (*(int *) (*(longlong *) (param_1 + 0x10) + -0x10) == 0)))) {
            iVar18 = 0;
        } else {
            iVar18 = 1;
        }
        piVar25[0x40] = iVar18;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        if (piVar25[0x40] != 0) {
            FUN_140058710(param_1, "fontColor", 9);
            uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
            lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
            FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
            uVar37 = 0x3f800000;
            uVar38 = 0x3f800000;
            uVar39 = 0x3f800000;
            uVar40 = 0x3f800000;
            local_58 = 0.007812501848093234;
            uStack80 = (undefined2 *) 0x3f8000003f800000;
            FUN_140143880(&local_res8, param_1, 0xffffffff, &local_58);
            lVar26 = DAT_140c63678;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
            if ((ulonglong) local_res8 < *(ulonglong *) (lVar26 + 0x30)) {
                puVar21 = (undefined4 *) ((ulonglong) local_res8 * 0x20 + *(longlong *) (lVar26 + 0x28));
            } else {
                puVar21 = *(undefined4 **) (lVar26 + 0x28);
            }
            uVar33 = *puVar21;
            uVar34 = puVar21[1];
            uVar35 = puVar21[2];
            uVar36 = puVar21[3];
            FUN_1401429a0();
            auVar28 = maxps(extraout_XMM0 & (undefined[16]) 0x0,
                            CONCAT412(uVar36, CONCAT48(uVar35, CONCAT44(uVar34, uVar33))));
            auVar28 = minps(auVar28, CONCAT412(uVar40, CONCAT48(uVar39, CONCAT44(uVar38, uVar37))));
            iVar18 = (int) (SUB164(auVar28, 0) * 255.0 + 0.5);
            uVar22 = (uint) (SUB164(auVar28 >> 0x20, 0) * 255.0 + 0.5);
            iVar29 = (int) (SUB164(auVar28 >> 0x40, 0) * 255.0 + 0.5);
            iVar30 = (int) (SUB164(auVar28 >> 0x60, 0) * 255.0 + 0.5);
            cVar31 = (char) ((uint) iVar18 >> 0x10);
            cVar32 = (char) ((uint) iVar30 >> 0x10);
            uVar16 = (ulonglong)
                    CONCAT16((char) (uVar22 >> 0x10),
                             CONCAT15((char) (uVar22 >> 8), CONCAT14((char) uVar22, iVar29)));
            uVar10 = ((ulonglong) uVar22 & 0xff000000) << 0x20 | uVar16;
            Var11 = CONCAT19((char) ((uint) iVar18 >> 8), CONCAT18((char) iVar18, uVar10));
            auVar12 = CONCAT111((char) ((uint) iVar18 >> 0x18), CONCAT110(cVar31, Var11));
            auVar13 = CONCAT113((char) ((uint) iVar30 >> 8), CONCAT112((char) iVar30, auVar12));
            sVar1 = (short) iVar29;
            cVar3 = (0 < sVar1) * (sVar1 < 0xff) * (char) iVar29 - (0xff < sVar1);
            sVar1 = (short) (uVar16 >> 0x10);
            sVar7 = (short) (uVar16 >> 0x20);
            cVar4 = (0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar7);
            sVar7 = (short) (uVar10 >> 0x30);
            sVar8 = (short) ((unkuint10) Var11 >> 0x40);
            cVar5 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar18 - (0xff < sVar8);
            sVar8 = SUB122(auVar12 >> 0x50, 0);
            sVar9 = SUB142(auVar13 >> 0x60, 0);
            cVar6 = (0 < sVar9) * (sVar9 < 0xff) * (char) iVar30 - (0xff < sVar9);
            sVar9 = SUB162(CONCAT115((char) ((uint) iVar30 >> 0x18), CONCAT114(cVar32, auVar13)) >> 0x70, 0);
            sVar14 = CONCAT11((0 < sVar1) * (sVar1 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar1), cVar3
            );
            uVar37 = CONCAT13((0 < sVar7) * (sVar7 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar7),
                              CONCAT12(cVar4, sVar14));
            uVar15 = CONCAT15((0 < sVar8) * (sVar8 < 0xff) * cVar31 - (0xff < sVar8),
                              CONCAT14(cVar5, uVar37));
            sVar1 = (short) ((uint) uVar37 >> 0x10);
            sVar7 = (short) ((uint6) uVar15 >> 0x20);
            sVar8 = (short) (CONCAT17((0 < sVar9) * (sVar9 < 0xff) * cVar32 - (0xff < sVar9),
                                      CONCAT16(cVar6, uVar15)) >> 0x30);
            piVar25[0x15] =
                    CONCAT13((0 < sVar8) * (sVar8 < 0xff) * cVar6 - (0xff < sVar8),
                             CONCAT12((0 < sVar7) * (sVar7 < 0xff) * cVar5 - (0xff < sVar7),
                                      CONCAT11((0 < sVar1) * (sVar1 < 0xff) * cVar4 - (0xff < sVar1),
                                               (0 < sVar14) * (sVar14 < 0xff) * cVar3 - (0xff < sVar14))));
        }
        FUN_140058710(param_1, "useFontFlags", 0xc);
        uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
        lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
        FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
        iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
        if ((iVar18 == 0) || ((iVar18 == 1 && (*(int *) (*(longlong *) (param_1 + 0x10) + -0x10) == 0)))) {
            iVar18 = 0;
        } else {
            iVar18 = 1;
        }
        piVar25[0x41] = iVar18;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        if (piVar25[0x41] != 0) {
            piVar25[0x16] = 0;
            FUN_140058710(param_1, "fontBold", 8);
            uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
            lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
            FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
            iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
            piVar23 = (int *) (*(longlong *) (param_1 + 0x10) + -0x10);
            if ((iVar18 == 0) || ((iVar18 == 1 && (*piVar23 == 0)))) {
                bVar17 = false;
            } else {
                bVar17 = true;
            }
            *(int **) (param_1 + 0x10) = piVar23;
            if (bVar17) {
                piVar25[0x16] = piVar25[0x16] | 2;
            }
            FUN_140058710(param_1, "fontItalic", 10);
            uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
            lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
            FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
            iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
            piVar23 = (int *) (*(longlong *) (param_1 + 0x10) + -0x10);
            if ((iVar18 == 0) || ((iVar18 == 1 && (*piVar23 == 0)))) {
                bVar17 = false;
            } else {
                bVar17 = true;
            }
            *(int **) (param_1 + 0x10) = piVar23;
            if (bVar17) {
                piVar25[0x16] = piVar25[0x16] | 4;
            }
            FUN_140058710(param_1, "fontShadow", 10);
            uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
            lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
            FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
            iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
            piVar23 = (int *) (*(longlong *) (param_1 + 0x10) + -0x10);
            if ((iVar18 == 0) || ((iVar18 == 1 && (*piVar23 == 0)))) {
                bVar17 = false;
            } else {
                bVar17 = true;
            }
            *(int **) (param_1 + 0x10) = piVar23;
            if (bVar17) {
                piVar25[0x16] = piVar25[0x16] | 8;
            }
            FUN_140058710(param_1, "fontOutline", 0xb);
            uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
            lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
            FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
            iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
            piVar23 = (int *) (*(longlong *) (param_1 + 0x10) + -0x10);
            if ((iVar18 == 0) || ((iVar18 == 1 && (*piVar23 == 0)))) {
                bVar17 = false;
            } else {
                bVar17 = true;
            }
            *(int **) (param_1 + 0x10) = piVar23;
            if (bVar17) {
                piVar25[0x16] = piVar25[0x16] | 0x10;
            }
        }
        FUN_140058710(param_1, "useLocation", 0xb);
        uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
        lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
        FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
        iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
        if ((iVar18 == 0) || ((iVar18 == 1 && (*(int *) (*(longlong *) (param_1 + 0x10) + -0x10) == 0)))) {
            iVar18 = 0;
        } else {
            iVar18 = 1;
        }
        piVar25[0x42] = iVar18;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        if (piVar25[0x42] != 0) {
            iVar18 = FUN_140510ac0(param_1);
            piVar25[0x17] = iVar18;
            iVar18 = FUN_140510ac0(param_1);
            piVar25[0x18] = iVar18;
            FUN_140510b80(param_1);
            FUN_140510b80(param_1);
        }
        FUN_140058710(param_1, "useFormat", 9);
        uVar20 = FUN_1400580e0(param_1, 0xfffffffe);
        lVar26 = *(longlong *) (param_1 + 0x10) + -0x10;
        FUN_14005e8e0(param_1, uVar20, lVar26, lVar26);
        iVar18 = *(int *) (*(longlong *) (param_1 + 0x10) + -8);
        iVar29 = 0;
        if ((iVar18 != 0) &&
            ((iVar18 != 1 || (iVar29 = 0, *(int *) (*(longlong *) (param_1 + 0x10) + -0x10) != 0)))) {
            iVar29 = 1;
        }
        piVar25[0x43] = iVar29;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
        if (piVar25[0x43] != 0) {
            FUN_140510c50(param_1);
        }
    }
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x10;
    return 1;
}


undefined8 FUN_1405115b0(longlong param_1) {
    undefined8 * puVar1;
    int iVar2;
    uint uVar3;
    ulonglong uVar4;
    undefined8 uVar5;
    longlong lVar6;
    int *piVar7;
    longlong lVar8;
    undefined local_28[8];
    longlong local_20;

    iVar2 = FUN_140056d60(param_1, 1);
    uVar4 = 0;
    piVar7 = &DAT_140c38a60;
    do {
        if (*piVar7 == iVar2) {
            uVar5 = FUN_14034bdd0(iVar2, (&DAT_140c38a64)[uVar4 * 2]);
            lVar6 = FUN_14018f0e0(local_28, uVar5);
            lVar6 = *(longlong *) (lVar6 + 8);
            if (lVar6 == 0) {
                *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            } else {
                lVar8 = -1;
                do {
                    lVar8 = lVar8 + 1;
                } while (*(char *) (lVar8 + lVar6) != '\0');
                if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
                    *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
                    FUN_14005e2c0(param_1);
                }
                puVar1 = *(undefined8 **) (param_1 + 0x10);
                uVar5 = FUN_140062650(param_1, lVar6, lVar8);
                *(undefined4 *) (puVar1 + 1) = 4;
                *puVar1 = uVar5;
            }
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            if (local_20 != 0) {
                FUN_14018b900(local_20, 0);
            }
            return 1;
        }
        uVar3 = (int) uVar4 + 1;
        uVar4 = (ulonglong) uVar3;
        piVar7 = piVar7 + 2;
    } while (uVar3 < 0xb);
    return 0;
}


undefined8 FUN_140511840(longlong param_1) {
    int iVar1;
    undefined8 * puVar2;
    double *pdVar3;
    longlong lVar4;
    undefined8 uVar5;
    uint uVar6;
    int *piVar7;

    if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
        *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
        FUN_14005e2c0();
    }
    puVar2 = *(undefined8 **) (param_1 + 0x10);
    uVar5 = FUN_14005c1b0(param_1, 0, 0);
    *(undefined4 *) (puVar2 + 1) = 5;
    piVar7 = &DAT_140c38a38;
    *puVar2 = uVar5;
    *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
    uVar6 = 0;
    do {
        pdVar3 = *(double **) (param_1 + 0x10);
        uVar6 = uVar6 + 1;
        *(undefined4 *) (pdVar3 + 1) = 3;
        *pdVar3 = (double) uVar6;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **) (param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1, 0, 0);
        *(undefined4 *) (puVar2 + 1) = 5;
        *puVar2 = uVar5;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        FUN_14034bdd0();
        FUN_1400f0090(param_1);
        iVar1 = *piVar7;
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar2 = *(undefined8 **) (param_1 + 0x10);
        uVar5 = FUN_140062650(param_1, "location", 8);
        *(undefined4 *) (puVar2 + 1) = 4;
        *puVar2 = uVar5;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        pdVar3 = *(double **) (param_1 + 0x10);
        *(undefined4 *) (pdVar3 + 1) = 3;
        *pdVar3 = (double) iVar1;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        uVar5 = FUN_1400580e0(param_1, 0xfffffffd);
        FUN_14005ea50(param_1, uVar5, *(longlong *) (param_1 + 0x10) + -0x20,
                      *(longlong *) (param_1 + 0x10) + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        lVar4 = *(longlong *) (param_1 + 0x10);
        FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        piVar7 = piVar7 + 2;
    } while (uVar6 < 4);
    return 1;
}


undefined8 FUN_140511c80(longlong param_1) {
    undefined8 * puVar1;
    ulonglong uVar2;
    undefined4 uVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    undefined local_28[8];
    longlong local_20;

    uVar3 = FUN_140056d60(param_1, 1);
    lVar4 = FUN_140242900(uVar3);
    if (lVar4 != 0) {
        if (*(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x70) <=
            *(ulonglong *) (*(longlong *) (param_1 + 0x20) + 0x78)) {
            FUN_14005e2c0(param_1);
        }
        puVar1 = *(undefined8 **) (param_1 + 0x10);
        uVar5 = FUN_14005c1b0(param_1, 0, 0);
        *(undefined4 *) (puVar1 + 1) = 5;
        *puVar1 = uVar5;
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        lVar6 = FUN_14018f0e0(local_28, L"label");
        lVar8 = -1;
        lVar7 = 0;
        if (*(longlong *) (lVar6 + 8) == 0) {
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        } else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *) (*(longlong *) (lVar6 + 8) + lVar9) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        uVar5 = FUN_14034bdd0();
        lVar6 = FUN_14018f0e0(local_28, uVar5);
        if (*(longlong *) (lVar6 + 8) == 0) {
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        } else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *) (*(longlong *) (lVar6 + 8) + lVar9) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        lVar6 = *(longlong *) (param_1 + 0x10);
        FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar6, lVar6 + -0x20, lVar6 + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        lVar6 = FUN_14018f0e0(local_28, L"iconPath");
        if (*(longlong *) (lVar6 + 8) == 0) {
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        } else {
            lVar9 = -1;
            do {
                lVar9 = lVar9 + 1;
            } while (*(char *) (*(longlong *) (lVar6 + 8) + lVar9) != '\0');
            FUN_140058710(param_1);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        uVar2 = *(ulonglong *) (lVar4 + 8);
        if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
            lVar7 = DAT_140c3fe68 + uVar2;
        }
        lVar4 = FUN_14018f0e0(local_28, lVar7);
        lVar4 = *(longlong *) (lVar4 + 8);
        if (lVar4 == 0) {
            *(undefined4 *) (*(longlong *) (param_1 + 0x10) + 8) = 0;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
        } else {
            do {
                lVar8 = lVar8 + 1;
            } while (*(char *) (lVar4 + lVar8) != '\0');
            FUN_140058710(param_1, lVar4, lVar8);
        }
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        lVar4 = *(longlong *) (param_1 + 0x10);
        FUN_14005ea50(param_1, &DAT_ffffffffffffffd0 + lVar4, lVar4 + -0x20, lVar4 + -0x10);
        *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
        return 1;
    }
    return 0;
}


undefined8 FUN_140511f40(longlong param_1) {
    int iVar1;
    longlong * plVar2;
    double *pdVar3;
    int iVar4;
    int iVar5;
    double local_res10;
    double local_18;
    undefined4 local_10;

    iVar4 = 0;
    iVar5 = 0;
    if (*(int *) (DAT_140c635f0 + 0x1648) != 0) {
        plVar2 = &DAT_140a12138;
        if (*(longlong **) (param_1 + 0x18) < *(longlong **) (param_1 + 0x10)) {
            plVar2 = *(longlong **) (param_1 + 0x18);
        }
        if ((*(int *) (plVar2 + 1) == 3) ||
            ((*(int *) (plVar2 + 1) == 4 &&
              (iVar1 = FUN_14005ac80(*plVar2 + 0x20, &local_res10), iVar5 = iVar4, iVar1 != 0)))) {
            pdVar3 = (double *) &DAT_140a12138;
            if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
                pdVar3 = *(double **) (param_1 + 0x18);
            }
            if (*(int *) (pdVar3 + 1) != 3) {
                iVar5 = iVar4;
                if ((*(int *) (pdVar3 + 1) != 4) ||
                    (iVar1 = FUN_14005ac80((longlong) *pdVar3 + 0x20, &local_res10), iVar1 == 0))
                    goto LAB_140511fef;
                local_10 = 3;
                pdVar3 = &local_18;
                local_18 = local_res10;
            }
            iVar5 = (int) *pdVar3;
        }
    }
    LAB_140511fef:
    FUN_140016560(DAT_140c65678, iVar5);
    return 0;
}


undefined8 FUN_140512010(longlong param_1) {
    undefined8 * puVar1;
    longlong lVar2;
    undefined8 uVar3;
    longlong lVar4;
    ulonglong uVar5;
    undefined local_48[8];
    longlong local_40;
    undefined local_28[8];
    longlong local_20;

    uVar5 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8) + 400) ==
                param_1) {
                lVar4 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar5 * 8);
                goto LAB_14051204e;
            }
            uVar5 = (ulonglong) ((int) uVar5 + 1);
        } while (uVar5 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar4 = 0;
    LAB_14051204e:
    if (DAT_140c658a0 != 0) {
        lVar4 = *(longlong *) (lVar4 + 400);
        lVar2 = FUN_14018f0e0(local_48, 0);
        uVar3 = *(undefined8 *) (lVar2 + 8);
        puVar1 = *(undefined8 **) (lVar4 + 0x18);
        if (((puVar1 < *(undefined8 **) (lVar4 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
            (0 < *(int *) (puVar1 + 1))) {
            uVar3 = FUN_140056bb0(lVar4, 1);
        }
        FUN_14018f2d0(local_28, uVar3);
        if (local_40 != 0) {
            FUN_14018b900(local_40, 0);
        }
        FUN_140003890(DAT_140c658a0, 3, 0, local_20, 0, 0);
        if (local_20 != 0) {
            FUN_14018b900(local_20, 0);
        }
        return 0;
    }
    return 0;
}


longlong FUN_140512120(longlong param_1, undefined4 param_2) {
    int iVar1;
    char cVar2;
    longlong * plVar3;
    longlong lVar4;
    undefined8 uVar5;
    undefined8 uVar6;
    undefined8 local_18;
    undefined4 local_10;

    plVar3 = (longlong *) FUN_1400580e0();
    if (*(int *) (plVar3 + 1) == 2) {
        lVar4 = *plVar3;
    } else {
        if (*(int *) (plVar3 + 1) != 7) {
            return 0;
        }
        lVar4 = *plVar3 + 0x30;
    }
    if (lVar4 != 0) {
        plVar3 = (longlong *) FUN_1400580e0(param_1, param_2);
        iVar1 = *(int *) (plVar3 + 1);
        if ((iVar1 == 5) || (iVar1 == 7)) {
            lVar4 = *(longlong *) (*plVar3 + 0x10);
        } else {
            lVar4 = *(longlong *) (*(longlong *) (param_1 + 0x20) + 0xe0 + (longlong) iVar1 * 8);
        }
        if (lVar4 != 0) {
            plVar3 = *(longlong **) (param_1 + 0x10);
            *plVar3 = lVar4;
            *(undefined4 *) (plVar3 + 1) = 5;
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            lVar4 = *(longlong *) (param_1 + 0x20);
            local_18 = FUN_140062650(param_1, "Game.Quest", 10);
            local_10 = 4;
            FUN_14005e8e0(param_1, lVar4 + 0xa0, &local_18, *(undefined8 *) (param_1 + 0x10));
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + 0x10;
            uVar5 = FUN_1400586a0(param_1, 0xffffffff);
            uVar6 = FUN_1400586a0(param_1, 0xfffffffe);
            cVar2 = FUN_1400e2100(DAT_140c63650, uVar6, uVar5);
            *(longlong *) (param_1 + 0x10) = *(longlong *) (param_1 + 0x10) + -0x20;
            if (cVar2 != '\0') {
                plVar3 = (longlong *) FUN_1400580e0(param_1, param_2);
                if (*(int *) (plVar3 + 1) == 2) {
                    return *plVar3;
                }
                if (*(int *) (plVar3 + 1) == 7) {
                    return *plVar3 + 0x30;
                }
            }
        }
    }
    return 0;
}


undefined *FUN_140512270(void) {
    DAT_140c7d5d8 = FUN_14018b280(0x20);
    *(longlong *) DAT_140c7d5d8 = DAT_140c7d5d8;
    *(longlong *) (DAT_140c7d5d8 + 8) = DAT_140c7d5d8;
    DAT_140c7d5e8 = FUN_14018b280(0x18);
    *(longlong *) DAT_140c7d5e8 = DAT_140c7d5e8;
    *(longlong *) (DAT_140c7d5e8 + 8) = DAT_140c7d5e8;
    DAT_140c7d5f8 = FUN_14018b280(0x18);
    *(longlong *) DAT_140c7d5f8 = DAT_140c7d5f8;
    *(longlong *) (DAT_140c7d5f8 + 8) = DAT_140c7d5f8;
    DAT_140c7d608 = FUN_14018b280(0x20);
    *(longlong *) DAT_140c7d608 = DAT_140c7d608;
    *(longlong *) (DAT_140c7d608 + 8) = DAT_140c7d608;
    DAT_140c7d618 = FUN_14018b280(0x18);
    *(longlong *) DAT_140c7d618 = DAT_140c7d618;
    *(longlong *) (DAT_140c7d618 + 8) = DAT_140c7d618;
    FUN_1405124d0();
    DAT_140c7d620 = 1;
    return &DAT_140c7d5d0;
}


void FUN_140512330(void) {
    longlong * *pplVar1;
    longlong * *pplVar2;

    FUN_1405124d0();
    pplVar2 = (longlong **) *DAT_140c7d618;
    if (pplVar2 != DAT_140c7d618) {
        do {
            pplVar1 = (longlong **) *pplVar2;
            FUN_14018b900(pplVar2, 0);
            pplVar2 = pplVar1;
        } while (pplVar1 != DAT_140c7d618);
    }
    *DAT_140c7d618 = (longlong *) DAT_140c7d618;
    DAT_140c7d618[1] = (longlong *) DAT_140c7d618;
    FUN_14018b900(DAT_140c7d618, 0);
    pplVar2 = (longlong **) *DAT_140c7d608;
    if (pplVar2 != DAT_140c7d608) {
        do {
            pplVar1 = (longlong **) *pplVar2;
            FUN_14018b900(pplVar2, 0);
            pplVar2 = pplVar1;
        } while (pplVar1 != DAT_140c7d608);
    }
    *DAT_140c7d608 = (longlong *) DAT_140c7d608;
    DAT_140c7d608[1] = (longlong *) DAT_140c7d608;
    FUN_14018b900(DAT_140c7d608, 0);
    pplVar2 = (longlong **) *DAT_140c7d5f8;
    if (pplVar2 != DAT_140c7d5f8) {
        do {
            pplVar1 = (longlong **) *pplVar2;
            FUN_14018b900(pplVar2, 0);
            pplVar2 = pplVar1;
        } while (pplVar1 != DAT_140c7d5f8);
    }
    *DAT_140c7d5f8 = (longlong *) DAT_140c7d5f8;
    DAT_140c7d5f8[1] = (longlong *) DAT_140c7d5f8;
    FUN_14018b900(DAT_140c7d5f8, 0);
    pplVar2 = (longlong **) *DAT_140c7d5e8;
    if (pplVar2 != DAT_140c7d5e8) {
        do {
            pplVar1 = (longlong **) *pplVar2;
            FUN_14018b900(pplVar2, 0);
            pplVar2 = pplVar1;
        } while (pplVar1 != DAT_140c7d5e8);
    }
    *DAT_140c7d5e8 = (longlong *) DAT_140c7d5e8;
    DAT_140c7d5e8[1] = (longlong *) DAT_140c7d5e8;
    FUN_14018b900(DAT_140c7d5e8, 0);
    pplVar2 = (longlong **) *DAT_140c7d5d8;
    if (pplVar2 != DAT_140c7d5d8) {
        do {
            pplVar1 = (longlong **) *pplVar2;
            FUN_14018b900(pplVar2, 0);
            pplVar2 = pplVar1;
        } while (pplVar1 != DAT_140c7d5d8);
    }
    *DAT_140c7d5d8 = (longlong *) DAT_140c7d5d8;
    DAT_140c7d5d8[1] = (longlong *) DAT_140c7d5d8;
    FUN_14018b900(DAT_140c7d5d8, 0);
    return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_1405124d0(void) {
    longlong * plVar1;
    longlong * *pplVar2;
    longlong * *pplVar3;
    longlong * *pplVar4;

    pplVar4 = (longlong **) *DAT_140c7d5e8;
    pplVar3 = DAT_140c7d5e8;
    if (pplVar4 != DAT_140c7d5e8) {
        do {
            plVar1 = pplVar4[2];
            if (plVar1 != (longlong *) 0x0) {
                if (plVar1[5] != 0) {
                    FUN_14018b900(plVar1[5], 0);
                }
                FUN_14018b900(plVar1, 0);
                pplVar3 = DAT_140c7d5e8;
            }
            pplVar4 = (longlong **) *pplVar4;
        } while (pplVar4 != pplVar3);
    }
    pplVar4 = (longlong **) *pplVar3;
    if ((longlong **) *pplVar3 != pplVar3) {
        do {
            pplVar2 = (longlong **) *pplVar4;
            FUN_14018b900(pplVar4, 0);
            pplVar3 = DAT_140c7d5e8;
            pplVar4 = pplVar2;
        } while (pplVar2 != DAT_140c7d5e8);
    }
    *pplVar3 = (longlong *) pplVar3;
    DAT_140c7d5e8[1] = (longlong *) DAT_140c7d5e8;
    _DAT_140c7d624 = 0;
    DAT_140c7d62c = 0;
    _DAT_140c7d630 = ZEXT816(0);
    return;
}


undefined8 FUN_140512580(undefined8 param_1) {
    longlong lVar1;
    undefined4 * puVar2;
    undefined2 *puVar3;
    longlong * plVar4;

    puVar2 = (undefined4 *) FUN_14018b280(0x50);
    if (puVar2 == (undefined4 *) 0x0) {
        puVar2 = (undefined4 *) 0x0;
    } else {
        *(undefined8 *) (puVar2 + 10) = 0;
        *(undefined8 *) (puVar2 + 0xc) = 0;
        *(undefined8 *) (puVar2 + 0xe) = 0;
        puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
        *(undefined2 **) (puVar2 + 10) = puVar3;
        *(undefined2 **) (puVar2 + 0xc) = puVar3;
        *(undefined2 **) (puVar2 + 0xe) = puVar3 + 8;
        if (puVar3 != (undefined2 *) 0x0) {
            *puVar3 = 0;
        }
    }
    *puVar2 = 1;
    FUN_1400f0a10(param_1, 1, &DAT_1409f13b4, puVar2 + 4);
    FUN_1400f0a10(param_1, 1, &DAT_1409f1414, puVar2 + 5);
    FUN_1400f0a10(param_1, 1, &DAT_1409f13fc, puVar2 + 6);
    puVar2[0x10] = DAT_140c636a8;
    puVar2[0x11] = 0;
    lVar1 = DAT_140c7d5e8;
    plVar4 = (longlong *) FUN_14018b280(0x18);
    if (plVar4 + 2 != (longlong *) 0x0) {
        plVar4[2] = (longlong) puVar2;
    }
    *plVar4 = lVar1;
    plVar4[1] = *(longlong *) (lVar1 + 8);
    **(longlong ***) (lVar1 + 8) = plVar4;
    *(longlong **) (lVar1 + 8) = plVar4;
    return 0;
}


undefined8 FUN_140512680(undefined8 param_1) {
    short sVar1;
    undefined4 * puVar2;
    undefined2 *puVar3;
    undefined4 * puVar4;
    longlong lVar5;
    longlong * plVar6;
    short *psVar7;
    longlong lVar8;

    puVar2 = (undefined4 *) FUN_14018b280(0x50);
    lVar8 = 0;
    if (puVar2 == (undefined4 *) 0x0) {
        puVar2 = (undefined4 *) 0x0;
    } else {
        *(undefined8 *) (puVar2 + 10) = 0;
        *(undefined8 *) (puVar2 + 0xc) = 0;
        *(undefined8 *) (puVar2 + 0xe) = 0;
        puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
        *(undefined2 **) (puVar2 + 10) = puVar3;
        *(undefined2 **) (puVar2 + 0xc) = puVar3;
        *(undefined2 **) (puVar2 + 0xe) = puVar3 + 8;
        if (puVar3 != (undefined2 *) 0x0) {
            *puVar3 = 0;
        }
    }
    *puVar2 = 2;
    FUN_1400f0a10(param_1, 1, &DAT_1409f1364, puVar2 + 4);
    FUN_1400f0a10(param_1, 1, &DAT_1409f1334, puVar2 + 5);
    FUN_1400f0a10(param_1, 1, &DAT_1409f13a4, puVar2 + 6);
    puVar4 = (undefined4 *) FUN_1406622c0(param_1, 2);
    if (((puVar4 != (undefined4 *) 0x0) && (lVar5 = FUN_1403d90d0(DAT_140c65898, *puVar4), lVar5 != 0))
        && (*(longlong *) (lVar5 + 0x18) != 0)) {
        psVar7 = &DAT_140b7b704;
        if (*(short **) (lVar5 + 0x10) != (short *) 0x0) {
            psVar7 = *(short **) (lVar5 + 0x10);
        }
        sVar1 = *psVar7;
        while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar7[lVar8];
        }
        FUN_14001c480(puVar2 + 8, psVar7, psVar7 + lVar8);
        puVar2[0x10] = DAT_140c636a8;
        puVar2[0x11] = **(undefined4 **) (lVar5 + 0x18);
        lVar8 = DAT_140c7d5e8;
        plVar6 = (longlong *) FUN_14018b280(0x18);
        if (plVar6 + 2 != (longlong *) 0x0) {
            plVar6[2] = (longlong) puVar2;
        }
        *plVar6 = lVar8;
        plVar6[1] = *(longlong *) (lVar8 + 8);
        **(longlong ***) (lVar8 + 8) = plVar6;
        *(longlong **) (lVar8 + 8) = plVar6;
        DAT_140c7d624 = DAT_140c7d624 + 1;
        return 0;
    }
    if (*(longlong *) (puVar2 + 10) != 0) {
        FUN_14018b900(*(longlong *) (puVar2 + 10), 0);
    }
    FUN_14018b900(puVar2, 0);
    return 0;
}


undefined8 FUN_140512820(undefined8 param_1) {
    short sVar1;
    undefined4 * puVar2;
    undefined2 *puVar3;
    undefined4 * puVar4;
    longlong lVar5;
    longlong * plVar6;
    short *psVar7;
    longlong lVar8;

    puVar2 = (undefined4 *) FUN_14018b280(0x50);
    lVar8 = 0;
    if (puVar2 == (undefined4 *) 0x0) {
        puVar2 = (undefined4 *) 0x0;
    } else {
        *(undefined8 *) (puVar2 + 10) = 0;
        *(undefined8 *) (puVar2 + 0xc) = 0;
        *(undefined8 *) (puVar2 + 0xe) = 0;
        puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
        *(undefined2 **) (puVar2 + 10) = puVar3;
        *(undefined2 **) (puVar2 + 0xc) = puVar3;
        *(undefined2 **) (puVar2 + 0xe) = puVar3 + 8;
        if (puVar3 != (undefined2 *) 0x0) {
            *puVar3 = 0;
        }
    }
    *puVar2 = 3;
    FUN_1400f0a10(param_1, 1, &DAT_1409f1374, puVar2 + 4);
    FUN_1400f0a10(param_1, 1, &DAT_1409f16fc, puVar2 + 5);
    FUN_1400f0a10(param_1, 1, &DAT_1409f16e4, puVar2 + 6);
    puVar4 = (undefined4 *) FUN_1406622c0(param_1, 2);
    if (((puVar4 == (undefined4 *) 0x0) || (lVar5 = FUN_1403d90d0(DAT_140c65898, *puVar4), lVar5 == 0))
        || (*(longlong *) (lVar5 + 0x18) == 0)) {
        puVar2[0x11] = 0;
    } else {
        psVar7 = &DAT_140b7b704;
        if (*(short **) (lVar5 + 0x10) != (short *) 0x0) {
            psVar7 = *(short **) (lVar5 + 0x10);
        }
        sVar1 = *psVar7;
        while (sVar1 != 0) {
            lVar8 = lVar8 + 1;
            sVar1 = psVar7[lVar8];
        }
        FUN_14001c480(puVar2 + 8, psVar7, psVar7 + lVar8);
        puVar2[0x11] = **(undefined4 **) (lVar5 + 0x18);
    }
    puVar2[0x10] = DAT_140c636a8;
    lVar8 = DAT_140c7d5e8;
    plVar6 = (longlong *) FUN_14018b280(0x18);
    if (plVar6 + 2 != (longlong *) 0x0) {
        plVar6[2] = (longlong) puVar2;
    }
    *plVar6 = lVar8;
    plVar6[1] = *(longlong *) (lVar8 + 8);
    **(longlong ***) (lVar8 + 8) = plVar6;
    *(longlong **) (lVar8 + 8) = plVar6;
    DAT_140c7d628 = DAT_140c7d628 + 1;
    return 0;
}


undefined8 FUN_140512990(longlong param_1) {
    int iVar1;
    double *pdVar2;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    pdVar2 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar2 = *(double **) (param_1 + 0x18);
    }
    if (*(int *) (pdVar2 + 1) != 3) {
        if (*(int *) (pdVar2 + 1) != 4) {
            return 0;
        }
        iVar1 = FUN_14005ac80((longlong) *pdVar2 + 0x20, local_res10);
        if (iVar1 == 0) {
            return 0;
        }
        local_10 = 3;
        pdVar2 = &local_18;
        local_18 = local_res10[0];
    }
    DAT_140c7d62c = DAT_140c7d62c + (int) *pdVar2;
    return 0;
}


undefined8 FUN_140512a00(longlong param_1) {
    undefined8 * puVar1;
    bool bVar2;
    bool bVar3;
    int iVar4;
    double *pdVar5;
    undefined8 * puVar6;
    double local_res10[3];
    double local_18;
    undefined4 local_10;

    pdVar5 = (double *) &DAT_140a12138;
    if (*(double **) (param_1 + 0x18) < *(double **) (param_1 + 0x10)) {
        pdVar5 = *(double **) (param_1 + 0x18);
    }
    if (*(int *) (pdVar5 + 1) != 3) {
        if ((*(int *) (pdVar5 + 1) != 4) ||
            (iVar4 = FUN_14005ac80((longlong) *pdVar5 + 0x20, local_res10), iVar4 == 0)) {
            iVar4 = 0;
            goto LAB_140512a62;
        }
        local_10 = 3;
        pdVar5 = &local_18;
        local_18 = local_res10[0];
    }
    iVar4 = (int) *pdVar5;
    LAB_140512a62:
    puVar1 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x10);
    bVar2 = true;
    puVar6 = &DAT_140a12138;
    if (puVar1 < *(undefined8 **) (param_1 + 0x10)) {
        puVar6 = puVar1;
    }
    if ((*(int *) (puVar6 + 1) == 0) ||
        ((bVar3 = true, *(int *) (puVar6 + 1) == 1 && (*(int *) puVar6 == 0)))) {
        bVar3 = false;
    }
    puVar1 = (undefined8 *) (*(longlong *) (param_1 + 0x18) + 0x20);
    puVar6 = &DAT_140a12138;
    if (puVar1 < *(undefined8 **) (param_1 + 0x10)) {
        puVar6 = puVar1;
    }
    if ((*(int *) (puVar6 + 1) == 0) || ((*(int *) (puVar6 + 1) == 1 && (*(int *) puVar6 == 0)))) {
        bVar2 = false;
    }
    DAT_140c7d630 = DAT_140c7d630 + iVar4;
    if (bVar3) {
        DAT_140c7d638 = DAT_140c7d638 + iVar4;
        DAT_140c7d634 = DAT_140c7d634 + 1;
    }
    if (bVar2) {
        DAT_140c7d63c = DAT_140c7d63c + iVar4;
    }
    return 0;
}


undefined8 FUN_140512c80(longlong param_1) {
    short sVar1;
    int iVar2;
    undefined4 * puVar3;
    undefined2 *puVar4;
    double *pdVar5;
    longlong lVar6;
    short *psVar7;
    longlong * plVar8;
    double *pdVar9;
    ulonglong uVar10;
    short *psVar11;
    ulonglong uVar12;
    double local_18;
    undefined4 local_10;

    puVar3 = (undefined4 *) FUN_14018b280(0x50);
    uVar12 = 0;
    if (puVar3 == (undefined4 *) 0x0) {
        puVar3 = (undefined4 *) 0x0;
    } else {
        *(undefined8 *) (puVar3 + 10) = 0;
        *(undefined8 *) (puVar3 + 0xc) = 0;
        *(undefined8 *) (puVar3 + 0xe) = 0;
        puVar4 = (undefined2 *) FUN_14018b280(0x10, 0);
        *(undefined2 **) (puVar3 + 10) = puVar4;
        *(undefined2 **) (puVar3 + 0xc) = puVar4;
        *(undefined2 **) (puVar3 + 0xe) = puVar4 + 8;
        if (puVar4 != (undefined2 *) 0x0) {
            *puVar4 = 0;
        }
    }
    *puVar3 = 5;
    FUN_1400f0a10(param_1, 1, &DAT_1409f165c, puVar3 + 4);
    FUN_1400f0a10(param_1, 1, &DAT_1409f16cc, puVar3 + 5);
    FUN_1400f0a10(param_1, 1, &DAT_1409f16a4, puVar3 + 6);
    pdVar5 = (double *) (*(longlong *) (param_1 + 0x18) + 0x10);
    pdVar9 = (double *) &DAT_140a12138;
    if (pdVar5 < *(double **) (param_1 + 0x10)) {
        pdVar9 = pdVar5;
    }
    if (*(int *) (pdVar9 + 1) != 3) {
        uVar10 = uVar12;
        if ((*(int *) (pdVar9 + 1) != 4) || (iVar2 = FUN_14005ac80((longlong) *pdVar9 + 0x20), iVar2 == 0)
                )
            goto LAB_140512d7d;
        local_10 = 3;
        pdVar9 = &local_18;
    }
    uVar10 = (ulonglong) (uint) (int) *pdVar9;
    LAB_140512d7d:
    puVar3[0x11] = (int) uVar10;
    lVar6 = FUN_1405a8a40();
    lVar6 = *(longlong *) (lVar6 + 8);
    if (lVar6 == 0) {
        psVar7 = &DAT_1409f28b4;
    } else {
        psVar7 = (short *) FUN_14034bdd0(lVar6, *(undefined4 *) (lVar6 + 4));
    }
    psVar11 = (short *) &DAT_1409f153c;
    if (psVar7 != (short *) 0x0) {
        psVar11 = psVar7;
    }
    sVar1 = *psVar11;
    while (sVar1 != 0) {
        uVar12 = uVar12 + 1;
        sVar1 = psVar11[uVar12];
    }
    FUN_14001c480(puVar3 + 8, psVar11, psVar11 + uVar12);
    lVar6 = DAT_140c7d5e8;
    plVar8 = (longlong *) FUN_14018b280(0x18);
    if (plVar8 + 2 != (longlong *) 0x0) {
        plVar8[2] = (longlong) puVar3;
    }
    *plVar8 = lVar6;
    plVar8[1] = *(longlong *) (lVar6 + 8);
    **(longlong ***) (lVar6 + 8) = plVar8;
    *(longlong **) (lVar6 + 8) = plVar8;
    return 0;
}


undefined8 FUN_140512e20(undefined8 param_1) {
    longlong lVar1;
    undefined4 * puVar2;
    undefined2 *puVar3;
    longlong * plVar4;

    puVar2 = (undefined4 *) FUN_14018b280(0x50);
    if (puVar2 == (undefined4 *) 0x0) {
        puVar2 = (undefined4 *) 0x0;
    } else {
        *(undefined8 *) (puVar2 + 10) = 0;
        *(undefined8 *) (puVar2 + 0xc) = 0;
        *(undefined8 *) (puVar2 + 0xe) = 0;
        puVar3 = (undefined2 *) FUN_14018b280(0x10, 0);
        *(undefined2 **) (puVar2 + 10) = puVar3;
        *(undefined2 **) (puVar2 + 0xc) = puVar3;
        *(undefined2 **) (puVar2 + 0xe) = puVar3 + 8;
        if (puVar3 != (undefined2 *) 0x0) {
            *puVar3 = 0;
        }
    }
    *puVar2 = 7;
    FUN_1400f0a10(param_1, 1, &DAT_1409f1514, puVar2 + 4);
    FUN_1400f0a10(param_1, 1, &DAT_1409f1634, puVar2 + 5);
    FUN_1400f0a10(param_1, 1, &DAT_1409f161c, puVar2 + 6);
    puVar2[0x11] = 0;
    lVar1 = DAT_140c7d5e8;
    plVar4 = (longlong *) FUN_14018b280(0x18);
    if (plVar4 + 2 != (longlong *) 0x0) {
        plVar4[2] = (longlong) puVar2;
    }
    *plVar4 = lVar1;
    plVar4[1] = *(longlong *) (lVar1 + 8);
    **(longlong ***) (lVar1 + 8) = plVar4;
    *(longlong **) (lVar1 + 8) = plVar4;
    return 0;
}


undefined8 *FUN_140513c90(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_140513cc0(undefined8 param_1, longlong *param_2) {
    undefined4 uVar1;
    uint uVar2;
    longlong lVar3;
    longlong lVar4;
    int iVar5;
    ulonglong uVar6;
    undefined extraout_XMM0[16];
    undefined auVar7[16];
    float fVar9;
    float fVar10;
    undefined4 uVar8;

    lVar3 = FUN_14020ce20();
    if (lVar3 == 0) {
        return false;
    }
    fVar9 = 0.0;
    if ((DAT_140c8ae90 & 1) == 0) {
        DAT_140c8ae90 = DAT_140c8ae90 | 1;
        _DAT_140c8aea4 = 0;
        _DAT_140c8aeac = 0;
        _DAT_140c8aeb4 = 0;
        _DAT_140c8aebc = 0;
    } else if (_DAT_140c8ae9c != 0) goto LAB_140513d8c;
    _DAT_140c8ae9c = 1;
    lVar4 = FUN_140200220();
    DAT_140c8ae98 = fVar9;
    if (lVar4 != 0) {
        DAT_140c8ae98 = *(float *) (lVar4 + 0x18);
    }
    LAB_140513d8c:
    fVar10 = (DAT_140c8ae98 * *(float *) (lVar3 + 0xc)) / 100.0;
    if (_DAT_140c8aeac == 0) {
        _DAT_140c8aeac = 1;
        lVar3 = FUN_140200220();
        DAT_140c8aea8 = fVar9;
        if (lVar3 != 0) {
            DAT_140c8aea8 = *(float *) (lVar3 + 0x20);
        }
    }
    if (_DAT_140c8aeb4 == 0) {
        _DAT_140c8aeb4 = 1;
        lVar3 = FUN_140200220();
        DAT_140c8aeb0 = fVar9;
        if (lVar3 != 0) {
            DAT_140c8aeb0 = *(float *) (lVar3 + 0x24);
        }
    }
    if (_DAT_140c8aea4 == 0) {
        _DAT_140c8aea4 = 1;
        lVar3 = FUN_140200220();
        DAT_140c8aea0 = fVar9;
        if (lVar3 != 0) {
            DAT_140c8aea0 = *(float *) (lVar3 + 0x1c);
        }
    }
    FUN_1408fbfc0();
    uVar1 = FUN_1408fbfc0();
    fVar10 = SUB164(extraout_XMM0, 0) * fVar10;
    auVar7 = CONCAT124(SUB1612(extraout_XMM0 >> 0x20, 0), fVar10);
    iVar5 = (int) fVar10;
    if ((iVar5 != -0x80000000) && ((float) iVar5 != fVar10)) {
        uVar8 = SUB164(extraout_XMM0 >> 0x20, 0);
        uVar6 = SUB168(auVar7, 0);
        uVar2 = movmskps(uVar1, CONCAT88(SUB168(CONCAT412(uVar8, CONCAT48(uVar8, uVar6)) >> 0x40, 0),
                                         uVar6 & 0xffffffff | uVar6 << 0x20));
        auVar7 = ZEXT416((uint) (float) (iVar5 + (uVar2 & 1 ^ 1)));
    }
    *param_2 = (longlong) SUB164(auVar7, 0) * 100;
    param_2[1] = 1;
    param_2[2] = 0;
    return *param_2 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_140513f30(undefined4 *param_1, longlong *param_2, int param_3) {
    ulonglong uVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    float fVar6;
    undefined auVar7[16];
    longlong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined auVar8[16];

    lVar4 = FUN_14020ce20(*param_1);
    if (lVar4 == 0) {
        return false;
    }
    if (param_3 == 0) {
        if ((DAT_140c8ae94 & 2) == 0) {
            DAT_140c8ae94 = DAT_140c8ae94 | 2;
            _DAT_140c8ad7c = 0;
        }
        local_28 = 0;
        local_20 = 1;
        local_18 = 0;
        iVar2 = FUN_140513cc0(param_1, &local_28);
        if (iVar2 == 0) {
            return false;
        }
        if (_DAT_140c8ad7c == 0) {
            _DAT_140c8ad7c = 1;
            lVar4 = FUN_140200220();
            if (lVar4 == 0) {
                DAT_140c8ad78 = 0.0;
            } else {
                DAT_140c8ad78 = *(float *) (lVar4 + 0x1c);
            }
        }
        auVar7 = ZEXT416((uint) (float) local_28) & (undefined[16]) 0xffffffffffffffff;
        fVar6 = (SUB164(auVar7, 0) * DAT_140c8ad78) / 100.0;
        auVar8 = CONCAT124(SUB1612(auVar7 >> 0x20, 0), fVar6);
        iVar2 = (int) fVar6;
        if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar6)) {
            uVar3 = movmskps(100, CONCAT88(SUB168(auVar7 >> 0x40, 0),
                                           SUB168(auVar8, 0) | SUB168(auVar8, 0) << 0x20) &
                                  (undefined[16]) 0xffffffffffffffff);
            auVar8 = ZEXT416((uint) (float) (iVar2 + (uVar3 & 1 ^ 1)));
        }
        *param_2 = (longlong) SUB164(auVar8, 0) * 100;
        param_2[1] = 1;
        param_2[2] = 0;
        goto LAB_14051414b;
    }
    if ((DAT_140c8ae94 & 1) == 0) {
        DAT_140c8ae94 = DAT_140c8ae94 | 1;
        _DAT_140c8ad98 = 0;
        _DAT_140c8ada8 = 0;
        _DAT_140c8adb8 = 0;
        _DAT_140c8adc8 = 0;
        LAB_140513fa2:
        _DAT_140c8ad88 = 1;
        lVar5 = FUN_140200220(0x521);
        if (lVar5 == 0) {
            DAT_140c8ad80 = 0;
        } else {
            DAT_140c8ad80 = (ulonglong) *(uint *) (lVar5 + 4);
        }
    } else if (_DAT_140c8ad88 == 0) goto LAB_140513fa2;
    uVar1 = DAT_140c8ad80;
    if (_DAT_140c8ad98 == 0) {
        _DAT_140c8ad98 = 1;
        lVar5 = FUN_140200220();
        if (lVar5 == 0) {
            DAT_140c8ad90 = 0;
        } else {
            DAT_140c8ad90 = (ulonglong) *(uint *) (lVar5 + 8);
        }
    }
    *param_2 = *(uint *) (lVar4 + 0x24) * DAT_140c8ad90 + uVar1;
    param_2[1] = 0xf;
    param_2[2] = 0x900000000;
    LAB_14051414b:
    return *param_2 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_140514170(undefined4 *param_1, longlong *param_2, int param_3) {
    ulonglong uVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    longlong lVar5;
    float fVar6;
    undefined auVar7[16];
    longlong local_28;
    undefined8 local_20;
    undefined8 local_18;
    undefined auVar8[16];

    if (param_3 == 0) {
        if ((DAT_140c8ae20 & 2) == 0) {
            DAT_140c8ae20 = DAT_140c8ae20 | 2;
            _DAT_140c8ae2c = 0;
        }
        local_28 = 0;
        local_20 = 1;
        local_18 = 0;
        iVar2 = FUN_140513cc0(param_1, &local_28);
        if (iVar2 == 0) {
            return false;
        }
        if (_DAT_140c8ae2c == 0) {
            _DAT_140c8ae2c = 1;
            lVar4 = FUN_140200220();
            if (lVar4 == 0) {
                DAT_140c8ae28 = 0.0;
            } else {
                DAT_140c8ae28 = *(float *) (lVar4 + 0x1c);
            }
        }
        auVar7 = ZEXT416((uint) (float) local_28) & (undefined[16]) 0xffffffffffffffff;
        fVar6 = (SUB164(auVar7, 0) * DAT_140c8ae28) / 100.0;
        auVar8 = CONCAT124(SUB1612(auVar7 >> 0x20, 0), fVar6);
        iVar2 = (int) fVar6;
        if ((iVar2 != -0x80000000) && ((float) iVar2 != fVar6)) {
            uVar3 = movmskps(100, CONCAT88(SUB168(auVar7 >> 0x40, 0),
                                           SUB168(auVar8, 0) | SUB168(auVar8, 0) << 0x20) &
                                  (undefined[16]) 0xffffffffffffffff);
            auVar8 = ZEXT416((uint) (float) (iVar2 + (uVar3 & 1 ^ 1)));
        }
        *param_2 = (longlong) SUB164(auVar8, 0) * 100;
        param_2[1] = 1;
        param_2[2] = 0;
        goto LAB_140514399;
    }
    lVar4 = FUN_14020ce20(*param_1);
    if (lVar4 == 0) {
        return false;
    }
    if ((DAT_140c8ae20 & 1) == 0) {
        DAT_140c8ae20 = DAT_140c8ae20 | 1;
        _DAT_140c8ade8 = 0;
        _DAT_140c8adf8 = 0;
        _DAT_140c8ae08 = 0;
        _DAT_140c8ae18 = 0;
        LAB_1405141e8:
        _DAT_140c8add8 = 1;
        lVar5 = FUN_140200220(0x520);
        if (lVar5 == 0) {
            DAT_140c8add0 = 0;
        } else {
            DAT_140c8add0 = (ulonglong) *(uint *) (lVar5 + 4);
        }
    } else if (_DAT_140c8add8 == 0) goto LAB_1405141e8;
    uVar1 = DAT_140c8add0;
    if (_DAT_140c8ade8 == 0) {
        _DAT_140c8ade8 = 1;
        lVar5 = FUN_140200220();
        if (lVar5 == 0) {
            DAT_140c8ade0 = 0;
        } else {
            DAT_140c8ade0 = (ulonglong) *(uint *) (lVar5 + 8);
        }
    }
    *param_2 = *(uint *) (lVar4 + 0x24) * DAT_140c8ade0 + uVar1;
    param_2[1] = 0xf;
    param_2[2] = 0x900000000;
    LAB_140514399:
    return *param_2 != 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8
FUN_1405143c0(undefined8 param_1, longlong *param_2, longlong param_3, int param_4, int param_5) {
    ulonglong uVar1;
    ulonglong uVar2;
    int iVar3;
    uint uVar4;
    longlong lVar5;
    longlong lVar6;
    float fVar7;
    undefined auVar8[16];
    longlong local_38;
    longlong local_30;
    longlong local_28;
    undefined auVar9[16];

    if (param_4 != 0) {
        if (param_5 == 0) {
            if ((DAT_140c8ae24 & 2) == 0) {
                DAT_140c8ae24 = DAT_140c8ae24 | 2;
                _DAT_140c8ae34 = 0;
            }
            local_38 = 0;
            local_30 = 1;
            local_28 = 0;
            iVar3 = FUN_140513f30(param_1, &local_38, 0);
            if (iVar3 == 0) {
                return 0;
            }
            if (_DAT_140c8ae34 == 0) {
                _DAT_140c8ae34 = 1;
                lVar5 = FUN_140200220();
                if (lVar5 == 0) {
                    DAT_140c8ae30 = 0.0;
                } else {
                    DAT_140c8ae30 = *(float *) (lVar5 + 0x18);
                }
            }
            auVar8 = ZEXT416((uint) (float) local_38) & (undefined[16]) 0xffffffffffffffff;
            fVar7 = (SUB164(auVar8, 0) * DAT_140c8ae30) / 100.0;
            auVar9 = CONCAT124(SUB1612(auVar8 >> 0x20, 0), fVar7);
            iVar3 = (int) fVar7;
            if ((iVar3 != -0x80000000) && ((float) iVar3 != fVar7)) {
                uVar4 = movmskps(100, CONCAT88(SUB168(auVar8 >> 0x40, 0),
                                               SUB168(auVar9, 0) | SUB168(auVar9, 0) << 0x20) &
                                      (undefined[16]) 0xffffffffffffffff);
                auVar9 = ZEXT416((uint) (float) (iVar3 + (uVar4 & 1 ^ 1)));
            }
            local_30 = 1;
            local_28 = 0;
            *param_2 = (longlong) SUB164(auVar9, 0) * 100;
        } else {
            if ((DAT_140c8ae24 & 1) == 0) {
                DAT_140c8ae24 = DAT_140c8ae24 | 1;
                _DAT_140c8ae48 = 0;
                _DAT_140c8ae58 = 0;
                _DAT_140c8ae68 = 0;
                _DAT_140c8ae78 = 0;
                _DAT_140c8ae88 = 0;
            }
            lVar5 = FUN_14020ce20();
            if (lVar5 == 0) {
                return 0;
            }
            if (_DAT_140c8ae48 == 0) {
                _DAT_140c8ae48 = 1;
                lVar6 = FUN_140200220();
                if (lVar6 == 0) {
                    DAT_140c8ae40 = 0;
                } else {
                    DAT_140c8ae40 = (ulonglong) *(uint *) (lVar6 + 4);
                }
            }
            uVar1 = DAT_140c8ae40;
            if (_DAT_140c8ae58 == 0) {
                _DAT_140c8ae58 = 1;
                lVar6 = FUN_140200220();
                if (lVar6 == 0) {
                    DAT_140c8ae50 = 0;
                } else {
                    DAT_140c8ae50 = (ulonglong) *(uint *) (lVar6 + 8);
                }
            }
            uVar2 = DAT_140c8ae50;
            if (_DAT_140c8ae68 == 0) {
                _DAT_140c8ae68 = 1;
                lVar6 = FUN_140200220();
                if (lVar6 == 0) {
                    DAT_140c8ae60 = 0;
                } else {
                    DAT_140c8ae60 = (ulonglong) *(uint *) (lVar6 + 0xc);
                }
            }
            local_30 = 0xf;
            local_28 = 0x900000000;
            *param_2 = (*(uint *) (lVar5 + 0x24) * uVar2 + uVar1) *
                       (*(uint *) (param_3 + 0x128) + DAT_140c8ae60);
        }
        param_2[1] = local_30;
        param_2[2] = local_28;
        if (*param_2 == 0) {
            return 0;
        }
    }
    return 1;
}


undefined8 FUN_140514660(undefined param_1) {
    switch (param_1) {
        case 1:
            return 7;
        case 2:
            return 8;
        case 3:
            return 9;
        case 4:
            return 10;
        case 5:
            return 0xb;
        case 6:
            return 0xc;
        case 7:
            return 0xd;
        default:
            return 0;
    }
}


wchar_t *FUN_1405146d0(undefined4 param_1) {
    switch (param_1) {
        case 7:
            return L"sprRunecrafting_Btn_Air";
        case 8:
            return L"sprRunecrafting_Btn_Water";
        case 9:
            return L"sprRunecrafting_Btn_Earth";
        case 10:
            return L"sprRunecrafting_Btn_Fire";
        case 0xb:
            return L"sprRunecrafting_Btn_Logic";
        case 0xc:
            return L"sprRunecrafting_Btn_Life";
        case 0xd:
            return L"sprRunecrafting_Btn_Fusion";
        default:
            return (wchar_t *) 0x0;
    }
}


undefined8 FUN_140514750(undefined4 param_1) {
    switch (param_1) {
        case 7:
            return 0x83c00;
        case 8:
            return 0x83c01;
        case 9:
            return 0x83bf9;
        case 10:
            return 0x210dd;
        case 0xb:
            return 0x83bff;
        case 0xc:
            return 0x83bfe;
        case 0xd:
            return 0x86565;
        default:
            return 0x36ce0;
    }
}


void FUN_1405147c0(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    longlong * plVar2;

    if (((param_1 != 0) &&
         (lVar1 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                                L"UI\\ActionConfirmButton.xml", L"HeaderLine", 0, param_1, 0xfffffffe),
                 lVar1 != 0)) &&
        (plVar2 = (longlong *) FUN_1400d3830(lVar1 + 0x228, L"Header"), plVar2 != (longlong *) 0x0)) {
        (**(code * *)(*plVar2 + 0x50))(plVar2, param_2);
    }
    return;
}


void FUN_140514840(longlong param_1, undefined8 param_2, short *param_3) {
    ulonglong uVar1;
    short sVar2;
    longlong lVar3;
    longlong * plVar4;
    longlong lVar5;
    undefined8 uVar6;
    undefined2 *puVar7;
    ulonglong local_res8;
    longlong * local_res20;
    undefined local_28[16];

    if ((param_1 != 0) &&
        (lVar3 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                               L"UI\\ActionConfirmButton.xml", L"HeaderContentLine", 0, param_1, 0xfffffffe
        ), lVar3 != 0)) {
        plVar4 = (longlong *) FUN_1400d3830(lVar3 + 0x228, L"Header");
        if (plVar4 != (longlong *) 0x0) {
            (**(code * *)(*plVar4 + 0x50))(plVar4, param_2);
        }
        plVar4 = (longlong *) FUN_1400d3830(lVar3 + 0x228, L"Content");
        if (plVar4 != (longlong *) 0x0) {
            lVar5 = 0;
            sVar2 = *param_3;
            lVar3 = lVar5;
            while (sVar2 != 0) {
                lVar3 = lVar3 + 1;
                sVar2 = param_3[lVar3];
            }
            lVar3 = lVar3 * 2 >> 1;
            uVar1 = lVar3 + 1;
            if (uVar1 < 0x7fffffffffffffff) {
                lVar5 = FUN_14018b280(uVar1 * 2, 0);
            }
            lVar3 = lVar3 * 2;
            FUN_1407db590(lVar5, param_3, lVar3);
            puVar7 = (undefined2 *) (lVar3 + lVar5);
            if (puVar7 != (undefined2 *) 0x0) {
                *puVar7 = 0;
            }
            local_res20 = (longlong *) 0x0;
            (**(code * *)(*DAT_140c65680 + 0x28))
                    (DAT_140c65680, *(undefined8 *) (plVar4[0x57] + 0x60), param_3, 0xffffffffffffffff,
                     &local_res20);
            local_res8 = 0;
            uVar6 = FUN_1400cb3d0(plVar4, local_28);
            (**(code * *)(*local_res20 + 0xb0))(local_res20, uVar6, &local_res8);
            if ((local_res8 < (ulonglong) ((longlong) puVar7 - lVar5 >> 1)) && (1 < local_res8)) {
                *(undefined2 *) (lVar5 + local_res8 * 2) = 0x2e;
                *(undefined2 *) (lVar5 + -2 + local_res8 * 2) = 0x2e;
                *(undefined2 *) (lVar5 + -4 + local_res8 * 2) = 0x2e;
                *(undefined2 *) (lVar5 + 2 + local_res8 * 2) = 0;
            }
            if (local_res20 != (longlong *) 0x0) {
                (**(code * *)(*local_res20 + 8))();
                local_res20 = (longlong *) 0x0;
            }
            (**(code * *)(*plVar4 + 0x50))(plVar4, lVar5);
            if (lVar5 != 0) {
                FUN_14018b900(lVar5, 0);
            }
        }
    }
    return;
}


void FUN_140514a30(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    longlong * plVar2;

    if (((param_1 != 0) &&
         (lVar1 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                                L"UI\\ActionConfirmButton.xml", L"ContentLine", 0, param_1, 0xfffffffe),
                 lVar1 != 0)) &&
        (plVar2 = (longlong *) FUN_1400d3830(lVar1 + 0x228, L"Label"), plVar2 != (longlong *) 0x0)) {
        (**(code * *)(*plVar2 + 0x50))(plVar2, param_2);
    }
    return;
}


void FUN_140514ab0(ulonglong param_1, undefined8 param_2, ulonglong *param_3) {
    ulonglong uVar1;
    longlong lVar2;
    longlong * plVar3;
    ulonglong uVar4;

    lVar2 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80, L"UI\\ActionConfirmButton.xml", L"MoneyLine",
                          0, param_1, 0xfffffffe);
    if (lVar2 != 0) {
        plVar3 = (longlong *) FUN_1400d3830(lVar2 + 0x228, L"CashWindow");
        if (plVar3 != (longlong *) 0x0) {
            FUN_140505bb0(plVar3, *(undefined4 *) (param_3 + 1), *(undefined4 *) ((longlong) param_3 + 0xc),
                          *(undefined4 *) (param_3 + 2),
                          param_1 & 0xffffffff00000000 | (ulonglong) *(uint *) ((longlong) param_3 + 0x14), 0);
            uVar4 = *param_3;
            if ((ulonglong) plVar3[0x88] < *param_3) {
                uVar4 = plVar3[0x88];
            }
            uVar1 = plVar3[0x87];
            plVar3[0x87] = uVar4;
            if (uVar4 != uVar1) {
                *(undefined *) ((longlong) plVar3 + 0x434) = 0;
                *(undefined4 *) (plVar3 + 0x86) = 0;
                plVar3[0x8a] = plVar3[0x89];
            }
            plVar3[0x89] = uVar4;
            plVar3[0x8a] = uVar4;
            (**(code * *)(*plVar3 + 0x238))(plVar3);
            FUN_1400d4040(plVar3, "CashWindowAmountChanged", plVar3, &DAT_1409f116c, uVar4);
        }
        plVar3 = (longlong *) FUN_1400d3830(lVar2 + 0x228, L"Label");
        if (plVar3 != (longlong *) 0x0) {
            (**(code * *)(*plVar3 + 0x50))(plVar3, param_2);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_140514c10(longlong param_1, undefined8 param_2, undefined8 param_3, longlong param_4,
                   uint *param_5, uint param_6) {
    char cVar1;
    short sVar5;
    short sVar6;
    short sVar7;
    short sVar8;
    ulonglong uVar9;
    unkbyte10 Var10;
    undefined auVar11[12];
    undefined auVar12[14];
    short sVar13;
    undefined4 uVar14;
    undefined6 uVar15;
    ulonglong uVar16;
    longlong lVar17;
    longlong lVar18;
    longlong lVar19;
    longlong * plVar20;
    undefined(*pauVar21)[16];
    int iVar22;
    uint uVar24;
    int iVar25;
    undefined extraout_XMM0[16];
    undefined auVar23[16];
    int iVar26;
    char cVar27;
    char cVar28;
    undefined auStack280[32];
    longlong local_f8;
    undefined4 local_f0;
    undefined local_e8[4];
    int local_e4;
    undefined local_e0[8];
    longlong local_d8;
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
    undefined local_78[16];
    undefined4 local_68;
    ulonglong local_58;
    char cVar2;
    char cVar3;
    char cVar4;

    if (param_1 != 0) {
        local_58 = DAT_140c0f7b0 ^ (ulonglong) auStack280;
        local_f0 = 0xfffffffe;
        local_f8 = param_1;
        lVar17 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                               L"UI\\ActionConfirmButton.xml", L"ItemLine", 0);
        if (lVar17 != 0) {
            lVar18 = FUN_1400d3830(lVar17 + 0x228, L"Icon");
            if (lVar18 != 0) {
                FUN_1400d2d60(lVar18, param_3);
                lVar19 = FUN_1400d3830(lVar18 + 0x228, L"Quality");
                if (lVar19 != 0) {
                    if (param_4 == 0) {
                        FUN_1400d42f0(lVar19, 0, 1);
                    } else {
                        FUN_1400d2df0(lVar19, param_4);
                    }
                }
                if ((1 < param_6) &&
                    (plVar20 = (longlong *) FUN_1400d3830(lVar18 + 0x228, L"Count"), plVar20 != (longlong *) 0x0
                    )) {
                    lVar18 = FUN_14018efa0(local_e0, &DAT_140b12628, param_6);
                    (**(code * *)(*plVar20 + 0x50))(plVar20, *(undefined8 *) (lVar18 + 8));
                    if (local_d8 != 0) {
                        FUN_14018b900(local_d8, 0);
                    }
                }
            }
            plVar20 = (longlong *) FUN_1400d3830(lVar17 + 0x228, L"Label");
            if ((plVar20 != (longlong *) 0x0) && ((*(uint *) (plVar20 + 0x36) >> 0x14 & 1) != 0)) {
                if ((ulonglong) *param_5 < *(ulonglong *) (DAT_140c63678 + 0x30)) {
                    pauVar21 = (undefined (*)[16])
                            ((ulonglong) *param_5 * 0x20 + *(longlong *) (DAT_140c63678 + 0x28));
                } else {
                    pauVar21 = *(undefined (**)[16]) (DAT_140c63678 + 0x28);
                }
                auVar23 = maxps(extraout_XMM0 & (undefined[16]) 0x0, *pauVar21);
                auVar23 = minps(auVar23, _DAT_140b7b240);
                iVar22 = (int) (SUB164(auVar23, 0) * 255.0 + 0.5);
                uVar24 = (uint) (SUB164(auVar23 >> 0x20, 0) * 255.0 + 0.5);
                iVar25 = (int) (SUB164(auVar23 >> 0x40, 0) * 255.0 + 0.5);
                iVar26 = (int) (SUB164(auVar23 >> 0x60, 0) * 255.0 + 0.5);
                cVar27 = (char) ((uint) iVar22 >> 0x10);
                cVar28 = (char) ((uint) iVar26 >> 0x10);
                uVar16 = (ulonglong)
                        CONCAT16((char) (uVar24 >> 0x10),
                                 CONCAT15((char) (uVar24 >> 8), CONCAT14((char) uVar24, iVar25)));
                uVar9 = ((ulonglong) uVar24 & 0xff000000) << 0x20 | uVar16;
                Var10 = CONCAT19((char) ((uint) iVar22 >> 8), CONCAT18((char) iVar22, uVar9));
                auVar11 = CONCAT111((char) ((uint) iVar22 >> 0x18), CONCAT110(cVar27, Var10));
                auVar12 = CONCAT113((char) ((uint) iVar26 >> 8), CONCAT112((char) iVar26, auVar11));
                sVar5 = (short) iVar25;
                cVar1 = (0 < sVar5) * (sVar5 < 0xff) * (char) iVar25 - (0xff < sVar5);
                sVar5 = (short) (uVar16 >> 0x10);
                sVar6 = (short) (uVar16 >> 0x20);
                cVar2 = (0 < sVar6) * (sVar6 < 0xff) * (char) (uVar16 >> 0x20) - (0xff < sVar6);
                sVar6 = (short) (uVar9 >> 0x30);
                sVar7 = (short) ((unkuint10) Var10 >> 0x40);
                cVar3 = (0 < sVar7) * (sVar7 < 0xff) * (char) iVar22 - (0xff < sVar7);
                sVar7 = SUB122(auVar11 >> 0x50, 0);
                sVar8 = SUB142(auVar12 >> 0x60, 0);
                cVar4 = (0 < sVar8) * (sVar8 < 0xff) * (char) iVar26 - (0xff < sVar8);
                sVar8 = SUB162(CONCAT115((char) ((uint) iVar26 >> 0x18), CONCAT114(cVar28, auVar12)) >> 0x70, 0);
                sVar13 = CONCAT11((0 < sVar5) * (sVar5 < 0xff) * (char) (uVar16 >> 0x10) - (0xff < sVar5),
                                  cVar1);
                uVar14 = CONCAT13((0 < sVar6) * (sVar6 < 0xff) * (char) (uVar16 >> 0x30) - (0xff < sVar6),
                                  CONCAT12(cVar2, sVar13));
                uVar15 = CONCAT15((0 < sVar7) * (sVar7 < 0xff) * cVar27 - (0xff < sVar7),
                                  CONCAT14(cVar3, uVar14));
                sVar5 = (short) ((uint) uVar14 >> 0x10);
                sVar6 = (short) ((uint6) uVar15 >> 0x20);
                sVar7 = (short) (CONCAT17((0 < sVar8) * (sVar8 < 0xff) * cVar28 - (0xff < sVar8),
                                          CONCAT16(cVar4, uVar15)) >> 0x30);
                FUN_14018efa0(local_e0,
                              L"<T Align=\"Center\" Font=\"CRB_InterfaceSmall\" TextColor=\"%x\">%s</T>",
                              CONCAT13((0 < sVar7) * (sVar7 < 0xff) * cVar4 - (0xff < sVar7),
                                       CONCAT12((0 < sVar6) * (sVar6 < 0xff) * cVar3 - (0xff < sVar6),
                                                CONCAT11((0 < sVar5) * (sVar5 < 0xff) * cVar2 -
                                                         (0xff < sVar5),
                                                         (0 < sVar13) * (sVar13 < 0xff) * cVar1 -
                                                         (0xff < sVar13)))), param_2);
                (**(code * *)(*plVar20 + 0x58))(plVar20, local_d8);
                local_b8 = *(undefined4 *) (lVar17 + 0x40);
                uStack180 = *(undefined4 *) (lVar17 + 0x44);
                uStack176 = *(undefined4 *) (lVar17 + 0x48);
                uStack172 = *(undefined4 *) (lVar17 + 0x4c);
                auVar23 = *(undefined (*)[16]) (lVar17 + 0x80);
                FUN_140116830(SUB168(auVar23 >> 0x40, 0), plVar20, local_e8, 0);
                iVar22 = SUB164(auVar23 >> 0x60, 0);
                if (iVar22 < local_e4) {
                    local_b8 = *(undefined4 *) (lVar17 + 0x40);
                    uStack180 = *(undefined4 *) (lVar17 + 0x44);
                    uStack176 = *(undefined4 *) (lVar17 + 0x48);
                    uStack172 = *(undefined4 *) (lVar17 + 0x4c);
                    local_68 = *(undefined4 *) (lVar17 + 0x90);
                    local_98 = *(undefined4 *) (lVar17 + 0x60);
                    uStack148 = *(undefined4 *) (lVar17 + 100);
                    uStack144 = *(undefined4 *) (lVar17 + 0x68);
                    uStack140 = *(undefined4 *) (lVar17 + 0x6c);
                    local_a8 = *(undefined4 *) (lVar17 + 0x50);
                    uStack164 = *(undefined4 *) (lVar17 + 0x54);
                    uStack160 = *(undefined4 *) (lVar17 + 0x58);
                    uStack156 = *(undefined4 *) (lVar17 + 0x5c);
                    local_88 = *(undefined4 *) (lVar17 + 0x70);
                    uStack132 = *(undefined4 *) (lVar17 + 0x74);
                    uStack128 = *(undefined4 *) (lVar17 + 0x78);
                    uStack124 = *(undefined4 *) (lVar17 + 0x7c);
                    auVar23 = *(undefined (*)[16]) (lVar17 + 0x80);
                    local_78 = CONCAT412((SUB164(auVar23 >> 0x60, 0) - iVar22) + local_e4, SUB1612(auVar23, 0));
                    FUN_1400cc740(SUB168(auVar23 >> 0x40, 0), lVar17, &local_b8);
                }
                if (local_d8 != 0) {
                    FUN_14018b900(local_d8, 0);
                }
            }
        }
        FUN_1407db4f0(local_58 ^ (ulonglong) auStack280);
    }
    return;
}


void FUN_140514f00(longlong *param_1, longlong param_2, undefined8 param_3) {
    int iVar1;
    longlong lVar2;
    longlong lVar3;
    int iVar4;
    undefined auStack376[32];
    longlong local_158;
    undefined8 local_150;
    undefined4 local_148;
    int iStack324;
    longlong local_140;
    undefined local_128[8];
    longlong local_120;
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
    undefined4 uStack212;
    undefined4 uStack208;
    undefined4 uStack204;
    undefined4 local_c8;
    int iStack196;
    undefined4 uStack192;
    undefined4 uStack188;
    uint local_b8;
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
    int iStack100;
    undefined4 uStack96;
    undefined4 uStack92;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack376;
    iVar4 = 0;
    if (param_1 != (longlong *) 0x0) {
        FUN_140142e30(DAT_140c63678, local_128, (longlong) param_1 + 0x2c4);
        FUN_140142e30(DAT_140c63678, &local_148, (longlong) param_1 + 0x2c4);
        local_158 = local_140;
        local_150 = param_3;
        FUN_14018d540(&local_148, L"<P Font=\"%s\" TextColor=\"%s\" BGColor=\"%s\">%s</P>",
                      *(undefined8 *) (param_1[0x57] + 0x38), local_120);
        lVar2 = CONCAT44(iStack324, local_148);
        (**(code * *)(*param_1 + 0x58))(param_1, lVar2);
        lVar3 = FUN_1400cb3d0(param_1, &local_148);
        iVar4 = *(int *) (lVar3 + 0xc);
        iVar1 = *(int *) (lVar3 + 4);
        FUN_140116830(param_1, &local_148, 0);
        iStack324 = iStack324 - (iVar4 - iVar1);
        iVar4 = 0;
        if (0 < iStack324) {
            iVar4 = iStack324;
        }
        if (lVar2 != 0) {
            (**(code * *)(*(longlong *) (lVar2 + -0x10) + 8))(lVar2 + -0x10);
        }
        if (local_140 != 0) {
            FUN_14018b900(local_140);
        }
        if (local_120 != 0) {
            FUN_14018b900(local_120);
        }
    }
    if (param_2 != 0) {
        local_98 = *(undefined4 *) (param_2 + 0x50);
        uStack148 = *(undefined4 *) (param_2 + 0x54);
        uStack144 = *(undefined4 *) (param_2 + 0x58);
        uStack140 = *(undefined4 *) (param_2 + 0x5c);
        local_e8 = *(undefined4 *) (param_2 + 0x60);
        uStack228 = *(undefined4 *) (param_2 + 100);
        uStack224 = *(undefined4 *) (param_2 + 0x68);
        uStack220 = *(undefined4 *) (param_2 + 0x6c);
        local_108 = *(undefined4 *) (param_2 + 0x40);
        uStack260 = *(undefined4 *) (param_2 + 0x44);
        uStack256 = *(undefined4 *) (param_2 + 0x48);
        uStack252 = *(undefined4 *) (param_2 + 0x4c);
        local_b8 = *(uint *) (param_2 + 0x90) | 0x300;
        local_78 = *(undefined4 *) (param_2 + 0x70);
        uStack116 = *(undefined4 *) (param_2 + 0x74);
        uStack112 = *(undefined4 *) (param_2 + 0x78);
        uStack108 = *(undefined4 *) (param_2 + 0x7c);
        local_c8 = *(undefined4 *) (param_2 + 0x80);
        uStack192 = *(undefined4 *) (param_2 + 0x88);
        uStack188 = *(undefined4 *) (param_2 + 0x8c);
        local_f8 = *(undefined4 *) (param_2 + 0x50);
        uStack244 = *(undefined4 *) (param_2 + 0x54);
        uStack240 = *(undefined4 *) (param_2 + 0x58);
        uStack236 = *(undefined4 *) (param_2 + 0x5c);
        iStack196 = *(int *) (param_2 + 0x84) + iVar4;
        local_d8 = *(undefined4 *) (param_2 + 0x70);
        uStack212 = *(undefined4 *) (param_2 + 0x74);
        uStack208 = *(undefined4 *) (param_2 + 0x78);
        uStack204 = *(undefined4 *) (param_2 + 0x7c);
        local_88 = local_e8;
        uStack132 = uStack228;
        uStack128 = uStack224;
        uStack124 = uStack220;
        local_68 = local_c8;
        iStack100 = iStack196;
        uStack96 = uStack192;
        uStack92 = uStack188;
        FUN_1400cc680(param_2, &local_108);
    }
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack376);
    return;
}


int FUN_1405150d0(longlong param_1) {
    int iVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;

    if (param_1 != 0) {
        piVar2 = *(int **) (param_1 + 0x48);
        piVar4 = piVar2;
        if (piVar2 == (int *) 0x0) {
            piVar4 = (int *) (*(longlong *) (param_1 + 0x40) + 8);
        }
        if (piVar4 != (int *) 0x0) {
            if (piVar2 == (int *) 0x0) {
                piVar2 = (int *) (*(longlong *) (param_1 + 0x40) + 8);
            }
            iVar3 = 1;
            if (1 < *piVar2) {
                iVar3 = *piVar2;
            }
            iVar1 = 7;
            if (iVar3 < 7) {
                iVar1 = iVar3;
            }
            return iVar1;
        }
    }
    return 8;
}


undefined8 *FUN_140515120(undefined8 *param_1, undefined8 param_2) {
    undefined2 *puVar1;

    param_1[1] = param_2;
    *param_1 = &PTR_LAB_140b6b720;
    *(undefined4 *) (param_1 + 2) = 300;
    *(undefined4 *) ((longlong) param_1 + 0x14) = 0xffffffff;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[4] = puVar1;
    param_1[5] = puVar1;
    param_1[6] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    return param_1;
}


undefined8 FUN_140515190(longlong param_1) {
    int iVar1;
    longlong lVar2;
    int *piVar3;
    int iVar4;
    int *piVar5;
    undefined8 uVar6;

    lVar2 = FUN_1403ac780(DAT_140c65898 + 0xa0, param_1 + 0x10);
    if (lVar2 == 0) {
        return 0;
    }
    piVar3 = *(int **) (lVar2 + 0x48);
    uVar6 = 0;
    piVar5 = piVar3;
    if (piVar3 == (int *) 0x0) {
        piVar5 = (int *) (*(longlong *) (lVar2 + 0x40) + 8);
    }
    if (piVar5 != (int *) 0x0) {
        if (piVar3 == (int *) 0x0) {
            piVar3 = (int *) (*(longlong *) (lVar2 + 0x40) + 8);
        }
        iVar4 = 1;
        if (1 < *piVar3) {
            iVar4 = *piVar3;
        }
        iVar1 = 7;
        if (iVar4 < 7) {
            iVar1 = iVar4;
        }
        if (iVar1 == 1) {
            uVar6 = 100;
        } else if (1 < iVar1) {
            if (iVar1 < 4) {
                return 0xfa;
            }
            if (iVar1 < 8) {
                return 1000;
            }
        }
    }
    return uVar6;
}


undefined8 FUN_140515230(longlong param_1, longlong param_2) {
    uint * puVar1;
    ulonglong uVar2;
    int iVar3;
    uint uVar4;
    undefined8 * puVar5;
    bool bVar6;

    puVar5 = (undefined8 *) (*(longlong *) (param_2 + 0x18) + 0x20);
    if ((((puVar5 < *(undefined8 **) (param_2 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
         (0 < *(int *) (*(longlong *) (param_2 + 0x18) + 0x28))) &&
        (iVar3 = FUN_140056d60(param_2), -1 < iVar3)) {
        uVar2 = CONCAT44(iVar3, (int) ((ulonglong) (longlong) iVar3 >> 8)) & 0xff000000ff;
        *(ulonglong *) (param_1 + 0x10) = uVar2;
        uVar4 = (uint) uVar2;
        bVar6 = false;
        if ((uVar4 < 300) && (*(uint *) (param_1 + 0x14) != 0xffffffff)) {
            if (uVar4 == 0) {
                bVar6 = *(uint *) (param_1 + 0x14) < 0x1f;
            } else {
                bVar6 = true;
            }
        }
        puVar1 = *(uint **) (param_2 + 0x10);
        puVar1[2] = 1;
        *puVar1 = (uint) bVar6;
        *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
        return 1;
    }
    return 0;
}


undefined8 *FUN_140515300(longlong param_1, undefined8 *param_2, char param_3) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if ((((param_3 != '\0') && (*(int *) (param_1 + 0x10) < 300)) &&
         (*(uint *) (param_1 + 0x14) != 0xffffffff)) &&
        ((*(int *) (param_1 + 0x10) != 0 || (*(uint *) (param_1 + 0x14) < 0x1f)))) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


void FUN_1405156d0(longlong param_1) {
    ulonglong uVar1;

    if (((*(int *) (param_1 + 0x10) < 300) && (*(uint *) (param_1 + 0x14) != 0xffffffff)) &&
        ((*(int *) (param_1 + 0x10) != 0 || (*(uint *) (param_1 + 0x14) < 0x1f)))) {
        FUN_1403c1460(DAT_140c65898);
        if (*(int *) (param_1 + 0x10) < 300) {
            uVar1 = (ulonglong)
                    (CONCAT41(*(int *) (param_1 + 0x10), *(undefined *) (param_1 + 0x14)) & 0xffff);
        } else {
            uVar1 = 0xffffffffffffffff;
        }
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "SalvageItemRequested", *(undefined8 *) (param_1 + 8),
                      &DAT_140b6b8f8, uVar1);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140515760(longlong param_1) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    longlong lVar4;
    undefined2 *puVar5;
    undefined8 uVar6;
    longlong lVar7;
    longlong lVar8;
    longlong lVar9;
    int iVar10;
    longlong local_res8;
    undefined local_108[12];
    int local_fc;
    undefined * *local_f8[19];
    undefined8 uStack96;
    undefined local_38[16];
    undefined2 *local_28;
    undefined8 local_20;
    undefined8 in_stack_ffffffffffffffe8;
    undefined8 in_stack_fffffffffffffff0;

    if (((*(int *) (param_1 + 0x10) < 300) && (*(uint *) (param_1 + 0x14) != 0xffffffff)) &&
        ((*(int *) (param_1 + 0x10) != 0 || (*(uint *) (param_1 + 0x14) < 0x1f)))) {
        uStack96 = 0x1405157ac;
        lVar8 = FUN_1403ac780(DAT_140c65898 + 0xa0);
        if (lVar8 != 0) {
            lVar9 = *(longlong *) (lVar8 + 0x48);
            local_res8 = 0;
            lVar3 = lVar9;
            if (lVar9 == 0) {
                lVar3 = *(longlong *) (lVar8 + 0x40) + 8;
            }
            if (lVar3 != 0) {
                if (lVar9 == 0) {
                    lVar9 = *(longlong *) (lVar8 + 0x40) + 8;
                }
                local_38 = CONCAT88(&local_res8, local_38._0_8_);
                uStack96 = 0x140515806;
                FUN_1404aa7d0(lVar9, (*(undefined4 **) (lVar8 + 0x40))[0x51], **(undefined4 **) (lVar8 + 0x40),
                              *(undefined4 *) (lVar9 + 4));
            }
            uStack96 = 0x140515842;
            FUN_1400e2630();
            lVar8 = *(longlong *) (param_1 + 0x20);
            *(undefined8 *) (param_1 + 0x20) = local_20;
            *(undefined8 *) (param_1 + 0x28) = in_stack_ffffffffffffffe8;
            *(undefined8 *) (param_1 + 0x30) = in_stack_fffffffffffffff0;
            if (lVar8 != 0) {
                uStack96 = 0x14051586d;
                FUN_14018b900(lVar8, 0);
            }
            lVar8 = DAT_140c65898;
            if (((*(int *) (param_1 + 0x10) < 300) && (*(uint *) (param_1 + 0x14) != 0xffffffff)) &&
                (((uVar6 = 0, *(int *) (param_1 + 0x10) != 0 || (*(uint *) (param_1 + 0x14) < 0x1f)) &&
                  (lVar9 = FUN_1403ac780(DAT_140c65898 + 0xa0), lVar9 != 0)))) {
                lVar8 = FUN_1400f52e0(*(longlong *) (lVar8 + 0x7340) + 0xa80, L"UI\\ActionConfirmButton.xml",
                                      L"TooltipBase", 0, 0, 0xfffffffe);
                (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), lVar8);
                if (((lVar8 != 0) &&
                     (lVar3 = FUN_1400d3830(lVar8 + 0x228, L"ActionConfirm_LabelML"), lVar3 != 0)) &&
                    (lVar4 = FUN_1400d3830(lVar8 + 0x228, L"Container"), lVar4 != 0)) {
                    FUN_140514f00(lVar3, lVar4, *(undefined8 *) (param_1 + 0x20));
                    FUN_1400b7210(local_f8, &DAT_140b6b900);
                    local_f8[0] = &PTR_FUN_140b69230;
                    local_28 = (undefined2 *) 0x0;
                    local_38 = ZEXT816(0);
                    puVar5 = (undefined2 *) FUN_14018b280(0x10);
                    local_38 = CONCAT88(puVar5, puVar5);
                    local_28 = puVar5 + 8;
                    if (puVar5 != (undefined2 *) 0x0) {
                        *puVar5 = 0;
                    }
                    lVar3 = FUN_14018b280(0x60);
                    if (lVar3 != 0) {
                        uVar6 = FUN_1404ddaf0(lVar3, *(undefined4 *) (*(longlong *) (lVar9 + 0x40) + 0x1dc));
                    }
                    FUN_1400b7480(local_f8, uVar6);
                    iVar1 = FUN_1405150d0();
                    iVar10 = 1;
                    if (*(int *) (lVar9 + 0x78) != 0) {
                        iVar10 = *(int *) (lVar9 + 0x78);
                    }
                    lVar3 = *(longlong *) (param_1 + 8);
                    lVar9 = *(longlong *) (lVar9 + 0x40);
                    uVar6 = *(undefined8 *) (lVar3 + ((longlong) iVar1 * 3 + 0x5d) * 0x10);
                    lVar7 = FUN_1400b7660(local_f8);
                    FUN_140514c10(lVar4, *(undefined8 *) (lVar7 + 8), *(undefined8 *) (lVar9 + 0x1e8), uVar6,
                                  lVar3 + 0x750 + (longlong) iVar1 * 4, iVar10);
                    iVar2 = FUN_1400cd4c0(lVar4, 0);
                    lVar9 = FUN_1400cb3d0(lVar4, local_108);
                    iVar10 = *(int *) (lVar9 + 0xc);
                    iVar1 = *(int *) (lVar9 + 4);
                    FUN_1400cb3d0();
                    iVar2 = (local_fc - (iVar10 - iVar1)) + iVar2;
                    if (iVar2 < local_fc) {
                        iVar2 = local_fc;
                    }
                    local_fc = iVar2;
                    FUN_1400cc7c0(lVar8, local_108);
                    FUN_1400cb690(lVar8);
                    FUN_1400cb960(lVar8);
                    if (local_38._0_8_ != 0) {
                        FUN_14018b900(local_38._0_8_, 0);
                    }
                    FUN_1400b7390(local_f8);
                }
            }
            return;
        }
    }
    return;
}


undefined8 *FUN_140515880(undefined8 *param_1, undefined8 param_2) {
    longlong lVar1;
    undefined2 *puVar2;
    undefined local_28[8];
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    param_1[1] = param_2;
    *param_1 = &PTR_FUN_140b6b630;
    *(undefined4 *) (param_1 + 2) = 300;
    *(undefined4 *) ((longlong) param_1 + 0x14) = 0xffffffff;
    *(undefined4 *) (param_1 + 3) = 300;
    *(undefined4 *) ((longlong) param_1 + 0x1c) = 0xffffffff;
    *(undefined4 *) (param_1 + 4) = 300;
    *(undefined4 *) ((longlong) param_1 + 0x24) = 0xffffffff;
    *(undefined4 *) (param_1 + 5) = 300;
    *(undefined4 *) ((longlong) param_1 + 0x2c) = 0xffffffff;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[7] = puVar2;
    param_1[8] = puVar2;
    param_1[9] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    FUN_1400e2630(puVar2 + 8, local_28, L"CRB_EldanForge", L"EldanForge:");
    lVar1 = param_1[7];
    param_1[7] = local_20;
    param_1[8] = local_18;
    param_1[9] = local_10;
    if (lVar1 != 0) {
        FUN_14018b900(lVar1, 0);
    }
    return param_1;
}


uint FUN_140515960(longlong param_1) {
    longlong lVar1;
    int iVar2;
    longlong lVar3;
    int iVar4;
    int *piVar5;
    int *piVar6;
    uint uVar7;
    uint uVar8;
    ulonglong uVar9;

    lVar1 = DAT_140c65898;
    uVar7 = 0;
    uVar9 = 0;
    do {
        lVar3 = FUN_1403ac780(lVar1 + 0xa0, param_1 + (uVar9 + 2) * 8);
        if (lVar3 != 0) {
            piVar5 = *(int **) (lVar3 + 0x48);
            piVar6 = piVar5;
            if (piVar5 == (int *) 0x0) {
                piVar6 = (int *) (*(longlong *) (lVar3 + 0x40) + 8);
            }
            if (piVar6 != (int *) 0x0) {
                if (piVar5 == (int *) 0x0) {
                    piVar5 = (int *) (*(longlong *) (lVar3 + 0x40) + 8);
                }
                iVar4 = 1;
                if (1 < *piVar5) {
                    iVar4 = *piVar5;
                }
                iVar2 = 7;
                if (iVar4 < 7) {
                    iVar2 = iVar4;
                }
                if (iVar2 == 1) {
                    if (uVar7 < 100) {
                        uVar7 = 100;
                    }
                } else if (1 < iVar2) {
                    if (iVar2 < 4) {
                        if (uVar7 < 0xfa) {
                            uVar7 = 0xfa;
                        }
                    } else if (iVar2 < 8) {
                        if (999 < uVar7) {
                            return uVar7;
                        }
                        return 1000;
                    }
                }
            }
        }
        uVar8 = (int) uVar9 + 1;
        uVar9 = (ulonglong) uVar8;
    } while (uVar8 < 4);
    return uVar7;
}


undefined8 *FUN_140515b70(longlong param_1, undefined8 *param_2, char param_3) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if (param_3 != '\0') {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140515bf0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined2 *puVar7;
    longlong lVar8;
    undefined8 uVar9;
    undefined4 * puVar10;
    int iVar11;
    ulonglong uVar12;
    uint uVar13;
    int *piVar14;
    undefined4 local_128;
    undefined4 local_124;
    undefined4 local_120;
    int local_11c;
    undefined * *local_118[24];
    undefined local_58[16];
    undefined2 *local_48;

    uVar12 = 0;
    lVar4 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80, L"UI\\ActionConfirmButton.xml",
                          L"TooltipBase", 0, 0, 0xfffffffe);
    (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), lVar4);
    if (((lVar4 != 0) && (lVar5 = FUN_1400d3830(lVar4 + 0x228, L"ActionConfirm_LabelML"), lVar5 != 0))
        && (lVar6 = FUN_1400d3830(lVar4 + 0x228, L"Container"), lVar6 != 0)) {
        FUN_140514f00(lVar5, lVar6, *(undefined8 *) (param_1 + 0x38));
        piVar14 = (int *) (param_1 + 0x10);
        do {
            uVar9 = 0;
            if ((((*piVar14 < 300) && (piVar14[1] != 0xffffffff)) &&
                 ((*piVar14 != 0 || ((uint) piVar14[1] < 0x1f)))) &&
                (lVar5 = FUN_1403ac780(DAT_140c65898 + 0xa0, param_1 + (uVar12 + 2) * 8), lVar5 != 0)) {
                iVar3 = FUN_1405150d0(lVar5);
                FUN_1400b7210(local_118, &DAT_140b6b900);
                local_118[0] = &PTR_FUN_140b69230;
                local_58 = ZEXT816(0);
                local_48 = (undefined2 *) 0x0;
                puVar7 = (undefined2 *) FUN_14018b280(0x10);
                local_48 = puVar7 + 8;
                local_58 = CONCAT88(puVar7, puVar7);
                if (puVar7 != (undefined2 *) 0x0) {
                    *puVar7 = 0;
                }
                lVar8 = FUN_14018b280(0x60);
                if (lVar8 != 0) {
                    uVar9 = FUN_1404ddaf0(lVar8, *(undefined4 *) (*(longlong *) (lVar5 + 0x40) + 0x1dc));
                }
                FUN_1400b7480(local_118, uVar9);
                lVar8 = *(longlong *) (param_1 + 8);
                lVar2 = *(longlong *) (lVar5 + 0x40);
                iVar11 = 1;
                if (*(int *) (lVar5 + 0x78) != 0) {
                    iVar11 = *(int *) (lVar5 + 0x78);
                }
                uVar9 = *(undefined8 *) (lVar8 + ((longlong) iVar3 + 0x1f) * 0x30);
                lVar5 = FUN_1400b7660(local_118);
                FUN_140514c10(lVar6, *(undefined8 *) (lVar5 + 8), *(undefined8 *) (lVar2 + 0x1e8), uVar9,
                              lVar8 + 0x750 + (longlong) iVar3 * 4, iVar11);
                if (local_58._0_8_ != 0) {
                    FUN_14018b900(local_58._0_8_, 0);
                }
                FUN_1400b7390();
            }
            uVar13 = (int) uVar12 + 1;
            uVar12 = (ulonglong) uVar13;
            piVar14 = piVar14 + 2;
        } while (uVar13 < 4);
        local_11c = FUN_1400cd4c0(lVar6, 0);
        if ((*(byte *) (lVar6 + 0x1d) & 0x80) == 0) {
            puVar10 = (undefined4 *) FUN_1400cb0e0(lVar6, &local_128, lVar6 + 0x40);
            *(undefined4 *) (lVar6 + 0x18c) = *puVar10;
            *(undefined4 *) (lVar6 + 400) = puVar10[1];
            *(undefined4 *) (lVar6 + 0x194) = puVar10[2];
            *(undefined4 *) (lVar6 + 0x198) = puVar10[3];
            *(byte *) (lVar6 + 0x1d) = *(byte *) (lVar6 + 0x1d) | 0x80;
            lVar5 = lVar6;
            do {
                if (*(int *) (lVar5 + 0x188) == 0) break;
                *(undefined4 *) (lVar5 + 0x188) = 0;
                lVar5 = *(longlong *) (lVar5 + 0x10);
            } while (lVar5 != 0);
        }
        iVar3 = *(int *) (lVar6 + 0x198);
        iVar11 = *(int *) (lVar6 + 400);
        if ((*(byte *) (lVar4 + 0x1d) & 0x80) == 0) {
            puVar10 = (undefined4 *) FUN_1400cb0e0(lVar4, &local_128, lVar4 + 0x40);
            *(undefined4 *) (lVar4 + 0x18c) = *puVar10;
            *(undefined4 *) (lVar4 + 400) = puVar10[1];
            *(undefined4 *) (lVar4 + 0x194) = puVar10[2];
            *(undefined4 *) (lVar4 + 0x198) = puVar10[3];
            *(byte *) (lVar4 + 0x1d) = *(byte *) (lVar4 + 0x1d) | 0x80;
            lVar5 = lVar4;
            do {
                if (*(int *) (lVar5 + 0x188) == 0) break;
                *(undefined4 *) (lVar5 + 0x188) = 0;
                lVar5 = *(longlong *) (lVar5 + 0x10);
            } while (lVar5 != 0);
        }
        local_128 = *(undefined4 *) (lVar4 + 0x18c);
        local_124 = *(undefined4 *) (lVar4 + 400);
        local_120 = *(undefined4 *) (lVar4 + 0x194);
        iVar1 = *(int *) (lVar4 + 0x198);
        local_11c = (iVar1 - (iVar3 - iVar11)) + local_11c;
        if (local_11c < iVar1) {
            local_11c = iVar1;
        }
        FUN_1400cc7c0(lVar4, &local_128);
        FUN_1400cb690(lVar4);
        FUN_1400cb960(lVar4);
    }
    return;
}


void FUN_140515fe0(longlong param_1) {
    int iVar1;
    int *piVar2;
    ulonglong uVar3;
    uint uVar4;
    ulonglong uVar5;
    ulonglong uVar6;
    ulonglong uVar7;

    uVar4 = 0;
    piVar2 = (int *) (param_1 + 0x10);
    while (true) {
        if (299 < *piVar2) {
            return;
        }
        if (piVar2[1] == 0xffffffff) break;
        if ((*piVar2 == 0) && (0x1e < (uint) piVar2[1])) {
            return;
        }
        uVar4 = uVar4 + 1;
        piVar2 = piVar2 + 2;
        if (3 < uVar4) {
            iVar1 = FUN_1403c1580();
            if (-1 < iVar1) {
                uVar3 = 0xffffffffffffffff;
                if (*(int *) (param_1 + 0x28) < 300) {
                    uVar5 = (ulonglong)
                            (CONCAT41(*(int *) (param_1 + 0x28), *(undefined *) (param_1 + 0x2c)) & 0xffff);
                } else {
                    uVar5 = 0xffffffffffffffff;
                }
                if (*(int *) (param_1 + 0x20) < 300) {
                    uVar6 = (ulonglong)
                            (CONCAT41(*(int *) (param_1 + 0x20), *(undefined *) (param_1 + 0x24)) & 0xffff);
                } else {
                    uVar6 = 0xffffffffffffffff;
                }
                if (*(int *) (param_1 + 0x18) < 300) {
                    uVar7 = (ulonglong)
                            (CONCAT41(*(int *) (param_1 + 0x18), *(undefined *) (param_1 + 0x1c)) & 0xffff);
                } else {
                    uVar7 = 0xffffffffffffffff;
                }
                if (*(int *) (param_1 + 0x10) < 300) {
                    uVar3 = (ulonglong)
                            (CONCAT41(*(int *) (param_1 + 0x10), *(undefined *) (param_1 + 0x14)) & 0xffff);
                }
                FUN_1400d4040(*(undefined8 *) (param_1 + 8), "EldanForgeRequested",
                              *(undefined8 *) (param_1 + 8), &DAT_140b6b988, uVar3, uVar7, uVar6, uVar5);
            }
            return;
        }
    }
    return;
}


undefined8 *FUN_140516100(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b6b630;
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7], 0);
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_140516160(longlong param_1) {
    ulonglong uVar1;

    if (((*(int *) (param_1 + 0x10) < 300) && (*(uint *) (param_1 + 0x14) != 0xffffffff)) &&
        ((*(int *) (param_1 + 0x10) != 0 || (*(uint *) (param_1 + 0x14) < 0x1f)))) {
        FUN_1403c1360();
        if (*(int *) (param_1 + 0x10) < 300) {
            uVar1 = (ulonglong)
                    (CONCAT41(*(int *) (param_1 + 0x10), *(undefined *) (param_1 + 0x14)) & 0xffff);
        } else {
            uVar1 = 0xffffffffffffffff;
        }
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "DeleteItemRequested", *(undefined8 *) (param_1 + 8),
                      &DAT_140b6b8f8, uVar1);
    }
    return;
}


void FUN_140516320(longlong param_1) {
    ulonglong uVar1;
    ulonglong in_stack_ffffffffffffffe8;

    if (((*(int *) (param_1 + 0x10) < 300) && (*(uint *) (param_1 + 0x14) != 0xffffffff)) &&
        ((*(int *) (param_1 + 0x10) != 0 || (*(uint *) (param_1 + 0x14) < 0x1f)))) {
        FUN_140399de0(DAT_140c65898, param_1 + 0x10, param_1 + 0x38, 1,
                      in_stack_ffffffffffffffe8 & 0xffffffff00000000);
        if (*(int *) (param_1 + 0x10) < 300) {
            uVar1 = (ulonglong)
                    (CONCAT41(*(int *) (param_1 + 0x10), *(undefined *) (param_1 + 0x14)) & 0xffff);
        } else {
            uVar1 = 0xffffffffffffffff;
        }
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "EquipItemRequested", *(undefined8 *) (param_1 + 8),
                      &DAT_140b6b8f8, uVar1);
    }
    return;
}


undefined8 *FUN_1405163c0(undefined8 *param_1, undefined8 param_2) {
    longlong lVar1;
    undefined2 *puVar2;
    undefined local_28[8];
    undefined8 local_20;
    undefined8 local_18;
    undefined8 local_10;

    param_1[1] = param_2;
    *param_1 = &PTR_FUN_140b6b4f0;
    *(undefined4 *) (param_1 + 2) = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    puVar2 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[4] = puVar2;
    param_1[5] = puVar2;
    param_1[6] = puVar2 + 8;
    if (puVar2 != (undefined2 *) 0x0) {
        *puVar2 = 0;
    }
    FUN_1400e2630(puVar2 + 8, local_28, L"CRB_Loot", L"Loot:");
    lVar1 = param_1[4];
    param_1[4] = local_20;
    param_1[5] = local_18;
    param_1[6] = local_10;
    if (lVar1 != 0) {
        FUN_14018b900(lVar1, 0);
    }
    return param_1;
}


undefined8 *FUN_1405165d0(longlong param_1, undefined8 *param_2, char param_3) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if ((param_3 != '\0') && (*(int *) (param_1 + 0x10) != 0)) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


undefined8 FUN_1405169f0(longlong param_1, longlong param_2) {
    longlong lVar1;
    longlong lVar2;
    undefined4 * puVar3;
    uint uVar4;
    undefined8 * puVar5;
    longlong local_res18;

    puVar5 = (undefined8 *) (*(longlong *) (param_2 + 0x18) + 0x20);
    if (((puVar5 < *(undefined8 **) (param_2 + 0x10)) && (puVar5 != &DAT_140a12138)) &&
        (0 < *(int *) (*(longlong *) (param_2 + 0x18) + 0x28))) {
        uVar4 = FUN_140056d60(param_2);
    } else {
        uVar4 = 0;
    }
    lVar1 = *(longlong *) (*(longlong *) (DAT_140c65898 + 0x7d90) + 0x28);
    local_res18 = lVar1;
    lVar2 = *(longlong *) (lVar1 + 8);
    while (lVar2 != 0) {
        if (*(uint *) (lVar2 + 0x20) < uVar4) {
            lVar2 = *(longlong *) (lVar2 + 0x18);
        } else {
            local_res18 = lVar2;
            lVar2 = *(longlong *) (lVar2 + 0x10);
        }
    }
    if ((local_res18 == lVar1) || (uVar4 < *(uint *) (local_res18 + 0x20))) {
        local_res18 = lVar1;
    }
    if ((local_res18 != lVar1) && (local_res18 != -0x28)) {
        puVar3 = *(undefined4 **) (param_2 + 0x10);
        *puVar3 = 1;
        puVar3[2] = 1;
        *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
        *(uint *) (param_1 + 0x10) = uVar4;
        return 1;
    }
    puVar3 = *(undefined4 **) (param_2 + 0x10);
    *puVar3 = 0;
    puVar3[2] = 1;
    *(longlong *) (param_2 + 0x10) = *(longlong *) (param_2 + 0x10) + 0x10;
    return 1;
}


void FUN_140516ae0(longlong param_1) {
    uint uVar1;
    longlong lVar2;
    longlong lVar3;
    longlong local_res8;
    undefined8 local_18;
    undefined4 local_10;

    uVar1 = *(uint *) (param_1 + 0x10);
    lVar2 = *(longlong *) (*(longlong *) (DAT_140c65898 + 0x7d90) + 0x28);
    local_res8 = lVar2;
    lVar3 = *(longlong *) (lVar2 + 8);
    while (lVar3 != 0) {
        if (*(uint *) (lVar3 + 0x20) < uVar1) {
            lVar3 = *(longlong *) (lVar3 + 0x18);
        } else {
            local_res8 = lVar3;
            lVar3 = *(longlong *) (lVar3 + 0x10);
        }
    }
    if ((local_res8 == lVar2) || (uVar1 < *(uint *) (local_res8 + 0x20))) {
        local_res8 = lVar2;
    }
    if ((local_res8 != lVar2) && (local_res8 != -0x28)) {
        local_18 = CONCAT44(uVar1, *(undefined4 *) (local_res8 + 0x2c));
        local_10 = 1;
        FUN_1403f4900(DAT_140c65898, 0x14f, &local_18);
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "LootItemRequested", *(undefined8 *) (param_1 + 8),
                      &DAT_140b6b8f8, *(undefined4 *) (param_1 + 0x10));
    }
    return;
}


undefined8 *FUN_140516bb0(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b6b4f0;
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4], 0);
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_1405175f0(longlong param_1, undefined8 *param_2, char param_3) {
    int iVar1;
    int iVar2;
    longlong * plVar3;
    longlong lVar4;
    undefined8 uVar5;
    int *piVar6;
    undefined local_18[16];

    if (*(longlong *) (DAT_140c65898 + 0x6718) == 0) {
        *param_2 = 0;
        return param_2;
    }
    plVar3 = *(longlong **) (param_1 + 8);
    if (param_3 == '\0') {
        if (plVar3 != (longlong *) 0x0) {
            lVar4 = (**(code * *)(*plVar3 + 0xb0))();
            if (lVar4 != 0) {
                uVar5 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xb0))();
                piVar6 = (int *) FUN_1400cb3d0(uVar5, local_18);
                iVar1 = piVar6[3];
                iVar2 = piVar6[1];
                *(int *) param_2 = piVar6[2] - *piVar6;
                *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
                return param_2;
            }
        }
    } else if (plVar3 != (longlong *) 0x0) {
        lVar4 = (**(code * *)(*plVar3 + 0xa8))();
        if (lVar4 != 0) {
            uVar5 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar6 = (int *) FUN_1400cb3d0(uVar5, local_18);
            iVar1 = piVar6[3];
            iVar2 = piVar6[1];
            *(int *) param_2 = piVar6[2] - *piVar6;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


undefined8 *FUN_1405176f0(undefined8 *param_1, undefined8 param_2) {
    undefined2 *puVar1;

    param_1[1] = param_2;
    *param_1 = &PTR_FUN_140b6b590;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[3] = puVar1;
    param_1[4] = puVar1;
    param_1[5] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[7] = puVar1;
    param_1[8] = puVar1;
    param_1[9] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xb] = puVar1;
    param_1[0xc] = puVar1;
    param_1[0xd] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[0xf] = puVar1;
    param_1[0x10] = puVar1;
    param_1[0x11] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    *(undefined4 *) (param_1 + 0x14) = 2;
    return param_1;
}


void FUN_140517810(undefined8 *param_1) {
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6b590;
    lVar1 = param_1[0x12];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong *) (lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    if (param_1[0xf] != 0) {
        FUN_14018b900(param_1[0xf], 0);
    }
    if (param_1[0xb] != 0) {
        FUN_14018b900(param_1[0xb], 0);
    }
    if (param_1[7] != 0) {
        FUN_14018b900(param_1[7], 0);
    }
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3], 0);
    }
    *param_1 = &PTR_FUN_140b6b770;
    return;
}


void FUN_140517890(longlong param_1) {
    int iVar1;
    uint uVar2;
    undefined8 in_stack_ffffffffffffffc8;
    undefined8 uVar3;
    undefined4 uVar4;

    uVar4 = (undefined4) ((ulonglong) in_stack_ffffffffffffffc8 >> 0x20);
    uVar2 = 0;
    if (*(longlong *) (param_1 + 0x98) == 0) {
        uVar3 = *(undefined8 *) (param_1 + 0x78);
        iVar1 = FUN_14062a4c0(DAT_140c65898 + 0x6bc8, *(undefined8 *) (param_1 + 0x18),
                              *(undefined8 *) (param_1 + 0x38), *(undefined8 *) (param_1 + 0x58), uVar3,
                              *(undefined4 *) (param_1 + 0xa0), *(undefined8 *) (param_1 + 0xa8));
        uVar4 = (undefined4) ((ulonglong) uVar3 >> 0x20);
    } else {
        iVar1 = FUN_1406b4cf0();
        if (iVar1 == 0) goto LAB_140517951;
        uVar3 = *(undefined8 *) (param_1 + 0x78);
        iVar1 = FUN_14062a5f0(DAT_140c65898 + 0x6bc8, *(undefined8 *) (param_1 + 0x18),
                              *(undefined8 *) (param_1 + 0x38), *(undefined8 *) (param_1 + 0x58), uVar3,
                              *(undefined4 *) (param_1 + 0xa0), *(undefined8 *) (param_1 + 0xb0),
                              *(undefined8 *) (param_1 + 0xa8), param_1 + 0x90);
        uVar4 = (undefined4) ((ulonglong) uVar3 >> 0x20);
    }
    uVar2 = (uint) (-1 < iVar1);
    LAB_140517951:
    FUN_1400d4040(*(undefined8 *) (param_1 + 8), "EmailSent", *(undefined8 *) (param_1 + 8), &DAT_140b6b934,
                  CONCAT44(uVar4, uVar2));
    return;
}


undefined8 FUN_140518270(undefined8 param_1, ulonglong param_2) {
    FUN_140517810();
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 *FUN_140518850(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if ((*(longlong *) (param_1 + 0x10) != -1) && (*(longlong **) (param_1 + 8) != (longlong *) 0x0)) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


undefined8 FUN_1405188d0(longlong *param_1, longlong param_2) {
    longlong lVar1;
    longlong * plVar2;
    longlong lVar3;
    int iVar4;
    undefined8 uVar5;
    longlong lVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    param_1[2] = -1;
    param_1[4] = 0;
    uVar9 = 0;
    if (*(ulonglong *) (DAT_140c63650 + 0x300) != 0) {
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar9 * 8) + 400) ==
                param_2) {
                lVar7 = *(longlong *) (*(longlong *) (DAT_140c63650 + 0x2f8) + uVar9 * 8);
                goto LAB_140518928;
            }
            uVar9 = (ulonglong) ((int) uVar9 + 1);
        } while (uVar9 < *(ulonglong *) (DAT_140c63650 + 0x300));
    }
    lVar7 = 0;
    LAB_140518928:
    iVar4 = FUN_1400f26a0(lVar7 + 0x180, 3);
    lVar7 = DAT_140c635f0;
    uVar9 = (ulonglong) (iVar4 + -1);
    if ((*(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x40) <= uVar9) ||
        (*(longlong *)
                (***(longlong ***) (*(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x38) + uVar9 * 8) +
                 0x38) == 0)) {
        uVar5 = FUN_140056570(param_2, 3, "must be a valid pending account item group");
        return uVar5;
    }
    param_1[2] = uVar9;
    lVar1 = *(longlong *) (lVar7 + 0x15d0);
    if (uVar9 < *(ulonglong *) (lVar1 + 0x40)) {
        uVar9 = *(ulonglong *) (*(longlong *) (*(longlong *) (lVar1 + 0x38) + uVar9 * 8) + 8);
    } else {
        uVar9 = 0;
    }
    uVar8 = 0;
    if (uVar9 != 0) {
        do {
            if ((((*(ulonglong *) (*(longlong *) (lVar7 + 0x15d0) + 0x40) <= (ulonglong) param_1[2]) ||
                  (plVar2 = *(longlong **)
                          (*(longlong *) (*(longlong *) (lVar7 + 0x15d0) + 0x38) + param_1[2] * 8),
                          (ulonglong) plVar2[1] <= uVar8)) ||
                 (lVar7 = *(longlong *) (*plVar2 + uVar8 * 8), lVar7 == 0)) ||
                (iVar4 = (**(code * *)(*param_1 + 0x50))(param_1, lVar7), iVar4 == 0)) {
                param_1[2] = -1;
                param_1[4] = 0;
                uVar5 = FUN_140056570(param_2, 3, "must be a valid pending account item group");
                return uVar5;
            }
            lVar3 = param_1[4];
            lVar1 = lVar3 + 1;
            lVar6 = FUN_14018db00(param_1[3], lVar1, 8);
            *(longlong *) (lVar6 + lVar3 * 8) = lVar7;
            if (param_1[3] != lVar6) {
                FUN_1407db590(lVar6, param_1[3], param_1[4] << 3);
                lVar7 = param_1[3];
                if (lVar7 != 0) {
                    (**(code * *)(*(longlong *) (lVar7 + -0x10) + 8))(lVar7 + -0x10);
                }
                param_1[3] = lVar6;
            }
            uVar8 = uVar8 + 1;
            param_1[4] = lVar1;
            lVar7 = DAT_140c635f0;
        } while (uVar8 < uVar9);
    }
    return 0;
}


undefined8 *FUN_140518ae0(undefined8 *param_1, ulonglong param_2) {
    longlong lVar1;

    *param_1 = &PTR_FUN_140b6b440;
    lVar1 = param_1[3];
    if (lVar1 != 0) {
        (**(code * *)(*(longlong *) (lVar1 + -0x10) + 8))(lVar1 + -0x10);
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140518b40(longlong param_1) {
    int iVar1;
    ulonglong uVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined2 *puVar7;
    undefined4 * puVar8;
    undefined8 uVar9;
    int iVar10;
    short *psVar11;
    ulonglong uVar12;
    undefined4 uVar13;
    int iVar14;
    undefined auStack1576[32];
    undefined4 * local_608;
    undefined4 local_600;
    undefined4 local_5f8[2];
    longlong local_5f0;
    short *local_5e8;
    undefined4 local_5e0;
    int local_5dc;
    undefined * *local_5d8[24];
    undefined local_518[16];
    undefined2 *local_508;
    longlong * local_4f8;
    longlong local_4f0;
    int local_4d8;
    longlong local_1f8;
    int local_60;
    int local_58;
    ulonglong local_38;
    undefined8 uStack48;

    uStack48 = 0x140518b53;
    uVar9 = FUN_14034bdd0(param_1, 0x95727);
    *(undefined8 *) (param_1 + 0x28) = uVar9;
    local_38 = DAT_140c0f7b0 ^ (ulonglong) auStack1576;
    uVar12 = 0;
    local_600 = 0xfffffffe;
    local_608 = (undefined4 *) 0x0;
    local_5f0 = param_1;
    psVar3 = (short *) FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                                     L"UI\\ActionConfirmButton.xml", L"TooltipBase", 0);
    local_5e8 = psVar3;
    (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), psVar3);
    if (((psVar3 != (short *) 0x0) &&
         (lVar4 = FUN_1400d3830(psVar3 + 0x114, L"ActionConfirm_LabelML"), lVar4 != 0)) &&
        (lVar5 = FUN_1400d3830(psVar3 + 0x114, L"Container"), lVar5 != 0)) {
        FUN_140514f00(lVar4, lVar5, *(undefined8 *) (param_1 + 0x28));
        psVar11 = local_5e8;
        uVar13 = local_5f8[0];
        if (*(longlong *) (param_1 + 0x20) != 0) {
            do {
                if ((*(longlong *) (*(longlong *) (param_1 + 0x18) + uVar12 * 8) != 0) &&
                    (lVar4 = FUN_1401e8c20(), lVar4 != 0)) {
                    iVar14 = 8;
                    if ((*(int *) (lVar4 + 8) != 0) &&
                        (lVar6 = FUN_1400b5df0(DAT_140c658f0, *(int *) (lVar4 + 8), 0), param_1 = local_5f0,
                         iVar14 = 8, lVar6 != 0)) {
                        uVar13 = *(undefined4 *) (lVar6 + 0x1dc);
                        psVar11 = *(short **) (lVar6 + 0x1e8);
                        FUN_14040fae0(&local_4f8);
                        if (local_58 < 7) {
                            local_58 = 6;
                            local_4f0 = lVar6;
                        }
                        if (local_60 == 0) {
                            iVar14 = 8;
                            if ((local_58 != 0) && (local_4f0 != 0)) {
                                iVar10 = 1;
                                if (1 < *(int *) (local_4f0 + 0x158)) {
                                    iVar10 = *(int *) (local_4f0 + 0x158);
                                }
                                goto LAB_140518489;
                            }
                        } else {
                            iVar10 = 1;
                            if (1 < local_4d8) {
                                iVar10 = local_4d8;
                            }
                            LAB_140518489:
                            iVar14 = 7;
                            if (iVar10 < 7) {
                                iVar14 = iVar10;
                            }
                        }
                        if (local_4f8 != (longlong *) 0x0) {
                            (**(code * *)(*local_4f8 + 8))();
                            local_4f8 = (longlong *) 0x0;
                        }
                        param_1 = local_5f0;
                        if (local_1f8 != 0) {
                            FUN_14018b900(local_1f8, 0);
                            param_1 = local_5f0;
                        }
                    }
                    if ((*(int *) (lVar4 + 0xc) != 0) && (lVar6 = FUN_1401fe020(), lVar6 != 0)) {
                        uVar2 = *(ulonglong *) (lVar6 + 0x20);
                        uVar13 = *(undefined4 *) (lVar6 + 0x14);
                        if (uVar2 == 0) {
                            psVar11 = (short *) 0x0;
                        } else if (DAT_140c3fe70 < uVar2) {
                            psVar11 = (short *) 0x0;
                        } else {
                            psVar11 = (short *) (DAT_140c3fe68 + uVar2);
                        }
                    }
                    lVar6 = FUN_1401e87e0(*(undefined4 *) (lVar4 + 0x1c));
                    if (lVar6 != 0) {
                        uVar2 = *(ulonglong *) (lVar4 + 0x28);
                        uVar13 = *(undefined4 *) (lVar6 + 4);
                        if (((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) && (uVar2 + DAT_140c3fe68 != 0)) {
                            psVar11 = (short *) 0x0;
                            psVar3 = psVar11;
                            if ((uVar2 != 0) && (psVar3 = (short *) 0x0, uVar2 <= DAT_140c3fe70)) {
                                psVar3 = (short *) (uVar2 + DAT_140c3fe68);
                            }
                            if (*psVar3 != 0) {
                                if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                                    psVar11 = (short *) (uVar2 + DAT_140c3fe68);
                                }
                                goto LAB_140518585;
                            }
                        }
                        uVar2 = *(ulonglong *) (lVar6 + 8);
                        if (uVar2 == 0) {
                            psVar11 = (short *) 0x0;
                        } else if (DAT_140c3fe70 < uVar2) {
                            psVar11 = (short *) 0x0;
                        } else {
                            psVar11 = (short *) (uVar2 + DAT_140c3fe68);
                        }
                    }
                    LAB_140518585:
                    FUN_1400b7210(local_5d8, &DAT_140b6b900);
                    uVar9 = 0;
                    local_508 = (undefined2 *) 0x0;
                    local_518 = ZEXT816(0);
                    local_5d8[0] = &PTR_FUN_140b69230;
                    puVar7 = (undefined2 *) FUN_14018b280(0x10, 0);
                    local_508 = puVar7 + 8;
                    local_518 = CONCAT88(puVar7, puVar7);
                    if (puVar7 != (undefined2 *) 0x0) {
                        *puVar7 = 0;
                    }
                    lVar4 = FUN_14018b280(0x60);
                    if (lVar4 != 0) {
                        uVar9 = FUN_1404ddaf0(lVar4, uVar13);
                    }
                    FUN_1400b7480(local_5d8, uVar9);
                    if (iVar14 == 8) {
                        local_5f8[0] = FUN_140142170(DAT_140c63678, L"UI_TextHoloBody");
                        lVar4 = FUN_1400b7660(local_5d8);
                        local_608 = local_5f8;
                        local_600 = 1;
                        FUN_140514c10(lVar5, *(undefined8 *) (lVar4 + 8), psVar11, 0);
                        FUN_1401429a0(DAT_140c63678);
                    } else {
                        lVar4 = *(longlong *) (param_1 + 8);
                        uVar9 = *(undefined8 *) (lVar4 + ((longlong) iVar14 * 3 + 0x5d) * 0x10);
                        lVar6 = FUN_1400b7660(local_5d8);
                        local_600 = 1;
                        local_608 = (undefined4 *) (lVar4 + ((longlong) iVar14 + 0x1d4) * 4);
                        FUN_140514c10(lVar5, *(undefined8 *) (lVar6 + 8), psVar11, uVar9);
                    }
                    if (local_518._0_8_ != 0) {
                        FUN_14018b900();
                    }
                    FUN_1400b7390(local_5d8);
                    param_1 = local_5f0;
                }
                uVar12 = uVar12 + 1;
                psVar3 = local_5e8;
            } while (uVar12 < *(ulonglong *) (param_1 + 0x20));
        }
        local_5dc = FUN_1400cd4c0(lVar5, 0);
        if ((*(byte *) (lVar5 + 0x1d) & 0x80) == 0) {
            puVar8 = (undefined4 *) FUN_1400cb0e0(lVar5, &local_5e8, lVar5 + 0x40);
            *(undefined4 *) (lVar5 + 0x18c) = *puVar8;
            *(undefined4 *) (lVar5 + 400) = puVar8[1];
            *(undefined4 *) (lVar5 + 0x194) = puVar8[2];
            *(undefined4 *) (lVar5 + 0x198) = puVar8[3];
            *(byte *) (lVar5 + 0x1d) = *(byte *) (lVar5 + 0x1d) | 0x80;
            lVar4 = lVar5;
            do {
                if (*(int *) (lVar4 + 0x188) == 0) break;
                *(undefined4 *) (lVar4 + 0x188) = 0;
                lVar4 = *(longlong *) (lVar4 + 0x10);
            } while (lVar4 != 0);
        }
        iVar14 = *(int *) (lVar5 + 0x198);
        iVar10 = *(int *) (lVar5 + 400);
        if ((*(byte *) ((longlong) psVar3 + 0x1d) & 0x80) == 0) {
            puVar8 = (undefined4 *) FUN_1400cb0e0(psVar3, &local_5e8, psVar3 + 0x20);
            *(undefined4 *) (psVar3 + 0xc6) = *puVar8;
            *(undefined4 *) (psVar3 + 200) = puVar8[1];
            *(undefined4 *) (psVar3 + 0xca) = puVar8[2];
            *(undefined4 *) (psVar3 + 0xcc) = puVar8[3];
            *(byte *) ((longlong) psVar3 + 0x1d) = *(byte *) ((longlong) psVar3 + 0x1d) | 0x80;
            psVar11 = psVar3;
            do {
                if (*(int *) (psVar11 + 0xc4) == 0) break;
                *(undefined4 *) (psVar11 + 0xc4) = 0;
                psVar11 = *(short **) (psVar11 + 8);
            } while (psVar11 != (short *) 0x0);
        }
        local_5e8 = *(short **) (psVar3 + 0xc6);
        local_5e0 = *(undefined4 *) (psVar3 + 0xca);
        iVar1 = *(int *) (psVar3 + 0xcc);
        local_5dc = (iVar1 - (iVar14 - iVar10)) + local_5dc;
        if (local_5dc < iVar1) {
            local_5dc = iVar1;
        }
        FUN_1400cc7c0(psVar3, &local_5e8);
        FUN_1400cb690(psVar3);
        FUN_1400cb960(psVar3);
    }
    FUN_1407db4f0(local_38 ^ (ulonglong) auStack1576);
    return;
}


void FUN_140518b70(longlong param_1) {
    if ((*(ulonglong *) (param_1 + 0x10) < *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x40)
        ) && (*(longlong *)
            (***(longlong ***)
                    (*(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x38) +
                     *(ulonglong *) (param_1 + 0x10) * 8) + 0x38) != 0)) {
        FUN_140006ba0();
        *(undefined8 *) (param_1 + 0x10) = 0xffffffffffffffff;
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "AccountPendingItemsClaimed",
                      *(undefined8 *) (param_1 + 8), &DAT_140b7b700);
        return;
    }
    return;
}


void FUN_140518be0(longlong param_1) {
    longlong lVar1;
    int iVar2;
    undefined8 * puVar3;

    lVar1 = DAT_140c635f0;
    if ((*(ulonglong *) (param_1 + 0x10) < *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x70)
        ) && (puVar3 = (undefined8 *)
            (*(ulonglong *) (param_1 + 0x10) * 0x40 +
             *(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x68)),
            puVar3 != (undefined8 *) 0x0)) {
        *(undefined8 *) (param_1 + 0x10) = 0xffffffffffffffff;
        iVar2 = FUN_140006d00(*(undefined8 *) (lVar1 + 0x15d0), *puVar3);
        if (-1 < iVar2) {
            FUN_1400d4040(*(undefined8 *) (param_1 + 8), "AccountPendingItemTook",
                          *(undefined8 *) (param_1 + 8), &DAT_140b7b700);
            return;
        }
    }
    return;
}


undefined8 FUN_140519030(longlong param_1, longlong param_2) {
    bool bVar1;
    int iVar2;
    uint uVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong lVar6;
    ulonglong uVar7;
    ulonglong uVar8;
    ulonglong uVar9;

    lVar4 = DAT_140c63650;
    uVar7 = 0;
    *(undefined8 *) (param_1 + 0x10) = 0xffffffffffffffff;
    uVar8 = *(ulonglong *) (lVar4 + 0x300);
    if (uVar8 != 0) {
        lVar4 = *(longlong *) (lVar4 + 0x2f8);
        uVar9 = uVar7;
        do {
            if (*(longlong *) (*(longlong *) (lVar4 + uVar9 * 8) + 400) == param_2) {
                uVar7 = *(ulonglong *) (lVar4 + uVar9 * 8);
                break;
            }
            uVar9 = (ulonglong) ((int) uVar9 + 1);
        } while (uVar9 < uVar8);
    }
    iVar2 = FUN_1400f26a0(uVar7 + 0x180, 3);
    uVar8 = (ulonglong) (iVar2 + -1);
    if ((uVar8 < *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x70)) &&
        (uVar8 * 0x40 + *(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x68) != 0)) {
        lVar4 = FUN_1401e8c20();
        if ((lVar4 == 0) || (*(int *) (lVar4 + 0x1c) != 0)) {
            uVar5 = FUN_140056570(param_2, 3, "must be a valid account item");
        } else {
            bVar1 = true;
            if ((*(int *) (lVar4 + 0xc) != 0) && (lVar6 = FUN_1401fe020(), bVar1 = true, lVar6 != 0)) {
                uVar3 = FUN_1403d2140(DAT_140c65898, *(undefined4 *) (lVar4 + 0xc));
                bVar1 = true;
                if (*(uint *) (lVar6 + 4) <= uVar3) {
                    bVar1 = false;
                }
            }
            if (*(int *) (lVar4 + 0x18) != 0) {
                bVar1 = false;
            }
            if ((((*(int *) (lVar4 + 0x30) == 0) || (*(longlong *) (DAT_140c65898 + 0x78) == 0)) ||
                 (iVar2 = (**(code * *)(*DAT_140c659a0 + 0x18))(), iVar2 != 0)) && (bVar1)) {
                *(ulonglong *) (param_1 + 0x10) = uVar8;
                uVar5 = 0;
            } else {
                uVar5 = FUN_140056570(param_2, 3, "must be a valid account item");
            }
        }
        return uVar5;
    }
    uVar5 = FUN_140056570(param_2, 3, "must be a valid account item");
    return uVar5;
}


undefined8 FUN_1405191f0(undefined8 param_1, longlong param_2) {
    longlong lVar1;

    lVar1 = FUN_1401e8c20(*(undefined4 *) (param_2 + 8));
    if (((lVar1 != 0) && ((*(byte *) (lVar1 + 4) & 1) == 0)) && (*(int *) (param_2 + 0x28) == 0)) {
        return 1;
    }
    return 0;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140519230(longlong param_1) {
    int iVar1;
    ulonglong uVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined2 *puVar7;
    undefined4 * puVar8;
    undefined8 uVar9;
    int iVar10;
    short *psVar11;
    ulonglong uVar12;
    undefined4 uVar13;
    int iVar14;
    undefined auStack1576[32];
    undefined4 * puStack1544;
    undefined4 uStack1536;
    undefined4 auStack1528[2];
    longlong lStack1520;
    short *psStack1512;
    undefined4 uStack1504;
    int iStack1500;
    undefined * *appuStack1496[24];
    undefined auStack1304[16];
    undefined2 *puStack1288;
    longlong * plStack1272;
    longlong lStack1264;
    int iStack1240;
    longlong lStack504;
    int iStack96;
    int iStack88;
    ulonglong uStack56;
    undefined8 uStack48;

    uStack48 = 0x140519243;
    uVar9 = FUN_14034bdd0(param_1, 0x9572a);
    *(undefined8 *) (param_1 + 0x28) = uVar9;
    uStack56 = DAT_140c0f7b0 ^ (ulonglong) auStack1576;
    uVar12 = 0;
    uStack1536 = 0xfffffffe;
    puStack1544 = (undefined4 *) 0x0;
    lStack1520 = param_1;
    psVar3 = (short *) FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                                     L"UI\\ActionConfirmButton.xml", L"TooltipBase", 0);
    psStack1512 = psVar3;
    (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), psVar3);
    if (((psVar3 != (short *) 0x0) &&
         (lVar4 = FUN_1400d3830(psVar3 + 0x114, L"ActionConfirm_LabelML"), lVar4 != 0)) &&
        (lVar5 = FUN_1400d3830(psVar3 + 0x114, L"Container"), lVar5 != 0)) {
        FUN_140514f00(lVar4, lVar5, *(undefined8 *) (param_1 + 0x28));
        psVar11 = psStack1512;
        uVar13 = auStack1528[0];
        if (*(longlong *) (param_1 + 0x20) != 0) {
            do {
                if ((*(longlong *) (*(longlong *) (param_1 + 0x18) + uVar12 * 8) != 0) &&
                    (lVar4 = FUN_1401e8c20(), lVar4 != 0)) {
                    iVar14 = 8;
                    if ((*(int *) (lVar4 + 8) != 0) &&
                        (lVar6 = FUN_1400b5df0(DAT_140c658f0, *(int *) (lVar4 + 8), 0), param_1 = lStack1520,
                         iVar14 = 8, lVar6 != 0)) {
                        uVar13 = *(undefined4 *) (lVar6 + 0x1dc);
                        psVar11 = *(short **) (lVar6 + 0x1e8);
                        FUN_14040fae0(&plStack1272);
                        if (iStack88 < 7) {
                            iStack88 = 6;
                            lStack1264 = lVar6;
                        }
                        if (iStack96 == 0) {
                            iVar14 = 8;
                            if ((iStack88 != 0) && (lStack1264 != 0)) {
                                iVar10 = 1;
                                if (1 < *(int *) (lStack1264 + 0x158)) {
                                    iVar10 = *(int *) (lStack1264 + 0x158);
                                }
                                goto LAB_140518489;
                            }
                        } else {
                            iVar10 = 1;
                            if (1 < iStack1240) {
                                iVar10 = iStack1240;
                            }
                            LAB_140518489:
                            iVar14 = 7;
                            if (iVar10 < 7) {
                                iVar14 = iVar10;
                            }
                        }
                        if (plStack1272 != (longlong *) 0x0) {
                            (**(code * *)(*plStack1272 + 8))();
                            plStack1272 = (longlong *) 0x0;
                        }
                        param_1 = lStack1520;
                        if (lStack504 != 0) {
                            FUN_14018b900(lStack504, 0);
                            param_1 = lStack1520;
                        }
                    }
                    if ((*(int *) (lVar4 + 0xc) != 0) && (lVar6 = FUN_1401fe020(), lVar6 != 0)) {
                        uVar2 = *(ulonglong *) (lVar6 + 0x20);
                        uVar13 = *(undefined4 *) (lVar6 + 0x14);
                        if (uVar2 == 0) {
                            psVar11 = (short *) 0x0;
                        } else if (DAT_140c3fe70 < uVar2) {
                            psVar11 = (short *) 0x0;
                        } else {
                            psVar11 = (short *) (DAT_140c3fe68 + uVar2);
                        }
                    }
                    lVar6 = FUN_1401e87e0(*(undefined4 *) (lVar4 + 0x1c));
                    if (lVar6 != 0) {
                        uVar2 = *(ulonglong *) (lVar4 + 0x28);
                        uVar13 = *(undefined4 *) (lVar6 + 4);
                        if (((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) && (uVar2 + DAT_140c3fe68 != 0)) {
                            psVar11 = (short *) 0x0;
                            psVar3 = psVar11;
                            if ((uVar2 != 0) && (psVar3 = (short *) 0x0, uVar2 <= DAT_140c3fe70)) {
                                psVar3 = (short *) (uVar2 + DAT_140c3fe68);
                            }
                            if (*psVar3 != 0) {
                                if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                                    psVar11 = (short *) (uVar2 + DAT_140c3fe68);
                                }
                                goto LAB_140518585;
                            }
                        }
                        uVar2 = *(ulonglong *) (lVar6 + 8);
                        if (uVar2 == 0) {
                            psVar11 = (short *) 0x0;
                        } else if (DAT_140c3fe70 < uVar2) {
                            psVar11 = (short *) 0x0;
                        } else {
                            psVar11 = (short *) (uVar2 + DAT_140c3fe68);
                        }
                    }
                    LAB_140518585:
                    FUN_1400b7210(appuStack1496, &DAT_140b6b900);
                    uVar9 = 0;
                    puStack1288 = (undefined2 *) 0x0;
                    auStack1304 = ZEXT816(0);
                    appuStack1496[0] = &PTR_FUN_140b69230;
                    puVar7 = (undefined2 *) FUN_14018b280(0x10, 0);
                    puStack1288 = puVar7 + 8;
                    auStack1304 = CONCAT88(puVar7, puVar7);
                    if (puVar7 != (undefined2 *) 0x0) {
                        *puVar7 = 0;
                    }
                    lVar4 = FUN_14018b280(0x60);
                    if (lVar4 != 0) {
                        uVar9 = FUN_1404ddaf0(lVar4, uVar13);
                    }
                    FUN_1400b7480(appuStack1496, uVar9);
                    if (iVar14 == 8) {
                        auStack1528[0] = FUN_140142170(DAT_140c63678, L"UI_TextHoloBody");
                        lVar4 = FUN_1400b7660(appuStack1496);
                        puStack1544 = auStack1528;
                        uStack1536 = 1;
                        FUN_140514c10(lVar5, *(undefined8 *) (lVar4 + 8), psVar11, 0);
                        FUN_1401429a0(DAT_140c63678);
                    } else {
                        lVar4 = *(longlong *) (param_1 + 8);
                        uVar9 = *(undefined8 *) (lVar4 + ((longlong) iVar14 * 3 + 0x5d) * 0x10);
                        lVar6 = FUN_1400b7660(appuStack1496);
                        uStack1536 = 1;
                        puStack1544 = (undefined4 *) (lVar4 + ((longlong) iVar14 + 0x1d4) * 4);
                        FUN_140514c10(lVar5, *(undefined8 *) (lVar6 + 8), psVar11, uVar9);
                    }
                    if (auStack1304._0_8_ != 0) {
                        FUN_14018b900();
                    }
                    FUN_1400b7390(appuStack1496);
                    param_1 = lStack1520;
                }
                uVar12 = uVar12 + 1;
                psVar3 = psStack1512;
            } while (uVar12 < *(ulonglong *) (param_1 + 0x20));
        }
        iStack1500 = FUN_1400cd4c0(lVar5, 0);
        if ((*(byte *) (lVar5 + 0x1d) & 0x80) == 0) {
            puVar8 = (undefined4 *) FUN_1400cb0e0(lVar5, &psStack1512, lVar5 + 0x40);
            *(undefined4 *) (lVar5 + 0x18c) = *puVar8;
            *(undefined4 *) (lVar5 + 400) = puVar8[1];
            *(undefined4 *) (lVar5 + 0x194) = puVar8[2];
            *(undefined4 *) (lVar5 + 0x198) = puVar8[3];
            *(byte *) (lVar5 + 0x1d) = *(byte *) (lVar5 + 0x1d) | 0x80;
            lVar4 = lVar5;
            do {
                if (*(int *) (lVar4 + 0x188) == 0) break;
                *(undefined4 *) (lVar4 + 0x188) = 0;
                lVar4 = *(longlong *) (lVar4 + 0x10);
            } while (lVar4 != 0);
        }
        iVar14 = *(int *) (lVar5 + 0x198);
        iVar10 = *(int *) (lVar5 + 400);
        if ((*(byte *) ((longlong) psVar3 + 0x1d) & 0x80) == 0) {
            puVar8 = (undefined4 *) FUN_1400cb0e0(psVar3, &psStack1512, psVar3 + 0x20);
            *(undefined4 *) (psVar3 + 0xc6) = *puVar8;
            *(undefined4 *) (psVar3 + 200) = puVar8[1];
            *(undefined4 *) (psVar3 + 0xca) = puVar8[2];
            *(undefined4 *) (psVar3 + 0xcc) = puVar8[3];
            *(byte *) ((longlong) psVar3 + 0x1d) = *(byte *) ((longlong) psVar3 + 0x1d) | 0x80;
            psVar11 = psVar3;
            do {
                if (*(int *) (psVar11 + 0xc4) == 0) break;
                *(undefined4 *) (psVar11 + 0xc4) = 0;
                psVar11 = *(short **) (psVar11 + 8);
            } while (psVar11 != (short *) 0x0);
        }
        psStack1512 = *(short **) (psVar3 + 0xc6);
        uStack1504 = *(undefined4 *) (psVar3 + 0xca);
        iVar1 = *(int *) (psVar3 + 0xcc);
        iStack1500 = (iVar1 - (iVar14 - iVar10)) + iStack1500;
        if (iStack1500 < iVar1) {
            iStack1500 = iVar1;
        }
        FUN_1400cc7c0(psVar3, &psStack1512);
        FUN_1400cb690(psVar3);
        FUN_1400cb960(psVar3);
    }
    FUN_1407db4f0(uStack56 ^ (ulonglong) auStack1576);
    return;
}


void FUN_140519260(longlong param_1) {
    longlong lVar1;
    longlong lVar2;

    lVar1 = *(longlong *) (DAT_140c635f0 + 0x15d0);
    if ((*(ulonglong *) (param_1 + 0x10) < *(ulonglong *) (lVar1 + 0x40)) &&
        (lVar2 = *(longlong *)
                (***(longlong ***) (*(longlong *) (lVar1 + 0x38) + *(ulonglong *) (param_1 + 0x10) * 8)
                 + 0x38), lVar2 != 0)) {
        if (*(int *) (param_1 + 0x30) == 0) {
            FUN_140006d60(lVar1, lVar2, param_1 + 0x40);
        } else {
            FUN_140006e50(lVar1, lVar2, *(undefined8 *) (param_1 + 0x38));
        }
        *(undefined8 *) (param_1 + 0x10) = 0xffffffffffffffff;
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "AccountPendingItemsGifted",
                      *(undefined8 *) (param_1 + 8), &DAT_140b7b700);
        return;
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_140519410(longlong param_1) {
    int iVar1;
    ulonglong uVar2;
    short *psVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined2 *puVar7;
    undefined4 * puVar8;
    undefined8 uVar9;
    int iVar10;
    short *psVar11;
    ulonglong uVar12;
    undefined4 uVar13;
    int iVar14;
    undefined auStack1576[32];
    undefined4 * puStack1544;
    undefined4 uStack1536;
    undefined4 auStack1528[2];
    longlong lStack1520;
    short *psStack1512;
    undefined4 uStack1504;
    int iStack1500;
    undefined * *appuStack1496[24];
    undefined auStack1304[16];
    undefined2 *puStack1288;
    longlong * plStack1272;
    longlong lStack1264;
    int iStack1240;
    longlong lStack504;
    int iStack96;
    int iStack88;
    ulonglong uStack56;
    undefined8 uStack48;

    uStack48 = 0x140519423;
    uVar9 = FUN_14034bdd0(param_1, 0x9572c);
    *(undefined8 *) (param_1 + 0x28) = uVar9;
    uStack56 = DAT_140c0f7b0 ^ (ulonglong) auStack1576;
    uVar12 = 0;
    uStack1536 = 0xfffffffe;
    puStack1544 = (undefined4 *) 0x0;
    lStack1520 = param_1;
    psVar3 = (short *) FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                                     L"UI\\ActionConfirmButton.xml", L"TooltipBase", 0);
    psStack1512 = psVar3;
    (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), psVar3);
    if (((psVar3 != (short *) 0x0) &&
         (lVar4 = FUN_1400d3830(psVar3 + 0x114, L"ActionConfirm_LabelML"), lVar4 != 0)) &&
        (lVar5 = FUN_1400d3830(psVar3 + 0x114, L"Container"), lVar5 != 0)) {
        FUN_140514f00(lVar4, lVar5, *(undefined8 *) (param_1 + 0x28));
        psVar11 = psStack1512;
        uVar13 = auStack1528[0];
        if (*(longlong *) (param_1 + 0x20) != 0) {
            do {
                if ((*(longlong *) (*(longlong *) (param_1 + 0x18) + uVar12 * 8) != 0) &&
                    (lVar4 = FUN_1401e8c20(), lVar4 != 0)) {
                    iVar14 = 8;
                    if ((*(int *) (lVar4 + 8) != 0) &&
                        (lVar6 = FUN_1400b5df0(DAT_140c658f0, *(int *) (lVar4 + 8), 0), param_1 = lStack1520,
                         iVar14 = 8, lVar6 != 0)) {
                        uVar13 = *(undefined4 *) (lVar6 + 0x1dc);
                        psVar11 = *(short **) (lVar6 + 0x1e8);
                        FUN_14040fae0(&plStack1272);
                        if (iStack88 < 7) {
                            iStack88 = 6;
                            lStack1264 = lVar6;
                        }
                        if (iStack96 == 0) {
                            iVar14 = 8;
                            if ((iStack88 != 0) && (lStack1264 != 0)) {
                                iVar10 = 1;
                                if (1 < *(int *) (lStack1264 + 0x158)) {
                                    iVar10 = *(int *) (lStack1264 + 0x158);
                                }
                                goto LAB_140518489;
                            }
                        } else {
                            iVar10 = 1;
                            if (1 < iStack1240) {
                                iVar10 = iStack1240;
                            }
                            LAB_140518489:
                            iVar14 = 7;
                            if (iVar10 < 7) {
                                iVar14 = iVar10;
                            }
                        }
                        if (plStack1272 != (longlong *) 0x0) {
                            (**(code * *)(*plStack1272 + 8))();
                            plStack1272 = (longlong *) 0x0;
                        }
                        param_1 = lStack1520;
                        if (lStack504 != 0) {
                            FUN_14018b900(lStack504, 0);
                            param_1 = lStack1520;
                        }
                    }
                    if ((*(int *) (lVar4 + 0xc) != 0) && (lVar6 = FUN_1401fe020(), lVar6 != 0)) {
                        uVar2 = *(ulonglong *) (lVar6 + 0x20);
                        uVar13 = *(undefined4 *) (lVar6 + 0x14);
                        if (uVar2 == 0) {
                            psVar11 = (short *) 0x0;
                        } else if (DAT_140c3fe70 < uVar2) {
                            psVar11 = (short *) 0x0;
                        } else {
                            psVar11 = (short *) (DAT_140c3fe68 + uVar2);
                        }
                    }
                    lVar6 = FUN_1401e87e0(*(undefined4 *) (lVar4 + 0x1c));
                    if (lVar6 != 0) {
                        uVar2 = *(ulonglong *) (lVar4 + 0x28);
                        uVar13 = *(undefined4 *) (lVar6 + 4);
                        if (((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) && (uVar2 + DAT_140c3fe68 != 0)) {
                            psVar11 = (short *) 0x0;
                            psVar3 = psVar11;
                            if ((uVar2 != 0) && (psVar3 = (short *) 0x0, uVar2 <= DAT_140c3fe70)) {
                                psVar3 = (short *) (uVar2 + DAT_140c3fe68);
                            }
                            if (*psVar3 != 0) {
                                if ((uVar2 != 0) && (uVar2 <= DAT_140c3fe70)) {
                                    psVar11 = (short *) (uVar2 + DAT_140c3fe68);
                                }
                                goto LAB_140518585;
                            }
                        }
                        uVar2 = *(ulonglong *) (lVar6 + 8);
                        if (uVar2 == 0) {
                            psVar11 = (short *) 0x0;
                        } else if (DAT_140c3fe70 < uVar2) {
                            psVar11 = (short *) 0x0;
                        } else {
                            psVar11 = (short *) (uVar2 + DAT_140c3fe68);
                        }
                    }
                    LAB_140518585:
                    FUN_1400b7210(appuStack1496, &DAT_140b6b900);
                    uVar9 = 0;
                    puStack1288 = (undefined2 *) 0x0;
                    auStack1304 = ZEXT816(0);
                    appuStack1496[0] = &PTR_FUN_140b69230;
                    puVar7 = (undefined2 *) FUN_14018b280(0x10, 0);
                    puStack1288 = puVar7 + 8;
                    auStack1304 = CONCAT88(puVar7, puVar7);
                    if (puVar7 != (undefined2 *) 0x0) {
                        *puVar7 = 0;
                    }
                    lVar4 = FUN_14018b280(0x60);
                    if (lVar4 != 0) {
                        uVar9 = FUN_1404ddaf0(lVar4, uVar13);
                    }
                    FUN_1400b7480(appuStack1496, uVar9);
                    if (iVar14 == 8) {
                        auStack1528[0] = FUN_140142170(DAT_140c63678, L"UI_TextHoloBody");
                        lVar4 = FUN_1400b7660(appuStack1496);
                        puStack1544 = auStack1528;
                        uStack1536 = 1;
                        FUN_140514c10(lVar5, *(undefined8 *) (lVar4 + 8), psVar11, 0);
                        FUN_1401429a0(DAT_140c63678);
                    } else {
                        lVar4 = *(longlong *) (param_1 + 8);
                        uVar9 = *(undefined8 *) (lVar4 + ((longlong) iVar14 * 3 + 0x5d) * 0x10);
                        lVar6 = FUN_1400b7660(appuStack1496);
                        uStack1536 = 1;
                        puStack1544 = (undefined4 *) (lVar4 + ((longlong) iVar14 + 0x1d4) * 4);
                        FUN_140514c10(lVar5, *(undefined8 *) (lVar6 + 8), psVar11, uVar9);
                    }
                    if (auStack1304._0_8_ != 0) {
                        FUN_14018b900();
                    }
                    FUN_1400b7390(appuStack1496);
                    param_1 = lStack1520;
                }
                uVar12 = uVar12 + 1;
                psVar3 = psStack1512;
            } while (uVar12 < *(ulonglong *) (param_1 + 0x20));
        }
        iStack1500 = FUN_1400cd4c0(lVar5, 0);
        if ((*(byte *) (lVar5 + 0x1d) & 0x80) == 0) {
            puVar8 = (undefined4 *) FUN_1400cb0e0(lVar5, &psStack1512, lVar5 + 0x40);
            *(undefined4 *) (lVar5 + 0x18c) = *puVar8;
            *(undefined4 *) (lVar5 + 400) = puVar8[1];
            *(undefined4 *) (lVar5 + 0x194) = puVar8[2];
            *(undefined4 *) (lVar5 + 0x198) = puVar8[3];
            *(byte *) (lVar5 + 0x1d) = *(byte *) (lVar5 + 0x1d) | 0x80;
            lVar4 = lVar5;
            do {
                if (*(int *) (lVar4 + 0x188) == 0) break;
                *(undefined4 *) (lVar4 + 0x188) = 0;
                lVar4 = *(longlong *) (lVar4 + 0x10);
            } while (lVar4 != 0);
        }
        iVar14 = *(int *) (lVar5 + 0x198);
        iVar10 = *(int *) (lVar5 + 400);
        if ((*(byte *) ((longlong) psVar3 + 0x1d) & 0x80) == 0) {
            puVar8 = (undefined4 *) FUN_1400cb0e0(psVar3, &psStack1512, psVar3 + 0x20);
            *(undefined4 *) (psVar3 + 0xc6) = *puVar8;
            *(undefined4 *) (psVar3 + 200) = puVar8[1];
            *(undefined4 *) (psVar3 + 0xca) = puVar8[2];
            *(undefined4 *) (psVar3 + 0xcc) = puVar8[3];
            *(byte *) ((longlong) psVar3 + 0x1d) = *(byte *) ((longlong) psVar3 + 0x1d) | 0x80;
            psVar11 = psVar3;
            do {
                if (*(int *) (psVar11 + 0xc4) == 0) break;
                *(undefined4 *) (psVar11 + 0xc4) = 0;
                psVar11 = *(short **) (psVar11 + 8);
            } while (psVar11 != (short *) 0x0);
        }
        psStack1512 = *(short **) (psVar3 + 0xc6);
        uStack1504 = *(undefined4 *) (psVar3 + 0xca);
        iVar1 = *(int *) (psVar3 + 0xcc);
        iStack1500 = (iVar1 - (iVar14 - iVar10)) + iStack1500;
        if (iStack1500 < iVar1) {
            iStack1500 = iVar1;
        }
        FUN_1400cc7c0(psVar3, &psStack1512);
        FUN_1400cb690(psVar3);
        FUN_1400cb960(psVar3);
    }
    FUN_1407db4f0(uStack56 ^ (ulonglong) auStack1576);
    return;
}


void FUN_140519440(longlong param_1) {
    if ((*(ulonglong *) (param_1 + 0x10) < *(ulonglong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x40)
        ) && (*(longlong *)
            (***(longlong ***)
                    (*(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0x38) +
                     *(ulonglong *) (param_1 + 0x10) * 8) + 0x38) != 0)) {
        FUN_140006c50();
        *(undefined8 *) (param_1 + 0x10) = 0xffffffffffffffff;
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "AccountPendingItemsReturned",
                      *(undefined8 *) (param_1 + 8), &DAT_140b7b700);
        return;
    }
    return;
}


void FUN_1405194b0(longlong param_1) {
    undefined8 uVar1;
    undefined8 local_28;
    ulonglong local_20;
    undefined8 local_18;
    ulonglong local_10;

    if (*(int *) (DAT_140c635f0 + 0x1708) == 0) {
        local_28 = 0;
        local_20 = 0;
        if (*(int *) (param_1 + 0x10) == 0) {
            local_18 = *(undefined8 *) (param_1 + 0x18);
            local_10 = (ulonglong) *(uint *) (param_1 + 0x14);
            uVar1 = 0x26b;
        } else {
            local_28 = *(undefined8 *) (param_1 + 0x18);
            uVar1 = 0x265;
            local_20 = (ulonglong) *(uint *) (param_1 + 0x14);
        }
        FUN_1403f4900(DAT_140c65898, uVar1, &local_28);
        *(undefined4 *) (*(longlong *) (param_1 + 8) + 0x5c8) = DAT_140c636a8;
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "CREDDExchangeOrderSubmitted",
                      *(undefined8 *) (param_1 + 8), &DAT_140b7b700);
        return;
    }
    return;
}


void FUN_140519560(longlong param_1) {
    int iVar1;
    int iVar2;
    ulonglong uVar3;
    int iVar4;
    longlong lVar5;
    longlong lVar6;
    longlong lVar7;
    undefined8 uVar8;
    longlong * plVar9;
    undefined4 local_res10[2];
    longlong local_28;
    undefined4 local_20;
    int local_1c;
    undefined4 local_18;
    undefined4 local_14;

    if (*(int *) (DAT_140c635f0 + 0x1708) == 0) {
        lVar5 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                              L"UI\\ActionConfirmButton.xml", L"TooltipBase", 0, 0, 0xfffffffe);
        (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), lVar5);
        if (((lVar5 != 0) && (lVar6 = FUN_1400d3830(lVar5 + 0x228, L"ActionConfirm_LabelML"), lVar6 != 0)
            ) && (lVar7 = FUN_1400d3830(lVar5 + 0x228, L"Container"), lVar7 != 0)) {
            uVar8 = FUN_14034bdd0();
            FUN_140514f00(lVar6, lVar7, uVar8);
            uVar8 = FUN_14034bdd0();
            local_res10[0] = FUN_140142170(DAT_140c63678, L"UI_TextHoloBody");
            FUN_140514c10(lVar7, uVar8, L"IconSprites:Icon_ItemMisc_UI_Item_CREDD", 0, local_res10, 1);
            FUN_1401429a0(DAT_140c63678, local_res10[0]);
            if (*(int *) (param_1 + 0x10) == 0) {
                uVar8 = FUN_14034bdd0();
                plVar9 = (longlong *) (param_1 + 0x18);
            } else {
                local_1c = 0;
                uVar3 = *(longlong *) (param_1 + 0x18) * 5;
                local_14 = 0;
                lVar6 = SUB168(ZEXT816(0x47ae147ae147ae15) * ZEXT816(uVar3) >> 0x40, 0);
                local_20 = *(undefined4 *) (param_1 + 0x20);
                local_18 = *(undefined4 *) (param_1 + 0x24);
                local_28 = ((uVar3 - lVar6 >> 1) + lVar6 >> 6) + *(longlong *) (param_1 + 0x18);
                uVar8 = FUN_14034bdd0(local_28, 0x9572e);
                plVar9 = &local_28;
            }
            FUN_140514ab0(lVar7, uVar8, plVar9);
            iVar4 = FUN_1400cd4c0(lVar7, 0);
            lVar6 = FUN_1400cb3d0(lVar7, &local_28);
            iVar1 = *(int *) (lVar6 + 0xc);
            iVar2 = *(int *) (lVar6 + 4);
            FUN_1400cb3d0();
            iVar4 = (local_1c - (iVar1 - iVar2)) + iVar4;
            if (iVar4 < local_1c) {
                iVar4 = local_1c;
            }
            local_1c = iVar4;
            FUN_1400cc7c0(lVar5, &local_28);
            FUN_1400cb690(lVar5);
            FUN_1400cb960(lVar5);
        }
    }
    return;
}


undefined8 *FUN_1405197c0(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if ((*(longlong *) (param_1 + 0x18) != 0) && (*(longlong **) (param_1 + 8) != (longlong *) 0x0)) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


undefined8 FUN_140519840(longlong param_1, longlong param_2) {
    byte bVar1;
    longlong * plVar2;
    undefined8 uVar3;
    undefined8 * puVar4;
    ulonglong uVar5;
    undefined8 * puVar6;
    longlong lVar7;
    ulonglong uVar8;
    ulonglong uVar9;
    ulonglong uVar10;

    lVar7 = DAT_140c63650;
    uVar8 = 0;
    *(undefined8 *) (param_1 + 0x18) = 0;
    uVar5 = *(ulonglong *) (lVar7 + 0x300);
    bVar1 = 0;
    uVar10 = uVar8;
    if (uVar5 != 0) {
        lVar7 = *(longlong *) (lVar7 + 0x2f8);
        uVar9 = uVar8;
        do {
            if (*(longlong *) (*(longlong *) (lVar7 + uVar9 * 8) + 400) == param_2) {
                uVar10 = *(ulonglong *) (lVar7 + uVar9 * 8);
                break;
            }
            uVar9 = (ulonglong) ((int) uVar9 + 1);
        } while (uVar9 < uVar5);
    }
    puVar4 = (undefined8 *) (*(longlong *) (*(longlong *) (uVar10 + 400) + 0x18) + 0x20);
    puVar6 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **) (*(longlong *) (uVar10 + 400) + 0x10)) {
        puVar6 = puVar4;
    }
    if ((*(int *) (puVar6 + 1) != 0) && ((*(int *) (puVar6 + 1) != 1 || (*(int *) puVar6 != 0)))) {
        bVar1 = 1;
    }
    *(uint *) (param_1 + 0x10) = (uint) bVar1;
    plVar2 = (longlong *) FUN_140056ab0(param_2, 4, "Game.Money");
    if (plVar2 != (longlong *) 0x0) {
        if (*(int *) (plVar2 + 1) != 1) {
            uVar3 = FUN_140056570(param_2, 4, "must be in credits");
            return uVar3;
        }
        if (*plVar2 < 1) {
            uVar3 = FUN_140056570(param_2, 4, "must be greater than zero");
            return uVar3;
        }
        if ((*(int *) (param_1 + 0x10) != 0) &&
            (uVar5 = *(longlong *) (param_1 + 0x18) * 5,
             lVar7 = SUB168(ZEXT816(0x47ae147ae147ae15) * ZEXT816(uVar5) >> 0x40, 0),
             uVar5 = ((uVar5 - lVar7 >> 1) + lVar7 >> 6) + *(longlong *) (param_1 + 0x18),
                    *(ulonglong *) (DAT_140c65898 + 0x15f8) <= uVar5 &&
                    uVar5 != *(ulonglong *) (DAT_140c65898 + 0x15f8))) {
            uVar3 = FUN_140056570(param_2, 4, "not enough credits");
            return uVar3;
        }
        *(longlong *) (param_1 + 0x18) = *plVar2;
        *(undefined4 *) (param_1 + 0x20) = *(undefined4 *) (plVar2 + 1);
        *(undefined4 *) (param_1 + 0x24) = *(undefined4 *) ((longlong) plVar2 + 0xc);
        puVar4 = (undefined8 *) (*(longlong *) (*(longlong *) (uVar10 + 400) + 0x18) + 0x40);
        puVar6 = &DAT_140a12138;
        if (puVar4 < *(undefined8 **) (*(longlong *) (uVar10 + 400) + 0x10)) {
            puVar6 = puVar4;
        }
        if ((*(int *) (puVar6 + 1) == 0) ||
            ((uVar5 = 1, *(int *) (puVar6 + 1) == 1 && (*(int *) puVar6 == 0)))) {
            uVar5 = uVar8;
        }
        *(uint *) (param_1 + 0x14) = (uint) ((int) uVar5 != 0);
    }
    return 0;
}


void FUN_140519a00(longlong param_1) {
    longlong lVar1;
    undefined8 local_28;
    undefined8 local_20;
    undefined8 local_18;

    if ((*(longlong *) (param_1 + 0x10) != 0) && (*(longlong *) (param_1 + 0x40) != 0)) {
        lVar1 = FUN_1403acbb0(DAT_140c65898 + 0xa0);
        if (lVar1 != 0) {
            local_28 = *(undefined8 *) (param_1 + 0x40);
            local_20 = *(undefined8 *) (param_1 + 0x10);
            local_18 = *(undefined8 *) (param_1 + 0x28);
            FUN_1403f4900(DAT_140c65898, 0x6dc, &local_28);
            FUN_1400d4040(*(undefined8 *) (param_1 + 8), "ItemAuctionSellOrderSubmitted",
                          *(undefined8 *) (param_1 + 8), &DAT_140b7b700);
        }
    }
    return;
}


ulonglong FUN_140519aa0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    ulonglong uVar3;

    if ((*(longlong *) (param_1 + 0x10) != 0) && (*(longlong *) (param_1 + 0x40) != 0)) {
        lVar2 = FUN_1403acbb0(DAT_140c65898 + 0xa0);
        if (lVar2 != 0) {
            uVar3 = 0;
            iVar1 = FUN_1405150d0(lVar2);
            if (iVar1 == 1) {
                uVar3 = 100;
            } else if (1 < iVar1) {
                if (iVar1 < 4) {
                    return 0xfa;
                }
                if (iVar1 < 8) {
                    return 1000;
                }
            }
            return uVar3 & 0xffffffff;
        }
    }
    return 0;
}


undefined8 *FUN_140519e30(longlong param_1, undefined8 *param_2, char param_3) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if ((param_3 != '\0') && (*(longlong **) (param_1 + 8) != (longlong *) 0x0)) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if ((lVar3 != 0) &&
            ((*(longlong *) (param_1 + 0x10) != 0 && (*(longlong *) (param_1 + 0x40) != 0)))) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


undefined8 FUN_140519ec0(longlong param_1, longlong param_2) {
    longlong lVar1;
    int iVar2;
    undefined8 * puVar3;
    longlong * *pplVar4;
    longlong * plVar5;
    longlong * plVar6;
    undefined8 uVar7;
    longlong * plVar8;
    char *pcVar9;

    lVar1 = DAT_140c63650;
    plVar8 = (longlong *) 0x0;
    *(undefined8 *) (param_1 + 0x10) = 0;
    *(undefined8 *) (param_1 + 0x40) = 0;
    plVar5 = *(longlong **) (lVar1 + 0x300);
    if (plVar5 != (longlong *) 0x0) {
        plVar6 = plVar8;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (lVar1 + 0x2f8) + (longlong) plVar6 * 8) + 400) ==
                param_2)
                break;
            plVar6 = (longlong *) (ulonglong) ((int) plVar6 + 1);
        } while (plVar6 < plVar5);
    }
    puVar3 = (undefined8 *) (*(longlong *) (param_2 + 0x18) + 0x20);
    if (((((puVar3 < *(undefined8 **) (param_2 + 0x10)) && (puVar3 != &DAT_140a12138)) &&
          (*(int *) (*(longlong *) (param_2 + 0x18) + 0x28) == 0)) ||
         ((pplVar4 = (longlong **) FUN_140056ab0(param_2, 3, "Game.ItemData"), pplVar4 == (longlong **) 0x0
                                                                               || ((longlong **) *pplVar4 ==
                                                                                   (longlong **) 0x0)))) ||
        (plVar5 = (longlong *) **pplVar4, plVar5 == (longlong *) 0x0)) {
        uVar7 = FUN_140056570(param_2, 3, "item is not valid");
    } else {
        iVar2 = (**(code * *)(*plVar5 + 0x60))();
        if (iVar2 != 0) {
            plVar5 = plVar8;
            if ((longlong **) *pplVar4 != (longlong **) 0x0) {
                plVar5 = (longlong *) **pplVar4;
            }
            iVar2 = FUN_140569f10(plVar5);
            if (iVar2 == 0) {
                plVar5 = *pplVar4;
                plVar6 = plVar8;
                if ((plVar5 != (longlong *) 0x0) && (*(int *) (plVar5 + 0x94) != 0)) {
                    plVar6 = (longlong *) plVar5[1];
                }
                iVar2 = FUN_14041fb40(plVar6);
                if (iVar2 != 0) {
                    plVar5 = (longlong *) FUN_140056ab0(param_2, 4, "Game.Money");
                    if (*(int *) (plVar5 + 1) == 1) {
                        if (*plVar5 < 1) {
                            pcVar9 = "must be greater than zero";
                            uVar7 = 4;
                        } else {
                            plVar6 = (longlong *) FUN_140056ab0(param_2, 5, "Game.Money");
                            if (*(int *) (plVar6 + 1) == 1) {
                                if ((*plVar6 == 0) || (*plVar5 <= *plVar6)) {
                                    *(longlong *) (param_1 + 0x10) = *plVar5;
                                    *(undefined4 *) (param_1 + 0x18) = *(undefined4 *) (plVar5 + 1);
                                    *(undefined4 *) (param_1 + 0x1c) = *(undefined4 *) ((longlong) plVar5 + 0xc);
                                    *(longlong *) (param_1 + 0x28) = *plVar6;
                                    *(undefined4 *) (param_1 + 0x30) = *(undefined4 *) (plVar6 + 1);
                                    *(undefined4 *) (param_1 + 0x34) = *(undefined4 *) ((longlong) plVar6 + 0xc);
                                    if ((longlong **) *pplVar4 != (longlong **) 0x0) {
                                        plVar8 = (longlong *) **pplVar4;
                                    }
                                    uVar7 = (**(code * *)(*plVar8 + 0x30))(plVar8);
                                    *(undefined8 *) (param_1 + 0x40) = uVar7;
                                    return 0;
                                }
                                pcVar9 = "must be greater than bid";
                            } else {
                                pcVar9 = "must be in credits";
                            }
                            uVar7 = 5;
                        }
                    } else {
                        pcVar9 = "must be in credits";
                        uVar7 = 4;
                    }
                    uVar7 = FUN_140056570(param_2, uVar7, pcVar9);
                    return uVar7;
                }
            }
        }
        uVar7 = FUN_140056570(param_2, 3, "item is not auctionable");
    }
    return uVar7;
}


undefined8 *FUN_14051a510(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if ((*(longlong *) (param_1 + 0x28) != 0) && (*(longlong **) (param_1 + 8) != (longlong *) 0x0)) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


undefined8 FUN_14051a590(longlong param_1, longlong param_2) {
    ulonglong uVar1;
    byte bVar2;
    int iVar3;
    longlong lVar4;
    undefined8 uVar5;
    longlong * plVar6;
    undefined8 * puVar7;
    undefined8 * puVar8;
    longlong * plVar9;
    longlong lVar10;
    ulonglong uVar11;
    undefined local_res8[8];

    lVar10 = DAT_140c63650;
    *(undefined8 *) (param_1 + 0x28) = 0;
    uVar1 = *(ulonglong *) (lVar10 + 0x300);
    uVar11 = 0;
    if (uVar1 != 0) {
        lVar10 = *(longlong *) (lVar10 + 0x2f8);
        do {
            if (*(longlong *) (*(longlong *) (lVar10 + uVar11 * 8) + 400) == param_2) {
                lVar10 = *(longlong *) (lVar10 + uVar11 * 8);
                goto LAB_14051a5eb;
            }
            uVar11 = (ulonglong) ((int) uVar11 + 1);
        } while (uVar11 < uVar1);
    }
    lVar10 = 0;
    LAB_14051a5eb:
    lVar4 = FUN_140056ab0(param_2, 3, "Game.ItemAuction");
    if (lVar4 == 0) {
        lVar4 = 0;
    } else {
        lVar4 = *(longlong *) (lVar4 + 8);
    }
    if (*(longlong *) (lVar4 + 0x10) != *(longlong *) (DAT_140c635f0 + 0x16a0)) {
        puVar8 = (undefined8 *) (*(longlong *) (*(longlong *) (lVar10 + 400) + 0x18) + 0x30);
        puVar7 = &DAT_140a12138;
        if (puVar8 < *(undefined8 **) (*(longlong *) (lVar10 + 400) + 0x10)) {
            puVar7 = puVar8;
        }
        if ((*(int *) (puVar7 + 1) == 0) || ((*(int *) (puVar7 + 1) == 1 && (*(int *) puVar7 == 0)))) {
            bVar2 = 0;
        } else {
            bVar2 = 1;
        }
        *(uint *) (param_1 + 0x30) = (uint) bVar2;
        if (bVar2 == 0) {
            plVar6 = (longlong *) (*(longlong *) (param_2 + 0x18) + 0x40);
            plVar9 = &DAT_140a12138;
            if (plVar6 < *(longlong **) (param_2 + 0x10)) {
                plVar9 = plVar6;
            }
            if ((*(int *) (plVar9 + 1) == 3) ||
                ((*(int *) (plVar9 + 1) == 4 &&
                  (iVar3 = FUN_14005ac80(*plVar9 + 0x20, local_res8), iVar3 != 0)))) {
                iVar3 = FUN_140056d60(param_2, 5);
                *(undefined8 *) (param_1 + 0x18) = 1;
                *(longlong *) (param_1 + 0x10) = (longlong) iVar3;
            } else {
                puVar7 = (undefined8 *) FUN_140056ab0(param_2, 5, "Game.Money");
                if (*(int *) (puVar7 + 1) != 1) {
                    uVar5 = FUN_140056570(param_2, 5, "bid must be in credits");
                    return uVar5;
                }
                *(undefined8 *) (param_1 + 0x10) = *puVar7;
                *(undefined4 *) (param_1 + 0x18) = *(undefined4 *) (puVar7 + 1);
                *(undefined4 *) (param_1 + 0x1c) = *(undefined4 *) ((longlong) puVar7 + 0xc);
            }
        }
        *(longlong *) (param_1 + 0x28) = lVar4;
        return 0;
    }
    uVar5 = FUN_140056570(param_2, 3, "cannot bid on your own order");
    return uVar5;
}


void FUN_14051a740(longlong param_1) {
    undefined8 * puVar1;
    undefined4 uVar2;

    if (*(longlong *) (param_1 + 0x10) != 0) {
        uVar2 = FUN_1406a0570();
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "MarketplaceCommoditiesSubmitted",
                      *(undefined8 *) (param_1 + 8), &DAT_140b6b934, uVar2);
        puVar1 = *(undefined8 **) (param_1 + 0x10);
        if (puVar1 != (undefined8 *) 0x0) {
            (**(code * *) * puVar1)(puVar1, 1);
        }
        *(undefined8 *) (param_1 + 0x10) = 0;
    }
    return;
}


undefined8 *FUN_14051b070(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if ((*(longlong *) (param_1 + 0x10) != 0) && (*(longlong **) (param_1 + 8) != (longlong *) 0x0)) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


undefined8 FUN_14051b0f0(longlong param_1, longlong param_2) {
    ulonglong uVar1;
    ulonglong uVar2;
    longlong lVar3;
    longlong lVar4;
    undefined8 * puVar5;
    undefined8 uVar6;
    uint uVar7;
    char *pcVar8;

    lVar3 = DAT_140c63650;
    *(undefined8 *) (param_1 + 0x10) = 0;
    uVar1 = *(ulonglong *) (lVar3 + 0x300);
    uVar7 = 0;
    if (uVar1 != 0) {
        uVar2 = 0;
        do {
            if (*(longlong *) (*(longlong *) (*(longlong *) (lVar3 + 0x2f8) + uVar2 * 8) + 400) == param_2)
                break;
            uVar7 = uVar7 + 1;
            uVar2 = (ulonglong) uVar7;
        } while (uVar2 < uVar1);
    }
    lVar3 = FUN_140056ab0(param_2, 3, "Game.CommodityOrder");
    if (lVar3 == 0) {
        lVar3 = 0;
    } else {
        lVar3 = *(longlong *) (lVar3 + 8);
    }
    if (*(longlong *) (lVar3 + 8) == 0) {
        if ((DAT_140dc4afc & 1) == 0) {
            DAT_140dc4afc = DAT_140dc4afc | 1;
            lVar4 = FUN_140200220();
            if (lVar4 == 0) {
                DAT_140dc4b00 = 200;
            } else {
                DAT_140dc4b00 = *(uint *) (lVar4 + 0xc);
            }
        }
        if (((*(uint *) (lVar3 + 0x14) != 0) && (*(uint *) (lVar3 + 0x14) <= DAT_140dc4b00)) &&
            (0 < *(longlong *) (lVar3 + 0x18))) {
            puVar5 = *(undefined8 **) (param_1 + 0x10);
            if (puVar5 != (undefined8 *) 0x0) {
                (**(code * *) * puVar5)(puVar5, 1);
            }
            puVar5 = (undefined8 *) FUN_14018b280(0x40);
            if (puVar5 == (undefined8 *) 0x0) {
                *(undefined8 *) (param_1 + 0x10) = 0;
                return 0;
            }
            *puVar5 = &PTR_FUN_140b6ffd0;
            puVar5[1] = *(undefined8 *) (lVar3 + 8);
            puVar5[2] = *(undefined8 *) (lVar3 + 0x10);
            puVar5[3] = *(undefined8 *) (lVar3 + 0x18);
            puVar5[4] = *(undefined8 *) (lVar3 + 0x20);
            puVar5[5] = *(undefined8 *) (lVar3 + 0x28);
            puVar5[6] = *(undefined8 *) (lVar3 + 0x30);
            puVar5[7] = *(undefined8 *) (lVar3 + 0x38);
            *(undefined8 **) (param_1 + 0x10) = puVar5;
            return 0;
        }
        pcVar8 = "Error posting: invalid commodity order";
    } else {
        pcVar8 = "Error posting: commodity order is already posted";
    }
    uVar6 = FUN_140056570(param_2, 3, pcVar8);
    return uVar6;
}


undefined8 *FUN_14051b2a0(undefined8 *param_1, ulonglong param_2) {
    undefined8 * puVar1;

    *param_1 = &PTR_FUN_140b6b190;
    puVar1 = (undefined8 *) param_1[2];
    if (puVar1 != (undefined8 *) 0x0) {
        (**(code * *) * puVar1)(puVar1, 1);
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14051b300(longlong param_1) {
    longlong lVar1;
    BOOL BVar2;
    HWND hWndNewOwner;
    HGLOBAL hMem;
    LPVOID pvVar3;

    if (*(longlong *) (param_1 + 0x18) == *(longlong *) (param_1 + 0x20)) {
        return;
    }
    hWndNewOwner = GetDesktopWindow();
    BVar2 = OpenClipboard(hWndNewOwner);
    if (BVar2 != 0) {
        EmptyClipboard();
        lVar1 = (*(longlong *) (param_1 + 0x20) - *(longlong *) (param_1 + 0x18) >> 1) * 2;
        hMem = GlobalAlloc(0x2002, lVar1 + 2);
        if ((hMem != (HGLOBAL) 0x0) && (pvVar3 = GlobalLock(hMem), pvVar3 != (LPVOID) 0x0)) {
            FUN_1407db590(pvVar3, *(undefined8 *) (param_1 + 0x18), lVar1);
            *(undefined2 *) (lVar1 + (longlong) pvVar3) = 0;
            GlobalUnlock(hMem);
            SetClipboardData(0xd, hMem);
        }
        CloseClipboard();
    }
    FUN_1400d4040(*(undefined8 *) (param_1 + 8), "StringCopiedToClipboard", *(undefined8 *) (param_1 + 8),
                  &DAT_140b7b700);
    return;
}


void FUN_14051b400(longlong param_1) {
    undefined8 uVar1;

    if (*(longlong *) (param_1 + 0x18) != *(longlong *) (param_1 + 0x20)) {
        uVar1 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                              L"UI\\ActionConfirmButton.xml", L"CopyToClipboardTooltip", 0, 0, 0xfffffffe);
        // WARNING: Could not recover jumptable at 0x00014051b45e. Too many branches
        // WARNING: Treating indirect jump as call
        (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), uVar1);
        return;
    }
    return;
}


undefined8 *FUN_14051b470(longlong param_1, undefined8 *param_2) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if ((*(longlong *) (param_1 + 0x18) != *(longlong *) (param_1 + 0x20)) &&
        (*(longlong **) (param_1 + 8) != (longlong *) 0x0)) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


undefined8 *FUN_14051b630(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b6b1e0;
    if (param_1[3] != 0) {
        FUN_14018b900(param_1[3], 0);
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14051b690(longlong param_1) {
    if (((*(int *) (DAT_140c635f0 + 0x1708) == 0) && (*(int *) (param_1 + 0x10) != 0)) &&
        (*(longlong *) (*(longlong *) (DAT_140c635f0 + 0x15d0) + 0xd8) != 0)) {
        FUN_140006f80();
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "AccountCREDDRedeemed", *(undefined8 *) (param_1 + 8),
                      &DAT_140b7b700);
        return;
    }
    return;
}


undefined8 *FUN_14051b960(longlong param_1, undefined8 *param_2, char param_3) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if (((param_3 != '\0') && (*(int *) (param_1 + 0x10) != 0)) &&
        (*(longlong **) (param_1 + 8) != (longlong *) 0x0)) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


void FUN_14051ba60(longlong param_1) {
    longlong lVar1;
    undefined local_res10[24];

    lVar1 = FUN_140245c00(*(undefined4 *) (DAT_140c65898 + 0x1ad0));
    if (lVar1 != 0) {
        local_res10[0] = 0;
        FUN_1403f4900(DAT_140c65898, 0x84d, local_res10);
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "CraftingBotched", *(undefined8 *) (param_1 + 8),
                      &DAT_140b7b700);
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14051be10(int *param_1, longlong param_2, longlong param_3, longlong param_4) {
    undefined4 uVar1;
    longlong lVar2;
    longlong * plVar3;
    undefined8 uVar4;
    undefined2 *puVar5;
    undefined8 * puVar6;
    int iVar7;
    undefined8 * puVar8;
    int iVar9;
    undefined auStack1560[32];
    longlong local_5f8;
    undefined4 local_5f0;
    undefined * *local_5e8[24];
    undefined local_528[16];
    undefined2 *local_518;
    longlong * local_508;
    longlong local_500;
    int local_4e8;
    longlong local_208;
    int local_70;
    int local_68;
    ulonglong local_48;

    local_48 = DAT_140c0f7b0 ^ (ulonglong) auStack1560;
    if (*param_1 == 0) {
        local_5f0 = 0xfffffffe;
        local_5f8 = param_3;
        lVar2 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                              L"UI\\ActionConfirmButton.xml", L"HeaderLine", 0);
        if (lVar2 == 0) goto LAB_14051c0d9;
        plVar3 = (longlong *) FUN_1400d3830(lVar2 + 0x228, L"Header");
        if (plVar3 != (longlong *) 0x0) {
            uVar4 = FUN_14034bdd0();
            (**(code * *)(*plVar3 + 0x50))(plVar3, uVar4);
        }
        *param_1 = 1;
    }
    FUN_14040fae0(&local_508);
    puVar8 = (undefined8 *) 0x0;
    if (local_68 < 7) {
        if (param_4 == 0) {
            if (local_68 != 0) {
                local_500 = 0;
                local_68 = 0;
            }
        } else {
            local_68 = 6;
            local_500 = param_4;
        }
    }
    if (local_70 == 0) {
        if ((local_68 == 0) || (local_500 == 0)) {
            iVar9 = 8;
        } else {
            iVar7 = 1;
            if (1 < *(int *) (local_500 + 0x158)) {
                iVar7 = *(int *) (local_500 + 0x158);
            }
            iVar9 = 7;
            if (iVar7 < 7) {
                iVar9 = iVar7;
            }
        }
    } else {
        iVar7 = 1;
        if (1 < local_4e8) {
            iVar7 = local_4e8;
        }
        iVar9 = 7;
        if (iVar7 < 7) {
            iVar9 = iVar7;
        }
    }
    FUN_1400b7210(local_5e8, &DAT_140b6b900);
    local_5e8[0] = &PTR_FUN_140b69230;
    local_518 = (undefined2 *) 0x0;
    local_528 = ZEXT816(0);
    puVar5 = (undefined2 *) FUN_14018b280(0x10);
    local_528 = CONCAT88(puVar5, puVar5);
    local_518 = puVar5 + 8;
    if (puVar5 != (undefined2 *) 0x0) {
        *puVar5 = 0;
    }
    puVar6 = (undefined8 *) FUN_14018b280(0x60);
    if (puVar6 != (undefined8 *) 0x0) {
        uVar1 = *(undefined4 *) (param_4 + 0x1dc);
        FUN_1400b6390(puVar6);
        *puVar6 = &PTR_FUN_140b69170;
        *(undefined4 *) (puVar6 + 0xb) = 1;
        FUN_1400b6d70(puVar6, L"name", uVar1);
        puVar8 = puVar6;
    }
    FUN_1400b7480(local_5e8, puVar8);
    uVar4 = *(undefined8 *) (param_2 + ((longlong) iVar9 + 0x1f) * 0x30);
    lVar2 = FUN_1400b7660(local_5e8);
    local_5f0 = 1;
    local_5f8 = param_2 + 0x750 + (longlong) iVar9 * 4;
    FUN_140514c10(param_3, *(undefined8 *) (lVar2 + 8), *(undefined8 *) (param_4 + 0x1e8), uVar4);
    if (local_528._0_8_ != 0) {
        FUN_14018b900(local_528._0_8_, 0);
    }
    FUN_1400b7390(local_5e8);
    if (local_508 != (longlong *) 0x0) {
        (**(code * *)(*local_508 + 8))();
        local_508 = (longlong *) 0x0;
    }
    if (local_208 != 0) {
        FUN_14018b900(local_208, 0);
    }
    LAB_14051c0d9:
    FUN_1407db4f0(local_48 ^ (ulonglong) auStack1560);
    return;
}


undefined8 *FUN_14051c750(longlong param_1, undefined8 *param_2, char param_3) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if ((param_3 != '\0') && (*(longlong **) (param_1 + 8) != (longlong *) 0x0)) {
        lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
        if (lVar3 != 0) {
            uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
            iVar1 = piVar5[3];
            iVar2 = piVar5[1];
            *(int *) param_2 = piVar5[2] - *piVar5;
            *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
            return param_2;
        }
    }
    *param_2 = 0;
    return param_2;
}


void FUN_14051c7d0(longlong param_1) {
    if (((*(longlong *) (DAT_140c65b98 + 0xd0) != 0) || (*(int *) (DAT_140c65b98 + 0xac) != 0)) ||
        (*(int *) (DAT_140c65b98 + 0xb4) != 0)) {
        FUN_1405c3500(param_1, *(undefined4 *) (param_1 + 0x10));
        FUN_1400d4040(*(undefined8 *) (param_1 + 8), "MatchingGameRespondedToPending",
                      *(undefined8 *) (param_1 + 8), &DAT_140b6b934, *(undefined4 *) (param_1 + 0x10));
    }
    return;
}


void FUN_14051c830(longlong param_1) {
    longlong lVar1;
    longlong lVar2;
    undefined8 uVar3;

    lVar1 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80, L"UI\\ActionConfirmButton.xml",
                          L"TooltipBase", 0, 0, 0xfffffffe);
    (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), lVar1);
    if (((lVar1 != 0) && (lVar2 = FUN_1400d3830(lVar1 + 0x228, L"ActionConfirm_LabelML"), lVar2 != 0))
        && (lVar1 = FUN_1400d3830(lVar1 + 0x228, L"Container"), lVar1 != 0)) {
        uVar3 = FUN_14034bdd0();
        FUN_140514f00(lVar2, lVar1, uVar3);
        uVar3 = FUN_14034bdd0();
        FUN_140514a30(lVar1, uVar3);
    }
    return;
}


undefined8 FUN_14051c920(longlong param_1, longlong param_2) {
    ulonglong uVar1;
    longlong lVar2;
    ulonglong uVar3;
    undefined8 * puVar4;
    undefined8 * puVar5;
    ulonglong uVar6;

    lVar2 = DAT_140c63650;
    uVar3 = 0;
    *(undefined4 *) (param_1 + 0x10) = 0;
    uVar1 = *(ulonglong *) (lVar2 + 0x300);
    if (uVar1 != 0) {
        lVar2 = *(longlong *) (lVar2 + 0x2f8);
        uVar6 = uVar3;
        do {
            if (*(longlong *) (*(longlong *) (lVar2 + uVar6 * 8) + 400) == param_2) {
                uVar3 = *(ulonglong *) (lVar2 + uVar6 * 8);
                break;
            }
            uVar6 = (ulonglong) ((int) uVar6 + 1);
        } while (uVar6 < uVar1);
    }
    puVar4 = (undefined8 *) (*(longlong *) (*(longlong *) (uVar3 + 400) + 0x18) + 0x20);
    puVar5 = &DAT_140a12138;
    if (puVar4 < *(undefined8 **) (*(longlong *) (uVar3 + 400) + 0x10)) {
        puVar5 = puVar4;
    }
    if ((*(int *) (puVar5 + 1) != 0) && ((*(int *) (puVar5 + 1) != 1 || (*(int *) puVar5 != 0)))) {
        *(undefined4 *) (param_1 + 0x10) = 1;
        return 0;
    }
    *(undefined4 *) (param_1 + 0x10) = 0;
    return 0;
}


void FUN_14051c9d0(longlong param_1) {
    if (*(longlong *) (param_1 + 0x10) != 0) {
        FUN_14073e640();
    }
    FUN_1400d4040(*(undefined8 *) (param_1 + 8), "ReportPlayerComplete", *(undefined8 *) (param_1 + 8),
                  &DAT_140b7b700);
    return;
}


void FUN_14051ca10(longlong *param_1) {
    longlong lVar1;
    float fVar2;

    if (((param_1[1] != 0) && (lVar1 = param_1[2], lVar1 != 0)) && (*(int *) (lVar1 + 0x60) != 0)) {
        *(undefined4 *) (lVar1 + 0x60) = 0;
        (**(code * *)(*param_1 + 0x48))();
        fVar2 = (float) FUN_1405257a0(param_1[1]);
        if (fVar2 != 0.0) {
            *(undefined4 *) (param_1[1] + 0x5c8) = DAT_140c636a8;
        }
    }
    return;
}


void FUN_14051ca70(undefined8 param_1, longlong param_2) {
    undefined4 * puVar1;
    longlong lVar2;
    undefined4 local_18;
    undefined4 local_14;
    int local_10;
    int local_c;

    if ((*(byte *) (param_2 + 0x1d) & 0x80) == 0) {
        puVar1 = (undefined4 *) FUN_1400cb0e0(param_2, &local_18, param_2 + 0x40);
        *(undefined4 *) (param_2 + 0x18c) = *puVar1;
        *(undefined4 *) (param_2 + 400) = puVar1[1];
        *(undefined4 *) (param_2 + 0x194) = puVar1[2];
        *(undefined4 *) (param_2 + 0x198) = puVar1[3];
        *(byte *) (param_2 + 0x1d) = *(byte *) (param_2 + 0x1d) | 0x80;
        lVar2 = param_2;
        do {
            if (*(int *) (lVar2 + 0x188) == 0) break;
            *(undefined4 *) (lVar2 + 0x188) = 0;
            lVar2 = *(longlong *) (lVar2 + 0x10);
        } while (lVar2 != 0);
    }
    local_18 = *(undefined4 *) (param_2 + 0x18c);
    local_14 = *(undefined4 *) (param_2 + 400);
    local_10 = *(int *) (param_2 + 0x194) + 0x32;
    local_c = *(int *) (param_2 + 0x198) + 0x82;
    FUN_1400cc7c0(param_2, &local_18);
    return;
}


void FUN_14051cb20(longlong param_1) {
    int iVar1;
    int iVar2;
    int iVar3;
    longlong lVar4;
    longlong lVar5;
    longlong lVar6;
    undefined8 uVar7;
    longlong * plVar8;
    longlong lVar9;
    undefined local_18[12];
    int local_c;

    lVar4 = DAT_140c65898;
    lVar9 = *(longlong *) (param_1 + 0x10);
    if ((lVar9 != 0) && (*(longlong *) (lVar9 + 0x28) != 0)) {
        *(undefined4 *) (lVar9 + 0x60) = 0;
        lVar4 = FUN_1400f52e0(*(longlong *) (lVar4 + 0x7340) + 0xa80, L"UI\\ActionConfirmButton.xml",
                              L"TooltipBase", 0, 0, 0xfffffffe);
        (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), lVar4);
        if ((lVar4 != 0) &&
            ((lVar5 = FUN_1400d3830(lVar4 + 0x228, L"ActionConfirm_LabelML"), lVar5 != 0 &&
                                                                              (lVar6 = FUN_1400d3830(lVar4 + 0x228,
                                                                                                     L"Container"),
                                                                                      lVar6 != 0)))) {
            uVar7 = FUN_14034bdd0();
            FUN_140514f00(lVar5, lVar6, uVar7);
            lVar5 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                                  L"UI\\ActionConfirmButton.xml", L"ContentLine", 0, lVar6, 0xfffffffe);
            if (lVar5 != 0) {
                plVar8 = (longlong *) FUN_1400d3830(lVar5 + 0x228, L"Label");
                if (plVar8 != (longlong *) 0x0) {
                    *(uint *) (plVar8 + 0x58) = *(uint *) (plVar8 + 0x58) & 0xffffffdb;
                    *(uint *) (plVar8 + 0x58) = *(uint *) (plVar8 + 0x58) | 0x10;
                    (**(code * *)(*plVar8 + 0x50))(plVar8, *(undefined8 *) (lVar9 + 0x28));
                    FUN_14051ca70();
                }
                FUN_14051ca70();
                FUN_14051ca70();
                iVar3 = FUN_1400cd4c0(lVar6, 0);
                lVar9 = FUN_1400cb3d0(lVar6, local_18);
                iVar1 = *(int *) (lVar9 + 0xc);
                iVar2 = *(int *) (lVar9 + 4);
                FUN_1400cb3d0();
                iVar3 = (local_c - (iVar1 - iVar2)) + iVar3;
                if (iVar3 < local_c) {
                    iVar3 = local_c;
                }
                local_c = iVar3;
                FUN_1400cc7c0(lVar4, local_18);
                FUN_14051ca70();
                FUN_1400cb690(lVar4);
                FUN_1400cb960(lVar4);
            }
        }
    }
    return;
}


undefined8 *FUN_14051cd20(longlong param_1, undefined8 *param_2, char param_3) {
    int iVar1;
    int iVar2;
    longlong lVar3;
    undefined8 uVar4;
    int *piVar5;
    undefined local_18[16];

    if (((param_3 != '\0') && (*(longlong *) (param_1 + 0x10) != 0)) &&
        (*(longlong *) (*(longlong *) (param_1 + 0x10) + 0x28) != 0)) {
        if (*(longlong **) (param_1 + 8) != (longlong *) 0x0) {
            lVar3 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
            if (lVar3 != 0) {
                uVar4 = (**(code * *)(**(longlong **) (param_1 + 8) + 0xa8))();
                piVar5 = (int *) FUN_1400cb3d0(uVar4, local_18);
                iVar1 = piVar5[3];
                iVar2 = piVar5[1];
                *(int *) param_2 = piVar5[2] - *piVar5;
                *(int *) ((longlong) param_2 + 4) = iVar1 - iVar2;
                return param_2;
            }
        }
        *param_2 = 0;
        return param_2;
    }
    *param_2 = 0;
    return param_2;
}


undefined8 FUN_14051cdc0(longlong param_1, longlong param_2) {
    undefined8 * puVar1;

    puVar1 = (undefined8 *) (*(longlong *) (param_2 + 0x18) + 0x20);
    if (((puVar1 < *(undefined8 **) (param_2 + 0x10)) && (puVar1 != &DAT_140a12138)) &&
        (*(int *) (*(longlong *) (param_2 + 0x18) + 0x28) == 0)) {
        if (*(longlong **) (param_1 + 0x10) != (longlong *) 0x0) {
            (**(code * *)(**(longlong **) (param_1 + 0x10) + 8))();
            *(undefined8 *) (param_1 + 0x10) = 0;
            return 0;
        }
    } else {
        puVar1 = (undefined8 *) FUN_140056ab0(param_2, 3, "Game.IncidentReport");
        if (puVar1 == (undefined8 *) 0x0) {
            puVar1 = (undefined8 *) 0x0;
        } else {
            puVar1 = (undefined8 *) *puVar1;
        }
        if (*(undefined8 **) (param_1 + 0x10) != puVar1) {
            if (puVar1 != (undefined8 *) 0x0) {
                (**(code * *) * puVar1)(puVar1);
            }
            if (*(longlong **) (param_1 + 0x10) != (longlong *) 0x0) {
                (**(code * *)(**(longlong **) (param_1 + 0x10) + 8))();
            }
            *(undefined8 **) (param_1 + 0x10) = puVar1;
        }
    }
    return 0;
}


undefined8 *FUN_14051ce70(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b6b050;
    if ((longlong *) param_1[2] != (longlong *) 0x0) {
        (**(code * *)(*(longlong *) param_1[2] + 8))();
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


undefined8 FUN_14051d200(longlong param_1, undefined8 param_2) {
    longlong lVar1;
    longlong lVar2;

    lVar2 = 0;
    *(undefined4 *) (param_1 + 0x10) = 0;
    lVar1 = FUN_140056ab0(param_2, 3, "Game.GenericMapNode");
    if (lVar1 != 0) {
        lVar2 = *(longlong *) (lVar1 + 8);
    }
    *(undefined4 *) (param_1 + 0x10) = **(undefined4 **) (lVar2 + 8);
    return 0;
}


undefined8 *FUN_14051d250(undefined8 *param_1, undefined8 param_2) {
    undefined2 *puVar1;

    param_1[1] = param_2;
    param_1[2] = 0xffffffffffffffff;
    *param_1 = &PTR_FUN_140b6af60;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10, 0);
    param_1[4] = puVar1;
    param_1[5] = puVar1;
    param_1[6] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    puVar1 = (undefined2 *) FUN_14018b280(0x10);
    param_1[8] = puVar1;
    param_1[9] = puVar1;
    param_1[10] = puVar1 + 8;
    if (puVar1 != (undefined2 *) 0x0) {
        *puVar1 = 0;
    }
    return param_1;
}


undefined8 *FUN_14051db90(undefined8 *param_1, ulonglong param_2) {
    *param_1 = &PTR_FUN_140b6af60;
    if (param_1[8] != 0) {
        FUN_14018b900(param_1[8], 0);
    }
    if (param_1[4] != 0) {
        FUN_14018b900(param_1[4], 0);
    }
    *param_1 = &PTR_FUN_140b6b770;
    if ((param_2 & 1) != 0) {
        FUN_14018b900(param_1, 0);
    }
    return param_1;
}


void FUN_14051dc00(longlong param_1) {
    longlong lVar1;
    undefined8 local_18;
    uint local_10;
    undefined4 uStack12;

    if (*(longlong *) (param_1 + 0x10) != 0) {
        lVar1 = FUN_1403acbb0(DAT_140c65898 + 0xa0);
        if (lVar1 != 0) {
            local_10 = *(uint *) (param_1 + 0x18);
            if ((7 < local_10) || (*(int *) (lVar1 + 0xbc + (ulonglong) local_10 * 4) == 0)) {
                local_18 = *(undefined8 *) (param_1 + 0x10);
                uStack12 = *(undefined4 *) (param_1 + 0x1c);
                FUN_1403f4900(DAT_140c65898, 0x85c, &local_18);
                FUN_1400d4040(*(undefined8 *) (param_1 + 8), "RuneSlotRerolled", *(undefined8 *) (param_1 + 8),
                              &DAT_140b6bf84, local_10, uStack12);
            }
        }
    }
    return;
}


undefined8 FUN_14051dcb0(longlong param_1) {
    int iVar1;
    longlong lVar2;
    undefined8 uVar3;

    uVar3 = 100;
    if (*(longlong *) (param_1 + 0x10) != 0) {
        lVar2 = FUN_1403acbb0(DAT_140c65898 + 0xa0);
        if (lVar2 != 0) {
            iVar1 = FUN_1405150d0(lVar2);
            if (1 < iVar1) {
                if (iVar1 < 4) {
                    uVar3 = 0xfa;
                } else if (iVar1 < 8) {
                    return 1000;
                }
            }
        }
    }
    return uVar3;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14051dd10(ulonglong param_1) {
    ulonglong uVar1;
    int iVar2;
    undefined4 uVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    undefined2 *puVar10;
    longlong lVar11;
    undefined8 uVar12;
    longlong lVar13;
    undefined uVar14;
    int iVar15;
    ulonglong local_res8;
    longlong local_res10;
    undefined8 local_2f8;
    undefined8 local_2f0;
    undefined8 local_2e8;
    undefined * *local_2d8[24];
    undefined local_218[16];
    undefined2 *local_208;
    undefined * *local_1f8[24];
    undefined local_138[16];
    undefined2 *local_128;
    undefined * *local_118[24];
    undefined local_58[16];
    undefined2 *local_48;

    if ((*(longlong *) (param_1 + 0x10) != 0) &&
        (local_res8 = param_1, lVar6 = FUN_1403acbb0(DAT_140c65898 + 0xa0), lVar6 != 0)) {
        uVar12 = 0;
        lVar7 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                              L"UI\\ActionConfirmButton.xml", L"TooltipBase", 0, 0, 0xfffffffe);
        local_res10 = lVar7;
        (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), lVar7);
        if ((lVar7 != 0) &&
            ((lVar8 = FUN_1400d3830(lVar7 + 0x228, L"ActionConfirm_LabelML"), lVar8 != 0 &&
                                                                              (lVar7 = FUN_1400d3830(lVar7 + 0x228,
                                                                                                     L"Container"),
                                                                                      lVar7 != 0)))) {
            uVar9 = FUN_14034bdd0();
            FUN_140514f00(lVar8, lVar7, uVar9);
            iVar2 = FUN_1405150d0(lVar6);
            FUN_1400b7210(local_1f8, &DAT_140b6b900);
            local_138 = ZEXT816(0);
            local_1f8[0] = &PTR_FUN_140b69230;
            local_128 = (undefined2 *) 0x0;
            puVar10 = (undefined2 *) FUN_14018b280(0x10);
            local_128 = puVar10 + 8;
            local_138 = CONCAT88(puVar10, puVar10);
            if (puVar10 != (undefined2 *) 0x0) {
                *puVar10 = 0;
            }
            lVar8 = FUN_14018b280(0x60);
            uVar9 = uVar12;
            if (lVar8 != 0) {
                uVar9 = FUN_1404ddaf0(lVar8, *(undefined4 *) (*(longlong *) (lVar6 + 0x40) + 0x1dc));
            }
            FUN_1400b7480(local_1f8, uVar9);
            lVar8 = *(longlong *) (param_1 + 8);
            lVar13 = *(longlong *) (lVar6 + 0x40);
            iVar15 = 1;
            if (*(int *) (lVar6 + 0x78) != 0) {
                iVar15 = *(int *) (lVar6 + 0x78);
            }
            uVar9 = *(undefined8 *) (lVar8 + ((longlong) iVar2 + 0x1f) * 0x30);
            lVar11 = FUN_1400b7660(local_1f8);
            FUN_140514c10(lVar7, *(undefined8 *) (lVar11 + 8), *(undefined8 *) (lVar13 + 0x1e8), uVar9,
                          lVar8 + 0x750 + (longlong) iVar2 * 4, iVar15);
            uVar9 = FUN_14034bdd0();
            FUN_1405147c0(lVar7, uVar9);
            uVar1 = local_res8;
            uVar14 = 0;
            if (*(longlong *) (lVar6 + 0x60) != 0) {
                lVar8 = *(longlong *) (lVar6 + 0x48);
                lVar13 = lVar8;
                if (lVar8 == 0) {
                    lVar13 = *(longlong *) (lVar6 + 0x40) + 8;
                }
                uVar4 = 8;
                if (*(uint *) (lVar13 + 0x130) < 8) {
                    uVar4 = *(uint *) (lVar13 + 0x130);
                }
                if (uVar4 != 0) {
                    if (lVar8 == 0) {
                        lVar8 = *(longlong *) (lVar6 + 0x40) + 8;
                    }
                    uVar4 = 8;
                    if (*(uint *) (lVar8 + 0x130) < 8) {
                        uVar4 = *(uint *) (lVar8 + 0x130);
                    }
                    if (*(uint *) (local_res8 + 0x18) < uVar4) {
                        uVar14 = *(undefined *)
                                ((ulonglong) *(uint *) (local_res8 + 0x18) + *(longlong *) (lVar6 + 0x60));
                    }
                }
            }
            iVar2 = FUN_140514660(uVar14);
            if (iVar2 != 0) {
                FUN_1400b7210(local_2d8, &DAT_140b6b900);
                local_2d8[0] = &PTR_FUN_140b69230;
                local_208 = (undefined2 *) 0x0;
                local_218 = ZEXT816(0);
                puVar10 = (undefined2 *) FUN_14018b280(0x10);
                local_218 = CONCAT88(puVar10, puVar10);
                local_208 = puVar10 + 8;
                if (puVar10 != (undefined2 *) 0x0) {
                    *puVar10 = 0;
                }
                lVar8 = FUN_14018b280(0x60);
                uVar9 = uVar12;
                if (lVar8 != 0) {
                    uVar3 = FUN_140514750(iVar2);
                    uVar9 = FUN_1404ddaf0(lVar8, uVar3);
                }
                FUN_1400b7480(local_2d8, uVar9);
                iVar15 = 1;
                if (*(int *) (lVar6 + 0x78) != 0) {
                    iVar15 = *(int *) (lVar6 + 0x78);
                }
                uVar4 = FUN_140142170(DAT_140c63678, L"UI_TextHoloBody");
                local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong) uVar4;
                lVar8 = FUN_1400b7660(local_2d8);
                uVar9 = FUN_1405146d0(iVar2);
                FUN_140514c10(lVar7, *(undefined8 *) (lVar8 + 8), uVar9, 0, &local_res8, iVar15);
                FUN_1401429a0(DAT_140c63678, local_res8 & 0xffffffff);
                if (local_218._0_8_ != 0) {
                    FUN_14018b900(local_218._0_8_, 0);
                }
                FUN_1400b7390(local_2d8);
            }
            uVar9 = FUN_14034bdd0();
            FUN_1405147c0(lVar7, uVar9);
            FUN_1400b7210(local_2d8, &DAT_140b6b900);
            local_2d8[0] = &PTR_FUN_140b69230;
            local_208 = (undefined2 *) 0x0;
            local_218 = ZEXT816(0);
            puVar10 = (undefined2 *) FUN_14018b280(0x10);
            local_218 = CONCAT88(puVar10, puVar10);
            local_208 = puVar10 + 8;
            if (puVar10 != (undefined2 *) 0x0) {
                *puVar10 = 0;
            }
            lVar8 = FUN_14018b280(0x60);
            if (lVar8 != 0) {
                uVar3 = FUN_140514750(*(undefined4 *) (uVar1 + 0x1c));
                uVar12 = FUN_1404ddaf0(lVar8, uVar3);
            }
            FUN_1400b7480(local_2d8, uVar12);
            iVar2 = 1;
            if (*(int *) (lVar6 + 0x78) != 0) {
                iVar2 = *(int *) (lVar6 + 0x78);
            }
            uVar4 = FUN_140142170(DAT_140c63678, L"UI_TextHoloBody");
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong) uVar4;
            lVar8 = FUN_1400b7660(local_2d8);
            uVar12 = FUN_1405146d0(*(undefined4 *) (uVar1 + 0x1c));
            FUN_140514c10(lVar7, *(undefined8 *) (lVar8 + 8), uVar12, 0, &local_res8, iVar2);
            FUN_1401429a0(DAT_140c63678, local_res8 & 0xffffffff);
            if (local_218._0_8_ != 0) {
                FUN_14018b900(local_218._0_8_, 0);
            }
            FUN_1400b7390(local_2d8);
            FUN_1400b7090(local_118, 0xafa93);
            local_118[0] = &PTR_FUN_140b69230;
            local_48 = (undefined2 *) 0x0;
            local_58 = ZEXT816(0);
            puVar10 = (undefined2 *) FUN_14018b280(0x10);
            local_48 = puVar10 + 8;
            local_58 = CONCAT88(puVar10, puVar10);
            if (puVar10 != (undefined2 *) 0x0) {
                *puVar10 = 0;
            }
            lVar8 = *(longlong *) (lVar6 + 0x48);
            local_2f8 = 0;
            local_2f0 = 1;
            local_2e8 = 0;
            lVar13 = lVar8;
            if (lVar8 == 0) {
                lVar13 = *(longlong *) (lVar6 + 0x40) + 8;
            }
            if (lVar13 != 0) {
                if (lVar8 == 0) {
                    lVar8 = *(longlong *) (lVar6 + 0x40) + 8;
                }
                iVar2 = FUN_140514170(lVar8, &local_2f8, *(int *) (uVar1 + 0x1c) != 0);
                if (iVar2 != 0) {
                    lVar6 = FUN_1400b7660(local_118);
                    FUN_140514ab0(lVar7, *(undefined8 *) (lVar6 + 8), &local_2f8);
                }
            }
            iVar5 = FUN_1400cd4c0(lVar7, 0);
            lVar7 = FUN_1400cb3d0(lVar7, &local_2f8);
            lVar6 = local_res10;
            iVar2 = *(int *) (lVar7 + 0xc);
            iVar15 = *(int *) (lVar7 + 4);
            FUN_1400cb3d0();
            uVar4 = (local_2f0._4_4_ - (iVar2 - iVar15)) + iVar5;
            if ((int) uVar4 < (int) local_2f0._4_4_) {
                uVar4 = local_2f0._4_4_;
            }
            local_2f0 = local_2f0 & 0xffffffff | (ulonglong) uVar4 << 0x20;
            FUN_1400cc7c0(lVar6, &local_2f8);
            FUN_1400cb690(lVar6);
            FUN_1400cb960(lVar6);
            if (local_58._0_8_ != 0) {
                FUN_14018b900(local_58._0_8_, 0);
            }
            FUN_1400b7390(local_118);
            if (local_138._0_8_ != 0) {
                FUN_14018b900(local_138._0_8_, 0);
            }
            FUN_1400b7390(local_1f8);
        }
    }
    return;
}


undefined8 FUN_14051e420(longlong param_1, longlong param_2) {
    longlong * plVar1;
    longlong lVar2;
    char cVar3;
    int iVar4;
    undefined4 uVar5;
    undefined8 * puVar6;
    longlong * *pplVar7;
    undefined8 uVar8;
    longlong * plVar9;
    longlong * plVar10;
    longlong * plVar11;

    lVar2 = DAT_140c63650;
    plVar10 = (longlong *) 0x0;
    *(undefined8 *) (param_1 + 0x10) = 0;
    plVar1 = *(longlong **) (lVar2 + 0x300);
    plVar9 = plVar10;
    if (plVar1 != (longlong *) 0x0) {
        lVar2 = *(longlong *) (lVar2 + 0x2f8);
        plVar11 = plVar10;
        do {
            if (*(longlong *) (*(longlong *) (lVar2 + (longlong) plVar11 * 8) + 400) == param_2) {
                plVar9 = *(longlong **) (lVar2 + (longlong) plVar11 * 8);
                break;
            }
            plVar11 = (longlong *) (ulonglong) ((int) plVar11 + 1);
        } while (plVar11 < plVar1);
    }
    puVar6 = (undefined8 *) (*(longlong *) (param_2 + 0x18) + 0x20);
    if (((((puVar6 < *(undefined8 **) (param_2 + 0x10)) && (puVar6 != &DAT_140a12138)) &&
          (*(int *) (*(longlong *) (param_2 + 0x18) + 0x28) == 0)) ||
         ((pplVar7 = (longlong **) FUN_140056ab0(param_2, 3, "Game.ItemData"), pplVar7 == (longlong **) 0x0
                                                                               || (plVar1 = *pplVar7, plVar1 ==
                                                                                                      (longlong *) 0x0)))) ||
        ((*plVar1 == 0 || ((*(int *) (plVar1 + 0x94) == 0 || (plVar1[1] == 0)))))) {
        uVar8 = FUN_140056570(param_2, 3, "must be a valid item");
    } else {
        iVar4 = FUN_1400f26a0(plVar9 + 0x30, 4);
        *(int *) (param_1 + 0x18) = iVar4 + -1;
        uVar5 = FUN_1400f26a0(plVar9 + 0x30, 5);
        *(undefined4 *) (param_1 + 0x1c) = uVar5;
        cVar3 = FUN_14040f320(uVar5);
        if (5 < (byte) (cVar3 - 1U)) {
            *(undefined4 *) (param_1 + 0x1c) = 0;
        }
        if ((longlong **) *pplVar7 != (longlong **) 0x0) {
            plVar10 = (longlong *) **pplVar7;
        }
        uVar8 = (**(code * *)(*plVar10 + 0x30))(plVar10);
        *(undefined8 *) (param_1 + 0x10) = uVar8;
        uVar8 = 0;
    }
    return uVar8;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14051e580(longlong param_1) {
    longlong lVar1;
    undefined8 local_28;
    uint local_20;
    undefined4 uStack28;
    ulonglong local_18;

    if (*(longlong *) (param_1 + 0x10) != 0) {
        lVar1 = FUN_1403acbb0(DAT_140c65898 + 0xa0);
        if (lVar1 != 0) {
            local_20 = *(uint *) (param_1 + 0x18);
            if ((local_20 < 8) && (*(int *) (lVar1 + 0xbc + (ulonglong) local_20 * 4) != 0)) {
                local_28 = *(undefined8 *) (param_1 + 0x10);
                uStack28 = *(undefined4 *) (param_1 + 0x1c);
                local_18 = (ulonglong) *(uint *) (param_1 + 0x20);
                FUN_1403f4900(DAT_140c65898, 0x85a, &local_28);
                FUN_1400d4040(*(undefined8 *) (param_1 + 8), "RuneSlotCleared", *(undefined8 *) (param_1 + 8),
                              &DAT_140b6bee8, local_20, uStack28, (undefined4) local_18);
            }
        }
    }
    return;
}


undefined8 FUN_14051ebd0(longlong param_1, longlong param_2) {
    longlong lVar1;
    byte bVar2;
    int iVar3;
    undefined8 * puVar4;
    longlong * *pplVar5;
    undefined8 uVar6;
    longlong * plVar7;
    undefined8 * puVar8;
    longlong * plVar9;
    longlong * plVar10;
    longlong * plVar11;

    lVar1 = DAT_140c63650;
    plVar10 = (longlong *) 0x0;
    *(undefined8 *) (param_1 + 0x10) = 0;
    plVar9 = *(longlong **) (lVar1 + 0x300);
    bVar2 = 0;
    plVar7 = plVar10;
    if (plVar9 != (longlong *) 0x0) {
        lVar1 = *(longlong *) (lVar1 + 0x2f8);
        plVar11 = plVar10;
        do {
            if (*(longlong *) (*(longlong *) (lVar1 + (longlong) plVar11 * 8) + 400) == param_2) {
                plVar7 = *(longlong **) (lVar1 + (longlong) plVar11 * 8);
                break;
            }
            plVar11 = (longlong *) (ulonglong) ((int) plVar11 + 1);
        } while (plVar11 < plVar9);
    }
    puVar4 = (undefined8 *) (*(longlong *) (param_2 + 0x18) + 0x20);
    if (((((puVar4 < *(undefined8 **) (param_2 + 0x10)) && (puVar4 != &DAT_140a12138)) &&
          (*(int *) (*(longlong *) (param_2 + 0x18) + 0x28) == 0)) ||
         ((pplVar5 = (longlong **) FUN_140056ab0(param_2, 3, "Game.ItemData"), pplVar5 == (longlong **) 0x0
                                                                               || (plVar9 = *pplVar5, plVar9 ==
                                                                                                      (longlong *) 0x0)))) ||
        ((*plVar9 == 0 || ((*(int *) (plVar9 + 0x94) == 0 || (plVar9[1] == 0)))))) {
        uVar6 = FUN_140056570(param_2, 3, "must be a valid item");
    } else {
        iVar3 = FUN_1400f26a0(plVar7 + 0x30, 4);
        *(int *) (param_1 + 0x18) = iVar3 + -1;
        puVar8 = (undefined8 *) (*(longlong *) (plVar7[0x32] + 0x18) + 0x40);
        puVar4 = &DAT_140a12138;
        if (puVar8 < *(undefined8 **) (plVar7[0x32] + 0x10)) {
            puVar4 = puVar8;
        }
        if ((*(int *) (puVar4 + 1) != 0) && ((*(int *) (puVar4 + 1) != 1 || (*(int *) puVar4 != 0)))) {
            bVar2 = 1;
        }
        *(uint *) (param_1 + 0x1c) = (uint) bVar2;
        puVar8 = (undefined8 *) (*(longlong *) (plVar7[0x32] + 0x18) + 0x50);
        puVar4 = &DAT_140a12138;
        if (puVar8 < *(undefined8 **) (plVar7[0x32] + 0x10)) {
            puVar4 = puVar8;
        }
        if ((*(int *) (puVar4 + 1) == 0) ||
            ((plVar9 = (longlong *) 0x1, *(int *) (puVar4 + 1) == 1 && (*(int *) puVar4 == 0)))) {
            plVar9 = plVar10;
        }
        *(uint *) (param_1 + 0x20) = (uint) ((int) plVar9 != 0);
        if ((longlong **) *pplVar5 != (longlong **) 0x0) {
            plVar10 = (longlong *) **pplVar5;
        }
        uVar6 = (**(code * *)(*plVar10 + 0x30))(plVar10);
        *(undefined8 *) (param_1 + 0x10) = uVar6;
        uVar6 = 0;
    }
    return uVar6;
}


void FUN_14051ed80(longlong param_1) {
    char cVar1;
    longlong lVar2;
    undefined4 uVar3;
    undefined8 local_18;
    uint local_10;
    undefined4 uStack12;

    if (*(longlong *) (param_1 + 0x10) != 0) {
        lVar2 = FUN_1403acbb0();
        if (lVar2 != 0) {
            uStack12 = *(undefined4 *) (param_1 + 0x18);
            local_18 = *(undefined8 *) (param_1 + 0x10);
            local_10 = 0;
            cVar1 = FUN_14040f320();
            local_10 = (uint) ((byte) (cVar1 - 1U) < 6);
            FUN_1403f4900(DAT_140c65898, 0x859, &local_18);
            uVar3 = 0;
            if (local_10 != 0) {
                uVar3 = uStack12;
            }
            FUN_1400d4040(*(undefined8 *) (param_1 + 8), "RuneSlotAdded", *(undefined8 *) (param_1 + 8),
                          &DAT_140b6b8f8, uVar3);
        }
    }
    return;
}



// WARNING: Could not reconcile some variable overlaps

void FUN_14051ee30(ulonglong param_1) {
    ulonglong uVar1;
    int iVar2;
    undefined4 uVar3;
    uint uVar4;
    int iVar5;
    longlong lVar6;
    longlong lVar7;
    longlong lVar8;
    undefined8 uVar9;
    undefined2 *puVar10;
    longlong lVar11;
    undefined8 uVar12;
    longlong lVar13;
    int iVar14;
    ulonglong local_res8;
    longlong local_res10;
    undefined8 local_218;
    undefined8 local_210;
    undefined8 local_208;
    undefined * *local_1f8[24];
    undefined local_138[16];
    undefined2 *local_128;
    undefined * *local_118[24];
    undefined local_58[16];
    undefined2 *local_48;

    if ((*(longlong *) (param_1 + 0x10) != 0) &&
        (local_res8 = param_1, lVar6 = FUN_1403acbb0(DAT_140c65898 + 0xa0), lVar6 != 0)) {
        uVar12 = 0;
        lVar7 = FUN_1400f52e0(*(longlong *) (DAT_140c65898 + 0x7340) + 0xa80,
                              L"UI\\ActionConfirmButton.xml", L"TooltipBase", 0, 0, 0xfffffffe);
        local_res10 = lVar7;
        (**(code * *)(**(longlong **) (param_1 + 8) + 0x208))(*(longlong **) (param_1 + 8), lVar7);
        if ((lVar7 != 0) &&
            ((lVar8 = FUN_1400d3830(lVar7 + 0x228, L"ActionConfirm_LabelML"), lVar8 != 0 &&
                                                                              (lVar7 = FUN_1400d3830(lVar7 + 0x228,
                                                                                                     L"Container"),
                                                                                      lVar7 != 0)))) {
            uVar9 = FUN_14034bdd0();
            FUN_140514f00(lVar8, lVar7, uVar9);
            iVar2 = FUN_1405150d0(lVar6);
            FUN_1400b7210(local_1f8, &DAT_140b6b900);
            local_138 = ZEXT816(0);
            local_1f8[0] = &PTR_FUN_140b69230;
            local_128 = (undefined2 *) 0x0;
            puVar10 = (undefined2 *) FUN_14018b280(0x10);
            local_128 = puVar10 + 8;
            local_138 = CONCAT88(puVar10, puVar10);
            if (puVar10 != (undefined2 *) 0x0) {
                *puVar10 = 0;
            }
            lVar8 = FUN_14018b280(0x60);
            uVar9 = uVar12;
            if (lVar8 != 0) {
                uVar9 = FUN_1404ddaf0(lVar8, *(undefined4 *) (*(longlong *) (lVar6 + 0x40) + 0x1dc));
            }
            FUN_1400b7480(local_1f8, uVar9);
            lVar8 = *(longlong *) (param_1 + 8);
            lVar13 = *(longlong *) (lVar6 + 0x40);
            iVar14 = 1;
            if (*(int *) (lVar6 + 0x78) != 0) {
                iVar14 = *(int *) (lVar6 + 0x78);
            }
            uVar9 = *(undefined8 *) (lVar8 + ((longlong) iVar2 + 0x1f) * 0x30);
            lVar11 = FUN_1400b7660(local_1f8);
            FUN_140514c10(lVar7, *(undefined8 *) (lVar11 + 8), *(undefined8 *) (lVar13 + 0x1e8), uVar9,
                          lVar8 + 0x750 + (longlong) iVar2 * 4, iVar14);
            if (local_138._0_8_ != 0) {
                FUN_14018b900(local_138._0_8_, 0);
            }
            FUN_1400b7390(local_1f8);
            uVar9 = FUN_14034bdd0();
            FUN_1405147c0(lVar7, uVar9);
            FUN_1400b7210(local_1f8, &DAT_140b6b900);
            local_1f8[0] = &PTR_FUN_140b69230;
            local_128 = (undefined2 *) 0x0;
            local_138 = ZEXT816(0);
            puVar10 = (undefined2 *) FUN_14018b280(0x10);
            local_138 = CONCAT88(puVar10, puVar10);
            local_128 = puVar10 + 8;
            if (puVar10 != (undefined2 *) 0x0) {
                *puVar10 = 0;
            }
            lVar8 = FUN_14018b280(0x60);
            uVar1 = local_res8;
            if (lVar8 != 0) {
                uVar3 = FUN_140514750(*(undefined4 *) (local_res8 + 0x18));
                uVar12 = FUN_1404ddaf0(lVar8, uVar3);
            }
            FUN_1400b7480(local_1f8, uVar12);
            iVar2 = 1;
            if (*(int *) (lVar6 + 0x78) != 0) {
                iVar2 = *(int *) (lVar6 + 0x78);
            }
            uVar4 = FUN_140142170(DAT_140c63678, L"UI_TextHoloBody");
            local_res8 = local_res8 & 0xffffffff00000000 | (ulonglong) uVar4;
            lVar8 = FUN_1400b7660(local_1f8);
            uVar12 = FUN_1405146d0(*(undefined4 *) (uVar1 + 0x18));
            FUN_140514c10(lVar7, *(undefined8 *) (lVar8 + 8), uVar12, 0, &local_res8, iVar2);
            FUN_1401429a0(DAT_140c63678, local_res8 & 0xffffffff);
            if (local_138._0_8_ != 0) {
                FUN_14018b900(local_138._0_8_, 0);
            }
            FUN_1400b7390(local_1f8);
            FUN_1400b7090(local_118, 0xafa93);
            local_118[0] = &PTR_FUN_140b69230;
            local_48 = (undefined2 *) 0x0;
            local_58 = ZEXT816(0);
            puVar10 = (undefined2 *) FUN_14018b280(0x10);
            local_58 = CONCAT88(puVar10, puVar10);
            local_48 = puVar10 + 8;
            if (puVar10 != (undefined2 *) 0x0) {
                *puVar10 = 0;
            }
            lVar8 = *(longlong *) (lVar6 + 0x48);
            local_218 = 0;
            local_210 = 1;
            local_208 = 0;
            lVar13 = lVar8;
            if (lVar8 == 0) {
                lVar13 = *(longlong *) (lVar6 + 0x40) + 8;
            }
            if (lVar13 != 0) {
                if (lVar8 == 0) {
                    lVar8 = *(longlong *) (lVar6 + 0x40) + 8;
                }
                iVar2 = FUN_140513f30(lVar8, &local_218, *(int *) (uVar1 + 0x18) != 0);
                if (iVar2 != 0) {
                    lVar6 = FUN_1400b7660(local_118);
                    FUN_140514ab0(lVar7, *(undefined8 *) (lVar6 + 8), &local_218);
                }
            }
            iVar5 = FUN_1400cd4c0(lVar7, 0);
            lVar7 = FUN_1400cb3d0(lVar7, &local_218);
            lVar6 = local_res10;
            iVar2 = *(int *) (lVar7 + 0xc);
            iVar14 = *(int *) (lVar7 + 4);
            FUN_1400cb3d0();
            uVar4 = (local_210._4_4_ - (iVar2 - iVar14)) + iVar5;
            if ((int) uVar4 < (int) local_210._4_4_) {
                uVar4 = local_210._4_4_;
            }
            local_210 = local_210 & 0xffffffff | (ulonglong) uVar4 << 0x20;
            FUN_1400cc7c0(lVar6, &local_218);
            FUN_1400cb690(lVar6);
            FUN_1400cb960(lVar6);
            if (local_58._0_8_ != 0) {
                FUN_14018b900(local_58._0_8_, 0);
            }
            FUN_1400b7390(local_118);
        }
    }
    return;
}
